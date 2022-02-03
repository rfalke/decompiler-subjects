
void fun_80482c0(int32_t a1, int32_t a2);

void fun_8048304();

void frame_dummy();

void __do_global_ctors_aux();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_80482c0(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0x1794 - 4)) {
        fun_8048304();
    }
    frame_dummy();
    __do_global_ctors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80482c0(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1794 - 4)) {
        fun_8048304();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x804830a;

void fun_8048304() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void malloc(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        malloc(0x8049984);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x8049974);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t __libc_start_main = 0x804831a;

void fun_8048314(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void copy1_eight_times(uint16_t* a1, uint16_t* a2, int32_t a3) {
    int32_t eax4;
    int32_t v5;
    uint32_t edx6;
    uint32_t edx7;
    uint32_t edx8;
    uint32_t edx9;
    uint32_t edx10;
    uint32_t edx11;
    uint32_t edx12;
    uint32_t edx13;
    uint32_t edx14;
    uint32_t edx15;
    uint32_t edx16;
    uint32_t edx17;
    uint32_t edx18;
    uint32_t edx19;
    uint32_t edx20;
    uint32_t edx21;
    uint32_t edx22;
    int32_t v23;

    eax4 = a3 + 7;
    if (eax4 < 0) {
        eax4 = eax4 + 7;
    }
    v5 = eax4 >> 3;
    edx6 = reinterpret_cast<uint32_t>(a3 >> 31) >> 29;
    switch ((a3 + edx6 & 7) - edx6) {
        addr_8048584_5:
    default:
        return;
        do {
        case 0:
            edx7 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx7);
            ++a1;
            ++a2;
        case 7:
            edx8 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx8);
            ++a1;
            ++a2;
        case 6:
            edx9 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx9);
            ++a1;
            ++a2;
        case 5:
            edx10 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx10);
            ++a1;
            ++a2;
        case 4:
            edx11 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx11);
            ++a1;
            ++a2;
        case 3:
            edx12 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx12);
            ++a1;
            ++a2;
        case 2:
            edx13 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx13);
            ++a1;
            ++a2;
        case 1:
            edx14 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx14);
            ++a1;
            ++a2;
            --v5;
        } while (v5 > 0);
        goto addr_8048584_5;
        while (1) {
            edx15 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx15);
            ++a1;
            ++a2;
            while (1) {
                edx16 = *a2;
                *a1 = *reinterpret_cast<uint16_t*>(&edx16);
                ++a1;
                ++a2;
                while (1) {
                    edx17 = *a2;
                    *a1 = *reinterpret_cast<uint16_t*>(&edx17);
                    ++a1;
                    ++a2;
                    while (1) {
                        edx18 = *a2;
                        *a1 = *reinterpret_cast<uint16_t*>(&edx18);
                        ++a1;
                        ++a2;
                        while (1) {
                            edx19 = *a2;
                            *a1 = *reinterpret_cast<uint16_t*>(&edx19);
                            ++a1;
                            ++a2;
                            while (1) {
                                edx20 = *a2;
                                *a1 = *reinterpret_cast<uint16_t*>(&edx20);
                                ++a1;
                                ++a2;
                                while (1) {
                                    edx21 = *a2;
                                    *a1 = *reinterpret_cast<uint16_t*>(&edx21);
                                    ++a1;
                                    ++a2;
                                    while (1) {
                                        edx22 = *a2;
                                        *a1 = *reinterpret_cast<uint16_t*>(&edx22);
                                        ++a1;
                                        ++a2;
                                        a3 = a3 - 8;
                                        if (!a3) 
                                            goto addr_8048700_23;
                                        switch (8 - a3) {
                                        case 7:
                                        case 6:
                                            goto 0x80486c8;
                                        case 5:
                                            goto 0x80486b1;
                                        case 4:
                                            goto 0x804869a;
                                        case 2:
                                            goto 0x804866c;
                                        case 1:
                                            goto 0x8048655;
                                        case 3:
                                            goto 0x8048683;
                                        case 0:
                                            goto 0x804863f;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        addr_8048700_23:
        goto v23;
    }
}

void copy2_four_times(uint16_t* a1, uint16_t* a2, int32_t a3) {
    int32_t eax4;
    uint32_t edx5;
    uint32_t edx6;
    uint32_t edx7;
    uint32_t edx8;

    if (a3 > 0) {
        while (a3) {
            eax4 = 4 - a3;
            if (eax4 != 2) {
                if (eax4 == 3) {
                    goto addr_80485f1_8;
                } else {
                    if (eax4 != 1) {
                        edx5 = *a2;
                        *a1 = *reinterpret_cast<uint16_t*>(&edx5);
                        ++a1;
                        ++a2;
                    }
                    edx6 = *a2;
                    *a1 = *reinterpret_cast<uint16_t*>(&edx6);
                    ++a1;
                    ++a2;
                }
            }
            edx7 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx7);
            ++a1;
            ++a2;
            addr_80485f1_8:
            edx8 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx8);
            ++a1;
            ++a2;
            a3 = a3 - 4;
        }
    }
    return;
}

/* __i686.get_pc_thunk.bx */
void __i686_get_pc_thunk_bx() {
    return;
}

void copy2_eight_times(uint16_t* a1, uint16_t* a2, int32_t a3) {
    uint32_t edx4;
    uint32_t edx5;
    uint32_t edx6;
    uint32_t edx7;
    uint32_t edx8;
    uint32_t edx9;
    uint32_t edx10;
    uint32_t edx11;

    if (a3 > 0) {
        while (a3) {
            switch (8 - a3) {
            default:
                edx4 = *a2;
                *a1 = *reinterpret_cast<uint16_t*>(&edx4);
                ++a1;
                ++a2;
                goto addr_8048656_7;
            case 1:
                goto addr_8048656_7;
            case 2:
                goto addr_804866d_10;
            case 3:
                goto addr_8048684_12;
            case 4:
                goto addr_804869b_14;
            case 5:
                goto addr_80486b2_16;
            case 6:
                goto addr_80486c9_18;
            case 7:
            }
            addr_80486e0_20:
            edx5 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx5);
            ++a1;
            ++a2;
            a3 = a3 - 8;
            continue;
            addr_80486c9_18:
            edx6 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx6);
            ++a1;
            ++a2;
            goto addr_80486e0_20;
            addr_80486b2_16:
            edx7 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx7);
            ++a1;
            ++a2;
            goto addr_80486c9_18;
            addr_804869b_14:
            edx8 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx8);
            ++a1;
            ++a2;
            goto addr_80486b2_16;
            addr_8048684_12:
            edx9 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx9);
            ++a1;
            ++a2;
            goto addr_804869b_14;
            addr_804866d_10:
            edx10 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx10);
            ++a1;
            ++a2;
            goto addr_8048684_12;
            addr_8048656_7:
            edx11 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx11);
            ++a1;
            ++a2;
            goto addr_804866d_10;
        }
    }
    return;
}

void __do_global_dtors_aux();

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048878(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t malloc = 0x804832a;

uint16_t* fun_8048324(int32_t a1) {
    goto malloc;
}

void copy1_four_times(uint16_t* a1, uint16_t* a2, int32_t a3) {
    int32_t eax4;
    int32_t v5;
    uint32_t edx6;
    uint32_t eax7;
    uint32_t edx8;
    uint32_t edx9;
    uint32_t edx10;
    uint32_t edx11;

    eax4 = a3 + 3;
    if (eax4 < 0) {
        eax4 = eax4 + 3;
    }
    v5 = eax4 >> 2;
    edx6 = reinterpret_cast<uint32_t>(a3 >> 31) >> 30;
    eax7 = (a3 + edx6 & 3) - edx6;
    if (eax7 == 1) {
        while (edx8 = *a2, *a1 = *reinterpret_cast<uint16_t*>(&edx8), ++a1, ++a2, --v5, v5 > 0) {
            addr_804843c_5:
            edx9 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx9);
            ++a1;
            ++a2;
            addr_8048450_6:
            edx10 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx10);
            ++a1;
            ++a2;
            addr_8048464_7:
            edx11 = *a2;
            *a1 = *reinterpret_cast<uint16_t*>(&edx11);
            ++a1;
            ++a2;
        }
    } else {
        if (reinterpret_cast<int32_t>(eax7) > reinterpret_cast<int32_t>(1)) {
            if (eax7 == 2) 
                goto addr_8048464_7;
            if (eax7 == 3) 
                goto addr_8048450_6;
        } else {
            if (!eax7) 
                goto addr_804843c_5;
        }
    }
    return;
}

int32_t memcmp = 0x80482fa;

void fun_80482f4(uint16_t* a1, uint16_t* a2, int32_t a3) {
    goto memcmp;
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
                *reinterpret_cast<int32_t*>(eax3 * 4 + 0x804997c)();
                eax2 = dtor_idx_5980;
            } while (eax2 < 0);
        }
        _edata = 1;
    }
    return;
}

void main();

void __libc_csu_fini();

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048314(main, __return_address(), esp1, 0x80487e0, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_80483c5() {
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_8048878(v1, ebx2, ebp3, __return_address());
}

int32_t g8049a5c = 0;

void fun_804830a() {
    goto g8049a5c;
}

void fun_80482f0() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_804831a() {
    goto 0x80482e4;
}

void main() {
    uint16_t* eax1;
    uint16_t* eax2;

    eax1 = fun_8048324(0xc8);
    eax2 = fun_8048324(0xc8);
    copy1_four_times(eax2, eax1, 100);
    copy1_eight_times(eax2, eax1, 100);
    copy2_four_times(eax2, eax1, 100);
    copy2_eight_times(eax2, eax1, 100);
    fun_80482f4(eax1, eax2, 0xc8);
    return;
}

void fun_80482fa() {
    goto 0x80482e4;
}

void __libc_csu_fini() {
    return;
}

void fun_804832a() {
    goto 0x80482e4;
}

void fun_80487d5(int32_t a1, int32_t a2, int32_t a3) {
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
