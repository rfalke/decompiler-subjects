
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

    eax1 = 0x804c01c;
    if (1 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = __libc_start_main(0x804c01c, v2);
        return eax3;
    }
}

struct s0 {
    signed char[24] pad24;
    int32_t f18;
};

int32_t fun_8049040(int32_t a1, int32_t a2);

void fun_804918c() {
    struct s0* eax1;
    int32_t edx2;
    int32_t eax3;
    int32_t ebp4;
    int32_t v5;

    eax1 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__return_address()) + 0x2e74);
    edx2 = eax1->f18;
    eax3 = fun_8049040(reinterpret_cast<int32_t>(eax1) - 0x1ff4, edx2);
    *reinterpret_cast<int32_t*>(ebp4 - 8) = eax3;
    goto v5;
}

int32_t printf = 0x8049046;

int32_t fun_8049040(int32_t a1, int32_t a2) {
    goto printf;
}

struct s1 {
    signed char[24] pad24;
    int32_t f18;
};

struct s2 {
    signed char[24] pad24;
    int32_t f18;
};

void a_func(int32_t a1, int32_t a2);

void fun_80491cc() {
    struct s1* eax1;
    int32_t ebp2;
    int32_t edx3;
    int32_t v4;
    int32_t ebp5;
    int32_t eax6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t v9;

    eax1 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(__return_address()) + 0x2e34);
    *reinterpret_cast<int32_t*>(ebp2 - 8) = 0;
    edx3 = eax1->f18;
    v4 = reinterpret_cast<int32_t>(eax1) - 0x1fe7;
    *reinterpret_cast<struct s1**>(ebp5 - 12) = eax1;
    eax6 = fun_8049040(v4, edx3);
    (*reinterpret_cast<struct s2**>(ebp7 - 12))->f18 = (*reinterpret_cast<struct s2**>(ebp7 - 12))->f18 + 1;
    *reinterpret_cast<int32_t*>(ebp8 - 16) = eax6;
    a_func(v4, edx3);
    goto v9;
}

struct s3 {
    signed char[24] pad24;
    int32_t f18;
};

void a_func(int32_t a1, int32_t a2) {
    struct s3* eax3;
    int32_t v4;
    int32_t edx5;

    fun_804918c();
    eax3 = reinterpret_cast<struct s3*>(v4 + 0x2e74);
    edx5 = eax3->f18;
    fun_8049040(reinterpret_cast<int32_t>(eax3) - 0x1ff4, edx5);
    goto a1;
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

void main();

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
    fun_8049050(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2de0, ebx7 - 0x2d80, edx5, v4, eax6);
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
        __libc_start_main(0x804c01c, 0);
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void _init();

void fun_8049222() {
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
    ebx3 = ebx4 + 0x2dd3;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804923f);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_8049282() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804928a() {
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

void fun_804927d() {
}

int32_t g804c008 = 0;

void fun_8049046() {
    goto g804c008;
}

void fun_8049056() {
    goto 0x8049030;
}

void fun_80490f1() {
}

void fun_8049139() {
}

void fun_8049169() {
}

void main() {
    fun_80491cc();
}
