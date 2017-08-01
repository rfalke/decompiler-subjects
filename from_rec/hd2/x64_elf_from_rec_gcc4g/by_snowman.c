
void call_gmon_start();

void frame_dummy();

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

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (zf1 || 1) {
        return;
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
        *reinterpret_cast<int32_t*>(&rbx2) = 0x600cb0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0;
        do {
            --rbx2;
            rax1();
            rax1 = *rbx2;
        } while (rax1 != -1);
    }
    return;
}

int64_t strlen = 0x400636;

int32_t fun_400630(void* rdi, void* rsi, void* rdx) {
    goto strlen;
}

int64_t memcpy = 0x400676;

void fun_400670(int64_t rdi, int64_t rsi, int64_t rdx) {
    goto memcpy;
}

int64_t puts = 0x400606;

void fun_400600(void* rdi, int64_t rsi, int64_t rdx) {
    goto puts;
}

int32_t stat(int64_t rdi, void* rsi);

void* fun_400610(int64_t rdi, void* rsi);

int32_t fun_400680(void* rdi, void* rsi, void* rdx, void* rcx);

void dumpline(void* rdi, void* rsi, int32_t edx);

void fun_4006a0(int64_t rdi, void* rsi);

void fun_400690(void* rdi, void* rsi, void* rdx, void* rcx);

int32_t hexdump(int64_t rdi) {
    void* rbp2;
    void* rsi3;
    int32_t eax4;
    void* rdx5;
    void* rsi6;
    void* rax7;
    void* v8;
    void* v9;
    void* v10;
    void* rcx11;
    int32_t eax12;
    int32_t eax13;

    rbp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rsi3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp2) - 0xc0);
    eax4 = stat(rdi, rsi3);
    if (!eax4) {
        *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>("rb");
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
        rsi6 = reinterpret_cast<void*>("rb");
        rax7 = fun_400610(rdi, "rb");
        v8 = rax7;
        if (v8) {
            v9 = reinterpret_cast<void*>(0);
            while (reinterpret_cast<uint64_t>(v10) > reinterpret_cast<uint64_t>(v9)) {
                rcx11 = v8;
                *reinterpret_cast<int32_t*>(&rdx5) = 16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rsi6) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
                eax12 = fun_400680(reinterpret_cast<int64_t>(rbp2) - 48, 1, 16, rcx11);
                if (!eax12) 
                    goto addr_400a20_6;
                *reinterpret_cast<int32_t*>(&rdx5) = eax12;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
                rcx11 = v9;
                rsi6 = rcx11;
                dumpline(reinterpret_cast<int64_t>(rbp2) - 48, rsi6, *reinterpret_cast<int32_t*>(&rdx5));
                v9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(v9) + static_cast<int64_t>(eax12));
            }
        } else {
            fun_4006a0(rdi, "rb");
            eax13 = 1;
            goto addr_400a32_9;
        }
    } else {
        fun_4006a0(rdi, rsi3);
        eax13 = 1;
        goto addr_400a32_9;
    }
    addr_400a21_12:
    fun_400690(v8, rsi6, rdx5, rcx11);
    eax13 = 0;
    addr_400a32_9:
    return eax13;
    addr_400a20_6:
    goto addr_400a21_12;
}

int64_t perror = 0x4006a6;

void fun_4006a0(int64_t rdi, void* rsi) {
    goto perror;
}

void fun_400650(void* rdi, void* rsi, void* rdx);

void fun_400660(void* rdi, void* rsi);

void dumpline(void* rdi, void* rsi, int32_t edx) {
    void* rbp4;
    void* v5;
    int32_t v6;
    void* rdx7;
    void* rsi8;
    int32_t v9;
    uint32_t eax10;
    unsigned char al11;
    int32_t eax12;
    int32_t v13;
    int32_t v14;
    uint32_t eax15;
    uint32_t eax16;
    uint32_t eax17;
    int64_t rax18;
    int64_t rdx19;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v5 = rdi;
    v6 = edx;
    rdx7 = rsi;
    rsi8 = reinterpret_cast<void*>("%08lX:");
    fun_400650(reinterpret_cast<int64_t>(rbp4) - 0x70, "%08lX:", rdx7);
    if (v6 > 16) {
        v6 = 16;
    }
    v9 = 0;
    while (v9 < v6) {
        eax10 = *reinterpret_cast<unsigned char*>(v9 + reinterpret_cast<int64_t>(v5));
        *reinterpret_cast<uint32_t*>(&rdx7) = *reinterpret_cast<unsigned char*>(&eax10);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
        rsi8 = reinterpret_cast<void*>(" %02lX");
        fun_400650(reinterpret_cast<int64_t>(rbp4) - 0x70 + (v9 + v9 + v9 + 9), " %02lX", rdx7);
        ++v9;
    }
    while (al11 = reinterpret_cast<uint1_t>(v9 <= 15), ++v9, !!al11) {
        *reinterpret_cast<uint32_t*>(&rdx7) = reinterpret_cast<uint32_t>("   ");
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
        rsi8 = reinterpret_cast<void*>("   ");
        fun_400660(reinterpret_cast<int64_t>(rbp4) - 0x70, "   ");
    }
    eax12 = fun_400630(reinterpret_cast<int64_t>(rbp4) - 0x70, rsi8, rdx7);
    fun_400670(reinterpret_cast<int64_t>(rbp4) - 0x70 + eax12, "  |", 4);
    v13 = eax12 + 3;
    v14 = 0;
    while (v14 < v6) {
        eax15 = *reinterpret_cast<unsigned char*>(v14 + reinterpret_cast<int64_t>(v5));
        if (*reinterpret_cast<unsigned char*>(&eax15) <= 31 || (eax16 = *reinterpret_cast<unsigned char*>(v14 + reinterpret_cast<int64_t>(v5)), *reinterpret_cast<unsigned char*>(&eax16) > 0x7e)) {
            eax17 = 46;
        } else {
            eax17 = *reinterpret_cast<unsigned char*>(v14 + reinterpret_cast<int64_t>(v5));
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp4) + (v13 + v14) - 0x70) = *reinterpret_cast<signed char*>(&eax17);
        ++v14;
    }
    while (v14 <= 15) {
        *reinterpret_cast<int32_t*>(&rax18) = v13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx19) = v14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp4) + static_cast<int32_t>(rdx19 + rax18) - 0x70) = 32;
        ++v14;
    }
    fun_400670(reinterpret_cast<int64_t>(rbp4) - 0x70 + (v13 + static_cast<int64_t>(v14)), "|", 2);
    fun_400600(reinterpret_cast<int64_t>(rbp4) - 0x70, "|", 2);
    return;
}

int64_t sprintf = 0x400656;

void fun_400650(void* rdi, void* rsi, void* rdx) {
    goto sprintf;
}

int64_t strcat = 0x400666;

void fun_400660(void* rdi, void* rsi) {
    goto strcat;
}

int64_t __xstat = 0x400646;

int32_t stat(int64_t rdi, void* rsi) {
    goto __xstat;
}

int64_t fopen = 0x400616;

void* fun_400610(int64_t rdi, void* rsi) {
    goto fopen;
}

int64_t fread = 0x400686;

int32_t fun_400680(void* rdi, void* rsi, void* rdx, void* rcx) {
    goto fread;
}

int64_t fclose = 0x400696;

void fun_400690(void* rdi, void* rsi, void* rdx, void* rcx) {
    goto fclose;
}

signed char _edata = 0;

/* dtor_idx.6343 */
uint64_t dtor_idx_6343 = 0;

void __do_global_dtors_aux() {
    int1_t zf1;
    uint64_t rax2;
    uint64_t rax3;

    zf1 = _edata == 0;
    if (zf1) {
        rax2 = dtor_idx_6343;
        if (rax2 < 0) {
            do {
                rax3 = rax2 + 1;
                dtor_idx_6343 = rax3;
                *reinterpret_cast<int64_t*>(rax3 * 8 + 0x600cc0)();
                rax2 = dtor_idx_6343;
            } while (rax2 < 0);
        }
        _edata = 1;
    }
    return;
}

int64_t __libc_start_main = 0x400626;

void fun_400620(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

void __libc_csu_fini() {
    return;
}

void _fini() {
    __do_global_dtors_aux();
    return;
}

int64_t g600e90 = 0;

void fun_400636() {
    goto g600e90;
}

void fun_400676() {
    goto 0x4005f0;
}

void fun_400606() {
    goto 0x4005f0;
}

void fun_4006a6() {
    goto 0x4005f0;
}

int64_t main(int32_t edi, int64_t* rsi) {
    int32_t v3;
    int64_t* v4;
    int32_t v5;
    int32_t v6;
    int64_t rdi7;
    int32_t eax8;
    int64_t rax9;

    v3 = edi;
    v4 = rsi;
    v5 = 0;
    v6 = 1;
    while (v6 < v3) {
        rdi7 = *reinterpret_cast<int64_t*>((static_cast<int64_t>(v6) << 3) + reinterpret_cast<int64_t>(v4));
        eax8 = hexdump(rdi7);
        v5 = v5 + eax8;
        ++v6;
    }
    *reinterpret_cast<int32_t*>(&rax9) = v5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    return rax9;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r13d4;
    int64_t r14_5;
    int64_t r15_6;
    uint64_t rbx7;
    int64_t rdi8;

    r13d4 = edi;
    r14_5 = rsi;
    r15_6 = rdx;
    _init();
    if (!1) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r13d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x600cac + rbx7 * 8)(rdi8, r14_5, r15_6);
            ++rbx7;
        } while (rbx7 < 0);
    }
    return;
}

void fun_400656() {
    goto 0x4005f0;
}

void fun_400666() {
    goto 0x4005f0;
}

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_400620(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void fun_400616() {
    goto 0x4005f0;
}

void fun_400686() {
    goto 0x4005f0;
}

void fun_400696() {
    goto 0x4005f0;
}

void fun_400646() {
    goto 0x4005f0;
}

void fun_400626() {
    goto 0x4005f0;
}
