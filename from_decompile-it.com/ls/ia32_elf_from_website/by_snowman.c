
void fun_8049488(int32_t a1, int32_t a2);

void fun_804959c();

void frame_dummy();

void __do_global_ctors_aux();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_8049488(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0x1ab6c - 8)) {
        fun_804959c();
    }
    frame_dummy();
    __do_global_ctors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8049488(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1ab6c - 8)) {
        fun_804959c();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x80495a2;

void fun_804959c() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void putchar_unlocked(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        putchar_unlocked(0x8063f10);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x8063f00);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t __libc_start_main = 0x8049662;

void fun_804965c(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t __assert_fail = 0x80496c2;

void fun_80496bc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto __assert_fail;
}

int32_t _obstack_newchunk = 0x8049742;

void fun_804973c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto _obstack_newchunk;
}

int32_t fputs_unlocked = 0x8049562;

void fun_804955c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto fputs_unlocked;
}

int32_t putchar_unlocked = 0x8049ac2;

void** fun_8049abc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto putchar_unlocked;
}

void** fun_80496ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, ...);

void** exit_failure = reinterpret_cast<void**>(1);

void fun_804997c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void fun_80494bc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void usage(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void xalloc_die(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** ebp11;
    void** eax12;
    void** edx13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;

    eax12 = fun_80496ec(0x80617cf, v6, v7, v8, v9, v10, ebp11, __return_address(), a1);
    edx13 = exit_failure;
    fun_804997c(edx13, 0, 0x80617e0, eax12, v14, v15, ebp11, __return_address());
    fun_80494bc(edx13, 0, 0x80617e0, eax12, v16, v17, ebp11, __return_address(), a1);
    usage(1, v18, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, edx13, 0, 0x80617e0, eax12);
    goto edx13;
}

int32_t free = 0x8049712;

void free(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, ...) {
    goto free;
}

int32_t strncmp = 0x8049a22;

int32_t fun_8049a1c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto strncmp;
}

void** interrupt_signal = reinterpret_cast<void**>(0);

uint32_t stop_signal_count = 0;

void** restore_default_color(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** stdout = reinterpret_cast<void**>(0);

void fun_8049a2c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void fun_804994c(void** a1, void** a2, void** a3);

void fun_804957c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void fun_80498bc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void process_signals(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    void** eax7;
    uint32_t edx8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    void** v20;
    uint32_t eax21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    while (eax7 = interrupt_signal, edx8 = stop_signal_count, !!(reinterpret_cast<unsigned char>(eax7) | edx8)) {
        restore_default_color(2, v9, 0, v10, v11, v12);
        eax13 = stdout;
        fun_8049a2c(eax13, v9, 0, v14, v15, v16);
        v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xffffff78);
        v18 = reinterpret_cast<void**>(0x8064500);
        fun_804994c(0, 0x8064500, v17);
        eax19 = interrupt_signal;
        v20 = eax19;
        eax21 = stop_signal_count;
        if (!eax21) {
            v18 = reinterpret_cast<void**>(0);
            fun_804957c(v20, 0, v17, v22, v23, v24);
        } else {
            stop_signal_count = eax21 - 1;
            v20 = reinterpret_cast<void**>(19);
        }
        fun_80498bc(v20, v18, v17, v25, v26, v27);
        v9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xffffff78);
        fun_804994c(2, v9, 0);
    }
    return;
}

void** fun_80495fc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** fun_804983c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void** xstrdup(void** a1, void** a2, void** a3, void** a4);

void** color_buf = reinterpret_cast<void**>(0);

void** xmalloc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** color_ext_list = reinterpret_cast<void**>(0);

unsigned char get_funky_string(void** a1, void** a2, void** a3, void** a4);

int32_t strcmp(void** a1, void** a2, void** a3, void** a4);

void** quotearg(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t g8064210 = 5;

void** g8064214 = reinterpret_cast<void**>(65);

unsigned char color_symlink_as_referent = 0;

unsigned char print_with_color = 0;

void parse_ls_color(void** a1, void** a2) {
    void* ebp3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    void** v11;
    uint32_t eax12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    void** eax24;
    void** v25;
    void** v26;
    void** v27;
    uint32_t eax28;
    uint32_t eax29;
    void** v30;
    void** v31;
    void** v32;
    void** eax33;
    void** edx34;
    unsigned char al35;
    uint32_t eax36;
    unsigned char al37;
    void** v38;
    uint32_t eax39;
    int32_t v40;
    int32_t eax41;
    void** eax42;
    void** v43;
    void** eax44;
    unsigned char al45;
    int32_t eax46;
    void** eax47;
    int32_t eax48;
    void** eax49;
    void** v50;
    void** eax51;
    void** eax52;
    void** v53;
    void** v54;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = fun_80495fc(0x805f77c, v4, v5, v6, v7, v8, v9);
    v11 = eax10;
    if (!v11 || (eax12 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v11)), *reinterpret_cast<signed char*>(&eax12) == 0)) {
        addr_804be8b_2:
        return;
    } else {
        v13 = reinterpret_cast<void**>(0);
        v14 = reinterpret_cast<void**>(3);
        v15 = reinterpret_cast<void**>(0x805f786);
        fun_804983c(reinterpret_cast<int32_t>(ebp3) + 0xffffffdd, 0x805f786, 3, v16, v17, v18, v19, v20, v21);
        eax23 = xstrdup(v11, 0x805f786, 3, v22);
        color_buf = eax23;
        eax24 = color_buf;
        v25 = eax24;
        v26 = reinterpret_cast<void**>(1);
        while (reinterpret_cast<signed char>(v26) > reinterpret_cast<signed char>(0)) {
            v27 = v26;
            if (v27 == 2) {
                eax28 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v11));
                if (!*reinterpret_cast<signed char*>(&eax28)) {
                    v26 = reinterpret_cast<void**>(0xffffffff);
                    continue;
                } else {
                    ++v11;
                    v26 = reinterpret_cast<void**>(3);
                    continue;
                }
            }
            if (reinterpret_cast<signed char>(v27) <= reinterpret_cast<signed char>(2)) {
                if (v27 == 1) {
                    eax29 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v11));
                    v30 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax29)));
                    if (v30 == 42) {
                        eax33 = xmalloc(20, v15, v14, v31, v27, v30, v32);
                        v13 = eax33;
                        edx34 = color_ext_list;
                        *reinterpret_cast<void***>(v13 + 16) = edx34;
                        color_ext_list = v13;
                        ++v11;
                        *reinterpret_cast<void***>(v13 + 4) = v25;
                        v31 = v13;
                        v14 = reinterpret_cast<void**>(1);
                        v15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffe4);
                        al35 = get_funky_string(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v15, 1, v31);
                        if (!al35) {
                            v32 = reinterpret_cast<void**>(0xffffffff);
                        } else {
                            v32 = reinterpret_cast<void**>(4);
                        }
                        v26 = v32;
                        continue;
                    } else {
                        if (v30 == 58) {
                            ++v11;
                            continue;
                        } else {
                            if (!v30) {
                                v26 = reinterpret_cast<void**>(0);
                                continue;
                            } else {
                                ++v11;
                                v26 = reinterpret_cast<void**>(2);
                                continue;
                            }
                        }
                    }
                } else {
                    continue;
                }
            }
            if (v27 != 3) {
                if (v27 == 4) {
                    eax36 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v11));
                    ++v11;
                    if (*reinterpret_cast<signed char*>(&eax36) != 61) {
                        v26 = reinterpret_cast<void**>(0xffffffff);
                        continue;
                    } else {
                        *reinterpret_cast<void***>(v13 + 12) = v25;
                        v31 = v13 + 8;
                        v14 = reinterpret_cast<void**>(0);
                        v15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffe4);
                        al37 = get_funky_string(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v15, 0, v31);
                        if (!al37) {
                            v38 = reinterpret_cast<void**>(0xffffffff);
                        } else {
                            v38 = reinterpret_cast<void**>(1);
                        }
                        v26 = v38;
                        continue;
                    }
                } else {
                    continue;
                }
            }
            v26 = reinterpret_cast<void**>(0xffffffff);
            eax39 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v11));
            ++v11;
            if (*reinterpret_cast<signed char*>(&eax39) != 61) 
                continue;
            v40 = 0;
            while (*reinterpret_cast<int32_t*>(v40 * 4 + 0x805e5e0)) {
                v15 = *reinterpret_cast<void***>(v40 * 4 + 0x805e5e0);
                eax41 = strcmp(reinterpret_cast<int32_t>(ebp3) + 0xffffffdd, v15, v14, v31);
                if (!eax41) 
                    goto addr_804bcd9_36;
                ++v40;
            }
            addr_804bd41_38:
            if (!reinterpret_cast<int1_t>(v26 == 0xffffffff)) 
                continue;
            eax42 = quotearg(reinterpret_cast<int32_t>(ebp3) + 0xffffffdd, v15, v14, v31, v27, v30, v32);
            eax44 = fun_80496ec(0x805f789, v15, v14, v31, v27, v30, v32, v43, v38);
            v31 = eax42;
            v14 = eax44;
            v15 = reinterpret_cast<void**>(0);
            fun_804997c(0, 0, v14, v31, v27, v30, v32, v43);
            continue;
            addr_804bcd9_36:
            *reinterpret_cast<void***>(v40 * 8 + 0x80641e4) = v25;
            v31 = reinterpret_cast<void**>((v40 << 3) + 0x80641e0);
            v14 = reinterpret_cast<void**>(0);
            v15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffe4);
            al45 = get_funky_string(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v15, 0, v31);
            if (!al45) {
                v43 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v43 = reinterpret_cast<void**>(1);
            }
            v26 = v43;
            goto addr_804bd41_38;
        }
        if (reinterpret_cast<signed char>(v26) < reinterpret_cast<signed char>(0)) 
            goto addr_804bdf7_44;
    }
    addr_804be59_45:
    eax46 = g8064210;
    if (eax46 == 6 && (eax47 = g8064214, eax48 = fun_8049a1c(eax47, 0x805f7d8, 6, v31, v27, v30, v32), !eax48)) {
        color_symlink_as_referent = 1;
        goto addr_804be8b_2;
    }
    addr_804bdf7_44:
    eax49 = fun_80496ec(0x805f7a4, v15, v14, v31, v27, v30, v32, v43, v38);
    v50 = eax49;
    fun_804997c(0, 0, v50, v31, v27, v30, v32, v43);
    eax51 = color_buf;
    free(eax51, 0, v50, v31, v27, v30, v32, v43, v38);
    eax52 = color_ext_list;
    v53 = eax52;
    while (v53) {
        v54 = v53;
        v53 = *reinterpret_cast<void***>(v53 + 16);
        free(v54, 0, v50, v31, v27, v30, v32, v43, v38);
    }
    print_with_color = 0;
    goto addr_804be59_45;
}

unsigned char g805e639 = 48;

uint32_t is_colored(int32_t a1, void** a2, void** a3, void** a4) {
    int32_t v5;
    void** v6;
    uint32_t edx7;
    uint32_t eax8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    int32_t eax13;
    int32_t v14;

    v5 = *reinterpret_cast<int32_t*>(a1 * 8 + 0x80641e0);
    v6 = *reinterpret_cast<void***>(a1 * 8 + 0x80641e4);
    if (!v5 || (v5 == 1 && (edx7 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v6)), eax8 = g805e639, *reinterpret_cast<signed char*>(&edx7) == *reinterpret_cast<signed char*>(&eax8)) || v5 == 2 && (eax13 = fun_8049a1c(v6, 0x805ed2c, 2, v9, v10, v11, v12), eax13 == 0))) {
        v14 = 0;
    } else {
        v14 = 1;
    }
    return static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v14));
}

int32_t sigemptyset = 0x80494f2;

void fun_80494ec(void** a1, void** a2) {
    goto sigemptyset;
}

int32_t sigaddset = 0x80499a2;

void fun_804999c(void** a1, void** a2, void** a3) {
    goto sigaddset;
}

int32_t g80641f4 = 0;

void** put_indicator(void** a1, void** a2, void** a3);

void** prep_non_filename_text(void** a1, void** a2, void** a3, void** a4, void** a5) {
    int32_t eax6;
    void** v7;
    void** ebp8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;

    eax6 = g80641f4;
    if (!eax6) {
        put_indicator(0x80641e0, v7, ebp8);
        put_indicator(0x80641f8, v9, ebp8);
        eax11 = put_indicator(0x80641e8, v10, ebp8);
    } else {
        eax11 = put_indicator(0x80641f0, v12, ebp8);
    }
    return eax11;
}

void** malloc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

uint32_t check_tuning(void** a1, void** a2, void** a3, void** a4);

void** next_prime(void** a1);

void** fun_804960c(void** a1, void** a2);

void** hash_initialize(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** v16;
    void** v17;
    void** v18;
    uint32_t eax19;
    uint32_t eax20;
    uint32_t eax21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    int32_t v32;
    int32_t v33;
    int32_t v34;
    int32_t v35;
    int32_t v36;
    int32_t v37;
    int32_t v38;
    int16_t ax39;
    int16_t fpu_status_word40;
    void** v41;

    if (!a3 || !a4) {
        v6 = reinterpret_cast<void**>(0);
    } else {
        eax15 = malloc(40, v7, v8, v9, v10, v11, v12, v13, v14);
        if (eax15) {
            if (!a2) {
                a2 = reinterpret_cast<void**>(0x8061860);
            }
            *reinterpret_cast<void***>(eax15 + 20) = a2;
            eax19 = check_tuning(eax15, v16, v17, v18);
            eax20 = eax19 ^ 1;
            if (*reinterpret_cast<signed char*>(&eax20)) 
                goto addr_8052ba1_7;
            eax21 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 16))) ^ 1;
            if (!*reinterpret_cast<signed char*>(&eax21)) 
                goto addr_8052af7_9; else 
                goto addr_8052aa3_10;
        } else {
            v6 = reinterpret_cast<void**>(0);
        }
    }
    addr_8052bb3_12:
    return v6;
    addr_8052af7_9:
    if (reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0x1fffffff) || ((eax22 = next_prime(a1), *reinterpret_cast<void***>(eax15 + 8) = eax22, reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax15 + 8)) > reinterpret_cast<unsigned char>(0x1fffffff)) || (eax23 = *reinterpret_cast<void***>(eax15 + 8), eax24 = fun_804960c(eax23, 8), *reinterpret_cast<void***>(eax15) = eax24, *reinterpret_cast<void***>(eax15) == 0))) {
        addr_8052ba1_7:
        free(eax15, 8, v25, v26, v27, v28, v29, v30, v31, eax15, 8, v32, v33, v34, v35, v36, v37, v38);
        v6 = reinterpret_cast<void**>(0);
        goto addr_8052bb3_12;
    } else {
        *reinterpret_cast<void***>(eax15 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax15)) + (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax15 + 8)) << 3));
        *reinterpret_cast<void***>(eax15 + 12) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax15 + 16) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax15 + 24) = a3;
        *reinterpret_cast<void***>(eax15 + 28) = a4;
        *reinterpret_cast<void***>(eax15 + 32) = a5;
        *reinterpret_cast<void***>(eax15 + 36) = reinterpret_cast<void**>(0);
        v6 = eax15;
        goto addr_8052bb3_12;
    }
    addr_8052aa3_10:
    __asm__("fild qword [esp]");
    __asm__("fld dword [eax+0x8]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [ebp-0x8]");
    __asm__("fld dword [ebp-0x8]");
    __asm__("fld dword [0x80618e8]");
    __asm__("fxch st0, st1");
    __asm__("fucompp ");
    ax39 = fpu_status_word40;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax39) + 1)) 
        goto addr_8052ba1_7;
    __asm__("fld dword [ebp-0x8]");
    __asm__("fnstcw word [ebp-0x12]");
    __asm__("fldcw word [ebp-0x14]");
    __asm__("fistp qword [ebp-0x20]");
    __asm__("fldcw word [ebp-0x12]");
    a1 = v41;
    goto addr_8052af7_9;
}

int32_t _obstack_begin = 0x8049682;

void fun_804967c(int32_t a1, int32_t a2, void** a3, void** a4, void** a5) {
    goto _obstack_begin;
}

void** xnmalloc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void** v9;
    void** eax10;

    if (reinterpret_cast<unsigned char>(-1 / reinterpret_cast<unsigned char>(a2)) < reinterpret_cast<unsigned char>(a1)) {
        xalloc_die(v6, v7, ebp8, __return_address(), a1);
    }
    eax10 = xmalloc(reinterpret_cast<unsigned char>(a1) * reinterpret_cast<unsigned char>(a2), v9, ebp8, __return_address(), a1, a2, a3);
    return eax10;
}

void** cwd_n_used = reinterpret_cast<void**>(0);

void** sorted_file = reinterpret_cast<void**>(0);

void freecon(void** a1);

unsigned char any_has_acl = 0;

void** inode_number_width = reinterpret_cast<void**>(0);

void** block_size_width = reinterpret_cast<void**>(0);

void** nlink_width = reinterpret_cast<void**>(0);

void** owner_width = reinterpret_cast<void**>(0);

void** group_width = reinterpret_cast<void**>(0);

void** author_width = reinterpret_cast<void**>(0);

void** scontext_width = reinterpret_cast<void**>(0);

void** major_device_number_width = reinterpret_cast<void**>(0);

void** minor_device_number_width = reinterpret_cast<void**>(0);

void** file_size_width = reinterpret_cast<void**>(0);

void clear_files(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void** v9;
    void** eax10;
    void** edx11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebp8;
    v9 = reinterpret_cast<void**>(0);
    while (eax10 = cwd_n_used, reinterpret_cast<unsigned char>(v9) < reinterpret_cast<unsigned char>(eax10)) {
        edx11 = sorted_file;
        v12 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx11) + (reinterpret_cast<unsigned char>(v9) << 2));
        v13 = *reinterpret_cast<void***>(v12);
        free(v13, v14, v15, v16, v9, v12, v7, v6, a1);
        v17 = *reinterpret_cast<void***>(v12 + 4);
        free(v17, v18, v19, v20, v9, v12, v7, v6, a1);
        if (*reinterpret_cast<void***>(v12 + 0x70) != 0x80641c8) {
            v21 = *reinterpret_cast<void***>(v12 + 0x70);
            freecon(v21);
        }
        ++v9;
    }
    cwd_n_used = reinterpret_cast<void**>(0);
    any_has_acl = 0;
    inode_number_width = reinterpret_cast<void**>(0);
    block_size_width = reinterpret_cast<void**>(0);
    nlink_width = reinterpret_cast<void**>(0);
    owner_width = reinterpret_cast<void**>(0);
    group_width = reinterpret_cast<void**>(0);
    author_width = reinterpret_cast<void**>(0);
    scontext_width = reinterpret_cast<void**>(0);
    major_device_number_width = reinterpret_cast<void**>(0);
    minor_device_number_width = reinterpret_cast<void**>(0);
    file_size_width = reinterpret_cast<void**>(0);
    return;
}

void** cwd_n_alloc = reinterpret_cast<void**>(0);

void** cwd_file = reinterpret_cast<void**>(0);

void** xnrealloc(void** a1, void** a2, void** a3, void** a4);

void fun_804964c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

struct s1 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    int32_t f16;
    int32_t f20;
    void** f24;
    signed char[3] pad28;
    void** f28;
};

unsigned char format_needs_stat = 0;

unsigned char print_inode = 0;

unsigned char format_needs_type = 0;

uint32_t dereference = 0;

unsigned char check_symlink_color = 0;

uint32_t indicator_style = 0;

void** fun_804985c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

struct s2 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

struct s3 {
    int32_t f0;
    void** f4;
};

void attach();

struct s4 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
    signed char[3] pad36;
    void** f36;
};

void** umaxtostr(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

uint32_t lstat64(void** a1, void** a2);

uint32_t stat64(void** a1, void** a2);

void** format = reinterpret_cast<void**>(0);

unsigned char print_scontext = 0;

uint32_t lgetfilecon(void** a1, void** a2, void** a3, void** a4, void** a5);

uint32_t getfilecon(void** a1, void** a2, void** a3, void** a4, void** a5);

void*** fun_80494cc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

uint32_t file_has_acl();

void** quotearg_colon(void** a1, void** a2, void** a3, void** a4);

void** get_link_name(void** a1, void** a2, void** a3);

void** make_link_name(void** a1, void** a2);

unsigned char immediate_dirs = 0;

unsigned char print_block_size = 0;

void** output_block_size = reinterpret_cast<void**>(0);

void** g80644ac = reinterpret_cast<void**>(0);

void** human_output_opts = reinterpret_cast<void**>(0);

void** human_readable(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** gnu_mbswidth(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

unsigned char print_owner = 1;

void** format_user_width(void** a1);

unsigned char print_group = 1;

void** format_group_width(void** a1);

unsigned char print_author = 0;

void** fun_80499fc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_804962c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** unsigned_file_size(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** file_output_block_size = reinterpret_cast<void**>(1);

void** g80641d4 = reinterpret_cast<void**>(0);

void** file_failure(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** gobble_file(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* esp7;
    void*** esp8;
    void** eax9;
    void** v10;
    void** v11;
    void** v12;
    void** edx13;
    void** eax14;
    void** eax15;
    void** edx16;
    void** eax17;
    void** eax18;
    void** ecx19;
    void** eax20;
    uint32_t edx21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    struct s1* esp26;
    uint32_t eax27;
    uint32_t eax28;
    uint32_t eax29;
    uint32_t eax30;
    uint32_t eax31;
    uint32_t eax32;
    uint32_t eax33;
    uint32_t eax34;
    uint32_t eax35;
    uint32_t eax36;
    uint32_t eax37;
    uint32_t eax38;
    uint32_t eax39;
    uint32_t eax40;
    uint32_t eax41;
    uint32_t eax42;
    uint32_t eax43;
    uint32_t eax44;
    uint32_t eax45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** eax51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** eax56;
    struct s2* esp57;
    struct s3* esp58;
    uint32_t eax59;
    uint32_t eax60;
    void** edx61;
    void** ecx62;
    struct s4* esp63;
    void** eax64;
    struct s1* esp65;
    struct s4* esp66;
    void** eax67;
    void** eax68;
    struct s4* esp69;
    uint32_t eax70;
    uint32_t v71;
    signed char v72;
    struct s4* esp73;
    uint32_t eax74;
    uint32_t eax75;
    void** eax76;
    uint32_t eax77;
    unsigned char v78;
    struct s4* esp79;
    uint32_t eax80;
    struct s1* esp81;
    uint32_t v82;
    struct s4* esp83;
    uint32_t eax84;
    uint32_t v85;
    struct s4* esp86;
    void*** eax87;
    struct s4* esp88;
    void*** eax89;
    struct s4* esp90;
    int32_t eax91;
    uint32_t eax92;
    void** eax93;
    struct s4* esp94;
    uint32_t eax95;
    uint32_t eax96;
    uint32_t eax97;
    struct s4* esp98;
    void** eax99;
    struct s4* esp100;
    void*** eax101;
    struct s1* esp102;
    void** eax103;
    struct s4* esp104;
    void** eax105;
    uint32_t eax106;
    struct s4* esp107;
    struct s1* esp108;
    struct s4* esp109;
    void** eax110;
    struct s1* esp111;
    uint32_t eax112;
    uint32_t eax113;
    struct s4* esp114;
    uint32_t eax115;
    uint32_t eax116;
    void** eax117;
    uint32_t v118;
    void** v119;
    struct s4* esp120;
    uint32_t eax121;
    uint32_t eax122;
    uint32_t eax123;
    uint32_t eax124;
    void** edx125;
    void** eax126;
    uint32_t eax127;
    void** eax128;
    void** edx129;
    void** ecx130;
    struct s4* esp131;
    void** eax132;
    struct s1* esp133;
    struct s4* esp134;
    void** eax135;
    void** eax136;
    void** eax137;
    uint32_t eax138;
    struct s4* esp139;
    void** eax140;
    void** eax141;
    uint32_t eax142;
    struct s4* esp143;
    void** eax144;
    void** eax145;
    uint32_t eax146;
    struct s4* esp147;
    void** eax148;
    void** eax149;
    uint32_t eax150;
    struct s4* esp151;
    void** eax152;
    void** eax153;
    void** eax154;
    void** edx155;
    struct s4* esp156;
    void** eax157;
    struct s1* esp158;
    struct s4* esp159;
    void** eax160;
    struct s1* esp161;
    void** eax162;
    void** edx163;
    struct s4* esp164;
    void** eax165;
    struct s1* esp166;
    struct s4* esp167;
    void** eax168;
    struct s1* esp169;
    struct s4* esp170;
    void** eax171;
    struct s1* esp172;
    void** eax173;
    void** edx174;
    struct s4* esp175;
    void** eax176;
    struct s1* esp177;
    struct s4* esp178;
    void** eax179;
    struct s1* esp180;
    struct s4* esp181;
    void** eax182;
    void** eax183;
    void** eax184;
    void** eax185;
    void** v186;
    void** eax187;
    void** edx188;
    struct s4* esp189;
    void** eax190;
    struct s1* esp191;
    void** eax192;
    void** edx193;
    void** ecx194;
    struct s4* esp195;
    void** eax196;
    struct s1* esp197;
    struct s4* esp198;
    void** eax199;
    void** eax200;
    struct s4* esp201;
    void** eax202;
    struct s1* esp203;
    struct s4* esp204;
    struct s1* esp205;
    struct s4* esp206;
    void** eax207;
    void** eax208;
    void** v209;
    unsigned char v210;
    struct s4* esp211;
    void*** eax212;
    uint32_t edx213;
    uint32_t eax214;
    struct s4* esp215;
    uint32_t eax216;
    struct s4* esp217;
    void** eax218;
    void** eax219;

    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp7) - 4 - 0x384);
    eax9 = a5;
    v10 = reinterpret_cast<void**>(0);
    if (*reinterpret_cast<unsigned char*>(&eax9) && reinterpret_cast<unsigned char>(a3) | reinterpret_cast<unsigned char>(a4)) {
        fun_80496bc(0x805f8c8, 0x805ec90, 0x9f7, 0x805f8bc, v11, v12);
        esp8 = esp8 - 4 + 4;
    }
    edx13 = cwd_n_used;
    eax14 = cwd_n_alloc;
    if (edx13 == eax14) {
        eax15 = cwd_n_alloc;
        edx16 = cwd_file;
        eax17 = xnrealloc(edx16, eax15, 0xf0, 0x805f8bc);
        esp8 = esp8 - 4 + 4;
        cwd_file = eax17;
        eax18 = cwd_n_alloc;
        cwd_n_alloc = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax18) + reinterpret_cast<unsigned char>(eax18));
    }
    ecx19 = cwd_file;
    eax20 = cwd_n_used;
    edx21 = reinterpret_cast<unsigned char>(eax20) * 8;
    v22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx19) + ((edx21 << 4) - edx21));
    fun_804964c(v22, 0, 0x78, 0x805f8bc, v23, v24, v25);
    esp26 = reinterpret_cast<struct s1*>(esp8 - 4 + 4);
    *reinterpret_cast<void***>(v22 + 96) = a3;
    *reinterpret_cast<void***>(v22 + 100) = a4;
    *reinterpret_cast<void***>(v22 + 0x68) = a2;
    if (*reinterpret_cast<unsigned char*>(&eax9) || ((eax27 = format_needs_stat, !!*reinterpret_cast<signed char*>(&eax27)) || (reinterpret_cast<int1_t>(a2 == 3) && (eax28 = print_with_color, !!*reinterpret_cast<signed char*>(&eax28)) || (((eax29 = print_inode, !!*reinterpret_cast<signed char*>(&eax29)) || (eax30 = format_needs_type, !!*reinterpret_cast<signed char*>(&eax30))) && ((a2 == 6 || !a2) && ((eax31 = dereference, eax31 == 5) || ((eax32 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax9)) ^ 1, !*reinterpret_cast<signed char*>(&eax32)) && (eax33 = dereference, eax33 != 2) || ((eax34 = color_symlink_as_referent, !!*reinterpret_cast<signed char*>(&eax34)) || (eax35 = check_symlink_color, !!*reinterpret_cast<signed char*>(&eax35)))))) || ((eax36 = print_inode, eax37 = eax36 ^ 1, !*reinterpret_cast<signed char*>(&eax37)) && !(reinterpret_cast<unsigned char>(a3) | reinterpret_cast<unsigned char>(a4)) || (eax38 = format_needs_type, eax39 = eax38 ^ 1, !*reinterpret_cast<signed char*>(&eax39)) && (!a2 || (*reinterpret_cast<unsigned char*>(&eax9) || reinterpret_cast<int1_t>(a2 == 5) && ((eax40 = indicator_style, eax40 == 3) || (eax41 = print_with_color, eax42 = eax41 ^ 1, !*reinterpret_cast<signed char*>(&eax42)) && (eax43 = is_colored(13, 0, 0x78, 0x805f8bc), esp26 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(esp26) - 4 + 4), !!*reinterpret_cast<signed char*>(&eax43)))))))))) {
        eax44 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1));
        if (*reinterpret_cast<signed char*>(&eax44) == 47 || (eax45 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a6)), !*reinterpret_cast<signed char*>(&eax45))) {
            v46 = a1;
        } else {
            eax51 = fun_804985c(a1, 0, 0x78, 0x805f8bc, v47, v48, v49, v50);
            eax56 = fun_804985c(a6, 0, 0x78, 0x805f8bc, v52, v53, v54, v55);
            esp57 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esp26) - 4 + 4 - 4 + 4 - (reinterpret_cast<unsigned char>(eax51) + reinterpret_cast<unsigned char>(eax56) + 2 + 15 + 15 >> 4 << 4));
            v46 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp57) + 32 + 15 >> 4 << 4);
            esp57->f8 = a1;
            esp57->f4 = a6;
            esp57->f0 = v46;
            esp58 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(esp57) - 4);
            esp58->f0 = 0x804cb2c;
            attach();
            esp26 = reinterpret_cast<struct s1*>(&esp58->f4);
        }
        eax59 = dereference;
        if (eax59 < 3) 
            goto addr_804cbef_10;
        if (eax59 > 4) 
            goto addr_804cb4d_12;
    } else {
        addr_804d284_13:
        eax60 = print_inode;
        if (*reinterpret_cast<signed char*>(&eax60) && (edx61 = *reinterpret_cast<void***>(v22 + 96), ecx62 = *reinterpret_cast<void***>(v22 + 100), esp26->f8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0xffffff61), esp26->f0 = edx61, esp26->f4 = ecx62, esp63 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4), esp63->f0 = 0x804d2ae, eax64 = umaxtostr(esp63->f4, esp63->f8, esp63->f12, esp63->f16, 0x200, 0, esp63->f28, esp63->f32), esp65 = reinterpret_cast<struct s1*>(&esp63->f4), esp65->f0 = eax64, esp66 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp65) - 4), esp66->f0 = 0x804d2b6, eax67 = fun_804985c(esp66->f4, esp66->f8, esp66->f12, esp66->f16, 0x200, 0, esp66->f28, esp66->f32), esp26 = reinterpret_cast<struct s1*>(&esp66->f4), eax68 = inode_number_width, reinterpret_cast<signed char>(eax68) < reinterpret_cast<signed char>(eax67))) {
            inode_number_width = eax67;
            goto addr_804d2cb_15;
        }
    }
    if (!*reinterpret_cast<unsigned char*>(&eax9)) {
        addr_804cbef_10:
        esp26->f4 = v22 + 8;
        esp26->f0 = v46;
        esp69 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4);
        esp69->f0 = 0x804cc04;
        eax70 = lstat64(esp69->f4, esp69->f8);
        esp26 = reinterpret_cast<struct s1*>(&esp69->f4);
        v71 = eax70;
        v72 = 0;
        goto addr_804cc0b_17;
    } else {
        esp26->f4 = v22 + 8;
        esp26->f0 = v46;
        esp73 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4);
        esp73->f0 = 0x804cb99;
        eax74 = stat64(esp73->f4, esp73->f8);
        esp26 = reinterpret_cast<struct s1*>(&esp73->f4);
        v71 = eax74;
        v72 = 1;
        eax75 = dereference;
        if (eax75 == 3) {
            addr_804cc0b_17:
            if (!v71) {
                *reinterpret_cast<unsigned char*>(v22 + 0x74) = 1;
                eax76 = format;
                if (!eax76 || (eax77 = print_scontext, !!*reinterpret_cast<signed char*>(&eax77))) {
                    v78 = 0;
                    if (!v72) {
                        esp26->f4 = v22 + 0x70;
                        esp26->f0 = v46;
                        esp79 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4);
                        esp79->f0 = 0x804ccf0;
                        eax80 = lgetfilecon(esp79->f4, esp79->f8, 0x78, esp79->f16, esp79->f20);
                        esp81 = reinterpret_cast<struct s1*>(&esp79->f4);
                        v82 = eax80;
                    } else {
                        esp26->f4 = v22 + 0x70;
                        esp26->f0 = v46;
                        esp83 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4);
                        esp83->f0 = 0x804ccd3;
                        eax84 = getfilecon(esp83->f4, esp83->f8, 0x78, esp83->f16, esp83->f20);
                        esp81 = reinterpret_cast<struct s1*>(&esp83->f4);
                        v82 = eax84;
                    }
                    v85 = v82 >> 31;
                    if (v85) {
                        *reinterpret_cast<void***>(v22 + 0x70) = reinterpret_cast<void**>(0x80641c8);
                        esp86 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp81) - 4);
                        esp86->f0 = 0x804cd3d;
                        eax87 = fun_80494cc(esp86->f4, esp86->f8, 0x78, esp86->f16, esp86->f20, esp86->f24, esp86->f28, esp86->f32, esp86->f36);
                        esp26 = reinterpret_cast<struct s1*>(&esp86->f4);
                        if (*eax87 == 95 || (esp88 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4), esp88->f0 = 0x804cd49, eax89 = fun_80494cc(esp88->f4, esp88->f8, 0x78, esp88->f16, esp88->f20, esp88->f24, esp88->f28, esp88->f32, esp88->f36), esp26 = reinterpret_cast<struct s1*>(&esp88->f4), reinterpret_cast<int1_t>(*eax89 == 61))) {
                            v85 = 0;
                        }
                    } else {
                        esp81->f4 = *reinterpret_cast<void***>(v22 + 0x70);
                        esp81->f0 = reinterpret_cast<void**>(0x805f90c);
                        esp90 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp81) - 4);
                        esp90->f0 = 0x804cd24;
                        eax91 = strcmp(0x805f90c, esp90->f8, 0x78, esp90->f16);
                        esp26 = reinterpret_cast<struct s1*>(&esp90->f4);
                        v78 = reinterpret_cast<uint1_t>(!!eax91);
                    }
                    if (!v85 && ((eax92 = static_cast<uint32_t>(v78) ^ 1, !!*reinterpret_cast<signed char*>(&eax92)) && (eax93 = format, !eax93))) {
                        esp26->f4 = v22 + 8;
                        esp26->f0 = v46;
                        esp94 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4);
                        esp94->f0 = 0x804cd86;
                        eax95 = file_has_acl();
                        esp26 = reinterpret_cast<struct s1*>(&esp94->f4);
                        v85 = eax95 >> 31;
                        v78 = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax95) > reinterpret_cast<int32_t>(0));
                    }
                    eax96 = v78;
                    *reinterpret_cast<unsigned char*>(v22 + 0x76) = *reinterpret_cast<unsigned char*>(&eax96);
                    eax97 = any_has_acl;
                    any_has_acl = reinterpret_cast<uint1_t>(!!(static_cast<uint32_t>(v78) | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax97))));
                    if (v85) {
                        esp26->f0 = v46;
                        esp98 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4);
                        esp98->f0 = 0x804cdd1;
                        eax99 = quotearg_colon(esp98->f4, esp98->f8, 0x78, esp98->f16);
                        esp100 = reinterpret_cast<struct s4*>(&esp98->f4 - 4);
                        esp100->f0 = 0x804cdd8;
                        eax101 = fun_80494cc(esp100->f4, esp100->f8, 0x78, esp100->f16, esp100->f20, esp100->f24, esp100->f28, esp100->f32, esp100->f36);
                        esp102 = reinterpret_cast<struct s1*>(&esp100->f4);
                        eax103 = *eax101;
                        esp102->f12 = eax99;
                        esp102->f8 = reinterpret_cast<void**>(0x805f916);
                        esp102->f4 = eax103;
                        esp102->f0 = reinterpret_cast<void**>(0);
                        esp104 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp102) - 4);
                        esp104->f0 = 0x804cdf6;
                        fun_804997c(0, esp104->f8, 0x805f916, esp104->f16, esp104->f20, esp104->f24, esp104->f28, esp104->f32);
                        esp26 = reinterpret_cast<struct s1*>(&esp104->f4);
                    }
                }
                if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v22 + 24)) & 0xf000) == 0xa000 && ((eax105 = format, eax105 == 0) || (eax106 = check_symlink_color, !!*reinterpret_cast<signed char*>(&eax106)))) {
                    esp26->f8 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax9)));
                    esp26->f4 = v22;
                    esp26->f0 = v46;
                    esp107 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4);
                    esp107->f0 = 0x804ce41;
                    get_link_name(esp107->f4, esp107->f8, esp107->f12);
                    esp108 = reinterpret_cast<struct s1*>(&esp107->f4);
                    esp108->f4 = *reinterpret_cast<void***>(v22 + 4);
                    esp108->f0 = v46;
                    esp109 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp108) - 4);
                    esp109->f0 = 0x804ce56;
                    eax110 = make_link_name(esp109->f4, esp109->f8);
                    esp111 = reinterpret_cast<struct s1*>(&esp109->f4);
                    if (eax110 && (((eax112 = indicator_style, eax112 > 1) || (eax113 = check_symlink_color, !!*reinterpret_cast<signed char*>(&eax113))) && ((esp111->f4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0xfffffcd4), esp111->f0 = eax110, esp114 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp111) - 4), esp114->f0 = 0x804ce89, eax115 = stat64(esp114->f4, esp114->f8), esp111 = reinterpret_cast<struct s1*>(&esp114->f4), !eax115) && ((*reinterpret_cast<unsigned char*>(v22 + 0x75) = 1, eax116 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax9)) ^ 1, !!*reinterpret_cast<signed char*>(&eax116)) || ((eax117 = format, eax117 == 0) || (v118 & 0xf000) != 0x4000))))) {
                        *reinterpret_cast<void***>(v22 + 0x6c) = v119;
                    }
                    esp111->f0 = eax110;
                    esp120 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp111) - 4);
                    esp120->f0 = 0x804ced4;
                    free(esp120->f4, esp120->f8, esp120->f12, esp120->f16, esp120->f20, esp120->f24, esp120->f28, esp120->f32, esp120->f36);
                    esp26 = reinterpret_cast<struct s1*>(&esp120->f4);
                }
                if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v22 + 24)) & 0xf000) == 0xa000 && (eax121 = check_symlink_color, eax122 = eax121 ^ 1, !!*reinterpret_cast<signed char*>(&eax122))) {
                    *reinterpret_cast<unsigned char*>(v22 + 0x75) = 1;
                }
                if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v22 + 24)) & 0xf000) != 0xa000) {
                    if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v22 + 24)) & 0xf000) != 0x4000) {
                        *reinterpret_cast<void***>(v22 + 0x68) = reinterpret_cast<void**>(5);
                    } else {
                        eax123 = immediate_dirs;
                        eax124 = eax123 ^ 1;
                        if (!(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax124)) & static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax9)))) {
                            *reinterpret_cast<void***>(v22 + 0x68) = reinterpret_cast<void**>(3);
                        } else {
                            *reinterpret_cast<void***>(v22 + 0x68) = reinterpret_cast<void**>(9);
                        }
                    }
                } else {
                    *reinterpret_cast<void***>(v22 + 0x68) = reinterpret_cast<void**>(6);
                }
                edx125 = *reinterpret_cast<void***>(v22 + 68);
                v10 = *reinterpret_cast<void***>(v22 + 64);
                eax126 = format;
                if ((!eax126 || (eax127 = print_block_size, !!*reinterpret_cast<signed char*>(&eax127))) && (eax128 = output_block_size, edx129 = g80644ac, ecx130 = human_output_opts, esp26->f24 = eax128, esp26->f28 = edx129, esp26->f16 = 0x200, esp26->f20 = 0, esp26->f12 = ecx130, esp26->f8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0xfffffcd4), esp26->f0 = v10, esp26->f4 = edx125, esp131 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4), esp131->f0 = 0x804cfd3, eax132 = human_readable(esp131->f4, esp131->f8, esp131->f12, esp131->f16, 0x200, 0, esp131->f28, esp131->f32), esp133 = reinterpret_cast<struct s1*>(&esp131->f4), esp133->f4 = reinterpret_cast<void**>(0), esp133->f0 = eax132, esp134 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp133) - 4), esp134->f0 = 0x804cfe3, eax135 = gnu_mbswidth(esp134->f4, 0, esp134->f12, esp134->f16, 0x200, 0, esp134->f28, esp134->f32), esp26 = reinterpret_cast<struct s1*>(&esp134->f4), eax136 = block_size_width, reinterpret_cast<signed char>(eax136) < reinterpret_cast<signed char>(eax135))) {
                    block_size_width = eax135;
                }
                eax137 = format;
                if (!eax137) {
                    eax138 = print_owner;
                    if (*reinterpret_cast<signed char*>(&eax138) && (esp26->f0 = *reinterpret_cast<void***>(v22 + 32), esp139 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4), esp139->f0 = 0x804d01e, eax140 = format_user_width(esp139->f4), esp26 = reinterpret_cast<struct s1*>(&esp139->f4), eax141 = owner_width, reinterpret_cast<signed char>(eax141) < reinterpret_cast<signed char>(eax140))) {
                        owner_width = eax140;
                    }
                    eax142 = print_group;
                    if (*reinterpret_cast<signed char*>(&eax142) && (esp26->f0 = *reinterpret_cast<void***>(v22 + 36), esp143 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4), esp143->f0 = 0x804d04c, eax144 = format_group_width(esp143->f4), esp26 = reinterpret_cast<struct s1*>(&esp143->f4), eax145 = group_width, reinterpret_cast<signed char>(eax145) < reinterpret_cast<signed char>(eax144))) {
                        group_width = eax144;
                    }
                    eax146 = print_author;
                    if (*reinterpret_cast<signed char*>(&eax146) && (esp26->f0 = *reinterpret_cast<void***>(v22 + 32), esp147 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4), esp147->f0 = 0x804d07a, eax148 = format_user_width(esp147->f4), esp26 = reinterpret_cast<struct s1*>(&esp147->f4), eax149 = author_width, reinterpret_cast<signed char>(eax149) < reinterpret_cast<signed char>(eax148))) {
                        author_width = eax148;
                    }
                }
                eax150 = print_scontext;
                if (*reinterpret_cast<signed char*>(&eax150) && (esp26->f0 = *reinterpret_cast<void***>(v22 + 0x70), esp151 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4), esp151->f0 = 0x804d0a8, eax152 = fun_804985c(esp151->f4, 0, esp151->f12, esp151->f16, 0x200, 0, esp151->f28, esp151->f32), esp26 = reinterpret_cast<struct s1*>(&esp151->f4), eax153 = scontext_width, reinterpret_cast<signed char>(eax153) < reinterpret_cast<signed char>(eax152))) {
                    scontext_width = eax152;
                }
                eax154 = format;
                if (!eax154) {
                    edx155 = *reinterpret_cast<void***>(v22 + 28);
                    esp26->f8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0xffffff8b);
                    esp26->f0 = edx155;
                    esp26->f4 = reinterpret_cast<void**>(0);
                    esp156 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4);
                    esp156->f0 = 0x804d0ea;
                    eax157 = umaxtostr(esp156->f4, 0, esp156->f12, esp156->f16, 0x200, 0, esp156->f28, esp156->f32);
                    esp158 = reinterpret_cast<struct s1*>(&esp156->f4);
                    esp158->f0 = eax157;
                    esp159 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp158) - 4);
                    esp159->f0 = 0x804d0f2;
                    eax160 = fun_804985c(esp159->f4, 0, esp159->f12, esp159->f16, 0x200, 0, esp159->f28, esp159->f32);
                    esp161 = reinterpret_cast<struct s1*>(&esp159->f4);
                    eax162 = nlink_width;
                    if (reinterpret_cast<signed char>(eax162) < reinterpret_cast<signed char>(eax160)) {
                        nlink_width = eax160;
                    }
                    if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v22 + 24)) & 0xf000) == 0x2000 || (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v22 + 24)) & 0xf000) == 0x6000) {
                        edx163 = *reinterpret_cast<void***>(v22 + 44);
                        esp161->f0 = *reinterpret_cast<void***>(v22 + 40);
                        esp161->f4 = edx163;
                        esp164 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp161) - 4);
                        esp164->f0 = 0x804d144;
                        eax165 = fun_80499fc(esp164->f4, esp164->f8, esp164->f12, esp164->f16, 0x200, 0, esp164->f28, esp164->f32);
                        esp166 = reinterpret_cast<struct s1*>(&esp164->f4);
                        esp166->f8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0xffffff76);
                        esp166->f0 = eax165;
                        esp166->f4 = reinterpret_cast<void**>(0);
                        esp167 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp166) - 4);
                        esp167->f0 = 0x804d161;
                        eax168 = umaxtostr(esp167->f4, 0, esp167->f12, esp167->f16, 0x200, 0, esp167->f28, esp167->f32);
                        esp169 = reinterpret_cast<struct s1*>(&esp167->f4);
                        esp169->f0 = eax168;
                        esp170 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp169) - 4);
                        esp170->f0 = 0x804d169;
                        eax171 = fun_804985c(esp170->f4, 0, esp170->f12, esp170->f16, 0x200, 0, esp170->f28, esp170->f32);
                        esp172 = reinterpret_cast<struct s1*>(&esp170->f4);
                        eax173 = major_device_number_width;
                        if (reinterpret_cast<signed char>(eax173) < reinterpret_cast<signed char>(eax171)) {
                            major_device_number_width = eax171;
                        }
                        edx174 = *reinterpret_cast<void***>(v22 + 44);
                        esp172->f0 = *reinterpret_cast<void***>(v22 + 40);
                        esp172->f4 = edx174;
                        esp175 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp172) - 4);
                        esp175->f0 = 0x804d193;
                        eax176 = fun_804962c(esp175->f4, esp175->f8, esp175->f12, esp175->f16, 0x200, 0, esp175->f28, esp175->f32);
                        esp177 = reinterpret_cast<struct s1*>(&esp175->f4);
                        esp177->f8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0xffffff76);
                        esp177->f0 = eax176;
                        esp177->f4 = reinterpret_cast<void**>(0);
                        esp178 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp177) - 4);
                        esp178->f0 = 0x804d1b0;
                        eax179 = umaxtostr(esp178->f4, 0, esp178->f12, esp178->f16, 0x200, 0, esp178->f28, esp178->f32);
                        esp180 = reinterpret_cast<struct s1*>(&esp178->f4);
                        esp180->f0 = eax179;
                        esp181 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp180) - 4);
                        esp181->f0 = 0x804d1b8;
                        eax182 = fun_804985c(esp181->f4, 0, esp181->f12, esp181->f16, 0x200, 0, esp181->f28, esp181->f32);
                        esp26 = reinterpret_cast<struct s1*>(&esp181->f4);
                        eax183 = minor_device_number_width;
                        if (reinterpret_cast<signed char>(eax183) < reinterpret_cast<signed char>(eax182)) {
                            minor_device_number_width = eax182;
                        }
                        eax184 = major_device_number_width;
                        eax185 = minor_device_number_width;
                        v186 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax184 + 2) + reinterpret_cast<unsigned char>(eax185));
                        eax187 = file_size_width;
                        if (reinterpret_cast<signed char>(eax187) < reinterpret_cast<signed char>(v186)) {
                            file_size_width = v186;
                            goto addr_804d284_13;
                        }
                    } else {
                        edx188 = *reinterpret_cast<void***>(v22 + 56);
                        esp161->f0 = *reinterpret_cast<void***>(v22 + 52);
                        esp161->f4 = edx188;
                        esp189 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp161) - 4);
                        esp189->f0 = 0x804d210;
                        eax190 = unsigned_file_size(esp189->f4, esp189->f8, esp189->f12, esp189->f16, 0x200, 0, esp189->f28, esp189->f32);
                        esp191 = reinterpret_cast<struct s1*>(&esp189->f4);
                        eax192 = file_output_block_size;
                        edx193 = g80641d4;
                        ecx194 = human_output_opts;
                        esp191->f24 = eax192;
                        esp191->f28 = edx193;
                        esp191->f16 = 1;
                        esp191->f20 = 0;
                        esp191->f12 = ecx194;
                        esp191->f8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0xfffffcd4);
                        esp191->f0 = eax190;
                        esp191->f4 = edx188;
                        esp195 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp191) - 4);
                        esp195->f0 = 0x804d25f;
                        eax196 = human_readable(esp195->f4, esp195->f8, esp195->f12, esp195->f16, 1, 0, esp195->f28, esp195->f32);
                        esp197 = reinterpret_cast<struct s1*>(&esp195->f4);
                        esp197->f4 = reinterpret_cast<void**>(0);
                        esp197->f0 = eax196;
                        esp198 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp197) - 4);
                        esp198->f0 = 0x804d26f;
                        eax199 = gnu_mbswidth(esp198->f4, 0, esp198->f12, esp198->f16, 1, 0, esp198->f28, esp198->f32);
                        esp26 = reinterpret_cast<struct s1*>(&esp198->f4);
                        eax200 = file_size_width;
                        if (reinterpret_cast<signed char>(eax200) < reinterpret_cast<signed char>(eax199)) {
                            file_size_width = eax199;
                            goto addr_804d284_13;
                        }
                    }
                }
            } else {
                esp26->f0 = reinterpret_cast<void**>(0x805f8fb);
                esp201 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4);
                esp201->f0 = 0x804cc21;
                eax202 = fun_80496ec(0x805f8fb, esp201->f8, 0x78, esp201->f16, esp201->f20, esp201->f24, esp201->f28, esp201->f32, esp201->f36);
                esp203 = reinterpret_cast<struct s1*>(&esp201->f4);
                esp203->f8 = v46;
                esp203->f4 = eax202;
                esp203->f0 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax9)));
                esp204 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp203) - 4);
                esp204->f0 = 0x804cc3b;
                file_failure(esp204->f4, esp204->f8, esp204->f12, esp204->f16, esp204->f20, esp204->f24);
                esp205 = reinterpret_cast<struct s1*>(&esp204->f4);
                if (!*reinterpret_cast<unsigned char*>(&eax9)) {
                    esp205->f0 = a1;
                    esp206 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp205) - 4);
                    esp206->f0 = 0x804cc68;
                    eax207 = xstrdup(esp206->f4, esp206->f8, esp206->f12, esp206->f16);
                    *reinterpret_cast<void***>(v22) = eax207;
                    eax208 = cwd_n_used;
                    cwd_n_used = eax208 + 1;
                    v209 = reinterpret_cast<void**>(0);
                } else {
                    v209 = reinterpret_cast<void**>(0);
                }
            }
        } else {
            if (reinterpret_cast<int32_t>(v71) >= reinterpret_cast<int32_t>(0)) {
                v210 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v22 + 24)) & 0xf000) != 0x4000);
            } else {
                esp211 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4);
                esp211->f0 = 0x804cbb5;
                eax212 = fun_80494cc(esp211->f4, esp211->f8, 0x78, esp211->f16, esp211->f20, esp211->f24, esp211->f28, esp211->f32, esp211->f36);
                esp26 = reinterpret_cast<struct s1*>(&esp211->f4);
                v210 = reinterpret_cast<uint1_t>(*eax212 == 2);
            }
            edx213 = v210;
            eax214 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&edx213)) ^ 1;
            if (*reinterpret_cast<signed char*>(&eax214)) 
                goto addr_804cc0b_17; else 
                goto addr_804cbef_10;
        }
    }
    addr_804d2fc_74:
    return v209;
    addr_804cb4d_12:
    if (eax59 == 5) {
        esp26->f4 = v22 + 8;
        esp26->f0 = v46;
        esp215 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4);
        esp215->f0 = 0x804cb6f;
        eax216 = stat64(esp215->f4, esp215->f8);
        esp26 = reinterpret_cast<struct s1*>(&esp215->f4);
        v71 = eax216;
        v72 = 1;
        goto addr_804cc0b_17;
    }
    addr_804d2cb_15:
    esp26->f0 = a1;
    esp217 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp26) - 4);
    esp217->f0 = 0x804d2d6;
    eax218 = xstrdup(esp217->f4, 0, esp217->f12, esp217->f16);
    *reinterpret_cast<void***>(v22) = eax218;
    eax219 = cwd_n_used;
    cwd_n_used = eax219 + 1;
    v209 = v10;
    goto addr_804d2fc_74;
}

void* sorted_file_alloc = reinterpret_cast<void*>(0);

void initialize_ordering_vector(void** a1, void** a2, void** a3, void** a4);

void** sort_type = reinterpret_cast<void**>(0);

int32_t fun_80497fc(void** a1, void** a2);

void** time_type = reinterpret_cast<void**>(0);

unsigned char sort_reverse = 0;

unsigned char directories_first = 0;

void** mpsort(void** a1, void** a2, void** a3, void** a4);

void** sort_files(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** eax7;
    void** eax8;
    void* eax9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void** edx26;
    void** v27;
    void** v28;
    void** eax29;
    void** v30;
    int32_t eax31;
    unsigned char v32;
    void** eax33;
    void** v34;
    void** v35;
    void** eax36;
    void** v37;
    void** eax38;
    void** eax39;
    void* edx40;
    uint32_t eax41;
    uint32_t eax42;
    void* eax43;
    void* eax44;
    void** edx45;
    void** ecx46;
    void** v47;

    eax7 = cwd_n_used;
    eax8 = cwd_n_used;
    eax9 = sorted_file_alloc;
    if ((reinterpret_cast<unsigned char>(eax7) >> 1) + reinterpret_cast<unsigned char>(eax8) > reinterpret_cast<uint32_t>(eax9)) {
        eax10 = sorted_file;
        free(eax10, v11, v12, v13, v14, v15, v16, v17, v18);
        eax19 = cwd_n_used;
        v20 = reinterpret_cast<void**>(12);
        v21 = eax19;
        eax25 = xnmalloc(v21, 12, v22, v23, v24);
        sorted_file = eax25;
        edx26 = cwd_n_used;
        sorted_file_alloc = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx26) + reinterpret_cast<unsigned char>(edx26) + reinterpret_cast<unsigned char>(edx26));
    }
    initialize_ordering_vector(v21, 12, v27, v28);
    eax29 = sort_type;
    if (eax29 != 0xffffffff) {
        v30 = reinterpret_cast<void**>(0x8064660);
        eax31 = fun_80497fc(0x8064660, 12);
        if (eax31) {
            v32 = 1;
            eax33 = sort_type;
            if (reinterpret_cast<int1_t>(eax33 == 3)) {
                v20 = reinterpret_cast<void**>(0x805ec90);
                v30 = reinterpret_cast<void**>(0x805f967);
                fun_80496bc(0x805f967, 0x805ec90, 0xc8c, 0x805f95c, v34, v35);
            }
            initialize_ordering_vector(v30, v20, 0xc8c, 0x805f95c);
        } else {
            v32 = 0;
        }
        eax36 = sort_type;
        if (!reinterpret_cast<int1_t>(eax36 == 4)) {
            v37 = reinterpret_cast<void**>(0);
        } else {
            eax38 = time_type;
            v37 = eax38;
        }
        eax39 = sort_type;
        edx40 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v37) + reinterpret_cast<unsigned char>(eax39));
        eax41 = sort_reverse;
        eax42 = directories_first;
        eax43 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx40) + reinterpret_cast<uint32_t>(edx40) + v32);
        eax44 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax43) + reinterpret_cast<uint32_t>(eax43) + *reinterpret_cast<unsigned char*>(&eax41));
        edx45 = cwd_n_used;
        ecx46 = sorted_file;
        v47 = *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(eax44) + reinterpret_cast<uint32_t>(eax44) + *reinterpret_cast<unsigned char*>(&eax42)) * 4 + 0x80642a0);
        eax29 = mpsort(ecx46, edx45, v47, 0x805f95c);
    }
    return eax29;
}

void** active_dir_set = reinterpret_cast<void**>(0);

void queue_directory(void** a1, void** a2, void** a3, void** a4, void** a5);

unsigned char is_directory(void** a1, void** a2, void** a3);

uint32_t basename_is_dot_or_dotdot(void** a1, void** a2, void** a3);

void** file_name_concat(void** a1, void** a2, void** a3);

void extract_dirs_from_files(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** eax7;
    void** v8;
    unsigned char v9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** v16;
    unsigned char al17;
    void** edx18;
    void** v19;
    unsigned char al20;
    uint32_t eax21;
    void** v22;
    uint32_t eax23;
    uint32_t eax24;
    uint32_t eax25;
    void** ecx26;
    void** eax27;
    void** v28;
    void** v29;
    void** eax30;
    void** eax31;
    void** eax32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** eax46;
    void** edx47;
    void** v48;
    void** edx49;

    eax7 = a2;
    *reinterpret_cast<unsigned char*>(&v8) = *reinterpret_cast<unsigned char*>(&eax7);
    v9 = reinterpret_cast<uint1_t>(!!a1);
    if (a1 && (eax10 = active_dir_set, !!eax10)) {
        v11 = reinterpret_cast<void**>(0);
        v12 = a1;
        queue_directory(0, v12, 0, v13, v14);
    }
    eax15 = cwd_n_used;
    v16 = eax15;
    while (al17 = reinterpret_cast<uint1_t>(!!v16), --v16, !!al17) {
        edx18 = sorted_file;
        v19 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx18) + (reinterpret_cast<unsigned char>(v16) << 2));
        al20 = is_directory(v19, v12, v11);
        if (!al20) 
            continue;
        eax21 = static_cast<uint32_t>(v9) ^ 1;
        if (*reinterpret_cast<signed char*>(&eax21)) 
            goto addr_804d5b5_7;
        v22 = *reinterpret_cast<void***>(v19);
        eax23 = basename_is_dot_or_dotdot(v22, v12, v11);
        eax24 = eax23 ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax24)) 
            continue;
        addr_804d5b5_7:
        if (!a1 || (eax25 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v19))), *reinterpret_cast<signed char*>(&eax25) == 47)) {
            ecx26 = *reinterpret_cast<void***>(v19 + 4);
            eax27 = *reinterpret_cast<void***>(v19);
            v11 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v8)));
            v12 = ecx26;
            queue_directory(eax27, v12, v11, v28, v29);
        } else {
            eax30 = *reinterpret_cast<void***>(v19);
            eax31 = file_name_concat(a1, eax30, 0);
            eax32 = *reinterpret_cast<void***>(v19 + 4);
            v11 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v8)));
            v12 = eax32;
            queue_directory(eax31, v12, v11, v33, v34);
            free(eax31, v12, v11, v35, v36, v8, v37, v38, v16);
        }
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v19 + 0x68) == 9)) 
            continue;
        v39 = *reinterpret_cast<void***>(v19);
        free(v39, v12, v11, v40, v41, v8, v42, v43, v16);
    }
    v44 = reinterpret_cast<void**>(0);
    v45 = reinterpret_cast<void**>(0);
    while (eax46 = cwd_n_used, reinterpret_cast<unsigned char>(v44) < reinterpret_cast<unsigned char>(eax46)) {
        edx47 = sorted_file;
        v48 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx47) + (reinterpret_cast<unsigned char>(v44) << 2));
        edx49 = sorted_file;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx49) + (reinterpret_cast<unsigned char>(v45) << 2)) = v48;
        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v45) + static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v48 + 0x68) == 9))));
        ++v44;
    }
    cwd_n_used = v45;
    return;
}

void print_long_format(void** a1);

uint32_t dired_pos = 0;

void print_file_name_and_frills(void** a1, void** a2);

void** print_many_per_line();

void** print_horizontal();

void** print_with_commas();

void** print_current_files(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** ebp11;
    void** eax12;
    void** v13;
    void** v14;
    void** edx15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    uint32_t eax20;
    void** v21;
    void** edx22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;

    v9 = reinterpret_cast<void**>(__return_address());
    v10 = ebp11;
    eax12 = format;
    v13 = eax12;
    switch (v13) {
    case 0:
        v14 = reinterpret_cast<void**>(0);
        while (eax12 = cwd_n_used, reinterpret_cast<unsigned char>(v14) < reinterpret_cast<unsigned char>(eax12)) {
            edx15 = sorted_file;
            v16 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx15) + (reinterpret_cast<unsigned char>(v14) << 2));
            print_long_format(v16);
            fun_8049abc(10, v13, v17, v18, v19, v14, v10, v9);
            eax20 = dired_pos;
            dired_pos = eax20 + 1;
            ++v14;
        }
        break;
    case 1:
        v21 = reinterpret_cast<void**>(0);
        while (eax12 = cwd_n_used, reinterpret_cast<unsigned char>(v21) < reinterpret_cast<unsigned char>(eax12)) {
            edx22 = sorted_file;
            v23 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx22) + (reinterpret_cast<unsigned char>(v21) << 2));
            print_file_name_and_frills(v23, v13);
            fun_8049abc(10, v13, v24, v25, v26, v21, v10, v9);
            ++v21;
        }
        break;
    case 2:
        eax12 = print_many_per_line();
        break;
    case 3:
        eax12 = print_horizontal();
        break;
    case 4:
        eax12 = print_with_commas();
    }
    return eax12;
}

void** g806462c = reinterpret_cast<void**>(0);

uint32_t g8064628 = 0;

int32_t g8064630 = 0;

void fun_80499bc(void** a1, void** a2, void** a3, void** a4);

void** dev_ino_pop(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** eax7;
    uint32_t eax8;
    void** v9;
    void** v10;
    int32_t eax11;
    void** eax12;
    void** v13;
    void** v14;
    void** edx15;
    void** eax16;

    eax7 = g806462c;
    eax8 = g8064628;
    if (reinterpret_cast<unsigned char>(eax7) - eax8 <= 15) {
        fun_80496bc(0x805ec98, 0x805ec90, 0x396, 0x805ec84, v9, v10);
    }
    eax11 = g8064630;
    eax12 = g806462c;
    if (reinterpret_cast<int32_t>(eax11 - reinterpret_cast<unsigned char>(eax12)) < reinterpret_cast<int32_t>(0xfffffff0)) {
        fun_804973c(0x8064620, 0xfffffff0, 0x396, 0x805ec84, v13, v14);
    }
    edx15 = g806462c;
    g806462c = edx15 + 0xfffffff0;
    eax16 = g806462c;
    fun_80499bc(a1, eax16, 16, 0x805ec84);
    return a1;
}

void** hash_find_entry(void** a1, void** a2, void** a3, void** a4);

uint32_t hash_rehash(void** a1, void** a2, void** a3, void** a4);

void** hash_delete(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** eax8;
    int32_t* v9;
    int16_t ax10;
    int16_t fpu_status_word11;
    int16_t ax12;
    int16_t fpu_status_word13;
    void** v14;
    uint32_t eax15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;

    v7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff8);
    eax8 = hash_find_entry(a1, a2, v7, 1);
    if (eax8) {
        *reinterpret_cast<void***>(a1 + 16) = *reinterpret_cast<void***>(a1 + 16) + 0xffffffff;
        if (!*v9 && ((*reinterpret_cast<void***>(a1 + 12) = *reinterpret_cast<void***>(a1 + 12) + 0xffffffff, ax10 = fpu_status_word11, !(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax10) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax10) + 1))) && (check_tuning(a1, a2, v7, 1), ax12 = fpu_status_word13, !(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax12) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax12) + 1))))) {
            v14 = *reinterpret_cast<void***>(a1 + 20);
            eax15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v14 + 16));
            if (!*reinterpret_cast<signed char*>(&eax15)) {
                __asm__("fild qword [esp]");
                __asm__("fld dword [eax+0x4]");
                __asm__("fmulp st1, st0");
                __asm__("fld dword [eax+0x8]");
                __asm__("fmulp st1, st0");
                __asm__("fnstcw word [ebp-0x12]");
                __asm__("fldcw word [ebp-0x14]");
                __asm__("fistp qword [ebp-0x20]");
                __asm__("fldcw word [ebp-0x12]");
                v16 = v17;
            } else {
                __asm__("fild qword [esp]");
                __asm__("fld dword [eax+0x4]");
                __asm__("fmulp st1, st0");
                __asm__("fnstcw word [ebp-0x12]");
                __asm__("fldcw word [ebp-0x14]");
                __asm__("fistp qword [ebp-0x20]");
                __asm__("fldcw word [ebp-0x12]");
                v16 = v18;
            }
            hash_rehash(a1, v16, v7, 1);
        }
        v19 = eax8;
    } else {
        v19 = reinterpret_cast<void**>(0);
    }
    return v19;
}

void** restore_default_color(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** ebp8;
    void** v9;
    void** eax10;

    put_indicator(0x80641e0, v7, ebp8);
    eax10 = put_indicator(0x80641e8, v9, ebp8);
    return eax10;
}

int32_t fflush_unlocked = 0x8049a32;

void fun_8049a2c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto fflush_unlocked;
}

int32_t signal = 0x8049582;

void fun_804957c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto signal;
}

int32_t raise = 0x80498c2;

void fun_80498bc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto raise;
}

void fun_80498ac(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

void** dired_dump_obstack(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** eax8;
    void** v9;
    void** v10;
    uint32_t edx11;
    void** v12;
    void** eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;

    v7 = a2;
    eax8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 12)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 8)) >> 2);
    v9 = eax8;
    if (v9) {
        v10 = *reinterpret_cast<void***>(a2 + 8);
        if (*reinterpret_cast<void***>(a2 + 12) == v10) {
            edx11 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 40))) | 2;
            *reinterpret_cast<void***>(a2 + 40) = *reinterpret_cast<void***>(&edx11);
        }
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(~reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 24)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 24)));
        if (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4))) > reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 16)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)))) {
            *reinterpret_cast<void***>(a2 + 12) = *reinterpret_cast<void***>(a2 + 16);
        }
        *reinterpret_cast<void***>(a2 + 8) = *reinterpret_cast<void***>(a2 + 12);
        v12 = v10;
        eax13 = stdout;
        v14 = eax13;
        fun_804955c(a1, v14, v15, v16, v17, v18, v19, v9);
        v20 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<unsigned char>(v20) < reinterpret_cast<unsigned char>(v9)) {
            v14 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v20) << 2) + reinterpret_cast<unsigned char>(v12));
            fun_80498ac(0x805ed27, v14, v21, v22, v23, v24, v25, v9, v7, v20, v12);
            ++v20;
        }
        eax8 = fun_8049abc(10, v14, v26, v27, v28, v29, v30, v9);
    }
    return eax8;
}

void** get_quoting_style(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;

    if (!a1) {
        v8 = reinterpret_cast<void**>(0x8064720);
    } else {
        v8 = a1;
    }
    return *reinterpret_cast<void***>(v8);
}

int32_t printf = 0x80498b2;

void fun_80498ac(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    goto printf;
}

void** hash_get_n_entries(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    return *reinterpret_cast<void***>(a1 + 16);
}

unsigned char qmark_funny_chars = 0;

int32_t ls_mode = 1;

void set_quoting_style(void*** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t fun_80497cc(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

unsigned char numeric_ids = 0;

unsigned char recursive = 0;

int32_t ignore_mode = 0;

void** ignore_patterns = reinterpret_cast<void**>(0);

void** hide_patterns = reinterpret_cast<void**>(0);

void** argmatch(void** a1, void** a2, void** a3, void** a4);

void** human_options(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** line_length = reinterpret_cast<void**>(0);

uint32_t xstrtoul(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t fun_804979c(int32_t a1, void** a2, void** a3, void** a4, void** a5);

void* tabsize = reinterpret_cast<void*>(0);

struct s5 {
    signed char[131] pad131;
    void** f131;
};

struct s5* fun_804978c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** version_etc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void fun_8049aac(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void add_ignore_pattern(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

unsigned char dired = 0;

void** optarg = reinterpret_cast<void**>(0);

void xstrtol_fatal(void** a1, void** a2, int32_t a3, void** a4, void** a5, void** a6, void** a7);

void** argmatch_die = reinterpret_cast<void**>(32);

void** __xargmatch_internal(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** max_idx = reinterpret_cast<void**>(0);

void** clone_quoting_options(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** filename_quoting_options = reinterpret_cast<void**>(0);

uint32_t set_char_quoting(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** dirname_quoting_options = reinterpret_cast<void**>(0);

uint32_t hard_locale(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

struct s6 {
    signed char f0;
    void** f1;
};

struct s6* fun_80495ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** quote(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** long_time_format = reinterpret_cast<void**>(0x7a);

void** g8064284 = reinterpret_cast<void**>(0x84);

void** optind = reinterpret_cast<void**>(0);

int32_t fun_804974c(int32_t a1, int32_t a2, int32_t a3, void** a4, void** a5, void** a6, void** a7);

void** decode_switches(void** a1, void** a2) {
    void* ebp3;
    void** v4;
    void** ebx5;
    void** v6;
    unsigned char v7;
    int32_t eax8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    int32_t eax26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** eax41;
    void** v42;
    void** v43;
    void** eax44;
    void** v45;
    void** v46;
    void** v47;
    void** eax48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** eax54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** eax65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** eax72;
    void** eax73;
    void** edx74;
    void** v75;
    void** v76;
    void** v77;
    void** eax78;
    uint32_t eax79;
    void** v80;
    void** v81;
    uint32_t eax82;
    int32_t v83;
    void** v84;
    void** v85;
    void** eax86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** eax91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    int32_t eax97;
    uint32_t eax98;
    uint16_t v99;
    uint32_t eax100;
    uint16_t v101;
    void** v102;
    void** v103;
    void** eax104;
    void** v105;
    void** v106;
    void** v107;
    uint32_t eax108;
    void** v109;
    void** v110;
    void** eax111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** eax116;
    void** v117;
    void** v118;
    void** v119;
    void* v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    struct s5* eax127;
    void** v128;
    int32_t eax129;
    void** v130;
    int32_t eax131;
    void** v132;
    void** eax133;
    void** v134;
    void** eax135;
    int32_t eax136;
    void** eax137;
    void** eax138;
    void** v139;
    uint32_t eax140;
    void** eax141;
    void** eax142;
    void** v143;
    void** eax144;
    void** v145;
    void* v146;
    void** eax147;
    int32_t eax148;
    void** v149;
    void** eax150;
    void** edx151;
    void** eax152;
    void** edx153;
    void** eax154;
    void** v155;
    uint32_t eax156;
    int32_t v157;
    void** eax158;
    void** eax159;
    void** v160;
    void** eax161;
    void** v162;
    void** v163;
    void** eax164;
    void** eax165;
    void** eax166;
    void** eax167;
    void** edx168;
    void** eax169;
    int32_t v170;
    void** eax171;
    void** ecx172;
    void** eax173;
    int32_t eax174;
    int32_t v175;
    uint32_t eax176;
    uint32_t eax177;
    void** eax178;
    void** ecx179;
    void** eax180;
    void** eax181;
    void** edx182;
    void** edx183;
    void** eax184;
    void** ecx185;
    void** eax186;
    void** eax187;
    void** ecx188;
    void** eax189;
    void** v190;
    void** eax191;
    void** edx192;
    void** eax193;
    void** ecx194;
    void** eax195;
    void** eax196;
    void** ecx197;
    void** eax198;
    void** eax199;
    void** eax200;
    void** v201;
    void** eax202;
    void** v203;
    void** eax204;
    void** eax205;
    void** eax206;
    void** eax207;
    uint32_t eax208;
    uint32_t eax209;
    unsigned char* v210;
    uint32_t eax211;
    uint32_t eax212;
    void** edx213;
    void** eax214;
    void** eax215;
    uint32_t eax216;
    void** eax217;
    void** eax218;
    void** eax219;
    uint32_t eax220;
    void** eax221;
    void** eax222;
    void** v223;
    void** eax224;
    int32_t eax225;
    uint32_t eax226;
    uint32_t eax227;
    uint32_t eax228;
    struct s6* eax229;
    struct s6* eax230;
    void** eax231;
    void** eax232;
    void** v233;
    void** eax234;
    void** v235;
    void** eax236;
    uint32_t v237;
    void** eax238;
    void** eax239;
    uint32_t eax240;
    void** edx241;
    void** v242;
    int32_t v243;
    int32_t eax244;
    int32_t eax245;
    void** eax246;
    uint32_t eax247;
    void** v248;
    int32_t v249;
    uint32_t edx250;
    void** v251;
    uint32_t v252;
    void** v253;
    uint32_t eax254;
    uint32_t eax255;
    unsigned char v256;
    uint32_t eax257;
    uint32_t eax258;
    uint32_t eax259;
    uint32_t eax260;
    uint32_t eax261;
    uint32_t eax262;
    uint32_t eax263;
    uint32_t eax264;
    uint32_t eax265;
    uint32_t eax266;
    uint32_t eax267;
    uint32_t eax268;
    uint32_t eax269;
    uint32_t eax270;
    uint32_t edx271;
    void** eax272;
    void*** v273;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v4 = ebx5;
    v6 = reinterpret_cast<void**>(0);
    v7 = 0;
    qmark_funny_chars = 0;
    eax8 = ls_mode;
    if (eax8 == 2) {
        format = reinterpret_cast<void**>(2);
        v9 = reinterpret_cast<void**>(4);
        set_quoting_style(0, 4, v10, v11, v12, v13, v14);
    } else {
        if (eax8 == 3) {
            format = reinterpret_cast<void**>(0);
            v9 = reinterpret_cast<void**>(4);
            set_quoting_style(0, 4, v15, v16, v17, v18, v19);
        } else {
            if (eax8 == 1) {
                eax26 = fun_80497cc(1, v20, v21, v22, v23, v24, v25);
                if (!eax26) {
                    format = reinterpret_cast<void**>(1);
                    qmark_funny_chars = 0;
                } else {
                    format = reinterpret_cast<void**>(2);
                    qmark_funny_chars = 1;
                }
            } else {
                fun_80494bc(v27, v28, v29, v30, v31, v32, v33, v34, v35);
            }
        }
    }
    time_type = reinterpret_cast<void**>(0);
    sort_type = reinterpret_cast<void**>(0);
    sort_reverse = 0;
    numeric_ids = 0;
    print_block_size = 0;
    indicator_style = 0;
    print_inode = 0;
    dereference = 1;
    recursive = 0;
    immediate_dirs = 0;
    ignore_mode = 0;
    ignore_patterns = reinterpret_cast<void**>(0);
    hide_patterns = reinterpret_cast<void**>(0);
    print_scontext = 0;
    eax41 = fun_80495fc(0x805ee0c, 4, v36, v37, v38, v39, v40);
    if (eax41) {
        v42 = reinterpret_cast<void**>(4);
        v43 = reinterpret_cast<void**>(0x8061a20);
        eax44 = argmatch(eax41, 0x8061a00, 0x8061a20, 4);
        if (reinterpret_cast<signed char>(eax44) < reinterpret_cast<signed char>(0)) {
            eax48 = quotearg(eax41, 0x8061a00, 0x8061a20, 4, v45, v46, v47);
            eax54 = fun_80496ec(0x805ee1c, 0x8061a00, 0x8061a20, 4, v49, v50, v51, v52, v53);
            v42 = eax48;
            v43 = eax54;
            v9 = reinterpret_cast<void**>(0);
            fun_804997c(0, 0, v43, v42, v55, v56, v57, v58);
        } else {
            v9 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax44) * 4 + 0x8061a20);
            set_quoting_style(0, v9, 0x8061a20, 4, v59, v60, v61);
        }
    }
    eax65 = fun_80495fc(0x805ee5d, v9, v43, v42, v62, v63, v64);
    human_options(eax65, 0x80644a4, 0x80644a8, v42, v66, v67, v68);
    if (eax65 || (eax72 = fun_80495fc(0x805ee6b, 0x80644a4, 0x80644a8, v42, v69, v70, v71), !!eax72)) {
        eax73 = output_block_size;
        edx74 = g80644ac;
        file_output_block_size = eax73;
        g80641d4 = edx74;
    }
    line_length = reinterpret_cast<void**>(80);
    eax78 = fun_80495fc(0x805ee76, 0x80644a4, 0x80644a8, v42, v75, v76, v77);
    if (eax78 && (eax79 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax78)), !!*reinterpret_cast<signed char*>(&eax79))) {
        v42 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffb4);
        eax82 = xstrtoul(eax78, 0, 0, v42, 0, v80, v81);
        if (eax82 || !v83) {
            eax86 = quotearg(eax78, 0, 0, v42, 0, v84, v85);
            eax91 = fun_80496ec(0x805ee80, 0, 0, v42, 0, v87, v88, v89, v90);
            v42 = eax86;
            fun_804997c(0, 0, eax91, v42, 0, v92, v93, v94);
        } else {
            line_length = v95;
        }
    }
    v96 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffac);
    eax97 = fun_804979c(1, 0x5413, v96, v42, 0);
    if (eax97 != -1 && (eax98 = v99, !!*reinterpret_cast<int16_t*>(&eax98))) {
        eax100 = v101;
        line_length = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax100)));
    }
    eax104 = fun_80495fc(0x805eebb, 0x5413, v96, v42, 0, v102, v103);
    tabsize = reinterpret_cast<void*>(8);
    if (eax104) {
        v105 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffa8);
        eax108 = xstrtoul(eax104, 0, 0, v105, 0, v106, v107);
        if (eax108) {
            eax111 = quotearg(eax104, 0, 0, v105, 0, v109, v110);
            eax116 = fun_80496ec(0x805eec4, 0, 0, v105, 0, v112, v113, v114, v115);
            fun_804997c(0, 0, eax116, eax111, 0, v117, v118, v119);
        } else {
            tabsize = v120;
        }
    }
    while (v121 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffa4), v122 = reinterpret_cast<void**>(0x805e840), v123 = reinterpret_cast<void**>(0x805ef04), v124 = a2, v125 = a1, eax127 = fun_804978c(v125, v124, 0x805ef04, 0x805e840, v121, v126, 0), eax127 != -1) {
        v128 = reinterpret_cast<void**>(&eax127->f131);
        switch (v128) {
            addr_804b448_30:
        default:
            usage(2, v124, v123, v122, v121, v126, 0);
            break;
        case 0:
            eax129 = ls_mode;
            if (eax129 == 1) {
                v130 = reinterpret_cast<void**>(0x805efad);
            } else {
                eax131 = ls_mode;
                if (eax131 != 2) {
                    v132 = reinterpret_cast<void**>(0x805efa8);
                } else {
                    v132 = reinterpret_cast<void**>(0x805efa4);
                }
                v130 = v132;
            }
            eax133 = stdout;
            v126 = reinterpret_cast<void**>(0x805efb0);
            v121 = reinterpret_cast<void**>(0x805efc0);
            v122 = reinterpret_cast<void**>(0x805efd1);
            v123 = reinterpret_cast<void**>(0x805efd6);
            v124 = v130;
            version_etc(eax133, v124, 0x805efd6, 0x805efd1, 0x805efc0, 0x805efb0, 0);
            fun_8049aac(0, v124, 0x805efd6, 0x805efd1, 0x805efc0, 0x805efb0, 0, v134);
            goto addr_804b448_30;
        case 1:
            usage(0, v124, 0x805ef04, 0x805e840, v121, v126, 0);
            break;
        case 0xb4:
            eax135 = format;
            if (!eax135) 
                break;
            format = reinterpret_cast<void**>(1);
            break;
        case 0xc4:
            eax136 = ignore_mode;
            if (eax136) 
                break;
            ignore_mode = 1;
            break;
        case 0xc5:
            add_ignore_pattern(0x805ef47, v124, 0x805ef04, 0x805e840, v121, v126, 0);
            add_ignore_pattern(0x805ef4a, v124, 0x805ef04, 0x805e840, v121, v126, 0);
            break;
        case 0xc6:
            format = reinterpret_cast<void**>(2);
            break;
        case 0xc7:
            dired = 1;
            break;
        case 0xc9:
            indicator_style = 3;
            break;
        case 0xca:
            print_group = 0;
            break;
        case 0xcb:
            dereference = 3;
            break;
        case 0xcc:
            eax137 = optarg;
            add_ignore_pattern(eax137, v124, 0x805ef04, 0x805e840, v121, v126, 0);
            break;
        case 0xcf:
            dereference = 5;
            break;
        case 0xd1:
            set_quoting_style(0, 0, 0x805ef04, 0x805e840, v121, v126, 0);
            break;
        case 0xd4:
            set_quoting_style(0, 3, 0x805ef04, 0x805e840, v121, v126, 0);
            break;
        case 0xd5:
            recursive = 1;
            break;
        case 0xd6:
            sort_type = reinterpret_cast<void**>(2);
            v7 = 1;
            break;
        case 0xd7:
            eax138 = optarg;
            v139 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffff9c);
            eax140 = xstrtoul(eax138, 0, 0, v139, 0, v126, 0);
            if (eax140) {
                eax141 = optarg;
                eax142 = quotearg(eax141, 0, 0, v139, 0, v126, 0);
                eax144 = fun_80496ec(0x805ef4e, 0, 0, v139, 0, v126, 0, v143, v128);
                fun_804997c(2, 0, eax144, eax142, 0, v126, 0, v145);
            }
            tabsize = v146;
            break;
        case 0xd8:
            sort_type = reinterpret_cast<void**>(0xffffffff);
            v7 = 1;
            break;
        case 0xdb:
            sort_type = reinterpret_cast<void**>(1);
            v7 = 1;
            break;
        case 0xdd:
            print_scontext = 1;
            break;
        case 0xe4:
            ignore_mode = 2;
            break;
        case 0xe5:
            set_quoting_style(0, 4, 0x805ef04, 0x805e840, v121, v126, 0);
            break;
        case 0xe6:
            time_type = reinterpret_cast<void**>(1);
            break;
        case 0xe7:
            immediate_dirs = 1;
            break;
        case 0xe9:
            ignore_mode = 2;
            sort_type = reinterpret_cast<void**>(0xffffffff);
            v7 = 1;
            eax147 = format;
            if (!eax147) {
                eax148 = fun_80497cc(1, v124, 0x805ef04, 0x805e840, v121, v126, 0);
                if (!eax148) {
                    v149 = reinterpret_cast<void**>(1);
                } else {
                    v149 = reinterpret_cast<void**>(2);
                }
                format = v149;
            }
            print_block_size = 0;
            print_with_color = 0;
            break;
        case 0xea:
            format = reinterpret_cast<void**>(0);
            print_owner = 0;
            break;
        case 0xeb:
            human_output_opts = reinterpret_cast<void**>(0xb0);
            output_block_size = reinterpret_cast<void**>(1);
            g80644ac = reinterpret_cast<void**>(0);
            eax150 = output_block_size;
            edx151 = g80644ac;
            file_output_block_size = eax150;
            g80641d4 = edx151;
            break;
        case 0xec:
            print_inode = 1;
            break;
        case 0xee:
            human_output_opts = reinterpret_cast<void**>(0);
            output_block_size = reinterpret_cast<void**>(0x400);
            g80644ac = reinterpret_cast<void**>(0);
            eax152 = output_block_size;
            edx153 = g80644ac;
            file_output_block_size = eax152;
            g80641d4 = edx153;
            break;
        case 0xef:
            format = reinterpret_cast<void**>(0);
            break;
        case 0xf0:
            format = reinterpret_cast<void**>(4);
            break;
        case 0xf1:
            numeric_ids = 1;
            format = reinterpret_cast<void**>(0);
            break;
        case 0xf2:
            format = reinterpret_cast<void**>(0);
            print_group = 0;
            break;
        case 0xf3:
            indicator_style = 1;
            break;
        case 0xf4:
            qmark_funny_chars = 1;
            break;
        case 0xf5:
            sort_reverse = 1;
            break;
        case 0xf6:
            print_block_size = 1;
            break;
        case 0xf7:
            sort_type = reinterpret_cast<void**>(4);
            v7 = 1;
            break;
        case 0xf8:
            time_type = reinterpret_cast<void**>(2);
            break;
        case 0xf9:
            sort_type = reinterpret_cast<void**>(3);
            v7 = 1;
            break;
        case 0xfa:
            eax154 = optarg;
            v155 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffa0);
            eax156 = xstrtoul(eax154, 0, 0, v155, 0, v126, 0);
            if (eax156 || !v157) {
                eax158 = optarg;
                eax159 = quotearg(eax158, 0, 0, v155, 0, v126, 0);
                eax161 = fun_80496ec(0x805ef30, 0, 0, v155, 0, v126, 0, v160, v128);
                fun_804997c(2, 0, eax161, eax159, 0, v126, 0, v162);
            }
            line_length = v163;
            break;
        case 0xfb:
            format = reinterpret_cast<void**>(3);
            break;
        case 0x103:
            print_author = 1;
            break;
        case 0x104:
            eax164 = optarg;
            eax165 = human_options(eax164, 0x80644a4, 0x80644a8, 0x805e840, v121, v126, 0);
            if (eax165) {
                eax166 = optarg;
                xstrtol_fatal(eax165, 0xffffffff, 0, 0x805e840, eax166, v126, 0);
            }
            eax167 = output_block_size;
            edx168 = g80644ac;
            file_output_block_size = eax167;
            g80641d4 = edx168;
            break;
        case 0x105:
            eax169 = optarg;
            if (!eax169) {
                v170 = 1;
            } else {
                eax171 = argmatch_die;
                ecx172 = optarg;
                v126 = eax171;
                v121 = reinterpret_cast<void**>(4);
                v122 = reinterpret_cast<void**>(0x805ec60);
                v123 = reinterpret_cast<void**>(0x805ec20);
                v124 = ecx172;
                eax173 = __xargmatch_internal(0x805ef7a, v124, 0x805ec20, 0x805ec60, 4, v126, 0);
                v170 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax173) * 4 + 0x805ec60);
            }
            if (v170 == 1 || v170 == 2 && (eax174 = fun_80497cc(1, v124, v123, v122, v121, v126, 0), !!eax174)) {
                v175 = 1;
            } else {
                v175 = 0;
            }
            eax176 = *reinterpret_cast<unsigned char*>(&v175);
            print_with_color = *reinterpret_cast<unsigned char*>(&eax176);
            eax177 = print_with_color;
            if (!*reinterpret_cast<signed char*>(&eax177)) 
                break;
            tabsize = reinterpret_cast<void*>(0);
            break;
        case 0x106:
            dereference = 4;
            break;
        case 0x107:
            indicator_style = 2;
            break;
        case 0x108:
            eax178 = argmatch_die;
            ecx179 = optarg;
            v126 = eax178;
            eax180 = __xargmatch_internal(0x805ef71, ecx179, 0x805eb20, 0x805eb40, 4, v126, 0);
            format = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax180) * 4 + 0x805eb40);
            break;
        case 0x109:
            format = reinterpret_cast<void**>(0);
            v6 = reinterpret_cast<void**>(0x805e50b);
            break;
        case 0x10a:
            directories_first = 1;
            break;
        case 0x10b:
            eax181 = xmalloc(8, v124, 0x805ef04, 0x805e840, v121, v126, 0);
            edx182 = optarg;
            *reinterpret_cast<void***>(eax181) = edx182;
            edx183 = hide_patterns;
            *reinterpret_cast<void***>(eax181 + 4) = edx183;
            hide_patterns = eax181;
            break;
        case 0x10c:
            eax184 = argmatch_die;
            ecx185 = optarg;
            v126 = eax184;
            eax186 = __xargmatch_internal(0x805ef82, ecx185, 0x805e56c, 0x805e580, 4, v126, 0);
            indicator_style = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(eax186) * 4 + 0x805e580);
            break;
        case 0x10d:
            eax187 = argmatch_die;
            ecx188 = optarg;
            v126 = eax187;
            eax189 = __xargmatch_internal(0x805ef94, ecx188, 0x8061a00, 0x8061a20, 4, v126, 0);
            v190 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax189) * 4 + 0x8061a20);
            set_quoting_style(0, v190, 0x8061a00, 0x8061a20, 4, v126, 0);
            break;
        case 0x10e:
            qmark_funny_chars = 0;
            break;
        case 0x10f:
            human_output_opts = reinterpret_cast<void**>(0x90);
            output_block_size = reinterpret_cast<void**>(1);
            g80644ac = reinterpret_cast<void**>(0);
            eax191 = output_block_size;
            edx192 = g80644ac;
            file_output_block_size = eax191;
            g80641d4 = edx192;
            break;
        case 0x110:
            eax193 = argmatch_die;
            ecx194 = optarg;
            v126 = eax193;
            eax195 = __xargmatch_internal(0x805ef63, ecx194, 0x805eb68, 0x805eb80, 4, v126, 0);
            sort_type = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax195) * 4 + 0x805eb80);
            v7 = 1;
            break;
        case 0x111:
            eax196 = argmatch_die;
            ecx197 = optarg;
            v126 = eax196;
            eax198 = __xargmatch_internal(0x805ef6a, ecx197, 0x805ebb4, 0x805ebcc, 4, v126, 0);
            time_type = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax198) * 4 + 0x805ebcc);
            break;
        case 0x112:
            eax199 = optarg;
            v6 = eax199;
        }
    }
    eax200 = line_length;
    if (reinterpret_cast<unsigned char>(eax200) <= reinterpret_cast<unsigned char>(2)) {
        v201 = reinterpret_cast<void**>(1);
    } else {
        eax202 = line_length;
        v203 = eax202;
        v201 = reinterpret_cast<void**>(__intrinsic() >> 1);
    }
    max_idx = v201;
    eax204 = clone_quoting_options(0, v124, 0x805ef04, 0x805e840, v121, v126, 0);
    filename_quoting_options = eax204;
    eax205 = filename_quoting_options;
    eax206 = get_quoting_style(eax205, v124, 0x805ef04, 0x805e840, v121, v126, 0);
    if (reinterpret_cast<int1_t>(eax206 == 4)) {
        eax207 = filename_quoting_options;
        v123 = reinterpret_cast<void**>(1);
        v124 = reinterpret_cast<void**>(32);
        set_char_quoting(eax207, 32, 1, 0x805e840, v121, v126, 0);
    }
    eax208 = indicator_style;
    if (eax208 > 1) {
        eax209 = indicator_style;
        v210 = reinterpret_cast<unsigned char*>(eax209 - 2 + reinterpret_cast<int32_t>("*=>@|"));
        while (eax211 = *v210, !!*reinterpret_cast<signed char*>(&eax211)) {
            eax212 = *v210;
            edx213 = filename_quoting_options;
            v123 = reinterpret_cast<void**>(1);
            v124 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax212)));
            set_char_quoting(edx213, v124, 1, 0x805e840, v121, v126, 0);
            ++v210;
        }
    }
    eax214 = clone_quoting_options(0, v124, v123, 0x805e840, v121, v126, 0);
    dirname_quoting_options = eax214;
    eax215 = dirname_quoting_options;
    set_char_quoting(eax215, 58, 1, 0x805e840, v121, v126, 0);
    eax216 = dired;
    if (*reinterpret_cast<signed char*>(&eax216) && (eax217 = format, !!eax217)) {
        dired = 0;
    }
    eax218 = time_type;
    if ((eax218 == 1 || (eax219 = time_type, reinterpret_cast<int1_t>(eax219 == 2))) && ((eax220 = static_cast<uint32_t>(v7) ^ 1, !!*reinterpret_cast<signed char*>(&eax220)) && (eax221 = format, !!eax221))) {
        sort_type = reinterpret_cast<void**>(4);
    }
    eax222 = format;
    if (eax222) 
        goto addr_804b7c4_129;
    v223 = v6;
    if (!v223 && (eax224 = fun_80495fc(0x805efea, 58, 1, 0x805e840, v121, v126, 0), v223 = eax224, !v223)) {
        v223 = reinterpret_cast<void**>(0x805e521);
    }
    while (eax225 = fun_8049a1c(v223, 0x805ee05, 6, 0x805e840, v121, v126, 0), eax225 == 0) {
        eax226 = hard_locale(2, 0x805ee05, 6, 0x805e840, v121, v126, 0);
        eax227 = eax226 ^ 1;
        if (*reinterpret_cast<signed char*>(&eax227)) 
            goto addr_804b5e6_134;
        v223 = v223 + 6;
    }
    eax228 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v223));
    if (*reinterpret_cast<signed char*>(&eax228) == 43) {
        eax229 = fun_80495ec(v223 + 1, 10, 6, 0x805e840, v121, v126, 0);
        if (eax229) {
            eax230 = fun_80495ec(&eax229->f1, 10, 6, 0x805e840, v121, v126, 0);
            if (eax230) {
                eax231 = quote(v223 + 1, 10, 6, 0x805e840, v121, v126, 0);
                eax232 = fun_80496ec(0x805eff5, 10, 6, 0x805e840, v121, v126, 0, v203, v128);
                fun_804997c(2, 0, eax232, eax231, v121, v126, 0, v203);
            }
            eax229->f0 = 0;
            v233 = reinterpret_cast<void**>(&eax229->f1);
        } else {
            v233 = v223 + 1;
        }
        long_time_format = v223 + 1;
        g8064284 = v233;
        goto addr_804b7c4_129;
    }
    eax234 = argmatch_die;
    v235 = eax234;
    eax236 = __xargmatch_internal(0x805f012, v223, 0x805e528, 0x805e53c, 4, v235, 0);
    v237 = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(eax236) * 4 + 0x805e53c);
    if (v237 == 1) {
        addr_804b734_144:
        g8064284 = reinterpret_cast<void**>(0x805f035);
        eax238 = g8064284;
        long_time_format = eax238;
        goto addr_804b7c4_129;
    } else {
        if (v237 < 1) {
            g8064284 = reinterpret_cast<void**>(0x805f01d);
            eax239 = g8064284;
            long_time_format = eax239;
            goto addr_804b7c4_129;
        }
        if (v237 == 2) {
            long_time_format = reinterpret_cast<void**>(0x805f044);
            g8064284 = reinterpret_cast<void**>(0x805f04e);
            goto addr_804b7c4_129;
        }
        if (v237 != 3) {
            goto addr_804b7c4_129;
        }
        eax240 = hard_locale(2, v223, 0x805e528, 0x805e53c, 4, v235, 0);
        if (!*reinterpret_cast<signed char*>(&eax240)) {
            addr_804b7c4_129:
            edx241 = optind;
            v242 = edx241;
        } else {
            v243 = 0;
            while (v243 <= 1) {
                eax244 = *reinterpret_cast<int32_t*>(v243 * 4 + 0x8064280);
                eax245 = fun_804974c(0, eax244, 2, 0x805e53c, 4, v235, 0);
                if (*reinterpret_cast<int32_t*>(v243 * 4 + 0x8064280) == eax245) 
                    goto addr_804b734_144;
                *reinterpret_cast<int32_t*>(v243 * 4 + 0x8064280) = eax245;
                ++v243;
            }
            goto addr_804b7c4_129;
        }
    }
    addr_804b7cd_156:
    return v242;
    addr_804b5e6_134:
    eax246 = optind;
    v242 = eax246;
    goto addr_804b7cd_156;
    while (1) {
        eax247 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248));
        v249 = *reinterpret_cast<signed char*>(&eax247);
        if (v249 == 61) {
            if (!*reinterpret_cast<signed char*>(&v170)) {
                addr_804b896_159:
                edx250 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248));
                *reinterpret_cast<void***>(v4) = *reinterpret_cast<void***>(&edx250);
                ++v4;
                ++v248;
                ++v251;
            } else {
                v252 = 5;
            }
        } else {
            if (v249 > 61) {
                if (v249 == 92) {
                    v252 = 1;
                    ++v248;
                } else {
                    if (v249 == 94) {
                        v252 = 4;
                        ++v248;
                    } else {
                        goto addr_804b896_159;
                    }
                }
            } else {
                if (!v249 || v249 == 58) {
                    v252 = 5;
                } else {
                    goto addr_804b896_159;
                }
            }
        }
        while (v252 <= 4) {
            if (v252 > 4) {
                fun_80494bc(v125, v124, 0x805ef04, 0x805e840, v121, v126, 0, v253, v128);
                continue;
            }
            switch (v252) {
            case 1:
                eax254 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248));
                switch (*reinterpret_cast<signed char*>(&eax254)) {
                default:
                    eax255 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248));
                    v256 = *reinterpret_cast<unsigned char*>(&eax255);
                    break;
                case 0:
                    v252 = 6;
                    break;
                case 48:
                case 49:
                case 50:
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                    v252 = 2;
                    eax257 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(v248) - 48);
                    v256 = *reinterpret_cast<unsigned char*>(&eax257);
                    break;
                case 63:
                    v256 = 0x7f;
                    break;
                case 88:
                case 0x78:
                    v252 = 3;
                    v256 = 0;
                    break;
                case 95:
                    v256 = 32;
                    break;
                case 97:
                    v256 = 7;
                    break;
                case 98:
                    v256 = 8;
                    break;
                case 0x65:
                    v256 = 27;
                    break;
                case 0x66:
                    v256 = 12;
                    break;
                case 0x6e:
                    v256 = 10;
                    break;
                case 0x72:
                    v256 = 13;
                    break;
                case 0x74:
                    v256 = 9;
                    break;
                case 0x76:
                    v256 = 11;
                    break;
                    eax258 = (static_cast<uint32_t>(v256) << 4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248)) - 48;
                    v256 = *reinterpret_cast<unsigned char*>(&eax258);
                    ++v248;
                    continue;
                    eax259 = v256;
                    *reinterpret_cast<void***>(v4) = *reinterpret_cast<void***>(&eax259);
                    ++v4;
                    ++v251;
                    v252 = 0;
                    continue;
                    eax260 = (static_cast<uint32_t>(v256) << 4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248)) - 55;
                    v256 = *reinterpret_cast<unsigned char*>(&eax260);
                    ++v248;
                    continue;
                    eax261 = (static_cast<uint32_t>(v256) << 4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248)) - 87;
                    v256 = *reinterpret_cast<unsigned char*>(&eax261);
                    ++v248;
                    continue;
                }
                if (v252 == 1) {
                    eax262 = v256;
                    *reinterpret_cast<void***>(v4) = *reinterpret_cast<void***>(&eax262);
                    ++v4;
                    ++v251;
                    v252 = 0;
                }
                ++v248;
                break;
            case 2:
                eax263 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248));
                if (*reinterpret_cast<signed char*>(&eax263) <= 47 || (eax264 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248)), *reinterpret_cast<signed char*>(&eax264) > 55)) {
                    eax265 = v256;
                    *reinterpret_cast<void***>(v4) = *reinterpret_cast<void***>(&eax265);
                    ++v4;
                    ++v251;
                    v252 = 0;
                    break;
                } else {
                    eax266 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(v248) + v256 * 8) - 48;
                    v256 = *reinterpret_cast<unsigned char*>(&eax266);
                    ++v248;
                    break;
                }
            case 3:
                eax267 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248));
                switch (*reinterpret_cast<signed char*>(&eax267) - 48) {
                case 49:
                case 50:
                case 51:
                case 52:
                case 53:
                case 54:
                    goto 0x804b9fd;
                case 17:
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                    goto 0x804ba1e;
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 23:
                case 24:
                case 25:
                case 26:
                case 27:
                case 28:
                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 35:
                case 36:
                case 37:
                case 38:
                case 39:
                case 40:
                case 41:
                case 42:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                case 48:
                    goto 0x804ba3c;
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                    goto 0x804b9dc;
                }
            case 4:
                v252 = 0;
                eax268 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248));
                if (*reinterpret_cast<signed char*>(&eax268) <= 63 || (eax269 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248)), *reinterpret_cast<signed char*>(&eax269) == 0x7f)) {
                    eax270 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248));
                    if (*reinterpret_cast<signed char*>(&eax270) != 63) {
                        v252 = 6;
                    } else {
                        *reinterpret_cast<void***>(v4) = reinterpret_cast<void**>(0x7f);
                        ++v4;
                        ++v251;
                    }
                } else {
                    edx271 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v248))) & 31;
                    *reinterpret_cast<void***>(v4) = *reinterpret_cast<void***>(&edx271);
                    ++v4;
                    ++v248;
                    ++v251;
                }
            case 0x8f:
            case 0x90:
            case 0x91:
            case 0x92:
            case 0x93:
            case 0x94:
                goto 0x804ba1e;
            case 0x7b:
                goto 0x804b91c;
            case 0x79:
                goto 0x804b916;
            case 0x77:
                goto 0x804b910;
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
            case 58:
            case 59:
            case 60:
                goto 0x804b8d0;
            case 0x73:
                goto 0x804b90a;
            case 0x6a:
                goto 0x804b8fe;
            case 0xaf:
            case 0xb0:
            case 0xb1:
            case 0xb2:
            case 0xb3:
            case 0xb4:
                goto 0x804b9fd;
            case 0x67:
                goto 0x804b8f8;
            case 100:
                goto 0x804b928;
            case 0x66:
                goto 0x804b8f2;
            case 0x6b:
                goto 0x804b904;
            case 0x88:
            case 0x89:
            case 0x8a:
            case 0x8b:
            case 0x8c:
            case 0x8d:
            case 0x8e:
            case 0x95:
            case 0x96:
            case 0x97:
            case 0x98:
            case 0x99:
            case 0x9a:
            case 0x9b:
            case 0x9c:
            case 0x9d:
            case 0x9e:
            case 0x9f:
            case 0xa0:
            case 0xa1:
            case 0xa2:
            case 0xa3:
            case 0xa4:
            case 0xa5:
            case 0xa6:
            case 0xa7:
            case 0xa8:
            case 0xa9:
            case 0xaa:
            case 0xab:
            case 0xac:
            case 0xad:
            case 0xae:
                goto 0x804ba3c;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
            case 49:
            case 50:
            case 51:
            case 52:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            case 66:
            case 67:
            case 69:
            case 70:
            case 71:
            case 72:
            case 73:
            case 74:
            case 75:
            case 76:
            case 77:
            case 78:
            case 79:
            case 80:
            case 81:
            case 82:
            case 83:
            case 84:
            case 85:
            case 86:
            case 87:
            case 88:
            case 89:
            case 90:
            case 91:
            case 92:
            case 94:
            case 95:
            case 96:
            case 97:
            case 98:
            case 99:
            case 0x65:
            case 0x68:
            case 0x69:
            case 0x6c:
            case 0x6d:
            case 0x6e:
            case 0x6f:
            case 0x70:
            case 0x71:
            case 0x72:
            case 0x74:
            case 0x75:
            case 0x76:
            case 0x78:
            case 0x7a:
            case 0x7c:
                goto 0x804b937;
            case 0x7e:
            case 0x7f:
            case 0x80:
            case 0x81:
            case 0x82:
            case 0x83:
            case 0x84:
            case 0x85:
            case 0x86:
            case 0x87:
                goto 0x804b9dc;
            case 5:
                goto 0x804b92e;
            case 68:
                goto 0x804b922;
            case 93:
            case 0x7d:
                goto 0x804b8e5;
            case 0:
                goto 0x804b824;
            }
        }
        break;
    }
    *reinterpret_cast<void***>(a1) = v4;
    *reinterpret_cast<void***>(a2) = v248;
    eax272 = v251;
    *v273 = eax272;
    *reinterpret_cast<unsigned char*>(&eax272) = reinterpret_cast<uint1_t>(v252 != 6);
    return eax272;
}

int32_t fun_804954c(void** a1, void** a2, void** a3, void** a4);

void** argmatch(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    signed char v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** v14;
    void** v15;
    void** edx16;
    void** v17;
    void** v18;
    void** v19;
    int32_t eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void** v26;
    int32_t eax27;
    void** v28;

    v5 = reinterpret_cast<void**>(0xffffffff);
    v6 = 0;
    eax13 = fun_804985c(a1, v7, v8, v9, v10, v11, 0xffffffff, v12);
    v14 = eax13;
    v15 = reinterpret_cast<void**>(0);
    while (*reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v15) << 2) + reinterpret_cast<unsigned char>(a2))) {
        edx16 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v15) << 2) + reinterpret_cast<unsigned char>(a2));
        eax20 = fun_8049a1c(edx16, a1, v14, v17, v18, v19, v5);
        if (eax20) {
            addr_8051aeb_4:
            ++v15;
            continue;
        } else {
            v21 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v15) << 2) + reinterpret_cast<unsigned char>(a2));
            eax25 = fun_804985c(v21, a1, v14, v22, v23, v24, v5, v14);
            if (eax25 == v14) 
                goto addr_8051a9c_6;
            if (reinterpret_cast<int1_t>(v5 == 0xffffffff)) 
                goto addr_8051aaa_8;
        }
        if (!a3 || (eax27 = fun_804954c(reinterpret_cast<unsigned char>(v5) * reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(a3), reinterpret_cast<unsigned char>(a4) * reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(a3), a4, v26), !!eax27)) {
            v6 = 1;
            goto addr_8051aeb_4;
        }
        addr_8051aaa_8:
        v5 = v15;
        goto addr_8051aeb_4;
    }
    if (!v6) {
        v28 = v5;
    } else {
        v28 = reinterpret_cast<void**>(0xfffffffe);
    }
    addr_8051b17_14:
    return v28;
    addr_8051a9c_6:
    v28 = v15;
    goto addr_8051b17_14;
}

void set_quoting_style(void*** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void*** v8;

    if (!a1) {
        v8 = reinterpret_cast<void***>(0x8064720);
    } else {
        v8 = a1;
    }
    *v8 = a2;
    return;
}

int32_t getenv = 0x8049602;

void** fun_80495fc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto getenv;
}

void*** fun_80497ac(void** a1, void** a2, void** a3, void** a4);

void** fun_804984c(void** a1, void** a2, void** a3, void** a4);

uint32_t bkm_scale(uint32_t* a1, int32_t a2, void** a3, void** a4);

uint32_t bkm_scale_by_power(uint32_t* a1, int32_t a2, int32_t a3, void** a4);

uint32_t xstrtoul(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void* ebp8;
    uint32_t v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    uint32_t eax15;
    unsigned char v16;
    void*** eax17;
    void* eax18;
    uint32_t eax19;
    uint32_t eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void*** eax25;
    void** eax26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void*** eax32;
    uint32_t eax33;
    uint32_t v34;
    int32_t v35;
    void* v36;
    uint32_t eax37;
    void** v38;
    void** v39;
    void** v40;
    struct s6* eax41;
    void** v42;
    void** v43;
    void** v44;
    struct s6* eax45;
    uint32_t eax46;
    uint32_t eax47;
    uint32_t v48;
    uint32_t eax49;
    uint32_t eax50;
    uint32_t eax51;
    uint32_t eax52;
    uint32_t eax53;
    uint32_t eax54;
    uint32_t eax55;
    uint32_t eax56;
    uint32_t eax57;
    uint32_t eax58;
    uint32_t eax59;
    int32_t v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void*** eax65;
    uint32_t eax66;
    uint32_t eax67;
    void** v68;
    void** v69;
    void** v70;
    struct s6* eax71;
    uint32_t eax72;
    uint32_t eax73;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v9 = 0;
    if (reinterpret_cast<signed char>(a3) < reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(a3) > reinterpret_cast<signed char>(36)) {
        fun_80496bc(0x8061f6c, 0x8061f61, 83, 0x8061f58, v10, v11);
    }
    if (a2) {
        v12 = a2;
    } else {
        v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffffff8);
    }
    v13 = v12;
    v14 = a1;
    eax15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v14));
    v16 = *reinterpret_cast<unsigned char*>(&eax15);
    while (eax17 = fun_80497ac(0x8061f6c, 0x8061f61, 83, 0x8061f58), eax18 = reinterpret_cast<void*>(static_cast<uint32_t>(v16)), eax19 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(*eax17) + (reinterpret_cast<uint32_t>(eax18) + reinterpret_cast<uint32_t>(eax18))), !!(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax19)) & 0x2000)) {
        ++v14;
        eax20 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v14));
        v16 = *reinterpret_cast<unsigned char*>(&eax20);
    }
    if (v16 != 45) {
        eax25 = fun_80494cc(0x8061f6c, 0x8061f61, 83, 0x8061f58, v21, v22, v23, v12, v24);
        *eax25 = reinterpret_cast<void**>(0);
        eax26 = fun_804984c(a1, v13, a3, 0x8061f58);
        v27 = eax26;
        if (*reinterpret_cast<void***>(v13) != a1) {
            eax32 = fun_80494cc(a1, v13, a3, 0x8061f58, v28, v29, v30, v12, v31);
            if (!*eax32) {
                addr_8058dd8_12:
                if (a5) {
                    eax33 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v13)));
                    if (!*reinterpret_cast<signed char*>(&eax33)) {
                        addr_8059063_14:
                        *reinterpret_cast<void***>(a4) = v27;
                        v34 = v9;
                    } else {
                        v35 = 0x400;
                        v36 = reinterpret_cast<void*>(1);
                        eax37 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v13)));
                        eax41 = fun_80495ec(a5, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax37)), a3, 0x8061f58, v38, v39, v40);
                        if (eax41) {
                            eax45 = fun_80495ec(a5, 48, a3, 0x8061f58, v42, v43, v44);
                            if (!eax45) {
                                addr_8058ea1_17:
                                eax46 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v13)));
                                switch (*reinterpret_cast<signed char*>(&eax46) - 66) {
                                default:
                                    *reinterpret_cast<void***>(a4) = v27;
                                    v34 = v9 | 2;
                                    break;
                                case 0:
                                    eax47 = bkm_scale(reinterpret_cast<int32_t>(ebp8) - 16, 0x400, a3, 0x8061f58);
                                    v48 = eax47;
                                    goto addr_805903e_21;
                                case 3:
                                    eax49 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp8) - 16, v35, 6, 0x8061f58);
                                    v48 = eax49;
                                    goto addr_805903e_21;
                                case 5:
                                case 37:
                                    eax50 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp8) - 16, v35, 3, 0x8061f58);
                                    v48 = eax50;
                                    goto addr_805903e_21;
                                case 9:
                                case 41:
                                    eax51 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp8) - 16, v35, 1, 0x8061f58);
                                    v48 = eax51;
                                    goto addr_805903e_21;
                                case 11:
                                case 43:
                                    eax52 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp8) - 16, v35, 2, 0x8061f58);
                                    v48 = eax52;
                                    goto addr_805903e_21;
                                case 14:
                                    eax53 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp8) - 16, v35, 5, 0x8061f58);
                                    v48 = eax53;
                                    goto addr_805903e_21;
                                case 18:
                                case 50:
                                    eax54 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp8) - 16, v35, 4, 0x8061f58);
                                    v48 = eax54;
                                    goto addr_805903e_21;
                                case 23:
                                    eax55 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp8) - 16, v35, 8, 0x8061f58);
                                    v48 = eax55;
                                    goto addr_805903e_21;
                                case 24:
                                    eax56 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp8) - 16, v35, 7, 0x8061f58);
                                    v48 = eax56;
                                    goto addr_805903e_21;
                                case 32:
                                    eax57 = bkm_scale(reinterpret_cast<int32_t>(ebp8) - 16, 0x200, a3, 0x8061f58);
                                    v48 = eax57;
                                    goto addr_805903e_21;
                                case 33:
                                    v48 = 0;
                                    goto addr_805903e_21;
                                case 53:
                                    eax58 = bkm_scale(reinterpret_cast<int32_t>(ebp8) - 16, 2, a3, 0x8061f58);
                                    v48 = eax58;
                                    goto addr_805903e_21;
                                }
                            } else {
                                eax59 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v13) + 1));
                                v60 = *reinterpret_cast<signed char*>(&eax59);
                                if (v60 == 68) 
                                    goto addr_8058e96_34;
                                if (v60 == 0x69) 
                                    goto addr_8058e81_36; else 
                                    goto addr_8058e79_37;
                            }
                        } else {
                            *reinterpret_cast<void***>(a4) = v27;
                            v34 = v9 | 2;
                        }
                    }
                } else {
                    *reinterpret_cast<void***>(a4) = v27;
                    v34 = v9;
                }
            } else {
                eax65 = fun_80494cc(a1, v13, a3, 0x8061f58, v61, v62, v63, v12, v64);
                if (*eax65 == 34) {
                    v9 = 1;
                    goto addr_8058dd8_12;
                } else {
                    v34 = 4;
                }
            }
        } else {
            if (!a5 || ((eax66 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v13))), *reinterpret_cast<signed char*>(&eax66) == 0) || (eax67 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v13))), eax71 = fun_80495ec(a5, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax67)), a3, 0x8061f58, v68, v69, v70), eax71 == 0))) {
                v34 = 4;
            } else {
                v27 = reinterpret_cast<void**>(1);
                goto addr_8058dd8_12;
            }
        }
    } else {
        v34 = 4;
    }
    return v34;
    addr_805903e_21:
    v9 = v9 | v48;
    *reinterpret_cast<void***>(v13) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13)) + reinterpret_cast<uint32_t>(v36));
    eax72 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v13)));
    if (*reinterpret_cast<signed char*>(&eax72)) {
        v9 = v9 | 2;
        goto addr_8059063_14;
    }
    addr_8058e81_36:
    eax73 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v13) + 2));
    if (*reinterpret_cast<signed char*>(&eax73) == 66) {
        v36 = reinterpret_cast<void*>(3);
        goto addr_8058ea1_17;
    }
    addr_8058e79_37:
    if (v60 == 66) {
        addr_8058e96_34:
        v35 = 0x3e8;
        v36 = reinterpret_cast<void*>(2);
        goto addr_8058ea1_17;
    } else {
        goto addr_8058ea1_17;
    }
}

int32_t isatty = 0x80497d2;

int32_t fun_80497cc(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto isatty;
}

void** quotearg_n(void** a1, void** a2);

void** quotearg(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;

    eax8 = quotearg_n(0, a1);
    return eax8;
}

int32_t gettext = 0x80496f2;

void** fun_80496ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, ...) {
    goto gettext;
}

int32_t error = 0x8049982;

void fun_804997c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto error;
}

void argmatch_invalid(void** a1, void** a2, void** a3, void** a4);

void argmatch_valid(void** a1, void** a2, void** a3, void** a4);

void** __xargmatch_internal(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;
    void** v9;

    eax8 = argmatch(a2, a3, a4, a5);
    if (reinterpret_cast<signed char>(eax8) < reinterpret_cast<signed char>(0)) {
        argmatch_invalid(a1, a2, eax8, a5);
        argmatch_valid(a3, a4, a5, a5);
        a6(a3, a4, a5, a5);
        v9 = reinterpret_cast<void**>(0xffffffff);
    } else {
        v9 = eax8;
    }
    return v9;
}

void xstrtol_error(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void xstrtol_fatal(void** a1, void** a2, int32_t a3, void** a4, void** a5, void** a6, void** a7) {
    int32_t eax8;
    void** eax9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;

    eax8 = a3;
    eax9 = exit_failure;
    v10 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax8)));
    xstrtol_error(a1, a2, v10, a4, a5, eax9);
    fun_80494bc(a1, a2, v10, a4, a5, eax9, v11, v12, v13);
    if (reinterpret_cast<unsigned char>(-1 / reinterpret_cast<unsigned char>(v10)) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2))) {
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) * reinterpret_cast<unsigned char>(v10));
    } else {
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0xffffffff);
    }
    goto a1;
}

uint32_t set_char_quoting(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;
    uint32_t eax9;
    void** v10;
    uint32_t eax11;
    void*** v12;
    uint32_t v13;
    uint32_t ecx14;
    uint32_t v15;
    uint32_t ecx16;

    eax8 = a2;
    eax9 = *reinterpret_cast<unsigned char*>(&eax8);
    if (!a1) {
        v10 = reinterpret_cast<void**>(0x8064720);
    } else {
        v10 = a1;
    }
    eax11 = *reinterpret_cast<unsigned char*>(&eax9);
    v12 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v10 + 4) + (static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax11) >> 5)) << 2));
    v13 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax9)) & 31;
    ecx14 = v13;
    v15 = reinterpret_cast<unsigned char>(*v12) >> *reinterpret_cast<signed char*>(&ecx14) & 1;
    ecx16 = v13;
    *v12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*v12) ^ (reinterpret_cast<unsigned char>(a3) & 1 ^ v15) << *reinterpret_cast<unsigned char*>(&ecx16));
    return v15;
}

void** xmemdup(void** a1, void** a2);

void** clone_quoting_options(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void*** eax17;
    void** v18;
    void** v19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void*** eax26;

    eax17 = fun_80494cc(v8, v9, v10, v11, v12, v13, v14, v15, v16);
    v18 = *eax17;
    if (!a1) {
        v19 = reinterpret_cast<void**>(0x8064720);
    } else {
        v19 = a1;
    }
    eax20 = xmemdup(v19, 36);
    eax26 = fun_80494cc(v19, 36, v21, v22, v23, v19, v24, v25, eax20);
    *eax26 = v18;
    return eax20;
}

int32_t strchr = 0x80495f2;

struct s6* fun_80495ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto strchr;
}

void** quote_n(void** a1, void** a2);

void** quote(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;

    eax8 = quote_n(0, a1);
    return eax8;
}

int32_t memcpy = 0x8049842;

void** fun_804983c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    goto memcpy;
}

void** xstrdup(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** ebp6;
    void** eax7;
    void** eax8;

    eax7 = fun_804985c(a1, v5, ebp6, __return_address(), a1, a2, a3, a4);
    eax8 = xmemdup(a1, eax7 + 1);
    return eax8;
}

unsigned char get_funky_string(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    unsigned char v10;
    uint32_t v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    uint32_t eax20;
    uint32_t edx21;
    uint32_t eax22;
    uint32_t eax23;
    uint32_t eax24;
    uint32_t eax25;
    uint32_t eax26;
    uint32_t eax27;
    uint32_t eax28;
    uint32_t eax29;
    uint32_t eax30;
    uint32_t eax31;
    uint32_t eax32;
    uint32_t eax33;
    uint32_t eax34;
    uint32_t eax35;
    uint32_t eax36;
    uint32_t eax37;
    uint32_t edx38;

    eax5 = a3;
    *reinterpret_cast<signed char*>(&v6) = *reinterpret_cast<signed char*>(&eax5);
    v7 = *reinterpret_cast<void***>(a2);
    v8 = *reinterpret_cast<void***>(a1);
    v9 = reinterpret_cast<void**>(0);
    v10 = 0;
    v11 = 0;
    while (v11 <= 4) {
        if (v11 > 4) {
            fun_80494bc(v12, v13, v14, v15, v16, v6, v17, v18, v19);
            continue;
        }
        switch (v11) {
        case 0:
            eax20 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7));
            v15 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax20)));
            if (v15 == 61) {
                if (*reinterpret_cast<signed char*>(&v6)) {
                    v11 = 5;
                    break;
                }
            } else {
                if (reinterpret_cast<signed char>(v15) > reinterpret_cast<signed char>(61)) {
                    if (v15 == 92) {
                        v11 = 1;
                        ++v7;
                        break;
                    } else {
                        if (v15 == 94) {
                            v11 = 4;
                            ++v7;
                            break;
                        }
                    }
                } else {
                    if (!v15 || v15 == 58) {
                        v11 = 5;
                        break;
                    }
                }
            }
            edx21 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7));
            *reinterpret_cast<void***>(v8) = *reinterpret_cast<void***>(&edx21);
            ++v8;
            ++v7;
            ++v9;
            break;
        case 1:
            eax22 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7));
            v16 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax22)));
            switch (v16) {
            default:
                eax23 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7));
                v10 = *reinterpret_cast<unsigned char*>(&eax23);
                break;
            case 0:
                v11 = 6;
                break;
            case 48:
            case 49:
            case 50:
            case 51:
            case 52:
            case 53:
            case 54:
            case 55:
                v11 = 2;
                eax24 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(v7) - 48);
                v10 = *reinterpret_cast<unsigned char*>(&eax24);
                break;
            case 63:
                v10 = 0x7f;
                break;
            case 88:
            case 0x78:
                v11 = 3;
                v10 = 0;
                break;
            case 95:
                v10 = 32;
                break;
            case 97:
                v10 = 7;
                break;
            case 98:
                v10 = 8;
                break;
            case 0x65:
                v10 = 27;
                break;
            case 0x66:
                v10 = 12;
                break;
            case 0x6e:
                v10 = 10;
                break;
            case 0x72:
                v10 = 13;
                break;
            case 0x74:
                v10 = 9;
                break;
            case 0x76:
                v10 = 11;
                break;
                eax25 = (static_cast<uint32_t>(v10) << 4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7)) - 48;
                v10 = *reinterpret_cast<unsigned char*>(&eax25);
                ++v7;
                continue;
                eax26 = v10;
                *reinterpret_cast<void***>(v8) = *reinterpret_cast<void***>(&eax26);
                ++v8;
                ++v9;
                v11 = 0;
                continue;
                eax27 = (static_cast<uint32_t>(v10) << 4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7)) - 55;
                v10 = *reinterpret_cast<unsigned char*>(&eax27);
                ++v7;
                continue;
                eax28 = (static_cast<uint32_t>(v10) << 4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7)) - 87;
                v10 = *reinterpret_cast<unsigned char*>(&eax28);
                ++v7;
                continue;
            }
            if (v11 == 1) {
                eax29 = v10;
                *reinterpret_cast<void***>(v8) = *reinterpret_cast<void***>(&eax29);
                ++v8;
                ++v9;
                v11 = 0;
            }
            ++v7;
            break;
        case 2:
            eax30 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7));
            if (*reinterpret_cast<signed char*>(&eax30) <= 47 || (eax31 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7)), *reinterpret_cast<signed char*>(&eax31) > 55)) {
                eax32 = v10;
                *reinterpret_cast<void***>(v8) = *reinterpret_cast<void***>(&eax32);
                ++v8;
                ++v9;
                v11 = 0;
                break;
            } else {
                eax33 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(v7) + v10 * 8) - 48;
                v10 = *reinterpret_cast<unsigned char*>(&eax33);
                ++v7;
                break;
            }
        case 3:
            eax34 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7));
            v14 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax34) - 48);
            switch (v14) {
            case 49:
            case 50:
            case 51:
            case 52:
            case 53:
            case 54:
                goto 0x804b9fd;
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
                goto 0x804ba1e;
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
                goto 0x804ba3c;
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                goto 0x804b9dc;
            }
        case 4:
            v11 = 0;
            eax35 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7));
            if (*reinterpret_cast<signed char*>(&eax35) <= 63 || (eax36 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7)), *reinterpret_cast<signed char*>(&eax36) == 0x7f)) {
                eax37 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7));
                if (*reinterpret_cast<signed char*>(&eax37) != 63) {
                    v11 = 6;
                } else {
                    *reinterpret_cast<void***>(v8) = reinterpret_cast<void**>(0x7f);
                    ++v8;
                    ++v9;
                }
            } else {
                edx38 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7))) & 31;
                *reinterpret_cast<void***>(v8) = *reinterpret_cast<void***>(&edx38);
                ++v8;
                ++v7;
                ++v9;
            }
        case 0x8f:
        case 0x90:
        case 0x91:
        case 0x92:
        case 0x93:
        case 0x94:
            goto 0x804ba1e;
        case 0x7b:
            goto 0x804b91c;
        case 0x79:
            goto 0x804b916;
        case 0x77:
            goto 0x804b910;
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 60:
            goto 0x804b8d0;
        case 0x73:
            goto 0x804b90a;
        case 0x6a:
            goto 0x804b8fe;
        case 0xaf:
        case 0xb0:
        case 0xb1:
        case 0xb2:
        case 0xb3:
        case 0xb4:
            goto 0x804b9fd;
        case 0x67:
            goto 0x804b8f8;
        case 100:
            goto 0x804b928;
        case 0x66:
            goto 0x804b8f2;
        case 0x6b:
            goto 0x804b904;
        case 0x88:
        case 0x89:
        case 0x8a:
        case 0x8b:
        case 0x8c:
        case 0x8d:
        case 0x8e:
        case 0x95:
        case 0x96:
        case 0x97:
        case 0x98:
        case 0x99:
        case 0x9a:
        case 0x9b:
        case 0x9c:
        case 0x9d:
        case 0x9e:
        case 0x9f:
        case 0xa0:
        case 0xa1:
        case 0xa2:
        case 0xa3:
        case 0xa4:
        case 0xa5:
        case 0xa6:
        case 0xa7:
        case 0xa8:
        case 0xa9:
        case 0xaa:
        case 0xab:
        case 0xac:
        case 0xad:
        case 0xae:
            goto 0x804ba3c;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 94:
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 0x65:
        case 0x68:
        case 0x69:
        case 0x6c:
        case 0x6d:
        case 0x6e:
        case 0x6f:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x78:
        case 0x7a:
        case 0x7c:
            goto 0x804b937;
        case 0x7e:
        case 0x7f:
        case 0x80:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
        case 0x87:
            goto 0x804b9dc;
        case 5:
            goto 0x804b92e;
        case 68:
            goto 0x804b922;
        case 93:
        case 0x7d:
            goto 0x804b8e5;
        }
    }
    *reinterpret_cast<void***>(a1) = v8;
    *reinterpret_cast<void***>(a2) = v7;
    *reinterpret_cast<void***>(a4) = v9;
    return static_cast<unsigned char>(reinterpret_cast<uint1_t>(v11 != 6));
}

void** set_exit_status(void** a1, void** a2, void** a3, void** a4, void** a5);

void** file_failure(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** eax7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    void** v14;
    void** v15;
    void** ebx16;
    void** ebp17;
    void*** eax18;
    void** edx19;
    void** eax20;

    eax7 = a1;
    *reinterpret_cast<unsigned char*>(&v8) = *reinterpret_cast<unsigned char*>(&eax7);
    eax12 = quotearg_colon(a3, v9, v10, v11);
    eax18 = fun_80494cc(a3, v13, v14, v15, v8, ebx16, ebp17, __return_address(), a1);
    edx19 = *eax18;
    fun_804997c(0, edx19, a2, eax12, v8, ebx16, ebp17, __return_address());
    eax20 = set_exit_status(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v8)), edx19, a2, eax12, v8);
    return eax20;
}

int32_t dirfd = 0x8049522;

void** fun_804951c(void** a1) {
    goto dirfd;
}

/* __i686.get_pc_thunk.bx */
int32_t __i686_get_pc_thunk_bx();

uint32_t fun_80499ec(int32_t a1, void** a2, int32_t a3);

uint32_t fstat64(void** a1, void** a2) {
    int32_t eax3;
    uint32_t eax4;

    eax3 = __i686_get_pc_thunk_bx();
    eax4 = fun_80499ec(3, a1, eax3);
    return eax4;
}

int32_t closedir = 0x8049912;

void** fun_804990c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto closedir;
}

void** quotearg_char(void** a1, int32_t a2);

void** quotearg_colon(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;

    eax5 = quotearg_char(a1, 58);
    return eax5;
}

int32_t __errno_location = 0x80494d2;

void*** fun_80494cc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    goto __errno_location;
}

struct s7 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[13] pad18;
    unsigned char f18;
    void** f19;
};

int32_t readdir64 = 0x8049832;

struct s7* fun_804982c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto readdir64;
}

signed char patterns_match(void** a1, void** a2);

uint32_t file_ignored(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t eax7;
    uint32_t eax8;
    int32_t eax9;
    uint32_t eax10;
    void* v11;
    uint32_t eax12;
    int32_t eax13;
    void** eax14;
    signed char al15;
    void** eax16;
    signed char al17;
    int32_t v18;

    eax7 = ignore_mode;
    if (eax7 != 2 && (eax8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)), *reinterpret_cast<signed char*>(&eax8) == 46)) {
        eax9 = ignore_mode;
        if (!eax9) 
            goto addr_804c775_3;
        eax10 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 1));
        if (*reinterpret_cast<signed char*>(&eax10) != 46) {
            v11 = reinterpret_cast<void*>(1);
        } else {
            v11 = reinterpret_cast<void*>(2);
        }
        eax12 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v11) + reinterpret_cast<unsigned char>(a1));
        if (!*reinterpret_cast<signed char*>(&eax12)) 
            goto addr_804c775_3;
    }
    eax13 = ignore_mode;
    if (!eax13 && (eax14 = hide_patterns, al15 = patterns_match(eax14, a1), !!al15) || (eax16 = ignore_patterns, al17 = patterns_match(eax16, a1), !!al17)) {
        addr_804c775_3:
        v18 = 1;
    } else {
        v18 = 0;
    }
    return static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v18));
}

int32_t fwrite_unlocked = 0x80498e2;

void fun_80498dc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto fwrite_unlocked;
}

int32_t fun_8049a0c(void** a1, void** a2, int32_t a3);

signed char patterns_match(void** a1, void** a2) {
    void** v3;
    void** edx4;
    int32_t eax5;
    unsigned char v6;
    uint32_t eax7;

    v3 = a1;
    while (v3) {
        edx4 = *reinterpret_cast<void***>(v3);
        eax5 = fun_8049a0c(edx4, a2, 4);
        if (!eax5) 
            goto addr_804c6d0_4;
        v3 = *reinterpret_cast<void***>(v3 + 4);
    }
    v6 = 0;
    addr_804c6e9_7:
    eax7 = v6;
    return *reinterpret_cast<signed char*>(&eax7);
    addr_804c6d0_4:
    v6 = 1;
    goto addr_804c6e9_7;
}

void freecon(void** a1) {
    return;
}

void** xrealloc(void** a1, void** a2, void** a3, void** a4, void** a5);

void** xnrealloc(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;

    if (reinterpret_cast<unsigned char>(-1 / reinterpret_cast<unsigned char>(a3)) < reinterpret_cast<unsigned char>(a2)) {
        xalloc_die(v5, v6, v7, v8, v9);
    }
    eax13 = xrealloc(a1, reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(a3), v10, v11, v12);
    return eax13;
}

int32_t memset = 0x8049652;

void fun_804964c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto memset;
}

uint32_t fun_80495bc(int32_t a1, void** a2, int32_t a3);

uint32_t stat64(void** a1, void** a2) {
    int32_t eax3;
    uint32_t eax4;

    eax3 = __i686_get_pc_thunk_bx();
    eax4 = fun_80495bc(3, a1, eax3);
    return eax4;
}

uint32_t fun_804971c(int32_t a1, void** a2, int32_t a3);

uint32_t lstat64(void** a1, void** a2) {
    int32_t eax3;
    uint32_t eax4;

    eax3 = __i686_get_pc_thunk_bx();
    eax4 = fun_804971c(3, a1, eax3);
    return eax4;
}

uint32_t getfilecon(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void*** eax9;

    eax9 = fun_80494cc(v6, v7, ebp8, __return_address(), a1, a2, a3, a4, a5);
    *eax9 = reinterpret_cast<void**>(95);
    return 0xffffffff;
}

int32_t strcmp = 0x8049aa2;

int32_t strcmp(void** a1, void** a2, void** a3, void** a4) {
    goto strcmp;
}

uint32_t file_has_acl() {
    return 0;
}

void** areadlink_with_size(void** a1, void** a2);

void** get_link_name(void** a1, void** a2, void** a3) {
    void** eax4;
    void** v5;
    void** v6;
    void** eax7;
    void** eax8;
    void** v9;
    void** v10;
    void** v11;
    void** ebp12;
    void** eax13;
    void** v14;
    void** v15;

    eax4 = a3;
    *reinterpret_cast<unsigned char*>(&v5) = *reinterpret_cast<unsigned char*>(&eax4);
    v6 = *reinterpret_cast<void***>(a2 + 52);
    eax7 = areadlink_with_size(a1, v6);
    *reinterpret_cast<void***>(a2 + 4) = eax7;
    eax8 = *reinterpret_cast<void***>(a2 + 4);
    if (!eax8) {
        eax13 = fun_80496ec(0x805f919, v6, v9, v10, v11, v5, ebp12, __return_address(), a1);
        eax8 = file_failure(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v5)), eax13, a1, v14, v15, v5);
    }
    return eax8;
}

void* fun_80496ac(void** a1, void** a2);

void fun_804961c(void** a1, void** a2, void* a3);

void fun_804988c(void** a1, void** a2, void* a3);

void** make_link_name(void** a1, void** a2) {
    uint32_t eax3;
    void* eax4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** eax17;
    void** v18;
    void** v19;
    void** v20;
    void** eax21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;

    if (a2) {
        eax3 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2));
        if (*reinterpret_cast<signed char*>(&eax3) != 47) {
            eax4 = fun_80496ac(a1, 47);
            if (eax4) {
                eax11 = fun_804985c(a2, 47, v5, v6, v7, v8, v9, v10);
                eax17 = xmalloc(reinterpret_cast<unsigned char>(eax11) + (reinterpret_cast<int32_t>(eax4) - reinterpret_cast<unsigned char>(a1) + 1) + 1, 47, v12, v13, v14, v15, v16);
                fun_804961c(eax17, a1, reinterpret_cast<int32_t>(eax4) - reinterpret_cast<unsigned char>(a1) + 1);
                fun_804988c(reinterpret_cast<unsigned char>(eax17) + (reinterpret_cast<int32_t>(eax4) - reinterpret_cast<unsigned char>(a1) + 1), a2, reinterpret_cast<int32_t>(eax4) - reinterpret_cast<unsigned char>(a1) + 1);
                v18 = eax17;
            } else {
                eax21 = xstrdup(a2, 47, v19, v20);
                v18 = eax21;
            }
        } else {
            eax25 = xstrdup(a2, v22, v23, v24);
            v18 = eax25;
        }
    } else {
        v18 = reinterpret_cast<void**>(0);
    }
    return v18;
}

struct s8 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

struct s8* fun_804950c();

void** __umoddi3(void** a1, void** a2, void** a3, void** a4);

void** __udivdi3(void** a1, void** a2, void** a3, void** a4);

void** adjust_value(void** a1, void** a2, void** a3, void** a4);

void fun_80494fc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** group_number(void** a1, void** a2, void** a3, void** a4);

void** human_readable(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    uint32_t v14;
    void** v15;
    void** v16;
    void** v17;
    struct s8* eax18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** eax37;
    void** v38;
    void** v39;
    void** eax40;
    void** eax41;
    void** eax42;
    void** v43;
    void** eax44;
    void** eax45;
    void** v46;
    void** v47;
    void** v48;
    void** eax49;
    void** v50;
    void* v51;
    void* v52;
    void* v53;
    void** eax54;
    void** eax55;
    void** eax56;
    void** eax57;
    int16_t fpu_status_word58;
    uint32_t eax59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** eax72;
    void** v73;
    void** v74;
    uint32_t eax75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** eax87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** eax96;
    void** v97;
    void** eax98;
    void** v99;
    void** v100;
    uint32_t eax101;
    unsigned char v102;
    uint32_t edx103;
    void* eax104;
    int32_t v105;
    uint32_t eax106;
    unsigned char v107;
    void* eax108;
    void* tmp32_109;
    void** eax110;
    void*** v111;
    void* eax112;
    void** v113;
    void** eax114;
    void* v115;
    void* v116;
    void** tmp32_117;
    uint1_t cf118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** eax125;
    uint32_t edx126;
    void** eax127;
    int32_t v128;
    uint32_t ecx129;
    unsigned char v130;
    void** tmp32_131;
    uint1_t cf132;
    void** v133;
    uint32_t edx134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;

    v9 = a7;
    v10 = a8;
    v11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) & 3);
    if (!(reinterpret_cast<unsigned char>(a4) & 32)) {
        v12 = reinterpret_cast<void**>(0x3e8);
    } else {
        v12 = reinterpret_cast<void**>(0x400);
    }
    v13 = v12;
    v14 = 0xffffffff;
    v15 = reinterpret_cast<void**>(0x80618f9);
    v16 = reinterpret_cast<void**>(1);
    v17 = reinterpret_cast<void**>(0x80618fb);
    eax18 = fun_804950c();
    v19 = eax18->f0;
    eax27 = fun_804985c(v19, v20, v21, v22, v23, v24, v25, v26);
    if (eax27 && reinterpret_cast<unsigned char>(eax27) <= reinterpret_cast<unsigned char>(16)) {
        v15 = eax18->f0;
        v16 = eax27;
    }
    v28 = eax18->f8;
    v29 = eax18->f4;
    eax37 = fun_804985c(v29, v30, v31, v32, v33, v34, v35, v36);
    if (reinterpret_cast<unsigned char>(eax37) <= reinterpret_cast<unsigned char>(16)) {
        v17 = eax18->f4;
    }
    v38 = a3 + 0x288;
    v39 = v38;
    if (reinterpret_cast<unsigned char>(v10) > reinterpret_cast<unsigned char>(a6) || reinterpret_cast<unsigned char>(v10) >= reinterpret_cast<unsigned char>(a6) && reinterpret_cast<unsigned char>(v9) > reinterpret_cast<unsigned char>(a5)) {
        if (!(reinterpret_cast<unsigned char>(a5) | reinterpret_cast<unsigned char>(a6)) || (eax40 = __umoddi3(v9, v10, a5, a6), !!(reinterpret_cast<unsigned char>(eax40) | reinterpret_cast<unsigned char>(a6)))) {
            addr_8053b62_10:
            __asm__("fild qword [ebp+0xffffff20]");
            __asm__("fstp tword [ebp+0xfffffe88]");
            if (reinterpret_cast<signed char>(v10) < reinterpret_cast<signed char>(0)) {
                __asm__("fld tword [0x8061990]");
                __asm__("fld tword [ebp+0xfffffe88]");
                __asm__("faddp st1, st0");
                __asm__("fstp tword [ebp+0xfffffe88]");
            }
        } else {
            eax41 = __udivdi3(v9, v10, a5, a6);
            eax42 = __umoddi3(a1, a2, eax41, v10);
            v43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax42) * 10);
            eax44 = __umoddi3(v43, reinterpret_cast<unsigned char>(v10) * 10 + reinterpret_cast<uint32_t>(__intrinsic()), eax41, v10);
            __asm__("shld edx, eax, 0x1");
            eax45 = __udivdi3(a1, a2, eax41, v10);
            v46 = eax45;
            v47 = a2;
            v48 = v10;
            eax49 = __udivdi3(v43, reinterpret_cast<unsigned char>(v10) * 10 + reinterpret_cast<uint32_t>(__intrinsic()), eax41, v48);
            v50 = eax49;
            if (reinterpret_cast<unsigned char>(v10) > reinterpret_cast<unsigned char>(v10) || reinterpret_cast<unsigned char>(v10) >= reinterpret_cast<unsigned char>(v10) && reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax44) + reinterpret_cast<unsigned char>(eax44)) >= reinterpret_cast<unsigned char>(eax41)) {
                if (reinterpret_cast<unsigned char>(v10) > reinterpret_cast<unsigned char>(v10) || reinterpret_cast<unsigned char>(v10) >= reinterpret_cast<unsigned char>(v10) && reinterpret_cast<unsigned char>(eax41) >= reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax44) + reinterpret_cast<unsigned char>(eax44))) {
                    v51 = reinterpret_cast<void*>(2);
                } else {
                    v51 = reinterpret_cast<void*>(3);
                }
                v52 = v51;
            } else {
                v52 = reinterpret_cast<void*>(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax44) + reinterpret_cast<unsigned char>(eax44)) | reinterpret_cast<unsigned char>(v10))))));
            }
            v53 = v52;
            goto addr_8053e12_19;
        }
    } else {
        eax54 = __umoddi3(a5, a6, v9, v10);
        if (reinterpret_cast<unsigned char>(eax54) | reinterpret_cast<unsigned char>(v10)) 
            goto addr_8053b62_10;
        eax55 = __udivdi3(a5, a6, v9, v10);
        v46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax55) * reinterpret_cast<unsigned char>(a1));
        v47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(eax55) + reinterpret_cast<unsigned char>(a6) * reinterpret_cast<unsigned char>(a1) + reinterpret_cast<uint32_t>(__intrinsic()));
        v48 = a6;
        eax56 = __udivdi3(v46, v47, eax55, v48);
        if (reinterpret_cast<unsigned char>(eax56) ^ reinterpret_cast<unsigned char>(a1) | reinterpret_cast<unsigned char>(v47) ^ reinterpret_cast<unsigned char>(a2)) 
            goto addr_8053b62_10;
        v50 = reinterpret_cast<void**>(0);
        v53 = reinterpret_cast<void*>(0);
        goto addr_8053e12_19;
    }
    __asm__("fld tword [ebp+0xfffffe88]");
    __asm__("fstp tword [ebp+0xffffff58]");
    __asm__("fild qword [ebp+0xffffff30]");
    __asm__("fstp tword [ebp+0xfffffec8]");
    if (reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0)) {
        __asm__("fld tword [0x8061990]");
        __asm__("fld tword [ebp+0xfffffec8]");
        __asm__("faddp st1, st0");
        __asm__("fstp tword [ebp+0xfffffec8]");
    }
    __asm__("fild qword [ebp+0xffffff28]");
    __asm__("fstp tword [ebp+0xfffffed8]");
    if (reinterpret_cast<signed char>(a6) < reinterpret_cast<signed char>(0)) {
        __asm__("fld tword [0x8061990]");
        __asm__("fld tword [ebp+0xfffffed8]");
        __asm__("faddp st1, st0");
        __asm__("fstp tword [ebp+0xfffffed8]");
    }
    __asm__("fld tword [ebp+0xffffff58]");
    __asm__("fld tword [ebp+0xfffffed8]");
    __asm__("fdivrp st1, st0");
    __asm__("fld tword [ebp+0xfffffec8]");
    __asm__("fmulp st1, st0");
    __asm__("fstp tword [ebp+0xffffff48]");
    if (reinterpret_cast<unsigned char>(a4) & 16) {
        v14 = 0;
        do {
            __asm__("fild qword [esp]");
            __asm__("fld tword [ebp+0xffffff38]");
            __asm__("fmulp st1, st0");
            __asm__("fstp tword [ebp+0xffffff38]");
            ++v14;
            eax57 = v13;
            __asm__("fild qword [esp]");
            __asm__("fld tword [ebp+0xffffff38]");
            __asm__("fmulp st1, st0");
            __asm__("fld tword [ebp+0xffffff48]");
            __asm__("fucompp ");
            *reinterpret_cast<int16_t*>(&eax57) = fpu_status_word58;
            *reinterpret_cast<unsigned char*>(&eax57) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(&eax57 + 1) & 5) == 0);
            eax59 = reinterpret_cast<unsigned char>(eax57) ^ 1;
            if (*reinterpret_cast<signed char*>(&eax59)) 
                break;
        } while (reinterpret_cast<int32_t>(v14) < reinterpret_cast<int32_t>(8));
        __asm__("fld tword [ebp+0xffffff48]");
        __asm__("fld tword [ebp+0xffffff38]");
        __asm__("fdivp st1, st0");
        __asm__("fstp tword [ebp+0xffffff48]");
        v60 = v61;
        adjust_value(v11, v62, v63, v60);
        __asm__("fstp tword [esp+0x8]");
        fun_80494fc(a3, 0x8061902, v63, v60, v64, v65, v66, v67);
        eax72 = fun_804985c(a3, 0x8061902, v63, v60, v68, v69, v70, v71);
        v73 = eax72;
        v74 = v16 + 1;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(a4) & 32) == 0)) + reinterpret_cast<unsigned char>(v74) + 1) < reinterpret_cast<unsigned char>(v73)) 
            goto addr_8053d8a_32;
        if (!(reinterpret_cast<unsigned char>(a4) & 8)) 
            goto addr_8053ddb_34;
        eax75 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v73 - 1) + reinterpret_cast<unsigned char>(a3));
        if (*reinterpret_cast<signed char*>(&eax75) != 48) 
            goto addr_8053ddb_34;
    } else {
        v60 = v76;
        adjust_value(v11, v77, v78, v60);
        __asm__("fstp tword [esp+0x8]");
        fun_80494fc(a3, 0x80618fc, v78, v60, v79, v80, v81, v82);
        eax87 = fun_804985c(a3, 0x80618fc, v78, v60, v83, v84, v85, v86);
        v73 = eax87;
        v74 = reinterpret_cast<void**>(0);
        goto addr_8053ddb_34;
    }
    addr_8053d8a_32:
    __asm__("fld tword [ebp+0xffffff48]");
    __asm__("fld tword [0x80619a0]");
    __asm__("fmulp st1, st0");
    __asm__("fstp tword [esp+0x4]");
    adjust_value(v11, 0x8061902, v63, v60);
    __asm__("fld tword [0x80619a0]");
    __asm__("fdivp st1, st0");
    __asm__("fstp tword [esp+0x8]");
    fun_80494fc(a3, 0x80618fc, v63, v60, v88, v89, v90, v91);
    eax96 = fun_804985c(a3, 0x80618fc, v63, v60, v92, v93, v94, v95);
    v73 = eax96;
    v74 = reinterpret_cast<void**>(0);
    addr_8053ddb_34:
    v39 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v73) + reinterpret_cast<unsigned char>(v38));
    fun_80499bc(v39, a3, v73, v60);
    v97 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v73) - reinterpret_cast<unsigned char>(v74) + reinterpret_cast<unsigned char>(v39));
    addr_80541eb_37:
    if (reinterpret_cast<unsigned char>(a4) & 4) {
        eax98 = group_number(v39, reinterpret_cast<unsigned char>(v97) - reinterpret_cast<unsigned char>(v39), v28, v17);
        v39 = eax98;
    }
    if (reinterpret_cast<unsigned char>(a4) & 0x80) {
        if (reinterpret_cast<int32_t>(v14) < reinterpret_cast<int32_t>(0)) {
            v14 = 0;
            v99 = reinterpret_cast<void**>(1);
            v100 = reinterpret_cast<void**>(0);
            while ((reinterpret_cast<unsigned char>(v100) < reinterpret_cast<unsigned char>(v10) || reinterpret_cast<unsigned char>(v100) <= reinterpret_cast<unsigned char>(v10) && reinterpret_cast<unsigned char>(v99) < reinterpret_cast<unsigned char>(v9)) && (++v14, v14 != 8)) {
                v99 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v13) * reinterpret_cast<unsigned char>(v99));
                v100 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v100) * reinterpret_cast<unsigned char>(v13) + reinterpret_cast<uint32_t>(__intrinsic()));
            }
        }
        if (reinterpret_cast<unsigned char>(a4) & 0x100 | v14 && reinterpret_cast<unsigned char>(a4) & 64) {
            *reinterpret_cast<void***>(v38) = reinterpret_cast<void**>(32);
            ++v38;
        }
        if (v14) {
            if (reinterpret_cast<unsigned char>(a4) & 32 || v14 != 1) {
                eax101 = *reinterpret_cast<unsigned char*>(v14 + 0x80618f0);
                v102 = *reinterpret_cast<unsigned char*>(&eax101);
            } else {
                v102 = 0x6b;
            }
            edx103 = v102;
            *reinterpret_cast<void***>(v38) = *reinterpret_cast<void***>(&edx103);
            ++v38;
        }
        if (reinterpret_cast<unsigned char>(a4) & 0x100) {
            if (reinterpret_cast<unsigned char>(a4) & 32 && v14) {
                *reinterpret_cast<void***>(v38) = reinterpret_cast<void**>(0x69);
                ++v38;
            }
            *reinterpret_cast<void***>(v38) = reinterpret_cast<void**>(66);
            ++v38;
        }
    }
    *reinterpret_cast<void***>(v38) = reinterpret_cast<void**>(0);
    return v39;
    addr_8053e12_19:
    if (!(reinterpret_cast<unsigned char>(a4) & 16) || ((v14 = 0, reinterpret_cast<unsigned char>(0) > reinterpret_cast<unsigned char>(v47)) || reinterpret_cast<unsigned char>(0) >= reinterpret_cast<unsigned char>(v47) && reinterpret_cast<unsigned char>(v13) > reinterpret_cast<unsigned char>(v46))) {
        addr_8054088_56:
        if (!reinterpret_cast<int1_t>(v11 == 1)) {
            if (v11 || (eax104 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v50) + reinterpret_cast<uint32_t>(v53)), reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax104) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax104 == 0))) {
                v105 = 0;
            } else {
                v105 = 1;
            }
            eax106 = *reinterpret_cast<unsigned char*>(&v105);
            v107 = *reinterpret_cast<unsigned char*>(&eax106);
        } else {
            eax108 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v46) & 1);
            tmp32_109 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax108) + reinterpret_cast<uint32_t>(v53));
            v107 = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(reinterpret_cast<uint1_t>(!!(reinterpret_cast<uint32_t>(tmp32_109) | static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_109) < reinterpret_cast<uint32_t>(eax108))))) + reinterpret_cast<unsigned char>(v50)) > reinterpret_cast<int32_t>(5));
        }
    } else {
        do {
            eax110 = __umoddi3(v46, v47, v13, 0);
            v111 = reinterpret_cast<void***>(v50 + reinterpret_cast<unsigned char>(eax110) * 10);
            eax112 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v111) % reinterpret_cast<unsigned char>(v13));
            v113 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax112) + reinterpret_cast<uint32_t>(eax112) + (reinterpret_cast<int32_t>(v53) >> 1));
            v48 = reinterpret_cast<void**>(0);
            eax114 = __udivdi3(v46, v47, v13, 0);
            v46 = eax114;
            v47 = v47;
            v50 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v111) / reinterpret_cast<unsigned char>(v13));
            if (reinterpret_cast<unsigned char>(v113) >= reinterpret_cast<unsigned char>(v13)) {
                if (reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(v53) + reinterpret_cast<unsigned char>(v113)) <= reinterpret_cast<unsigned char>(v13)) {
                    v115 = reinterpret_cast<void*>(2);
                } else {
                    v115 = reinterpret_cast<void*>(3);
                }
                v116 = v115;
            } else {
                v116 = reinterpret_cast<void*>(static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!(reinterpret_cast<uint32_t>(v53) + reinterpret_cast<unsigned char>(v113))))));
            }
            v53 = v116;
            ++v14;
        } while (reinterpret_cast<unsigned char>(0) <= reinterpret_cast<unsigned char>(v47) && ((reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(v47) || reinterpret_cast<unsigned char>(v13) <= reinterpret_cast<unsigned char>(v46)) && reinterpret_cast<int32_t>(v14) < reinterpret_cast<int32_t>(8)));
        if (reinterpret_cast<unsigned char>(v47) > reinterpret_cast<unsigned char>(0)) 
            goto addr_8054088_56;
        if (reinterpret_cast<unsigned char>(v47) < reinterpret_cast<unsigned char>(0)) 
            goto addr_8053fb4_71;
        if (reinterpret_cast<unsigned char>(v46) > reinterpret_cast<unsigned char>(9)) 
            goto addr_8054088_56; else 
            goto addr_8053fb4_71;
    }
    if (v107 && ((tmp32_117 = v46 + 1, cf118 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_117) < reinterpret_cast<unsigned char>(v46)), v46 = tmp32_117, v47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v47) + cf118), !!(reinterpret_cast<unsigned char>(a4) & 16)) && (!(reinterpret_cast<unsigned char>(v13) ^ reinterpret_cast<unsigned char>(v46) | static_cast<uint32_t>(reinterpret_cast<unsigned char>(v47))) && reinterpret_cast<int32_t>(v14) < reinterpret_cast<int32_t>(8)))) {
        ++v14;
        if (!(reinterpret_cast<unsigned char>(a4) & 8)) {
            v119 = v39 - 1;
            *reinterpret_cast<void***>(v119) = reinterpret_cast<void**>(48);
            v39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v119) + -reinterpret_cast<unsigned char>(v16));
            fun_804983c(v39, v15, v16, v48, v120, v121, v122, v123, v124);
        }
        v46 = reinterpret_cast<void**>(1);
        v47 = reinterpret_cast<void**>(0);
    }
    v97 = v39;
    do {
        eax125 = __umoddi3(v46, v47, 10, 0);
        --v39;
        edx126 = reinterpret_cast<uint32_t>(eax125 + 48);
        *reinterpret_cast<void***>(v39) = *reinterpret_cast<void***>(&edx126);
        eax127 = __udivdi3(v46, v47, 10, 0);
        v46 = eax127;
        v47 = v47;
    } while (reinterpret_cast<unsigned char>(v47) | reinterpret_cast<unsigned char>(v46));
    goto addr_80541eb_37;
    addr_8053fb4_71:
    if (!reinterpret_cast<int1_t>(v11 == 1)) {
        if (v11 || reinterpret_cast<int32_t>(v53) <= reinterpret_cast<int32_t>(0)) {
            v128 = 0;
        } else {
            v128 = 1;
        }
        ecx129 = *reinterpret_cast<unsigned char*>(&v128);
        v130 = *reinterpret_cast<unsigned char*>(&ecx129);
    } else {
        v130 = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(v50) & 1) + reinterpret_cast<uint32_t>(v53)) > reinterpret_cast<int32_t>(2));
    }
    if (v130 && (++v50, v53 = reinterpret_cast<void*>(0), reinterpret_cast<int1_t>(v50 == 10))) {
        tmp32_131 = v46 + 1;
        cf132 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_131) < reinterpret_cast<unsigned char>(v46));
        v46 = tmp32_131;
        v47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v47) + cf132);
        v50 = reinterpret_cast<void**>(0);
    }
    if (reinterpret_cast<unsigned char>(v47) <= reinterpret_cast<unsigned char>(0) && ((reinterpret_cast<unsigned char>(v47) < reinterpret_cast<unsigned char>(0) || reinterpret_cast<unsigned char>(v46) <= reinterpret_cast<unsigned char>(9)) && (v50 || !(reinterpret_cast<unsigned char>(a4) & 8)))) {
        v133 = v39 - 1;
        edx134 = reinterpret_cast<uint32_t>(v50 + 48);
        *reinterpret_cast<void***>(v133) = *reinterpret_cast<void***>(&edx134);
        v39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v133) + -reinterpret_cast<unsigned char>(v16));
        fun_804983c(v39, v15, v16, 0, v135, v136, v137, v138, v139);
        v53 = reinterpret_cast<void*>(0);
        v50 = reinterpret_cast<void**>(0);
        goto addr_8054088_56;
    }
}

void** mbsnwidth(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** gnu_mbswidth(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** ebp14;
    void** eax15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;

    eax15 = fun_804985c(a1, v9, v10, v11, v12, v13, ebp14, __return_address());
    eax19 = mbsnwidth(a1, eax15, a2, v16, v17, v18);
    return eax19;
}

void** getuser(void** a1);

void** format_user_or_group_width(void** a1, void** a2);

void** format_user_width(void** a1) {
    uint32_t eax2;
    void** eax3;
    void** v4;
    void** eax5;

    eax2 = numeric_ids;
    if (!*reinterpret_cast<signed char*>(&eax2)) {
        eax3 = getuser(a1);
        v4 = eax3;
    } else {
        v4 = reinterpret_cast<void**>(0);
    }
    eax5 = format_user_or_group_width(v4, a1);
    return eax5;
}

void** getgroup(void** a1);

void** format_group_width(void** a1) {
    uint32_t eax2;
    void** eax3;
    void** v4;
    void** eax5;

    eax2 = numeric_ids;
    if (!*reinterpret_cast<signed char*>(&eax2)) {
        eax3 = getgroup(a1);
        v4 = eax3;
    } else {
        v4 = reinterpret_cast<void**>(0);
    }
    eax5 = format_user_or_group_width(v4, a1);
    return eax5;
}

int32_t strlen = 0x8049862;

void** fun_804985c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto strlen;
}

void** umaxtostr(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    uint32_t edx13;
    void** eax14;

    v9 = a1;
    v10 = a2;
    v11 = a3 + 20;
    *reinterpret_cast<void***>(v11) = reinterpret_cast<void**>(0);
    do {
        --v11;
        eax12 = __umoddi3(v9, v10, 10, 0);
        edx13 = reinterpret_cast<uint32_t>(eax12 + 48);
        *reinterpret_cast<void***>(v11) = *reinterpret_cast<void***>(&edx13);
        eax14 = __udivdi3(v9, v10, 10, 0);
        v9 = eax14;
        v10 = v10;
    } while (reinterpret_cast<unsigned char>(v10) | reinterpret_cast<unsigned char>(v9));
    return v11;
}

int32_t gnu_dev_major = 0x8049a02;

void** fun_80499fc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto gnu_dev_major;
}

void** pending_dirs = reinterpret_cast<void**>(0);

void queue_directory(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;
    uint32_t eax23;
    void** edx24;

    eax6 = a3;
    *reinterpret_cast<unsigned char*>(&v7) = *reinterpret_cast<unsigned char*>(&eax6);
    eax13 = xmalloc(16, v8, v9, v10, v11, v7, v12);
    if (!a2) {
        v14 = reinterpret_cast<void**>(0);
    } else {
        eax18 = xstrdup(a2, v15, v16, v17);
        v14 = eax18;
    }
    *reinterpret_cast<void***>(eax13 + 4) = v14;
    if (!a1) {
        v19 = reinterpret_cast<void**>(0);
    } else {
        eax22 = xstrdup(a1, v20, v21, v14);
        v19 = eax22;
    }
    *reinterpret_cast<void***>(eax13) = v19;
    eax23 = *reinterpret_cast<unsigned char*>(&v7);
    *reinterpret_cast<void***>(eax13 + 8) = *reinterpret_cast<void***>(&eax23);
    edx24 = pending_dirs;
    *reinterpret_cast<void***>(eax13 + 12) = edx24;
    pending_dirs = eax13;
    return;
}

void** last_component(void** a1);

uint32_t dot_or_dotdot(void** a1);

uint32_t basename_is_dot_or_dotdot(void** a1, void** a2, void** a3) {
    void** eax4;
    uint32_t eax5;

    eax4 = last_component(a1);
    eax5 = dot_or_dotdot(eax4);
    return eax5;
}

void** quotearg_n_style(void** a1, int32_t a2, void** a3);

void** quote_n(void** a1, void** a2) {
    void** eax3;

    eax3 = quotearg_n_style(a1, 5, a2);
    return eax3;
}

void** exit_status = reinterpret_cast<void**>(0);

void** set_exit_status(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;

    eax6 = a1;
    if (!*reinterpret_cast<signed char*>(&eax6)) {
        eax6 = exit_status;
        if (!eax6) {
            exit_status = reinterpret_cast<void**>(1);
        }
    } else {
        exit_status = reinterpret_cast<void**>(2);
    }
    return eax6;
}

int32_t longjmp = 0x80498a2;

void fun_804989c(int32_t a1, int32_t a2, void** a3, void** a4, void** a5) {
    goto longjmp;
}

void initialize_ordering_vector(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** eax6;
    void** edx7;
    void** ebx8;
    uint32_t edx9;

    v5 = reinterpret_cast<void**>(0);
    while (eax6 = cwd_n_used, reinterpret_cast<unsigned char>(v5) < reinterpret_cast<unsigned char>(eax6)) {
        edx7 = sorted_file;
        ebx8 = cwd_file;
        edx9 = reinterpret_cast<unsigned char>(v5) * 8;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx7) + (reinterpret_cast<unsigned char>(v5) << 2)) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx8) + ((edx9 << 4) - edx9));
        ++v5;
    }
    return;
}

int32_t _setjmp = 0x8049802;

int32_t fun_80497fc(void** a1, void** a2) {
    goto _setjmp;
}

/* width.9028 */
void** width_9028 = reinterpret_cast<void**>(0xff);

void** fun_80495cc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** nstrftime(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** long_time_expected_width(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* ebp9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    void** edx19;
    void** v20;
    void** v21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;

    ebp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = width_9028;
    if (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(0)) {
        eax18 = fun_80495cc(reinterpret_cast<int32_t>(ebp9) + 0xfffffff4, v11, v12, v13, v14, v15, v16, v17);
        if (eax18 && (edx19 = long_time_format, eax22 = nstrftime(reinterpret_cast<int32_t>(ebp9) + 0xfffffc0b, 0x3e9, edx19, eax18, 0, 0, v20, v21), !!eax22)) {
            eax23 = mbsnwidth(reinterpret_cast<int32_t>(ebp9) + 0xfffffc0b, eax22, 0, eax18, 0, 0);
            width_9028 = eax23;
        }
        eax24 = width_9028;
        if (reinterpret_cast<signed char>(eax24) < reinterpret_cast<signed char>(0)) {
            width_9028 = reinterpret_cast<void**>(0);
        }
    }
    eax25 = width_9028;
    return eax25;
}

int32_t localtime = 0x80495d2;

void** fun_80495cc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto localtime;
}

void** strftime_case_(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** nstrftime(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** eax9;

    eax9 = strftime_case_(0, a1, a2, a3, a4, a5, a6);
    return eax9;
}

uint32_t fun_804956c();

void* fun_80496dc(void** a1, void** a2, void** a3, void** a4);

void* fun_8049a5c(void** a1, void** a2, void** a3, void** a4);

int32_t fun_80497bc(void** a1, void** a2, void** a3, void** a4);

int32_t fun_80497ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** mbsnwidth(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** v8;
    void** v9;
    void** v10;
    uint32_t eax11;
    uint32_t eax12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void*** eax17;
    void* eax18;
    uint32_t eax19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void*** eax24;
    void* eax25;
    uint32_t eax26;
    uint32_t eax27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void* eax34;
    void* v35;
    void** v36;
    void* eax37;
    void** v38;
    int32_t eax39;
    void** v40;
    void** v41;
    int32_t eax42;
    void** v43;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = a1;
    v9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<unsigned char>(a2));
    v10 = reinterpret_cast<void**>(0);
    eax11 = fun_804956c();
    if (eax11 <= 1) {
        while (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(v9)) {
            eax12 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v8));
            ++v8;
            eax17 = fun_80497ac(v13, v14, v15, v16);
            eax18 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax12)));
            eax19 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(*eax17) + (reinterpret_cast<uint32_t>(eax18) + reinterpret_cast<uint32_t>(eax18)));
            if (!(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax19)) & 0x4000)) {
                if (reinterpret_cast<unsigned char>(a3) & 2) 
                    goto addr_8051731_5;
                eax24 = fun_80497ac(v20, v21, v22, v23);
                eax25 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax12)));
                eax26 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(*eax24) + (reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(eax25)));
                v10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v10) + static_cast<unsigned char>(reinterpret_cast<uint1_t>((static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax26)) & 2) == 0)));
            } else {
                ++v10;
            }
        }
    } else {
        while (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(v9)) {
            eax27 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v8));
            v28 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax27)));
            if (reinterpret_cast<signed char>(v28) <= reinterpret_cast<signed char>(95)) {
                if (reinterpret_cast<signed char>(v28) >= reinterpret_cast<signed char>(65)) 
                    goto addr_80515a4_12;
                if (reinterpret_cast<signed char>(v28) < reinterpret_cast<signed char>(32)) 
                    goto addr_80515b1_14;
                if (reinterpret_cast<signed char>(v28) <= reinterpret_cast<signed char>(35)) 
                    goto addr_80515a4_12;
                if (reinterpret_cast<uint32_t>(v28 - 37) > 26) 
                    goto addr_80515b1_14;
                goto addr_80515a4_12;
            }
            if (reinterpret_cast<uint32_t>(v28 - 97) > 29) {
                addr_80515b1_14:
                fun_804964c(reinterpret_cast<int32_t>(ebp7) + 0xffffffdc, 0, 8, v29, v28, v30, v31);
            } else {
                addr_80515a4_12:
                ++v8;
                ++v10;
                continue;
            }
            do {
                v29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffdc);
                v32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v9) - reinterpret_cast<unsigned char>(v8));
                v33 = v8;
                eax34 = fun_80496dc(reinterpret_cast<int32_t>(ebp7) + 0xffffffec, v33, v32, v29);
                v35 = eax34;
                if (reinterpret_cast<int1_t>(v35 == 0xffffffff)) 
                    break;
                if (reinterpret_cast<int1_t>(v35 == 0xfffffffe)) 
                    goto addr_8051629_21;
                if (!v35) {
                    v35 = reinterpret_cast<void*>(1);
                }
                eax37 = fun_8049a5c(v36, v33, v32, v29);
                if (reinterpret_cast<int32_t>(eax37) < reinterpret_cast<int32_t>(0)) {
                    if (reinterpret_cast<unsigned char>(a3) & 2) 
                        goto addr_8051696_26;
                    eax39 = fun_80497bc(v38, v33, v32, v29);
                    v10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v10) + static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax39 == 0)));
                } else {
                    v10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<uint32_t>(eax37));
                }
                v8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v8) + reinterpret_cast<uint32_t>(v35));
                eax42 = fun_80497ec(reinterpret_cast<int32_t>(ebp7) + 0xffffffdc, v33, v32, v29, v28, v40, v41);
            } while (!eax42);
            continue;
            if (reinterpret_cast<unsigned char>(a3) & 1) 
                goto addr_8051617_31;
            ++v8;
            ++v10;
            continue;
            addr_8051629_21:
            if (reinterpret_cast<unsigned char>(a3) & 1) 
                goto addr_805163f_33;
            v8 = v9;
            ++v10;
        }
        goto addr_80516c7_35;
    }
    v43 = v10;
    addr_8051748_37:
    return v43;
    addr_8051731_5:
    v43 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8051748_37;
    addr_80516c7_35:
    v43 = v10;
    goto addr_8051748_37;
    addr_8051696_26:
    v43 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8051748_37;
    addr_8051617_31:
    v43 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8051748_37;
    addr_805163f_33:
    v43 = reinterpret_cast<void**>(0xffffffff);
    goto addr_8051748_37;
}

int32_t fun_80498fc(int32_t a1, void* a2);

void fun_80496fc(void* a1, int32_t a2);

void** current_time = reinterpret_cast<void**>(0);

void** current_time_ns = reinterpret_cast<void**>(0xff);

void get_current_time(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* ebp9;
    int32_t eax10;
    void** v11;
    int32_t v12;
    void** v13;
    void** v14;

    ebp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = fun_80498fc(0, reinterpret_cast<int32_t>(ebp9) - 8);
    if (eax10) {
        fun_80496fc(reinterpret_cast<int32_t>(ebp9) - 16, 0);
        current_time = v11;
        current_time_ns = reinterpret_cast<void**>(v12 * 0x3e8 + 0x3e7);
    } else {
        current_time = v13;
        current_time_ns = v14;
    }
    return;
}

void strmode(void** a1, void** a2);

void filemodestring(void** a1, void** a2) {
    void** edx3;

    edx3 = *reinterpret_cast<void***>(a1 + 16);
    strmode(edx3, a2);
    return;
}

void format_user_or_group(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void format_user(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** eax9;
    void** v10;
    void** v11;
    uint32_t eax12;
    void** eax13;
    void** v14;
    void** ebp15;

    eax9 = a3;
    *reinterpret_cast<signed char*>(&v10) = *reinterpret_cast<signed char*>(&eax9);
    if (!*reinterpret_cast<signed char*>(&v10)) {
        v11 = reinterpret_cast<void**>(0x805f99e);
    } else {
        eax12 = numeric_ids;
        if (!*reinterpret_cast<signed char*>(&eax12)) {
            eax13 = getuser(a1);
            v14 = eax13;
        } else {
            v14 = reinterpret_cast<void**>(0);
        }
        v11 = v14;
    }
    format_user_or_group(v11, a1, a2, v11, v14, v10, ebp15, __return_address());
    return;
}

void format_group(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** eax9;
    void** v10;
    void** v11;
    uint32_t eax12;
    void** eax13;
    void** v14;
    void** ebp15;

    eax9 = a3;
    *reinterpret_cast<signed char*>(&v10) = *reinterpret_cast<signed char*>(&eax9);
    if (!*reinterpret_cast<signed char*>(&v10)) {
        v11 = reinterpret_cast<void**>(0x805f99e);
    } else {
        eax12 = numeric_ids;
        if (!*reinterpret_cast<signed char*>(&eax12)) {
            eax13 = getgroup(a1);
            v14 = eax13;
        } else {
            v14 = reinterpret_cast<void**>(0);
        }
        v11 = v14;
    }
    format_user_or_group(v11, a1, a2, v11, v14, v10, ebp15, __return_address());
    return;
}

void format_user_or_group(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** ebp16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void* v25;
    void* v26;
    void** eax27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** eax41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    unsigned char al47;
    uint32_t eax48;

    if (!a1) {
        fun_80498ac(0x805f998, a3, a2, v9, v10, v11, v12, v13, v14, v15, ebp16);
        v17 = a3;
    } else {
        eax24 = gnu_mbswidth(a1, 0, v18, v19, v20, v21, v22, v23);
        v25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(eax24));
        v26 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(~(reinterpret_cast<int32_t>(v25) >> 31)) & reinterpret_cast<uint32_t>(v25));
        eax27 = stdout;
        v28 = eax27;
        fun_804955c(a1, v28, v29, v30, v31, v32, v33, v34);
        eax41 = fun_804985c(a1, v28, v35, v36, v37, v38, v39, v40);
        v17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax41) + reinterpret_cast<uint32_t>(v26));
        do {
            fun_8049abc(32, v28, v42, v43, v44, v45, v46, v17);
            al47 = reinterpret_cast<uint1_t>(!!v26);
            v26 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v26) - 1);
        } while (al47);
    }
    eax48 = dired_pos;
    dired_pos = eax48 + reinterpret_cast<unsigned char>(v17) + 1;
    return;
}

int32_t gnu_dev_minor = 0x8049632;

void** fun_804962c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto gnu_dev_minor;
}

int32_t sprintf = 0x8049502;

void fun_80494fc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto sprintf;
}

void** unsigned_file_size(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    return a1;
}

void** __moddi3(void** a1, void** a2, void** a3, void** a4);

void** __divdi3(void** a1, void** a2, void** a3, void** a4);

void** imaxtostr(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    uint32_t edx13;
    void** eax14;
    void** eax15;
    void** edx16;
    int32_t eax17;
    int32_t edx18;
    void** eax19;

    v9 = a1;
    v10 = a2;
    v11 = a3 + 20;
    *reinterpret_cast<void***>(v11) = reinterpret_cast<void**>(0);
    if (reinterpret_cast<signed char>(v10) >= reinterpret_cast<signed char>(0)) {
        do {
            --v11;
            eax12 = __moddi3(v9, v10, 10, 0);
            edx13 = reinterpret_cast<uint32_t>(eax12 + 48);
            *reinterpret_cast<void***>(v11) = *reinterpret_cast<void***>(&edx13);
            eax14 = __divdi3(v9, v10, 10, 0);
            v9 = eax14;
            v10 = v10;
        } while (reinterpret_cast<unsigned char>(v10) | reinterpret_cast<unsigned char>(v9));
    } else {
        do {
            --v11;
            eax15 = __moddi3(v9, v10, 10, 0);
            edx16 = eax15;
            eax17 = 48;
            *reinterpret_cast<signed char*>(&eax17) = reinterpret_cast<signed char>(48 - *reinterpret_cast<signed char*>(&edx16));
            edx18 = eax17;
            *reinterpret_cast<void***>(v11) = *reinterpret_cast<void***>(&edx18);
            eax19 = __divdi3(v9, v10, 10, 0);
            v9 = eax19;
            v10 = v10;
        } while (reinterpret_cast<unsigned char>(v10) | reinterpret_cast<unsigned char>(v9));
        --v11;
        *reinterpret_cast<void***>(v11) = reinterpret_cast<void**>(45);
    }
    return v11;
}

void** print_color_indicator(void** a1, void** a2, void** a3, void** a4, void** a5);

void** quote_name(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void print_name_with_quoting(void** a1, void** a2, void** a3, uint32_t a4, void** a5, void** a6, void** a7, void** a8) {
    uint32_t eax9;
    void** v10;
    uint32_t eax11;
    void** v12;
    void** v13;
    void** v14;
    uint32_t eax15;
    void** v16;
    void** eax17;
    void** v18;
    void** eax19;
    void** edx20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    uint32_t eax25;
    uint32_t eax26;
    void** eax27;
    uint32_t eax28;

    eax9 = a4;
    *reinterpret_cast<unsigned char*>(&v10) = *reinterpret_cast<unsigned char*>(&eax9);
    eax11 = print_with_color;
    if (*reinterpret_cast<signed char*>(&eax11)) {
        v12 = a5;
        v13 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v10)));
        v14 = a3;
        print_color_indicator(a1, a2, v14, v13, v12);
    }
    if (a6 && (eax15 = dired, !!*reinterpret_cast<signed char*>(&eax15))) {
        v16 = a6;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v16 + 12) + 4) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v16 + 16))) {
            fun_804973c(v16, 4, v14, v13, v12, v10);
        }
        eax17 = *reinterpret_cast<void***>(v16 + 12);
        fun_804983c(eax17, 0x8064594, 4, v13, v12, v10, v16, 4, v18);
        *reinterpret_cast<void***>(v16 + 12) = *reinterpret_cast<void***>(v16 + 12) + 4;
    }
    eax19 = filename_quoting_options;
    edx20 = stdout;
    v21 = eax19;
    v22 = a1;
    v23 = edx20;
    eax24 = quote_name(v23, v22, v21, 0, v12, v10, v16, 4);
    eax25 = dired_pos;
    dired_pos = reinterpret_cast<unsigned char>(eax24) + eax25;
    if (a6 && (eax26 = dired, !!*reinterpret_cast<signed char*>(&eax26))) {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a6 + 12) + 4) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a6 + 16))) {
            fun_804973c(a6, 4, v21, 0, v12, v10);
        }
        eax27 = *reinterpret_cast<void***>(a6 + 12);
        v21 = reinterpret_cast<void**>(4);
        v22 = reinterpret_cast<void**>(0x8064594);
        v23 = eax27;
        fun_804983c(v23, 0x8064594, 4, 0, v12, v10, v16, 4, a6);
        *reinterpret_cast<void***>(a6 + 12) = *reinterpret_cast<void***>(a6 + 12) + 4;
    }
    eax28 = print_with_color;
    if (*reinterpret_cast<signed char*>(&eax28)) {
        process_signals(v23, v22, v21, 0, v12);
        prep_non_filename_text(v23, v22, v21, 0, v12);
    }
    return;
}

signed char get_type_indicator(uint32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void print_type_indicator(uint32_t a1, void** a2, void** a3, uint32_t a4, void** a5, void** a6, void** a7, void** a8) {
    uint32_t eax9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    signed char al15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    uint32_t eax20;

    eax9 = a1;
    *reinterpret_cast<unsigned char*>(&v10) = *reinterpret_cast<unsigned char*>(&eax9);
    al15 = get_type_indicator(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v10)), a2, a3, v11, v12, v10, v13, v14);
    if (al15) {
        fun_8049abc(static_cast<int32_t>(al15), a2, a3, v16, v17, v10, v18, v19);
        eax20 = dired_pos;
        dired_pos = eax20 + 1;
    }
    return;
}

int32_t __ctype_get_mb_cur_max = 0x8049572;

uint32_t fun_804956c() {
    goto __ctype_get_mb_cur_max;
}

int32_t wcwidth = 0x8049a62;

void* fun_8049a5c(void** a1, void** a2, void** a3, void** a4) {
    goto wcwidth;
}

unsigned char to_uchar(void** a1) {
    void** eax2;
    uint32_t eax3;

    eax2 = a1;
    eax3 = *reinterpret_cast<unsigned char*>(&eax2);
    return *reinterpret_cast<unsigned char*>(&eax3);
}

int32_t g806423c = 0;

int32_t g8064244 = 0;

void** print_color_indicator(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    void** v7;
    int32_t eax8;
    uint32_t eax9;
    void** v10;
    int32_t eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    void* v20;
    void** eax21;
    void** ecx22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    int32_t eax28;
    void** v29;
    void** eax30;

    eax6 = a4;
    *reinterpret_cast<unsigned char*>(&v7) = *reinterpret_cast<unsigned char*>(&eax6);
    if (!reinterpret_cast<int1_t>(a3 == 0xffffffff) || (eax8 = g806423c, eax8 == 0)) {
        eax9 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v7)) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax9)) {
            if ((reinterpret_cast<unsigned char>(a2) & 0xf000) != 0x8000) {
                if ((reinterpret_cast<unsigned char>(a2) & 0xf000) != 0x4000) {
                    if ((reinterpret_cast<unsigned char>(a2) & 0xf000) != 0xa000) {
                        if ((reinterpret_cast<unsigned char>(a2) & 0xf000) != 0x1000) {
                            if ((reinterpret_cast<unsigned char>(a2) & 0xf000) != 0xc000) {
                                if ((reinterpret_cast<unsigned char>(a2) & 0xf000) != 0x6000) {
                                    if ((reinterpret_cast<unsigned char>(a2) & 0xf000) != 0x2000) {
                                        v10 = reinterpret_cast<void**>(12);
                                    } else {
                                        v10 = reinterpret_cast<void**>(10);
                                    }
                                } else {
                                    v10 = reinterpret_cast<void**>(9);
                                }
                            } else {
                                v10 = reinterpret_cast<void**>(8);
                            }
                        } else {
                            v10 = reinterpret_cast<void**>(7);
                        }
                    } else {
                        if (a3 || (eax11 = g8064244, eax11 == 0)) {
                            v12 = reinterpret_cast<void**>(6);
                        } else {
                            v12 = reinterpret_cast<void**>(12);
                        }
                        v10 = v12;
                    }
                } else {
                    if (!(reinterpret_cast<unsigned char>(a2) & 0x200) || !(reinterpret_cast<unsigned char>(a2) & 2)) {
                        if (!(reinterpret_cast<unsigned char>(a2) & 2)) {
                            if (!(reinterpret_cast<unsigned char>(a2) & 0x200)) {
                                v10 = reinterpret_cast<void**>(5);
                            } else {
                                v10 = reinterpret_cast<void**>(17);
                            }
                        } else {
                            v10 = reinterpret_cast<void**>(18);
                        }
                    } else {
                        v10 = reinterpret_cast<void**>(19);
                    }
                }
            } else {
                v10 = reinterpret_cast<void**>(4);
                if (!(reinterpret_cast<unsigned char>(a2) & 0x800)) {
                    if (!(reinterpret_cast<unsigned char>(a2) & 0x400)) {
                        if (reinterpret_cast<unsigned char>(a2) & 73) {
                            v10 = reinterpret_cast<void**>(13);
                        }
                    } else {
                        v10 = reinterpret_cast<void**>(16);
                    }
                } else {
                    v10 = reinterpret_cast<void**>(15);
                }
            }
        } else {
            v10 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a5) * 4 + 0x80643a0);
        }
    } else {
        v10 = reinterpret_cast<void**>(11);
    }
    v13 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<int1_t>(v10 == 4)) {
        eax18 = fun_804985c(a1, v14, v15, v12, v16, v7, v17, v10);
        v19 = eax18;
        v20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v19));
        eax21 = color_ext_list;
        v13 = eax21;
        while (v13 && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13)) > reinterpret_cast<unsigned char>(v19) || (ecx22 = *reinterpret_cast<void***>(v13 + 4), eax23 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13)) + reinterpret_cast<uint32_t>(v20)), v24 = *reinterpret_cast<void***>(v13), v25 = ecx22, eax28 = fun_8049a1c(eax23, v25, v24, v12, v26, v7, v27), !!eax28))) {
            v13 = *reinterpret_cast<void***>(v13 + 16);
        }
    }
    put_indicator(0x80641e0, v25, v24);
    if (!v13) {
        v29 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(v10) << 3) + 0x80641e0);
    } else {
        v29 = v13 + 8;
    }
    put_indicator(v29, v25, v24);
    eax30 = put_indicator(0x80641e8, v25, v24);
    return eax30;
}

void** put_indicator(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebp6;
    void** v7;
    void** eax8;
    void** v9;
    uint32_t eax10;
    void** v11;
    void** v12;
    void** v13;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ebp6;
    v7 = *reinterpret_cast<void***>(a1 + 4);
    eax8 = *reinterpret_cast<void***>(a1);
    v9 = eax8;
    while (v9) {
        eax10 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7));
        ++v7;
        eax8 = fun_8049abc(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax10)), v11, v12, v13, v9, v7, v5, v4);
        --v9;
    }
    return eax8;
}

signed char get_type_indicator(uint32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    uint32_t eax9;
    unsigned char v10;
    int32_t v11;
    uint32_t eax12;
    unsigned char v13;
    uint32_t eax14;
    unsigned char v15;
    unsigned char v16;
    unsigned char v17;
    unsigned char v18;
    uint32_t eax19;
    uint32_t eax20;
    uint32_t eax21;

    eax9 = a1;
    if (!*reinterpret_cast<unsigned char*>(&eax9)) {
        v10 = reinterpret_cast<uint1_t>(a3 == 5);
    } else {
        v10 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(a2) & 0xf000) == 0x8000);
    }
    if (!v10) {
        if (!*reinterpret_cast<unsigned char*>(&eax9)) {
            if (a3 == 3 || reinterpret_cast<int1_t>(a3 == 9)) {
                v11 = 1;
            } else {
                v11 = 0;
            }
            eax12 = *reinterpret_cast<unsigned char*>(&v11);
            v13 = *reinterpret_cast<unsigned char*>(&eax12);
        } else {
            v13 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(a2) & 0xf000) == 0x4000);
        }
        if (!v13) {
            eax14 = indicator_style;
            if (eax14 != 1) {
                if (!*reinterpret_cast<unsigned char*>(&eax9)) {
                    v15 = reinterpret_cast<uint1_t>(a3 == 6);
                } else {
                    v15 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(a2) & 0xf000) == 0xa000);
                }
                if (!v15) {
                    if (!*reinterpret_cast<unsigned char*>(&eax9)) {
                        v16 = reinterpret_cast<uint1_t>(a3 == 1);
                    } else {
                        v16 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(a2) & 0xf000) == 0x1000);
                    }
                    if (!v16) {
                        if (!*reinterpret_cast<unsigned char*>(&eax9)) {
                            v17 = reinterpret_cast<uint1_t>(a3 == 7);
                        } else {
                            v17 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(a2) & 0xf000) == 0xc000);
                        }
                        if (!v17) {
                            v18 = 0;
                        } else {
                            v18 = 61;
                        }
                    } else {
                        v18 = 0x7c;
                    }
                } else {
                    v18 = 64;
                }
            } else {
                v18 = 0;
            }
        } else {
            v18 = 47;
        }
    } else {
        eax19 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax9)) ^ 1;
        if (*reinterpret_cast<signed char*>(&eax19) || ((eax20 = indicator_style, eax20 != 3) || !(reinterpret_cast<unsigned char>(a2) & 73))) {
            v18 = 0;
        } else {
            v18 = 42;
        }
    }
    eax21 = v18;
    return *reinterpret_cast<signed char*>(&eax21);
}

void* length_of_file_name_and_frills(void** a1, void** a2) {
    void* ebp3;
    void** v4;
    uint32_t eax5;
    void** eax6;
    void** eax7;
    void** v8;
    void** edx9;
    void** ecx10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    uint32_t eax25;
    void** eax26;
    void** eax27;
    void** v28;
    void** ecx29;
    void** ebx30;
    void** eax31;
    void** esi32;
    void** edi33;
    void** v34;
    void** v35;
    void** v36;
    void** eax37;
    void** eax38;
    uint32_t eax39;
    void** eax40;
    void** eax41;
    void** v42;
    void** v43;
    void** eax44;
    void** edx45;
    void** ecx46;
    void** v47;
    void* v48;
    void* v49;
    uint32_t eax50;
    void** edx51;
    uint32_t eax52;
    void** v53;
    signed char al54;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v4 = reinterpret_cast<void**>(0);
    eax5 = print_inode;
    if (*reinterpret_cast<signed char*>(&eax5)) {
        eax6 = format;
        if (!reinterpret_cast<int1_t>(eax6 == 4)) {
            eax7 = inode_number_width;
            v8 = eax7 + 1;
        } else {
            edx9 = *reinterpret_cast<void***>(a1 + 96);
            ecx10 = *reinterpret_cast<void***>(a1 + 100);
            v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffd5c);
            v12 = ecx10;
            eax18 = umaxtostr(edx9, v12, v11, v13, v14, v15, v16, v17);
            eax24 = fun_804985c(eax18, v12, v11, v19, v20, v21, v22, v23);
            v8 = eax24 + 1;
        }
        v4 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(v8)));
    }
    eax25 = print_block_size;
    if (*reinterpret_cast<signed char*>(&eax25)) {
        eax26 = format;
        if (!reinterpret_cast<int1_t>(eax26 == 4)) {
            eax27 = block_size_width;
            v28 = eax27 + 1;
        } else {
            ecx29 = output_block_size;
            ebx30 = g80644ac;
            eax31 = human_output_opts;
            esi32 = *reinterpret_cast<void***>(a1 + 64);
            edi33 = *reinterpret_cast<void***>(a1 + 68);
            v34 = ecx29;
            v35 = ebx30;
            v36 = eax31;
            v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xfffffd5c);
            v12 = edi33;
            eax37 = human_readable(esi32, v12, v11, v36, 0x200, 0, v34, v35);
            eax38 = fun_804985c(eax37, v12, v11, v36, 0x200, 0, v34, v35);
            v28 = eax38 + 1;
        }
        v4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v4) + reinterpret_cast<unsigned char>(v28));
    }
    eax39 = print_scontext;
    if (*reinterpret_cast<signed char*>(&eax39)) {
        eax40 = format;
        if (!reinterpret_cast<int1_t>(eax40 == 4)) {
            eax41 = scontext_width;
            v42 = eax41 + 1;
        } else {
            v43 = *reinterpret_cast<void***>(a1 + 0x70);
            eax44 = fun_804985c(v43, v12, v11, v36, 0x200, 0, v34, v35);
            v42 = eax44 + 1;
        }
        v4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v4) + reinterpret_cast<unsigned char>(v42));
    }
    edx45 = filename_quoting_options;
    ecx46 = *reinterpret_cast<void***>(a1);
    v47 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffe8);
    quote_name(0, ecx46, edx45, v47, 0x200, 0, v34, v35);
    v48 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v4) + reinterpret_cast<uint32_t>(v49));
    eax50 = indicator_style;
    if (eax50) {
        edx51 = *reinterpret_cast<void***>(a1 + 24);
        eax52 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
        v53 = *reinterpret_cast<void***>(a1 + 0x68);
        al54 = get_type_indicator(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax52)), edx51, v53, v47, 0x200, 0, v34, v35);
        v48 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v48) + static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!al54)));
    }
    return v48;
}

void** calculate_columns(int32_t a1);

void** column_info = reinterpret_cast<void**>(0);

struct s9 {
    signed char[8] pad8;
    void** f8;
};

void indent(void** a1, void** a2);

void** print_many_per_line() {
    void** eax1;
    void** ecx2;
    struct s9* v3;
    void** eax4;
    void** eax5;
    void** v6;
    void** v7;
    void** v8;
    int32_t v9;
    void** v10;
    void* v11;
    void** edx12;
    void** v13;
    void** v14;
    void* eax15;
    void* v16;
    void** eax17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;

    eax1 = calculate_columns(1);
    ecx2 = column_info;
    v3 = reinterpret_cast<struct s9*>(reinterpret_cast<unsigned char>(ecx2) + ((reinterpret_cast<unsigned char>(eax1) + reinterpret_cast<unsigned char>(eax1) + reinterpret_cast<unsigned char>(eax1) << 2) - 12));
    eax4 = cwd_n_used;
    eax5 = cwd_n_used;
    v6 = eax5;
    v7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax4) / reinterpret_cast<unsigned char>(eax1) + static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!(reinterpret_cast<unsigned char>(v6) % reinterpret_cast<unsigned char>(eax1)))));
    v8 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(v7)) {
        v9 = 0;
        v10 = v8;
        v11 = reinterpret_cast<void*>(0);
        while (edx12 = sorted_file, v13 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx12) + (reinterpret_cast<unsigned char>(v10) << 2)), eax15 = length_of_file_name_and_frills(v13, v14), v16 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v3->f8) + (v9 << 2)), ++v9, print_file_name_and_frills(v13, v14), v10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(v7)), eax17 = cwd_n_used, reinterpret_cast<unsigned char>(v10) < reinterpret_cast<unsigned char>(eax17)) {
            v14 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v11) + reinterpret_cast<uint32_t>(v16));
            indent(reinterpret_cast<uint32_t>(v11) + reinterpret_cast<uint32_t>(eax15), v14);
            v11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v11) + reinterpret_cast<uint32_t>(v16));
        }
        fun_8049abc(10, v14, v18, v6, v19, v20, v21, v22);
        ++v8;
    }
    return v8;
}

void indent(void** a1, void** a2) {
    void* eax3;
    void* eax4;
    void** v5;
    void* ebx6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void* ecx18;
    void* edx19;

    while (reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(a2)) {
        eax3 = tabsize;
        if (!eax3 || (eax4 = tabsize, v5 = a1 + 1, ebx6 = tabsize, v7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v5) / reinterpret_cast<uint32_t>(ebx6)), reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a2) / reinterpret_cast<uint32_t>(eax4)) <= reinterpret_cast<unsigned char>(v7))) {
            fun_8049abc(32, v8, v9, v10, v5, v7, v11, v12);
            ++a1;
        } else {
            fun_8049abc(9, v13, v14, v15, v5, v7, v16, v17);
            ecx18 = tabsize;
            edx19 = tabsize;
            v7 = a1;
            a1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) + (reinterpret_cast<uint32_t>(ecx18) - reinterpret_cast<unsigned char>(v7) % reinterpret_cast<uint32_t>(edx19)));
        }
    }
    return;
}

struct s10 {
    signed char[8] pad8;
    void** f8;
};

void** print_horizontal() {
    void** v1;
    void** eax2;
    void** v3;
    void** ecx4;
    struct s10* v5;
    void** eax6;
    void** v7;
    void** v8;
    void* eax9;
    void* v10;
    void* v11;
    void** v12;
    void** v13;
    void** eax14;
    void** v15;
    uint32_t v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** edx21;
    void** v22;
    void* eax23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;

    v1 = reinterpret_cast<void**>(0);
    eax2 = calculate_columns(0);
    v3 = eax2;
    ecx4 = column_info;
    v5 = reinterpret_cast<struct s10*>(reinterpret_cast<unsigned char>(ecx4) + ((reinterpret_cast<unsigned char>(v3) + reinterpret_cast<unsigned char>(v3) + reinterpret_cast<unsigned char>(v3) << 2) - 12));
    eax6 = sorted_file;
    v7 = *reinterpret_cast<void***>(eax6);
    eax9 = length_of_file_name_and_frills(v7, v8);
    v10 = eax9;
    v11 = *v5->f8;
    print_file_name_and_frills(v7, v12);
    v13 = reinterpret_cast<void**>(1);
    while (eax14 = cwd_n_used, reinterpret_cast<unsigned char>(v13) < reinterpret_cast<unsigned char>(eax14)) {
        v15 = v13;
        v16 = reinterpret_cast<unsigned char>(v15) % reinterpret_cast<unsigned char>(v3);
        if (v16) {
            v17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v1) + reinterpret_cast<uint32_t>(v11));
            indent(reinterpret_cast<unsigned char>(v1) + reinterpret_cast<uint32_t>(v10), v17);
            v1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v1) + reinterpret_cast<uint32_t>(v11));
        } else {
            fun_8049abc(10, v17, v18, v19, v15, v20, v13, v1);
            v1 = reinterpret_cast<void**>(0);
        }
        edx21 = sorted_file;
        v22 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx21) + (reinterpret_cast<unsigned char>(v13) << 2));
        print_file_name_and_frills(v22, v17);
        eax23 = length_of_file_name_and_frills(v22, v17);
        v10 = eax23;
        v11 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v5->f8) + (v16 << 2));
        ++v13;
    }
    eax27 = fun_8049abc(10, v17, v24, v25, v15, v26, v13, v1);
    return eax27;
}

void** print_with_commas() {
    void** v1;
    void** v2;
    void** eax3;
    void** edx4;
    void** v5;
    void** v6;
    void* eax7;
    void** eax8;
    signed char v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;

    v1 = reinterpret_cast<void**>(0);
    v2 = reinterpret_cast<void**>(0);
    while (eax3 = cwd_n_used, reinterpret_cast<unsigned char>(v2) < reinterpret_cast<unsigned char>(eax3)) {
        edx4 = sorted_file;
        v5 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx4) + (reinterpret_cast<unsigned char>(v2) << 2));
        eax7 = length_of_file_name_and_frills(v5, v6);
        if (v2) {
            eax8 = line_length;
            if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v1) + reinterpret_cast<uint32_t>(eax7) + 2) >= reinterpret_cast<unsigned char>(eax8)) {
                v1 = reinterpret_cast<void**>(0);
                v9 = 10;
            } else {
                v1 = v1 + 2;
                v9 = 32;
            }
            fun_8049abc(44, v10, v11, v12, v13, v2, v1, v5);
            fun_8049abc(static_cast<int32_t>(v9), v14, v15, v16, v17, v2, v1, v5);
        }
        print_file_name_and_frills(v5, v18);
        v1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v1) + reinterpret_cast<uint32_t>(eax7));
        ++v2;
    }
    eax23 = fun_8049abc(10, v19, v20, v21, v22, v2, v1, v5);
    return eax23;
}

struct s11 {
    signed char[1] pad1;
    unsigned char f1;
};

void attach() {
    unsigned char* v1;
    unsigned char* v2;
    uint32_t eax3;
    unsigned char* v4;
    uint32_t eax5;
    uint32_t edx6;
    signed char* v7;
    uint32_t eax8;
    struct s11* v9;
    uint32_t eax10;
    unsigned char* v11;
    uint32_t edx12;
    unsigned char* v13;
    uint32_t eax14;

    v1 = v2;
    eax3 = *v4;
    if (*reinterpret_cast<signed char*>(&eax3) != 46) {
        addr_8050be7_2:
        while (eax5 = *v1, !!*reinterpret_cast<signed char*>(&eax5)) {
            edx6 = *v1;
            *v7 = *reinterpret_cast<signed char*>(&edx6);
            ++v7;
            ++v1;
        }
    } else {
        eax8 = v9->f1;
        if (!*reinterpret_cast<signed char*>(&eax8)) {
            addr_8050c25_5:
            while (eax10 = *v11, !!*reinterpret_cast<signed char*>(&eax10)) {
                edx12 = *v11;
                *v7 = *reinterpret_cast<signed char*>(&edx12);
                ++v7;
                ++v11;
            }
            goto addr_8050c2f_7;
        } else {
            goto addr_8050be7_2;
        }
    }
    if (reinterpret_cast<uint32_t>(v1) > reinterpret_cast<uint32_t>(v13) && (eax14 = *(v1 - 1), *reinterpret_cast<signed char*>(&eax14) != 47)) {
        *v7 = 47;
        ++v7;
        goto addr_8050c25_5;
    }
    addr_8050c2f_7:
    *v7 = 0;
    return;
}

/* column_info_alloc.10187 */
void** column_info_alloc_10187 = reinterpret_cast<void**>(0);

void init_column_info() {
    void** eax1;
    void** edx2;
    void** v3;
    void** v4;
    void** eax5;
    void** eax6;
    void** eax7;
    void** edx8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** eax14;
    void** v15;
    void** edx16;
    void** v17;
    void** eax18;
    void** edx19;
    void* v20;
    void** eax21;
    uint32_t v22;
    void** v23;
    void** v24;
    void** eax25;
    void** v26;
    void** eax27;
    void** v28;
    void** ecx29;
    void** v30;
    void** ecx31;
    void** ecx32;
    void** edx33;
    void** v34;
    void** ecx35;

    eax1 = cwd_n_used;
    edx2 = max_idx;
    v3 = eax1;
    if (reinterpret_cast<unsigned char>(v3) > reinterpret_cast<unsigned char>(edx2)) {
        v3 = edx2;
    }
    v4 = v3;
    eax5 = column_info_alloc_10187;
    if (reinterpret_cast<unsigned char>(eax5) < reinterpret_cast<unsigned char>(v4)) {
        eax6 = max_idx;
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax6) >> 1) <= reinterpret_cast<unsigned char>(v4)) {
            eax7 = max_idx;
            edx8 = column_info;
            v9 = reinterpret_cast<void**>(12);
            v10 = eax7;
            v11 = edx8;
            eax13 = xnrealloc(v11, v10, 12, v12);
            column_info = eax13;
            eax14 = max_idx;
            v15 = eax14;
        } else {
            edx16 = column_info;
            v9 = reinterpret_cast<void**>(24);
            v10 = v4;
            v11 = edx16;
            eax18 = xnrealloc(v11, v10, 24, v17);
            column_info = eax18;
            v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v4) + reinterpret_cast<unsigned char>(v4));
        }
        edx19 = column_info_alloc_10187;
        v20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v15) - reinterpret_cast<unsigned char>(edx19));
        eax21 = column_info_alloc_10187;
        v22 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(v15) + 1) * reinterpret_cast<uint32_t>(v20);
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(v15) + 1) < reinterpret_cast<unsigned char>(v15) || v22 / reinterpret_cast<uint32_t>(v20) != reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(v15) + 1) {
            xalloc_die(v11, v10, v9, v23, v3);
        }
        eax25 = xnmalloc(v22 >> 1, 4, v9, v24, v3);
        v26 = eax25;
        eax27 = column_info_alloc_10187;
        v28 = eax27;
        while (reinterpret_cast<unsigned char>(v28) < reinterpret_cast<unsigned char>(v15)) {
            ecx29 = column_info;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx29) + (reinterpret_cast<unsigned char>(v28) + reinterpret_cast<unsigned char>(v28) + reinterpret_cast<unsigned char>(v28) << 2) + 8) = v26;
            v26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v26) + (reinterpret_cast<unsigned char>(v28 + 1) << 2));
            ++v28;
        }
        column_info_alloc_10187 = v15;
    }
    v30 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<unsigned char>(v30) < reinterpret_cast<unsigned char>(v4)) {
        ecx31 = column_info;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx31) + (reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(v30) << 2)) = reinterpret_cast<void**>(1);
        ecx32 = column_info;
        edx33 = v30 + 1;
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx32) + (reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(v30) << 2) + 4) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx33) + reinterpret_cast<unsigned char>(edx33) + reinterpret_cast<unsigned char>(edx33));
        v34 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<unsigned char>(v34) <= reinterpret_cast<unsigned char>(v30)) {
            ecx35 = column_info;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<int32_t**>(reinterpret_cast<unsigned char>(ecx35) + (reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(v30) << 2) + 8)) + (reinterpret_cast<unsigned char>(v34) << 2)) = 3;
            ++v34;
        }
        ++v30;
    }
    return;
}

void** calculate_columns(int32_t a1) {
    int32_t eax2;
    signed char v3;
    void** eax4;
    void** edx5;
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** edx10;
    void** v11;
    void** v12;
    void* eax13;
    void* v14;
    void** v15;
    void** ecx16;
    uint32_t eax17;
    void** v18;
    void** eax19;
    int32_t v20;
    void** ecx21;
    void** ecx22;
    void** ecx23;
    void** ecx24;
    void** ecx25;
    void** ecx26;
    void** ecx27;
    void** eax28;
    void** v29;
    void** ecx30;
    uint32_t eax31;

    eax2 = a1;
    v3 = *reinterpret_cast<signed char*>(&eax2);
    eax4 = cwd_n_used;
    edx5 = max_idx;
    v6 = eax4;
    if (reinterpret_cast<unsigned char>(v6) > reinterpret_cast<unsigned char>(edx5)) {
        v6 = edx5;
    }
    v7 = v6;
    init_column_info();
    v8 = reinterpret_cast<void**>(0);
    while (eax9 = cwd_n_used, reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(eax9)) {
        edx10 = sorted_file;
        v11 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx10) + (reinterpret_cast<unsigned char>(v8) << 2));
        eax13 = length_of_file_name_and_frills(v11, v12);
        v14 = eax13;
        v15 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<unsigned char>(v15) < reinterpret_cast<unsigned char>(v7)) {
            ecx16 = column_info;
            eax17 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx16) + (reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) << 2)));
            if (*reinterpret_cast<signed char*>(&eax17)) {
                if (!v3) {
                    v18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v8) % reinterpret_cast<unsigned char>(v15 + 1));
                } else {
                    eax19 = cwd_n_used;
                    v18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v8) / ((reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(eax19)) / reinterpret_cast<unsigned char>(v15 + 1)));
                }
                if (v18 != v15) {
                    v20 = 2;
                } else {
                    v20 = 0;
                }
                ecx21 = column_info;
                if (*reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t**>(reinterpret_cast<unsigned char>(ecx21) + (reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) << 2) + 8)) + (reinterpret_cast<unsigned char>(v18) << 2)) < v20 + reinterpret_cast<uint32_t>(v14)) {
                    ecx22 = column_info;
                    ecx23 = column_info;
                    ecx24 = column_info;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(ecx22) + (reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) << 2) + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx23) + (reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) << 2) + 4) + (v20 + reinterpret_cast<uint32_t>(v14) - *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<int32_t**>(reinterpret_cast<unsigned char>(ecx24) + (reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) << 2) + 8)) + (reinterpret_cast<unsigned char>(v18) << 2)));
                    ecx25 = column_info;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t**>(reinterpret_cast<unsigned char>(ecx25) + (reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) << 2) + 8)) + (reinterpret_cast<unsigned char>(v18) << 2)) = v20 + reinterpret_cast<uint32_t>(v14);
                    ecx26 = column_info;
                    ecx27 = column_info;
                    eax28 = line_length;
                    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx26) + (reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) << 2)) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx27) + (reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v15) << 2) + 4)) < reinterpret_cast<unsigned char>(eax28))));
                }
            }
            ++v15;
        }
        ++v8;
    }
    v29 = v7;
    while (reinterpret_cast<unsigned char>(v29) > reinterpret_cast<unsigned char>(1) && (ecx30 = column_info, eax31 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx30) + ((reinterpret_cast<unsigned char>(v29) + reinterpret_cast<unsigned char>(v29) + reinterpret_cast<unsigned char>(v29) << 2) - 12)), !*reinterpret_cast<signed char*>(&eax31))) {
        --v29;
    }
    return v29;
}

void** program_name = reinterpret_cast<void**>(0);

void emit_bug_reporting_address(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** stderr = reinterpret_cast<void**>(0);

void fun_804992c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void usage(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** ebx8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** ebx13;
    void** ebp14;
    void** eax15;
    void** v16;
    void** v17;
    void** v18;
    void** ebx19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    void** ebx27;
    void** v28;
    void** v29;
    void** v30;
    void** eax31;
    void** v32;
    void** v33;
    void** v34;
    void** ebx35;
    void** v36;
    void** v37;
    void** v38;
    void** eax39;
    void** v40;
    void** v41;
    void** v42;
    void** ebx43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
    void** v48;
    void** v49;
    void** v50;
    void** ebx51;
    void** v52;
    void** v53;
    void** v54;
    void** eax55;
    void** v56;
    void** v57;
    void** v58;
    void** ebx59;
    void** v60;
    void** v61;
    void** v62;
    void** eax63;
    void** v64;
    void** v65;
    void** v66;
    void** ebx67;
    void** v68;
    void** v69;
    void** v70;
    void** eax71;
    void** v72;
    void** v73;
    void** v74;
    void** ebx75;
    void** v76;
    void** v77;
    void** v78;
    void** eax79;
    void** v80;
    void** v81;
    void** v82;
    void** ebx83;
    void** v84;
    void** v85;
    void** v86;
    void** eax87;
    void** v88;
    void** v89;
    void** v90;
    void** ebx91;
    void** v92;
    void** v93;
    void** v94;
    void** eax95;
    void** v96;
    void** v97;
    void** v98;
    void** ebx99;
    void** v100;
    void** v101;
    void** v102;
    void** eax103;
    void** v104;
    void** v105;
    void** v106;
    void** ebx107;
    void** v108;
    void** v109;
    void** v110;
    void** eax111;
    void** v112;
    void** v113;
    void** v114;
    void** ebx115;
    void** v116;
    void** v117;
    void** v118;
    void** eax119;
    void** v120;
    void** v121;
    void** v122;
    void** ebx123;
    void** v124;
    void** v125;
    void** v126;
    void** eax127;
    void** v128;
    void** v129;
    void** v130;
    void** ebx131;
    void** v132;
    void** v133;
    void** v134;
    void** eax135;
    void** v136;
    void** v137;
    void** v138;
    void** ebx139;
    void** v140;
    void** v141;
    void** v142;
    void** eax143;
    void** v144;
    void** v145;
    void** v146;
    void** ebx147;
    void** v148;
    void** v149;
    void** v150;
    void** eax151;
    void** v152;
    void** v153;
    void** v154;
    void** ebx155;
    void** v156;
    void** v157;
    void** v158;
    void** eax159;
    void** v160;
    void** v161;
    void** v162;
    void** ebx163;
    void** v164;
    void** v165;
    void** v166;
    void** eax167;
    void** v168;
    void** v169;
    void** v170;
    void** ebx171;
    void** v172;
    void** v173;
    void** v174;
    void** eax175;
    void** v176;
    void** v177;
    void** v178;
    void** ebx179;
    void** v180;
    void** v181;
    void** v182;
    void** eax183;
    void** v184;
    void** v185;
    void** v186;
    void** ebx187;
    void** v188;
    void** v189;
    void** v190;
    void** eax191;
    void** v192;
    void** v193;
    void** v194;
    void** ebx195;
    void** v196;
    void** v197;
    void** v198;
    void** eax199;
    void** v200;
    void** v201;
    void** v202;
    void** ebx203;
    void** v204;
    void** v205;
    void** v206;
    void** eax207;
    void** v208;
    void** v209;
    void** v210;
    void** ebx211;
    void** v212;
    void** v213;
    void** v214;
    void** eax215;
    void** v216;
    void** v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    void** ebx223;
    void** v224;
    void** v225;
    void** v226;
    void** v227;
    void** eax228;
    void** edx229;
    void** v230;
    void** v231;
    void** v232;
    void** v233;
    void** v234;
    void** v235;
    void** v236;
    void** v237;
    int32_t v238;
    int32_t v239;
    int32_t v240;
    void** eax241;
    void** v242;
    void** v243;

    if (!a1) {
        ebx8 = program_name;
        eax15 = fun_80496ec(0x805f9e8, v9, v10, v11, v12, ebx13, ebp14, __return_address(), a1);
        fun_80498ac(eax15, ebx8, v16, v17, v18, ebx13, ebp14, __return_address(), a1, a2, a3);
        ebx19 = stdout;
        eax23 = fun_80496ec(0x805fa0c, ebx8, v20, v21, v22, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax23, ebx19, v24, v25, v26, ebx13, ebp14, __return_address());
        ebx27 = stdout;
        eax31 = fun_80496ec(0x805fa90, ebx19, v28, v29, v30, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax31, ebx27, v32, v33, v34, ebx13, ebp14, __return_address());
        ebx35 = stdout;
        eax39 = fun_80496ec(0x805fadc, ebx27, v36, v37, v38, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax39, ebx35, v40, v41, v42, ebx13, ebp14, __return_address());
        ebx43 = stdout;
        eax47 = fun_80496ec(0x805fbec, ebx35, v44, v45, v46, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax47, ebx43, v48, v49, v50, ebx13, ebp14, __return_address());
        ebx51 = stdout;
        eax55 = fun_80496ec(0x805fd78, ebx43, v52, v53, v54, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax55, ebx51, v56, v57, v58, ebx13, ebp14, __return_address());
        ebx59 = stdout;
        eax63 = fun_80496ec(0x805ff28, ebx51, v60, v61, v62, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax63, ebx59, v64, v65, v66, ebx13, ebp14, __return_address());
        ebx67 = stdout;
        eax71 = fun_80496ec(0x80600cc, ebx59, v68, v69, v70, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax71, ebx67, v72, v73, v74, ebx13, ebp14, __return_address());
        ebx75 = stdout;
        eax79 = fun_80496ec(0x806010c, ebx67, v76, v77, v78, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax79, ebx75, v80, v81, v82, ebx13, ebp14, __return_address());
        ebx83 = stdout;
        eax87 = fun_80496ec(0x806016c, ebx75, v84, v85, v86, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax87, ebx83, v88, v89, v90, ebx13, ebp14, __return_address());
        ebx91 = stdout;
        eax95 = fun_80496ec(0x806027c, ebx83, v92, v93, v94, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax95, ebx91, v96, v97, v98, ebx13, ebp14, __return_address());
        ebx99 = stdout;
        eax103 = fun_80496ec(0x8060420, ebx91, v100, v101, v102, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax103, ebx99, v104, v105, v106, ebx13, ebp14, __return_address());
        ebx107 = stdout;
        eax111 = fun_80496ec(0x80605b4, ebx99, v108, v109, v110, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax111, ebx107, v112, v113, v114, ebx13, ebp14, __return_address());
        ebx115 = stdout;
        eax119 = fun_80496ec(0x806071c, ebx107, v116, v117, v118, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax119, ebx115, v120, v121, v122, ebx13, ebp14, __return_address());
        ebx123 = stdout;
        eax127 = fun_80496ec(0x8060890, ebx115, v124, v125, v126, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax127, ebx123, v128, v129, v130, ebx13, ebp14, __return_address());
        ebx131 = stdout;
        eax135 = fun_80496ec(0x8060a44, ebx123, v132, v133, v134, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax135, ebx131, v136, v137, v138, ebx13, ebp14, __return_address());
        ebx139 = stdout;
        eax143 = fun_80496ec(0x8060b00, ebx131, v140, v141, v142, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax143, ebx139, v144, v145, v146, ebx13, ebp14, __return_address());
        ebx147 = stdout;
        eax151 = fun_80496ec(0x8060ccc, ebx139, v148, v149, v150, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax151, ebx147, v152, v153, v154, ebx13, ebp14, __return_address());
        ebx155 = stdout;
        eax159 = fun_80496ec(0x8060ec8, ebx147, v156, v157, v158, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax159, ebx155, v160, v161, v162, ebx13, ebp14, __return_address());
        ebx163 = stdout;
        eax167 = fun_80496ec(0x8060f48, ebx155, v164, v165, v166, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax167, ebx163, v168, v169, v170, ebx13, ebp14, __return_address());
        ebx171 = stdout;
        eax175 = fun_80496ec(0x8061090, ebx163, v172, v173, v174, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax175, ebx171, v176, v177, v178, ebx13, ebp14, __return_address());
        ebx179 = stdout;
        eax183 = fun_80496ec(0x80611ec, ebx171, v180, v181, v182, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax183, ebx179, v184, v185, v186, ebx13, ebp14, __return_address());
        ebx187 = stdout;
        eax191 = fun_80496ec(0x806121c, ebx179, v188, v189, v190, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax191, ebx187, v192, v193, v194, ebx13, ebp14, __return_address());
        ebx195 = stdout;
        eax199 = fun_80496ec(0x8061254, ebx187, v196, v197, v198, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax199, ebx195, v200, v201, v202, ebx13, ebp14, __return_address());
        ebx203 = stdout;
        eax207 = fun_80496ec(0x80612f0, ebx195, v204, v205, v206, ebx13, ebp14, __return_address(), a1);
        fun_804955c(eax207, ebx203, v208, v209, v210, ebx13, ebp14, __return_address());
        ebx211 = stdout;
        eax215 = fun_80496ec(0x8061494, ebx203, v212, v213, v214, ebx13, ebp14, __return_address(), a1);
        v216 = ebx211;
        fun_804955c(eax215, v216, v217, v218, v219, ebx13, ebp14, __return_address());
        emit_bug_reporting_address(eax215, v216, v220, v221, v222, ebx13, ebp14, __return_address());
    } else {
        ebx223 = program_name;
        eax228 = fun_80496ec(0x805f9c0, v224, v225, v226, v227, ebx13, ebp14, __return_address(), a1);
        edx229 = stderr;
        v230 = ebx223;
        v216 = eax228;
        fun_804992c(edx229, v216, v230, v231, v232, ebx13, ebp14, __return_address());
    }
    fun_8049aac(a1, v216, v230, v233, v234, ebx13, ebp14, __return_address());
    eax241 = fun_80496ec(0x80614d9, v235, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, a1, v216, v230, v236, v237, ebx13, 0x80614d9, v238, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, a1, v216, v230, v239, v240, ebx13);
    fun_80498ac(eax241, 0x80614f0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, a1, v216, v230, v242, v243, ebx13, ebp14, __return_address());
    goto a1;
}

int32_t fprintf = 0x8049932;

void fun_804992c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto fprintf;
}

int32_t iswcntrl = 0x80497c2;

int32_t fun_80497bc(void** a1, void** a2, void** a3, void** a4) {
    goto iswcntrl;
}

int32_t __ctype_b_loc = 0x80497b2;

void*** fun_80497ac(void** a1, void** a2, void** a3, void** a4) {
    goto __ctype_b_loc;
}

int32_t memcmp = 0x8049552;

int32_t fun_804954c(void** a1, void** a2, void** a3, void** a4) {
    goto memcmp;
}

int32_t putc_unlocked = 0x80494e2;

void fun_80494dc(int32_t a1, void** a2, void** a3) {
    goto putc_unlocked;
}

void** base_len(void** a1) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** ebp6;
    void** eax7;
    void** v8;
    uint32_t eax9;

    eax7 = fun_804985c(a1, v2, v3, v4, 0, v5, ebp6, __return_address());
    v8 = eax7;
    while (reinterpret_cast<unsigned char>(v8) > reinterpret_cast<unsigned char>(1) && (eax9 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v8 - 1) + reinterpret_cast<unsigned char>(a1)), *reinterpret_cast<signed char*>(&eax9) == 47)) {
        --v8;
    }
    return v8;
}

int32_t fun_80499cc(void** a1, void** a2);

int32_t xstrndup(void** a1, void** a2) {
    int32_t eax3;
    void** v4;
    void** v5;
    void** v6;

    eax3 = fun_80499cc(a1, a2);
    if (!eax3) {
        xalloc_die(a1, a2, v4, v5, v6);
    }
    return eax3;
}

int32_t _exit = 0x80496a2;

void fun_804969c(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto _exit;
}

void** longest_relative_suffix(void** a1);

signed char* fun_804966c(void** a1, void** a2, void** a3);

void** mfile_name_concat(void** a1, void** a2, void** a3) {
    void** eax4;
    void** eax5;
    uint32_t eax6;
    void** v7;
    void** eax8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;
    signed char* eax23;
    void** v24;
    uint32_t eax25;
    signed char* eax26;
    void** v27;

    eax4 = last_component(a1);
    eax5 = base_len(eax4);
    if (!eax5 || (eax6 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax5 - 1) + reinterpret_cast<unsigned char>(eax4)), *reinterpret_cast<signed char*>(&eax6) == 47)) {
        v7 = reinterpret_cast<void**>(0);
    } else {
        v7 = reinterpret_cast<void**>(1);
    }
    eax8 = longest_relative_suffix(a2);
    eax15 = fun_804985c(eax8, v9, v10, v11, v7, v12, v13, v14);
    eax22 = malloc(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax4) - reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(eax5)) + reinterpret_cast<unsigned char>(v7) + reinterpret_cast<unsigned char>(eax15) + 1, v16, v17, v18, v7, v19, v20, v21, eax15);
    if (eax22) {
        eax23 = fun_804966c(eax22, a1, reinterpret_cast<unsigned char>(eax4) - reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(eax5));
        *eax23 = 47;
        v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<unsigned char>(v7));
        if (a3) {
            eax25 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2));
            *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(-static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&eax25) == 47))) + reinterpret_cast<unsigned char>(v24));
        }
        eax26 = fun_804966c(v24, eax8, eax15);
        *eax26 = 0;
        v27 = eax22;
    } else {
        v27 = reinterpret_cast<void**>(0);
    }
    return v27;
}

int32_t mempcpy = 0x8049672;

signed char* fun_804966c(void** a1, void** a2, void** a3) {
    goto mempcpy;
}

int32_t abort = 0x80494c2;

void fun_80494bc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    goto abort;
}

uint32_t is_prime(void** a1) {
    uint32_t v2;
    void** v3;
    uint32_t v4;
    uint32_t eax5;

    v2 = 3;
    v3 = reinterpret_cast<void**>(9);
    while (reinterpret_cast<unsigned char>(v3) < reinterpret_cast<unsigned char>(a1) && reinterpret_cast<unsigned char>(a1) % v2) {
        v4 = v2 + 1;
        v3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v3) + (v4 << 2));
        v2 = v4 + 1;
    }
    eax5 = reinterpret_cast<unsigned char>(a1) % v2;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(!!eax5);
    return eax5;
}

void** next_prime(void** a1) {
    void** v2;
    uint32_t eax3;
    uint32_t eax4;

    if (reinterpret_cast<unsigned char>(a1) <= reinterpret_cast<unsigned char>(9)) {
        a1 = reinterpret_cast<void**>(10);
    }
    v2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) | 1);
    while (eax3 = is_prime(v2), eax4 = eax3 ^ 1, !!*reinterpret_cast<signed char*>(&eax4)) {
        v2 = v2 + 2;
    }
    return v2;
}

uint32_t check_tuning(void** a1, void** a2, void** a3, void** a4) {
    int16_t ax5;
    int16_t fpu_status_word6;
    int16_t ax7;
    int16_t fpu_status_word8;
    int16_t ax9;
    int16_t fpu_status_word10;
    int16_t ax11;
    int16_t fpu_status_word12;
    int16_t ax13;
    int16_t fpu_status_word14;
    int16_t ax15;
    int16_t fpu_status_word16;
    int16_t ax17;
    int16_t fpu_status_word18;
    unsigned char v19;

    __asm__("fld dword [eax+0x8]");
    __asm__("fld dword [ebp-0x8]");
    __asm__("fxch st0, st1");
    __asm__("fucompp ");
    ax5 = fpu_status_word6;
    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax5) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax5) + 1) || ((ax7 = fpu_status_word8, *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax7) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax7) + 1)) || ((ax9 = fpu_status_word10, *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax9) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax9) + 1)) || ((ax11 = fpu_status_word12, *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax11) + 1)) || ((ax13 = fpu_status_word14, *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax13) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax13) + 1)) || ((ax15 = fpu_status_word16, *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax15) + 1)) || (ax17 = fpu_status_word18, *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax17) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax17) + 1)))))))) {
        *reinterpret_cast<void***>(a1 + 20) = reinterpret_cast<void**>(0x8061860);
        v19 = 0;
    } else {
        v19 = 1;
    }
    return static_cast<uint32_t>(v19);
}

int32_t calloc = 0x8049612;

void** fun_804960c(void** a1, void** a2) {
    goto calloc;
}

void hash_free(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** v8;
    void** ebp9;
    void** v10;
    void** v11;
    void** edx12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;

    v7 = reinterpret_cast<void**>(__return_address());
    v8 = ebp9;
    if (*reinterpret_cast<void***>(a1 + 32) && *reinterpret_cast<void***>(a1 + 16)) {
        v10 = *reinterpret_cast<void***>(a1);
        while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) > reinterpret_cast<unsigned char>(v10)) {
            if (*reinterpret_cast<void***>(v10)) {
                v11 = v10;
                while (v11) {
                    edx12 = *reinterpret_cast<void***>(a1 + 32);
                    v13 = *reinterpret_cast<void***>(v11);
                    edx12(v13);
                    v11 = *reinterpret_cast<void***>(v11 + 4);
                }
            }
            v10 = v10 + 8;
        }
    }
    v14 = *reinterpret_cast<void***>(a1);
    while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) > reinterpret_cast<unsigned char>(v14)) {
        v15 = *reinterpret_cast<void***>(v14 + 4);
        while (v15) {
            v16 = *reinterpret_cast<void***>(v15 + 4);
            free(v15, v17, v18, v16, v15, v14, v8, v7, a1);
            v15 = v16;
        }
        v14 = v14 + 8;
    }
    v19 = *reinterpret_cast<void***>(a1 + 36);
    while (v19) {
        v16 = *reinterpret_cast<void***>(v19 + 4);
        free(v19, v20, v21, v16, v19, v14, v8, v7, a1);
        v19 = v16;
    }
    v22 = *reinterpret_cast<void***>(a1);
    free(v22, v23, v24, v16, v19, v14, v8, v7, a1);
    free(a1, v25, v26, v16, v19, v14, v8, v7, a1);
    return;
}

void** allocate_entry(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** ebp11;
    void** eax12;
    void** v13;

    if (!*reinterpret_cast<void***>(a1 + 36)) {
        eax12 = malloc(8, v6, v7, v8, v9, v10, ebp11, __return_address(), a1);
        v13 = eax12;
    } else {
        v13 = *reinterpret_cast<void***>(a1 + 36);
        *reinterpret_cast<void***>(a1 + 36) = *reinterpret_cast<void***>(v13 + 4);
    }
    return v13;
}

void free_entry(void** a1, void** a2, void** a3, void** a4, void** a5) {
    *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a2 + 4) = *reinterpret_cast<void***>(a1 + 36);
    *reinterpret_cast<void***>(a1 + 36) = a2;
    return;
}

void** hash_find_entry(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;
    void** v6;
    void** ebx7;
    void** edx8;
    void** v9;
    uint32_t eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** edx18;
    void** v19;
    signed char al20;
    void** v21;
    void** edx22;
    void** v23;
    signed char al24;
    void** v25;
    void** v26;
    void** edx27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;

    eax5 = a4;
    *reinterpret_cast<signed char*>(&v6) = *reinterpret_cast<signed char*>(&eax5);
    ebx7 = *reinterpret_cast<void***>(a1);
    edx8 = *reinterpret_cast<void***>(a1 + 24);
    v9 = *reinterpret_cast<void***>(a1 + 8);
    eax10 = reinterpret_cast<uint32_t>(edx8(a2, v9));
    v11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx7) + (eax10 << 3));
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) <= reinterpret_cast<unsigned char>(v11)) {
        fun_80494bc(a2, v9, v12, v13, v6, v14, v15, v16, v17);
    }
    *reinterpret_cast<void***>(a3) = v11;
    if (*reinterpret_cast<void***>(v11)) {
        edx18 = *reinterpret_cast<void***>(a1 + 28);
        v19 = *reinterpret_cast<void***>(v11);
        al20 = reinterpret_cast<signed char>(edx18(a2, v19));
        if (!al20) {
            v21 = v11;
            while (*reinterpret_cast<void***>(v21 + 4)) {
                edx22 = *reinterpret_cast<void***>(a1 + 28);
                v23 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v21 + 4));
                al24 = reinterpret_cast<signed char>(edx22(a2, v23));
                if (al24) 
                    goto addr_8052eca_8;
                v21 = *reinterpret_cast<void***>(v21 + 4);
            }
        } else {
            v25 = *reinterpret_cast<void***>(v11);
            if (*reinterpret_cast<signed char*>(&v6)) {
                if (!*reinterpret_cast<void***>(v11 + 4)) {
                    *reinterpret_cast<void***>(v11) = reinterpret_cast<void**>(0);
                } else {
                    v26 = *reinterpret_cast<void***>(v11 + 4);
                    edx27 = *reinterpret_cast<void***>(v26 + 4);
                    *reinterpret_cast<void***>(v11) = *reinterpret_cast<void***>(v26);
                    *reinterpret_cast<void***>(v11 + 4) = edx27;
                    free_entry(a1, v26, v28, v29, v6);
                }
            }
            v30 = v25;
            goto addr_8052f24_15;
        }
    } else {
        v30 = reinterpret_cast<void**>(0);
        goto addr_8052f24_15;
    }
    v30 = reinterpret_cast<void**>(0);
    addr_8052f24_15:
    return v30;
    addr_8052eca_8:
    v31 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v21 + 4));
    if (*reinterpret_cast<signed char*>(&v6)) {
        v32 = *reinterpret_cast<void***>(v21 + 4);
        *reinterpret_cast<void***>(v21 + 4) = *reinterpret_cast<void***>(v32 + 4);
        free_entry(a1, v32, v33, v34, v6);
    }
    v30 = v31;
    goto addr_8052f24_15;
}

void** __umoddi3(void** a1, void** a2, void** a3, void** a4) {
    void** edi5;
    void** v6;
    void** edx7;
    uint32_t edx8;
    uint32_t edx9;
    uint32_t v10;
    uint32_t ecx11;
    uint32_t v12;
    uint32_t ecx13;
    uint32_t ecx14;
    uint32_t v15;
    uint32_t v16;
    uint32_t ecx17;
    uint32_t ecx18;
    uint32_t ecx19;
    uint32_t eax20;
    uint32_t esi21;
    uint32_t edi22;
    uint32_t eax23;
    uint32_t edx24;
    uint32_t ecx25;
    uint32_t ecx26;
    void** eax27;
    uint1_t cf28;

    edi5 = a3;
    v6 = a1;
    if (!a4) {
        if (reinterpret_cast<unsigned char>(edi5) <= reinterpret_cast<unsigned char>(a2)) {
            if (!edi5) {
                edi5 = reinterpret_cast<void**>(1 / reinterpret_cast<unsigned char>(edi5));
            }
            edx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v6) % reinterpret_cast<unsigned char>(edi5));
        } else {
            edx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) % reinterpret_cast<unsigned char>(edi5));
        }
        return edx7;
    }
    if (reinterpret_cast<unsigned char>(a4) <= reinterpret_cast<unsigned char>(a2)) {
        __asm__("bsr edx, eax");
        edx8 = edx9 ^ 31;
        v10 = edx8;
        if (edx8) {
            ecx11 = *reinterpret_cast<unsigned char*>(&v10);
            v12 = 32 - v10;
            ecx13 = *reinterpret_cast<unsigned char*>(&v12);
            ecx14 = *reinterpret_cast<unsigned char*>(&v10);
            v15 = reinterpret_cast<unsigned char>(edi5) >> *reinterpret_cast<signed char*>(&ecx13) | reinterpret_cast<unsigned char>(a4) << *reinterpret_cast<unsigned char*>(&ecx11);
            v16 = reinterpret_cast<unsigned char>(edi5) << *reinterpret_cast<unsigned char*>(&ecx14);
            ecx17 = *reinterpret_cast<unsigned char*>(&v10);
            ecx18 = *reinterpret_cast<unsigned char*>(&v12);
            ecx19 = *reinterpret_cast<unsigned char*>(&v10);
            eax20 = reinterpret_cast<unsigned char>(a1) >> *reinterpret_cast<signed char*>(&ecx18) | reinterpret_cast<unsigned char>(a2) << *reinterpret_cast<unsigned char*>(&ecx17);
            esi21 = eax20 % v15;
            edi22 = reinterpret_cast<unsigned char>(a1) << *reinterpret_cast<unsigned char*>(&ecx19);
            eax23 = eax20 / v15 * v16;
            edx24 = __intrinsic();
            if (esi21 >= edx24) {
                if (esi21 != edx24 || edi22 >= eax23) {
                    addr_805e2b7_12:
                    ecx25 = *reinterpret_cast<unsigned char*>(&v10);
                    ecx26 = *reinterpret_cast<unsigned char*>(&v12);
                    eax27 = reinterpret_cast<void**>(esi21 - (edx24 + reinterpret_cast<uint1_t>(esi21 < edx24 + reinterpret_cast<uint1_t>(edi22 < eax23))) << *reinterpret_cast<unsigned char*>(&ecx26) | edi22 - eax23 >> *reinterpret_cast<signed char*>(&ecx25));
                } else {
                    goto addr_805e2b1_14;
                }
            } else {
                addr_805e2b1_14:
                cf28 = reinterpret_cast<uint1_t>(eax23 < v16);
                eax23 = eax23 - v16;
                edx24 = edx24 - (v15 + reinterpret_cast<uint1_t>(edx24 < v15 + cf28));
                goto addr_805e2b7_12;
            }
        } else {
            if (reinterpret_cast<unsigned char>(a4) >= reinterpret_cast<unsigned char>(a2)) {
                if (reinterpret_cast<unsigned char>(edi5) > reinterpret_cast<unsigned char>(v6)) {
                    addr_805e245_17:
                    eax27 = v6;
                } else {
                    goto addr_805e23b_19;
                }
            } else {
                addr_805e23b_19:
                v6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v6) - reinterpret_cast<unsigned char>(edi5));
                goto addr_805e245_17;
            }
        }
    } else {
        eax27 = a1;
    }
    return eax27;
}

void** __udivdi3(void** a1, void** a2, void** a3, void** a4) {
    void** esi5;
    uint32_t edi6;
    uint32_t edi7;
    uint32_t ecx8;
    uint32_t ecx9;
    uint32_t v10;
    uint32_t ecx11;
    uint32_t v12;
    uint32_t ecx13;
    uint32_t ecx14;
    uint32_t eax15;
    uint32_t esi16;
    void** v17;
    void** ecx18;
    uint32_t ecx19;

    esi5 = a3;
    if (!a4) {
        if (reinterpret_cast<unsigned char>(esi5) > reinterpret_cast<unsigned char>(a2)) {
            return reinterpret_cast<unsigned char>(a1) / reinterpret_cast<unsigned char>(esi5);
        } else {
            if (!esi5) {
                esi5 = reinterpret_cast<void**>(1 / reinterpret_cast<unsigned char>(esi5));
            }
            return reinterpret_cast<unsigned char>(a1) / reinterpret_cast<unsigned char>(esi5);
        }
    }
    if (reinterpret_cast<unsigned char>(a4) > reinterpret_cast<unsigned char>(a2)) 
        goto addr_805e0ed_8;
    __asm__("bsr edi, eax");
    edi6 = edi7 ^ 31;
    if (edi6) {
        ecx8 = edi6;
        ecx9 = 32 - edi6;
        v10 = ecx9;
        ecx11 = edi6;
        v12 = reinterpret_cast<unsigned char>(a4) << *reinterpret_cast<unsigned char*>(&ecx8) | reinterpret_cast<unsigned char>(esi5) >> *reinterpret_cast<signed char*>(&ecx9);
        ecx13 = edi6;
        ecx14 = *reinterpret_cast<unsigned char*>(&v10);
        eax15 = reinterpret_cast<unsigned char>(a1) >> *reinterpret_cast<signed char*>(&ecx14) | reinterpret_cast<unsigned char>(a2) << *reinterpret_cast<unsigned char*>(&ecx13);
        esi16 = eax15 % v12;
        v17 = reinterpret_cast<void**>(eax15 / v12);
        if (esi16 < __intrinsic()) {
            addr_805e1b0_11:
            ecx18 = v17 - 1;
        } else {
            if (esi16 != __intrinsic() || (ecx19 = edi6, reinterpret_cast<unsigned char>(a1) << *reinterpret_cast<unsigned char*>(&ecx19) >= (reinterpret_cast<unsigned char>(esi5) << *reinterpret_cast<unsigned char*>(&ecx11)) * reinterpret_cast<unsigned char>(v17))) {
                ecx18 = v17;
            } else {
                goto addr_805e1b0_11;
            }
        }
    } else {
        if (reinterpret_cast<unsigned char>(a4) < reinterpret_cast<unsigned char>(a2) || reinterpret_cast<unsigned char>(esi5) <= reinterpret_cast<unsigned char>(a1)) {
            ecx18 = reinterpret_cast<void**>(1);
        } else {
            addr_805e0ed_8:
            ecx18 = reinterpret_cast<void**>(0);
        }
    }
    return ecx18;
}

void** adjust_value(void** a1, void** a2, void** a3, void** a4) {
    int16_t ax5;
    int16_t fpu_status_word6;
    int16_t ax7;
    int16_t fpu_status_word8;
    uint32_t eax9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t eax14;
    uint32_t edx15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    int16_t fpu_status_word19;
    uint1_t pf20;
    uint32_t eax21;

    if (a1 == 1 || (ax5 = fpu_status_word6, *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax5) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax5) + 1))) {
        addr_80535e8_2:
        __asm__("fld tword [ebp-0x58]");
        return a2;
    } else {
        __asm__("fld tword [ebp+0xc]");
        __asm__("fld tword [0x8061980]");
        __asm__("fxch st0, st1");
        __asm__("fucompp ");
        ax7 = fpu_status_word8;
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax7) + 1)) {
            __asm__("fld tword [ebp+0xc]");
            __asm__("fld tword [0x8061980]");
            __asm__("fsubp st1, st0");
            __asm__("fnstcw word [ebp-0x1a]");
            __asm__("fldcw word [ebp-0x1c]");
            __asm__("fistp qword [ebp-0x10]");
            __asm__("fldcw word [ebp-0x1a]");
            eax9 = v10;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax9) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax9) + 1)));
            v11 = eax9;
            v12 = v13 ^ 0x80000000;
        } else {
            __asm__("fld tword [ebp+0xc]");
            __asm__("fnstcw word [ebp-0x1a]");
            __asm__("fldcw word [ebp-0x1c]");
            __asm__("fistp qword [ebp-0x10]");
            __asm__("fldcw word [ebp-0x1a]");
        }
        eax14 = v11;
        edx15 = v12;
        v16 = eax14;
        v17 = edx15;
        if (!a1) 
            goto addr_8053566_7;
    }
    addr_80535a3_8:
    v18 = 0;
    addr_80535aa_9:
    __asm__("fild qword [esp]");
    __asm__("fstp tword [ebp-0x48]");
    if (reinterpret_cast<int32_t>(v17 + reinterpret_cast<uint1_t>(v18 + v16 < v18)) < reinterpret_cast<int32_t>(0)) {
        __asm__("fld tword [0x8061990]");
        __asm__("fld tword [ebp-0x48]");
        __asm__("faddp st1, st0");
        __asm__("fstp tword [ebp-0x48]");
    }
    __asm__("fld tword [ebp-0x48]");
    __asm__("fstp tword [ebp+0xc]");
    goto addr_80535e8_2;
    addr_8053566_7:
    __asm__("fild qword [ebp-0x10]");
    __asm__("fstp tword [ebp-0x28]");
    if (reinterpret_cast<int32_t>(v17) < reinterpret_cast<int32_t>(0)) {
        __asm__("fld tword [0x8061990]");
        __asm__("fld tword [ebp-0x28]");
        __asm__("faddp st1, st0");
        __asm__("fstp tword [ebp-0x28]");
    }
    __asm__("fld tword [ebp+0xc]");
    __asm__("fld tword [ebp-0x28]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax14) = fpu_status_word19;
    pf20 = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax14) + 1);
    *reinterpret_cast<unsigned char*>(&eax14) = reinterpret_cast<uint1_t>(!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax14) + 1));
    *reinterpret_cast<unsigned char*>(&edx15) = pf20;
    eax21 = (eax14 | edx15) ^ 1;
    if (*reinterpret_cast<signed char*>(&eax21)) 
        goto addr_80535a3_8;
    v18 = 1;
    goto addr_80535aa_9;
}

uint32_t g14;

void** fun_804995c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void** group_number(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** v6;
    void** v7;
    uint32_t eax8;
    uint32_t v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** eax17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    uint32_t eax25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    uint32_t edx33;
    void** v34;
    void** v35;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v6 = a3;
    v7 = a4;
    eax8 = g14;
    v9 = eax8;
    v10 = reinterpret_cast<void**>(0xffffffff);
    eax17 = fun_804985c(v7, v11, v12, v13, v14, v15, v16, v7);
    v18 = eax17;
    v19 = a2;
    fun_804983c(reinterpret_cast<int32_t>(ebp5) + 0xffffffd3, a1, a2, v20, v21, v22, v23, v7, v6);
    v24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(a2));
    while (1) {
        eax25 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v6));
        if (*reinterpret_cast<unsigned char*>(&eax25)) {
            if (*reinterpret_cast<unsigned char*>(&eax25) > 0x7e) {
                v26 = v19;
            } else {
                v26 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax25)));
            }
            v10 = v26;
            ++v6;
        }
        if (reinterpret_cast<unsigned char>(v19) < reinterpret_cast<unsigned char>(v10)) {
            v10 = v19;
        }
        v27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v24) + -reinterpret_cast<unsigned char>(v10));
        v19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) - reinterpret_cast<unsigned char>(v10));
        fun_804983c(v27, reinterpret_cast<int32_t>(ebp5) - 45 + reinterpret_cast<unsigned char>(v19), v10, v28, v29, v26, v27, v7, v6);
        if (!v19) 
            break;
        v24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v27) + -reinterpret_cast<unsigned char>(v18));
        fun_804983c(v24, v7, v18, v30, v31, v26, v24, v7, v6);
    }
    eax32 = v27;
    edx33 = v9 ^ g14;
    if (edx33) {
        eax32 = fun_804995c(v27, reinterpret_cast<int32_t>(ebp5) - 45 + reinterpret_cast<unsigned char>(v19), v10, v34, v35, v26, v27, v7, v6);
    }
    return eax32;
}

void** default_block_size(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** ebp9;
    void** eax10;
    void** v11;

    eax10 = fun_80495fc(0x8061930, v4, v5, v6, v7, v8, ebp9);
    if (!eax10) {
        v11 = reinterpret_cast<void**>(0x400);
    } else {
        v11 = reinterpret_cast<void**>(0x200);
    }
    return v11;
}

int32_t getpwuid = 0x8049872;

void** fun_804986c(void** a1) {
    goto getpwuid;
}

struct s12 {
    signed char[8] pad8;
    void** f8;
};

int32_t getpwnam = 0x8049a82;

struct s12* fun_8049a7c(void** a1, void** a2) {
    goto getpwnam;
}

void** xmalloc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** ebp13;
    void** eax14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;

    eax14 = malloc(a1, v8, v9, v10, v11, v12, ebp13, __return_address(), a1);
    if (!eax14 && a1) {
        xalloc_die(a1, v15, v16, v17, v18);
    }
    return eax14;
}

int32_t strcpy = 0x8049892;

void fun_804988c(void** a1, void** a2, void* a3) {
    goto strcpy;
}

int32_t getgrgid = 0x8049992;

void** fun_804998c(void** a1) {
    goto getgrgid;
}

struct s13 {
    signed char[8] pad8;
    void** f8;
};

int32_t getgrnam = 0x80495e2;

struct s13* fun_80495dc(void** a1, void** a2) {
    goto getgrnam;
}

void** __moddi3(void** a1, void** a2, void** a3, void** a4) {
    int32_t v5;
    void** edx6;
    void** eax7;
    void** v8;
    void** v9;
    uint1_t cf10;
    void** edi11;
    void** v12;
    uint32_t eax13;
    uint32_t v14;
    uint32_t ecx15;
    uint32_t v16;
    uint32_t ecx17;
    uint32_t ecx18;
    uint32_t v19;
    uint32_t edi20;
    uint32_t ecx21;
    uint32_t ecx22;
    uint32_t ecx23;
    uint32_t eax24;
    uint32_t v25;
    uint32_t esi26;
    uint32_t eax27;
    uint32_t edx28;
    uint32_t ecx29;
    uint32_t ecx30;
    void** v31;
    uint1_t cf32;
    void** edx33;

    v5 = 0;
    edx6 = a2;
    eax7 = a1;
    v8 = a4;
    v9 = a3;
    if (reinterpret_cast<signed char>(edx6) < reinterpret_cast<signed char>(0)) {
        cf10 = reinterpret_cast<uint1_t>(!!eax7);
        eax7 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax7));
        edx6 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(edx6) + cf10));
        v5 = -1;
        if (reinterpret_cast<signed char>(a4) >= reinterpret_cast<signed char>(0)) {
            addr_805def0_3:
            edi11 = v9;
            v12 = eax7;
            if (v8) {
                if (reinterpret_cast<unsigned char>(v8) <= reinterpret_cast<unsigned char>(edx6)) {
                    __asm__("bsr eax, [ebp-0x44]");
                    eax13 = reinterpret_cast<unsigned char>(eax7) ^ 31;
                    v14 = eax13;
                    if (eax13) {
                        ecx15 = *reinterpret_cast<unsigned char*>(&v14);
                        v16 = 32 - v14;
                        ecx17 = *reinterpret_cast<unsigned char*>(&v16);
                        ecx18 = *reinterpret_cast<unsigned char*>(&v14);
                        v19 = reinterpret_cast<unsigned char>(edi11) >> *reinterpret_cast<signed char*>(&ecx17) | reinterpret_cast<unsigned char>(v8) << *reinterpret_cast<unsigned char*>(&ecx15);
                        edi20 = reinterpret_cast<unsigned char>(edi11) << *reinterpret_cast<unsigned char*>(&ecx18);
                        ecx21 = *reinterpret_cast<unsigned char*>(&v14);
                        ecx22 = *reinterpret_cast<unsigned char*>(&v16);
                        ecx23 = *reinterpret_cast<unsigned char*>(&v14);
                        eax24 = reinterpret_cast<unsigned char>(eax7) >> *reinterpret_cast<signed char*>(&ecx22) | reinterpret_cast<unsigned char>(edx6) << *reinterpret_cast<unsigned char*>(&ecx21);
                        v25 = eax24 % v19;
                        esi26 = reinterpret_cast<unsigned char>(eax7) << *reinterpret_cast<unsigned char*>(&ecx23);
                        eax27 = eax24 / v19 * edi20;
                        edx28 = __intrinsic();
                        if (v25 >= edx28) {
                            if (v25 != edx28 || esi26 >= eax27) {
                                addr_805e043_8:
                                ecx29 = *reinterpret_cast<unsigned char*>(&v14);
                                ecx30 = *reinterpret_cast<unsigned char*>(&v16);
                                v31 = reinterpret_cast<void**>(esi26 - eax27 >> *reinterpret_cast<signed char*>(&ecx29) | v25 - (edx28 + reinterpret_cast<uint1_t>(v25 < edx28 + reinterpret_cast<uint1_t>(esi26 < eax27))) << *reinterpret_cast<unsigned char*>(&ecx30));
                            } else {
                                goto addr_805e03e_10;
                            }
                        } else {
                            addr_805e03e_10:
                            cf32 = reinterpret_cast<uint1_t>(eax27 < edi20);
                            eax27 = eax27 - edi20;
                            edx28 = edx28 - (v19 + reinterpret_cast<uint1_t>(edx28 < v19 + cf32));
                            goto addr_805e043_8;
                        }
                    } else {
                        if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(edx6) || reinterpret_cast<unsigned char>(edi11) <= reinterpret_cast<unsigned char>(v12)) {
                            v12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v12) - reinterpret_cast<unsigned char>(edi11));
                        }
                        v31 = v12;
                    }
                } else {
                    v31 = eax7;
                }
            } else {
                if (reinterpret_cast<unsigned char>(edi11) <= reinterpret_cast<unsigned char>(edx6)) {
                    if (!edi11) {
                        edi11 = reinterpret_cast<void**>(1 / reinterpret_cast<unsigned char>(edi11));
                    }
                    edx33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v12) % reinterpret_cast<unsigned char>(edi11));
                } else {
                    edx33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) % reinterpret_cast<unsigned char>(edi11));
                }
                v31 = edx33;
            }
        } else {
            addr_805df89_21:
            v9 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(a3));
            v8 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<uint1_t>(!!a3)));
            goto addr_805def0_3;
        }
        if (v5) {
            v31 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v31));
        }
        return v31;
    } else {
        if (reinterpret_cast<signed char>(a4) < reinterpret_cast<signed char>(0)) 
            goto addr_805df89_21; else 
            goto addr_805def0_3;
    }
}

void** __divdi3(void** a1, void** a2, void** a3, void** a4) {
    void** edi5;
    void** eax6;
    void** edx7;
    void** esi8;
    int32_t v9;
    uint1_t cf10;
    void** v11;
    uint32_t edx12;
    uint32_t v13;
    void** ecx14;
    uint1_t cf15;
    uint32_t ecx16;
    uint32_t ecx17;
    uint32_t v18;
    uint32_t edi19;
    uint32_t ecx20;
    uint32_t ecx21;
    uint32_t ecx22;
    uint32_t eax23;
    uint32_t esi24;
    void** v25;
    uint32_t ecx26;
    void** eax27;

    edi5 = a2;
    eax6 = a3;
    edx7 = a4;
    esi8 = a1;
    v9 = 0;
    if (reinterpret_cast<signed char>(edi5) >= reinterpret_cast<signed char>(0)) {
        if (reinterpret_cast<signed char>(edx7) < reinterpret_cast<signed char>(0)) 
            goto addr_805dde9_3; else 
            goto addr_805dd54_4;
    }
    cf10 = reinterpret_cast<uint1_t>(!!esi8);
    esi8 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(esi8));
    edi5 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(edi5) + cf10));
    v9 = -1;
    if (reinterpret_cast<signed char>(edx7) >= reinterpret_cast<signed char>(0)) {
        addr_805dd54_4:
        v11 = eax6;
        if (edx7) {
            if (reinterpret_cast<unsigned char>(edx7) > reinterpret_cast<unsigned char>(edi5)) 
                goto addr_805dd81_7;
            __asm__("bsr edx, edx");
            edx12 = reinterpret_cast<unsigned char>(edx7) ^ 31;
            v13 = edx12;
            if (!edx12) 
                goto addr_805de0b_9;
        } else {
            if (reinterpret_cast<unsigned char>(v11) <= reinterpret_cast<unsigned char>(edi5)) {
                if (!v11) {
                    v11 = reinterpret_cast<void**>(1 / reinterpret_cast<unsigned char>(v11));
                }
                ecx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi8) / reinterpret_cast<unsigned char>(v11));
                goto addr_805dd85_14;
            } else {
                ecx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi8) / reinterpret_cast<unsigned char>(v11));
                goto addr_805dd85_14;
            }
        }
    } else {
        addr_805dde9_3:
        v9 = ~v9;
        cf15 = reinterpret_cast<uint1_t>(!!eax6);
        eax6 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax6));
        edx7 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(edx7) + cf15));
        goto addr_805dd54_4;
    }
    ecx16 = *reinterpret_cast<unsigned char*>(&v13);
    ecx17 = 32 - v13;
    v18 = ecx17;
    edi19 = reinterpret_cast<unsigned char>(v11) >> *reinterpret_cast<signed char*>(&ecx17) | reinterpret_cast<unsigned char>(edx7) << *reinterpret_cast<unsigned char*>(&ecx16);
    ecx20 = *reinterpret_cast<unsigned char*>(&v13);
    ecx21 = *reinterpret_cast<unsigned char*>(&v13);
    ecx22 = *reinterpret_cast<unsigned char*>(&v18);
    eax23 = reinterpret_cast<unsigned char>(esi8) >> *reinterpret_cast<signed char*>(&ecx22) | reinterpret_cast<unsigned char>(edi5) << *reinterpret_cast<unsigned char*>(&ecx21);
    esi24 = eax23 % edi19;
    v25 = reinterpret_cast<void**>(eax23 / edi19);
    if (esi24 < __intrinsic()) {
        addr_805dea0_17:
        ecx14 = v25 - 1;
    } else {
        if (esi24 != __intrinsic() || (ecx26 = *reinterpret_cast<unsigned char*>(&v13), reinterpret_cast<unsigned char>(esi8) << *reinterpret_cast<unsigned char*>(&ecx26) >= (reinterpret_cast<unsigned char>(v11) << *reinterpret_cast<unsigned char*>(&ecx20)) * reinterpret_cast<unsigned char>(v25))) {
            ecx14 = v25;
        } else {
            goto addr_805dea0_17;
        }
    }
    addr_805dd85_14:
    eax27 = ecx14;
    if (v9) {
        eax27 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax27));
    }
    return eax27;
    addr_805de0b_9:
    if (reinterpret_cast<unsigned char>(edx7) < reinterpret_cast<unsigned char>(edi5) || reinterpret_cast<unsigned char>(v11) <= reinterpret_cast<unsigned char>(esi8)) {
        ecx14 = reinterpret_cast<void**>(1);
        goto addr_805dd85_14;
    } else {
        addr_805dd81_7:
        ecx14 = reinterpret_cast<void**>(0);
        goto addr_805dd85_14;
    }
}

int32_t mbrtowc = 0x80496e2;

void* fun_80496dc(void** a1, void** a2, void** a3, void** a4) {
    goto mbrtowc;
}

int32_t iswprint = 0x8049a72;

int32_t fun_8049a6c(void** a1, void** a2, void** a3, void** a4) {
    goto iswprint;
}

void** slotvec = reinterpret_cast<void**>(0xd8);

void** nslots = reinterpret_cast<void**>(1);

void** slotvec0 = reinterpret_cast<void**>(0);

void** g80643dc = reinterpret_cast<void**>(96);

void** quotearg_buffer(void** a1, void** a2, void** a3, void** a4, void** a5);

void** xcharalloc(void** a1, void** a2, void** a3, void** a4, void** a5);

void** quotearg_n_options(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void*** eax14;
    void** v15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    unsigned char v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** eax39;
    void** eax40;
    void** edx41;
    void** edx42;
    void** eax43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** eax55;
    void** v56;
    void** v57;
    void** eax58;
    void** v59;
    void** v60;
    void*** eax61;

    eax14 = fun_80494cc(v5, v6, v7, v8, v9, v10, v11, v12, v13);
    v15 = *eax14;
    eax16 = slotvec;
    v17 = eax16;
    if (reinterpret_cast<signed char>(a1) < reinterpret_cast<signed char>(0)) {
        fun_80494bc(v18, v19, v20, v21, v22, v23, v24, v25, v26);
    }
    eax27 = nslots;
    if (reinterpret_cast<unsigned char>(eax27) <= reinterpret_cast<unsigned char>(a1)) {
        v28 = reinterpret_cast<uint1_t>(v17 == 0x80643d8);
        if (reinterpret_cast<unsigned char>(a1 + 1) > reinterpret_cast<unsigned char>(0x1fffffff)) {
            xalloc_die(v29, v30, v31, v32, v33);
        }
        v34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1 + 1) << 3);
        if (!v28) {
            v35 = v17;
        } else {
            v35 = reinterpret_cast<void**>(0);
        }
        eax39 = xrealloc(v35, v34, v36, v37, v38);
        v17 = eax39;
        slotvec = v17;
        if (v28) {
            eax40 = slotvec0;
            edx41 = g80643dc;
            *reinterpret_cast<void***>(v17) = eax40;
            *reinterpret_cast<void***>(v17 + 4) = edx41;
        }
        edx42 = nslots;
        eax43 = nslots;
        fun_804964c((reinterpret_cast<unsigned char>(eax43) << 3) + reinterpret_cast<unsigned char>(v17), 0, (reinterpret_cast<unsigned char>(a1 + 1) - reinterpret_cast<unsigned char>(edx42)) * 8, v44, v45, v46, v47);
        nslots = a1 + 1;
    }
    v48 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(a1) << 3) + reinterpret_cast<unsigned char>(v17));
    v49 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(a1) << 3) + reinterpret_cast<unsigned char>(v17) + 4);
    v50 = a4;
    v51 = a3;
    v52 = a2;
    v53 = v48;
    v54 = v49;
    eax55 = quotearg_buffer(v54, v53, v52, v51, v50);
    if (reinterpret_cast<unsigned char>(v48) <= reinterpret_cast<unsigned char>(eax55)) {
        *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(a1) << 3) + reinterpret_cast<unsigned char>(v17)) = eax55 + 1;
        if (v49 != 0x8064760) {
            free(v49, v53, v52, v51, v50, v56, v57, v34, v35);
        }
        eax58 = xcharalloc(eax55 + 1, v53, v52, v51, v50);
        v49 = eax58;
        *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(a1) << 3) + reinterpret_cast<unsigned char>(v17) + 4) = v49;
        v50 = a4;
        v51 = a3;
        v52 = a2;
        v53 = eax55 + 1;
        v54 = v49;
        quotearg_buffer(v54, v53, v52, v51, v50);
    }
    eax61 = fun_80494cc(v54, v53, v52, v51, v50, v59, v60, v34, v35);
    *eax61 = v15;
    return v49;
}

signed char fun_804963c(uint32_t a1);

void** memcpy_uppcase(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    unsigned char al8;
    uint32_t eax9;
    signed char al10;

    while (al8 = reinterpret_cast<uint1_t>(!!a3), --a3, !!al8) {
        eax9 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(a3));
        al10 = fun_804963c(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax9)));
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(a3)) = al10;
    }
    return a1;
}

void* fun_80498cc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** memcpy_lowcase(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void* iso_week_days(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

uint32_t fun_804981c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void* fun_8049a3c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** strftime_case_(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void* ebp8;
    void** eax9;
    unsigned char v10;
    void** v11;
    uint32_t eax12;
    uint32_t v13;
    void** v14;
    void** v15;
    void** v16;
    void* v17;
    void** v18;
    void** v19;
    uint32_t eax20;
    int32_t v21;
    void** v22;
    void** v23;
    signed char v24;
    uint32_t eax25;
    unsigned char v26;
    signed char v27;
    uint32_t eax28;
    int32_t v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** eax38;
    void* v39;
    void** v40;
    void* eax41;
    int32_t eax42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
    uint32_t edx48;
    uint32_t eax49;
    int32_t v50;
    uint32_t eax51;
    uint32_t eax52;
    uint32_t eax53;
    void*** eax54;
    uint32_t eax55;
    uint32_t eax56;
    uint32_t eax57;
    int32_t v58;
    uint32_t eax59;
    int32_t v60;
    uint32_t eax61;
    void** v62;
    void** v63;
    uint32_t eax64;
    void** v65;
    void** v66;
    void** v67;
    uint32_t edx68;
    void* v69;
    uint32_t eax70;
    uint32_t eax71;
    void** ecx72;
    void** ecx73;
    unsigned char v74;
    void** v75;
    void** v76;
    void* v77;
    void* v78;
    void** eax79;
    void** v80;
    void* eax81;
    void* v82;
    void** v83;
    void** v84;
    int32_t v85;
    void* eax86;
    void** v87;
    void** v88;
    void* ecx89;
    void* ecx90;
    void* v91;
    void* eax92;
    uint32_t eax93;
    int32_t v94;
    void** v95;
    void** ecx96;
    void*** ecx97;
    void** v98;
    void** v99;
    void** v100;
    void* ecx101;
    void** ebx102;
    signed char* ecx103;
    uint32_t v104;
    void* ecx105;
    void** v106;
    void** eax107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    uint32_t eax112;
    uint32_t v113;
    void** v114;
    uint32_t eax115;
    signed char v116;
    void** v117;
    signed char* ecx118;
    uint32_t v119;
    void** ecx120;
    void** v121;
    void** v122;
    void** v123;
    int32_t ecx124;
    int32_t edx125;
    int32_t edx126;
    uint32_t eax127;
    uint32_t v128;
    uint32_t eax129;
    uint32_t eax130;
    uint32_t eax131;
    unsigned char v132;
    uint32_t edx133;
    unsigned char v134;
    uint32_t ecx135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    uint32_t edx141;
    void** v142;
    uint32_t edx143;
    void** v144;
    void** v145;
    uint32_t edx146;
    uint32_t edx147;
    void* eax148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    uint32_t eax153;
    uint32_t eax154;
    uint32_t eax155;
    void** eax156;
    void** v157;
    void** v158;
    void** eax159;
    uint32_t ecx160;
    void** v161;
    void** v162;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax9 = a1;
    v10 = *reinterpret_cast<unsigned char*>(&eax9);
    v11 = a5;
    eax12 = g14;
    v13 = eax12;
    v14 = *reinterpret_cast<void***>(v11 + 8);
    v15 = reinterpret_cast<void**>(0);
    v16 = a2;
    v17 = reinterpret_cast<void*>(0);
    v18 = *reinterpret_cast<void***>(v11 + 40);
    if (reinterpret_cast<signed char>(v14) <= reinterpret_cast<signed char>(12)) {
        if (!v14) {
            v14 = reinterpret_cast<void**>(12);
        }
    } else {
        v14 = v14 - 12;
    }
    v19 = a4;
    while (eax20 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19)), !!*reinterpret_cast<signed char*>(&eax20)) {
        v21 = 0;
        v22 = reinterpret_cast<void**>(0);
        v23 = reinterpret_cast<void**>(0xffffffff);
        v24 = 0;
        eax25 = v10;
        v26 = *reinterpret_cast<unsigned char*>(&eax25);
        v27 = 0;
        eax28 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19));
        v29 = *reinterpret_cast<signed char*>(&eax28);
        if (v29 > 63) {
            if (v29 < 65 || v29 > 95 && v29 - 97 > 29) {
                addr_8055eb4_9:
                v30 = reinterpret_cast<void**>(0);
                if (!v17) {
                    eax38 = fun_804985c(v19, v31, v32, v33, v34, v35, v36, v37);
                    v17 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax38 + 1) + reinterpret_cast<unsigned char>(v19));
                }
            } else {
                addr_8055da5_11:
                if (1 < reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
                    goto addr_8055e04_12; else 
                    goto addr_8055df5_13;
            }
        } else {
            if (v29 >= 38) 
                goto addr_8055da5_11;
            if (v29 > 35) 
                goto addr_8055d6b_16; else 
                goto addr_8055d4e_17;
        }
        v39 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v17) - reinterpret_cast<unsigned char>(v19));
        do {
            v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffffa70);
            v31 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v39) - reinterpret_cast<unsigned char>(v30));
            v40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) + reinterpret_cast<unsigned char>(v30));
            eax41 = fun_80498cc(v40, v31, v32, v33, v34, v35, v36);
            if (!eax41) 
                break;
            if (reinterpret_cast<int1_t>(eax41 == 0xfffffffe)) 
                goto addr_8055f5c_21;
            if (reinterpret_cast<int1_t>(eax41 == 0xffffffff)) 
                goto addr_8055f83_23;
            v30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v30) + reinterpret_cast<uint32_t>(eax41));
            v40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffffa70);
            eax42 = fun_80497ec(v40, v31, v32, v33, v34, v35, v36);
        } while (!eax42);
        addr_8055fae_25:
        v43 = reinterpret_cast<void**>(-1 - reinterpret_cast<unsigned char>(v30));
        if ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v43) >> 31)) & reinterpret_cast<unsigned char>(v43)) + reinterpret_cast<unsigned char>(v30) >= reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
            goto addr_8056000_26;
        if (v16) {
            if (!0 && reinterpret_cast<signed char>(v43) > reinterpret_cast<signed char>(0)) {
                if (1) {
                    fun_804964c(v16, 32, v43, v33, v34, v35, v36);
                    v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v43));
                } else {
                    fun_804964c(v16, 48, v43, v33, v34, v35, v36);
                    v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v43));
                }
            }
            if (1) {
                if (!v26) {
                    v32 = v30;
                    v31 = v19;
                    v40 = v16;
                    fun_804983c(v40, v31, v32, v33, v34, v35, v36, v44, v45);
                } else {
                    v32 = v30;
                    v31 = v19;
                    v40 = v16;
                    memcpy_uppcase(v40, v31, v32, v33, v34, v35, v36);
                }
            } else {
                v32 = v30;
                v31 = v19;
                v40 = v16;
                memcpy_lowcase(v40, v31, v32, v33, v34, v35, v36);
            }
            v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v30));
        }
        v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v43) >> 31)) & reinterpret_cast<unsigned char>(v43)) + reinterpret_cast<unsigned char>(v30)));
        v19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) + reinterpret_cast<unsigned char>(v30 - 1));
        goto addr_8058601_39;
        addr_8055f5c_21:
        v40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) + reinterpret_cast<unsigned char>(v30));
        eax47 = fun_804985c(v40, v31, v32, v33, v34, v35, v36, v46);
        v30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(eax47));
        goto addr_8055fae_25;
        addr_8055f83_23:
        ++v30;
        goto addr_8055fae_25;
        addr_8055e04_12:
        if (v16) {
            if (!0 && !1) {
                if (1) {
                    v32 = reinterpret_cast<void**>(0xfffffffe);
                    v31 = reinterpret_cast<void**>(32);
                    v40 = v16;
                    fun_804964c(v40, 32, 0xfffffffe, v33, v34, v35, v36);
                    v16 = v16 + 0xfffffffe;
                } else {
                    v32 = reinterpret_cast<void**>(0xfffffffe);
                    v31 = reinterpret_cast<void**>(48);
                    v40 = v16;
                    fun_804964c(v40, 48, 0xfffffffe, v33, v34, v35, v36);
                    v16 = v16 + 0xfffffffe;
                }
            }
            edx48 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19));
            *reinterpret_cast<void***>(v16) = *reinterpret_cast<void***>(&edx48);
            ++v16;
        }
        ++v15;
        goto addr_8058601_39;
        addr_8055d6b_16:
        if (v29 != 37) {
            goto addr_8055eb4_9;
        }
        while (1) {
            ++v19;
            eax49 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19));
            v50 = *reinterpret_cast<signed char*>(&eax49);
            if (v50 != 48) {
                if (v50 > 48) {
                    if (v50 == 94) {
                        v26 = 1;
                        continue;
                    } else {
                        if (v50 != 95) 
                            break;
                    }
                } else {
                    if (v50 == 35) {
                        v27 = 1;
                        continue;
                    } else {
                        if (v50 != 45) 
                            goto addr_8056176_55;
                    }
                }
            }
            eax51 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19));
            v21 = *reinterpret_cast<signed char*>(&eax51);
        }
        addr_80561b0_57:
        eax52 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19));
        if (*reinterpret_cast<signed char*>(&eax52) - 48 <= 9) {
            v23 = reinterpret_cast<void**>(0);
            do {
                if (reinterpret_cast<signed char>(v23) > reinterpret_cast<signed char>(0xccccccc) || reinterpret_cast<int1_t>(v23 == 0xccccccc) && (eax53 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19)), *reinterpret_cast<signed char*>(&eax53) - 48 > 7)) {
                    v23 = reinterpret_cast<void**>(0x7fffffff);
                } else {
                    eax54 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v23) << 2) + reinterpret_cast<unsigned char>(v23));
                    eax55 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19));
                    v23 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax54) + reinterpret_cast<uint32_t>(eax54) + (*reinterpret_cast<signed char*>(&eax55) - 48));
                }
                ++v19;
                eax56 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19));
            } while (*reinterpret_cast<signed char*>(&eax56) - 48 <= 9);
        }
        eax57 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19));
        v58 = *reinterpret_cast<signed char*>(&eax57);
        if (v58 == 69 || v58 == 79) {
            eax59 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19));
            v60 = *reinterpret_cast<signed char*>(&eax59);
            ++v19;
        } else {
            v60 = 0;
        }
        eax61 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19));
        switch (*reinterpret_cast<signed char*>(&eax61)) {
        case 0:
            --v19;
            goto addr_805843e_69;
        case 37:
            if (v60) {
                addr_805843e_69:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
            case 49:
            case 50:
            case 51:
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 69:
            case 74:
            case 75:
            case 76:
            case 79:
            case 81:
            case 91:
            case 92:
            case 93:
            case 94:
            case 95:
            case 96:
            case 0x66:
            case 0x69:
            case 0x6f:
            case 0x71:
            case 0x76:
                v62 = reinterpret_cast<void**>(1);
            } else {
                v63 = v23 - 1;
                if ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v63) >> 31)) & reinterpret_cast<unsigned char>(v63)) + 1 >= reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
                    goto addr_8056325_72;
                if (!v16) 
                    goto addr_80563d3_74; else 
                    goto addr_8056341_75;
            }
            while (eax64 = *reinterpret_cast<unsigned char*>(1 - reinterpret_cast<unsigned char>(v62) + reinterpret_cast<unsigned char>(v19)), *reinterpret_cast<signed char*>(&eax64) != 37) {
                ++v62;
            }
            v65 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) - reinterpret_cast<unsigned char>(v62));
            if ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v65) >> 31)) & reinterpret_cast<unsigned char>(v65)) + reinterpret_cast<unsigned char>(v62) >= reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
                goto addr_80584bb_79;
            if (v16) {
                if (!0 && reinterpret_cast<signed char>(v65) > reinterpret_cast<signed char>(0)) {
                    if (v21 != 48) {
                        fun_804964c(v16, 32, v65, v33, v34, v35, v36);
                        v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v65));
                    } else {
                        fun_804964c(v16, 48, v65, v33, v34, v35, v36);
                        v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v65));
                    }
                }
                if (1) {
                    if (!v26) {
                        v32 = v62;
                        v31 = reinterpret_cast<void**>(1 - reinterpret_cast<unsigned char>(v62) + reinterpret_cast<unsigned char>(v19));
                        v40 = v16;
                        fun_804983c(v40, v31, v32, v33, v34, v35, v36, v66, v67);
                    } else {
                        v32 = v62;
                        v31 = reinterpret_cast<void**>(1 - reinterpret_cast<unsigned char>(v62) + reinterpret_cast<unsigned char>(v19));
                        v40 = v16;
                        memcpy_uppcase(v40, v31, v32, v33, v34, v35, v36);
                    }
                } else {
                    v32 = v62;
                    v31 = reinterpret_cast<void**>(1 - reinterpret_cast<unsigned char>(v62) + reinterpret_cast<unsigned char>(v19));
                    v40 = v16;
                    memcpy_lowcase(v40, v31, v32, v33, v34, v35, v36);
                }
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v62));
            }
            v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v65) >> 31)) & reinterpret_cast<unsigned char>(v65)) + reinterpret_cast<unsigned char>(v62)));
            goto addr_8058601_39;
            addr_80563d3_74:
            v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v63) >> 31)) & reinterpret_cast<unsigned char>(v63)) + 1));
            goto addr_8058601_39;
            addr_8056341_75:
            if (!0 && reinterpret_cast<signed char>(v63) > reinterpret_cast<signed char>(0)) {
                if (v21 != 48) {
                    v32 = v63;
                    v31 = reinterpret_cast<void**>(32);
                    v40 = v16;
                    fun_804964c(v40, 32, v32, v33, v34, v35, v36);
                    v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v63));
                } else {
                    v32 = v63;
                    v31 = reinterpret_cast<void**>(48);
                    v40 = v16;
                    fun_804964c(v40, 48, v32, v33, v34, v35, v36);
                    v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v63));
                }
            }
            edx68 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19));
            *reinterpret_cast<void***>(v16) = *reinterpret_cast<void***>(&edx68);
            ++v16;
            goto addr_80563d3_74;
        case 58:
            v69 = reinterpret_cast<void*>(1);
            while (eax70 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v19) + reinterpret_cast<uint32_t>(v69)), *reinterpret_cast<signed char*>(&eax70) == 58) {
                v69 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v69) + 1);
            }
            eax71 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v19) + reinterpret_cast<uint32_t>(v69));
            if (*reinterpret_cast<signed char*>(&eax71) != 0x7a) 
                goto addr_805843e_69;
            v19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) + reinterpret_cast<uint32_t>(v69));
            break;
        case 65:
            if (v60) 
                goto addr_805843e_69;
            if (v27) {
                v26 = 1;
                v24 = 0;
                goto addr_805663b_104;
            }
        case 66:
            if (v60) 
                goto addr_805843e_69;
            if (v27) {
                v26 = 1;
                v24 = 0;
                goto addr_805663b_104;
            }
        case 67:
            if (v60 == 79) 
                goto addr_805843e_69;
            if (v60 == 69) 
                goto addr_805663b_104;
            ecx72 = *reinterpret_cast<void***>(v11 + 20);
            ecx73 = *reinterpret_cast<void***>(v11 + 20);
            if (reinterpret_cast<int32_t>(ecx73 - ((__intrinsic() >> 5) - (reinterpret_cast<signed char>(ecx73) >> 31)) * 100) >= reinterpret_cast<int32_t>(0) || (__intrinsic() >> 5) - (reinterpret_cast<signed char>(ecx72) >> 31) + 19 <= 0) {
            }
            v22 = reinterpret_cast<void**>(2);
            v74 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v11 + 20)) < reinterpret_cast<signed char>(0xfffff894));
            goto addr_8056a1a_114;
        case 68:
            if (v60) 
                goto addr_805843e_69;
            v75 = reinterpret_cast<void**>(0x8061ce4);
            goto addr_80564a6_117;
        case 70:
            if (v60) 
                goto addr_805843e_69;
            v75 = reinterpret_cast<void**>(0x8061ced);
            goto addr_80564a6_117;
        case 71:
        case 86:
        case 0x67:
            if (v60 == 69) 
                goto addr_805843e_69;
            v76 = *reinterpret_cast<void***>(v11 + 20);
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(v11 + 20)) >= reinterpret_cast<signed char>(0)) {
                v77 = reinterpret_cast<void*>(0xffffff9c);
            } else {
                v77 = reinterpret_cast<void*>(0x12c);
            }
            v78 = reinterpret_cast<void*>(0);
            eax79 = *reinterpret_cast<void***>(v11 + 28);
            v80 = *reinterpret_cast<void***>(v11 + 24);
            eax81 = iso_week_days(eax79, v80, v32, v33, v34, v35, v36);
            v82 = eax81;
            if (reinterpret_cast<int32_t>(v82) >= reinterpret_cast<int32_t>(0)) {
                v83 = *reinterpret_cast<void***>(v11 + 24);
                v84 = *reinterpret_cast<void***>(v11 + 28);
                if (reinterpret_cast<unsigned char>(v76) + reinterpret_cast<uint32_t>(v77) & 3 || !(reinterpret_cast<unsigned char>(v76) + reinterpret_cast<uint32_t>(v77) - ((__intrinsic() >> 5) - (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v76) + reinterpret_cast<uint32_t>(v77)) >> 31)) * 100) && reinterpret_cast<unsigned char>(v76) + reinterpret_cast<uint32_t>(v77) - ((__intrinsic() >> 7) - (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v76) + reinterpret_cast<uint32_t>(v77)) >> 31)) * 0x190) {
                    v85 = 0;
                } else {
                    v85 = 1;
                }
                v31 = v83;
                v40 = reinterpret_cast<void**>(0xfffffe93 - v85 + reinterpret_cast<unsigned char>(v84));
                eax86 = iso_week_days(v40, v31, v32, v33, v34, v35, v36);
                if (reinterpret_cast<int32_t>(eax86) >= reinterpret_cast<int32_t>(0)) {
                    v78 = reinterpret_cast<void*>(1);
                    v82 = eax86;
                }
            } else {
                v78 = reinterpret_cast<void*>(0xffffffff);
                v87 = *reinterpret_cast<void***>(v11 + 24);
                v88 = *reinterpret_cast<void***>(v11 + 28);
                if (reinterpret_cast<unsigned char>(v76) + reinterpret_cast<uint32_t>(v77) - 1 & 3 || (ecx89 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v76) + reinterpret_cast<uint32_t>(v77) + 0xffffffff), !(reinterpret_cast<uint32_t>(ecx89) - ((__intrinsic() >> 5) - (reinterpret_cast<int32_t>(ecx89) >> 31)) * 100)) && (ecx90 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v76) + reinterpret_cast<uint32_t>(v77) + 0xffffffff), !!(reinterpret_cast<uint32_t>(ecx90) - ((__intrinsic() >> 7) - (reinterpret_cast<int32_t>(ecx90) >> 31)) * 0x190))) {
                    v91 = reinterpret_cast<void*>(0);
                } else {
                    v91 = reinterpret_cast<void*>(1);
                }
                v31 = v87;
                v40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v91) + 0x16d + reinterpret_cast<unsigned char>(v88));
                eax92 = iso_week_days(v40, v31, v32, v33, v34, v35, v36);
                v82 = eax92;
            }
            eax93 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v19));
            v94 = *reinterpret_cast<signed char*>(&eax93);
            if (v94 != 71) 
                goto addr_8057c66_135;
            v22 = reinterpret_cast<void**>(4);
            v74 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v11 + 20)) < reinterpret_cast<signed char>(0xfffff894 - reinterpret_cast<uint32_t>(v78)));
            goto addr_8056a1a_114;
            addr_8057c66_135:
            if (v94 != 0x67) {
                v22 = reinterpret_cast<void**>(2);
                v95 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(__intrinsic()) + reinterpret_cast<uint32_t>(v82)) >> 2) - (reinterpret_cast<int32_t>(v82) >> 31) + 1);
                goto addr_80569ff_138;
            } else {
                ecx96 = *reinterpret_cast<void***>(v11 + 20);
                ecx97 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ecx96 - ((__intrinsic() >> 5) - (reinterpret_cast<signed char>(ecx96) >> 31)) * 100) + reinterpret_cast<uint32_t>(v78));
                v22 = reinterpret_cast<void**>(2);
                if (reinterpret_cast<signed char>(ecx97 - ((__intrinsic() >> 5) - (reinterpret_cast<int32_t>(ecx97) >> 31)) * 100) >= reinterpret_cast<signed char>(0)) {
                    v98 = reinterpret_cast<void**>(ecx97 - ((__intrinsic() >> 5) - (reinterpret_cast<int32_t>(ecx97) >> 31)) * 100);
                } else {
                    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(v11 + 20)) >= reinterpret_cast<signed char>(0xfffff894 - reinterpret_cast<uint32_t>(v78))) {
                        v99 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx97 - ((__intrinsic() >> 5) - (reinterpret_cast<int32_t>(ecx97) >> 31)) * 100) + 100);
                    } else {
                        v99 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(ecx97 - ((__intrinsic() >> 5) - (reinterpret_cast<int32_t>(ecx97) >> 31)) * 100));
                    }
                    v98 = v99;
                }
                v95 = v98;
                goto addr_80569ff_138;
            }
        case 72:
            if (v60 == 69) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(2);
            v95 = *reinterpret_cast<void***>(v11 + 8);
            goto addr_80569ff_138;
        case 73:
            if (v60 == 69) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(2);
            v95 = v14;
            goto addr_80569ff_138;
        case 77:
            if (v60 == 69) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(2);
            v95 = *reinterpret_cast<void***>(v11 + 4);
            goto addr_80569ff_138;
        case 78:
            if (v60 == 69) 
                goto addr_805843e_69;
            v95 = a7;
            if (!reinterpret_cast<int1_t>(v23 == 0xffffffff)) {
                v100 = v23;
                while (reinterpret_cast<signed char>(v100) <= reinterpret_cast<signed char>(8)) {
                    v95 = reinterpret_cast<void**>((__intrinsic() >> 2) - reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(v95) >> 31));
                    ++v100;
                }
            } else {
                v23 = reinterpret_cast<void**>(9);
            }
            v22 = v23;
            goto addr_80569ff_138;
        case 80:
            v24 = 1;
        case 0x70:
            if (v27) {
                v26 = 0;
                v24 = 1;
                goto addr_805663b_104;
            }
        case 82:
            v75 = reinterpret_cast<void**>(0x8061cf6);
            goto addr_80564a6_117;
        case 83:
            if (v60 == 69) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(2);
            v95 = *reinterpret_cast<void***>(v11);
            goto addr_80569ff_138;
        case 84:
            v75 = reinterpret_cast<void**>(0x8061cfc);
            goto addr_80564a6_117;
        case 85:
            if (v60 == 69) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(2);
            ecx101 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v11 + 28)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v11 + 24)) + 7);
            v95 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(__intrinsic()) + reinterpret_cast<uint32_t>(ecx101)) >> 2) - reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx101) >> 31));
            goto addr_80569ff_138;
        case 87:
            if (v60 == 69) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(2);
            ebx102 = *reinterpret_cast<void***>(v11 + 28);
            ecx103 = reinterpret_cast<signed char*>(*reinterpret_cast<void***>(v11 + 24) + 6);
            v104 = (reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(__intrinsic()) + reinterpret_cast<uint32_t>(ecx103)) >> 2) - reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx103) >> 31);
            ecx105 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx102) - (reinterpret_cast<uint32_t>(ecx103) - ((v104 << 3) - v104)) + 7);
            v95 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(__intrinsic()) + reinterpret_cast<uint32_t>(ecx105)) >> 2) - reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx105) >> 31));
            goto addr_80569ff_138;
        case 88:
            if (v60 == 79) 
                goto addr_805843e_69;
            goto addr_805663b_104;
        case 89:
            if (v60 == 69) 
                goto addr_805663b_104;
            if (v60 == 79) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(4);
            v74 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v11 + 20)) < reinterpret_cast<signed char>(0xfffff894));
            goto addr_8056a1a_114;
        case 90:
            if (v27) {
                v26 = 0;
                v24 = 1;
            }
            if (!v18) {
                v18 = reinterpret_cast<void**>(0x8061d05);
            }
            v40 = v18;
            eax107 = fun_804985c(v40, v31, v32, v33, v34, v35, v36, v106);
            v108 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) - reinterpret_cast<unsigned char>(eax107));
            if ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v108) >> 31)) & reinterpret_cast<unsigned char>(v108)) + reinterpret_cast<unsigned char>(eax107) >= reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
                goto addr_805805d_180;
            if (v16) {
                if (!0 && reinterpret_cast<signed char>(v108) > reinterpret_cast<signed char>(0)) {
                    if (v21 != 48) {
                        fun_804964c(v16, 32, v108, v33, v34, v35, v36);
                        v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v108));
                    } else {
                        fun_804964c(v16, 48, v108, v33, v34, v35, v36);
                        v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v108));
                    }
                }
                if (!v24) {
                    if (!v26) {
                        v32 = eax107;
                        v31 = v18;
                        v40 = v16;
                        fun_804983c(v40, v31, v32, v33, v34, v35, v36, v109, v110);
                    } else {
                        v32 = eax107;
                        v31 = v18;
                        v40 = v16;
                        memcpy_uppcase(v40, v31, v32, v33, v34, v35, v36);
                    }
                } else {
                    v32 = eax107;
                    v31 = v18;
                    v40 = v16;
                    memcpy_lowcase(v40, v31, v32, v33, v34, v35, v36);
                }
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(eax107));
            }
            v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v108) >> 31)) & reinterpret_cast<unsigned char>(v108)) + reinterpret_cast<unsigned char>(eax107)));
            goto addr_8058601_39;
        case 97:
            if (v60) 
                goto addr_805843e_69;
            if (v27) {
                v26 = 1;
                v24 = 0;
                goto addr_805663b_104;
            }
        case 98:
        case 0x68:
            if (v27) {
                v26 = 1;
                v24 = 0;
            }
            if (v60) 
                goto addr_805843e_69;
            goto addr_805663b_104;
        case 99:
            if (v60 == 79) 
                goto addr_805843e_69;
            goto addr_805663b_104;
        case 100:
            if (v60 == 69) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(2);
            v95 = *reinterpret_cast<void***>(v11 + 12);
            goto addr_80569ff_138;
        case 0x65:
            if (v60 == 69) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(2);
            v95 = *reinterpret_cast<void***>(v11 + 12);
            goto addr_80569e3_206;
        case 0x6a:
            if (v60 == 69) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(3);
            v74 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v11 + 28)) < reinterpret_cast<signed char>(0xffffffff));
            goto addr_8056a1a_114;
        case 0x6b:
            if (v60 == 69) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(2);
            v95 = *reinterpret_cast<void***>(v11 + 8);
            goto addr_80569e3_206;
        case 0x6c:
            if (v60 == 69) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(2);
            v95 = v14;
            goto addr_80569e3_206;
        case 0x6d:
            if (v60 == 69) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(2);
            v74 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(v11 + 16)) < reinterpret_cast<signed char>(0xffffffff));
            goto addr_8056a1a_114;
        case 0x6e:
            v111 = v23 - 1;
            if ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v111) >> 31)) & reinterpret_cast<unsigned char>(v111)) + 1 >= reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
                goto addr_8057519_216;
            if (v16) {
                if (!0 && reinterpret_cast<signed char>(v111) > reinterpret_cast<signed char>(0)) {
                    if (v21 != 48) {
                        v32 = v111;
                        v31 = reinterpret_cast<void**>(32);
                        v40 = v16;
                        fun_804964c(v40, 32, v32, v33, v34, v35, v36);
                        v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v111));
                    } else {
                        v32 = v111;
                        v31 = reinterpret_cast<void**>(48);
                        v40 = v16;
                        fun_804964c(v40, 48, v32, v33, v34, v35, v36);
                        v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v111));
                    }
                }
                *reinterpret_cast<void***>(v16) = reinterpret_cast<void**>(10);
                ++v16;
            }
            v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v111) >> 31)) & reinterpret_cast<unsigned char>(v111)) + 1));
            goto addr_8058601_39;
        case 0x73:
            v40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffffa70);
            eax112 = fun_804981c(v40, v31, v32, v33, v34, v35, v36);
            v113 = eax112;
            v114 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) - 26 + 14);
            eax115 = v113 >> 31;
            v74 = *reinterpret_cast<unsigned char*>(&eax115);
            do {
                v113 = (__intrinsic() >> 2) - reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v113) >> 31);
                --v114;
                if (!v74) {
                }
            } while (v113);
            v22 = reinterpret_cast<void**>(1);
            v116 = 0;
            goto addr_8056b1a_230;
        case 0x74:
            v117 = v23 - 1;
            if ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v117) >> 31)) & reinterpret_cast<unsigned char>(v117)) + 1 >= reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
                goto addr_805780d_232;
            if (v16) {
                if (!0 && reinterpret_cast<signed char>(v117) > reinterpret_cast<signed char>(0)) {
                    if (v21 != 48) {
                        v32 = v117;
                        v31 = reinterpret_cast<void**>(32);
                        v40 = v16;
                        fun_804964c(v40, 32, v32, v33, v34, v35, v36);
                        v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v117));
                    } else {
                        v32 = v117;
                        v31 = reinterpret_cast<void**>(48);
                        v40 = v16;
                        fun_804964c(v40, 48, v32, v33, v34, v35, v36);
                        v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v117));
                    }
                }
                *reinterpret_cast<void***>(v16) = reinterpret_cast<void**>(9);
                ++v16;
            }
            v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v117) >> 31)) & reinterpret_cast<unsigned char>(v117)) + 1));
            goto addr_8058601_39;
        case 0x75:
            v22 = reinterpret_cast<void**>(1);
            ecx118 = reinterpret_cast<signed char*>(*reinterpret_cast<void***>(v11 + 24) + 6);
            v119 = (reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(__intrinsic()) + reinterpret_cast<uint32_t>(ecx118)) >> 2) - reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx118) >> 31);
            v95 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx118) - ((v119 << 3) - v119) + 1);
            goto addr_80569ff_138;
        case 0x77:
            if (v60 == 69) 
                goto addr_805843e_69;
            v22 = reinterpret_cast<void**>(1);
            v95 = *reinterpret_cast<void***>(v11 + 24);
            goto addr_80569ff_138;
        case 0x78:
            if (v60 == 79) 
                goto addr_805843e_69;
            goto addr_805663b_104;
        case 0x79:
            if (v60 == 69) 
                goto addr_805663b_104;
            ecx120 = *reinterpret_cast<void***>(v11 + 20);
            v121 = ecx120 - ((__intrinsic() >> 5) - (reinterpret_cast<signed char>(ecx120) >> 31)) * 100;
            if (reinterpret_cast<signed char>(v121) < reinterpret_cast<signed char>(0)) {
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(v11 + 20)) >= reinterpret_cast<signed char>(0xfffff894)) {
                    v122 = v121 + 100;
                } else {
                    v122 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v121));
                }
                v121 = v122;
            }
            v22 = reinterpret_cast<void**>(2);
            v95 = v121;
            goto addr_80569ff_138;
        case 0x7a:
            v69 = reinterpret_cast<void*>(0);
        case 0x72:
            goto 0x805663b;
        }
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(v11 + 32)) < reinterpret_cast<signed char>(0)) 
            goto addr_8058601_39;
        v123 = *reinterpret_cast<void***>(v11 + 36);
        ecx124 = (reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(__intrinsic()) + reinterpret_cast<unsigned char>(v123)) >> 5) - (reinterpret_cast<signed char>(v123) >> 31);
        edx125 = ((__intrinsic() + ecx124 >> 5) - (ecx124 >> 31)) * 4;
        edx126 = ((reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(__intrinsic()) + reinterpret_cast<unsigned char>(v123)) >> 5) - (reinterpret_cast<signed char>(v123) >> 31)) * 4;
        if (v69 == 1) 
            goto addr_8058364_255;
        if (reinterpret_cast<uint32_t>(v69) < 1) {
            v22 = reinterpret_cast<void**>(5);
            eax127 = reinterpret_cast<unsigned char>(v123) >> 31;
            v74 = *reinterpret_cast<unsigned char*>(&eax127);
            v128 = 0;
        } else {
            if (v69 == 2) {
                addr_80583a1_259:
                v22 = reinterpret_cast<void**>(9);
                eax129 = reinterpret_cast<unsigned char>(v123) >> 31;
                v74 = *reinterpret_cast<unsigned char*>(&eax129);
                v128 = 20;
            } else {
                if (v69 != 3) {
                    goto addr_805843e_69;
                }
                if (reinterpret_cast<unsigned char>(v123) - ((edx126 << 4) - edx126)) 
                    goto addr_80583a1_259; else 
                    goto addr_80583f6_263;
            }
        }
        addr_80569da_264:
        v116 = 1;
        addr_8056a2b_265:
        if (v60 != 79 || (eax130 = static_cast<uint32_t>(v74) ^ 1, !*reinterpret_cast<signed char*>(&eax130))) {
            v114 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) - 26 + 14);
            if (v74) {
            }
            do {
                eax131 = v128 & 1;
                if (*reinterpret_cast<signed char*>(&eax131)) {
                    --v114;
                }
                v128 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v128) >> 1);
                --v114;
            } while (__intrinsic() >> 3 || v128);
        } else {
            addr_805663b_104:
            if (v60) {
                goto addr_8056687_272;
            }
        }
        addr_8056b1a_230:
        if (reinterpret_cast<signed char>(v22) < reinterpret_cast<signed char>(v23)) {
            v22 = v23;
        }
        if (!v74) {
            if (!v116) {
                v132 = 0;
            } else {
                v132 = 43;
            }
            edx133 = v132;
            v134 = *reinterpret_cast<unsigned char*>(&edx133);
        } else {
            v134 = 45;
        }
        ecx135 = v134;
        if (v21 != 45) {
            if (reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(v114) - (reinterpret_cast<int32_t>(ebp8) - 26 + 14) + reinterpret_cast<unsigned char>(v22) - static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!*reinterpret_cast<unsigned char*>(&ecx135)))) <= reinterpret_cast<signed char>(0)) {
                if (!*reinterpret_cast<unsigned char*>(&ecx135)) {
                    addr_8057146_283:
                    v136 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) - reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(ebp8) - 26 + 14 - reinterpret_cast<unsigned char>(v114)));
                    if ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v136) >> 31)) & reinterpret_cast<unsigned char>(v136)) + reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(ebp8) - 26 + 14 - reinterpret_cast<unsigned char>(v114)) >= reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
                        goto addr_80571a6_284;
                } else {
                    v137 = v23 - 1;
                    if ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v137) >> 31)) & reinterpret_cast<unsigned char>(v137)) + 1 >= reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
                        goto addr_805708e_286;
                    if (!v16) 
                        goto addr_805713a_288; else 
                        goto addr_80570aa_289;
                }
            } else {
                if (v21 != 95) {
                    if (reinterpret_cast<unsigned char>(v22) >= reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15))) 
                        goto addr_8056ebd_292;
                    if (!*reinterpret_cast<unsigned char*>(&ecx135)) 
                        goto addr_8056fe1_294; else 
                        goto addr_8056ed9_295;
                } else {
                    if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v114) - (reinterpret_cast<int32_t>(ebp8) - 26 + 14) + reinterpret_cast<unsigned char>(v22) - static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!*reinterpret_cast<unsigned char*>(&ecx135)))) >= reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15))) 
                        goto addr_8056d02_297;
                    if (!v16) 
                        goto addr_8056d46_299; else 
                        goto addr_8056d1a_300;
                }
            }
        } else {
            if (!*reinterpret_cast<unsigned char*>(&ecx135)) 
                goto addr_8057146_283;
            v138 = v23 - 1;
            if ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v138) >> 31)) & reinterpret_cast<unsigned char>(v138)) + 1 >= reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
                goto addr_8056be3_303;
            if (!v16) 
                goto addr_8056c8f_305; else 
                goto addr_8056bff_306;
        }
        if (v16) {
            if (!v22 && reinterpret_cast<signed char>(v136) > reinterpret_cast<signed char>(0)) {
                if (v21 != 48) {
                    fun_804964c(v16, 32, v136, v33, v34, v35, v36);
                    v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v136));
                } else {
                    fun_804964c(v16, 48, v136, v33, v34, v35, v36);
                    v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v136));
                }
            }
            if (1) {
                if (!v26) {
                    v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) - 26 + 14 - reinterpret_cast<unsigned char>(v114));
                    v31 = v114;
                    v40 = v16;
                    fun_804983c(v40, v31, v32, v33, v34, v35, v36, v139, v140);
                } else {
                    v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) - 26 + 14 - reinterpret_cast<unsigned char>(v114));
                    v31 = v114;
                    v40 = v16;
                    memcpy_uppcase(v40, v31, v32, v33, v34, v35, v36);
                }
            } else {
                v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) - 26 + 14 - reinterpret_cast<unsigned char>(v114));
                v31 = v114;
                v40 = v16;
                memcpy_lowcase(v40, v31, v32, v33, v34, v35, v36);
            }
            v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(ebp8) - 26 + 14 - reinterpret_cast<unsigned char>(v114)));
        }
        v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v136) >> 31)) & reinterpret_cast<unsigned char>(v136)) + reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(ebp8) - 26 + 14 - reinterpret_cast<unsigned char>(v114))));
        goto addr_8058601_39;
        addr_805713a_288:
        v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v137) >> 31)) & reinterpret_cast<unsigned char>(v137)) + 1));
        goto addr_8057146_283;
        addr_80570aa_289:
        if (!v22 && reinterpret_cast<signed char>(v137) > reinterpret_cast<signed char>(0)) {
            if (v21 != 48) {
                v32 = v137;
                v31 = reinterpret_cast<void**>(32);
                v40 = v16;
                fun_804964c(v40, 32, v32, v33, v34, v35, v36);
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v137));
            } else {
                v32 = v137;
                v31 = reinterpret_cast<void**>(48);
                v40 = v16;
                fun_804964c(v40, 48, v32, v33, v34, v35, v36);
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v137));
            }
        }
        edx141 = *reinterpret_cast<unsigned char*>(&ecx135);
        *reinterpret_cast<void***>(v16) = *reinterpret_cast<void***>(&edx141);
        ++v16;
        goto addr_805713a_288;
        addr_8056fe1_294:
        if (v16) {
            v32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v114) - (reinterpret_cast<int32_t>(ebp8) - 26 + 14) + reinterpret_cast<unsigned char>(v22) - static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!*reinterpret_cast<unsigned char*>(&ecx135))));
            v31 = reinterpret_cast<void**>(48);
            v40 = v16;
            fun_804964c(v40, 48, v32, v33, v34, v35, v36);
            v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v114) - (reinterpret_cast<int32_t>(ebp8) - 26 + 14) + reinterpret_cast<unsigned char>(v22) - static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!*reinterpret_cast<unsigned char*>(&ecx135)))));
        }
        v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v114) - (reinterpret_cast<int32_t>(ebp8) - 26 + 14) + reinterpret_cast<unsigned char>(v22) - static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!*reinterpret_cast<unsigned char*>(&ecx135)))));
        v23 = reinterpret_cast<void**>(0);
        goto addr_8057146_283;
        addr_8056ed9_295:
        v142 = v23 - 1;
        if ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v142) >> 31)) & reinterpret_cast<unsigned char>(v142)) + 1 >= reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
            goto addr_8056f29_325;
        if (v16) 
            goto addr_8056f45_327;
        addr_8056fd5_328:
        v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v142) >> 31)) & reinterpret_cast<unsigned char>(v142)) + 1));
        goto addr_8056fe1_294;
        addr_8056f45_327:
        if (!v22 && reinterpret_cast<signed char>(v142) > reinterpret_cast<signed char>(0)) {
            if (v21 != 48) {
                v32 = v142;
                v31 = reinterpret_cast<void**>(32);
                v40 = v16;
                fun_804964c(v40, 32, v32, v33, v34, v35, v36);
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v142));
            } else {
                v32 = v142;
                v31 = reinterpret_cast<void**>(48);
                v40 = v16;
                fun_804964c(v40, 48, v32, v33, v34, v35, v36);
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v142));
            }
        }
        edx143 = *reinterpret_cast<unsigned char*>(&ecx135);
        *reinterpret_cast<void***>(v16) = *reinterpret_cast<void***>(&edx143);
        ++v16;
        goto addr_8056fd5_328;
        addr_8056d46_299:
        v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v114) - (reinterpret_cast<int32_t>(ebp8) - 26 + 14) + reinterpret_cast<unsigned char>(v22) - static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!*reinterpret_cast<unsigned char*>(&ecx135)))));
        if (reinterpret_cast<signed char>(v23) <= reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(v114) - (reinterpret_cast<int32_t>(ebp8) - 26 + 14) + reinterpret_cast<unsigned char>(v22) - static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!*reinterpret_cast<unsigned char*>(&ecx135))))) {
            v144 = reinterpret_cast<void**>(0);
        } else {
            v144 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v114) - (reinterpret_cast<int32_t>(ebp8) - 26 + 14) + reinterpret_cast<unsigned char>(v22) - static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!*reinterpret_cast<unsigned char*>(&ecx135)))));
        }
        v23 = v144;
        if (!*reinterpret_cast<unsigned char*>(&ecx135)) 
            goto addr_8057146_283;
        v145 = v23 - 1;
        if ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v145) >> 31)) & reinterpret_cast<unsigned char>(v145)) + 1 >= reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
            goto addr_8056deb_337;
        if (v16) 
            goto addr_8056e07_339;
        addr_8056e97_340:
        v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v145) >> 31)) & reinterpret_cast<unsigned char>(v145)) + 1));
        goto addr_8057146_283;
        addr_8056e07_339:
        if (!v22 && reinterpret_cast<signed char>(v145) > reinterpret_cast<signed char>(0)) {
            if (v21 != 48) {
                v32 = v145;
                v31 = reinterpret_cast<void**>(32);
                v40 = v16;
                fun_804964c(v40, 32, v32, v33, v34, v35, v36);
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v145));
            } else {
                v32 = v145;
                v31 = reinterpret_cast<void**>(48);
                v40 = v16;
                fun_804964c(v40, 48, v32, v33, v34, v35, v36);
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v145));
            }
        }
        edx146 = *reinterpret_cast<unsigned char*>(&ecx135);
        *reinterpret_cast<void***>(v16) = *reinterpret_cast<void***>(&edx146);
        ++v16;
        goto addr_8056e97_340;
        addr_8056d1a_300:
        v32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v114) - (reinterpret_cast<int32_t>(ebp8) - 26 + 14) + reinterpret_cast<unsigned char>(v22) - static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!*reinterpret_cast<unsigned char*>(&ecx135))));
        v31 = reinterpret_cast<void**>(32);
        v40 = v16;
        fun_804964c(v40, 32, v32, v33, v34, v35, v36);
        v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v114) - (reinterpret_cast<int32_t>(ebp8) - 26 + 14) + reinterpret_cast<unsigned char>(v22) - static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!*reinterpret_cast<unsigned char*>(&ecx135)))));
        goto addr_8056d46_299;
        addr_8056c8f_305:
        v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v138) >> 31)) & reinterpret_cast<unsigned char>(v138)) + 1));
        goto addr_8057146_283;
        addr_8056bff_306:
        if (!v22 && reinterpret_cast<signed char>(v138) > reinterpret_cast<signed char>(0)) {
            if (v21 != 48) {
                v32 = v138;
                v31 = reinterpret_cast<void**>(32);
                v40 = v16;
                fun_804964c(v40, 32, v32, v33, v34, v35, v36);
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v138));
            } else {
                v32 = v138;
                v31 = reinterpret_cast<void**>(48);
                v40 = v16;
                fun_804964c(v40, 48, v32, v33, v34, v35, v36);
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v138));
            }
        }
        edx147 = *reinterpret_cast<unsigned char*>(&ecx135);
        *reinterpret_cast<void***>(v16) = *reinterpret_cast<void***>(&edx147);
        ++v16;
        goto addr_8056c8f_305;
        addr_8056687_272:
        v33 = v11;
        v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffffa70);
        v31 = reinterpret_cast<void**>(0x400);
        v40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffffbe6);
        eax148 = fun_8049a3c(v40, 0x400, v32, v33, v34, v35, v36);
        if (!eax148) {
            addr_8058601_39:
            ++v19;
            continue;
        } else {
            v149 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax148) - 1);
            v150 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) - reinterpret_cast<unsigned char>(v149));
            if ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v150) >> 31)) & reinterpret_cast<unsigned char>(v150)) + reinterpret_cast<unsigned char>(v149) >= reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
                goto addr_8056739_350;
            if (v16) 
                goto addr_8056755_352;
        }
        addr_805685b_353:
        v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v150) >> 31)) & reinterpret_cast<unsigned char>(v150)) + reinterpret_cast<unsigned char>(v149)));
        goto addr_8058601_39;
        addr_8056755_352:
        if (!v22 && reinterpret_cast<signed char>(v150) > reinterpret_cast<signed char>(0)) {
            if (v21 != 48) {
                fun_804964c(v16, 32, v150, v33, v34, v35, v36);
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v150));
            } else {
                fun_804964c(v16, 48, v150, v33, v34, v35, v36);
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v150));
            }
        }
        if (!v24) {
            if (!v26) {
                v32 = v149;
                v31 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) - 0x41a + 1);
                v40 = v16;
                fun_804983c(v40, v31, v32, v33, v34, v35, v36, v151, v152);
            } else {
                v32 = v149;
                v31 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) - 0x41a + 1);
                v40 = v16;
                memcpy_uppcase(v40, v31, v32, v33, v34, v35, v36);
            }
        } else {
            v32 = v149;
            v31 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) - 0x41a + 1);
            v40 = v16;
            memcpy_lowcase(v40, v31, v32, v33, v34, v35, v36);
        }
        v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v149));
        goto addr_805685b_353;
        addr_80583f6_263:
        if (ecx124 - ((edx125 << 4) - edx125)) {
            addr_8058364_255:
            v22 = reinterpret_cast<void**>(6);
            eax153 = reinterpret_cast<unsigned char>(v123) >> 31;
            v74 = *reinterpret_cast<unsigned char*>(&eax153);
            v128 = 4;
            goto addr_80569da_264;
        } else {
            v22 = reinterpret_cast<void**>(3);
            eax154 = reinterpret_cast<unsigned char>(v123) >> 31;
            v74 = *reinterpret_cast<unsigned char*>(&eax154);
            v128 = 0;
            goto addr_80569da_264;
        }
        addr_8056a1a_114:
        v116 = 0;
        v128 = 0;
        goto addr_8056a2b_265;
        addr_80569ff_138:
        eax155 = reinterpret_cast<unsigned char>(v95) >> 31;
        v74 = *reinterpret_cast<unsigned char*>(&eax155);
        goto addr_8056a1a_114;
        addr_80564a6_117:
        v36 = a7;
        v35 = a6;
        v34 = v11;
        v33 = v75;
        v32 = reinterpret_cast<void**>(0xffffffff);
        v31 = reinterpret_cast<void**>(0);
        v40 = reinterpret_cast<void**>(static_cast<uint32_t>(v26));
        eax156 = strftime_case_(v40, 0, 0xffffffff, v33, v34, v35, v36);
        v157 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) - reinterpret_cast<unsigned char>(eax156));
        if ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v157) >> 31)) & reinterpret_cast<unsigned char>(v157)) + reinterpret_cast<unsigned char>(eax156) >= reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15)) 
            goto addr_805653f_364;
        if (v16) {
            if (!0 && reinterpret_cast<signed char>(v157) > reinterpret_cast<signed char>(0)) {
                if (v21 != 48) {
                    fun_804964c(v16, 32, v157, v33, v34, v35, v36);
                    v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v157));
                } else {
                    fun_804964c(v16, 48, v157, v33, v34, v35, v36);
                    v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(v157));
                }
            }
            v36 = a7;
            v35 = a6;
            v34 = v11;
            v33 = v75;
            v32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(v15));
            v31 = v16;
            v40 = reinterpret_cast<void**>(static_cast<uint32_t>(v26));
            strftime_case_(v40, v31, v32, v33, v34, v35, v36);
            v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(eax156));
        }
        v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + ((reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(v157) >> 31)) & reinterpret_cast<unsigned char>(v157)) + reinterpret_cast<unsigned char>(eax156)));
        goto addr_8058601_39;
        addr_80569e3_206:
        if (v21 != 48 && v21 != 45) {
            v21 = 95;
            goto addr_80569ff_138;
        }
        addr_8056176_55:
        goto addr_80561b0_57;
        addr_8055d4e_17:
        if (v29 >= 32) 
            goto addr_8055da5_11;
        if (v29 - 8 > 5) 
            goto addr_8055eb4_9;
        goto addr_8055da5_11;
    }
    if (v16 && a3) {
        *reinterpret_cast<void***>(v16) = reinterpret_cast<void**>(0);
    }
    v158 = v15;
    addr_805863d_378:
    eax159 = v158;
    ecx160 = v13 ^ g14;
    if (ecx160) {
        eax159 = fun_804995c(v40, v31, v32, v33, v34, v35, v36, v161, v162);
    }
    return eax159;
    addr_8056000_26:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_8055df5_13:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_80584bb_79:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_8056325_72:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_80571a6_284:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_805708e_286:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_8056ebd_292:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_8056f29_325:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_8056d02_297:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_8056deb_337:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_8056be3_303:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_8056739_350:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_805653f_364:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_805805d_180:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_8057519_216:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
    addr_805780d_232:
    v158 = reinterpret_cast<void**>(0);
    goto addr_805863d_378;
}

int32_t mbrlen = 0x80498d2;

void* fun_80498cc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto mbrlen;
}

signed char fun_8049a8c(uint32_t a1);

void** memcpy_lowcase(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    unsigned char al8;
    uint32_t eax9;
    signed char al10;

    while (al8 = reinterpret_cast<uint1_t>(!!a3), --a3, !!al8) {
        eax9 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(a3));
        al10 = fun_8049a8c(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax9)));
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(a3)) = al10;
    }
    return a1;
}

int32_t strftime = 0x8049a42;

void* fun_8049a3c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto strftime;
}

int32_t __stack_chk_fail = 0x8049962;

void** fun_804995c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    goto __stack_chk_fail;
}

void* iso_week_days(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void* ecx8;
    uint32_t v9;

    ecx8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(a2) + 4 + 0x17a);
    v9 = (reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(__intrinsic()) + reinterpret_cast<uint32_t>(ecx8)) >> 2) - reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx8) >> 31);
    return reinterpret_cast<unsigned char>(a1) - (reinterpret_cast<uint32_t>(ecx8) - ((v9 << 3) - v9)) + 3;
}

void fseterr(void** a1, void** a2, void** a3, void** a4) {
    *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) | 32);
    return;
}

void** fun_80495ac(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void** xrealloc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** ebp6;
    void** eax7;

    eax7 = fun_80495ac(a1, a2, ebp6, __return_address(), a1, a2, a3, a4, a5);
    if (!eax7 && a2) {
        xalloc_die(a1, a2, ebp6, __return_address(), eax7);
    }
    return eax7;
}

void** x2nrealloc(void** a1, uint32_t* a2, uint32_t a3) {
    uint32_t v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    uint32_t v10;
    void** v11;
    void** v12;
    void** v13;
    void** eax14;

    v4 = *a2;
    if (a1) {
        if (0xaaaaaaaa / a3 <= v4) {
            xalloc_die(v5, v6, v7, v8, v9);
        }
        v4 = v4 + (v4 + 1 >> 1);
    } else {
        if (!v4) {
            v10 = 64 / a3;
            v4 = v10 + static_cast<unsigned char>(reinterpret_cast<uint1_t>(v10 == 0));
        }
    }
    *a2 = v4;
    eax14 = xrealloc(a1, v4 * a3, v11, v12, v13);
    return eax14;
}

void** xmemdup(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** ebp8;
    void** eax9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;

    eax9 = xmalloc(a2, v3, v4, v5, v6, v7, ebp8);
    eax13 = fun_804983c(eax9, a1, a2, v10, v11, v12, ebp8, __return_address(), a1);
    return eax13;
}

void** fun_804972c(void** a1, void** a2, void** a3, void** a4);

uint32_t bkm_scale(void** a1, void** a2, void** a3, void** a4);

uint32_t bkm_scale_by_power(void** a1, void** a2, int32_t a3, void** a4);

struct s14 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    uint32_t f8;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    int32_t f20;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    int32_t f32;
    unsigned char f36;
    signed char[3] pad40;
    int32_t f40;
};

struct s15 {
    signed char f0;
    void** f1;
};

void** xsum(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

struct s16 {
    signed char[4] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

int32_t is_infinitel(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

struct s17 {
    signed char[4] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

uint32_t rpl_isnanl(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

int32_t fun_80498ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

struct s18 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

void** fun_8049a4c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

struct s19 {
    signed char[4] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

struct s20 {
    signed char[4] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

struct s21 {
    signed char[4] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

void** xmax(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void** xstrtoumax(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    uint32_t eax14;
    int32_t v15;
    void*** eax16;
    void** edx17;
    void* eax18;
    uint32_t eax19;
    uint32_t eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void*** eax25;
    void** v26;
    void** eax27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void*** eax34;
    uint32_t eax35;
    void** v36;
    void** v37;
    void* v38;
    uint32_t eax39;
    void** v40;
    void** v41;
    void** v42;
    struct s6* eax43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    struct s6* eax49;
    uint32_t eax50;
    void** v51;
    uint32_t eax52;
    uint32_t v53;
    uint32_t eax54;
    uint32_t eax55;
    uint32_t eax56;
    uint32_t eax57;
    uint32_t eax58;
    uint32_t eax59;
    uint32_t eax60;
    uint32_t eax61;
    uint32_t eax62;
    uint32_t eax63;
    uint32_t eax64;
    int32_t v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void*** eax70;
    uint32_t eax71;
    uint32_t eax72;
    void** v73;
    void** v74;
    void** v75;
    struct s6* eax76;
    uint32_t eax77;
    uint32_t eax78;
    void*** v79;
    void** v80;
    void** v81;
    void** v82;
    void** eax83;
    uint32_t edx84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void*** eax89;
    void*** eax90;
    void*** eax91;
    uint32_t v92;
    uint32_t* v93;
    struct s14* v94;
    uint32_t v95;
    struct s15* v96;
    void** v97;
    uint32_t eax98;
    void** v99;
    void** edx100;
    void** v101;
    void** edx102;
    uint32_t ecx103;
    uint32_t v104;
    uint32_t edx105;
    uint32_t v106;
    int32_t* v107;
    void** v108;
    void* v109;
    int32_t* v110;
    void* v111;
    void** eax112;
    void** v113;
    void** v114;
    void** v115;
    void** eax116;
    void** eax117;
    void** v118;
    void** eax119;
    void** v120;
    void** eax121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    uint32_t eax126;
    uint32_t eax127;
    void** v128;
    int32_t v129;
    int32_t tmp32_130;
    void** v131;
    void** eax132;
    void** v133;
    void** v134;
    void** v135;
    void** eax136;
    void** v137;
    void** eax138;
    void** v139;
    int32_t v140;
    uint32_t eax141;
    void** eax142;
    void** v143;
    void** v144;
    void** v145;
    void** eax146;
    void** v147;
    void** eax148;
    void** v149;
    uint32_t eax150;
    uint32_t eax151;
    uint32_t eax152;
    uint32_t eax153;
    uint32_t eax154;
    uint32_t eax155;
    uint32_t eax156;
    uint32_t eax157;
    uint32_t eax158;
    int32_t* v159;
    struct s16* eax160;
    void* v161;
    void** ecx162;
    void** edx163;
    int32_t eax164;
    uint32_t v165;
    int32_t v166;
    void** v167;
    void** v168;
    uint32_t eax169;
    void** v170;
    void*** edx171;
    void** eax172;
    int32_t* v173;
    void** v174;
    void* v175;
    int32_t v176;
    void** v177;
    void** v178;
    uint32_t eax179;
    void** v180;
    void*** edx181;
    void** eax182;
    int32_t* v183;
    void** v184;
    void* v185;
    void** v186;
    void** eax187;
    void** v188;
    void** eax189;
    void** v190;
    void** eax191;
    void** v192;
    void** v193;
    struct s17* eax194;
    void* v195;
    void** ecx196;
    void** edx197;
    void** v198;
    void** v199;
    void** v200;
    uint32_t eax201;
    int32_t v202;
    uint32_t eax203;
    uint32_t eax204;
    void** edx205;
    int32_t eax206;
    void** eax207;
    int16_t fpu_status_word208;
    uint32_t eax209;
    int16_t fpu_status_word210;
    int1_t pf211;
    uint32_t eax212;
    uint32_t eax213;
    uint32_t eax214;
    void** v215;
    void** v216;
    void** v217;
    void** v218;
    uint32_t eax219;
    uint32_t eax220;
    uint32_t eax221;
    void** v222;
    void** v223;
    void** v224;
    void** v225;
    void* v226;
    void** v227;
    void** v228;
    uint32_t edx229;
    void** v230;
    uint32_t edx231;
    void** eax232;
    void** v233;
    void** v234;
    void** v235;
    void** eax236;
    void** v237;
    void** eax238;
    void** v239;
    int32_t v240;
    int32_t* v241;
    void** eax242;
    void* v243;
    void** eax244;
    void* v245;
    void* v246;
    void* v247;
    struct s18* ecx248;
    void* v249;
    uint32_t eax250;
    void* v251;
    void** v252;
    void** v253;
    void** eax254;
    void** v255;
    void** eax256;
    void** v257;
    void** v258;
    void** eax259;
    uint32_t eax260;
    void* v261;
    void** v262;
    void** v263;
    void** eax264;
    void** v265;
    void** eax266;
    void** v267;
    void** v268;
    void** eax269;
    uint32_t eax270;
    void* v271;
    void** v272;
    void** v273;
    void** eax274;
    void** v275;
    void** eax276;
    void** v277;
    void** v278;
    void** eax279;
    uint32_t eax280;
    void* v281;
    void** v282;
    void** v283;
    void** eax284;
    void** v285;
    void** eax286;
    void** v287;
    void** v288;
    void** eax289;
    void** v290;
    void* v291;
    void** v292;
    void** eax293;
    void** v294;
    void** eax295;
    void** v296;
    void** v297;
    void** eax298;
    void** v299;
    void* v300;
    void** v301;
    void** eax302;
    void** v303;
    void** eax304;
    void** v305;
    void** v306;
    void** eax307;
    void** v308;
    void* v309;
    void** v310;
    void** eax311;
    void** v312;
    void** eax313;
    void** v314;
    void** v315;
    void** eax316;
    void** v317;
    void* v318;
    void** v319;
    void** eax320;
    void** v321;
    void** eax322;
    void** v323;
    void** v324;
    void** eax325;
    struct s19* eax326;
    void* v327;
    void** edx328;
    void** v329;
    void** v330;
    void** eax331;
    void** v332;
    void** eax333;
    void** v334;
    void** v335;
    void** eax336;
    struct s20* eax337;
    void* v338;
    void** edx339;
    void** v340;
    void** v341;
    void** eax342;
    void** v343;
    void** eax344;
    void** v345;
    void** v346;
    void** eax347;
    void** v348;
    void** eax349;
    void** v350;
    void** eax351;
    void** v352;
    void** v353;
    void** eax354;
    struct s21* eax355;
    void* v356;
    void** ecx357;
    void** edx358;
    void** v359;
    void** v360;
    void** eax361;
    void** v362;
    void** eax363;
    void** v364;
    void** v365;
    void** eax366;
    void** v367;
    void* v368;
    void** v369;
    void** eax370;
    void** v371;
    void** eax372;
    void** v373;
    void** v374;
    void** eax375;
    void** v376;
    void* v377;
    void** v378;
    void** eax379;
    void** v380;
    void** eax381;
    void** v382;
    void** v383;
    void** eax384;
    void** v385;
    void* v386;
    void** v387;
    void** eax388;
    void** v389;
    void** eax390;
    void** v391;
    void** v392;
    void** eax393;
    void** v394;
    void* v395;
    void** v396;
    void** eax397;
    void** v398;
    void** eax399;
    void** v400;
    void** v401;
    void** eax402;
    void** v403;
    void* v404;
    void** v405;
    void** eax406;
    void** v407;
    void** eax408;
    void** v409;
    void** v410;
    void** eax411;
    void** v412;
    void** eax413;
    void** v414;
    void** v415;
    void** v416;
    void** eax417;
    void** v418;
    void** eax419;
    void** v420;
    void** v421;
    void** eax422;
    void** eax423;
    void** v424;
    void** v425;
    void** v426;
    void** eax427;
    void** v428;
    void** eax429;
    void** v430;
    void** v431;
    int32_t v432;
    void** v433;
    void** v434;
    int32_t v435;
    void** v436;
    void** eax437;
    void** v438;
    void** eax439;
    void** v440;
    void** v441;
    void** eax442;
    void** eax443;
    int32_t v444;
    void** v445;
    void** v446;
    int32_t v447;
    void** v448;
    void** v449;
    int32_t v450;
    void** v451;
    void** v452;
    int32_t v453;
    void** v454;
    void** v455;
    void** eax456;
    void** v457;
    void** eax458;
    void** v459;
    void** v460;
    int32_t v461;
    void** v462;
    void** v463;
    int32_t v464;
    void** v465;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v7 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<signed char>(a3) < reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(a3) > reinterpret_cast<signed char>(36)) {
        v8 = reinterpret_cast<void**>(0x806206c);
        fun_80496bc(0x8062084, 0x8062077, 83, 0x806206c, v9, v10);
    }
    if (a2) {
        v11 = a2;
    } else {
        v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffff8);
    }
    v12 = v11;
    v13 = a1;
    eax14 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v15) + 3) = *reinterpret_cast<unsigned char*>(&eax14);
    while (eax16 = fun_80497ac(0x8062084, 0x8062077, 83, 0x806206c), edx17 = *eax16, eax18 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v15) + 3))), eax19 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(edx17) + (reinterpret_cast<uint32_t>(eax18) + reinterpret_cast<uint32_t>(eax18))), !!(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax19)) & 0x2000)) {
        ++v13;
        eax20 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v15) + 3) = *reinterpret_cast<unsigned char*>(&eax20);
    }
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v15) + 3) != 45) {
        eax25 = fun_80494cc(0x8062084, 0x8062077, 83, 0x806206c, v21, v22, v23, v11, v24);
        *eax25 = reinterpret_cast<void**>(0);
        v26 = a3;
        eax27 = fun_804972c(a1, v12, v26, 0x806206c);
        v28 = eax27;
        v29 = edx17;
        if (*reinterpret_cast<void***>(v12) != a1) {
            eax34 = fun_80494cc(a1, v12, v26, 0x806206c, v30, v31, v32, v11, v33);
            if (!*eax34) {
                addr_80592ee_12:
                if (a5) {
                    eax35 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v12)));
                    if (!*reinterpret_cast<signed char*>(&eax35)) {
                        addr_805958b_14:
                        *reinterpret_cast<void***>(a4) = v28;
                        *reinterpret_cast<void***>(a4 + 4) = v29;
                        v36 = v7;
                    } else {
                        v37 = reinterpret_cast<void**>(0x400);
                        v38 = reinterpret_cast<void*>(1);
                        eax39 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v12)));
                        eax43 = fun_80495ec(a5, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax39)), v26, 0x806206c, v40, v41, v42);
                        if (eax43) {
                            v44 = reinterpret_cast<void**>(48);
                            v45 = a5;
                            eax49 = fun_80495ec(v45, 48, v26, 0x806206c, v46, v47, v48);
                            if (!eax49) {
                                addr_80593c3_17:
                                eax50 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v12)));
                                v51 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax50) - 66);
                                switch (v51) {
                                default:
                                    *reinterpret_cast<void***>(a4) = v28;
                                    *reinterpret_cast<void***>(a4 + 4) = v29;
                                    v36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v7) | 2);
                                    break;
                                case 0:
                                    eax52 = bkm_scale(reinterpret_cast<int32_t>(ebp6) + 0xffffffd8, 0x400, v26, 0x806206c);
                                    v53 = eax52;
                                    goto addr_8059566_21;
                                case 3:
                                    eax54 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp6) + 0xffffffd8, v37, 6, 0x806206c);
                                    v53 = eax54;
                                    goto addr_8059566_21;
                                case 5:
                                case 37:
                                    eax55 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp6) + 0xffffffd8, v37, 3, 0x806206c);
                                    v53 = eax55;
                                    goto addr_8059566_21;
                                case 9:
                                case 41:
                                    eax56 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp6) + 0xffffffd8, v37, 1, 0x806206c);
                                    v53 = eax56;
                                    goto addr_8059566_21;
                                case 11:
                                case 43:
                                    eax57 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp6) + 0xffffffd8, v37, 2, 0x806206c);
                                    v53 = eax57;
                                    goto addr_8059566_21;
                                case 14:
                                    eax58 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp6) + 0xffffffd8, v37, 5, 0x806206c);
                                    v53 = eax58;
                                    goto addr_8059566_21;
                                case 18:
                                case 50:
                                    eax59 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp6) + 0xffffffd8, v37, 4, 0x806206c);
                                    v53 = eax59;
                                    goto addr_8059566_21;
                                case 23:
                                    eax60 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp6) + 0xffffffd8, v37, 8, 0x806206c);
                                    v53 = eax60;
                                    goto addr_8059566_21;
                                case 24:
                                    eax61 = bkm_scale_by_power(reinterpret_cast<int32_t>(ebp6) + 0xffffffd8, v37, 7, 0x806206c);
                                    v53 = eax61;
                                    goto addr_8059566_21;
                                case 32:
                                    eax62 = bkm_scale(reinterpret_cast<int32_t>(ebp6) + 0xffffffd8, 0x200, v26, 0x806206c);
                                    v53 = eax62;
                                    goto addr_8059566_21;
                                case 33:
                                    v53 = 0;
                                    goto addr_8059566_21;
                                case 53:
                                    eax63 = bkm_scale(reinterpret_cast<int32_t>(ebp6) + 0xffffffd8, 2, v26, 0x806206c);
                                    v53 = eax63;
                                    goto addr_8059566_21;
                                }
                            } else {
                                eax64 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v12) + 1));
                                v65 = *reinterpret_cast<signed char*>(&eax64);
                                if (v65 == 68) 
                                    goto addr_80593b8_34;
                                if (v65 == 0x69) 
                                    goto addr_80593a3_36; else 
                                    goto addr_805939b_37;
                            }
                        } else {
                            *reinterpret_cast<void***>(a4) = v28;
                            *reinterpret_cast<void***>(a4 + 4) = v29;
                            v36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v7) | 2);
                        }
                    }
                } else {
                    *reinterpret_cast<void***>(a4) = v28;
                    *reinterpret_cast<void***>(a4 + 4) = v29;
                    v36 = v7;
                }
            } else {
                eax70 = fun_80494cc(a1, v12, v26, 0x806206c, v66, v67, v68, v11, v69);
                if (*eax70 == 34) {
                    v7 = reinterpret_cast<void**>(1);
                    goto addr_80592ee_12;
                } else {
                    v36 = reinterpret_cast<void**>(4);
                }
            }
        } else {
            if (!a5 || ((eax71 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v12))), *reinterpret_cast<signed char*>(&eax71) == 0) || (eax72 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v12))), eax76 = fun_80495ec(a5, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax72)), v26, 0x806206c, v73, v74, v75), eax76 == 0))) {
                v36 = reinterpret_cast<void**>(4);
            } else {
                v28 = reinterpret_cast<void**>(1);
                v29 = reinterpret_cast<void**>(0);
                goto addr_80592ee_12;
            }
        }
    } else {
        v36 = reinterpret_cast<void**>(4);
    }
    return v36;
    addr_8059566_21:
    v7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v7) | v53);
    *reinterpret_cast<void***>(v12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v12)) + reinterpret_cast<uint32_t>(v38));
    eax77 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v12)));
    if (*reinterpret_cast<signed char*>(&eax77)) {
        v7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v7) | 2);
        goto addr_805958b_14;
    }
    addr_80593a3_36:
    eax78 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v12) + 2));
    if (*reinterpret_cast<signed char*>(&eax78) == 66) {
        v38 = reinterpret_cast<void*>(3);
        goto addr_80593c3_17;
    }
    addr_805939b_37:
    if (v65 == 66) {
        addr_80593b8_34:
        v37 = reinterpret_cast<void**>(0x3e8);
        v38 = reinterpret_cast<void*>(2);
        goto addr_80593c3_17;
    } else {
        goto addr_80593c3_17;
    }
    addr_805c9a7_51:
    *v79 = v80;
    v81 = v82;
    addr_805cab6_52:
    eax83 = v81;
    edx84 = reinterpret_cast<uint32_t>(v38) ^ g14;
    if (edx84) {
        eax83 = fun_804995c(v85, v44, v26, v8, v86, v87, v51, v11, v88);
    }
    return eax83;
    addr_805caa1_55:
    eax89 = fun_80494cc(v85, v44, v26, v8, v86, v87, v51, v11, v88);
    *eax89 = reinterpret_cast<void**>(12);
    v81 = reinterpret_cast<void**>(0);
    goto addr_805cab6_52;
    addr_805ca28_56:
    eax90 = fun_80494cc(v85, v44, v26, v8, v86, v87, v51, v11, v88);
    *eax90 = reinterpret_cast<void**>(75);
    v81 = reinterpret_cast<void**>(0);
    goto addr_805cab6_52;
    addr_805c5a5_57:
    eax91 = fun_80494cc(v85, v44, v26, v8, v86, v87, v51, v11, v88);
    *eax91 = reinterpret_cast<void**>(22);
    v81 = reinterpret_cast<void**>(0);
    goto addr_805cab6_52;
    while (1) {
        addr_805a758_58:
        v92 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(v93) + (v94->f40 << 4));
        v95 = v94->f8;
        v96->f0 = 37;
        v97 = reinterpret_cast<void**>(&v96->f1);
        eax98 = v95 & 1;
        if (*reinterpret_cast<signed char*>(&eax98)) {
            *reinterpret_cast<void***>(v97) = reinterpret_cast<void**>(39);
            ++v97;
        }
        if (v95 & 2) {
            *reinterpret_cast<void***>(v97) = reinterpret_cast<void**>(45);
            ++v97;
        }
        if (v95 & 4) {
            *reinterpret_cast<void***>(v97) = reinterpret_cast<void**>(43);
            ++v97;
        }
        if (v95 & 8) {
            *reinterpret_cast<void***>(v97) = reinterpret_cast<void**>(32);
            ++v97;
        }
        if (v95 & 16) {
            *reinterpret_cast<void***>(v97) = reinterpret_cast<void**>(35);
            ++v97;
        }
        if (v95 & 32) {
            *reinterpret_cast<void***>(v97) = reinterpret_cast<void**>(48);
            ++v97;
        }
        if (v94->f12 != v94->f16) {
            v99 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v94->f16) - reinterpret_cast<unsigned char>(v94->f12));
            edx100 = v94->f12;
            v26 = v99;
            v44 = edx100;
            v45 = v97;
            fun_804983c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
            v97 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v97) + reinterpret_cast<unsigned char>(v99));
        }
        if (v94->f24 != v94->f28) {
            v101 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v94->f28) - reinterpret_cast<unsigned char>(v94->f24));
            edx102 = v94->f24;
            v26 = v101;
            v44 = edx102;
            v45 = v97;
            fun_804983c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
            v97 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v97) + reinterpret_cast<unsigned char>(v101));
        }
        if (v92 > 16) 
            goto addr_805a999_75;
        ecx103 = v92;
        v104 = 1 << *reinterpret_cast<unsigned char*>(&ecx103);
        if (v104 & 0x14180) {
            addr_805a977_77:
            *reinterpret_cast<void***>(v97) = reinterpret_cast<void**>(0x6c);
            ++v97;
            goto addr_805a999_75;
        } else {
            if (v104 & 0x1000) {
                *reinterpret_cast<void***>(v97) = reinterpret_cast<void**>(76);
                ++v97;
                goto addr_805a999_75;
            }
            if (!(v104 & 0x600)) {
                addr_805a999_75:
                edx105 = v94->f36;
                *reinterpret_cast<void***>(v97) = *reinterpret_cast<void***>(&edx105);
                *reinterpret_cast<void***>(v97 + 1) = reinterpret_cast<void**>(0);
                v106 = 0;
                if (v94->f20 != -1) {
                    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v107) + (v94->f20 << 4)) != 5) {
                        fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                    }
                    v108 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v109) + (v94->f20 << 4) + 4);
                    v106 = 1;
                }
            } else {
                *reinterpret_cast<void***>(v97) = reinterpret_cast<void**>(0x6c);
                ++v97;
                goto addr_805a977_77;
            }
        }
        if (v94->f32 != -1) {
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v110) + (v94->f32 << 4)) != 5) {
                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
            }
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp6) + v106 * 4 - 0x418) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v111) + (v94->f32 << 4) + 4);
            ++v106;
        }
        v44 = reinterpret_cast<void**>(2);
        v45 = v80;
        eax112 = xsum(v45, 2, v26, v8, v86, v87, v51, v11, v88);
        if (reinterpret_cast<unsigned char>(eax112) > reinterpret_cast<unsigned char>(v113)) {
            if (!v113) {
                v114 = reinterpret_cast<void**>(12);
            } else {
                if (reinterpret_cast<signed char>(v113) < reinterpret_cast<signed char>(0)) {
                    v115 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v115 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v113) + reinterpret_cast<unsigned char>(v113));
                }
                v114 = v115;
            }
            v113 = v114;
            v44 = reinterpret_cast<void**>(2);
            eax116 = xsum(v80, 2, v26, v8, v86, v87, v51, v11, v88);
            if (reinterpret_cast<unsigned char>(eax116) > reinterpret_cast<unsigned char>(v113)) {
                v44 = reinterpret_cast<void**>(2);
                eax117 = xsum(v80, 2, v26, v8, v86, v87, v51, v11, v88);
                v113 = eax117;
            }
            if (v113 == 0xffffffff) 
                goto addr_805ca3f_99;
            if (v82 == v118 || !v82) {
                v45 = v113;
                eax119 = malloc(v45, 2, v26, v8, v86, v87, v51, v11, v88);
                v120 = eax119;
            } else {
                v44 = v113;
                v45 = v82;
                eax121 = fun_80495ac(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                v120 = eax121;
            }
            if (!v120) 
                goto addr_805ca3f_99;
            if (v82 == v122 && v80) {
                v26 = v80;
                v44 = v82;
                v45 = v120;
                fun_804983c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
            }
            v82 = v120;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80)) = 0;
        while (1) {
            v123 = reinterpret_cast<void**>(0xffffffff);
            v124 = reinterpret_cast<void**>(0);
            v125 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v113) - reinterpret_cast<unsigned char>(v80));
            if (reinterpret_cast<signed char>(v125) < reinterpret_cast<signed char>(0)) {
                v125 = reinterpret_cast<void**>(0x7fffffff);
            }
            if (v92 <= 17) {
                goto *reinterpret_cast<int32_t*>((v92 << 2) + 0x8062198);
            }
            while (1) {
                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                while (1) {
                    if (reinterpret_cast<signed char>(v123) < reinterpret_cast<signed char>(0)) {
                        eax126 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v97 + 1));
                        if (*reinterpret_cast<signed char*>(&eax126)) 
                            goto addr_805c397_115;
                        if (reinterpret_cast<signed char>(v124) < reinterpret_cast<signed char>(0)) 
                            goto addr_805c3b5_117;
                        v123 = v124;
                    } else {
                        if (reinterpret_cast<unsigned char>(v123) < reinterpret_cast<unsigned char>(v125) && (eax127 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v123) + reinterpret_cast<unsigned char>(v80) + reinterpret_cast<unsigned char>(v82)), !!*reinterpret_cast<signed char*>(&eax127))) {
                            fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        }
                        if (reinterpret_cast<signed char>(v124) > reinterpret_cast<signed char>(v123)) {
                            v123 = v124;
                        }
                    }
                    if (reinterpret_cast<signed char>(v123) < reinterpret_cast<signed char>(0)) 
                        goto addr_805c543_124;
                    if (reinterpret_cast<unsigned char>(v123 + 1) >= reinterpret_cast<unsigned char>(v125)) 
                        goto addr_805c5d4_126;
                    v80 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v80) + reinterpret_cast<unsigned char>(v123));
                    while (1) {
                        v128 = v94->f4;
                        v129 = tmp32_130;
                        ++v94;
                        if (v94->f0 != v128) {
                            v131 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v94->f0) - reinterpret_cast<unsigned char>(v128));
                            v44 = v131;
                            eax132 = xsum(v80, v44, v26, v8, v86, v87, v51, v11, v88);
                            if (reinterpret_cast<unsigned char>(eax132) > reinterpret_cast<unsigned char>(v113)) {
                                if (!v113) {
                                    v133 = reinterpret_cast<void**>(12);
                                } else {
                                    if (reinterpret_cast<signed char>(v113) < reinterpret_cast<signed char>(0)) {
                                        v134 = reinterpret_cast<void**>(0xffffffff);
                                    } else {
                                        v134 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v113) + reinterpret_cast<unsigned char>(v113));
                                    }
                                    v133 = v134;
                                }
                                v113 = v133;
                                if (reinterpret_cast<unsigned char>(eax132) > reinterpret_cast<unsigned char>(v113)) {
                                    v113 = eax132;
                                }
                                if (v113 == 0xffffffff) 
                                    goto addr_805ca3f_99;
                                if (v82 == v135 || !v82) {
                                    eax136 = malloc(v113, v44, v26, v8, v86, v87, v51, v11, v88);
                                    v137 = eax136;
                                } else {
                                    v44 = v113;
                                    eax138 = fun_80495ac(v82, v44, v26, v8, v86, v87, v51, v11, v88);
                                    v137 = eax138;
                                }
                                if (!v137) 
                                    goto addr_805ca3f_99;
                                if (v82 == v139 && v80) {
                                    fun_804983c(v137, v82, v80, v8, v86, v87, v51, v11, v88);
                                }
                                v82 = v137;
                            }
                            v26 = v131;
                            v44 = v128;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            fun_804983c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v80 = eax132;
                        }
                        if (v140 == v129) 
                            goto addr_805c7a1_149;
                        eax141 = v94->f36;
                        if (*reinterpret_cast<signed char*>(&eax141) == 37) {
                            if (v94->f40 != -1) {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                            v44 = reinterpret_cast<void**>(1);
                            v45 = v80;
                            eax142 = xsum(v45, 1, v26, v8, v86, v87, v51, v11, v88);
                            if (reinterpret_cast<unsigned char>(eax142) > reinterpret_cast<unsigned char>(v113)) {
                                if (!v113) {
                                    v143 = reinterpret_cast<void**>(12);
                                } else {
                                    if (reinterpret_cast<signed char>(v113) < reinterpret_cast<signed char>(0)) {
                                        v144 = reinterpret_cast<void**>(0xffffffff);
                                    } else {
                                        v144 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v113) + reinterpret_cast<unsigned char>(v113));
                                    }
                                    v143 = v144;
                                }
                                v113 = v143;
                                if (reinterpret_cast<unsigned char>(eax142) > reinterpret_cast<unsigned char>(v113)) {
                                    v113 = eax142;
                                }
                                if (v113 == 0xffffffff) 
                                    goto addr_805ca3f_99;
                                if (v82 == v145 || !v82) {
                                    v45 = v113;
                                    eax146 = malloc(v45, 1, v26, v8, v86, v87, v51, v11, v88);
                                    v147 = eax146;
                                } else {
                                    v44 = v113;
                                    v45 = v82;
                                    eax148 = fun_80495ac(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                    v147 = eax148;
                                }
                                if (!v147) 
                                    goto addr_805ca3f_99;
                                if (v82 == v149 && v80) {
                                    v26 = v80;
                                    v44 = v82;
                                    v45 = v147;
                                    fun_804983c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                }
                                v82 = v147;
                            }
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80)) = 37;
                            v80 = eax142;
                            continue;
                        }
                        if (v94->f40 == -1) {
                            fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        }
                        eax150 = v94->f36;
                        if (*reinterpret_cast<signed char*>(&eax150) == 0x6e) 
                            goto addr_8059c1b_174;
                        addr_8059d1e_175:
                        eax151 = v94->f36;
                        if (*reinterpret_cast<signed char*>(&eax151) == 0x66) 
                            goto addr_8059d92_176;
                        eax152 = v94->f36;
                        if (*reinterpret_cast<signed char*>(&eax152) == 70) 
                            goto addr_8059d92_176;
                        eax153 = v94->f36;
                        if (*reinterpret_cast<signed char*>(&eax153) == 0x65) 
                            goto addr_8059d92_176;
                        eax154 = v94->f36;
                        if (*reinterpret_cast<signed char*>(&eax154) == 69) 
                            goto addr_8059d92_176;
                        eax155 = v94->f36;
                        if (*reinterpret_cast<signed char*>(&eax155) == 0x67) 
                            goto addr_8059d92_176;
                        eax156 = v94->f36;
                        if (*reinterpret_cast<signed char*>(&eax156) == 71) 
                            goto addr_8059d92_176;
                        eax157 = v94->f36;
                        if (*reinterpret_cast<signed char*>(&eax157) == 97) 
                            goto addr_8059d92_176;
                        eax158 = v94->f36;
                        if (*reinterpret_cast<signed char*>(&eax158) != 65) 
                            goto addr_805a758_58;
                        addr_8059d92_176:
                        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v159) + (v94->f40 << 4)) != 12) 
                            goto addr_805a758_58;
                        eax160 = reinterpret_cast<struct s16*>(reinterpret_cast<int32_t>(v161) + (v94->f40 << 4));
                        ecx162 = eax160->f12;
                        edx163 = eax160->f8;
                        v45 = eax160->f4;
                        v44 = edx163;
                        v26 = ecx162;
                        eax164 = is_infinitel(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        if (!eax164) 
                            goto addr_805a758_58;
                        v165 = v94->f8;
                        v166 = 0;
                        v167 = reinterpret_cast<void**>(0);
                        if (v94->f12 != v94->f16) {
                            if (v94->f20 == -1) {
                                v168 = v94->f12;
                                do {
                                    eax169 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v168));
                                    ++v168;
                                    if (reinterpret_cast<unsigned char>(v167) > reinterpret_cast<unsigned char>(0x19999999)) {
                                        v170 = reinterpret_cast<void**>(0xffffffff);
                                    } else {
                                        edx171 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v167) << 2) + reinterpret_cast<unsigned char>(v167));
                                        v170 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx171) + reinterpret_cast<uint32_t>(edx171));
                                    }
                                    v44 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax169) - 48);
                                    v45 = v170;
                                    eax172 = xsum(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                    v167 = eax172;
                                } while (v94->f16 != v168);
                            } else {
                                if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v173) + (v94->f20 << 4)) != 5) {
                                    fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                }
                                v174 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v175) + (v94->f20 << 4) + 4);
                                if (reinterpret_cast<signed char>(v174) >= reinterpret_cast<signed char>(0)) {
                                    v167 = v174;
                                } else {
                                    v165 = v165 | 2;
                                    v167 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v174));
                                }
                            }
                            v166 = 1;
                        }
                        v176 = 0;
                        v177 = reinterpret_cast<void**>(0);
                        if (v94->f24 != v94->f28) {
                            if (v94->f32 == -1) {
                                v178 = v94->f24 + 1;
                                v177 = reinterpret_cast<void**>(0);
                                while (v94->f28 != v178) {
                                    eax179 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v178));
                                    ++v178;
                                    if (reinterpret_cast<unsigned char>(v177) > reinterpret_cast<unsigned char>(0x19999999)) {
                                        v180 = reinterpret_cast<void**>(0xffffffff);
                                    } else {
                                        edx181 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v177) << 2) + reinterpret_cast<unsigned char>(v177));
                                        v180 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx181) + reinterpret_cast<uint32_t>(edx181));
                                    }
                                    eax182 = xsum(v180, *reinterpret_cast<signed char*>(&eax179) - 48, v26, v8, v86, v87, v51, v11, v88);
                                    v177 = eax182;
                                }
                                v176 = 1;
                            } else {
                                if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v183) + (v94->f32 << 4)) != 5) {
                                    fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                }
                                v184 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v185) + (v94->f32 << 4) + 4);
                                if (reinterpret_cast<signed char>(v184) >= reinterpret_cast<signed char>(0)) {
                                    v177 = v184;
                                    v176 = 1;
                                }
                            }
                        }
                        if (!v176) {
                            v177 = reinterpret_cast<void**>(6);
                        }
                        v186 = reinterpret_cast<void**>(0);
                        if (reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(v177)) {
                            v186 = v177;
                        }
                        eax187 = xsum(v186, 12, v26, v8, v86, v87, v51, v11, v88);
                        v188 = eax187;
                        if (reinterpret_cast<unsigned char>(v188) < reinterpret_cast<unsigned char>(v167)) {
                            v188 = v167;
                        }
                        v44 = reinterpret_cast<void**>(1);
                        eax189 = xsum(v188, 1, v26, v8, v86, v87, v51, v11, v88);
                        v190 = eax189;
                        if (reinterpret_cast<unsigned char>(v190) > reinterpret_cast<unsigned char>(0x2bc)) {
                            if (v190 == 0xffffffff) 
                                goto addr_805ca3f_99;
                            eax191 = malloc(v190, 1, v26, v8, v86, v87, v51, v11, v88);
                            v192 = eax191;
                            if (!v192) 
                                goto addr_805ca3f_99;
                        } else {
                            v192 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffd28);
                        }
                        v193 = v192;
                        eax194 = reinterpret_cast<struct s17*>(reinterpret_cast<int32_t>(v195) + (v94->f40 << 4));
                        ecx196 = eax194->f12;
                        edx197 = eax194->f8;
                        v198 = eax194->f4;
                        v199 = v198;
                        v200 = edx197;
                        v26 = ecx196;
                        eax201 = rpl_isnanl(v199, v200, v26, v8, v86, v87, v51, v11, v88);
                        if (!eax201) {
                            v202 = 0;
                            __asm__("fnstcw word [ebp+0xfffffc58]");
                            eax203 = *reinterpret_cast<uint16_t*>(&v123);
                            eax204 = *reinterpret_cast<uint16_t*>(&eax203);
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax204) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax204) + 1) | 3);
                            *reinterpret_cast<uint16_t*>(&v123) = *reinterpret_cast<uint16_t*>(&eax204);
                            __asm__("fldcw word [ebp+0xfffffc58]");
                            edx205 = edx197;
                            v199 = v198;
                            v200 = edx205;
                            v26 = ecx196;
                            eax206 = fun_80498ec(v199, v200, v26, v8, v86, v87, v51, v11, v88);
                            if (eax206) {
                                v202 = -1;
                                __asm__("fld tword [ebp+0xfffffbb8]");
                                __asm__("fchs ");
                                __asm__("fstp tword [ebp+0xfffffbb8]");
                            }
                            if (v202 >= 0) {
                                if (!(v165 & 4)) {
                                    eax207 = reinterpret_cast<void**>(v165 & 8);
                                    if (eax207) {
                                        eax207 = v193;
                                        *reinterpret_cast<void***>(eax207) = reinterpret_cast<void**>(32);
                                        ++v193;
                                    }
                                } else {
                                    eax207 = v193;
                                    *reinterpret_cast<void***>(eax207) = reinterpret_cast<void**>(43);
                                    ++v193;
                                }
                            } else {
                                eax207 = v193;
                                *reinterpret_cast<void***>(eax207) = reinterpret_cast<void**>(45);
                                ++v193;
                            }
                            __asm__("fld tword [ebp+0xfffffbb8]");
                            __asm__("fldz ");
                            __asm__("fxch st0, st1");
                            __asm__("fucompp ");
                            *reinterpret_cast<int16_t*>(&eax207) = fpu_status_word208;
                            *reinterpret_cast<unsigned char*>(&eax207) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&eax207 + 1) | *reinterpret_cast<uint1_t*>(&eax207 + 1)));
                            eax209 = reinterpret_cast<unsigned char>(eax207) ^ 1;
                            if (*reinterpret_cast<unsigned char*>(&eax209) || (*reinterpret_cast<int16_t*>(&eax209) = fpu_status_word210, pf211 = *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax209) + 1), *reinterpret_cast<unsigned char*>(&eax209) = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax209) + 1), *reinterpret_cast<unsigned char*>(&edx205) = reinterpret_cast<uint1_t>(!pf211), eax212 = eax209 & reinterpret_cast<unsigned char>(edx205) ^ 1, !!*reinterpret_cast<signed char*>(&eax212))) {
                                fun_80494bc(v199, v200, v26, v8, v86, v87, v51, v11, v88);
                            } else {
                                eax213 = v94->f36;
                                if (*reinterpret_cast<signed char*>(&eax213) <= 64 || (eax214 = v94->f36, *reinterpret_cast<signed char*>(&eax214) > 90)) {
                                    *reinterpret_cast<void***>(v193) = reinterpret_cast<void**>(0x69);
                                    v215 = v193 + 1;
                                    *reinterpret_cast<void***>(v215) = reinterpret_cast<void**>(0x6e);
                                    v216 = v215 + 1;
                                    *reinterpret_cast<void***>(v216) = reinterpret_cast<void**>(0x66);
                                    v193 = v216 + 1;
                                } else {
                                    *reinterpret_cast<void***>(v193) = reinterpret_cast<void**>(73);
                                    v217 = v193 + 1;
                                    *reinterpret_cast<void***>(v217) = reinterpret_cast<void**>(78);
                                    v218 = v217 + 1;
                                    *reinterpret_cast<void***>(v218) = reinterpret_cast<void**>(70);
                                    v193 = v218 + 1;
                                }
                                eax219 = *reinterpret_cast<uint16_t*>(&eax203);
                                *reinterpret_cast<uint16_t*>(&v123) = *reinterpret_cast<uint16_t*>(&eax219);
                                __asm__("fldcw word [ebp+0xfffffc58]");
                            }
                        } else {
                            eax220 = v94->f36;
                            if (*reinterpret_cast<signed char*>(&eax220) <= 64 || (eax221 = v94->f36, *reinterpret_cast<signed char*>(&eax221) > 90)) {
                                *reinterpret_cast<void***>(v193) = reinterpret_cast<void**>(0x6e);
                                v222 = v193 + 1;
                                *reinterpret_cast<void***>(v222) = reinterpret_cast<void**>(97);
                                v223 = v222 + 1;
                                *reinterpret_cast<void***>(v223) = reinterpret_cast<void**>(0x6e);
                                v193 = v223 + 1;
                            } else {
                                *reinterpret_cast<void***>(v193) = reinterpret_cast<void**>(78);
                                v224 = v193 + 1;
                                *reinterpret_cast<void***>(v224) = reinterpret_cast<void**>(65);
                                v225 = v224 + 1;
                                *reinterpret_cast<void***>(v225) = reinterpret_cast<void**>(78);
                                v193 = v225 + 1;
                            }
                        }
                        if (v166 && reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v193) - reinterpret_cast<unsigned char>(v192)) < reinterpret_cast<unsigned char>(v167)) {
                            v226 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v192) - reinterpret_cast<unsigned char>(v193) + reinterpret_cast<unsigned char>(v167));
                            v227 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v193) + reinterpret_cast<uint32_t>(v226));
                            if (!(v165 & 2)) {
                                if (!(v165 & 32) || 1) {
                                    v228 = v227;
                                    while (reinterpret_cast<unsigned char>(v193) > reinterpret_cast<unsigned char>(v192)) {
                                        --v228;
                                        --v193;
                                        edx229 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v193));
                                        *reinterpret_cast<void***>(v228) = *reinterpret_cast<void***>(&edx229);
                                    }
                                    while (v226) {
                                        *reinterpret_cast<void***>(v193) = reinterpret_cast<void**>(32);
                                        ++v193;
                                        v226 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v226) - 1);
                                    }
                                } else {
                                    v230 = v227;
                                    while (reinterpret_cast<unsigned char>(v193) > reinterpret_cast<unsigned char>(0)) {
                                        --v230;
                                        --v193;
                                        edx231 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v193));
                                        *reinterpret_cast<void***>(v230) = *reinterpret_cast<void***>(&edx231);
                                    }
                                    while (v226) {
                                        *reinterpret_cast<void***>(v193) = reinterpret_cast<void**>(48);
                                        ++v193;
                                        v226 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v226) - 1);
                                    }
                                }
                            } else {
                                while (v226) {
                                    *reinterpret_cast<void***>(v193) = reinterpret_cast<void**>(32);
                                    ++v193;
                                    v226 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v226) - 1);
                                }
                            }
                            v193 = v227;
                        }
                        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v193) - reinterpret_cast<unsigned char>(v192)) >= reinterpret_cast<unsigned char>(v190)) {
                            fun_80494bc(v199, v200, v26, v8, v86, v87, v51, v11, v88);
                        }
                        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v113) - reinterpret_cast<unsigned char>(v80)) <= reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v193) - reinterpret_cast<unsigned char>(v192)) && (v44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v193) - reinterpret_cast<unsigned char>(v192)), eax232 = xsum(v80, v44, v26, v8, v86, v87, v51, v11, v88), reinterpret_cast<unsigned char>(eax232) > reinterpret_cast<unsigned char>(v113))) {
                            if (!v113) {
                                v233 = reinterpret_cast<void**>(12);
                            } else {
                                if (reinterpret_cast<signed char>(v113) < reinterpret_cast<signed char>(0)) {
                                    v234 = reinterpret_cast<void**>(0xffffffff);
                                } else {
                                    v234 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v113) + reinterpret_cast<unsigned char>(v113));
                                }
                                v233 = v234;
                            }
                            v113 = v233;
                            if (reinterpret_cast<unsigned char>(eax232) > reinterpret_cast<unsigned char>(v113)) {
                                v113 = eax232;
                            }
                            if (v113 == 0xffffffff) 
                                goto addr_805ca3f_99;
                            if (v82 == v235 || !v82) {
                                eax236 = malloc(v113, v44, v26, v8, v86, v87, v51, v11, v88);
                                v237 = eax236;
                            } else {
                                v44 = v113;
                                eax238 = fun_80495ac(v82, v44, v26, v8, v86, v87, v51, v11, v88);
                                v237 = eax238;
                            }
                            if (!v237) 
                                goto addr_805ca3f_99;
                            if (v82 == v239 && v80) {
                                fun_804983c(v237, v82, v80, v8, v86, v87, v51, v11, v88);
                            }
                            v82 = v237;
                        }
                        v26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v193) - reinterpret_cast<unsigned char>(v192));
                        v44 = v192;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        fun_804983c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        if (v192 != reinterpret_cast<int32_t>(ebp6) + 0xfffffd28) {
                            v45 = v192;
                            free(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        }
                        v80 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v80) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v193) - reinterpret_cast<unsigned char>(v192)));
                        continue;
                        addr_8059c1b_174:
                        v240 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v241) + (v94->f40 << 4)) - 18;
                        switch (v240) {
                        default:
                            fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            goto addr_8059d1e_175;
                        case 0:
                            eax242 = v80;
                            **reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(v243) + (v94->f40 << 4) + 4) = *reinterpret_cast<signed char*>(&eax242);
                            break;
                        case 1:
                            eax244 = v80;
                            **reinterpret_cast<int16_t**>(reinterpret_cast<int32_t>(v245) + (v94->f40 << 4) + 4) = *reinterpret_cast<int16_t*>(&eax244);
                            break;
                        case 2:
                            **reinterpret_cast<void****>(reinterpret_cast<int32_t>(v246) + (v94->f40 << 4) + 4) = v80;
                            break;
                        case 3:
                            **reinterpret_cast<void****>(reinterpret_cast<int32_t>(v247) + (v94->f40 << 4) + 4) = v80;
                            break;
                        case 4:
                            ecx248 = *reinterpret_cast<struct s18**>(reinterpret_cast<int32_t>(v249) + (v94->f40 << 4) + 4);
                            ecx248->f0 = v80;
                            ecx248->f4 = 0;
                        }
                    }
                    eax250 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v251) + (v94->f40 << 4) + 4);
                    v252 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax250)));
                    if (v106 == 1) {
                        v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v252;
                        v8 = v108;
                        v26 = v253;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax254 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax254;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v252;
                            v26 = v255;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax256 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax256;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v252;
                                v86 = v257;
                                v8 = v108;
                                v26 = v258;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax259 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax259;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    eax260 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v261) + (v94->f40 << 4) + 4);
                    v262 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax260)));
                    if (v106 == 1) {
                        v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v262;
                        v8 = v108;
                        v26 = v263;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax264 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax264;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v262;
                            v26 = v265;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax266 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax266;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v262;
                                v86 = v267;
                                v8 = v108;
                                v26 = v268;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax269 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax269;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    eax270 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(v271) + (v94->f40 << 4) + 4);
                    v272 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax270)));
                    if (v106 == 1) {
                        v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v272;
                        v8 = v108;
                        v26 = v273;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax274 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax274;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v272;
                            v26 = v275;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax276 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax276;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v272;
                                v86 = v277;
                                v8 = v108;
                                v26 = v278;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax279 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax279;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    eax280 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(v281) + (v94->f40 << 4) + 4);
                    v282 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax280)));
                    if (v106 == 1) {
                        v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v282;
                        v8 = v108;
                        v26 = v283;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax284 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax284;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v282;
                            v26 = v285;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax286 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax286;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v282;
                                v86 = v287;
                                v8 = v108;
                                v26 = v288;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax289 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax289;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    v290 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v291) + (v94->f40 << 4) + 4);
                    if (v106 == 1) {
                        v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v290;
                        v8 = v108;
                        v26 = v292;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax293 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax293;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v290;
                            v26 = v294;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax295 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax295;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v290;
                                v86 = v296;
                                v8 = v108;
                                v26 = v297;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax298 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax298;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    v299 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v300) + (v94->f40 << 4) + 4);
                    if (v106 == 1) {
                        v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v299;
                        v8 = v108;
                        v26 = v301;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax302 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax302;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v299;
                            v26 = v303;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax304 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax304;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v299;
                                v86 = v305;
                                v8 = v108;
                                v26 = v306;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax307 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax307;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    v308 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v309) + (v94->f40 << 4) + 4);
                    if (v106 == 1) {
                        v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v308;
                        v8 = v108;
                        v26 = v310;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax311 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax311;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v308;
                            v26 = v312;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax313 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax313;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v308;
                                v86 = v314;
                                v8 = v108;
                                v26 = v315;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax316 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax316;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    v317 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v318) + (v94->f40 << 4) + 4);
                    if (v106 == 1) {
                        v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v317;
                        v8 = v108;
                        v26 = v319;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax320 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax320;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v317;
                            v26 = v321;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax322 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax322;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v317;
                                v86 = v323;
                                v8 = v108;
                                v26 = v324;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax325 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax325;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    eax326 = reinterpret_cast<struct s19*>(reinterpret_cast<int32_t>(v327) + (v94->f40 << 4));
                    edx328 = eax326->f8;
                    v329 = eax326->f4;
                    if (v106 == 1) {
                        v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v329;
                        v87 = edx328;
                        v8 = v108;
                        v26 = v330;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax331 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax331;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v329;
                            v86 = edx328;
                            v26 = v332;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax333 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax333;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v329;
                                v51 = edx328;
                                v86 = v334;
                                v8 = v108;
                                v26 = v335;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax336 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax336;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    eax337 = reinterpret_cast<struct s20*>(reinterpret_cast<int32_t>(v338) + (v94->f40 << 4));
                    edx339 = eax337->f8;
                    v340 = eax337->f4;
                    if (v106 == 1) {
                        v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v340;
                        v87 = edx339;
                        v8 = v108;
                        v26 = v341;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax342 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax342;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v340;
                            v86 = edx339;
                            v26 = v343;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax344 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax344;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v340;
                                v51 = edx339;
                                v86 = v345;
                                v8 = v108;
                                v26 = v346;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax347 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax347;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    __asm__("fld qword [eax+0x4]");
                    __asm__("fstp qword [ebp+0xfffffbd0]");
                    if (v106 == 1) {
                        v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        __asm__("fld qword [ebp+0xfffffbd0]");
                        __asm__("fstp qword [esp+0x10]");
                        v8 = v108;
                        v26 = v348;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax349 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax349;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            __asm__("fld qword [ebp+0xfffffbd0]");
                            __asm__("fstp qword [esp+0xc]");
                            v26 = v350;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax351 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax351;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                __asm__("fld qword [ebp+0xfffffbd0]");
                                __asm__("fstp qword [esp+0x14]");
                                v86 = v352;
                                v8 = v108;
                                v26 = v353;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax354 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax354;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    eax355 = reinterpret_cast<struct s21*>(reinterpret_cast<int32_t>(v356) + (v94->f40 << 4));
                    ecx357 = eax355->f12;
                    edx358 = eax355->f8;
                    v359 = eax355->f4;
                    if (v106 == 1) {
                        v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v359;
                        v87 = edx358;
                        v51 = ecx357;
                        v8 = v108;
                        v26 = v360;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax361 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax361;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v359;
                            v86 = edx358;
                            v87 = ecx357;
                            v26 = v362;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax363 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax363;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v88 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v359;
                                v51 = edx358;
                                v11 = ecx357;
                                v86 = v364;
                                v8 = v108;
                                v26 = v365;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax366 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax366;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    v367 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v368) + (v94->f40 << 4) + 4);
                    if (v106 == 1) {
                        v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v367;
                        v8 = v108;
                        v26 = v369;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax370 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax370;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v367;
                            v26 = v371;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax372 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax372;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v367;
                                v86 = v373;
                                v8 = v108;
                                v26 = v374;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax375 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax375;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    v376 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v377) + (v94->f40 << 4) + 4);
                    if (v106 == 1) {
                        v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v376;
                        v8 = v108;
                        v26 = v378;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax379 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax379;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v376;
                            v26 = v380;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax381 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax381;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v376;
                                v86 = v382;
                                v8 = v108;
                                v26 = v383;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax384 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax384;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    v385 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v386) + (v94->f40 << 4) + 4);
                    if (v106 == 1) {
                        v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v385;
                        v8 = v108;
                        v26 = v387;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax388 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax388;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v385;
                            v26 = v389;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax390 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax390;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v385;
                                v86 = v391;
                                v8 = v108;
                                v26 = v392;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax393 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax393;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    v394 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v395) + (v94->f40 << 4) + 4);
                    if (v106 == 1) {
                        v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v394;
                        v8 = v108;
                        v26 = v396;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax397 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax397;
                        continue;
                    } else {
                        if (v106 < 1) {
                            v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v394;
                            v26 = v398;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax399 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax399;
                            continue;
                        } else {
                            if (v106 == 2) {
                                v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                v87 = v394;
                                v86 = v400;
                                v8 = v108;
                                v26 = v401;
                                v44 = v125;
                                v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                                eax402 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                                v124 = eax402;
                                continue;
                            } else {
                                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            }
                        }
                    }
                    v403 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v404) + (v94->f40 << 4) + 4);
                    if (v106 == 1) {
                        v87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        v86 = v403;
                        v8 = v108;
                        v26 = v405;
                        v44 = v125;
                        v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                        eax406 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                        v124 = eax406;
                    } else {
                        if (v106 < 1) {
                            v86 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v8 = v403;
                            v26 = v407;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax408 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax408;
                        } else {
                            if (v106 != 2) 
                                break;
                            v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            v87 = v403;
                            v86 = v409;
                            v8 = v108;
                            v26 = v410;
                            v44 = v125;
                            v45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80));
                            eax411 = fun_8049a4c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                            v124 = eax411;
                        }
                    }
                }
                fun_80494bc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
            }
            addr_805c397_115:
            *reinterpret_cast<void***>(v97 + 1) = reinterpret_cast<void**>(0);
            continue;
            addr_805c3b5_117:
            if (reinterpret_cast<signed char>(v113) < reinterpret_cast<signed char>(0)) {
                v412 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v412 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v113) + reinterpret_cast<unsigned char>(v113));
            }
            v44 = reinterpret_cast<void**>(12);
            v45 = v412;
            eax413 = xsum(v45, 12, v26, v8, v86, v87, v51, v11, v88);
            if (reinterpret_cast<unsigned char>(eax413) <= reinterpret_cast<unsigned char>(v113)) 
                continue;
            if (!v113) {
                v414 = reinterpret_cast<void**>(12);
            } else {
                if (reinterpret_cast<signed char>(v113) < reinterpret_cast<signed char>(0)) {
                    v415 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v415 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v113) + reinterpret_cast<unsigned char>(v113));
                }
                v414 = v415;
            }
            v113 = v414;
            if (reinterpret_cast<unsigned char>(eax413) > reinterpret_cast<unsigned char>(v113)) {
                v113 = eax413;
            }
            if (v113 == 0xffffffff) 
                goto addr_805ca3f_99;
            if (v82 == v416 || !v82) {
                v45 = v113;
                eax417 = malloc(v45, 12, v26, v8, v86, v87, v51, v11, v88);
                v418 = eax417;
            } else {
                v44 = v113;
                v45 = v82;
                eax419 = fun_80495ac(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                v418 = eax419;
            }
            if (!v418) 
                goto addr_805ca3f_99;
            if (v82 == v420 && v80) {
                v26 = v80;
                v44 = v82;
                v45 = v418;
                fun_804983c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
            }
            v82 = v418;
            continue;
            addr_805c5d4_126:
            if (v125 == 0x7fffffff) 
                goto addr_805c9c6_444;
            if (reinterpret_cast<signed char>(v113) < reinterpret_cast<signed char>(0)) {
                v421 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v421 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v113) + reinterpret_cast<unsigned char>(v113));
            }
            eax422 = xsum(v80, v123 + 2, v26, v8, v86, v87, v51, v11, v88);
            v44 = v421;
            v45 = eax422;
            eax423 = xmax(v45, v44, v26, v8, v86, v87, v51, v11, v88);
            if (reinterpret_cast<unsigned char>(eax423) <= reinterpret_cast<unsigned char>(v113)) 
                continue;
            if (!v113) {
                v424 = reinterpret_cast<void**>(12);
            } else {
                if (reinterpret_cast<signed char>(v113) < reinterpret_cast<signed char>(0)) {
                    v425 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v425 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v113) + reinterpret_cast<unsigned char>(v113));
                }
                v424 = v425;
            }
            v113 = v424;
            if (reinterpret_cast<unsigned char>(eax423) > reinterpret_cast<unsigned char>(v113)) {
                v113 = eax423;
            }
            if (v113 == 0xffffffff) 
                goto addr_805ca3f_99;
            if (v82 == v426 || !v82) {
                v45 = v113;
                eax427 = malloc(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                v428 = eax427;
            } else {
                v44 = v113;
                v45 = v82;
                eax429 = fun_80495ac(v45, v44, v26, v8, v86, v87, v51, v11, v88);
                v428 = eax429;
            }
            if (!v428) 
                goto addr_805ca3f_99;
            if (v82 == v430 && v80) {
                v26 = v80;
                v44 = v82;
                v45 = v428;
                fun_804983c(v45, v44, v26, v8, v86, v87, v51, v11, v88);
            }
            v82 = v428;
        }
    }
    addr_805c543_124:
    if (v82 != v431 && v82) {
        free(v82, v44, v26, v8, v86, v87, v51, v11, v88);
    }
    if (v432) {
        free(v433, v44, v26, v8, v86, v87, v51, v11, v88);
    }
    v85 = v434;
    free(v85, v44, v26, v8, v86, v87, v51, v11, v88);
    if (v435) {
        v85 = v436;
        free(v85, v44, v26, v8, v86, v87, v51, v11, v88);
        goto addr_805c5a5_57;
    }
    addr_805c7a1_149:
    v44 = reinterpret_cast<void**>(1);
    eax437 = xsum(v80, 1, v26, v8, v86, v87, v51, v11, v88);
    if (reinterpret_cast<unsigned char>(eax437) <= reinterpret_cast<unsigned char>(v113)) {
        addr_805c904_470:
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v80)) = 0;
        if (v82 != v438 && (reinterpret_cast<unsigned char>(v80 + 1) < reinterpret_cast<unsigned char>(v113) && (v44 = v80 + 1, eax439 = fun_80495ac(v82, v44, v26, v8, v86, v87, v51, v11, v88), !!eax439))) {
            v82 = eax439;
        }
    } else {
        if (!v113) {
            v440 = reinterpret_cast<void**>(12);
        } else {
            if (reinterpret_cast<signed char>(v113) < reinterpret_cast<signed char>(0)) {
                v441 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v441 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v113) + reinterpret_cast<unsigned char>(v113));
            }
            v440 = v441;
        }
        v113 = v440;
        v44 = reinterpret_cast<void**>(1);
        eax442 = xsum(v80, 1, v26, v8, v86, v87, v51, v11, v88);
        if (reinterpret_cast<unsigned char>(eax442) > reinterpret_cast<unsigned char>(v113)) {
            v44 = reinterpret_cast<void**>(1);
            eax443 = xsum(v80, 1, v26, v8, v86, v87, v51, v11, v88);
            v113 = eax443;
        }
        if (v113 == 0xffffffff) 
            goto addr_805ca3f_99; else 
            goto addr_805c867_481;
    }
    if (v444) {
        free(v445, v44, v26, v8, v86, v87, v51, v11, v88);
    }
    v85 = v446;
    free(v85, v44, v26, v8, v86, v87, v51, v11, v88);
    if (v447) {
        v85 = v448;
        free(v85, v44, v26, v8, v86, v87, v51, v11, v88);
        goto addr_805c9a7_51;
    }
    addr_805ca3f_99:
    if (v82 != v449 && v82) {
        free(v82, v44, v26, v8, v86, v87, v51, v11, v88);
    }
    if (v450) {
        free(v451, v44, v26, v8, v86, v87, v51, v11, v88);
    }
    v85 = v452;
    free(v85, v44, v26, v8, v86, v87, v51, v11, v88);
    if (v453) {
        v85 = v454;
        free(v85, v44, v26, v8, v86, v87, v51, v11, v88);
        goto addr_805caa1_55;
    }
    addr_805c867_481:
    if (v82 == v455 || !v82) {
        eax456 = malloc(v113, 1, v26, v8, v86, v87, v51, v11, v88);
        v457 = eax456;
    } else {
        v44 = v113;
        eax458 = fun_80495ac(v82, v44, v26, v8, v86, v87, v51, v11, v88);
        v457 = eax458;
    }
    if (!v457) 
        goto addr_805ca3f_99;
    if (v82 == v459 && v80) {
        v26 = v80;
        v44 = v82;
        fun_804983c(v457, v44, v26, v8, v86, v87, v51, v11, v88);
    }
    v82 = v457;
    goto addr_805c904_470;
    addr_805c9c6_444:
    if (v82 != v460 && v82) {
        free(v82, v44, v26, v8, v86, v87, v51, v11, v88);
    }
    if (v461) {
        free(v462, v44, v26, v8, v86, v87, v51, v11, v88);
    }
    v85 = v463;
    free(v85, v44, v26, v8, v86, v87, v51, v11, v88);
    if (v464) {
        v85 = v465;
        free(v85, v44, v26, v8, v86, v87, v51, v11, v88);
        goto addr_805ca28_56;
    }
}

int32_t malloc = 0x8049942;

void** malloc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    goto malloc;
}

void** xsum(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;

    if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(a2)) < reinterpret_cast<unsigned char>(a1)) {
        v10 = reinterpret_cast<void**>(0xffffffff);
    } else {
        v10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(a2));
    }
    return v10;
}

int32_t is_infinitel(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** edx10;
    void** v11;
    void** v12;
    void** v13;
    void** ebp14;
    uint32_t eax15;
    int16_t fpu_status_word16;
    int1_t pf17;
    uint32_t eax18;
    int16_t ax19;
    int16_t fpu_status_word20;
    int32_t v21;

    edx10 = a2;
    eax15 = rpl_isnanl(a1, edx10, a3, v11, v12, v13, ebp14, __return_address(), a1);
    if (eax15 || (*reinterpret_cast<int16_t*>(&eax15) = fpu_status_word16, pf17 = *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax15) + 1), *reinterpret_cast<unsigned char*>(&eax15) = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax15) + 1), *reinterpret_cast<unsigned char*>(&edx10) = reinterpret_cast<uint1_t>(!pf17), eax18 = eax15 & reinterpret_cast<unsigned char>(edx10) ^ 1, !*reinterpret_cast<signed char*>(&eax18)) && ((ax19 = fpu_status_word20, *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax19) + 1)) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax19) + 1))) {
        v21 = 1;
    } else {
        v21 = 0;
    }
    return v21;
}

uint32_t rpl_isnanl(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    uint32_t v10;
    uint32_t v11;

    v10 = reinterpret_cast<unsigned char>(a3) & 0x7fff;
    if (v10) {
        if (v10 != 0x7fff) {
            v11 = reinterpret_cast<unsigned char>(a2) >> 31 ^ 1;
        } else {
            v11 = reinterpret_cast<uint1_t>(!!(reinterpret_cast<unsigned char>(a1) | reinterpret_cast<unsigned char>(a2) ^ 0x80000000));
        }
    } else {
        v11 = reinterpret_cast<unsigned char>(a2) >> 31;
    }
    return v11;
}

int32_t realloc = 0x80495b2;

void** fun_80495ac(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    goto realloc;
}

void** xsum4(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** ebp6;
    void** eax7;
    void** eax8;
    void** eax9;

    eax7 = xsum(a1, a2, ebp6, __return_address(), a1, a2, a3, a4, a5);
    eax8 = xsum(eax7, a3, ebp6, __return_address(), a1, a2, a3, a4, a5);
    eax9 = xsum(eax8, a4, ebp6, __return_address(), a1, a2, a3, a4, a5);
    return eax9;
}

void** xsum(void** a1, void** a2) {
    void** v3;

    if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(a2)) < reinterpret_cast<unsigned char>(a1)) {
        v3 = reinterpret_cast<void**>(0xffffffff);
    } else {
        v3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(a2));
    }
    return v3;
}

/* __i686.get_pc_thunk.bx */
int32_t __i686_get_pc_thunk_bx() {
    int32_t eax1;

    return eax1;
}

int32_t __cxa_atexit = 0x8049532;

void fun_804952c(int32_t a1, int32_t a2, int32_t a3) {
    goto __cxa_atexit;
}

int32_t memmove = 0x80499c2;

void fun_80499bc(void** a1, void** a2, void** a3, void** a4) {
    goto memmove;
}

void dev_ino_free(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** ebp8;

    free(a1, v7, ebp8, __return_address(), a1, a2, a3, a4, a5);
    return;
}

void free_pending_ent(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** v8;
    void** ebp9;
    void** v10;
    void** v11;
    void** v12;

    v7 = *reinterpret_cast<void***>(a1);
    free(v7, v8, ebp9, __return_address(), a1, a2, a3, a4, a5);
    v10 = *reinterpret_cast<void***>(a1 + 4);
    free(v10, v11, ebp9, __return_address(), a1, a2, a3, a4, a5);
    free(a1, v12, ebp9, __return_address(), a1, a2, a3, a4, a5);
    return;
}

int32_t sigprocmask = 0x8049952;

void fun_804994c(void** a1, void** a2, void** a3) {
    goto sigprocmask;
}

int32_t setlocale = 0x8049882;

void** fun_804987c(int32_t a1, int32_t a2) {
    goto setlocale;
}

int32_t bindtextdomain = 0x80496d2;

void fun_80496cc(int32_t a1, int32_t a2) {
    goto bindtextdomain;
}

int32_t textdomain = 0x80499e2;

void fun_80499dc(int32_t a1, int32_t a2) {
    goto textdomain;
}

void initialize_exit_failure(void** a1, int32_t a2) {
    if (a1 != 1) {
        exit_failure = a1;
    }
    return;
}

void atexit(int32_t a1, int32_t a2) {
    int32_t eax3;
    int32_t ebx4;

    eax3 = __i686_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t**>(ebx4 + 0x5c69 - 4)) {
        eax3 = **reinterpret_cast<int32_t**>(ebx4 + 0x5c69 - 4);
    }
    fun_804952c(a1, 0, eax3);
    return;
}

int32_t tcgetpgrp = 0x8049812;

int32_t fun_804980c(void** a1, void** a2) {
    goto tcgetpgrp;
}

int32_t sigaction = 0x8049762;

void fun_804975c(void** a1, void** a2, void** a3) {
    goto sigaction;
}

int32_t sigismember = 0x8049592;

int32_t fun_804958c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto sigismember;
}

void** fun_804977c(void** a1);

unsigned char print_dir_name = 0;

/* first.7139 */
unsigned char first_7139 = 1;

void** g80645ec = reinterpret_cast<void**>(0);

void** g80645f0 = reinterpret_cast<void**>(0);

signed char visit_dir(void** a1, void** a2, void** a3, void** a4);

struct s22 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
};

void** print_dir(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** eax8;
    unsigned char v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void*** eax21;
    void** v22;
    void** eax23;
    void** v24;
    void** eax25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void** v31;
    uint32_t eax32;
    uint32_t eax33;
    signed char v34;
    uint32_t eax35;
    uint32_t eax36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** eax45;
    void** v46;
    void** v47;
    void** v48;
    void** eax49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void*** eax54;
    struct s7* eax55;
    void** v56;
    void** v57;
    void** v58;
    void*** eax59;
    void** v60;
    void** v61;
    void** v62;
    void** eax63;
    void** v64;
    void** v65;
    void** v66;
    void*** eax67;
    uint32_t eax68;
    uint32_t eax69;
    void** v70;
    uint32_t eax71;
    uint32_t v72;
    void** edx73;
    void** ecx74;
    void** v75;
    void** eax76;
    void** tmp32_77;
    uint1_t cf78;
    void** v79;
    void** eax80;
    void** v81;
    void** v82;
    void** v83;
    void** eax84;
    uint32_t eax85;
    uint32_t eax86;
    uint32_t eax87;
    uint32_t eax88;
    uint32_t eax89;
    void** v90;
    void** v91;
    uint32_t eax92;
    uint32_t eax93;
    void** eax94;
    void** v95;
    void** v96;
    uint32_t eax97;
    uint32_t eax98;
    void** edx99;
    void** eax100;
    void** eax101;
    void** v102;
    void** v103;
    void** v104;
    void** edx105;
    void** ecx106;
    void** v107;
    void** eax108;
    void** v109;
    void** v110;
    void** eax111;
    uint32_t eax112;
    uint32_t eax113;
    void** edx114;
    void** eax115;
    void** eax116;
    void** v117;
    void** v118;
    void** v119;
    void** edx120;
    void** eax121;
    void** v122;
    void** v123;
    uint32_t eax124;
    void** eax125;
    uint32_t eax126;
    uint32_t eax127;
    void** eax128;
    void** v129;
    void** v130;
    uint32_t eax131;
    void** v132;
    void** v133;
    void** v134;
    void** eax135;
    void** eax136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** eax141;
    uint32_t eax142;
    void** v143;
    void** v144;
    uint32_t eax145;
    void** eax146;
    void** edx147;
    void** ecx148;
    void** v149;
    void** v150;
    void** eax151;
    void** eax152;
    void** eax153;
    uint32_t eax154;
    uint32_t eax155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    signed char al160;
    int32_t eax161;
    void** eax162;
    void** v163;
    void** v164;
    void** edx165;
    void** eax166;
    struct s22* v167;
    int32_t v168;
    int32_t v169;
    int32_t v170;
    int32_t v171;
    void** eax172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** eax178;
    void** v179;
    void** v180;
    void** v181;
    void** v182;
    void** v183;
    void** v184;
    void** v185;
    void** v186;
    void** v187;
    void** v188;
    void** v189;
    void** v190;
    void** v191;
    void** eax192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax8 = a3;
    v9 = *reinterpret_cast<unsigned char*>(&eax8);
    v10 = reinterpret_cast<void**>(0);
    v11 = reinterpret_cast<void**>(0);
    eax21 = fun_80494cc(v12, v13, v14, v15, v16, v17, v18, v19, v20);
    *eax21 = reinterpret_cast<void**>(0);
    v22 = a1;
    eax23 = fun_804977c(v22);
    v24 = eax23;
    if (v24) {
        eax25 = active_dir_set;
        if (!eax25) {
            addr_804c196_3:
            clear_files(v22, v26, v27, v28, v29);
        } else {
            eax30 = fun_804951c(v24);
            if (reinterpret_cast<signed char>(eax30) < reinterpret_cast<signed char>(0)) {
                v31 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffffd34);
                eax32 = stat64(a1, v31);
                eax33 = eax32 >> 31;
                v34 = *reinterpret_cast<signed char*>(&eax33);
            } else {
                v31 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffffd34);
                eax35 = fstat64(eax30, v31);
                eax36 = eax35 >> 31;
                v34 = *reinterpret_cast<signed char*>(&eax36);
            }
            if (!v34) 
                goto addr_804c0a3_8; else 
                goto addr_804c06b_9;
        }
    } else {
        eax45 = fun_80496ec(0x805f7df, v37, v38, v39, v40, v41, v42, v43, v44);
        eax49 = file_failure(static_cast<uint32_t>(v9), eax45, a1, v46, v47, v48);
        goto addr_804c666_11;
    }
    while (1) {
        eax54 = fun_80494cc(v22, v26, v27, v28, 0, v50, v51, v52, v53);
        *eax54 = reinterpret_cast<void**>(0);
        eax55 = fun_804982c(v24, v26, v27, v28, 0, v50);
        if (!eax55) {
            eax59 = fun_80494cc(v24, v26, v27, v28, 0, v50, v56, v57, v58);
            if (!*eax59) 
                break;
            eax63 = fun_80496ec(0x805f849, v26, v27, v28, 0, v50, v60, v61, v62);
            v27 = a1;
            v26 = eax63;
            v22 = reinterpret_cast<void**>(static_cast<uint32_t>(v9));
            file_failure(v22, v26, v27, v28, 0, v50);
            eax67 = fun_80494cc(v22, v26, v27, v28, 0, v50, v64, v65, v66);
            if (*eax67 == 75) 
                continue; else 
                break;
        }
        v22 = reinterpret_cast<void**>(&eax55->f19);
        eax68 = file_ignored(v22, v26, v27, v28, 0, v50);
        eax69 = eax68 ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax69)) 
            continue;
        v70 = reinterpret_cast<void**>(0);
        eax71 = eax55->f18;
        v72 = *reinterpret_cast<unsigned char*>(&eax71);
        if (v72 <= 14) 
            goto addr_804c1f3_17;
        addr_804c248_18:
        edx73 = eax55->f0;
        ecx74 = eax55->f4;
        v50 = a1;
        v75 = reinterpret_cast<void**>(0);
        v27 = edx73;
        v28 = ecx74;
        v26 = v70;
        v22 = reinterpret_cast<void**>(&eax55->f19);
        eax76 = gobble_file(v22, v26, v27, v28, 0, v50);
        tmp32_77 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(eax76));
        cf78 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_77) < reinterpret_cast<unsigned char>(v10));
        v10 = tmp32_77;
        v11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v11) + reinterpret_cast<unsigned char>(edx73) + cf78);
        continue;
        addr_804c1f3_17:
        switch (v72) {
        case 1:
            v70 = reinterpret_cast<void**>(1);
            break;
        case 2:
            v70 = reinterpret_cast<void**>(2);
            break;
        case 4:
            v70 = reinterpret_cast<void**>(3);
            break;
        case 6:
            v70 = reinterpret_cast<void**>(4);
            break;
        case 8:
            v70 = reinterpret_cast<void**>(5);
            break;
        case 10:
            v70 = reinterpret_cast<void**>(6);
            break;
        case 12:
            v70 = reinterpret_cast<void**>(7);
            break;
        case 14:
            v70 = reinterpret_cast<void**>(8);
        case 0:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
        case 13:
            goto 0x804c248;
        }
        goto addr_804c248_18;
    }
    v79 = v24;
    eax80 = fun_804990c(v79, v26, v27, v28, 0, v50);
    if (eax80) {
        eax84 = fun_80496ec(0x805f85e, v26, v27, v28, 0, v50, v81, v82, v83);
        v27 = a1;
        v26 = eax84;
        v79 = reinterpret_cast<void**>(static_cast<uint32_t>(v9));
        file_failure(v79, v26, v27, v28, 0, v50);
    }
    sort_files(v79, v26, v27, v28, 0, v50);
    eax85 = recursive;
    if (*reinterpret_cast<signed char*>(&eax85)) {
        v26 = reinterpret_cast<void**>(static_cast<uint32_t>(v9));
        v79 = a1;
        extract_dirs_from_files(v79, v26, v27, v28, 0, v50);
    }
    eax86 = recursive;
    eax87 = print_dir_name;
    if (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax87)) | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax86))) {
        eax88 = first_7139;
        eax89 = eax88 ^ 1;
        if (*reinterpret_cast<signed char*>(&eax89)) {
            fun_8049abc(10, v26, v27, v28, 0, v50, v90, v91);
            eax92 = dired_pos;
            dired_pos = eax92 + 1;
        }
        first_7139 = 0;
        eax93 = dired;
        if (*reinterpret_cast<signed char*>(&eax93)) {
            eax94 = stdout;
            v28 = eax94;
            v27 = reinterpret_cast<void**>(2);
            fun_80498dc(0x805f873, 1, 2, v28, 0, v50, v95, v96);
            eax97 = dired_pos;
            dired_pos = eax97 + 2;
        }
        eax98 = dired;
        if (*reinterpret_cast<signed char*>(&eax98)) {
            edx99 = g80645ec;
            eax100 = g80645f0;
            if (reinterpret_cast<unsigned char>(edx99 + 4) > reinterpret_cast<unsigned char>(eax100)) {
                fun_804973c(0x80645e0, 4, v27, v28, 0, v50);
            }
            eax101 = g80645ec;
            fun_804983c(eax101, 0x8064594, 4, v28, 0, v50, v102, v103, v104);
            edx105 = g80645ec;
            g80645ec = edx105 + 4;
        }
        ecx106 = dirname_quoting_options;
        if (!a2) {
            v107 = a1;
        } else {
            v107 = a2;
        }
        eax108 = stdout;
        eax111 = quote_name(eax108, v107, ecx106, 0, 0, v50, v109, v110);
        eax112 = dired_pos;
        dired_pos = reinterpret_cast<unsigned char>(eax111) + eax112;
        eax113 = dired;
        if (*reinterpret_cast<signed char*>(&eax113)) {
            edx114 = g80645ec;
            eax115 = g80645f0;
            if (reinterpret_cast<unsigned char>(edx114 + 4) > reinterpret_cast<unsigned char>(eax115)) {
                fun_804973c(0x80645e0, 4, ecx106, 0, 0, v50);
            }
            eax116 = g80645ec;
            fun_804983c(eax116, 0x8064594, 4, 0, 0, v50, v117, v118, v119);
            edx120 = g80645ec;
            g80645ec = edx120 + 4;
        }
        eax121 = stdout;
        v28 = eax121;
        v27 = reinterpret_cast<void**>(2);
        v26 = reinterpret_cast<void**>(1);
        v79 = reinterpret_cast<void**>(0x805f876);
        fun_80498dc(0x805f876, 1, 2, v28, 0, v50, v122, v123);
        eax124 = dired_pos;
        dired_pos = eax124 + 2;
    }
    eax125 = format;
    if (!eax125 || (eax126 = print_block_size, !!*reinterpret_cast<signed char*>(&eax126))) {
        eax127 = dired;
        if (*reinterpret_cast<signed char*>(&eax127)) {
            eax128 = stdout;
            v28 = eax128;
            v27 = reinterpret_cast<void**>(2);
            v26 = reinterpret_cast<void**>(1);
            fun_80498dc(0x805f873, 1, 2, v28, 0, v50, v129, v130);
            eax131 = dired_pos;
            dired_pos = eax131 + 2;
        }
        eax135 = fun_80496ec(0x805f879, v26, v27, v28, 0, v50, v132, v133, v134);
        eax136 = stdout;
        fun_804955c(eax135, eax136, v27, v28, 0, v50, v137, v138);
        eax141 = fun_804985c(eax135, eax136, v27, v28, 0, v50, v139, v140);
        eax142 = dired_pos;
        dired_pos = reinterpret_cast<unsigned char>(eax141) + eax142;
        fun_8049abc(32, eax136, v27, v28, 0, v50, v143, v144);
        eax145 = dired_pos;
        dired_pos = eax145 + 1;
        eax146 = output_block_size;
        edx147 = g80644ac;
        ecx148 = human_output_opts;
        v149 = eax146;
        v150 = edx147;
        v75 = reinterpret_cast<void**>(0x200);
        v50 = reinterpret_cast<void**>(0);
        v28 = ecx148;
        v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffffd34);
        eax151 = human_readable(v10, v11, v27, v28, 0x200, 0, v149, v150);
        eax152 = stdout;
        v26 = eax152;
        fun_804955c(eax151, v26, v27, v28, 0x200, 0, v149, v150);
        eax153 = fun_804985c(eax151, v26, v27, v28, 0x200, 0, v149, v150);
        eax154 = dired_pos;
        dired_pos = reinterpret_cast<unsigned char>(eax153) + eax154;
        v79 = reinterpret_cast<void**>(10);
        fun_8049abc(10, v26, v27, v28, 0x200, 0, v149, v150);
        eax155 = dired_pos;
        dired_pos = eax155 + 1;
    }
    eax49 = cwd_n_used;
    if (eax49) {
        eax49 = print_current_files(v79, v26, v27, v28, v75, v50, v149, v150);
    }
    addr_804c666_11:
    return eax49;
    addr_804c0a3_8:
    v27 = v156;
    v28 = v157;
    v22 = v158;
    v26 = v159;
    al160 = visit_dir(v22, v26, v27, v28);
    if (!al160) {
        eax161 = g8064630;
        eax162 = g806462c;
        if (reinterpret_cast<int32_t>(eax161 - reinterpret_cast<unsigned char>(eax162)) < reinterpret_cast<int32_t>(16)) {
            v26 = reinterpret_cast<void**>(16);
            v22 = reinterpret_cast<void**>(0x8064620);
            fun_804973c(0x8064620, 16, v27, v28, v163, v164);
        }
        edx165 = g806462c;
        g806462c = edx165 + 16;
        eax166 = g806462c;
        v167 = reinterpret_cast<struct s22*>(eax166 - 16);
        v167->f8 = v168;
        v167->f12 = v169;
        v167->f0 = v170;
        v167->f4 = v171;
        goto addr_804c196_3;
    } else {
        eax172 = quotearg_colon(a1, v26, v27, v28);
        eax178 = fun_80496ec(0x805f820, v26, v27, v28, v173, v174, v175, v176, v177);
        fun_804997c(0, 0, eax178, eax172, v179, v180, v181, v182);
        eax49 = fun_804990c(v24, 0, eax178, eax172, v183, v184);
        goto addr_804c666_11;
    }
    addr_804c06b_9:
    eax192 = fun_80496ec(0x805f7f8, v31, v185, v186, v187, v188, v189, v190, v191);
    file_failure(static_cast<uint32_t>(v9), eax192, a1, v193, v194, v195);
    eax49 = fun_804990c(v24, eax192, a1, v196, v197, v198);
    goto addr_804c666_11;
}

int32_t exit = 0x8049ab2;

void fun_8049aac(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto exit;
}

void** hash_get_max_bucket_length(void** a1) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;

    v2 = reinterpret_cast<void**>(0);
    v3 = *reinterpret_cast<void***>(a1);
    while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) > reinterpret_cast<unsigned char>(v3)) {
        if (!*reinterpret_cast<void***>(v3)) {
            addr_8052471_4:
            v3 = v3 + 8;
            continue;
        } else {
            v4 = v3;
            v5 = reinterpret_cast<void**>(1);
            while (v4 = *reinterpret_cast<void***>(v4 + 4), !!v4) {
                ++v5;
            }
            if (reinterpret_cast<unsigned char>(v5) <= reinterpret_cast<unsigned char>(v2)) 
                goto addr_8052471_4;
        }
        v2 = v5;
        goto addr_8052471_4;
    }
    return v2;
}

void** humblock(void** a1, void** a2, void** a3);

void** human_options(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;
    void** v9;
    void** edx10;
    void** eax11;

    eax8 = humblock(a1, a3, a2);
    v9 = eax8;
    edx10 = *reinterpret_cast<void***>(a3 + 4);
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) | reinterpret_cast<unsigned char>(edx10))) {
        eax11 = default_block_size(a1, a3, a2);
        *reinterpret_cast<void***>(a3) = eax11;
        *reinterpret_cast<void***>(a3 + 4) = edx10;
        v9 = reinterpret_cast<void**>(4);
    }
    return v9;
}

int32_t ioctl = 0x80497a2;

int32_t fun_804979c(int32_t a1, void** a2, void** a3, void** a4, void** a5) {
    goto ioctl;
}

int32_t getopt_long = 0x8049792;

struct s5* fun_804978c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto getopt_long;
}

void add_ignore_pattern(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** ebp13;
    void** eax14;
    void** edx15;

    eax14 = xmalloc(8, v8, v9, v10, v11, v12, ebp13);
    *reinterpret_cast<void***>(eax14) = a1;
    edx15 = ignore_patterns;
    *reinterpret_cast<void***>(eax14 + 4) = edx15;
    ignore_patterns = eax14;
    return;
}

void** quotearg_n(void** a1, void** a2) {
    void** eax3;

    eax3 = quotearg_n_options(a1, a2, 0xffffffff, 0x8064720);
    return eax3;
}

struct s23 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
    int32_t f16;
    int32_t f20;
    int32_t f24;
    int32_t f28;
    int32_t f32;
};

struct s23* quoting_options_from_style(struct s23* a1, int32_t a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;

    fun_804964c(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 40 + 4, 0, 32, v3, v4, v5, v6);
    a1->f0 = a2;
    a1->f4 = v7;
    a1->f8 = v8;
    a1->f12 = v9;
    a1->f16 = v10;
    a1->f20 = v11;
    a1->f24 = v12;
    a1->f28 = v13;
    a1->f32 = v14;
    return a1;
}

void xstrtol_error(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void** ecx26;
    void** v27;
    void** v28;

    v7 = reinterpret_cast<void**>(0x8061ef4);
    if (reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(3)) {
        if (a1 == 4) {
            addr_8058b40_3:
            v8 = reinterpret_cast<void**>(0x8061ef7);
        } else {
            addr_8058b3b_4:
            fun_80494bc(v9, v10, v11, v12, v13, v14, v15, v16, a1);
            goto addr_8058b40_3;
        }
    } else {
        if (reinterpret_cast<unsigned char>(a1) >= reinterpret_cast<unsigned char>(2)) {
            v8 = reinterpret_cast<void**>(0x8061f14);
        } else {
            if (a1 == 1) {
                v8 = reinterpret_cast<void**>(0x8061f39);
            } else {
                goto addr_8058b3b_4;
            }
        }
    }
    if (reinterpret_cast<signed char>(a2) >= reinterpret_cast<signed char>(0)) {
        v17 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(a2) << 4) + reinterpret_cast<unsigned char>(a4));
    } else {
        v7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(0x8061ef4) + -reinterpret_cast<unsigned char>(a2));
        v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffffe);
    }
    eax25 = fun_80496ec(v8, v18, v19, v20, v21, v22, v23, v24, a1);
    ecx26 = exit_failure;
    fun_804997c(ecx26, 0, eax25, v7, v17, a5, v27, v28);
    return;
}

uint32_t hard_locale(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    unsigned char v8;
    void** eax9;
    void** v10;
    void** v11;
    int32_t eax12;
    void** v13;
    void** v14;
    int32_t eax15;

    v8 = 1;
    eax9 = fun_804987c(a1, 0);
    if (eax9 && ((eax12 = strcmp(eax9, 0x8061857, v10, v11), eax12 == 0) || (eax15 = strcmp(eax9, 0x8061859, v13, v14), !eax15))) {
        v8 = 0;
    }
    return static_cast<uint32_t>(v8);
}

int32_t dcgettext = 0x8049752;

int32_t fun_804974c(int32_t a1, int32_t a2, int32_t a3, void** a4, void** a5, void** a6, void** a7) {
    goto dcgettext;
}

int32_t __fxstat64 = 0x80499f2;

uint32_t fun_80499ec(int32_t a1, void** a2, int32_t a3) {
    goto __fxstat64;
}

void** hash_insert(void** a1, void** a2);

signed char visit_dir(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** eax7;
    void** edx8;
    void** eax9;
    unsigned char v10;
    void** v11;
    uint32_t eax12;

    eax7 = xmalloc(16, v5, a3, a4, a1, a2, v6);
    *reinterpret_cast<void***>(eax7) = a3;
    *reinterpret_cast<void***>(eax7 + 4) = a4;
    *reinterpret_cast<void***>(eax7 + 8) = a1;
    *reinterpret_cast<void***>(eax7 + 12) = a2;
    edx8 = active_dir_set;
    eax9 = hash_insert(edx8, eax7);
    if (!eax9) {
        xalloc_die(edx8, eax7, a3, a4, a1);
    }
    v10 = reinterpret_cast<uint1_t>(eax9 != eax7);
    if (v10) {
        free(eax7, eax7, a3, a4, a1, a2, v11, eax7, eax9);
    }
    eax12 = v10;
    return *reinterpret_cast<signed char*>(&eax12);
}

void** quotearg_char(void** a1, int32_t a2) {
    void* ebp3;
    int32_t eax4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** eax9;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax4 = a2;
    *reinterpret_cast<signed char*>(&v5) = *reinterpret_cast<signed char*>(&eax4);
    set_char_quoting(reinterpret_cast<int32_t>(ebp3) + 0xffffffdc, static_cast<int32_t>(*reinterpret_cast<signed char*>(&v5)), 1, v6, v7, v5, v8);
    eax9 = quotearg_n_options(0, a1, 0xffffffff, reinterpret_cast<int32_t>(ebp3) + 0xffffffdc);
    return eax9;
}

struct s24 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

struct s25 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    int32_t f12;
    void** f16;
};

struct s26 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
};

struct s27 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
};

void** quote_name(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* esp9;
    void* ebp10;
    void** eax11;
    struct s24* esp12;
    void** v13;
    struct s25* esp14;
    void** v15;
    struct s26* esp16;
    uint32_t eax17;
    struct s27* esp18;
    uint32_t eax19;
    void** v20;
    void** v21;
    void** v22;
    struct s27* esp23;
    void*** eax24;
    struct s24* esp25;
    void** ebx26;
    uint32_t eax27;
    struct s27* esp28;
    unsigned char al29;
    void* eax30;
    uint32_t eax31;
    struct s27* esp32;
    void** eax33;
    struct s27* esp34;
    uint32_t eax35;
    void** v36;
    void** v37;
    struct s27* esp38;
    void*** eax39;
    struct s24* esp40;
    void** ebx41;
    uint32_t eax42;
    struct s27* esp43;
    unsigned char al44;
    void* eax45;
    uint32_t eax46;
    void** v47;
    void** v48;
    void** v49;
    uint32_t eax50;
    int32_t v51;
    uint32_t edx52;
    struct s27* esp53;
    void* eax54;
    void* v55;
    void** v56;
    struct s27* esp57;
    void* eax58;
    struct s24* esp59;
    void* v60;
    uint32_t edx61;
    struct s27* esp62;
    int32_t eax63;
    struct s27* esp64;

    esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp10 = esp9;
    eax11 = quotearg_buffer(reinterpret_cast<int32_t>(ebp10) + 0xffffdfcc, 0x2000, a2, 0xffffffff, a3);
    esp12 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(esp9) - 4 - 0x2064 - 4 + 4);
    v13 = eax11;
    if (reinterpret_cast<unsigned char>(v13) > reinterpret_cast<unsigned char>(0x1fff)) {
        esp14 = reinterpret_cast<struct s25*>(reinterpret_cast<uint32_t>(esp12) - (reinterpret_cast<uint32_t>(v13 + 1 + 15) + 15 >> 4 << 4));
        v15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp14) + 20 + 15 >> 4 << 4);
        esp14->f16 = a3;
        esp14->f12 = -1;
        esp14->f8 = a2;
        esp14->f4 = v13 + 1;
        esp14->f0 = v15;
        esp16 = reinterpret_cast<struct s26*>(reinterpret_cast<uint32_t>(esp14) - 4);
        esp16->f0 = 0x804fb08;
        quotearg_buffer(esp16->f4, esp16->f8, esp16->f12, esp16->f16, esp16->f20);
        esp12 = reinterpret_cast<struct s24*>(&esp16->f4);
    } else {
        v15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp10) + 0xffffdfcc);
    }
    eax17 = qmark_funny_chars;
    if (!*reinterpret_cast<signed char*>(&eax17)) {
        if (a4) {
            esp18 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(esp12) - 4);
            esp18->f0 = 0x804fd35;
            eax19 = fun_804956c();
            esp12 = reinterpret_cast<struct s24*>(&esp18->f4);
            if (eax19 <= 1) {
                v20 = v15;
                v21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v13));
                v22 = reinterpret_cast<void**>(0);
                while (reinterpret_cast<unsigned char>(v20) < reinterpret_cast<unsigned char>(v21)) {
                    esp23 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(esp12) - 4);
                    esp23->f0 = 0x804fd78;
                    eax24 = fun_80497ac(esp23->f4, esp23->f8, esp23->f12, esp23->f16);
                    esp25 = reinterpret_cast<struct s24*>(&esp23->f4);
                    ebx26 = *eax24;
                    eax27 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v20));
                    esp25->f0 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax27)));
                    esp28 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(esp25) - 4);
                    esp28->f0 = 0x804fd8b;
                    al29 = to_uchar(esp28->f4);
                    esp12 = reinterpret_cast<struct s24*>(&esp28->f4);
                    eax30 = reinterpret_cast<void*>(static_cast<uint32_t>(al29));
                    eax31 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(ebx26) + (reinterpret_cast<uint32_t>(eax30) + reinterpret_cast<uint32_t>(eax30)));
                    if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax31)) & 0x4000) {
                        ++v22;
                    }
                    ++v20;
                }
            } else {
                esp12->f8 = reinterpret_cast<void**>(0);
                esp12->f4 = v13;
                esp12->f0 = v15;
                esp32 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(esp12) - 4);
                esp32->f0 = 0x804fd54;
                eax33 = mbsnwidth(esp32->f4, esp32->f8, esp32->f12, esp32->f16, esp32->f20, esp32->f24);
                esp12 = reinterpret_cast<struct s24*>(&esp32->f4);
                v22 = eax33;
            }
        }
    } else {
        esp34 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(esp12) - 4);
        esp34->f0 = 0x804fb1c;
        eax35 = fun_804956c();
        esp12 = reinterpret_cast<struct s24*>(&esp34->f4);
        if (eax35 <= 1) {
            v36 = v15;
            v37 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v13));
            while (reinterpret_cast<unsigned char>(v36) < reinterpret_cast<unsigned char>(v37)) {
                esp38 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(esp12) - 4);
                esp38->f0 = 0x804fcdf;
                eax39 = fun_80497ac(esp38->f4, esp38->f8, esp38->f12, esp38->f16);
                esp40 = reinterpret_cast<struct s24*>(&esp38->f4);
                ebx41 = *eax39;
                eax42 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v36));
                esp40->f0 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax42)));
                esp43 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(esp40) - 4);
                esp43->f0 = 0x804fcf2;
                al44 = to_uchar(esp43->f4);
                esp12 = reinterpret_cast<struct s24*>(&esp43->f4);
                eax45 = reinterpret_cast<void*>(static_cast<uint32_t>(al44));
                eax46 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(ebx41) + (reinterpret_cast<uint32_t>(eax45) + reinterpret_cast<uint32_t>(eax45)));
                if (!(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax46)) & 0x4000)) {
                    *reinterpret_cast<void***>(v36) = reinterpret_cast<void**>(63);
                }
                ++v36;
            }
            v22 = v13;
        } else {
            v47 = v15;
            v48 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(v13));
            v49 = v15;
            v22 = reinterpret_cast<void**>(0);
            while (reinterpret_cast<unsigned char>(v47) < reinterpret_cast<unsigned char>(v48)) {
                eax50 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v47));
                v51 = *reinterpret_cast<signed char*>(&eax50);
                if (v51 <= 95) {
                    if (v51 >= 65) 
                        goto addr_804fb99_24;
                    if (v51 < 32) 
                        goto addr_804fbb5_26;
                    if (v51 <= 35) 
                        goto addr_804fb99_24;
                    if (v51 - 37 > 26) 
                        goto addr_804fbb5_26;
                    goto addr_804fb99_24;
                }
                if (v51 - 97 > 29) {
                    addr_804fbb5_26:
                } else {
                    addr_804fb99_24:
                    edx52 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v47));
                    *reinterpret_cast<void***>(v49) = *reinterpret_cast<void***>(&edx52);
                    ++v49;
                    ++v47;
                    ++v22;
                    continue;
                }
                do {
                    esp12->f12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp10) + 0xffffdfc4);
                    esp12->f8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v48) - reinterpret_cast<unsigned char>(v47));
                    esp12->f4 = v47;
                    esp12->f0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp10) + 0xffffdfc0);
                    esp53 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(esp12) - 4);
                    esp53->f0 = 0x804fbfa;
                    eax54 = fun_80496dc(esp53->f4, esp53->f8, esp53->f12, esp53->f16);
                    esp12 = reinterpret_cast<struct s24*>(&esp53->f4);
                    v55 = eax54;
                    if (reinterpret_cast<int1_t>(v55 == 0xffffffff)) 
                        break;
                    if (reinterpret_cast<int1_t>(v55 == 0xfffffffe)) 
                        goto addr_804fc20_33;
                    if (!v55) {
                        v55 = reinterpret_cast<void*>(1);
                    }
                    esp12->f0 = v56;
                    esp57 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(esp12) - 4);
                    esp57->f0 = 0x804fc51;
                    eax58 = fun_8049a5c(esp57->f4, esp57->f8, esp57->f12, esp57->f16);
                    esp59 = reinterpret_cast<struct s24*>(&esp57->f4);
                    v60 = eax58;
                    if (reinterpret_cast<int32_t>(v60) < reinterpret_cast<int32_t>(0)) {
                        v47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v47) + reinterpret_cast<uint32_t>(v55));
                        *reinterpret_cast<void***>(v49) = reinterpret_cast<void**>(63);
                        ++v49;
                        ++v22;
                    } else {
                        while (v55) {
                            edx61 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v47));
                            *reinterpret_cast<void***>(v49) = *reinterpret_cast<void***>(&edx61);
                            ++v49;
                            ++v47;
                            v55 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v55) - 1);
                        }
                        v22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v22) + reinterpret_cast<uint32_t>(v60));
                    }
                    esp59->f0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp10) + 0xffffdfc4);
                    esp62 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(esp59) - 4);
                    esp62->f0 = 0x804fca3;
                    eax63 = fun_80497ec(esp62->f4, esp62->f8, esp62->f12, esp62->f16, esp62->f20, esp62->f24, esp62->f28);
                    esp12 = reinterpret_cast<struct s24*>(&esp62->f4);
                } while (!eax63);
                continue;
                ++v47;
                *reinterpret_cast<void***>(v49) = reinterpret_cast<void**>(63);
                ++v49;
                ++v22;
                continue;
                addr_804fc20_33:
                v47 = v48;
                *reinterpret_cast<void***>(v49) = reinterpret_cast<void**>(63);
                ++v49;
                ++v22;
            }
            v13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v49) - reinterpret_cast<unsigned char>(v15));
        }
    }
    if (a1) {
        esp12->f12 = a1;
        esp12->f8 = v13;
        esp12->f4 = reinterpret_cast<void**>(1);
        esp12->f0 = v15;
        esp64 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(esp12) - 4);
        esp64->f0 = 0x804fdd9;
        fun_80498dc(esp64->f4, esp64->f8, esp64->f12, esp64->f16, esp64->f20, esp64->f24, esp64->f28, esp64->f32);
    }
    if (a4) {
        *reinterpret_cast<void***>(a4) = v22;
    }
    return v13;
}

int32_t __xstat64 = 0x80495c2;

uint32_t fun_80495bc(int32_t a1, void** a2, int32_t a3) {
    goto __xstat64;
}

int32_t __lxstat64 = 0x8049722;

uint32_t fun_804971c(int32_t a1, void** a2, int32_t a3) {
    goto __lxstat64;
}

uint32_t lgetfilecon(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void*** eax9;

    eax9 = fun_80494cc(v6, v7, ebp8, __return_address(), a1, a2, a3, a4, a5);
    *eax9 = reinterpret_cast<void**>(95);
    return 0xffffffff;
}

void** fun_80499ac(void** a1, void** a2, void** a3);

void** areadlink_with_size(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** eax13;
    void** v14;
    void** v15;
    void*** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void*** eax22;
    void** v23;
    void** v24;
    void** v25;
    void*** eax26;
    void** v27;
    void** v28;
    void*** eax29;

    if (0) {
        v3 = reinterpret_cast<void**>(0x2000);
    } else {
        v3 = reinterpret_cast<void**>(0x401);
    }
    if (reinterpret_cast<unsigned char>(a2) >= reinterpret_cast<unsigned char>(v3)) {
        v4 = v3;
    } else {
        v4 = a2 + 1;
    }
    v5 = v4;
    while (eax12 = malloc(v5, v6, v7, v3, v4, v8, v9, v10, v11), v10 = eax12, !!v10) {
        v7 = v5;
        v6 = v10;
        eax13 = fun_80499ac(a1, v6, v7);
        v11 = eax13;
        if (reinterpret_cast<signed char>(eax13) >= reinterpret_cast<signed char>(0)) 
            goto addr_80514a8_10;
        eax16 = fun_80494cc(a1, v6, v7, v3, v4, v14, v15, v10, v11);
        if (*eax16 != 34) 
            goto addr_805147e_12;
        addr_80514a8_10:
        if (reinterpret_cast<unsigned char>(v11) < reinterpret_cast<unsigned char>(v5)) 
            goto addr_80514b0_13;
        free(v10, v6, v7, v3, v4, v17, v18, v10, v11);
        if (reinterpret_cast<unsigned char>(v5) > reinterpret_cast<unsigned char>(0x3fffffff)) {
            if (reinterpret_cast<unsigned char>(v5) > reinterpret_cast<unsigned char>(0x7ffffffe)) 
                goto addr_80514f5_16;
            v5 = reinterpret_cast<void**>(0x7fffffff);
        } else {
            v5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v5) << 1);
        }
    }
    v19 = reinterpret_cast<void**>(0);
    addr_8051507_20:
    return v19;
    addr_805147e_12:
    eax22 = fun_80494cc(a1, v6, v7, v3, v4, v20, v21, v10, v11);
    v23 = *eax22;
    free(v10, v6, v7, v3, v4, v24, v23, v10, v11);
    eax26 = fun_80494cc(v10, v6, v7, v3, v4, v25, v23, v10, v11);
    *eax26 = v23;
    v19 = reinterpret_cast<void**>(0);
    goto addr_8051507_20;
    addr_80514b0_13:
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(v11)) = 0;
    v19 = v10;
    goto addr_8051507_20;
    addr_80514f5_16:
    eax29 = fun_80494cc(v10, v6, v7, v3, v4, v27, v28, v10, v11);
    *eax29 = reinterpret_cast<void**>(12);
    v19 = reinterpret_cast<void**>(0);
    goto addr_8051507_20;
}

int32_t strrchr = 0x80496b2;

void* fun_80496ac(void** a1, void** a2) {
    goto strrchr;
}

int32_t strncpy = 0x8049622;

void fun_804961c(void** a1, void** a2, void* a3) {
    goto strncpy;
}

void** last_component(void** a1) {
    void** v2;
    signed char v3;
    uint32_t eax4;
    void** v5;
    uint32_t eax6;
    uint32_t eax7;

    v2 = a1;
    v3 = 0;
    while (eax4 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v2)), *reinterpret_cast<signed char*>(&eax4) == 47) {
        ++v2;
    }
    v5 = v2;
    while (eax6 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v5)), !!*reinterpret_cast<signed char*>(&eax6)) {
        eax7 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v5));
        if (*reinterpret_cast<signed char*>(&eax7) != 47) {
            if (v3) {
                v2 = v5;
                v3 = 0;
            }
        } else {
            v3 = 1;
        }
        ++v5;
    }
    return v2;
}

uint32_t dot_or_dotdot(void** a1) {
    uint32_t eax2;
    unsigned char v3;
    uint32_t eax4;
    void* v5;
    uint32_t eax6;
    int32_t v7;
    uint32_t eax8;

    eax2 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1));
    if (*reinterpret_cast<signed char*>(&eax2) != 46) {
        v3 = 0;
    } else {
        eax4 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 1));
        if (*reinterpret_cast<signed char*>(&eax4) != 46) {
            v5 = reinterpret_cast<void*>(1);
        } else {
            v5 = reinterpret_cast<void*>(2);
        }
        eax6 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v5) + reinterpret_cast<unsigned char>(a1));
        if (!*reinterpret_cast<signed char*>(&eax6) || *reinterpret_cast<signed char*>(&eax6) == 47) {
            v7 = 1;
        } else {
            v7 = 0;
        }
        eax8 = *reinterpret_cast<unsigned char*>(&v7);
        v3 = *reinterpret_cast<unsigned char*>(&eax8);
    }
    return static_cast<uint32_t>(v3);
}

void** file_name_concat(void** a1, void** a2, void** a3) {
    void** eax4;
    void** v5;
    void** v6;

    eax4 = mfile_name_concat(a1, a2, a3);
    if (!eax4) {
        xalloc_die(a1, a2, a3, v5, v6);
    }
    return eax4;
}

int32_t strcoll = 0x8049542;

int32_t fun_804953c(void** a1, void** a2) {
    goto strcoll;
}

void** quotearg_n_style(void** a1, int32_t a2, void** a3) {
    void* ebp4;
    void** eax5;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    quoting_options_from_style(reinterpret_cast<int32_t>(ebp4) - 36, a2);
    eax5 = quotearg_n_options(a1, a3, 0xffffffff, reinterpret_cast<int32_t>(ebp4) + 0xffffffdc);
    return eax5;
}

struct s28 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s28* get_stat_ctime(struct s28* a1, void** a2, void** a3);

int32_t timespec_cmp(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

int32_t cmp_ctime(void** a1, void** a2, int32_t a3) {
    void* ebp4;
    void** v5;
    void** v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t eax11;
    int32_t v12;
    void** eax13;
    void** v14;
    int32_t eax15;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    get_stat_ctime(reinterpret_cast<int32_t>(ebp4) - 20, a1 + 8, v5);
    get_stat_ctime(reinterpret_cast<int32_t>(ebp4) - 12, a2 + 8, v6);
    eax11 = timespec_cmp(v7, v8, v9, v10);
    if (eax11) {
        v12 = eax11;
    } else {
        eax13 = *reinterpret_cast<void***>(a1);
        v14 = *reinterpret_cast<void***>(a2);
        eax15 = reinterpret_cast<int32_t>(a3(eax13, v14, v9, v10));
        v12 = eax15;
    }
    return v12;
}

struct s28* get_stat_ctime(struct s28* a1, void** a2, void** a3) {
    void** edx4;

    edx4 = *reinterpret_cast<void***>(a2 + 84);
    a1->f0 = *reinterpret_cast<void***>(a2 + 80);
    a1->f4 = edx4;
    return a1;
}

struct s28* get_stat_mtime(struct s28* a1, void** a2, void** a3) {
    void** edx4;

    edx4 = *reinterpret_cast<void***>(a2 + 76);
    a1->f0 = *reinterpret_cast<void***>(a2 + 72);
    a1->f4 = edx4;
    return a1;
}

int32_t cmp_mtime(void** a1, void** a2, int32_t a3) {
    void* ebp4;
    void** v5;
    void** v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t eax11;
    int32_t v12;
    void** eax13;
    void** v14;
    int32_t eax15;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    get_stat_mtime(reinterpret_cast<int32_t>(ebp4) - 20, a1 + 8, v5);
    get_stat_mtime(reinterpret_cast<int32_t>(ebp4) - 12, a2 + 8, v6);
    eax11 = timespec_cmp(v7, v8, v9, v10);
    if (eax11) {
        v12 = eax11;
    } else {
        eax13 = *reinterpret_cast<void***>(a1);
        v14 = *reinterpret_cast<void***>(a2);
        eax15 = reinterpret_cast<int32_t>(a3(eax13, v14, v9, v10));
        v12 = eax15;
    }
    return v12;
}

struct s28* get_stat_atime(struct s28* a1, void** a2, void** a3) {
    void** edx4;

    edx4 = *reinterpret_cast<void***>(a2 + 68);
    a1->f0 = *reinterpret_cast<void***>(a2 + 64);
    a1->f4 = edx4;
    return a1;
}

int32_t cmp_atime(void** a1, void** a2, int32_t a3) {
    void* ebp4;
    void** v5;
    void** v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t eax11;
    int32_t v12;
    void** eax13;
    void** v14;
    int32_t eax15;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    get_stat_atime(reinterpret_cast<int32_t>(ebp4) - 20, a1 + 8, v5);
    get_stat_atime(reinterpret_cast<int32_t>(ebp4) - 12, a2 + 8, v6);
    eax11 = timespec_cmp(v7, v8, v9, v10);
    if (eax11) {
        v12 = eax11;
    } else {
        eax13 = *reinterpret_cast<void***>(a1);
        v14 = *reinterpret_cast<void***>(a2);
        eax15 = reinterpret_cast<int32_t>(a3(eax13, v14, v9, v10));
        v12 = eax15;
    }
    return v12;
}

int32_t cmp_size(void** a1, void** a2, int32_t a3) {
    void** ecx4;
    void** v5;
    void** ecx6;
    void** v7;
    int32_t v8;
    void** ecx9;
    void** v10;
    void** ecx11;
    void** v12;
    int32_t v13;
    void** eax14;
    void** v15;
    int32_t eax16;

    ecx4 = *reinterpret_cast<void***>(a2 + 56);
    v5 = *reinterpret_cast<void***>(a2 + 52);
    ecx6 = *reinterpret_cast<void***>(a1 + 56);
    v7 = *reinterpret_cast<void***>(a1 + 52);
    if (reinterpret_cast<signed char>(ecx4) < reinterpret_cast<signed char>(ecx6) || reinterpret_cast<signed char>(ecx4) <= reinterpret_cast<signed char>(ecx6) && reinterpret_cast<unsigned char>(v5) < reinterpret_cast<unsigned char>(v7)) {
        v8 = -1;
    } else {
        ecx9 = *reinterpret_cast<void***>(a2 + 56);
        v10 = *reinterpret_cast<void***>(a2 + 52);
        ecx11 = *reinterpret_cast<void***>(a1 + 56);
        v12 = *reinterpret_cast<void***>(a1 + 52);
        v8 = 1;
        if (reinterpret_cast<signed char>(ecx9) <= reinterpret_cast<signed char>(ecx11) && (reinterpret_cast<signed char>(ecx9) < reinterpret_cast<signed char>(ecx11) || reinterpret_cast<unsigned char>(v10) <= reinterpret_cast<unsigned char>(v12))) {
            v8 = 0;
        }
    }
    if (v8) {
        v13 = v8;
    } else {
        eax14 = *reinterpret_cast<void***>(a1);
        v15 = *reinterpret_cast<void***>(a2);
        eax16 = reinterpret_cast<int32_t>(a3(eax14, v15));
        v13 = eax16;
    }
    return v13;
}

int32_t cmp_name(void** a1, void** a2, int32_t a3) {
    void** eax4;
    void** v5;
    int32_t eax6;

    eax4 = *reinterpret_cast<void***>(a1);
    v5 = *reinterpret_cast<void***>(a2);
    eax6 = reinterpret_cast<int32_t>(a3(eax4, v5));
    return eax6;
}

int32_t cmp_extension(void** a1, void** a2, int32_t a3) {
    void** eax4;
    void* eax5;
    void** eax6;
    void* eax7;
    void* v8;
    void* v9;
    int32_t eax10;
    int32_t v11;
    void** eax12;
    void** v13;
    int32_t eax14;

    eax4 = *reinterpret_cast<void***>(a1);
    eax5 = fun_80496ac(eax4, 46);
    eax6 = *reinterpret_cast<void***>(a2);
    eax7 = fun_80496ac(eax6, 46);
    if (!eax7) {
        v8 = reinterpret_cast<void*>(0x805ed70);
    } else {
        v8 = eax7;
    }
    if (!eax5) {
        v9 = reinterpret_cast<void*>(0x805ed70);
    } else {
        v9 = eax5;
    }
    eax10 = reinterpret_cast<int32_t>(a3(v9, v8));
    if (eax10) {
        v11 = eax10;
    } else {
        eax12 = *reinterpret_cast<void***>(a1);
        v13 = *reinterpret_cast<void***>(a2);
        eax14 = reinterpret_cast<int32_t>(a3(eax12, v13));
        v11 = eax14;
    }
    return v11;
}

int32_t fun_804976c(void** a1, void** a2);

int32_t cmp_version(void** a1, void** a2) {
    void** eax3;
    void** v4;
    int32_t eax5;

    eax3 = *reinterpret_cast<void***>(a1);
    v4 = *reinterpret_cast<void***>(a2);
    eax5 = fun_804976c(eax3, v4);
    return eax5;
}

void** mpsort_with_tmp(void** a1, void** a2, void** a3, void** a4);

void** mpsort(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;

    eax5 = mpsort_with_tmp(a1, a2, (reinterpret_cast<unsigned char>(a2) << 2) + reinterpret_cast<unsigned char>(a1), a3);
    return eax5;
}

int32_t clock_gettime = 0x8049902;

int32_t fun_80498fc(int32_t a1, void* a2) {
    goto clock_gettime;
}

int32_t gettimeofday = 0x8049702;

void fun_80496fc(void* a1, int32_t a2) {
    goto gettimeofday;
}

void** user_alist = reinterpret_cast<void**>(0);

void** getuser(void** a1) {
    void** v2;
    void** eax3;
    void** v4;
    void** eax5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** eax16;
    void* v17;
    void** edx18;
    uint32_t eax19;
    void** v20;

    v2 = reinterpret_cast<void**>(0);
    eax3 = user_alist;
    v4 = eax3;
    while (v4) {
        if (*reinterpret_cast<void***>(v4) == a1) 
            goto addr_805459d_4;
        v4 = *reinterpret_cast<void***>(v4 + 4);
    }
    addr_80545b4_6:
    if (!v2) {
        eax5 = fun_804986c(a1);
        if (!eax5) {
            v6 = reinterpret_cast<void**>(0x80619ac);
        } else {
            v6 = *reinterpret_cast<void***>(eax5);
        }
        eax11 = fun_804985c(v6, v7, v8, v9, v6, v10, v6, eax5);
        eax16 = xmalloc(eax11 + 9, v12, v13, v14, v6, v15, v6);
        v2 = eax16;
        *reinterpret_cast<void***>(v2) = a1;
        fun_804988c(v2 + 8, v6, v17);
        edx18 = user_alist;
        *reinterpret_cast<void***>(v2 + 4) = edx18;
        user_alist = v2;
    }
    eax19 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v2 + 8));
    if (!*reinterpret_cast<signed char*>(&eax19)) {
        v20 = reinterpret_cast<void**>(0);
    } else {
        v20 = v2 + 8;
    }
    return v20;
    addr_805459d_4:
    v2 = v4;
    goto addr_80545b4_6;
}

void** group_alist = reinterpret_cast<void**>(0);

void** getgroup(void** a1) {
    void** v2;
    void** eax3;
    void** v4;
    void** eax5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** eax16;
    void* v17;
    void** edx18;
    uint32_t eax19;
    void** v20;

    v2 = reinterpret_cast<void**>(0);
    eax3 = group_alist;
    v4 = eax3;
    while (v4) {
        if (*reinterpret_cast<void***>(v4) == a1) 
            goto addr_805479d_4;
        v4 = *reinterpret_cast<void***>(v4 + 4);
    }
    addr_80547b4_6:
    if (!v2) {
        eax5 = fun_804998c(a1);
        if (!eax5) {
            v6 = reinterpret_cast<void**>(0x80619ac);
        } else {
            v6 = *reinterpret_cast<void***>(eax5);
        }
        eax11 = fun_804985c(v6, v7, v8, v9, v6, v10, v6, eax5);
        eax16 = xmalloc(eax11 + 9, v12, v13, v14, v6, v15, v6);
        v2 = eax16;
        *reinterpret_cast<void***>(v2) = a1;
        fun_804988c(v2 + 8, v6, v17);
        edx18 = group_alist;
        *reinterpret_cast<void***>(v2 + 4) = edx18;
        group_alist = v2;
    }
    eax19 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v2 + 8));
    if (!*reinterpret_cast<signed char*>(&eax19)) {
        v20 = reinterpret_cast<void**>(0);
    } else {
        v20 = v2 + 8;
    }
    return v20;
    addr_805479d_4:
    v2 = v4;
    goto addr_80547b4_6;
}

void** format_user_or_group_width(void** a1, void** a2) {
    void* ebp3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** eax14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (!a1) {
        fun_80494fc(reinterpret_cast<int32_t>(ebp3) + 0xfffffff1, 0x805f9a0, a2, v4, v5, v6, v7, v8);
        eax14 = fun_804985c(reinterpret_cast<int32_t>(ebp3) + 0xfffffff1, 0x805f9a0, a2, v9, v10, v11, v12, v13);
        v15 = eax14;
    } else {
        eax22 = gnu_mbswidth(a1, 0, v16, v17, v18, v19, v20, v21);
        v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax22) & reinterpret_cast<uint32_t>(~(reinterpret_cast<signed char>(eax22) >> 31)));
    }
    return v15;
}

struct s29 {
    signed char f0;
    signed char f1;
};

void print_long_format(void** a1) {
    void* ebp2;
    uint32_t eax3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    uint32_t eax11;
    uint32_t eax12;
    uint32_t eax13;
    void** eax14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    uint32_t eax31;
    void** v32;
    void** edx33;
    void** ecx34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** eax40;
    void** eax41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** eax51;
    uint32_t eax52;
    uint32_t eax53;
    void** v54;
    void** ecx55;
    void** ebx56;
    void** eax57;
    void** esi58;
    void** edi59;
    void** v60;
    void** v61;
    void** v62;
    void** eax63;
    void** v64;
    void** ebx65;
    void** eax66;
    void* v67;
    uint32_t edx68;
    uint32_t eax69;
    uint32_t eax70;
    void** v71;
    void** edx72;
    void** eax73;
    void** eax74;
    void** v75;
    void** v76;
    void** v77;
    void** eax78;
    void** v79;
    uint32_t eax80;
    void** eax81;
    uint32_t eax82;
    uint32_t eax83;
    uint32_t eax84;
    uint32_t eax85;
    uint32_t eax86;
    void** eax87;
    uint32_t eax88;
    uint32_t eax89;
    uint32_t eax90;
    void** ecx91;
    void** eax92;
    uint32_t eax93;
    uint32_t eax94;
    void** ecx95;
    void** eax96;
    uint32_t eax97;
    uint32_t eax98;
    void** ecx99;
    void** eax100;
    uint32_t eax101;
    void** eax102;
    void** edx103;
    uint32_t eax104;
    uint32_t eax105;
    void** v106;
    void** ebx107;
    void** esi108;
    void** edi109;
    void** edx110;
    void** v111;
    void** eax112;
    void** eax113;
    void** v114;
    void** ebx115;
    void** v116;
    void** eax117;
    void* v118;
    uint32_t edx119;
    uint32_t eax120;
    void** edx121;
    void** eax122;
    void** eax123;
    void* v124;
    void** edx125;
    void** v126;
    void** eax127;
    void** v128;
    void** eax129;
    void** esi130;
    void** edx131;
    void** v132;
    void** eax133;
    void** eax134;
    void** eax135;
    void** eax136;
    void** v137;
    void** eax138;
    void** v139;
    uint32_t eax140;
    void** eax141;
    void** eax142;
    void** eax143;
    void** eax144;
    void** eax145;
    void** eax146;
    void** eax147;
    int32_t v148;
    uint32_t ecx149;
    void** v150;
    void** eax151;
    uint32_t eax152;
    struct s29* v153;
    signed char* v154;
    uint32_t eax155;
    void** v156;
    void** eax157;
    void** eax158;
    void** eax159;
    void** eax160;
    uint32_t eax161;
    void** v162;
    uint32_t eax163;
    uint32_t eax164;
    uint32_t eax165;
    uint32_t eax166;
    void** v167;
    void** eax168;
    uint32_t eax169;
    void** edx170;
    uint32_t eax171;
    void** v172;
    void** eax173;
    uint32_t eax174;
    void** ebx175;
    uint32_t eax176;
    uint32_t eax177;
    void** ecx178;
    void** eax179;
    uint32_t v180;
    uint32_t eax181;
    void** eax182;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
    if (!*reinterpret_cast<signed char*>(&eax3)) {
        v4 = reinterpret_cast<void**>(10);
        v5 = reinterpret_cast<void**>(63);
        v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) - 80 + 1);
        fun_804964c(v6, 63, 10, v7, v8, v9, v10);
    } else {
        v5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xffffffb0);
        v6 = a1 + 8;
        filemodestring(v6, v5);
    }
    eax11 = any_has_acl;
    eax12 = eax11 ^ 1;
    if (!*reinterpret_cast<signed char*>(&eax12)) {
        eax13 = *reinterpret_cast<unsigned char*>(a1 + 0x76);
        if (*reinterpret_cast<signed char*>(&eax13)) {
        }
    }
    eax14 = time_type;
    if (eax14 == 1) {
        get_stat_ctime(reinterpret_cast<int32_t>(ebp2) - 0x1198, a1 + 8, 10);
        v15 = v16;
        v17 = v18;
    } else {
        if (reinterpret_cast<unsigned char>(eax14) < reinterpret_cast<unsigned char>(1)) {
            get_stat_mtime(reinterpret_cast<int32_t>(ebp2) - 0x1198, a1 + 8, 10);
            v15 = v19;
            v17 = v20;
        } else {
            if (eax14 == 2) {
                get_stat_atime(reinterpret_cast<int32_t>(ebp2) - 0x1198, a1 + 8, 10);
                v15 = v21;
                v17 = v22;
            } else {
                fun_80494bc(v6, v5, 10, v23, v24, v25, v26, v27, eax14);
            }
        }
    }
    v28 = v15;
    v29 = v17;
    v30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xfffff175);
    eax31 = print_inode;
    if (*reinterpret_cast<signed char*>(&eax31)) {
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 96)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 100)))) {
            v32 = reinterpret_cast<void**>(0x805f99e);
        } else {
            edx33 = *reinterpret_cast<void***>(a1 + 96);
            ecx34 = *reinterpret_cast<void***>(a1 + 100);
            eax40 = umaxtostr(edx33, ecx34, reinterpret_cast<int32_t>(ebp2) + 0xfffff157, v35, v36, v37, v38, v39);
            v32 = eax40;
        }
        eax41 = inode_number_width;
        v42 = v32;
        v4 = eax41;
        fun_80494fc(v30, 0x805f9a4, v4, v42, v43, v44, v45, v46);
        eax51 = fun_804985c(v30, 0x805f9a4, v4, v42, v47, v48, v49, v50);
        v30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(eax51));
    }
    eax52 = print_block_size;
    if (*reinterpret_cast<signed char*>(&eax52)) {
        eax53 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
        if (!*reinterpret_cast<signed char*>(&eax53)) {
            v54 = reinterpret_cast<void**>(0x805f99e);
        } else {
            ecx55 = output_block_size;
            ebx56 = g80644ac;
            eax57 = human_output_opts;
            esi58 = *reinterpret_cast<void***>(a1 + 64);
            edi59 = *reinterpret_cast<void***>(a1 + 68);
            v60 = ecx55;
            v61 = ebx56;
            v62 = reinterpret_cast<void**>(0);
            v42 = eax57;
            v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xffffee77);
            eax63 = human_readable(esi58, edi59, v4, v42, 0x200, 0, v60, v61);
            v54 = eax63;
        }
        v64 = v54;
        ebx65 = block_size_width;
        eax66 = gnu_mbswidth(v64, 0, v4, v42, 0x200, 0, v60, v61);
        v67 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx65) - reinterpret_cast<unsigned char>(eax66));
        while (reinterpret_cast<int32_t>(v67) > reinterpret_cast<int32_t>(0)) {
            *reinterpret_cast<void***>(v30) = reinterpret_cast<void**>(32);
            ++v30;
            v67 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v67) - 1);
        }
        do {
            edx68 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v64));
            *reinterpret_cast<void***>(v30) = *reinterpret_cast<void***>(&edx68);
            eax69 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v30));
            ++v30;
            ++v64;
        } while (reinterpret_cast<uint1_t>(!!*reinterpret_cast<signed char*>(&eax69)));
        *reinterpret_cast<void***>(v30 - 1) = reinterpret_cast<void**>(32);
    }
    eax70 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
    if (!*reinterpret_cast<signed char*>(&eax70)) {
        v71 = reinterpret_cast<void**>(0x805f99e);
    } else {
        edx72 = *reinterpret_cast<void***>(a1 + 28);
        eax73 = umaxtostr(edx72, 0, reinterpret_cast<int32_t>(ebp2) + 0xfffff142, v42, 0x200, 0, v60, v61);
        v71 = eax73;
    }
    eax74 = nlink_width;
    v75 = v71;
    v76 = eax74;
    v77 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xffffffb0);
    fun_80494fc(v30, 0x805f9a9, v77, v76, v75, 0, v60, v61);
    eax78 = fun_804985c(v30, 0x805f9a9, v77, v76, v75, 0, v60, v61);
    v79 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(eax78));
    eax80 = dired;
    if (*reinterpret_cast<signed char*>(&eax80)) {
        eax81 = stdout;
        v76 = eax81;
        v77 = reinterpret_cast<void**>(2);
        fun_80498dc(0x805f873, 1, 2, v76, v75, 0, v60, v61);
        eax82 = dired_pos;
        dired_pos = eax82 + 2;
    }
    eax83 = print_owner;
    eax84 = print_group;
    eax85 = print_author;
    eax86 = print_scontext;
    if (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax86)) | (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax83)) | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax84)) | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax85)))) {
        eax87 = stdout;
        fun_804955c(reinterpret_cast<int32_t>(ebp2) + 0xfffff175, eax87, v77, v76, v75, 0, v60, v61);
        eax88 = dired_pos;
        dired_pos = reinterpret_cast<unsigned char>(v79) - (reinterpret_cast<int32_t>(ebp2) + 0xfffff175) + eax88;
        eax89 = print_owner;
        if (*reinterpret_cast<signed char*>(&eax89)) {
            eax90 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
            ecx91 = owner_width;
            eax92 = *reinterpret_cast<void***>(a1 + 32);
            v77 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax90)));
            format_user(eax92, ecx91, v77, v76, v75, 0, v60, v61);
        }
        eax93 = print_group;
        if (*reinterpret_cast<signed char*>(&eax93)) {
            eax94 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
            ecx95 = group_width;
            eax96 = *reinterpret_cast<void***>(a1 + 36);
            v77 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax94)));
            format_group(eax96, ecx95, v77, v76, v75, 0, v60, v61);
        }
        eax97 = print_author;
        if (*reinterpret_cast<signed char*>(&eax97)) {
            eax98 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
            ecx99 = author_width;
            eax100 = *reinterpret_cast<void***>(a1 + 32);
            v77 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax98)));
            format_user(eax100, ecx99, v77, v76, v75, 0, v60, v61);
        }
        eax101 = print_scontext;
        if (*reinterpret_cast<signed char*>(&eax101)) {
            eax102 = scontext_width;
            edx103 = *reinterpret_cast<void***>(a1 + 0x70);
            v77 = eax102;
            format_user_or_group(edx103, 0, v77, v76, v75, 0, v60, v61);
        }
        v79 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xfffff175);
    }
    eax104 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(a1 + 0x74)) ^ 1;
    if (*reinterpret_cast<signed char*>(&eax104) || (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 24)) & 0xf000) != 0x2000 && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 24)) & 0xf000) != 0x6000) {
        eax105 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
        if (!*reinterpret_cast<signed char*>(&eax105)) {
            v106 = reinterpret_cast<void**>(0x805f99e);
        } else {
            ebx107 = file_output_block_size;
            esi108 = g80641d4;
            edi109 = human_output_opts;
            edx110 = *reinterpret_cast<void***>(a1 + 56);
            v111 = *reinterpret_cast<void***>(a1 + 52);
            eax112 = unsigned_file_size(v111, edx110, v77, v76, v75, 0, v60, v61);
            v60 = ebx107;
            v61 = esi108;
            v75 = reinterpret_cast<void**>(1);
            v62 = reinterpret_cast<void**>(0);
            v76 = edi109;
            v77 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xffffee77);
            eax113 = human_readable(eax112, edx110, v77, v76, 1, 0, v60, v61);
            v106 = eax113;
        }
        v114 = v106;
        ebx115 = file_size_width;
        v116 = reinterpret_cast<void**>(0);
        eax117 = gnu_mbswidth(v114, 0, v77, v76, v75, 0, v60, v61);
        v118 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx115) - reinterpret_cast<unsigned char>(eax117));
        while (reinterpret_cast<int32_t>(v118) > reinterpret_cast<int32_t>(0)) {
            *reinterpret_cast<void***>(v79) = reinterpret_cast<void**>(32);
            ++v79;
            v118 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v118) - 1);
        }
        do {
            edx119 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v114));
            *reinterpret_cast<void***>(v79) = *reinterpret_cast<void***>(&edx119);
            eax120 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v79));
            ++v79;
            ++v114;
        } while (reinterpret_cast<uint1_t>(!!*reinterpret_cast<signed char*>(&eax120)));
        *reinterpret_cast<void***>(v79 - 1) = reinterpret_cast<void**>(32);
    } else {
        edx121 = major_device_number_width;
        eax122 = minor_device_number_width;
        eax123 = file_size_width;
        v124 = reinterpret_cast<void*>(-2 - reinterpret_cast<unsigned char>(edx121) - reinterpret_cast<unsigned char>(eax122) + reinterpret_cast<unsigned char>(eax123));
        edx125 = *reinterpret_cast<void***>(a1 + 44);
        v126 = *reinterpret_cast<void***>(a1 + 40);
        eax127 = fun_804962c(v126, edx125, v77, v76, v75, 0, v60, v61);
        v128 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xfffff118);
        eax129 = umaxtostr(eax127, 0, v128, v76, v75, 0, v60, v61);
        esi130 = minor_device_number_width;
        edx131 = *reinterpret_cast<void***>(a1 + 44);
        v132 = *reinterpret_cast<void***>(a1 + 40);
        eax133 = fun_80499fc(v132, edx131, v128, v76, v75, 0, v60, v61);
        eax134 = umaxtostr(eax133, 0, reinterpret_cast<int32_t>(ebp2) + 0xfffff12d, v76, v75, 0, v60, v61);
        eax135 = major_device_number_width;
        v62 = eax129;
        v75 = esi130;
        v76 = eax134;
        v77 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(~(reinterpret_cast<int32_t>(v124) >> 31)) & reinterpret_cast<uint32_t>(v124)) + reinterpret_cast<unsigned char>(eax135));
        v116 = reinterpret_cast<void**>(0x805f9b1);
        fun_80494fc(v79, 0x805f9b1, v77, v76, v75, v62, v60, v61);
        eax136 = file_size_width;
        v79 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v79) + reinterpret_cast<unsigned char>(eax136 + 1));
    }
    v137 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xfffff16c);
    eax138 = fun_80495cc(v137, v116, v77, v76, v75, v62, v60, v61);
    v139 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(v79) = reinterpret_cast<void**>(1);
    eax140 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
    if (*reinterpret_cast<signed char*>(&eax140) && eax138) {
        eax141 = current_time;
        if (reinterpret_cast<signed char>(eax141) < reinterpret_cast<signed char>(v28) || (eax142 = current_time, eax142 == v28) && (eax143 = current_time_ns, reinterpret_cast<signed char>(eax143) < reinterpret_cast<signed char>(v29))) {
            get_current_time(v137, v116, v77, v76, v75, v62, v60, v61);
        }
        eax144 = current_time;
        if (reinterpret_cast<signed char>(eax144 - 0xf0c2ac) > reinterpret_cast<signed char>(v28) || (eax145 = current_time, reinterpret_cast<signed char>(v28) >= reinterpret_cast<signed char>(eax145)) && ((eax146 = current_time, v28 != eax146) || (eax147 = current_time_ns, reinterpret_cast<signed char>(v29) > reinterpret_cast<signed char>(eax147)))) {
            v148 = 0;
        } else {
            v148 = 1;
        }
        ecx149 = *reinterpret_cast<unsigned char*>(&v148);
        v150 = *reinterpret_cast<void***>(*reinterpret_cast<unsigned char*>(&ecx149) * 4 + 0x8064280);
        v62 = v29;
        v75 = reinterpret_cast<void**>(0);
        v76 = eax138;
        v77 = v150;
        v116 = reinterpret_cast<void**>(0x3e9);
        v137 = v79;
        eax151 = nstrftime(v137, 0x3e9, v77, v76, 0, v62, v60, v61);
        v139 = eax151;
    }
    if (v139 || (eax152 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v79)), !*reinterpret_cast<signed char*>(&eax152))) {
        v153 = reinterpret_cast<struct s29*>(reinterpret_cast<unsigned char>(v79) + reinterpret_cast<unsigned char>(v139));
        v153->f0 = 32;
        v154 = &v153->f1;
        *v154 = 0;
    } else {
        eax155 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
        if (!*reinterpret_cast<signed char*>(&eax155)) {
            v156 = reinterpret_cast<void**>(0x805f99e);
        } else {
            v77 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xfffff103);
            v137 = v28;
            v116 = reinterpret_cast<void**>(reinterpret_cast<signed char>(v28) >> 31);
            eax157 = imaxtostr(v137, v116, v77, v76, v75, v62, v60, v61);
            v156 = eax157;
        }
        eax158 = long_time_expected_width(v137, v116, v77, v76, v75, v62, v60, v61);
        v76 = v156;
        v77 = eax158;
        fun_80494fc(v79, 0x805f9a4, v77, v76, v75, v62, v60, v61);
        eax159 = fun_804985c(v79, 0x805f9a4, v77, v76, v75, v62, v60, v61);
        v154 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v79) + reinterpret_cast<unsigned char>(eax159));
    }
    eax160 = stdout;
    fun_804955c(reinterpret_cast<int32_t>(ebp2) + 0xfffff175, eax160, v77, v76, v75, v62, v60, v61);
    eax161 = dired_pos;
    dired_pos = reinterpret_cast<uint32_t>(v154) - (reinterpret_cast<int32_t>(ebp2) + 0xfffff175) + eax161;
    v162 = *reinterpret_cast<void***>(a1 + 0x68);
    eax163 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
    eax164 = *reinterpret_cast<unsigned char*>(a1 + 0x75);
    eax165 = color_symlink_as_referent;
    eax166 = *reinterpret_cast<unsigned char*>(a1 + 0x75);
    if (!(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax166)) & static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax165)))) {
        v167 = *reinterpret_cast<void***>(a1 + 24);
    } else {
        v167 = *reinterpret_cast<void***>(a1 + 0x6c);
    }
    eax168 = *reinterpret_cast<void***>(a1);
    print_name_with_quoting(eax168, v167, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax164)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax163)), v162, 0x80645a0, v60, v61);
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a1 + 0x68) == 6)) {
        eax169 = indicator_style;
        if (eax169) {
            edx170 = *reinterpret_cast<void***>(a1 + 24);
            eax171 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
            v172 = *reinterpret_cast<void***>(a1 + 0x68);
            print_type_indicator(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax171)), edx170, v172, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax163)), v162, 0x80645a0, v60, v61);
        }
    } else {
        if (*reinterpret_cast<void***>(a1 + 4) && (eax173 = stdout, fun_80498dc(0x805f9bb, 1, 4, eax173, v162, 0x80645a0, v60, v61), eax174 = dired_pos, dired_pos = eax174 + 4, ebx175 = *reinterpret_cast<void***>(a1 + 0x68), eax176 = *reinterpret_cast<unsigned char*>(a1 + 0x74), eax177 = *reinterpret_cast<unsigned char*>(a1 + 0x75), ecx178 = *reinterpret_cast<void***>(a1 + 0x6c), eax179 = *reinterpret_cast<void***>(a1 + 4), v180 = *reinterpret_cast<unsigned char*>(&eax176), print_name_with_quoting(eax179, ecx178, *reinterpret_cast<unsigned char*>(&eax177) + 0xffffffff, v180, ebx175, 0, v60, v61), eax181 = indicator_style, !!eax181)) {
            eax182 = *reinterpret_cast<void***>(a1 + 0x6c);
            print_type_indicator(1, eax182, 0, v180, ebx175, 0, v60, v61);
        }
    }
    return;
}

uint32_t ftypelet(void** a1);

void strmode(void** a1, void** a2) {
    uint32_t eax3;
    uint32_t edx4;
    unsigned char v5;
    uint32_t eax6;
    unsigned char v7;
    uint32_t eax8;
    unsigned char v9;
    uint32_t edx10;
    unsigned char v11;
    unsigned char v12;
    uint32_t eax13;
    uint32_t eax14;
    unsigned char v15;
    uint32_t eax16;
    unsigned char v17;
    uint32_t eax18;
    unsigned char v19;
    uint32_t edx20;
    unsigned char v21;
    unsigned char v22;
    uint32_t eax23;
    uint32_t eax24;
    unsigned char v25;
    uint32_t eax26;
    unsigned char v27;
    uint32_t eax28;
    uint32_t eax29;
    unsigned char v30;
    uint32_t edx31;
    unsigned char v32;
    uint32_t eax33;
    unsigned char v34;
    uint32_t eax35;
    uint32_t eax36;

    eax3 = ftypelet(a1);
    edx4 = eax3;
    *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(&edx4);
    if (!(reinterpret_cast<unsigned char>(a1) & 0x100)) {
        v5 = 45;
    } else {
        v5 = 0x72;
    }
    eax6 = v5;
    *reinterpret_cast<void***>(a2 + 1) = *reinterpret_cast<void***>(&eax6);
    if (!(reinterpret_cast<unsigned char>(a1) & 0x80)) {
        v7 = 45;
    } else {
        v7 = 0x77;
    }
    eax8 = v7;
    *reinterpret_cast<void***>(a2 + 2) = *reinterpret_cast<void***>(&eax8);
    if (!(reinterpret_cast<unsigned char>(a1) & 0x800)) {
        if (!(reinterpret_cast<unsigned char>(a1) & 64)) {
            v9 = 45;
        } else {
            v9 = 0x78;
        }
        edx10 = v9;
        v11 = *reinterpret_cast<unsigned char*>(&edx10);
    } else {
        if (!(reinterpret_cast<unsigned char>(a1) & 64)) {
            v12 = 83;
        } else {
            v12 = 0x73;
        }
        eax13 = v12;
        v11 = *reinterpret_cast<unsigned char*>(&eax13);
    }
    eax14 = v11;
    *reinterpret_cast<signed char*>(a2 + 3) = *reinterpret_cast<signed char*>(&eax14);
    if (!(reinterpret_cast<unsigned char>(a1) & 32)) {
        v15 = 45;
    } else {
        v15 = 0x72;
    }
    eax16 = v15;
    *reinterpret_cast<void***>(a2 + 4) = *reinterpret_cast<void***>(&eax16);
    if (!(reinterpret_cast<unsigned char>(a1) & 16)) {
        v17 = 45;
    } else {
        v17 = 0x77;
    }
    eax18 = v17;
    *reinterpret_cast<signed char*>(a2 + 5) = *reinterpret_cast<signed char*>(&eax18);
    if (!(reinterpret_cast<unsigned char>(a1) & 0x400)) {
        if (!(reinterpret_cast<unsigned char>(a1) & 8)) {
            v19 = 45;
        } else {
            v19 = 0x78;
        }
        edx20 = v19;
        v21 = *reinterpret_cast<unsigned char*>(&edx20);
    } else {
        if (!(reinterpret_cast<unsigned char>(a1) & 8)) {
            v22 = 83;
        } else {
            v22 = 0x73;
        }
        eax23 = v22;
        v21 = *reinterpret_cast<unsigned char*>(&eax23);
    }
    eax24 = v21;
    *reinterpret_cast<signed char*>(a2 + 6) = *reinterpret_cast<signed char*>(&eax24);
    if (!(reinterpret_cast<unsigned char>(a1) & 4)) {
        v25 = 45;
    } else {
        v25 = 0x72;
    }
    eax26 = v25;
    *reinterpret_cast<signed char*>(a2 + 7) = *reinterpret_cast<signed char*>(&eax26);
    if (!(reinterpret_cast<unsigned char>(a1) & 2)) {
        v27 = 45;
    } else {
        v27 = 0x77;
    }
    eax28 = v27;
    *reinterpret_cast<void***>(a2 + 8) = *reinterpret_cast<void***>(&eax28);
    if (!(reinterpret_cast<unsigned char>(a1) & 0x200)) {
        eax29 = reinterpret_cast<unsigned char>(a1) & 1;
        if (!*reinterpret_cast<signed char*>(&eax29)) {
            v30 = 45;
        } else {
            v30 = 0x78;
        }
        edx31 = v30;
        v32 = *reinterpret_cast<unsigned char*>(&edx31);
    } else {
        eax33 = reinterpret_cast<unsigned char>(a1) & 1;
        if (!*reinterpret_cast<signed char*>(&eax33)) {
            v34 = 84;
        } else {
            v34 = 0x74;
        }
        eax35 = v34;
        v32 = *reinterpret_cast<unsigned char*>(&eax35);
    }
    eax36 = v32;
    *reinterpret_cast<signed char*>(a2 + 9) = *reinterpret_cast<signed char*>(&eax36);
    *reinterpret_cast<signed char*>(a2 + 10) = 32;
    *reinterpret_cast<signed char*>(a2 + 11) = 0;
    return;
}

void** quotearg_buffer_restyled(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** quotearg_buffer(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void*** eax16;
    void** v17;
    void** edx18;
    void** eax19;
    void** v20;
    void** v21;
    void** v22;
    void*** eax23;

    if (!a5) {
        v6 = reinterpret_cast<void**>(0x8064720);
    } else {
        v6 = a5;
    }
    eax16 = fun_80494cc(v7, v8, v9, v10, v11, v12, v13, v14, v15);
    v17 = *eax16;
    edx18 = *reinterpret_cast<void***>(v6);
    eax19 = quotearg_buffer_restyled(a1, a2, a3, a4, edx18, v6);
    eax23 = fun_80494cc(a1, a2, a3, a4, edx18, v6, v20, v21, v22);
    *eax23 = v17;
    return eax19;
}

int32_t mbsinit = 0x80497f2;

int32_t fun_80497ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto mbsinit;
}

void print_file_name_and_frills(void** a1, void** a2) {
    void* ebp3;
    uint32_t eax4;
    void** edx5;
    void** ecx6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    void** eax14;
    void** v15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    uint32_t eax23;
    void** ecx24;
    void** ebx25;
    void** edx26;
    void** v27;
    void** esi28;
    void** edi29;
    void** v30;
    void** v31;
    void** v32;
    void** eax33;
    void** eax34;
    void** v35;
    void** edx36;
    uint32_t eax37;
    void** v38;
    void** eax39;
    void** v40;
    void** eax41;
    void** v42;
    uint32_t eax43;
    uint32_t eax44;
    uint32_t eax45;
    uint32_t eax46;
    void** v47;
    void** eax48;
    uint32_t eax49;
    void** edx50;
    uint32_t eax51;
    void** v52;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax4 = print_inode;
    if (*reinterpret_cast<signed char*>(&eax4)) {
        edx5 = *reinterpret_cast<void***>(a1 + 96);
        ecx6 = *reinterpret_cast<void***>(a1 + 100);
        eax12 = umaxtostr(edx5, ecx6, reinterpret_cast<int32_t>(ebp3) + 0xfffffd68, v7, v8, v9, v10, v11);
        v13 = eax12;
        eax14 = format;
        if (eax14 == 4) {
            v15 = reinterpret_cast<void**>(0);
        } else {
            eax16 = inode_number_width;
            v15 = eax16;
        }
        fun_80498ac(0x805f9a4, v15, v13, v17, v18, v19, v20, v21, v13, v15, v22);
    }
    eax23 = print_block_size;
    if (*reinterpret_cast<signed char*>(&eax23)) {
        ecx24 = output_block_size;
        ebx25 = g80644ac;
        edx26 = human_output_opts;
        v27 = edx26;
        esi28 = *reinterpret_cast<void***>(a1 + 64);
        edi29 = *reinterpret_cast<void***>(a1 + 68);
        v30 = ecx24;
        v31 = ebx25;
        v32 = v27;
        eax33 = human_readable(esi28, edi29, reinterpret_cast<int32_t>(ebp3) + 0xfffffd68, v32, 0x200, 0, v30, v31);
        eax34 = format;
        if (eax34 == 4) {
            v35 = reinterpret_cast<void**>(0);
        } else {
            edx36 = block_size_width;
            v35 = edx36;
        }
        fun_80498ac(0x805f9a4, v35, eax33, v32, 0x200, 0, v30, v31, v13, v15, v27);
    }
    eax37 = print_scontext;
    if (*reinterpret_cast<signed char*>(&eax37)) {
        v38 = *reinterpret_cast<void***>(a1 + 0x70);
        eax39 = format;
        if (eax39 == 4) {
            v40 = reinterpret_cast<void**>(0);
        } else {
            eax41 = scontext_width;
            v40 = eax41;
        }
        fun_80498ac(0x805f9a4, v40, v38, v32, 0x200, 0, v30, v31, v13, v15, v27);
    }
    v42 = *reinterpret_cast<void***>(a1 + 0x68);
    eax43 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
    eax44 = *reinterpret_cast<unsigned char*>(a1 + 0x75);
    eax45 = color_symlink_as_referent;
    eax46 = *reinterpret_cast<unsigned char*>(a1 + 0x75);
    if (!(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax46)) & static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax45)))) {
        v47 = *reinterpret_cast<void***>(a1 + 24);
    } else {
        v47 = *reinterpret_cast<void***>(a1 + 0x6c);
    }
    eax48 = *reinterpret_cast<void***>(a1);
    print_name_with_quoting(eax48, v47, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax44)), static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax43)), v42, 0, v30, v31);
    eax49 = indicator_style;
    if (eax49) {
        edx50 = *reinterpret_cast<void***>(a1 + 24);
        eax51 = *reinterpret_cast<unsigned char*>(a1 + 0x74);
        v52 = *reinterpret_cast<void***>(a1 + 0x68);
        print_type_indicator(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax51)), edx50, v52, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax43)), v42, 0, v30, v31);
    }
    return;
}

void emit_bug_reporting_address(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** ebp10;
    void** eax11;

    eax11 = fun_80496ec(0x80614d9, v9, ebp10, __return_address(), a1, a2, a3, a4, a5);
    fun_80498ac(eax11, 0x80614f0, ebp10, __return_address(), a1, a2, a3, a4, a5, a6, a7);
    return;
}

int32_t readlink = 0x80499b2;

void** fun_80499ac(void** a1, void** a2, void** a3) {
    goto readlink;
}

void** vasnprintf(void** a1, void** a2, void** a3, void** a4);

uint32_t fun_804991c(void** a1, void** a2, void** a3, void** a4);

void** rpl_vfprintf(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    uint32_t eax7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    uint32_t eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void*** eax18;
    void** v19;
    void** v20;
    void** v21;
    void*** eax22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void*** eax30;
    void** eax31;
    uint32_t edx32;
    void** v33;
    void** v34;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g14;
    v8 = a3;
    v9 = a2;
    v10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff820);
    eax11 = vasnprintf(reinterpret_cast<int32_t>(ebp6) + 0xfffff82c, v10, v9, v8);
    if (eax11) {
        v8 = a1;
        v9 = reinterpret_cast<void**>(0x7d0);
        v10 = reinterpret_cast<void**>(1);
        v12 = eax11;
        eax13 = fun_804991c(v12, 1, 0x7d0, v8);
        if (eax13 >= 0x7d0) {
            if (1) {
                v14 = reinterpret_cast<void**>(0x7d0);
            } else {
                eax18 = fun_80494cc(v12, 1, 0x7d0, v8, v15, v16, v17, a3, a2);
                *eax18 = reinterpret_cast<void**>(75);
                v12 = a1;
                fseterr(v12, 1, 0x7d0, v8);
                v14 = reinterpret_cast<void**>(0xffffffff);
            }
        } else {
            if (eax11 != reinterpret_cast<int32_t>(ebp6) + 0xfffff82c) {
                eax22 = fun_80494cc(v12, 1, 0x7d0, v8, v19, v20, v21, a3, a2);
                v23 = *eax22;
                v12 = eax11;
                free(v12, 1, 0x7d0, v8, v24, v25, v26, a3, a2);
                eax30 = fun_80494cc(v12, 1, 0x7d0, v8, v27, v28, v29, a3, a2);
                *eax30 = v23;
            }
            v14 = reinterpret_cast<void**>(0xffffffff);
        }
    } else {
        v12 = a1;
        fseterr(v12, v10, v9, v8);
        v14 = reinterpret_cast<void**>(0xffffffff);
    }
    eax31 = v14;
    edx32 = eax7 ^ g14;
    if (edx32) {
        eax31 = fun_804995c(v12, v10, v9, v8, v33, v34, v14, a3, a2);
    }
    return eax31;
}

void argmatch_invalid(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** v26;
    void** v27;
    void** v28;

    if (!reinterpret_cast<int1_t>(a3 == 0xffffffff)) {
        eax13 = fun_80496ec(0x80617fe, v5, v6, v7, v8, v9, v10, v11, v12);
        v14 = eax13;
    } else {
        eax23 = fun_80496ec(0x80617e3, v15, v16, v17, v18, v19, v20, v21, v22);
        v14 = eax23;
    }
    eax24 = quote_n(1, a1);
    eax25 = quotearg_n_style(0, 5, a2);
    fun_804997c(0, 0, v14, eax25, eax24, v26, v27, v28);
    return;
}

void argmatch_valid(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** edx14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    uint32_t v21;
    void** v22;
    int32_t eax23;
    void** edx24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** edx31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** eax37;

    v5 = reinterpret_cast<void**>(0);
    eax13 = fun_80496ec(0x806181b, v6, v7, v8, v9, v10, v11, v12, 0);
    edx14 = stderr;
    fun_804992c(edx14, eax13, v15, v16, v17, v18, v19, v20);
    v21 = 0;
    while (*reinterpret_cast<void***>((v21 << 2) + reinterpret_cast<unsigned char>(a1))) {
        if (!v21 || (eax23 = fun_804954c(v5, reinterpret_cast<unsigned char>(a3) * v21 + reinterpret_cast<unsigned char>(a2), a3, v22), !!eax23)) {
            edx24 = stderr;
            v25 = *reinterpret_cast<void***>((v21 << 2) + reinterpret_cast<unsigned char>(a1));
            fun_804992c(edx24, 0x8061830, v25, v26, v27, v28, v29, v30);
            v5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) * v21 + reinterpret_cast<unsigned char>(a2));
        } else {
            edx31 = stderr;
            v25 = *reinterpret_cast<void***>((v21 << 2) + reinterpret_cast<unsigned char>(a1));
            fun_804992c(edx31, 0x806183a, v25, v32, v33, v34, v35, v36);
        }
        ++v21;
    }
    eax37 = stderr;
    fun_80494dc(10, eax37, v25);
    return;
}

int32_t strndup = 0x80499d2;

int32_t fun_80499cc(void** a1, void** a2) {
    goto strndup;
}

int32_t fun_804996c(void** a1);

int32_t fun_804968c(void** a1);

int32_t fun_80497dc(void** a1);

int32_t close_stream(void** a1, void** a2, void** a3, void** a4, void** a5) {
    int32_t eax6;
    void** v7;
    int32_t eax8;
    int32_t eax9;
    uint32_t eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** ebp15;
    void*** eax16;
    uint32_t eax17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void*** eax22;
    int32_t v23;

    eax6 = fun_804996c(a1);
    *reinterpret_cast<unsigned char*>(&v7 + 3) = reinterpret_cast<uint1_t>(!!eax6);
    eax8 = fun_804968c(a1);
    *reinterpret_cast<unsigned char*>(&v7 + 2) = reinterpret_cast<uint1_t>(!!eax8);
    eax9 = fun_80497dc(a1);
    *reinterpret_cast<unsigned char*>(&v7 + 1) = reinterpret_cast<uint1_t>(!!eax9);
    if (*reinterpret_cast<unsigned char*>(&v7 + 2) || (eax10 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v7 + 1)) ^ 1, !*reinterpret_cast<signed char*>(&eax10)) && (*reinterpret_cast<unsigned char*>(&v7 + 3) || (eax16 = fun_80494cc(a1, v11, v12, v13, v14, v7, ebp15, __return_address(), a1), *eax16 != 9))) {
        eax17 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v7 + 1)) ^ 1;
        if (*reinterpret_cast<signed char*>(&eax17)) {
            eax22 = fun_80494cc(a1, v18, v19, v20, v21, v7, ebp15, __return_address(), a1);
            *eax22 = reinterpret_cast<void**>(0);
        }
        v23 = -1;
    } else {
        v23 = 0;
    }
    return v23;
}

void** longest_relative_suffix(void** a1) {
    uint32_t eax2;

    while (eax2 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)), *reinterpret_cast<signed char*>(&eax2) == 47) {
        ++a1;
    }
    return a1;
}

uint32_t hash_rehash(void** a1, void** a2, void** a3, void** a4) {
    void** ebx5;
    void** edx6;
    void** eax7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** ebx17;
    void** edx18;
    uint32_t eax19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** eax26;
    unsigned char v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;

    ebx5 = *reinterpret_cast<void***>(a1 + 28);
    edx6 = *reinterpret_cast<void***>(a1 + 24);
    eax7 = *reinterpret_cast<void***>(a1 + 20);
    v8 = *reinterpret_cast<void***>(a1 + 32);
    v9 = ebx5;
    v10 = edx6;
    v11 = eax7;
    eax12 = hash_initialize(a2, v11, v10, v9, v8);
    v13 = eax12;
    if (v13) {
        *reinterpret_cast<void***>(v13 + 36) = *reinterpret_cast<void***>(a1 + 36);
        v14 = *reinterpret_cast<void***>(a1);
        while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) > reinterpret_cast<unsigned char>(v14)) {
            if (*reinterpret_cast<void***>(v14)) {
                v15 = v14;
                while (v15) {
                    v16 = *reinterpret_cast<void***>(v15);
                    ebx17 = *reinterpret_cast<void***>(v13);
                    edx18 = *reinterpret_cast<void***>(v13 + 24);
                    v11 = *reinterpret_cast<void***>(v13 + 8);
                    eax19 = reinterpret_cast<uint32_t>(edx18(v16, v11, v10, v9, v8));
                    v20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx17) + (eax19 << 3));
                    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v13 + 4)) <= reinterpret_cast<unsigned char>(v20)) {
                        fun_80494bc(v16, v11, v10, v9, v8, v21, v22, v23, v24);
                    }
                    v25 = *reinterpret_cast<void***>(v15 + 4);
                    if (!*reinterpret_cast<void***>(v20)) {
                        *reinterpret_cast<void***>(v20) = v16;
                        *reinterpret_cast<void***>(v13 + 12) = *reinterpret_cast<void***>(v13 + 12) + 1;
                        if (v15 != v14) {
                            v11 = v15;
                            free_entry(v13, v11, v10, v9, v8);
                        }
                    } else {
                        if (v15 != v14) {
                            *reinterpret_cast<void***>(v15 + 4) = *reinterpret_cast<void***>(v20 + 4);
                            *reinterpret_cast<void***>(v20 + 4) = v15;
                        } else {
                            eax26 = allocate_entry(v13, v11, v10, v9, v8);
                            if (!eax26) 
                                goto addr_8053016_15;
                            *reinterpret_cast<void***>(eax26) = v16;
                            *reinterpret_cast<void***>(eax26 + 4) = *reinterpret_cast<void***>(v20 + 4);
                            *reinterpret_cast<void***>(v20 + 4) = eax26;
                        }
                    }
                    v15 = v25;
                }
            }
            v14 = v14 + 8;
        }
    } else {
        v27 = 0;
        goto addr_80530ff_20;
    }
    v28 = *reinterpret_cast<void***>(a1);
    free(v28, v11, v10, v9, v8, v29, v30, v31, v32);
    *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(v13);
    *reinterpret_cast<void***>(a1 + 4) = *reinterpret_cast<void***>(v13 + 4);
    *reinterpret_cast<void***>(a1 + 8) = *reinterpret_cast<void***>(v13 + 8);
    *reinterpret_cast<void***>(a1 + 12) = *reinterpret_cast<void***>(v13 + 12);
    *reinterpret_cast<void***>(a1 + 36) = *reinterpret_cast<void***>(v13 + 36);
    free(v13, v11, v10, v9, v8, v33, v34, v35, v36);
    v27 = 1;
    addr_80530ff_20:
    return static_cast<uint32_t>(v27);
    addr_8053016_15:
    v27 = 0;
    goto addr_80530ff_20;
}

struct s30 {
    signed char[4] pad4;
    void** f4;
};

struct s31 {
    signed char[4] pad4;
    void** f4;
};

void** hash_insert(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    int32_t* v14;
    void*** v15;
    int16_t ax16;
    int16_t fpu_status_word17;
    int16_t ax18;
    int16_t fpu_status_word19;
    void** v20;
    void** v21;
    uint32_t eax22;
    int16_t ax23;
    int16_t fpu_status_word24;
    void** v25;
    void** eax26;
    struct s30* v27;
    struct s31* v28;
    void** v29;
    uint32_t eax30;
    uint32_t eax31;

    if (!a2) {
        fun_80494bc(v3, v4, v5, v6, v7, v8, v9, v10, v11);
    }
    v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff8);
    eax13 = hash_find_entry(a1, a2, v12, 0);
    if (!eax13) {
        if (!*v14) {
            *v15 = a2;
            *reinterpret_cast<void***>(a1 + 16) = *reinterpret_cast<void***>(a1 + 16) + 1;
            *reinterpret_cast<void***>(a1 + 12) = *reinterpret_cast<void***>(a1 + 12) + 1;
            __asm__("fild qword [esp]");
            __asm__("fld dword [eax+0x8]");
            __asm__("fild qword [esp]");
            __asm__("fmulp st1, st0");
            __asm__("fxch st0, st1");
            __asm__("fucompp ");
            ax16 = fpu_status_word17;
            if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax16) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax16) + 1) || (check_tuning(a1, a2, v12, 0), ax18 = fpu_status_word19, *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax18) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax18) + 1))) {
                addr_8053319_6:
                v20 = a2;
            } else {
                v21 = *reinterpret_cast<void***>(a1 + 20);
                eax22 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v21 + 16));
                if (!*reinterpret_cast<signed char*>(&eax22)) {
                    __asm__("fild qword [esp]");
                    __asm__("fld dword [eax+0xc]");
                    __asm__("fmulp st1, st0");
                    __asm__("fld dword [eax+0x8]");
                    __asm__("fmulp st1, st0");
                    __asm__("fstp dword [ebp-0x34]");
                } else {
                    __asm__("fild qword [esp]");
                    __asm__("fld dword [eax+0xc]");
                    __asm__("fmulp st1, st0");
                    __asm__("fstp dword [ebp-0x34]");
                }
                __asm__("fld dword [ebp-0x34]");
                __asm__("fstp dword [ebp-0x14]");
                __asm__("fld dword [ebp-0x14]");
                __asm__("fld dword [0x80618e8]");
                __asm__("fxch st0, st1");
                __asm__("fucompp ");
                ax23 = fpu_status_word24;
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax23) + 1)) 
                    goto addr_80532dd_11; else 
                    goto addr_80532d4_12;
            }
        } else {
            eax26 = allocate_entry(a1, a2, v12, 0, v25);
            if (eax26) {
                *reinterpret_cast<void***>(eax26) = a2;
                *reinterpret_cast<void***>(eax26 + 4) = v27->f4;
                v28->f4 = eax26;
                *reinterpret_cast<void***>(a1 + 16) = *reinterpret_cast<void***>(a1 + 16) + 1;
                v20 = a2;
            } else {
                v20 = reinterpret_cast<void**>(0);
            }
        }
    } else {
        v20 = eax13;
    }
    addr_805331f_17:
    return v20;
    addr_80532dd_11:
    __asm__("fld dword [ebp-0x14]");
    __asm__("fnstcw word [ebp-0x22]");
    __asm__("fldcw word [ebp-0x24]");
    __asm__("fistp qword [ebp-0x30]");
    __asm__("fldcw word [ebp-0x22]");
    eax30 = hash_rehash(a1, v29, v12, 0);
    eax31 = eax30 ^ 1;
    if (*reinterpret_cast<signed char*>(&eax31)) {
        a2 = reinterpret_cast<void**>(0);
        goto addr_8053319_6;
    }
    addr_80532d4_12:
    v20 = reinterpret_cast<void**>(0);
    goto addr_805331f_17;
}

int32_t localeconv = 0x8049512;

struct s8* fun_804950c() {
    goto localeconv;
}

void** humblock(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    uint32_t eax19;
    void** eax20;
    void** v21;
    void** v22;
    void** eax23;
    void** edx24;
    void** eax25;
    uint32_t eax26;
    uint32_t eax27;
    void** v28;
    void** v29;
    uint32_t eax30;
    void* v31;
    uint32_t eax32;
    void* v33;
    uint32_t eax34;
    void* v35;

    v4 = reinterpret_cast<void**>(0);
    if (a1 || ((eax11 = fun_80495fc(0x8061940, v5, v6, v7, v8, v9, v10), a1 = eax11, !!a1) || (eax18 = fun_80495fc(0x806194b, v12, v13, v14, v15, v16, v17), a1 = eax18, !!a1))) {
        eax19 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1));
        if (*reinterpret_cast<signed char*>(&eax19) == 39) {
            v4 = reinterpret_cast<void**>(4);
            ++a1;
        }
        eax20 = argmatch(a1, 0x806191c, 0x8061928, 4);
        if (reinterpret_cast<signed char>(eax20) >= reinterpret_cast<signed char>(0)) 
            goto addr_805445e_5;
    } else {
        eax23 = default_block_size(0x806194b, v21, v22);
        *reinterpret_cast<void***>(a2) = eax23;
        *reinterpret_cast<void***>(a2 + 4) = edx24;
        goto addr_805451e_7;
    }
    eax25 = xstrtoumax(a1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff4, 0, a2, 0x8061955);
    if (!eax25) {
        while ((eax26 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)), *reinterpret_cast<signed char*>(&eax26) <= 47) || (eax27 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)), *reinterpret_cast<signed char*>(&eax27) > 57)) {
            if (a1 == v28) 
                goto addr_80544cb_11;
            ++a1;
        }
    } else {
        *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(0);
        v29 = eax25;
        goto addr_805452d_14;
    }
    addr_805451e_7:
    *reinterpret_cast<void***>(a3) = v4;
    v29 = reinterpret_cast<void**>(0);
    addr_805452d_14:
    return v29;
    addr_80544cb_11:
    v4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v4) | 0x80);
    eax30 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v31) - 1);
    if (*reinterpret_cast<signed char*>(&eax30) == 66) {
        v4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v4) | 0x100);
    }
    eax32 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v33) - 1);
    if (*reinterpret_cast<signed char*>(&eax32) != 66 || (eax34 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v35) - 2), *reinterpret_cast<signed char*>(&eax34) == 0x69)) {
        v4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v4) | 32);
        goto addr_805451e_7;
    }
    addr_805445e_5:
    v4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v4) | *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(eax20) * 4 + 0x8061928));
    *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
    goto addr_805451e_7;
}

void** mpsort_into_tmp(void** a1, void** a2, void** a3, void** a4);

void** mpsort_with_tmp(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    int32_t v14;
    int32_t eax15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;

    if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(2)) {
        v5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) >> 1);
        v6 = reinterpret_cast<void**>(0);
        v7 = v5;
        v8 = v5;
        v9 = a2;
        v10 = a4;
        v11 = a3;
        mpsort_with_tmp((reinterpret_cast<unsigned char>(v5) << 2) + reinterpret_cast<unsigned char>(a1), reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(v5), v11, v10);
        if (reinterpret_cast<unsigned char>(v5) > reinterpret_cast<unsigned char>(1)) {
            v10 = a4;
            v11 = a3;
            mpsort_into_tmp(a1, v5, v11, v10);
        } else {
            *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(a1);
        }
        v12 = *reinterpret_cast<void***>(a3);
        v13 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v8) << 2) + reinterpret_cast<unsigned char>(a1));
        v14 = 0;
        while (1) {
            eax15 = reinterpret_cast<int32_t>(a4(v12, v13, v11, v10));
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax15 < 0) | reinterpret_cast<uint1_t>(eax15 == 0))) {
                *reinterpret_cast<void***>((v14 << 2) + reinterpret_cast<unsigned char>(a1)) = v13;
                ++v14;
                ++v8;
                if (v8 == v9) 
                    break;
                v13 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v8) << 2) + reinterpret_cast<unsigned char>(a1));
            } else {
                *reinterpret_cast<void***>((v14 << 2) + reinterpret_cast<unsigned char>(a1)) = v12;
                ++v14;
                ++v6;
                eax16 = v6;
                if (eax16 == v7) 
                    goto addr_8054d6d_10;
                v12 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v6) << 2) + reinterpret_cast<unsigned char>(a3));
            }
        }
    } else {
        if (reinterpret_cast<int1_t>(a2 == 2) && (v17 = *reinterpret_cast<void***>(a1), v18 = *reinterpret_cast<void***>(a1 + 4), eax16 = reinterpret_cast<void**>(a4(v17, v18)), !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax16) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax16 == 0)))) {
            *reinterpret_cast<void***>(a1) = v18;
            eax16 = v17;
            *reinterpret_cast<void***>(a1 + 4) = eax16;
            goto addr_8054d6d_10;
        }
    }
    eax16 = fun_804983c((v14 << 2) + reinterpret_cast<unsigned char>(a1), (reinterpret_cast<unsigned char>(v6) << 2) + reinterpret_cast<unsigned char>(a3), (reinterpret_cast<unsigned char>(v7) - reinterpret_cast<unsigned char>(v6)) * 4, v10, v19, v20, v21, v12, v13);
    addr_8054d6d_10:
    return eax16;
}

void** mpsort_into_tmp(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    int32_t eax14;
    void** v15;
    void** v16;
    void** eax17;

    v5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) >> 1);
    v6 = reinterpret_cast<void**>(0);
    v7 = v5;
    v8 = v5;
    v9 = a2;
    mpsort_with_tmp((reinterpret_cast<unsigned char>(v5) << 2) + reinterpret_cast<unsigned char>(a1), reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(v5), a3, a4);
    v10 = a4;
    v11 = a3;
    mpsort_with_tmp(a1, v5, v11, v10);
    v12 = *reinterpret_cast<void***>(a1);
    v13 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v8) << 2) + reinterpret_cast<unsigned char>(a1));
    while (1) {
        eax14 = reinterpret_cast<int32_t>(a4(v12, v13, v11, v10));
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax14 < 0) | reinterpret_cast<uint1_t>(eax14 == 0))) {
            *reinterpret_cast<void***>(a3) = v13;
            a3 = a3 + 4;
            ++v8;
            if (v8 == v9) 
                break;
            v13 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v8) << 2) + reinterpret_cast<unsigned char>(a1));
        } else {
            *reinterpret_cast<void***>(a3) = v12;
            a3 = a3 + 4;
            ++v6;
            if (v6 == v7) 
                goto addr_8054b48_6;
            v12 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v6) << 2) + reinterpret_cast<unsigned char>(a1));
        }
    }
    addr_8054b8e_8:
    eax17 = fun_804983c(a3, (reinterpret_cast<unsigned char>(v6) << 2) + reinterpret_cast<unsigned char>(a1), (reinterpret_cast<unsigned char>(v7) - reinterpret_cast<unsigned char>(v6)) * 4, v10, v15, v16, v13, v12, v9);
    return eax17;
    addr_8054b48_6:
    v6 = v8;
    v7 = v9;
    goto addr_8054b8e_8;
}

void** gettext_quote(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** ebp8;
    void** eax9;
    void** v10;

    eax9 = fun_80496ec(a1, v3, v4, v5, v6, v7, ebp8, __return_address(), a1);
    v10 = eax9;
    if (v10 == a1 && reinterpret_cast<int1_t>(a2 == 6)) {
        v10 = reinterpret_cast<void**>(0x8061a3c);
    }
    return v10;
}

void** quotearg_buffer_restyled(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** v8;
    void** v9;
    void** v10;
    unsigned char v11;
    uint32_t eax12;
    unsigned char v13;
    void** eax14;
    void** v15;
    void** eax16;
    void** v17;
    void** v18;
    uint32_t eax19;
    uint32_t eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** eax28;
    void** eax29;
    void** v30;
    void** v31;
    uint32_t eax32;
    uint32_t eax33;
    void* v34;
    void* v35;
    uint32_t eax36;
    void* v37;
    void** v38;
    void** v39;
    uint32_t eax40;
    unsigned char v41;
    void** v42;
    uint32_t eax43;
    unsigned char v44;
    uint32_t eax45;
    void** v46;
    uint32_t eax47;
    uint32_t eax48;
    uint32_t eax49;
    uint32_t eax50;
    uint32_t eax51;
    uint32_t eax52;
    unsigned char v53;
    uint32_t eax54;
    void** v55;
    void** v56;
    int32_t eax57;
    uint32_t eax58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** eax65;
    void* eax66;
    void** v67;
    int32_t eax68;
    void** v69;
    void** v70;
    void** v71;
    int32_t eax72;
    void*** eax73;
    void* eax74;
    uint32_t eax75;
    uint32_t eax76;
    uint32_t eax77;
    uint32_t eax78;
    void** v79;
    void** v80;
    unsigned char v81;
    void** v82;
    void** v83;
    uint32_t eax84;
    uint32_t eax85;
    uint32_t v86;
    uint32_t ecx87;
    uint32_t eax88;
    void** v89;
    void** v90;
    uint32_t eax91;
    unsigned char v92;
    uint32_t eax93;
    uint32_t eax94;
    uint32_t eax95;
    uint32_t ecx96;
    uint32_t eax97;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = reinterpret_cast<void**>(0);
    v9 = reinterpret_cast<void**>(0);
    v10 = reinterpret_cast<void**>(0);
    v11 = 0;
    eax12 = fun_804956c();
    v13 = reinterpret_cast<uint1_t>(eax12 == 1);
    switch (a5) {
    case 2:
        if (reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(a2)) {
            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(39);
        }
        v8 = reinterpret_cast<void**>(1);
        v9 = reinterpret_cast<void**>(0x8061a40);
        v10 = reinterpret_cast<void**>(1);
        break;
    case 3:
        if (reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(a2)) {
            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(34);
        }
        v8 = reinterpret_cast<void**>(1);
        v11 = 1;
        v9 = reinterpret_cast<void**>(0x8061a3c);
        v10 = reinterpret_cast<void**>(1);
        break;
    case 4:
        v11 = 1;
        break;
    case 5:
    case 6:
        eax14 = gettext_quote(0x8061a3e, a5);
        v15 = a5;
        eax16 = gettext_quote(0x8061a40, v15);
        v17 = eax16;
        v18 = eax14;
        while (eax19 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v18)), !!*reinterpret_cast<signed char*>(&eax19)) {
            if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                eax20 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v18));
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = *reinterpret_cast<signed char*>(&eax20);
            }
            ++v8;
            ++v18;
        }
        v11 = 1;
        v9 = v17;
        v21 = v9;
        eax28 = fun_804985c(v21, v15, v22, v23, v24, v25, v26, v27);
        v10 = eax28;
        break;
        addr_8055630_16:
        eax29 = quotearg_buffer_restyled(a1, a2, a3, a4, 2, a6);
        v30 = eax29;
        goto addr_8055662_17;
    case 0:
    case 1:
        goto 0x8055037;
    }
    v31 = reinterpret_cast<void**>(0);
    goto addr_80555a8_19;
    addr_8055662_17:
    return v30;
    addr_80555d5_20:
    if (v31) 
        goto addr_80555e1_21;
    if (a5 == 1) 
        goto addr_8055630_16;
    addr_80555e1_21:
    if (v9) {
        while (eax32 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), !!*reinterpret_cast<signed char*>(&eax32)) {
            if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                eax33 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = *reinterpret_cast<signed char*>(&eax33);
            }
            ++v8;
            ++v9;
        }
    }
    if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 0;
    }
    v30 = v8;
    goto addr_8055662_17;
    while (1) {
        addr_80553ea_31:
        v34 = reinterpret_cast<void*>(1);
        while (1) {
            if (reinterpret_cast<uint32_t>(v34) >= reinterpret_cast<uint32_t>(v35)) 
                goto addr_805542b_33;
            eax36 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v31) + reinterpret_cast<uint32_t>(v37) + reinterpret_cast<uint32_t>(v34) + reinterpret_cast<unsigned char>(a3));
            v38 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax36) - 91);
            switch (v38) {
            default:
                v34 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v34) + 1);
                continue;
            case 0:
            case 1:
            case 3:
            case 5:
            case 33:
                goto 0x8055630;
            }
            while (1) {
                addr_805547b_37:
                v39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) + reinterpret_cast<uint32_t>(v37));
                while (1) {
                    if (v11 && (eax40 = static_cast<uint32_t>(v41) ^ 1, !!*reinterpret_cast<signed char*>(&eax40))) {
                        if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 92;
                        }
                        v42 = v8 + 1;
                        if (reinterpret_cast<unsigned char>(v42) < reinterpret_cast<unsigned char>(a2)) {
                            eax43 = v44;
                            *reinterpret_cast<unsigned char*>(&eax43) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax43) >> 6);
                            eax45 = eax43 + 48;
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v42)) = *reinterpret_cast<signed char*>(&eax45);
                        }
                        v46 = v42 + 1;
                        if (reinterpret_cast<unsigned char>(v46) < reinterpret_cast<unsigned char>(a2)) {
                            eax47 = v44;
                            *reinterpret_cast<unsigned char*>(&eax47) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax47) >> 3);
                            eax48 = (eax47 & 7) + 48;
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v46)) = *reinterpret_cast<signed char*>(&eax48);
                        }
                        v8 = v46 + 1;
                        eax49 = (static_cast<uint32_t>(v44) & 7) + 48;
                        v44 = *reinterpret_cast<unsigned char*>(&eax49);
                    }
                    if (reinterpret_cast<unsigned char>(v31 + 1) >= reinterpret_cast<unsigned char>(v39)) 
                        break;
                    if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                        eax50 = v44;
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = *reinterpret_cast<signed char*>(&eax50);
                    }
                    ++v8;
                    ++v31;
                    eax51 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(v31));
                    v44 = *reinterpret_cast<unsigned char*>(&eax51);
                }
                while (1) {
                    if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                        eax52 = v44;
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = *reinterpret_cast<signed char*>(&eax52);
                    }
                    ++v8;
                    ++v31;
                    addr_80555a8_19:
                    if (!reinterpret_cast<int1_t>(a4 == 0xffffffff)) {
                        v53 = reinterpret_cast<uint1_t>(v31 != a4);
                    } else {
                        eax54 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(v31));
                        v53 = reinterpret_cast<uint1_t>(!!*reinterpret_cast<signed char*>(&eax54));
                    }
                    if (!v53) 
                        goto addr_80555d5_20;
                    if (v11 && (v10 && (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v31) + reinterpret_cast<unsigned char>(v10)) <= reinterpret_cast<unsigned char>(a4) && (v55 = v10, v15 = v9, v21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(v31)), eax57 = fun_804954c(v21, v15, v55, v56), !eax57)))) {
                        if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 92;
                        }
                        ++v8;
                    }
                    eax58 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(v31));
                    v44 = *reinterpret_cast<unsigned char*>(&eax58);
                    switch (v44) {
                    default:
                        if (!v13) {
                            fun_804964c(reinterpret_cast<int32_t>(ebp7) + 0xffffffc4, 0, 8, v56, v59, v60, v61);
                            v37 = reinterpret_cast<void*>(0);
                            v41 = 1;
                            if (reinterpret_cast<int1_t>(a4 == 0xffffffff)) {
                                eax65 = fun_804985c(a3, 0, 8, v56, v62, v63, v64, v38);
                                a4 = eax65;
                            }
                            do {
                                v56 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffc4);
                                v55 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) - (reinterpret_cast<unsigned char>(v31) + reinterpret_cast<uint32_t>(v37)));
                                v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v31) + reinterpret_cast<uint32_t>(v37) + reinterpret_cast<unsigned char>(a3));
                                v21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffd8);
                                eax66 = fun_80496dc(v21, v15, v55, v56);
                                v35 = eax66;
                                if (!v35) 
                                    break;
                                if (reinterpret_cast<int1_t>(v35 == 0xffffffff)) 
                                    goto addr_80553a5_67;
                                if (reinterpret_cast<int1_t>(v35 == 0xfffffffe)) 
                                    goto addr_80553b4_69;
                                if (reinterpret_cast<int1_t>(a5 == 1)) 
                                    goto addr_80553ea_31;
                                addr_805542b_33:
                                eax68 = fun_8049a6c(v67, v15, v55, v56);
                                if (!eax68) {
                                    v41 = 0;
                                }
                                v37 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v37) + reinterpret_cast<uint32_t>(v35));
                                v21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffc4);
                                eax72 = fun_80497ec(v21, v15, v55, v56, v69, v70, v71);
                            } while (!eax72);
                        } else {
                            v37 = reinterpret_cast<void*>(1);
                            eax73 = fun_80497ac(v21, v15, v55, v56);
                            eax74 = reinterpret_cast<void*>(static_cast<uint32_t>(v44));
                            eax75 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(*eax73) + (reinterpret_cast<uint32_t>(eax74) + reinterpret_cast<uint32_t>(eax74)));
                            v41 = reinterpret_cast<uint1_t>(!!(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax75)) & 0x4000));
                        }
                        addr_8055457_74:
                        if (reinterpret_cast<uint32_t>(v37) > 1) 
                            goto addr_805547b_37;
                        eax76 = static_cast<uint32_t>(v11) ^ 1;
                        if (*reinterpret_cast<signed char*>(&eax76)) 
                            goto addr_805553f_76;
                        eax77 = static_cast<uint32_t>(v41) ^ 1;
                        if (!*reinterpret_cast<signed char*>(&eax77)) 
                            goto addr_805553f_76; else 
                            goto addr_805547b_37;
                        addr_80553a5_67:
                        v41 = 0;
                        goto addr_8055457_74;
                        addr_80553b4_69:
                        v41 = 0;
                        while (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v31) + reinterpret_cast<uint32_t>(v37)) < reinterpret_cast<unsigned char>(a4)) {
                            eax78 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v31) + reinterpret_cast<uint32_t>(v37) + reinterpret_cast<unsigned char>(a3));
                            if (!*reinterpret_cast<signed char*>(&eax78)) 
                                goto addr_80553e2_80;
                            v37 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v37) + 1);
                        }
                        goto addr_8055457_74;
                        addr_80553e2_80:
                        goto addr_8055457_74;
                    case 0:
                        if (v11) {
                            if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 92;
                            }
                            v79 = v8 + 1;
                            if (reinterpret_cast<unsigned char>(v79) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v79)) = 48;
                            }
                            v80 = v79 + 1;
                            if (reinterpret_cast<unsigned char>(v80) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v80)) = 48;
                            }
                            v8 = v80 + 1;
                            v44 = 48;
                            goto addr_805553f_76;
                        }
                    case 7:
                        v81 = 97;
                        goto addr_805522d_91;
                    case 8:
                        v81 = 98;
                        goto addr_805522d_91;
                    case 9:
                        v81 = 0x74;
                        break;
                    case 10:
                        v81 = 0x6e;
                        break;
                    case 11:
                        v81 = 0x76;
                        goto addr_805522d_91;
                    case 12:
                        v81 = 0x66;
                        goto addr_805522d_91;
                    case 13:
                        v81 = 0x72;
                        break;
                        addr_8055276_98:
                    case 32:
                    case 33:
                    case 34:
                    case 36:
                    case 38:
                    case 40:
                    case 41:
                    case 42:
                    case 59:
                    case 60:
                    case 61:
                    case 62:
                    case 91:
                    case 94:
                    case 96:
                    case 0x7c:
                        if (a5 == 1) 
                            goto addr_8055630_16;
                        goto addr_805553f_76;
                        addr_805526c_100:
                    case 35:
                    case 0x7e:
                        if (v31) 
                            goto addr_805553f_76; else 
                            goto addr_8055276_98;
                    case 39:
                        if (a5 == 1) 
                            goto addr_8055630_16;
                        if (reinterpret_cast<int1_t>(a5 == 2)) {
                            if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 39;
                            }
                            v82 = v8 + 1;
                            if (reinterpret_cast<unsigned char>(v82) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v82)) = 92;
                            }
                            v83 = v82 + 1;
                            if (reinterpret_cast<unsigned char>(v83) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v83)) = 39;
                            }
                            v8 = v83 + 1;
                            goto addr_805553f_76;
                        }
                    case 63:
                        if (a5 == 1) 
                            goto addr_8055630_16;
                        if (reinterpret_cast<int1_t>(a5 == 3) && (reinterpret_cast<unsigned char>(v31 + 2) < reinterpret_cast<unsigned char>(a4) && ((eax84 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v31 + 1) + reinterpret_cast<unsigned char>(a3)), *reinterpret_cast<signed char*>(&eax84) == 63) && ((eax85 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v31 + 2) + reinterpret_cast<unsigned char>(a3)), v86 = *reinterpret_cast<signed char*>(&eax85) - 33, v86 <= 29) && (ecx87 = *reinterpret_cast<unsigned char*>(&v86), !!(1 << *reinterpret_cast<unsigned char*>(&ecx87) & 0x380051c1)))))) {
                            eax88 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v31 + 2) + reinterpret_cast<unsigned char>(a3));
                            v44 = *reinterpret_cast<unsigned char*>(&eax88);
                            v31 = v31 + 2;
                            if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 63;
                            }
                            v89 = v8 + 1;
                            if (reinterpret_cast<unsigned char>(v89) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v89)) = 92;
                            }
                            v90 = v89 + 1;
                            if (reinterpret_cast<unsigned char>(v90) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v90)) = 63;
                            }
                            v8 = v90 + 1;
                            goto addr_805553f_76;
                        }
                    case 92:
                        eax91 = v44;
                        v81 = *reinterpret_cast<unsigned char*>(&eax91);
                        break;
                    case 0x7b:
                    case 0x7d:
                        if (!reinterpret_cast<int1_t>(a4 == 0xffffffff)) {
                            v92 = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(a4 == 1));
                        } else {
                            eax93 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 1));
                            v92 = reinterpret_cast<uint1_t>(!!*reinterpret_cast<signed char*>(&eax93));
                        }
                        if (v92) 
                            goto addr_805553f_76; else 
                            goto addr_805526c_100;
                    case 37:
                    case 43:
                    case 44:
                    case 45:
                    case 46:
                    case 47:
                    case 48:
                    case 49:
                    case 50:
                    case 51:
                    case 52:
                    case 53:
                    case 54:
                    case 55:
                    case 56:
                    case 57:
                    case 58:
                    case 65:
                    case 66:
                    case 67:
                    case 68:
                    case 69:
                    case 70:
                    case 71:
                    case 72:
                    case 73:
                    case 74:
                    case 75:
                    case 76:
                    case 77:
                    case 78:
                    case 79:
                    case 80:
                    case 81:
                    case 82:
                    case 83:
                    case 84:
                    case 85:
                    case 86:
                    case 87:
                    case 88:
                    case 89:
                    case 90:
                    case 93:
                    case 95:
                    case 97:
                    case 98:
                    case 99:
                    case 100:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                    case 0x68:
                    case 0x69:
                    case 0x6a:
                    case 0x6b:
                    case 0x6c:
                    case 0x6d:
                    case 0x6e:
                    case 0x6f:
                    case 0x70:
                    case 0x71:
                    case 0x72:
                    case 0x73:
                    case 0x74:
                    case 0x75:
                    case 0x76:
                    case 0x77:
                    case 0x78:
                    case 0x79:
                    case 0x7a:
                        goto 0x805553f;
                    }
                    if (a5 == 1) 
                        goto addr_8055630_16;
                    addr_805522d_91:
                    if (!v11) {
                        addr_805553f_76:
                        eax94 = static_cast<uint32_t>(v11) ^ 1;
                        if (*reinterpret_cast<signed char*>(&eax94)) 
                            continue;
                        eax95 = v44;
                        ecx96 = static_cast<uint32_t>(v44) & 31;
                        if (!(1 << *reinterpret_cast<unsigned char*>(&ecx96) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(a6 + reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax95) >> 5) * 4) + 4))) 
                            continue;
                    } else {
                        eax97 = v81;
                        v44 = *reinterpret_cast<unsigned char*>(&eax97);
                    }
                    if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 92;
                    }
                    ++v8;
                }
            }
        }
    }
}

void** xcharalloc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** ebp7;
    void** eax8;

    eax8 = xmalloc(a1, v6, ebp7, __return_address(), a1, a2, a3);
    return eax8;
}

int32_t mktime = 0x8049822;

uint32_t fun_804981c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto mktime;
}

int32_t fwrite = 0x8049922;

uint32_t fun_804991c(void** a1, void** a2, void** a3, void** a4) {
    goto fwrite;
}

uint32_t bkm_scale_by_power(uint32_t* a1, int32_t a2, int32_t a3, void** a4) {
    uint32_t v5;
    unsigned char al6;
    void** v7;
    void** v8;
    uint32_t eax9;

    v5 = 0;
    while (al6 = reinterpret_cast<uint1_t>(!!a3), --a3, !!al6) {
        eax9 = bkm_scale(a1, a2, v7, v8);
        v5 = v5 | eax9;
    }
    return v5;
}

int32_t strtoul = 0x8049852;

void** fun_804984c(void** a1, void** a2, void** a3, void** a4) {
    goto strtoul;
}

uint32_t bkm_scale(uint32_t* a1, int32_t a2, void** a3, void** a4) {
    uint32_t v5;

    if (-1 / reinterpret_cast<uint32_t>(a2) >= *a1) {
        *a1 = *a1 * a2;
        v5 = 0;
    } else {
        *a1 = 0xffffffff;
        v5 = 1;
    }
    return v5;
}

uint32_t bkm_scale_by_power(void** a1, void** a2, int32_t a3, void** a4) {
    uint32_t v5;
    unsigned char al6;
    void** v7;
    void** v8;
    uint32_t eax9;

    v5 = 0;
    while (al6 = reinterpret_cast<uint1_t>(!!a3), --a3, !!al6) {
        eax9 = bkm_scale(a1, a2, v7, v8);
        v5 = v5 | eax9;
    }
    return v5;
}

int32_t strtoumax = 0x8049732;

void** fun_804972c(void** a1, void** a2, void** a3, void** a4) {
    goto strtoumax;
}

uint32_t bkm_scale(void** a1, void** a2, void** a3, void** a4) {
    void** edx5;
    void** eax6;
    void** ecx7;
    void** v8;
    void** edx9;
    uint32_t v10;

    edx5 = reinterpret_cast<void**>(reinterpret_cast<signed char>(a2) >> 31);
    eax6 = __udivdi3(0xffffffff, 0xffffffff, a2, edx5);
    ecx7 = *reinterpret_cast<void***>(a1 + 4);
    v8 = *reinterpret_cast<void***>(a1);
    if (reinterpret_cast<unsigned char>(edx5) > reinterpret_cast<unsigned char>(ecx7) || reinterpret_cast<unsigned char>(edx5) >= reinterpret_cast<unsigned char>(ecx7) && reinterpret_cast<unsigned char>(eax6) >= reinterpret_cast<unsigned char>(v8)) {
        edx9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) * reinterpret_cast<unsigned char>(a2) + (reinterpret_cast<signed char>(a2) >> 31) * reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) + reinterpret_cast<uint32_t>(__intrinsic()));
        *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)));
        *reinterpret_cast<void***>(a1 + 4) = edx9;
        v10 = 0;
    } else {
        *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0xffffffff);
        v10 = 1;
    }
    return v10;
}

struct s32 {
    uint32_t f0;
    void** f4;
    signed char[3] pad8;
    void* f8;
    void* f12;
};

int32_t printf_parse(void** a1, struct s32* a2, void** a3);

struct s33 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void* f12;
    void* f16;
    void* f20;
    void* f24;
    void* f28;
    void* f32;
};

int32_t printf_fetchargs(void** a1, void** a2, void** a3);

struct s34 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
    signed char[3] pad36;
    void** f36;
};

struct s35 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    uint32_t f8;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    int32_t f20;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    int32_t f32;
    unsigned char f36;
    signed char[3] pad40;
    int32_t f40;
};

struct s36 {
    signed char[4] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

struct s37 {
    signed char[4] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

struct s38 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

struct s39 {
    signed char[4] pad4;
    void* f4;
    void* f8;
};

struct s40 {
    signed char[4] pad4;
    void* f4;
    void* f8;
};

struct s41 {
    signed char[4] pad4;
    void* f4;
    void* f8;
    void* f12;
};

void** vasnprintf(void** a1, void** a2, void** a3, void** a4) {
    void* esp5;
    void* ebp6;
    void** v7;
    void** v8;
    uint32_t eax9;
    uint32_t v10;
    void** v11;
    int32_t eax12;
    struct s33* esp13;
    void** v14;
    int32_t eax15;
    void*** esp16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    struct s33* esp21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    void** v28;
    void** v29;
    struct s34* esp30;
    struct s33* esp31;
    int32_t v32;
    void** v33;
    struct s34* esp34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void*** esp44;
    int32_t v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void*** eax59;
    void** v60;
    struct s34* esp61;
    void*** eax62;
    void** eax63;
    uint32_t edx64;
    struct s34* esp65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    int32_t v70;
    struct s35* v71;
    struct s35* v72;
    struct s34* esp73;
    struct s33* esp74;
    void*** eax75;
    struct s34* esp76;
    struct s33* esp77;
    void*** eax78;
    uint32_t v79;
    uint32_t* v80;
    uint32_t v81;
    void** v82;
    uint32_t eax83;
    void** v84;
    void** edx85;
    struct s34* esp86;
    void** v87;
    void** edx88;
    struct s34* esp89;
    uint32_t ecx90;
    uint32_t v91;
    uint32_t edx92;
    uint32_t v93;
    int32_t* v94;
    struct s34* esp95;
    void* v96;
    void* v97;
    int32_t* v98;
    struct s34* esp99;
    void* v100;
    struct s34* esp101;
    void** eax102;
    void** v103;
    void** v104;
    struct s34* esp105;
    void** eax106;
    struct s34* esp107;
    void** eax108;
    struct s34* esp109;
    void** eax110;
    void** v111;
    struct s34* esp112;
    void** eax113;
    struct s34* esp114;
    void** v115;
    void** v116;
    void** v117;
    struct s34* esp118;
    uint32_t eax119;
    uint32_t eax120;
    struct s34* esp121;
    void** v122;
    struct s34* esp123;
    void** eax124;
    void** v125;
    void** v126;
    struct s34* esp127;
    void** eax128;
    void** v129;
    struct s34* esp130;
    void** eax131;
    struct s34* esp132;
    struct s34* esp133;
    int32_t v134;
    uint32_t eax135;
    struct s34* esp136;
    struct s34* esp137;
    void** eax138;
    void** v139;
    void** v140;
    struct s34* esp141;
    void** eax142;
    void** v143;
    struct s34* esp144;
    void** eax145;
    struct s34* esp146;
    struct s34* esp147;
    uint32_t eax148;
    uint32_t eax149;
    uint32_t eax150;
    uint32_t eax151;
    uint32_t eax152;
    uint32_t eax153;
    uint32_t eax154;
    uint32_t eax155;
    uint32_t eax156;
    int32_t* v157;
    struct s36* eax158;
    void* v159;
    void** ecx160;
    void** edx161;
    struct s34* esp162;
    int32_t eax163;
    uint32_t v164;
    int32_t v165;
    void** v166;
    void** v167;
    uint32_t eax168;
    void** v169;
    void*** edx170;
    struct s34* esp171;
    void** eax172;
    int32_t* v173;
    struct s34* esp174;
    void** v175;
    void* v176;
    int32_t v177;
    void** v178;
    void** v179;
    uint32_t eax180;
    void** v181;
    void*** edx182;
    struct s34* esp183;
    void** eax184;
    int32_t* v185;
    struct s34* esp186;
    void** v187;
    void* v188;
    void** v189;
    struct s34* esp190;
    void** eax191;
    struct s33* esp192;
    void** v193;
    struct s34* esp194;
    void** eax195;
    void** v196;
    struct s34* esp197;
    void** eax198;
    void** v199;
    void** v200;
    struct s37* eax201;
    void* v202;
    void** ecx203;
    void** edx204;
    void** v205;
    struct s34* esp206;
    uint32_t eax207;
    int32_t v208;
    uint32_t eax209;
    uint32_t eax210;
    void** edx211;
    struct s34* esp212;
    int32_t eax213;
    void** eax214;
    int16_t fpu_status_word215;
    uint32_t eax216;
    int16_t fpu_status_word217;
    int1_t pf218;
    uint32_t eax219;
    struct s34* esp220;
    uint32_t eax221;
    uint32_t eax222;
    void** v223;
    void** v224;
    void** v225;
    void** v226;
    uint32_t eax227;
    uint32_t eax228;
    uint32_t eax229;
    void** v230;
    void** v231;
    void** v232;
    void** v233;
    void* v234;
    void** v235;
    void** v236;
    uint32_t edx237;
    void** v238;
    uint32_t edx239;
    struct s34* esp240;
    struct s34* esp241;
    void** eax242;
    void** v243;
    void** v244;
    struct s34* esp245;
    void** eax246;
    void** v247;
    struct s34* esp248;
    void** eax249;
    struct s34* esp250;
    struct s34* esp251;
    struct s34* esp252;
    int32_t v253;
    int32_t* v254;
    struct s34* esp255;
    void** eax256;
    void* v257;
    void** eax258;
    void* v259;
    void* v260;
    void* v261;
    struct s38* ecx262;
    void* v263;
    uint32_t eax264;
    void* v265;
    void* v266;
    struct s34* esp267;
    void** eax268;
    struct s34* esp269;
    void** eax270;
    void* v271;
    struct s34* esp272;
    void** eax273;
    struct s34* esp274;
    uint32_t eax275;
    void* v276;
    void* v277;
    struct s34* esp278;
    void** eax279;
    struct s34* esp280;
    void** eax281;
    void* v282;
    struct s34* esp283;
    void** eax284;
    struct s34* esp285;
    uint32_t eax286;
    void* v287;
    void* v288;
    struct s34* esp289;
    void** eax290;
    struct s34* esp291;
    void** eax292;
    void* v293;
    struct s34* esp294;
    void** eax295;
    struct s34* esp296;
    uint32_t eax297;
    void* v298;
    void* v299;
    struct s34* esp300;
    void** eax301;
    struct s34* esp302;
    void** eax303;
    void* v304;
    struct s34* esp305;
    void** eax306;
    struct s34* esp307;
    void* v308;
    void* v309;
    struct s34* esp310;
    void** eax311;
    struct s34* esp312;
    void** eax313;
    void* v314;
    struct s34* esp315;
    void** eax316;
    struct s34* esp317;
    void* v318;
    void* v319;
    struct s34* esp320;
    void** eax321;
    struct s34* esp322;
    void** eax323;
    void* v324;
    struct s34* esp325;
    void** eax326;
    struct s34* esp327;
    void* v328;
    void* v329;
    struct s34* esp330;
    void** eax331;
    struct s34* esp332;
    void** eax333;
    void* v334;
    struct s34* esp335;
    void** eax336;
    struct s34* esp337;
    void* v338;
    void* v339;
    struct s34* esp340;
    void** eax341;
    struct s34* esp342;
    void** eax343;
    void* v344;
    struct s34* esp345;
    void** eax346;
    struct s34* esp347;
    struct s39* eax348;
    void* v349;
    void* edx350;
    void* v351;
    struct s34* esp352;
    void** eax353;
    struct s34* esp354;
    void** eax355;
    void* v356;
    struct s34* esp357;
    void** eax358;
    struct s34* esp359;
    struct s40* eax360;
    void* v361;
    void* edx362;
    void* v363;
    struct s34* esp364;
    void** eax365;
    struct s34* esp366;
    void** eax367;
    void* v368;
    struct s34* esp369;
    void** eax370;
    struct s34* esp371;
    struct s34* esp372;
    void** eax373;
    struct s34* esp374;
    void** eax375;
    void* v376;
    struct s34* esp377;
    void** eax378;
    struct s34* esp379;
    struct s41* eax380;
    void* v381;
    void* ecx382;
    void* edx383;
    void* v384;
    struct s34* esp385;
    void** eax386;
    struct s34* esp387;
    void** eax388;
    void* v389;
    struct s34* esp390;
    void** eax391;
    struct s34* esp392;
    void* v393;
    void* v394;
    struct s34* esp395;
    void** eax396;
    struct s34* esp397;
    void** eax398;
    void* v399;
    struct s34* esp400;
    void** eax401;
    struct s34* esp402;
    void* v403;
    void* v404;
    struct s34* esp405;
    void** eax406;
    struct s34* esp407;
    void** eax408;
    void* v409;
    struct s34* esp410;
    void** eax411;
    struct s34* esp412;
    void* v413;
    void* v414;
    struct s34* esp415;
    void** eax416;
    struct s34* esp417;
    void** eax418;
    void* v419;
    struct s34* esp420;
    void** eax421;
    struct s34* esp422;
    void* v423;
    void* v424;
    struct s34* esp425;
    void** eax426;
    struct s34* esp427;
    void** eax428;
    void* v429;
    struct s34* esp430;
    void** eax431;
    struct s34* esp432;
    void* v433;
    void* v434;
    struct s34* esp435;
    void** eax436;
    struct s34* esp437;
    void** eax438;
    void* v439;
    struct s34* esp440;
    void** eax441;
    struct s34* esp442;
    void** v443;
    struct s34* esp444;
    void** eax445;
    void** v446;
    void** v447;
    struct s34* esp448;
    void** eax449;
    void** v450;
    struct s34* esp451;
    void** eax452;
    struct s34* esp453;
    void** v454;
    struct s34* esp455;
    void** eax456;
    struct s33* esp457;
    struct s34* esp458;
    void** eax459;
    void** v460;
    void** v461;
    struct s34* esp462;
    void** eax463;
    void** v464;
    struct s34* esp465;
    void** eax466;
    struct s34* esp467;
    struct s34* esp468;
    struct s34* esp469;
    void** v470;
    struct s34* esp471;
    int32_t v472;
    void** v473;
    struct s34* esp474;
    struct s34* esp475;
    void** eax476;
    struct s34* esp477;
    void** eax478;
    void** v479;
    void** v480;
    struct s34* esp481;
    void** eax482;
    struct s34* esp483;
    void** eax484;
    struct s34* esp485;
    void** v486;
    struct s34* esp487;
    int32_t v488;
    void** v489;
    struct s34* esp490;
    struct s34* esp491;
    struct s34* esp492;
    struct s34* esp493;
    void** eax494;
    void** v495;
    struct s34* esp496;
    void** eax497;
    struct s34* esp498;
    struct s34* esp499;
    struct s34* esp500;
    void** v501;
    struct s34* esp502;
    int32_t v503;
    void** v504;
    struct s34* esp505;

    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp6 = esp5;
    v7 = a1;
    v8 = a2;
    eax9 = g14;
    v10 = eax9;
    v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffbf0);
    eax12 = printf_parse(a3, reinterpret_cast<int32_t>(ebp6) - 0x468, v11);
    esp13 = reinterpret_cast<struct s33*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 0x54c - 4 + 4);
    if (eax12 >= 0) {
        v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffbf0);
        eax15 = printf_fetchargs(a4, v14, v11);
        esp16 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp13) - 4 + 4);
        if (eax15 >= 0) {
            eax20 = xsum4(7, v17, v18, 6, v19);
            esp21 = reinterpret_cast<struct s33*>(esp16 - 4 + 4);
            if (reinterpret_cast<unsigned char>(eax20) > reinterpret_cast<unsigned char>(0xf9f)) {
                if (eax20 == 0xffffffff || (eax27 = malloc(eax20, v17, v18, 6, v22, v23, v24, v25, v26), esp21 = reinterpret_cast<struct s33*>(reinterpret_cast<uint32_t>(esp21) - 4 + 4), v28 = eax27, v28 == 0)) {
                    addr_805ca7b_5:
                    esp21->f0 = v29;
                    esp30 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                    esp30->f0 = 0x805ca89;
                    free(esp30->f4, esp30->f8, esp30->f12, 6, esp30->f20, esp30->f24, esp30->f28, esp30->f32, esp30->f36);
                    esp31 = reinterpret_cast<struct s33*>(&esp30->f4);
                    if (v32) {
                        esp31->f0 = v33;
                        esp34 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp31) - 4);
                        esp34->f0 = 0x805caa1;
                        free(esp34->f4, esp34->f8, esp34->f12, 6, esp34->f20, esp34->f24, esp34->f28, esp34->f32, esp34->f36);
                        esp31 = reinterpret_cast<struct s33*>(&esp34->f4);
                    }
                } else {
                    v35 = v28;
                    goto addr_8059831_8;
                }
            } else {
                esp21 = reinterpret_cast<struct s33*>(reinterpret_cast<uint32_t>(esp21) - (reinterpret_cast<uint32_t>(eax20 + 15) + 15 >> 4 << 4));
                v28 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp21 + 1) + 15 >> 4 << 4);
                v35 = reinterpret_cast<void**>(0);
                goto addr_8059831_8;
            }
        } else {
            v36 = v37;
            free(v36, v14, v11, v38, v39, v40, v41, v42, v43);
            esp44 = esp16 - 4 + 4;
            if (v45) {
                v36 = v46;
                free(v36, v14, v11, v47, v48, v49, v50, v51, v52);
                esp44 = esp44 - 4 + 4;
            }
            eax59 = fun_80494cc(v36, v14, v11, v53, v54, v55, v56, v57, v58);
            esp13 = reinterpret_cast<struct s33*>(esp44 - 4 + 4);
            *eax59 = reinterpret_cast<void**>(22);
            v60 = reinterpret_cast<void**>(0);
            goto addr_805cab6_13;
        }
    } else {
        v60 = reinterpret_cast<void**>(0);
        goto addr_805cab6_13;
    }
    esp61 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp31) - 4);
    esp61->f0 = 0x805caa6;
    eax62 = fun_80494cc(esp61->f4, esp61->f8, esp61->f12, 6, esp61->f20, esp61->f24, esp61->f28, esp61->f32, esp61->f36);
    esp13 = reinterpret_cast<struct s33*>(&esp61->f4);
    *eax62 = reinterpret_cast<void**>(12);
    v60 = reinterpret_cast<void**>(0);
    addr_805cab6_13:
    eax63 = v60;
    edx64 = v10 ^ g14;
    if (edx64) {
        esp65 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp13) - 4);
        esp65->f0 = 0x805cacd;
        eax63 = fun_804995c(esp65->f4, esp65->f8, esp65->f12, 6, esp65->f20, esp65->f24, esp65->f28, esp65->f32, esp65->f36);
    }
    return eax63;
    addr_8059831_8:
    if (!v7) {
        v66 = reinterpret_cast<void**>(0);
        v67 = reinterpret_cast<void**>(0);
    } else {
        v66 = v7;
        v67 = *reinterpret_cast<void***>(v8);
    }
    v68 = reinterpret_cast<void**>(0);
    v69 = a3;
    v70 = 0;
    v71 = v72;
    goto addr_8059896_21;
    addr_805c9a7_22:
    *reinterpret_cast<void***>(v8) = v68;
    v60 = v66;
    goto addr_805cab6_13;
    addr_805ca28_23:
    esp73 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp74) - 4);
    esp73->f0 = 0x805ca2d;
    eax75 = fun_80494cc(esp73->f4, 2, esp73->f12, 6, esp73->f20, esp73->f24, esp73->f28, esp73->f32, esp73->f36);
    esp13 = reinterpret_cast<struct s33*>(&esp73->f4);
    *eax75 = reinterpret_cast<void**>(75);
    v60 = reinterpret_cast<void**>(0);
    goto addr_805cab6_13;
    addr_805c5a5_24:
    esp76 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp77) - 4);
    esp76->f0 = 0x805c5aa;
    eax78 = fun_80494cc(esp76->f4, 2, esp76->f12, 6, esp76->f20, esp76->f24, esp76->f28, esp76->f32, esp76->f36);
    esp13 = reinterpret_cast<struct s33*>(&esp76->f4);
    *eax78 = reinterpret_cast<void**>(22);
    v60 = reinterpret_cast<void**>(0);
    goto addr_805cab6_13;
    while (1) {
        addr_805a758_25:
        v79 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(v80) + (v71->f40 << 4));
        v81 = v71->f8;
        *reinterpret_cast<void***>(v28) = reinterpret_cast<void**>(37);
        v82 = v28 + 1;
        eax83 = v81 & 1;
        if (*reinterpret_cast<signed char*>(&eax83)) {
            *reinterpret_cast<void***>(v82) = reinterpret_cast<void**>(39);
            ++v82;
        }
        if (v81 & 2) {
            *reinterpret_cast<void***>(v82) = reinterpret_cast<void**>(45);
            ++v82;
        }
        if (v81 & 4) {
            *reinterpret_cast<void***>(v82) = reinterpret_cast<void**>(43);
            ++v82;
        }
        if (v81 & 8) {
            *reinterpret_cast<void***>(v82) = reinterpret_cast<void**>(32);
            ++v82;
        }
        if (v81 & 16) {
            *reinterpret_cast<void***>(v82) = reinterpret_cast<void**>(35);
            ++v82;
        }
        if (v81 & 32) {
            *reinterpret_cast<void***>(v82) = reinterpret_cast<void**>(48);
            ++v82;
        }
        if (v71->f12 != v71->f16) {
            v84 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v71->f16) - reinterpret_cast<unsigned char>(v71->f12));
            edx85 = v71->f12;
            esp21->f8 = v84;
            esp21->f4 = edx85;
            esp21->f0 = v82;
            esp86 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
            esp86->f0 = 0x805a8a9;
            fun_804983c(esp86->f4, esp86->f8, esp86->f12, 6, esp86->f20, esp86->f24, esp86->f28, esp86->f32, esp86->f36);
            esp21 = reinterpret_cast<struct s33*>(&esp86->f4);
            v82 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v84));
        }
        if (v71->f24 != v71->f28) {
            v87 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v71->f28) - reinterpret_cast<unsigned char>(v71->f24));
            edx88 = v71->f24;
            esp21->f8 = v87;
            esp21->f4 = edx88;
            esp21->f0 = v82;
            esp89 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
            esp89->f0 = 0x805a910;
            fun_804983c(esp89->f4, esp89->f8, esp89->f12, 6, esp89->f20, esp89->f24, esp89->f28, esp89->f32, esp89->f36);
            esp21 = reinterpret_cast<struct s33*>(&esp89->f4);
            v82 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v82) + reinterpret_cast<unsigned char>(v87));
        }
        if (v79 > 16) 
            goto addr_805a999_42;
        ecx90 = v79;
        v91 = 1 << *reinterpret_cast<unsigned char*>(&ecx90);
        if (v91 & 0x14180) {
            addr_805a977_44:
            *reinterpret_cast<void***>(v82) = reinterpret_cast<void**>(0x6c);
            ++v82;
            goto addr_805a999_42;
        } else {
            if (v91 & 0x1000) {
                *reinterpret_cast<void***>(v82) = reinterpret_cast<void**>(76);
                ++v82;
                goto addr_805a999_42;
            }
            if (!(v91 & 0x600)) {
                addr_805a999_42:
                edx92 = v71->f36;
                *reinterpret_cast<void***>(v82) = *reinterpret_cast<void***>(&edx92);
                *reinterpret_cast<void***>(v82 + 1) = reinterpret_cast<void**>(0);
                v93 = 0;
                if (v71->f20 != -1) {
                    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v94) + (v71->f20 << 4)) != 5) {
                        esp95 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp95->f0 = 0x805a9f0;
                        fun_80494bc(esp95->f4, esp95->f8, esp95->f12, 6, esp95->f20, esp95->f24, esp95->f28, esp95->f32, esp95->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp95->f4);
                    }
                    v96 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v97) + (v71->f20 << 4) + 4);
                    v93 = 1;
                }
            } else {
                *reinterpret_cast<void***>(v82) = reinterpret_cast<void**>(0x6c);
                ++v82;
                goto addr_805a977_44;
            }
        }
        if (v71->f32 != -1) {
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v98) + (v71->f32 << 4)) != 5) {
                esp99 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                esp99->f0 = 0x805aa4b;
                fun_80494bc(esp99->f4, esp99->f8, esp99->f12, 6, esp99->f20, esp99->f24, esp99->f28, esp99->f32, esp99->f36);
                esp21 = reinterpret_cast<struct s33*>(&esp99->f4);
            }
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp6) + v93 * 4 - 0x418) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v100) + (v71->f32 << 4) + 4);
            ++v93;
        }
        esp21->f4 = reinterpret_cast<void**>(2);
        esp21->f0 = v68;
        esp101 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
        esp101->f0 = 0x805aa8d;
        eax102 = xsum(0, 2, esp101->f12, 6, esp101->f20, esp101->f24, esp101->f28, esp101->f32, esp101->f36);
        esp21 = reinterpret_cast<struct s33*>(&esp101->f4);
        if (reinterpret_cast<unsigned char>(eax102) > reinterpret_cast<unsigned char>(v67)) {
            if (!v67) {
                v103 = reinterpret_cast<void**>(12);
            } else {
                if (reinterpret_cast<signed char>(v67) < reinterpret_cast<signed char>(0)) {
                    v104 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v104 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v67) + reinterpret_cast<unsigned char>(v67));
                }
                v103 = v104;
            }
            v67 = v103;
            esp21->f4 = reinterpret_cast<void**>(2);
            esp21->f0 = v68;
            esp105 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
            esp105->f0 = 0x805ab00;
            eax106 = xsum(0, 2, esp105->f12, 6, esp105->f20, esp105->f24, esp105->f28, esp105->f32, esp105->f36);
            esp21 = reinterpret_cast<struct s33*>(&esp105->f4);
            if (reinterpret_cast<unsigned char>(eax106) > reinterpret_cast<unsigned char>(v67)) {
                esp21->f4 = reinterpret_cast<void**>(2);
                esp21->f0 = v68;
                esp107 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                esp107->f0 = 0x805ab1e;
                eax108 = xsum(0, 2, esp107->f12, 6, esp107->f20, esp107->f24, esp107->f28, esp107->f32, esp107->f36);
                esp21 = reinterpret_cast<struct s33*>(&esp107->f4);
                v67 = eax108;
            }
            if (v67 == 0xffffffff) 
                goto addr_805ca3f_66;
            if (v66 == v7 || !v66) {
                esp21->f0 = v67;
                esp109 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                esp109->f0 = 0x805ab62;
                eax110 = malloc(12, 2, esp109->f12, 6, esp109->f20, esp109->f24, esp109->f28, esp109->f32, esp109->f36);
                esp21 = reinterpret_cast<struct s33*>(&esp109->f4);
                v111 = eax110;
            } else {
                esp21->f4 = v67;
                esp21->f0 = v66;
                esp112 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                esp112->f0 = 0x805ab82;
                eax113 = fun_80495ac(0, 12, esp112->f12, 6, esp112->f20, esp112->f24, esp112->f28, esp112->f32, esp112->f36);
                esp21 = reinterpret_cast<struct s33*>(&esp112->f4);
                v111 = eax113;
            }
            if (!v111) 
                goto addr_805ca3f_66;
            if (v66 == v7 && v68) {
                esp21->f8 = v68;
                esp21->f4 = v66;
                esp21->f0 = v111;
                esp114 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                esp114->f0 = 0x805abce;
                fun_804983c(esp114->f4, 0, 0, 6, esp114->f20, esp114->f24, esp114->f28, esp114->f32, esp114->f36);
                esp21 = reinterpret_cast<struct s33*>(&esp114->f4);
            }
            v66 = v111;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68)) = 0;
        while (1) {
            v115 = reinterpret_cast<void**>(0xffffffff);
            v116 = reinterpret_cast<void**>(0);
            v117 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v67) - reinterpret_cast<unsigned char>(v68));
            if (reinterpret_cast<signed char>(v117) < reinterpret_cast<signed char>(0)) {
                v117 = reinterpret_cast<void**>(0x7fffffff);
            }
            if (v79 <= 17) {
                goto *reinterpret_cast<int32_t*>((v79 << 2) + 0x8062198);
            }
            while (1) {
                esp118 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                esp118->f0 = 0x805c32e;
                fun_80494bc(0, 2, esp118->f12, 6, esp118->f20, esp118->f24, esp118->f28, esp118->f32, esp118->f36);
                esp21 = reinterpret_cast<struct s33*>(&esp118->f4);
                while (1) {
                    if (reinterpret_cast<signed char>(v115) < reinterpret_cast<signed char>(0)) {
                        eax119 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v82 + 1));
                        if (*reinterpret_cast<signed char*>(&eax119)) 
                            goto addr_805c397_82;
                        if (reinterpret_cast<signed char>(v116) < reinterpret_cast<signed char>(0)) 
                            goto addr_805c3b5_84;
                        v115 = v116;
                    } else {
                        if (reinterpret_cast<unsigned char>(v115) < reinterpret_cast<unsigned char>(v117) && (eax120 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v115) + reinterpret_cast<unsigned char>(v68) + reinterpret_cast<unsigned char>(v66)), !!*reinterpret_cast<signed char*>(&eax120))) {
                            esp121 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp121->f0 = 0x805c364;
                            fun_80494bc(0, 2, esp121->f12, 6, esp121->f20, esp121->f24, esp121->f28, esp121->f32, esp121->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp121->f4);
                        }
                        if (reinterpret_cast<signed char>(v116) > reinterpret_cast<signed char>(v115)) {
                            v115 = v116;
                        }
                    }
                    if (reinterpret_cast<signed char>(v115) < reinterpret_cast<signed char>(0)) 
                        goto addr_805c543_91;
                    if (reinterpret_cast<unsigned char>(v115 + 1) >= reinterpret_cast<unsigned char>(v117)) 
                        goto addr_805c5d4_93;
                    v68 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v68) + reinterpret_cast<unsigned char>(v115));
                    while (1) {
                        v69 = v71->f4;
                        ++v70;
                        ++v71;
                        addr_8059896_21:
                        if (v71->f0 != v69) {
                            v122 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v71->f0) - reinterpret_cast<unsigned char>(v69));
                            esp21->f4 = v122;
                            esp21->f0 = v68;
                            esp123 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp123->f0 = 0x80598de;
                            eax124 = xsum(0, esp123->f8, esp123->f12, 6, esp123->f20, esp123->f24, esp123->f28, esp123->f32, esp123->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp123->f4);
                            if (reinterpret_cast<unsigned char>(eax124) > reinterpret_cast<unsigned char>(v67)) {
                                if (!v67) {
                                    v125 = reinterpret_cast<void**>(12);
                                } else {
                                    if (reinterpret_cast<signed char>(v67) < reinterpret_cast<signed char>(0)) {
                                        v126 = reinterpret_cast<void**>(0xffffffff);
                                    } else {
                                        v126 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v67) + reinterpret_cast<unsigned char>(v67));
                                    }
                                    v125 = v126;
                                }
                                v67 = v125;
                                if (reinterpret_cast<unsigned char>(eax124) > reinterpret_cast<unsigned char>(v67)) {
                                    v67 = eax124;
                                }
                                if (v67 == 0xffffffff) 
                                    goto addr_805ca3f_66;
                                if (v66 == v7 || !v66) {
                                    esp21->f0 = v67;
                                    esp127 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                    esp127->f0 = 0x805999f;
                                    eax128 = malloc(12, esp127->f8, esp127->f12, 6, esp127->f20, esp127->f24, esp127->f28, esp127->f32, esp127->f36);
                                    esp21 = reinterpret_cast<struct s33*>(&esp127->f4);
                                    v129 = eax128;
                                } else {
                                    esp21->f4 = v67;
                                    esp21->f0 = v66;
                                    esp130 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                    esp130->f0 = 0x80599bf;
                                    eax131 = fun_80495ac(0, 12, esp130->f12, 6, esp130->f20, esp130->f24, esp130->f28, esp130->f32, esp130->f36);
                                    esp21 = reinterpret_cast<struct s33*>(&esp130->f4);
                                    v129 = eax131;
                                }
                                if (!v129) 
                                    goto addr_805ca3f_66;
                                if (v66 == v7 && v68) {
                                    esp21->f8 = v68;
                                    esp21->f4 = v66;
                                    esp21->f0 = v129;
                                    esp132 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                    esp132->f0 = 0x8059a0b;
                                    fun_804983c(esp132->f4, 0, 0, 6, esp132->f20, esp132->f24, esp132->f28, esp132->f32, esp132->f36);
                                    esp21 = reinterpret_cast<struct s33*>(&esp132->f4);
                                }
                                v66 = v129;
                            }
                            esp21->f8 = v122;
                            esp21->f4 = v69;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp133 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp133->f0 = 0x8059a42;
                            fun_804983c(0, esp133->f8, esp133->f12, 6, esp133->f20, esp133->f24, esp133->f28, esp133->f32, esp133->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp133->f4);
                            v68 = eax124;
                        }
                        if (v134 == v70) 
                            goto addr_805c7a1_115;
                        eax135 = v71->f36;
                        if (*reinterpret_cast<signed char*>(&eax135) == 37) {
                            if (v71->f40 != -1) {
                                esp136 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp136->f0 = 0x8059a85;
                                fun_80494bc(esp136->f4, esp136->f8, esp136->f12, 6, esp136->f20, esp136->f24, esp136->f28, esp136->f32, esp136->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp136->f4);
                            }
                            esp21->f4 = reinterpret_cast<void**>(1);
                            esp21->f0 = v68;
                            esp137 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp137->f0 = 0x8059a9b;
                            eax138 = xsum(0, 1, esp137->f12, 6, esp137->f20, esp137->f24, esp137->f28, esp137->f32, esp137->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp137->f4);
                            if (reinterpret_cast<unsigned char>(eax138) > reinterpret_cast<unsigned char>(v67)) {
                                if (!v67) {
                                    v139 = reinterpret_cast<void**>(12);
                                } else {
                                    if (reinterpret_cast<signed char>(v67) < reinterpret_cast<signed char>(0)) {
                                        v140 = reinterpret_cast<void**>(0xffffffff);
                                    } else {
                                        v140 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v67) + reinterpret_cast<unsigned char>(v67));
                                    }
                                    v139 = v140;
                                }
                                v67 = v139;
                                if (reinterpret_cast<unsigned char>(eax138) > reinterpret_cast<unsigned char>(v67)) {
                                    v67 = eax138;
                                }
                                if (v67 == 0xffffffff) 
                                    goto addr_805ca3f_66;
                                if (v66 == v7 || !v66) {
                                    esp21->f0 = v67;
                                    esp141 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                    esp141->f0 = 0x8059b5c;
                                    eax142 = malloc(12, 1, esp141->f12, 6, esp141->f20, esp141->f24, esp141->f28, esp141->f32, esp141->f36);
                                    esp21 = reinterpret_cast<struct s33*>(&esp141->f4);
                                    v143 = eax142;
                                } else {
                                    esp21->f4 = v67;
                                    esp21->f0 = v66;
                                    esp144 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                    esp144->f0 = 0x8059b7c;
                                    eax145 = fun_80495ac(0, 12, esp144->f12, 6, esp144->f20, esp144->f24, esp144->f28, esp144->f32, esp144->f36);
                                    esp21 = reinterpret_cast<struct s33*>(&esp144->f4);
                                    v143 = eax145;
                                }
                                if (!v143) 
                                    goto addr_805ca3f_66;
                                if (v66 == v7 && v68) {
                                    esp21->f8 = v68;
                                    esp21->f4 = v66;
                                    esp21->f0 = v143;
                                    esp146 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                    esp146->f0 = 0x8059bc8;
                                    fun_804983c(esp146->f4, 0, 0, 6, esp146->f20, esp146->f24, esp146->f28, esp146->f32, esp146->f36);
                                    esp21 = reinterpret_cast<struct s33*>(&esp146->f4);
                                }
                                v66 = v143;
                            }
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68)) = 37;
                            v68 = eax138;
                            continue;
                        }
                        if (v71->f40 == -1) {
                            esp147 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp147->f0 = 0x8059c09;
                            fun_80494bc(esp147->f4, esp147->f8, esp147->f12, 6, esp147->f20, esp147->f24, esp147->f28, esp147->f32, esp147->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp147->f4);
                        }
                        eax148 = v71->f36;
                        if (*reinterpret_cast<signed char*>(&eax148) == 0x6e) 
                            goto addr_8059c1b_140;
                        addr_8059d1e_141:
                        eax149 = v71->f36;
                        if (*reinterpret_cast<signed char*>(&eax149) == 0x66) 
                            goto addr_8059d92_142;
                        eax150 = v71->f36;
                        if (*reinterpret_cast<signed char*>(&eax150) == 70) 
                            goto addr_8059d92_142;
                        eax151 = v71->f36;
                        if (*reinterpret_cast<signed char*>(&eax151) == 0x65) 
                            goto addr_8059d92_142;
                        eax152 = v71->f36;
                        if (*reinterpret_cast<signed char*>(&eax152) == 69) 
                            goto addr_8059d92_142;
                        eax153 = v71->f36;
                        if (*reinterpret_cast<signed char*>(&eax153) == 0x67) 
                            goto addr_8059d92_142;
                        eax154 = v71->f36;
                        if (*reinterpret_cast<signed char*>(&eax154) == 71) 
                            goto addr_8059d92_142;
                        eax155 = v71->f36;
                        if (*reinterpret_cast<signed char*>(&eax155) == 97) 
                            goto addr_8059d92_142;
                        eax156 = v71->f36;
                        if (*reinterpret_cast<signed char*>(&eax156) != 65) 
                            goto addr_805a758_25;
                        addr_8059d92_142:
                        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v157) + (v71->f40 << 4)) != 12) 
                            goto addr_805a758_25;
                        eax158 = reinterpret_cast<struct s36*>(reinterpret_cast<int32_t>(v159) + (v71->f40 << 4));
                        ecx160 = eax158->f12;
                        edx161 = eax158->f8;
                        esp21->f0 = eax158->f4;
                        esp21->f4 = edx161;
                        esp21->f8 = ecx160;
                        esp162 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp162->f0 = 0x8059de0;
                        eax163 = is_infinitel(esp162->f4, esp162->f8, esp162->f12, 6, esp162->f20, esp162->f24, esp162->f28, esp162->f32, esp162->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp162->f4);
                        if (!eax163) 
                            goto addr_805a758_25;
                        v164 = v71->f8;
                        v165 = 0;
                        v166 = reinterpret_cast<void**>(0);
                        if (v71->f12 != v71->f16) {
                            if (v71->f20 == -1) {
                                v167 = v71->f12;
                                do {
                                    eax168 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v167));
                                    ++v167;
                                    if (reinterpret_cast<unsigned char>(v166) > reinterpret_cast<unsigned char>(0x19999999)) {
                                        v169 = reinterpret_cast<void**>(0xffffffff);
                                    } else {
                                        edx170 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v166) << 2) + reinterpret_cast<unsigned char>(v166));
                                        v169 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx170) + reinterpret_cast<uint32_t>(edx170));
                                    }
                                    esp21->f4 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax168) - 48);
                                    esp21->f0 = v169;
                                    esp171 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                    esp171->f0 = 0x8059f17;
                                    eax172 = xsum(0xffffffff, esp171->f8, esp171->f12, 6, esp171->f20, esp171->f24, esp171->f28, esp171->f32, esp171->f36);
                                    esp21 = reinterpret_cast<struct s33*>(&esp171->f4);
                                    v166 = eax172;
                                } while (v71->f16 != v167);
                            } else {
                                if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v173) + (v71->f20 << 4)) != 5) {
                                    esp174 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                    esp174->f0 = 0x8059e54;
                                    fun_80494bc(esp174->f4, esp174->f8, esp174->f12, 6, esp174->f20, esp174->f24, esp174->f28, esp174->f32, esp174->f36);
                                    esp21 = reinterpret_cast<struct s33*>(&esp174->f4);
                                }
                                v175 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v176) + (v71->f20 << 4) + 4);
                                if (reinterpret_cast<signed char>(v175) >= reinterpret_cast<signed char>(0)) {
                                    v166 = v175;
                                } else {
                                    v164 = v164 | 2;
                                    v166 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v175));
                                }
                            }
                            v165 = 1;
                        }
                        v177 = 0;
                        v178 = reinterpret_cast<void**>(0);
                        if (v71->f24 != v71->f28) {
                            if (v71->f32 == -1) {
                                v179 = v71->f24 + 1;
                                v178 = reinterpret_cast<void**>(0);
                                while (v71->f28 != v179) {
                                    eax180 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v179));
                                    ++v179;
                                    if (reinterpret_cast<unsigned char>(v178) > reinterpret_cast<unsigned char>(0x19999999)) {
                                        v181 = reinterpret_cast<void**>(0xffffffff);
                                    } else {
                                        edx182 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v178) << 2) + reinterpret_cast<unsigned char>(v178));
                                        v181 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx182) + reinterpret_cast<uint32_t>(edx182));
                                    }
                                    esp21->f4 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax180) - 48);
                                    esp21->f0 = v181;
                                    esp183 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                    esp183->f0 = 0x805a05b;
                                    eax184 = xsum(0xffffffff, esp183->f8, esp183->f12, 6, esp183->f20, esp183->f24, esp183->f28, esp183->f32, esp183->f36);
                                    esp21 = reinterpret_cast<struct s33*>(&esp183->f4);
                                    v178 = eax184;
                                }
                                v177 = 1;
                            } else {
                                if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v185) + (v71->f32 << 4)) != 5) {
                                    esp186 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                    esp186->f0 = 0x8059f95;
                                    fun_80494bc(esp186->f4, esp186->f8, esp186->f12, 6, esp186->f20, esp186->f24, esp186->f28, esp186->f32, esp186->f36);
                                    esp21 = reinterpret_cast<struct s33*>(&esp186->f4);
                                }
                                v187 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v188) + (v71->f32 << 4) + 4);
                                if (reinterpret_cast<signed char>(v187) >= reinterpret_cast<signed char>(0)) {
                                    v178 = v187;
                                    v177 = 1;
                                }
                            }
                        }
                        if (!v177) {
                            v178 = reinterpret_cast<void**>(6);
                        }
                        v189 = reinterpret_cast<void**>(0);
                        if (reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(v178)) {
                            v189 = v178;
                        }
                        esp21->f4 = reinterpret_cast<void**>(12);
                        esp21->f0 = v189;
                        esp190 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp190->f0 = 0x805a0c9;
                        eax191 = xsum(0, 12, esp190->f12, 6, esp190->f20, esp190->f24, esp190->f28, esp190->f32, esp190->f36);
                        esp192 = reinterpret_cast<struct s33*>(&esp190->f4);
                        v193 = eax191;
                        if (reinterpret_cast<unsigned char>(v193) < reinterpret_cast<unsigned char>(v166)) {
                            v193 = v166;
                        }
                        esp192->f4 = reinterpret_cast<void**>(1);
                        esp192->f0 = v193;
                        esp194 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp192) - 4);
                        esp194->f0 = 0x805a0ff;
                        eax195 = xsum(esp194->f4, 1, esp194->f12, 6, esp194->f20, esp194->f24, esp194->f28, esp194->f32, esp194->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp194->f4);
                        v196 = eax195;
                        if (reinterpret_cast<unsigned char>(v196) > reinterpret_cast<unsigned char>(0x2bc)) {
                            if (v196 == 0xffffffff) 
                                goto addr_805ca3f_66;
                            esp21->f0 = v196;
                            esp197 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp197->f0 = 0x805a146;
                            eax198 = malloc(esp197->f4, 1, esp197->f12, 6, esp197->f20, esp197->f24, esp197->f28, esp197->f32, esp197->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp197->f4);
                            v199 = eax198;
                            if (!v199) 
                                goto addr_805ca3f_66;
                        } else {
                            v199 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffd28);
                        }
                        v200 = v199;
                        eax201 = reinterpret_cast<struct s37*>(reinterpret_cast<int32_t>(v202) + (v71->f40 << 4));
                        ecx203 = eax201->f12;
                        edx204 = eax201->f8;
                        v205 = eax201->f4;
                        esp21->f0 = v205;
                        esp21->f4 = edx204;
                        esp21->f8 = ecx203;
                        esp206 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp206->f0 = 0x805a1c1;
                        eax207 = rpl_isnanl(esp206->f4, esp206->f8, esp206->f12, 6, esp206->f20, esp206->f24, esp206->f28, esp206->f32, esp206->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp206->f4);
                        if (!eax207) {
                            v208 = 0;
                            __asm__("fnstcw word [ebp+0xfffffc58]");
                            eax209 = *reinterpret_cast<uint16_t*>(&v115);
                            eax210 = *reinterpret_cast<uint16_t*>(&eax209);
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax210) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax210) + 1) | 3);
                            *reinterpret_cast<uint16_t*>(&v115) = *reinterpret_cast<uint16_t*>(&eax210);
                            __asm__("fldcw word [ebp+0xfffffc58]");
                            edx211 = edx204;
                            esp21->f0 = v205;
                            esp21->f4 = edx211;
                            esp21->f8 = ecx203;
                            esp212 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp212->f0 = 0x805a2a6;
                            eax213 = fun_80498ec(esp212->f4, esp212->f8, esp212->f12, 6, esp212->f20, esp212->f24, esp212->f28, esp212->f32, esp212->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp212->f4);
                            if (eax213) {
                                v208 = -1;
                                __asm__("fld tword [ebp+0xfffffbb8]");
                                __asm__("fchs ");
                                __asm__("fstp tword [ebp+0xfffffbb8]");
                            }
                            if (v208 >= 0) {
                                if (!(v164 & 4)) {
                                    eax214 = reinterpret_cast<void**>(v164 & 8);
                                    if (eax214) {
                                        eax214 = v200;
                                        *reinterpret_cast<void***>(eax214) = reinterpret_cast<void**>(32);
                                        ++v200;
                                    }
                                } else {
                                    eax214 = v200;
                                    *reinterpret_cast<void***>(eax214) = reinterpret_cast<void**>(43);
                                    ++v200;
                                }
                            } else {
                                eax214 = v200;
                                *reinterpret_cast<void***>(eax214) = reinterpret_cast<void**>(45);
                                ++v200;
                            }
                            __asm__("fld tword [ebp+0xfffffbb8]");
                            __asm__("fldz ");
                            __asm__("fxch st0, st1");
                            __asm__("fucompp ");
                            *reinterpret_cast<int16_t*>(&eax214) = fpu_status_word215;
                            *reinterpret_cast<unsigned char*>(&eax214) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&eax214 + 1) | *reinterpret_cast<uint1_t*>(&eax214 + 1)));
                            eax216 = reinterpret_cast<unsigned char>(eax214) ^ 1;
                            if (*reinterpret_cast<unsigned char*>(&eax216) || (*reinterpret_cast<int16_t*>(&eax216) = fpu_status_word217, pf218 = *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax216) + 1), *reinterpret_cast<unsigned char*>(&eax216) = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax216) + 1), *reinterpret_cast<unsigned char*>(&edx211) = reinterpret_cast<uint1_t>(!pf218), eax219 = eax216 & reinterpret_cast<unsigned char>(edx211) ^ 1, !!*reinterpret_cast<signed char*>(&eax219))) {
                                esp220 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp220->f0 = 0x805a3f7;
                                fun_80494bc(esp220->f4, esp220->f8, esp220->f12, 6, esp220->f20, esp220->f24, esp220->f28, esp220->f32, esp220->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp220->f4);
                            } else {
                                eax221 = v71->f36;
                                if (*reinterpret_cast<signed char*>(&eax221) <= 64 || (eax222 = v71->f36, *reinterpret_cast<signed char*>(&eax222) > 90)) {
                                    *reinterpret_cast<void***>(v200) = reinterpret_cast<void**>(0x69);
                                    v223 = v200 + 1;
                                    *reinterpret_cast<void***>(v223) = reinterpret_cast<void**>(0x6e);
                                    v224 = v223 + 1;
                                    *reinterpret_cast<void***>(v224) = reinterpret_cast<void**>(0x66);
                                    v200 = v224 + 1;
                                } else {
                                    *reinterpret_cast<void***>(v200) = reinterpret_cast<void**>(73);
                                    v225 = v200 + 1;
                                    *reinterpret_cast<void***>(v225) = reinterpret_cast<void**>(78);
                                    v226 = v225 + 1;
                                    *reinterpret_cast<void***>(v226) = reinterpret_cast<void**>(70);
                                    v200 = v226 + 1;
                                }
                                eax227 = *reinterpret_cast<uint16_t*>(&eax209);
                                *reinterpret_cast<uint16_t*>(&v115) = *reinterpret_cast<uint16_t*>(&eax227);
                                __asm__("fldcw word [ebp+0xfffffc58]");
                            }
                        } else {
                            eax228 = v71->f36;
                            if (*reinterpret_cast<signed char*>(&eax228) <= 64 || (eax229 = v71->f36, *reinterpret_cast<signed char*>(&eax229) > 90)) {
                                *reinterpret_cast<void***>(v200) = reinterpret_cast<void**>(0x6e);
                                v230 = v200 + 1;
                                *reinterpret_cast<void***>(v230) = reinterpret_cast<void**>(97);
                                v231 = v230 + 1;
                                *reinterpret_cast<void***>(v231) = reinterpret_cast<void**>(0x6e);
                                v200 = v231 + 1;
                            } else {
                                *reinterpret_cast<void***>(v200) = reinterpret_cast<void**>(78);
                                v232 = v200 + 1;
                                *reinterpret_cast<void***>(v232) = reinterpret_cast<void**>(65);
                                v233 = v232 + 1;
                                *reinterpret_cast<void***>(v233) = reinterpret_cast<void**>(78);
                                v200 = v233 + 1;
                            }
                        }
                        if (v165 && reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v200) - reinterpret_cast<unsigned char>(v199)) < reinterpret_cast<unsigned char>(v166)) {
                            v234 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v199) - reinterpret_cast<unsigned char>(v200) + reinterpret_cast<unsigned char>(v166));
                            v235 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v200) + reinterpret_cast<uint32_t>(v234));
                            if (!(v164 & 2)) {
                                if (!(v164 & 32) || 1) {
                                    v236 = v235;
                                    while (reinterpret_cast<unsigned char>(v200) > reinterpret_cast<unsigned char>(v199)) {
                                        --v236;
                                        --v200;
                                        edx237 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v200));
                                        *reinterpret_cast<void***>(v236) = *reinterpret_cast<void***>(&edx237);
                                    }
                                    while (v234) {
                                        *reinterpret_cast<void***>(v200) = reinterpret_cast<void**>(32);
                                        ++v200;
                                        v234 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v234) - 1);
                                    }
                                } else {
                                    v238 = v235;
                                    while (reinterpret_cast<unsigned char>(v200) > reinterpret_cast<unsigned char>(0)) {
                                        --v238;
                                        --v200;
                                        edx239 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v200));
                                        *reinterpret_cast<void***>(v238) = *reinterpret_cast<void***>(&edx239);
                                    }
                                    while (v234) {
                                        *reinterpret_cast<void***>(v200) = reinterpret_cast<void**>(48);
                                        ++v200;
                                        v234 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v234) - 1);
                                    }
                                }
                            } else {
                                while (v234) {
                                    *reinterpret_cast<void***>(v200) = reinterpret_cast<void**>(32);
                                    ++v200;
                                    v234 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v234) - 1);
                                }
                            }
                            v200 = v235;
                        }
                        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v200) - reinterpret_cast<unsigned char>(v199)) >= reinterpret_cast<unsigned char>(v196)) {
                            esp240 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp240->f0 = 0x805a591;
                            fun_80494bc(esp240->f4, esp240->f8, esp240->f12, 6, esp240->f20, esp240->f24, esp240->f28, esp240->f32, esp240->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp240->f4);
                        }
                        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v67) - reinterpret_cast<unsigned char>(v68)) <= reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v200) - reinterpret_cast<unsigned char>(v199)) && (esp21->f4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v200) - reinterpret_cast<unsigned char>(v199)), esp21->f0 = v68, esp241 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4), esp241->f0 = 0x805a5c7, eax242 = xsum(0, esp241->f8, esp241->f12, 6, esp241->f20, esp241->f24, esp241->f28, esp241->f32, esp241->f36), esp21 = reinterpret_cast<struct s33*>(&esp241->f4), reinterpret_cast<unsigned char>(eax242) > reinterpret_cast<unsigned char>(v67))) {
                            if (!v67) {
                                v243 = reinterpret_cast<void**>(12);
                            } else {
                                if (reinterpret_cast<signed char>(v67) < reinterpret_cast<signed char>(0)) {
                                    v244 = reinterpret_cast<void**>(0xffffffff);
                                } else {
                                    v244 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v67) + reinterpret_cast<unsigned char>(v67));
                                }
                                v243 = v244;
                            }
                            v67 = v243;
                            if (reinterpret_cast<unsigned char>(eax242) > reinterpret_cast<unsigned char>(v67)) {
                                v67 = eax242;
                            }
                            if (v67 == 0xffffffff) 
                                goto addr_805ca3f_66;
                            if (v66 == v7 || !v66) {
                                esp21->f0 = v67;
                                esp245 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp245->f0 = 0x805a688;
                                eax246 = malloc(12, esp245->f8, esp245->f12, 6, esp245->f20, esp245->f24, esp245->f28, esp245->f32, esp245->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp245->f4);
                                v247 = eax246;
                            } else {
                                esp21->f4 = v67;
                                esp21->f0 = v66;
                                esp248 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp248->f0 = 0x805a6a8;
                                eax249 = fun_80495ac(0, 12, esp248->f12, 6, esp248->f20, esp248->f24, esp248->f28, esp248->f32, esp248->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp248->f4);
                                v247 = eax249;
                            }
                            if (!v247) 
                                goto addr_805ca3f_66;
                            if (v66 == v7 && v68) {
                                esp21->f8 = v68;
                                esp21->f4 = v66;
                                esp21->f0 = v247;
                                esp250 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp250->f0 = 0x805a6f4;
                                fun_804983c(esp250->f4, 0, 0, 6, esp250->f20, esp250->f24, esp250->f28, esp250->f32, esp250->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp250->f4);
                            }
                            v66 = v247;
                        }
                        esp21->f8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v200) - reinterpret_cast<unsigned char>(v199));
                        esp21->f4 = v199;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp251 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp251->f0 = 0x805a72b;
                        fun_804983c(0, esp251->f8, esp251->f12, 6, esp251->f20, esp251->f24, esp251->f28, esp251->f32, esp251->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp251->f4);
                        if (v199 != reinterpret_cast<int32_t>(ebp6) + 0xfffffd28) {
                            esp21->f0 = v199;
                            esp252 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp252->f0 = 0x805a747;
                            free(esp252->f4, esp252->f8, esp252->f12, 6, esp252->f20, esp252->f24, esp252->f28, esp252->f32, esp252->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp252->f4);
                        }
                        v68 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v68) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v200) - reinterpret_cast<unsigned char>(v199)));
                        continue;
                        addr_8059c1b_140:
                        v253 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v254) + (v71->f40 << 4)) - 18;
                        switch (v253) {
                        default:
                            esp255 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp255->f0 = 0x8059d1e;
                            fun_80494bc(esp255->f4, esp255->f8, esp255->f12, 6, esp255->f20, esp255->f24, esp255->f28, esp255->f32, esp255->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp255->f4);
                            goto addr_8059d1e_141;
                        case 0:
                            eax256 = v68;
                            **reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(v257) + (v71->f40 << 4) + 4) = *reinterpret_cast<signed char*>(&eax256);
                            break;
                        case 1:
                            eax258 = v68;
                            **reinterpret_cast<int16_t**>(reinterpret_cast<int32_t>(v259) + (v71->f40 << 4) + 4) = *reinterpret_cast<int16_t*>(&eax258);
                            break;
                        case 2:
                            **reinterpret_cast<void****>(reinterpret_cast<int32_t>(v260) + (v71->f40 << 4) + 4) = v68;
                            break;
                        case 3:
                            **reinterpret_cast<void****>(reinterpret_cast<int32_t>(v261) + (v71->f40 << 4) + 4) = v68;
                            break;
                        case 4:
                            ecx262 = *reinterpret_cast<struct s38**>(reinterpret_cast<int32_t>(v263) + (v71->f40 << 4) + 4);
                            ecx262->f0 = v68;
                            ecx262->f4 = 0;
                        }
                    }
                    eax264 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v265) + (v71->f40 << 4) + 4);
                    v266 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax264)));
                    if (v93 == 1) {
                        esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v266;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp267 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp267->f0 = 0x805ad2b;
                        eax268 = fun_8049a4c(0, 0, esp267->f12, esp267->f16, esp267->f20, esp267->f24, esp267->f28, esp267->f32, esp267->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp267->f4);
                        v116 = eax268;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v266;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp269 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp269->f0 = 0x805acd7;
                            eax270 = fun_8049a4c(0, 0, esp269->f12, esp269->f16, esp269->f20, esp269->f24, esp269->f28, esp269->f32, esp269->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp269->f4);
                            v116 = eax270;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v266;
                                esp21->f16 = v271;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp272 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp272->f0 = 0x805ad89;
                                eax273 = fun_8049a4c(0, 0, esp272->f12, esp272->f16, esp272->f20, esp272->f24, esp272->f28, esp272->f32, esp272->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp272->f4);
                                v116 = eax273;
                                continue;
                            } else {
                                esp274 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp274->f0 = 0x805ad99;
                                fun_80494bc(0, 2, esp274->f12, 6, esp274->f20, esp274->f24, esp274->f28, esp274->f32, esp274->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp274->f4);
                            }
                        }
                    }
                    eax275 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v276) + (v71->f40 << 4) + 4);
                    v277 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax275)));
                    if (v93 == 1) {
                        esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v277;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp278 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp278->f0 = 0x805ae7e;
                        eax279 = fun_8049a4c(0, 0, esp278->f12, esp278->f16, esp278->f20, esp278->f24, esp278->f28, esp278->f32, esp278->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp278->f4);
                        v116 = eax279;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v277;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp280 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp280->f0 = 0x805ae2a;
                            eax281 = fun_8049a4c(0, 0, esp280->f12, esp280->f16, esp280->f20, esp280->f24, esp280->f28, esp280->f32, esp280->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp280->f4);
                            v116 = eax281;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v277;
                                esp21->f16 = v282;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp283 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp283->f0 = 0x805aedc;
                                eax284 = fun_8049a4c(0, 0, esp283->f12, esp283->f16, esp283->f20, esp283->f24, esp283->f28, esp283->f32, esp283->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp283->f4);
                                v116 = eax284;
                                continue;
                            } else {
                                esp285 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp285->f0 = 0x805aeec;
                                fun_80494bc(0, 2, esp285->f12, 6, esp285->f20, esp285->f24, esp285->f28, esp285->f32, esp285->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp285->f4);
                            }
                        }
                    }
                    eax286 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(v287) + (v71->f40 << 4) + 4);
                    v288 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax286)));
                    if (v93 == 1) {
                        esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v288;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp289 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp289->f0 = 0x805afcf;
                        eax290 = fun_8049a4c(0, 0, esp289->f12, esp289->f16, esp289->f20, esp289->f24, esp289->f28, esp289->f32, esp289->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp289->f4);
                        v116 = eax290;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v288;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp291 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp291->f0 = 0x805af7b;
                            eax292 = fun_8049a4c(0, 0, esp291->f12, esp291->f16, esp291->f20, esp291->f24, esp291->f28, esp291->f32, esp291->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp291->f4);
                            v116 = eax292;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v288;
                                esp21->f16 = v293;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp294 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp294->f0 = 0x805b02d;
                                eax295 = fun_8049a4c(0, 0, esp294->f12, esp294->f16, esp294->f20, esp294->f24, esp294->f28, esp294->f32, esp294->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp294->f4);
                                v116 = eax295;
                                continue;
                            } else {
                                esp296 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp296->f0 = 0x805b03d;
                                fun_80494bc(0, 2, esp296->f12, 6, esp296->f20, esp296->f24, esp296->f28, esp296->f32, esp296->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp296->f4);
                            }
                        }
                    }
                    eax297 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(v298) + (v71->f40 << 4) + 4);
                    v299 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax297)));
                    if (v93 == 1) {
                        esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v299;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp300 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp300->f0 = 0x805b122;
                        eax301 = fun_8049a4c(0, 0, esp300->f12, esp300->f16, esp300->f20, esp300->f24, esp300->f28, esp300->f32, esp300->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp300->f4);
                        v116 = eax301;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v299;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp302 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp302->f0 = 0x805b0ce;
                            eax303 = fun_8049a4c(0, 0, esp302->f12, esp302->f16, esp302->f20, esp302->f24, esp302->f28, esp302->f32, esp302->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp302->f4);
                            v116 = eax303;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v299;
                                esp21->f16 = v304;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp305 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp305->f0 = 0x805b180;
                                eax306 = fun_8049a4c(0, 0, esp305->f12, esp305->f16, esp305->f20, esp305->f24, esp305->f28, esp305->f32, esp305->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp305->f4);
                                v116 = eax306;
                                continue;
                            } else {
                                esp307 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp307->f0 = 0x805b190;
                                fun_80494bc(0, 2, esp307->f12, 6, esp307->f20, esp307->f24, esp307->f28, esp307->f32, esp307->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp307->f4);
                            }
                        }
                    }
                    v308 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v309) + (v71->f40 << 4) + 4);
                    if (v93 == 1) {
                        esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v308;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp310 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp310->f0 = 0x805b271;
                        eax311 = fun_8049a4c(0, 0, esp310->f12, esp310->f16, esp310->f20, esp310->f24, esp310->f28, esp310->f32, esp310->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp310->f4);
                        v116 = eax311;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v308;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp312 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp312->f0 = 0x805b21d;
                            eax313 = fun_8049a4c(0, 0, esp312->f12, esp312->f16, esp312->f20, esp312->f24, esp312->f28, esp312->f32, esp312->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp312->f4);
                            v116 = eax313;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v308;
                                esp21->f16 = v314;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp315 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp315->f0 = 0x805b2cf;
                                eax316 = fun_8049a4c(0, 0, esp315->f12, esp315->f16, esp315->f20, esp315->f24, esp315->f28, esp315->f32, esp315->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp315->f4);
                                v116 = eax316;
                                continue;
                            } else {
                                esp317 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp317->f0 = 0x805b2df;
                                fun_80494bc(0, 2, esp317->f12, 6, esp317->f20, esp317->f24, esp317->f28, esp317->f32, esp317->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp317->f4);
                            }
                        }
                    }
                    v318 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v319) + (v71->f40 << 4) + 4);
                    if (v93 == 1) {
                        esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v318;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp320 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp320->f0 = 0x805b3c0;
                        eax321 = fun_8049a4c(0, 0, esp320->f12, esp320->f16, esp320->f20, esp320->f24, esp320->f28, esp320->f32, esp320->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp320->f4);
                        v116 = eax321;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v318;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp322 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp322->f0 = 0x805b36c;
                            eax323 = fun_8049a4c(0, 0, esp322->f12, esp322->f16, esp322->f20, esp322->f24, esp322->f28, esp322->f32, esp322->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp322->f4);
                            v116 = eax323;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v318;
                                esp21->f16 = v324;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp325 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp325->f0 = 0x805b41e;
                                eax326 = fun_8049a4c(0, 0, esp325->f12, esp325->f16, esp325->f20, esp325->f24, esp325->f28, esp325->f32, esp325->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp325->f4);
                                v116 = eax326;
                                continue;
                            } else {
                                esp327 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp327->f0 = 0x805b42e;
                                fun_80494bc(0, 2, esp327->f12, 6, esp327->f20, esp327->f24, esp327->f28, esp327->f32, esp327->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp327->f4);
                            }
                        }
                    }
                    v328 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v329) + (v71->f40 << 4) + 4);
                    if (v93 == 1) {
                        esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v328;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp330 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp330->f0 = 0x805b50f;
                        eax331 = fun_8049a4c(0, 0, esp330->f12, esp330->f16, esp330->f20, esp330->f24, esp330->f28, esp330->f32, esp330->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp330->f4);
                        v116 = eax331;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v328;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp332 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp332->f0 = 0x805b4bb;
                            eax333 = fun_8049a4c(0, 0, esp332->f12, esp332->f16, esp332->f20, esp332->f24, esp332->f28, esp332->f32, esp332->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp332->f4);
                            v116 = eax333;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v328;
                                esp21->f16 = v334;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp335 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp335->f0 = 0x805b56d;
                                eax336 = fun_8049a4c(0, 0, esp335->f12, esp335->f16, esp335->f20, esp335->f24, esp335->f28, esp335->f32, esp335->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp335->f4);
                                v116 = eax336;
                                continue;
                            } else {
                                esp337 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp337->f0 = 0x805b57d;
                                fun_80494bc(0, 2, esp337->f12, 6, esp337->f20, esp337->f24, esp337->f28, esp337->f32, esp337->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp337->f4);
                            }
                        }
                    }
                    v338 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v339) + (v71->f40 << 4) + 4);
                    if (v93 == 1) {
                        esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v338;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp340 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp340->f0 = 0x805b65e;
                        eax341 = fun_8049a4c(0, 0, esp340->f12, esp340->f16, esp340->f20, esp340->f24, esp340->f28, esp340->f32, esp340->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp340->f4);
                        v116 = eax341;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v338;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp342 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp342->f0 = 0x805b60a;
                            eax343 = fun_8049a4c(0, 0, esp342->f12, esp342->f16, esp342->f20, esp342->f24, esp342->f28, esp342->f32, esp342->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp342->f4);
                            v116 = eax343;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v338;
                                esp21->f16 = v344;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp345 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp345->f0 = 0x805b6bc;
                                eax346 = fun_8049a4c(0, 0, esp345->f12, esp345->f16, esp345->f20, esp345->f24, esp345->f28, esp345->f32, esp345->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp345->f4);
                                v116 = eax346;
                                continue;
                            } else {
                                esp347 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp347->f0 = 0x805b6cc;
                                fun_80494bc(0, 2, esp347->f12, 6, esp347->f20, esp347->f24, esp347->f28, esp347->f32, esp347->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp347->f4);
                            }
                        }
                    }
                    eax348 = reinterpret_cast<struct s39*>(reinterpret_cast<int32_t>(v349) + (v71->f40 << 4));
                    edx350 = eax348->f8;
                    v351 = eax348->f4;
                    if (v93 == 1) {
                        esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v351;
                        esp21->f20 = edx350;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp352 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp352->f0 = 0x805b7ca;
                        eax353 = fun_8049a4c(0, 0, esp352->f12, esp352->f16, esp352->f20, esp352->f24, esp352->f28, esp352->f32, esp352->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp352->f4);
                        v116 = eax353;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v351;
                            esp21->f16 = edx350;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp354 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp354->f0 = 0x805b76c;
                            eax355 = fun_8049a4c(0, 0, esp354->f12, esp354->f16, esp354->f20, esp354->f24, esp354->f28, esp354->f32, esp354->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp354->f4);
                            v116 = eax355;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v351;
                                esp21->f24 = edx350;
                                esp21->f16 = v356;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp357 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp357->f0 = 0x805b832;
                                eax358 = fun_8049a4c(0, 0, esp357->f12, esp357->f16, esp357->f20, esp357->f24, esp357->f28, esp357->f32, esp357->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp357->f4);
                                v116 = eax358;
                                continue;
                            } else {
                                esp359 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp359->f0 = 0x805b842;
                                fun_80494bc(0, 2, esp359->f12, 6, esp359->f20, esp359->f24, esp359->f28, esp359->f32, esp359->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp359->f4);
                            }
                        }
                    }
                    eax360 = reinterpret_cast<struct s40*>(reinterpret_cast<int32_t>(v361) + (v71->f40 << 4));
                    edx362 = eax360->f8;
                    v363 = eax360->f4;
                    if (v93 == 1) {
                        esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v363;
                        esp21->f20 = edx362;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp364 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp364->f0 = 0x805b940;
                        eax365 = fun_8049a4c(0, 0, esp364->f12, esp364->f16, esp364->f20, esp364->f24, esp364->f28, esp364->f32, esp364->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp364->f4);
                        v116 = eax365;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v363;
                            esp21->f16 = edx362;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp366 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp366->f0 = 0x805b8e2;
                            eax367 = fun_8049a4c(0, 0, esp366->f12, esp366->f16, esp366->f20, esp366->f24, esp366->f28, esp366->f32, esp366->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp366->f4);
                            v116 = eax367;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v363;
                                esp21->f24 = edx362;
                                esp21->f16 = v368;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp369 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp369->f0 = 0x805b9a8;
                                eax370 = fun_8049a4c(0, 0, esp369->f12, esp369->f16, esp369->f20, esp369->f24, esp369->f28, esp369->f32, esp369->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp369->f4);
                                v116 = eax370;
                                continue;
                            } else {
                                esp371 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp371->f0 = 0x805b9b8;
                                fun_80494bc(0, 2, esp371->f12, 6, esp371->f20, esp371->f24, esp371->f28, esp371->f32, esp371->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp371->f4);
                            }
                        }
                    }
                    __asm__("fld qword [eax+0x4]");
                    __asm__("fstp qword [ebp+0xfffffbd0]");
                    if (v93 == 1) {
                        esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        __asm__("fld qword [ebp+0xfffffbd0]");
                        __asm__("fstp qword [esp+0x10]");
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp372 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp372->f0 = 0x805ba99;
                        eax373 = fun_8049a4c(0, 0, esp372->f12, esp372->f16, esp372->f20, esp372->f24, esp372->f28, esp372->f32, esp372->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp372->f4);
                        v116 = eax373;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            __asm__("fld qword [ebp+0xfffffbd0]");
                            __asm__("fstp qword [esp+0xc]");
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp374 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp374->f0 = 0x805ba45;
                            eax375 = fun_8049a4c(0, 0, esp374->f12, 6, esp374->f20, esp374->f24, esp374->f28, esp374->f32, esp374->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp374->f4);
                            v116 = eax375;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                __asm__("fld qword [ebp+0xfffffbd0]");
                                __asm__("fstp qword [esp+0x14]");
                                esp21->f16 = v376;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp377 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp377->f0 = 0x805baf7;
                                eax378 = fun_8049a4c(0, 0, esp377->f12, esp377->f16, esp377->f20, esp377->f24, esp377->f28, esp377->f32, esp377->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp377->f4);
                                v116 = eax378;
                                continue;
                            } else {
                                esp379 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp379->f0 = 0x805bb07;
                                fun_80494bc(0, 2, esp379->f12, 6, esp379->f20, esp379->f24, esp379->f28, esp379->f32, esp379->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp379->f4);
                            }
                        }
                    }
                    eax380 = reinterpret_cast<struct s41*>(reinterpret_cast<int32_t>(v381) + (v71->f40 << 4));
                    ecx382 = eax380->f12;
                    edx383 = eax380->f8;
                    v384 = eax380->f4;
                    if (v93 == 1) {
                        esp21->f28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v384;
                        esp21->f20 = edx383;
                        esp21->f24 = ecx382;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp385 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp385->f0 = 0x805bc22;
                        eax386 = fun_8049a4c(0, 0, esp385->f12, esp385->f16, esp385->f20, esp385->f24, esp385->f28, esp385->f32, esp385->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp385->f4);
                        v116 = eax386;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v384;
                            esp21->f16 = edx383;
                            esp21->f20 = ecx382;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp387 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp387->f0 = 0x805bbba;
                            eax388 = fun_8049a4c(0, 0, esp387->f12, esp387->f16, esp387->f20, esp387->f24, esp387->f28, esp387->f32, esp387->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp387->f4);
                            v116 = eax388;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) - 0x3a8);
                                esp21->f20 = v384;
                                esp21->f24 = edx383;
                                esp21->f28 = ecx382;
                                esp21->f16 = v389;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp390 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp390->f0 = 0x805bc94;
                                eax391 = fun_8049a4c(0, 0, esp390->f12, esp390->f16, esp390->f20, esp390->f24, esp390->f28, esp390->f32, esp390->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp390->f4);
                                v116 = eax391;
                                continue;
                            } else {
                                esp392 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp392->f0 = 0x805bca4;
                                fun_80494bc(0, 2, esp392->f12, 6, esp392->f20, esp392->f24, esp392->f28, esp392->f32, esp392->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp392->f4);
                            }
                        }
                    }
                    v393 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v394) + (v71->f40 << 4) + 4);
                    if (v93 == 1) {
                        esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v393;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp395 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp395->f0 = 0x805bd85;
                        eax396 = fun_8049a4c(0, 0, esp395->f12, esp395->f16, esp395->f20, esp395->f24, esp395->f28, esp395->f32, esp395->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp395->f4);
                        v116 = eax396;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v393;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp397 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp397->f0 = 0x805bd31;
                            eax398 = fun_8049a4c(0, 0, esp397->f12, esp397->f16, esp397->f20, esp397->f24, esp397->f28, esp397->f32, esp397->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp397->f4);
                            v116 = eax398;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v393;
                                esp21->f16 = v399;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp400 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp400->f0 = 0x805bde3;
                                eax401 = fun_8049a4c(0, 0, esp400->f12, esp400->f16, esp400->f20, esp400->f24, esp400->f28, esp400->f32, esp400->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp400->f4);
                                v116 = eax401;
                                continue;
                            } else {
                                esp402 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp402->f0 = 0x805bdf3;
                                fun_80494bc(0, 2, esp402->f12, 6, esp402->f20, esp402->f24, esp402->f28, esp402->f32, esp402->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp402->f4);
                            }
                        }
                    }
                    v403 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v404) + (v71->f40 << 4) + 4);
                    if (v93 == 1) {
                        esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v403;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp405 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp405->f0 = 0x805bed4;
                        eax406 = fun_8049a4c(0, 0, esp405->f12, esp405->f16, esp405->f20, esp405->f24, esp405->f28, esp405->f32, esp405->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp405->f4);
                        v116 = eax406;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v403;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp407 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp407->f0 = 0x805be80;
                            eax408 = fun_8049a4c(0, 0, esp407->f12, esp407->f16, esp407->f20, esp407->f24, esp407->f28, esp407->f32, esp407->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp407->f4);
                            v116 = eax408;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v403;
                                esp21->f16 = v409;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp410 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp410->f0 = 0x805bf32;
                                eax411 = fun_8049a4c(0, 0, esp410->f12, esp410->f16, esp410->f20, esp410->f24, esp410->f28, esp410->f32, esp410->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp410->f4);
                                v116 = eax411;
                                continue;
                            } else {
                                esp412 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp412->f0 = 0x805bf42;
                                fun_80494bc(0, 2, esp412->f12, 6, esp412->f20, esp412->f24, esp412->f28, esp412->f32, esp412->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp412->f4);
                            }
                        }
                    }
                    v413 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v414) + (v71->f40 << 4) + 4);
                    if (v93 == 1) {
                        esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v413;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp415 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp415->f0 = 0x805c023;
                        eax416 = fun_8049a4c(0, 0, esp415->f12, esp415->f16, esp415->f20, esp415->f24, esp415->f28, esp415->f32, esp415->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp415->f4);
                        v116 = eax416;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v413;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp417 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp417->f0 = 0x805bfcf;
                            eax418 = fun_8049a4c(0, 0, esp417->f12, esp417->f16, esp417->f20, esp417->f24, esp417->f28, esp417->f32, esp417->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp417->f4);
                            v116 = eax418;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v413;
                                esp21->f16 = v419;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp420 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp420->f0 = 0x805c081;
                                eax421 = fun_8049a4c(0, 0, esp420->f12, esp420->f16, esp420->f20, esp420->f24, esp420->f28, esp420->f32, esp420->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp420->f4);
                                v116 = eax421;
                                continue;
                            } else {
                                esp422 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp422->f0 = 0x805c091;
                                fun_80494bc(0, 2, esp422->f12, 6, esp422->f20, esp422->f24, esp422->f28, esp422->f32, esp422->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp422->f4);
                            }
                        }
                    }
                    v423 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v424) + (v71->f40 << 4) + 4);
                    if (v93 == 1) {
                        esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v423;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp425 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp425->f0 = 0x805c172;
                        eax426 = fun_8049a4c(0, 0, esp425->f12, esp425->f16, esp425->f20, esp425->f24, esp425->f28, esp425->f32, esp425->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp425->f4);
                        v116 = eax426;
                        continue;
                    } else {
                        if (v93 < 1) {
                            esp21->f16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v423;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp427 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp427->f0 = 0x805c11e;
                            eax428 = fun_8049a4c(0, 0, esp427->f12, esp427->f16, esp427->f20, esp427->f24, esp427->f28, esp427->f32, esp427->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp427->f4);
                            v116 = eax428;
                            continue;
                        } else {
                            if (v93 == 2) {
                                esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp21->f20 = v423;
                                esp21->f16 = v429;
                                esp21->f12 = v96;
                                esp21->f8 = v28;
                                esp21->f4 = v117;
                                esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                                esp430 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp430->f0 = 0x805c1d0;
                                eax431 = fun_8049a4c(0, 0, esp430->f12, esp430->f16, esp430->f20, esp430->f24, esp430->f28, esp430->f32, esp430->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp430->f4);
                                v116 = eax431;
                                continue;
                            } else {
                                esp432 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                                esp432->f0 = 0x805c1e0;
                                fun_80494bc(0, 2, esp432->f12, 6, esp432->f20, esp432->f24, esp432->f28, esp432->f32, esp432->f36);
                                esp21 = reinterpret_cast<struct s33*>(&esp432->f4);
                            }
                        }
                    }
                    v433 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v434) + (v71->f40 << 4) + 4);
                    if (v93 == 1) {
                        esp21->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp21->f16 = v433;
                        esp21->f12 = v96;
                        esp21->f8 = v28;
                        esp21->f4 = v117;
                        esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                        esp435 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                        esp435->f0 = 0x805c2c1;
                        eax436 = fun_8049a4c(0, 0, esp435->f12, esp435->f16, esp435->f20, esp435->f24, esp435->f28, esp435->f32, esp435->f36);
                        esp21 = reinterpret_cast<struct s33*>(&esp435->f4);
                        v116 = eax436;
                    } else {
                        if (v93 < 1) {
                            esp21->f16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f12 = v433;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp437 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp437->f0 = 0x805c26d;
                            eax438 = fun_8049a4c(0, 0, esp437->f12, esp437->f16, esp437->f20, esp437->f24, esp437->f28, esp437->f32, esp437->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp437->f4);
                            v116 = eax438;
                        } else {
                            if (v93 != 2) 
                                break;
                            esp21->f24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp21->f20 = v433;
                            esp21->f16 = v439;
                            esp21->f12 = v96;
                            esp21->f8 = v28;
                            esp21->f4 = v117;
                            esp21->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68));
                            esp440 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                            esp440->f0 = 0x805c31c;
                            eax441 = fun_8049a4c(0, 0, esp440->f12, esp440->f16, esp440->f20, esp440->f24, esp440->f28, esp440->f32, esp440->f36);
                            esp21 = reinterpret_cast<struct s33*>(&esp440->f4);
                            v116 = eax441;
                        }
                    }
                }
                esp442 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                esp442->f0 = 0x805c329;
                fun_80494bc(0, 2, esp442->f12, 6, esp442->f20, esp442->f24, esp442->f28, esp442->f32, esp442->f36);
                esp21 = reinterpret_cast<struct s33*>(&esp442->f4);
            }
            addr_805c397_82:
            *reinterpret_cast<void***>(v82 + 1) = reinterpret_cast<void**>(0);
            continue;
            addr_805c3b5_84:
            if (reinterpret_cast<signed char>(v67) < reinterpret_cast<signed char>(0)) {
                v443 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v443 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v67) + reinterpret_cast<unsigned char>(v67));
            }
            esp21->f4 = reinterpret_cast<void**>(12);
            esp21->f0 = v443;
            esp444 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
            esp444->f0 = 0x805c3ef;
            eax445 = xsum(0xffffffff, 12, esp444->f12, 6, esp444->f20, esp444->f24, esp444->f28, esp444->f32, esp444->f36);
            esp21 = reinterpret_cast<struct s33*>(&esp444->f4);
            if (reinterpret_cast<unsigned char>(eax445) <= reinterpret_cast<unsigned char>(v67)) 
                continue;
            if (!v67) {
                v446 = reinterpret_cast<void**>(12);
            } else {
                if (reinterpret_cast<signed char>(v67) < reinterpret_cast<signed char>(0)) {
                    v447 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v447 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v67) + reinterpret_cast<unsigned char>(v67));
                }
                v446 = v447;
            }
            v67 = v446;
            if (reinterpret_cast<unsigned char>(eax445) > reinterpret_cast<unsigned char>(v67)) {
                v67 = eax445;
            }
            if (v67 == 0xffffffff) 
                goto addr_805ca3f_66;
            if (v66 == v7 || !v66) {
                esp21->f0 = v67;
                esp448 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                esp448->f0 = 0x805c4b0;
                eax449 = malloc(12, 12, esp448->f12, 6, esp448->f20, esp448->f24, esp448->f28, esp448->f32, esp448->f36);
                esp21 = reinterpret_cast<struct s33*>(&esp448->f4);
                v450 = eax449;
            } else {
                esp21->f4 = v67;
                esp21->f0 = v66;
                esp451 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                esp451->f0 = 0x805c4d0;
                eax452 = fun_80495ac(0, 12, esp451->f12, 6, esp451->f20, esp451->f24, esp451->f28, esp451->f32, esp451->f36);
                esp21 = reinterpret_cast<struct s33*>(&esp451->f4);
                v450 = eax452;
            }
            if (!v450) 
                goto addr_805ca3f_66;
            if (v66 == v7 && v68) {
                esp21->f8 = v68;
                esp21->f4 = v66;
                esp21->f0 = v450;
                esp453 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                esp453->f0 = 0x805c51c;
                fun_804983c(esp453->f4, 0, 0, 6, esp453->f20, esp453->f24, esp453->f28, esp453->f32, esp453->f36);
                esp21 = reinterpret_cast<struct s33*>(&esp453->f4);
            }
            v66 = v450;
            continue;
            addr_805c5d4_93:
            if (v117 == 0x7fffffff) 
                goto addr_805c9c6_410;
            if (reinterpret_cast<signed char>(v67) < reinterpret_cast<signed char>(0)) {
                v454 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v454 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v67) + reinterpret_cast<unsigned char>(v67));
            }
            esp21->f4 = v115 + 2;
            esp21->f0 = v68;
            esp455 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
            esp455->f0 = 0x805c623;
            eax456 = xsum(0, 2, esp455->f12, 6, esp455->f20, esp455->f24, esp455->f28, esp455->f32, esp455->f36);
            esp457 = reinterpret_cast<struct s33*>(&esp455->f4);
            esp457->f4 = v454;
            esp457->f0 = eax456;
            esp458 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp457) - 4);
            esp458->f0 = 0x805c635;
            eax459 = xmax(esp458->f4, 0xffffffff, esp458->f12, 6, esp458->f20, esp458->f24, esp458->f28, esp458->f32, esp458->f36);
            esp21 = reinterpret_cast<struct s33*>(&esp458->f4);
            if (reinterpret_cast<unsigned char>(eax459) <= reinterpret_cast<unsigned char>(v67)) 
                continue;
            if (!v67) {
                v460 = reinterpret_cast<void**>(12);
            } else {
                if (reinterpret_cast<signed char>(v67) < reinterpret_cast<signed char>(0)) {
                    v461 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v461 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v67) + reinterpret_cast<unsigned char>(v67));
                }
                v460 = v461;
            }
            v67 = v460;
            if (reinterpret_cast<unsigned char>(eax459) > reinterpret_cast<unsigned char>(v67)) {
                v67 = eax459;
            }
            if (v67 == 0xffffffff) 
                goto addr_805ca3f_66;
            if (v66 == v7 || !v66) {
                esp21->f0 = v67;
                esp462 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                esp462->f0 = 0x805c6f6;
                eax463 = malloc(12, 0xffffffff, esp462->f12, 6, esp462->f20, esp462->f24, esp462->f28, esp462->f32, esp462->f36);
                esp21 = reinterpret_cast<struct s33*>(&esp462->f4);
                v464 = eax463;
            } else {
                esp21->f4 = v67;
                esp21->f0 = v66;
                esp465 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                esp465->f0 = 0x805c716;
                eax466 = fun_80495ac(0, 12, esp465->f12, 6, esp465->f20, esp465->f24, esp465->f28, esp465->f32, esp465->f36);
                esp21 = reinterpret_cast<struct s33*>(&esp465->f4);
                v464 = eax466;
            }
            if (!v464) 
                goto addr_805ca3f_66;
            if (v66 == v7 && v68) {
                esp21->f8 = v68;
                esp21->f4 = v66;
                esp21->f0 = v464;
                esp467 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
                esp467->f0 = 0x805c762;
                fun_804983c(esp467->f4, 0, 0, 6, esp467->f20, esp467->f24, esp467->f28, esp467->f32, esp467->f36);
                esp21 = reinterpret_cast<struct s33*>(&esp467->f4);
            }
            v66 = v464;
        }
    }
    addr_805c543_91:
    if (v66 != v7 && v66) {
        esp21->f0 = v66;
        esp468 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
        esp468->f0 = 0x805c568;
        free(0, 2, esp468->f12, 6, esp468->f20, esp468->f24, esp468->f28, esp468->f32, esp468->f36);
        esp21 = reinterpret_cast<struct s33*>(&esp468->f4);
    }
    if (v35) {
        esp21->f0 = v35;
        esp469 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
        esp469->f0 = 0x805c57f;
        free(esp469->f4, 2, esp469->f12, 6, esp469->f20, esp469->f24, esp469->f28, esp469->f32, esp469->f36);
        esp21 = reinterpret_cast<struct s33*>(&esp469->f4);
    }
    esp21->f0 = v470;
    esp471 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
    esp471->f0 = 0x805c58d;
    free(esp471->f4, 2, esp471->f12, 6, esp471->f20, esp471->f24, esp471->f28, esp471->f32, esp471->f36);
    esp77 = reinterpret_cast<struct s33*>(&esp471->f4);
    if (v472) {
        esp77->f0 = v473;
        esp474 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp77) - 4);
        esp474->f0 = 0x805c5a5;
        free(esp474->f4, 2, esp474->f12, 6, esp474->f20, esp474->f24, esp474->f28, esp474->f32, esp474->f36);
        esp77 = reinterpret_cast<struct s33*>(&esp474->f4);
        goto addr_805c5a5_24;
    }
    addr_805c7a1_115:
    esp21->f4 = reinterpret_cast<void**>(1);
    esp21->f0 = v68;
    esp475 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
    esp475->f0 = 0x805c7b7;
    eax476 = xsum(0, 1, esp475->f12, 6, esp475->f20, esp475->f24, esp475->f28, esp475->f32, esp475->f36);
    esp21 = reinterpret_cast<struct s33*>(&esp475->f4);
    if (reinterpret_cast<unsigned char>(eax476) <= reinterpret_cast<unsigned char>(v67)) {
        addr_805c904_436:
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v68)) = 0;
        if (v66 != v7 && (reinterpret_cast<unsigned char>(v68 + 1) < reinterpret_cast<unsigned char>(v67) && (esp21->f4 = v68 + 1, esp21->f0 = v66, esp477 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4), esp477->f0 = 0x805c94f, eax478 = fun_80495ac(0, 1, esp477->f12, 6, esp477->f20, esp477->f24, esp477->f28, esp477->f32, esp477->f36), esp21 = reinterpret_cast<struct s33*>(&esp477->f4), !!eax478))) {
            v66 = eax478;
        }
    } else {
        if (!v67) {
            v479 = reinterpret_cast<void**>(12);
        } else {
            if (reinterpret_cast<signed char>(v67) < reinterpret_cast<signed char>(0)) {
                v480 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v480 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v67) + reinterpret_cast<unsigned char>(v67));
            }
            v479 = v480;
        }
        v67 = v479;
        esp21->f4 = reinterpret_cast<void**>(1);
        esp21->f0 = v68;
        esp481 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
        esp481->f0 = 0x805c82a;
        eax482 = xsum(0, 1, esp481->f12, 6, esp481->f20, esp481->f24, esp481->f28, esp481->f32, esp481->f36);
        esp21 = reinterpret_cast<struct s33*>(&esp481->f4);
        if (reinterpret_cast<unsigned char>(eax482) > reinterpret_cast<unsigned char>(v67)) {
            esp21->f4 = reinterpret_cast<void**>(1);
            esp21->f0 = v68;
            esp483 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
            esp483->f0 = 0x805c848;
            eax484 = xsum(0, 1, esp483->f12, 6, esp483->f20, esp483->f24, esp483->f28, esp483->f32, esp483->f36);
            esp21 = reinterpret_cast<struct s33*>(&esp483->f4);
            v67 = eax484;
        }
        if (v67 == 0xffffffff) 
            goto addr_805ca3f_66; else 
            goto addr_805c867_447;
    }
    if (v35) {
        esp21->f0 = v35;
        esp485 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
        esp485->f0 = 0x805c981;
        free(esp485->f4, 1, esp485->f12, 6, esp485->f20, esp485->f24, esp485->f28, esp485->f32, esp485->f36);
        esp21 = reinterpret_cast<struct s33*>(&esp485->f4);
    }
    esp21->f0 = v486;
    esp487 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
    esp487->f0 = 0x805c98f;
    free(esp487->f4, 1, esp487->f12, 6, esp487->f20, esp487->f24, esp487->f28, esp487->f32, esp487->f36);
    esp13 = reinterpret_cast<struct s33*>(&esp487->f4);
    if (v488) {
        esp13->f0 = v489;
        esp490 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp13) - 4);
        esp490->f0 = 0x805c9a7;
        free(esp490->f4, 1, esp490->f12, 6, esp490->f20, esp490->f24, esp490->f28, esp490->f32, esp490->f36);
        esp13 = reinterpret_cast<struct s33*>(&esp490->f4);
        goto addr_805c9a7_22;
    }
    addr_805ca3f_66:
    if (v66 != v7 && v66) {
        esp21->f0 = v66;
        esp491 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
        esp491->f0 = 0x805ca64;
        free(0, 1, esp491->f12, 6, esp491->f20, esp491->f24, esp491->f28, esp491->f32, esp491->f36);
        esp21 = reinterpret_cast<struct s33*>(&esp491->f4);
    }
    if (v35) {
        esp21->f0 = v35;
        esp492 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
        esp492->f0 = 0x805ca7b;
        free(esp492->f4, 1, esp492->f12, 6, esp492->f20, esp492->f24, esp492->f28, esp492->f32, esp492->f36);
        esp21 = reinterpret_cast<struct s33*>(&esp492->f4);
        goto addr_805ca7b_5;
    }
    addr_805c867_447:
    if (v66 == v7 || !v66) {
        esp21->f0 = v67;
        esp493 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
        esp493->f0 = 0x805c88c;
        eax494 = malloc(12, 1, esp493->f12, 6, esp493->f20, esp493->f24, esp493->f28, esp493->f32, esp493->f36);
        esp21 = reinterpret_cast<struct s33*>(&esp493->f4);
        v495 = eax494;
    } else {
        esp21->f4 = v67;
        esp21->f0 = v66;
        esp496 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
        esp496->f0 = 0x805c8ac;
        eax497 = fun_80495ac(0, 12, esp496->f12, 6, esp496->f20, esp496->f24, esp496->f28, esp496->f32, esp496->f36);
        esp21 = reinterpret_cast<struct s33*>(&esp496->f4);
        v495 = eax497;
    }
    if (!v495) 
        goto addr_805ca3f_66;
    if (v66 == v7 && v68) {
        esp21->f8 = v68;
        esp21->f4 = v66;
        esp21->f0 = v495;
        esp498 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
        esp498->f0 = 0x805c8f8;
        fun_804983c(esp498->f4, 0, 0, 6, esp498->f20, esp498->f24, esp498->f28, esp498->f32, esp498->f36);
        esp21 = reinterpret_cast<struct s33*>(&esp498->f4);
    }
    v66 = v495;
    goto addr_805c904_436;
    addr_805c9c6_410:
    if (v66 != v7 && v66) {
        esp21->f0 = v66;
        esp499 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
        esp499->f0 = 0x805c9eb;
        free(0, 2, esp499->f12, 6, esp499->f20, esp499->f24, esp499->f28, esp499->f32, esp499->f36);
        esp21 = reinterpret_cast<struct s33*>(&esp499->f4);
    }
    if (v35) {
        esp21->f0 = v35;
        esp500 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
        esp500->f0 = 0x805ca02;
        free(esp500->f4, 2, esp500->f12, 6, esp500->f20, esp500->f24, esp500->f28, esp500->f32, esp500->f36);
        esp21 = reinterpret_cast<struct s33*>(&esp500->f4);
    }
    esp21->f0 = v501;
    esp502 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp21) - 4);
    esp502->f0 = 0x805ca10;
    free(esp502->f4, 2, esp502->f12, 6, esp502->f20, esp502->f24, esp502->f28, esp502->f32, esp502->f36);
    esp74 = reinterpret_cast<struct s33*>(&esp502->f4);
    if (v503) {
        esp74->f0 = v504;
        esp505 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(esp74) - 4);
        esp505->f0 = 0x805ca28;
        free(esp505->f4, 2, esp505->f12, 6, esp505->f20, esp505->f24, esp505->f28, esp505->f32, esp505->f36);
        esp74 = reinterpret_cast<struct s33*>(&esp505->f4);
        goto addr_805ca28_23;
    }
}

struct s42 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    uint32_t f8;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
    signed char[3] pad36;
    signed char f36;
    signed char[3] pad40;
    void** f40;
};

int32_t printf_fetchargs(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebp6;
    void** v7;
    void** ebx8;
    void** v9;
    void** v10;
    void** v11;
    void** edx12;
    void** edx13;
    void** edx14;
    void** edx15;
    void** edx16;
    void** edx17;
    void** edx18;
    void** edx19;
    void** edx20;
    void** edx21;
    void** edx22;
    void** edx23;
    void** edx24;
    void** edx25;
    void** edx26;
    void** edx27;
    void** edx28;
    void** ecx29;
    void** edx30;
    void** edx31;
    void** edx32;
    void** edx33;
    void** edx34;
    void** edx35;
    void** edx36;
    void** edx37;
    void** edx38;
    void** edx39;
    void** edx40;
    int32_t v41;
    void** v42;
    uint32_t eax43;
    struct s42* v44;
    void** v45;
    void** v46;
    void** v47;
    void** edx48;
    void** v49;
    void** v50;
    void** eax51;
    void** v52;
    void** v53;
    uint32_t eax54;
    uint32_t eax55;
    uint32_t eax56;
    uint32_t eax57;
    uint32_t eax58;
    uint32_t eax59;
    uint32_t eax60;
    uint32_t eax61;
    uint32_t eax62;
    uint32_t eax63;
    void** v64;
    uint32_t eax65;
    uint32_t eax66;
    uint32_t eax67;
    uint32_t eax68;
    uint32_t eax69;
    uint32_t eax70;
    uint32_t eax71;
    uint32_t v72;
    uint32_t eax73;
    uint32_t eax74;
    uint32_t eax75;
    void** v76;
    uint32_t eax77;
    uint32_t eax78;
    uint32_t eax79;
    uint32_t eax80;
    void** v81;
    uint32_t eax82;
    uint32_t eax83;
    uint32_t eax84;
    uint32_t eax85;
    uint32_t eax86;
    uint32_t eax87;
    uint32_t eax88;
    uint32_t eax89;
    uint32_t eax90;
    uint32_t ecx91;
    uint32_t eax92;
    uint32_t eax93;
    uint32_t eax94;
    uint32_t eax95;
    void** v96;
    void** v97;
    void** eax98;
    void** v99;
    void** eax100;
    void** v101;
    void** edx102;
    void** eax103;
    void** edx104;
    void** v105;
    uint32_t eax106;
    uint32_t eax107;
    uint32_t eax108;
    void** v109;
    void** v110;
    uint32_t eax111;
    uint32_t eax112;
    uint32_t eax113;
    void** v114;
    void*** edx115;
    void** eax116;
    void** v117;
    void** v118;
    void** eax119;
    void** v120;
    void** eax121;
    void** v122;
    void** edx123;
    void** eax124;
    void** edx125;
    void** v126;
    uint32_t eax127;
    uint32_t eax128;
    uint32_t eax129;
    void** v130;
    void** v131;
    uint32_t eax132;
    uint32_t eax133;
    uint32_t eax134;
    void** v135;
    void*** edx136;
    void** eax137;
    void** v138;
    void** v139;
    uint32_t eax140;
    uint32_t eax141;
    uint32_t eax142;
    void** v143;
    void*** edx144;
    void** eax145;
    void** edx146;
    void** v147;
    void** eax148;
    void** v149;
    void** eax150;
    void** v151;
    void** edx152;
    void** eax153;
    int32_t v154;
    void*** eax155;
    void*** eax156;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ebp6;
    v7 = ebx8;
    v9 = reinterpret_cast<void**>(0);
    v10 = *reinterpret_cast<void***>(a2 + 4);
    while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) > reinterpret_cast<unsigned char>(v9)) {
        v11 = *reinterpret_cast<void***>(v10);
        switch (v11) {
        case 1:
            edx12 = a1;
            a1 = edx12 + 4;
            edx13 = *reinterpret_cast<void***>(edx12);
            *reinterpret_cast<void***>(v10 + 4) = edx13;
            break;
        case 2:
            edx14 = a1;
            a1 = edx14 + 4;
            edx15 = *reinterpret_cast<void***>(edx14);
            *reinterpret_cast<void***>(v10 + 4) = edx15;
            break;
        case 3:
            edx16 = a1;
            a1 = edx16 + 4;
            edx17 = *reinterpret_cast<void***>(edx16);
            *reinterpret_cast<void***>(v10 + 4) = edx17;
            break;
        case 4:
            edx18 = a1;
            a1 = edx18 + 4;
            edx19 = *reinterpret_cast<void***>(edx18);
            *reinterpret_cast<void***>(v10 + 4) = edx19;
            break;
        case 5:
            edx20 = a1;
            a1 = edx20 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx20);
            break;
        case 6:
            edx21 = a1;
            a1 = edx21 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx21);
            break;
        case 7:
            edx22 = a1;
            a1 = edx22 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx22);
            break;
        case 8:
            edx23 = a1;
            a1 = edx23 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx23);
            break;
        case 9:
            edx24 = a1;
            a1 = edx24 + 8;
            edx25 = *reinterpret_cast<void***>(edx24 + 4);
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx24);
            *reinterpret_cast<void***>(v10 + 8) = edx25;
            break;
        case 10:
            edx26 = a1;
            a1 = edx26 + 8;
            edx27 = *reinterpret_cast<void***>(edx26 + 4);
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx26);
            *reinterpret_cast<void***>(v10 + 8) = edx27;
            break;
        case 11:
            a1 = a1 + 8;
            __asm__("fld qword [eax]");
            __asm__("fstp qword [eax+0x4]");
            break;
        case 12:
            edx28 = a1;
            a1 = edx28 + 12;
            ecx29 = *reinterpret_cast<void***>(edx28 + 8);
            edx30 = *reinterpret_cast<void***>(edx28 + 4);
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx28);
            *reinterpret_cast<void***>(v10 + 8) = edx30;
            *reinterpret_cast<void***>(v10 + 12) = ecx29;
            break;
        case 13:
            edx31 = a1;
            a1 = edx31 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx31);
            break;
        case 14:
            edx32 = a1;
            a1 = edx32 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx32);
            break;
        case 15:
            edx33 = a1;
            a1 = edx33 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx33);
            if (!*reinterpret_cast<void***>(v10 + 4)) {
                *reinterpret_cast<void***>(v10 + 4) = reinterpret_cast<void**>(0x80621fc);
                break;
            }
        case 16:
            edx34 = a1;
            a1 = edx34 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx34);
            if (!*reinterpret_cast<void***>(v10 + 4)) {
                *reinterpret_cast<void***>(v10 + 4) = reinterpret_cast<void**>(0x80621e0);
                break;
            }
        case 17:
            edx35 = a1;
            a1 = edx35 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx35);
            break;
        case 18:
            edx36 = a1;
            a1 = edx36 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx36);
            break;
        case 19:
            edx37 = a1;
            a1 = edx37 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx37);
            break;
        case 20:
            edx38 = a1;
            a1 = edx38 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx38);
            break;
        case 21:
            edx39 = a1;
            a1 = edx39 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx39);
            break;
        case 22:
            edx40 = a1;
            a1 = edx40 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx40);
        case 0:
            goto 0x805ce5a;
        }
        ++v9;
        v10 = v10 + 16;
    }
    v41 = 0;
    addr_805ce80_31:
    return v41;
    v41 = -1;
    goto addr_805ce80_31;
    while (1) {
        v42 = reinterpret_cast<void**>(0);
        while (1) {
            if (!v42) {
                addr_805db61_35:
                eax43 = *reinterpret_cast<unsigned char*>(&v7 + 3);
                v44->f36 = *reinterpret_cast<signed char*>(&eax43);
                v44->f4 = v9;
                *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a2) + 1;
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) >= reinterpret_cast<unsigned char>(v45)) {
                    if (reinterpret_cast<signed char>(v45) < reinterpret_cast<signed char>(0)) {
                        v46 = reinterpret_cast<void**>(0xffffffff);
                    } else {
                        v46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v45) + reinterpret_cast<unsigned char>(v45));
                    }
                    v45 = v46;
                    if (reinterpret_cast<unsigned char>(v45) > reinterpret_cast<unsigned char>(0x5d1745d)) {
                        v47 = reinterpret_cast<void**>(0xffffffff);
                    } else {
                        v47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v45) * 44);
                    }
                    if (v47 == 0xffffffff) 
                        goto addr_805dca0_43;
                    edx48 = *reinterpret_cast<void***>(a2 + 4);
                    v49 = v47;
                    v11 = edx48;
                    eax51 = fun_80495ac(v11, v49, v50, v45, v10, v9, v7, v5, v4);
                    if (!eax51) 
                        goto addr_805dca0_43;
                    *reinterpret_cast<void***>(a2 + 4) = eax51;
                }
            } else {
                v44->f40 = v52;
                if (!reinterpret_cast<int1_t>(v44->f40 == 0xffffffff)) 
                    goto addr_805da0c_47;
                v44->f40 = v10;
                ++v10;
                if (v44->f40 == 0xffffffff) 
                    goto addr_805dc59_49;
                addr_805da0c_47:
                v53 = v44->f40;
                if (reinterpret_cast<unsigned char>(v53) < reinterpret_cast<unsigned char>(v50)) 
                    goto addr_805db13_50; else 
                    goto addr_805da21_51;
            }
            do {
                eax54 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                if (!*reinterpret_cast<signed char*>(&eax54)) 
                    goto addr_805dc23_53;
                eax55 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                *reinterpret_cast<unsigned char*>(&v7 + 3) = *reinterpret_cast<unsigned char*>(&eax55);
                ++v9;
            } while (*reinterpret_cast<unsigned char*>(&v7 + 3) != 37);
            v52 = reinterpret_cast<void**>(0xffffffff);
            v44 = reinterpret_cast<struct s42*>(*reinterpret_cast<void***>(a2 + 4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) * 44);
            v44->f0 = v9 + 0xffffffff;
            v44->f8 = 0;
            v44->f12 = reinterpret_cast<void**>(0);
            v44->f16 = reinterpret_cast<void**>(0);
            v44->f20 = reinterpret_cast<void**>(0xffffffff);
            v44->f24 = reinterpret_cast<void**>(0);
            v44->f28 = reinterpret_cast<void**>(0);
            v44->f32 = reinterpret_cast<void**>(0xffffffff);
            v44->f40 = reinterpret_cast<void**>(0xffffffff);
            eax56 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
            if (*reinterpret_cast<signed char*>(&eax56) <= 47 || (eax57 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), *reinterpret_cast<signed char*>(&eax57) > 57)) {
                while (1) {
                    addr_805d07c_56:
                    eax58 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                    if (*reinterpret_cast<signed char*>(&eax58) != 39) {
                        eax59 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                        if (*reinterpret_cast<signed char*>(&eax59) != 45) {
                            eax60 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                            if (*reinterpret_cast<signed char*>(&eax60) != 43) {
                                eax61 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                                if (*reinterpret_cast<signed char*>(&eax61) != 32) {
                                    eax62 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                                    if (*reinterpret_cast<signed char*>(&eax62) != 35) {
                                        eax63 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                                        if (*reinterpret_cast<signed char*>(&eax63) != 48) 
                                            break;
                                        v44->f8 = v44->f8 | 32;
                                        ++v9;
                                    } else {
                                        v44->f8 = v44->f8 | 16;
                                        ++v9;
                                    }
                                } else {
                                    v44->f8 = v44->f8 | 8;
                                    ++v9;
                                }
                            } else {
                                v44->f8 = v44->f8 | 4;
                                ++v9;
                            }
                        } else {
                            v44->f8 = v44->f8 | 2;
                            ++v9;
                        }
                    } else {
                        v44->f8 = v44->f8 | 1;
                        ++v9;
                    }
                }
            } else {
                v64 = v9;
                while ((eax65 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v64)), *reinterpret_cast<signed char*>(&eax65) > 47) && (eax66 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v64)), *reinterpret_cast<signed char*>(&eax66) <= 57)) {
                    ++v64;
                }
                eax67 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v64));
                if (*reinterpret_cast<signed char*>(&eax67) != 36) 
                    goto addr_805d07c_56; else 
                    goto addr_805cfda_72;
            }
            eax68 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
            if (*reinterpret_cast<signed char*>(&eax68) != 42) {
                eax69 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                if (*reinterpret_cast<signed char*>(&eax69) <= 47 || (eax70 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), *reinterpret_cast<signed char*>(&eax70) > 57)) {
                    addr_805d453_75:
                    eax71 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                    if (*reinterpret_cast<signed char*>(&eax71) != 46) {
                        addr_805d75c_76:
                        v72 = 0;
                    } else {
                        ++v9;
                        eax73 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                        if (*reinterpret_cast<signed char*>(&eax73) != 42) {
                            v44->f24 = v9 + 0xffffffff;
                            while ((eax74 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), *reinterpret_cast<signed char*>(&eax74) > 47) && (eax75 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), *reinterpret_cast<signed char*>(&eax75) <= 57)) {
                                ++v9;
                            }
                            v44->f28 = v9;
                            v76 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v44->f28) - reinterpret_cast<unsigned char>(v44->f24));
                            if (reinterpret_cast<unsigned char>(v11) >= reinterpret_cast<unsigned char>(v76)) 
                                goto addr_805d75c_76; else 
                                goto addr_805d756_82;
                        } else {
                            v44->f24 = v9 + 0xffffffff;
                            ++v9;
                            v44->f28 = v9;
                            if (reinterpret_cast<unsigned char>(v11) <= reinterpret_cast<unsigned char>(1)) {
                                v11 = reinterpret_cast<void**>(2);
                            }
                            eax77 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                            if (*reinterpret_cast<signed char*>(&eax77) <= 47) 
                                goto addr_805d588_86;
                            eax78 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                            if (*reinterpret_cast<signed char*>(&eax78) > 57) 
                                goto addr_805d588_86; else 
                                goto addr_805d4b5_88;
                        }
                    }
                } else {
                    v44->f12 = v9;
                    while ((eax79 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), *reinterpret_cast<signed char*>(&eax79) > 47) && (eax80 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), *reinterpret_cast<signed char*>(&eax80) <= 57)) {
                        ++v9;
                    }
                    v44->f16 = v9;
                    v81 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v44->f16) - reinterpret_cast<unsigned char>(v44->f12));
                    if (reinterpret_cast<unsigned char>(v49) >= reinterpret_cast<unsigned char>(v81)) 
                        goto addr_805d453_75; else 
                        goto addr_805d44d_93;
                }
            } else {
                v44->f12 = v9;
                ++v9;
                v44->f16 = v9;
                if (!v49) {
                    v49 = reinterpret_cast<void**>(1);
                }
                eax82 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                if (*reinterpret_cast<signed char*>(&eax82) <= 47) 
                    goto addr_805d26b_97;
                eax83 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                if (*reinterpret_cast<signed char*>(&eax83) > 57) 
                    goto addr_805d26b_97; else 
                    goto addr_805d198_99;
            }
            while (1) {
                eax84 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                if (*reinterpret_cast<signed char*>(&eax84) != 0x68) {
                    eax85 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                    if (*reinterpret_cast<signed char*>(&eax85) != 76) {
                        eax86 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                        if (*reinterpret_cast<signed char*>(&eax86) != 0x6c) {
                            eax87 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                            if (*reinterpret_cast<signed char*>(&eax87) != 0x6a) {
                                eax88 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                                if (*reinterpret_cast<signed char*>(&eax88) == 0x7a || (eax89 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), *reinterpret_cast<signed char*>(&eax89) == 90)) {
                                    ++v9;
                                } else {
                                    eax90 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                                    if (*reinterpret_cast<signed char*>(&eax90) != 0x74) 
                                        break;
                                    ++v9;
                                }
                            } else {
                                v72 = v72 + 16;
                                ++v9;
                            }
                        } else {
                            v72 = v72 + 8;
                            ++v9;
                        }
                    } else {
                        v72 = v72 | 4;
                        ++v9;
                    }
                } else {
                    ecx91 = v72 & 1;
                    v72 = v72 | 1 << *reinterpret_cast<unsigned char*>(&ecx91);
                    ++v9;
                }
            }
            eax92 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
            *reinterpret_cast<unsigned char*>(&v7 + 3) = *reinterpret_cast<unsigned char*>(&eax92);
            ++v9;
            switch (*reinterpret_cast<signed char*>(&v7 + 3) - 37) {
            case 28:
            case 32:
            case 33:
            case 34:
            case 60:
            case 64:
            case 65:
            case 66:
                if (reinterpret_cast<int32_t>(v72) > reinterpret_cast<int32_t>(15) || v72 & 4) {
                    v42 = reinterpret_cast<void**>(12);
                    continue;
                } else {
                    v42 = reinterpret_cast<void**>(11);
                    continue;
                }
            case 30:
                v42 = reinterpret_cast<void**>(14);
                *reinterpret_cast<unsigned char*>(&v7 + 3) = 99;
                continue;
            case 46:
                v42 = reinterpret_cast<void**>(16);
                *reinterpret_cast<unsigned char*>(&v7 + 3) = 0x73;
                continue;
            case 51:
            case 74:
            case 80:
            case 83:
                if (reinterpret_cast<int32_t>(v72) > reinterpret_cast<int32_t>(15) || v72 & 4) {
                    v42 = reinterpret_cast<void**>(10);
                    continue;
                } else {
                    if (reinterpret_cast<int32_t>(v72) <= reinterpret_cast<int32_t>(7)) {
                        if (!(v72 & 2)) {
                            eax93 = v72 & 1;
                            if (!*reinterpret_cast<signed char*>(&eax93)) {
                                v42 = reinterpret_cast<void**>(6);
                                continue;
                            } else {
                                v42 = reinterpret_cast<void**>(4);
                                continue;
                            }
                        } else {
                            v42 = reinterpret_cast<void**>(2);
                            continue;
                        }
                    } else {
                        v42 = reinterpret_cast<void**>(8);
                        continue;
                    }
                }
            case 62:
                if (reinterpret_cast<int32_t>(v72) <= reinterpret_cast<int32_t>(7)) {
                    v42 = reinterpret_cast<void**>(13);
                    continue;
                } else {
                    v42 = reinterpret_cast<void**>(14);
                    continue;
                }
            case 63:
            case 68:
                if (reinterpret_cast<int32_t>(v72) > reinterpret_cast<int32_t>(15) || v72 & 4) {
                    v42 = reinterpret_cast<void**>(9);
                    continue;
                } else {
                    if (reinterpret_cast<int32_t>(v72) <= reinterpret_cast<int32_t>(7)) {
                        if (!(v72 & 2)) {
                            eax94 = v72 & 1;
                            if (!*reinterpret_cast<signed char*>(&eax94)) {
                                v42 = reinterpret_cast<void**>(5);
                                continue;
                            } else {
                                v42 = reinterpret_cast<void**>(3);
                                continue;
                            }
                        } else {
                            v42 = reinterpret_cast<void**>(1);
                            continue;
                        }
                    } else {
                        v42 = reinterpret_cast<void**>(7);
                        continue;
                    }
                }
            case 73:
                if (reinterpret_cast<int32_t>(v72) > reinterpret_cast<int32_t>(15) || v72 & 4) {
                    v42 = reinterpret_cast<void**>(22);
                    continue;
                } else {
                    if (reinterpret_cast<int32_t>(v72) <= reinterpret_cast<int32_t>(7)) {
                        if (!(v72 & 2)) {
                            eax95 = v72 & 1;
                            if (!*reinterpret_cast<signed char*>(&eax95)) {
                                v42 = reinterpret_cast<void**>(20);
                                continue;
                            } else {
                                v42 = reinterpret_cast<void**>(19);
                                continue;
                            }
                        } else {
                            v42 = reinterpret_cast<void**>(18);
                            continue;
                        }
                    } else {
                        v42 = reinterpret_cast<void**>(21);
                        continue;
                    }
                }
            case 75:
                v42 = reinterpret_cast<void**>(17);
                continue;
            case 78:
                if (reinterpret_cast<int32_t>(v72) <= reinterpret_cast<int32_t>(7)) {
                    v42 = reinterpret_cast<void**>(15);
                    continue;
                } else {
                    v42 = reinterpret_cast<void**>(16);
                    continue;
                }
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 29:
            case 31:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 47:
            case 48:
            case 49:
            case 50:
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
            case 58:
            case 59:
            case 61:
            case 67:
            case 69:
            case 70:
            case 71:
            case 72:
            case 76:
            case 77:
            case 79:
            case 81:
            case 82:
                goto 0x805dc59;
            case 0:
                goto 0x805d9cb;
            }
            addr_805d756_82:
            v11 = v76;
            goto addr_805d75c_76;
            addr_805d588_86:
            if (!reinterpret_cast<int1_t>(v44->f32 == 0xffffffff)) 
                goto addr_805d5af_153;
            v44->f32 = v10;
            ++v10;
            if (v44->f32 == 0xffffffff) 
                goto addr_805dc59_49;
            addr_805d5af_153:
            v96 = v44->f32;
            if (reinterpret_cast<unsigned char>(v96) >= reinterpret_cast<unsigned char>(v50)) {
                if (reinterpret_cast<signed char>(v50) < reinterpret_cast<signed char>(0)) {
                    v97 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v97 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v50) + reinterpret_cast<unsigned char>(v50));
                }
                v50 = v97;
                if (reinterpret_cast<unsigned char>(v50) <= reinterpret_cast<unsigned char>(v96)) {
                    v49 = reinterpret_cast<void**>(1);
                    v11 = v96;
                    eax98 = xsum(v11, 1);
                    v50 = eax98;
                }
                if (reinterpret_cast<unsigned char>(v50) > reinterpret_cast<unsigned char>(0xfffffff)) {
                    v99 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v99 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v50) << 4);
                }
                if (v99 == 0xffffffff) 
                    goto addr_805dca0_43;
                if (!*reinterpret_cast<void***>(a3 + 4)) {
                    v11 = v99;
                    v52 = reinterpret_cast<void**>(0x805d671);
                    eax100 = malloc(v11, v49, v50, v45, v10, v9, v7, v5, v4);
                    v101 = eax100;
                } else {
                    edx102 = *reinterpret_cast<void***>(a3 + 4);
                    v49 = v99;
                    v11 = edx102;
                    v52 = reinterpret_cast<void**>(0x805d65e);
                    eax103 = fun_80495ac(v11, v49, v50, v45, v10, v9, v7, v5, v4);
                    v101 = eax103;
                }
                if (!v101) 
                    goto addr_805dca0_43;
                *reinterpret_cast<void***>(a3 + 4) = v101;
            }
            while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) <= reinterpret_cast<unsigned char>(v96)) {
                edx104 = *reinterpret_cast<void***>(a3);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(edx104) << 4)) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a3) = edx104 + 1;
            }
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v96) << 4))) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v96) << 4)) == 5)) 
                    goto addr_805dc59_49;
                goto addr_805d75c_76;
            } else {
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v96) << 4)) = reinterpret_cast<void**>(5);
                goto addr_805d75c_76;
            }
            addr_805d4b5_88:
            v105 = v9;
            while ((eax106 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v105)), *reinterpret_cast<signed char*>(&eax106) > 47) && (eax107 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v105)), *reinterpret_cast<signed char*>(&eax107) <= 57)) {
                ++v105;
            }
            eax108 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v105));
            if (*reinterpret_cast<signed char*>(&eax108) != 36) 
                goto addr_805d588_86;
            v109 = reinterpret_cast<void**>(0);
            v110 = v9;
            while ((eax111 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v110)), *reinterpret_cast<signed char*>(&eax111) > 47) && (eax112 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v110)), *reinterpret_cast<signed char*>(&eax112) <= 57)) {
                eax113 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v110));
                if (reinterpret_cast<unsigned char>(v109) > reinterpret_cast<unsigned char>(0x19999999)) {
                    v114 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    edx115 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v109) << 2) + reinterpret_cast<unsigned char>(v109));
                    v114 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx115) + reinterpret_cast<uint32_t>(edx115));
                }
                v49 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax113) - 48);
                v11 = v114;
                v52 = reinterpret_cast<void**>(0x805d544);
                eax116 = xsum(v11, v49);
                v109 = eax116;
                ++v110;
            }
            if (!v109) 
                goto addr_805dc59_49;
            if (v109 == 0xffffffff) 
                goto addr_805dc59_49;
            v44->f32 = v109 + 0xffffffff;
            v9 = v110 + 1;
            goto addr_805d588_86;
            addr_805d44d_93:
            v49 = v81;
            goto addr_805d453_75;
            addr_805d26b_97:
            if (!reinterpret_cast<int1_t>(v44->f20 == 0xffffffff)) 
                goto addr_805d292_187;
            v44->f20 = v10;
            ++v10;
            if (v44->f20 == 0xffffffff) 
                goto addr_805dc59_49;
            addr_805d292_187:
            v117 = v44->f20;
            if (reinterpret_cast<unsigned char>(v117) >= reinterpret_cast<unsigned char>(v50)) {
                if (reinterpret_cast<signed char>(v50) < reinterpret_cast<signed char>(0)) {
                    v118 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v118 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v50) + reinterpret_cast<unsigned char>(v50));
                }
                v50 = v118;
                if (reinterpret_cast<unsigned char>(v50) <= reinterpret_cast<unsigned char>(v117)) {
                    v49 = reinterpret_cast<void**>(1);
                    v11 = v117;
                    eax119 = xsum(v11, 1);
                    v50 = eax119;
                }
                if (reinterpret_cast<unsigned char>(v50) > reinterpret_cast<unsigned char>(0xfffffff)) {
                    v120 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v120 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v50) << 4);
                }
                if (v120 == 0xffffffff) 
                    goto addr_805dca0_43;
                if (!*reinterpret_cast<void***>(a3 + 4)) {
                    v11 = v120;
                    v52 = reinterpret_cast<void**>(0x805d354);
                    eax121 = malloc(v11, v49, v50, v45, v10, v9, v7, v5, v4);
                    v122 = eax121;
                } else {
                    edx123 = *reinterpret_cast<void***>(a3 + 4);
                    v49 = v120;
                    v11 = edx123;
                    v52 = reinterpret_cast<void**>(0x805d341);
                    eax124 = fun_80495ac(v11, v49, v50, v45, v10, v9, v7, v5, v4);
                    v122 = eax124;
                }
                if (!v122) 
                    goto addr_805dca0_43;
                *reinterpret_cast<void***>(a3 + 4) = v122;
            }
            while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) <= reinterpret_cast<unsigned char>(v117)) {
                edx125 = *reinterpret_cast<void***>(a3);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(edx125) << 4)) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a3) = edx125 + 1;
            }
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v117) << 4))) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v117) << 4)) == 5)) 
                    goto addr_805dc59_49;
                goto addr_805d453_75;
            } else {
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v117) << 4)) = reinterpret_cast<void**>(5);
                goto addr_805d453_75;
            }
            addr_805d198_99:
            v126 = v9;
            while ((eax127 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v126)), *reinterpret_cast<signed char*>(&eax127) > 47) && (eax128 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v126)), *reinterpret_cast<signed char*>(&eax128) <= 57)) {
                ++v126;
            }
            eax129 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v126));
            if (*reinterpret_cast<signed char*>(&eax129) != 36) 
                goto addr_805d26b_97;
            v130 = reinterpret_cast<void**>(0);
            v131 = v9;
            while ((eax132 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v131)), *reinterpret_cast<signed char*>(&eax132) > 47) && (eax133 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v131)), *reinterpret_cast<signed char*>(&eax133) <= 57)) {
                eax134 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v131));
                if (reinterpret_cast<unsigned char>(v130) > reinterpret_cast<unsigned char>(0x19999999)) {
                    v135 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    edx136 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v130) << 2) + reinterpret_cast<unsigned char>(v130));
                    v135 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx136) + reinterpret_cast<uint32_t>(edx136));
                }
                v49 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax134) - 48);
                v11 = v135;
                v52 = reinterpret_cast<void**>(0x805d227);
                eax137 = xsum(v11, v49);
                v130 = eax137;
                ++v131;
            }
            if (!v130) 
                goto addr_805dc59_49;
            if (v130 == 0xffffffff) 
                goto addr_805dc59_49;
            v44->f20 = v130 + 0xffffffff;
            v9 = v131 + 1;
            goto addr_805d26b_97;
            addr_805cfda_72:
            v138 = reinterpret_cast<void**>(0);
            v139 = v9;
            while ((eax140 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v139)), *reinterpret_cast<signed char*>(&eax140) > 47) && (eax141 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v139)), *reinterpret_cast<signed char*>(&eax141) <= 57)) {
                eax142 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v139));
                if (reinterpret_cast<unsigned char>(v138) > reinterpret_cast<unsigned char>(0x19999999)) {
                    v143 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    edx144 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v138) << 2) + reinterpret_cast<unsigned char>(v138));
                    v143 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx144) + reinterpret_cast<uint32_t>(edx144));
                }
                v49 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax142) - 48);
                v11 = v143;
                eax145 = xsum(v11, v49);
                v138 = eax145;
                ++v139;
            }
            if (!v138) 
                goto addr_805dc59_49;
            if (v138 == 0xffffffff) 
                goto addr_805dc59_49;
            v52 = v138 - 1;
            v9 = v139 + 1;
            goto addr_805d07c_56;
            addr_805db13_50:
            while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) <= reinterpret_cast<unsigned char>(v53)) {
                edx146 = *reinterpret_cast<void***>(a3);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(edx146) << 4)) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a3) = edx146 + 1;
            }
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v53) << 4))) {
                if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v53) << 4)) != v42) 
                    goto addr_805dc59_49; else 
                    goto addr_805db61_35;
            } else {
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v53) << 4)) = v42;
                goto addr_805db61_35;
            }
            addr_805da21_51:
            if (reinterpret_cast<signed char>(v50) < reinterpret_cast<signed char>(0)) {
                v147 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v147 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v50) + reinterpret_cast<unsigned char>(v50));
            }
            v50 = v147;
            if (reinterpret_cast<unsigned char>(v50) <= reinterpret_cast<unsigned char>(v53)) {
                v49 = reinterpret_cast<void**>(1);
                v11 = v53;
                eax148 = xsum(v11, 1);
                v50 = eax148;
            }
            if (reinterpret_cast<unsigned char>(v50) > reinterpret_cast<unsigned char>(0xfffffff)) {
                v149 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v149 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v50) << 4);
            }
            if (v149 == 0xffffffff) 
                goto addr_805dca0_43;
            if (!*reinterpret_cast<void***>(a3 + 4)) {
                v11 = v149;
                eax150 = malloc(v11, v49, v50, v45, v10, v9, v7, v5, v4);
                v151 = eax150;
            } else {
                edx152 = *reinterpret_cast<void***>(a3 + 4);
                v49 = v149;
                v11 = edx152;
                eax153 = fun_80495ac(v11, v49, v50, v45, v10, v9, v7, v5, v4);
                v151 = eax153;
            }
            if (!v151) 
                goto addr_805dca0_43;
            *reinterpret_cast<void***>(a3 + 4) = v151;
            goto addr_805db13_50;
        }
    }
    addr_805dc23_53:
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2 + 4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) * 44) = v9;
    *reinterpret_cast<void***>(a2 + 8) = v49;
    *reinterpret_cast<void***>(a2 + 12) = v11;
    v154 = 0;
    addr_805dce5_246:
    return v154;
    addr_805dc59_49:
    if (*reinterpret_cast<void***>(a3 + 4)) {
        v11 = *reinterpret_cast<void***>(a3 + 4);
        free(v11, v49, v50, v45, v10, v9, v7, v5, v4);
    }
    if (*reinterpret_cast<void***>(a2 + 4)) {
        v11 = *reinterpret_cast<void***>(a2 + 4);
        free(v11, v49, v50, v45, v10, v9, v7, v5, v4);
    }
    eax155 = fun_80494cc(v11, v49, v50, v45, v10, v9, v7, v5, v4);
    *eax155 = reinterpret_cast<void**>(22);
    v154 = -1;
    goto addr_805dce5_246;
    addr_805dca0_43:
    if (*reinterpret_cast<void***>(a3 + 4)) {
        v11 = *reinterpret_cast<void***>(a3 + 4);
        free(v11, v49, v50, v45, v10, v9, v7, v5, v4);
    }
    if (*reinterpret_cast<void***>(a2 + 4)) {
        v11 = *reinterpret_cast<void***>(a2 + 4);
        free(v11, v49, v50, v45, v10, v9, v7, v5, v4);
    }
    eax156 = fun_80494cc(v11, v49, v50, v45, v10, v9, v7, v5, v4);
    *eax156 = reinterpret_cast<void**>(12);
    v154 = -1;
    goto addr_805dce5_246;
}

int32_t __signbitl = 0x80498f2;

int32_t fun_80498ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    goto __signbitl;
}

int32_t snprintf = 0x8049a52;

void** fun_8049a4c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    goto snprintf;
}

void** xmax(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;

    v10 = a1;
    if (reinterpret_cast<unsigned char>(v10) < reinterpret_cast<unsigned char>(a2)) {
        v10 = a2;
    }
    return v10;
}

int32_t __do_global_dtors_aux();

struct s43 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_805e4b8(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s43* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

int32_t ferror_unlocked = 0x8049692;

int32_t fun_804968c(void** a1) {
    goto ferror_unlocked;
}

int32_t opendir = 0x8049782;

void** fun_804977c(void** a1) {
    goto opendir;
}

int32_t fclose = 0x80497e2;

int32_t fun_80497dc(void** a1) {
    goto fclose;
}

void** version_etc_va(void** a1, void** a2, void** a3, void** a4, void** a5);

void** version_etc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;

    eax8 = version_etc_va(a1, a2, a3, a4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 24);
    return eax8;
}

int32_t fnmatch = 0x8049a12;

int32_t fun_8049a0c(void** a1, void** a2, int32_t a3) {
    goto fnmatch;
}

unsigned char is_directory(void** a1, void** a2, void** a3) {
    int32_t v4;
    uint32_t eax5;

    if (*reinterpret_cast<void***>(a1 + 0x68) == 3 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a1 + 0x68) == 9)) {
        v4 = 1;
    } else {
        v4 = 0;
    }
    eax5 = *reinterpret_cast<unsigned char*>(&v4);
    return *reinterpret_cast<unsigned char*>(&eax5);
}

int32_t timespec_cmp(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v5;
    int32_t v6;

    if (a1 < a3) {
        v5 = -1;
    } else {
        if (a1 > a3) {
            v6 = 1;
        } else {
            v6 = a2 - a4;
        }
        v5 = v6;
    }
    return v5;
}

int32_t strverscmp = 0x8049772;

int32_t fun_804976c(void** a1, void** a2) {
    goto strverscmp;
}

uint32_t ftypelet(void** a1) {
    unsigned char v2;

    if ((reinterpret_cast<unsigned char>(a1) & 0xf000) != 0x8000) {
        if ((reinterpret_cast<unsigned char>(a1) & 0xf000) != 0x4000) {
            if ((reinterpret_cast<unsigned char>(a1) & 0xf000) != 0x6000) {
                if ((reinterpret_cast<unsigned char>(a1) & 0xf000) != 0x2000) {
                    if ((reinterpret_cast<unsigned char>(a1) & 0xf000) != 0xa000) {
                        if ((reinterpret_cast<unsigned char>(a1) & 0xf000) != 0x1000) {
                            if ((reinterpret_cast<unsigned char>(a1) & 0xf000) != 0xc000) {
                                v2 = 63;
                            } else {
                                v2 = 0x73;
                            }
                        } else {
                            v2 = 0x70;
                        }
                    } else {
                        v2 = 0x6c;
                    }
                } else {
                    v2 = 99;
                }
            } else {
                v2 = 98;
            }
        } else {
            v2 = 100;
        }
    } else {
        v2 = 45;
    }
    return static_cast<uint32_t>(v2);
}

int32_t toupper = 0x8049642;

signed char fun_804963c(uint32_t a1) {
    goto toupper;
}

int32_t __fpending = 0x8049972;

int32_t fun_804996c(void** a1) {
    goto __fpending;
}

void** hash_get_n_buckets_used(void** a1) {
    return *reinterpret_cast<void***>(a1 + 12);
}

void** hash_get_n_buckets(void** a1) {
    return *reinterpret_cast<void***>(a1 + 8);
}

int32_t tolower = 0x8049a92;

signed char fun_8049a8c(uint32_t a1) {
    goto tolower;
}

struct s44 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    uint32_t f8;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
    signed char[3] pad36;
    signed char f36;
    signed char[3] pad40;
    void** f40;
};

int32_t printf_parse(void** a1, struct s32* a2, void** a3) {
    void** v4;
    void** v5;
    void* v6;
    void* v7;
    uint32_t v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void*** eax27;
    int32_t v28;
    void** v29;
    uint32_t eax30;
    uint32_t eax31;
    void** v32;
    struct s44* v33;
    uint32_t eax34;
    uint32_t eax35;
    uint32_t eax36;
    uint32_t eax37;
    uint32_t eax38;
    uint32_t eax39;
    uint32_t eax40;
    uint32_t eax41;
    void** v42;
    uint32_t eax43;
    uint32_t eax44;
    uint32_t eax45;
    uint32_t eax46;
    uint32_t eax47;
    uint32_t eax48;
    uint32_t eax49;
    uint32_t v50;
    uint32_t eax51;
    uint32_t eax52;
    uint32_t eax53;
    void* v54;
    uint32_t eax55;
    uint32_t eax56;
    uint32_t eax57;
    uint32_t eax58;
    void* v59;
    uint32_t eax60;
    uint32_t eax61;
    uint32_t eax62;
    uint32_t eax63;
    uint32_t eax64;
    uint32_t eax65;
    uint32_t eax66;
    uint32_t eax67;
    uint32_t eax68;
    uint32_t ecx69;
    uint32_t eax70;
    unsigned char v71;
    void** v72;
    uint32_t eax73;
    uint32_t eax74;
    uint32_t eax75;
    uint32_t eax76;
    void** v77;
    uint32_t v78;
    void** v79;
    void** edx80;
    void** v81;
    void** eax82;
    void** edx83;
    void** v84;
    void** eax85;
    void** v86;
    void** v87;
    void** eax88;
    void** v89;
    void** edx90;
    void** v91;
    void** eax92;
    void** v93;
    void** v94;
    void** eax95;
    void** v96;
    void** v97;
    void** eax98;
    void** v99;
    void** edx100;
    void** v101;
    void** eax102;
    void** edx103;
    void** v104;
    uint32_t eax105;
    uint32_t eax106;
    uint32_t eax107;
    void** v108;
    void** v109;
    uint32_t eax110;
    uint32_t eax111;
    uint32_t eax112;
    void** v113;
    void*** edx114;
    void** eax115;
    void** v116;
    void** eax117;
    void** v118;
    void** v119;
    void** eax120;
    void** v121;
    void** edx122;
    void** v123;
    void** eax124;
    void** edx125;
    void** v126;
    uint32_t eax127;
    uint32_t eax128;
    uint32_t eax129;
    void** v130;
    void** v131;
    uint32_t eax132;
    uint32_t eax133;
    uint32_t eax134;
    void*** edx135;
    void** eax136;
    void** v137;
    void** v138;
    uint32_t eax139;
    uint32_t eax140;
    uint32_t eax141;
    void*** edx142;
    void** eax143;
    void** v144;
    void** v145;
    void** v146;
    void*** eax147;
    void** v148;
    void** v149;

    v4 = a1;
    v5 = reinterpret_cast<void**>(0);
    v6 = reinterpret_cast<void*>(0);
    v7 = reinterpret_cast<void*>(0);
    a2->f0 = 0;
    v8 = 1;
    v9 = reinterpret_cast<void**>(44);
    eax18 = malloc(44, v10, v11, v12, v13, v14, v15, v16, v17);
    a2->f4 = eax18;
    if (!a2->f4) {
        addr_805dcd0_2:
        eax27 = fun_80494cc(v9, v19, v20, v21, v22, v23, v24, v25, v26);
        *eax27 = reinterpret_cast<void**>(12);
        v28 = -1;
    } else {
        *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(0);
        v29 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a3 + 4) = reinterpret_cast<void**>(0);
        while (eax30 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), !!*reinterpret_cast<signed char*>(&eax30)) {
            eax31 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
            ++v4;
            if (*reinterpret_cast<signed char*>(&eax31) != 37) 
                continue;
            v32 = reinterpret_cast<void**>(0xffffffff);
            v33 = reinterpret_cast<struct s44*>(a2->f4 + a2->f0 * 44);
            v33->f0 = v4 + 0xffffffff;
            v33->f8 = 0;
            v33->f12 = reinterpret_cast<void**>(0);
            v33->f16 = reinterpret_cast<void**>(0);
            v33->f20 = reinterpret_cast<void**>(0xffffffff);
            v33->f24 = reinterpret_cast<void**>(0);
            v33->f28 = reinterpret_cast<void**>(0);
            v33->f32 = reinterpret_cast<void**>(0xffffffff);
            v33->f40 = reinterpret_cast<void**>(0xffffffff);
            eax34 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
            if (*reinterpret_cast<signed char*>(&eax34) <= 47 || (eax35 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax35) > 57)) {
                while (1) {
                    addr_805d07c_7:
                    eax36 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                    if (*reinterpret_cast<signed char*>(&eax36) != 39) {
                        eax37 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                        if (*reinterpret_cast<signed char*>(&eax37) != 45) {
                            eax38 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                            if (*reinterpret_cast<signed char*>(&eax38) != 43) {
                                eax39 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                                if (*reinterpret_cast<signed char*>(&eax39) != 32) {
                                    eax40 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                                    if (*reinterpret_cast<signed char*>(&eax40) != 35) {
                                        eax41 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                                        if (*reinterpret_cast<signed char*>(&eax41) != 48) 
                                            break;
                                        v33->f8 = v33->f8 | 32;
                                        ++v4;
                                    } else {
                                        v33->f8 = v33->f8 | 16;
                                        ++v4;
                                    }
                                } else {
                                    v33->f8 = v33->f8 | 8;
                                    ++v4;
                                }
                            } else {
                                v33->f8 = v33->f8 | 4;
                                ++v4;
                            }
                        } else {
                            v33->f8 = v33->f8 | 2;
                            ++v4;
                        }
                    } else {
                        v33->f8 = v33->f8 | 1;
                        ++v4;
                    }
                }
            } else {
                v42 = v4;
                while ((eax43 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v42)), *reinterpret_cast<signed char*>(&eax43) > 47) && (eax44 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v42)), *reinterpret_cast<signed char*>(&eax44) <= 57)) {
                    ++v42;
                }
                eax45 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v42));
                if (*reinterpret_cast<signed char*>(&eax45) != 36) 
                    goto addr_805d07c_7; else 
                    goto addr_805cfda_23;
            }
            eax46 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
            if (*reinterpret_cast<signed char*>(&eax46) != 42) {
                eax47 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                if (*reinterpret_cast<signed char*>(&eax47) <= 47 || (eax48 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax48) > 57)) {
                    addr_805d453_26:
                    eax49 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                    if (*reinterpret_cast<signed char*>(&eax49) != 46) {
                        addr_805d75c_27:
                        v50 = 0;
                    } else {
                        ++v4;
                        eax51 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                        if (*reinterpret_cast<signed char*>(&eax51) != 42) {
                            v33->f24 = v4 + 0xffffffff;
                            while ((eax52 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax52) > 47) && (eax53 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax53) <= 57)) {
                                ++v4;
                            }
                            v33->f28 = v4;
                            v54 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v33->f28) - reinterpret_cast<unsigned char>(v33->f24));
                            if (reinterpret_cast<uint32_t>(v7) >= reinterpret_cast<uint32_t>(v54)) 
                                goto addr_805d75c_27; else 
                                goto addr_805d756_33;
                        } else {
                            v33->f24 = v4 + 0xffffffff;
                            ++v4;
                            v33->f28 = v4;
                            if (reinterpret_cast<uint32_t>(v7) <= 1) {
                                v7 = reinterpret_cast<void*>(2);
                            }
                            eax55 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                            if (*reinterpret_cast<signed char*>(&eax55) <= 47) 
                                goto addr_805d588_37;
                            eax56 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                            if (*reinterpret_cast<signed char*>(&eax56) > 57) 
                                goto addr_805d588_37; else 
                                goto addr_805d4b5_39;
                        }
                    }
                } else {
                    v33->f12 = v4;
                    while ((eax57 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax57) > 47) && (eax58 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax58) <= 57)) {
                        ++v4;
                    }
                    v33->f16 = v4;
                    v59 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v33->f16) - reinterpret_cast<unsigned char>(v33->f12));
                    if (reinterpret_cast<uint32_t>(v6) >= reinterpret_cast<uint32_t>(v59)) 
                        goto addr_805d453_26; else 
                        goto addr_805d44d_44;
                }
            } else {
                v33->f12 = v4;
                ++v4;
                v33->f16 = v4;
                if (!v6) {
                    v6 = reinterpret_cast<void*>(1);
                }
                eax60 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                if (*reinterpret_cast<signed char*>(&eax60) <= 47) 
                    goto addr_805d26b_48;
                eax61 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                if (*reinterpret_cast<signed char*>(&eax61) > 57) 
                    goto addr_805d26b_48; else 
                    goto addr_805d198_50;
            }
            while (1) {
                eax62 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                if (*reinterpret_cast<signed char*>(&eax62) != 0x68) {
                    eax63 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                    if (*reinterpret_cast<signed char*>(&eax63) != 76) {
                        eax64 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                        if (*reinterpret_cast<signed char*>(&eax64) != 0x6c) {
                            eax65 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                            if (*reinterpret_cast<signed char*>(&eax65) != 0x6a) {
                                eax66 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                                if (*reinterpret_cast<signed char*>(&eax66) == 0x7a || (eax67 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax67) == 90)) {
                                    ++v4;
                                } else {
                                    eax68 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                                    if (*reinterpret_cast<signed char*>(&eax68) != 0x74) 
                                        break;
                                    ++v4;
                                }
                            } else {
                                v50 = v50 + 16;
                                ++v4;
                            }
                        } else {
                            v50 = v50 + 8;
                            ++v4;
                        }
                    } else {
                        v50 = v50 | 4;
                        ++v4;
                    }
                } else {
                    ecx69 = v50 & 1;
                    v50 = v50 | 1 << *reinterpret_cast<unsigned char*>(&ecx69);
                    ++v4;
                }
            }
            eax70 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
            v71 = *reinterpret_cast<unsigned char*>(&eax70);
            ++v4;
            v21 = reinterpret_cast<void**>(reinterpret_cast<signed char>(v71) - 37);
            switch (v21) {
            case 0:
                v72 = reinterpret_cast<void**>(0);
                break;
            case 28:
            case 32:
            case 33:
            case 34:
            case 60:
            case 64:
            case 65:
            case 66:
                if (reinterpret_cast<int32_t>(v50) > reinterpret_cast<int32_t>(15) || v50 & 4) {
                    v72 = reinterpret_cast<void**>(12);
                    break;
                } else {
                    v72 = reinterpret_cast<void**>(11);
                    break;
                }
            case 30:
                v72 = reinterpret_cast<void**>(14);
                v71 = 99;
                break;
            case 46:
                v72 = reinterpret_cast<void**>(16);
                v71 = 0x73;
                break;
            case 51:
            case 74:
            case 80:
            case 83:
                if (reinterpret_cast<int32_t>(v50) > reinterpret_cast<int32_t>(15) || v50 & 4) {
                    v72 = reinterpret_cast<void**>(10);
                    break;
                } else {
                    if (reinterpret_cast<int32_t>(v50) <= reinterpret_cast<int32_t>(7)) {
                        if (!(v50 & 2)) {
                            eax73 = v50 & 1;
                            if (!*reinterpret_cast<signed char*>(&eax73)) {
                                v72 = reinterpret_cast<void**>(6);
                                break;
                            } else {
                                v72 = reinterpret_cast<void**>(4);
                                break;
                            }
                        } else {
                            v72 = reinterpret_cast<void**>(2);
                            break;
                        }
                    } else {
                        v72 = reinterpret_cast<void**>(8);
                        break;
                    }
                }
            case 62:
                if (reinterpret_cast<int32_t>(v50) <= reinterpret_cast<int32_t>(7)) {
                    v72 = reinterpret_cast<void**>(13);
                    break;
                } else {
                    v72 = reinterpret_cast<void**>(14);
                    break;
                }
            case 63:
            case 68:
                if (reinterpret_cast<int32_t>(v50) > reinterpret_cast<int32_t>(15) || v50 & 4) {
                    v72 = reinterpret_cast<void**>(9);
                    break;
                } else {
                    if (reinterpret_cast<int32_t>(v50) <= reinterpret_cast<int32_t>(7)) {
                        if (!(v50 & 2)) {
                            eax74 = v50 & 1;
                            if (!*reinterpret_cast<signed char*>(&eax74)) {
                                v72 = reinterpret_cast<void**>(5);
                                break;
                            } else {
                                v72 = reinterpret_cast<void**>(3);
                                break;
                            }
                        } else {
                            v72 = reinterpret_cast<void**>(1);
                            break;
                        }
                    } else {
                        v72 = reinterpret_cast<void**>(7);
                        break;
                    }
                }
            case 73:
                if (reinterpret_cast<int32_t>(v50) > reinterpret_cast<int32_t>(15) || v50 & 4) {
                    v72 = reinterpret_cast<void**>(22);
                    break;
                } else {
                    if (reinterpret_cast<int32_t>(v50) <= reinterpret_cast<int32_t>(7)) {
                        if (!(v50 & 2)) {
                            eax75 = v50 & 1;
                            if (!*reinterpret_cast<signed char*>(&eax75)) {
                                v72 = reinterpret_cast<void**>(20);
                                break;
                            } else {
                                v72 = reinterpret_cast<void**>(19);
                                break;
                            }
                        } else {
                            v72 = reinterpret_cast<void**>(18);
                            break;
                        }
                    } else {
                        v72 = reinterpret_cast<void**>(21);
                        break;
                    }
                }
            case 75:
                v72 = reinterpret_cast<void**>(17);
                break;
            case 78:
                if (reinterpret_cast<int32_t>(v50) <= reinterpret_cast<int32_t>(7)) {
                    v72 = reinterpret_cast<void**>(15);
                } else {
                    v72 = reinterpret_cast<void**>(16);
                }
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 29:
            case 31:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 47:
            case 48:
            case 49:
            case 50:
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
            case 58:
            case 59:
            case 61:
            case 67:
            case 69:
            case 70:
            case 71:
            case 72:
            case 76:
            case 77:
            case 79:
            case 81:
            case 82:
                goto 0x805dc59;
            }
            if (!v72) {
                addr_805db61_106:
                eax76 = v71;
                v33->f36 = *reinterpret_cast<signed char*>(&eax76);
                v33->f4 = v4;
                a2->f0 = a2->f0 + 1;
                if (a2->f0 < v8) 
                    continue;
            } else {
                v33->f40 = v32;
                if (!reinterpret_cast<int1_t>(v33->f40 == 0xffffffff)) 
                    goto addr_805da0c_108;
                v33->f40 = v5;
                ++v5;
                if (v33->f40 == 0xffffffff) 
                    goto addr_805dc59_110;
                addr_805da0c_108:
                v77 = v33->f40;
                if (reinterpret_cast<unsigned char>(v77) < reinterpret_cast<unsigned char>(v29)) 
                    goto addr_805db13_111; else 
                    goto addr_805da21_112;
            }
            if (reinterpret_cast<int32_t>(v8) < reinterpret_cast<int32_t>(0)) {
                v78 = 0xffffffff;
            } else {
                v78 = v8 + v8;
            }
            v8 = v78;
            if (v8 > 0x5d1745d) {
                v79 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v79 = reinterpret_cast<void**>(v8 * 44);
            }
            if (v79 == 0xffffffff) 
                goto addr_805dca0_120;
            edx80 = a2->f4;
            v19 = v79;
            v9 = edx80;
            eax82 = fun_80495ac(v9, v19, v81, v21, v22, v23, v24, v25, v26);
            if (!eax82) 
                goto addr_805dca0_120;
            a2->f4 = eax82;
            continue;
            addr_805db13_111:
            while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) <= reinterpret_cast<unsigned char>(v77)) {
                edx83 = *reinterpret_cast<void***>(a3);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(edx83) << 4)) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a3) = edx83 + 1;
            }
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v77) << 4))) {
                if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v77) << 4)) != v72) 
                    goto addr_805dc59_110; else 
                    goto addr_805db61_106;
            } else {
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v77) << 4)) = v72;
                goto addr_805db61_106;
            }
            addr_805da21_112:
            if (reinterpret_cast<signed char>(v29) < reinterpret_cast<signed char>(0)) {
                v84 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v84 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v29) + reinterpret_cast<unsigned char>(v29));
            }
            v29 = v84;
            if (reinterpret_cast<unsigned char>(v29) <= reinterpret_cast<unsigned char>(v77)) {
                v19 = reinterpret_cast<void**>(1);
                v9 = v77;
                eax85 = xsum(v9, 1);
                v29 = eax85;
            }
            if (reinterpret_cast<unsigned char>(v29) > reinterpret_cast<unsigned char>(0xfffffff)) {
                v86 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v86 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v29) << 4);
            }
            if (v86 == 0xffffffff) 
                goto addr_805dca0_120;
            if (!*reinterpret_cast<void***>(a3 + 4)) {
                v9 = v86;
                eax88 = malloc(v9, v19, v87, v21, v22, v23, v24, v25, v26);
                v89 = eax88;
            } else {
                edx90 = *reinterpret_cast<void***>(a3 + 4);
                v19 = v86;
                v9 = edx90;
                eax92 = fun_80495ac(v9, v19, v91, v21, v22, v23, v24, v25, v26);
                v89 = eax92;
            }
            if (!v89) 
                goto addr_805dca0_120;
            *reinterpret_cast<void***>(a3 + 4) = v89;
            goto addr_805db13_111;
            addr_805d756_33:
            v7 = v54;
            goto addr_805d75c_27;
            addr_805d588_37:
            if (!reinterpret_cast<int1_t>(v33->f32 == 0xffffffff)) 
                goto addr_805d5af_140;
            v33->f32 = v5;
            ++v5;
            if (v33->f32 == 0xffffffff) 
                goto addr_805dc59_110;
            addr_805d5af_140:
            v93 = v33->f32;
            if (reinterpret_cast<unsigned char>(v93) >= reinterpret_cast<unsigned char>(v29)) {
                if (reinterpret_cast<signed char>(v29) < reinterpret_cast<signed char>(0)) {
                    v94 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v94 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v29) + reinterpret_cast<unsigned char>(v29));
                }
                v29 = v94;
                if (reinterpret_cast<unsigned char>(v29) <= reinterpret_cast<unsigned char>(v93)) {
                    v19 = reinterpret_cast<void**>(1);
                    v9 = v93;
                    eax95 = xsum(v9, 1);
                    v29 = eax95;
                }
                if (reinterpret_cast<unsigned char>(v29) > reinterpret_cast<unsigned char>(0xfffffff)) {
                    v96 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v96 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v29) << 4);
                }
                if (v96 == 0xffffffff) 
                    goto addr_805dca0_120;
                if (!*reinterpret_cast<void***>(a3 + 4)) {
                    v9 = v96;
                    eax98 = malloc(v9, v19, v97, v21, v22, v23, v24, v25, v26);
                    v99 = eax98;
                } else {
                    edx100 = *reinterpret_cast<void***>(a3 + 4);
                    v19 = v96;
                    v9 = edx100;
                    eax102 = fun_80495ac(v9, v19, v101, v21, v22, v23, v24, v25, v26);
                    v99 = eax102;
                }
                if (!v99) 
                    goto addr_805dca0_120;
                *reinterpret_cast<void***>(a3 + 4) = v99;
            }
            while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) <= reinterpret_cast<unsigned char>(v93)) {
                edx103 = *reinterpret_cast<void***>(a3);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(edx103) << 4)) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a3) = edx103 + 1;
            }
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v93) << 4))) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v93) << 4)) == 5)) 
                    goto addr_805dc59_110;
                goto addr_805d75c_27;
            } else {
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v93) << 4)) = reinterpret_cast<void**>(5);
                goto addr_805d75c_27;
            }
            addr_805d4b5_39:
            v104 = v4;
            while ((eax105 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v104)), *reinterpret_cast<signed char*>(&eax105) > 47) && (eax106 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v104)), *reinterpret_cast<signed char*>(&eax106) <= 57)) {
                ++v104;
            }
            eax107 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v104));
            if (*reinterpret_cast<signed char*>(&eax107) != 36) 
                goto addr_805d588_37;
            v108 = reinterpret_cast<void**>(0);
            v109 = v4;
            while ((eax110 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v109)), *reinterpret_cast<signed char*>(&eax110) > 47) && (eax111 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v109)), *reinterpret_cast<signed char*>(&eax111) <= 57)) {
                eax112 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v109));
                if (reinterpret_cast<unsigned char>(v108) > reinterpret_cast<unsigned char>(0x19999999)) {
                    v113 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    edx114 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v108) << 2) + reinterpret_cast<unsigned char>(v108));
                    v113 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx114) + reinterpret_cast<uint32_t>(edx114));
                }
                v19 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax112) - 48);
                v9 = v113;
                eax115 = xsum(v9, v19);
                v108 = eax115;
                ++v109;
            }
            if (!v108) 
                goto addr_805dc59_110;
            if (v108 == 0xffffffff) 
                goto addr_805dc59_110;
            v33->f32 = v108 + 0xffffffff;
            v4 = v109 + 1;
            goto addr_805d588_37;
            addr_805d44d_44:
            v6 = v59;
            goto addr_805d453_26;
            addr_805d26b_48:
            if (!reinterpret_cast<int1_t>(v33->f20 == 0xffffffff)) 
                goto addr_805d292_174;
            v33->f20 = v5;
            ++v5;
            if (v33->f20 == 0xffffffff) 
                goto addr_805dc59_110;
            addr_805d292_174:
            v116 = v33->f20;
            if (reinterpret_cast<unsigned char>(v116) >= reinterpret_cast<unsigned char>(v29)) {
                if (reinterpret_cast<signed char>(v29) < reinterpret_cast<signed char>(0)) {
                    v26 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v29) + reinterpret_cast<unsigned char>(v29));
                }
                v29 = v26;
                if (reinterpret_cast<unsigned char>(v29) <= reinterpret_cast<unsigned char>(v116)) {
                    v19 = reinterpret_cast<void**>(1);
                    v9 = v116;
                    eax117 = xsum(v9, 1);
                    v29 = eax117;
                }
                if (reinterpret_cast<unsigned char>(v29) > reinterpret_cast<unsigned char>(0xfffffff)) {
                    v118 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v118 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v29) << 4);
                }
                if (v118 == 0xffffffff) 
                    goto addr_805dca0_120;
                if (!*reinterpret_cast<void***>(a3 + 4)) {
                    v9 = v118;
                    eax120 = malloc(v9, v19, v119, v21, v22, v23, v24, v25, v26);
                    v121 = eax120;
                } else {
                    edx122 = *reinterpret_cast<void***>(a3 + 4);
                    v19 = v118;
                    v9 = edx122;
                    eax124 = fun_80495ac(v9, v19, v123, v21, v22, v23, v24, v25, v26);
                    v121 = eax124;
                }
                if (!v121) 
                    goto addr_805dca0_120;
                *reinterpret_cast<void***>(a3 + 4) = v121;
            }
            while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) <= reinterpret_cast<unsigned char>(v116)) {
                edx125 = *reinterpret_cast<void***>(a3);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(edx125) << 4)) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a3) = edx125 + 1;
            }
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v116) << 4))) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v116) << 4)) == 5)) 
                    goto addr_805dc59_110;
                goto addr_805d453_26;
            } else {
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v116) << 4)) = reinterpret_cast<void**>(5);
                goto addr_805d453_26;
            }
            addr_805d198_50:
            v126 = v4;
            while ((eax127 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v126)), *reinterpret_cast<signed char*>(&eax127) > 47) && (eax128 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v126)), *reinterpret_cast<signed char*>(&eax128) <= 57)) {
                ++v126;
            }
            eax129 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v126));
            if (*reinterpret_cast<signed char*>(&eax129) != 36) 
                goto addr_805d26b_48;
            v130 = reinterpret_cast<void**>(0);
            v131 = v4;
            while ((eax132 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v131)), *reinterpret_cast<signed char*>(&eax132) > 47) && (eax133 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v131)), *reinterpret_cast<signed char*>(&eax133) <= 57)) {
                eax134 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v131));
                v24 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax134) - 48);
                if (reinterpret_cast<unsigned char>(v130) > reinterpret_cast<unsigned char>(0x19999999)) {
                    v25 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    edx135 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v130) << 2) + reinterpret_cast<unsigned char>(v130));
                    v25 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx135) + reinterpret_cast<uint32_t>(edx135));
                }
                v19 = v24;
                v9 = v25;
                eax136 = xsum(v9, v19);
                v130 = eax136;
                ++v131;
            }
            if (!v130) 
                goto addr_805dc59_110;
            if (v130 == 0xffffffff) 
                goto addr_805dc59_110;
            v33->f20 = v130 + 0xffffffff;
            v4 = v131 + 1;
            goto addr_805d26b_48;
            addr_805cfda_23:
            v137 = reinterpret_cast<void**>(0);
            v138 = v4;
            while ((eax139 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v138)), *reinterpret_cast<signed char*>(&eax139) > 47) && (eax140 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v138)), *reinterpret_cast<signed char*>(&eax140) <= 57)) {
                eax141 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v138));
                v22 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax141) - 48);
                if (reinterpret_cast<unsigned char>(v137) > reinterpret_cast<unsigned char>(0x19999999)) {
                    v23 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    edx142 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v137) << 2) + reinterpret_cast<unsigned char>(v137));
                    v23 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx142) + reinterpret_cast<uint32_t>(edx142));
                }
                v19 = v22;
                v9 = v23;
                eax143 = xsum(v9, v19);
                v137 = eax143;
                ++v138;
            }
            if (!v137) 
                goto addr_805dc59_110;
            if (v137 == 0xffffffff) 
                goto addr_805dc59_110;
            v32 = v137 - 1;
            v4 = v138 + 1;
            goto addr_805d07c_7;
        }
        goto addr_805dc23_216;
    }
    addr_805dce5_217:
    return v28;
    addr_805dc23_216:
    *reinterpret_cast<void***>(a2->f4 + a2->f0 * 44) = v4;
    a2->f8 = v6;
    a2->f12 = v7;
    v28 = 0;
    goto addr_805dce5_217;
    addr_805dc59_110:
    if (*reinterpret_cast<void***>(a3 + 4)) {
        v9 = *reinterpret_cast<void***>(a3 + 4);
        free(v9, v19, v144, v21, v22, v23, v24, v25, v26);
    }
    if (a2->f4) {
        v9 = a2->f4;
        free(v9, v19, v145, v21, v22, v23, v24, v25, v26);
    }
    eax147 = fun_80494cc(v9, v19, v146, v21, v22, v23, v24, v25, v26);
    *eax147 = reinterpret_cast<void**>(22);
    v28 = -1;
    goto addr_805dce5_217;
    addr_805dca0_120:
    if (*reinterpret_cast<void***>(a3 + 4)) {
        v9 = *reinterpret_cast<void***>(a3 + 4);
        free(v9, v19, v148, v21, v22, v23, v24, v25, v26);
    }
    if (a2->f4) {
        v9 = a2->f4;
        free(v9, v19, v149, v21, v22, v23, v24, v25, v26);
        goto addr_805dcd0_2;
    }
}

/* completed.6635 */
signed char completed_6635 = 0;

/* dtor_idx.6637 */
uint32_t dtor_idx_6637 = 0;

int32_t __do_global_dtors_aux() {
    int1_t zf1;
    uint32_t edx2;
    int32_t eax3;
    uint32_t eax4;

    zf1 = completed_6635 == 0;
    if (zf1) {
        edx2 = dtor_idx_6637;
        eax3 = 1;
        if (edx2 < 0) {
            do {
                eax4 = edx2 + 1;
                dtor_idx_6637 = eax4;
                eax3 = reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(eax4 * 4 + 0x8063f08)());
                edx2 = dtor_idx_6637;
            } while (edx2 < 0);
        }
        completed_6635 = 1;
    }
    return eax3;
}

void** version_etc_va(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** edx8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void** eax31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** eax36;
    void** v37;
    void** v38;
    void** eax39;
    void** v40;
    void** v41;
    void** eax42;
    void** v43;
    void** v44;
    void** eax45;
    void** v46;
    void** v47;
    void** eax48;
    void** v49;
    void** v50;
    void** eax51;
    void** v52;
    void** v53;
    void** eax54;
    void** v55;
    void** v56;
    void** eax57;
    void** v58;
    void** v59;
    void** eax60;

    v6 = a5;
    v7 = reinterpret_cast<void**>(0);
    while (edx8 = v6, v6 = edx8 + 4, !!*reinterpret_cast<void***>(edx8)) {
        ++v7;
    }
    if (!a2) {
        v9 = a4;
        v10 = a3;
        v11 = reinterpret_cast<void**>(0x8061514);
        fun_804992c(a1, 0x8061514, v10, v9, v12, v13, v14, v6);
    } else {
        v15 = a4;
        v9 = a3;
        v10 = a2;
        v11 = reinterpret_cast<void**>(0x8061508);
        fun_804992c(a1, 0x8061508, v10, v9, v15, v16, v17, v6);
    }
    eax20 = fun_80496ec(0x806151b, v11, v10, v9, v15, v18, v19, v6, v7);
    fun_804992c(a1, 0x80617a0, eax20, 0x7d8, v15, v21, v22, v6);
    eax25 = fun_80496ec(0x8061520, 0x80617a0, eax20, 0x7d8, v15, v23, v24, v6, v7);
    fun_804955c(eax25, a1, eax20, 0x7d8, v15, v26, v27, v6);
    if (reinterpret_cast<unsigned char>(v7) > reinterpret_cast<unsigned char>(9)) {
        eax30 = fun_80496ec(0x806172c, a1, eax20, 0x7d8, v15, v28, v29, v6, v7);
        eax31 = rpl_vfprintf(a1, eax30, a5, 0x7d8, v15);
    } else {
        switch (v7) {
        case 0:
            fun_80494bc(eax25, a1, eax20, 0x7d8, v15, v32, v33, v6, v7);
        case 1:
            eax36 = fun_80496ec(0x80615ea, a1, eax20, 0x7d8, v15, v34, v35, v6, v7);
            eax31 = rpl_vfprintf(a1, eax36, a5, 0x7d8, v15);
            break;
        case 2:
            eax39 = fun_80496ec(0x80615fa, a1, eax20, 0x7d8, v15, v37, v38, v6, v7);
            eax31 = rpl_vfprintf(a1, eax39, a5, 0x7d8, v15);
            break;
        case 3:
            eax42 = fun_80496ec(0x8061611, a1, eax20, 0x7d8, v15, v40, v41, v6, v7);
            eax31 = rpl_vfprintf(a1, eax42, a5, 0x7d8, v15);
            break;
        case 4:
            eax45 = fun_80496ec(0x8061630, a1, eax20, 0x7d8, v15, v43, v44, v6, v7);
            eax31 = rpl_vfprintf(a1, eax45, a5, 0x7d8, v15);
            break;
        case 5:
            eax48 = fun_80496ec(0x8061650, a1, eax20, 0x7d8, v15, v46, v47, v6, v7);
            eax31 = rpl_vfprintf(a1, eax48, a5, 0x7d8, v15);
            break;
        case 6:
            eax51 = fun_80496ec(0x8061674, a1, eax20, 0x7d8, v15, v49, v50, v6, v7);
            eax31 = rpl_vfprintf(a1, eax51, a5, 0x7d8, v15);
            break;
        case 7:
            eax54 = fun_80496ec(0x806169c, a1, eax20, 0x7d8, v15, v52, v53, v6, v7);
            eax31 = rpl_vfprintf(a1, eax54, a5, 0x7d8, v15);
            break;
        case 8:
            eax57 = fun_80496ec(0x80616c8, a1, eax20, 0x7d8, v15, v55, v56, v6, v7);
            eax31 = rpl_vfprintf(a1, eax57, a5, 0x7d8, v15);
            break;
        case 9:
            eax60 = fun_80496ec(0x80616f8, a1, eax20, 0x7d8, v15, v58, v59, v6, v7);
            eax31 = rpl_vfprintf(a1, eax60, a5, 0x7d8, v15);
        }
    }
    return eax31;
}

void main(void** a1, void** a2);

void __libc_csu_fini();

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_804965c(main, __return_address(), esp1, 0x805e320, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8049b56() {
}

struct s45 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** dev_ino_hash(struct s45* a1, void** a2) {
    void** ecx3;
    void** ebx4;
    void** eax5;

    ecx3 = a1->f0;
    ebx4 = a1->f4;
    eax5 = __umoddi3(ecx3, ebx4, a2, 0);
    return eax5;
}

void stophandler() {
    void** eax1;
    uint32_t eax2;

    eax1 = interrupt_signal;
    if (!eax1) {
        eax2 = stop_signal_count;
        stop_signal_count = eax2 + 1;
    }
    return;
}

void close_stdout();

struct s46 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t f12;
};

struct s47 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t f12;
};

uint32_t dev_ino_compare(struct s46* a1, struct s47* a2);

void main(void** a1, void** a2) {
    void* ebp3;
    void** v4;
    void** v5;
    void** eax6;
    void** v7;
    uint32_t eax8;
    uint32_t eax9;
    void** v10;
    void** v11;
    uint32_t eax12;
    void** v13;
    void** v14;
    uint32_t eax15;
    uint32_t eax16;
    uint32_t eax17;
    void** v18;
    void** v19;
    uint32_t eax20;
    uint32_t eax21;
    void** eax22;
    void** v23;
    int32_t eax24;
    int32_t v25;
    void** edx26;
    void** v27;
    int32_t v28;
    void** v29;
    void** ecx30;
    int32_t v31;
    void** v32;
    void** v33;
    void** v34;
    int32_t eax35;
    void** edx36;
    void** v37;
    void** v38;
    uint32_t eax39;
    uint32_t eax40;
    uint32_t eax41;
    void** eax42;
    uint32_t v43;
    uint32_t eax44;
    void** eax45;
    void** eax46;
    void** v47;
    void** v48;
    void** eax49;
    void** eax50;
    void** eax51;
    uint32_t eax52;
    uint32_t eax53;
    int32_t v54;
    uint32_t eax55;
    uint32_t eax56;
    uint32_t eax57;
    uint32_t eax58;
    uint32_t eax59;
    uint32_t eax60;
    uint32_t eax61;
    int32_t v62;
    uint32_t eax63;
    uint32_t eax64;
    void** eax65;
    void** eax66;
    void* v67;
    void** eax68;
    void** v69;
    void** v70;
    void** v71;
    uint32_t eax72;
    void** eax73;
    uint32_t eax74;
    uint32_t eax75;
    void** eax76;
    void** eax77;
    void** eax78;
    void** v79;
    void** eax80;
    void** v81;
    uint32_t eax82;
    void** eax83;
    void** eax84;
    void** eax85;
    void** eax86;
    uint32_t eax87;
    void** ecx88;
    void** eax89;
    void** edx90;
    void** eax91;
    uint32_t eax92;
    uint32_t eax93;
    void** eax94;
    void** v95;
    void** eax96;
    void** v97;
    void** eax98;
    int32_t v99;
    int32_t eax100;
    void** eax101;
    uint32_t eax102;
    uint32_t v103;
    void** eax104;
    void** eax105;
    void** eax106;
    void** eax107;
    void** eax108;
    void** eax109;
    void** v110;

    ebp3 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(__zero_stack_offset()) & 0xfffffff0) - 4 - 4);
    v4 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(__zero_stack_offset()) + 4);
    program_name = *reinterpret_cast<void***>(a2);
    fun_804987c(6, 0x805ed70);
    fun_80496cc("coreutils", "/usr/local/share/locale");
    fun_80499dc("coreutils", "/usr/local/share/locale");
    initialize_exit_failure(2, "/usr/local/share/locale");
    atexit(close_stdout, "/usr/local/share/locale");
    exit_status = reinterpret_cast<void**>(0);
    print_dir_name = 1;
    pending_dirs = reinterpret_cast<void**>(0);
    v5 = a2;
    eax6 = decode_switches(a1, v5);
    v7 = eax6;
    eax8 = print_with_color;
    if (*reinterpret_cast<signed char*>(&eax8)) {
        parse_ls_color(a1, v5);
    }
    eax9 = print_with_color;
    if (*reinterpret_cast<signed char*>(&eax9)) {
        eax12 = is_colored(12, v5, v10, v11);
        if (*reinterpret_cast<signed char*>(&eax12) || ((eax15 = is_colored(13, v5, v13, v14), eax16 = eax15 ^ 1, !*reinterpret_cast<signed char*>(&eax16)) && (eax17 = color_symlink_as_referent, !!*reinterpret_cast<signed char*>(&eax17)) || (eax20 = is_colored(11, v5, v18, v19), eax21 = eax20 ^ 1, !*reinterpret_cast<signed char*>(&eax21)) && (eax22 = format, !eax22))) {
            check_symlink_color = 1;
        }
        v23 = reinterpret_cast<void**>(1);
        eax24 = fun_804980c(1, v5);
        if (eax24 >= 0) {
            v23 = reinterpret_cast<void**>(0x8064500);
            fun_80494ec(0x8064500, v5);
            v25 = 0;
            while (v25 <= 11) {
                edx26 = *reinterpret_cast<void***>(v25 * 4 + 0x805ed40);
                v27 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp3) + 0xffffff40);
                v5 = reinterpret_cast<void**>(0);
                v23 = edx26;
                fun_804975c(v23, 0, v27);
                if (v28 != 1) {
                    v5 = *reinterpret_cast<void***>(v25 * 4 + 0x805ed40);
                    v23 = reinterpret_cast<void**>(0x8064500);
                    fun_804999c(0x8064500, v5, v27);
                }
                ++v25;
            }
            v29 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp3) + 0xffffff44);
            ecx30 = reinterpret_cast<void**>(32);
            while (ecx30) {
                --ecx30;
            }
            v31 = 0;
            while (v31 <= 11) {
                v5 = *reinterpret_cast<void***>(v31 * 4 + 0x805ed40);
                v23 = reinterpret_cast<void**>(0x8064500);
                eax35 = fun_804958c(0x8064500, v5, v27, v32, v33, v34);
                if (eax35) {
                    if (*reinterpret_cast<int32_t*>(v31 * 4 + 0x805ed40) != 20) {
                    }
                    edx36 = *reinterpret_cast<void***>(v31 * 4 + 0x805ed40);
                    v27 = reinterpret_cast<void**>(0);
                    v5 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp3) + 0xffffff40);
                    v23 = edx36;
                    fun_804975c(v23, v5, 0);
                }
                ++v31;
            }
        }
        prep_non_filename_text(v23, v5, v27, v37, v38);
    }
    eax39 = dereference;
    if (eax39 == 1) {
        eax40 = immediate_dirs;
        if (*reinterpret_cast<signed char*>(&eax40) || ((eax41 = indicator_style, eax41 == 3) || (eax42 = format, !eax42))) {
            v43 = 2;
        } else {
            v43 = 4;
        }
        dereference = v43;
    }
    eax44 = recursive;
    if (*reinterpret_cast<signed char*>(&eax44)) {
        eax45 = hash_initialize(30, 0, dev_ino_hash, dev_ino_compare, dev_ino_free);
        active_dir_set = eax45;
        eax46 = active_dir_set;
        if (!eax46) {
            xalloc_die(30, 0, dev_ino_hash, dev_ino_compare, dev_ino_free);
        }
        v47 = reinterpret_cast<void**>(free);
        v48 = reinterpret_cast<void**>(malloc);
        v27 = reinterpret_cast<void**>(0);
        fun_804967c(0x8064620, 0, 0, malloc, free);
    }
    eax49 = sort_type;
    if (eax49 == 4 || ((eax50 = sort_type, eax50 == 2) || ((eax51 = format, eax51 == 0) || ((eax52 = print_scontext, !!*reinterpret_cast<signed char*>(&eax52)) || (eax53 = print_block_size, !!*reinterpret_cast<signed char*>(&eax53)))))) {
        v54 = 1;
    } else {
        v54 = 0;
    }
    eax55 = *reinterpret_cast<unsigned char*>(&v54);
    format_needs_stat = *reinterpret_cast<unsigned char*>(&eax55);
    eax56 = format_needs_stat;
    eax57 = eax56 ^ 1 ^ 1;
    if (*reinterpret_cast<signed char*>(&eax57) || (eax58 = recursive, !*reinterpret_cast<signed char*>(&eax58)) && ((eax59 = print_with_color, !*reinterpret_cast<signed char*>(&eax59)) && ((eax60 = indicator_style, !eax60) && (eax61 = directories_first, *reinterpret_cast<signed char*>(&eax61) == 0)))) {
        v62 = 0;
    } else {
        v62 = 1;
    }
    eax63 = *reinterpret_cast<unsigned char*>(&v62);
    format_needs_type = *reinterpret_cast<unsigned char*>(&eax63);
    eax64 = dired;
    if (*reinterpret_cast<signed char*>(&eax64)) {
        fun_804967c(0x80645a0, 0, 0, malloc, free);
        v47 = reinterpret_cast<void**>(free);
        v48 = reinterpret_cast<void**>(malloc);
        v27 = reinterpret_cast<void**>(0);
        fun_804967c(0x80645e0, 0, 0, malloc, free);
    }
    cwd_n_alloc = reinterpret_cast<void**>(100);
    eax65 = cwd_n_alloc;
    eax66 = xnmalloc(eax65, 0x78, v27, malloc, free);
    cwd_file = eax66;
    cwd_n_used = reinterpret_cast<void**>(0);
    clear_files(eax65, 0x78, v27, malloc, free);
    v67 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(v7));
    if (reinterpret_cast<int32_t>(v67) > reinterpret_cast<int32_t>(0)) {
        do {
            eax68 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v7) << 2) + reinterpret_cast<unsigned char>(a2));
            ++v7;
            v47 = reinterpret_cast<void**>(1);
            v69 = reinterpret_cast<void**>(0);
            v48 = reinterpret_cast<void**>(0);
            v70 = reinterpret_cast<void**>(0);
            v71 = eax68;
            gobble_file(v71, 0, 0, 0, 1, 0x805ed70);
        } while (reinterpret_cast<signed char>(v7) < reinterpret_cast<signed char>(a1));
    } else {
        eax72 = immediate_dirs;
        if (!*reinterpret_cast<signed char*>(&eax72)) {
            v69 = reinterpret_cast<void**>(1);
            v70 = reinterpret_cast<void**>(0);
            v71 = reinterpret_cast<void**>(0x805ed93);
            queue_directory(0x805ed93, 0, 1, malloc, free);
        } else {
            v47 = reinterpret_cast<void**>(1);
            v69 = reinterpret_cast<void**>(0);
            v48 = reinterpret_cast<void**>(0);
            v70 = reinterpret_cast<void**>(3);
            v71 = reinterpret_cast<void**>(0x805ed93);
            gobble_file(0x805ed93, 3, 0, 0, 1, 0x805ed70);
        }
    }
    eax73 = cwd_n_used;
    if (eax73 && (sort_files(v71, v70, v69, v48, v47, 0x805ed70), eax74 = immediate_dirs, eax75 = eax74 ^ 1, !!*reinterpret_cast<signed char*>(&eax75))) {
        v70 = reinterpret_cast<void**>(1);
        v71 = reinterpret_cast<void**>(0);
        extract_dirs_from_files(0, 1, v69, v48, v47, 0x805ed70);
    }
    eax76 = cwd_n_used;
    if (!eax76) {
        if (reinterpret_cast<int32_t>(v67) <= reinterpret_cast<int32_t>(1) && ((eax77 = pending_dirs, !!eax77) && (eax78 = pending_dirs, !*reinterpret_cast<void***>(eax78 + 12)))) {
            print_dir_name = 0;
        }
    } else {
        print_current_files(v71, v70, v69, v48, v47, 0x805ed70, v79, 32);
        eax80 = pending_dirs;
        if (eax80) {
            v71 = reinterpret_cast<void**>(10);
            fun_8049abc(10, v70, v69, v48, v47, 0x805ed70, v81, 32);
            eax82 = dired_pos;
            dired_pos = eax82 + 1;
        }
    }
    while (eax83 = pending_dirs, !!eax83) {
        eax84 = pending_dirs;
        eax85 = pending_dirs;
        pending_dirs = *reinterpret_cast<void***>(eax85 + 12);
        eax86 = active_dir_set;
        if (!eax86 || *reinterpret_cast<void***>(eax84)) {
            eax87 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax84 + 8));
            ecx88 = *reinterpret_cast<void***>(eax84 + 4);
            eax89 = *reinterpret_cast<void***>(eax84);
            v69 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax87)));
            v70 = ecx88;
            print_dir(eax89, v70, v69, v48, v47, 0x805ed70);
            v71 = eax84;
            free_pending_ent(v71, v70, v69, v48, v47, 0x805ed70);
            print_dir_name = 1;
        } else {
            dev_ino_pop(reinterpret_cast<uint32_t>(ebp3) + 0xffffffcc, v70, v69, v48, v47, 0x805ed70);
            edx90 = active_dir_set;
            v70 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp3) + 0xffffffcc);
            eax91 = hash_delete(edx90, v70, v69, v48, v47, 0x805ed70);
            if (!eax91) {
                v48 = reinterpret_cast<void**>(0x805ed2f);
                v69 = reinterpret_cast<void**>(0x51e);
                v70 = reinterpret_cast<void**>(0x805ec90);
                fun_80496bc(0x805ed95, 0x805ec90, 0x51e, 0x805ed2f, v47, 0x805ed70);
            }
            dev_ino_free(eax91, v70, v69, v48, v47, 0x805ed70);
            v71 = eax84;
            free_pending_ent(v71, v70, v69, v48, v47, 0x805ed70);
        }
    }
    eax92 = print_with_color;
    if (!*reinterpret_cast<signed char*>(&eax92)) {
        addr_804a795_60:
        eax93 = dired;
        if (*reinterpret_cast<signed char*>(&eax93)) {
            dired_dump_obstack(0x805ed9b, 0x80645a0, v69, v48, v47, 0x805ed70);
            dired_dump_obstack(0x805eda5, 0x80645e0, v69, v48, v47, 0x805ed70);
            eax94 = filename_quoting_options;
            eax96 = get_quoting_style(eax94, 0x80645e0, v69, v48, v47, 0x805ed70, v95);
            v70 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax96) * 4 + 0x8061a00);
            fun_80498ac(0x805edb4, v70, v69, v48, v47, 0x805ed70, v97, 32, 0x8064500, v29, v4);
        }
    } else {
        restore_default_color(v71, v70, v69, v48, v47, 0x805ed70);
        eax98 = stdout;
        fun_8049a2c(eax98, v70, v69, v48, v47, 0x805ed70);
        v99 = 0;
        while (v99 <= 11) {
            v70 = *reinterpret_cast<void***>(v99 * 4 + 0x805ed40);
            eax100 = fun_804958c(0x8064500, v70, v69, v48, v47, 0x805ed70);
            if (eax100) {
                eax101 = *reinterpret_cast<void***>(v99 * 4 + 0x805ed40);
                v70 = reinterpret_cast<void**>(0);
                fun_804957c(eax101, 0, v69, v48, v47, 0x805ed70);
            }
            ++v99;
        }
        eax102 = stop_signal_count;
        v103 = eax102;
        while (v103) {
            fun_80498bc(19, v70, v69, v48, v47, 0x805ed70);
            --v103;
        }
        eax104 = interrupt_signal;
        if (!eax104) 
            goto addr_804a795_60; else 
            goto addr_804a78a_71;
    }
    eax105 = active_dir_set;
    if (eax105) {
        eax106 = active_dir_set;
        eax107 = hash_get_n_entries(eax106, v70, v69, v48, v47, 0x805ed70);
        if (eax107) {
            v48 = reinterpret_cast<void**>(0x805ed2f);
            v69 = reinterpret_cast<void**>(0x554);
            v70 = reinterpret_cast<void**>(0x805ec90);
            fun_80496bc(0x805eddc, 0x805ec90, 0x554, 0x805ed2f, v47, 0x805ed70);
        }
        eax108 = active_dir_set;
        hash_free(eax108, v70, v69, v48, v47, 0x805ed70);
    }
    eax109 = exit_status;
    fun_8049aac(eax109, v70, v69, v48, v47, 0x805ed70, v110, 32);
    addr_804a78a_71:
    fun_80498bc(eax104, v70, v69, v48, v47, 0x805ed70);
    goto addr_804a795_60;
}

int32_t xstrcoll(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void*** eax12;
    int32_t eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void*** eax21;
    void** eax22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** eax31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void*** eax39;
    void** eax40;
    void** v41;
    void** v42;
    void** v43;

    eax12 = fun_80494cc(v3, v4, v5, v6, v7, v8, v9, v10, v11);
    *eax12 = reinterpret_cast<void**>(0);
    eax13 = fun_804953c(a1, a2);
    eax21 = fun_80494cc(a1, a2, v14, v15, v16, v17, v18, v19, v20);
    if (*eax21) {
        eax22 = quote_n(1, a2);
        eax23 = quote_n(0, a1);
        eax31 = fun_80496ec(0x805f938, a1, v24, v25, v26, v27, v28, v29, v30);
        eax39 = fun_80494cc(0x805f938, a1, v32, v33, v34, v35, v36, v37, v38);
        eax40 = *eax39;
        fun_804997c(0, eax40, eax31, eax23, eax22, v41, v42, v43);
        set_exit_status(0, eax40, eax31, eax23, eax22);
        fun_804989c(0x8064660, 1, eax31, eax23, eax22);
    }
    return eax13;
}

int32_t xstrcoll_ctime(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_ctime(a1, a2, xstrcoll);
    return eax3;
}

int32_t base_name(void** a1) {
    void** eax2;
    uint32_t eax3;
    void** eax4;
    void** v5;
    uint32_t eax6;
    int32_t eax7;
    int32_t v8;
    void** eax9;
    int32_t eax10;

    eax2 = last_component(a1);
    eax3 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2));
    if (*reinterpret_cast<signed char*>(&eax3)) {
        eax4 = base_len(eax2);
        v5 = eax4;
        eax6 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax2) + reinterpret_cast<unsigned char>(v5));
        if (*reinterpret_cast<signed char*>(&eax6) == 47) {
            ++v5;
        }
        eax7 = xstrndup(eax2, v5);
        v8 = eax7;
    } else {
        eax9 = base_len(a1);
        eax10 = xstrndup(a1, eax9);
        v8 = eax10;
    }
    return v8;
}

void** file_name = reinterpret_cast<void**>(0);

void close_stdout_set_file_name(void** a1) {
    file_name = a1;
    return;
}

struct s49 {
    int32_t f0;
    struct s49* f4;
};

struct s48 {
    struct s49* f0;
    struct s49* f4;
    signed char[4] pad12;
    int32_t f12;
    int32_t f16;
};

uint32_t hash_table_ok(struct s48* a1) {
    int32_t v2;
    int32_t v3;
    struct s49* v4;
    struct s49* v5;
    unsigned char v6;

    v2 = 0;
    v3 = 0;
    v4 = a1->f0;
    while (reinterpret_cast<uint32_t>(a1->f4) > reinterpret_cast<uint32_t>(v4)) {
        if (v4->f0) {
            v5 = v4;
            ++v2;
            ++v3;
            while (v5 = v5->f4, !!v5) {
                ++v3;
            }
        }
        ++v4;
    }
    if (a1->f12 != v2 || a1->f16 != v3) {
        v6 = 0;
    } else {
        v6 = 1;
    }
    return static_cast<uint32_t>(v6);
}

struct s50 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
    signed char f16;
};

void hash_reset_tuning(struct s50* a1) {
    a1->f0 = 0;
    a1->f4 = 0x3f800000;
    a1->f8 = 0x3f4ccccd;
    a1->f12 = 0x3fb4fdf4;
    a1->f16 = 0;
    return;
}

void fun_805dd75() {
}

void fun_805de8a() {
}

void fun_805df6c() {
}

void fun_805dfa1() {
}

void fun_805e0fc() {
}

void fun_805e13a() {
}

void fun_805e19c() {
}

void fun_805e1f5() {
}

void fun_805e224() {
}

void fun_805e24c() {
}

void fun_805e2da() {
}

void fun_805e2ea() {
}

void __libc_csu_fini() {
    return;
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_805e4b8(v1, ebx2, ebp3, __return_address());
}

int32_t g8063ffc = 0;

void fun_80495a2() {
    goto g8063ffc;
}

void fun_80494b8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8049662() {
    goto 0x80494ac;
}

void fun_80496c2() {
    goto 0x80494ac;
}

void fun_8049742() {
    goto 0x80494ac;
}

void fun_8049562() {
    goto 0x80494ac;
}

void fun_8049ac2() {
    goto 0x80494ac;
}

uint32_t dev_ino_compare(struct s46* a1, struct s47* a2) {
    int32_t v3;

    if (a2->f0 ^ a1->f0 | a1->f4 ^ a2->f4 || a2->f8 ^ a1->f8 | a1->f12 ^ a2->f12) {
        v3 = 0;
    } else {
        v3 = 1;
    }
    return static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v3));
}

void fun_8049712() {
    goto 0x80494ac;
}

void fun_8049a22() {
    goto 0x80494ac;
}

void fun_80494f2() {
    goto 0x80494ac;
}

void fun_80499a2() {
    goto 0x80494ac;
}

void fun_8049682() {
    goto 0x80494ac;
}

void sighandler(void** a1) {
    void** eax2;

    eax2 = interrupt_signal;
    if (!eax2) {
        interrupt_signal = a1;
    }
    return;
}

void fun_8049a32() {
    goto 0x80494ac;
}

void fun_8049582() {
    goto 0x80494ac;
}

void fun_80498c2() {
    goto 0x80494ac;
}

void fun_80498b2() {
    goto 0x80494ac;
}

void fun_8049602() {
    goto 0x80494ac;
}

void fun_80497d2() {
    goto 0x80494ac;
}

void fun_80496f2() {
    goto 0x80494ac;
}

void fun_8049982() {
    goto 0x80494ac;
}

void fun_80495f2() {
    goto 0x80494ac;
}

void fun_8049842() {
    goto 0x80494ac;
}

void fun_8049522() {
    goto 0x80494ac;
}

void fun_8049912() {
    goto 0x80494ac;
}

void fun_80494d2() {
    goto 0x80494ac;
}

void fun_8049832() {
    goto 0x80494ac;
}

void fun_80498e2() {
    goto 0x80494ac;
}

void fun_8049652() {
    goto 0x80494ac;
}

void fun_8049aa2() {
    goto 0x80494ac;
}

void fun_8049862() {
    goto 0x80494ac;
}

void fun_8049a02() {
    goto 0x80494ac;
}

void fun_80498a2() {
    goto 0x80494ac;
}

int32_t strcmp_df_ctime(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_ctime(a1, a2, strcmp);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t rev_xstrcoll_df_ctime(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_ctime(a2, a1, xstrcoll);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t rev_strcmp_df_ctime(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_ctime(a2, a1, strcmp);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t xstrcoll_mtime(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_mtime(a1, a2, xstrcoll);
    return eax3;
}

int32_t strcmp_df_mtime(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_mtime(a1, a2, strcmp);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t rev_xstrcoll_df_mtime(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_mtime(a2, a1, xstrcoll);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t rev_strcmp_df_mtime(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_mtime(a2, a1, strcmp);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t xstrcoll_atime(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_atime(a1, a2, xstrcoll);
    return eax3;
}

int32_t strcmp_df_atime(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_atime(a1, a2, strcmp);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t rev_xstrcoll_df_atime(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_atime(a2, a1, xstrcoll);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t rev_strcmp_df_atime(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_atime(a2, a1, strcmp);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t xstrcoll_size(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_size(a1, a2, xstrcoll);
    return eax3;
}

int32_t strcmp_size(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_size(a1, a2, strcmp);
    return eax3;
}

int32_t strcmp_df_size(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_size(a1, a2, strcmp);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t rev_xstrcoll_df_size(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_size(a2, a1, xstrcoll);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t rev_strcmp_df_size(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_size(a2, a1, strcmp);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t xstrcoll_name(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_name(a1, a2, xstrcoll);
    return eax3;
}

int32_t strcmp_df_name(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_name(a1, a2, strcmp);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t rev_xstrcoll_df_name(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_name(a2, a1, xstrcoll);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t rev_strcmp_df_name(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_name(a2, a1, strcmp);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t xstrcoll_extension(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_extension(a1, a2, xstrcoll);
    return eax3;
}

int32_t strcmp_extension(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_extension(a1, a2, strcmp);
    return eax3;
}

int32_t strcmp_df_extension(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_extension(a1, a2, strcmp);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t rev_xstrcoll_df_extension(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_extension(a2, a1, xstrcoll);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t rev_strcmp_df_extension(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_extension(a2, a1, strcmp);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t xstrcoll_version(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_version(a1, a2);
    return eax3;
}

int32_t rev_xstrcoll_df_version(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_version(a2, a1);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

void fun_8049802() {
    goto 0x80494ac;
}

void fun_80495d2() {
    goto 0x80494ac;
}

void fun_8049632() {
    goto 0x80494ac;
}

void fun_8049502() {
    goto 0x80494ac;
}

void fun_8049572() {
    goto 0x80494ac;
}

void fun_8049a62() {
    goto 0x80494ac;
}

void fun_8049932() {
    goto 0x80494ac;
}

void fun_80497c2() {
    goto 0x80494ac;
}

void fun_80497b2() {
    goto 0x80494ac;
}

void fun_8049552() {
    goto 0x80494ac;
}

void fun_80494e2() {
    goto 0x80494ac;
}

int32_t argmatch_to_argument(void** a1, int32_t* a2, void*** a3, void** a4) {
    uint32_t v5;
    void** v6;
    int32_t eax7;
    int32_t v8;

    v5 = 0;
    while (*reinterpret_cast<int32_t*>((v5 << 2) + reinterpret_cast<uint32_t>(a2))) {
        eax7 = fun_804954c(a1, reinterpret_cast<unsigned char>(a4) * v5 + reinterpret_cast<uint32_t>(a3), a4, v6);
        if (!eax7) 
            goto addr_8051d41_4;
        ++v5;
    }
    v8 = 0;
    addr_8051d6b_7:
    return v8;
    addr_8051d41_4:
    v8 = *reinterpret_cast<int32_t*>((v5 << 2) + reinterpret_cast<uint32_t>(a2));
    goto addr_8051d6b_7;
}

void close_stdout() {
    void** eax1;
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    int32_t eax6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void*** eax24;
    void** edx25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** eax33;
    void** v34;
    void** v35;
    void** v36;
    void** eax37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void*** eax45;
    void** edx46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** eax51;
    void** eax52;
    int32_t eax53;
    void** eax54;

    eax1 = stdout;
    eax6 = close_stream(eax1, v2, v3, v4, v5);
    if (eax6) {
        eax15 = fun_80496ec(0x8061841, v7, v8, v9, v10, v11, v12, v13, v14);
        eax16 = file_name;
        if (!eax16) {
            eax24 = fun_80494cc(0x8061841, v17, v18, v19, v20, v21, v22, v23, eax15);
            edx25 = *eax24;
            v26 = eax15;
            v27 = reinterpret_cast<void**>(0x8061854);
            v28 = edx25;
            fun_804997c(0, v28, 0x8061854, v26, v29, v30, v31, v32);
        } else {
            eax33 = file_name;
            eax37 = quotearg_colon(eax33, v34, v35, v36);
            eax45 = fun_80494cc(eax33, v38, v39, v40, v41, v42, v43, v44, eax15);
            edx46 = *eax45;
            v47 = eax15;
            v26 = eax37;
            v27 = reinterpret_cast<void**>(0x806184d);
            v28 = edx46;
            fun_804997c(0, v28, 0x806184d, v26, v47, v48, v49, v50);
        }
        eax51 = exit_failure;
        fun_804969c(eax51, v28, v27, v26, v47);
    }
    eax52 = stderr;
    eax53 = close_stream(eax52, v28, v27, v26, v47);
    if (eax53) {
        eax54 = exit_failure;
        fun_804969c(eax54, v28, v27, v26, v47);
    }
    return;
}

void fun_80496a2() {
    goto 0x80494ac;
}

void fun_8049672() {
    goto 0x80494ac;
}

void hash_print_statistics(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** eax8;
    void** eax9;
    void** eax10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;

    eax8 = hash_get_n_entries(a1, v3, v4, v5, v6, v7);
    eax9 = hash_get_n_buckets(a1);
    eax10 = hash_get_n_buckets_used(a1);
    eax11 = hash_get_max_bucket_length(a1);
    fun_804992c(a2, 0x8061874, eax8, v12, v13, v14, eax11, eax10);
    fun_804992c(a2, 0x806188c, eax9, v15, v16, v17, eax11, eax10);
    __asm__("fild qword [esp]");
    __asm__("fld qword [0x80618e0]");
    __asm__("fmulp st1, st0");
    __asm__("fild qword [esp]");
    __asm__("fdivp st1, st0");
    __asm__("fstp qword [esp+0xc]");
    fun_804992c(a2, 0x80618a4, eax10, v18, v19, v20, eax11, eax10);
    fun_804992c(a2, 0x80618c5, eax11, v21, v22, v23, eax11, eax10);
    return;
}

void fun_80494c2() {
    goto 0x80494ac;
}

void** hash_get_first(void** a1) {
    void** v2;
    void** v3;
    void** ebp4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ebp4;
    if (*reinterpret_cast<void***>(a1 + 16)) {
        v5 = *reinterpret_cast<void***>(a1);
        while (1) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) <= reinterpret_cast<unsigned char>(v5)) {
                fun_80494bc(v6, v7, v8, v9, v10, v5, v3, v2, a1);
            }
            if (*reinterpret_cast<void***>(v5)) 
                break;
            v5 = v5 + 8;
        }
        v11 = *reinterpret_cast<void***>(v5);
    } else {
        v11 = reinterpret_cast<void**>(0);
    }
    return v11;
}

struct s51 {
    void*** f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[15] pad24;
    int32_t f24;
};

void** hash_get_next(struct s51* a1, void** a2) {
    void*** ebx3;
    int32_t edx4;
    void** v5;
    uint32_t eax6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;

    ebx3 = a1->f0;
    edx4 = a1->f24;
    v5 = a1->f8;
    eax6 = reinterpret_cast<uint32_t>(edx4(a2, v5));
    v7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx3) + (eax6 << 3));
    if (reinterpret_cast<unsigned char>(a1->f4) <= reinterpret_cast<unsigned char>(v7)) {
        fun_80494bc(a2, v5, v8, v9, v10, v11, v12, v13, v7);
    }
    v14 = v7;
    while (v14) {
        if (*reinterpret_cast<void***>(v14) != a2) 
            goto addr_805272c_6;
        if (*reinterpret_cast<void***>(v14 + 4)) 
            goto addr_805271f_8;
        addr_805272c_6:
        v14 = *reinterpret_cast<void***>(v14 + 4);
    }
    do {
        v7 = v7 + 8;
        if (reinterpret_cast<unsigned char>(v7) >= reinterpret_cast<unsigned char>(a1->f4)) 
            break;
    } while (!*reinterpret_cast<void***>(v7));
    goto addr_8052746_12;
    v15 = reinterpret_cast<void**>(0);
    addr_8052766_14:
    return v15;
    addr_8052746_12:
    v15 = *reinterpret_cast<void***>(v7);
    goto addr_8052766_14;
    addr_805271f_8:
    v15 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v14 + 4));
    goto addr_8052766_14;
}

struct s53 {
    int32_t f0;
    struct s53* f4;
};

struct s52 {
    struct s53* f0;
    struct s53* f4;
};

uint32_t hash_get_entries(struct s52* a1, int32_t* a2, uint32_t a3) {
    uint32_t v4;
    struct s53* v5;
    struct s53* v6;
    uint32_t v7;

    v4 = 0;
    v5 = a1->f0;
    while (reinterpret_cast<uint32_t>(a1->f4) > reinterpret_cast<uint32_t>(v5)) {
        if (v5->f0) {
            v6 = v5;
            while (v6) {
                if (v4 >= a3) 
                    goto addr_805279f_7;
                *reinterpret_cast<int32_t*>((v4 << 2) + reinterpret_cast<int32_t>(a2)) = v6->f0;
                ++v4;
                v6 = v6->f4;
            }
        }
        ++v5;
    }
    v7 = v4;
    addr_80527e1_11:
    return v7;
    addr_805279f_7:
    v7 = v4;
    goto addr_80527e1_11;
}

struct s55 {
    int32_t f0;
    struct s55* f4;
};

struct s54 {
    struct s55* f0;
    struct s55* f4;
};

int32_t hash_do_for_each(struct s54* a1, int32_t a2, int32_t a3) {
    int32_t v4;
    struct s55* v5;
    struct s55* v6;
    int32_t edx7;
    uint32_t eax8;
    uint32_t eax9;
    int32_t v10;

    v4 = 0;
    v5 = a1->f0;
    while (reinterpret_cast<uint32_t>(a1->f4) > reinterpret_cast<uint32_t>(v5)) {
        if (v5->f0) {
            v6 = v5;
            while (v6) {
                edx7 = v6->f0;
                eax8 = reinterpret_cast<uint32_t>(a2(edx7, a3));
                eax9 = eax8 ^ 1;
                if (*reinterpret_cast<signed char*>(&eax9)) 
                    goto addr_8052829_7;
                ++v4;
                v6 = v6->f4;
            }
        }
        ++v5;
    }
    v10 = v4;
    addr_8052859_11:
    return v10;
    addr_8052829_7:
    v10 = v4;
    goto addr_8052859_11;
}

uint32_t hash_string() {
    uint32_t v1;
    uint32_t eax2;
    unsigned char* v3;
    int32_t v4;

    v1 = 0;
    while (eax2 = *v3, !!*reinterpret_cast<unsigned char*>(&eax2)) {
        v1 = ((v1 << 5) - v1 + *reinterpret_cast<unsigned char*>(&eax2)) % v4;
        ++v3;
    }
    return v1;
}

struct s58 {
    int32_t f0;
    struct s58* f4;
};

struct s57 {
    int32_t f0;
    struct s58* f4;
};

struct s56 {
    struct s57* f0;
    struct s57* f4;
    signed char[4] pad12;
    int32_t f12;
    int32_t f16;
    signed char[12] pad32;
    int32_t f32;
    struct s58* f36;
};

void hash_clear(struct s56* a1) {
    struct s57* v2;
    struct s58* v3;
    int32_t edx4;
    int32_t v5;
    struct s58* v6;
    int32_t edx7;
    int32_t v8;

    v2 = a1->f0;
    while (reinterpret_cast<uint32_t>(a1->f4) > reinterpret_cast<uint32_t>(v2)) {
        if (!v2->f0) {
            addr_8052c5d_4:
            ++v2;
            continue;
        } else {
            v3 = v2->f4;
            while (v3) {
                if (a1->f32) {
                    edx4 = a1->f32;
                    v5 = v3->f0;
                    edx4(v5);
                }
                v3->f0 = 0;
                v6 = v3->f4;
                v3->f4 = a1->f36;
                a1->f36 = v3;
                v3 = v6;
            }
            if (a1->f32) 
                goto addr_8052c3a_11;
        }
        addr_8052c4a_12:
        v2->f0 = 0;
        v2->f4 = reinterpret_cast<struct s58*>(0);
        goto addr_8052c5d_4;
        addr_8052c3a_11:
        edx7 = a1->f32;
        v8 = v2->f0;
        edx7(v8);
        goto addr_8052c4a_12;
    }
    a1->f12 = 0;
    a1->f16 = 0;
    return;
}

void fun_8049612() {
    goto 0x80494ac;
}

void fun_8049872() {
    goto 0x80494ac;
}

void** nouser_alist = reinterpret_cast<void**>(0);

void** getuidbyname(void** a1) {
    void** eax2;
    void** v3;
    uint32_t edx4;
    uint32_t eax5;
    void** v6;
    void** v7;
    void** v8;
    int32_t eax9;
    void** eax10;
    void** v11;
    uint32_t edx12;
    uint32_t eax13;
    void** v14;
    void** v15;
    int32_t eax16;
    struct s12* eax17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void* v31;
    void** eax32;
    void** v33;
    void** edx34;

    eax2 = user_alist;
    v3 = eax2;
    while (v3) {
        edx4 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v3 + 8));
        eax5 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1));
        if (*reinterpret_cast<signed char*>(&edx4) != *reinterpret_cast<signed char*>(&eax5)) 
            goto addr_8054696_4;
        v6 = a1;
        eax9 = strcmp(v3 + 8, v6, v7, v8);
        if (!eax9) 
            goto addr_805468b_6;
        addr_8054696_4:
        v3 = *reinterpret_cast<void***>(v3 + 4);
    }
    eax10 = nouser_alist;
    v11 = eax10;
    while (v11) {
        edx12 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v11 + 8));
        eax13 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1));
        if (*reinterpret_cast<signed char*>(&edx12) != *reinterpret_cast<signed char*>(&eax13)) 
            goto addr_80546e5_10;
        v6 = a1;
        eax16 = strcmp(v11 + 8, v6, v14, v15);
        if (!eax16) 
            goto addr_80546d9_12;
        addr_80546e5_10:
        v11 = *reinterpret_cast<void***>(v11 + 4);
    }
    eax17 = fun_8049a7c(a1, v6);
    eax24 = fun_804985c(a1, v6, v18, v19, v20, v21, v22, v23);
    eax30 = xmalloc(eax24 + 9, v6, v25, v26, v27, v28, v29);
    fun_804988c(eax30 + 8, a1, v31);
    if (!eax17) {
        eax32 = nouser_alist;
        *reinterpret_cast<void***>(eax30 + 4) = eax32;
        nouser_alist = eax30;
        v33 = reinterpret_cast<void**>(0);
    } else {
        *reinterpret_cast<void***>(eax30) = eax17->f8;
        edx34 = user_alist;
        *reinterpret_cast<void***>(eax30 + 4) = edx34;
        user_alist = eax30;
        v33 = eax30;
    }
    addr_8054777_16:
    return v33;
    addr_80546d9_12:
    v33 = reinterpret_cast<void**>(0);
    goto addr_8054777_16;
    addr_805468b_6:
    v33 = v3;
    goto addr_8054777_16;
}

void fun_8049a82() {
    goto 0x80494ac;
}

void fun_8049892() {
    goto 0x80494ac;
}

void fun_8049992() {
    goto 0x80494ac;
}

void** nogroup_alist = reinterpret_cast<void**>(0);

void** getgidbyname(void** a1) {
    void** eax2;
    void** v3;
    uint32_t edx4;
    uint32_t eax5;
    void** v6;
    void** v7;
    void** v8;
    int32_t eax9;
    void** eax10;
    void** v11;
    uint32_t edx12;
    uint32_t eax13;
    void** v14;
    void** v15;
    int32_t eax16;
    struct s13* eax17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void* v31;
    void** eax32;
    void** v33;
    void** edx34;

    eax2 = group_alist;
    v3 = eax2;
    while (v3) {
        edx4 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v3 + 8));
        eax5 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1));
        if (*reinterpret_cast<signed char*>(&edx4) != *reinterpret_cast<signed char*>(&eax5)) 
            goto addr_8054896_4;
        v6 = a1;
        eax9 = strcmp(v3 + 8, v6, v7, v8);
        if (!eax9) 
            goto addr_805488b_6;
        addr_8054896_4:
        v3 = *reinterpret_cast<void***>(v3 + 4);
    }
    eax10 = nogroup_alist;
    v11 = eax10;
    while (v11) {
        edx12 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v11 + 8));
        eax13 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1));
        if (*reinterpret_cast<signed char*>(&edx12) != *reinterpret_cast<signed char*>(&eax13)) 
            goto addr_80548e5_10;
        v6 = a1;
        eax16 = strcmp(v11 + 8, v6, v14, v15);
        if (!eax16) 
            goto addr_80548d9_12;
        addr_80548e5_10:
        v11 = *reinterpret_cast<void***>(v11 + 4);
    }
    eax17 = fun_80495dc(a1, v6);
    eax24 = fun_804985c(a1, v6, v18, v19, v20, v21, v22, v23);
    eax30 = xmalloc(eax24 + 9, v6, v25, v26, v27, v28, v29);
    fun_804988c(eax30 + 8, a1, v31);
    if (!eax17) {
        eax32 = nogroup_alist;
        *reinterpret_cast<void***>(eax30 + 4) = eax32;
        nogroup_alist = eax30;
        v33 = reinterpret_cast<void**>(0);
    } else {
        *reinterpret_cast<void***>(eax30) = eax17->f8;
        edx34 = group_alist;
        *reinterpret_cast<void***>(eax30 + 4) = edx34;
        group_alist = eax30;
        v33 = eax30;
    }
    addr_8054977_16:
    return v33;
    addr_80548d9_12:
    v33 = reinterpret_cast<void**>(0);
    goto addr_8054977_16;
    addr_805488b_6:
    v33 = v3;
    goto addr_8054977_16;
}

void fun_80495e2() {
    goto 0x80494ac;
}

void fun_80496e2() {
    goto 0x80494ac;
}

void fun_8049a72() {
    goto 0x80494ac;
}

void** quotearg_alloc(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void*** eax13;
    void** v14;
    void** eax15;
    void** eax16;
    void** v17;
    void** v18;
    void*** eax19;

    eax13 = fun_80494cc(v4, v5, v6, v7, v8, v9, v10, v11, v12);
    v14 = *eax13;
    eax15 = quotearg_buffer(0, 0, a1, a2, a3);
    eax16 = xcharalloc(eax15 + 1, 0, a1, a2, a3);
    quotearg_buffer(eax16, eax15 + 1, a1, a2, a3);
    eax19 = fun_80494cc(eax16, eax15 + 1, a1, a2, a3, v17, v18, eax16, eax15 + 1);
    *eax19 = v14;
    return eax16;
}

void fun_80498d2() {
    goto 0x80494ac;
}

void fun_8049a42() {
    goto 0x80494ac;
}

void fun_8049962() {
    goto 0x80494ac;
}

void** x2realloc(void** a1, uint32_t* a2) {
    void** eax3;

    eax3 = x2nrealloc(a1, a2, 1);
    return eax3;
}

void fun_8049942() {
    goto 0x80494ac;
}

void fun_80495b2() {
    goto 0x80494ac;
}

void fun_805dfd9() {
}

void fun_805e315(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    uint32_t edi6;
    uint32_t esi7;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x5cc9;
    _init();
    edi6 = reinterpret_cast<uint32_t>(ebx4 - 0xf4 - (ebx4 - 0xf4) >> 2);
    if (edi6) {
        esi7 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi7 * 4 - 0xf4)(a1, a2, a3);
            ++esi7;
        } while (esi7 < edi6);
    }
    return;
}

void fun_8049532() {
    goto 0x80494ac;
}

void fun_80499c2() {
    goto 0x80494ac;
}

void fun_8049952() {
    goto 0x80494ac;
}

void fun_8049882() {
    goto 0x80494ac;
}

void fun_80496d2() {
    goto 0x80494ac;
}

void fun_80499e2() {
    goto 0x80494ac;
}

void fun_8049812() {
    goto 0x80494ac;
}

void fun_8049762() {
    goto 0x80494ac;
}

void fun_8049592() {
    goto 0x80494ac;
}

void fun_8049ab2() {
    goto 0x80494ac;
}

void fun_80497a2() {
    goto 0x80494ac;
}

void fun_8049792() {
    goto 0x80494ac;
}

void fun_8049752() {
    goto 0x80494ac;
}

void fun_80499f2() {
    goto 0x80494ac;
}

void fun_80495c2() {
    goto 0x80494ac;
}

void fun_8049722() {
    goto 0x80494ac;
}

void fun_80496b2() {
    goto 0x80494ac;
}

void fun_8049622() {
    goto 0x80494ac;
}

void fun_8049542() {
    goto 0x80494ac;
}

void** quotearg_n_style_mem(void** a1, int32_t a2, void** a3, void** a4) {
    void* ebp5;
    void** eax6;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    quoting_options_from_style(reinterpret_cast<int32_t>(ebp5) - 36, a2);
    eax6 = quotearg_n_options(a1, a3, a4, reinterpret_cast<int32_t>(ebp5) + 0xffffffdc);
    return eax6;
}

int32_t strcmp_ctime(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_ctime(a1, a2, strcmp);
    return eax3;
}

int32_t strcmp_mtime(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_mtime(a1, a2, strcmp);
    return eax3;
}

int32_t strcmp_atime(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_atime(a1, a2, strcmp);
    return eax3;
}

int32_t rev_xstrcoll_size(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_size(a2, a1, xstrcoll);
    return eax3;
}

int32_t strcmp_name(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_name(a1, a2, strcmp);
    return eax3;
}

int32_t rev_xstrcoll_extension(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_extension(a2, a1, xstrcoll);
    return eax3;
}

int32_t rev_xstrcoll_version(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_version(a2, a1);
    return eax3;
}

void fun_8049902() {
    goto 0x80494ac;
}

void fun_8049702() {
    goto 0x80494ac;
}

void fun_80497f2() {
    goto 0x80494ac;
}

void fun_80499b2() {
    goto 0x80494ac;
}

void fun_80499d2() {
    goto 0x80494ac;
}

struct s59 {
    void*** f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[15] pad24;
    int32_t f24;
    int32_t f28;
};

void** hash_lookup(struct s59* a1, void** a2) {
    void*** ebx3;
    int32_t edx4;
    void** v5;
    uint32_t eax6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    int32_t edx15;
    void** v16;
    signed char al17;
    void** v18;

    ebx3 = a1->f0;
    edx4 = a1->f24;
    v5 = a1->f8;
    eax6 = reinterpret_cast<uint32_t>(edx4(a2, v5));
    v7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx3) + (eax6 << 3));
    if (reinterpret_cast<unsigned char>(a1->f4) <= reinterpret_cast<unsigned char>(v7)) {
        fun_80494bc(a2, v5, v8, v9, v10, v11, v12, v13, v7);
    }
    if (*reinterpret_cast<void***>(v7)) {
        v14 = v7;
        while (v14) {
            edx15 = a1->f28;
            v16 = *reinterpret_cast<void***>(v14);
            al17 = reinterpret_cast<signed char>(edx15(a2, v16));
            if (al17) 
                goto addr_805264e_7;
            v14 = *reinterpret_cast<void***>(v14 + 4);
        }
    } else {
        v18 = reinterpret_cast<void**>(0);
        goto addr_805266e_10;
    }
    v18 = reinterpret_cast<void**>(0);
    addr_805266e_10:
    return v18;
    addr_805264e_7:
    v18 = *reinterpret_cast<void***>(v14);
    goto addr_805266e_10;
}

void fun_8049512() {
    goto 0x80494ac;
}

void quotearg_free(void** a1) {
    void** v2;
    void** v3;
    void** ebp4;
    void** eax5;
    void** v6;
    void** v7;
    void** eax8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ebp4;
    eax5 = slotvec;
    v6 = eax5;
    v7 = reinterpret_cast<void**>(1);
    while (eax8 = nslots, reinterpret_cast<unsigned char>(v7) < reinterpret_cast<unsigned char>(eax8)) {
        v9 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v7) << 3) + reinterpret_cast<unsigned char>(v6) + 4);
        free(v9, v10, v11, v12, v7, v6, v3, v2, a1);
        ++v7;
    }
    if (*reinterpret_cast<void***>(v6 + 4) != 0x8064760) {
        v13 = *reinterpret_cast<void***>(v6 + 4);
        free(v13, v14, v15, v16, v7, v6, v3, v2, a1);
        slotvec0 = reinterpret_cast<void**>(0x100);
        g80643dc = reinterpret_cast<void**>(0x8064760);
    }
    if (v6 != 0x80643d8) {
        free(v6, v17, v18, v19, v7, v6, v3, v2, a1);
        slotvec = reinterpret_cast<void**>(0x80643d8);
    }
    nslots = reinterpret_cast<void**>(1);
    return;
}

void fun_8049822() {
    goto 0x80494ac;
}

void fun_8049922() {
    goto 0x80494ac;
}

void xzalloc(void** a1) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** ebp7;
    void** eax8;
    void** v9;
    void** v10;
    void** v11;

    eax8 = xmalloc(a1, v2, v3, v4, v5, v6, ebp7);
    fun_804964c(eax8, 0, a1, v9, v10, v11, ebp7);
    return;
}

void fun_8049852() {
    goto 0x80494ac;
}

void fun_8049732() {
    goto 0x80494ac;
}

void fun_80498f2() {
    goto 0x80494ac;
}

void fun_8049a52() {
    goto 0x80494ac;
}

void fun_8049692() {
    goto 0x80494ac;
}

void fun_8049782() {
    goto 0x80494ac;
}

void fun_80497e2() {
    goto 0x80494ac;
}

void fun_8049a12() {
    goto 0x80494ac;
}

void** quotearg_style(int32_t a1, void** a2) {
    void** eax3;

    eax3 = quotearg_n_style(0, a1, a2);
    return eax3;
}

int32_t rev_xstrcoll_ctime(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_ctime(a2, a1, xstrcoll);
    return eax3;
}

int32_t rev_xstrcoll_mtime(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_mtime(a2, a1, xstrcoll);
    return eax3;
}

int32_t rev_xstrcoll_atime(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_atime(a2, a1, xstrcoll);
    return eax3;
}

int32_t rev_strcmp_size(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_size(a2, a1, strcmp);
    return eax3;
}

int32_t rev_xstrcoll_name(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_name(a2, a1, xstrcoll);
    return eax3;
}

int32_t rev_strcmp_extension(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_extension(a2, a1, strcmp);
    return eax3;
}

void fun_8049772() {
    goto 0x80494ac;
}

int32_t xstrcoll_df_version(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_version(a1, a2);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

void fun_8049642() {
    goto 0x80494ac;
}

void fun_8049972() {
    goto 0x80494ac;
}

void fun_8049a92() {
    goto 0x80494ac;
}

void** xcalloc(void** a1, void** a2) {
    void** eax3;
    void** v4;
    void** v5;
    void** v6;

    eax3 = fun_804960c(a1, a2);
    if (!eax3) {
        xalloc_die(a1, a2, v4, v5, v6);
    }
    return eax3;
}

int32_t rev_strcmp_ctime(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_ctime(a2, a1, strcmp);
    return eax3;
}

int32_t rev_strcmp_mtime(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_mtime(a2, a1, strcmp);
    return eax3;
}

int32_t rev_strcmp_atime(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_atime(a2, a1, strcmp);
    return eax3;
}

int32_t xstrcoll_df_size(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_size(a1, a2, xstrcoll);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t rev_strcmp_name(void** a1, void** a2) {
    int32_t eax3;

    eax3 = cmp_name(a2, a1, strcmp);
    return eax3;
}

int32_t xstrcoll_df_extension(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_extension(a1, a2, xstrcoll);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t xstrcoll_df_ctime(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_ctime(a1, a2, xstrcoll);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t xstrcoll_df_mtime(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_mtime(a1, a2, xstrcoll);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t xstrcoll_df_atime(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_atime(a1, a2, xstrcoll);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}

int32_t xstrcoll_df_name(void** a1, void** a2) {
    void** v3;
    void** v4;
    unsigned char al5;
    void** v6;
    void** v7;
    unsigned char al8;
    uint32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t v12;

    al5 = is_directory(a1, v3, v4);
    al8 = is_directory(a2, v6, v7);
    if (!al5 || (eax9 = static_cast<uint32_t>(al8) ^ 1, *reinterpret_cast<signed char*>(&eax9) == 0)) {
        eax10 = static_cast<uint32_t>(al5) ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax10) || !al8) {
            eax11 = cmp_name(a1, a2, xstrcoll);
            v12 = eax11;
        } else {
            v12 = 1;
        }
    } else {
        v12 = -1;
    }
    return v12;
}
