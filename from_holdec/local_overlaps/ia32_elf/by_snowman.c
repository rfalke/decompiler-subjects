
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_80490e7(int32_t a1, void** a2, int32_t a3) {
    return;
}

int32_t __libc_start_main = 0x8049066;

void fun_8049060(int32_t a1, int16_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t __libc_start_main(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 0x804c01c;
    if (1 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = __libc_start_main(0x804c01c, v2);
        return eax3;
    }
}

int32_t puts = 0x8049056;

void fun_8049050(int32_t a1) {
    goto puts;
}

void fun_8049040(int32_t a1, int32_t a2, void* a3);

int32_t dump1(int32_t a1, int16_t a2, ...) {
    void* v3;

    fun_8049040("got 0x%08x\n", __return_address(), v3);
    return 0;
}

int32_t printf = 0x8049046;

void fun_8049040(int32_t a1, int32_t a2, void* a3) {
    goto printf;
}

int32_t test1() {
    fun_8049050("1) init with bytes, 4 byte read (should=0x60504030)");
    dump1(0x60504030, 0x2010, 0x60504030, 0x2010);
    return 0;
}

int32_t test2() {
    fun_8049050("2) init with bytes, 2 byte extra write, 4 byte read (should=0x61514030)");
    dump1(0x61514030, 0x2010, 0x61514030, 0x2010);
    return 0;
}

int32_t test3() {
    fun_8049050("3) init with bytes, 2 byte extra write, 4 byte extra write, 4 byte read (should=0x62514030)");
    dump1(0x62514030, 0x2010);
    return 0;
}

int32_t dump2(void* a1, int32_t a2, int16_t a3);

int32_t test4() {
    fun_8049050("4) init with bytes, address of taken, 4 byte read (should=0x60504030)");
    dump2(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 + 4 + 4 - 16 - 4, 0x60504030, 0x2010);
    return 0;
}

int32_t modify(signed char* a1, int16_t a2);

int32_t test5() {
    fun_8049050("5) init with bytes, address of taken BEFORE and modify, 4 byte read (should=0x60524030)");
    modify(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 + 4 + 4 - 16 + 4, 0x2010);
    dump1(0x60504030, 0x2010, 0x60504030, 0x2010);
    return 0;
}

int32_t test6() {
    fun_8049050("6) init with bytes, 2 byte extra write, double 2 byte modify, 4 byte read (should=0x61514230)");
    dump1(0x61514230, 0x2010, 0x61514230, 0x2010);
    return 0;
}

int32_t modify(signed char* a1, int16_t a2) {
    *a1 = reinterpret_cast<signed char>(*a1 + 1);
    *a1 = reinterpret_cast<signed char>(*a1 + 1);
    return 0;
}

int32_t dump2(void* a1, int32_t a2, int16_t a3) {
    fun_8049040("got 0x%08x, 0x%08x\n", __return_address(), a1);
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

void fun_80490b2() {
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
    fun_80490e7(edx5, v4, eax6);
    ebx7 = ebx8 + 0x2f3c;
    fun_8049060(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2b10, ebx7 - 0x2ab0, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_80490f2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_8049192() {
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

void fun_80491c2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    if (1 || 1) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        __libc_start_main(0x804c01c, 0);
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void _init();

void fun_80494f2() {
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
    ebx3 = ebx4 + 0x2b03;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804950f);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_8049552() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804955a() {
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

void fun_8049137() {
}

void fun_8049184() {
}

void fun_80491b1() {
}

void fun_804954d() {
}

int32_t g804c008 = 0;

void fun_8049046() {
    goto g804c008;
}

void fun_8049066() {
    goto 0x8049030;
}

void fun_8049141() {
}

void fun_8049189() {
}

void fun_80491b9() {
}

int32_t main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    return 0;
}

void fun_8049056() {
    goto 0x8049030;
}

void fun_80494c7() {
}
