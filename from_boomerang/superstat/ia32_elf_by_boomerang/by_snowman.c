
void call_gmon_start();

int32_t frame_dummy();

int32_t __do_global_ctors_aux();

int32_t _init() {
    int32_t eax1;

    call_gmon_start();
    frame_dummy();
    eax1 = __do_global_ctors_aux();
    return eax1;
}

void fun_80482da();

void call_gmon_start() {
    int32_t eax1;
    int32_t eax2;

    fun_80482da();
    eax1 = *reinterpret_cast<int32_t*>(eax2 + 0x1392 + 24);
    if (eax1) {
        eax1();
    }
    return;
}

int32_t __JCR_END__ = 0;

int32_t __gmon_start__(int32_t a1);

int32_t frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && (eax1 = 0, !1)) {
        eax1 = __gmon_start__(0x8049668);
    }
    return eax1;
}

int32_t __CTOR_LIST__ = -1;

int32_t __do_global_ctors_aux() {
    int32_t v1;
    int32_t edx2;
    int32_t eax3;
    int32_t* ebx4;

    v1 = edx2;
    eax3 = __CTOR_LIST__;
    ebx4 = reinterpret_cast<int32_t*>(0x8049658);
    if (eax3 != -1) {
        do {
            --ebx4;
            eax3();
            eax3 = *ebx4;
        } while (eax3 != -1);
    }
    return v1;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80482da() {
    int32_t eax1;
    struct s0* ebp2;

    eax1 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1392 + 24);
    if (eax1) {
        eax1();
    }
    goto ebp2->f4;
}

void __do_global_dtors_aux();

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80484e6(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t __libc_start_main = 0x8048292;

void __libc_start_main(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t __xstat = 0x8048282;

int32_t __xstat() {
    goto __xstat;
}

int32_t printf = 0x80482a2;

void printf(int32_t ecx, int32_t a2, int32_t a3, void* a4, int32_t a5) {
    goto printf;
}

signed char _edata = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x8049664);

void __do_global_dtors_aux() {
    int1_t zf1;
    int32_t* eax2;
    int32_t edx3;

    zf1 = _edata == 0;
    if (zf1) {
        eax2 = p_0;
        edx3 = *eax2;
        if (edx3) {
            do {
                p_0 = eax2 + 1;
                edx3();
                eax2 = p_0;
                edx3 = *eax2;
            } while (edx3);
        }
        _edata = 1;
    }
    return;
}

void fun_8048278() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_804832e() {
}

void __libc_csu_fini() {
    int32_t v1;
    int32_t v2;
    int32_t ebp3;
    int32_t v4;
    int32_t ebx5;
    int32_t v6;
    int32_t eax7;
    int32_t ebx8;
    int32_t edx9;

    v1 = reinterpret_cast<int32_t>(__return_address());
    v2 = ebp3;
    v4 = ebx5;
    v6 = eax7;
    ebx8 = -1;
    if (0) {
        do {
            *reinterpret_cast<int32_t*>(ebx8 * 4 + 0x8049584)(v6);
            edx9 = ebx8;
            --ebx8;
        } while (edx9);
    }
    fun_80484e6(edx9, v4, v2, v1);
}

void fun_80484a6() {
}

int32_t g8049674 = 0;

void fun_8048282() {
    goto g8049674;
}

int32_t main(int32_t ecx) {
    int32_t eax2;
    int32_t v3;
    void* v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    void* v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    int32_t v17;

    eax2 = __xstat();
    printf(3, "res: %i\n", eax2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x68, ecx);
    printf(3, "dev: %i\n", v3, v4, ecx);
    printf(3, "ino: %i\n", v5, v4, ecx);
    printf("ino: %i\n", "mode: %i\n", v6, v4, ecx);
    printf("ino: %i\n", "nlink: %i\n", v7, v4, ecx);
    printf("nlink: %i\n", "uid: %i\n", v8, v4, ecx);
    printf("nlink: %i\n", "gid: %i\n", v9, v4, ecx);
    printf("nlink: %i\n", "rdev: %i\n", v10, v11, ecx);
    printf("rdev: %i\n", "size: %i\n", v12, v11, ecx);
    printf("rdev: %i\n", "blksize: %i\n", v13, v11, ecx);
    printf("blksize: %i\n", "blocks: %i\n", v14, v11, ecx);
    printf("blksize: %i\n", "atime: %i\n", v15, v11, ecx);
    printf("atime: %i\n", "mtime: %i\n", v16, v11, ecx);
    printf("atime: %i\n", "ctime: %i\n", v17, v11, ecx);
    return 0;
}

int32_t __libc_csu_init() {
    int32_t eax1;
    uint32_t ebx2;

    _init();
    eax1 = 0;
    ebx2 = 0;
    if (!1) {
        do {
            eax1 = reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(ebx2 * 4 + 0x8049584)());
            ++ebx2;
        } while (ebx2 < 0);
    }
    return eax1;
}

void fun_8048292() {
    goto 0x804826c;
}

void fun_80482a2() {
    goto 0x804826c;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    __libc_start_main(main, __return_address(), esp1, __libc_csu_init, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}
