
void fun_804832e();

void call_gmon_start() {
    int32_t eax1;
    int32_t eax2;

    fun_804832e();
    eax1 = *reinterpret_cast<int32_t*>(eax2 + 0x150a + 24);
    if (eax1) {
        eax1();
    }
    return;
}

int32_t fun_80483bd();

int32_t __gmon_start__(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t eax1;
    int32_t v2;
    int32_t ebp3;
    int32_t eax4;

    eax1 = fun_80483bd();
    if (eax1) {
        v2 = ebp3 + 0x147b;
        __gmon_start__(0x8049758, 0x804985c, 0, v2, fun_80483bd);
    }
    eax4 = __JCR_END__;
    if (eax4 && (eax4 = 0, !1)) {
        eax4 = __gmon_start__(0x8049834, 0x804985c, 0, v2, fun_80483bd);
    }
    return eax4;
}

int32_t __CTOR_LIST__ = -1;

int32_t __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;
    int32_t v3;

    eax1 = __CTOR_LIST__;
    ebx2 = reinterpret_cast<int32_t*>(0x8049824);
    if (eax1 != -1) {
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return v3;
}

int32_t __libc_start_main = 0x80482da;

void __libc_start_main(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t fwrite = 0x80482ea;

void fwrite(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto fwrite;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804832e() {
    int32_t eax1;
    struct s0* ebp2;

    eax1 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x150a + 24);
    if (eax1) {
        eax1();
    }
    goto ebp2->f4;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_80483bd() {
    int32_t eax1;
    int32_t v2;
    int32_t v3;
    int32_t eax4;
    int32_t v5;
    struct s1* ebp6;

    if (eax1) {
        v2 = reinterpret_cast<int32_t>(__return_address()) + 0x147b;
        __gmon_start__(0x8049758, 0x804985c, 0, v2, v3);
    }
    eax4 = __JCR_END__;
    if (eax4 && !1) {
        __gmon_start__(0x8049834, 0x804985c, 0, v2, v5);
    }
    goto ebp6->f4;
}

int32_t __do_global_dtors_aux(int32_t a1);

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804869a(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s2* ebp5;

    __do_global_dtors_aux(a1);
    goto ebp5->f4;
}

int32_t scanf = 0x80482ca;

void scanf(int32_t a1, void* a2) {
    goto scanf;
}

/* completed.1 */
signed char completed_1 = 0;

/* p.0 */
int32_t* p_0 = reinterpret_cast<int32_t*>(0x8049830);

int32_t __do_global_dtors_aux(int32_t a1) {
    int32_t v2;
    int32_t v3;
    int32_t ebp4;
    int1_t zf5;
    int32_t* eax6;
    int32_t edx7;
    int32_t eax8;
    int32_t v9;

    v2 = reinterpret_cast<int32_t>(__return_address());
    v3 = ebp4;
    zf5 = completed_1 == 0;
    if (zf5) {
        eax6 = p_0;
        edx7 = *eax6;
        if (edx7) {
            do {
                p_0 = eax6 + 1;
                edx7();
                eax6 = p_0;
                edx7 = *eax6;
            } while (edx7);
        }
        eax8 = 0;
        if (!1) {
            eax8 = __gmon_start__(0x8049758, v9, v3, v2, a1);
        }
        completed_1 = 1;
    }
    return eax8;
}

int32_t _init() {
    int32_t eax1;

    call_gmon_start();
    frame_dummy();
    eax1 = __do_global_ctors_aux();
    return eax1;
}

void _fini();

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    __libc_start_main(0x8048410, __return_address(), esp1, _init, _fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8048322() {
}

void fun_8048346() {
}

int32_t stdout = 0;

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80485fd() {
    int32_t eax1;
    struct s3* ebp2;

    eax1 = stdout;
    fwrite("Plus\n", 1, 5, eax1);
    goto ebp2->f4;
}

void _fini() {
    int32_t edx1;
    int32_t ebx2;
    int32_t ebp3;

    fun_804869a(edx1, ebx2, ebp3, __return_address());
}

void fun_80482c0() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t g8049840 = 0;

void fun_80482da() {
    goto g8049840;
}

void fun_804840d() {
    void* ebp1;
    uint32_t v2;
    int32_t eax3;
    uint32_t eax4;
    uint32_t v5;
    int32_t eax6;
    uint32_t v7;
    int32_t eax8;
    uint32_t v9;
    int32_t eax10;
    uint32_t v11;
    int32_t eax12;
    uint32_t v13;
    int32_t eax14;
    uint32_t v15;
    int32_t eax16;
    uint32_t v17;
    int32_t eax18;
    uint32_t v19;
    int32_t eax20;
    uint32_t v21;
    int32_t eax22;
    uint32_t eax23;
    uint32_t v24;
    int32_t eax25;
    uint32_t v26;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    scanf("%d", reinterpret_cast<int32_t>(ebp1) - 8);
    scanf("%d", reinterpret_cast<int32_t>(ebp1) - 12);
    if (5 != v2 || (eax3 = stdout, fwrite("Equal\n", 1, 6, eax3), eax4 = v5, 5 != eax4)) {
        eax6 = stdout;
        fwrite("Not Equal\n", 1, 10, eax6);
        eax4 = v7;
    }
    if ((reinterpret_cast<int32_t>(5) <= reinterpret_cast<int32_t>(eax4) || (eax8 = stdout, fwrite("Greater\n", 1, 8, eax8), reinterpret_cast<int32_t>(5) <= reinterpret_cast<int32_t>(v9))) && (eax10 = stdout, fwrite("Less or Equal\n", 1, 14, eax10), reinterpret_cast<int32_t>(5) < reinterpret_cast<int32_t>(v11)) || (eax12 = stdout, fwrite("Greater or Equal\n", 1, 17, eax12), reinterpret_cast<int32_t>(5) < reinterpret_cast<int32_t>(v13))) {
        eax14 = stdout;
        fwrite("Less\n", 1, 5, eax14);
    }
    if ((5 <= v15 || (eax16 = stdout, fwrite("Greater Unsigned\n", 1, 17, eax16), 5 <= v17)) && (eax18 = stdout, fwrite("Less or Equal Unsigned\n", 1, 23, eax18), 5 < v19) || (eax20 = stdout, fwrite("Carry Clear\n", 1, 12, eax20), 5 < v21)) {
        eax22 = stdout;
        fwrite("Carry Set\n", 1, 10, eax22);
    }
    eax23 = v24;
    if (reinterpret_cast<int32_t>(5) >= reinterpret_cast<int32_t>(eax23)) {
        eax25 = stdout;
        fwrite("Minus\n", 1, 6, eax25);
        eax23 = v26;
    }
    if (reinterpret_cast<int32_t>(5) < reinterpret_cast<int32_t>(eax23)) 
        goto 0x8048600; else 
        goto "???";
}

void fun_80482ea() {
    goto 0x80482b4;
}

void fun_80482ca() {
    goto 0x80482b4;
}

void fun_80483a3() {
}
