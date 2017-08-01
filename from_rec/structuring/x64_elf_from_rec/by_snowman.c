
void call_gmon_start();

int64_t frame_dummy();

void __do_global_ctors_aux();

void _init() {
    call_gmon_start();
    frame_dummy();
    __do_global_ctors_aux();
    return;
}

int64_t __gmon_start__ = 0;

void call_gmon_start() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t __JCR_END__ = 0;

int64_t frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (zf1 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

int64_t __CTOR_LIST__ = -1;

void __do_global_ctors_aux() {
    int64_t rax1;
    int64_t* rbx2;

    rax1 = __CTOR_LIST__;
    if (rax1 != -1) {
        *reinterpret_cast<int32_t*>(&rbx2) = 0x600798;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0;
        do {
            --rbx2;
            rax1();
            rax1 = *rbx2;
        } while (rax1 != -1);
    }
    return;
}

int64_t __libc_start_main = 0x40037e;

void fun_400378(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

void leave() {
    return;
}

void enter() {
    return;
}

/* completed.6068 */
signed char completed_6068 = 0;

/* dtor_idx.6070 */
uint64_t dtor_idx_6070 = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    uint64_t rdx2;
    int64_t rax3;
    uint64_t rax4;

    zf1 = completed_6068 == 0;
    if (zf1) {
        rdx2 = dtor_idx_6070;
        rax3 = 1;
        if (rdx2 < 0) {
            do {
                rax4 = rdx2 + 1;
                dtor_idx_6070 = rax4;
                rax3 = reinterpret_cast<int64_t>(*reinterpret_cast<int64_t*>(rax4 * 8 + 0x6007a8)());
                rdx2 = dtor_idx_6070;
            } while (rdx2 < 0);
        }
        completed_6068 = 1;
    }
    return rax3;
}

void main();

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void __libc_csu_fini();

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_400378(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

int32_t i = 0;

int32_t j = 0;

int64_t loop2() {
    int32_t eax1;
    int64_t rdx2;
    int64_t rax3;
    int32_t v4;
    int32_t eax5;
    int32_t eax6;
    int64_t rax7;

    enter();
    do {
        eax1 = i;
        *reinterpret_cast<int32_t*>(&rdx2) = *reinterpret_cast<int32_t*>(eax1 * 4 + 0x6009c0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx2) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rax3) = j;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        v4 = v4 + static_cast<int32_t>(rdx2 + rax3);
        if (v4 == 10) {
            v4 = v4 + 12;
        }
        eax5 = j;
    } while (eax5 <= 99 || (j = 0, eax6 = i, eax6 <= 99));
    leave();
    *reinterpret_cast<int32_t*>(&rax7) = v4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    return rax7;
}

void __libc_csu_fini() {
    return;
}

int64_t _fini() {
    int64_t rax1;

    rax1 = __do_global_dtors_aux();
    return rax1;
}

int64_t g600978 = 0;

void fun_40037e() {
    goto g600978;
}

void main() {
    return;
}

void loop1() {
    int32_t eax1;
    int32_t eax2;
    int32_t edx3;
    int32_t eax4;

    enter();
    i = 0;
    while (eax1 = i, eax1 <= 99) {
        eax2 = i;
        edx3 = i;
        *reinterpret_cast<int32_t*>(eax2 * 4 + 0x6009c0) = edx3;
        eax4 = i;
        i = eax4 + 1;
    }
    leave();
    return;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r14d4;
    int64_t r13_5;
    int64_t r12_6;
    uint64_t rbx7;
    int64_t rdi8;

    r14d4 = edi;
    r13_5 = rsi;
    r12_6 = rdx;
    _init();
    if (!1) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r14d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x600794 + rbx7 * 8)(rdi8, r13_5, r12_6);
            ++rbx7;
        } while (rbx7 < 0);
    }
    return;
}
