
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_80490d7(int32_t a1, void** a2, int32_t a3) {
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

/* __x86.get_pc_thunk.bp */
void __x86_get_pc_thunk_bp() {
    return;
}

int32_t mystrcpy(void* ecx, signed char* a2, signed char* a3) {
    signed char* edx4;
    signed char* edi5;
    uint32_t ecx6;
    uint32_t ecx7;
    signed char* esi8;
    uint32_t eax9;
    signed char* edi10;
    uint32_t ecx11;
    uint32_t ecx12;

    edx4 = a2;
    edi5 = a3;
    ecx6 = 0xffffffff;
    do {
        if (!ecx6) 
            break;
        --ecx6;
        ++edi5;
    } while (*edi5);
    ecx7 = ~ecx6;
    esi8 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi5) - ecx7);
    eax9 = ecx7;
    edi10 = edx4;
    ecx11 = ecx7 >> 2;
    while (ecx11) {
        --ecx11;
        *edi10 = *esi8;
        edi10 = edi10 + 4;
        esi8 = esi8 + 4;
    }
    ecx12 = eax9 & 3;
    while (ecx12) {
        --ecx12;
        *edi10 = *esi8;
        ++edi10;
        ++esi8;
    }
    return 0;
}

int32_t puts = 0x8049046;

void fun_8049040(int32_t a1, signed char* a2) {
    goto puts;
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

void fun_80490a2() {
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
    fun_80490d7(edx5, v4, eax6);
    ebx7 = ebx8 + 0x2f4c;
    fun_8049050(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2e00, ebx7 - 0x2d90, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_80490e2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

/* completed.0 */
signed char completed_0 = 0;

void fun_8049182() {
    uint48_t v1;
    int16_t ds2;
    int1_t zf3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    zf3 = completed_0 == 0;
    if (!zf3) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        deregister_tm_clones();
        completed_0 = 1;
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void fun_80491b2() {
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

void fun_8049202() {
    uint64_t v1;
    int16_t ds2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t edi5;
    int32_t v6;
    int32_t ebx7;
    int32_t esi8;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bp();
    ebp3 = ebp4 + 0x2df6;
    edi5 = v6;
    _init();
    ebx7 = ebp3 - 0xf0 - (ebp3 - 0xf4) >> 2;
    if (ebx7) {
        esi8 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebp3 + esi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), edi5, 0x8049221);
            ++esi8;
        } while (ebx7 != esi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_8049272() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804927e() {
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

void fun_8049127() {
}

void fun_8049174() {
}

void fun_80491a1() {
}

void fun_8049265() {
}

int32_t g804c008 = 0;

void fun_8049046() {
    goto g804c008;
}

void fun_8049056() {
    goto 0x8049030;
}

void fun_8049131() {
}

void fun_8049179() {
}

void fun_80491a9() {
}

int32_t main() {
    mystrcpy(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4, 0x804c040, "hello world");
    fun_8049040(0x804c040, "hello world");
    return 0;
}
