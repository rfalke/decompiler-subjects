
void fun_80482a0(int32_t a1, int32_t a2);

void fun_80482d4();

void frame_dummy();

void __do_global_ctors_aux();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_80482a0(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0x16d4 - 4)) {
        fun_80482d4();
    }
    frame_dummy();
    __do_global_ctors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80482a0(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x16d4 - 4)) {
        fun_80482d4();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x80482da;

void fun_80482d4() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void malloc(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        malloc(0x80498a4);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x8049894);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t __libc_start_main = 0x80482ea;

void fun_80482e4(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

/* __i686.get_pc_thunk.bx */
void __i686_get_pc_thunk_bx() {
    return;
}

void __do_global_dtors_aux();

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048798(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

struct s2 {
    unsigned char f0;
    signed char[1] pad2;
    uint16_t f2;
};

int32_t malloc = 0x80482fa;

struct s2* fun_80482f4(int32_t a1) {
    goto malloc;
}

signed char _edata = 0;

/* dtor_idx.5980 */
uint32_t dtor_idx_5980 = 0;

void __do_global_dtors_aux() {
    int1_t zf1;
    uint32_t eax2;
    uint32_t eax3;

    zf1 = _edata == 0;
    if (zf1) {
        eax2 = dtor_idx_5980;
        if (eax2 < 0) {
            do {
                eax3 = eax2 + 1;
                dtor_idx_5980 = eax3;
                *reinterpret_cast<int32_t*>(eax3 * 4 + 0x804989c)();
                eax2 = dtor_idx_5980;
            } while (eax2 < 0);
        }
        _edata = 1;
    }
    return;
}

struct s3 {
    uint16_t f0;
    unsigned char f2;
};

void copy1_four_times(struct s2* a1, struct s2* a2, int32_t a3) {
    struct s2* ecx4;
    struct s2* edx5;
    int32_t ebx6;
    uint32_t esi7;
    uint32_t eax8;
    int32_t ebx9;
    uint32_t eax10;
    uint32_t eax11;
    struct s3* edx12;
    uint32_t eax13;
    struct s3* ecx14;
    uint32_t eax15;
    uint32_t eax16;

    ecx4 = a1;
    edx5 = a2;
    ebx6 = a3 + 3;
    if (ebx6 < 0) {
        ebx6 = a3 + 6;
    }
    esi7 = reinterpret_cast<uint32_t>(a3 >> 31) >> 30;
    eax8 = (a3 + esi7 & 3) - esi7;
    ebx9 = ebx6 >> 2;
    if (eax8 == 1) {
        while (eax10 = edx5->f0, --ebx9, ecx4->f0 = *reinterpret_cast<unsigned char*>(&eax10), !(reinterpret_cast<uint1_t>(ebx9 < 0) | reinterpret_cast<uint1_t>(ebx9 == 0))) {
            ecx4 = reinterpret_cast<struct s2*>(&ecx4->f2);
            edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
            addr_8048443_6:
            eax11 = edx5->f0;
            edx12 = reinterpret_cast<struct s3*>(&edx5->f2);
            ecx4->f0 = *reinterpret_cast<unsigned char*>(&eax11);
            eax13 = edx12->f0;
            ecx14 = reinterpret_cast<struct s3*>(&ecx4->f2);
            edx5 = reinterpret_cast<struct s2*>(&edx12->f2);
            ecx14->f0 = *reinterpret_cast<uint16_t*>(&eax13);
            ecx4 = reinterpret_cast<struct s2*>(&ecx14->f2);
            addr_8048424_7:
            eax15 = edx5->f0;
            edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
            ecx4->f0 = *reinterpret_cast<unsigned char*>(&eax15);
            ecx4 = reinterpret_cast<struct s2*>(&ecx4->f2);
        }
    } else {
        if (reinterpret_cast<int32_t>(eax8) <= reinterpret_cast<int32_t>(1)) {
            if (!eax8) 
                goto addr_8048443_6;
        } else {
            if (eax8 == 2) 
                goto addr_8048424_7;
            if (eax8 == 3) 
                goto addr_8048418_13;
        }
    }
    return;
    addr_8048418_13:
    eax16 = edx5->f0;
    edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
    ecx4->f0 = *reinterpret_cast<unsigned char*>(&eax16);
    ecx4 = reinterpret_cast<struct s2*>(&ecx4->f2);
    goto addr_8048424_7;
}

void copy1_eight_times(struct s2* a1, struct s2* a2, int32_t a3) {
    struct s2* edx4;
    struct s2* eax5;
    int32_t ebx6;
    uint32_t esi7;
    uint32_t ecx8;
    int32_t ebx9;
    uint32_t ecx10;
    uint32_t ecx11;
    uint32_t ecx12;
    uint32_t ecx13;
    uint32_t ecx14;
    uint32_t ecx15;
    uint32_t ecx16;
    uint32_t ecx17;
    uint32_t ebx18;
    uint32_t ebx19;
    uint32_t ebx20;
    uint32_t ebx21;
    uint32_t ebx22;
    uint32_t ebx23;
    uint32_t ebx24;
    uint32_t ebx25;

    edx4 = a1;
    eax5 = a2;
    ebx6 = a3 + 7;
    if (ebx6 < 0) {
        ebx6 = a3 + 14;
    }
    esi7 = reinterpret_cast<uint32_t>(a3 >> 31) >> 29;
    ecx8 = (a3 + esi7 & 7) - esi7;
    ebx9 = ebx6 >> 3;
    switch (ecx8) {
        while (1) {
        case 0:
            ecx10 = eax5->f0;
            eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
            edx4->f0 = *reinterpret_cast<unsigned char*>(&ecx10);
            edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
        case 7:
            ecx11 = eax5->f0;
            eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
            edx4->f0 = *reinterpret_cast<unsigned char*>(&ecx11);
            edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
        case 6:
            ecx12 = eax5->f0;
            eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
            edx4->f0 = *reinterpret_cast<unsigned char*>(&ecx12);
            edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
        case 5:
            ecx13 = eax5->f0;
            eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
            edx4->f0 = *reinterpret_cast<unsigned char*>(&ecx13);
            edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
        case 4:
            ecx14 = eax5->f0;
            eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
            edx4->f0 = *reinterpret_cast<unsigned char*>(&ecx14);
            edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
        case 3:
            ecx15 = eax5->f0;
            eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
            edx4->f0 = *reinterpret_cast<unsigned char*>(&ecx15);
            edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
        case 2:
            ecx16 = eax5->f0;
            eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
            edx4->f0 = *reinterpret_cast<unsigned char*>(&ecx16);
            edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
        case 1:
            ecx17 = eax5->f0;
            --ebx9;
            edx4->f0 = *reinterpret_cast<unsigned char*>(&ecx17);
            if (reinterpret_cast<uint1_t>(ebx9 < 0) | reinterpret_cast<uint1_t>(ebx9 == 0)) 
                break;
            edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
            eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
        }
    default:
        return;
        while (1) {
            ebx18 = edx4->f0;
            edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
            eax5->f0 = *reinterpret_cast<unsigned char*>(&ebx18);
            eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
            while (1) {
                ebx19 = edx4->f0;
                edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
                eax5->f0 = *reinterpret_cast<unsigned char*>(&ebx19);
                eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
                while (1) {
                    ebx20 = edx4->f0;
                    edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
                    eax5->f0 = *reinterpret_cast<unsigned char*>(&ebx20);
                    eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
                    while (1) {
                        ebx21 = edx4->f0;
                        edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
                        eax5->f0 = *reinterpret_cast<unsigned char*>(&ebx21);
                        eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
                        while (1) {
                            ebx22 = edx4->f0;
                            edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
                            eax5->f0 = *reinterpret_cast<unsigned char*>(&ebx22);
                            eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
                            while (1) {
                                ebx23 = edx4->f0;
                                edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
                                eax5->f0 = *reinterpret_cast<unsigned char*>(&ebx23);
                                eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
                                while (1) {
                                    ebx24 = edx4->f0;
                                    edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
                                    eax5->f0 = *reinterpret_cast<unsigned char*>(&ebx24);
                                    eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
                                    while (ebx25 = edx4->f0, ecx8 = ecx8 + 8, eax5->f0 = *reinterpret_cast<unsigned char*>(&ebx25), ecx8 != esi7) {
                                        eax5 = reinterpret_cast<struct s2*>(&eax5->f2);
                                        edx4 = reinterpret_cast<struct s2*>(&edx4->f2);
                                        switch (ecx8) {
                                        case 7:
                                            goto 0x8048624;
                                        case 6:
                                            goto 0x8048618;
                                        case 5:
                                            goto 0x804860c;
                                        case 4:
                                            goto 0x8048600;
                                        case 3:
                                            goto 0x80485f4;
                                        case 2:
                                            goto 0x80485e8;
                                        case 1:
                                            goto 0x80485dc;
                                        case 0:
                                            goto 0x80485d0;
                                        }
                                    }
                                    goto addr_8048648_26;
                                }
                            }
                        }
                    }
                }
            }
        }
        addr_8048648_26:
        return;
    }
}

void copy2_four_times(struct s2* a1, struct s2* a2, uint32_t a3) {
    struct s2* eax4;
    struct s2* edx5;
    uint32_t ecx6;
    uint32_t esi7;
    uint32_t ebx8;
    uint32_t ebx9;
    uint32_t ebx10;
    uint32_t ebx11;

    eax4 = a1;
    edx5 = a2;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(a3) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(a3 == 0))) {
        ecx6 = 4 - a3;
        esi7 = 8 - a3 + (a3 - 4 & 0xfffffffc);
        while (1) {
            if (ecx6 == 2) {
                addr_804857d_4:
                ebx8 = edx5->f0;
                edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
                eax4->f0 = *reinterpret_cast<unsigned char*>(&ebx8);
                eax4 = reinterpret_cast<struct s2*>(&eax4->f2);
                goto addr_8048589_5;
            } else {
                if (ecx6 == 3) {
                    addr_8048589_5:
                    ebx9 = edx5->f0;
                    ecx6 = ecx6 + 4;
                    eax4->f0 = *reinterpret_cast<unsigned char*>(&ebx9);
                    if (ecx6 == esi7) 
                        break;
                } else {
                    if (ecx6 != 1) {
                        ebx10 = edx5->f0;
                        edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
                        eax4->f0 = *reinterpret_cast<unsigned char*>(&ebx10);
                        eax4 = reinterpret_cast<struct s2*>(&eax4->f2);
                    }
                    ebx11 = edx5->f0;
                    edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
                    eax4->f0 = *reinterpret_cast<unsigned char*>(&ebx11);
                    eax4 = reinterpret_cast<struct s2*>(&eax4->f2);
                    goto addr_804857d_4;
                }
            }
            eax4 = reinterpret_cast<struct s2*>(&eax4->f2);
            edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
        }
    }
    return;
}

void copy2_eight_times(struct s2* a1, struct s2* a2, uint32_t a3) {
    struct s2* eax4;
    struct s2* edx5;
    uint32_t ecx6;
    uint32_t esi7;
    uint32_t ebx8;
    uint32_t ebx9;
    uint32_t ebx10;
    uint32_t ebx11;
    uint32_t ebx12;
    uint32_t ebx13;
    uint32_t ebx14;
    uint32_t ebx15;

    eax4 = a1;
    edx5 = a2;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(a3) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(a3 == 0))) {
        ecx6 = 8 - a3;
        esi7 = 16 - a3 + (a3 - 8 & 0xfffffff8);
        while (1) {
            if (ecx6 > 7) 
                goto addr_80485d0_4;
            switch (ecx6) {
                addr_80485d0_4:
            case 0:
                ebx8 = edx5->f0;
                edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
                eax4->f0 = *reinterpret_cast<unsigned char*>(&ebx8);
                eax4 = reinterpret_cast<struct s2*>(&eax4->f2);
            case 1:
                ebx9 = edx5->f0;
                edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
                eax4->f0 = *reinterpret_cast<unsigned char*>(&ebx9);
                eax4 = reinterpret_cast<struct s2*>(&eax4->f2);
            case 2:
                ebx10 = edx5->f0;
                edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
                eax4->f0 = *reinterpret_cast<unsigned char*>(&ebx10);
                eax4 = reinterpret_cast<struct s2*>(&eax4->f2);
            case 3:
                ebx11 = edx5->f0;
                edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
                eax4->f0 = *reinterpret_cast<unsigned char*>(&ebx11);
                eax4 = reinterpret_cast<struct s2*>(&eax4->f2);
            case 4:
                ebx12 = edx5->f0;
                edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
                eax4->f0 = *reinterpret_cast<unsigned char*>(&ebx12);
                eax4 = reinterpret_cast<struct s2*>(&eax4->f2);
            case 5:
                ebx13 = edx5->f0;
                edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
                eax4->f0 = *reinterpret_cast<unsigned char*>(&ebx13);
                eax4 = reinterpret_cast<struct s2*>(&eax4->f2);
            case 6:
                ebx14 = edx5->f0;
                edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
                eax4->f0 = *reinterpret_cast<unsigned char*>(&ebx14);
                eax4 = reinterpret_cast<struct s2*>(&eax4->f2);
            case 7:
                ebx15 = edx5->f0;
                ecx6 = ecx6 + 8;
                eax4->f0 = *reinterpret_cast<unsigned char*>(&ebx15);
                if (ecx6 == esi7) 
                    goto addr_8048648_13;
                eax4 = reinterpret_cast<struct s2*>(&eax4->f2);
                edx5 = reinterpret_cast<struct s2*>(&edx5->f2);
            }
        }
    }
    addr_8048648_13:
    return;
}

void __libc_csu_fini();

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482e4(0x8048650, __return_address(), esp1, 0x8048700, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8048395() {
}

void fun_8048411() {
}

void fun_804845d() {
}

void fun_8048466() {
}

void fun_80484a4() {
}

void fun_8048519() {
}

void fun_804854a() {
}

void fun_804859a() {
}

void fun_8048644() {
}

void __libc_csu_fini() {
    return;
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_8048798(v1, ebx2, ebp3, __return_address());
}

int32_t g804997c = 0;

void fun_80482da() {
    goto g804997c;
}

void fun_80482d0() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_80482ea() {
    goto 0x80482c4;
}

void fun_80486f5(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    uint32_t edi6;
    uint32_t esi7;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x1269;
    _init();
    edi6 = reinterpret_cast<uint32_t>(ebx4 - 0xe0 - (ebx4 - 0xe0) >> 2);
    if (edi6) {
        esi7 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi7 * 4 - 0xe0)(a1, a2, a3);
            ++esi7;
        } while (esi7 < edi6);
    }
    return;
}

int32_t fun_804864c() {
    void* esp1;
    uint1_t cf2;
    int1_t below_or_equal3;
    struct s2* eax4;
    struct s2* esi5;
    struct s2* eax6;
    struct s2* edi7;
    int32_t ecx8;

    esp1 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 4 - 4);
    cf2 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esp1) < 24);
    below_or_equal3 = reinterpret_cast<uint32_t>(esp1) <= 24;
    eax4 = fun_80482f4(0xc8);
    esi5 = eax4;
    eax6 = fun_80482f4(0xc8);
    edi7 = eax6;
    copy1_four_times(eax6, esi5, 100);
    copy1_eight_times(edi7, esi5, 100);
    copy2_four_times(edi7, esi5, 100);
    copy2_eight_times(edi7, esi5, 100);
    ecx8 = 0xc8;
    do {
        if (!ecx8) 
            break;
        --ecx8;
        cf2 = reinterpret_cast<uint1_t>(esi5->f0 < edi7->f0);
        below_or_equal3 = esi5->f0 <= edi7->f0;
        edi7 = reinterpret_cast<struct s2*>(&edi7->pad2);
        esi5 = reinterpret_cast<struct s2*>(&esi5->pad2);
    } while (esi5->f0 == edi7->f0);
    return static_cast<int32_t>(reinterpret_cast<signed char>(reinterpret_cast<uint1_t>(!below_or_equal3) - cf2));
}

void fun_80482fa() {
    goto 0x80482c4;
}
