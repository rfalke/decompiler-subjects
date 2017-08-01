
void fun_804845c(int32_t a1, int32_t a2);

void fun_80484a0();

void frame_dummy();

void __do_global_ctors_aux();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_804845c(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0x1b98 - 4)) {
        fun_80484a0();
    }
    frame_dummy();
    __do_global_ctors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804845c(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1b98 - 4)) {
        fun_80484a0();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x80484a6;

void fun_80484a0() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void fread(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        fread(0x8049f1c);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x8049f0c);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t __sprintf_chk = 0x8048526;

void fun_8048520(void* a1, int32_t a2, int32_t a3, void* a4, void* a5) {
    goto __sprintf_chk;
}

int32_t __printf_chk = 0x80484b6;

void fun_80484b0(void* a1, void* a2, void* a3, void* a4, void* a5) {
    goto __printf_chk;
}

int32_t perror = 0x80484d6;

void fun_80484d0(void* a1, void* a2, void* a3) {
    goto perror;
}

uint32_t g14;

void fun_80484e0(void* a1, int32_t a2, int32_t a3, void* a4, void* a5);

uint32_t fun_8048510(void* a1, void* a2, void* a3, void* a4, void* a5);

uint32_t dumpline(void* a1, void* a2, void* a3, void* a4) {
    void* ebp5;
    void* ebx6;
    uint32_t eax7;
    uint32_t v8;
    void* v9;
    void* v10;
    void* esi11;
    void* edi12;
    void* v13;
    void* esi14;
    void* ebx15;
    void* edx16;
    int32_t ecx17;
    signed char v18;
    void* ecx19;
    void* v20;
    signed char* edx21;
    void* eax22;
    void* edi23;
    uint32_t ecx24;
    uint32_t ebx25;
    signed char* eax26;
    void* eax27;
    uint32_t eax28;
    void* edx29;
    int32_t ecx30;
    signed char v31;
    void* ecx32;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebx6 = a1;
    eax7 = g14;
    v8 = eax7;
    v9 = a2;
    v10 = reinterpret_cast<void*>("%08lX:");
    fun_8048520(reinterpret_cast<int32_t>(ebp5) - 0x6c, 1, 80, "%08lX:", v9);
    esi11 = a3;
    if (reinterpret_cast<int32_t>(esi11) > reinterpret_cast<int32_t>(16)) {
        esi11 = reinterpret_cast<void*>(16);
    }
    edi12 = reinterpret_cast<void*>(1);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi11) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi11 == 0)) {
        do {
            addr_80486ac_4:
            fun_80484e0(reinterpret_cast<int32_t>(ebp5) - 0x6c, "   ", 80, v10, v9);
            edi12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi12) + 1);
        } while (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edi12) + 0xffffffff) <= reinterpret_cast<int32_t>(15));
    } else {
        *reinterpret_cast<int16_t*>(&edi12) = 0;
        v13 = esi11;
        esi14 = ebx6;
        ebx15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) - 99);
        do {
            v9 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi14) + reinterpret_cast<uint32_t>(edi12))));
            v10 = reinterpret_cast<void*>(" %02lX");
            fun_8048520(ebx15, 1, -1, " %02lX", v9);
            edi12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi12) + 1);
            ebx15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx15) + 3);
        } while (reinterpret_cast<int32_t>(edi12) < reinterpret_cast<int32_t>(v13));
        ebx6 = esi14;
        esi11 = v13;
        if (reinterpret_cast<int32_t>(esi11) > reinterpret_cast<int32_t>(15)) 
            goto addr_8048779_8; else 
            goto addr_80486a9_9;
    }
    edx16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) - 0x6c);
    ecx17 = -1;
    do {
        if (!ecx17) 
            break;
        --ecx17;
        esi11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi11) + 1);
    } while (v18);
    ecx19 = reinterpret_cast<void*>(~ecx17);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edx16) + reinterpret_cast<int32_t>(ecx19) - 1) = 0x7c2020;
    v20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx19) + 2);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi11) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi11 == 0))) {
        esi11 = reinterpret_cast<void*>(0);
        goto addr_80486fc_15;
    }
    addr_8048707_16:
    edx21 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<uint32_t>(v20) - 0x6c);
    eax22 = reinterpret_cast<void*>(0);
    edi23 = ebx6;
    do {
        ecx24 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi23) + reinterpret_cast<uint32_t>(eax22));
        ebx25 = ecx24 - 32;
        if (*reinterpret_cast<unsigned char*>(&ebx25) > 94) {
            ecx24 = 46;
        }
        *edx21 = *reinterpret_cast<signed char*>(&ecx24);
        eax22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax22) + 1);
        ++edx21;
    } while (eax22 != esi11);
    if (reinterpret_cast<int32_t>(esi11) <= reinterpret_cast<int32_t>(15)) {
        addr_80486fc_15:
        eax26 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp5) + (reinterpret_cast<uint32_t>(v20) + reinterpret_cast<uint32_t>(esi11)) - 0x6c);
    } else {
        goto addr_8048747_22;
    }
    do {
        *eax26 = 32;
        esi11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi11) + 1);
        ++eax26;
    } while (reinterpret_cast<int32_t>(esi11) <= reinterpret_cast<int32_t>(15));
    addr_8048747_22:
    eax27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) + 0xffffff94);
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(eax27) + (reinterpret_cast<uint32_t>(esi11) + reinterpret_cast<uint32_t>(v20))) = 0x7c;
    fun_80484b0(1, "%s\n", eax27, v10, v9);
    eax28 = v8 ^ g14;
    if (eax28) {
        eax28 = fun_8048510(1, "%s\n", eax27, v10, v9);
    }
    return eax28;
    addr_8048779_8:
    edx29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) - 0x6c);
    ecx30 = -1;
    do {
        if (!ecx30) 
            break;
        --ecx30;
        esi11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi11) + 1);
    } while (v31);
    ecx32 = reinterpret_cast<void*>(~ecx30);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edx29) + reinterpret_cast<int32_t>(ecx32) - 1) = 0x7c2020;
    v20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx32) + 2);
    goto addr_8048707_16;
    addr_80486a9_9:
    edi12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi11) + 1);
    goto addr_80486ac_4;
}

int32_t fclose = 0x80484f6;

void fun_80484f0(void* a1, void* a2, void* a3, void* a4) {
    goto fclose;
}

int32_t __stack_chk_fail = 0x8048516;

uint32_t fun_8048510(void* a1, void* a2, void* a3, void* a4, void* a5) {
    goto __stack_chk_fail;
}

int32_t fun_8048490(int32_t a1, void* a2, void* a3);

void* fun_8048500(void* a1, void* a2, void* a3);

void* fun_8048530(void* a1, void* a2, void* a3, void* a4);

uint32_t hexdump(void* a1) {
    void* ebp2;
    uint32_t eax3;
    uint32_t v4;
    void* v5;
    void* v6;
    int32_t eax7;
    void* eax8;
    void* v9;
    void* v10;
    uint32_t eax11;
    void* esi12;
    void* edi13;
    int32_t v14;
    void* v15;
    void* eax16;
    void* v17;
    uint32_t edx18;
    void* v19;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g14;
    v4 = eax3;
    v5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) + 0xffffff7c);
    v6 = a1;
    eax7 = fun_8048490(3, v6, v5);
    if (!eax7) {
        v6 = reinterpret_cast<void*>("rb");
        eax8 = fun_8048500(a1, "rb", v5);
        v9 = eax8;
        if (!eax8) {
            v10 = a1;
            fun_80484d0(v10, "rb", v5);
            eax11 = 1;
        } else {
            esi12 = reinterpret_cast<void*>(0);
            edi13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) + 0xffffffd4);
            if (v14) {
                do {
                    v15 = v9;
                    v5 = reinterpret_cast<void*>(16);
                    v6 = reinterpret_cast<void*>(1);
                    eax16 = fun_8048530(edi13, 1, 16, v15);
                    if (!eax16) 
                        break;
                    v5 = eax16;
                    v6 = esi12;
                    dumpline(edi13, v6, v5, v15);
                    esi12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi12) + reinterpret_cast<uint32_t>(eax16));
                } while (reinterpret_cast<uint32_t>(v17) > reinterpret_cast<uint32_t>(esi12));
            }
            v10 = v9;
            fun_80484f0(v10, v6, v5, v15);
            eax11 = 0;
        }
    } else {
        v10 = a1;
        fun_80484d0(v10, v6, v5);
        eax11 = 1;
    }
    edx18 = v4 ^ g14;
    if (edx18) {
        eax11 = fun_8048510(v10, v6, v5, v15, v19);
    }
    return eax11;
}

/* __i686.get_pc_thunk.bx */
void __i686_get_pc_thunk_bx() {
    return;
}

int32_t __strcat_chk = 0x80484e6;

void fun_80484e0(void* a1, int32_t a2, int32_t a3, void* a4, void* a5) {
    goto __strcat_chk;
}

int32_t fopen = 0x8048506;

void* fun_8048500(void* a1, void* a2, void* a3) {
    goto fopen;
}

int32_t fread = 0x8048536;

void* fun_8048530(void* a1, void* a2, void* a3, void* a4) {
    goto fread;
}

int32_t __xstat = 0x8048496;

int32_t fun_8048490(int32_t a1, void* a2, void* a3) {
    goto __xstat;
}

void __do_global_dtors_aux();

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048988(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t __libc_start_main = 0x80484c6;

void fun_80484c0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

signed char _edata = 0;

/* dtor_idx.7023 */
uint32_t dtor_idx_7023 = 0;

void __do_global_dtors_aux() {
    int1_t zf1;
    uint32_t eax2;
    uint32_t eax3;

    zf1 = _edata == 0;
    if (zf1) {
        eax2 = dtor_idx_7023;
        if (eax2 < 0) {
            do {
                eax3 = eax2 + 1;
                dtor_idx_7023 = eax3;
                *reinterpret_cast<int32_t*>(eax3 * 4 + 0x8049f14)();
                eax2 = dtor_idx_7023;
            } while (eax2 < 0);
        }
        _edata = 1;
    }
    return;
}

void fun_80485c5() {
}

uint32_t main(int32_t a1, void** a2) {
    void** esi3;
    int32_t ebx4;
    uint32_t edi5;
    void* v6;
    uint32_t eax7;

    esi3 = a2;
    ebx4 = 1;
    edi5 = 0;
    if (a1 > 1) {
        do {
            v6 = esi3[ebx4];
            eax7 = hexdump(v6);
            edi5 = edi5 + eax7;
            ++ebx4;
        } while (a1 > ebx4);
    }
    return edi5;
}

void __libc_csu_fini() {
    return;
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_8048988(v1, ebx2, ebp3, __return_address());
}

int32_t g8049ffc = 0;

void fun_80484a6() {
    goto g8049ffc;
}

void fun_804848c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048526() {
    goto 0x8048480;
}

void fun_80484b6() {
    goto 0x8048480;
}

void fun_80484d6() {
    goto 0x8048480;
}

void fun_80484f6() {
    goto 0x8048480;
}

void fun_8048516() {
    goto 0x8048480;
}

void fun_80488e5(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    uint32_t edi6;
    uint32_t esi7;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x16f9;
    _init();
    edi6 = reinterpret_cast<uint32_t>(ebx4 - 0xe8 - (ebx4 - 0xe8) >> 2);
    if (edi6) {
        esi7 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi7 * 4 - 0xe8)(a1, a2, a3);
            ++esi7;
        } while (esi7 < edi6);
    }
    return;
}

void fun_80484e6() {
    goto 0x8048480;
}

void fun_8048506() {
    goto 0x8048480;
}

void fun_8048536() {
    goto 0x8048480;
}

void fun_8048496() {
    goto 0x8048480;
}

void fun_80484c6() {
    goto 0x8048480;
}

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80484c0(main, __return_address(), esp1, 0x80488f0, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}
