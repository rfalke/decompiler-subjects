
int32_t call_gmon_start(int32_t ecx);

void frame_dummy();

int32_t __do_global_ctors_aux();

int32_t _init(int32_t ecx) {
    int32_t eax2;

    call_gmon_start(ecx);
    frame_dummy();
    eax2 = __do_global_ctors_aux();
    return eax2;
}

void fun_8048306(int32_t a1, int32_t a2);

void fun_80482c8();

int32_t call_gmon_start(int32_t ecx) {
    int32_t ebx2;

    fun_8048306(ecx, ebx2);
    if (*reinterpret_cast<int32_t*>(ecx + 0x14e6 - 4)) {
        fun_80482c8();
    }
    return ebx2;
}

int32_t __JCR_END__ = 0;

void __gmon_start__(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        __gmon_start__(0x804971c);
    }
    return;
}

int32_t __preinit_array_start = -1;

int32_t __do_global_ctors_aux() {
    int32_t v1;
    int32_t edx2;
    int32_t eax3;
    int32_t ebx4;

    v1 = edx2;
    eax3 = __preinit_array_start;
    if (eax3 != -1) {
        ebx4 = 0x804970c;
        do {
            eax3();
            eax3 = *reinterpret_cast<int32_t*>(ebx4 - 4);
            ebx4 = ebx4 - 4;
        } while (eax3 != -1);
    }
    return v1;
}

int32_t __gmon_start__ = 0x80482ce;

void fun_80482c8() {
    goto __gmon_start__;
}

signed char _edata = 0;

/* p.4582 */
int32_t* p_4582 = reinterpret_cast<int32_t*>(0x8049718);

void __do_global_dtors_aux() {
    int1_t zf1;
    int32_t* eax2;
    int32_t edx3;

    zf1 = _edata == 0;
    if (zf1) {
        while (eax2 = p_4582, edx3 = *eax2, !!edx3) {
            p_4582 = eax2 + 1;
            edx3();
        }
        _edata = 1;
    }
    return;
}

int32_t c_d = 3;

void d(int32_t ecx);

int32_t c_f = 3;

void f();

int32_t c_h = 3;

void h();

int32_t c_j = 3;

void j(int32_t ecx);

int32_t c_l = 3;

void l(int32_t ecx);

int32_t res = 0;

void c(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t edx4;
    int32_t edx5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;

    eax2 = c_d;
    c_d = eax2 - 1;
    eax3 = c_d;
    if (eax3 >= 0) {
        d(edx4);
        edx5 = edx4;
    }
    eax6 = c_f;
    c_f = eax6 - 1;
    eax7 = c_f;
    if (eax7 >= 0) {
        f();
    }
    eax8 = c_h;
    c_h = eax8 - 1;
    eax9 = c_h;
    if (eax9 >= 0) {
        h();
    }
    eax10 = c_j;
    c_j = eax10 - 1;
    eax11 = c_j;
    if (eax11 >= 0) {
        j(edx5);
        edx5 = edx5;
    }
    eax12 = c_l;
    c_l = eax12 - 1;
    eax13 = c_l;
    if (eax13 >= 0) {
        l(edx5);
    }
    eax14 = res;
    res = eax14 + 3;
    return;
}

int32_t d_e = 3;

void e(int32_t ecx);

void d(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t edx4;
    int32_t eax5;

    eax2 = d_e;
    d_e = eax2 - 1;
    eax3 = d_e;
    if (eax3 >= 0) {
        e(edx4);
    }
    eax5 = res;
    res = eax5 + 5;
    return;
}

int32_t f_g = 3;

void g();

void f() {
    int32_t eax1;
    int32_t eax2;
    int32_t eax3;

    eax1 = f_g;
    f_g = eax1 - 1;
    eax2 = f_g;
    if (eax2 >= 0) {
        g();
    }
    eax3 = res;
    res = eax3 + 11;
    return;
}

int32_t h_i = 3;

void i();

void h() {
    int32_t eax1;
    int32_t eax2;
    int32_t eax3;

    eax1 = h_i;
    h_i = eax1 - 1;
    eax2 = h_i;
    if (eax2 >= 0) {
        i();
    }
    eax3 = res;
    res = eax3 + 17;
    return;
}

int32_t j_k = 3;

void k(int32_t ecx);

void j(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t edx4;
    int32_t eax5;

    eax2 = j_k;
    j_k = eax2 - 1;
    eax3 = j_k;
    if (eax3 >= 0) {
        k(edx4);
    }
    eax5 = res;
    res = eax5 + 23;
    return;
}

int32_t l_b = 3;

void b(int32_t ecx);

void l(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t edx4;
    int32_t eax5;

    eax2 = l_b;
    l_b = eax2 - 1;
    eax3 = l_b;
    if (eax3 >= 0) {
        b(edx4);
    }
    eax5 = res;
    res = eax5 + 29;
    return;
}

int32_t e_c = 3;

void e(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t edx4;
    int32_t eax5;

    eax2 = e_c;
    e_c = eax2 - 1;
    eax3 = e_c;
    if (eax3 >= 0) {
        c(edx4);
    }
    eax5 = res;
    res = eax5 + 7;
    return;
}

int32_t g_f = 3;

void g() {
    int32_t eax1;
    int32_t eax2;
    int32_t eax3;

    eax1 = g_f;
    g_f = eax1 - 1;
    eax2 = g_f;
    if (eax2 >= 0) {
        f();
    }
    eax3 = res;
    res = eax3 + 13;
    return;
}

void i() {
    int32_t eax1;

    eax1 = res;
    res = eax1 + 19;
    return;
}

int32_t k_e = 3;

void k(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t edx4;
    int32_t eax5;

    eax2 = k_e;
    k_e = eax2 - 1;
    eax3 = k_e;
    if (eax3 >= 0) {
        e(edx4);
    }
    eax5 = res;
    res = eax5 + 27;
    return;
}

int32_t b_c = 3;

void b(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t edx4;
    int32_t eax5;

    eax2 = b_c;
    b_c = eax2 - 1;
    eax3 = b_c;
    if (eax3 >= 0) {
        c(edx4);
    }
    eax5 = res;
    res = eax5 + 2;
    return;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048306(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x14e6 - 4)) {
        fun_80482c8();
    }
    goto ebp3->f4;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804864e(int32_t ecx) {
    int32_t ebx2;
    int32_t* edx3;
    int32_t eax4;
    int32_t ebp5;
    uint32_t edi6;
    int32_t* esi7;
    int32_t ebp8;
    struct s1* ebp9;
    struct s2* ebp10;

    ebx2 = reinterpret_cast<int32_t>(__return_address()) + 0x119e;
    _init(ecx);
    edx3 = reinterpret_cast<int32_t*>(ebx2 - 0xe0);
    eax4 = ebx2 - 0xe0 - reinterpret_cast<int32_t>(edx3) >> 2;
    *reinterpret_cast<int32_t*>(ebp5 - 16) = eax4;
    if (eax4) {
        edi6 = 0;
        esi7 = edx3;
        do {
            *esi7();
            ++edi6;
            ++esi7;
        } while (edi6 < *reinterpret_cast<uint32_t*>(ebp8 - 16));
        goto ebp9->f4;
    } else {
        goto ebp10->f4;
    }
}

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80486ca(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s3* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t printf = 0x80482be;

void fun_80482b8(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto printf;
}

int32_t __libc_start_main = 0x80482ae;

void fun_80482a8(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void fun_80482a4() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048331() {
}

void __libc_csu_init(int32_t ecx) {
    fun_804864e(ecx);
}

void __libc_csu_fini() {
    return;
}

void _fini() {
    int32_t eax1;
    int32_t ebx2;
    int32_t ebp3;

    fun_80486ca(eax1, ebx2, ebp3, __return_address());
}

int32_t g80497f4 = 0;

void fun_80482ae() {
    goto g80497f4;
}

void fun_80482ce() {
    goto 0x8048298;
}

void fun_8048352() {
}

int32_t main() {
    int32_t eax1;

    b(55);
    fun_80482b8("ecx is %d, edx is %d\n", 99, 55, 0x80483a7);
    eax1 = res;
    fun_80482b8("res is %d\n", eax1, 55, 0x80483a7);
    return 0;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482a8(main, __return_address(), esp1, __libc_csu_init, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_80482be() {
    goto 0x8048298;
}
