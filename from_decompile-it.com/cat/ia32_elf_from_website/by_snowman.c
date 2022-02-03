
void fun_8048aa8(int32_t a1, int32_t a2);

void fun_8048b5c();

void frame_dummy();

void __do_global_ctors_aux();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_8048aa8(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0x954c - 8)) {
        fun_8048b5c();
    }
    frame_dummy();
    __do_global_ctors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048aa8(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x954c - 8)) {
        fun_8048b5c();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x8048b62;

void fun_8048b5c() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void exit(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        exit(0x8051f18);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x8051f08);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t __libc_start_main = 0x8048bb2;

void fun_8048bac(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t gettext = 0x8048c22;

void** fun_8048c1c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    goto gettext;
}

int32_t fprintf = 0x8048d02;

void fun_8048cfc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto fprintf;
}

void** input_desc = reinterpret_cast<void**>(0);

void** safe_read(void** a1, void** a2, void** a3);

void** full_write(void** a1, void** a2, void** a3);

void*** fun_8048afc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

void fun_8048d3c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void** infile = reinterpret_cast<void**>(0);

unsigned char simple_cat(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** ebp12;
    void** v13;
    void** ebx14;
    void** edx15;
    void** eax16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void*** eax28;
    void** eax29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** ebx34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void*** eax39;
    void** eax40;
    void** v41;
    void** v42;
    void** v43;
    unsigned char v44;
    uint32_t eax45;

    v11 = ebp12;
    v13 = ebx14;
    while (edx15 = input_desc, eax16 = safe_read(edx15, a1, a2), !reinterpret_cast<int1_t>(eax16 == 0xffffffff)) {
        if (!eax16) 
            goto addr_80490a1_4;
        v17 = eax16;
        eax18 = full_write(1, a1, v17);
        if (eax18 == v17) 
            continue;
        eax23 = fun_8048c1c("write error", a1, v17, v19, v20, v21, v22, v17, eax16, v13, v11);
        eax28 = fun_8048afc("write error", a1, v17, v24, v25, v26, v27, v17, eax16, v13, v11);
        eax29 = *eax28;
        fun_8048d3c(1, eax29, eax23, v30, v31, v32, v33, v17, eax16, v13);
    }
    ebx34 = infile;
    eax39 = fun_8048afc(edx15, a1, a2, v35, v36, v37, v38, v17, eax16, v13, v11);
    eax40 = *eax39;
    fun_8048d3c(0, eax40, "%s", ebx34, v41, v42, v43, v17, eax16, v13);
    v44 = 0;
    addr_80490fe_8:
    eax45 = v44;
    return *reinterpret_cast<unsigned char*>(&eax45);
    addr_80490a1_4:
    v44 = 1;
    goto addr_80490fe_8;
}

int32_t __errno_location = 0x8048b02;

void*** fun_8048afc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    goto __errno_location;
}

int32_t error = 0x8048d42;

void fun_8048d3c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    goto error;
}

void** safe_write(void** a1, void** a2, void** a3);

void** full_write(void** a1, void** a2, void** a3) {
    void** v4;
    void** ebp5;
    void** v6;
    void** v7;
    void** eax8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void*** eax13;

    v4 = ebp5;
    v6 = reinterpret_cast<void**>(0);
    v7 = a2;
    while (a3 && (eax8 = safe_write(a1, v7, a3), eax8 != 0xffffffff)) {
        if (!eax8) 
            goto addr_8049e25_4;
        v6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v6) + reinterpret_cast<unsigned char>(eax8));
        v7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v7) + reinterpret_cast<unsigned char>(eax8));
        a3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(eax8));
    }
    addr_8049e4a_6:
    return v6;
    addr_8049e25_4:
    eax13 = fun_8048afc(a1, v7, a3, v9, v10, v11, v12, eax8, v7, v6, v4);
    *eax13 = reinterpret_cast<void**>(28);
    goto addr_8049e4a_6;
}

int32_t memmove = 0x8048d52;

void fun_8048d4c(void** a1, void** a2, void** a3) {
    goto memmove;
}

int32_t ioctl = 0x8048c52;

int32_t fun_8048c4c(void** a1, void** a2, void** a3) {
    goto ioctl;
}

void write_pending(void** a1, void*** a2, void** a3, void** a4) {
    void** v5;
    void** eax6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** ebx12;
    void** ebp13;
    void** eax14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void*** eax20;
    void** eax21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;

    v5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*a2) - reinterpret_cast<unsigned char>(a1));
    if (v5) {
        eax6 = full_write(1, a1, v5);
        if (eax6 != v5) {
            eax14 = fun_8048c1c("write error", a1, v5, v7, v8, v9, v10, v11, v5, ebx12, ebp13);
            eax20 = fun_8048afc("write error", a1, v5, v15, v16, v17, v18, v19, v5, ebx12, ebp13);
            eax21 = *eax20;
            fun_8048d3c(1, eax21, eax14, v22, v23, v24, v25, v26, v5, ebx12);
        }
        *a2 = a1;
    }
    return;
}

void** line_num_end = reinterpret_cast<void**>(0xd1);

void** line_num_start = reinterpret_cast<void**>(0xd1);

signed char line_buf = 32;

void** line_num_print = reinterpret_cast<void**>(0xcc);

void next_line_num(void** a1, void** a2, void** a3) {
    void** eax4;
    void** v5;
    uint32_t eax6;
    uint32_t edx7;
    void** eax8;
    void** eax9;
    void** eax10;
    void** eax11;
    void** edx12;
    void** eax13;
    void** eax14;

    eax4 = line_num_end;
    v5 = eax4;
    do {
        eax6 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v5));
        edx7 = eax6 + 1;
        *reinterpret_cast<void***>(v5) = *reinterpret_cast<void***>(&edx7);
        if (*reinterpret_cast<signed char*>(&eax6) <= 56) 
            break;
        *reinterpret_cast<void***>(v5) = reinterpret_cast<void**>(48);
        --v5;
        eax8 = line_num_start;
    } while (reinterpret_cast<unsigned char>(v5) >= reinterpret_cast<unsigned char>(eax8));
    goto addr_8048ff8_4;
    addr_804903e_5:
    return;
    addr_8048ff8_4:
    eax9 = line_num_start;
    if (reinterpret_cast<unsigned char>(eax9) <= reinterpret_cast<unsigned char>("                 0\t")) {
        line_buf = 62;
    } else {
        eax10 = line_num_start;
        line_num_start = eax10 - 1;
        eax11 = line_num_start;
        *reinterpret_cast<void***>(eax11) = reinterpret_cast<void**>(49);
    }
    edx12 = line_num_start;
    eax13 = line_num_print;
    if (reinterpret_cast<unsigned char>(edx12) < reinterpret_cast<unsigned char>(eax13)) {
        eax14 = line_num_print;
        line_num_print = eax14 - 1;
        goto addr_804903e_5;
    }
}

int32_t stpcpy = 0x8048bc2;

void** fun_8048bbc(void** a1, void** a2, void** a3) {
    goto stpcpy;
}

/* __i686.get_pc_thunk.bx */
int32_t __i686_get_pc_thunk_bx();

int32_t fun_8048d6c(int32_t a1, void** a2, int32_t a3);

int32_t fstat64(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    int32_t eax11;
    int32_t eax12;

    eax11 = __i686_get_pc_thunk_bx();
    eax12 = fun_8048d6c(3, a1, eax11);
    return eax12;
}

int32_t strcmp = 0x8048da2;

int32_t fun_8048d9c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    goto strcmp;
}

int32_t close = 0x8048ce2;

int32_t fun_8048cdc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    goto close;
}

void** quotearg_char(void** a1, int32_t a2);

void** quotearg_colon(void** a1) {
    void** eax2;

    eax2 = quotearg_char(a1, 58);
    return eax2;
}

int32_t _exit = 0x8048be2;

void fun_8048bdc(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto _exit;
}

int32_t strlen = 0x8048ca2;

void** fun_8048c9c(void** a1, void** a2, void** a3, void* a4) {
    goto strlen;
}

int32_t memcmp = 0x8048b22;

int32_t fun_8048b1c(void** a1, void** a2, void** a3, void* a4) {
    goto memcmp;
}

int32_t __ctype_b_loc = 0x8048c62;

int32_t* fun_8048c5c(void** a1, void** a2, void** a3, void* a4) {
    goto __ctype_b_loc;
}

int32_t mbrtowc = 0x8048c02;

void* fun_8048bfc(void** a1, void** a2, void** a3, void* a4) {
    goto mbrtowc;
}

int32_t iswprint = 0x8048d92;

int32_t fun_8048d8c(void** a1, void** a2, void** a3, void* a4) {
    goto iswprint;
}

int32_t free = 0x8048c32;

void fun_8048c2c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    goto free;
}

void** slotvec = reinterpret_cast<void**>(0xe8);

void fun_8048aec(void** a1, void** a2, void** a3, void** a4, void** a5);

void** nslots = reinterpret_cast<void**>(1);

void xalloc_die(void** a1, void** a2, void** a3);

void** xrealloc(void** a1, void** a2);

void** slotvec0 = reinterpret_cast<void**>(0);

void** g80520ec = reinterpret_cast<void**>(0x80);

void fun_8048b9c(void** a1, void** a2, void** a3, void* a4);

void** quotearg_buffer(void** a1, void** a2, void** a3, void** a4, void** a5);

void** xcharalloc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

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
    void** v14;
    void** v15;
    void*** eax16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    unsigned char v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    void** eax33;
    void** edx34;
    void** edx35;
    void** eax36;
    void* v37;
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
    void*** eax52;

    eax16 = fun_8048afc(v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15);
    v17 = *eax16;
    eax18 = slotvec;
    v19 = eax18;
    if (reinterpret_cast<signed char>(a1) < reinterpret_cast<signed char>(0)) {
        fun_8048aec(v20, v21, v22, v23, v24);
    }
    eax25 = nslots;
    if (reinterpret_cast<unsigned char>(eax25) <= reinterpret_cast<unsigned char>(a1)) {
        v26 = reinterpret_cast<uint1_t>(v19 == 0x80520e8);
        if (reinterpret_cast<unsigned char>(a1 + 1) > reinterpret_cast<unsigned char>(0x1fffffff)) {
            xalloc_die(v27, v28, v29);
        }
        v30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1 + 1) << 3);
        if (!v26) {
            v31 = v19;
        } else {
            v31 = reinterpret_cast<void**>(0);
        }
        eax32 = xrealloc(v31, v30);
        v19 = eax32;
        slotvec = v19;
        if (v26) {
            eax33 = slotvec0;
            edx34 = g80520ec;
            *reinterpret_cast<void***>(v19) = eax33;
            *reinterpret_cast<void***>(v19 + 4) = edx34;
        }
        edx35 = nslots;
        eax36 = nslots;
        fun_8048b9c((reinterpret_cast<unsigned char>(eax36) << 3) + reinterpret_cast<unsigned char>(v19), 0, (reinterpret_cast<unsigned char>(a1 + 1) - reinterpret_cast<unsigned char>(edx35)) * 8, v37);
        nslots = a1 + 1;
    }
    v38 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(a1) << 3) + reinterpret_cast<unsigned char>(v19));
    v39 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(a1) << 3) + reinterpret_cast<unsigned char>(v19) + 4);
    v40 = a4;
    v41 = a3;
    v42 = a2;
    v43 = v38;
    v44 = v39;
    eax45 = quotearg_buffer(v44, v43, v42, v41, v40);
    if (reinterpret_cast<unsigned char>(v38) <= reinterpret_cast<unsigned char>(eax45)) {
        *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(a1) << 3) + reinterpret_cast<unsigned char>(v19)) = eax45 + 1;
        if (v39 != 0x8052180) {
            fun_8048c2c(v39, v43, v42, v41, v40, v46, v47, v30, v31, eax45);
        }
        eax49 = xcharalloc(eax45 + 1, v43, v42, v41, v40, v48);
        v39 = eax49;
        *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(a1) << 3) + reinterpret_cast<unsigned char>(v19) + 4) = v39;
        v40 = a4;
        v41 = a3;
        v42 = a2;
        v43 = eax45 + 1;
        v44 = v39;
        quotearg_buffer(v44, v43, v42, v41, v40);
    }
    eax52 = fun_8048afc(v44, v43, v42, v41, v40, v50, v51, v30, v31, eax45, v39);
    *eax52 = v17;
    return v39;
}

int32_t abort = 0x8048af2;

void fun_8048aec(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto abort;
}

void** exit_failure = reinterpret_cast<void**>(1);

int32_t fun_8048d2c(void** a1);

int32_t fun_8048bcc(void** a1);

int32_t fun_8048c6c(void** a1);

void xalloc_die(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** ebp9;
    void** eax10;
    void** edx11;
    void** v12;
    void** v13;
    void** v14;
    int32_t eax15;
    void** v16;
    int32_t eax17;
    int32_t eax18;
    uint32_t eax19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void*** eax24;
    uint32_t eax25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void*** eax30;

    eax10 = fun_8048c1c("memory exhausted", v4, v5, v6, v7, v8, ebp9, __return_address(), a1, a2, a3);
    edx11 = exit_failure;
    fun_8048d3c(edx11, 0, "%s", eax10, v12, v13, ebp9, __return_address(), a1, a2);
    fun_8048aec(edx11, 0, "%s", eax10, v14);
    eax15 = fun_8048d2c(0);
    *reinterpret_cast<unsigned char*>(&v16 + 3) = reinterpret_cast<uint1_t>(!!eax15);
    eax17 = fun_8048bcc(0);
    *reinterpret_cast<unsigned char*>(&v16 + 2) = reinterpret_cast<uint1_t>(!!eax17);
    eax18 = fun_8048c6c(0);
    *reinterpret_cast<unsigned char*>(&v16 + 1) = reinterpret_cast<uint1_t>(!!eax18);
    if (*reinterpret_cast<unsigned char*>(&v16 + 2) || (eax19 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v16 + 1)) ^ 1, !*reinterpret_cast<signed char*>(&eax19)) && (*reinterpret_cast<unsigned char*>(&v16 + 3) || (eax24 = fun_8048afc(0, v20, v21, v22, v23, v16, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, edx11, 0, "%s", eax10), *eax24 != 9))) {
        eax25 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v16 + 1)) ^ 1;
        if (*reinterpret_cast<signed char*>(&eax25)) {
            eax30 = fun_8048afc(0, v26, v27, v28, v29, v16, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, edx11, 0, "%s", eax10);
            *eax30 = reinterpret_cast<void**>(0);
        }
    }
    goto edx11;
}

int32_t memset = 0x8048ba2;

void fun_8048b9c(void** a1, void** a2, void** a3, void* a4) {
    goto memset;
}

void fseterr(void** a1, void** a2, void** a3, void** a4) {
    *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) | 32);
    return;
}

int32_t __stack_chk_fail = 0x8048d22;

void** fun_8048d1c(void** a1, void** a2, void** a3, void** a4) {
    goto __stack_chk_fail;
}

void** fun_8048d0c(void** a1, void** a2, void** a3, void** a4);

void** xmalloc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** v13;
    void** eax14;
    void** v15;
    void** v16;

    eax14 = fun_8048d0c(a1, v11, v12, v13);
    if (!eax14 && a1) {
        xalloc_die(a1, v15, v16);
    }
    return eax14;
}

void** fun_8048b6c(void** a1, void** a2);

void** xrealloc(void** a1, void** a2) {
    void** eax3;
    void** ebp4;

    eax3 = fun_8048b6c(a1, a2);
    if (!eax3 && a2) {
        xalloc_die(a1, a2, ebp4);
    }
    return eax3;
}

void** x2nrealloc(void** a1, uint32_t* a2, uint32_t a3) {
    uint32_t v4;
    void** v5;
    void** v6;
    void** v7;
    uint32_t v8;
    void** eax9;

    v4 = *a2;
    if (a1) {
        if (0xaaaaaaaa / a3 <= v4) {
            xalloc_die(v5, v6, v7);
        }
        v4 = v4 + (v4 + 1 >> 1);
    } else {
        if (!v4) {
            v8 = 64 / a3;
            v4 = v8 + static_cast<unsigned char>(reinterpret_cast<uint1_t>(v8 == 0));
        }
    }
    *a2 = v4;
    eax9 = xrealloc(a1, v4 * a3);
    return eax9;
}

void** fun_8048c8c(void** a1, void** a2, void** a3);

void** xmemdup(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** ebp8;
    void** eax9;
    void** eax10;

    eax9 = xmalloc(a2, v3, v4, v5, v6, v7, ebp8, __return_address(), a1, a2);
    eax10 = fun_8048c8c(eax9, a1, a2);
    return eax10;
}

int32_t malloc = 0x8048d12;

void** fun_8048d0c(void** a1, void** a2, void** a3, void** a4) {
    goto malloc;
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

int32_t memcpy = 0x8048c92;

void** fun_8048c8c(void** a1, void** a2, void** a3) {
    goto memcpy;
}

uint32_t rpl_isnanl(void** a1, void** a2, void** a3);

int32_t is_infinitel(void** a1, void** a2, void** a3) {
    void** edx4;
    uint32_t eax5;
    int16_t fpu_status_word6;
    int1_t pf7;
    uint32_t eax8;
    int16_t ax9;
    int16_t fpu_status_word10;
    int32_t v11;

    edx4 = a2;
    eax5 = rpl_isnanl(a1, edx4, a3);
    if (eax5 || (*reinterpret_cast<int16_t*>(&eax5) = fpu_status_word6, pf7 = *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax5) + 1), *reinterpret_cast<unsigned char*>(&eax5) = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax5) + 1), *reinterpret_cast<unsigned char*>(&edx4) = reinterpret_cast<uint1_t>(!pf7), eax8 = eax5 & reinterpret_cast<unsigned char>(edx4) ^ 1, !*reinterpret_cast<signed char*>(&eax8)) && ((ax9 = fpu_status_word10, *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax9) + 1)) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax9) + 1))) {
        v11 = 1;
    } else {
        v11 = 0;
    }
    return v11;
}

uint32_t rpl_isnanl(void** a1, void** a2, void** a3) {
    uint32_t v4;
    uint32_t v5;

    v4 = reinterpret_cast<unsigned char>(a3) & 0x7fff;
    if (v4) {
        if (v4 != 0x7fff) {
            v5 = reinterpret_cast<unsigned char>(a2) >> 31 ^ 1;
        } else {
            v5 = reinterpret_cast<uint1_t>(!!(reinterpret_cast<unsigned char>(a1) | reinterpret_cast<unsigned char>(a2) ^ 0x80000000));
        }
    } else {
        v5 = reinterpret_cast<unsigned char>(a2) >> 31;
    }
    return v5;
}

int32_t realloc = 0x8048b72;

void** fun_8048b6c(void** a1, void** a2) {
    goto realloc;
}

void** xsum4(void** a1, void** a2, void** a3, void** a4) {
    void** eax5;
    void** eax6;
    void** eax7;

    eax5 = xsum(a1, a2);
    eax6 = xsum(eax5, a3);
    eax7 = xsum(eax6, a4);
    return eax7;
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

int32_t __cxa_atexit = 0x8048b12;

void fun_8048b0c(int32_t a1, int32_t a2, int32_t a3) {
    goto __cxa_atexit;
}

int32_t exit = 0x8048db2;

void fun_8048dac(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    goto exit;
}

int32_t printf = 0x8048cc2;

void fun_8048cbc(void** a1, void** a2, void** a3) {
    goto printf;
}

int32_t fputs_unlocked = 0x8048b42;

void fun_8048b3c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto fputs_unlocked;
}

void emit_bug_reporting_address(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** ebp10;
    void** eax11;

    eax11 = fun_8048c1c("\nReport bugs to <%s>.\n", v9, ebp10, __return_address(), a1, a2, a3, a4, a5, a6, a7);
    fun_8048cbc(eax11, "bug-coreutils@gnu.org", ebp10);
    return;
}

int32_t newlines2 = 0;

void** quote(void** a1, void** a2, void** a3);

unsigned char cat(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void* ebp11;
    void** eax12;
    void** edx13;
    void** ecx14;
    void** ebx15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    void** v21;
    void** ecx22;
    void** v23;
    int32_t eax24;
    int32_t v25;
    signed char v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** eax31;
    void** v32;
    void** v33;
    void** eax34;
    void** v35;
    void** v36;
    void*** eax37;
    void** eax38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    uint32_t eax44;
    void** eax45;
    void** eax46;
    uint32_t eax47;
    unsigned char v48;
    signed char v49;
    void** eax50;
    int32_t eax51;
    void** v52;
    void** v53;
    void*** eax54;
    void** v55;
    void** v56;
    void*** eax57;
    void** v58;
    void** v59;
    void*** eax60;
    void** v61;
    void** v62;
    void*** eax63;
    void** v64;
    void** v65;
    void*** eax66;
    void** v67;
    void** edx68;
    void** eax69;
    uint32_t eax70;
    void** eax71;
    void** eax72;
    uint32_t eax73;
    uint32_t edx74;
    uint32_t eax75;
    uint32_t eax76;
    uint32_t eax77;
    uint32_t eax78;
    uint32_t eax79;
    uint32_t eax80;
    uint32_t edx81;
    uint32_t eax82;
    void** ebx83;
    void** v84;
    void** v85;
    void*** eax86;
    void** eax87;
    void** v88;
    unsigned char v89;
    uint32_t eax90;
    void** v91;
    void** eax92;
    void** eax93;
    void** v94;
    void** v95;
    void** eax96;
    void** v97;
    void** v98;
    void*** eax99;
    void** eax100;
    void** v101;

    ebp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax12 = a5;
    edx13 = a6;
    ecx14 = a7;
    ebx15 = a8;
    *reinterpret_cast<signed char*>(&v16) = *reinterpret_cast<signed char*>(&eax12);
    *reinterpret_cast<unsigned char*>(&v17) = *reinterpret_cast<unsigned char*>(&edx13);
    *reinterpret_cast<unsigned char*>(&v18) = *reinterpret_cast<unsigned char*>(&ecx14);
    *reinterpret_cast<unsigned char*>(&v19) = *reinterpret_cast<unsigned char*>(&ebx15);
    eax20 = a9;
    *reinterpret_cast<signed char*>(&v21) = *reinterpret_cast<signed char*>(&eax20);
    ecx22 = a10;
    *reinterpret_cast<signed char*>(&v23) = *reinterpret_cast<signed char*>(&ecx22);
    eax24 = newlines2;
    v25 = eax24;
    v26 = 1;
    v27 = a1;
    v28 = v27 + 1;
    v29 = a3;
    while (1) {
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(a4)) <= reinterpret_cast<unsigned char>(v29)) {
            v30 = a3;
            do {
                eax31 = full_write(1, v30, a4);
                if (eax31 != a4) {
                    eax34 = fun_8048c1c("write error", v30, a4, v32, v33, v23, v21, v19, v18, v17, v16);
                    eax37 = fun_8048afc("write error", v30, a4, v35, v36, v23, v21, v19, v18, v17, v16);
                    eax38 = *eax37;
                    fun_8048d3c(1, eax38, eax34, v39, v40, v23, v21, v19, v18, v17);
                }
                v30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(a4));
            } while (reinterpret_cast<unsigned char>(a4) <= reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v29) - reinterpret_cast<unsigned char>(v30)));
            v41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v29) - reinterpret_cast<unsigned char>(v30));
            v42 = v30;
            v43 = a3;
            fun_8048d4c(v43, v42, v41);
            v29 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v29) - reinterpret_cast<unsigned char>(v30)));
        }
        if (reinterpret_cast<unsigned char>(v28) <= reinterpret_cast<unsigned char>(v27)) {
            ++v25;
            if (v25 <= 0) {
                addr_8049405_10:
                if (*reinterpret_cast<signed char*>(&v21)) {
                    *reinterpret_cast<void***>(v29) = reinterpret_cast<void**>(36);
                    ++v29;
                }
            } else {
                if (v25 <= 1 || (v25 = 2, *reinterpret_cast<signed char*>(&v23) == 0)) {
                    eax44 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v19)) ^ 1;
                    if (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax44)) & static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v18))) {
                        next_line_num(v43, v42, v41);
                        eax45 = line_num_print;
                        v42 = eax45;
                        v43 = v29;
                        eax46 = fun_8048bbc(v43, v42, v41);
                        v29 = eax46;
                        goto addr_8049405_10;
                    }
                } else {
                    eax47 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v28));
                    v48 = *reinterpret_cast<unsigned char*>(&eax47);
                    ++v28;
                    goto addr_8049430_16;
                }
            }
        } else {
            v49 = 0;
            if (v26 && (eax50 = input_desc, v41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp11) + 0xffffffd0), eax51 = fun_8048c4c(eax50, 0x541b, v41), eax51 < 0)) {
                eax54 = fun_8048afc(eax50, 0x541b, v41, v52, v53, v23, v21, v19, v18, v17, v16);
                if (*eax54 == 95) 
                    goto addr_8049280_19;
                eax57 = fun_8048afc(eax50, 0x541b, v41, v55, v56, v23, v21, v19, v18, v17, v16);
                if (*eax57 == 25) 
                    goto addr_8049280_19;
                eax60 = fun_8048afc(eax50, 0x541b, v41, v58, v59, v23, v21, v19, v18, v17, v16);
                if (*eax60 == 22) 
                    goto addr_8049280_19;
                eax63 = fun_8048afc(eax50, 0x541b, v41, v61, v62, v23, v21, v19, v18, v17, v16);
                if (*eax63 == 19) 
                    goto addr_8049280_19;
                eax66 = fun_8048afc(eax50, 0x541b, v41, v64, v65, v23, v21, v19, v18, v17, v16);
                if (!reinterpret_cast<int1_t>(*eax66 == 38)) 
                    goto addr_8049286_24;
                addr_8049280_19:
                v26 = 0;
            }
            if (!1) {
                v49 = 1;
            }
            if (v49) {
                write_pending(a3, reinterpret_cast<int32_t>(ebp11) - 28, v41, v67);
            }
            edx68 = input_desc;
            v41 = a2;
            v42 = a1;
            v43 = edx68;
            eax69 = safe_read(v43, v42, v41);
            if (reinterpret_cast<int1_t>(eax69 == 0xffffffff)) 
                break;
            if (!eax69) 
                goto addr_804936d_31;
            v28 = a1;
            v27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v28) + reinterpret_cast<unsigned char>(eax69));
            *reinterpret_cast<void***>(v27) = reinterpret_cast<void**>(10);
            goto addr_8049423_33;
        }
        *reinterpret_cast<void***>(v29) = reinterpret_cast<void**>(10);
        ++v29;
        addr_8049423_33:
        eax70 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v28));
        v48 = *reinterpret_cast<unsigned char*>(&eax70);
        ++v28;
        addr_8049430_16:
        if (v48 == 10) 
            continue;
        if (v25 >= 0 && *reinterpret_cast<unsigned char*>(&v18)) {
            next_line_num(v43, v42, v41);
            eax71 = line_num_print;
            v42 = eax71;
            v43 = v29;
            eax72 = fun_8048bbc(v43, v42, v41);
            v29 = eax72;
        }
        if (!*reinterpret_cast<signed char*>(&v16)) {
            while (1) {
                if (v48 != 9 || (eax73 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v17)) ^ 1, !!*reinterpret_cast<signed char*>(&eax73))) {
                    if (v48 == 10) 
                        break;
                    edx74 = v48;
                    *reinterpret_cast<void***>(v29) = *reinterpret_cast<void***>(&edx74);
                    ++v29;
                } else {
                    *reinterpret_cast<void***>(v29) = reinterpret_cast<void**>(94);
                    eax75 = v48 + 64;
                    *reinterpret_cast<void***>(v29 + 1) = *reinterpret_cast<void***>(&eax75);
                    v29 = v29 + 1 + 1;
                }
                eax76 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v28));
                v48 = *reinterpret_cast<unsigned char*>(&eax76);
                ++v28;
            }
            v25 = -1;
        } else {
            while (1) {
                if (v48 <= 31) {
                    if (v48 != 9 || (eax77 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v17)) ^ 1 ^ 1, !!*reinterpret_cast<signed char*>(&eax77))) {
                        if (v48 == 10) 
                            break;
                        *reinterpret_cast<void***>(v29) = reinterpret_cast<void**>(94);
                        eax78 = v48 + 64;
                        *reinterpret_cast<void***>(v29 + 1) = *reinterpret_cast<void***>(&eax78);
                        v29 = v29 + 1 + 1;
                    } else {
                        *reinterpret_cast<void***>(v29) = reinterpret_cast<void**>(9);
                        ++v29;
                    }
                } else {
                    if (v48 > 0x7e) {
                        if (v48 != 0x7f) {
                            *reinterpret_cast<void***>(v29) = reinterpret_cast<void**>(77);
                            *reinterpret_cast<void***>(v29 + 1) = reinterpret_cast<void**>(45);
                            if (v48 <= 0x9f) {
                                *reinterpret_cast<void***>(v29 + 1 + 1) = reinterpret_cast<void**>(94);
                                eax79 = v48 - 64;
                                *reinterpret_cast<void***>(v29 + 1 + 1 + 1) = *reinterpret_cast<void***>(&eax79);
                                v29 = v29 + 1 + 1 + 1 + 1;
                            } else {
                                if (v48 == 0xff) {
                                    *reinterpret_cast<void***>(v29 + 1 + 1) = reinterpret_cast<void**>(94);
                                    *reinterpret_cast<void***>(v29 + 1 + 1 + 1) = reinterpret_cast<void**>(63);
                                    v29 = v29 + 1 + 1 + 1 + 1;
                                } else {
                                    eax80 = v48 - 0x80;
                                    *reinterpret_cast<void***>(v29 + 1 + 1) = *reinterpret_cast<void***>(&eax80);
                                    v29 = v29 + 1 + 1 + 1;
                                }
                            }
                        } else {
                            *reinterpret_cast<void***>(v29) = reinterpret_cast<void**>(94);
                            *reinterpret_cast<void***>(v29 + 1) = reinterpret_cast<void**>(63);
                            v29 = v29 + 1 + 1;
                        }
                    } else {
                        edx81 = v48;
                        *reinterpret_cast<void***>(v29) = *reinterpret_cast<void***>(&edx81);
                        ++v29;
                    }
                }
                eax82 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v28));
                v48 = *reinterpret_cast<unsigned char*>(&eax82);
                ++v28;
            }
            v25 = -1;
        }
    }
    ebx83 = infile;
    eax86 = fun_8048afc(v43, v42, v41, v84, v85, v23, v21, v19, v18, v17, v16);
    eax87 = *eax86;
    fun_8048d3c(0, eax87, "%s", ebx83, v88, v23, v21, v19, v18, v17);
    write_pending(a3, reinterpret_cast<int32_t>(ebp11) - 28, "%s", ebx83);
    newlines2 = v25;
    v89 = 0;
    addr_80495ef_61:
    eax90 = v89;
    return *reinterpret_cast<unsigned char*>(&eax90);
    addr_804936d_31:
    write_pending(a3, reinterpret_cast<int32_t>(ebp11) - 28, v41, v91);
    newlines2 = v25;
    v89 = 1;
    goto addr_80495ef_61;
    addr_8049286_24:
    eax92 = infile;
    eax93 = quote(eax92, 0x541b, v41);
    eax96 = fun_8048c1c("cannot do ioctl on %s", 0x541b, v41, v94, v95, v23, v21, v19, v18, v17, v16);
    eax99 = fun_8048afc("cannot do ioctl on %s", 0x541b, v41, v97, v98, v23, v21, v19, v18, v17, v16);
    eax100 = *eax99;
    fun_8048d3c(0, eax100, eax96, eax93, v101, v23, v21, v19, v18, v17);
    newlines2 = v25;
    v89 = 0;
    goto addr_80495ef_61;
}

void** fun_8048c0c(void** a1, void** a2, void** a3);

void** safe_read(void** a1, void** a2, void** a3) {
    void** v4;
    void** ebp5;
    void** eax6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void*** eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void*** eax20;
    void** v21;

    v4 = ebp5;
    while (eax6 = fun_8048c0c(a1, a2, a3), reinterpret_cast<signed char>(eax6) < reinterpret_cast<signed char>(0)) {
        eax13 = fun_8048afc(a1, a2, a3, v7, v8, v9, v10, v11, v12, eax6, v4);
        if (*eax13 == 4) 
            continue;
        eax20 = fun_8048afc(a1, a2, a3, v14, v15, v16, v17, v18, v19, eax6, v4);
        if (!reinterpret_cast<int1_t>(*eax20 == 22)) 
            goto addr_804b01e_5;
        if (reinterpret_cast<unsigned char>(a3) <= reinterpret_cast<unsigned char>(0x7fffe000)) 
            goto addr_804b01e_5;
        a3 = reinterpret_cast<void**>(0x7fffe000);
    }
    v21 = eax6;
    addr_804b024_9:
    return v21;
    addr_804b01e_5:
    v21 = eax6;
    goto addr_804b024_9;
}

void** quote_n(void** a1, void** a2);

void** quote(void** a1, void** a2, void** a3) {
    void** eax4;

    eax4 = quote_n(0, a1);
    return eax4;
}

void** version_etc_va(void** a1, void** a2, void** a3, void** a4, void** a5);

void** version_etc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;

    eax8 = version_etc_va(a1, a2, a3, a4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 24);
    return eax8;
}

void** program_name = reinterpret_cast<void**>(0);

void** stdout = reinterpret_cast<void**>(0);

void** stderr = reinterpret_cast<void**>(0);

void usage(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** ebx8;
    void** v9;
    void** v10;
    void** v11;
    void** ebx12;
    void** esi13;
    void** ebp14;
    void** eax15;
    void** v16;
    void** ebx17;
    void** v18;
    void** v19;
    void** eax20;
    void** v21;
    void** v22;
    void** ebx23;
    void** v24;
    void** v25;
    void** eax26;
    void** v27;
    void** v28;
    void** ebx29;
    void** v30;
    void** v31;
    void** eax32;
    void** v33;
    void** v34;
    void** ebx35;
    void** v36;
    void** v37;
    void** eax38;
    void** v39;
    void** v40;
    void** ebx41;
    void** v42;
    void** v43;
    void** eax44;
    void** v45;
    void** v46;
    void** ebx47;
    void** esi48;
    void** v49;
    void** v50;
    void** eax51;
    void** v52;
    void** v53;
    void** v54;
    void** ebx55;
    void** v56;
    void** v57;
    void** v58;
    void** eax59;
    void** edx60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** eax65;

    if (!a1) {
        ebx8 = program_name;
        eax15 = fun_8048c1c("Usage: %s [OPTION] [FILE]...\n", v9, v10, v11, ebx12, esi13, ebp14, __return_address(), a1, a2, a3);
        fun_8048cbc(eax15, ebx8, v16);
        ebx17 = stdout;
        eax20 = fun_8048c1c("Concatenate FILE(s), or standard input, to standard output.\n\n  -A, --show-all           equivalent to -vET\n  -b, --number-nonblank    number nonempty output lines\n  -e                       equivalent to -vE\n  -E, --show-ends          display $ at end of each line\n  -n, --number             number all output lines\n  -s, --squeeze-blank      suppress repeated empty output lines\n", ebx8, v18, v19, ebx12, esi13, ebp14, __return_address(), a1, a2, a3);
        fun_8048b3c(eax20, ebx17, v21, v22, ebx12, esi13, ebp14, __return_address());
        ebx23 = stdout;
        eax26 = fun_8048c1c("  -t                       equivalent to -vT\n  -T, --show-tabs          display TAB characters as ^I\n  -u                       (ignored)\n  -v, --show-nonprinting   use ^ and M- notation, except for LFD and TAB\n", ebx17, v24, v25, ebx12, esi13, ebp14, __return_address(), a1, a2, a3);
        fun_8048b3c(eax26, ebx23, v27, v28, ebx12, esi13, ebp14, __return_address());
        ebx29 = stdout;
        eax32 = fun_8048c1c("      --help     display this help and exit\n", ebx23, v30, v31, ebx12, esi13, ebp14, __return_address(), a1, a2, a3);
        fun_8048b3c(eax32, ebx29, v33, v34, ebx12, esi13, ebp14, __return_address());
        ebx35 = stdout;
        eax38 = fun_8048c1c("      --version  output version information and exit\n", ebx29, v36, v37, ebx12, esi13, ebp14, __return_address(), a1, a2, a3);
        fun_8048b3c(eax38, ebx35, v39, v40, ebx12, esi13, ebp14, __return_address());
        ebx41 = stdout;
        eax44 = fun_8048c1c("\nWith no FILE, or when FILE is -, read standard input.\n", ebx35, v42, v43, ebx12, esi13, ebp14, __return_address(), a1, a2, a3);
        fun_8048b3c(eax44, ebx41, v45, v46, ebx12, esi13, ebp14, __return_address());
        ebx47 = program_name;
        esi48 = program_name;
        eax51 = fun_8048c1c("\nExamples:\n  %s f - g  Output f's contents, then standard input, then g's contents.\n  %s        Copy standard input to standard output.\n", ebx41, v49, v50, ebx12, esi13, ebp14, __return_address(), a1, a2, a3);
        v52 = ebx47;
        v53 = esi48;
        fun_8048cbc(eax51, v53, v52);
        emit_bug_reporting_address(eax51, v53, v52, v54, ebx12, esi13, ebp14, __return_address());
    } else {
        ebx55 = program_name;
        eax59 = fun_8048c1c("Try `%s --help' for more information.\n", v56, v57, v58, ebx12, esi13, ebp14, __return_address(), a1, a2, a3);
        edx60 = stderr;
        v52 = ebx55;
        v53 = eax59;
        fun_8048cfc(edx60, v53, v52, v61, ebx12, esi13, ebp14, __return_address());
    }
    fun_8048dac(a1, v53, v52, v62, ebx12, esi13, ebp14, __return_address(), a1, a2);
    eax65 = fun_8048c1c("\nReport bugs to <%s>.\n", v63, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, a1, v53, v52, v64, ebx12, esi13, ebp14, __return_address());
    fun_8048cbc(eax65, "bug-coreutils@gnu.org", reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    goto a1;
}

int32_t __fxstat64 = 0x8048d72;

int32_t fun_8048d6c(int32_t a1, void** a2, int32_t a3) {
    goto __fxstat64;
}

int32_t open64 = 0x8048b32;

void** fun_8048b2c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    goto open64;
}

void** ptr_align(void** a1, void* a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    return -((reinterpret_cast<uint32_t>(a2) - 1 + reinterpret_cast<unsigned char>(a1)) % reinterpret_cast<uint32_t>(a2)) + (reinterpret_cast<uint32_t>(a2) - 1 + reinterpret_cast<unsigned char>(a1));
}

uint32_t g14;

void** vasnprintf(void** a1, void** a2, void** a3, void** a4);

uint32_t fun_8048cec(void** a1, void** a2, void** a3, void** a4);

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
    void** v18;
    void*** eax19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void*** eax24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void*** eax33;
    void** eax34;
    uint32_t edx35;

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
        eax13 = fun_8048cec(v12, 1, 0x7d0, v8);
        if (eax13 >= 0x7d0) {
            if (1) {
                v14 = reinterpret_cast<void**>(0x7d0);
            } else {
                eax19 = fun_8048afc(v12, 1, 0x7d0, v8, v15, v16, v17, a3, a2, a1, v18);
                *eax19 = reinterpret_cast<void**>(75);
                v12 = a1;
                fseterr(v12, 1, 0x7d0, v8);
                v14 = reinterpret_cast<void**>(0xffffffff);
            }
        } else {
            if (eax11 != reinterpret_cast<int32_t>(ebp6) + 0xfffff82c) {
                eax24 = fun_8048afc(v12, 1, 0x7d0, v8, v20, v21, v22, a3, a2, a1, v23);
                v25 = *eax24;
                v12 = eax11;
                fun_8048c2c(v12, 1, 0x7d0, v8, v26, v27, v28, a3, a2, a1);
                eax33 = fun_8048afc(v12, 1, 0x7d0, v8, v29, v30, v31, a3, a2, a1, v32);
                *eax33 = v25;
            }
            v14 = reinterpret_cast<void**>(0xffffffff);
        }
    } else {
        v12 = a1;
        fseterr(v12, v10, v9, v8);
        v14 = reinterpret_cast<void**>(0xffffffff);
    }
    eax34 = v14;
    edx35 = eax7 ^ g14;
    if (edx35) {
        eax34 = fun_8048d1c(v12, v10, v9, v8);
    }
    return eax34;
}

struct s1 {
    signed char[4] pad4;
    uint32_t f4;
};

uint32_t set_char_quoting(struct s1* a1, int32_t a2, uint32_t a3);

void** quotearg_char(void** a1, int32_t a2) {
    void* ebp3;
    int32_t eax4;
    void** eax5;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax4 = a2;
    set_char_quoting(reinterpret_cast<int32_t>(ebp3) - 36, static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax4)), 1);
    eax5 = quotearg_n_options(0, a1, 0xffffffff, reinterpret_cast<int32_t>(ebp3) + 0xffffffdc);
    return eax5;
}

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

    eax6 = fun_8048d2c(a1);
    *reinterpret_cast<unsigned char*>(&v7 + 3) = reinterpret_cast<uint1_t>(!!eax6);
    eax8 = fun_8048bcc(a1);
    *reinterpret_cast<unsigned char*>(&v7 + 2) = reinterpret_cast<uint1_t>(!!eax8);
    eax9 = fun_8048c6c(a1);
    *reinterpret_cast<unsigned char*>(&v7 + 1) = reinterpret_cast<uint1_t>(!!eax9);
    if (*reinterpret_cast<unsigned char*>(&v7 + 2) || (eax10 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v7 + 1)) ^ 1, !*reinterpret_cast<signed char*>(&eax10)) && (*reinterpret_cast<unsigned char*>(&v7 + 3) || (eax16 = fun_8048afc(a1, v11, v12, v13, v14, v7, ebp15, __return_address(), a1, a2, a3), *eax16 != 9))) {
        eax17 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v7 + 1)) ^ 1;
        if (*reinterpret_cast<signed char*>(&eax17)) {
            eax22 = fun_8048afc(a1, v18, v19, v20, v21, v7, ebp15, __return_address(), a1, a2, a3);
            *eax22 = reinterpret_cast<void**>(0);
        }
        v23 = -1;
    } else {
        v23 = 0;
    }
    return v23;
}

struct s2 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
    int32_t f18;
    int32_t f1c;
    int32_t f20;
};

struct s2* quoting_options_from_style(struct s2* a1, int32_t a2);

void** quotearg_n_style(void** a1, int32_t a2, void** a3) {
    void* ebp4;
    void** eax5;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    quoting_options_from_style(reinterpret_cast<int32_t>(ebp4) - 36, a2);
    eax5 = quotearg_n_options(a1, a3, 0xffffffff, reinterpret_cast<int32_t>(ebp4) + 0xffffffdc);
    return eax5;
}

uint32_t set_char_quoting(struct s1* a1, int32_t a2, uint32_t a3) {
    int32_t eax4;
    uint32_t eax5;
    struct s1* v6;
    uint32_t eax7;
    uint32_t* v8;
    uint32_t v9;
    uint32_t ecx10;
    uint32_t v11;
    uint32_t ecx12;

    eax4 = a2;
    eax5 = *reinterpret_cast<unsigned char*>(&eax4);
    if (!a1) {
        v6 = reinterpret_cast<struct s1*>(0x8052140);
    } else {
        v6 = a1;
    }
    eax7 = *reinterpret_cast<unsigned char*>(&eax5);
    v8 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v6->f4) + (static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) >> 5)) << 2));
    v9 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax5)) & 31;
    ecx10 = v9;
    v11 = *v8 >> *reinterpret_cast<signed char*>(&ecx10) & 1;
    ecx12 = v9;
    *v8 = *v8 ^ (a3 & 1 ^ v11) << *reinterpret_cast<unsigned char*>(&ecx12);
    return v11;
}

void** gettext_quote(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** ebp9;
    void** eax10;
    void** v11;

    eax10 = fun_8048c1c(a1, v4, v5, v6, v7, v8, ebp9, __return_address(), a1, a2, a3);
    v11 = eax10;
    if (v11 == a1 && reinterpret_cast<int1_t>(a2 == 6)) {
        v11 = reinterpret_cast<void**>("\"");
    }
    return v11;
}

int32_t fun_8048b4c();

int32_t fun_8048c7c(void** a1, void** a2, void** a3, void* a4);

void** quotearg_buffer_restyled(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** v8;
    void** v9;
    void** v10;
    unsigned char v11;
    int32_t eax12;
    unsigned char v13;
    void** v14;
    void** eax15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    uint32_t eax21;
    uint32_t eax22;
    void** v23;
    void** v24;
    void* v25;
    void** eax26;
    void** eax27;
    void** v28;
    void** v29;
    uint32_t eax30;
    uint32_t eax31;
    void* v32;
    void* v33;
    uint32_t eax34;
    void* v35;
    void** v36;
    uint32_t eax37;
    unsigned char v38;
    void** v39;
    uint32_t eax40;
    unsigned char v41;
    uint32_t eax42;
    void** v43;
    uint32_t eax44;
    uint32_t eax45;
    uint32_t eax46;
    uint32_t eax47;
    uint32_t eax48;
    uint32_t eax49;
    unsigned char v50;
    uint32_t eax51;
    void** v52;
    void* v53;
    int32_t eax54;
    uint32_t eax55;
    void** eax56;
    void* eax57;
    void** v58;
    int32_t eax59;
    int32_t eax60;
    int32_t* eax61;
    uint32_t eax62;
    uint32_t eax63;
    uint32_t eax64;
    uint32_t eax65;
    uint32_t eax66;
    void** v67;
    void** v68;
    unsigned char v69;
    void** v70;
    void** v71;
    uint32_t eax72;
    uint32_t eax73;
    uint32_t v74;
    uint32_t ecx75;
    uint32_t eax76;
    void** v77;
    void** v78;
    uint32_t eax79;
    unsigned char v80;
    uint32_t eax81;
    uint32_t eax82;
    uint32_t eax83;
    uint32_t ecx84;
    uint32_t eax85;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = reinterpret_cast<void**>(0);
    v9 = reinterpret_cast<void**>(0);
    v10 = reinterpret_cast<void**>(0);
    v11 = 0;
    eax12 = fun_8048b4c();
    v13 = reinterpret_cast<uint1_t>(eax12 == 1);
    switch (a5) {
    case 2:
        if (reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(a2)) {
            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(39);
        }
        v8 = reinterpret_cast<void**>(1);
        v9 = reinterpret_cast<void**>("'");
        v10 = reinterpret_cast<void**>(1);
        break;
    case 3:
        if (reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(a2)) {
            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(34);
        }
        v8 = reinterpret_cast<void**>(1);
        v11 = 1;
        v9 = reinterpret_cast<void**>("\"");
        v10 = reinterpret_cast<void**>(1);
        break;
    case 4:
        v11 = 1;
        break;
    case 5:
    case 6:
        eax15 = gettext_quote("`", a5, v14);
        v16 = a5;
        eax18 = gettext_quote("'", v16, v17);
        v19 = eax18;
        v20 = eax15;
        while (eax21 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v20)), !!*reinterpret_cast<signed char*>(&eax21)) {
            if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                eax22 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v20));
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = *reinterpret_cast<signed char*>(&eax22);
            }
            ++v8;
            ++v20;
        }
        v11 = 1;
        v9 = v19;
        v23 = v9;
        eax26 = fun_8048c9c(v23, v16, v24, v25);
        v10 = eax26;
        break;
        addr_804aa48_16:
        eax27 = quotearg_buffer_restyled(a1, a2, a3, a4, 2, a6);
        v28 = eax27;
        goto addr_804aa7a_17;
    case 0:
    case 1:
        goto 0x804a44f;
    }
    v29 = reinterpret_cast<void**>(0);
    goto addr_804a9c0_19;
    addr_804aa7a_17:
    return v28;
    addr_804a9ed_20:
    if (v29) 
        goto addr_804a9f9_21;
    if (a5 == 1) 
        goto addr_804aa48_16;
    addr_804a9f9_21:
    if (v9) {
        while (eax30 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), !!*reinterpret_cast<signed char*>(&eax30)) {
            if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                eax31 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = *reinterpret_cast<signed char*>(&eax31);
            }
            ++v8;
            ++v9;
        }
    }
    if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 0;
    }
    v28 = v8;
    goto addr_804aa7a_17;
    while (1) {
        addr_804a802_31:
        v32 = reinterpret_cast<void*>(1);
        while (1) {
            if (reinterpret_cast<uint32_t>(v32) >= reinterpret_cast<uint32_t>(v33)) 
                goto addr_804a843_33;
            eax34 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v29) + reinterpret_cast<uint32_t>(v35) + reinterpret_cast<uint32_t>(v32) + reinterpret_cast<unsigned char>(a3));
            switch (*reinterpret_cast<signed char*>(&eax34) - 91) {
            default:
                v32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v32) + 1);
                continue;
            case 0:
            case 1:
            case 3:
            case 5:
            case 33:
                goto 0x804aa48;
            }
            while (1) {
                addr_804a893_37:
                v36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v29) + reinterpret_cast<uint32_t>(v35));
                while (1) {
                    if (v11 && (eax37 = static_cast<uint32_t>(v38) ^ 1, !!*reinterpret_cast<signed char*>(&eax37))) {
                        if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 92;
                        }
                        v39 = v8 + 1;
                        if (reinterpret_cast<unsigned char>(v39) < reinterpret_cast<unsigned char>(a2)) {
                            eax40 = v41;
                            *reinterpret_cast<unsigned char*>(&eax40) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax40) >> 6);
                            eax42 = eax40 + 48;
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v39)) = *reinterpret_cast<signed char*>(&eax42);
                        }
                        v43 = v39 + 1;
                        if (reinterpret_cast<unsigned char>(v43) < reinterpret_cast<unsigned char>(a2)) {
                            eax44 = v41;
                            *reinterpret_cast<unsigned char*>(&eax44) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax44) >> 3);
                            eax45 = (eax44 & 7) + 48;
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v43)) = *reinterpret_cast<signed char*>(&eax45);
                        }
                        v8 = v43 + 1;
                        eax46 = (static_cast<uint32_t>(v41) & 7) + 48;
                        v41 = *reinterpret_cast<unsigned char*>(&eax46);
                    }
                    if (reinterpret_cast<unsigned char>(v29 + 1) >= reinterpret_cast<unsigned char>(v36)) 
                        break;
                    if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                        eax47 = v41;
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = *reinterpret_cast<signed char*>(&eax47);
                    }
                    ++v8;
                    ++v29;
                    eax48 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(v29));
                    v41 = *reinterpret_cast<unsigned char*>(&eax48);
                }
                while (1) {
                    if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                        eax49 = v41;
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = *reinterpret_cast<signed char*>(&eax49);
                    }
                    ++v8;
                    ++v29;
                    addr_804a9c0_19:
                    if (!reinterpret_cast<int1_t>(a4 == 0xffffffff)) {
                        v50 = reinterpret_cast<uint1_t>(v29 != a4);
                    } else {
                        eax51 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(v29));
                        v50 = reinterpret_cast<uint1_t>(!!*reinterpret_cast<signed char*>(&eax51));
                    }
                    if (!v50) 
                        goto addr_804a9ed_20;
                    if (v11 && (v10 && (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v29) + reinterpret_cast<unsigned char>(v10)) <= reinterpret_cast<unsigned char>(a4) && (v52 = v10, v16 = v9, v23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(v29)), eax54 = fun_8048b1c(v23, v16, v52, v53), !eax54)))) {
                        if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 92;
                        }
                        ++v8;
                    }
                    eax55 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(v29));
                    v41 = *reinterpret_cast<unsigned char*>(&eax55);
                    switch (v41) {
                    default:
                        if (!v13) {
                            fun_8048b9c(reinterpret_cast<int32_t>(ebp7) + 0xffffffc4, 0, 8, v53);
                            v35 = reinterpret_cast<void*>(0);
                            v38 = 1;
                            if (reinterpret_cast<int1_t>(a4 == 0xffffffff)) {
                                eax56 = fun_8048c9c(a3, 0, 8, v53);
                                a4 = eax56;
                            }
                            do {
                                v53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 60);
                                v52 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) - (reinterpret_cast<unsigned char>(v29) + reinterpret_cast<uint32_t>(v35)));
                                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v29) + reinterpret_cast<uint32_t>(v35) + reinterpret_cast<unsigned char>(a3));
                                v23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffd8);
                                eax57 = fun_8048bfc(v23, v16, v52, v53);
                                v33 = eax57;
                                if (!v33) 
                                    break;
                                if (reinterpret_cast<int1_t>(v33 == 0xffffffff)) 
                                    goto addr_804a7bd_67;
                                if (reinterpret_cast<int1_t>(v33 == 0xfffffffe)) 
                                    goto addr_804a7cc_69;
                                if (reinterpret_cast<int1_t>(a5 == 1)) 
                                    goto addr_804a802_31;
                                addr_804a843_33:
                                eax59 = fun_8048d8c(v58, v16, v52, v53);
                                if (!eax59) {
                                    v38 = 0;
                                }
                                v35 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v35) + reinterpret_cast<uint32_t>(v33));
                                v23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffc4);
                                eax60 = fun_8048c7c(v23, v16, v52, v53);
                            } while (!eax60);
                        } else {
                            v35 = reinterpret_cast<void*>(1);
                            eax61 = fun_8048c5c(v23, v16, v52, v53);
                            eax62 = v41;
                            eax63 = *reinterpret_cast<uint16_t*>(*eax61 + (eax62 + eax62));
                            v38 = reinterpret_cast<uint1_t>(!!(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax63)) & 0x4000));
                        }
                        addr_804a86f_74:
                        if (reinterpret_cast<uint32_t>(v35) > 1) 
                            goto addr_804a893_37;
                        eax64 = static_cast<uint32_t>(v11) ^ 1;
                        if (*reinterpret_cast<signed char*>(&eax64)) 
                            goto addr_804a957_76;
                        eax65 = static_cast<uint32_t>(v38) ^ 1;
                        if (!*reinterpret_cast<signed char*>(&eax65)) 
                            goto addr_804a957_76; else 
                            goto addr_804a893_37;
                        addr_804a7bd_67:
                        v38 = 0;
                        goto addr_804a86f_74;
                        addr_804a7cc_69:
                        v38 = 0;
                        while (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v29) + reinterpret_cast<uint32_t>(v35)) < reinterpret_cast<unsigned char>(a4)) {
                            eax66 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v29) + reinterpret_cast<uint32_t>(v35) + reinterpret_cast<unsigned char>(a3));
                            if (!*reinterpret_cast<signed char*>(&eax66)) 
                                goto addr_804a7fa_80;
                            v35 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v35) + 1);
                        }
                        goto addr_804a86f_74;
                        addr_804a7fa_80:
                        goto addr_804a86f_74;
                    case 0:
                        if (v11) {
                            if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 92;
                            }
                            v67 = v8 + 1;
                            if (reinterpret_cast<unsigned char>(v67) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v67)) = 48;
                            }
                            v68 = v67 + 1;
                            if (reinterpret_cast<unsigned char>(v68) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v68)) = 48;
                            }
                            v8 = v68 + 1;
                            v41 = 48;
                            goto addr_804a957_76;
                        }
                    case 7:
                        v69 = 97;
                        break;
                    case 8:
                        v69 = 98;
                        break;
                    case 9:
                        v69 = 0x74;
                        goto addr_804a63b_93;
                    case 10:
                        v69 = 0x6e;
                        goto addr_804a63b_93;
                    case 11:
                        v69 = 0x76;
                        break;
                    case 12:
                        v69 = 0x66;
                        break;
                    case 13:
                        v69 = 0x72;
                        goto addr_804a63b_93;
                        addr_804a68e_98:
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
                            goto addr_804aa48_16;
                        goto addr_804a957_76;
                        addr_804a684_100:
                    case 35:
                    case 0x7e:
                        if (v29) 
                            goto addr_804a957_76; else 
                            goto addr_804a68e_98;
                    case 39:
                        if (a5 == 1) 
                            goto addr_804aa48_16;
                        if (reinterpret_cast<int1_t>(a5 == 2)) {
                            if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 39;
                            }
                            v70 = v8 + 1;
                            if (reinterpret_cast<unsigned char>(v70) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v70)) = 92;
                            }
                            v71 = v70 + 1;
                            if (reinterpret_cast<unsigned char>(v71) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v71)) = 39;
                            }
                            v8 = v71 + 1;
                            goto addr_804a957_76;
                        }
                    case 63:
                        if (a5 == 1) 
                            goto addr_804aa48_16;
                        if (reinterpret_cast<int1_t>(a5 == 3) && (reinterpret_cast<unsigned char>(v29 + 2) < reinterpret_cast<unsigned char>(a4) && ((eax72 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v29 + 1) + reinterpret_cast<unsigned char>(a3)), *reinterpret_cast<signed char*>(&eax72) == 63) && ((eax73 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v29 + 2) + reinterpret_cast<unsigned char>(a3)), v74 = *reinterpret_cast<signed char*>(&eax73) - 33, v74 <= 29) && (ecx75 = *reinterpret_cast<unsigned char*>(&v74), !!(1 << *reinterpret_cast<unsigned char*>(&ecx75) & 0x380051c1)))))) {
                            eax76 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v29 + 2) + reinterpret_cast<unsigned char>(a3));
                            v41 = *reinterpret_cast<unsigned char*>(&eax76);
                            v29 = v29 + 2;
                            if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 63;
                            }
                            v77 = v8 + 1;
                            if (reinterpret_cast<unsigned char>(v77) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v77)) = 92;
                            }
                            v78 = v77 + 1;
                            if (reinterpret_cast<unsigned char>(v78) < reinterpret_cast<unsigned char>(a2)) {
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v78)) = 63;
                            }
                            v8 = v78 + 1;
                            goto addr_804a957_76;
                        }
                    case 92:
                        eax79 = v41;
                        v69 = *reinterpret_cast<unsigned char*>(&eax79);
                        goto addr_804a63b_93;
                    case 0x7b:
                    case 0x7d:
                        if (!reinterpret_cast<int1_t>(a4 == 0xffffffff)) {
                            v80 = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(a4 == 1));
                        } else {
                            eax81 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 1));
                            v80 = reinterpret_cast<uint1_t>(!!*reinterpret_cast<signed char*>(&eax81));
                        }
                        if (v80) 
                            goto addr_804a957_76; else 
                            goto addr_804a684_100;
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
                        goto 0x804a957;
                    }
                    addr_804a645_124:
                    if (!v11) {
                        addr_804a957_76:
                        eax82 = static_cast<uint32_t>(v11) ^ 1;
                        if (*reinterpret_cast<signed char*>(&eax82)) 
                            continue;
                        eax83 = v41;
                        ecx84 = static_cast<uint32_t>(v41) & 31;
                        if (!(1 << *reinterpret_cast<unsigned char*>(&ecx84) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(a6 + reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax83) >> 5) * 4) + 4))) 
                            continue;
                    } else {
                        eax85 = v69;
                        v41 = *reinterpret_cast<unsigned char*>(&eax85);
                    }
                    if (reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(a2)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(v8)) = 92;
                    }
                    ++v8;
                    continue;
                    addr_804a63b_93:
                    if (a5 == 1) 
                        goto addr_804aa48_16; else 
                        goto addr_804a645_124;
                }
            }
        }
    }
}

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
    void** v16;
    void*** eax17;
    void** v18;
    void** edx19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void*** eax25;

    if (!a5) {
        v6 = reinterpret_cast<void**>(0x8052140);
    } else {
        v6 = a5;
    }
    eax17 = fun_8048afc(v7, v8, v9, v10, v11, v12, v13, v14, v15, v6, v16);
    v18 = *eax17;
    edx19 = *reinterpret_cast<void***>(v6);
    eax20 = quotearg_buffer_restyled(a1, a2, a3, a4, edx19, v6);
    eax25 = fun_8048afc(a1, a2, a3, a4, edx19, v6, v21, v22, v23, v6, v24);
    *eax25 = v18;
    return eax20;
}

int32_t mbsinit = 0x8048c82;

int32_t fun_8048c7c(void** a1, void** a2, void** a3, void* a4) {
    goto mbsinit;
}

void** xcharalloc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** ebp8;
    void** eax9;

    eax9 = xmalloc(a1, v7, ebp8, __return_address(), a1, a2, a3, a4, a5, a6);
    return eax9;
}

int32_t read = 0x8048c12;

void** fun_8048c0c(void** a1, void** a2, void** a3) {
    goto read;
}

int32_t write = 0x8048b92;

void** fun_8048b8c(void** a1, void** a2, void** a3) {
    goto write;
}

int32_t fwrite = 0x8048cf2;

uint32_t fun_8048cec(void** a1, void** a2, void** a3, void** a4) {
    goto fwrite;
}

struct s3 {
    uint32_t f0;
    void** f4;
    signed char[3] pad8;
    void* f8;
    void* fc;
};

int32_t printf_parse(void** a1, struct s3* a2, void** a3);

struct s4 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void* fc;
    void* f10;
    void* f14;
    void* f18;
    void* f1c;
    void* f20;
};

int32_t printf_fetchargs(void** a1, void** a2, void** a3);

struct s5 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
    signed char[7] pad20;
    void** f14;
    signed char[3] pad24;
    void** f18;
    signed char[3] pad28;
    void** f1c;
    signed char[3] pad32;
    void** f20;
    signed char[3] pad36;
    void** f24;
    signed char[3] pad40;
    void** f28;
    signed char[3] pad44;
    void** f2c;
};

struct s6 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    uint32_t f8;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[3] pad20;
    int32_t f14;
    void** f18;
    signed char[3] pad28;
    void** f1c;
    signed char[3] pad32;
    int32_t f20;
    unsigned char f24;
    signed char[3] pad40;
    int32_t f28;
};

struct s7 {
    signed char[4] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
};

struct s8 {
    signed char[4] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
};

int32_t fun_8048ccc();

struct s9 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

void** fun_8048d7c();

struct s10 {
    signed char[4] pad4;
    void* f4;
    void* f8;
};

struct s11 {
    signed char[4] pad4;
    void* f4;
    void* f8;
};

struct s12 {
    signed char[4] pad4;
    void* f4;
    void* f8;
    void* fc;
};

void** xmax(void** a1, void** a2);

void** vasnprintf(void** a1, void** a2, void** a3, void** a4) {
    void* esp5;
    void* ebp6;
    void** v7;
    void** v8;
    uint32_t eax9;
    uint32_t v10;
    void** v11;
    int32_t eax12;
    struct s4* esp13;
    void** v14;
    int32_t eax15;
    void*** esp16;
    void** v17;
    void** v18;
    void** eax19;
    struct s4* esp20;
    void** eax21;
    void** v22;
    void** v23;
    struct s5* esp24;
    struct s4* esp25;
    int32_t v26;
    void** v27;
    struct s5* esp28;
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
    void*** esp39;
    int32_t v40;
    void** v41;
    void** v42;
    void** v43;
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
    void** v55;
    void** v56;
    void*** eax57;
    void** v58;
    struct s5* esp59;
    void*** eax60;
    void** eax61;
    uint32_t edx62;
    struct s5* esp63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    int32_t v68;
    struct s6* v69;
    struct s6* v70;
    struct s5* esp71;
    struct s4* esp72;
    void*** eax73;
    struct s5* esp74;
    struct s4* esp75;
    void*** eax76;
    uint32_t v77;
    uint32_t* v78;
    uint32_t v79;
    void** v80;
    uint32_t eax81;
    void** v82;
    void** edx83;
    struct s5* esp84;
    void** v85;
    void** edx86;
    struct s5* esp87;
    uint32_t ecx88;
    uint32_t v89;
    uint32_t edx90;
    uint32_t v91;
    int32_t* v92;
    struct s5* esp93;
    void* v94;
    void* v95;
    int32_t* v96;
    struct s5* esp97;
    void* v98;
    struct s5* esp99;
    void** eax100;
    void** v101;
    void** v102;
    struct s5* esp103;
    void** eax104;
    struct s5* esp105;
    void** eax106;
    struct s5* esp107;
    void** eax108;
    void** v109;
    struct s5* esp110;
    void** eax111;
    struct s5* esp112;
    void** v113;
    void** v114;
    void** v115;
    struct s5* esp116;
    uint32_t eax117;
    uint32_t eax118;
    struct s5* esp119;
    void** v120;
    struct s5* esp121;
    void** eax122;
    void** v123;
    void** v124;
    struct s5* esp125;
    void** eax126;
    void** v127;
    struct s5* esp128;
    void** eax129;
    struct s5* esp130;
    struct s5* esp131;
    int32_t v132;
    uint32_t eax133;
    struct s5* esp134;
    struct s5* esp135;
    void** eax136;
    void** v137;
    void** v138;
    struct s5* esp139;
    void** eax140;
    void** v141;
    struct s5* esp142;
    void** eax143;
    struct s5* esp144;
    struct s5* esp145;
    uint32_t eax146;
    uint32_t eax147;
    uint32_t eax148;
    uint32_t eax149;
    uint32_t eax150;
    uint32_t eax151;
    uint32_t eax152;
    uint32_t eax153;
    uint32_t eax154;
    int32_t* v155;
    struct s7* eax156;
    void* v157;
    void** ecx158;
    void** edx159;
    struct s5* esp160;
    int32_t eax161;
    uint32_t v162;
    int32_t v163;
    void** v164;
    void** v165;
    uint32_t eax166;
    void** v167;
    void*** edx168;
    struct s5* esp169;
    void** eax170;
    int32_t* v171;
    struct s5* esp172;
    void** v173;
    void* v174;
    int32_t v175;
    void** v176;
    void** v177;
    uint32_t eax178;
    void** v179;
    void*** edx180;
    struct s5* esp181;
    void** eax182;
    int32_t* v183;
    struct s5* esp184;
    void** v185;
    void* v186;
    void** v187;
    struct s5* esp188;
    void** eax189;
    struct s4* esp190;
    void** v191;
    struct s5* esp192;
    void** eax193;
    void** v194;
    struct s5* esp195;
    void** eax196;
    void** v197;
    void** v198;
    struct s8* eax199;
    void* v200;
    void** ecx201;
    void** edx202;
    void** v203;
    struct s5* esp204;
    uint32_t eax205;
    int32_t v206;
    uint32_t eax207;
    uint32_t eax208;
    void** edx209;
    struct s5* esp210;
    int32_t eax211;
    void** eax212;
    int16_t fpu_status_word213;
    uint32_t eax214;
    int16_t fpu_status_word215;
    int1_t pf216;
    uint32_t eax217;
    struct s5* esp218;
    uint32_t eax219;
    uint32_t eax220;
    void** v221;
    void** v222;
    void** v223;
    void** v224;
    uint32_t eax225;
    uint32_t eax226;
    uint32_t eax227;
    void** v228;
    void** v229;
    void** v230;
    void** v231;
    void* v232;
    void** v233;
    void** v234;
    uint32_t edx235;
    void** v236;
    uint32_t edx237;
    struct s5* esp238;
    struct s5* esp239;
    void** eax240;
    void** v241;
    void** v242;
    struct s5* esp243;
    void** eax244;
    void** v245;
    struct s5* esp246;
    void** eax247;
    struct s5* esp248;
    struct s5* esp249;
    struct s5* esp250;
    int32_t v251;
    int32_t* v252;
    struct s5* esp253;
    void** eax254;
    void* v255;
    void** eax256;
    void* v257;
    void* v258;
    void* v259;
    struct s9* ecx260;
    void* v261;
    uint32_t eax262;
    void* v263;
    void* v264;
    struct s5* esp265;
    void** eax266;
    struct s5* esp267;
    void** eax268;
    void* v269;
    struct s5* esp270;
    void** eax271;
    struct s5* esp272;
    uint32_t eax273;
    void* v274;
    void* v275;
    struct s5* esp276;
    void** eax277;
    struct s5* esp278;
    void** eax279;
    void* v280;
    struct s5* esp281;
    void** eax282;
    struct s5* esp283;
    uint32_t eax284;
    void* v285;
    void* v286;
    struct s5* esp287;
    void** eax288;
    struct s5* esp289;
    void** eax290;
    void* v291;
    struct s5* esp292;
    void** eax293;
    struct s5* esp294;
    uint32_t eax295;
    void* v296;
    void* v297;
    struct s5* esp298;
    void** eax299;
    struct s5* esp300;
    void** eax301;
    void* v302;
    struct s5* esp303;
    void** eax304;
    struct s5* esp305;
    void* v306;
    void* v307;
    struct s5* esp308;
    void** eax309;
    struct s5* esp310;
    void** eax311;
    void* v312;
    struct s5* esp313;
    void** eax314;
    struct s5* esp315;
    void* v316;
    void* v317;
    struct s5* esp318;
    void** eax319;
    struct s5* esp320;
    void** eax321;
    void* v322;
    struct s5* esp323;
    void** eax324;
    struct s5* esp325;
    void* v326;
    void* v327;
    struct s5* esp328;
    void** eax329;
    struct s5* esp330;
    void** eax331;
    void* v332;
    struct s5* esp333;
    void** eax334;
    struct s5* esp335;
    void* v336;
    void* v337;
    struct s5* esp338;
    void** eax339;
    struct s5* esp340;
    void** eax341;
    void* v342;
    struct s5* esp343;
    void** eax344;
    struct s5* esp345;
    struct s10* eax346;
    void* v347;
    void* edx348;
    void* v349;
    struct s5* esp350;
    void** eax351;
    struct s5* esp352;
    void** eax353;
    void* v354;
    struct s5* esp355;
    void** eax356;
    struct s5* esp357;
    struct s11* eax358;
    void* v359;
    void* edx360;
    void* v361;
    struct s5* esp362;
    void** eax363;
    struct s5* esp364;
    void** eax365;
    void* v366;
    struct s5* esp367;
    void** eax368;
    struct s5* esp369;
    struct s5* esp370;
    void** eax371;
    struct s5* esp372;
    void** eax373;
    void* v374;
    struct s5* esp375;
    void** eax376;
    struct s5* esp377;
    struct s12* eax378;
    void* v379;
    void* ecx380;
    void* edx381;
    void* v382;
    struct s5* esp383;
    void** eax384;
    struct s5* esp385;
    void** eax386;
    void* v387;
    struct s5* esp388;
    void** eax389;
    struct s5* esp390;
    void* v391;
    void* v392;
    struct s5* esp393;
    void** eax394;
    struct s5* esp395;
    void** eax396;
    void* v397;
    struct s5* esp398;
    void** eax399;
    struct s5* esp400;
    void* v401;
    void* v402;
    struct s5* esp403;
    void** eax404;
    struct s5* esp405;
    void** eax406;
    void* v407;
    struct s5* esp408;
    void** eax409;
    struct s5* esp410;
    void* v411;
    void* v412;
    struct s5* esp413;
    void** eax414;
    struct s5* esp415;
    void** eax416;
    void* v417;
    struct s5* esp418;
    void** eax419;
    struct s5* esp420;
    void* v421;
    void* v422;
    struct s5* esp423;
    void** eax424;
    struct s5* esp425;
    void** eax426;
    void* v427;
    struct s5* esp428;
    void** eax429;
    struct s5* esp430;
    void* v431;
    void* v432;
    struct s5* esp433;
    void** eax434;
    struct s5* esp435;
    void** eax436;
    void* v437;
    struct s5* esp438;
    void** eax439;
    struct s5* esp440;
    void** v441;
    struct s5* esp442;
    void** eax443;
    void** v444;
    void** v445;
    struct s5* esp446;
    void** eax447;
    void** v448;
    struct s5* esp449;
    void** eax450;
    struct s5* esp451;
    void** v452;
    struct s5* esp453;
    void** eax454;
    struct s4* esp455;
    struct s5* esp456;
    void** eax457;
    void** v458;
    void** v459;
    struct s5* esp460;
    void** eax461;
    void** v462;
    struct s5* esp463;
    void** eax464;
    struct s5* esp465;
    struct s5* esp466;
    struct s5* esp467;
    void** v468;
    struct s5* esp469;
    int32_t v470;
    void** v471;
    struct s5* esp472;
    struct s5* esp473;
    void** eax474;
    struct s5* esp475;
    void** eax476;
    void** v477;
    void** v478;
    struct s5* esp479;
    void** eax480;
    struct s5* esp481;
    void** eax482;
    struct s5* esp483;
    void** v484;
    struct s5* esp485;
    int32_t v486;
    void** v487;
    struct s5* esp488;
    struct s5* esp489;
    struct s5* esp490;
    struct s5* esp491;
    void** eax492;
    void** v493;
    struct s5* esp494;
    void** eax495;
    struct s5* esp496;
    struct s5* esp497;
    struct s5* esp498;
    void** v499;
    struct s5* esp500;
    int32_t v501;
    void** v502;
    struct s5* esp503;

    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp6 = esp5;
    v7 = a1;
    v8 = a2;
    eax9 = g14;
    v10 = eax9;
    v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffbf0);
    eax12 = printf_parse(a3, reinterpret_cast<int32_t>(ebp6) - 0x468, v11);
    esp13 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 0x54c - 4 + 4);
    if (eax12 >= 0) {
        v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffbf0);
        eax15 = printf_fetchargs(a4, v14, v11);
        esp16 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp13) - 4 + 4);
        if (eax15 >= 0) {
            eax19 = xsum4(7, v17, v18, 6);
            esp20 = reinterpret_cast<struct s4*>(esp16 - 4 + 4);
            if (reinterpret_cast<unsigned char>(eax19) > reinterpret_cast<unsigned char>(0xf9f)) {
                if (eax19 == 0xffffffff || (eax21 = fun_8048d0c(eax19, v17, v18, 6), esp20 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp20) - 4 + 4), v22 = eax21, v22 == 0)) {
                    addr_804e93b_5:
                    esp20->f0 = v23;
                    esp24 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                    esp24->f0 = 0x804e949;
                    fun_8048c2c(esp24->f4, esp24->f8, esp24->fc, 6, esp24->f14, esp24->f18, esp24->f1c, esp24->f20, esp24->f24, esp24->f28);
                    esp25 = reinterpret_cast<struct s4*>(&esp24->f4);
                    if (v26) {
                        esp25->f0 = v27;
                        esp28 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp25) - 4);
                        esp28->f0 = 0x804e961;
                        fun_8048c2c(esp28->f4, esp28->f8, esp28->fc, 6, esp28->f14, esp28->f18, esp28->f1c, esp28->f20, esp28->f24, esp28->f28);
                        esp25 = reinterpret_cast<struct s4*>(&esp28->f4);
                    }
                } else {
                    v29 = v22;
                    goto addr_804b6f1_8;
                }
            } else {
                esp20 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esp20) - (reinterpret_cast<uint32_t>(eax19 + 15) + 15 >> 4 << 4));
                v22 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 + 1) + 15 >> 4 << 4);
                v29 = reinterpret_cast<void**>(0);
                goto addr_804b6f1_8;
            }
        } else {
            v30 = v31;
            fun_8048c2c(v30, v14, v11, v32, v33, v34, v35, v36, v37, v38);
            esp39 = esp16 - 4 + 4;
            if (v40) {
                v30 = v41;
                fun_8048c2c(v30, v14, v11, v42, v43, v44, v45, v46, v47, v48);
                esp39 = esp39 - 4 + 4;
            }
            eax57 = fun_8048afc(v30, v14, v11, v49, v50, v51, v52, v53, v54, v55, v56);
            esp13 = reinterpret_cast<struct s4*>(esp39 - 4 + 4);
            *eax57 = reinterpret_cast<void**>(22);
            v58 = reinterpret_cast<void**>(0);
            goto addr_804e976_13;
        }
    } else {
        v58 = reinterpret_cast<void**>(0);
        goto addr_804e976_13;
    }
    esp59 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp25) - 4);
    esp59->f0 = 0x804e966;
    eax60 = fun_8048afc(esp59->f4, esp59->f8, esp59->fc, 6, esp59->f14, esp59->f18, esp59->f1c, esp59->f20, esp59->f24, esp59->f28, esp59->f2c);
    esp13 = reinterpret_cast<struct s4*>(&esp59->f4);
    *eax60 = reinterpret_cast<void**>(12);
    v58 = reinterpret_cast<void**>(0);
    addr_804e976_13:
    eax61 = v58;
    edx62 = v10 ^ g14;
    if (edx62) {
        esp63 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp13) - 4);
        esp63->f0 = 0x804e98d;
        eax61 = fun_8048d1c(esp63->f4, esp63->f8, esp63->fc, 6);
    }
    return eax61;
    addr_804b6f1_8:
    if (!v7) {
        v64 = reinterpret_cast<void**>(0);
        v65 = reinterpret_cast<void**>(0);
    } else {
        v64 = v7;
        v65 = *reinterpret_cast<void***>(v8);
    }
    v66 = reinterpret_cast<void**>(0);
    v67 = a3;
    v68 = 0;
    v69 = v70;
    goto addr_804b756_21;
    addr_804e867_22:
    *reinterpret_cast<void***>(v8) = v66;
    v58 = v64;
    goto addr_804e976_13;
    addr_804e8e8_23:
    esp71 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp72) - 4);
    esp71->f0 = 0x804e8ed;
    eax73 = fun_8048afc(esp71->f4, 2, esp71->fc, 6, esp71->f14, esp71->f18, esp71->f1c, esp71->f20, esp71->f24, esp71->f28, esp71->f2c);
    esp13 = reinterpret_cast<struct s4*>(&esp71->f4);
    *eax73 = reinterpret_cast<void**>(75);
    v58 = reinterpret_cast<void**>(0);
    goto addr_804e976_13;
    addr_804e465_24:
    esp74 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp75) - 4);
    esp74->f0 = 0x804e46a;
    eax76 = fun_8048afc(esp74->f4, 2, esp74->fc, 6, esp74->f14, esp74->f18, esp74->f1c, esp74->f20, esp74->f24, esp74->f28, esp74->f2c);
    esp13 = reinterpret_cast<struct s4*>(&esp74->f4);
    *eax76 = reinterpret_cast<void**>(22);
    v58 = reinterpret_cast<void**>(0);
    goto addr_804e976_13;
    while (1) {
        addr_804c618_25:
        v77 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(v78) + (v69->f28 << 4));
        v79 = v69->f8;
        *reinterpret_cast<void***>(v22) = reinterpret_cast<void**>(37);
        v80 = v22 + 1;
        eax81 = v79 & 1;
        if (*reinterpret_cast<signed char*>(&eax81)) {
            *reinterpret_cast<void***>(v80) = reinterpret_cast<void**>(39);
            ++v80;
        }
        if (v79 & 2) {
            *reinterpret_cast<void***>(v80) = reinterpret_cast<void**>(45);
            ++v80;
        }
        if (v79 & 4) {
            *reinterpret_cast<void***>(v80) = reinterpret_cast<void**>(43);
            ++v80;
        }
        if (v79 & 8) {
            *reinterpret_cast<void***>(v80) = reinterpret_cast<void**>(32);
            ++v80;
        }
        if (v79 & 16) {
            *reinterpret_cast<void***>(v80) = reinterpret_cast<void**>(35);
            ++v80;
        }
        if (v79 & 32) {
            *reinterpret_cast<void***>(v80) = reinterpret_cast<void**>(48);
            ++v80;
        }
        if (v69->fc != v69->f10) {
            v82 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v69->f10) - reinterpret_cast<unsigned char>(v69->fc));
            edx83 = v69->fc;
            esp20->f8 = v82;
            esp20->f4 = edx83;
            esp20->f0 = v80;
            esp84 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
            esp84->f0 = 0x804c769;
            fun_8048c8c(esp84->f4, esp84->f8, esp84->fc);
            esp20 = reinterpret_cast<struct s4*>(&esp84->f4);
            v80 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v80) + reinterpret_cast<unsigned char>(v82));
        }
        if (v69->f18 != v69->f1c) {
            v85 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v69->f1c) - reinterpret_cast<unsigned char>(v69->f18));
            edx86 = v69->f18;
            esp20->f8 = v85;
            esp20->f4 = edx86;
            esp20->f0 = v80;
            esp87 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
            esp87->f0 = 0x804c7d0;
            fun_8048c8c(esp87->f4, esp87->f8, esp87->fc);
            esp20 = reinterpret_cast<struct s4*>(&esp87->f4);
            v80 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v80) + reinterpret_cast<unsigned char>(v85));
        }
        if (v77 > 16) 
            goto addr_804c859_42;
        ecx88 = v77;
        v89 = 1 << *reinterpret_cast<unsigned char*>(&ecx88);
        if (v89 & 0x14180) {
            addr_804c837_44:
            *reinterpret_cast<void***>(v80) = reinterpret_cast<void**>(0x6c);
            ++v80;
            goto addr_804c859_42;
        } else {
            if (v89 & 0x1000) {
                *reinterpret_cast<void***>(v80) = reinterpret_cast<void**>(76);
                ++v80;
                goto addr_804c859_42;
            }
            if (!(v89 & 0x600)) {
                addr_804c859_42:
                edx90 = v69->f24;
                *reinterpret_cast<void***>(v80) = *reinterpret_cast<void***>(&edx90);
                *reinterpret_cast<void***>(v80 + 1) = reinterpret_cast<void**>(0);
                v91 = 0;
                if (v69->f14 != -1) {
                    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v92) + (v69->f14 << 4)) != 5) {
                        esp93 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp93->f0 = 0x804c8b0;
                        fun_8048aec(esp93->f4, esp93->f8, esp93->fc, 6, esp93->f14);
                        esp20 = reinterpret_cast<struct s4*>(&esp93->f4);
                    }
                    v94 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v95) + (v69->f14 << 4) + 4);
                    v91 = 1;
                }
            } else {
                *reinterpret_cast<void***>(v80) = reinterpret_cast<void**>(0x6c);
                ++v80;
                goto addr_804c837_44;
            }
        }
        if (v69->f20 != -1) {
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v96) + (v69->f20 << 4)) != 5) {
                esp97 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                esp97->f0 = 0x804c90b;
                fun_8048aec(esp97->f4, esp97->f8, esp97->fc, 6, esp97->f14);
                esp20 = reinterpret_cast<struct s4*>(&esp97->f4);
            }
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp6) + v91 * 4 - 0x418) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v98) + (v69->f20 << 4) + 4);
            ++v91;
        }
        esp20->f4 = reinterpret_cast<void**>(2);
        esp20->f0 = v66;
        esp99 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
        esp99->f0 = 0x804c94d;
        eax100 = xsum(0, 2);
        esp20 = reinterpret_cast<struct s4*>(&esp99->f4);
        if (reinterpret_cast<unsigned char>(eax100) > reinterpret_cast<unsigned char>(v65)) {
            if (!v65) {
                v101 = reinterpret_cast<void**>(12);
            } else {
                if (reinterpret_cast<signed char>(v65) < reinterpret_cast<signed char>(0)) {
                    v102 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v102 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v65) + reinterpret_cast<unsigned char>(v65));
                }
                v101 = v102;
            }
            v65 = v101;
            esp20->f4 = reinterpret_cast<void**>(2);
            esp20->f0 = v66;
            esp103 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
            esp103->f0 = 0x804c9c0;
            eax104 = xsum(0, 2);
            esp20 = reinterpret_cast<struct s4*>(&esp103->f4);
            if (reinterpret_cast<unsigned char>(eax104) > reinterpret_cast<unsigned char>(v65)) {
                esp20->f4 = reinterpret_cast<void**>(2);
                esp20->f0 = v66;
                esp105 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                esp105->f0 = 0x804c9de;
                eax106 = xsum(0, 2);
                esp20 = reinterpret_cast<struct s4*>(&esp105->f4);
                v65 = eax106;
            }
            if (v65 == 0xffffffff) 
                goto addr_804e8ff_66;
            if (v64 == v7 || !v64) {
                esp20->f0 = v65;
                esp107 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                esp107->f0 = 0x804ca22;
                eax108 = fun_8048d0c(12, 2, esp107->fc, 6);
                esp20 = reinterpret_cast<struct s4*>(&esp107->f4);
                v109 = eax108;
            } else {
                esp20->f4 = v65;
                esp20->f0 = v64;
                esp110 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                esp110->f0 = 0x804ca42;
                eax111 = fun_8048b6c(0, 12);
                esp20 = reinterpret_cast<struct s4*>(&esp110->f4);
                v109 = eax111;
            }
            if (!v109) 
                goto addr_804e8ff_66;
            if (v64 == v7 && v66) {
                esp20->f8 = v66;
                esp20->f4 = v64;
                esp20->f0 = v109;
                esp112 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                esp112->f0 = 0x804ca8e;
                fun_8048c8c(esp112->f4, 0, 0);
                esp20 = reinterpret_cast<struct s4*>(&esp112->f4);
            }
            v64 = v109;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66)) = 0;
        while (1) {
            v113 = reinterpret_cast<void**>(0xffffffff);
            v114 = reinterpret_cast<void**>(0);
            v115 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v65) - reinterpret_cast<unsigned char>(v66));
            if (reinterpret_cast<signed char>(v115) < reinterpret_cast<signed char>(0)) {
                v115 = reinterpret_cast<void**>(0x7fffffff);
            }
            if (v77 <= 17) {
                goto *reinterpret_cast<int32_t*>((v77 << 2) + 0x805094c);
            }
            while (1) {
                esp116 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                esp116->f0 = 0x804e1ee;
                fun_8048aec(0, 2, esp116->fc, 6, esp116->f14);
                esp20 = reinterpret_cast<struct s4*>(&esp116->f4);
                while (1) {
                    if (reinterpret_cast<signed char>(v113) < reinterpret_cast<signed char>(0)) {
                        eax117 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v80 + 1));
                        if (*reinterpret_cast<signed char*>(&eax117)) 
                            goto addr_804e257_82;
                        if (reinterpret_cast<signed char>(v114) < reinterpret_cast<signed char>(0)) 
                            goto addr_804e275_84;
                        v113 = v114;
                    } else {
                        if (reinterpret_cast<unsigned char>(v113) < reinterpret_cast<unsigned char>(v115) && (eax118 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v113) + reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v64)), !!*reinterpret_cast<signed char*>(&eax118))) {
                            esp119 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp119->f0 = 0x804e224;
                            fun_8048aec(0, 2, esp119->fc, 6, esp119->f14);
                            esp20 = reinterpret_cast<struct s4*>(&esp119->f4);
                        }
                        if (reinterpret_cast<signed char>(v114) > reinterpret_cast<signed char>(v113)) {
                            v113 = v114;
                        }
                    }
                    if (reinterpret_cast<signed char>(v113) < reinterpret_cast<signed char>(0)) 
                        goto addr_804e403_91;
                    if (reinterpret_cast<unsigned char>(v113 + 1) >= reinterpret_cast<unsigned char>(v115)) 
                        goto addr_804e494_93;
                    v66 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(v113));
                    while (1) {
                        v67 = v69->f4;
                        ++v68;
                        ++v69;
                        addr_804b756_21:
                        if (v69->f0 != v67) {
                            v120 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v69->f0) - reinterpret_cast<unsigned char>(v67));
                            esp20->f4 = v120;
                            esp20->f0 = v66;
                            esp121 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp121->f0 = 0x804b79e;
                            eax122 = xsum(0, esp121->f8);
                            esp20 = reinterpret_cast<struct s4*>(&esp121->f4);
                            if (reinterpret_cast<unsigned char>(eax122) > reinterpret_cast<unsigned char>(v65)) {
                                if (!v65) {
                                    v123 = reinterpret_cast<void**>(12);
                                } else {
                                    if (reinterpret_cast<signed char>(v65) < reinterpret_cast<signed char>(0)) {
                                        v124 = reinterpret_cast<void**>(0xffffffff);
                                    } else {
                                        v124 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v65) + reinterpret_cast<unsigned char>(v65));
                                    }
                                    v123 = v124;
                                }
                                v65 = v123;
                                if (reinterpret_cast<unsigned char>(eax122) > reinterpret_cast<unsigned char>(v65)) {
                                    v65 = eax122;
                                }
                                if (v65 == 0xffffffff) 
                                    goto addr_804e8ff_66;
                                if (v64 == v7 || !v64) {
                                    esp20->f0 = v65;
                                    esp125 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                    esp125->f0 = 0x804b85f;
                                    eax126 = fun_8048d0c(12, esp125->f8, esp125->fc, 6);
                                    esp20 = reinterpret_cast<struct s4*>(&esp125->f4);
                                    v127 = eax126;
                                } else {
                                    esp20->f4 = v65;
                                    esp20->f0 = v64;
                                    esp128 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                    esp128->f0 = 0x804b87f;
                                    eax129 = fun_8048b6c(0, 12);
                                    esp20 = reinterpret_cast<struct s4*>(&esp128->f4);
                                    v127 = eax129;
                                }
                                if (!v127) 
                                    goto addr_804e8ff_66;
                                if (v64 == v7 && v66) {
                                    esp20->f8 = v66;
                                    esp20->f4 = v64;
                                    esp20->f0 = v127;
                                    esp130 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                    esp130->f0 = 0x804b8cb;
                                    fun_8048c8c(esp130->f4, 0, 0);
                                    esp20 = reinterpret_cast<struct s4*>(&esp130->f4);
                                }
                                v64 = v127;
                            }
                            esp20->f8 = v120;
                            esp20->f4 = v67;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp131 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp131->f0 = 0x804b902;
                            fun_8048c8c(0, esp131->f8, esp131->fc);
                            esp20 = reinterpret_cast<struct s4*>(&esp131->f4);
                            v66 = eax122;
                        }
                        if (v132 == v68) 
                            goto addr_804e661_115;
                        eax133 = v69->f24;
                        if (*reinterpret_cast<signed char*>(&eax133) == 37) {
                            if (v69->f28 != -1) {
                                esp134 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp134->f0 = 0x804b945;
                                fun_8048aec(esp134->f4, esp134->f8, esp134->fc, 6, esp134->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp134->f4);
                            }
                            esp20->f4 = reinterpret_cast<void**>(1);
                            esp20->f0 = v66;
                            esp135 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp135->f0 = 0x804b95b;
                            eax136 = xsum(0, 1);
                            esp20 = reinterpret_cast<struct s4*>(&esp135->f4);
                            if (reinterpret_cast<unsigned char>(eax136) > reinterpret_cast<unsigned char>(v65)) {
                                if (!v65) {
                                    v137 = reinterpret_cast<void**>(12);
                                } else {
                                    if (reinterpret_cast<signed char>(v65) < reinterpret_cast<signed char>(0)) {
                                        v138 = reinterpret_cast<void**>(0xffffffff);
                                    } else {
                                        v138 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v65) + reinterpret_cast<unsigned char>(v65));
                                    }
                                    v137 = v138;
                                }
                                v65 = v137;
                                if (reinterpret_cast<unsigned char>(eax136) > reinterpret_cast<unsigned char>(v65)) {
                                    v65 = eax136;
                                }
                                if (v65 == 0xffffffff) 
                                    goto addr_804e8ff_66;
                                if (v64 == v7 || !v64) {
                                    esp20->f0 = v65;
                                    esp139 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                    esp139->f0 = 0x804ba1c;
                                    eax140 = fun_8048d0c(12, 1, esp139->fc, 6);
                                    esp20 = reinterpret_cast<struct s4*>(&esp139->f4);
                                    v141 = eax140;
                                } else {
                                    esp20->f4 = v65;
                                    esp20->f0 = v64;
                                    esp142 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                    esp142->f0 = 0x804ba3c;
                                    eax143 = fun_8048b6c(0, 12);
                                    esp20 = reinterpret_cast<struct s4*>(&esp142->f4);
                                    v141 = eax143;
                                }
                                if (!v141) 
                                    goto addr_804e8ff_66;
                                if (v64 == v7 && v66) {
                                    esp20->f8 = v66;
                                    esp20->f4 = v64;
                                    esp20->f0 = v141;
                                    esp144 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                    esp144->f0 = 0x804ba88;
                                    fun_8048c8c(esp144->f4, 0, 0);
                                    esp20 = reinterpret_cast<struct s4*>(&esp144->f4);
                                }
                                v64 = v141;
                            }
                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66)) = 37;
                            v66 = eax136;
                            continue;
                        }
                        if (v69->f28 == -1) {
                            esp145 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp145->f0 = 0x804bac9;
                            fun_8048aec(esp145->f4, esp145->f8, esp145->fc, 6, esp145->f14);
                            esp20 = reinterpret_cast<struct s4*>(&esp145->f4);
                        }
                        eax146 = v69->f24;
                        if (*reinterpret_cast<signed char*>(&eax146) == 0x6e) 
                            goto addr_804badb_140;
                        addr_804bbde_141:
                        eax147 = v69->f24;
                        if (*reinterpret_cast<signed char*>(&eax147) == 0x66) 
                            goto addr_804bc52_142;
                        eax148 = v69->f24;
                        if (*reinterpret_cast<signed char*>(&eax148) == 70) 
                            goto addr_804bc52_142;
                        eax149 = v69->f24;
                        if (*reinterpret_cast<signed char*>(&eax149) == 0x65) 
                            goto addr_804bc52_142;
                        eax150 = v69->f24;
                        if (*reinterpret_cast<signed char*>(&eax150) == 69) 
                            goto addr_804bc52_142;
                        eax151 = v69->f24;
                        if (*reinterpret_cast<signed char*>(&eax151) == 0x67) 
                            goto addr_804bc52_142;
                        eax152 = v69->f24;
                        if (*reinterpret_cast<signed char*>(&eax152) == 71) 
                            goto addr_804bc52_142;
                        eax153 = v69->f24;
                        if (*reinterpret_cast<signed char*>(&eax153) == 97) 
                            goto addr_804bc52_142;
                        eax154 = v69->f24;
                        if (*reinterpret_cast<signed char*>(&eax154) != 65) 
                            goto addr_804c618_25;
                        addr_804bc52_142:
                        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v155) + (v69->f28 << 4)) != 12) 
                            goto addr_804c618_25;
                        eax156 = reinterpret_cast<struct s7*>(reinterpret_cast<int32_t>(v157) + (v69->f28 << 4));
                        ecx158 = eax156->fc;
                        edx159 = eax156->f8;
                        esp20->f0 = eax156->f4;
                        esp20->f4 = edx159;
                        esp20->f8 = ecx158;
                        esp160 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp160->f0 = 0x804bca0;
                        eax161 = is_infinitel(esp160->f4, esp160->f8, esp160->fc);
                        esp20 = reinterpret_cast<struct s4*>(&esp160->f4);
                        if (!eax161) 
                            goto addr_804c618_25;
                        v162 = v69->f8;
                        v163 = 0;
                        v164 = reinterpret_cast<void**>(0);
                        if (v69->fc != v69->f10) {
                            if (v69->f14 == -1) {
                                v165 = v69->fc;
                                do {
                                    eax166 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v165));
                                    ++v165;
                                    if (reinterpret_cast<unsigned char>(v164) > reinterpret_cast<unsigned char>(0x19999999)) {
                                        v167 = reinterpret_cast<void**>(0xffffffff);
                                    } else {
                                        edx168 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v164) << 2) + reinterpret_cast<unsigned char>(v164));
                                        v167 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx168) + reinterpret_cast<uint32_t>(edx168));
                                    }
                                    esp20->f4 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax166) - 48);
                                    esp20->f0 = v167;
                                    esp169 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                    esp169->f0 = 0x804bdd7;
                                    eax170 = xsum(0xffffffff, esp169->f8);
                                    esp20 = reinterpret_cast<struct s4*>(&esp169->f4);
                                    v164 = eax170;
                                } while (v69->f10 != v165);
                            } else {
                                if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v171) + (v69->f14 << 4)) != 5) {
                                    esp172 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                    esp172->f0 = 0x804bd14;
                                    fun_8048aec(esp172->f4, esp172->f8, esp172->fc, 6, esp172->f14);
                                    esp20 = reinterpret_cast<struct s4*>(&esp172->f4);
                                }
                                v173 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v174) + (v69->f14 << 4) + 4);
                                if (reinterpret_cast<signed char>(v173) >= reinterpret_cast<signed char>(0)) {
                                    v164 = v173;
                                } else {
                                    v162 = v162 | 2;
                                    v164 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v173));
                                }
                            }
                            v163 = 1;
                        }
                        v175 = 0;
                        v176 = reinterpret_cast<void**>(0);
                        if (v69->f18 != v69->f1c) {
                            if (v69->f20 == -1) {
                                v177 = v69->f18 + 1;
                                v176 = reinterpret_cast<void**>(0);
                                while (v69->f1c != v177) {
                                    eax178 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v177));
                                    ++v177;
                                    if (reinterpret_cast<unsigned char>(v176) > reinterpret_cast<unsigned char>(0x19999999)) {
                                        v179 = reinterpret_cast<void**>(0xffffffff);
                                    } else {
                                        edx180 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v176) << 2) + reinterpret_cast<unsigned char>(v176));
                                        v179 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx180) + reinterpret_cast<uint32_t>(edx180));
                                    }
                                    esp20->f4 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax178) - 48);
                                    esp20->f0 = v179;
                                    esp181 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                    esp181->f0 = 0x804bf1b;
                                    eax182 = xsum(0xffffffff, esp181->f8);
                                    esp20 = reinterpret_cast<struct s4*>(&esp181->f4);
                                    v176 = eax182;
                                }
                                v175 = 1;
                            } else {
                                if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v183) + (v69->f20 << 4)) != 5) {
                                    esp184 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                    esp184->f0 = 0x804be55;
                                    fun_8048aec(esp184->f4, esp184->f8, esp184->fc, 6, esp184->f14);
                                    esp20 = reinterpret_cast<struct s4*>(&esp184->f4);
                                }
                                v185 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v186) + (v69->f20 << 4) + 4);
                                if (reinterpret_cast<signed char>(v185) >= reinterpret_cast<signed char>(0)) {
                                    v176 = v185;
                                    v175 = 1;
                                }
                            }
                        }
                        if (!v175) {
                            v176 = reinterpret_cast<void**>(6);
                        }
                        v187 = reinterpret_cast<void**>(0);
                        if (reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(v176)) {
                            v187 = v176;
                        }
                        esp20->f4 = reinterpret_cast<void**>(12);
                        esp20->f0 = v187;
                        esp188 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp188->f0 = 0x804bf89;
                        eax189 = xsum(0, 12);
                        esp190 = reinterpret_cast<struct s4*>(&esp188->f4);
                        v191 = eax189;
                        if (reinterpret_cast<unsigned char>(v191) < reinterpret_cast<unsigned char>(v164)) {
                            v191 = v164;
                        }
                        esp190->f4 = reinterpret_cast<void**>(1);
                        esp190->f0 = v191;
                        esp192 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp190) - 4);
                        esp192->f0 = 0x804bfbf;
                        eax193 = xsum(esp192->f4, 1);
                        esp20 = reinterpret_cast<struct s4*>(&esp192->f4);
                        v194 = eax193;
                        if (reinterpret_cast<unsigned char>(v194) > reinterpret_cast<unsigned char>(0x2bc)) {
                            if (v194 == 0xffffffff) 
                                goto addr_804e8ff_66;
                            esp20->f0 = v194;
                            esp195 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp195->f0 = 0x804c006;
                            eax196 = fun_8048d0c(esp195->f4, 1, esp195->fc, 6);
                            esp20 = reinterpret_cast<struct s4*>(&esp195->f4);
                            v197 = eax196;
                            if (!v197) 
                                goto addr_804e8ff_66;
                        } else {
                            v197 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffd28);
                        }
                        v198 = v197;
                        eax199 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(v200) + (v69->f28 << 4));
                        ecx201 = eax199->fc;
                        edx202 = eax199->f8;
                        v203 = eax199->f4;
                        esp20->f0 = v203;
                        esp20->f4 = edx202;
                        esp20->f8 = ecx201;
                        esp204 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp204->f0 = 0x804c081;
                        eax205 = rpl_isnanl(esp204->f4, esp204->f8, esp204->fc);
                        esp20 = reinterpret_cast<struct s4*>(&esp204->f4);
                        if (!eax205) {
                            v206 = 0;
                            __asm__("fnstcw word [ebp+0xfffffc58]");
                            eax207 = *reinterpret_cast<uint16_t*>(&v113);
                            eax208 = *reinterpret_cast<uint16_t*>(&eax207);
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax208) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax208) + 1) | 3);
                            *reinterpret_cast<uint16_t*>(&v113) = *reinterpret_cast<uint16_t*>(&eax208);
                            __asm__("fldcw word [ebp+0xfffffc58]");
                            edx209 = edx202;
                            esp20->f0 = v203;
                            esp20->f4 = edx209;
                            esp20->f8 = ecx201;
                            esp210 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp210->f0 = 0x804c166;
                            eax211 = fun_8048ccc();
                            esp20 = reinterpret_cast<struct s4*>(&esp210->f4);
                            if (eax211) {
                                v206 = -1;
                                __asm__("fld tword [ebp+0xfffffbb8]");
                                __asm__("fchs ");
                                __asm__("fstp tword [ebp+0xfffffbb8]");
                            }
                            if (v206 >= 0) {
                                if (!(v162 & 4)) {
                                    eax212 = reinterpret_cast<void**>(v162 & 8);
                                    if (eax212) {
                                        eax212 = v198;
                                        *reinterpret_cast<void***>(eax212) = reinterpret_cast<void**>(32);
                                        ++v198;
                                    }
                                } else {
                                    eax212 = v198;
                                    *reinterpret_cast<void***>(eax212) = reinterpret_cast<void**>(43);
                                    ++v198;
                                }
                            } else {
                                eax212 = v198;
                                *reinterpret_cast<void***>(eax212) = reinterpret_cast<void**>(45);
                                ++v198;
                            }
                            __asm__("fld tword [ebp+0xfffffbb8]");
                            __asm__("fldz ");
                            __asm__("fxch st0, st1");
                            __asm__("fucompp ");
                            *reinterpret_cast<int16_t*>(&eax212) = fpu_status_word213;
                            *reinterpret_cast<unsigned char*>(&eax212) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(&eax212 + 1) | *reinterpret_cast<uint1_t*>(&eax212 + 1)));
                            eax214 = reinterpret_cast<unsigned char>(eax212) ^ 1;
                            if (*reinterpret_cast<unsigned char*>(&eax214) || (*reinterpret_cast<int16_t*>(&eax214) = fpu_status_word215, pf216 = *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax214) + 1), *reinterpret_cast<unsigned char*>(&eax214) = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax214) + 1), *reinterpret_cast<unsigned char*>(&edx209) = reinterpret_cast<uint1_t>(!pf216), eax217 = eax214 & reinterpret_cast<unsigned char>(edx209) ^ 1, !!*reinterpret_cast<signed char*>(&eax217))) {
                                esp218 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp218->f0 = 0x804c2b7;
                                fun_8048aec(esp218->f4, esp218->f8, esp218->fc, 6, esp218->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp218->f4);
                            } else {
                                eax219 = v69->f24;
                                if (*reinterpret_cast<signed char*>(&eax219) <= 64 || (eax220 = v69->f24, *reinterpret_cast<signed char*>(&eax220) > 90)) {
                                    *reinterpret_cast<void***>(v198) = reinterpret_cast<void**>(0x69);
                                    v221 = v198 + 1;
                                    *reinterpret_cast<void***>(v221) = reinterpret_cast<void**>(0x6e);
                                    v222 = v221 + 1;
                                    *reinterpret_cast<void***>(v222) = reinterpret_cast<void**>(0x66);
                                    v198 = v222 + 1;
                                } else {
                                    *reinterpret_cast<void***>(v198) = reinterpret_cast<void**>(73);
                                    v223 = v198 + 1;
                                    *reinterpret_cast<void***>(v223) = reinterpret_cast<void**>(78);
                                    v224 = v223 + 1;
                                    *reinterpret_cast<void***>(v224) = reinterpret_cast<void**>(70);
                                    v198 = v224 + 1;
                                }
                                eax225 = *reinterpret_cast<uint16_t*>(&eax207);
                                *reinterpret_cast<uint16_t*>(&v113) = *reinterpret_cast<uint16_t*>(&eax225);
                                __asm__("fldcw word [ebp+0xfffffc58]");
                            }
                        } else {
                            eax226 = v69->f24;
                            if (*reinterpret_cast<signed char*>(&eax226) <= 64 || (eax227 = v69->f24, *reinterpret_cast<signed char*>(&eax227) > 90)) {
                                *reinterpret_cast<void***>(v198) = reinterpret_cast<void**>(0x6e);
                                v228 = v198 + 1;
                                *reinterpret_cast<void***>(v228) = reinterpret_cast<void**>(97);
                                v229 = v228 + 1;
                                *reinterpret_cast<void***>(v229) = reinterpret_cast<void**>(0x6e);
                                v198 = v229 + 1;
                            } else {
                                *reinterpret_cast<void***>(v198) = reinterpret_cast<void**>(78);
                                v230 = v198 + 1;
                                *reinterpret_cast<void***>(v230) = reinterpret_cast<void**>(65);
                                v231 = v230 + 1;
                                *reinterpret_cast<void***>(v231) = reinterpret_cast<void**>(78);
                                v198 = v231 + 1;
                            }
                        }
                        if (v163 && reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v198) - reinterpret_cast<unsigned char>(v197)) < reinterpret_cast<unsigned char>(v164)) {
                            v232 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v197) - reinterpret_cast<unsigned char>(v198) + reinterpret_cast<unsigned char>(v164));
                            v233 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v198) + reinterpret_cast<uint32_t>(v232));
                            if (!(v162 & 2)) {
                                if (!(v162 & 32) || 1) {
                                    v234 = v233;
                                    while (reinterpret_cast<unsigned char>(v198) > reinterpret_cast<unsigned char>(v197)) {
                                        --v234;
                                        --v198;
                                        edx235 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v198));
                                        *reinterpret_cast<void***>(v234) = *reinterpret_cast<void***>(&edx235);
                                    }
                                    while (v232) {
                                        *reinterpret_cast<void***>(v198) = reinterpret_cast<void**>(32);
                                        ++v198;
                                        v232 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v232) - 1);
                                    }
                                } else {
                                    v236 = v233;
                                    while (reinterpret_cast<unsigned char>(v198) > reinterpret_cast<unsigned char>(0)) {
                                        --v236;
                                        --v198;
                                        edx237 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v198));
                                        *reinterpret_cast<void***>(v236) = *reinterpret_cast<void***>(&edx237);
                                    }
                                    while (v232) {
                                        *reinterpret_cast<void***>(v198) = reinterpret_cast<void**>(48);
                                        ++v198;
                                        v232 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v232) - 1);
                                    }
                                }
                            } else {
                                while (v232) {
                                    *reinterpret_cast<void***>(v198) = reinterpret_cast<void**>(32);
                                    ++v198;
                                    v232 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v232) - 1);
                                }
                            }
                            v198 = v233;
                        }
                        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v198) - reinterpret_cast<unsigned char>(v197)) >= reinterpret_cast<unsigned char>(v194)) {
                            esp238 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp238->f0 = 0x804c451;
                            fun_8048aec(esp238->f4, esp238->f8, esp238->fc, 6, esp238->f14);
                            esp20 = reinterpret_cast<struct s4*>(&esp238->f4);
                        }
                        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v65) - reinterpret_cast<unsigned char>(v66)) <= reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v198) - reinterpret_cast<unsigned char>(v197)) && (esp20->f4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v198) - reinterpret_cast<unsigned char>(v197)), esp20->f0 = v66, esp239 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4), esp239->f0 = 0x804c487, eax240 = xsum(0, esp239->f8), esp20 = reinterpret_cast<struct s4*>(&esp239->f4), reinterpret_cast<unsigned char>(eax240) > reinterpret_cast<unsigned char>(v65))) {
                            if (!v65) {
                                v241 = reinterpret_cast<void**>(12);
                            } else {
                                if (reinterpret_cast<signed char>(v65) < reinterpret_cast<signed char>(0)) {
                                    v242 = reinterpret_cast<void**>(0xffffffff);
                                } else {
                                    v242 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v65) + reinterpret_cast<unsigned char>(v65));
                                }
                                v241 = v242;
                            }
                            v65 = v241;
                            if (reinterpret_cast<unsigned char>(eax240) > reinterpret_cast<unsigned char>(v65)) {
                                v65 = eax240;
                            }
                            if (v65 == 0xffffffff) 
                                goto addr_804e8ff_66;
                            if (v64 == v7 || !v64) {
                                esp20->f0 = v65;
                                esp243 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp243->f0 = 0x804c548;
                                eax244 = fun_8048d0c(12, esp243->f8, esp243->fc, 6);
                                esp20 = reinterpret_cast<struct s4*>(&esp243->f4);
                                v245 = eax244;
                            } else {
                                esp20->f4 = v65;
                                esp20->f0 = v64;
                                esp246 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp246->f0 = 0x804c568;
                                eax247 = fun_8048b6c(0, 12);
                                esp20 = reinterpret_cast<struct s4*>(&esp246->f4);
                                v245 = eax247;
                            }
                            if (!v245) 
                                goto addr_804e8ff_66;
                            if (v64 == v7 && v66) {
                                esp20->f8 = v66;
                                esp20->f4 = v64;
                                esp20->f0 = v245;
                                esp248 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp248->f0 = 0x804c5b4;
                                fun_8048c8c(esp248->f4, 0, 0);
                                esp20 = reinterpret_cast<struct s4*>(&esp248->f4);
                            }
                            v64 = v245;
                        }
                        esp20->f8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v198) - reinterpret_cast<unsigned char>(v197));
                        esp20->f4 = v197;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp249 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp249->f0 = 0x804c5eb;
                        fun_8048c8c(0, esp249->f8, esp249->fc);
                        esp20 = reinterpret_cast<struct s4*>(&esp249->f4);
                        if (v197 != reinterpret_cast<int32_t>(ebp6) + 0xfffffd28) {
                            esp20->f0 = v197;
                            esp250 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp250->f0 = 0x804c607;
                            fun_8048c2c(esp250->f4, esp250->f8, esp250->fc, 6, esp250->f14, esp250->f18, esp250->f1c, esp250->f20, esp250->f24, esp250->f28);
                            esp20 = reinterpret_cast<struct s4*>(&esp250->f4);
                        }
                        v66 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v66) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v198) - reinterpret_cast<unsigned char>(v197)));
                        continue;
                        addr_804badb_140:
                        v251 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v252) + (v69->f28 << 4)) - 18;
                        switch (v251) {
                        default:
                            esp253 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp253->f0 = 0x804bbde;
                            fun_8048aec(esp253->f4, esp253->f8, esp253->fc, 6, esp253->f14);
                            esp20 = reinterpret_cast<struct s4*>(&esp253->f4);
                            goto addr_804bbde_141;
                        case 0:
                            eax254 = v66;
                            **reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(v255) + (v69->f28 << 4) + 4) = *reinterpret_cast<signed char*>(&eax254);
                            break;
                        case 1:
                            eax256 = v66;
                            **reinterpret_cast<int16_t**>(reinterpret_cast<int32_t>(v257) + (v69->f28 << 4) + 4) = *reinterpret_cast<int16_t*>(&eax256);
                            break;
                        case 2:
                            **reinterpret_cast<void****>(reinterpret_cast<int32_t>(v258) + (v69->f28 << 4) + 4) = v66;
                            break;
                        case 3:
                            **reinterpret_cast<void****>(reinterpret_cast<int32_t>(v259) + (v69->f28 << 4) + 4) = v66;
                            break;
                        case 4:
                            ecx260 = *reinterpret_cast<struct s9**>(reinterpret_cast<int32_t>(v261) + (v69->f28 << 4) + 4);
                            ecx260->f0 = v66;
                            ecx260->f4 = 0;
                        }
                    }
                    eax262 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v263) + (v69->f28 << 4) + 4);
                    v264 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax262)));
                    if (v91 == 1) {
                        esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v264;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp265 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp265->f0 = 0x804cbeb;
                        eax266 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp265->f4);
                        v114 = eax266;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v264;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp267 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp267->f0 = 0x804cb97;
                            eax268 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp267->f4);
                            v114 = eax268;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v264;
                                esp20->f10 = v269;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp270 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp270->f0 = 0x804cc49;
                                eax271 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp270->f4);
                                v114 = eax271;
                                continue;
                            } else {
                                esp272 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp272->f0 = 0x804cc59;
                                fun_8048aec(0, 2, esp272->fc, 6, esp272->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp272->f4);
                            }
                        }
                    }
                    eax273 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v274) + (v69->f28 << 4) + 4);
                    v275 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax273)));
                    if (v91 == 1) {
                        esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v275;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp276 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp276->f0 = 0x804cd3e;
                        eax277 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp276->f4);
                        v114 = eax277;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v275;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp278 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp278->f0 = 0x804ccea;
                            eax279 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp278->f4);
                            v114 = eax279;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v275;
                                esp20->f10 = v280;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp281 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp281->f0 = 0x804cd9c;
                                eax282 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp281->f4);
                                v114 = eax282;
                                continue;
                            } else {
                                esp283 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp283->f0 = 0x804cdac;
                                fun_8048aec(0, 2, esp283->fc, 6, esp283->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp283->f4);
                            }
                        }
                    }
                    eax284 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(v285) + (v69->f28 << 4) + 4);
                    v286 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax284)));
                    if (v91 == 1) {
                        esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v286;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp287 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp287->f0 = 0x804ce8f;
                        eax288 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp287->f4);
                        v114 = eax288;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v286;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp289 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp289->f0 = 0x804ce3b;
                            eax290 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp289->f4);
                            v114 = eax290;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v286;
                                esp20->f10 = v291;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp292 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp292->f0 = 0x804ceed;
                                eax293 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp292->f4);
                                v114 = eax293;
                                continue;
                            } else {
                                esp294 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp294->f0 = 0x804cefd;
                                fun_8048aec(0, 2, esp294->fc, 6, esp294->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp294->f4);
                            }
                        }
                    }
                    eax295 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(v296) + (v69->f28 << 4) + 4);
                    v297 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax295)));
                    if (v91 == 1) {
                        esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v297;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp298 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp298->f0 = 0x804cfe2;
                        eax299 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp298->f4);
                        v114 = eax299;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v297;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp300 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp300->f0 = 0x804cf8e;
                            eax301 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp300->f4);
                            v114 = eax301;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v297;
                                esp20->f10 = v302;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp303 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp303->f0 = 0x804d040;
                                eax304 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp303->f4);
                                v114 = eax304;
                                continue;
                            } else {
                                esp305 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp305->f0 = 0x804d050;
                                fun_8048aec(0, 2, esp305->fc, 6, esp305->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp305->f4);
                            }
                        }
                    }
                    v306 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v307) + (v69->f28 << 4) + 4);
                    if (v91 == 1) {
                        esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v306;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp308 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp308->f0 = 0x804d131;
                        eax309 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp308->f4);
                        v114 = eax309;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v306;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp310 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp310->f0 = 0x804d0dd;
                            eax311 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp310->f4);
                            v114 = eax311;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v306;
                                esp20->f10 = v312;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp313 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp313->f0 = 0x804d18f;
                                eax314 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp313->f4);
                                v114 = eax314;
                                continue;
                            } else {
                                esp315 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp315->f0 = 0x804d19f;
                                fun_8048aec(0, 2, esp315->fc, 6, esp315->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp315->f4);
                            }
                        }
                    }
                    v316 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v317) + (v69->f28 << 4) + 4);
                    if (v91 == 1) {
                        esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v316;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp318 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp318->f0 = 0x804d280;
                        eax319 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp318->f4);
                        v114 = eax319;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v316;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp320 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp320->f0 = 0x804d22c;
                            eax321 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp320->f4);
                            v114 = eax321;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v316;
                                esp20->f10 = v322;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp323 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp323->f0 = 0x804d2de;
                                eax324 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp323->f4);
                                v114 = eax324;
                                continue;
                            } else {
                                esp325 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp325->f0 = 0x804d2ee;
                                fun_8048aec(0, 2, esp325->fc, 6, esp325->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp325->f4);
                            }
                        }
                    }
                    v326 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v327) + (v69->f28 << 4) + 4);
                    if (v91 == 1) {
                        esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v326;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp328 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp328->f0 = 0x804d3cf;
                        eax329 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp328->f4);
                        v114 = eax329;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v326;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp330 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp330->f0 = 0x804d37b;
                            eax331 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp330->f4);
                            v114 = eax331;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v326;
                                esp20->f10 = v332;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp333 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp333->f0 = 0x804d42d;
                                eax334 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp333->f4);
                                v114 = eax334;
                                continue;
                            } else {
                                esp335 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp335->f0 = 0x804d43d;
                                fun_8048aec(0, 2, esp335->fc, 6, esp335->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp335->f4);
                            }
                        }
                    }
                    v336 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v337) + (v69->f28 << 4) + 4);
                    if (v91 == 1) {
                        esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v336;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp338 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp338->f0 = 0x804d51e;
                        eax339 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp338->f4);
                        v114 = eax339;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v336;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp340 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp340->f0 = 0x804d4ca;
                            eax341 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp340->f4);
                            v114 = eax341;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v336;
                                esp20->f10 = v342;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp343 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp343->f0 = 0x804d57c;
                                eax344 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp343->f4);
                                v114 = eax344;
                                continue;
                            } else {
                                esp345 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp345->f0 = 0x804d58c;
                                fun_8048aec(0, 2, esp345->fc, 6, esp345->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp345->f4);
                            }
                        }
                    }
                    eax346 = reinterpret_cast<struct s10*>(reinterpret_cast<int32_t>(v347) + (v69->f28 << 4));
                    edx348 = eax346->f8;
                    v349 = eax346->f4;
                    if (v91 == 1) {
                        esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v349;
                        esp20->f14 = edx348;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp350 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp350->f0 = 0x804d68a;
                        eax351 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp350->f4);
                        v114 = eax351;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v349;
                            esp20->f10 = edx348;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp352 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp352->f0 = 0x804d62c;
                            eax353 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp352->f4);
                            v114 = eax353;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f1c = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v349;
                                esp20->f18 = edx348;
                                esp20->f10 = v354;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp355 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp355->f0 = 0x804d6f2;
                                eax356 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp355->f4);
                                v114 = eax356;
                                continue;
                            } else {
                                esp357 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp357->f0 = 0x804d702;
                                fun_8048aec(0, 2, esp357->fc, 6, esp357->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp357->f4);
                            }
                        }
                    }
                    eax358 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(v359) + (v69->f28 << 4));
                    edx360 = eax358->f8;
                    v361 = eax358->f4;
                    if (v91 == 1) {
                        esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v361;
                        esp20->f14 = edx360;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp362 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp362->f0 = 0x804d800;
                        eax363 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp362->f4);
                        v114 = eax363;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v361;
                            esp20->f10 = edx360;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp364 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp364->f0 = 0x804d7a2;
                            eax365 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp364->f4);
                            v114 = eax365;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f1c = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v361;
                                esp20->f18 = edx360;
                                esp20->f10 = v366;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp367 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp367->f0 = 0x804d868;
                                eax368 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp367->f4);
                                v114 = eax368;
                                continue;
                            } else {
                                esp369 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp369->f0 = 0x804d878;
                                fun_8048aec(0, 2, esp369->fc, 6, esp369->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp369->f4);
                            }
                        }
                    }
                    __asm__("fld qword [eax+0x4]");
                    __asm__("fstp qword [ebp+0xfffffbd0]");
                    if (v91 == 1) {
                        esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        __asm__("fld qword [ebp+0xfffffbd0]");
                        __asm__("fstp qword [esp+0x10]");
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp370 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp370->f0 = 0x804d959;
                        eax371 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp370->f4);
                        v114 = eax371;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            __asm__("fld qword [ebp+0xfffffbd0]");
                            __asm__("fstp qword [esp+0xc]");
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp372 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp372->f0 = 0x804d905;
                            eax373 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp372->f4);
                            v114 = eax373;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f1c = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                __asm__("fld qword [ebp+0xfffffbd0]");
                                __asm__("fstp qword [esp+0x14]");
                                esp20->f10 = v374;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp375 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp375->f0 = 0x804d9b7;
                                eax376 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp375->f4);
                                v114 = eax376;
                                continue;
                            } else {
                                esp377 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp377->f0 = 0x804d9c7;
                                fun_8048aec(0, 2, esp377->fc, 6, esp377->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp377->f4);
                            }
                        }
                    }
                    eax378 = reinterpret_cast<struct s12*>(reinterpret_cast<int32_t>(v379) + (v69->f28 << 4));
                    ecx380 = eax378->fc;
                    edx381 = eax378->f8;
                    v382 = eax378->f4;
                    if (v91 == 1) {
                        esp20->f1c = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v382;
                        esp20->f14 = edx381;
                        esp20->f18 = ecx380;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp383 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp383->f0 = 0x804dae2;
                        eax384 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp383->f4);
                        v114 = eax384;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v382;
                            esp20->f10 = edx381;
                            esp20->f14 = ecx380;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp385 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp385->f0 = 0x804da7a;
                            eax386 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp385->f4);
                            v114 = eax386;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) - 0x3a8);
                                esp20->f14 = v382;
                                esp20->f18 = edx381;
                                esp20->f1c = ecx380;
                                esp20->f10 = v387;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp388 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp388->f0 = 0x804db54;
                                eax389 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp388->f4);
                                v114 = eax389;
                                continue;
                            } else {
                                esp390 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp390->f0 = 0x804db64;
                                fun_8048aec(0, 2, esp390->fc, 6, esp390->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp390->f4);
                            }
                        }
                    }
                    v391 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v392) + (v69->f28 << 4) + 4);
                    if (v91 == 1) {
                        esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v391;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp393 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp393->f0 = 0x804dc45;
                        eax394 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp393->f4);
                        v114 = eax394;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v391;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp395 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp395->f0 = 0x804dbf1;
                            eax396 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp395->f4);
                            v114 = eax396;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v391;
                                esp20->f10 = v397;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp398 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp398->f0 = 0x804dca3;
                                eax399 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp398->f4);
                                v114 = eax399;
                                continue;
                            } else {
                                esp400 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp400->f0 = 0x804dcb3;
                                fun_8048aec(0, 2, esp400->fc, 6, esp400->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp400->f4);
                            }
                        }
                    }
                    v401 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v402) + (v69->f28 << 4) + 4);
                    if (v91 == 1) {
                        esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v401;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp403 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp403->f0 = 0x804dd94;
                        eax404 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp403->f4);
                        v114 = eax404;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v401;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp405 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp405->f0 = 0x804dd40;
                            eax406 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp405->f4);
                            v114 = eax406;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v401;
                                esp20->f10 = v407;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp408 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp408->f0 = 0x804ddf2;
                                eax409 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp408->f4);
                                v114 = eax409;
                                continue;
                            } else {
                                esp410 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp410->f0 = 0x804de02;
                                fun_8048aec(0, 2, esp410->fc, 6, esp410->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp410->f4);
                            }
                        }
                    }
                    v411 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v412) + (v69->f28 << 4) + 4);
                    if (v91 == 1) {
                        esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v411;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp413 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp413->f0 = 0x804dee3;
                        eax414 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp413->f4);
                        v114 = eax414;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v411;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp415 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp415->f0 = 0x804de8f;
                            eax416 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp415->f4);
                            v114 = eax416;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v411;
                                esp20->f10 = v417;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp418 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp418->f0 = 0x804df41;
                                eax419 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp418->f4);
                                v114 = eax419;
                                continue;
                            } else {
                                esp420 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp420->f0 = 0x804df51;
                                fun_8048aec(0, 2, esp420->fc, 6, esp420->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp420->f4);
                            }
                        }
                    }
                    v421 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v422) + (v69->f28 << 4) + 4);
                    if (v91 == 1) {
                        esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v421;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp423 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp423->f0 = 0x804e032;
                        eax424 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp423->f4);
                        v114 = eax424;
                        continue;
                    } else {
                        if (v91 < 1) {
                            esp20->f10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v421;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp425 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp425->f0 = 0x804dfde;
                            eax426 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp425->f4);
                            v114 = eax426;
                            continue;
                        } else {
                            if (v91 == 2) {
                                esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                                esp20->f14 = v421;
                                esp20->f10 = v427;
                                esp20->fc = v94;
                                esp20->f8 = v22;
                                esp20->f4 = v115;
                                esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                                esp428 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp428->f0 = 0x804e090;
                                eax429 = fun_8048d7c();
                                esp20 = reinterpret_cast<struct s4*>(&esp428->f4);
                                v114 = eax429;
                                continue;
                            } else {
                                esp430 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                                esp430->f0 = 0x804e0a0;
                                fun_8048aec(0, 2, esp430->fc, 6, esp430->f14);
                                esp20 = reinterpret_cast<struct s4*>(&esp430->f4);
                            }
                        }
                    }
                    v431 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(v432) + (v69->f28 << 4) + 4);
                    if (v91 == 1) {
                        esp20->f14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                        esp20->f10 = v431;
                        esp20->fc = v94;
                        esp20->f8 = v22;
                        esp20->f4 = v115;
                        esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                        esp433 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                        esp433->f0 = 0x804e181;
                        eax434 = fun_8048d7c();
                        esp20 = reinterpret_cast<struct s4*>(&esp433->f4);
                        v114 = eax434;
                    } else {
                        if (v91 < 1) {
                            esp20->f10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->fc = v431;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp435 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp435->f0 = 0x804e12d;
                            eax436 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp435->f4);
                            v114 = eax436;
                        } else {
                            if (v91 != 2) 
                                break;
                            esp20->f18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffc58);
                            esp20->f14 = v431;
                            esp20->f10 = v437;
                            esp20->fc = v94;
                            esp20->f8 = v22;
                            esp20->f4 = v115;
                            esp20->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66));
                            esp438 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                            esp438->f0 = 0x804e1dc;
                            eax439 = fun_8048d7c();
                            esp20 = reinterpret_cast<struct s4*>(&esp438->f4);
                            v114 = eax439;
                        }
                    }
                }
                esp440 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                esp440->f0 = 0x804e1e9;
                fun_8048aec(0, 2, esp440->fc, 6, esp440->f14);
                esp20 = reinterpret_cast<struct s4*>(&esp440->f4);
            }
            addr_804e257_82:
            *reinterpret_cast<void***>(v80 + 1) = reinterpret_cast<void**>(0);
            continue;
            addr_804e275_84:
            if (reinterpret_cast<signed char>(v65) < reinterpret_cast<signed char>(0)) {
                v441 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v441 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v65) + reinterpret_cast<unsigned char>(v65));
            }
            esp20->f4 = reinterpret_cast<void**>(12);
            esp20->f0 = v441;
            esp442 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
            esp442->f0 = 0x804e2af;
            eax443 = xsum(0xffffffff, 12);
            esp20 = reinterpret_cast<struct s4*>(&esp442->f4);
            if (reinterpret_cast<unsigned char>(eax443) <= reinterpret_cast<unsigned char>(v65)) 
                continue;
            if (!v65) {
                v444 = reinterpret_cast<void**>(12);
            } else {
                if (reinterpret_cast<signed char>(v65) < reinterpret_cast<signed char>(0)) {
                    v445 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v445 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v65) + reinterpret_cast<unsigned char>(v65));
                }
                v444 = v445;
            }
            v65 = v444;
            if (reinterpret_cast<unsigned char>(eax443) > reinterpret_cast<unsigned char>(v65)) {
                v65 = eax443;
            }
            if (v65 == 0xffffffff) 
                goto addr_804e8ff_66;
            if (v64 == v7 || !v64) {
                esp20->f0 = v65;
                esp446 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                esp446->f0 = 0x804e370;
                eax447 = fun_8048d0c(12, 12, esp446->fc, 6);
                esp20 = reinterpret_cast<struct s4*>(&esp446->f4);
                v448 = eax447;
            } else {
                esp20->f4 = v65;
                esp20->f0 = v64;
                esp449 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                esp449->f0 = 0x804e390;
                eax450 = fun_8048b6c(0, 12);
                esp20 = reinterpret_cast<struct s4*>(&esp449->f4);
                v448 = eax450;
            }
            if (!v448) 
                goto addr_804e8ff_66;
            if (v64 == v7 && v66) {
                esp20->f8 = v66;
                esp20->f4 = v64;
                esp20->f0 = v448;
                esp451 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                esp451->f0 = 0x804e3dc;
                fun_8048c8c(esp451->f4, 0, 0);
                esp20 = reinterpret_cast<struct s4*>(&esp451->f4);
            }
            v64 = v448;
            continue;
            addr_804e494_93:
            if (v115 == 0x7fffffff) 
                goto addr_804e886_410;
            if (reinterpret_cast<signed char>(v65) < reinterpret_cast<signed char>(0)) {
                v452 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v452 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v65) + reinterpret_cast<unsigned char>(v65));
            }
            esp20->f4 = v113 + 2;
            esp20->f0 = v66;
            esp453 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
            esp453->f0 = 0x804e4e3;
            eax454 = xsum(0, 2);
            esp455 = reinterpret_cast<struct s4*>(&esp453->f4);
            esp455->f4 = v452;
            esp455->f0 = eax454;
            esp456 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp455) - 4);
            esp456->f0 = 0x804e4f5;
            eax457 = xmax(esp456->f4, 0xffffffff);
            esp20 = reinterpret_cast<struct s4*>(&esp456->f4);
            if (reinterpret_cast<unsigned char>(eax457) <= reinterpret_cast<unsigned char>(v65)) 
                continue;
            if (!v65) {
                v458 = reinterpret_cast<void**>(12);
            } else {
                if (reinterpret_cast<signed char>(v65) < reinterpret_cast<signed char>(0)) {
                    v459 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v459 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v65) + reinterpret_cast<unsigned char>(v65));
                }
                v458 = v459;
            }
            v65 = v458;
            if (reinterpret_cast<unsigned char>(eax457) > reinterpret_cast<unsigned char>(v65)) {
                v65 = eax457;
            }
            if (v65 == 0xffffffff) 
                goto addr_804e8ff_66;
            if (v64 == v7 || !v64) {
                esp20->f0 = v65;
                esp460 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                esp460->f0 = 0x804e5b6;
                eax461 = fun_8048d0c(12, 0xffffffff, esp460->fc, 6);
                esp20 = reinterpret_cast<struct s4*>(&esp460->f4);
                v462 = eax461;
            } else {
                esp20->f4 = v65;
                esp20->f0 = v64;
                esp463 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                esp463->f0 = 0x804e5d6;
                eax464 = fun_8048b6c(0, 12);
                esp20 = reinterpret_cast<struct s4*>(&esp463->f4);
                v462 = eax464;
            }
            if (!v462) 
                goto addr_804e8ff_66;
            if (v64 == v7 && v66) {
                esp20->f8 = v66;
                esp20->f4 = v64;
                esp20->f0 = v462;
                esp465 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
                esp465->f0 = 0x804e622;
                fun_8048c8c(esp465->f4, 0, 0);
                esp20 = reinterpret_cast<struct s4*>(&esp465->f4);
            }
            v64 = v462;
        }
    }
    addr_804e403_91:
    if (v64 != v7 && v64) {
        esp20->f0 = v64;
        esp466 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
        esp466->f0 = 0x804e428;
        fun_8048c2c(0, 2, esp466->fc, 6, esp466->f14, esp466->f18, esp466->f1c, esp466->f20, esp466->f24, esp466->f28);
        esp20 = reinterpret_cast<struct s4*>(&esp466->f4);
    }
    if (v29) {
        esp20->f0 = v29;
        esp467 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
        esp467->f0 = 0x804e43f;
        fun_8048c2c(esp467->f4, 2, esp467->fc, 6, esp467->f14, esp467->f18, esp467->f1c, esp467->f20, esp467->f24, esp467->f28);
        esp20 = reinterpret_cast<struct s4*>(&esp467->f4);
    }
    esp20->f0 = v468;
    esp469 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
    esp469->f0 = 0x804e44d;
    fun_8048c2c(esp469->f4, 2, esp469->fc, 6, esp469->f14, esp469->f18, esp469->f1c, esp469->f20, esp469->f24, esp469->f28);
    esp75 = reinterpret_cast<struct s4*>(&esp469->f4);
    if (v470) {
        esp75->f0 = v471;
        esp472 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp75) - 4);
        esp472->f0 = 0x804e465;
        fun_8048c2c(esp472->f4, 2, esp472->fc, 6, esp472->f14, esp472->f18, esp472->f1c, esp472->f20, esp472->f24, esp472->f28);
        esp75 = reinterpret_cast<struct s4*>(&esp472->f4);
        goto addr_804e465_24;
    }
    addr_804e661_115:
    esp20->f4 = reinterpret_cast<void**>(1);
    esp20->f0 = v66;
    esp473 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
    esp473->f0 = 0x804e677;
    eax474 = xsum(0, 1);
    esp20 = reinterpret_cast<struct s4*>(&esp473->f4);
    if (reinterpret_cast<unsigned char>(eax474) <= reinterpret_cast<unsigned char>(v65)) {
        addr_804e7c4_436:
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v64) + reinterpret_cast<unsigned char>(v66)) = 0;
        if (v64 != v7 && (reinterpret_cast<unsigned char>(v66 + 1) < reinterpret_cast<unsigned char>(v65) && (esp20->f4 = v66 + 1, esp20->f0 = v64, esp475 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4), esp475->f0 = 0x804e80f, eax476 = fun_8048b6c(0, 1), esp20 = reinterpret_cast<struct s4*>(&esp475->f4), !!eax476))) {
            v64 = eax476;
        }
    } else {
        if (!v65) {
            v477 = reinterpret_cast<void**>(12);
        } else {
            if (reinterpret_cast<signed char>(v65) < reinterpret_cast<signed char>(0)) {
                v478 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v478 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v65) + reinterpret_cast<unsigned char>(v65));
            }
            v477 = v478;
        }
        v65 = v477;
        esp20->f4 = reinterpret_cast<void**>(1);
        esp20->f0 = v66;
        esp479 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
        esp479->f0 = 0x804e6ea;
        eax480 = xsum(0, 1);
        esp20 = reinterpret_cast<struct s4*>(&esp479->f4);
        if (reinterpret_cast<unsigned char>(eax480) > reinterpret_cast<unsigned char>(v65)) {
            esp20->f4 = reinterpret_cast<void**>(1);
            esp20->f0 = v66;
            esp481 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
            esp481->f0 = 0x804e708;
            eax482 = xsum(0, 1);
            esp20 = reinterpret_cast<struct s4*>(&esp481->f4);
            v65 = eax482;
        }
        if (v65 == 0xffffffff) 
            goto addr_804e8ff_66; else 
            goto addr_804e727_447;
    }
    if (v29) {
        esp20->f0 = v29;
        esp483 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
        esp483->f0 = 0x804e841;
        fun_8048c2c(esp483->f4, 1, esp483->fc, 6, esp483->f14, esp483->f18, esp483->f1c, esp483->f20, esp483->f24, esp483->f28);
        esp20 = reinterpret_cast<struct s4*>(&esp483->f4);
    }
    esp20->f0 = v484;
    esp485 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
    esp485->f0 = 0x804e84f;
    fun_8048c2c(esp485->f4, 1, esp485->fc, 6, esp485->f14, esp485->f18, esp485->f1c, esp485->f20, esp485->f24, esp485->f28);
    esp13 = reinterpret_cast<struct s4*>(&esp485->f4);
    if (v486) {
        esp13->f0 = v487;
        esp488 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp13) - 4);
        esp488->f0 = 0x804e867;
        fun_8048c2c(esp488->f4, 1, esp488->fc, 6, esp488->f14, esp488->f18, esp488->f1c, esp488->f20, esp488->f24, esp488->f28);
        esp13 = reinterpret_cast<struct s4*>(&esp488->f4);
        goto addr_804e867_22;
    }
    addr_804e8ff_66:
    if (v64 != v7 && v64) {
        esp20->f0 = v64;
        esp489 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
        esp489->f0 = 0x804e924;
        fun_8048c2c(0, 1, esp489->fc, 6, esp489->f14, esp489->f18, esp489->f1c, esp489->f20, esp489->f24, esp489->f28);
        esp20 = reinterpret_cast<struct s4*>(&esp489->f4);
    }
    if (v29) {
        esp20->f0 = v29;
        esp490 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
        esp490->f0 = 0x804e93b;
        fun_8048c2c(esp490->f4, 1, esp490->fc, 6, esp490->f14, esp490->f18, esp490->f1c, esp490->f20, esp490->f24, esp490->f28);
        esp20 = reinterpret_cast<struct s4*>(&esp490->f4);
        goto addr_804e93b_5;
    }
    addr_804e727_447:
    if (v64 == v7 || !v64) {
        esp20->f0 = v65;
        esp491 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
        esp491->f0 = 0x804e74c;
        eax492 = fun_8048d0c(12, 1, esp491->fc, 6);
        esp20 = reinterpret_cast<struct s4*>(&esp491->f4);
        v493 = eax492;
    } else {
        esp20->f4 = v65;
        esp20->f0 = v64;
        esp494 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
        esp494->f0 = 0x804e76c;
        eax495 = fun_8048b6c(0, 12);
        esp20 = reinterpret_cast<struct s4*>(&esp494->f4);
        v493 = eax495;
    }
    if (!v493) 
        goto addr_804e8ff_66;
    if (v64 == v7 && v66) {
        esp20->f8 = v66;
        esp20->f4 = v64;
        esp20->f0 = v493;
        esp496 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
        esp496->f0 = 0x804e7b8;
        fun_8048c8c(esp496->f4, 0, 0);
        esp20 = reinterpret_cast<struct s4*>(&esp496->f4);
    }
    v64 = v493;
    goto addr_804e7c4_436;
    addr_804e886_410:
    if (v64 != v7 && v64) {
        esp20->f0 = v64;
        esp497 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
        esp497->f0 = 0x804e8ab;
        fun_8048c2c(0, 2, esp497->fc, 6, esp497->f14, esp497->f18, esp497->f1c, esp497->f20, esp497->f24, esp497->f28);
        esp20 = reinterpret_cast<struct s4*>(&esp497->f4);
    }
    if (v29) {
        esp20->f0 = v29;
        esp498 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
        esp498->f0 = 0x804e8c2;
        fun_8048c2c(esp498->f4, 2, esp498->fc, 6, esp498->f14, esp498->f18, esp498->f1c, esp498->f20, esp498->f24, esp498->f28);
        esp20 = reinterpret_cast<struct s4*>(&esp498->f4);
    }
    esp20->f0 = v499;
    esp500 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp20) - 4);
    esp500->f0 = 0x804e8d0;
    fun_8048c2c(esp500->f4, 2, esp500->fc, 6, esp500->f14, esp500->f18, esp500->f1c, esp500->f20, esp500->f24, esp500->f28);
    esp72 = reinterpret_cast<struct s4*>(&esp500->f4);
    if (v501) {
        esp72->f0 = v502;
        esp503 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esp72) - 4);
        esp503->f0 = 0x804e8e8;
        fun_8048c2c(esp503->f4, 2, esp503->fc, 6, esp503->f14, esp503->f18, esp503->f1c, esp503->f20, esp503->f24, esp503->f28);
        esp72 = reinterpret_cast<struct s4*>(&esp503->f4);
        goto addr_804e8e8_23;
    }
}

struct s13 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    uint32_t f8;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[3] pad20;
    void** f14;
    signed char[3] pad24;
    void** f18;
    signed char[3] pad28;
    void** f1c;
    signed char[3] pad32;
    void** f20;
    signed char[3] pad36;
    signed char f24;
    signed char[3] pad40;
    void** f28;
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
    struct s13* v44;
    void** v45;
    void** v46;
    void** v47;
    void** edx48;
    void** v49;
    void** eax50;
    void** v51;
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
                *reinterpret_cast<void***>(v10 + 4) = reinterpret_cast<void**>("(NULL)");
                break;
            }
        case 16:
            edx34 = a1;
            a1 = edx34 + 4;
            *reinterpret_cast<void***>(v10 + 4) = *reinterpret_cast<void***>(edx34);
            if (!*reinterpret_cast<void***>(v10 + 4)) {
                *reinterpret_cast<void***>(v10 + 4) = reinterpret_cast<void**>("(");
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
            goto 0x804ed1a;
        }
        ++v9;
        v10 = v10 + 16;
    }
    v41 = 0;
    addr_804ed40_31:
    return v41;
    v41 = -1;
    goto addr_804ed40_31;
    while (1) {
        v42 = reinterpret_cast<void**>(0);
        while (1) {
            if (!v42) {
                addr_804fa21_35:
                eax43 = *reinterpret_cast<unsigned char*>(&v7 + 3);
                v44->f24 = *reinterpret_cast<signed char*>(&eax43);
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
                        goto addr_804fb60_43;
                    edx48 = *reinterpret_cast<void***>(a2 + 4);
                    v49 = v47;
                    v11 = edx48;
                    eax50 = fun_8048b6c(v11, v49);
                    if (!eax50) 
                        goto addr_804fb60_43;
                    *reinterpret_cast<void***>(a2 + 4) = eax50;
                }
            } else {
                v44->f28 = v51;
                if (!reinterpret_cast<int1_t>(v44->f28 == 0xffffffff)) 
                    goto addr_804f8cc_47;
                v44->f28 = v10;
                ++v10;
                if (v44->f28 == 0xffffffff) 
                    goto addr_804fb19_49;
                addr_804f8cc_47:
                v52 = v44->f28;
                if (reinterpret_cast<unsigned char>(v52) < reinterpret_cast<unsigned char>(v53)) 
                    goto addr_804f9d3_50; else 
                    goto addr_804f8e1_51;
            }
            do {
                eax54 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                if (!*reinterpret_cast<signed char*>(&eax54)) 
                    goto addr_804fae3_53;
                eax55 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                *reinterpret_cast<unsigned char*>(&v7 + 3) = *reinterpret_cast<unsigned char*>(&eax55);
                ++v9;
            } while (*reinterpret_cast<unsigned char*>(&v7 + 3) != 37);
            v51 = reinterpret_cast<void**>(0xffffffff);
            v44 = reinterpret_cast<struct s13*>(*reinterpret_cast<void***>(a2 + 4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) * 44);
            v44->f0 = v9 + 0xffffffff;
            v44->f8 = 0;
            v44->fc = reinterpret_cast<void**>(0);
            v44->f10 = reinterpret_cast<void**>(0);
            v44->f14 = reinterpret_cast<void**>(0xffffffff);
            v44->f18 = reinterpret_cast<void**>(0);
            v44->f1c = reinterpret_cast<void**>(0);
            v44->f20 = reinterpret_cast<void**>(0xffffffff);
            v44->f28 = reinterpret_cast<void**>(0xffffffff);
            eax56 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
            if (*reinterpret_cast<signed char*>(&eax56) <= 47 || (eax57 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), *reinterpret_cast<signed char*>(&eax57) > 57)) {
                while (1) {
                    addr_804ef3c_56:
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
                    goto addr_804ef3c_56; else 
                    goto addr_804ee9a_72;
            }
            eax68 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
            if (*reinterpret_cast<signed char*>(&eax68) != 42) {
                eax69 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                if (*reinterpret_cast<signed char*>(&eax69) <= 47 || (eax70 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), *reinterpret_cast<signed char*>(&eax70) > 57)) {
                    addr_804f313_75:
                    eax71 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                    if (*reinterpret_cast<signed char*>(&eax71) != 46) {
                        addr_804f61c_76:
                        v72 = 0;
                    } else {
                        ++v9;
                        eax73 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                        if (*reinterpret_cast<signed char*>(&eax73) != 42) {
                            v44->f18 = v9 + 0xffffffff;
                            while ((eax74 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), *reinterpret_cast<signed char*>(&eax74) > 47) && (eax75 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), *reinterpret_cast<signed char*>(&eax75) <= 57)) {
                                ++v9;
                            }
                            v44->f1c = v9;
                            v76 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v44->f1c) - reinterpret_cast<unsigned char>(v44->f18));
                            if (reinterpret_cast<unsigned char>(v11) >= reinterpret_cast<unsigned char>(v76)) 
                                goto addr_804f61c_76; else 
                                goto addr_804f616_82;
                        } else {
                            v44->f18 = v9 + 0xffffffff;
                            ++v9;
                            v44->f1c = v9;
                            if (reinterpret_cast<unsigned char>(v11) <= reinterpret_cast<unsigned char>(1)) {
                                v11 = reinterpret_cast<void**>(2);
                            }
                            eax77 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                            if (*reinterpret_cast<signed char*>(&eax77) <= 47) 
                                goto addr_804f448_86;
                            eax78 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                            if (*reinterpret_cast<signed char*>(&eax78) > 57) 
                                goto addr_804f448_86; else 
                                goto addr_804f375_88;
                        }
                    }
                } else {
                    v44->fc = v9;
                    while ((eax79 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), *reinterpret_cast<signed char*>(&eax79) > 47) && (eax80 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9)), *reinterpret_cast<signed char*>(&eax80) <= 57)) {
                        ++v9;
                    }
                    v44->f10 = v9;
                    v81 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v44->f10) - reinterpret_cast<unsigned char>(v44->fc));
                    if (reinterpret_cast<unsigned char>(v49) >= reinterpret_cast<unsigned char>(v81)) 
                        goto addr_804f313_75; else 
                        goto addr_804f30d_93;
                }
            } else {
                v44->fc = v9;
                ++v9;
                v44->f10 = v9;
                if (!v49) {
                    v49 = reinterpret_cast<void**>(1);
                }
                eax82 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                if (*reinterpret_cast<signed char*>(&eax82) <= 47) 
                    goto addr_804f12b_97;
                eax83 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9));
                if (*reinterpret_cast<signed char*>(&eax83) > 57) 
                    goto addr_804f12b_97; else 
                    goto addr_804f058_99;
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
                goto 0x804fb19;
            case 0:
                goto 0x804f88b;
            }
            addr_804f616_82:
            v11 = v76;
            goto addr_804f61c_76;
            addr_804f448_86:
            if (!reinterpret_cast<int1_t>(v44->f20 == 0xffffffff)) 
                goto addr_804f46f_153;
            v44->f20 = v10;
            ++v10;
            if (v44->f20 == 0xffffffff) 
                goto addr_804fb19_49;
            addr_804f46f_153:
            v96 = v44->f20;
            if (reinterpret_cast<unsigned char>(v96) >= reinterpret_cast<unsigned char>(v53)) {
                if (reinterpret_cast<signed char>(v53) < reinterpret_cast<signed char>(0)) {
                    v97 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v97 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v53) + reinterpret_cast<unsigned char>(v53));
                }
                v53 = v97;
                if (reinterpret_cast<unsigned char>(v53) <= reinterpret_cast<unsigned char>(v96)) {
                    v49 = reinterpret_cast<void**>(1);
                    v11 = v96;
                    eax98 = xsum(v11, 1);
                    v53 = eax98;
                }
                if (reinterpret_cast<unsigned char>(v53) > reinterpret_cast<unsigned char>(0xfffffff)) {
                    v99 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v99 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v53) << 4);
                }
                if (v99 == 0xffffffff) 
                    goto addr_804fb60_43;
                if (!*reinterpret_cast<void***>(a3 + 4)) {
                    v11 = v99;
                    v51 = reinterpret_cast<void**>(0x804f531);
                    eax100 = fun_8048d0c(v11, v49, v53, v45);
                    v101 = eax100;
                } else {
                    edx102 = *reinterpret_cast<void***>(a3 + 4);
                    v49 = v99;
                    v11 = edx102;
                    v51 = reinterpret_cast<void**>(0x804f51e);
                    eax103 = fun_8048b6c(v11, v49);
                    v101 = eax103;
                }
                if (!v101) 
                    goto addr_804fb60_43;
                *reinterpret_cast<void***>(a3 + 4) = v101;
            }
            while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) <= reinterpret_cast<unsigned char>(v96)) {
                edx104 = *reinterpret_cast<void***>(a3);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(edx104) << 4)) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a3) = edx104 + 1;
            }
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v96) << 4))) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v96) << 4)) == 5)) 
                    goto addr_804fb19_49;
                goto addr_804f61c_76;
            } else {
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v96) << 4)) = reinterpret_cast<void**>(5);
                goto addr_804f61c_76;
            }
            addr_804f375_88:
            v105 = v9;
            while ((eax106 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v105)), *reinterpret_cast<signed char*>(&eax106) > 47) && (eax107 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v105)), *reinterpret_cast<signed char*>(&eax107) <= 57)) {
                ++v105;
            }
            eax108 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v105));
            if (*reinterpret_cast<signed char*>(&eax108) != 36) 
                goto addr_804f448_86;
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
                v51 = reinterpret_cast<void**>(0x804f404);
                eax116 = xsum(v11, v49);
                v109 = eax116;
                ++v110;
            }
            if (!v109) 
                goto addr_804fb19_49;
            if (v109 == 0xffffffff) 
                goto addr_804fb19_49;
            v44->f20 = v109 + 0xffffffff;
            v9 = v110 + 1;
            goto addr_804f448_86;
            addr_804f30d_93:
            v49 = v81;
            goto addr_804f313_75;
            addr_804f12b_97:
            if (!reinterpret_cast<int1_t>(v44->f14 == 0xffffffff)) 
                goto addr_804f152_187;
            v44->f14 = v10;
            ++v10;
            if (v44->f14 == 0xffffffff) 
                goto addr_804fb19_49;
            addr_804f152_187:
            v117 = v44->f14;
            if (reinterpret_cast<unsigned char>(v117) >= reinterpret_cast<unsigned char>(v53)) {
                if (reinterpret_cast<signed char>(v53) < reinterpret_cast<signed char>(0)) {
                    v118 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v118 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v53) + reinterpret_cast<unsigned char>(v53));
                }
                v53 = v118;
                if (reinterpret_cast<unsigned char>(v53) <= reinterpret_cast<unsigned char>(v117)) {
                    v49 = reinterpret_cast<void**>(1);
                    v11 = v117;
                    eax119 = xsum(v11, 1);
                    v53 = eax119;
                }
                if (reinterpret_cast<unsigned char>(v53) > reinterpret_cast<unsigned char>(0xfffffff)) {
                    v120 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v120 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v53) << 4);
                }
                if (v120 == 0xffffffff) 
                    goto addr_804fb60_43;
                if (!*reinterpret_cast<void***>(a3 + 4)) {
                    v11 = v120;
                    v51 = reinterpret_cast<void**>(0x804f214);
                    eax121 = fun_8048d0c(v11, v49, v53, v45);
                    v122 = eax121;
                } else {
                    edx123 = *reinterpret_cast<void***>(a3 + 4);
                    v49 = v120;
                    v11 = edx123;
                    v51 = reinterpret_cast<void**>(0x804f201);
                    eax124 = fun_8048b6c(v11, v49);
                    v122 = eax124;
                }
                if (!v122) 
                    goto addr_804fb60_43;
                *reinterpret_cast<void***>(a3 + 4) = v122;
            }
            while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) <= reinterpret_cast<unsigned char>(v117)) {
                edx125 = *reinterpret_cast<void***>(a3);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(edx125) << 4)) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a3) = edx125 + 1;
            }
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v117) << 4))) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v117) << 4)) == 5)) 
                    goto addr_804fb19_49;
                goto addr_804f313_75;
            } else {
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v117) << 4)) = reinterpret_cast<void**>(5);
                goto addr_804f313_75;
            }
            addr_804f058_99:
            v126 = v9;
            while ((eax127 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v126)), *reinterpret_cast<signed char*>(&eax127) > 47) && (eax128 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v126)), *reinterpret_cast<signed char*>(&eax128) <= 57)) {
                ++v126;
            }
            eax129 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v126));
            if (*reinterpret_cast<signed char*>(&eax129) != 36) 
                goto addr_804f12b_97;
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
                v51 = reinterpret_cast<void**>(0x804f0e7);
                eax137 = xsum(v11, v49);
                v130 = eax137;
                ++v131;
            }
            if (!v130) 
                goto addr_804fb19_49;
            if (v130 == 0xffffffff) 
                goto addr_804fb19_49;
            v44->f14 = v130 + 0xffffffff;
            v9 = v131 + 1;
            goto addr_804f12b_97;
            addr_804ee9a_72:
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
                goto addr_804fb19_49;
            if (v138 == 0xffffffff) 
                goto addr_804fb19_49;
            v51 = v138 - 1;
            v9 = v139 + 1;
            goto addr_804ef3c_56;
            addr_804f9d3_50:
            while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) <= reinterpret_cast<unsigned char>(v52)) {
                edx146 = *reinterpret_cast<void***>(a3);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(edx146) << 4)) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a3) = edx146 + 1;
            }
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v52) << 4))) {
                if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v52) << 4)) != v42) 
                    goto addr_804fb19_49; else 
                    goto addr_804fa21_35;
            } else {
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v52) << 4)) = v42;
                goto addr_804fa21_35;
            }
            addr_804f8e1_51:
            if (reinterpret_cast<signed char>(v53) < reinterpret_cast<signed char>(0)) {
                v147 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v147 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v53) + reinterpret_cast<unsigned char>(v53));
            }
            v53 = v147;
            if (reinterpret_cast<unsigned char>(v53) <= reinterpret_cast<unsigned char>(v52)) {
                v49 = reinterpret_cast<void**>(1);
                v11 = v52;
                eax148 = xsum(v11, 1);
                v53 = eax148;
            }
            if (reinterpret_cast<unsigned char>(v53) > reinterpret_cast<unsigned char>(0xfffffff)) {
                v149 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v149 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v53) << 4);
            }
            if (v149 == 0xffffffff) 
                goto addr_804fb60_43;
            if (!*reinterpret_cast<void***>(a3 + 4)) {
                v11 = v149;
                eax150 = fun_8048d0c(v11, v49, v53, v45);
                v151 = eax150;
            } else {
                edx152 = *reinterpret_cast<void***>(a3 + 4);
                v49 = v149;
                v11 = edx152;
                eax153 = fun_8048b6c(v11, v49);
                v151 = eax153;
            }
            if (!v151) 
                goto addr_804fb60_43;
            *reinterpret_cast<void***>(a3 + 4) = v151;
            goto addr_804f9d3_50;
        }
    }
    addr_804fae3_53:
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2 + 4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) * 44) = v9;
    *reinterpret_cast<void***>(a2 + 8) = v49;
    *reinterpret_cast<void***>(a2 + 12) = v11;
    v154 = 0;
    addr_804fba5_246:
    return v154;
    addr_804fb19_49:
    if (*reinterpret_cast<void***>(a3 + 4)) {
        v11 = *reinterpret_cast<void***>(a3 + 4);
        fun_8048c2c(v11, v49, v53, v45, v10, v9, v7, v5, v4, a1);
    }
    if (*reinterpret_cast<void***>(a2 + 4)) {
        v11 = *reinterpret_cast<void***>(a2 + 4);
        fun_8048c2c(v11, v49, v53, v45, v10, v9, v7, v5, v4, a1);
    }
    eax155 = fun_8048afc(v11, v49, v53, v45, v10, v9, v7, v5, v4, a1, a2);
    *eax155 = reinterpret_cast<void**>(22);
    v154 = -1;
    goto addr_804fba5_246;
    addr_804fb60_43:
    if (*reinterpret_cast<void***>(a3 + 4)) {
        v11 = *reinterpret_cast<void***>(a3 + 4);
        fun_8048c2c(v11, v49, v53, v45, v10, v9, v7, v5, v4, a1);
    }
    if (*reinterpret_cast<void***>(a2 + 4)) {
        v11 = *reinterpret_cast<void***>(a2 + 4);
        fun_8048c2c(v11, v49, v53, v45, v10, v9, v7, v5, v4, a1);
    }
    eax156 = fun_8048afc(v11, v49, v53, v45, v10, v9, v7, v5, v4, a1, a2);
    *eax156 = reinterpret_cast<void**>(12);
    v154 = -1;
    goto addr_804fba5_246;
}

int32_t __signbitl = 0x8048cd2;

int32_t fun_8048ccc() {
    goto __signbitl;
}

int32_t snprintf = 0x8048d82;

void** fun_8048d7c() {
    goto snprintf;
}

void** xmax(void** a1, void** a2) {
    void** v3;

    v3 = a1;
    if (reinterpret_cast<unsigned char>(v3) < reinterpret_cast<unsigned char>(a2)) {
        v3 = a2;
    }
    return v3;
}

int32_t __do_global_dtors_aux();

struct s14 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804fd08(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s14* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

void** safe_write(void** a1, void** a2, void** a3) {
    void** v4;
    void** ebp5;
    void** eax6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void*** eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void*** eax20;
    void** v21;

    v4 = ebp5;
    while (eax6 = fun_8048b8c(a1, a2, a3), reinterpret_cast<signed char>(eax6) < reinterpret_cast<signed char>(0)) {
        eax13 = fun_8048afc(a1, a2, a3, v7, v8, v9, v10, v11, v12, eax6, v4);
        if (*eax13 == 4) 
            continue;
        eax20 = fun_8048afc(a1, a2, a3, v14, v15, v16, v17, v18, v19, eax6, v4);
        if (!reinterpret_cast<int1_t>(*eax20 == 22)) 
            goto addr_804b086_5;
        if (reinterpret_cast<unsigned char>(a3) <= reinterpret_cast<unsigned char>(0x7fffe000)) 
            goto addr_804b086_5;
        a3 = reinterpret_cast<void**>(0x7fffe000);
    }
    v21 = eax6;
    addr_804b08c_9:
    return v21;
    addr_804b086_5:
    v21 = eax6;
    goto addr_804b08c_9;
}

int32_t textdomain = 0x8048d62;

void fun_8048d5c(int32_t a1, int32_t a2) {
    goto textdomain;
}

void** quote_n(void** a1, void** a2) {
    void** eax3;

    eax3 = quotearg_n_style(a1, 5, a2);
    return eax3;
}

int32_t ferror_unlocked = 0x8048bd2;

int32_t fun_8048bcc(void** a1) {
    goto ferror_unlocked;
}

int32_t getopt_long = 0x8048c42;

int32_t fun_8048c3c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto getopt_long;
}

void** version_etc_va(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** ebp7;
    void** v8;
    void** ebx9;
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
    void** eax24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** eax29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
    void** eax35;
    void** v36;
    void** v37;
    void** eax38;
    void** v39;
    void** v40;
    void** eax41;
    void** v42;
    void** v43;
    void** eax44;
    void** v45;
    void** v46;
    void** eax47;
    void** v48;
    void** v49;
    void** eax50;
    void** v51;
    void** v52;
    void** eax53;
    void** v54;
    void** v55;
    void** eax56;
    void** v57;
    void** v58;
    void** eax59;
    void** v60;
    void** v61;
    void** eax62;

    v6 = ebp7;
    v8 = ebx9;
    v10 = a5;
    v11 = reinterpret_cast<void**>(0);
    while (edx12 = v10, v10 = edx12 + 4, !!*reinterpret_cast<void***>(edx12)) {
        ++v11;
    }
    if (!a2) {
        v13 = a4;
        v14 = a3;
        v15 = reinterpret_cast<void**>("%s %s\n");
        fun_8048cfc(a1, "%s %s\n", v14, v13, v16, v17, v18, v10);
    } else {
        v19 = a4;
        v13 = a3;
        v14 = a2;
        v15 = reinterpret_cast<void**>("%s (%s) %s\n");
        fun_8048cfc(a1, "%s (%s) %s\n", v14, v13, v19, v20, v21, v10);
    }
    eax24 = fun_8048c1c("(C)", v15, v14, v13, v19, v22, v23, v10, v11, v8, v6);
    fun_8048cfc(a1, "Copyright %s %d Free Software Foundation, Inc.", eax24, 0x7d8, v19, v25, v26, v10);
    eax29 = fun_8048c1c("\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", "Copyright %s %d Free Software Foundation, Inc.", eax24, 0x7d8, v19, v27, v28, v10, v11, v8, v6);
    fun_8048b3c(eax29, a1, eax24, 0x7d8, v19, v30, v31, v10);
    if (reinterpret_cast<unsigned char>(v11) > reinterpret_cast<unsigned char>(9)) {
        eax34 = fun_8048c1c("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", a1, eax24, 0x7d8, v19, v32, v33, v10, v11, v8, v6);
        eax35 = rpl_vfprintf(a1, eax34, a5, 0x7d8, v19);
    } else {
        switch (v11) {
        case 0:
            fun_8048aec(eax29, a1, eax24, 0x7d8, v19);
        case 1:
            eax38 = fun_8048c1c("Written by %s.\n", a1, eax24, 0x7d8, v19, v36, v37, v10, v11, v8, v6);
            eax35 = rpl_vfprintf(a1, eax38, a5, 0x7d8, v19);
            break;
        case 2:
            eax41 = fun_8048c1c("Written by %s and %s.\n", a1, eax24, 0x7d8, v19, v39, v40, v10, v11, v8, v6);
            eax35 = rpl_vfprintf(a1, eax41, a5, 0x7d8, v19);
            break;
        case 3:
            eax44 = fun_8048c1c("Written by %s, %s, and %s.\n", a1, eax24, 0x7d8, v19, v42, v43, v10, v11, v8, v6);
            eax35 = rpl_vfprintf(a1, eax44, a5, 0x7d8, v19);
            break;
        case 4:
            eax47 = fun_8048c1c("Written by %s, %s, %s,\nand %s.\n", a1, eax24, 0x7d8, v19, v45, v46, v10, v11, v8, v6);
            eax35 = rpl_vfprintf(a1, eax47, a5, 0x7d8, v19);
            break;
        case 5:
            eax50 = fun_8048c1c("Written by %s, %s, %s,\n%s, and %s.\n", a1, eax24, 0x7d8, v19, v48, v49, v10, v11, v8, v6);
            eax35 = rpl_vfprintf(a1, eax50, a5, 0x7d8, v19);
            break;
        case 6:
            eax53 = fun_8048c1c("Written by %s, %s, %s,\n%s, %s, and %s.\n", a1, eax24, 0x7d8, v19, v51, v52, v10, v11, v8, v6);
            eax35 = rpl_vfprintf(a1, eax53, a5, 0x7d8, v19);
            break;
        case 7:
            eax56 = fun_8048c1c("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", a1, eax24, 0x7d8, v19, v54, v55, v10, v11, v8, v6);
            eax35 = rpl_vfprintf(a1, eax56, a5, 0x7d8, v19);
            break;
        case 8:
            eax59 = fun_8048c1c("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", a1, eax24, 0x7d8, v19, v57, v58, v10, v11, v8, v6);
            eax35 = rpl_vfprintf(a1, eax59, a5, 0x7d8, v19);
            break;
        case 9:
            eax62 = fun_8048c1c("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n", a1, eax24, 0x7d8, v19, v60, v61, v10, v11, v8, v6);
            eax35 = rpl_vfprintf(a1, eax62, a5, 0x7d8, v19);
        }
    }
    return eax35;
}

int32_t __fpending = 0x8048d32;

int32_t fun_8048d2c(void** a1) {
    goto __fpending;
}

int32_t fclose = 0x8048c72;

int32_t fun_8048c6c(void** a1) {
    goto fclose;
}

int32_t bindtextdomain = 0x8048bf2;

void fun_8048bec(int32_t a1, int32_t a2) {
    goto bindtextdomain;
}

struct s2* quoting_options_from_style(struct s2* a1, int32_t a2) {
    void* v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;

    fun_8048b9c(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 40 + 4, 0, 32, v3);
    a1->f0 = a2;
    a1->f4 = v4;
    a1->f8 = v5;
    a1->fc = v6;
    a1->f10 = v7;
    a1->f14 = v8;
    a1->f18 = v9;
    a1->f1c = v10;
    a1->f20 = v11;
    return a1;
}

int32_t __ctype_get_mb_cur_max = 0x8048b52;

int32_t fun_8048b4c() {
    goto __ctype_get_mb_cur_max;
}

int32_t setlocale = 0x8048cb2;

void fun_8048cac(int32_t a1, int32_t a2) {
    goto setlocale;
}

void** quotearg_n(void** a1, void** a2) {
    void** eax3;

    eax3 = quotearg_n_options(a1, a2, 0xffffffff, 0x8052140);
    return eax3;
}

struct s15 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    uint32_t f8;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[3] pad20;
    void** f14;
    signed char[3] pad24;
    void** f18;
    signed char[3] pad28;
    void** f1c;
    signed char[3] pad32;
    void** f20;
    signed char[3] pad36;
    signed char f24;
    signed char[3] pad40;
    void** f28;
};

int32_t printf_parse(void** a1, struct s3* a2, void** a3) {
    void** v4;
    void** v5;
    void* v6;
    void* v7;
    uint32_t v8;
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
    void** v23;
    void*** eax24;
    int32_t v25;
    void** v26;
    uint32_t eax27;
    uint32_t eax28;
    void** v29;
    struct s15* v30;
    uint32_t eax31;
    uint32_t eax32;
    uint32_t eax33;
    uint32_t eax34;
    uint32_t eax35;
    uint32_t eax36;
    uint32_t eax37;
    uint32_t eax38;
    void** v39;
    uint32_t eax40;
    uint32_t eax41;
    uint32_t eax42;
    uint32_t eax43;
    uint32_t eax44;
    uint32_t eax45;
    uint32_t eax46;
    uint32_t v47;
    uint32_t eax48;
    uint32_t eax49;
    uint32_t eax50;
    void* v51;
    uint32_t eax52;
    uint32_t eax53;
    uint32_t eax54;
    uint32_t eax55;
    void* v56;
    uint32_t eax57;
    uint32_t eax58;
    uint32_t eax59;
    uint32_t eax60;
    uint32_t eax61;
    uint32_t eax62;
    uint32_t eax63;
    uint32_t eax64;
    uint32_t eax65;
    uint32_t ecx66;
    uint32_t eax67;
    unsigned char v68;
    void** v69;
    uint32_t eax70;
    uint32_t eax71;
    uint32_t eax72;
    uint32_t eax73;
    void** v74;
    uint32_t v75;
    void** v76;
    void** edx77;
    void** eax78;
    void** edx79;
    void** v80;
    void** eax81;
    void** v82;
    void** v83;
    void** eax84;
    void** v85;
    void** edx86;
    void** eax87;
    void** v88;
    void** v89;
    void** eax90;
    void** v91;
    void** v92;
    void** eax93;
    void** v94;
    void** edx95;
    void** eax96;
    void** edx97;
    void** v98;
    uint32_t eax99;
    uint32_t eax100;
    uint32_t eax101;
    void** v102;
    void** v103;
    uint32_t eax104;
    uint32_t eax105;
    uint32_t eax106;
    void** v107;
    void*** edx108;
    void** eax109;
    void** v110;
    void** eax111;
    void** v112;
    void** eax113;
    void** edx114;
    void** eax115;
    void** edx116;
    void** v117;
    uint32_t eax118;
    uint32_t eax119;
    uint32_t eax120;
    void** v121;
    void** v122;
    uint32_t eax123;
    uint32_t eax124;
    uint32_t eax125;
    void*** edx126;
    void** eax127;
    void** v128;
    void** v129;
    uint32_t eax130;
    uint32_t eax131;
    uint32_t eax132;
    void*** edx133;
    void** eax134;
    void** v135;
    void** v136;
    void** v137;
    void*** eax138;
    void** v139;
    void** v140;

    v4 = a1;
    v5 = reinterpret_cast<void**>(0);
    v6 = reinterpret_cast<void*>(0);
    v7 = reinterpret_cast<void*>(0);
    a2->f0 = 0;
    v8 = 1;
    v9 = reinterpret_cast<void**>(44);
    eax13 = fun_8048d0c(44, v10, v11, v12);
    a2->f4 = eax13;
    if (!a2->f4) {
        addr_804fb90_2:
        eax24 = fun_8048afc(v9, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23);
        *eax24 = reinterpret_cast<void**>(12);
        v25 = -1;
    } else {
        *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(0);
        v26 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a3 + 4) = reinterpret_cast<void**>(0);
        while (eax27 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), !!*reinterpret_cast<signed char*>(&eax27)) {
            eax28 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
            ++v4;
            if (*reinterpret_cast<signed char*>(&eax28) != 37) 
                continue;
            v29 = reinterpret_cast<void**>(0xffffffff);
            v30 = reinterpret_cast<struct s15*>(a2->f4 + a2->f0 * 44);
            v30->f0 = v4 + 0xffffffff;
            v30->f8 = 0;
            v30->fc = reinterpret_cast<void**>(0);
            v30->f10 = reinterpret_cast<void**>(0);
            v30->f14 = reinterpret_cast<void**>(0xffffffff);
            v30->f18 = reinterpret_cast<void**>(0);
            v30->f1c = reinterpret_cast<void**>(0);
            v30->f20 = reinterpret_cast<void**>(0xffffffff);
            v30->f28 = reinterpret_cast<void**>(0xffffffff);
            eax31 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
            if (*reinterpret_cast<signed char*>(&eax31) <= 47 || (eax32 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax32) > 57)) {
                while (1) {
                    addr_804ef3c_7:
                    eax33 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                    if (*reinterpret_cast<signed char*>(&eax33) != 39) {
                        eax34 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                        if (*reinterpret_cast<signed char*>(&eax34) != 45) {
                            eax35 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                            if (*reinterpret_cast<signed char*>(&eax35) != 43) {
                                eax36 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                                if (*reinterpret_cast<signed char*>(&eax36) != 32) {
                                    eax37 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                                    if (*reinterpret_cast<signed char*>(&eax37) != 35) {
                                        eax38 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                                        if (*reinterpret_cast<signed char*>(&eax38) != 48) 
                                            break;
                                        v30->f8 = v30->f8 | 32;
                                        ++v4;
                                    } else {
                                        v30->f8 = v30->f8 | 16;
                                        ++v4;
                                    }
                                } else {
                                    v30->f8 = v30->f8 | 8;
                                    ++v4;
                                }
                            } else {
                                v30->f8 = v30->f8 | 4;
                                ++v4;
                            }
                        } else {
                            v30->f8 = v30->f8 | 2;
                            ++v4;
                        }
                    } else {
                        v30->f8 = v30->f8 | 1;
                        ++v4;
                    }
                }
            } else {
                v39 = v4;
                while ((eax40 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v39)), *reinterpret_cast<signed char*>(&eax40) > 47) && (eax41 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v39)), *reinterpret_cast<signed char*>(&eax41) <= 57)) {
                    ++v39;
                }
                eax42 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v39));
                if (*reinterpret_cast<signed char*>(&eax42) != 36) 
                    goto addr_804ef3c_7; else 
                    goto addr_804ee9a_23;
            }
            eax43 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
            if (*reinterpret_cast<signed char*>(&eax43) != 42) {
                eax44 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                if (*reinterpret_cast<signed char*>(&eax44) <= 47 || (eax45 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax45) > 57)) {
                    addr_804f313_26:
                    eax46 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                    if (*reinterpret_cast<signed char*>(&eax46) != 46) {
                        addr_804f61c_27:
                        v47 = 0;
                    } else {
                        ++v4;
                        eax48 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                        if (*reinterpret_cast<signed char*>(&eax48) != 42) {
                            v30->f18 = v4 + 0xffffffff;
                            while ((eax49 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax49) > 47) && (eax50 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax50) <= 57)) {
                                ++v4;
                            }
                            v30->f1c = v4;
                            v51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v30->f1c) - reinterpret_cast<unsigned char>(v30->f18));
                            if (reinterpret_cast<uint32_t>(v7) >= reinterpret_cast<uint32_t>(v51)) 
                                goto addr_804f61c_27; else 
                                goto addr_804f616_33;
                        } else {
                            v30->f18 = v4 + 0xffffffff;
                            ++v4;
                            v30->f1c = v4;
                            if (reinterpret_cast<uint32_t>(v7) <= 1) {
                                v7 = reinterpret_cast<void*>(2);
                            }
                            eax52 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                            if (*reinterpret_cast<signed char*>(&eax52) <= 47) 
                                goto addr_804f448_37;
                            eax53 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                            if (*reinterpret_cast<signed char*>(&eax53) > 57) 
                                goto addr_804f448_37; else 
                                goto addr_804f375_39;
                        }
                    }
                } else {
                    v30->fc = v4;
                    while ((eax54 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax54) > 47) && (eax55 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax55) <= 57)) {
                        ++v4;
                    }
                    v30->f10 = v4;
                    v56 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v30->f10) - reinterpret_cast<unsigned char>(v30->fc));
                    if (reinterpret_cast<uint32_t>(v6) >= reinterpret_cast<uint32_t>(v56)) 
                        goto addr_804f313_26; else 
                        goto addr_804f30d_44;
                }
            } else {
                v30->fc = v4;
                ++v4;
                v30->f10 = v4;
                if (!v6) {
                    v6 = reinterpret_cast<void*>(1);
                }
                eax57 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                if (*reinterpret_cast<signed char*>(&eax57) <= 47) 
                    goto addr_804f12b_48;
                eax58 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                if (*reinterpret_cast<signed char*>(&eax58) > 57) 
                    goto addr_804f12b_48; else 
                    goto addr_804f058_50;
            }
            while (1) {
                eax59 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                if (*reinterpret_cast<signed char*>(&eax59) != 0x68) {
                    eax60 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                    if (*reinterpret_cast<signed char*>(&eax60) != 76) {
                        eax61 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                        if (*reinterpret_cast<signed char*>(&eax61) != 0x6c) {
                            eax62 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                            if (*reinterpret_cast<signed char*>(&eax62) != 0x6a) {
                                eax63 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                                if (*reinterpret_cast<signed char*>(&eax63) == 0x7a || (eax64 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4)), *reinterpret_cast<signed char*>(&eax64) == 90)) {
                                    ++v4;
                                } else {
                                    eax65 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
                                    if (*reinterpret_cast<signed char*>(&eax65) != 0x74) 
                                        break;
                                    ++v4;
                                }
                            } else {
                                v47 = v47 + 16;
                                ++v4;
                            }
                        } else {
                            v47 = v47 + 8;
                            ++v4;
                        }
                    } else {
                        v47 = v47 | 4;
                        ++v4;
                    }
                } else {
                    ecx66 = v47 & 1;
                    v47 = v47 | 1 << *reinterpret_cast<unsigned char*>(&ecx66);
                    ++v4;
                }
            }
            eax67 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v4));
            v68 = *reinterpret_cast<unsigned char*>(&eax67);
            ++v4;
            v16 = reinterpret_cast<void**>(reinterpret_cast<signed char>(v68) - 37);
            switch (v16) {
            case 0:
                v69 = reinterpret_cast<void**>(0);
                break;
            case 28:
            case 32:
            case 33:
            case 34:
            case 60:
            case 64:
            case 65:
            case 66:
                if (reinterpret_cast<int32_t>(v47) > reinterpret_cast<int32_t>(15) || v47 & 4) {
                    v69 = reinterpret_cast<void**>(12);
                    break;
                } else {
                    v69 = reinterpret_cast<void**>(11);
                    break;
                }
            case 30:
                v69 = reinterpret_cast<void**>(14);
                v68 = 99;
                break;
            case 46:
                v69 = reinterpret_cast<void**>(16);
                v68 = 0x73;
                break;
            case 51:
            case 74:
            case 80:
            case 83:
                if (reinterpret_cast<int32_t>(v47) > reinterpret_cast<int32_t>(15) || v47 & 4) {
                    v69 = reinterpret_cast<void**>(10);
                    break;
                } else {
                    if (reinterpret_cast<int32_t>(v47) <= reinterpret_cast<int32_t>(7)) {
                        if (!(v47 & 2)) {
                            eax70 = v47 & 1;
                            if (!*reinterpret_cast<signed char*>(&eax70)) {
                                v69 = reinterpret_cast<void**>(6);
                                break;
                            } else {
                                v69 = reinterpret_cast<void**>(4);
                                break;
                            }
                        } else {
                            v69 = reinterpret_cast<void**>(2);
                            break;
                        }
                    } else {
                        v69 = reinterpret_cast<void**>(8);
                        break;
                    }
                }
            case 62:
                if (reinterpret_cast<int32_t>(v47) <= reinterpret_cast<int32_t>(7)) {
                    v69 = reinterpret_cast<void**>(13);
                    break;
                } else {
                    v69 = reinterpret_cast<void**>(14);
                    break;
                }
            case 63:
            case 68:
                if (reinterpret_cast<int32_t>(v47) > reinterpret_cast<int32_t>(15) || v47 & 4) {
                    v69 = reinterpret_cast<void**>(9);
                    break;
                } else {
                    if (reinterpret_cast<int32_t>(v47) <= reinterpret_cast<int32_t>(7)) {
                        if (!(v47 & 2)) {
                            eax71 = v47 & 1;
                            if (!*reinterpret_cast<signed char*>(&eax71)) {
                                v69 = reinterpret_cast<void**>(5);
                                break;
                            } else {
                                v69 = reinterpret_cast<void**>(3);
                                break;
                            }
                        } else {
                            v69 = reinterpret_cast<void**>(1);
                            break;
                        }
                    } else {
                        v69 = reinterpret_cast<void**>(7);
                        break;
                    }
                }
            case 73:
                if (reinterpret_cast<int32_t>(v47) > reinterpret_cast<int32_t>(15) || v47 & 4) {
                    v69 = reinterpret_cast<void**>(22);
                    break;
                } else {
                    if (reinterpret_cast<int32_t>(v47) <= reinterpret_cast<int32_t>(7)) {
                        if (!(v47 & 2)) {
                            eax72 = v47 & 1;
                            if (!*reinterpret_cast<signed char*>(&eax72)) {
                                v69 = reinterpret_cast<void**>(20);
                                break;
                            } else {
                                v69 = reinterpret_cast<void**>(19);
                                break;
                            }
                        } else {
                            v69 = reinterpret_cast<void**>(18);
                            break;
                        }
                    } else {
                        v69 = reinterpret_cast<void**>(21);
                        break;
                    }
                }
            case 75:
                v69 = reinterpret_cast<void**>(17);
                break;
            case 78:
                if (reinterpret_cast<int32_t>(v47) <= reinterpret_cast<int32_t>(7)) {
                    v69 = reinterpret_cast<void**>(15);
                } else {
                    v69 = reinterpret_cast<void**>(16);
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
                goto 0x804fb19;
            }
            if (!v69) {
                addr_804fa21_106:
                eax73 = v68;
                v30->f24 = *reinterpret_cast<signed char*>(&eax73);
                v30->f4 = v4;
                a2->f0 = a2->f0 + 1;
                if (a2->f0 < v8) 
                    continue;
            } else {
                v30->f28 = v29;
                if (!reinterpret_cast<int1_t>(v30->f28 == 0xffffffff)) 
                    goto addr_804f8cc_108;
                v30->f28 = v5;
                ++v5;
                if (v30->f28 == 0xffffffff) 
                    goto addr_804fb19_110;
                addr_804f8cc_108:
                v74 = v30->f28;
                if (reinterpret_cast<unsigned char>(v74) < reinterpret_cast<unsigned char>(v26)) 
                    goto addr_804f9d3_111; else 
                    goto addr_804f8e1_112;
            }
            if (reinterpret_cast<int32_t>(v8) < reinterpret_cast<int32_t>(0)) {
                v75 = 0xffffffff;
            } else {
                v75 = v8 + v8;
            }
            v8 = v75;
            if (v8 > 0x5d1745d) {
                v76 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v76 = reinterpret_cast<void**>(v8 * 44);
            }
            if (v76 == 0xffffffff) 
                goto addr_804fb60_120;
            edx77 = a2->f4;
            v14 = v76;
            v9 = edx77;
            eax78 = fun_8048b6c(v9, v14);
            if (!eax78) 
                goto addr_804fb60_120;
            a2->f4 = eax78;
            continue;
            addr_804f9d3_111:
            while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) <= reinterpret_cast<unsigned char>(v74)) {
                edx79 = *reinterpret_cast<void***>(a3);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(edx79) << 4)) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a3) = edx79 + 1;
            }
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v74) << 4))) {
                if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v74) << 4)) != v69) 
                    goto addr_804fb19_110; else 
                    goto addr_804fa21_106;
            } else {
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v74) << 4)) = v69;
                goto addr_804fa21_106;
            }
            addr_804f8e1_112:
            if (reinterpret_cast<signed char>(v26) < reinterpret_cast<signed char>(0)) {
                v80 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v80 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v26) + reinterpret_cast<unsigned char>(v26));
            }
            v26 = v80;
            if (reinterpret_cast<unsigned char>(v26) <= reinterpret_cast<unsigned char>(v74)) {
                v14 = reinterpret_cast<void**>(1);
                v9 = v74;
                eax81 = xsum(v9, 1);
                v26 = eax81;
            }
            if (reinterpret_cast<unsigned char>(v26) > reinterpret_cast<unsigned char>(0xfffffff)) {
                v82 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v82 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v26) << 4);
            }
            if (v82 == 0xffffffff) 
                goto addr_804fb60_120;
            if (!*reinterpret_cast<void***>(a3 + 4)) {
                v9 = v82;
                eax84 = fun_8048d0c(v9, v14, v83, v16);
                v85 = eax84;
            } else {
                edx86 = *reinterpret_cast<void***>(a3 + 4);
                v14 = v82;
                v9 = edx86;
                eax87 = fun_8048b6c(v9, v14);
                v85 = eax87;
            }
            if (!v85) 
                goto addr_804fb60_120;
            *reinterpret_cast<void***>(a3 + 4) = v85;
            goto addr_804f9d3_111;
            addr_804f616_33:
            v7 = v51;
            goto addr_804f61c_27;
            addr_804f448_37:
            if (!reinterpret_cast<int1_t>(v30->f20 == 0xffffffff)) 
                goto addr_804f46f_140;
            v30->f20 = v5;
            ++v5;
            if (v30->f20 == 0xffffffff) 
                goto addr_804fb19_110;
            addr_804f46f_140:
            v88 = v30->f20;
            if (reinterpret_cast<unsigned char>(v88) >= reinterpret_cast<unsigned char>(v26)) {
                if (reinterpret_cast<signed char>(v26) < reinterpret_cast<signed char>(0)) {
                    v89 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v89 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v26) + reinterpret_cast<unsigned char>(v26));
                }
                v26 = v89;
                if (reinterpret_cast<unsigned char>(v26) <= reinterpret_cast<unsigned char>(v88)) {
                    v14 = reinterpret_cast<void**>(1);
                    v9 = v88;
                    eax90 = xsum(v9, 1);
                    v26 = eax90;
                }
                if (reinterpret_cast<unsigned char>(v26) > reinterpret_cast<unsigned char>(0xfffffff)) {
                    v91 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v91 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v26) << 4);
                }
                if (v91 == 0xffffffff) 
                    goto addr_804fb60_120;
                if (!*reinterpret_cast<void***>(a3 + 4)) {
                    v9 = v91;
                    eax93 = fun_8048d0c(v9, v14, v92, v16);
                    v94 = eax93;
                } else {
                    edx95 = *reinterpret_cast<void***>(a3 + 4);
                    v14 = v91;
                    v9 = edx95;
                    eax96 = fun_8048b6c(v9, v14);
                    v94 = eax96;
                }
                if (!v94) 
                    goto addr_804fb60_120;
                *reinterpret_cast<void***>(a3 + 4) = v94;
            }
            while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) <= reinterpret_cast<unsigned char>(v88)) {
                edx97 = *reinterpret_cast<void***>(a3);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(edx97) << 4)) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a3) = edx97 + 1;
            }
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v88) << 4))) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v88) << 4)) == 5)) 
                    goto addr_804fb19_110;
                goto addr_804f61c_27;
            } else {
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v88) << 4)) = reinterpret_cast<void**>(5);
                goto addr_804f61c_27;
            }
            addr_804f375_39:
            v98 = v4;
            while ((eax99 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v98)), *reinterpret_cast<signed char*>(&eax99) > 47) && (eax100 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v98)), *reinterpret_cast<signed char*>(&eax100) <= 57)) {
                ++v98;
            }
            eax101 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v98));
            if (*reinterpret_cast<signed char*>(&eax101) != 36) 
                goto addr_804f448_37;
            v102 = reinterpret_cast<void**>(0);
            v103 = v4;
            while ((eax104 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v103)), *reinterpret_cast<signed char*>(&eax104) > 47) && (eax105 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v103)), *reinterpret_cast<signed char*>(&eax105) <= 57)) {
                eax106 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v103));
                if (reinterpret_cast<unsigned char>(v102) > reinterpret_cast<unsigned char>(0x19999999)) {
                    v107 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    edx108 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v102) << 2) + reinterpret_cast<unsigned char>(v102));
                    v107 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx108) + reinterpret_cast<uint32_t>(edx108));
                }
                v14 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax106) - 48);
                v9 = v107;
                eax109 = xsum(v9, v14);
                v102 = eax109;
                ++v103;
            }
            if (!v102) 
                goto addr_804fb19_110;
            if (v102 == 0xffffffff) 
                goto addr_804fb19_110;
            v30->f20 = v102 + 0xffffffff;
            v4 = v103 + 1;
            goto addr_804f448_37;
            addr_804f30d_44:
            v6 = v56;
            goto addr_804f313_26;
            addr_804f12b_48:
            if (!reinterpret_cast<int1_t>(v30->f14 == 0xffffffff)) 
                goto addr_804f152_174;
            v30->f14 = v5;
            ++v5;
            if (v30->f14 == 0xffffffff) 
                goto addr_804fb19_110;
            addr_804f152_174:
            v110 = v30->f14;
            if (reinterpret_cast<unsigned char>(v110) >= reinterpret_cast<unsigned char>(v26)) {
                if (reinterpret_cast<signed char>(v26) < reinterpret_cast<signed char>(0)) {
                    v21 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v26) + reinterpret_cast<unsigned char>(v26));
                }
                v26 = v21;
                if (reinterpret_cast<unsigned char>(v26) <= reinterpret_cast<unsigned char>(v110)) {
                    v14 = reinterpret_cast<void**>(1);
                    v9 = v110;
                    eax111 = xsum(v9, 1);
                    v26 = eax111;
                }
                if (reinterpret_cast<unsigned char>(v26) > reinterpret_cast<unsigned char>(0xfffffff)) {
                    v22 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v26) << 4);
                }
                if (v22 == 0xffffffff) 
                    goto addr_804fb60_120;
                if (!*reinterpret_cast<void***>(a3 + 4)) {
                    v9 = v22;
                    eax113 = fun_8048d0c(v9, v14, v112, v16);
                    v23 = eax113;
                } else {
                    edx114 = *reinterpret_cast<void***>(a3 + 4);
                    v14 = v22;
                    v9 = edx114;
                    eax115 = fun_8048b6c(v9, v14);
                    v23 = eax115;
                }
                if (!v23) 
                    goto addr_804fb60_120;
                *reinterpret_cast<void***>(a3 + 4) = v23;
            }
            while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) <= reinterpret_cast<unsigned char>(v110)) {
                edx116 = *reinterpret_cast<void***>(a3);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(edx116) << 4)) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a3) = edx116 + 1;
            }
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v110) << 4))) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v110) << 4)) == 5)) 
                    goto addr_804fb19_110;
                goto addr_804f313_26;
            } else {
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + (reinterpret_cast<unsigned char>(v110) << 4)) = reinterpret_cast<void**>(5);
                goto addr_804f313_26;
            }
            addr_804f058_50:
            v117 = v4;
            while ((eax118 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v117)), *reinterpret_cast<signed char*>(&eax118) > 47) && (eax119 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v117)), *reinterpret_cast<signed char*>(&eax119) <= 57)) {
                ++v117;
            }
            eax120 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v117));
            if (*reinterpret_cast<signed char*>(&eax120) != 36) 
                goto addr_804f12b_48;
            v121 = reinterpret_cast<void**>(0);
            v122 = v4;
            while ((eax123 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v122)), *reinterpret_cast<signed char*>(&eax123) > 47) && (eax124 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v122)), *reinterpret_cast<signed char*>(&eax124) <= 57)) {
                eax125 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v122));
                v19 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax125) - 48);
                if (reinterpret_cast<unsigned char>(v121) > reinterpret_cast<unsigned char>(0x19999999)) {
                    v20 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    edx126 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v121) << 2) + reinterpret_cast<unsigned char>(v121));
                    v20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx126) + reinterpret_cast<uint32_t>(edx126));
                }
                v14 = v19;
                v9 = v20;
                eax127 = xsum(v9, v14);
                v121 = eax127;
                ++v122;
            }
            if (!v121) 
                goto addr_804fb19_110;
            if (v121 == 0xffffffff) 
                goto addr_804fb19_110;
            v30->f14 = v121 + 0xffffffff;
            v4 = v122 + 1;
            goto addr_804f12b_48;
            addr_804ee9a_23:
            v128 = reinterpret_cast<void**>(0);
            v129 = v4;
            while ((eax130 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v129)), *reinterpret_cast<signed char*>(&eax130) > 47) && (eax131 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v129)), *reinterpret_cast<signed char*>(&eax131) <= 57)) {
                eax132 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v129));
                v17 = reinterpret_cast<void**>(*reinterpret_cast<signed char*>(&eax132) - 48);
                if (reinterpret_cast<unsigned char>(v128) > reinterpret_cast<unsigned char>(0x19999999)) {
                    v18 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    edx133 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v128) << 2) + reinterpret_cast<unsigned char>(v128));
                    v18 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx133) + reinterpret_cast<uint32_t>(edx133));
                }
                v14 = v17;
                v9 = v18;
                eax134 = xsum(v9, v14);
                v128 = eax134;
                ++v129;
            }
            if (!v128) 
                goto addr_804fb19_110;
            if (v128 == 0xffffffff) 
                goto addr_804fb19_110;
            v29 = v128 - 1;
            v4 = v129 + 1;
            goto addr_804ef3c_7;
        }
        goto addr_804fae3_216;
    }
    addr_804fba5_217:
    return v25;
    addr_804fae3_216:
    *reinterpret_cast<void***>(a2->f4 + a2->f0 * 44) = v4;
    a2->f8 = v6;
    a2->fc = v7;
    v25 = 0;
    goto addr_804fba5_217;
    addr_804fb19_110:
    if (*reinterpret_cast<void***>(a3 + 4)) {
        v9 = *reinterpret_cast<void***>(a3 + 4);
        fun_8048c2c(v9, v14, v135, v16, v17, v18, v19, v20, v21, v22);
    }
    if (a2->f4) {
        v9 = a2->f4;
        fun_8048c2c(v9, v14, v136, v16, v17, v18, v19, v20, v21, v22);
    }
    eax138 = fun_8048afc(v9, v14, v137, v16, v17, v18, v19, v20, v21, v22, v23);
    *eax138 = reinterpret_cast<void**>(22);
    v25 = -1;
    goto addr_804fba5_217;
    addr_804fb60_120:
    if (*reinterpret_cast<void***>(a3 + 4)) {
        v9 = *reinterpret_cast<void***>(a3 + 4);
        fun_8048c2c(v9, v14, v139, v16, v17, v18, v19, v20, v21, v22);
    }
    if (a2->f4) {
        v9 = a2->f4;
        fun_8048c2c(v9, v14, v140, v16, v17, v18, v19, v20, v21, v22);
        goto addr_804fb90_2;
    }
}

int32_t calloc = 0x8048b82;

int32_t fun_8048b7c(void** a1, void** a2) {
    goto calloc;
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
                eax3 = reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(eax4 * 4 + 0x8051f10)());
                edx2 = dtor_idx_6637;
            } while (edx2 < 0);
        }
        completed_6635 = 1;
    }
    return eax3;
}

int32_t getpagesize = 0x8048ae2;

void* fun_8048adc() {
    goto getpagesize;
}

void atexit(int32_t a1, int32_t a2) {
    int32_t eax3;
    int32_t ebx4;

    eax3 = __i686_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t**>(ebx4 + 0x2399 - 4)) {
        eax3 = **reinterpret_cast<int32_t**>(ebx4 + 0x2399 - 4);
    }
    fun_8048b0c(a1, 0, eax3);
    return;
}

void main(void** a1, void** a2);

void __libc_csu_fini();

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048bac(main, __return_address(), esp1, 0x804fbf0, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8048e46() {
}

void** xnmalloc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** v8;
    void** ebp9;
    void** v10;
    void** eax11;

    if (reinterpret_cast<unsigned char>(-1 / reinterpret_cast<unsigned char>(a2)) < reinterpret_cast<unsigned char>(a1)) {
        xalloc_die(v7, v8, ebp9);
    }
    eax11 = xmalloc(reinterpret_cast<unsigned char>(a1) * reinterpret_cast<unsigned char>(a2), v10, ebp9, __return_address(), a1, a2, a3, a4, a5, a6);
    return eax11;
}

void** xnrealloc(void** a1, uint32_t a2, uint32_t a3) {
    void** v4;
    void** v5;
    void** v6;
    void** eax7;

    if (-1 / a3 < a2) {
        xalloc_die(v4, v5, v6);
    }
    eax7 = xrealloc(a1, a2 * a3);
    return eax7;
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_804fd08(v1, ebx2, ebp3, __return_address());
}

int32_t g8051ffc = 0;

void fun_8048b62() {
    goto g8051ffc;
}

void fun_8048ad8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048bb2() {
    goto 0x8048acc;
}

void fun_8048c22() {
    goto 0x8048acc;
}

void fun_8048d02() {
    goto 0x8048acc;
}

void fun_8048b02() {
    goto 0x8048acc;
}

void fun_8048d42() {
    goto 0x8048acc;
}

void fun_8048d52() {
    goto 0x8048acc;
}

void fun_8048c52() {
    goto 0x8048acc;
}

void fun_8048bc2() {
    goto 0x8048acc;
}

void fun_8048da2() {
    goto 0x8048acc;
}

void fun_8048ce2() {
    goto 0x8048acc;
}

void fun_8048be2() {
    goto 0x8048acc;
}

int32_t get_quoting_style(int32_t* a1) {
    int32_t* v2;

    if (!a1) {
        v2 = reinterpret_cast<int32_t*>(0x8052140);
    } else {
        v2 = a1;
    }
    return *v2;
}

void set_quoting_style(int32_t* a1, int32_t a2) {
    int32_t* v3;

    if (!a1) {
        v3 = reinterpret_cast<int32_t*>(0x8052140);
    } else {
        v3 = a1;
    }
    *v3 = a2;
    return;
}

void fun_8048ca2() {
    goto 0x8048acc;
}

void fun_8048b22() {
    goto 0x8048acc;
}

void fun_8048c62() {
    goto 0x8048acc;
}

void fun_8048c02() {
    goto 0x8048acc;
}

void fun_8048d92() {
    goto 0x8048acc;
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
    void** v13;
    void** ebp14;
    void*** eax15;
    void** v16;
    void** eax17;
    void** v18;
    void** eax19;
    void** v20;
    void** v21;
    void*** eax22;

    eax15 = fun_8048afc(v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, ebp14);
    v16 = *eax15;
    eax17 = quotearg_buffer(0, 0, a1, a2, a3);
    eax19 = xcharalloc(eax17 + 1, 0, a1, a2, a3, v18);
    quotearg_buffer(eax19, eax17 + 1, a1, a2, a3);
    eax22 = fun_8048afc(eax19, eax17 + 1, a1, a2, a3, v20, v21, eax19, eax17 + 1, v16, ebp14);
    *eax22 = v16;
    return eax19;
}

void fun_8048c32() {
    goto 0x8048acc;
}

void fun_8048af2() {
    goto 0x8048acc;
}

void fun_8048ba2() {
    goto 0x8048acc;
}

void fun_8048d22() {
    goto 0x8048acc;
}

void** x2realloc(void** a1, uint32_t* a2) {
    void** eax3;

    eax3 = x2nrealloc(a1, a2, 1);
    return eax3;
}

void** xstrdup(void** a1) {
    void** v2;
    void** ebp3;
    void** eax4;
    void** eax5;

    eax4 = fun_8048c9c(a1, v2, ebp3, __return_address());
    eax5 = xmemdup(a1, eax4 + 1);
    return eax5;
}

void fun_8048d12() {
    goto 0x8048acc;
}

void fun_8048c92() {
    goto 0x8048acc;
}

void fun_8048b72() {
    goto 0x8048acc;
}

void __libc_csu_fini() {
    return;
}

void fun_8048b12() {
    goto 0x8048acc;
}

void fun_8048ae2() {
    goto 0x8048acc;
}

void fun_8048db2() {
    goto 0x8048acc;
}

void fun_8048cc2() {
    goto 0x8048acc;
}

void fun_8048b42() {
    goto 0x8048acc;
}

void** clone_quoting_options(void** a1) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** ebp12;
    void*** eax13;
    void** v14;
    void** v15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void*** eax22;

    eax13 = fun_8048afc(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, ebp12);
    v14 = *eax13;
    if (!a1) {
        v15 = reinterpret_cast<void**>(0x8052140);
    } else {
        v15 = a1;
    }
    eax16 = xmemdup(v15, 36);
    eax22 = fun_8048afc(v15, 36, v17, v18, v19, v15, v20, v21, eax16, v14, ebp12);
    *eax22 = v14;
    return eax16;
}

void close_stdout();

void** optind = reinterpret_cast<void**>(0);

void main(void** a1, void** a2) {
    void* ebp3;
    void* eax4;
    void* v5;
    unsigned char v6;
    signed char v7;
    signed char v8;
    unsigned char v9;
    unsigned char v10;
    unsigned char v11;
    unsigned char v12;
    unsigned char v13;
    unsigned char v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    int32_t eax19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    int32_t eax30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** eax35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void*** eax40;
    void** eax41;
    void** v42;
    void** v43;
    void** v44;
    int32_t v45;
    uint32_t v46;
    void** v47;
    void** v48;
    void** v49;
    uint32_t v50;
    uint32_t v51;
    uint32_t v52;
    uint32_t v53;
    uint32_t v54;
    uint32_t v55;
    uint32_t v56;
    uint32_t v57;
    uint32_t v58;
    void** eax59;
    void** v60;
    void** eax61;
    void** v62;
    void** v63;
    void** v64;
    int32_t eax65;
    void** edx66;
    void** eax67;
    void** eax68;
    void** eax69;
    void** v70;
    int32_t eax71;
    int32_t v72;
    uint32_t v73;
    void** v74;
    void** v75;
    uint32_t v76;
    uint32_t v77;
    uint32_t v78;
    uint32_t v79;
    void** eax80;
    void** eax81;
    void** v82;
    void** eax83;
    void** eax84;
    void** eax85;
    void** v86;
    unsigned char al87;
    void** v88;
    void** v89;
    void** eax90;
    void** eax91;
    unsigned char al92;
    void** ebx93;
    void** eax94;
    void** ebx95;
    void*** eax96;
    void** eax97;
    void** ebx98;
    void*** eax99;
    void** eax100;
    void** v101;
    void** eax102;
    int32_t eax103;
    void** eax104;
    int32_t eax105;
    void** ebx106;
    void*** eax107;
    void** eax108;
    int32_t eax109;
    void** eax110;
    void*** eax111;
    void** eax112;
    void** v113;

    ebp3 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(__zero_stack_offset()) & 0xfffffff0) - 4 - 4);
    eax4 = fun_8048adc();
    v5 = eax4;
    v6 = 1;
    v7 = 1;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    program_name = *reinterpret_cast<void***>(a2);
    fun_8048cac(6, 0x8050260);
    fun_8048bec("coreutils", "/usr/local/share/locale");
    fun_8048d5c("coreutils", "/usr/local/share/locale");
    atexit(close_stdout, "/usr/local/share/locale");
    while (v15 = reinterpret_cast<void**>(0), v16 = reinterpret_cast<void**>(0x80501c0), v17 = reinterpret_cast<void**>("benstuvAET"), v18 = a2, eax19 = fun_8048c3c(a1, v18, "benstuvAET", 0x80501c0, 0, "Richard M. Stallman", 0), eax19 != -1) {
        if (eax19 == 98) {
            v9 = 1;
            v10 = 1;
            continue;
        }
        if (eax19 > 98) {
            if (eax19 == 0x73) {
                v11 = 1;
                continue;
            }
            if (eax19 <= 0x73) 
                goto addr_80497a1_9;
        } else {
            if (eax19 == 65) {
                v13 = 1;
                v12 = 1;
                v14 = 1;
                continue;
            } else {
                if (eax19 > 65) {
                    if (eax19 == 69) {
                        v12 = 1;
                        continue;
                    } else {
                        if (eax19 == 84) {
                            v14 = 1;
                            continue;
                        } else {
                            goto addr_804988c_18;
                        }
                    }
                } else {
                    if (eax19 == 0xffffff7d) {
                        eax20 = stdout;
                        v21 = reinterpret_cast<void**>(0);
                        v22 = reinterpret_cast<void**>("Richard M. Stallman");
                        v15 = reinterpret_cast<void**>("Torbjorn Granlund");
                        v16 = reinterpret_cast<void**>("6.10");
                        v17 = reinterpret_cast<void**>("GNU coreutils");
                        v18 = reinterpret_cast<void**>("cat");
                        version_etc(eax20, "cat", "GNU coreutils", "6.10", "Torbjorn Granlund", "Richard M. Stallman", 0);
                        fun_8048dac(0, "cat", "GNU coreutils", "6.10", "Torbjorn Granlund", "Richard M. Stallman", 0, v23, v24, v25);
                        goto addr_804988c_18;
                    } else {
                        if (eax19 == 0xffffff7e) {
                            usage(0, v18, "benstuvAET", 0x80501c0, 0, "Richard M. Stallman", 0);
                            continue;
                        } else {
                            goto addr_804988c_18;
                        }
                    }
                }
            }
        }
        if (eax19 == 0x75) 
            continue;
        if (eax19 >= 0x75) 
            goto addr_80497ce_26;
        v14 = 1;
        v13 = 1;
        continue;
        addr_80497ce_26:
        if (eax19 == 0x76) {
            v13 = 1;
            continue;
        }
        addr_804988c_18:
        usage(1, v18, v17, v16, v15, "Richard M. Stallman", 0);
        continue;
        addr_80497a1_9:
        if (eax19 == 0x65) {
            v12 = 1;
            v13 = 1;
        } else {
            if (eax19 == 0x6e) {
                v9 = 1;
            } else {
                goto addr_804988c_18;
            }
        }
    }
    v26 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp3) + 0xffffff50);
    eax30 = fstat64(1, v26, "benstuvAET", 0x80501c0, 0, "Richard M. Stallman", 0, v27, v28, v29);
    if (eax30 < 0) {
        eax35 = fun_8048c1c("standard output", v26, "benstuvAET", 0x80501c0, 0, "Richard M. Stallman", 0, v31, v32, v33, v34);
        eax40 = fun_8048afc("standard output", v26, "benstuvAET", 0x80501c0, 0, "Richard M. Stallman", 0, v36, v37, v38, v39);
        eax41 = *eax40;
        v17 = eax35;
        fun_8048d3c(1, eax41, v17, 0x80501c0, 0, "Richard M. Stallman", 0, v42, v43, v44);
    }
    if (reinterpret_cast<uint1_t>(v45 < 0) | reinterpret_cast<uint1_t>(v45 == 0) || v46 > 0x20000000) {
        v47 = reinterpret_cast<void**>(0x200);
    } else {
        v47 = v48;
    }
    v49 = v47;
    if ((v50 & 0xf000) != 0x8000) {
        v7 = 0;
    } else {
        v51 = v52;
        v53 = v54;
        v55 = v56;
        v57 = v58;
    }
    infile = reinterpret_cast<void**>("-");
    eax59 = optind;
    v60 = eax59;
    do {
        if (reinterpret_cast<signed char>(v60) < reinterpret_cast<signed char>(a1)) {
            infile = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v60) << 2) + reinterpret_cast<unsigned char>(a2));
        }
        eax61 = infile;
        eax65 = fun_8048d9c(eax61, "-", v17, v16, v15, v22, v21, v62, v63, v64);
        if (!eax65) {
            v8 = 1;
            input_desc = reinterpret_cast<void**>(0);
            goto addr_8049a47_47;
        }
        edx66 = infile;
        eax67 = fun_8048b2c(edx66, 0, v17, v16, v15, v22, v21, v62, v63, v64);
        input_desc = eax67;
        eax68 = input_desc;
        if (reinterpret_cast<signed char>(eax68) >= reinterpret_cast<signed char>(0)) {
            addr_8049a47_47:
            eax69 = input_desc;
            v70 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp3) + 0xffffff50);
            eax71 = fstat64(eax69, v70, v17, v16, v15, v22, v21, v62, v63, v64);
            if (eax71 >= 0) {
                if (reinterpret_cast<uint1_t>(v72 < 0) | reinterpret_cast<uint1_t>(v72 == 0) || v73 > 0x20000000) {
                    v74 = reinterpret_cast<void**>(0x200);
                } else {
                    v74 = v75;
                }
                if (!v7 || (v76 ^ v51 | v77 ^ v53 || (v78 ^ v55 | v79 ^ v57 || (eax80 = input_desc, eax80 == 0)))) {
                    if (static_cast<uint32_t>(v11) | (static_cast<uint32_t>(v9) | static_cast<uint32_t>(v12) | static_cast<uint32_t>(v13) | static_cast<uint32_t>(v14))) {
                        eax81 = xmalloc(reinterpret_cast<unsigned char>(v74) + reinterpret_cast<uint32_t>(v5), v70, v17, v16, v15, v22, v21, v62, v63, v64);
                        v82 = eax81;
                        eax83 = xmalloc((reinterpret_cast<unsigned char>(v74) << 2) + reinterpret_cast<unsigned char>(v49) + reinterpret_cast<uint32_t>(v5) + 18, v70, v17, v16, v15, v22, v21, v62, v63, v64);
                        eax84 = ptr_align(eax83, v5, v17, v16, v15, v22, v21, v62, v63, v64);
                        eax85 = ptr_align(v82, v5, v17, v16, v15, v22, v21, v62, v63, v64);
                        v64 = reinterpret_cast<void**>(static_cast<uint32_t>(v11));
                        v63 = reinterpret_cast<void**>(static_cast<uint32_t>(v12));
                        v62 = reinterpret_cast<void**>(static_cast<uint32_t>(v10));
                        v21 = reinterpret_cast<void**>(static_cast<uint32_t>(v9));
                        v22 = reinterpret_cast<void**>(static_cast<uint32_t>(v14));
                        v15 = reinterpret_cast<void**>(static_cast<uint32_t>(v13));
                        v16 = v49;
                        v17 = eax84;
                        v86 = v74;
                        al87 = cat(eax85, v86, v17, v16, v15, v22, v21, v62, v63, v64);
                        v6 = reinterpret_cast<uint1_t>(!!(static_cast<uint32_t>(al87) & static_cast<uint32_t>(v6)));
                        fun_8048c2c(eax83, v86, v17, v16, v15, v22, v21, v62, v63, v64);
                    } else {
                        v88 = v74;
                        v89 = v49;
                        if (reinterpret_cast<unsigned char>(v89) < reinterpret_cast<unsigned char>(v88)) {
                            v89 = v88;
                        }
                        eax90 = xmalloc(reinterpret_cast<unsigned char>(v89) + reinterpret_cast<uint32_t>(v5) - 1, v70, v17, v16, v15, v22, v21, v62, v63, v64);
                        v82 = eax90;
                        eax91 = ptr_align(v82, v5, v17, v16, v15, v22, v21, v62, v63, v64);
                        v86 = v89;
                        al92 = simple_cat(eax91, v86, v17, v16, v15, v22, v21, v62, v63, v64);
                        v6 = reinterpret_cast<uint1_t>(!!(static_cast<uint32_t>(al92) & static_cast<uint32_t>(v6)));
                    }
                    fun_8048c2c(v82, v86, v17, v16, v15, v22, v21, v62, v63, v64);
                } else {
                    ebx93 = infile;
                    eax94 = fun_8048c1c("%s: input file is output file", v70, v17, v16, v15, v22, v21, v62, v63, v64, v88);
                    v16 = ebx93;
                    v17 = eax94;
                    fun_8048d3c(0, 0, v17, v16, v15, v22, v21, v62, v63, v64);
                    v6 = 0;
                }
            } else {
                ebx95 = infile;
                eax96 = fun_8048afc(eax69, v70, v17, v16, v15, v22, v21, v62, v63, v64, v88);
                eax97 = *eax96;
                v16 = ebx95;
                v17 = reinterpret_cast<void**>("%s");
                fun_8048d3c(0, eax97, "%s", v16, v15, v22, v21, v62, v63, v64);
                v6 = 0;
            }
        } else {
            ebx98 = infile;
            eax99 = fun_8048afc(edx66, 0, v17, v16, v15, v22, v21, v62, v63, v64, v88);
            eax100 = *eax99;
            v16 = ebx98;
            v17 = reinterpret_cast<void**>("%s");
            v101 = eax100;
            fun_8048d3c(0, v101, "%s", v16, v15, v22, v21, v62, v63, v64);
            v6 = 0;
            continue;
        }
        eax102 = infile;
        v101 = reinterpret_cast<void**>("-");
        eax103 = fun_8048d9c(eax102, "-", v17, v16, v15, v22, v21, v62, v63, v64);
        if (eax103 && (eax104 = input_desc, eax105 = fun_8048cdc(eax104, "-", v17, v16, v15, v22, v21, v62, v63, v64), eax105 < 0)) {
            ebx106 = infile;
            eax107 = fun_8048afc(eax104, "-", v17, v16, v15, v22, v21, v62, v63, v64, v88);
            eax108 = *eax107;
            v16 = ebx106;
            v17 = reinterpret_cast<void**>("%s");
            v101 = eax108;
            fun_8048d3c(0, v101, "%s", v16, v15, v22, v21, v62, v63, v64);
            v6 = 0;
        }
        ++v60;
    } while (reinterpret_cast<signed char>(v60) < reinterpret_cast<signed char>(a1));
    if (v8 && (eax109 = fun_8048cdc(0, v101, v17, v16, v15, v22, v21, v62, v63, v64), eax109 < 0)) {
        eax110 = fun_8048c1c("closing standard input", v101, v17, v16, v15, v22, v21, v62, v63, v64, v88);
        eax111 = fun_8048afc("closing standard input", v101, v17, v16, v15, v22, v21, v62, v63, v64, v88);
        eax112 = *eax111;
        v17 = eax110;
        v101 = eax112;
        fun_8048d3c(1, v101, v17, v16, v15, v22, v21, v62, v63, v64);
    }
    if (!v6) {
        v113 = reinterpret_cast<void**>(1);
    } else {
        v113 = reinterpret_cast<void**>(0);
    }
    fun_8048dac(v113, v101, v17, v16, v15, v22, v21, v62, v63, v64);
}

void** file_name = reinterpret_cast<void**>(0);

void close_stdout_set_file_name(void** a1) {
    file_name = a1;
    return;
}

void fun_8048d72() {
    goto 0x8048acc;
}

void fun_8048b32() {
    goto 0x8048acc;
}

void** quotearg_n_style_mem(void** a1, int32_t a2, void** a3, void** a4) {
    void* ebp5;
    void** eax6;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    quoting_options_from_style(reinterpret_cast<int32_t>(ebp5) - 36, a2);
    eax6 = quotearg_n_options(a1, a3, a4, reinterpret_cast<int32_t>(ebp5) + 0xffffffdc);
    return eax6;
}

void fun_8048c82() {
    goto 0x8048acc;
}

void quotearg_free(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** ebp5;
    void** eax6;
    void** v7;
    void** v8;
    void** eax9;
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

    v3 = reinterpret_cast<void**>(__return_address());
    v4 = ebp5;
    eax6 = slotvec;
    v7 = eax6;
    v8 = reinterpret_cast<void**>(1);
    while (eax9 = nslots, reinterpret_cast<unsigned char>(v8) < reinterpret_cast<unsigned char>(eax9)) {
        v10 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v8) << 3) + reinterpret_cast<unsigned char>(v7) + 4);
        fun_8048c2c(v10, v11, v12, v13, v8, v7, v4, v3, a1, a2);
        ++v8;
    }
    if (*reinterpret_cast<void***>(v7 + 4) != 0x8052180) {
        v14 = *reinterpret_cast<void***>(v7 + 4);
        fun_8048c2c(v14, v15, v16, v17, v8, v7, v4, v3, a1, a2);
        slotvec0 = reinterpret_cast<void**>(0x100);
        g80520ec = reinterpret_cast<void**>(0x8052180);
    }
    if (v7 != 0x80520e8) {
        fun_8048c2c(v7, v18, v19, v20, v8, v7, v4, v3, a1, a2);
        slotvec = reinterpret_cast<void**>(0x80520e8);
    }
    nslots = reinterpret_cast<void**>(1);
    return;
}

void fun_8048c12() {
    goto 0x8048acc;
}

void fun_8048b92() {
    goto 0x8048acc;
}

void fun_8048cf2() {
    goto 0x8048acc;
}

void xzalloc(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** ebp8;
    void** eax9;
    void* v10;

    eax9 = xmalloc(a1, v3, v4, v5, v6, v7, ebp8, __return_address(), a1, a2);
    fun_8048b9c(eax9, 0, a1, v10);
    return;
}

void fun_8048cd2() {
    goto 0x8048acc;
}

void fun_8048d82() {
    goto 0x8048acc;
}

void fun_804fbe5(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    uint32_t edi6;
    uint32_t esi7;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x23f9;
    _init();
    edi6 = reinterpret_cast<uint32_t>(ebx4 - 0xec - (ebx4 - 0xec) >> 2);
    if (edi6) {
        esi7 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi7 * 4 - 0xec)(a1, a2, a3);
            ++esi7;
        } while (esi7 < edi6);
    }
    return;
}

void fun_8048d62() {
    goto 0x8048acc;
}

void fun_8048bd2() {
    goto 0x8048acc;
}

void fun_8048c42() {
    goto 0x8048acc;
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
    void** ebx15;
    void** ebp16;
    void** eax17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void*** eax26;
    void** edx27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** eax35;
    void** eax36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void*** eax44;
    void** edx45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** eax50;
    void** eax51;
    int32_t eax52;
    void** eax53;

    eax1 = stdout;
    eax6 = close_stream(eax1, v2, v3, v4, v5);
    if (eax6) {
        eax17 = fun_8048c1c("write error", v7, v8, v9, v10, v11, v12, v13, v14, ebx15, ebp16);
        eax18 = file_name;
        if (!eax18) {
            eax26 = fun_8048afc("write error", v19, v20, v21, v22, v23, v24, v25, eax17, ebx15, ebp16);
            edx27 = *eax26;
            v28 = eax17;
            v29 = reinterpret_cast<void**>("%s");
            v30 = edx27;
            fun_8048d3c(0, v30, "%s", v28, v31, v32, v33, v34, eax17, ebx15);
        } else {
            eax35 = file_name;
            eax36 = quotearg_colon(eax35);
            eax44 = fun_8048afc(eax35, v37, v38, v39, v40, v41, v42, v43, eax17, ebx15, ebp16);
            edx45 = *eax44;
            v46 = eax17;
            v28 = eax36;
            v29 = reinterpret_cast<void**>("%s: %s");
            v30 = edx45;
            fun_8048d3c(0, v30, "%s: %s", v28, v46, v47, v48, v49, eax17, ebx15);
        }
        eax50 = exit_failure;
        fun_8048bdc(eax50, v30, v29, v28, v46);
    }
    eax51 = stderr;
    eax52 = close_stream(eax51, v30, v29, v28, v46);
    if (eax52) {
        eax53 = exit_failure;
        fun_8048bdc(eax53, v30, v29, v28, v46);
    }
    return;
}

void fun_8048d32() {
    goto 0x8048acc;
}

void fun_8048c72() {
    goto 0x8048acc;
}

void fun_8048bf2() {
    goto 0x8048acc;
}

void** quotearg_style(int32_t a1, void** a2) {
    void** eax3;

    eax3 = quotearg_n_style(0, a1, a2);
    return eax3;
}

void fun_8048b52() {
    goto 0x8048acc;
}

void fun_8048cb2() {
    goto 0x8048acc;
}

void** quotearg(void** a1) {
    void** eax2;

    eax2 = quotearg_n(0, a1);
    return eax2;
}

int32_t xcalloc(void** a1, void** a2) {
    int32_t eax3;
    void** v4;

    eax3 = fun_8048b7c(a1, a2);
    if (!eax3) {
        xalloc_die(a1, a2, v4);
    }
    return eax3;
}

void fun_8048b82() {
    goto 0x8048acc;
}
