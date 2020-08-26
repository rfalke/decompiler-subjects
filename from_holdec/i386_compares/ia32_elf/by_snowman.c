
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t printf = 0x8049046;

void fun_8049040(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7) {
    goto printf;
}

void fun_8049207(int32_t a1, void** a2, int32_t a3) {
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

uint32_t do_cmp(unsigned char a1, unsigned char a2, uint32_t a3) {
    uint32_t eax4;
    uint32_t edx5;
    uint32_t eax6;

    eax4 = a1;
    edx5 = a2;
    eax6 = 0;
    *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax4) < *reinterpret_cast<signed char*>(&edx5));
    return eax6;
}

uint32_t do_signed(uint32_t ecx, unsigned char a2, unsigned char a3, uint32_t a4) {
    uint32_t eax5;
    uint32_t edx6;
    uint32_t eax7;

    eax5 = a2;
    edx6 = a3;
    eax7 = 0;
    *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax5) < *reinterpret_cast<signed char*>(&edx6));
    return eax7;
}

uint32_t do_cmp_const(unsigned char a1, uint32_t a2, uint32_t a3) {
    uint32_t eax4;
    uint32_t eax5;

    eax4 = a1;
    eax5 = 0;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax4) < 10);
    return eax5;
}

uint32_t do_signed_const(unsigned char a1, uint32_t a2, uint32_t a3) {
    uint32_t eax4;
    uint32_t eax5;

    eax4 = a1;
    eax5 = 0;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax4) < 10);
    return eax5;
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

void fun_80491d2() {
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
    fun_8049207(edx5, v4, eax6);
    ebx7 = ebx8 + 0x2e1c;
    fun_8049050(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2cd0, ebx7 - 0x2c70, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_8049212() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_80492b2() {
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

void fun_80492e2() {
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

void fun_8049332() {
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
    ebx3 = ebx4 + 0x2cc3;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804934f);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_8049392() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804939a() {
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

void fun_8049257() {
}

void fun_80492a4() {
}

void fun_80492d1() {
}

void fun_804938d() {
}

int32_t g804c008 = 0;

void fun_8049046() {
    goto g804c008;
}

void fun_8049056() {
    goto 0x8049030;
}

void fun_8049261() {
}

void fun_80492a9() {
}

void fun_80492d9() {
}

int32_t main() {
    uint32_t esi1;
    uint32_t v2;
    uint32_t v3;
    uint32_t v4;
    uint32_t eax5;
    uint32_t v6;
    uint32_t eax7;
    uint32_t edx8;
    uint32_t eax9;
    uint32_t v10;
    uint32_t eax11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint32_t v21;
    uint32_t v22;
    uint32_t ebx23;
    uint32_t esi24;
    uint32_t v25;
    uint32_t v26;
    uint32_t eax27;
    uint32_t v28;
    uint32_t eax29;
    uint32_t ecx30;
    uint32_t edx31;
    uint32_t v32;
    uint32_t v33;
    uint32_t v34;
    uint32_t v35;
    uint32_t v36;
    uint32_t v37;

    esi1 = 0;
    do {
        v2 = esi1;
        eax5 = do_cmp_const(*reinterpret_cast<unsigned char*>(&v2), v3, v4);
        v6 = esi1;
        eax7 = do_signed_const(*reinterpret_cast<unsigned char*>(&v6), v3, v4);
        edx8 = eax7;
        eax9 = esi1;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v10) + 3) = *reinterpret_cast<signed char*>(&eax9);
        eax11 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax9) <= 9);
        if (eax5 != eax11) {
            fun_8049040("CONST C and setl differ: %3d = 0x%02x  ->  ", esi1, esi1, v12, v13, v14, v10);
            v4 = eax11;
            fun_8049040("x<10 = %d %d\n", eax5, v4, v15, v16, v14, v10);
            edx8 = edx8;
        }
        if (eax5 != edx8) {
            fun_8049040("CONST %3d = 0x%02x  ->  ", esi1, esi1, v17, v18, v14, v10);
            v4 = eax11;
            fun_8049040("x<10 = %d %d ", eax5, v4, v19, v20, v14, v10);
            fun_8049040("x-10<0 =%d\n", edx8, v4, v21, v22, v14, v10);
        }
        ebx23 = 0;
        esi24 = esi1;
        do {
            v25 = ebx23;
            v26 = esi24;
            eax27 = do_cmp(*reinterpret_cast<unsigned char*>(&v26), *reinterpret_cast<unsigned char*>(&v25), v4);
            v3 = ebx23;
            v28 = esi24;
            eax29 = do_signed(v26, *reinterpret_cast<unsigned char*>(&v28), *reinterpret_cast<unsigned char*>(&v3), v4);
            ecx30 = 0;
            *reinterpret_cast<unsigned char*>(&ecx30) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v10) + 3) < *reinterpret_cast<signed char*>(&ebx23));
            edx31 = eax29;
            if (eax27 != ecx30) {
                v14 = eax29;
                fun_8049040("C and setl differ: %3d = 0x%02x %3d = 0x%02x  ->  ", esi24, esi24, ebx23, ebx23, v3, v4);
                v4 = ecx30;
                v3 = eax27;
                fun_8049040("x<y = %d %d\n", v3, v4, v32, v33, v14, v10);
                edx31 = v14;
            }
            if (eax27 != edx31) {
                fun_8049040("%3d = 0x%02x %3d = 0x%02x  ->  ", esi24, esi24, ebx23, ebx23, v3, v4);
                fun_8049040("x<y = %d ", eax27, v4, v34, v35, v14, v10);
                v3 = edx31;
                fun_8049040("x-y<0 =%d\n", v3, v4, v36, v37, v14, v10);
            }
            ++ebx23;
        } while (ebx23 != 0x100);
        esi1 = esi24 + 1;
    } while (esi1 != 0x100);
    return 0;
}
