
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_8049097(int32_t a1, void** a2, int32_t a3) {
    return;
}

int32_t __libc_start_main = 0x8049056;

void fun_8049050(int32_t a1, int16_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t __libc_start_main(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 0x804c018;
    if (1 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = __libc_start_main(0x804c018, v2);
        return eax3;
    }
}

int32_t printf = 0x8049046;

void fun_8049040(int32_t a1, uint32_t a2, uint32_t a3, int32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9) {
    goto printf;
}

int32_t double_to_unknown(uint32_t a1, uint32_t a2) {
    uint32_t eax3;
    uint32_t edx4;
    uint32_t ebx5;
    uint32_t ebx6;
    int32_t v7;

    eax3 = a2;
    edx4 = a1;
    ebx5 = eax3 >> 16;
    ebx6 = edx4 >> 16;
    fun_8049040("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", eax3 >> 24, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ebx5)), v7, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax3)), edx4 >> 24, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ebx6)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx4)));
    return 0;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t unknown_to_double(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    int32_t* edi6;
    int32_t* esi7;
    struct s0* edi8;
    struct s1* esi9;
    uint32_t v10;
    uint32_t v11;

    *edi6 = *esi7;
    __asm__("addsd xmm0, xmm0");
    edi8->f4 = esi9->f4;
    fun_8049040("got 2*x=%f\n", v10, v11, __return_address(), a1, a2, a3, a4, a5);
    return 0;
}

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t double_to_double(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    int32_t* edi6;
    int32_t* esi7;
    struct s2* edi8;
    struct s3* esi9;
    uint32_t v10;
    uint32_t v11;

    *edi6 = *esi7;
    __asm__("addsd xmm0, xmm0");
    edi8->f4 = esi9->f4;
    fun_8049040("got 2*x=%f\n", v10, v11, __return_address(), a1, a2, a3, a4, a5);
    return 0;
}

int32_t unknown_to_unknown(uint32_t a1, uint32_t a2) {
    uint32_t eax3;
    uint32_t edx4;
    uint32_t ebx5;
    uint32_t ebx6;
    int32_t v7;

    eax3 = a2;
    edx4 = a1;
    ebx5 = eax3 >> 16;
    ebx6 = edx4 >> 16;
    fun_8049040("got a double with      0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n", eax3 >> 24, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ebx5)), v7, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax3)), edx4 >> 24, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ebx6)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx4) + 1)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx4)));
    return 0;
}

void fun_8049002() {
    uint48_t v1;
    int16_t ds2;
    int32_t eax3;
    int32_t ebx4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    eax3 = *reinterpret_cast<int32_t*>(ebx4 + 0x2ff3 - 4);
    if (eax3) {
        eax3();
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

int32_t main();

void fun_8049062() {
    uint48_t v1;
    int16_t ds2;
    void* esp3;
    void** v4;
    int32_t edx5;
    int32_t eax6;
    int32_t ebx7;
    int32_t ebx8;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 4);
    v4 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(esp3) & 0xfffffff0) - 4 - 4);
    fun_8049097(edx5, v4, eax6);
    ebx7 = ebx8 + 0x2f8c;
    fun_8049050(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2c60, ebx7 - 0x2c00, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_80490a2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_8049142() {
    uint48_t v1;
    int16_t ds2;
    int1_t zf3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    zf3 = __TMC_END__ == 0;
    if (!zf3) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        deregister_tm_clones();
        __TMC_END__ = 1;
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void fun_8049172() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    if (1 || 1) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        __libc_start_main(0x804c018, 0);
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void _init();

void fun_80493a2() {
    uint64_t v1;
    int16_t ds2;
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t v6;
    int32_t esi7;
    int32_t edi8;
    int32_t esi9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x2c53;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x80493bf);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_8049402() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804940a() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804903c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_80490e7() {
}

void fun_8049134() {
}

void fun_8049161() {
}

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    signed char[4] pad4;
    int32_t f4;
};

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    signed char[4] pad4;
    int32_t f4;
};

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

struct s18 {
    int32_t f0;
    int32_t f4;
};

struct s19 {
    int32_t f0;
    int32_t f4;
};

int32_t main() {
    int32_t* edi1;
    int32_t* esi2;
    struct s4* edi3;
    struct s5* edi4;
    struct s6* esi5;
    struct s7* esi6;
    struct s8* edi7;
    struct s9* esi8;
    struct s10* edi9;
    struct s11* esi10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    struct s12* edi14;
    struct s13* esi15;
    struct s14* edi16;
    struct s15* esi17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    struct s16* edi24;
    struct s17* esi25;
    struct s18* edi26;
    struct s19* esi27;
    uint32_t v28;
    uint32_t v29;
    uint32_t v30;

    unknown_to_unknown(0xf5c28f5c, 0x3ff35c28);
    __asm__("cvtsi2sd xmm1, dword [esp+0x40]");
    *edi1 = *esi2;
    edi3 = reinterpret_cast<struct s4*>(&edi4->f4);
    esi5 = reinterpret_cast<struct s6*>(&esi6->f4);
    __asm__("addsd xmm0, xmm1");
    edi3->f0 = esi5->f0;
    edi7 = reinterpret_cast<struct s8*>(&edi3->f4);
    esi8 = reinterpret_cast<struct s9*>(&esi5->f4);
    edi7->f0 = esi8->f0;
    edi9 = reinterpret_cast<struct s10*>(&edi7->f4);
    esi10 = reinterpret_cast<struct s11*>(&esi8->f4);
    double_to_unknown(0xf5c28f5c, 0x3ff35c28);
    unknown_to_double(0x7ae147ae, 0x3ff3ae14, v11, v12, v13);
    edi9->f0 = esi10->f0;
    edi14 = reinterpret_cast<struct s12*>(&edi9->f4);
    esi15 = reinterpret_cast<struct s13*>(&esi10->f4);
    __asm__("addsd xmm0, [esp+0x28]");
    edi14->f0 = esi15->f0;
    edi16 = reinterpret_cast<struct s14*>(&edi14->f4);
    esi17 = reinterpret_cast<struct s15*>(&esi15->f4);
    double_to_double(0x7ae147ae, 0x3ff3ae14, v18, v19, v20);
    __asm__("fld qword [0x804a020]");
    __asm__("fstp tword [esp+0x14]");
    fun_8049040("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 100, 0x47ae147b, 0x40027ae1, 0x65, v21, v22, v23, 0x66);
    edi16->f0 = esi17->f0;
    edi24 = reinterpret_cast<struct s16*>(&edi16->f4);
    esi25 = reinterpret_cast<struct s17*>(&esi17->f4);
    edi24->f0 = esi25->f0;
    edi26 = reinterpret_cast<struct s18*>(&edi24->f4);
    esi27 = reinterpret_cast<struct s19*>(&esi25->f4);
    __asm__("addsd xmm0, xmm1");
    __asm__("addsd xmm1, [0x804a030]");
    edi26->f0 = esi27->f0;
    __asm__("fld qword [esp+0x30]");
    __asm__("fstp tword [esp+0x14]");
    edi26->f4 = esi27->f4;
    fun_8049040("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n", 0xc8, 0x47ae147b, 0x40027ae1, 0xc9, v28, v29, v30, 0xca);
    return 0;
}

void fun_80493fd() {
}

int32_t g804c008 = 0;

void fun_8049056() {
    goto g804c008;
}

void fun_80490f1() {
}

void fun_8049139() {
}

void fun_8049169() {
}

void fun_8049046() {
    goto 0x8049030;
}
