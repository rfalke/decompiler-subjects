
void fun_8048280(int32_t a1, int32_t a2);

void fun_80482b4();

void frame_dummy();

void __do_global_ctors_aux();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_8048280(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0xf494 - 4)) {
        fun_80482b4();
    }
    frame_dummy();
    __do_global_ctors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048280(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0xf494 - 4)) {
        fun_80482b4();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x80482ba;

void fun_80482b4() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void __libc_start_main(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        __libc_start_main(0x8057644);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x8057634);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t __libc_start_main = 0x80482ca;

void fun_80482c4(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

struct s1 {
    struct s1* f0;
    signed char[8] pad12;
    int16_t f12;
    signed char[20] pad34;
    struct s1* f34;
};

struct s1* g1000;

struct s1* g1004;

struct s1* g1008;

int32_t g100c;

int32_t g1010;

int32_t g1014;

int32_t g1018;

void* g2050;

struct s1* g2000;

struct s1* g2004;

struct s1* g2008;

int32_t g200c;

int32_t g2010;

int32_t g2014;

int32_t g2018;

unsigned char g2200;

unsigned char g2201;

unsigned char g2202;

unsigned char g2203;

unsigned char g2204;

unsigned char g2205;

unsigned char g2206;

unsigned char g2207;

unsigned char g2208;

unsigned char g2209;

unsigned char g220a;

unsigned char g220b;

unsigned char g220c;

unsigned char g220d;

unsigned char g220e;

unsigned char g220f;

int16_t g2100;

int32_t g2020;

int32_t cmpxchg1_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    signed char tmp8_13;
    void* eax14;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&ebx4) == *reinterpret_cast<signed char*>(&eax3));
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags1) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    less_or_equal11 = reinterpret_cast<uint1_t>(less10 | *reinterpret_cast<uint1_t*>(&flags1));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags1) | *reinterpret_cast<uint1_t*>(&flags1));
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        tmp8_13 = *reinterpret_cast<signed char*>(&ebx4);
        *reinterpret_cast<signed char*>(&ebx4) = *reinterpret_cast<signed char*>(&eax3);
        *reinterpret_cast<signed char*>(&eax3) = tmp8_13;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax14 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax14) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmpxchg1_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    struct s1* ebx5;
    uint1_t less6;
    uint1_t less_or_equal7;
    uint1_t below_or_equal8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(2);
    ebx5 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less6 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal7 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(less6));
    below_or_equal8 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(*reinterpret_cast<uint1_t*>(&flags2)));
    if (0) {
        *reinterpret_cast<signed char*>(&ebx5) = 2;
        *reinterpret_cast<signed char*>(&eax4) = 3;
    }
    g2000 = eax4;
    g2004 = ebx5;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = 0;
    g2205 = 1;
    g2206 = below_or_equal8;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal8);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less6;
    g220d = reinterpret_cast<uint1_t>(!less6);
    g220e = less_or_equal7;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal7);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg1_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    struct s1* ebx5;
    uint1_t less6;
    uint1_t less_or_equal7;
    uint1_t below_or_equal8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0xa3b17984);
    ebx5 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less6 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal7 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(less6));
    below_or_equal8 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(*reinterpret_cast<uint1_t*>(&flags2)));
    if (0) {
        *reinterpret_cast<signed char*>(&ebx5) = 0x84;
        *reinterpret_cast<signed char*>(&eax4) = -41;
    }
    g2000 = eax4;
    g2004 = ebx5;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = 0;
    g2205 = 1;
    g2206 = below_or_equal8;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal8);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less6;
    g220d = reinterpret_cast<uint1_t>(!less6);
    g220e = less_or_equal7;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal7);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg1_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    struct s1* ebx5;
    uint1_t less6;
    uint1_t less_or_equal7;
    uint1_t below_or_equal8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    ebx5 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less6 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal7 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(less6));
    below_or_equal8 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(*reinterpret_cast<uint1_t*>(&flags2)));
    if (0) {
        *reinterpret_cast<signed char*>(&ebx5) = -24;
        *reinterpret_cast<signed char*>(&eax4) = -61;
    }
    g2000 = eax4;
    g2004 = ebx5;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = 0;
    g2205 = 1;
    g2206 = below_or_equal8;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal8);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less6;
    g220d = reinterpret_cast<uint1_t>(!less6);
    g220e = less_or_equal7;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal7);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmpxchg2_mv_plain() {
    int16_t bx1;
    int16_t ax2;

    if (bx1 == ax2) {
    }
    return 0;
}

int32_t cmpxchg2_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    int16_t tmp16_13;
    void* eax14;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&ebx4) == *reinterpret_cast<int16_t*>(&eax3));
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags1) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    less_or_equal11 = reinterpret_cast<uint1_t>(less10 | *reinterpret_cast<uint1_t*>(&flags1));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags1) | *reinterpret_cast<uint1_t*>(&flags1));
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        tmp16_13 = *reinterpret_cast<int16_t*>(&ebx4);
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
        *reinterpret_cast<int16_t*>(&eax3) = tmp16_13;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax14 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax14) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmpxchg2_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    struct s1* ebx5;
    uint1_t less6;
    uint1_t less_or_equal7;
    uint1_t below_or_equal8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(2);
    ebx5 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less6 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal7 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(less6));
    below_or_equal8 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(*reinterpret_cast<uint1_t*>(&flags2)));
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx5) = 2;
        *reinterpret_cast<int16_t*>(&eax4) = 3;
    }
    g2000 = eax4;
    g2004 = ebx5;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = 0;
    g2205 = 1;
    g2206 = below_or_equal8;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal8);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less6;
    g220d = reinterpret_cast<uint1_t>(!less6);
    g220e = less_or_equal7;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal7);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg2_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    struct s1* ebx5;
    uint1_t less6;
    uint1_t less_or_equal7;
    uint1_t below_or_equal8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0xa3b17984);
    ebx5 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less6 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal7 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(less6));
    below_or_equal8 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(*reinterpret_cast<uint1_t*>(&flags2)));
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx5) = 0x7984;
        *reinterpret_cast<int16_t*>(&eax4) = 0x1ad7;
    }
    g2000 = eax4;
    g2004 = ebx5;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = 0;
    g2205 = 1;
    g2206 = below_or_equal8;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal8);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less6;
    g220d = reinterpret_cast<uint1_t>(!less6);
    g220e = less_or_equal7;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal7);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg2_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    struct s1* ebx5;
    uint1_t less6;
    uint1_t less_or_equal7;
    uint1_t below_or_equal8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    ebx5 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less6 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal7 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(less6));
    below_or_equal8 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(*reinterpret_cast<uint1_t*>(&flags2)));
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx5) = 0xc0e8;
        *reinterpret_cast<int16_t*>(&eax4) = 0x81c3;
    }
    g2000 = eax4;
    g2004 = ebx5;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = 0;
    g2205 = 1;
    g2206 = below_or_equal8;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal8);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less6;
    g220d = reinterpret_cast<uint1_t>(!less6);
    g220e = less_or_equal7;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal7);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmpxchg3_plain(int32_t ecx) {
    int32_t ebx2;

    if (ecx == ebx2) {
    }
    return 0;
}

int32_t cmpxchg3_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    struct s1* tmp32_13;
    void* eax14;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(ecx5 == ebx4);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags1) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    less_or_equal11 = reinterpret_cast<uint1_t>(less10 | *reinterpret_cast<uint1_t*>(&flags1));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags1) | *reinterpret_cast<uint1_t*>(&flags1));
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        tmp32_13 = ecx5;
        ecx5 = ebx4;
        ebx4 = tmp32_13;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax14 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax14) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmpxchg3_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    struct s1* ecx5;
    uint1_t less6;
    uint1_t less_or_equal7;
    uint1_t below_or_equal8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    ecx5 = reinterpret_cast<struct s1*>(4);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less6 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal7 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(less6));
    below_or_equal8 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(*reinterpret_cast<uint1_t*>(&flags2)));
    if (0) {
        ecx5 = reinterpret_cast<struct s1*>(3);
        ebx4 = reinterpret_cast<struct s1*>(4);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = 0;
    g2205 = 1;
    g2206 = below_or_equal8;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal8);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less6;
    g220d = reinterpret_cast<uint1_t>(!less6);
    g220e = less_or_equal7;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal7);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg3_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    struct s1* ecx5;
    uint1_t less6;
    uint1_t less_or_equal7;
    uint1_t below_or_equal8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    ecx5 = reinterpret_cast<struct s1*>(0x46685248);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less6 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal7 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(less6));
    below_or_equal8 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(*reinterpret_cast<uint1_t*>(&flags2)));
    if (0) {
        ecx5 = reinterpret_cast<struct s1*>(0x6671ad7);
        ebx4 = reinterpret_cast<struct s1*>(0x46685248);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = 0;
    g2205 = 1;
    g2206 = below_or_equal8;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal8);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less6;
    g220d = reinterpret_cast<uint1_t>(!less6);
    g220e = less_or_equal7;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal7);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg3_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    struct s1* ecx5;
    uint1_t less6;
    uint1_t less_or_equal7;
    uint1_t below_or_equal8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    ecx5 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less6 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal7 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(less6));
    below_or_equal8 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(*reinterpret_cast<uint1_t*>(&flags2)));
    if (0) {
        ecx5 = reinterpret_cast<struct s1*>(0x496e81c3);
        ebx4 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = 0;
    g2205 = 1;
    g2206 = below_or_equal8;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal8);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less6;
    g220d = reinterpret_cast<uint1_t>(!less6);
    g220e = less_or_equal7;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal7);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmpxchg4_mv_plain() {
    int32_t* ebx1;
    int32_t eax2;
    int32_t* ebx3;
    int32_t eax4;

    if (*ebx1 == eax2) {
        *ebx3 = eax4;
    }
    return 0;
}

int32_t cmpxchg4_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    struct s1* tmp32_13;
    void* eax14;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(ebx4->f0 == eax3);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags1) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    less_or_equal11 = reinterpret_cast<uint1_t>(less10 | *reinterpret_cast<uint1_t*>(&flags1));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags1) | *reinterpret_cast<uint1_t*>(&flags1));
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        tmp32_13 = ebx4->f0;
        ebx4->f0 = eax3;
        eax3 = tmp32_13;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax14 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax14) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

struct s1* g3;

void cmpxchg4_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    uint1_t less5;
    uint1_t less_or_equal6;
    uint1_t below_or_equal7;
    struct s1* tmp32_8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(2);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = reinterpret_cast<uint1_t>(g3 == 2);
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less5 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal6 = reinterpret_cast<uint1_t>(less5 | *reinterpret_cast<uint1_t*>(&flags2));
    below_or_equal7 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) | *reinterpret_cast<uint1_t*>(&flags2));
    if (*reinterpret_cast<uint1_t*>(&flags2)) {
        tmp32_8 = g3;
        g3 = reinterpret_cast<struct s1*>(2);
        eax4 = tmp32_8;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = *reinterpret_cast<uint1_t*>(&flags2);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2206 = below_or_equal7;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal7);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less5;
    g220d = reinterpret_cast<uint1_t>(!less5);
    g220e = less_or_equal6;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal6);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

struct s1* g6671ad7;

void cmpxchg4_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    uint1_t less5;
    uint1_t less_or_equal6;
    uint1_t below_or_equal7;
    struct s1* tmp32_8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = reinterpret_cast<uint1_t>(g6671ad7 == 0xa3b17984);
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less5 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal6 = reinterpret_cast<uint1_t>(less5 | *reinterpret_cast<uint1_t*>(&flags2));
    below_or_equal7 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) | *reinterpret_cast<uint1_t*>(&flags2));
    if (*reinterpret_cast<uint1_t*>(&flags2)) {
        tmp32_8 = g6671ad7;
        g6671ad7 = reinterpret_cast<struct s1*>(0xa3b17984);
        eax4 = tmp32_8;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = *reinterpret_cast<uint1_t*>(&flags2);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2206 = below_or_equal7;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal7);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less5;
    g220d = reinterpret_cast<uint1_t>(!less5);
    g220e = less_or_equal6;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal6);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

struct s1* g496e81c3;

void cmpxchg4_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    uint1_t less5;
    uint1_t less_or_equal6;
    uint1_t below_or_equal7;
    struct s1* tmp32_8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = reinterpret_cast<uint1_t>(g496e81c3 == 0x313ec0e8);
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less5 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal6 = reinterpret_cast<uint1_t>(less5 | *reinterpret_cast<uint1_t*>(&flags2));
    below_or_equal7 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) | *reinterpret_cast<uint1_t*>(&flags2));
    if (*reinterpret_cast<uint1_t*>(&flags2)) {
        tmp32_8 = g496e81c3;
        g496e81c3 = reinterpret_cast<struct s1*>(0x313ec0e8);
        eax4 = tmp32_8;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = *reinterpret_cast<uint1_t*>(&flags2);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2206 = below_or_equal7;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal7);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less5;
    g220d = reinterpret_cast<uint1_t>(!less5);
    g220e = less_or_equal6;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal6);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmpxchg5_mv_plain() {
    signed char al1;
    signed char al2;

    if (al1 == al2) {
    }
    return 0;
}

int32_t cmpxchg5_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) == *reinterpret_cast<signed char*>(&eax3));
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags1) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    less_or_equal11 = reinterpret_cast<uint1_t>(less10 | *reinterpret_cast<uint1_t*>(&flags1));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags1) | *reinterpret_cast<uint1_t*>(&flags1));
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        *reinterpret_cast<signed char*>(&eax3) = *reinterpret_cast<signed char*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmpxchg5_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t less4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less4 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    if (1) {
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less4;
    g220d = reinterpret_cast<uint1_t>(!less4);
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg5_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t less4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less4 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    if (1) {
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less4;
    g220d = reinterpret_cast<uint1_t>(!less4);
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg5_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t less4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less4 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    if (1) {
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less4;
    g220d = reinterpret_cast<uint1_t>(!less4);
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmpxchg_locked_mv_plain() {
    int32_t* ebx1;
    int32_t eax2;
    int32_t* ebx3;
    int32_t eax4;

    if (*ebx1 == eax2) {
        *ebx3 = eax4;
    }
    return 0;
}

int32_t cmpxchg_locked_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    struct s1* tmp32_13;
    void* eax14;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(ebx4->f0 == eax3);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags1) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    less_or_equal11 = reinterpret_cast<uint1_t>(less10 | *reinterpret_cast<uint1_t*>(&flags1));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags1) | *reinterpret_cast<uint1_t*>(&flags1));
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        tmp32_13 = ebx4->f0;
        ebx4->f0 = eax3;
        eax3 = tmp32_13;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax14 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax14) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmpxchg_locked_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    uint1_t less5;
    uint1_t less_or_equal6;
    uint1_t below_or_equal7;
    struct s1* tmp32_8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(2);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = reinterpret_cast<uint1_t>(g3 == 2);
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less5 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal6 = reinterpret_cast<uint1_t>(less5 | *reinterpret_cast<uint1_t*>(&flags2));
    below_or_equal7 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) | *reinterpret_cast<uint1_t*>(&flags2));
    if (*reinterpret_cast<uint1_t*>(&flags2)) {
        tmp32_8 = g3;
        g3 = reinterpret_cast<struct s1*>(2);
        eax4 = tmp32_8;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = *reinterpret_cast<uint1_t*>(&flags2);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2206 = below_or_equal7;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal7);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less5;
    g220d = reinterpret_cast<uint1_t>(!less5);
    g220e = less_or_equal6;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal6);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg_locked_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    uint1_t less5;
    uint1_t less_or_equal6;
    uint1_t below_or_equal7;
    struct s1* tmp32_8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = reinterpret_cast<uint1_t>(g6671ad7 == 0xa3b17984);
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less5 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal6 = reinterpret_cast<uint1_t>(less5 | *reinterpret_cast<uint1_t*>(&flags2));
    below_or_equal7 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) | *reinterpret_cast<uint1_t*>(&flags2));
    if (*reinterpret_cast<uint1_t*>(&flags2)) {
        tmp32_8 = g6671ad7;
        g6671ad7 = reinterpret_cast<struct s1*>(0xa3b17984);
        eax4 = tmp32_8;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = *reinterpret_cast<uint1_t*>(&flags2);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2206 = below_or_equal7;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal7);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less5;
    g220d = reinterpret_cast<uint1_t>(!less5);
    g220e = less_or_equal6;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal6);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg_locked_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    uint1_t less5;
    uint1_t less_or_equal6;
    uint1_t below_or_equal7;
    struct s1* tmp32_8;
    void* eax9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = reinterpret_cast<uint1_t>(g496e81c3 == 0x313ec0e8);
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    less5 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) != *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    less_or_equal6 = reinterpret_cast<uint1_t>(less5 | *reinterpret_cast<uint1_t*>(&flags2));
    below_or_equal7 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&flags2) | *reinterpret_cast<uint1_t*>(&flags2));
    if (*reinterpret_cast<uint1_t*>(&flags2)) {
        tmp32_8 = g496e81c3;
        g496e81c3 = reinterpret_cast<struct s1*>(0x313ec0e8);
        eax4 = tmp32_8;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags2);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2204 = *reinterpret_cast<uint1_t*>(&flags2);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g2206 = below_or_equal7;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal7);
    g2208 = *reinterpret_cast<uint1_t*>(&flags2);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = less5;
    g220d = reinterpret_cast<uint1_t>(!less5);
    g220e = less_or_equal6;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal6);
    g2100 = flags2;
    eax9 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax9) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cpuid_plain() {
    return 0;
}

int32_t cmov1_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    int1_t zf10;
    uint1_t of11;
    int1_t of12;
    uint1_t cf13;
    int1_t cf14;
    uint1_t zf15;
    int1_t zf16;
    uint1_t below_or_equal17;
    int1_t below_or_equal18;
    uint1_t sf19;
    int1_t sf20;
    uint1_t pf21;
    int1_t pf22;
    uint1_t less23;
    int1_t less24;
    uint1_t less_or_equal25;
    int1_t less_or_equal26;
    void* eax27;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    if (zf10) {
        *reinterpret_cast<int16_t*>(&eax3) = *reinterpret_cast<int16_t*>(&ebx4);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of11;
    g2201 = reinterpret_cast<uint1_t>(!of12);
    g2202 = cf13;
    g2203 = reinterpret_cast<uint1_t>(!cf14);
    g2204 = zf15;
    g2205 = reinterpret_cast<uint1_t>(!zf16);
    g2206 = below_or_equal17;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal18);
    g2208 = sf19;
    g2209 = reinterpret_cast<uint1_t>(!sf20);
    g220a = pf21;
    g220b = reinterpret_cast<uint1_t>(!pf22);
    g220c = less23;
    g220d = reinterpret_cast<uint1_t>(!less24);
    g220e = less_or_equal25;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal26);
    g2100 = flags1;
    eax27 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax27) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov1_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(2);
    g2050 = esp3;
    if (zf5) {
        *reinterpret_cast<int16_t*>(&eax4) = 3;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov1_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2050 = esp3;
    if (zf5) {
        *reinterpret_cast<int16_t*>(&eax4) = 0x1ad7;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov1_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2050 = esp3;
    if (zf5) {
        *reinterpret_cast<int16_t*>(&eax4) = 0x81c3;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov2_mv_plain() {
    int1_t zf1;

    if (zf1) {
    }
    return 0;
}

int32_t cmov2_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    int1_t zf10;
    uint1_t of11;
    int1_t of12;
    uint1_t cf13;
    int1_t cf14;
    uint1_t zf15;
    int1_t zf16;
    uint1_t below_or_equal17;
    int1_t below_or_equal18;
    uint1_t sf19;
    int1_t sf20;
    uint1_t pf21;
    int1_t pf22;
    uint1_t less23;
    int1_t less24;
    uint1_t less_or_equal25;
    int1_t less_or_equal26;
    void* eax27;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    if (zf10) {
        *reinterpret_cast<int16_t*>(&eax3) = *reinterpret_cast<int16_t*>(&ebx4);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of11;
    g2201 = reinterpret_cast<uint1_t>(!of12);
    g2202 = cf13;
    g2203 = reinterpret_cast<uint1_t>(!cf14);
    g2204 = zf15;
    g2205 = reinterpret_cast<uint1_t>(!zf16);
    g2206 = below_or_equal17;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal18);
    g2208 = sf19;
    g2209 = reinterpret_cast<uint1_t>(!sf20);
    g220a = pf21;
    g220b = reinterpret_cast<uint1_t>(!pf22);
    g220c = less23;
    g220d = reinterpret_cast<uint1_t>(!less24);
    g220e = less_or_equal25;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal26);
    g2100 = flags1;
    eax27 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax27) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov2_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(2);
    g2050 = esp3;
    if (zf5) {
        *reinterpret_cast<int16_t*>(&eax4) = 3;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov2_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2050 = esp3;
    if (zf5) {
        *reinterpret_cast<int16_t*>(&eax4) = 0x1ad7;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov2_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2050 = esp3;
    if (zf5) {
        *reinterpret_cast<int16_t*>(&eax4) = 0x81c3;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov3_plain() {
    int1_t zf1;

    if (zf1) {
    }
    return 0;
}

int32_t cmov3_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    int1_t zf10;
    uint1_t of11;
    int1_t of12;
    uint1_t cf13;
    int1_t cf14;
    uint1_t zf15;
    int1_t zf16;
    uint1_t below_or_equal17;
    int1_t below_or_equal18;
    uint1_t sf19;
    int1_t sf20;
    uint1_t pf21;
    int1_t pf22;
    uint1_t less23;
    int1_t less24;
    uint1_t less_or_equal25;
    int1_t less_or_equal26;
    void* eax27;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    if (zf10) {
        eax3 = ebx4;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of11;
    g2201 = reinterpret_cast<uint1_t>(!of12);
    g2202 = cf13;
    g2203 = reinterpret_cast<uint1_t>(!cf14);
    g2204 = zf15;
    g2205 = reinterpret_cast<uint1_t>(!zf16);
    g2206 = below_or_equal17;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal18);
    g2208 = sf19;
    g2209 = reinterpret_cast<uint1_t>(!sf20);
    g220a = pf21;
    g220b = reinterpret_cast<uint1_t>(!pf22);
    g220c = less23;
    g220d = reinterpret_cast<uint1_t>(!less24);
    g220e = less_or_equal25;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal26);
    g2100 = flags1;
    eax27 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax27) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov3_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(2);
    g2050 = esp3;
    if (zf5) {
        eax4 = reinterpret_cast<struct s1*>(3);
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov3_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2050 = esp3;
    if (zf5) {
        eax4 = reinterpret_cast<struct s1*>(0x6671ad7);
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov3_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2050 = esp3;
    if (zf5) {
        eax4 = reinterpret_cast<struct s1*>(0x496e81c3);
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov4_mv_plain() {
    int1_t zf1;

    if (zf1) {
    }
    return 0;
}

int32_t cmov4_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    int1_t zf10;
    uint1_t of11;
    int1_t of12;
    uint1_t cf13;
    int1_t cf14;
    uint1_t zf15;
    int1_t zf16;
    uint1_t below_or_equal17;
    int1_t below_or_equal18;
    uint1_t sf19;
    int1_t sf20;
    uint1_t pf21;
    int1_t pf22;
    uint1_t less23;
    int1_t less24;
    uint1_t less_or_equal25;
    int1_t less_or_equal26;
    void* eax27;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    if (zf10) {
        *reinterpret_cast<int16_t*>(&eax3) = ebx4->f12;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of11;
    g2201 = reinterpret_cast<uint1_t>(!of12);
    g2202 = cf13;
    g2203 = reinterpret_cast<uint1_t>(!cf14);
    g2204 = zf15;
    g2205 = reinterpret_cast<uint1_t>(!zf16);
    g2206 = below_or_equal17;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal18);
    g2208 = sf19;
    g2209 = reinterpret_cast<uint1_t>(!sf20);
    g220a = pf21;
    g220b = reinterpret_cast<uint1_t>(!pf22);
    g220c = less23;
    g220d = reinterpret_cast<uint1_t>(!less24);
    g220e = less_or_equal25;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal26);
    g2100 = flags1;
    eax27 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax27) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

int16_t gf;

void cmov4_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(2);
    g2050 = esp3;
    if (zf5) {
        *reinterpret_cast<int16_t*>(&eax4) = gf;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int16_t g6671ae3;

void cmov4_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2050 = esp3;
    if (zf5) {
        *reinterpret_cast<int16_t*>(&eax4) = g6671ae3;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int16_t g496e81cf;

void cmov4_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2050 = esp3;
    if (zf5) {
        *reinterpret_cast<int16_t*>(&eax4) = g496e81cf;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov5_mv_plain() {
    int1_t zf1;

    if (zf1) {
    }
    return 0;
}

int32_t cmov5_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    int1_t zf10;
    uint1_t of11;
    int1_t of12;
    uint1_t cf13;
    int1_t cf14;
    uint1_t zf15;
    int1_t zf16;
    uint1_t below_or_equal17;
    int1_t below_or_equal18;
    uint1_t sf19;
    int1_t sf20;
    uint1_t pf21;
    int1_t pf22;
    uint1_t less23;
    int1_t less24;
    uint1_t less_or_equal25;
    int1_t less_or_equal26;
    void* eax27;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    if (zf10) {
        eax3 = ebx4->f34;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of11;
    g2201 = reinterpret_cast<uint1_t>(!of12);
    g2202 = cf13;
    g2203 = reinterpret_cast<uint1_t>(!cf14);
    g2204 = zf15;
    g2205 = reinterpret_cast<uint1_t>(!zf16);
    g2206 = below_or_equal17;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal18);
    g2208 = sf19;
    g2209 = reinterpret_cast<uint1_t>(!sf20);
    g220a = pf21;
    g220b = reinterpret_cast<uint1_t>(!pf22);
    g220c = less23;
    g220d = reinterpret_cast<uint1_t>(!less24);
    g220e = less_or_equal25;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal26);
    g2100 = flags1;
    eax27 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax27) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

struct s1* g25;

void cmov5_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(2);
    g2050 = esp3;
    if (zf5) {
        eax4 = g25;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

struct s1* g6671af9;

void cmov5_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2050 = esp3;
    if (zf5) {
        eax4 = g6671af9;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

struct s1* g496e81e5;

void cmov5_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* eax4;
    int1_t zf5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    eax4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2050 = esp3;
    if (zf5) {
        eax4 = g496e81e5;
    }
    g2000 = eax4;
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags2;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_0_plain() {
    if (__intrinsic()) {
    }
    return 0;
}

int32_t cmov_w_with_code_0_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_0_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_0_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_0_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_1_mv_plain() {
    if (!__intrinsic()) {
    }
    return 0;
}

int32_t cmov_w_with_code_1_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_1_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_1_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_1_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_2_mv_plain() {
    unsigned char al1;

    if (al1 < 2) {
    }
    return 0;
}

int32_t cmov_w_with_code_2_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_2_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_2_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_2_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_3_mv_plain() {
    unsigned char al1;

    if (al1 >= 2) {
    }
    return 0;
}

int32_t cmov_w_with_code_3_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!*reinterpret_cast<uint1_t*>(&flags1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_3_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_3_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_3_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_4_mv_plain() {
    signed char al1;

    if (al1 == 2) {
    }
    return 0;
}

int32_t cmov_w_with_code_4_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_4_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_4_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_4_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_5_mv_plain() {
    signed char al1;

    if (al1 != 2) {
    }
    return 0;
}

int32_t cmov_w_with_code_5_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!*reinterpret_cast<uint1_t*>(&flags1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_5_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_5_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_5_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_6_mv_plain() {
    unsigned char al1;

    if (al1 <= 2) {
    }
    return 0;
}

int32_t cmov_w_with_code_6_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (below_or_equal12) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_6_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_6_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_6_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_7_mv_plain() {
    unsigned char al1;

    if (al1 > 2) {
    }
    return 0;
}

int32_t cmov_w_with_code_7_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!below_or_equal12) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_7_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_7_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_7_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_8_mv_plain() {
    signed char al1;

    if (al1 < 2) {
    }
    return 0;
}

int32_t cmov_w_with_code_8_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_8_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_8_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_8_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_9_mv_plain() {
    signed char al1;

    if (al1 >= 2) {
    }
    return 0;
}

int32_t cmov_w_with_code_9_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!*reinterpret_cast<uint1_t*>(&flags1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_9_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_9_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_9_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_a_mv_plain() {
    if (__intrinsic()) {
    }
    return 0;
}

int32_t cmov_w_with_code_a_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_a_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (*reinterpret_cast<uint1_t*>(&flags2)) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_a_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (*reinterpret_cast<uint1_t*>(&flags2)) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_a_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (*reinterpret_cast<uint1_t*>(&flags2)) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_b_mv_plain() {
    if (!__intrinsic()) {
    }
    return 0;
}

int32_t cmov_w_with_code_b_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!*reinterpret_cast<uint1_t*>(&flags1)) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_b_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (!*reinterpret_cast<uint1_t*>(&flags2)) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_b_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (!*reinterpret_cast<uint1_t*>(&flags2)) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_b_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (!*reinterpret_cast<uint1_t*>(&flags2)) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_c_mv_plain() {
    signed char al1;

    if (al1 < 2) {
    }
    return 0;
}

int32_t cmov_w_with_code_c_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (less10) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_c_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_c_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_c_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_d_mv_plain() {
    signed char al1;

    if (al1 >= 2) {
    }
    return 0;
}

int32_t cmov_w_with_code_d_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!less10) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_d_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_d_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_d_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_e_mv_plain() {
    signed char al1;

    if (al1 <= 2) {
    }
    return 0;
}

int32_t cmov_w_with_code_e_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (less_or_equal11) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_e_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_e_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_e_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_w_with_code_f_mv_plain() {
    signed char al1;

    if (al1 > 2) {
    }
    return 0;
}

int32_t cmov_w_with_code_f_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!less_or_equal11) {
        *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(&eax3);
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_w_with_code_f_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 2;
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_f_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0x7984;
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_w_with_code_f_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        *reinterpret_cast<int16_t*>(&ebx4) = 0xc0e8;
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_0_plain() {
    if (__intrinsic()) {
    }
    return 0;
}

int32_t cmov_l_with_code_0_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1)) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_0_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1)) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_0_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1)) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_0_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1)) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_1_mv_plain() {
    if (!__intrinsic()) {
    }
    return 0;
}

int32_t cmov_l_with_code_1_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1)) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_1_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1)) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_1_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1)) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_1_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1)) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_2_mv_plain() {
    unsigned char al1;

    if (al1 < 2) {
    }
    return 0;
}

int32_t cmov_l_with_code_2_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_2_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_2_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_2_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_3_mv_plain() {
    unsigned char al1;

    if (al1 >= 2) {
    }
    return 0;
}

int32_t cmov_l_with_code_3_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!*reinterpret_cast<uint1_t*>(&flags1)) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_3_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_3_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_3_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_4_mv_plain() {
    signed char al1;

    if (al1 == 2) {
    }
    return 0;
}

int32_t cmov_l_with_code_4_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_4_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_4_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_4_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_5_mv_plain() {
    signed char al1;

    if (al1 != 2) {
    }
    return 0;
}

int32_t cmov_l_with_code_5_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!*reinterpret_cast<uint1_t*>(&flags1)) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_5_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_5_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_5_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_6_mv_plain() {
    unsigned char al1;

    if (al1 <= 2) {
    }
    return 0;
}

int32_t cmov_l_with_code_6_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (below_or_equal12) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_6_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_6_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_6_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_7_mv_plain() {
    unsigned char al1;

    if (al1 > 2) {
    }
    return 0;
}

int32_t cmov_l_with_code_7_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!below_or_equal12) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_7_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_7_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_7_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_8_mv_plain() {
    signed char al1;

    if (al1 < 2) {
    }
    return 0;
}

int32_t cmov_l_with_code_8_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_8_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_8_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_8_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_9_mv_plain() {
    signed char al1;

    if (al1 >= 2) {
    }
    return 0;
}

int32_t cmov_l_with_code_9_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!*reinterpret_cast<uint1_t*>(&flags1)) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_9_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_9_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_9_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_a_mv_plain() {
    if (__intrinsic()) {
    }
    return 0;
}

int32_t cmov_l_with_code_a_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (*reinterpret_cast<uint1_t*>(&flags1)) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_a_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (*reinterpret_cast<uint1_t*>(&flags2)) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_a_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (*reinterpret_cast<uint1_t*>(&flags2)) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_a_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (*reinterpret_cast<uint1_t*>(&flags2)) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_b_mv_plain() {
    if (!__intrinsic()) {
    }
    return 0;
}

int32_t cmov_l_with_code_b_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!*reinterpret_cast<uint1_t*>(&flags1)) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_b_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (!*reinterpret_cast<uint1_t*>(&flags2)) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_b_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (!*reinterpret_cast<uint1_t*>(&flags2)) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_b_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (!*reinterpret_cast<uint1_t*>(&flags2)) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_c_mv_plain() {
    signed char al1;

    if (al1 < 2) {
    }
    return 0;
}

int32_t cmov_l_with_code_c_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (less10) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_c_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_c_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_c_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_d_mv_plain() {
    signed char al1;

    if (al1 >= 2) {
    }
    return 0;
}

int32_t cmov_l_with_code_d_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!less10) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_d_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_d_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_d_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_e_mv_plain() {
    signed char al1;

    if (al1 <= 2) {
    }
    return 0;
}

int32_t cmov_l_with_code_e_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (less_or_equal11) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_e_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_e_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_e_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (1) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov_l_with_code_f_mv_plain() {
    signed char al1;

    if (al1 > 2) {
    }
    return 0;
}

int32_t cmov_l_with_code_f_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t less10;
    uint1_t less_or_equal11;
    uint1_t below_or_equal12;
    void* eax13;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < 2);
    *reinterpret_cast<uint1_t*>(&flags1) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) == 2);
    *reinterpret_cast<uint1_t*>(&flags1) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags1) = __intrinsic();
    less10 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) < reinterpret_cast<signed char>(2));
    less_or_equal11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax3) <= reinterpret_cast<signed char>(2));
    below_or_equal12 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) <= 2);
    if (!less_or_equal11) {
        ebx4 = eax3;
    }
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags1) + 1));
    g2202 = *reinterpret_cast<uint1_t*>(&flags1);
    g2203 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2204 = *reinterpret_cast<uint1_t*>(&flags1);
    g2205 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal12);
    g2208 = *reinterpret_cast<uint1_t*>(&flags1);
    g2209 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220a = *reinterpret_cast<uint1_t*>(&flags1);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags1));
    g220c = less10;
    g220d = reinterpret_cast<uint1_t>(!less10);
    g220e = less_or_equal11;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal11);
    g2100 = flags1;
    eax13 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax13) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmov_l_with_code_f_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(2);
    }
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 1;
    g2205 = 0;
    g2206 = 1;
    g2207 = 0;
    g2208 = 0;
    g2209 = 1;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 0;
    g220d = 1;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_f_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(0xa3b17984);
    }
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmov_l_with_code_f_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    struct s1* ebx4;
    void* eax5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    ebx4 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2050 = esp3;
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = __intrinsic();
    *reinterpret_cast<uint1_t*>(&flags2) = 0;
    *reinterpret_cast<uint1_t*>(&flags2) = 1;
    *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = __intrinsic();
    *reinterpret_cast<int1_t*>(&flags2) = __intrinsic();
    if (0) {
        ebx4 = reinterpret_cast<struct s1*>(0x313ec0e8);
    }
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = ebx4;
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1);
    g2201 = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&flags2) + 1));
    g2202 = 0;
    g2203 = 1;
    g2204 = 0;
    g2205 = 1;
    g2206 = 0;
    g2207 = 1;
    g2208 = 1;
    g2209 = 0;
    g220a = *reinterpret_cast<uint1_t*>(&flags2);
    g220b = reinterpret_cast<uint1_t>(!*reinterpret_cast<uint1_t*>(&flags2));
    g220c = 1;
    g220d = 0;
    g220e = 1;
    g220f = 0;
    g2100 = flags2;
    eax5 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax5) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

/* __i686.get_pc_thunk.bx */
void __i686_get_pc_thunk_bx() {
    return;
}

int32_t cpuid_allregs() {
    int16_t flags1;
    void* esp2;
    int32_t ebp3;
    int32_t esi4;
    int32_t edi5;
    uint1_t of6;
    int1_t of7;
    uint1_t cf8;
    int1_t cf9;
    uint1_t zf10;
    int1_t zf11;
    uint1_t below_or_equal12;
    int1_t below_or_equal13;
    uint1_t sf14;
    int1_t sf15;
    uint1_t pf16;
    int1_t pf17;
    uint1_t less18;
    int1_t less19;
    uint1_t less_or_equal20;
    int1_t less_or_equal21;
    void* eax22;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    ebp3 = g1010;
    esi4 = g1014;
    edi5 = g1018;
    g2050 = esp2;
    g2000 = __intrinsic();
    g2004 = __intrinsic();
    g2008 = __intrinsic();
    g200c = __intrinsic();
    g2010 = ebp3;
    g2014 = esi4;
    g2018 = edi5;
    g2200 = of6;
    g2201 = reinterpret_cast<uint1_t>(!of7);
    g2202 = cf8;
    g2203 = reinterpret_cast<uint1_t>(!cf9);
    g2204 = zf10;
    g2205 = reinterpret_cast<uint1_t>(!zf11);
    g2206 = below_or_equal12;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal13);
    g2208 = sf14;
    g2209 = reinterpret_cast<uint1_t>(!sf15);
    g220a = pf16;
    g220b = reinterpret_cast<uint1_t>(!pf17);
    g220c = less18;
    g220d = reinterpret_cast<uint1_t>(!less19);
    g220e = less_or_equal20;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal21);
    g2100 = flags1;
    eax22 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax22) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

int32_t bswap_plain() {
    return 0;
}

int32_t bswap_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    g2000 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax3) >> 24 | reinterpret_cast<uint32_t>(eax3) >> 8 & 0xff00 | reinterpret_cast<uint32_t>(eax3) << 8 & 0xff0000 | reinterpret_cast<uint32_t>(eax3) << 24);
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void bswap_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    g2000 = reinterpret_cast<struct s1*>(0x2000000);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void bswap_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    g2000 = reinterpret_cast<struct s1*>(0x8479b1a3);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void bswap_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    g2000 = reinterpret_cast<struct s1*>(0xe8c03e31);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmpxchg1_mv_plain() {
    signed char bl1;
    signed char al2;

    if (bl1 == al2) {
    }
    return 0;
}

void cpuid_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    g2000 = __intrinsic();
    g2004 = __intrinsic();
    g2008 = __intrinsic();
    g200c = __intrinsic();
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cpuid_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    g2000 = __intrinsic();
    g2004 = __intrinsic();
    g2008 = __intrinsic();
    g200c = __intrinsic();
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cpuid_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    g2000 = __intrinsic();
    g2004 = __intrinsic();
    g2008 = __intrinsic();
    g200c = __intrinsic();
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t invd_plain() {
    __asm__("invd ");
    return 0;
}

int32_t invd_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("invd ");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void invd_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("invd ");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void invd_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("invd ");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void invd_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("invd ");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t invlpg_plain() {
    __asm__("invlpg [eax]");
    return 0;
}

int32_t invlpg_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("invlpg [eax]");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void invlpg_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("invlpg [eax]");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void invlpg_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("invlpg [eax]");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void invlpg_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("invlpg [eax]");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t wbinvd_plain() {
    __asm__("wbinvd ");
    return 0;
}

int32_t wbinvd_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("wbinvd ");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void wbinvd_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("wbinvd ");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void wbinvd_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("wbinvd ");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void wbinvd_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("wbinvd ");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t xadd1_mv_plain() {
    __asm__("xadd bl, al");
    return 0;
}

int32_t xadd1_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("xadd bl, al");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void xadd1_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd bl, al");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void xadd1_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd bl, al");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void xadd1_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd bl, al");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t xadd2_mv_plain() {
    __asm__("xadd bx, ax");
    return 0;
}

int32_t xadd2_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("xadd bx, ax");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void xadd2_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd bx, ax");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void xadd2_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd bx, ax");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void xadd2_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd bx, ax");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t xadd3_plain() {
    __asm__("xadd ebx, eax");
    return 0;
}

int32_t xadd3_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("xadd ebx, eax");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void xadd3_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd ebx, eax");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void xadd3_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd ebx, eax");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void xadd3_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd ebx, eax");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t xadd4_mv_plain() {
    __asm__("xadd [ebx], eax");
    return 0;
}

int32_t xadd4_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("xadd [ebx], eax");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void xadd4_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd [ebx], eax");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void xadd4_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd [ebx], eax");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void xadd4_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd [ebx], eax");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t xadd5_mv_plain() {
    __asm__("xadd al, al");
    return 0;
}

int32_t xadd5_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("xadd al, al");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void xadd5_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd al, al");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void xadd5_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd al, al");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void xadd5_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("xadd al, al");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t xadd_locked_mv_plain() {
    __asm__("lock xadd [ebx], eax");
    return 0;
}

int32_t xadd_locked_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("lock xadd [ebx], eax");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void xadd_locked_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("lock xadd [ebx], eax");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void xadd_locked_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("lock xadd [ebx], eax");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void xadd_locked_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("lock xadd [ebx], eax");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmpxchg8b_plain() {
    __asm__("cmpxchg8b [eax]");
    return 0;
}

int32_t cmpxchg8b_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("cmpxchg8b [eax]");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmpxchg8b_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("cmpxchg8b [eax]");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg8b_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("cmpxchg8b [eax]");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg8b_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("cmpxchg8b [eax]");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmpxchg8b_locked_mv_plain() {
    __asm__("lock cmpxchg8b [eax]");
    return 0;
}

int32_t cmpxchg8b_locked_mv_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("lock cmpxchg8b [eax]");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void cmpxchg8b_locked_mv_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("lock cmpxchg8b [eax]");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg8b_locked_mv_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("lock cmpxchg8b [eax]");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void cmpxchg8b_locked_mv_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("lock cmpxchg8b [eax]");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t rdtsc_plain() {
    __asm__("rdtsc ");
    return 0;
}

int32_t rdtsc_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("rdtsc ");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void rdtsc_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("rdtsc ");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void rdtsc_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("rdtsc ");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void rdtsc_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("rdtsc ");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t rdmsr_plain() {
    __asm__("rdmsr ");
    return 0;
}

int32_t rdmsr_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("rdmsr ");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void rdmsr_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("rdmsr ");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void rdmsr_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("rdmsr ");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void rdmsr_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("rdmsr ");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t wrmsr_plain() {
    __asm__("wrmsr ");
    return 0;
}

int32_t wrmsr_allregs() {
    int16_t flags1;
    void* esp2;
    struct s1* eax3;
    struct s1* ebx4;
    struct s1* ecx5;
    int32_t edx6;
    int32_t ebp7;
    int32_t esi8;
    int32_t edi9;
    uint1_t of10;
    int1_t of11;
    uint1_t cf12;
    int1_t cf13;
    uint1_t zf14;
    int1_t zf15;
    uint1_t below_or_equal16;
    int1_t below_or_equal17;
    uint1_t sf18;
    int1_t sf19;
    uint1_t pf20;
    int1_t pf21;
    uint1_t less22;
    int1_t less23;
    uint1_t less_or_equal24;
    int1_t less_or_equal25;
    void* eax26;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags1) + 1) = 0;
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    eax3 = g1000;
    ebx4 = g1004;
    ecx5 = g1008;
    edx6 = g100c;
    ebp7 = g1010;
    esi8 = g1014;
    edi9 = g1018;
    g2050 = esp2;
    __asm__("wrmsr ");
    g2000 = eax3;
    g2004 = ebx4;
    g2008 = ecx5;
    g200c = edx6;
    g2010 = ebp7;
    g2014 = esi8;
    g2018 = edi9;
    g2200 = of10;
    g2201 = reinterpret_cast<uint1_t>(!of11);
    g2202 = cf12;
    g2203 = reinterpret_cast<uint1_t>(!cf13);
    g2204 = zf14;
    g2205 = reinterpret_cast<uint1_t>(!zf15);
    g2206 = below_or_equal16;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal17);
    g2208 = sf18;
    g2209 = reinterpret_cast<uint1_t>(!sf19);
    g220a = pf20;
    g220b = reinterpret_cast<uint1_t>(!pf21);
    g220c = less22;
    g220d = reinterpret_cast<uint1_t>(!less23);
    g220e = less_or_equal24;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal25);
    g2100 = flags1;
    eax26 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax26) - (reinterpret_cast<int32_t>(esp2) - 2 + 2);
    return 0;
}

void wrmsr_constant_simple() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("wrmsr ");
    g2000 = reinterpret_cast<struct s1*>(2);
    g2004 = reinterpret_cast<struct s1*>(3);
    g2008 = reinterpret_cast<struct s1*>(4);
    g200c = 5;
    g2010 = 6;
    g2014 = 7;
    g2018 = 8;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void wrmsr_constant_complex1() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("wrmsr ");
    g2000 = reinterpret_cast<struct s1*>(0xa3b17984);
    g2004 = reinterpret_cast<struct s1*>(0x6671ad7);
    g2008 = reinterpret_cast<struct s1*>(0x46685248);
    g200c = 0x392456c4;
    g2010 = 0xbc8960a4;
    g2014 = 0xad3c2d78;
    g2018 = 0xe465e152;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void wrmsr_constant_complex2() {
    uint64_t v1;
    int16_t flags2;
    void* esp3;
    uint1_t of4;
    int1_t of5;
    uint1_t cf6;
    int1_t cf7;
    uint1_t zf8;
    int1_t zf9;
    uint1_t below_or_equal10;
    int1_t below_or_equal11;
    uint1_t sf12;
    int1_t sf13;
    uint1_t pf14;
    int1_t pf15;
    uint1_t less16;
    int1_t less17;
    uint1_t less_or_equal18;
    int1_t less_or_equal19;
    void* eax20;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&flags2) + 1) = 0;
    *reinterpret_cast<int32_t*>(&v1) = 0xfeff;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 2);
    g2050 = esp3;
    __asm__("wrmsr ");
    g2000 = reinterpret_cast<struct s1*>(0x313ec0e8);
    g2004 = reinterpret_cast<struct s1*>(0x496e81c3);
    g2008 = reinterpret_cast<struct s1*>(0x1e3f6cb2);
    g200c = 0x4e6925b3;
    g2010 = 0x4f312610;
    g2014 = 0x2f37a4a5;
    g2018 = 0x91a917b4;
    g2200 = of4;
    g2201 = reinterpret_cast<uint1_t>(!of5);
    g2202 = cf6;
    g2203 = reinterpret_cast<uint1_t>(!cf7);
    g2204 = zf8;
    g2205 = reinterpret_cast<uint1_t>(!zf9);
    g2206 = below_or_equal10;
    g2207 = reinterpret_cast<uint1_t>(!below_or_equal11);
    g2208 = sf12;
    g2209 = reinterpret_cast<uint1_t>(!sf13);
    g220a = pf14;
    g220b = reinterpret_cast<uint1_t>(!pf15);
    g220c = less16;
    g220d = reinterpret_cast<uint1_t>(!less17);
    g220e = less_or_equal18;
    g220f = reinterpret_cast<uint1_t>(!less_or_equal19);
    g2100 = flags2;
    eax20 = g2050;
    g2020 = reinterpret_cast<int32_t>(eax20) - (reinterpret_cast<int32_t>(esp3) - 2 + 2);
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

int32_t cmov1_mv_plain() {
    int1_t zf1;

    if (zf1) {
    }
    return 0;
}

void __do_global_dtors_aux();

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8056578(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s2* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

signed char _edata = 0;

/* dtor_idx.5980 */
uint32_t dtor_idx_5980 = 0;

void __do_global_dtors_aux() {
    int1_t zf1;
    uint32_t eax2;
    uint32_t eax3;

    zf1 = _edata == 0;
    if (zf1) {
        eax2 = dtor_idx_5980;
        if (eax2 < 0) {
            do {
                eax3 = eax2 + 1;
                dtor_idx_5980 = eax3;
                *reinterpret_cast<int32_t*>(eax3 * 4 + 0x805763c)();
                eax2 = dtor_idx_5980;
            } while (eax2 < 0);
        }
        _edata = 1;
    }
    return;
}

void __libc_csu_fini();

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482c4(0x80564c4, __return_address(), esp1, 0x80564e0, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8048365() {
}

int32_t callAll(int32_t ecx) {
    bswap_plain();
    bswap_allregs();
    bswap_constant_simple();
    bswap_constant_complex1();
    bswap_constant_complex2();
    cmpxchg1_mv_plain();
    cmpxchg1_mv_allregs();
    cmpxchg1_mv_constant_simple();
    cmpxchg1_mv_constant_complex1();
    cmpxchg1_mv_constant_complex2();
    cmpxchg2_mv_plain();
    cmpxchg2_mv_allregs();
    cmpxchg2_mv_constant_simple();
    cmpxchg2_mv_constant_complex1();
    cmpxchg2_mv_constant_complex2();
    cmpxchg3_plain(ecx);
    cmpxchg3_allregs();
    cmpxchg3_constant_simple();
    cmpxchg3_constant_complex1();
    cmpxchg3_constant_complex2();
    cmpxchg4_mv_plain();
    cmpxchg4_mv_allregs();
    cmpxchg4_mv_constant_simple();
    cmpxchg4_mv_constant_complex1();
    cmpxchg4_mv_constant_complex2();
    cmpxchg5_mv_plain();
    cmpxchg5_mv_allregs();
    cmpxchg5_mv_constant_simple();
    cmpxchg5_mv_constant_complex1();
    cmpxchg5_mv_constant_complex2();
    cmpxchg_locked_mv_plain();
    cmpxchg_locked_mv_allregs();
    cmpxchg_locked_mv_constant_simple();
    cmpxchg_locked_mv_constant_complex1();
    cmpxchg_locked_mv_constant_complex2();
    cpuid_plain();
    cpuid_allregs();
    cpuid_constant_simple();
    cpuid_constant_complex1();
    cpuid_constant_complex2();
    invd_plain();
    invd_allregs();
    invd_constant_simple();
    invd_constant_complex1();
    invd_constant_complex2();
    invlpg_plain();
    invlpg_allregs();
    invlpg_constant_simple();
    invlpg_constant_complex1();
    invlpg_constant_complex2();
    wbinvd_plain();
    wbinvd_allregs();
    wbinvd_constant_simple();
    wbinvd_constant_complex1();
    wbinvd_constant_complex2();
    xadd1_mv_plain();
    xadd1_mv_allregs();
    xadd1_mv_constant_simple();
    xadd1_mv_constant_complex1();
    xadd1_mv_constant_complex2();
    xadd2_mv_plain();
    xadd2_mv_allregs();
    xadd2_mv_constant_simple();
    xadd2_mv_constant_complex1();
    xadd2_mv_constant_complex2();
    xadd3_plain();
    xadd3_allregs();
    xadd3_constant_simple();
    xadd3_constant_complex1();
    xadd3_constant_complex2();
    xadd4_mv_plain();
    xadd4_mv_allregs();
    xadd4_mv_constant_simple();
    xadd4_mv_constant_complex1();
    xadd4_mv_constant_complex2();
    xadd5_mv_plain();
    xadd5_mv_allregs();
    xadd5_mv_constant_simple();
    xadd5_mv_constant_complex1();
    xadd5_mv_constant_complex2();
    xadd_locked_mv_plain();
    xadd_locked_mv_allregs();
    xadd_locked_mv_constant_simple();
    xadd_locked_mv_constant_complex1();
    xadd_locked_mv_constant_complex2();
    cmpxchg8b_plain();
    cmpxchg8b_allregs();
    cmpxchg8b_constant_simple();
    cmpxchg8b_constant_complex1();
    cmpxchg8b_constant_complex2();
    cmpxchg8b_locked_mv_plain();
    cmpxchg8b_locked_mv_allregs();
    cmpxchg8b_locked_mv_constant_simple();
    cmpxchg8b_locked_mv_constant_complex1();
    cmpxchg8b_locked_mv_constant_complex2();
    rdtsc_plain();
    rdtsc_allregs();
    rdtsc_constant_simple();
    rdtsc_constant_complex1();
    rdtsc_constant_complex2();
    rdmsr_plain();
    rdmsr_allregs();
    rdmsr_constant_simple();
    rdmsr_constant_complex1();
    rdmsr_constant_complex2();
    wrmsr_plain();
    wrmsr_allregs();
    wrmsr_constant_simple();
    wrmsr_constant_complex1();
    wrmsr_constant_complex2();
    cmov1_mv_plain();
    cmov1_mv_allregs();
    cmov1_mv_constant_simple();
    cmov1_mv_constant_complex1();
    cmov1_mv_constant_complex2();
    cmov2_mv_plain();
    cmov2_mv_allregs();
    cmov2_mv_constant_simple();
    cmov2_mv_constant_complex1();
    cmov2_mv_constant_complex2();
    cmov3_plain();
    cmov3_allregs();
    cmov3_constant_simple();
    cmov3_constant_complex1();
    cmov3_constant_complex2();
    cmov4_mv_plain();
    cmov4_mv_allregs();
    cmov4_mv_constant_simple();
    cmov4_mv_constant_complex1();
    cmov4_mv_constant_complex2();
    cmov5_mv_plain();
    cmov5_mv_allregs();
    cmov5_mv_constant_simple();
    cmov5_mv_constant_complex1();
    cmov5_mv_constant_complex2();
    cmov_w_with_code_0_plain();
    cmov_w_with_code_0_allregs();
    cmov_w_with_code_0_constant_simple();
    cmov_w_with_code_0_constant_complex1();
    cmov_w_with_code_0_constant_complex2();
    cmov_w_with_code_1_mv_plain();
    cmov_w_with_code_1_mv_allregs();
    cmov_w_with_code_1_mv_constant_simple();
    cmov_w_with_code_1_mv_constant_complex1();
    cmov_w_with_code_1_mv_constant_complex2();
    cmov_w_with_code_2_mv_plain();
    cmov_w_with_code_2_mv_allregs();
    cmov_w_with_code_2_mv_constant_simple();
    cmov_w_with_code_2_mv_constant_complex1();
    cmov_w_with_code_2_mv_constant_complex2();
    cmov_w_with_code_3_mv_plain();
    cmov_w_with_code_3_mv_allregs();
    cmov_w_with_code_3_mv_constant_simple();
    cmov_w_with_code_3_mv_constant_complex1();
    cmov_w_with_code_3_mv_constant_complex2();
    cmov_w_with_code_4_mv_plain();
    cmov_w_with_code_4_mv_allregs();
    cmov_w_with_code_4_mv_constant_simple();
    cmov_w_with_code_4_mv_constant_complex1();
    cmov_w_with_code_4_mv_constant_complex2();
    cmov_w_with_code_5_mv_plain();
    cmov_w_with_code_5_mv_allregs();
    cmov_w_with_code_5_mv_constant_simple();
    cmov_w_with_code_5_mv_constant_complex1();
    cmov_w_with_code_5_mv_constant_complex2();
    cmov_w_with_code_6_mv_plain();
    cmov_w_with_code_6_mv_allregs();
    cmov_w_with_code_6_mv_constant_simple();
    cmov_w_with_code_6_mv_constant_complex1();
    cmov_w_with_code_6_mv_constant_complex2();
    cmov_w_with_code_7_mv_plain();
    cmov_w_with_code_7_mv_allregs();
    cmov_w_with_code_7_mv_constant_simple();
    cmov_w_with_code_7_mv_constant_complex1();
    cmov_w_with_code_7_mv_constant_complex2();
    cmov_w_with_code_8_mv_plain();
    cmov_w_with_code_8_mv_allregs();
    cmov_w_with_code_8_mv_constant_simple();
    cmov_w_with_code_8_mv_constant_complex1();
    cmov_w_with_code_8_mv_constant_complex2();
    cmov_w_with_code_9_mv_plain();
    cmov_w_with_code_9_mv_allregs();
    cmov_w_with_code_9_mv_constant_simple();
    cmov_w_with_code_9_mv_constant_complex1();
    cmov_w_with_code_9_mv_constant_complex2();
    cmov_w_with_code_a_mv_plain();
    cmov_w_with_code_a_mv_allregs();
    cmov_w_with_code_a_mv_constant_simple();
    cmov_w_with_code_a_mv_constant_complex1();
    cmov_w_with_code_a_mv_constant_complex2();
    cmov_w_with_code_b_mv_plain();
    cmov_w_with_code_b_mv_allregs();
    cmov_w_with_code_b_mv_constant_simple();
    cmov_w_with_code_b_mv_constant_complex1();
    cmov_w_with_code_b_mv_constant_complex2();
    cmov_w_with_code_c_mv_plain();
    cmov_w_with_code_c_mv_allregs();
    cmov_w_with_code_c_mv_constant_simple();
    cmov_w_with_code_c_mv_constant_complex1();
    cmov_w_with_code_c_mv_constant_complex2();
    cmov_w_with_code_d_mv_plain();
    cmov_w_with_code_d_mv_allregs();
    cmov_w_with_code_d_mv_constant_simple();
    cmov_w_with_code_d_mv_constant_complex1();
    cmov_w_with_code_d_mv_constant_complex2();
    cmov_w_with_code_e_mv_plain();
    cmov_w_with_code_e_mv_allregs();
    cmov_w_with_code_e_mv_constant_simple();
    cmov_w_with_code_e_mv_constant_complex1();
    cmov_w_with_code_e_mv_constant_complex2();
    cmov_w_with_code_f_mv_plain();
    cmov_w_with_code_f_mv_allregs();
    cmov_w_with_code_f_mv_constant_simple();
    cmov_w_with_code_f_mv_constant_complex1();
    cmov_w_with_code_f_mv_constant_complex2();
    cmov_l_with_code_0_plain();
    cmov_l_with_code_0_allregs();
    cmov_l_with_code_0_constant_simple();
    cmov_l_with_code_0_constant_complex1();
    cmov_l_with_code_0_constant_complex2();
    cmov_l_with_code_1_mv_plain();
    cmov_l_with_code_1_mv_allregs();
    cmov_l_with_code_1_mv_constant_simple();
    cmov_l_with_code_1_mv_constant_complex1();
    cmov_l_with_code_1_mv_constant_complex2();
    cmov_l_with_code_2_mv_plain();
    cmov_l_with_code_2_mv_allregs();
    cmov_l_with_code_2_mv_constant_simple();
    cmov_l_with_code_2_mv_constant_complex1();
    cmov_l_with_code_2_mv_constant_complex2();
    cmov_l_with_code_3_mv_plain();
    cmov_l_with_code_3_mv_allregs();
    cmov_l_with_code_3_mv_constant_simple();
    cmov_l_with_code_3_mv_constant_complex1();
    cmov_l_with_code_3_mv_constant_complex2();
    cmov_l_with_code_4_mv_plain();
    cmov_l_with_code_4_mv_allregs();
    cmov_l_with_code_4_mv_constant_simple();
    cmov_l_with_code_4_mv_constant_complex1();
    cmov_l_with_code_4_mv_constant_complex2();
    cmov_l_with_code_5_mv_plain();
    cmov_l_with_code_5_mv_allregs();
    cmov_l_with_code_5_mv_constant_simple();
    cmov_l_with_code_5_mv_constant_complex1();
    cmov_l_with_code_5_mv_constant_complex2();
    cmov_l_with_code_6_mv_plain();
    cmov_l_with_code_6_mv_allregs();
    cmov_l_with_code_6_mv_constant_simple();
    cmov_l_with_code_6_mv_constant_complex1();
    cmov_l_with_code_6_mv_constant_complex2();
    cmov_l_with_code_7_mv_plain();
    cmov_l_with_code_7_mv_allregs();
    cmov_l_with_code_7_mv_constant_simple();
    cmov_l_with_code_7_mv_constant_complex1();
    cmov_l_with_code_7_mv_constant_complex2();
    cmov_l_with_code_8_mv_plain();
    cmov_l_with_code_8_mv_allregs();
    cmov_l_with_code_8_mv_constant_simple();
    cmov_l_with_code_8_mv_constant_complex1();
    cmov_l_with_code_8_mv_constant_complex2();
    cmov_l_with_code_9_mv_plain();
    cmov_l_with_code_9_mv_allregs();
    cmov_l_with_code_9_mv_constant_simple();
    cmov_l_with_code_9_mv_constant_complex1();
    cmov_l_with_code_9_mv_constant_complex2();
    cmov_l_with_code_a_mv_plain();
    cmov_l_with_code_a_mv_allregs();
    cmov_l_with_code_a_mv_constant_simple();
    cmov_l_with_code_a_mv_constant_complex1();
    cmov_l_with_code_a_mv_constant_complex2();
    cmov_l_with_code_b_mv_plain();
    cmov_l_with_code_b_mv_allregs();
    cmov_l_with_code_b_mv_constant_simple();
    cmov_l_with_code_b_mv_constant_complex1();
    cmov_l_with_code_b_mv_constant_complex2();
    cmov_l_with_code_c_mv_plain();
    cmov_l_with_code_c_mv_allregs();
    cmov_l_with_code_c_mv_constant_simple();
    cmov_l_with_code_c_mv_constant_complex1();
    cmov_l_with_code_c_mv_constant_complex2();
    cmov_l_with_code_d_mv_plain();
    cmov_l_with_code_d_mv_allregs();
    cmov_l_with_code_d_mv_constant_simple();
    cmov_l_with_code_d_mv_constant_complex1();
    cmov_l_with_code_d_mv_constant_complex2();
    cmov_l_with_code_e_mv_plain();
    cmov_l_with_code_e_mv_allregs();
    cmov_l_with_code_e_mv_constant_simple();
    cmov_l_with_code_e_mv_constant_complex1();
    cmov_l_with_code_e_mv_constant_complex2();
    cmov_l_with_code_f_mv_plain();
    cmov_l_with_code_f_mv_allregs();
    cmov_l_with_code_f_mv_constant_simple();
    cmov_l_with_code_f_mv_constant_complex1();
    cmov_l_with_code_f_mv_constant_complex2();
    return 0;
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_8056578(v1, ebx2, ebp3, __return_address());
}

int32_t g805771c = 0;

void fun_80482ba() {
    goto g805771c;
}

void fun_80482b0() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_80482ca() {
    goto 0x80482a4;
}

void __libc_csu_fini() {
    return;
}

void fun_80564d5(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    uint32_t edi6;
    uint32_t esi7;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x1229;
    _init();
    edi6 = reinterpret_cast<uint32_t>(ebx4 - 0xe0 - (ebx4 - 0xe0) >> 2);
    if (edi6) {
        esi7 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi7 * 4 - 0xe0)(a1, a2, a3);
            ++esi7;
        } while (esi7 < edi6);
    }
    return;
}
