
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t puts = 0x8049056;

void fun_8049050(int32_t a1, uint32_t a2) {
    goto puts;
}

int32_t stdout = 0;

void fun_8049070(int32_t a1, int32_t a2);

void fun_8049040(int32_t a1, uint32_t a2);

void print(int32_t a1, uint32_t a2, int32_t a3) {
    uint32_t v4;
    int32_t ebx5;
    int32_t eax6;
    int32_t v7;

    v4 = reinterpret_cast<uint32_t>(__return_address());
    ebx5 = 0;
    do {
        eax6 = *reinterpret_cast<signed char*>(ebx5 + 0x804c028);
        ++ebx5;
        v7 = stdout;
        fun_8049070(eax6, v7);
    } while (ebx5 != 30);
    fun_8049040(" : %s\n", v4);
    return;
}

int32_t i386_memset_forward_b(signed char* a1, unsigned char a2, int32_t a3) {
    signed char* edi4;
    uint32_t eax5;
    int32_t ecx6;

    edi4 = a1;
    eax5 = a2;
    ecx6 = a3;
    while (ecx6) {
        --ecx6;
        *edi4 = *reinterpret_cast<signed char*>(&eax5);
        ++edi4;
    }
    return 0;
}

int32_t i386_memset_forward_w(int16_t* a1, uint16_t a2, int32_t a3) {
    int16_t* edi4;
    uint32_t eax5;
    int32_t ecx6;

    edi4 = a1;
    eax5 = a2;
    ecx6 = a3;
    while (*reinterpret_cast<int16_t*>(&ecx6)) {
        *reinterpret_cast<int16_t*>(&ecx6) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx6) - 1);
        *edi4 = *reinterpret_cast<int16_t*>(&eax5);
        ++edi4;
    }
    return 0;
}

int32_t i386_memset_forward_l(uint32_t* a1, uint32_t a2, int32_t a3) {
    uint32_t* edi4;
    uint32_t eax5;
    int32_t ecx6;

    edi4 = a1;
    eax5 = a2;
    ecx6 = a3;
    while (ecx6) {
        --ecx6;
        *edi4 = eax5;
        ++edi4;
    }
    return 0;
}

int32_t i386_memset_backward_b(signed char* a1, unsigned char a2, int32_t a3) {
    signed char* edi4;
    uint32_t eax5;
    int32_t ecx6;

    edi4 = a1;
    eax5 = a2;
    ecx6 = a3;
    while (ecx6) {
        --ecx6;
        *edi4 = *reinterpret_cast<signed char*>(&eax5);
        --edi4;
    }
    return 0;
}

int32_t i386_memset_backward_w(int16_t* a1, uint16_t a2, int32_t a3) {
    int16_t* edi4;
    uint32_t eax5;
    int32_t ecx6;

    edi4 = a1;
    eax5 = a2;
    ecx6 = a3;
    while (*reinterpret_cast<int16_t*>(&ecx6)) {
        *reinterpret_cast<int16_t*>(&ecx6) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx6) - 1);
        *edi4 = *reinterpret_cast<int16_t*>(&eax5);
        --edi4;
    }
    return 0;
}

int32_t i386_memset_backward_l(uint32_t* a1, uint32_t a2, int32_t a3) {
    uint32_t* edi4;
    uint32_t eax5;
    int32_t ecx6;

    edi4 = a1;
    eax5 = a2;
    ecx6 = a3;
    while (ecx6) {
        --ecx6;
        *edi4 = eax5;
        --edi4;
    }
    return 0;
}

int32_t i386_memset_both_b(signed char* a1, unsigned char a2, int32_t a3, int32_t a4, int32_t a5, uint32_t a6, int32_t a7) {
    uint1_t df8;
    signed char* edi9;
    uint32_t eax10;
    int32_t ecx11;
    uint32_t tmp32_12;

    df8 = 0;
    if (a4) {
        df8 = 1;
    }
    edi9 = a1;
    eax10 = a2;
    ecx11 = a3;
    tmp32_12 = 1 - 2 * df8;
    while (ecx11) {
        --ecx11;
        *edi9 = *reinterpret_cast<signed char*>(&eax10);
        edi9 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi9) + tmp32_12);
    }
    return 0;
}

int32_t i386_memset_both_w(int16_t* a1, uint16_t a2, int32_t a3, int32_t a4, int32_t a5, uint32_t a6, int32_t a7) {
    uint1_t df8;
    int16_t* edi9;
    uint32_t eax10;
    int32_t ecx11;
    uint32_t tmp32_12;

    df8 = 0;
    if (a4) {
        df8 = 1;
    }
    edi9 = a1;
    eax10 = a2;
    ecx11 = a3;
    tmp32_12 = 2 - 4 * df8;
    while (*reinterpret_cast<int16_t*>(&ecx11)) {
        *reinterpret_cast<int16_t*>(&ecx11) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx11) - 1);
        *edi9 = *reinterpret_cast<int16_t*>(&eax10);
        edi9 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edi9) + tmp32_12);
    }
    return 0;
}

int32_t i386_memset_both_l(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, uint32_t a6, int32_t a7) {
    uint1_t df8;
    int32_t* edi9;
    int32_t eax10;
    int32_t ecx11;
    uint32_t tmp32_12;

    df8 = 0;
    if (a4) {
        df8 = 1;
    }
    edi9 = a1;
    eax10 = a2;
    ecx11 = a3;
    tmp32_12 = 4 - 8 * df8;
    while (ecx11) {
        --ecx11;
        *edi9 = eax10;
        edi9 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi9) + tmp32_12);
    }
    return 0;
}

void fun_8049467(int32_t a1, void** a2, int32_t a3) {
    return;
}

int32_t __libc_start_main = 0x8049066;

void fun_8049060(int32_t a1, int16_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t putc(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 0x804c020;
    if (1 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = putc(0x804c020, v2);
        return eax3;
    }
}

int32_t printf = 0x8049046;

void fun_8049040(int32_t a1, uint32_t a2) {
    goto printf;
}

int32_t putc = 0x8049076;

void fun_8049070(int32_t a1, int32_t a2) {
    goto putc;
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

void fun_8049432() {
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
    fun_8049467(edx5, v4, eax6);
    ebx7 = ebx8 + 0x2bbc;
    fun_8049060(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2930, ebx7 - 0x28d0, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_8049472() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

/* completed.6844 */
signed char completed_6844 = 0;

void fun_8049512() {
    uint48_t v1;
    int16_t ds2;
    int1_t zf3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    zf3 = completed_6844 == 0;
    if (!zf3) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        deregister_tm_clones();
        completed_6844 = 1;
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void fun_8049542() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    if (1 || 1) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        putc(0x804c020, 0);
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void _init();

void fun_80496d2() {
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
    ebx3 = ebx4 + 0x2923;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x80496ef);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_8049732() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804973a() {
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

void fun_80494b7() {
}

void fun_8049504() {
}

void fun_8049531() {
}

void fun_80495b7() {
}

void fun_80495d8() {
}

void fun_8049617() {
}

void fun_8049638() {
}

void fun_80496a1() {
}

void fun_804972d() {
}

int32_t g804c008 = 0;

void fun_8049056() {
    goto g804c008;
}

void fun_8049066() {
    goto 0x8049030;
}

void fun_80494c1() {
}

void fun_8049509() {
}

void fun_8049539() {
}

void fun_8049046() {
    goto 0x8049030;
}

void fun_8049076() {
    goto 0x8049030;
}

int16_t g804c044 = 0;

int32_t buffer = 0;

int32_t g804c02c = 0;

int32_t g804c030 = 0;

int32_t g804c034 = 0;

int32_t g804c038 = 0;

int32_t g804c03c = 0;

int32_t g804c040 = 0;

int32_t main() {
    int32_t ebx1;
    int32_t ecx2;
    uint32_t edx3;
    uint32_t eax4;
    uint32_t v5;
    int32_t v6;

    ebx1 = 0;
    do {
        ecx2 = ebx1;
        ++ebx1;
        edx3 = __intrinsic() >> 3;
        eax4 = edx3 + edx3 * 4;
        v5 = ecx2 - (eax4 + eax4);
        fun_8049040("%d", v5);
    } while (ebx1 != 30);
    fun_8049050(0x804a012, v5);
    g804c044 = 0x5f5f;
    buffer = 0x5f5f5f5f;
    g804c02c = 0x5f5f5f5f;
    g804c030 = 0x5f5f5f5f;
    g804c034 = 0x5f5f5f5f;
    g804c038 = 0x5f5f5f5f;
    g804c03c = 0x5f5f5f5f;
    g804c040 = 0x5f5f5f5f;
    print("initial", v5, v6);
    i386_memset_forward_b(0x804c02b, 0x78, 5);
    print("5 'x' from 3", 0x78, 5);
    i386_memset_forward_w(0x804c032, 0x2928, 3);
    print("3 '()' from 10", 0x2928, 3);
    i386_memset_forward_l(0x804c03c, 0x3e62613c, 2);
    print("2 '<ab>' from 20", 0x3e62613c, 2);
    g804c044 = 0x5f5f;
    buffer = 0x5f5f5f5f;
    g804c02c = 0x5f5f5f5f;
    g804c030 = 0x5f5f5f5f;
    g804c034 = 0x5f5f5f5f;
    g804c038 = 0x5f5f5f5f;
    g804c03c = 0x5f5f5f5f;
    g804c040 = 0x5f5f5f5f;
    print("reset for following backward tests", 0x3e62613c, 2);
    i386_memset_backward_b(0x804c02f, 0x78, 5);
    print("5 'x' from 3", 0x78, 5);
    i386_memset_backward_w(0x804c036, 0x2928, 3);
    print("3 '()' from 10", 0x2928, 3);
    i386_memset_backward_l(0x804c040, 0x3e62613c, 2);
    print("2 '<ab>' from 20", 0x3e62613c, 2);
    g804c044 = 0x5f5f;
    buffer = 0x5f5f5f5f;
    g804c02c = 0x5f5f5f5f;
    g804c030 = 0x5f5f5f5f;
    g804c034 = 0x5f5f5f5f;
    g804c038 = 0x5f5f5f5f;
    g804c03c = 0x5f5f5f5f;
    g804c040 = 0x5f5f5f5f;
    print("reset for following bi directional tests", 0x3e62613c, 2);
    i386_memset_both_b(0x804c02b, 0x78, 5, 0, "reset for following bi directional tests", 0x3e62613c, 2);
    print("5 'x' from 3", 0x3e62613c, 2);
    i386_memset_both_b(0x804c02f, 0x79, 5, 1, "5 'x' from 3", 0x3e62613c, 2);
    print("5 'y' from 3", 0x3e62613c, 2);
    g804c044 = 0x5f5f;
    buffer = 0x5f5f5f5f;
    g804c02c = 0x5f5f5f5f;
    g804c030 = 0x5f5f5f5f;
    g804c034 = 0x5f5f5f5f;
    g804c038 = 0x5f5f5f5f;
    g804c03c = 0x5f5f5f5f;
    g804c040 = 0x5f5f5f5f;
    print("reset for following bi directional tests", 0x3e62613c, 2);
    i386_memset_both_w(0x804c032, 0x2928, 3, 0, "reset for following bi directional tests", 0x3e62613c, 2);
    print("3 '()' from 10", 0x3e62613c, 2);
    i386_memset_both_w(0x804c036, 0x7d7b, 3, 1, "3 '()' from 10", 0x3e62613c, 2);
    print("3 '{}' from 10", 0x3e62613c, 2);
    g804c044 = 0x5f5f;
    buffer = 0x5f5f5f5f;
    g804c02c = 0x5f5f5f5f;
    g804c030 = 0x5f5f5f5f;
    g804c034 = 0x5f5f5f5f;
    g804c038 = 0x5f5f5f5f;
    g804c03c = 0x5f5f5f5f;
    g804c040 = 0x5f5f5f5f;
    print("reset for following bi directional tests", 0x3e62613c, 2);
    i386_memset_both_l(0x804c03c, 0x3e62613c, 2, 0, "reset for following bi directional tests", 0x3e62613c, 2);
    print("2 '<ab>' from 20", 0x3e62613c, 2);
    i386_memset_both_l(0x804c040, 0x5d42415b, 2, 1, "2 '<ab>' from 20", 0x3e62613c, 2);
    print("2 '[AB]' from 20", 0x3e62613c, 2);
    return 0;
}
