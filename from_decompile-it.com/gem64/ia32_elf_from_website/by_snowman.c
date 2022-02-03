
void fun_8048a50(int32_t a1, int32_t a2);

void fun_8048b14();

void frame_dummy();

void __do_global_ctors_aux();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_8048a50(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0x105a4 - 8)) {
        fun_8048b14();
    }
    frame_dummy();
    __do_global_ctors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048a50(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x105a4 - 8)) {
        fun_8048b14();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x8048b1a;

void fun_8048b14() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void exit(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        exit(0x8058f20);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x8058f10);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t __libc_start_main = 0x8048bba;

void fun_8048bb4(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t chdir = 0x8048c9a;

void** fun_8048c94(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto chdir;
}

int32_t sprintf = 0x8048aaa;

void fun_8048aa4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    goto sprintf;
}

int32_t fwrite = 0x8048cda;

void fun_8048cd4(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto fwrite;
}

uint32_t g14;

void fun_8048b44(void* a1, void** a2, void** a3);

void** stderr = reinterpret_cast<void**>(0);

void fun_8048ce4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** WARNINGS = reinterpret_cast<void**>(0);

void** fun_8048d34(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17);

void** print_warning(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void* ebp16;
    uint32_t eax17;
    void** v18;
    void** eax19;
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

    ebp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax17 = g14;
    v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp16) + 12);
    fun_8048b44(reinterpret_cast<int32_t>(ebp16) - 0x80c, a1, v18);
    eax19 = stderr;
    v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp16) + 0xfffff7f4);
    fun_8048ce4(eax19, 0x80549d6, v20, v21, v22, v23, v24, a1, v25, v26, v18, v27, v28, v29, v30);
    eax31 = WARNINGS;
    WARNINGS = eax31 + 1;
    eax32 = reinterpret_cast<void**>(eax17 ^ g14);
    if (eax32) {
        eax32 = fun_8048d34(eax19, 0x80549d6, v20, v33, v34, v35, v36, a1, v37, v38, v18, v39, v40, v41, v42, v43, v44);
    }
    return eax32;
}

void** stdout = reinterpret_cast<void**>(0);

void print_done(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** eax18;
    void** v19;

    eax18 = stdout;
    fun_8048cd4(0x80549ee, 1, 17, eax18, v19);
    return;
}

int32_t __stack_chk_fail = 0x8048d3a;

void** fun_8048d34(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    goto __stack_chk_fail;
}

int32_t system = 0x8048b8a;

void** fun_8048b84(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto system;
}

int32_t fprintf = 0x8048cea;

void fun_8048ce4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto fprintf;
}

int32_t free = 0x8048bfa;

void fun_8048bf4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto free;
}

int32_t strdup = 0x8048d9a;

void** fun_8048d94(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto strdup;
}

struct s1 {
    signed char[1] pad1;
    void** f1;
};

struct s1* fun_8048c64(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** chop(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** ebp7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    struct s1* eax17;
    void** v18;
    uint32_t eax19;
    uint32_t eax20;
    uint32_t eax21;
    uint32_t eax22;
    uint32_t eax23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    struct s1* eax30;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = ebp7;
    v8 = reinterpret_cast<void**>(0);
    v9 = reinterpret_cast<void**>(0);
    eax17 = fun_8048c64(a1, v10, v11, v12, v13, 0, 0, v14, v15, v16, v6, v5, a1, a2, a3);
    v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax17) - 1);
    while (reinterpret_cast<signed char>(v18) >= reinterpret_cast<signed char>(0)) {
        v8 = reinterpret_cast<void**>(1);
        eax19 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(a1));
        if (*reinterpret_cast<signed char*>(&eax19) == 10 || ((eax20 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(a1)), *reinterpret_cast<signed char*>(&eax20) == 9) || ((eax21 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(a1)), *reinterpret_cast<signed char*>(&eax21) == 32) || ((eax22 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(a1)), *reinterpret_cast<signed char*>(&eax22) == 12) || (eax23 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(a1)), *reinterpret_cast<signed char*>(&eax23) == 13))))) {
            ++v9;
            v8 = reinterpret_cast<void**>(0);
        }
        if (v8 == 1) 
            goto addr_804971b_6;
        --v18;
    }
    addr_804971c_9:
    eax30 = fun_8048c64(a1, v24, v25, v26, v27, v8, v9, v18, v28, v29, v6, v5, a1, a2, a3);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax30) - reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(a1)) = 0;
    return v9;
    addr_804971b_6:
    goto addr_804971c_9;
}

void** ERROR = reinterpret_cast<void**>(0);

void fun_8048db4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

void print_error(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void* esp10;
    void** v11;
    void** eax12;
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
    void** v27;
    void** v28;
    void** v29;
    void* ebp30;
    uint32_t eax31;
    void** v32;
    void** eax33;
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
    void** eax45;
    uint32_t eax46;
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

    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp10) + 16);
    fun_8048b44(reinterpret_cast<int32_t>(esp10) - 0x80c, a2, v11);
    eax12 = stderr;
    v13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp10) + 0xfffff7f4);
    fun_8048ce4(eax12, 0x80549c0, v13, v14, v15, v16, v17, a2, v18, v19, v11, v20, v21, v22, v23);
    ERROR = a1;
    fun_8048db4(a1, 0x80549c0, v13, v24, v25, v26, v27, a2, v28, v29, v11);
    ebp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 0x838 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
    eax31 = g14;
    v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp30) + 12);
    fun_8048b44(reinterpret_cast<int32_t>(ebp30) - 0x80c, 0x80549c0, v32);
    eax33 = stderr;
    v34 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp30) + 0xfffff7f4);
    fun_8048ce4(eax33, 0x80549d6, v34, v35, v36, v37, v38, 0x80549c0, v39, v40, v32, v41, v42, v43, v44);
    eax45 = WARNINGS;
    WARNINGS = eax45 + 1;
    eax46 = eax31 ^ g14;
    if (eax46) {
        fun_8048d34(eax33, 0x80549d6, v34, v47, v48, v49, v50, 0x80549c0, v51, v52, v32, v53, v54, v55, v56, v57, v58);
    }
    goto a1;
}

int32_t strlen = 0x8048c6a;

struct s1* fun_8048c64(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto strlen;
}

int32_t malloc = 0x8048d2a;

void** fun_8048d24(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto malloc;
}

int32_t strcpy = 0x8048c8a;

void fun_8048c84(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    goto strcpy;
}

void* delete_str(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** ebp13;
    void** v14;
    void** ebx15;
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
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    struct s1* eax37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** eax43;
    void** eax44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void* v50;

    v11 = reinterpret_cast<void**>(__return_address());
    v12 = ebp13;
    v14 = ebx15;
    v16 = reinterpret_cast<void**>(0);
    while (*reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v16) << 2) + reinterpret_cast<unsigned char>(a2))) {
        ++v16;
    }
    if (reinterpret_cast<signed char>(a1) < reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(a1) > reinterpret_cast<signed char>(v16)) {
        v17 = a1;
        v18 = reinterpret_cast<void**>("delete: invalid line number %i.\n");
        print_error(0xffffffeb, "delete: invalid line number %i.\n", v17, v19, v20, v21, v22, v16, v23);
    }
    v24 = a1;
    while (*reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v24) << 2) + reinterpret_cast<unsigned char>(a2))) {
        v25 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v24) << 2) + reinterpret_cast<unsigned char>(a2));
        fun_8048bf4(v25, v18, v17, v26, v27, v28, v29, v24, v30, v14, v12, v11, a1, a2, a3);
        if (*reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v24 + 1) << 2) + reinterpret_cast<unsigned char>(a2))) {
            v31 = *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v24 + 1) << 2) + reinterpret_cast<unsigned char>(a2));
            eax37 = fun_8048c64(v31, v18, v17, v32, v33, v34, v35, v24, v36, v14, v12, v11, a1, a2, a3);
            eax43 = fun_8048d24(&eax37->f1, v18, v17, v38, v39, v40, v41, v24, v42, v14, v12, v11, a1, a2, a3);
            *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v24) << 2) + reinterpret_cast<unsigned char>(a2)) = eax43;
            eax44 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v24) << 2) + reinterpret_cast<unsigned char>(a2));
            v18 = *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v24 + 1) << 2) + reinterpret_cast<unsigned char>(a2));
            fun_8048c84(eax44, v18, v17, v45, v46, v47, v48, v24, v49, v14, v12, v11, a1, a2, a3, a4, a5);
        }
        ++v24;
    }
    v50 = reinterpret_cast<void*>(v24 - 1);
    *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v50) << 2) + reinterpret_cast<unsigned char>(a2)) = reinterpret_cast<void**>(0);
    return v50;
}

int32_t fun_8048cf4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** find_pos(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    void** ebp13;
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
    int32_t eax29;
    void** eax30;

    v12 = ebp13;
    v14 = reinterpret_cast<void**>(0);
    while (*reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v14) << 2) + reinterpret_cast<unsigned char>(a2))) {
        ++v14;
    }
    if (reinterpret_cast<signed char>(a3) < reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(a3) > reinterpret_cast<signed char>(v14)) {
        fun_8048db4(0xffffffeb, v15, v16, v17, v18, v19, v20, v14, v21, v22, v12);
    }
    v23 = a3;
    while (reinterpret_cast<signed char>(v23) < reinterpret_cast<signed char>(v14)) {
        eax24 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v23) << 2) + reinterpret_cast<unsigned char>(a2));
        eax29 = fun_8048cf4(eax24, a1, v25, v26, v27, v28, v23, v14);
        if (eax29) 
            goto addr_8049bc1_9;
        ++v23;
    }
    eax30 = reinterpret_cast<void**>(0xffffffff);
    addr_8049bd7_12:
    return eax30;
    addr_8049bc1_9:
    eax30 = v23;
    goto addr_8049bd7_12;
}

int32_t exit = 0x8048dba;

void fun_8048db4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    goto exit;
}

void** fun_8048c74(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void** nc_fgets_nb(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void fun_8048c44(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** get_package_name(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    uint32_t eax7;
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
    void** eax24;
    void** v25;
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
    void** v37;
    void** v38;
    void** v39;
    void** v40;
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
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** eax67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g14;
    v8 = a1;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "%s/%s", v8, "name", v9, v10, a2, a1, v11, v12, v13, v14, v15, v16, v17, v18, v19);
    eax24 = fun_8048c74(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "r", v8, "name", v20, v21, a2, a1, v22, v23);
    if (eax24) {
        v8 = eax24;
        eax33 = nc_fgets_nb(reinterpret_cast<int32_t>(ebp6) + 0xffffeff4, 0x800, v8, "name", v25, v26, a2, a1, v27, v28, eax24, v29, v30, v31, v32);
        if (eax33) {
            chop(reinterpret_cast<int32_t>(ebp6) + 0xffffeff4, 0x800, v8, "name");
            v34 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xffffeff4);
            fun_8048c84(a2, v34, v8, "name", v35, v36, a2, a1, v37, v38, eax24, v39, v40, v41, v42, v43, v44);
        } else {
            fun_8048c44(eax24, 0x800, v8, "name", v45, v46, a2, a1, v47, v48, eax24, v49, v50, v51, v52);
            v34 = reinterpret_cast<void**>("invalid or missing extension name.\n");
            print_error(0xfffffffa, "invalid or missing extension name.\n", v8, "name", v53, v54, a2, a1, v55);
        }
    } else {
        v34 = reinterpret_cast<void**>("'name' file not readable.\n");
        print_error(0xfffffffa, "'name' file not readable.\n", v8, "name", v56, v57, a2, a1, v58);
    }
    fun_8048c44(eax24, v34, v8, "name", v59, v60, a2, a1, v61, v62, eax24, v63, v64, v65, v66);
    eax67 = reinterpret_cast<void**>(eax7 ^ g14);
    if (eax67) {
        eax67 = fun_8048d34(eax24, v34, v8, "name", v68, v69, a2, a1, v70, v71, eax24, v72, v73, v74, v75, v76, v77);
    }
    return eax67;
}

int32_t fclose = 0x8048c4a;

void fun_8048c44(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto fclose;
}

int32_t fun_8048ba4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** fun_8048b54(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** fun_8048d54(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** nc_fgets(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** ebp13;
    int32_t eax14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** eax39;
    void** v40;
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

    eax14 = fun_8048ba4(a1, a2, a3, v6, v7, v8, v9, v10, v11, v12, ebp13, __return_address(), a1, a2, a3);
    if (eax14) {
        eax22 = fun_8048b54(a1, 35, a3, v15, v16, v17, v18, v19, v20, v21, ebp13, __return_address(), a1, a2, a3);
        if (!eax22) {
            addr_8049e0f_3:
            eax23 = a1;
        } else {
            if (a1 != eax22) {
                eax30 = fun_8048d24(0x800, 35, a3, v24, v25, v26, v27, eax22, v28, v29, ebp13, __return_address(), a1, a2, a3);
                fun_8048c84(eax30, a1, a3, v31, v32, v33, eax30, eax22, v34, v35, ebp13, __return_address(), a1, a2, a3, a4, a5);
                eax39 = fun_8048d54(eax30, "#", a3, v36, v37, v38, eax30, eax22);
                fun_8048aa4(a1, "%s\n", eax39, v40, v41, v42, eax39, eax22, v43, v44, ebp13, __return_address(), a1, a2, a3, a4, a5);
                fun_8048bf4(eax39, "%s\n", eax39, v45, v46, v47, eax39, eax22, v48, v49, ebp13, __return_address(), a1, a2, a3);
                goto addr_8049e0f_3;
            } else {
                eax23 = nc_fgets(a1, a2, a3, v50, v51);
            }
        }
    } else {
        eax23 = reinterpret_cast<void**>(0);
    }
    return eax23;
}

int32_t strstr = 0x8048cfa;

int32_t fun_8048cf4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto strstr;
}

int32_t strchr = 0x8048b5a;

void** fun_8048b54(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto strchr;
}

void** nc_fgets_html(void** a1, void** a2, void** a3) {
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
    void** v14;
    void** v15;
    void** v16;
    int32_t eax17;
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
    struct s1* eax30;
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
    void** v41;
    void** v42;
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
    void** v55;
    struct s1* eax56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** eax68;
    void** v69;
    void** v70;
    void** v71;
    uint32_t eax72;
    uint32_t eax73;
    uint32_t eax74;
    uint32_t edx75;
    void** v76;
    void** v77;
    uint32_t eax78;
    void** v79;
    uint32_t eax80;
    uint32_t edx81;
    uint32_t edx82;
    uint32_t eax83;
    void** v84;
    uint32_t eax85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    int32_t eax90;
    uint32_t edx91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    int32_t eax96;
    uint32_t edx97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    int32_t eax102;
    uint32_t edx103;
    uint32_t edx104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    int32_t eax109;
    uint32_t edx110;
    uint32_t edx111;
    uint32_t eax112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** eax131;
    void** eax132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** eax137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** eax147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;

    v4 = a3;
    eax17 = fun_8048ba4(a1, a2, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
    if (eax17) {
        eax30 = fun_8048c64(a1, a2, v4, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29);
        eax43 = fun_8048d24(&eax30->f1, a2, v4, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42);
        v44 = eax43;
        eax56 = fun_8048c64(a1, a2, v4, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v44);
        eax68 = fun_8048d24(&eax56->f1, a2, v4, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v44);
        v69 = eax68;
        v70 = v44;
        v71 = a1;
        while (eax72 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v71)), !!*reinterpret_cast<signed char*>(&eax72)) {
            eax73 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v71));
            if (*reinterpret_cast<signed char*>(&eax73) != 60) {
                addr_804a047_5:
                eax74 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v71));
                if (*reinterpret_cast<signed char*>(&eax74) != 62) {
                    edx75 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v71));
                    *reinterpret_cast<void***>(v70) = *reinterpret_cast<void***>(&edx75);
                    ++v70;
                }
            } else {
                v76 = v71;
                v77 = v69;
                --v71;
                if (reinterpret_cast<unsigned char>(v71) >= reinterpret_cast<unsigned char>(a1)) {
                    eax78 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v71));
                    if (*reinterpret_cast<signed char*>(&eax78) != 32) {
                        v79 = reinterpret_cast<void**>(0);
                    } else {
                        v79 = reinterpret_cast<void**>(1);
                    }
                }
                while (eax80 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v76)), !!*reinterpret_cast<signed char*>(&eax80)) {
                    edx81 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v76));
                    *reinterpret_cast<void***>(v77) = *reinterpret_cast<void***>(&edx81);
                    edx82 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(v77) + 1);
                    *reinterpret_cast<void***>(v77) = *reinterpret_cast<void***>(&edx82);
                    eax83 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v76));
                    if (*reinterpret_cast<signed char*>(&eax83) == 62) 
                        goto addr_8049ef7_14;
                    ++v76;
                }
                goto addr_804a041_16;
            }
            ++v71;
            continue;
            addr_804a041_16:
            goto addr_804a047_5;
            addr_8049ef7_14:
            *reinterpret_cast<void***>(v77) = reinterpret_cast<void**>(0);
            v84 = v76 + 1;
            eax85 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v84));
            if (*reinterpret_cast<signed char*>(&eax85) != 10) {
                eax90 = fun_8048cf4(v69, "<br>", v4, v86, v87, v88, v89, v79);
                if (eax90 && reinterpret_cast<unsigned char>(v70) > reinterpret_cast<unsigned char>(v44)) {
                    *reinterpret_cast<void***>(v70) = reinterpret_cast<void**>(10);
                    edx91 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(v70) + 1);
                    *reinterpret_cast<void***>(v70) = *reinterpret_cast<void***>(&edx91);
                }
                eax96 = fun_8048cf4(v69, "<BR>", v4, v92, v93, v94, v95, v79);
                if (eax96 && reinterpret_cast<unsigned char>(v70) > reinterpret_cast<unsigned char>(v44)) {
                    *reinterpret_cast<void***>(v70) = reinterpret_cast<void**>(10);
                    edx97 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(v70) + 1);
                    *reinterpret_cast<void***>(v70) = *reinterpret_cast<void***>(&edx97);
                }
                eax102 = fun_8048cf4(v69, "<p>", v4, v98, v99, v100, v101, v79);
                if (eax102) {
                    if (reinterpret_cast<unsigned char>(v70) > reinterpret_cast<unsigned char>(v44)) {
                        *reinterpret_cast<void***>(v70) = reinterpret_cast<void**>(10);
                        edx103 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(v70) + 1);
                        *reinterpret_cast<void***>(v70) = *reinterpret_cast<void***>(&edx103);
                    }
                    *reinterpret_cast<void***>(v70) = reinterpret_cast<void**>(10);
                    edx104 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(v70) + 1);
                    *reinterpret_cast<void***>(v70) = *reinterpret_cast<void***>(&edx104);
                }
                eax109 = fun_8048cf4(v69, "<P>", v4, v105, v106, v107, v108, v79);
                if (eax109) {
                    if (reinterpret_cast<unsigned char>(v70) > reinterpret_cast<unsigned char>(v44)) {
                        *reinterpret_cast<void***>(v70) = reinterpret_cast<void**>(10);
                        edx110 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(v70) + 1);
                        *reinterpret_cast<void***>(v70) = *reinterpret_cast<void***>(&edx110);
                    }
                    *reinterpret_cast<void***>(v70) = reinterpret_cast<void**>(10);
                    edx111 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(v70) + 1);
                    *reinterpret_cast<void***>(v70) = *reinterpret_cast<void***>(&edx111);
                }
            }
            v71 = v76;
            eax112 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v71));
            if (*reinterpret_cast<signed char*>(&eax112) != 32) {
                goto addr_804a047_5;
            } else {
                if (!reinterpret_cast<int1_t>(v79 == 1)) {
                    goto addr_804a047_5;
                } else {
                    ++v71;
                    v79 = reinterpret_cast<void**>(0);
                    goto addr_804a047_5;
                }
            }
        }
        *reinterpret_cast<void***>(v70) = reinterpret_cast<void**>(0);
        fun_8048c84(a1, v44, v4, v113, v114, v115, v116, v79, v70, v71, v69, v77, v84, v76, v44, v117, v118);
        fun_8048bf4(v44, v44, v4, v119, v120, v121, v122, v79, v70, v71, v69, v77, v84, v76, v44);
        fun_8048bf4(v69, v44, v4, v123, v124, v125, v126, v79, v70, v71, v69, v77, v84, v76, v44);
        eax131 = fun_8048b54(a1, 35, v4, v127, v128, v129, v130, v79, v70, v71, v69, v77, v84, v76, v44);
        if (eax131) 
            goto addr_804a0c0_36;
    } else {
        eax132 = reinterpret_cast<void**>(0);
        goto addr_804a144_38;
    }
    addr_804a141_39:
    eax132 = a1;
    addr_804a144_38:
    return eax132;
    addr_804a0c0_36:
    if (a1 != eax131) {
        eax137 = fun_8048d24(0x800, 35, v4, v133, v134, v135, v136, v79, v70, v71, v69, v77, v84, v76, v44);
        fun_8048c84(eax137, a1, v4, v138, v139, v140, v141, v79, v70, v71, v69, v77, v84, v76, eax137, eax131, v142);
        eax147 = fun_8048d54(eax137, "#", v4, v143, v144, v145, v146, v79);
        fun_8048aa4(a1, "%s\n", eax147, v148, v149, v150, v151, v79, v70, v71, v69, v77, v84, v76, eax147, eax131, v152);
        fun_8048bf4(eax147, "%s\n", eax147, v153, v154, v155, v156, v79, v70, v71, v69, v77, v84, v76, eax147);
        goto addr_804a141_39;
    } else {
        eax132 = nc_fgets_html(a1, a2, a3);
        goto addr_804a144_38;
    }
}

void** is_text(void** a1, void** a2, void** a3, void** a4);

void** nc_fgets_nb(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** ebp23;
    int32_t eax24;
    void** v25;
    void** eax26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
    void** eax35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** eax42;
    void** v43;
    void** v44;
    void** v45;
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
    void** v56;
    void** v57;
    void** v58;
    void** v59;
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
    void** v72;
    void** v73;
    void** v74;

    eax24 = fun_8048ba4(a1, a2, a3, v16, v17, v18, v19, v20, v21, v22, ebp23, __return_address(), a1, a2, a3);
    if (eax24) {
        eax26 = is_text(a1, a2, a3, v25);
        if (eax26) {
            eax34 = fun_8048b54(a1, 35, a3, v27, v28, v29, v30, v31, v32, v33, ebp23, __return_address(), a1, a2, a3);
            if (!eax34) {
                addr_804a2c3_4:
                eax35 = a1;
            } else {
                if (a1 != eax34) {
                    eax42 = fun_8048d24(0x800, 35, a3, v36, v37, v38, v39, eax34, v40, v41, ebp23, __return_address(), a1, a2, a3);
                    fun_8048c84(eax42, a1, a3, v43, v44, v45, eax42, eax34, v46, v47, ebp23, __return_address(), a1, a2, a3, a4, a5);
                    eax51 = fun_8048d54(eax42, "#", a3, v48, v49, v50, eax42, eax34);
                    fun_8048aa4(a1, "%s\n", eax51, v52, v53, v54, eax51, eax34, v55, v56, ebp23, __return_address(), a1, a2, a3, a4, a5);
                    fun_8048bf4(eax51, "%s\n", eax51, v57, v58, v59, eax51, eax34, v60, v61, ebp23, __return_address(), a1, a2, a3);
                    goto addr_804a2c3_4;
                } else {
                    eax35 = nc_fgets_nb(a1, a2, a3, v62, v63, v64, v65, eax34, v66, v67, ebp23, __return_address(), a1, a2, a3);
                }
            }
        } else {
            eax35 = nc_fgets_nb(a1, a2, a3, v68, v69, v70, v71, v72, v73, v74, ebp23, __return_address(), a1, a2, a3);
        }
    } else {
        eax35 = reinterpret_cast<void**>(0);
    }
    return eax35;
}

int32_t fputc = 0x8048d4a;

void fun_8048d44(int32_t a1, void** a2, void** a3, void** a4) {
    goto fputc;
}

void fun_8048c54(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void fun_8048c14(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

int32_t* fun_8048a94(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_8048ad4(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void atexit(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** exit_db();

void** dump_plain(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    void** v7;
    void** v8;
    uint32_t eax9;
    uint32_t v10;
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
    int32_t* eax36;
    int32_t v37;
    void** v38;
    void** v39;
    void** v40;
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
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** eax76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v7 = a1;
    v8 = a2;
    eax9 = g14;
    v10 = eax9;
    v11 = reinterpret_cast<void**>(32);
    fun_8048c54(v8, "/tmp/grass.extensions.db.XXXXXX", 32, v12, v13, v14, v8, v7, v15, v16, v17, v18, v19, v20, v21);
    fun_8048c14(v8, "/tmp/grass.extensions.db.XXXXXX", 32, v22, v23, v24, v8, v7);
    v25 = reinterpret_cast<void**>("w+");
    eax31 = fun_8048c74(v8, "w+", 32, v26, v27, v28, v8, v7, v29, v30);
    v32 = eax31;
    if (!v32) {
        eax36 = fun_8048a94(v8, "w+", 32, v33, v34, v35, v8, v7);
        v37 = *eax36;
        eax41 = fun_8048ad4(v37, "w+", 32, v38, v39, v40, v8, v7);
        v42 = eax41;
        v11 = v8;
        v25 = reinterpret_cast<void**>("could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        print_error(0xffffffe9, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n", v11, v42, v43, v44, v8, v7, v45);
    }
    atexit(exit_db, v25, v11, v42, v46, v47, v8, v7);
    eax51 = fun_8048c74(v7, "r", v11, v42, v48, v49, v8, v7, v50, v32);
    v52 = eax51;
    while (eax54 = nc_fgets(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, 0x800, v52, v42, v53), !!eax54) {
        fun_8048ce4(v32, reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, v52, v42, v55, v56, v8, v7, v57, v32, v52, v58, v59, v60, v61);
    }
    fun_8048c44(v52, 0x800, v52, v42, v62, v63, v8, v7, v64, v32, v52, v65, v66, v67, v68);
    fun_8048c44(v32, 0x800, v52, v42, v69, v70, v8, v7, v71, v32, v52, v72, v73, v74, v75);
    eax76 = reinterpret_cast<void**>(v10 ^ g14);
    if (eax76) {
        eax76 = fun_8048d34(v32, 0x800, v52, v42, v77, v78, v8, v7, v79, v32, v52, v80, v81, v82, v83, v84, v85);
    }
    return eax76;
}

int32_t __errno_location = 0x8048a9a;

int32_t* fun_8048a94(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto __errno_location;
}

int32_t strerror = 0x8048ada;

void** fun_8048ad4(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto strerror;
}

/* __i686.get_pc_thunk.bx */
int32_t __i686_get_pc_thunk_bx();

void fun_8048ae4(void** a1, int32_t a2, void** a3);

void atexit(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** eax9;
    int32_t ebx10;

    __i686_get_pc_thunk_bx();
    eax9 = *reinterpret_cast<void***>(ebx10 + 0x489b - 4);
    if (eax9) {
        eax9 = *reinterpret_cast<void***>(eax9);
    }
    fun_8048ae4(a1, 0, eax9);
    return;
}

int32_t fopen = 0x8048c7a;

void** fun_8048c74(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    goto fopen;
}

int32_t close = 0x8048cca;

void fun_8048cc4(void** a1, void** a2, void** a3, void** a4) {
    goto close;
}

int32_t strcmp = 0x8048daa;

int32_t fun_8048da4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    goto strcmp;
}

int32_t fun_8048b04(int32_t a1, void** a2, int32_t a3);

int32_t stat(void** a1, void** a2, void** a3, void** a4, void** a5) {
    int32_t eax6;
    int32_t eax7;

    eax6 = __i686_get_pc_thunk_bx();
    eax7 = fun_8048b04(3, a1, eax6);
    return eax7;
}

void** fun_8048c24(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

struct s2 {
    signed char[11] pad11;
    void** fb;
};

struct s2* fun_8048bd4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void** binaries_exist(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* ebp9;
    void** v10;
    void** v11;
    uint32_t eax12;
    uint32_t v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    struct s2* eax31;
    struct s2* v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    int32_t eax42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    int32_t eax49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    int32_t eax56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    uint32_t v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    int32_t eax76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    struct s2* eax81;
    void** eax82;
    uint32_t edx83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;

    ebp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v10 = a1;
    v11 = a2;
    eax12 = g14;
    v13 = eax12;
    v14 = v10;
    eax22 = fun_8048c24(v14, v15, v16, v17, v18, v19, v11, v10, v20, v21);
    v23 = eax22;
    if (v23) {
        v14 = v23;
        eax31 = fun_8048bd4(v14, v24, v25, v26, v27, v28, v11, v10, v29, v30);
        v32 = eax31;
        while (v32) {
            v33 = reinterpret_cast<void**>(".");
            eax42 = fun_8048da4(&v32->fb, ".", v34, v35, v36, v37, v11, v10, v38, v39, v40, v41);
            if (!eax42) 
                goto addr_804aa6f_5;
            v33 = reinterpret_cast<void**>("..");
            eax49 = fun_8048da4(&v32->fb, "..", v34, v35, v43, v44, v11, v10, v45, v46, v47, v48);
            if (!eax49) 
                goto addr_804aa6f_5;
            v33 = reinterpret_cast<void**>("src");
            eax56 = fun_8048da4(&v32->fb, "src", v34, v35, v50, v51, v11, v10, v52, v53, v54, v55);
            if (!eax56) 
                goto addr_804aa6f_5;
            v35 = reinterpret_cast<void**>(&v32->fb);
            v34 = v10;
            fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%s/%s", v34, v35, v57, v58, v11, v10, v59, v60, v61, v62, v63, v64, v65, v66, v67);
            v33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff794);
            stat(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, v33, v34, v35, v68);
            if ((v69 & 0xf000) != 0x4000) 
                goto addr_804aa6f_5;
            v33 = v11;
            v14 = reinterpret_cast<void**>(&v32->fb);
            eax76 = fun_8048da4(v14, v33, v34, v35, v70, v71, v11, v10, v72, v73, v74, v75);
            if (!eax76) 
                goto addr_804aa68_10;
            addr_804aa6f_5:
            v14 = v23;
            eax81 = fun_8048bd4(v14, v33, v34, v35, v77, v78, v11, v10, v79, v80);
            v32 = eax81;
        }
    } else {
        eax82 = reinterpret_cast<void**>(0);
        goto addr_804aa95_12;
    }
    eax82 = reinterpret_cast<void**>(0);
    addr_804aa95_12:
    edx83 = v13 ^ g14;
    if (edx83) {
        eax82 = fun_8048d34(v14, v33, v34, v35, v84, v85, v11, v10, v86, v87, v88, v89, v90, v91, v92, v93, v94);
    }
    return eax82;
    addr_804aa68_10:
    eax82 = reinterpret_cast<void**>(1);
    goto addr_804aa95_12;
}

void** check_filetype(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** ebp9;
    int32_t eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    int32_t eax15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    int32_t eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    int32_t eax25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    int32_t eax30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    int32_t eax35;
    void** eax36;

    eax10 = fun_8048cf4(a1, ".tar.gz", v5, v6, v7, v8, ebp9, __return_address());
    if (!eax10) {
        eax15 = fun_8048cf4(a1, ".tgz", v11, v12, v13, v14, ebp9, __return_address());
        if (!eax15) {
            eax20 = fun_8048cf4(a1, ".tar.bz2", v16, v17, v18, v19, ebp9, __return_address());
            if (!eax20) {
                eax25 = fun_8048cf4(a1, ".tbz", v21, v22, v23, v24, ebp9, __return_address());
                if (!eax25) {
                    eax30 = fun_8048cf4(a1, ".zip", v26, v27, v28, v29, ebp9, __return_address());
                    if (!eax30) {
                        eax35 = fun_8048cf4(a1, ".tar", v31, v32, v33, v34, ebp9, __return_address());
                        if (!eax35) {
                            eax36 = reinterpret_cast<void**>(0);
                        } else {
                            eax36 = reinterpret_cast<void**>(4);
                        }
                    } else {
                        eax36 = reinterpret_cast<void**>(3);
                    }
                } else {
                    eax36 = reinterpret_cast<void**>(2);
                }
            } else {
                eax36 = reinterpret_cast<void**>(2);
            }
        } else {
            eax36 = reinterpret_cast<void**>(1);
        }
    } else {
        eax36 = reinterpret_cast<void**>(1);
    }
    return eax36;
}

/* next.4089 */
uint32_t next_4089 = 0;

void fun_8048ab4(uint32_t a1);

void** fun_8048d84(uint32_t a1);

void fun_8048d14(void** a1, void** a2, void** a3, void** a4);

void** su(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void* ebp18;
    uint32_t eax19;
    uint32_t eax20;
    uint32_t eax21;
    uint32_t eax22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
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
    void** v41;
    void** eax42;
    void** v43;
    void** v44;
    int32_t* eax45;
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
    void** eax57;
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
    void** v72;
    void** v73;
    void** v74;

    ebp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax19 = g14;
    eax20 = next_4089;
    next_4089 = eax20 * 0x41c64e6d + 0xd431;
    eax21 = next_4089;
    next_4089 = eax21 >> 16 & 0x7fff;
    eax22 = next_4089;
    fun_8048ab4(eax22);
    eax23 = fun_8048d84(eax22);
    v24 = a1;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp18) + 0xfffff7f4, "%s/gem.test.%i", v24, eax23, v25, v26, a2, a1, v27, v28, v29, v30, v31, v32, v33, v34, v35);
    v36 = reinterpret_cast<void**>("w+");
    v37 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp18) + 0xfffff7f4);
    eax42 = fun_8048c74(v37, "w+", v24, eax23, v38, v39, a2, a1, v40, v41);
    eax45 = fun_8048a94(v37, "w+", v24, eax23, v43, v44, a2, a1);
    if (*eax45 != 13) {
        fun_8048d14(reinterpret_cast<int32_t>(ebp18) + 0xfffff7f4, "w+", v24, eax23);
        fun_8048c44(eax42, "w+", v24, eax23, v46, v47, a2, a1, v48, eax42, v49, v50, v51, v52, v53);
        v54 = a2;
        eax57 = fun_8048b84(v54, "w+", v24, eax23, v55, v56, a2);
        v58 = eax57;
        if (v58) {
            v24 = a2;
            v36 = reinterpret_cast<void**>("could not run '%s'.\n");
            v54 = reinterpret_cast<void**>(0xfffffff7);
            print_error(0xfffffff7, "could not run '%s'.\n", v24, eax23, v59, v60, a2, a1, v61);
        }
    } else {
        v36 = reinterpret_cast<void**>("You don't have write access to your local GRASS installation.\nPlease consult your system administrator.\n");
        v54 = reinterpret_cast<void**>(0xfffffffb);
        print_error(0xfffffffb, "You don't have write access to your local GRASS installation.\nPlease consult your system administrator.\n", v24, eax23, v62, v63, a2, a1, v64);
    }
    eax65 = reinterpret_cast<void**>(eax19 ^ g14);
    if (eax65) {
        eax65 = fun_8048d34(v54, v36, v24, eax23, v66, v67, a2, a1, v68, eax42, v58, v69, v70, v71, v72, v73, v74);
    }
    return eax65;
}

int32_t vercmp(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    int32_t eax10;

    if (a1 != a4 || (a2 != a5 || a3 != a6)) {
        if (reinterpret_cast<signed char>(a4) <= reinterpret_cast<signed char>(a1)) {
            if (reinterpret_cast<signed char>(a4) >= reinterpret_cast<signed char>(a1)) {
                if (reinterpret_cast<signed char>(a5) <= reinterpret_cast<signed char>(a2)) {
                    if (reinterpret_cast<signed char>(a5) >= reinterpret_cast<signed char>(a2)) {
                        if (reinterpret_cast<signed char>(a6) <= reinterpret_cast<signed char>(a3)) {
                            if (reinterpret_cast<signed char>(a6) >= reinterpret_cast<signed char>(a3)) {
                                eax10 = 0;
                            } else {
                                eax10 = 1;
                            }
                        } else {
                            eax10 = -1;
                        }
                    } else {
                        eax10 = 1;
                    }
                } else {
                    eax10 = -1;
                }
            } else {
                eax10 = 1;
            }
        } else {
            eax10 = -1;
        }
    } else {
        eax10 = 0;
    }
    return eax10;
}

int32_t __isoc99_sscanf = 0x8048b3a;

void** fun_8048b34(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    goto __isoc99_sscanf;
}

int32_t strcat = 0x8048d6a;

void fun_8048d64(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto strcat;
}

void** FORCE = reinterpret_cast<void**>(0);

void fun_8048c04(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** depstr(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** register_extension(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** v8;
    void** v9;
    void** v10;
    uint32_t eax11;
    uint32_t v12;
    int32_t v13;
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
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    int32_t* eax41;
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
    int32_t* eax56;
    int32_t v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** eax63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
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
    void** v87;
    void** v88;
    void** eax89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    int32_t* eax95;
    int32_t v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** eax101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    int32_t v111;
    int32_t v112;
    int32_t v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** eax122;
    int32_t v123;
    void** v124;
    void** v125;
    void** v126;
    int32_t eax127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    int32_t eax132;
    void** eax133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** eax142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** eax152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** eax161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
    void** v179;
    void** v180;
    void** v181;
    void** v182;
    void** v183;
    void** v184;
    void** eax185;
    int32_t* eax186;
    int32_t v187;
    void** eax188;
    void** v189;
    void** eax190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** eax203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = a1;
    v9 = a2;
    v10 = a3;
    eax11 = g14;
    v12 = eax11;
    v13 = 1;
    v14 = v8;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4, "%s/etc/extensions.db", v14, v15, v16, v17, v18, v19, v20, v10, v9, v8, v21, v22, v23, v24, v25);
    v26 = reinterpret_cast<void**>("r");
    v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4);
    eax34 = fun_8048c74(v27, "r", v14, v28, v29, v30, v31, v32, v33, v10);
    v35 = eax34;
    if (!v35) {
        eax41 = fun_8048a94(v27, "r", v14, v36, v37, v38, v39, v40);
        if (*eax41 != 2) {
            fun_8048c44(v35, "r", v14, v42, v43, v44, v45, v46, v47, v10, v9, v8, v48, v49, v50);
            eax56 = fun_8048a94(v35, "r", v14, v51, v52, v53, v54, v55);
            v57 = *eax56;
            eax63 = fun_8048ad4(v57, "r", v14, v58, v59, v60, v61, v62);
            v64 = eax63;
            v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4);
            v26 = reinterpret_cast<void**>("checking for file '%s': %s\n");
            v27 = reinterpret_cast<void**>(0xfffffff1);
            print_error(0xfffffff1, "checking for file '%s': %s\n", v14, v64, v65, v66, v67, v68, v69);
        } else {
            v13 = 0;
        }
    }
    if (v13) {
        v70 = reinterpret_cast<void**>(32);
        fun_8048c54(0x8063ac0, "/tmp/grass.extensions.db.XXXXXX", 32, v64, v71, v72, v73, v74, v75, v10, v9, v8, v76, v77, v78);
        fun_8048c14(0x8063ac0, "/tmp/grass.extensions.db.XXXXXX", 32, v64, v79, v80, v81, v82);
        v83 = reinterpret_cast<void**>("w+");
        eax89 = fun_8048c74(0x8063ac0, "w+", 32, v64, v84, v85, v86, v87, v88, v10);
        v90 = eax89;
        if (!v90) {
            eax95 = fun_8048a94(0x8063ac0, "w+", 32, v64, v91, v92, v93, v94);
            v96 = *eax95;
            eax101 = fun_8048ad4(v96, "w+", 32, v64, v97, v98, v99, v100);
            v64 = eax101;
            v70 = reinterpret_cast<void**>(0x8063ac0);
            v83 = reinterpret_cast<void**>("could not create temp file '%s': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
            print_error(0xfffffff1, "could not create temp file '%s': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n", 0x8063ac0, v64, v102, v103, v104, v105, v106);
        }
        atexit(exit_db, v83, v70, v64, v107, v108, v109, v110);
        v111 = 0;
        v112 = 1;
        v113 = 0;
        while (v14 = v35, v26 = reinterpret_cast<void**>(0x800), eax122 = nc_fgets_nb(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, 0x800, v14, v64, v114, v115, v116, v117, v118, v10, v9, v8, v119, v120, v121), !!eax122) {
            ++v111;
            v123 = 1;
            v117 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7f4);
            v116 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffdff4);
            v115 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7c8);
            v114 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7cc);
            v64 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7d0);
            v124 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffe7f4);
            fun_8048b34(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, "%s\t%i.%i.%i\t%s\t%s", v124, v64, v114, v115, v116, v117, v125);
            eax127 = fun_8048da4(reinterpret_cast<int32_t>(ebp7) + 0xffffe7f4, v10, v124, v64, v114, v115, v116, v117, v126, v10, v9, v8);
            if (!eax127) {
                v113 = 1;
                v115 = a6;
                v114 = a5;
                v64 = a4;
                v124 = v128;
                eax132 = vercmp(v129, v130, v124, v64, v114, v115, v116, v117, v131);
                eax133 = FORCE;
                if (!eax133) {
                    if (eax132 >= 0) {
                        v115 = v134;
                        v114 = v135;
                        v64 = v136;
                        v124 = v10;
                        print_error(0xfffffff0, "Extension '%s' with same or higher version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n", v124, v64, v114, v115, v116, v117, v137);
                    } else {
                        v115 = v138;
                        v114 = v139;
                        v64 = v140;
                        v124 = v10;
                        print_error(0xfffffff0, "Extension '%s' with lower version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n", v124, v64, v114, v115, v116, v117, v141);
                    }
                }
                eax142 = FORCE;
                if (eax142) {
                    if (eax132) {
                        v112 = 1;
                        v123 = 0;
                    } else {
                        v112 = 0;
                    }
                }
            }
            if (!v123) 
                continue;
            v143 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4);
            fun_8048ce4(v90, v143, v124, v64, v114, v115, v116, v117, v144, v10, v9, v8, v145, v146, v147);
            fun_8048c04(v90, v143, v124, v64, v114, v115, v116, v117, v148, v10, v9, v8, v149, v150, v151);
        }
        if (v112) {
            if (v113) {
                eax152 = depstr(v10, v8, v14, v64, v114, v115, v116, v117);
                fun_8048c84(reinterpret_cast<int32_t>(ebp7) + 0xffffd7f4, eax152, v14, v64, v114, v115, v116, v117, v153, v10, v9, v8, v154, v155, v156, v90, v35);
                v117 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7f4);
                v116 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffdff4);
                v115 = a6;
                v114 = a5;
                v64 = a4;
                v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffe7f4);
                v26 = reinterpret_cast<void**>("%s\t%i.%i.%i\t%s\t%s\n");
                fun_8048ce4(v90, "%s\t%i.%i.%i\t%s\t%s\n", v14, v64, v114, v115, v116, v117, v157, v10, v9, v8, v158, v159, v160);
            } else {
                eax161 = depstr(v10, v8, v14, v64, v114, v115, v116, v117);
                fun_8048c84(reinterpret_cast<int32_t>(ebp7) + 0xffffd7f4, eax161, v14, v64, v114, v115, v116, v117, v162, v10, v9, v8, v163, v164, v165, v90, v35);
                v117 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7f4);
                v116 = v9;
                v115 = a6;
                v114 = a5;
                v64 = a4;
                v14 = v10;
                v26 = reinterpret_cast<void**>("%s\t%i.%i.%i\t%s\t%s\n");
                fun_8048ce4(v90, "%s\t%i.%i.%i\t%s\t%s\n", v14, v64, v114, v115, v116, v117, v166, v10, v9, v8, v167, v168, v169);
            }
        }
        fun_8048c44(v90, v26, v14, v64, v114, v115, v116, v117, v170, v10, v9, v8, v171, v172, v173);
        v27 = v35;
        fun_8048c44(v27, v26, v14, v64, v114, v115, v116, v117, v174, v10, v9, v8, v175, v176, v177);
    }
    if (!v111 || !v13) {
        v178 = reinterpret_cast<void**>(32);
        fun_8048c54(0x8063ac0, "/tmp/grass.extensions.db.XXXXXX", 32, v64, v114, v115, v116, v117, v179, v10, v9, v8, v180, v181, v182);
        fun_8048c14(0x8063ac0, "/tmp/grass.extensions.db.XXXXXX", 32, v64, v114, v115, v116, v117);
        v183 = reinterpret_cast<void**>("w+");
        eax185 = fun_8048c74(0x8063ac0, "w+", 32, v64, v114, v115, v116, v117, v184, v10);
        v90 = eax185;
        if (!v90) {
            eax186 = fun_8048a94(0x8063ac0, "w+", 32, v64, v114, v115, v116, v117);
            v187 = *eax186;
            eax188 = fun_8048ad4(v187, "w+", 32, v64, v114, v115, v116, v117);
            v64 = eax188;
            v178 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4);
            v183 = reinterpret_cast<void**>("could not create temp db '%s': %s\n \t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
            print_error(0xfffffff1, "could not create temp db '%s': %s\n \t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n", v178, v64, v114, v115, v116, v117, v189);
        }
        atexit(exit_db, v183, v178, v64, v114, v115, v116, v117);
        eax190 = depstr(v10, v8, v178, v64, v114, v115, v116, v117);
        fun_8048c84(reinterpret_cast<int32_t>(ebp7) + 0xffffd7f4, eax190, v178, v64, v114, v115, v116, v117, v191, v10, v9, v8, v192, v193, v194, v90, v35);
        v117 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7f4);
        v116 = v9;
        v115 = a6;
        v114 = a5;
        v64 = a4;
        v14 = v10;
        v26 = reinterpret_cast<void**>("%s\t%i.%i.%i\t%s\t%s\n");
        fun_8048ce4(v90, "%s\t%i.%i.%i\t%s\t%s\n", v14, v64, v114, v115, v116, v117, v195, v10, v9, v8, v196, v197, v198);
        v27 = v90;
        fun_8048c44(v27, "%s\t%i.%i.%i\t%s\t%s\n", v14, v64, v114, v115, v116, v117, v199, v10, v9, v8, v200, v201, v202);
    }
    eax203 = reinterpret_cast<void**>(v12 ^ g14);
    if (eax203) {
        eax203 = fun_8048d34(v27, v26, v14, v64, v114, v115, v116, v117, v204, v10, v9, v8, v205, v206, v207, v90, v35);
    }
    return eax203;
}

int32_t memcpy = 0x8048c5a;

void fun_8048c54(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto memcpy;
}

int32_t mkstemp = 0x8048c1a;

void fun_8048c14(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto mkstemp;
}

int32_t fflush = 0x8048c0a;

void fun_8048c04(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto fflush;
}

void** depstr(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* ebp9;
    void** v10;
    void** v11;
    uint32_t eax12;
    uint32_t v13;
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
    void** v31;
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
    void** eax43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    int32_t* eax48;
    void** v49;
    void** v50;
    void** v51;
    int32_t* eax52;
    int32_t v53;
    void** v54;
    void** v55;
    void** v56;
    void** eax57;
    void** v58;
    void** v59;
    void** v60;
    void** eax61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** eax68;
    uint32_t eax69;
    unsigned char v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** eax75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    int32_t eax81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    uint32_t edx91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;

    ebp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v10 = a1;
    v11 = a2;
    eax12 = g14;
    v13 = eax12;
    v14 = reinterpret_cast<void**>(11);
    fun_8048c54(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "../depends", 11, v15, v16, v17, v11, v10, v18, v19, v20, v21, v22, v23, v24);
    v25 = reinterpret_cast<void**>("r");
    v26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
    eax32 = fun_8048c74(v26, "r", 11, v27, v28, v29, v11, v10, v30, v31);
    v33 = eax32;
    if (v33) {
        addr_804aed2_2:
        v34 = reinterpret_cast<void**>(1);
        eax43 = fun_8048d24(0x800, v25, v14, v35, v36, v37, v11, v10, v38, v39, v40, v33, v41, 1, v42);
        v44 = eax43;
    } else {
        eax48 = fun_8048a94(v26, "r", 11, v45, v46, v47, v11, v10);
        if (*eax48 != 2) {
            eax52 = fun_8048a94(v26, "r", 11, v49, v50, v51, v11, v10);
            v53 = *eax52;
            eax57 = fun_8048ad4(v53, "r", 11, v54, v55, v56, v11, v10);
            v35 = eax57;
            v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
            v25 = reinterpret_cast<void**>("checking for file '%s': %s\n");
            print_error(0xffffffef, "checking for file '%s': %s\n", v14, v35, v58, v59, v11, v10, v60);
            goto addr_804aed2_2;
        } else {
            eax61 = reinterpret_cast<void**>(0x8054d15);
            goto addr_804b001_6;
        }
    }
    while (v14 = v33, v25 = reinterpret_cast<void**>(0x800), eax68 = nc_fgets_nb(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4, 0x800, v14, v35, v62, v63, v11, v10, v64, v65, v66, v33, v67, v34, v44), !!eax68) {
        eax69 = v70;
        if (!*reinterpret_cast<signed char*>(&eax69)) 
            continue;
        v71 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4);
        eax75 = fun_8048b34(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4, "%s", v71, v35, v72, v73, v11, v10, v74);
        v67 = eax75;
        if (reinterpret_cast<signed char>(v67) <= reinterpret_cast<signed char>(0)) 
            continue;
        eax81 = fun_8048da4("GRASS", reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4, v71, v35, v76, v77, v11, v10, v78, v79, v80, v33);
        if (!eax81) 
            continue;
        if (!v34) {
            fun_8048d64(v44, ",", v71, v35, v82);
            fun_8048d64(v44, reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4, v71, v35, v83);
        } else {
            fun_8048d64(v44, "\t", v71, v35, v84);
            fun_8048d64(v44, reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4, v71, v35, v85);
            v34 = reinterpret_cast<void**>(0);
        }
    }
    v26 = v33;
    fun_8048c44(v26, 0x800, v14, v35, v86, v87, v11, v10, v88, v89, v90, v33, v67, v34, v44);
    eax61 = v44;
    addr_804b001_6:
    edx91 = v13 ^ g14;
    if (edx91) {
        eax61 = fun_8048d34(v26, v25, v14, v35, v92, v93, v11, v10, v94, v95, v96, v33, v67, v34, v44, v97, v98);
    }
    return eax61;
}

void** deregister_extension(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** v6;
    void** v7;
    void** v8;
    uint32_t eax9;
    uint32_t v10;
    int32_t v11;
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
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    int32_t* eax39;
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
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    int32_t* eax56;
    int32_t v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** eax63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
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
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** eax102;
    void** v103;
    void** eax104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    int32_t* eax113;
    int32_t v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** eax119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** eax125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    int32_t v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** eax141;
    void** v142;
    void** v143;
    void** eax144;
    int32_t v145;
    void** v146;
    int32_t eax147;
    int32_t eax148;
    void** eax149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v6 = a1;
    v7 = a2;
    v8 = a3;
    eax9 = g14;
    v10 = eax9;
    v11 = 0;
    v12 = v8;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, "%s/etc/extensions.db", v12, v13, v14, v15, v16, v17, v18, v8, v7, v6, v19, v20, v21, v22, v23);
    v24 = reinterpret_cast<void**>("r");
    v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4);
    eax32 = fun_8048c74(v25, "r", v12, v26, v27, v28, v29, v30, v31, v8);
    v33 = eax32;
    if (v33) {
        v11 = 1;
    } else {
        eax39 = fun_8048a94(v25, "r", v12, v34, v35, v36, v37, v38);
        if (*eax39 != 2 || (eax40 = FORCE, !!eax40)) {
            eax41 = FORCE;
            if (!eax41) {
                fun_8048c44(v33, "r", v12, v42, v43, v44, v45, v46, v47, v8, v7, v6, v48, v49, v50);
                eax56 = fun_8048a94(v33, "r", v12, v51, v52, v53, v54, v55);
                v57 = *eax56;
                eax63 = fun_8048ad4(v57, "r", v12, v58, v59, v60, v61, v62);
                v64 = eax63;
                v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4);
                v24 = reinterpret_cast<void**>("checking for file '%s': %s\n");
                v25 = reinterpret_cast<void**>(0xffffffed);
                print_error(0xffffffed, "checking for file '%s': %s\n", v12, v64, v65, v66, v67, v68, v69);
            }
        } else {
            fun_8048c44(v33, "r", v12, v70, v71, v72, v73, v74, v75, v8, v7, v6, v76, v77, v78);
            v24 = reinterpret_cast<void**>("could not deregister: no extensions installed\n");
            v25 = reinterpret_cast<void**>(0xffffffed);
            print_error(0xffffffed, "could not deregister: no extensions installed\n", v12, v79, v80, v81, v82, v83, v84);
        }
    }
    if (v11) {
        v11 = 0;
        v12 = reinterpret_cast<void**>(32);
        fun_8048c54(0x8063ac0, "/tmp/grass.extensions.db.XXXXXX", 32, v64, v85, v86, v87, v88, v89, v8, v7, v6, v90, v91, v92);
        fun_8048c14(0x8063ac0, "/tmp/grass.extensions.db.XXXXXX", 32, v64, v93, v94, v95, v96);
        v24 = reinterpret_cast<void**>("w+");
        eax102 = fun_8048c74(0x8063ac0, "w+", 32, v64, v97, v98, v99, v100, v101, v8);
        v103 = eax102;
        if (v103 || (eax104 = FORCE, !!eax104)) {
            v11 = 1;
            v25 = reinterpret_cast<void**>(exit_db);
            atexit(exit_db, "w+", 32, v64, v105, v106, v107, v108);
        } else {
            eax113 = fun_8048a94(0x8063ac0, "w+", 32, v64, v109, v110, v111, v112);
            v114 = *eax113;
            eax119 = fun_8048ad4(v114, "w+", 32, v64, v115, v116, v117, v118);
            v64 = eax119;
            v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4);
            v24 = reinterpret_cast<void**>("could not create temp db '%s': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
            v25 = reinterpret_cast<void**>(0xffffffed);
            print_error(0xffffffed, "could not create temp db '%s': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n", v12, v64, v120, v121, v122, v123, v124);
        }
    }
    if (!v11) {
        addr_804b94e_13:
        eax125 = reinterpret_cast<void**>(v10 ^ g14);
        if (eax125) {
            eax125 = fun_8048d34(v25, v24, v12, v64, v126, v127, v128, v129, v130, v8, v7, v6, v131, v132, v133, v134, v135);
        }
    } else {
        v136 = 0;
        while (v12 = v33, v24 = reinterpret_cast<void**>(0x800), eax141 = nc_fgets_nb(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, 0x800, v12, v64, v126, v127, v128, v129, v137, v8, v7, v6, v138, v139, v140), !!eax141) {
            v129 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffd7f4);
            v128 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffdff4);
            v127 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffd7d0);
            v126 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffd7d4);
            v64 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffd7d8);
            v142 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4);
            eax144 = fun_8048b34(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, "%s\t%i.%i.%i\t%s\t%s", v142, v64, v126, v127, v128, v129, v143);
            if (reinterpret_cast<signed char>(eax144) <= reinterpret_cast<signed char>(0)) 
                continue;
            v145 = 1;
            eax147 = fun_8048da4(v7, reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4, v142, v64, v126, v127, v128, v129, v146, v8, v7, v6);
            if (!eax147) {
                v145 = 0;
                v136 = 1;
            }
            if (!v145) 
                continue;
            eax148 = fun_8048cf4(reinterpret_cast<int32_t>(ebp5) + 0xffffd7f4, v7, v142, v64, v126, v127, v128, v129);
            if (eax148 && (eax149 = FORCE, !eax149)) {
                v64 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4);
                v142 = v7;
                print_error(0xffffffed, "cannot uninstall extension '%s' it is needed by '%s'.\n", v142, v64, v126, v127, v128, v129, v150);
            }
            fun_8048ce4(v103, reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, v142, v64, v126, v127, v128, v129, v151, v8, v7, v6, v152, v153, v154);
        }
        if (v136) 
            goto addr_804b932_25; else 
            goto addr_804b90a_26;
    }
    return eax125;
    addr_804b932_25:
    fun_8048c44(v33, v24, v12, v64, v126, v127, v128, v129, v155, v8, v7, v6, v156, v157, v158);
    v25 = v103;
    fun_8048c44(v25, v24, v12, v64, v126, v127, v128, v129, v159, v8, v7, v6, v160, v161, v162);
    goto addr_804b94e_13;
    addr_804b90a_26:
    v64 = v8;
    v12 = v7;
    v24 = reinterpret_cast<void**>("no extension '%s' registered/installed in '%s'.\n");
    print_error(0xffffffed, "no extension '%s' registered/installed in '%s'.\n", v12, v64, v126, v127, v128, v129, v163);
    goto addr_804b932_25;
}

void fun_8048b24(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** check_dependencies(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** v8;
    void** v9;
    void** v10;
    uint32_t eax11;
    uint32_t v12;
    void** eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;
    void** v23;
    int32_t v24;
    void** v25;
    void** v26;
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
    void** v41;
    void** v42;
    void** eax43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    int32_t* eax49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    int32_t* eax63;
    int32_t v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** eax69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    int32_t* eax81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    int32_t* eax99;
    int32_t v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** eax107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** eax113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** eax127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** eax138;
    void** v139;
    void** eax140;
    void** v141;
    void** v142;
    void** v143;
    int32_t eax144;
    int32_t v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** eax154;
    void** v155;
    void** eax156;
    void** v157;
    void** v158;
    void** v159;
    int32_t eax160;
    int32_t eax161;
    int32_t eax162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = a1;
    v9 = a2;
    v10 = a3;
    eax11 = g14;
    v12 = eax11;
    eax13 = FORCE;
    if (!eax13) {
        eax22 = fun_8048c74("../depends", "r", v14, v15, v16, v17, v18, v19, v20, v21);
        v23 = eax22;
        if (v23) {
            addr_804ba35_4:
            v24 = 1;
            fun_8048aa4(reinterpret_cast<int32_t>(ebp7) + 0xfffff7e4, "%s/etc/extensions.db", v9, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v10, v9, v8, v35);
            v36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffff7e4);
            eax43 = fun_8048c74(v36, "r", v9, v25, v37, v38, v39, v40, v41, v42);
            v44 = eax43;
            if (!v44) {
                eax49 = fun_8048a94(v36, "r", v9, v25, v45, v46, v47, v48);
                if (*eax49 != 2) {
                    fun_8048c44(v44, "r", v9, v25, v50, v51, v52, v53, v54, v55, v56, v57, v58, v10, v9);
                    eax63 = fun_8048a94(v44, "r", v9, v25, v59, v60, v61, v62);
                    v64 = *eax63;
                    eax69 = fun_8048ad4(v64, "r", v9, v25, v65, v66, v67, v68);
                    v25 = eax69;
                    print_error(0xffffffef, "checking for file '%s': %s\n", reinterpret_cast<int32_t>(ebp7) + 0xfffff7e4, v25, v70, v71, v72, v73, v74);
                    goto addr_804badd_7;
                } else {
                    v24 = 0;
                    goto addr_804badd_7;
                }
            }
        } else {
            eax81 = fun_8048a94("../depends", "r", v75, v76, v77, v78, v79, v80);
            if (*eax81 != 2) {
                fun_8048c44(v23, "r", v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v10, v9);
                eax99 = fun_8048a94(v23, "r", v93, v94, v95, v96, v97, v98);
                v100 = *eax99;
                eax107 = fun_8048ad4(v100, "r", v101, v102, v103, v104, v105, v106);
                v25 = eax107;
                print_error(0xffffffef, "checking for file '%s': %s\n", reinterpret_cast<int32_t>(ebp7) + 0xfffff7e4, v25, v108, v109, v110, v111, v112);
                goto addr_804ba35_4;
            } else {
                eax113 = stderr;
                v114 = v8;
                v115 = reinterpret_cast<void**>("\n%s/depends ENOENT\n");
                v116 = eax113;
                fun_8048ce4(v116, "\n%s/depends ENOENT\n", v114, v117, v118, v119, v120, v121, v122, v123, v124, v125, v126, v10, v9);
            }
        }
    }
    addr_804be67_12:
    eax127 = reinterpret_cast<void**>(v12 ^ g14);
    if (eax127) {
        eax127 = fun_8048d34(v116, v115, v114, v25, v128, v129, 0, 0, 0, v130, v131, v132, v133, v10, v9, v8, 0);
    }
    return eax127;
    addr_804badd_7:
    while (v114 = v23, v115 = reinterpret_cast<void**>(0x800), eax138 = nc_fgets_nb(reinterpret_cast<int32_t>(ebp7) + 0xffffefe4, 0x800, v114, v25, v128, v129, 0, 0, 0, v134, v135, v136, v137, v10, v9), !!eax138) {
        v129 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7b8);
        v128 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7bc);
        v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7c0);
        v139 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7e4);
        eax140 = fun_8048b34(reinterpret_cast<int32_t>(ebp7) + 0xffffefe4, "%s\t%i.%i.%i", v139, v25, v128, v129, 0, 0, 0);
        if (reinterpret_cast<signed char>(eax140) <= reinterpret_cast<signed char>(0)) 
            continue;
        eax144 = fun_8048da4(reinterpret_cast<int32_t>(ebp7) + 0xffffd7e4, "GRASS", v139, v25, v128, v129, 0, 0, 0, v141, v142, v143);
        if (eax144) {
            if (!v24) 
                continue;
            v145 = 0;
            fun_8048b24(v44, "GRASS", v139, v25, v128, v129, 0, 0, 0, v146, v147, v148, v149, v10, v9);
            while (eax154 = nc_fgets_nb(reinterpret_cast<int32_t>(ebp7) + 0xffffe7e4, 0x800, v44, v25, v128, v129, 0, 0, 0, v150, v151, v152, v153, v10, v9), !!eax154) {
                v129 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7c4);
                v128 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7c8);
                v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7cc);
                v155 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffdfe4);
                eax156 = fun_8048b34(reinterpret_cast<int32_t>(ebp7) + 0xffffe7e4, "%s\t%i.%i.%i", v155, v25, v128, v129, 0, 0, 0);
                if (reinterpret_cast<signed char>(eax156) <= reinterpret_cast<signed char>(0)) 
                    continue;
                eax160 = fun_8048da4(reinterpret_cast<int32_t>(ebp7) + 0xffffdfe4, reinterpret_cast<int32_t>(ebp7) + 0xffffd7e4, v155, v25, v128, v129, 0, 0, 0, v157, v158, v159);
                if (eax160) 
                    continue;
                v129 = reinterpret_cast<void**>(0);
                v128 = reinterpret_cast<void**>(0);
                v25 = reinterpret_cast<void**>(0);
                eax161 = vercmp(0, 0, 0, 0, 0, 0, 0, 0, 0);
                if (eax161 < 0) {
                    v129 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffd7e4);
                    v128 = reinterpret_cast<void**>(0);
                    v25 = reinterpret_cast<void**>(0);
                    print_error(0xffffffee, "installed version %i.%i.%i of required extension '%s' is too low.\n \t\t\t\t\t\t\t\t\t\t\t\t\tRequired version is %i.%i.%i\n", 0, 0, 0, v129, 0, 0, 0);
                }
                v145 = 1;
            }
            if (v145) 
                continue;
            v25 = v9;
            print_error(0xffffffee, "required extension '%s' not found in '%s'.\n", reinterpret_cast<int32_t>(ebp7) + 0xffffd7e4, v25, v128, v129, 0, 0, 0);
        } else {
            fun_8048b34(v10, "%i.%i.%i", reinterpret_cast<int32_t>(ebp7) + 0xffffd7cc, reinterpret_cast<int32_t>(ebp7) + 0xffffd7c8, reinterpret_cast<int32_t>(ebp7) + 0xffffd7c4, v129, 0, 0, 0);
            v129 = reinterpret_cast<void**>(0);
            v128 = reinterpret_cast<void**>(0);
            v25 = reinterpret_cast<void**>(0);
            eax162 = vercmp(0, 0, 0, 0, 0, 0, 0, 0, 0);
            if (eax162 < 0) {
                v129 = reinterpret_cast<void**>(0);
                v128 = reinterpret_cast<void**>(0);
                v25 = reinterpret_cast<void**>(0);
                print_error(0xffffffee, "installed version (%s) of GRASS is too low. Required version is %i.%i.%i\n", v10, 0, 0, 0, 0, 0, 0);
            }
        }
    }
    if (v24) {
        fun_8048c44(v44, 0x800, v114, v25, v128, v129, 0, 0, 0, v163, v164, v165, v166, v10, v9);
    }
    v116 = v23;
    fun_8048c44(v116, 0x800, v114, v25, v128, v129, 0, 0, 0, v167, v168, v169, v170, v10, v9);
    goto addr_804be67_12;
}

int32_t rewind = 0x8048b2a;

void fun_8048b24(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto rewind;
}

void** fun_8048bc4(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

int32_t is_submenu(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** v10;
    void** ebx11;
    void** ebp12;
    void** eax13;
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
    int32_t eax26;

    eax13 = fun_8048b54(a1, 91, v8, v9, v10, ebx11, ebp12, __return_address(), a1, a2, a3, a4, a5, a6, a7);
    if (eax13) {
        eax17 = fun_8048bc4(a1, 93, v14, v15, v16, ebx11, ebp12, __return_address(), a1, a2, a3, a4, a5, a6, a7);
        if (eax17) {
            eax21 = fun_8048b54(a1, 91, v18, v19, v20, ebx11, ebp12, __return_address(), a1, a2, a3, a4, a5, a6, a7);
            eax25 = fun_8048bc4(a1, 93, v22, v23, v24, ebx11, ebp12, __return_address(), a1, a2, a3, a4, a5, a6, a7);
            if (reinterpret_cast<unsigned char>(eax21) <= reinterpret_cast<unsigned char>(eax25)) {
                eax26 = 1;
            } else {
                eax26 = 0;
            }
        } else {
            eax26 = 0;
        }
    } else {
        eax26 = 0;
    }
    return eax26;
}

void** insert_str(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void* ebp8;
    void** v9;
    void** v10;
    uint32_t eax11;
    uint32_t v12;
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
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    struct s1* eax62;
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
    void** eax73;
    void** v74;
    void** v75;
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
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    struct s1* eax113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** eax121;
    void** eax122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    struct s1* eax148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** eax156;
    void** eax157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** eax170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
    void** v179;
    struct s1* eax180;
    void** v181;
    void** v182;
    void** v183;
    void** v184;
    void** v185;
    void** v186;
    void** v187;
    void** v188;
    void** eax189;
    void** eax190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    uint32_t edx201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v9 = a1;
    v10 = a3;
    eax11 = g14;
    v12 = eax11;
    v13 = reinterpret_cast<void**>(0);
    while (*reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v13) << 2) + reinterpret_cast<unsigned char>(v10))) {
        ++v13;
    }
    if (reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(v13)) {
        v14 = a2;
        print_error(0xffffffeb, "insert: invalid line number %i.\n", v14, v15, v16, v17, v10, v9, v18);
    }
    if (a2 != v13) {
        v19 = *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v13 - 1) << 2) + reinterpret_cast<unsigned char>(v10));
        fun_8048c84(reinterpret_cast<int32_t>(ebp8) + 0xffffe7f4, v19, v14, v20, v21, v22, v10, v9, v23, v24, v13, v25, v26, v27, v28, v29, v30);
        v31 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(a2) << 2) + reinterpret_cast<unsigned char>(v10));
        fun_8048c84(reinterpret_cast<int32_t>(ebp8) + 0xffffeff4, v31, v14, v32, v33, v34, v10, v9, v35, v36, v13, v37, v38, v39, v40, v41, v42);
        v43 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(a2) << 2) + reinterpret_cast<unsigned char>(v10));
        fun_8048bf4(v43, v31, v14, v44, v45, v46, v10, v9, v47, v48, v13, v49, v50, v51, v52);
        eax62 = fun_8048c64(v9, v31, v14, v53, v54, v55, v10, v9, v56, v57, v13, v58, v59, v60, v61);
        eax72 = fun_8048d24(&eax62->f1, v31, v14, v63, v64, v65, v10, v9, v66, v67, v13, v68, v69, v70, v71);
        *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(a2) << 2) + reinterpret_cast<unsigned char>(v10)) = eax72;
        eax73 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(a2) << 2) + reinterpret_cast<unsigned char>(v10));
        v74 = v9;
        fun_8048c84(eax73, v74, v14, v75, v76, v77, v10, v9, v78, v79, v13, v80, v81, v82, v83, v84, v85);
        v86 = a2;
        while (reinterpret_cast<signed char>(v13 - 1) > reinterpret_cast<signed char>(v86)) {
            v87 = *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v86 + 1) << 2) + reinterpret_cast<unsigned char>(v10));
            fun_8048c84(reinterpret_cast<int32_t>(ebp8) + 0xfffff7f4, v87, v14, v88, v89, v90, v10, v9, v91, v86, v13, v92, v93, v94, v95, v96, v97);
            v98 = *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v86 + 1) << 2) + reinterpret_cast<unsigned char>(v10));
            fun_8048bf4(v98, v87, v14, v99, v100, v101, v10, v9, v91, v86, v13, v102, v103, v104, v105);
            eax113 = fun_8048c64(reinterpret_cast<int32_t>(ebp8) + 0xffffeff4, v87, v14, v106, v107, v108, v10, v9, v91, v86, v13, v109, v110, v111, v112);
            v91 = reinterpret_cast<void**>(&eax113->f1);
            eax121 = fun_8048d24(v91, v87, v14, v114, v115, v116, v10, v9, v91, v86, v13, v117, v118, v119, v120);
            *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v86 + 1) << 2) + reinterpret_cast<unsigned char>(v10)) = eax121;
            eax122 = *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v86 + 1) << 2) + reinterpret_cast<unsigned char>(v10));
            fun_8048c84(eax122, reinterpret_cast<int32_t>(ebp8) + 0xffffeff4, v14, v123, v124, v125, v10, v9, v91, v86, v13, v126, v127, v128, v129, v130, v131);
            v74 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffff7f4);
            fun_8048c84(reinterpret_cast<int32_t>(ebp8) + 0xffffeff4, v74, v14, v132, v133, v134, v10, v9, v91, v86, v13, v135, v136, v137, v138, v139, v140);
            ++v86;
        }
        eax148 = fun_8048c64(reinterpret_cast<int32_t>(ebp8) + 0xffffe7f4, v74, v14, v141, v142, v143, v10, v9, v91, v86, v13, v144, v145, v146, v147);
        eax156 = fun_8048d24(&eax148->f1, v74, v14, v149, v150, v151, v10, v9, v91, v86, v13, v152, v153, v154, v155);
        *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v13) << 2) + reinterpret_cast<unsigned char>(v10)) = eax156;
        eax157 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v13) << 2) + reinterpret_cast<unsigned char>(v10));
        v158 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xffffe7f4);
        v159 = eax157;
        fun_8048c84(v159, v158, v14, v160, v161, v162, v10, v9, v91, v86, v13, v163, v164, v165, v166, v167, v168);
        v169 = v13 + 2;
        *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v169 - 1) << 2) + reinterpret_cast<unsigned char>(v10)) = reinterpret_cast<void**>(0);
        eax170 = v169;
    } else {
        eax180 = fun_8048c64(v9, "insert: invalid line number %i.\n", v14, v171, v172, v173, v10, v9, v174, v175, v13, v176, v177, v178, v179);
        v91 = reinterpret_cast<void**>(&eax180->f1);
        eax189 = fun_8048d24(v91, "insert: invalid line number %i.\n", v14, v181, v182, v183, v10, v9, v91, v184, v13, v185, v186, v187, v188);
        *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v13) << 2) + reinterpret_cast<unsigned char>(v10)) = eax189;
        eax190 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v13) << 2) + reinterpret_cast<unsigned char>(v10));
        v158 = v9;
        v159 = eax190;
        fun_8048c84(v159, v158, v14, v191, v192, v193, v10, v9, v91, v194, v13, v195, v196, v197, v198, v199, v200);
        v169 = v13 + 2;
        *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v169 - 1) << 2) + reinterpret_cast<unsigned char>(v10)) = reinterpret_cast<void**>(0);
        eax170 = v169;
    }
    edx201 = v12 ^ g14;
    if (edx201) {
        eax170 = fun_8048d34(v159, v158, v14, v202, v203, v204, v10, v9, v91, v86, v169, v205, v206, v207, v208, v209, v210);
    }
    return eax170;
}

void** new_item(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void* ebp16;
    void** v17;
    void** v18;
    void** v19;
    uint32_t eax20;
    uint32_t v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
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
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** eax52;
    void** v53;
    void** v54;
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
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** eax73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    int32_t eax81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    int32_t eax89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    uint32_t edx109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;

    ebp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v17 = a1;
    v18 = a2;
    v19 = a3;
    eax20 = g14;
    v21 = eax20;
    chop(v17, v22, v23, v24);
    v25 = reinterpret_cast<void**>(";");
    eax32 = fun_8048d54(v17, ";", v26, v27, v28, v29, v30, v31);
    v33 = eax32;
    if (v33) {
        fun_8048c84(reinterpret_cast<int32_t>(ebp16) + 0xfffff7f4, v33, v34, v35, v36, v37, v38, v39, v40, v19, v18, v17, v41, v42, v33, v43, v44);
        v45 = reinterpret_cast<void**>(0);
        while (v33) {
            eax52 = fun_8048d54(0, ";", v46, v47, v48, v49, v50, v51);
            v33 = eax52;
            if (v33) {
                fun_8048c84(reinterpret_cast<int32_t>(ebp16) + 0xffffeff4, v33, v53, v54, v55, v56, v57, v58, v59, v19, v18, v17, v60, v45, v33, v61, v62);
            }
            ++v45;
        }
        if (reinterpret_cast<signed char>(v45) > reinterpret_cast<signed char>(2)) 
            goto addr_804c50d_8;
    } else {
        v63 = reinterpret_cast<void**>("invalid token in 'entries-gisman'.\n");
        print_warning("invalid token in 'entries-gisman'.\n", ";", v64, v65, v66, v67, v68, v69, v70, v19, v18, v17, v71, v72, v33);
        eax73 = reinterpret_cast<void**>(0xffffffff);
        goto addr_804c5dd_10;
    }
    eax81 = fun_8048da4(reinterpret_cast<int32_t>(ebp16) + 0xfffff7f4, "-", v74, v75, v76, v77, v78, v79, v80, v19, v18, v17);
    if (eax81 || (eax89 = fun_8048da4(reinterpret_cast<int32_t>(ebp16) + 0xfffff7f4, "-", v82, v83, v84, v85, v86, v87, v88, v19, v18, v17), !!eax89)) {
        v90 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp16) + 0xffffeff4);
        v91 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp16) + 0xffffeff4);
        fun_8048aa4(reinterpret_cast<int32_t>(ebp16) + 0xffffe7f4, " \t\t\t {command \"%s\" {} \"%s\" {} -command {%s }}\n", reinterpret_cast<int32_t>(ebp16) + 0xfffff7f4, v91, v90, v92, v93, v94, v95, v19, v18, v17, v96, v45, v33, v97, v98);
    } else {
        fun_8048c54(reinterpret_cast<int32_t>(ebp16) + 0xffffe7f4, " \t\t\t {separator}\n", 18, v99, v100, v101, v102, v103, v104, v19, v18, v17, v105, v45, v33);
    }
    v106 = v19;
    v25 = a4;
    v63 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp16) + 0xffffe7f4);
    insert_str(v63, v25, v106, v91, v90, v107, v108);
    eax73 = a4 + 1;
    addr_804c5dd_10:
    edx109 = v21 ^ g14;
    if (edx109) {
        eax73 = fun_8048d34(v63, v25, v106, v91, v90, v110, v111, v112, v113, v19, v18, v17, v114, v45, v33, v115, v116);
    }
    return eax73;
    addr_804c50d_8:
    v25 = v45;
    v63 = reinterpret_cast<void**>("invalid number of tokens (%i) in 'entries-gisman'.\n");
    print_warning("invalid number of tokens (%i) in 'entries-gisman'.\n", v25, v117, v118, v119, v120, v121, v122, v123, v19, v18, v17, v124, v45, v33);
    eax73 = reinterpret_cast<void**>(0xffffffff);
    goto addr_804c5dd_10;
}

void** VERBOSE = reinterpret_cast<void**>(0);

void** fun_8048b74(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** check_ext_menu(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void fun_8048b94(void* a1, void* a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** new_submenu(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** register_entries_gisman(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** v8;
    uint32_t eax9;
    uint32_t v10;
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
    void** v37;
    void** v38;
    void** v39;
    void** v40;
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
    void** eax55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
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
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** eax80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    int32_t* eax86;
    int32_t v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** eax92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    int32_t* eax102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    int32_t* eax118;
    int32_t v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** eax124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    int32_t* eax135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    int32_t* eax153;
    int32_t v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** eax160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** eax170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
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
    void* v191;
    int32_t eax192;
    void* v193;
    int32_t eax194;
    void** eax195;
    void** v196;
    void** v197;
    void* v198;
    void** eax199;
    void** v200;
    void* v201;
    int32_t v202;
    int32_t eax203;
    struct s1* eax204;
    void** eax205;
    void** eax206;
    void** v207;
    void** v208;
    int32_t v209;
    void** v210;
    void** v211;
    void** eax212;
    void** v213;
    void** eax214;
    void** eax215;
    void** eax216;
    void** eax217;
    void** eax218;
    int32_t v219;
    void* v220;
    int32_t eax221;
    void* v222;
    void** v223;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = a1;
    eax9 = g14;
    v10 = eax9;
    v11 = reinterpret_cast<void**>(18);
    fun_8048c54(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4, "../entries-gisman", 18, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23);
    v24 = reinterpret_cast<void**>("r");
    v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4);
    eax33 = fun_8048c74(v25, "r", 18, v26, v27, v28, v29, v30, v31, v32);
    v34 = eax33;
    if (v34) {
        addr_804c6ab_2:
        v11 = a2;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4, "%s/etc/dm/menu.tcl", v11, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48);
        v24 = reinterpret_cast<void**>("r");
        v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4);
        eax55 = fun_8048c74(v25, "r", v11, v35, v49, v50, v51, v52, v53, v54);
        v56 = eax55;
        if (v56) {
            addr_804c741_3:
            v57 = reinterpret_cast<void**>(32);
            fun_8048c54(0x80642c0, "/tmp/grass.extensions.db.XXXXXX", 32, v35, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68);
            fun_8048c14(0x80642c0, "/tmp/grass.extensions.db.XXXXXX", 32, v35, v69, v70, v71, v72);
            v73 = reinterpret_cast<void**>("w+");
            eax80 = fun_8048c74(0x80642c0, "w+", 32, v35, v74, v75, v76, v77, v78, v79);
            v81 = eax80;
            if (!v81) {
                eax86 = fun_8048a94(0x80642c0, "w+", 32, v35, v82, v83, v84, v85);
                v87 = *eax86;
                eax92 = fun_8048ad4(v87, "w+", 32, v35, v88, v89, v90, v91);
                v35 = eax92;
                v57 = reinterpret_cast<void**>(0x80642c0);
                v73 = reinterpret_cast<void**>("could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
                print_error(0xffffffeb, "could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n", 0x80642c0, v35, v93, v94, v95, v96, v97);
            }
        } else {
            eax102 = fun_8048a94(v25, "r", v11, v35, v98, v99, v100, v101);
            if (*eax102 == 2) {
                goto addr_804cd52_7;
            } else {
                fun_8048c44(v56, "r", v11, v35, v103, v104, v105, v106, v107, v108, v109, v110, v111, v112, v113);
                eax118 = fun_8048a94(v56, "r", v11, v35, v114, v115, v116, v117);
                v119 = *eax118;
                eax124 = fun_8048ad4(v119, "r", v11, v35, v120, v121, v122, v123);
                v35 = eax124;
                print_error(0xffffffeb, "checking for file '%s': %s\n", reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4, v35, v125, v126, v127, v128, v129);
                goto addr_804c741_3;
            }
        }
    } else {
        eax135 = fun_8048a94(v25, "r", 18, v130, v131, v132, v133, v134);
        if (*eax135 == 2) {
            goto addr_804cd52_7;
        } else {
            fun_8048c44(v34, "r", 18, v136, v137, v138, v139, v140, v141, v142, v143, v144, v145, v146, v147);
            eax153 = fun_8048a94(v34, "r", 18, v148, v149, v150, v151, v152);
            v154 = *eax153;
            eax160 = fun_8048ad4(v154, "r", 18, v155, v156, v157, v158, v159);
            v35 = eax160;
            print_error(0xffffffeb, "checking for file '%s': %s\n", reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4, v35, v161, v162, v163, v164, v165);
            goto addr_804c6ab_2;
        }
    }
    atexit(exit_db, v73, v57, v35, v166, v167, v168, v169);
    eax170 = VERBOSE;
    if (!eax170) {
        v171 = a2;
        v172 = a2;
        v173 = reinterpret_cast<void**>(0x80672c0);
        v174 = a2;
        v175 = a2;
        v176 = reinterpret_cast<void**>(0x80672c0);
        v177 = v8;
        v178 = a2;
        v35 = reinterpret_cast<void**>(0x80672c0);
        v179 = a2;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, "mkdir %s/etc/dm/gem-entries &> %s ; cp -f ../entries-gisman %s/etc/dm/gem-entries/%s &> %s ; \t\t\t\t\tcp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;", v179, 0x80672c0, v178, v177, 0x80672c0, v175, v174, 0x80672c0, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0, v180, v181);
    } else {
        v173 = a2;
        v174 = a2;
        v175 = reinterpret_cast<void**>(0x80642c0);
        v176 = a2;
        v177 = a2;
        v178 = v8;
        v35 = a2;
        v179 = a2;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, "mkdir --verbose %s/etc/dm/gem-entries ; cp -vf ../entries-gisman %s/etc/dm/gem-entries/%s ; \t\t\t\t\tcp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;", v179, v35, v178, v177, v176, 0x80642c0, v174, v173, v182, v183, v184, v185, v186, v187, v188);
    }
    fun_8048c84(0x80682e0, reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, v179, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0, v189, v190);
    v191 = reinterpret_cast<void*>(0);
    while (v11 = v34, v24 = reinterpret_cast<void**>(0x800), v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4), eax192 = fun_8048ba4(v25, 0x800, v11, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0), !!eax192) {
        v191 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v191) + 1);
    }
    if (v191) {
        fun_8048b24(v34, 0x800, v11, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
        v193 = reinterpret_cast<void*>(0);
        while (v11 = v56, v24 = reinterpret_cast<void**>(0x800), v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4), eax194 = fun_8048ba4(v25, 0x800, v11, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0), !!eax194) {
            v193 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v193) + 1);
        }
        if (!v193) 
            goto addr_804cd51_24; else 
            goto addr_804c976_25;
    }
    addr_804cd52_7:
    eax195 = reinterpret_cast<void**>(v10 ^ g14);
    if (eax195) {
        eax195 = fun_8048d34(v25, v24, v11, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0, v196, v197);
    }
    return eax195;
    addr_804cd51_24:
    goto addr_804cd52_7;
    addr_804c976_25:
    v198 = v193;
    fun_8048b24(v56, 0x800, v11, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
    eax199 = fun_8048b74(reinterpret_cast<int32_t>(v191) + reinterpret_cast<int32_t>(v191) + reinterpret_cast<int32_t>(v193) + 6, 4, v11, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
    v200 = eax199;
    v201 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v191) + reinterpret_cast<int32_t>(v191) + reinterpret_cast<int32_t>(v193) + 6 > reinterpret_cast<int32_t>(v201)) {
        *reinterpret_cast<void***>((reinterpret_cast<int32_t>(v201) << 2) + reinterpret_cast<unsigned char>(v200)) = reinterpret_cast<void**>(0);
        v201 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v201) + 1);
    }
    v202 = 0;
    while (eax203 = fun_8048ba4(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, 0x800, v56, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0), !!eax203) {
        eax204 = fun_8048c64(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, 0x800, v56, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
        eax205 = fun_8048d24(&eax204->f1, 0x800, v56, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
        *reinterpret_cast<void***>((v202 << 2) + reinterpret_cast<unsigned char>(v200)) = eax205;
        eax206 = *reinterpret_cast<void***>((v202 << 2) + reinterpret_cast<unsigned char>(v200));
        fun_8048c84(eax206, reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, v56, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0, v207, v208);
        ++v202;
    }
    check_ext_menu(v200, 0x800, v56, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
    v209 = 1;
    while (v210 = v34, v211 = reinterpret_cast<void**>(0x800), eax212 = nc_fgets_nb(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, 0x800, v210, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0), !!eax212) {
        if (v209 != 1) {
            v35 = v213;
            v210 = v200;
            v211 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffe7f4);
            eax214 = new_item(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, v211, v210, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
            v213 = eax214;
            if (reinterpret_cast<signed char>(v213) < reinterpret_cast<signed char>(0)) 
                goto addr_804cbae_37;
            ++v209;
        } else {
            eax215 = fun_8048bc4(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, 93, v210, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
            eax216 = fun_8048b54(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, 91, v210, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
            eax217 = fun_8048b54(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, 91, v210, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
            fun_8048b94(reinterpret_cast<int32_t>(ebp7) - 0x180c, eax217 + 1, reinterpret_cast<unsigned char>(eax215) - reinterpret_cast<unsigned char>(eax216), v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp7) + (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax215) - reinterpret_cast<unsigned char>(eax216)) - 1) + 0xffffe7f4) = 0;
            v210 = v200;
            v211 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4);
            eax218 = new_submenu(v8, v211, v210, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
            v213 = eax218;
            if (reinterpret_cast<signed char>(v213) < reinterpret_cast<signed char>(0)) 
                goto addr_804cb59_40;
            ++v209;
        }
    }
    addr_804cbeb_42:
    v219 = 0;
    while (*reinterpret_cast<void***>((v219 << 2) + reinterpret_cast<unsigned char>(v200))) {
        v211 = *reinterpret_cast<void***>((v219 << 2) + reinterpret_cast<unsigned char>(v200));
        fun_8048ce4(v81, v211, v210, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
        ++v219;
    }
    fun_8048c04(v81, v211, v210, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
    fun_8048b24(v81, v211, v210, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
    v220 = reinterpret_cast<void*>(0);
    while (v11 = v81, v24 = reinterpret_cast<void**>(0x800), eax221 = fun_8048ba4(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, 0x800, v11, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0), !!eax221) {
        v220 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v220) + 1);
    }
    if (!v220 || reinterpret_cast<int32_t>(v220) < reinterpret_cast<int32_t>(v198)) {
        print_warning("file truncation detected. Retaining orginal file 'menu.tcl'.\n", 0x800, v11, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
        v11 = reinterpret_cast<void**>(1);
        v24 = reinterpret_cast<void**>(0x8055722);
        fun_8048c54(0x80682e0, 0x8055722, 1, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
    }
    fun_8048c44(v56, v24, v11, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
    fun_8048c44(v34, v24, v11, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
    fun_8048c44(v81, v24, v11, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
    v222 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v191) + reinterpret_cast<int32_t>(v191) + reinterpret_cast<int32_t>(v193) + 6 > reinterpret_cast<int32_t>(v222)) {
        v223 = *reinterpret_cast<void***>((reinterpret_cast<int32_t>(v222) << 2) + reinterpret_cast<unsigned char>(v200));
        fun_8048bf4(v223, v24, v11, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
        v222 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v222) + 1);
    }
    v25 = v200;
    fun_8048bf4(v25, v24, v11, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
    goto addr_804cd52_7;
    addr_804cbae_37:
    print_warning("error creating GIS Manager menu entries.\n", v211, v210, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
    goto addr_804cbeb_42;
    addr_804cb59_40:
    print_warning("no GIS Manager menu entries created.\n", v211, v210, v35, v178, v177, v176, v175, v174, v173, 0x80642c0, v172, 0x80672c0, v171, 0x80672c0);
    goto addr_804cbeb_42;
}

int32_t calloc = 0x8048b7a;

void** fun_8048b74(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto calloc;
}

void** check_ext_menu(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** ebp23;
    void** eax24;
    void** v25;
    void** eax26;
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
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** eax48;
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
    void** v59;
    void** v60;
    void** v61;
    void** v62;

    eax24 = find_pos("\"&Xtns\" all options 1", a1, 0, v16, v17, v18, v19, v20, v21, v22, ebp23);
    v25 = eax24;
    if (!reinterpret_cast<int1_t>(v25 == 0xffffffff)) {
        addr_804c004_2:
        eax26 = v25;
    } else {
        eax33 = find_pos("\"&Help\" all options", a1, 0, v27, v28, v29, v30, v25, v31, v32, ebp23);
        if (!reinterpret_cast<int1_t>(eax33 == 0xffffffff)) {
            insert_str(" \"&Xtns\" all options 1 {\n", eax33, a1, v34, v35, v36, v37);
            v25 = eax33 + 1;
            insert_str(" }\n", v25, a1, v38, v39, v40, v41);
            goto addr_804c004_2;
        } else {
            eax48 = find_pos("}]", a1, 0, v42, v43, v44, v45, eax33, v46, v47, ebp23);
            if (reinterpret_cast<int1_t>(eax48 == 0xffffffff)) {
                print_error(0xffffffeb, "could not parse 'menu.tcl'.\n", 0, v49, v50, v51, v52, eax48, v53);
            }
            insert_str(" \"&Xtns\" all options 1 {\n", eax48, a1, v54, v55, v56, v57);
            v58 = eax48 + 1;
            insert_str(" }\n", v58, a1, v59, v60, v61, v62);
            eax26 = v58;
        }
    }
    return eax26;
}

int32_t strrchr = 0x8048bca;

void** fun_8048bc4(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto strrchr;
}

int32_t strncpy = 0x8048b9a;

void fun_8048b94(void* a1, void* a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto strncpy;
}

void** new_submenu(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void* ebp16;
    void** v17;
    void** v18;
    void** v19;
    uint32_t eax20;
    uint32_t v21;
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
    void** eax36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** eax43;
    void** v44;
    void** v45;
    int32_t eax46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** eax56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** eax66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** eax76;
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
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** eax99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** eax107;
    void** v108;
    void** eax109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** eax118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** eax125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    int32_t eax138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** eax144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** eax154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
    void** eax179;
    void** v180;
    void** v181;
    void** v182;
    void** v183;
    void** v184;
    void** v185;
    void** v186;
    uint32_t edx187;
    void** v188;
    void** v189;
    void** v190;
    void** v191;

    ebp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v17 = a1;
    v18 = a2;
    v19 = a3;
    eax20 = g14;
    v21 = eax20;
    eax27 = find_pos("\"&Xtns\" all options", v19, 0, v22, v23, v19, v18, v17, v24, v25, v26);
    v28 = eax27;
    v29 = v28 + 1;
    v30 = v19;
    eax36 = find_pos("\" all options", v30, v29, v31, v32, v19, v18, v17, v33, v34, v35);
    v37 = eax36 - 1;
    if (reinterpret_cast<int1_t>(v37 == 0xffffffff)) {
        v29 = reinterpret_cast<void**>(0);
        v30 = v19;
        eax43 = find_pos("}]", v30, 0, v38, v39, v19, v18, v17, v40, v41, v42);
        v37 = eax43;
    }
    eax46 = is_submenu(v18, v30, v29, v44, v45, v19, v18);
    if (eax46) {
        eax56 = fun_8048bc4(v18, 93, v29, v47, v48, v19, v18, v17, v49, v50, v51, v52, v53, v54, v55);
        eax66 = fun_8048b54(v18, 91, v29, v57, v58, v19, v18, v17, v59, v60, v61, v62, v63, v64, v65);
        v67 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax56) - reinterpret_cast<unsigned char>(eax66));
        eax76 = fun_8048b54(v18, 91, v29, v68, v69, v19, v18, v17, v70, v71, v72, v73, v67, v74, v75);
        fun_8048b94(reinterpret_cast<int32_t>(ebp16) - 0x80c, eax76 + 1, v67, v77, v78, v19, v18, v17, v79, v80, v81, v82, v67, v83, v84);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp16) + reinterpret_cast<uint32_t>(v67 - 1) + 0xfffff7f4) = 0;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp16) + 0xffffe7f4, "{cascad \"%s\"", reinterpret_cast<int32_t>(ebp16) + 0xfffff7f4, v85, v86, v19, v18, v17, v87, v88, v89, v90, v67, v91, v92, v37, v93);
        v29 = v28;
        eax99 = find_pos(reinterpret_cast<int32_t>(ebp16) + 0xffffe7f4, v19, v29, v94, v95, v19, v18, v17, v96, v97, v98);
        if (eax99 == 0xffffffff || reinterpret_cast<signed char>(eax99) >= reinterpret_cast<signed char>(v37)) {
            v100 = v28 + 1;
            v101 = v28;
            eax107 = find_pos("{cascad ", v19, v101, v102, v103, v19, v18, v17, v104, v105, v106);
            v108 = eax107;
            while (v108 != 0xffffffff && reinterpret_cast<signed char>(v108) < reinterpret_cast<signed char>(v37)) {
                eax109 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v108) << 2) + reinterpret_cast<unsigned char>(v19));
                eax118 = fun_8048b54(eax109, 34, v101, v110, v111, v19, v18, v17, v112, v113, v114, v115, v67, v116, v117);
                v117 = eax118;
                eax125 = fun_8048b54(v117 + 1, 34, v101, v119, v120, v19, v18, v17, v121, v122, v123, v124, v67, v116, v117);
                v116 = eax125;
                v67 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v116) - reinterpret_cast<unsigned char>(v117));
                fun_8048b94(reinterpret_cast<int32_t>(ebp16) - 0x100c, v117 + 1, v67, v126, v127, v19, v18, v17, v128, v129, v130, v131, v67, v116, v117);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp16) + reinterpret_cast<uint32_t>(v67 - 1) + 0xffffeff4) = 0;
                eax138 = fun_8048da4(reinterpret_cast<int32_t>(ebp16) + 0xfffff7f4, reinterpret_cast<int32_t>(ebp16) + 0xffffeff4, v67, v132, v133, v19, v18, v17, v134, v135, v136, v137);
                if (eax138 < 0) 
                    goto addr_804c2c8_8;
                ++v28;
                v101 = v28;
                eax144 = find_pos("{cascad ", v19, v101, v139, v140, v19, v18, v17, v141, v142, v143);
                v108 = eax144;
            }
        } else {
            v30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp16) + 0xfffff7f4);
            v145 = reinterpret_cast<void**>("submenu '%s' exists in GIS Manager's Xtns menu.\n");
            print_warning("submenu '%s' exists in GIS Manager's Xtns menu.\n", v30, v29, v146, v147, v19, v18, v17, v148, v149, v150, v151, v67, v152, v153);
            eax154 = reinterpret_cast<void**>(0xffffffff);
            goto addr_804c401_11;
        }
    } else {
        v145 = reinterpret_cast<void**>("first line not a submenu specifier in 'entries-gisman'.\n");
        print_warning("first line not a submenu specifier in 'entries-gisman'.\n", v30, v29, v155, v156, v19, v18, v17, v157, v158, v159, v160, v161, v162, v163);
        eax154 = reinterpret_cast<void**>(0xffffffff);
        goto addr_804c401_11;
    }
    addr_804c31e_13:
    fun_8048aa4(reinterpret_cast<int32_t>(ebp16) + 0xfffff7f4, " \t\t\t%s {} \"\" 1 {\n", reinterpret_cast<int32_t>(ebp16) + 0xffffe7f4, v164, v165, v19, v18, v17, v166, v167, v168, v169, v67, v116, v117, v37, v100);
    insert_str(reinterpret_cast<int32_t>(ebp16) + 0xfffff7f4, v100, v19, v170, v171, v19, v18);
    insert_str(" \t\t\t}}\n", v100 + 1, v19, v172, v173, v19, v18);
    eax179 = find_pos("}]", v19, 0, v174, v175, v19, v18, v17, v176, v177, v178);
    v180 = eax179;
    v181 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp16) + 0xffffe7f4);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp16) + 0xfffff7f4, "#(DO_NOT_REMOVE_THIS_COMMENT) <%s> %s {} \"\" 1 {\n", v17, v181, v182, v19, v18, v17, v183, v184, v185, v180, v67, v116, v117, v37, v100);
    v29 = v19;
    v30 = v180 + 1;
    v145 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp16) + 0xfffff7f4);
    insert_str(v145, v30, v29, v181, v186, v19, v18);
    eax154 = v100 + 1;
    addr_804c401_11:
    edx187 = v21 ^ g14;
    if (edx187) {
        eax154 = fun_8048d34(v145, v30, v29, v181, v188, v19, v18, v17, v189, v190, v191, v180, v67, v116, v117, v37, v100);
    }
    return eax154;
    addr_804c2c8_8:
    v100 = v108;
    goto addr_804c31e_13;
}

void** register_entries_gisman2(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    uint32_t eax8;
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
    void** v26;
    void** v27;
    void** v28;
    void** eax29;
    void** eax30;
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
    int32_t* eax56;
    void** v57;
    void** v58;
    void** v59;
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
    int32_t* eax71;
    int32_t v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** eax78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** eax93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax8 = g14;
    v9 = reinterpret_cast<void**>(19);
    fun_8048c54(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4, "../entries-gisman2", 19, v10, v11, v12, v13, v14, v15, v16, a2, a1, v17, v18, v19);
    v20 = reinterpret_cast<void**>("r");
    v21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4);
    eax29 = fun_8048c74(v21, "r", 19, v22, v23, v24, v25, v26, v27, v28);
    if (eax29) {
        addr_804ce26_2:
        eax30 = VERBOSE;
        if (!eax30) {
            v31 = a1;
            v32 = a2;
            v9 = a2;
            fun_8048aa4(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, "mkdir -p %s/etc/gm/Xtns ; cp -f ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; ", v9, v32, v31, v33, v34, v35, v36, v37, a2, a1, v38, v39, eax29, v40, v41);
        } else {
            v31 = a1;
            v32 = a2;
            v9 = a2;
            fun_8048aa4(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, "mkdir --verbose -p %s/etc/gm/Xtns ; cp -fv ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; ", v9, v32, v31, v42, v43, v44, v45, v46, a2, a1, v47, v48, eax29, v49, v50);
        }
    } else {
        eax56 = fun_8048a94(v21, "r", 19, v51, v52, v53, v54, v55);
        if (*eax56 == 2) {
            goto addr_804ceb4_7;
        } else {
            fun_8048c44(eax29, "r", 19, v57, v58, v59, v60, v61, v62, v63, a2, a1, v64, v65, eax29);
            eax71 = fun_8048a94(eax29, "r", 19, v66, v67, v68, v69, v70);
            v72 = *eax71;
            eax78 = fun_8048ad4(v72, "r", 19, v73, v74, v75, v76, v77);
            print_error(0xffffffe0, "checking for file '%s': %s\n", reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4, eax78, v79, v80, v81, v82, v83);
            goto addr_804ce26_2;
        }
    }
    v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4);
    v21 = reinterpret_cast<void**>(0x8068ae0);
    fun_8048c84(0x8068ae0, v20, v9, v32, v31, v84, v85, v86, v87, v88, a2, a1, v89, v90, eax29, v91, v92);
    addr_804ceb4_7:
    eax93 = reinterpret_cast<void**>(eax8 ^ g14);
    if (eax93) {
        eax93 = fun_8048d34(v21, v20, v9, v32, v31, v94, v95, v96, v97, v98, a2, a1, v99, v100, eax29, v101, v102);
    }
    return eax93;
}

struct s3 {
    signed char[1] pad1;
    void** f1;
};

void** deregister_entries_gisman(void** a1, void** a2, void** a3, void** a4) {
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
    void** v31;
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
    void** eax57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    int32_t* eax63;
    int32_t v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** eax69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    int32_t* eax80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    int32_t* eax97;
    int32_t v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** eax104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** eax110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** eax115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    struct s3* v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    int32_t eax145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** eax154;
    void** v155;
    void** v156;
    int32_t v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    int32_t eax162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    struct s1* eax167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** eax172;
    void** eax173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
    void** v179;
    void** v180;
    void** v181;
    void** v182;
    void** v183;
    void** v184;
    void** eax185;
    void** eax186;
    void** v187;
    void** v188;
    void** v189;
    void** v190;
    void** eax191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** eax197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;
    void** eax204;
    void** v205;
    void** eax206;
    void** v207;
    void** v208;
    void** eax209;
    void** v210;
    void** v211;
    void** v212;
    void** v213;
    void** v214;
    void** v215;
    void** eax216;
    void** v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    void** eax223;
    void** v224;
    void** v225;
    void** v226;
    void** v227;
    void** v228;
    void** v229;
    uint32_t v230;
    void** v231;
    void** v232;
    void** v233;
    void** v234;
    void** v235;
    void** eax236;
    void** v237;
    void** v238;
    void** eax239;
    void** v240;
    void** v241;
    void** v242;
    void** v243;
    void** eax244;
    void* v245;
    void** v246;
    void** v247;
    void** v248;
    void** v249;
    uint32_t edx250;
    void** v251;
    void** v252;
    void** v253;
    void** v254;
    int32_t v255;
    void** v256;
    void** v257;
    void** v258;
    void** v259;
    void** v260;
    void** v261;
    void** v262;
    void** v263;
    void** v264;
    void** v265;
    void** v266;
    void** v267;
    int32_t v268;
    void** v269;
    void** v270;
    void** v271;
    void** v272;
    int32_t eax273;
    void** v274;
    void** v275;
    void** v276;
    void** v277;
    void** v278;
    void** v279;
    void** v280;
    void** v281;
    void** v282;
    void** v283;
    void** v284;
    void** v285;
    void** v286;
    void** v287;
    void** v288;
    void** v289;
    void** v290;
    void** v291;
    void** v292;
    void** v293;
    void** v294;
    void** v295;
    void** v296;
    void** v297;
    void** v298;
    void** v299;
    uint32_t v300;
    void** v301;
    void** v302;
    void** v303;
    void** v304;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v6 = a1;
    v7 = a2;
    eax8 = g14;
    v9 = eax8;
    v10 = v7;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, "%s/etc/dm/menu.tcl", v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v7, v6, v22);
    v23 = reinterpret_cast<void**>("r");
    v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4);
    eax32 = fun_8048c74(v24, "r", v10, v25, v26, v27, v28, v29, v30, v31);
    v33 = eax32;
    if (v33) {
        addr_804cf8a_2:
        v34 = reinterpret_cast<void**>(32);
        fun_8048c54(0x80642c0, "/tmp/grass.extensions.db.XXXXXX", 32, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v7);
        fun_8048c14(0x80642c0, "/tmp/grass.extensions.db.XXXXXX", 32, v35, v46, v47, v48, v49);
        v50 = reinterpret_cast<void**>("w+");
        eax57 = fun_8048c74(0x80642c0, "w+", 32, v35, v51, v52, v53, v54, v55, v56);
        v58 = eax57;
        if (!v58) {
            eax63 = fun_8048a94(0x80642c0, "w+", 32, v35, v59, v60, v61, v62);
            v64 = *eax63;
            eax69 = fun_8048ad4(v64, "w+", 32, v35, v65, v66, v67, v68);
            v35 = eax69;
            v34 = reinterpret_cast<void**>(0x80642c0);
            v50 = reinterpret_cast<void**>("could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
            print_error(0xffffffeb, "could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n", 0x80642c0, v35, v70, v71, v72, v73, v74);
        }
    } else {
        eax80 = fun_8048a94(v24, "r", v10, v75, v76, v77, v78, v79);
        if (*eax80 != 2) {
            fun_8048c44(v33, "r", v10, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v7);
            eax97 = fun_8048a94(v33, "r", v10, v92, v93, v94, v95, v96);
            v98 = *eax97;
            eax104 = fun_8048ad4(v98, "r", v10, v99, v100, v101, v102, v103);
            v35 = eax104;
            print_error(0xffffffea, "checking for file '%s': %s\n", reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, v35, v105, v106, v107, v108, v109);
            goto addr_804cf8a_2;
        } else {
            eax110 = reinterpret_cast<void**>(0);
            goto addr_804d729_7;
        }
    }
    atexit(exit_db, v50, v34, v35, v111, v112, v113, v114);
    eax115 = VERBOSE;
    if (!eax115) {
        v116 = v7;
        v117 = v7;
        v118 = reinterpret_cast<void**>(0x80642c0);
        v119 = reinterpret_cast<void**>(0x80672c0);
        v120 = v7;
        v121 = v7;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;", v121, v120, 0x80672c0, 0x80642c0, v117, 0x80672c0, v116, 0x80672c0, v122, v123, v124, v125, v7, v6, v126);
    } else {
        v117 = v7;
        v118 = v7;
        v119 = reinterpret_cast<void**>(0x80642c0);
        v120 = v7;
        v121 = v7;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;", v121, v120, 0x80642c0, v118, v117, v127, v128, v129, v130, v131, v132, v133, v7, v6, v134);
    }
    fun_8048c84(0x80682e0, reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, v121, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v135, v136, v137, v138, v7, v6, v139);
    v140 = reinterpret_cast<struct s3*>(0);
    while (v10 = v33, v23 = reinterpret_cast<void**>(0x800), v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4), eax145 = fun_8048ba4(v24, 0x800, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v141, v142, v143, v144, v7), !!eax145) {
        v140 = reinterpret_cast<struct s3*>(&v140->f1);
    }
    if (v140) {
        fun_8048b24(v33, 0x800, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v146, v147, v148, v149, v7);
        eax154 = fun_8048b74(&v140->f1, 4, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v150, v151, v152, v153, v7);
        v155 = eax154;
        v156 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<signed char>(&v140->f1) > reinterpret_cast<signed char>(v156)) {
            *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v156) << 2) + reinterpret_cast<unsigned char>(v155)) = reinterpret_cast<void**>(0);
            ++v156;
        }
        v157 = 0;
        while (eax162 = fun_8048ba4(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, 0x800, v33, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v158, v159, v160, v161, v7), !!eax162) {
            eax167 = fun_8048c64(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, 0x800, v33, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v163, v164, v165, v166, v7);
            eax172 = fun_8048d24(&eax167->f1, 0x800, v33, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v168, v169, v170, v171, v7);
            *reinterpret_cast<void***>((v157 << 2) + reinterpret_cast<unsigned char>(v155)) = eax172;
            eax173 = *reinterpret_cast<void***>((v157 << 2) + reinterpret_cast<unsigned char>(v155));
            fun_8048c84(eax173, reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, v33, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v174, v175, v176, v177, v7, v6, v178);
            ++v157;
        }
        fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, "#(DO_NOT_REMOVE_THIS_COMMENT) <%s> {cascad", v6, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v179, v180, v181, v182, v7, v6, v183);
        v10 = reinterpret_cast<void**>(0);
        v23 = v155;
        eax185 = find_pos(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, v23, 0, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v184);
        if (reinterpret_cast<int1_t>(eax185 == 0xffffffff)) 
            goto addr_804d26c_22;
    } else {
        eax110 = reinterpret_cast<void**>(0xffffffff);
        goto addr_804d729_7;
    }
    eax186 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(eax185) << 2) + reinterpret_cast<unsigned char>(v155));
    eax191 = fun_8048b54(eax186, 34, 0, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v187, v188, v189, v190, v7);
    v192 = eax191 + 1;
    eax197 = fun_8048b54(v192, 34, 0, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v193, v194, v195, v196, v7);
    fun_8048c84(reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4, v192, 0, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v198, v199, v200, v201, v7, v6, v202);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp5) + (reinterpret_cast<unsigned char>(eax197) - reinterpret_cast<unsigned char>(v192)) + 0xffffe7f4) = 0;
    eax204 = find_pos("\"&Xtns\" all options 1", v155, 0, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v203);
    v10 = eax204 + 1;
    v23 = v155;
    eax206 = find_pos("\" all options", v23, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v205);
    v207 = eax206 - 1;
    if (reinterpret_cast<int1_t>(v207 == 0xffffffff)) {
        v10 = reinterpret_cast<void**>(0);
        v23 = v155;
        eax209 = find_pos("}]", v23, 0, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v208);
        v207 = eax209;
    }
    if (!reinterpret_cast<int1_t>(eax204 == 0xffffffff)) {
        fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, "{cascad \"%s\"", reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v210, v211, v212, v213, v7, v6, v214);
        v10 = eax204;
        eax216 = find_pos(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, v155, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v215);
        v217 = eax216;
        if (v217 == 0xffffffff || reinterpret_cast<signed char>(v217) > reinterpret_cast<signed char>(v207)) {
            v23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4);
            v24 = reinterpret_cast<void**>("could not find submenu entry '%s' in 'menu.tcl'.\n");
            print_warning("could not find submenu entry '%s' in 'menu.tcl'.\n", v23, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v218, v219, v220, v221, v7);
            eax110 = reinterpret_cast<void**>(0xffffffff);
        } else {
            v10 = v217;
            eax223 = find_pos(" \t\t\t}}", v155, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v222);
            v224 = eax223;
            if (v224 == 0xffffffff || reinterpret_cast<signed char>(v224) > reinterpret_cast<signed char>(v207)) {
                v23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4);
                v24 = reinterpret_cast<void**>("could not find end of submenu entry '%s' in 'menu.tcl'.\n");
                print_warning("could not find end of submenu entry '%s' in 'menu.tcl'.\n", v23, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v225, v226, v227, v228, v7);
                eax110 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v229 = reinterpret_cast<void**>(0);
                v230 = 0;
                while (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v224) - reinterpret_cast<unsigned char>(v217) + 1) > reinterpret_cast<int32_t>(v230)) {
                    delete_str(v217, v155, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0);
                    ++v229;
                    ++v230;
                }
                fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, "#(DO_NOT_REMOVE_THIS_COMMENT) <%s> {cascad", v6, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v231, v232, v233, v234, v7, v6, v229);
                eax236 = find_pos(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, v155, 0, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v235);
                delete_str(eax236, v155, 0, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0);
                v237 = v229 + 1;
                eax239 = find_pos("\"&Xtns\" all options 1", v155, 0, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v238);
                v240 = eax239;
                v241 = v240 + 1;
                v242 = v155;
                eax244 = find_pos("\" all options", v242, v241, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v243);
                v245 = reinterpret_cast<void*>(eax244 - 1);
                if (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(v245) - reinterpret_cast<unsigned char>(v240)) > reinterpret_cast<int32_t>(2)) 
                    goto addr_804d5ec_35; else 
                    goto addr_804d59d_36;
            }
        }
    } else {
        v24 = reinterpret_cast<void**>("menu 'Xtns' does not exist.\n");
        print_warning("menu 'Xtns' does not exist.\n", v23, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v246, v247, v248, v249, v7);
        eax110 = reinterpret_cast<void**>(0xffffffff);
    }
    addr_804d729_7:
    edx250 = v9 ^ g14;
    if (edx250) {
        eax110 = fun_8048d34(v24, v23, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v251, v252, v253, v254, v7, v6, v237);
    }
    return eax110;
    addr_804d5ec_35:
    v255 = 0;
    while (*reinterpret_cast<void***>((v255 << 2) + reinterpret_cast<unsigned char>(v155))) {
        v242 = *reinterpret_cast<void***>((v255 << 2) + reinterpret_cast<unsigned char>(v155));
        fun_8048ce4(v58, v242, v241, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v256, v257, v258, v259, v7);
        ++v255;
    }
    fun_8048c04(v58, v242, v241, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v260, v261, v262, v263, v7);
    fun_8048b24(v58, v242, v241, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v264, v265, v266, v267, v7);
    v268 = 0;
    while (v10 = v58, v23 = reinterpret_cast<void**>(0x800), eax273 = fun_8048ba4(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, 0x800, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v269, v270, v271, v272, v7), !!eax273) {
        ++v268;
    }
    if (!v268) {
        print_warning("file truncation detected. Retaining orginal file 'menu.tcl'.\n", 0x800, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v274, v275, v276, v277, v7);
        v10 = reinterpret_cast<void**>(1);
        v23 = reinterpret_cast<void**>(0x8055722);
        fun_8048c54(0x80682e0, 0x8055722, 1, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v278, v279, v280, v281, v7);
    }
    fun_8048c44(v33, v23, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v282, v283, v284, v285, v7);
    fun_8048c44(v58, v23, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v286, v287, v288, v289, v7);
    v290 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(&v140->f1) > reinterpret_cast<signed char>(v290)) {
        v291 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v290) << 2) + reinterpret_cast<unsigned char>(v155));
        fun_8048bf4(v291, v23, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v292, v293, v294, v295, v7);
        ++v290;
    }
    v24 = v155;
    fun_8048bf4(v24, v23, v10, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v296, v297, v298, v299, v7);
    eax110 = v237;
    goto addr_804d729_7;
    addr_804d59d_36:
    v300 = 0;
    while (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(v245) - reinterpret_cast<unsigned char>(v240) + 1) > reinterpret_cast<int32_t>(v300)) {
        v242 = v155;
        delete_str(v240, v242, v241, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0);
        ++v237;
        ++v300;
    }
    goto addr_804d5ec_35;
    addr_804d26c_22:
    v24 = reinterpret_cast<void**>("could not find uninstall information in 'menu.tcl'.\n");
    print_warning("could not find uninstall information in 'menu.tcl'.\n", v23, 0, v120, v119, v118, v117, 0x80672c0, v116, 0x80672c0, v301, v302, v303, v304, v7);
    eax110 = reinterpret_cast<void**>(0xffffffff);
    goto addr_804d729_7;
}

void** deregister_entries_gisman2(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
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
    void** eax26;
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
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    int32_t* eax50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    int32_t* eax61;
    int32_t v62;
    void** v63;
    void** v64;
    void** eax65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** eax79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax6 = g14;
    v7 = a1;
    v8 = a2;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, "%s/etc/gm/Xtns/%s.gem", v8, v7, v9, v10, a2, a1, v11, v12, v13, v14, v15, v16, v17, v18, v19);
    v20 = reinterpret_cast<void**>("r");
    v21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4);
    eax26 = fun_8048c74(v21, "r", v8, v7, v22, v23, a2, a1, v24, v25);
    if (eax26) {
        addr_804d809_2:
        eax27 = VERBOSE;
        if (!eax27) {
            v7 = a1;
            v8 = a2;
            fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, "rm -f %s/etc/gm/Xtns/%s.gem ; ", v8, v7, v28, v29, a2, a1, v30, v31, eax26, v32, v33, v34, v35, v36, v37);
        } else {
            v7 = a1;
            v8 = a2;
            fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, "rm -vf %s/etc/gm/Xtns/%s.gem ; ", v8, v7, v38, v39, a2, a1, v40, v41, eax26, v42, v43, v44, v45, v46, v47);
        }
    } else {
        eax50 = fun_8048a94(v21, "r", v8, v7, v48, v49, a2, a1);
        if (*eax50 == 2) {
            goto addr_804d883_7;
        } else {
            fun_8048c44(eax26, "r", v8, v7, v51, v52, a2, a1, v53, v54, eax26, v55, v56, v57, v58);
            eax61 = fun_8048a94(eax26, "r", v8, v7, v59, v60, a2, a1);
            v62 = *eax61;
            eax65 = fun_8048ad4(v62, "r", v8, v7, v63, v64, a2, a1);
            print_error(0xffffffdf, "checking for file '%s': %s\n", reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, eax65, v66, v67, a2, a1, v68);
            goto addr_804d809_2;
        }
    }
    v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4);
    v21 = reinterpret_cast<void**>(0x80682e0);
    fun_8048c84(0x80682e0, v20, v8, v7, v69, v70, a2, a1, v71, v72, eax26, v73, v74, v75, v76, v77, v78);
    addr_804d883_7:
    eax79 = reinterpret_cast<void**>(eax6 ^ g14);
    if (eax79) {
        eax79 = fun_8048d34(v21, v20, v8, v7, v80, v81, a2, a1, v82, v83, eax26, v84, v85, v86, v87, v88, v89);
    }
    return eax79;
}

void fun_8048cb4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void** restore_entries_gisman(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** v6;
    uint32_t eax7;
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
    void** v31;
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
    void** eax58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    int32_t* eax64;
    int32_t v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** eax70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    int32_t* eax81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    int32_t* eax99;
    int32_t v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** eax106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** eax112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** eax117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** eax151;
    void** v152;
    void* v153;
    void* v154;
    struct s2* eax155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** eax162;
    void** v163;
    void** v164;
    void** v165;
    int32_t eax166;
    void** v167;
    void** v168;
    int32_t eax169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
    void** v179;
    int32_t eax180;
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
    void* v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    int32_t eax197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** eax208;
    void** v209;
    void* v210;
    int32_t v211;
    void** v212;
    void** v213;
    void** v214;
    void** v215;
    void** v216;
    int32_t eax217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    struct s1* eax223;
    void** v224;
    void** v225;
    void** v226;
    void** v227;
    void** v228;
    void** eax229;
    void** eax230;
    void** v231;
    void** v232;
    void** v233;
    void** v234;
    void** v235;
    void** v236;
    void** v237;
    void** v238;
    void** v239;
    void** v240;
    void** v241;
    void** eax242;
    void** v243;
    void** v244;
    struct s2* eax245;
    void** v246;
    void** v247;
    void** v248;
    void** v249;
    void** v250;
    void** v251;
    void** v252;
    void** v253;
    int32_t eax254;
    void** v255;
    void** v256;
    int32_t eax257;
    void** eax258;
    void** v259;
    int32_t v260;
    void** v261;
    void** v262;
    void** v263;
    void** v264;
    void** v265;
    void** eax266;
    void** v267;
    void** v268;
    void** v269;
    void** v270;
    void** v271;
    void** v272;
    void** eax273;
    void** v274;
    void** v275;
    void** v276;
    void** v277;
    void** v278;
    void** eax279;
    void** v280;
    void** v281;
    void** v282;
    void** v283;
    void** v284;
    void** eax285;
    void** v286;
    void** v287;
    void** v288;
    void** v289;
    void** v290;
    void** eax291;
    void** v292;
    void** v293;
    void** v294;
    void** v295;
    void** v296;
    void** v297;
    void** v298;
    void** v299;
    void** v300;
    void** v301;
    void** eax302;
    void** v303;
    void** v304;
    void** v305;
    void** v306;
    void** v307;
    int32_t v308;
    void** v309;
    void** v310;
    void** v311;
    void** v312;
    void** v313;
    void** v314;
    void** v315;
    void** v316;
    void** v317;
    void** v318;
    void** v319;
    void** v320;
    void** v321;
    void** v322;
    void** v323;
    void** v324;
    void** v325;
    void** v326;
    void** v327;
    void** v328;
    void* v329;
    void** v330;
    void** v331;
    void** v332;
    void** v333;
    void** v334;
    void** v335;
    void** v336;
    void** v337;
    void** v338;
    void** v339;
    void** v340;
    uint32_t edx341;
    void** v342;
    void** v343;
    void** v344;
    void** v345;
    void** v346;
    void** v347;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v6 = a1;
    eax7 = g14;
    v8 = eax7;
    v9 = v6;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4, "%s/etc/dm/menu.tcl", v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v6, v22);
    v23 = reinterpret_cast<void**>("r");
    v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4);
    eax32 = fun_8048c74(v24, "r", v9, v25, v26, v27, v28, v29, v30, v31);
    v33 = eax32;
    if (v33) {
        addr_804d950_2:
        v34 = reinterpret_cast<void**>(32);
        fun_8048c54(0x80642c0, "/tmp/grass.extensions.db.XXXXXX", 32, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46);
        fun_8048c14(0x80642c0, "/tmp/grass.extensions.db.XXXXXX", 32, v35, v47, v48, v49, v50);
        v51 = reinterpret_cast<void**>("w+");
        eax58 = fun_8048c74(0x80642c0, "w+", 32, v35, v52, v53, v54, v55, v56, v57);
        v59 = eax58;
        if (!v59) {
            eax64 = fun_8048a94(0x80642c0, "w+", 32, v35, v60, v61, v62, v63);
            v65 = *eax64;
            eax70 = fun_8048ad4(v65, "w+", 32, v35, v66, v67, v68, v69);
            v35 = eax70;
            v34 = reinterpret_cast<void**>(0x80642c0);
            v51 = reinterpret_cast<void**>("could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
            print_error(0xffffffeb, "could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n", 0x80642c0, v35, v71, v72, v73, v74, v75);
        }
    } else {
        eax81 = fun_8048a94(v24, "r", v9, v76, v77, v78, v79, v80);
        if (*eax81 != 2) {
            fun_8048c44(v33, "r", v9, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93);
            eax99 = fun_8048a94(v33, "r", v9, v94, v95, v96, v97, v98);
            v100 = *eax99;
            eax106 = fun_8048ad4(v100, "r", v9, v101, v102, v103, v104, v105);
            v35 = eax106;
            print_error(0xffffffeb, "checking for file '%s': %s\n", reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4, v35, v107, v108, v109, v110, v111);
            goto addr_804d950_2;
        } else {
            eax112 = reinterpret_cast<void**>(0);
            goto addr_804e0e6_7;
        }
    }
    atexit(exit_db, v51, v34, v35, v113, v114, v115, v116);
    eax117 = VERBOSE;
    if (!eax117) {
        v118 = v6;
        v119 = v6;
        v120 = reinterpret_cast<void**>(0x80642c0);
        v121 = reinterpret_cast<void**>(0x80672c0);
        v122 = v6;
        v123 = v6;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;", v123, v122, 0x80672c0, 0x80642c0, v119, 0x80672c0, v118, 0x80672c0, v124, v125, v126, v127, v128, v6, v129);
    } else {
        v119 = v6;
        v120 = v6;
        v121 = reinterpret_cast<void**>(0x80642c0);
        v122 = v6;
        v123 = v6;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;", v123, v122, 0x80642c0, v120, v119, v130, v131, v132, v133, v134, v135, v136, v137, v6, v138);
    }
    fun_8048c84(0x80682e0, reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, v123, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v139, v140, v141, v142, v143, v6, v144);
    v9 = v6;
    v23 = reinterpret_cast<void**>("%s/etc/dm/gem-entries");
    fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffdff4, "%s/etc/dm/gem-entries", v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v145, v146, v147, v148, v149, v6, v150);
    v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffdff4);
    eax151 = fun_8048c24(v24, "%s/etc/dm/gem-entries", v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0);
    v152 = eax151;
    if (v152) {
        v153 = reinterpret_cast<void*>(0);
        v154 = reinterpret_cast<void*>(0);
        while (eax155 = fun_8048bd4(v152, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0), !!eax155) {
            v122 = reinterpret_cast<void**>(&eax155->fb);
            v9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffdff4);
            fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4, "%s/%s", v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v156, v157, v158, v159, v160, v6, v161);
            eax162 = fun_8048c74(reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4, "r", v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0);
            v163 = eax162;
            v23 = reinterpret_cast<void**>(".");
            eax166 = fun_8048da4(&eax155->fb, ".", v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v164, v165);
            if (!eax166 || (v23 = reinterpret_cast<void**>(".."), eax169 = fun_8048da4(&eax155->fb, "..", v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v167, v168), !eax169)) {
                fun_8048c44(v163, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v170, v171, v172, v173, v174);
            } else {
                if (v163) {
                    while (v9 = v163, v23 = reinterpret_cast<void**>(0x800), eax180 = fun_8048ba4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, 0x800, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v175, v176, v177, v178, v179), !!eax180) {
                        v153 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v153) + 1);
                    }
                    v154 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v154) + 1);
                    fun_8048c44(v163, 0x800, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v181, v182, v183, v184, v185);
                } else {
                    fun_8048c44(v163, "..", v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v186, v187, v188, v189, v190);
                }
            }
        }
        fun_8048cb4(v152, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0);
        v191 = reinterpret_cast<void*>(0);
        while (v9 = v33, v23 = reinterpret_cast<void**>(0x800), v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4), eax197 = fun_8048ba4(v24, 0x800, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v192, v193, v194, v195, v196), !!eax197) {
            v191 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v191) + 1);
        }
        if (!v191) 
            goto addr_804dc61_26;
    } else {
        eax112 = reinterpret_cast<void**>(0);
        goto addr_804e0e6_7;
    }
    fun_8048b24(v33, 0x800, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v198, v199, v200, v201, v202);
    eax208 = fun_8048b74(reinterpret_cast<int32_t>(v153) + reinterpret_cast<int32_t>(v153) + ((reinterpret_cast<int32_t>(v154) << 2) + reinterpret_cast<int32_t>(v154)) + reinterpret_cast<int32_t>(v191) + 1, 4, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v203, v204, v205, v206, v207);
    v209 = eax208;
    v210 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v153) + reinterpret_cast<int32_t>(v153) + ((reinterpret_cast<int32_t>(v154) << 2) + reinterpret_cast<int32_t>(v154)) + reinterpret_cast<int32_t>(v191) + 1 > reinterpret_cast<int32_t>(v210)) {
        *reinterpret_cast<void***>((reinterpret_cast<int32_t>(v210) << 2) + reinterpret_cast<unsigned char>(v209)) = reinterpret_cast<void**>(0);
        v210 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v210) + 1);
    }
    v211 = 0;
    while (v9 = v33, v23 = reinterpret_cast<void**>(0x800), eax217 = fun_8048ba4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, 0x800, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v212, v213, v214, v215, v216), !!eax217) {
        eax223 = fun_8048c64(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, 0x800, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v218, v219, v220, v221, v222);
        eax229 = fun_8048d24(&eax223->f1, 0x800, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v224, v225, v226, v227, v228);
        *reinterpret_cast<void***>((v211 << 2) + reinterpret_cast<unsigned char>(v209)) = eax229;
        eax230 = *reinterpret_cast<void***>((v211 << 2) + reinterpret_cast<unsigned char>(v209));
        fun_8048c84(eax230, reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v231, v232, v233, v234, v235, v6, v236);
        ++v211;
    }
    *reinterpret_cast<void***>((v211 << 2) + reinterpret_cast<unsigned char>(v209)) = reinterpret_cast<void**>(0);
    check_ext_menu(v209, 0x800, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v237, v238, v239, v240, v241);
    eax242 = fun_8048c24(reinterpret_cast<int32_t>(ebp5) + 0xffffdff4, 0x800, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0);
    v243 = eax242;
    v244 = reinterpret_cast<void**>(0);
    while (eax245 = fun_8048bd4(v243, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0), !!eax245) {
        v122 = reinterpret_cast<void**>(&eax245->fb);
        v9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffdff4);
        fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4, "%s/%s", v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v246, v247, v248, v249, v250, v6, v251);
        v23 = reinterpret_cast<void**>(".");
        eax254 = fun_8048da4(&eax245->fb, ".", v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v252, v253);
        if (!eax254) {
            continue;
        }
        v23 = reinterpret_cast<void**>("..");
        eax257 = fun_8048da4(&eax245->fb, "..", v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v255, v256);
        if (!eax257) {
            continue;
        }
        v23 = reinterpret_cast<void**>("r");
        eax258 = fun_8048c74(reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4, "r", v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0);
        v259 = eax258;
        if (!v259) {
            continue;
        }
        v260 = 1;
        while (v9 = v259, v23 = reinterpret_cast<void**>(0x800), eax266 = nc_fgets_nb(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, 0x800, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v261, v262, v263, v264, v265), !!eax266) {
            if (v260 != 1) {
                v122 = v267;
                v9 = v209;
                v23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4);
                eax273 = new_item(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v268, v269, v270, v271, v272);
                v267 = eax273;
                if (reinterpret_cast<signed char>(v267) < reinterpret_cast<signed char>(0)) 
                    goto addr_804dfc0_46;
                ++v260;
                ++v244;
            } else {
                eax279 = fun_8048bc4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, 93, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v274, v275, v276, v277, v278);
                eax285 = fun_8048b54(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, 91, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v280, v281, v282, v283, v284);
                eax291 = fun_8048b54(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, 91, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v286, v287, v288, v289, v290);
                fun_8048b94(reinterpret_cast<int32_t>(ebp5) - 0x100c, eax291 + 1, reinterpret_cast<unsigned char>(eax279) - reinterpret_cast<unsigned char>(eax285), v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v292, v293, v294, v295, v296);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp5) + (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax279) - reinterpret_cast<unsigned char>(eax285)) - 1) + 0xffffeff4) = 0;
                v9 = v209;
                v23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4);
                eax302 = new_submenu(reinterpret_cast<int32_t>(ebp5) + 0xffffd7f4, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v297, v298, v299, v300, v301);
                v267 = eax302;
                if (reinterpret_cast<signed char>(v267) < reinterpret_cast<signed char>(0)) 
                    goto addr_804dfbd_49;
                ++v260;
                ++v244;
            }
        }
        addr_804dfc1_52:
        fun_8048c44(v259, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v303, v304, v305, v306, v307);
        continue;
        addr_804dfc0_46:
        goto addr_804dfc1_52;
        addr_804dfbd_49:
        goto addr_804dfc1_52;
    }
    fun_8048cb4(v243, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0);
    v308 = 0;
    while (*reinterpret_cast<void***>((v308 << 2) + reinterpret_cast<unsigned char>(v209))) {
        v23 = *reinterpret_cast<void***>((v308 << 2) + reinterpret_cast<unsigned char>(v209));
        fun_8048ce4(v59, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v309, v310, v311, v312, v313);
        ++v308;
    }
    fun_8048c04(v59, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v314, v315, v316, v317, v318);
    fun_8048c44(v33, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v319, v320, v321, v322, v323);
    fun_8048c44(v59, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v324, v325, v326, v327, v328);
    v329 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v153) + reinterpret_cast<int32_t>(v153) + ((reinterpret_cast<int32_t>(v154) << 2) + reinterpret_cast<int32_t>(v154)) + reinterpret_cast<int32_t>(v191) + 1 > reinterpret_cast<int32_t>(v329)) {
        v330 = *reinterpret_cast<void***>((reinterpret_cast<int32_t>(v329) << 2) + reinterpret_cast<unsigned char>(v209));
        fun_8048bf4(v330, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v331, v332, v333, v334, v335);
        v329 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v329) + 1);
    }
    v24 = v209;
    fun_8048bf4(v24, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v336, v337, v338, v339, v340);
    eax112 = v244;
    addr_804e0e6_7:
    edx341 = v8 ^ g14;
    if (edx341) {
        eax112 = fun_8048d34(v24, v23, v9, v122, v121, v120, v119, 0x80672c0, v118, 0x80672c0, v342, v343, v344, v345, v346, v6, v347);
    }
    return eax112;
    addr_804dc61_26:
    eax112 = reinterpret_cast<void**>(0);
    goto addr_804e0e6_7;
}

int32_t closedir = 0x8048cba;

void fun_8048cb4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    goto closedir;
}

int32_t opendir = 0x8048c2a;

void** fun_8048c24(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    goto opendir;
}

int32_t UPGRADE = 0;

void** new_ext_html(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void* ebp8;
    void** v9;
    void** v10;
    void** v11;
    uint32_t eax12;
    uint32_t v13;
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
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void** v31;
    void** v32;
    void** v33;
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
    void** eax44;
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
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** eax67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** eax75;
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
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** eax95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** eax113;
    void** v114;
    void** eax115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** eax125;
    void** v126;
    void** eax127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** eax136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    int32_t eax152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** eax159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** eax168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
    void** v179;
    void** v180;
    void** v181;
    void** eax182;
    int32_t eax183;
    void** v184;
    void** v185;
    void** v186;
    void** v187;
    void** v188;
    void** v189;
    void** v190;
    void** eax191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v9 = a1;
    v10 = a2;
    v11 = a3;
    eax12 = g14;
    v13 = eax12;
    eax20 = find_pos("<b>Drivers sections:</b>", v11, 0, v14, v15, v16, v17, v18, v19, v11, v10);
    v21 = eax20;
    if (reinterpret_cast<signed char>(v21) >= reinterpret_cast<signed char>(0) || (v22 = reinterpret_cast<void**>(0), v23 = v11, eax30 = find_pos("<!-- GEM Extensions StartHTML. Do not delete or change this comment! -->", v23, 0, v24, v25, v26, v27, v28, v29, v11, v10), v21 = eax30, reinterpret_cast<signed char>(v21) >= reinterpret_cast<signed char>(0))) {
        eax37 = find_pos("<hr>", v11, v21, v31, v32, v33, v34, v35, v36, v11, v10);
        eax44 = find_pos("<h3>Installed extensions:</h3>", v11, v21, v38, v39, v40, v41, v42, v43, v11, v10);
        if (reinterpret_cast<int1_t>(eax44 == 0xffffffff)) {
            insert_str("<h3>Installed extensions:</h3>\n", eax37, v11, v45, v46, v47, v48);
            insert_str("<ul>\n", eax37 + 1, v11, v49, v50, v51, v52);
            insert_str("</ul>\n", eax37 + 2, v11, v53, v54, v55, v56);
            insert_str("<p>\n", eax37 + 3, v11, v57, v58, v59, v60);
        }
        eax67 = find_pos("<h3>Installed extensions:</h3>", v11, v21, v61, v62, v63, v64, v65, v66, v11, v10);
        v68 = eax67;
        eax75 = find_pos("</ul>", v11, v68, v69, v70, v71, v72, v73, v74, v11, v10);
        v76 = eax75;
        v77 = v68 + 2;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp8) + 0xfffff7f4, "\">%s", v9, v78, v79, v80, v81, v82, v83, v11, v10, v9, v84, v85, v86, v87, v88);
        v22 = v77;
        eax95 = find_pos(reinterpret_cast<int32_t>(ebp8) + 0xfffff7f4, v11, v22, v89, v90, v91, v92, v93, v94, v11, v10);
        if (eax95 != 0xffffffff) 
            goto addr_804e323_5;
    } else {
        v96 = reinterpret_cast<void**>("Unknown format of index.html. Unable to register HTML man pages.\n");
        print_warning("Unknown format of index.html. Unable to register HTML man pages.\n", v23, 0, v97, v98, v99, v100, v101, v102, v11, v10, v9, v103, v104, v105);
        goto addr_804e55c_7;
    }
    v106 = v68;
    eax113 = find_pos("<li><a href=", v11, v106, v107, v108, v109, v110, v111, v112, v11, v10);
    v114 = eax113;
    while (v114 != 0xffffffff && reinterpret_cast<signed char>(v114) < reinterpret_cast<signed char>(v76)) {
        eax115 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v114) << 2) + reinterpret_cast<unsigned char>(v11));
        eax125 = fun_8048bc4(eax115, 34, v106, v116, v117, v118, v119, v120, v121, v11, v10, v9, v122, v123, v124);
        v126 = eax125;
        eax127 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v114) << 2) + reinterpret_cast<unsigned char>(v11));
        eax136 = fun_8048bc4(eax127, 60, v106, v128, v129, v130, v131, v132, v133, v11, v10, v9, v134, v135, v124);
        v137 = eax136;
        v124 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v137) - reinterpret_cast<unsigned char>(v126));
        fun_8048b94(reinterpret_cast<int32_t>(ebp8) - 0x80c, v126 + 2, v124, v138, v139, v140, v141, v142, v143, v11, v10, v9, v144, v145, v124);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp8) + reinterpret_cast<uint32_t>(v124 - 1) + 0xfffff7f4) = 0;
        eax152 = fun_8048da4(v9, reinterpret_cast<int32_t>(ebp8) + 0xfffff7f4, v124, v146, v147, v148, v149, v150, v151, v11, v10, v9);
        if (eax152 < 0) 
            goto addr_804e49e_11;
        ++v68;
        v106 = v68;
        eax159 = find_pos("<li><a href=", v11, v106, v153, v154, v155, v156, v157, v158, v11, v10);
        v114 = eax159;
    }
    addr_804e4f4_13:
    v160 = a6;
    v161 = a5;
    v162 = a4;
    v163 = v9;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp8) + 0xfffff7f4, "<li><a href=\"../extensions/%s/index.html\">%s (%i.%i.%i)</a>\n", v9, v163, v162, v161, v160, v164, v165, v11, v10, v9, v166, v167, v124, v137, v126);
    v22 = v11;
    v23 = v77;
    v96 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffff7f4);
    insert_str(v96, v23, v22, v163, v162, v161, v160);
    addr_804e55c_7:
    eax168 = reinterpret_cast<void**>(v13 ^ g14);
    if (eax168) {
        eax168 = fun_8048d34(v96, v23, v22, v163, v162, v161, v160, v169, v170, v11, v10, v9, v171, v172, v124, v137, v126);
    }
    return eax168;
    addr_804e49e_11:
    v77 = v114;
    goto addr_804e4f4_13;
    addr_804e323_5:
    v23 = v9;
    v96 = reinterpret_cast<void**>("list item '%s' exists in index.html.\n");
    print_warning("list item '%s' exists in index.html.\n", v23, v22, v173, v174, v175, v176, v177, v178, v11, v10, v9, v179, v180, v181);
    eax182 = FORCE;
    if (!eax182) {
        goto addr_804e55c_7;
    } else {
        eax183 = UPGRADE;
        if (!eax183) {
            goto addr_804e55c_7;
        } else {
            v160 = a6;
            v161 = a5;
            v162 = a4;
            v163 = v9;
            v22 = v9;
            fun_8048aa4(reinterpret_cast<int32_t>(ebp8) + 0xfffff7f4, "<li><a href=\"../extensions/%s/index.html\">%s (%i.%i.%i)</a>\n", v22, v163, v162, v161, v160, v184, v185, v11, v10, v9, v186, v187, v188, v189, v190);
            eax191 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(eax95) << 2) + reinterpret_cast<unsigned char>(v11));
            v23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffff7f4);
            v96 = eax191;
            fun_8048c84(v96, v23, v22, v163, v162, v161, v160, v192, v193, v11, v10, v9, v194, v195, v196, v197, v198);
            goto addr_804e55c_7;
        }
    }
}

void** delete_ext_html(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void* ebp8;
    void** v9;
    void** v10;
    void** v11;
    uint32_t eax12;
    uint32_t v13;
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
    void** v25;
    void** v26;
    void** v27;
    void** eax28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
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
    void** eax47;
    void** v48;
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
    void** v72;
    void** v73;
    void** eax74;
    void** v75;
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
    void** v87;
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
    void** v98;
    void** v99;
    void** v100;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v9 = a1;
    v10 = a2;
    v11 = a3;
    eax12 = g14;
    v13 = eax12;
    eax19 = find_pos("<b>Drivers sections:</b>", v11, 0, v14, v15, v11, v10, v9, v16, v17, v18);
    v20 = eax19;
    if (reinterpret_cast<signed char>(v20) >= reinterpret_cast<signed char>(0) || (v21 = reinterpret_cast<void**>(0), v22 = v11, eax28 = find_pos("<!-- GEM Extensions StartHTML. Do not delete or change this comment! -->", v22, 0, v23, v24, v11, v10, v9, v25, v26, v27), v20 = eax28, reinterpret_cast<signed char>(v20) >= reinterpret_cast<signed char>(0))) {
        eax34 = find_pos("<hr>", v11, v20, v29, v30, v11, v10, v9, v31, v32, v33);
        v35 = eax34;
        v21 = v20;
        v22 = v11;
        eax41 = find_pos("<h3>Installed extensions:</h3>", v22, v21, v36, v37, v11, v10, v9, v38, v39, v40);
        if (!reinterpret_cast<int1_t>(eax41 == 0xffffffff)) {
            eax47 = find_pos("<h3>Installed extensions:</h3>", v11, v20, v42, v43, v11, v10, v9, v44, v45, v46);
            v48 = eax47;
            eax54 = find_pos("</ul>", v11, v48, v49, v50, v11, v10, v9, v51, v52, v53);
            v55 = eax54;
            fun_8048aa4(reinterpret_cast<int32_t>(ebp8) + 0xfffff7f4, "\">%s", v9, v56, v57, v11, v10, v9, v58, 0, v55, v48, v59, v35, v20, v60, v61);
            v21 = v48;
            eax65 = find_pos(reinterpret_cast<int32_t>(ebp8) + 0xfffff7f4, v11, v21, v62, v63, v11, v10, v9, v64, 0, v55);
            v66 = eax65;
            if (!reinterpret_cast<int1_t>(v66 == 0xffffffff)) {
                if (reinterpret_cast<signed char>(v66) < reinterpret_cast<signed char>(v55)) {
                    delete_str(v66, v11, v21, v67, v68, v11, v10, v9, v69, 0);
                }
                --v55;
                v21 = v48;
                v22 = v11;
                v70 = reinterpret_cast<void**>("<ul>");
                eax74 = find_pos("<ul>", v22, v21, v71, v72, v11, v10, v9, v73, 0, v55);
                v66 = eax74;
                if (v66 != 0xffffffff && (reinterpret_cast<signed char>(v55) > reinterpret_cast<signed char>(v66) && reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v55) - reinterpret_cast<unsigned char>(v66)) <= reinterpret_cast<int32_t>(1))) {
                    v75 = reinterpret_cast<void**>(0);
                    while (reinterpret_cast<signed char>(v75) <= reinterpret_cast<signed char>(3)) {
                        v22 = v11;
                        v70 = v66 + 0xffffffff;
                        delete_str(v70, v22, v21, v76, v77, v11, v10, v9, v75, 0);
                        ++v75;
                    }
                }
            } else {
                v22 = v9;
                v70 = reinterpret_cast<void**>("extension '%s' not listed in index.html.\n");
                print_warning("extension '%s' not listed in index.html.\n", v22, v21, v78, v79, v11, v10, v9, v80, 0, v55, v48, v66, v35, v20);
            }
        } else {
            v70 = reinterpret_cast<void**>("no extensions section found in index.html.\n");
            print_warning("no extensions section found in index.html.\n", v22, v21, v81, v82, v11, v10, v9, v83, v84, v85, v86, v87, v35, v20);
        }
    } else {
        v70 = reinterpret_cast<void**>("Unknown format of index.html. Unable to de-register HTML man pages.\n");
        print_warning("Unknown format of index.html. Unable to de-register HTML man pages.\n", v22, 0, v88, v89, v11, v10, v9, v90, v91, v92, v93, v94, v95, v20);
    }
    eax96 = reinterpret_cast<void**>(v13 ^ g14);
    if (eax96) {
        eax96 = fun_8048d34(v70, v22, v21, v97, v98, v11, v10, v9, v75, 0, v55, v48, v66, v35, v20, v99, v100);
    }
    return eax96;
}

struct s4 {
    signed char[1] pad1;
    void** f1;
};

void** deregister_html(void** a1, void** a2, void** a3, void** a4) {
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
    void** v31;
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
    void** eax56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    int32_t* eax62;
    int32_t v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** eax68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    int32_t* eax79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    int32_t* eax95;
    int32_t v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** eax102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** eax112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    struct s4* v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    int32_t eax142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** eax153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    int32_t eax162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    struct s1* eax168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** eax174;
    void** eax175;
    void** v176;
    void** v177;
    void** v178;
    void** v179;
    void** v180;
    int32_t v181;
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
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    void** v213;
    void** eax214;
    void** v215;
    void** v216;
    void** v217;
    void** v218;
    void** v219;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v6 = a1;
    v7 = a2;
    eax8 = g14;
    v9 = eax8;
    v10 = v7;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, "%s/docs/html/index.html", v10, v11, v12, v13, v14, v15, v16, v17, v7, v6, v18, v19, v20, v21, v22);
    v23 = reinterpret_cast<void**>("r");
    v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4);
    eax32 = fun_8048c74(v24, "r", v10, v25, v26, v27, v28, v29, v30, v31);
    v33 = eax32;
    if (v33) {
        addr_804ecd4_2:
        v34 = reinterpret_cast<void**>(32);
        fun_8048c54(0x8067ac0, "/tmp/grass.extensions.db.XXXXXX", 32, v35, v36, v37, v38, v39, v40, v41, v7, v6, v42, v43, v44);
        fun_8048c14(0x8067ac0, "/tmp/grass.extensions.db.XXXXXX", 32, v35, v45, v46, v47, v48);
        v49 = reinterpret_cast<void**>("w+");
        eax56 = fun_8048c74(0x8067ac0, "w+", 32, v35, v50, v51, v52, v53, v54, v55);
        v57 = eax56;
        if (!v57) {
            eax62 = fun_8048a94(0x8067ac0, "w+", 32, v35, v58, v59, v60, v61);
            v63 = *eax62;
            eax68 = fun_8048ad4(v63, "w+", 32, v35, v64, v65, v66, v67);
            v35 = eax68;
            v34 = reinterpret_cast<void**>(0x8067ac0);
            v49 = reinterpret_cast<void**>("could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
            print_error(0xffffffe8, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n", 0x8067ac0, v35, v69, v70, v71, v72, v73);
        }
    } else {
        eax79 = fun_8048a94(v24, "r", v10, v74, v75, v76, v77, v78);
        if (*eax79 == 2) {
            goto addr_804f00c_6;
        } else {
            fun_8048c44(v33, "r", v10, v80, v81, v82, v83, v84, v85, v86, v7, v6, v87, v88, v89);
            eax95 = fun_8048a94(v33, "r", v10, v90, v91, v92, v93, v94);
            v96 = *eax95;
            eax102 = fun_8048ad4(v96, "r", v10, v97, v98, v99, v100, v101);
            v35 = eax102;
            print_error(0xffffffe8, "checking for file '%s': %s\n", reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, v35, v103, v104, v105, v106, v107);
            goto addr_804ecd4_2;
        }
    }
    atexit(exit_db, v49, v34, v35, v108, v109, v110, v111);
    eax112 = VERBOSE;
    if (!eax112) {
        v113 = v7;
        v114 = reinterpret_cast<void**>(0x80672c0);
        v115 = v7;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;", 0x8067ac0, v115, 0x80672c0, v113, 0x80672c0, v116, v117, v118, v7, v6, v119, v120, v57, v33, v121);
    } else {
        v114 = v7;
        v115 = v7;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;", 0x8067ac0, v115, v114, v122, v123, v124, v125, v126, v7, v6, v127, v128, v57, v33, v129);
    }
    fun_8048c84(0x80692e0, reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, 0x8067ac0, v115, v114, v113, 0x80672c0, v130, v131, v132, v7, v6, v133, v134, v57, v33, v135);
    v136 = reinterpret_cast<struct s4*>(0);
    while (v10 = v33, v23 = reinterpret_cast<void**>(0x800), v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4), eax142 = fun_8048ba4(v24, 0x800, v10, v115, v114, v113, 0x80672c0, v137, v138, v139, v7, v6, v140, v141, v57), !!eax142) {
        v136 = reinterpret_cast<struct s4*>(&v136->f1);
    }
    if (v136) {
        fun_8048b24(v33, 0x800, v10, v115, v114, v113, 0x80672c0, v143, v144, v145, v7, v6, v146, v147, v57);
        eax153 = fun_8048b74(&v136->f1, 4, v10, v115, v114, v113, 0x80672c0, v148, v149, v150, v7, v6, v151, v152, v57);
        v154 = eax153;
        v155 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<signed char>(&v136->f1) > reinterpret_cast<signed char>(v155)) {
            *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v155) << 2) + reinterpret_cast<unsigned char>(v154)) = reinterpret_cast<void**>(0);
            ++v155;
        }
        v156 = reinterpret_cast<void**>(0);
        while (eax162 = fun_8048ba4(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, 0x800, v33, v115, v114, v113, 0x80672c0, v157, v158, v159, v7, v6, v160, v161, v57), !!eax162) {
            eax168 = fun_8048c64(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, 0x800, v33, v115, v114, v113, 0x80672c0, v163, v164, v165, v7, v6, v166, v167, v57);
            eax174 = fun_8048d24(&eax168->f1, 0x800, v33, v115, v114, v113, 0x80672c0, v169, v170, v171, v7, v6, v172, v173, v57);
            *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v156) << 2) + reinterpret_cast<unsigned char>(v154)) = eax174;
            eax175 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v156) << 2) + reinterpret_cast<unsigned char>(v154));
            fun_8048c84(eax175, reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, v33, v115, v114, v113, 0x80672c0, v176, v177, v178, v7, v6, v179, v180, v57, v33, v156);
            ++v156;
        }
        v10 = v154;
        v23 = v7;
        delete_ext_html(v6, v23, v10, v115, v114, v113, 0x80672c0);
        v181 = 0;
        while (*reinterpret_cast<void***>((v181 << 2) + reinterpret_cast<unsigned char>(v154))) {
            v23 = *reinterpret_cast<void***>((v181 << 2) + reinterpret_cast<unsigned char>(v154));
            fun_8048ce4(v57, v23, v10, v115, v114, v113, 0x80672c0, v182, v183, v184, v7, v6, v185, v186, v57);
            ++v181;
        }
        fun_8048c04(v57, v23, v10, v115, v114, v113, 0x80672c0, v187, v188, v189, v7, v6, v190, v191, v57);
        fun_8048c44(v33, v23, v10, v115, v114, v113, 0x80672c0, v192, v193, v194, v7, v6, v195, v196, v57);
        fun_8048c44(v57, v23, v10, v115, v114, v113, 0x80672c0, v197, v198, v199, v7, v6, v200, v201, v57);
        v202 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<signed char>(&v136->f1) > reinterpret_cast<signed char>(v202)) {
            v203 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v202) << 2) + reinterpret_cast<unsigned char>(v154));
            fun_8048bf4(v203, v23, v10, v115, v114, v113, 0x80672c0, v204, v205, v206, v7, v6, v207, v208, v57);
            ++v202;
        }
        v24 = v154;
        fun_8048bf4(v24, v23, v10, v115, v114, v113, 0x80672c0, v209, v210, v211, v7, v6, v212, v213, v57);
    }
    addr_804f00c_6:
    eax214 = reinterpret_cast<void**>(v9 ^ g14);
    if (eax214) {
        eax214 = fun_8048d34(v24, v23, v10, v115, v114, v113, 0x80672c0, v215, v216, v217, v7, v6, v218, v219, v57, v33, v202);
    }
    return eax214;
}

void** restore_html(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** v6;
    uint32_t eax7;
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
    void** v31;
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
    void** v58;
    void** v59;
    void** v60;
    int32_t* eax61;
    int32_t v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** eax67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    int32_t* eax78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    int32_t* eax95;
    int32_t v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** eax102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** eax108;
    void** eax109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** eax156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    struct s2* eax162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    int32_t eax175;
    void** v176;
    void** v177;
    void** v178;
    void** v179;
    int32_t eax180;
    void** v181;
    void** v182;
    void** v183;
    void** eax184;
    void** v185;
    void** v186;
    void** v187;
    void** v188;
    void** v189;
    void** v190;
    void* v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    int32_t eax199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    void** v213;
    void** eax214;
    void** v215;
    void* v216;
    int32_t v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    void** v223;
    void** v224;
    int32_t eax225;
    void** v226;
    void** v227;
    void** v228;
    void** v229;
    void** v230;
    void** v231;
    void** v232;
    struct s1* eax233;
    void** v234;
    void** v235;
    void** v236;
    void** v237;
    void** v238;
    void** v239;
    void** v240;
    void** eax241;
    void** eax242;
    void** v243;
    void** v244;
    void** v245;
    void** v246;
    void** v247;
    void** v248;
    void** v249;
    void** v250;
    void** v251;
    void** v252;
    void** v253;
    void** eax254;
    void** v255;
    void** v256;
    void** v257;
    void** v258;
    void** v259;
    struct s2* eax260;
    struct s2* v261;
    void** v262;
    void** v263;
    void** v264;
    void** v265;
    void** v266;
    void** v267;
    void** v268;
    void** v269;
    int32_t eax270;
    void** v271;
    void** v272;
    void** v273;
    void** v274;
    int32_t eax275;
    void** v276;
    void** v277;
    void** v278;
    void** eax279;
    void** v280;
    void** v281;
    void** v282;
    void** v283;
    void** v284;
    void** v285;
    void** v286;
    void** v287;
    void** v288;
    void** v289;
    void** eax290;
    void** v291;
    int32_t v292;
    void** v293;
    void** v294;
    void** v295;
    void** v296;
    int32_t eax297;
    void** v298;
    int32_t eax299;
    void** v300;
    void** v301;
    void** v302;
    void** v303;
    void** eax304;
    void** v305;
    void** v306;
    void** v307;
    void** v308;
    void** v309;
    void** v310;
    void** v311;
    void** v312;
    void** v313;
    int32_t v314;
    void** v315;
    void** v316;
    void** v317;
    void** v318;
    void** v319;
    void** v320;
    void** v321;
    void** v322;
    void** v323;
    void** v324;
    void** v325;
    void** v326;
    void** v327;
    void** v328;
    void** v329;
    void** v330;
    void* v331;
    void** v332;
    void** v333;
    void** v334;
    void** v335;
    void** v336;
    void** v337;
    void** v338;
    void** v339;
    void** v340;
    uint32_t edx341;
    void** v342;
    void** v343;
    void** v344;
    void** v345;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v6 = a1;
    eax7 = g14;
    v8 = eax7;
    v9 = v6;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, "%s/docs/html/index.html", v9, v10, v11, v12, v13, v14, v15, v16, v17, v6, v18, v19, v20, v21, v22);
    v23 = reinterpret_cast<void**>("r");
    v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffeff4);
    eax32 = fun_8048c74(v24, "r", v9, v25, v26, v27, v28, v29, v30, v31);
    v33 = eax32;
    if (v33) {
        addr_804f0e0_2:
        fun_8048c54(0x8067ac0, "/tmp/grass.extensions.db.XXXXXX", 32, v34, v35, v36, v37, v38, v39, v40, v41, v6, v42, v43, v44);
        fun_8048c14(0x8067ac0, "/tmp/grass.extensions.db.XXXXXX", 32, v34, v45, v46, v47, v48);
        eax55 = fun_8048c74(0x8067ac0, "w+", 32, v34, v49, v50, v51, v52, v53, v54);
        v56 = eax55;
        if (!v56) {
            eax61 = fun_8048a94(0x8067ac0, "w+", 32, v34, v57, v58, v59, v60);
            v62 = *eax61;
            eax67 = fun_8048ad4(v62, "w+", 32, v34, v63, v64, v65, v66);
            print_error(0xffffffe8, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n", 0x8067ac0, eax67, v68, v69, v70, v71, v72);
        }
    } else {
        eax78 = fun_8048a94(v24, "r", v9, v73, v74, v75, v76, v77);
        if (*eax78 != 2) {
            fun_8048c44(v33, "r", v9, v79, v80, v81, v82, v83, v84, v85, v86, v6, v87, v88, v89);
            eax95 = fun_8048a94(v33, "r", v9, v90, v91, v92, v93, v94);
            v96 = *eax95;
            eax102 = fun_8048ad4(v96, "r", v9, v97, v98, v99, v100, v101);
            v34 = eax102;
            print_error(0xffffffe8, "checking for file '%s': %s\n", reinterpret_cast<int32_t>(ebp5) + 0xffffeff4, v34, v103, v104, v105, v106, v107);
            goto addr_804f0e0_2;
        } else {
            eax108 = reinterpret_cast<void**>(0);
            goto addr_804f7cb_7;
        }
    }
    eax109 = VERBOSE;
    if (!eax109) {
        v110 = v6;
        v111 = reinterpret_cast<void**>(0x80672c0);
        v112 = v6;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;", 0x8067ac0, v112, 0x80672c0, v110, 0x80672c0, v113, v114, v115, v116, v6, v117, v118, v119, v120, v121);
    } else {
        v111 = v6;
        v112 = v6;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;", 0x8067ac0, v112, v111, v122, v123, v124, v125, v126, v127, v6, v128, v129, v130, v131, v132);
    }
    v133 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4);
    fun_8048c84(0x80692e0, v133, 0x8067ac0, v112, v111, v110, 0x80672c0, v134, v135, v136, v137, v6, v138, v139, v140, v141, v142);
    atexit(exit_db, v133, 0x8067ac0, v112, v111, v110, 0x80672c0, v143);
    v9 = v6;
    v23 = reinterpret_cast<void**>("%s/docs/extensions");
    fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffdff4, "%s/docs/extensions", v9, v112, v111, v110, 0x80672c0, v144, v145, v146, v147, v6, v148, v149, v150, v151, v152);
    v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffdff4);
    eax156 = fun_8048c24(v24, "%s/docs/extensions", v9, v112, v111, v110, 0x80672c0, v153, v154, v155);
    v157 = eax156;
    if (v157) {
        v158 = reinterpret_cast<void**>(0);
        while (eax162 = fun_8048bd4(v157, v23, v9, v112, v111, v110, 0x80672c0, v159, v160, v161), !!eax162) {
            v112 = reinterpret_cast<void**>(&eax162->fb);
            v9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffdff4);
            fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffd7f4, "%s/%s", v9, v112, v111, v110, 0x80672c0, v163, v164, v165, v166, v6, v167, v168, v169, v158, v170);
            v23 = reinterpret_cast<void**>(".");
            eax175 = fun_8048da4(&eax162->fb, ".", v9, v112, v111, v110, 0x80672c0, v171, v172, v173, v174, v6);
            if (eax175) {
                v23 = reinterpret_cast<void**>("..");
                eax180 = fun_8048da4(&eax162->fb, "..", v9, v112, v111, v110, 0x80672c0, v176, v177, v178, v179, v6);
                if (eax180) {
                    eax184 = fun_8048c24(reinterpret_cast<int32_t>(ebp5) + 0xffffd7f4, "..", v9, v112, v111, v110, 0x80672c0, v181, v182, v183);
                    if (eax184) {
                        ++v158;
                        fun_8048cb4(eax184, "..", v9, v112, v111, v110, 0x80672c0, v185, v186, v187);
                    }
                }
            }
        }
        fun_8048cb4(v157, v23, v9, v112, v111, v110, 0x80672c0, v188, v189, v190);
        v191 = reinterpret_cast<void*>(0);
        while (v9 = v33, v23 = reinterpret_cast<void**>(0x800), v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4), eax199 = fun_8048ba4(v24, 0x800, v9, v112, v111, v110, 0x80672c0, v192, v193, v194, v195, v6, v196, v197, v198), !!eax199) {
            v191 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v191) + 1);
        }
        if (!v191) 
            goto addr_804f373_25;
    } else {
        eax108 = reinterpret_cast<void**>(0);
        goto addr_804f7cb_7;
    }
    fun_8048b24(v33, 0x800, v9, v112, v111, v110, 0x80672c0, v200, v201, v202, v203, v6, v204, v205, v206);
    eax214 = fun_8048b74(reinterpret_cast<int32_t>(v191) + reinterpret_cast<unsigned char>(v158) + 10, 4, v9, v112, v111, v110, 0x80672c0, v207, v208, v209, v210, v6, v211, v212, v213);
    v215 = eax214;
    v216 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(v191) + reinterpret_cast<unsigned char>(v158) + 10) > reinterpret_cast<int32_t>(v216)) {
        *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v216) << 2) + reinterpret_cast<unsigned char>(v215)) = reinterpret_cast<void**>(0);
        v216 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v216) + 1);
    }
    v217 = 0;
    while (v9 = v33, v23 = reinterpret_cast<void**>(0x800), eax225 = fun_8048ba4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, 0x800, v9, v112, v111, v110, 0x80672c0, v218, v219, v220, v221, v6, v222, v223, v224), !!eax225) {
        eax233 = fun_8048c64(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, 0x800, v9, v112, v111, v110, 0x80672c0, v226, v227, v228, v229, v6, v230, v231, v232);
        eax241 = fun_8048d24(&eax233->f1, 0x800, v9, v112, v111, v110, 0x80672c0, v234, v235, v236, v237, v6, v238, v239, v240);
        *reinterpret_cast<void***>((v217 << 2) + reinterpret_cast<unsigned char>(v215)) = eax241;
        eax242 = *reinterpret_cast<void***>((v217 << 2) + reinterpret_cast<unsigned char>(v215));
        fun_8048c84(eax242, reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, v9, v112, v111, v110, 0x80672c0, v243, v244, v245, v246, v6, v247, v248, v249, v158, v250);
        ++v217;
    }
    *reinterpret_cast<void***>((v217 << 2) + reinterpret_cast<unsigned char>(v215)) = reinterpret_cast<void**>(0);
    eax254 = fun_8048c24(reinterpret_cast<int32_t>(ebp5) + 0xffffdff4, 0x800, v9, v112, v111, v110, 0x80672c0, v251, v252, v253);
    v255 = eax254;
    v256 = reinterpret_cast<void**>(0);
    while (eax260 = fun_8048bd4(v255, v23, v9, v112, v111, v110, 0x80672c0, v257, v258, v259), v261 = eax260, !!v261) {
        v112 = reinterpret_cast<void**>(&v261->fb);
        v9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffdff4);
        fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffd7f4, "%s/%s", v9, v112, v111, v110, 0x80672c0, v262, v263, v264, v265, v6, 0, 0, 0, v158, v256);
        v23 = reinterpret_cast<void**>(".");
        eax270 = fun_8048da4(&v261->fb, ".", v9, v112, v111, v110, 0x80672c0, v266, v267, v268, v269, v6);
        if (!eax270) {
            continue;
        }
        v23 = reinterpret_cast<void**>("..");
        eax275 = fun_8048da4(&v261->fb, "..", v9, v112, v111, v110, 0x80672c0, v271, v272, v273, v274, v6);
        if (!eax275) {
            continue;
        }
        eax279 = fun_8048c24(reinterpret_cast<int32_t>(ebp5) + 0xffffd7f4, "..", v9, v112, v111, v110, 0x80672c0, v276, v277, v278);
        if (!eax279) {
            continue;
        }
        fun_8048cb4(eax279, "..", v9, v112, v111, v110, 0x80672c0, v280, v281, v282);
        v9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffd7f4);
        fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4, "%s/index.html", v9, v112, v111, v110, 0x80672c0, v283, v284, v285, v286, v6, 0, 0, 0, v158, v256);
        v23 = reinterpret_cast<void**>("r");
        eax290 = fun_8048c74(reinterpret_cast<int32_t>(ebp5) + 0xffffe7f4, "r", v9, v112, v111, v110, 0x80672c0, v287, v288, v289);
        v291 = eax290;
        if (!v291) {
            continue;
        }
        v292 = 0;
        do {
            v9 = v291;
            v23 = reinterpret_cast<void**>(0x800);
            eax297 = fun_8048ba4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, 0x800, v9, v112, v111, v110, 0x80672c0, v293, v294, v295, v296, v6, 0, 0, 0);
            if (!eax297) 
                break;
            v23 = reinterpret_cast<void**>("<title>");
            eax299 = fun_8048cf4(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, "<title>", v9, v112, v111, v110, 0x80672c0, v298);
        } while (!eax299);
        goto addr_804f5e1_46;
        addr_804f611_47:
        if (!v292) {
            continue;
        } else {
            eax304 = fun_8048b54(reinterpret_cast<int32_t>(ebp5) + 0xfffff7f4, 40, v9, v112, v111, v110, 0x80672c0, v300, v301, v302, v303, v6, 0, 0, 0);
            fun_8048b34(eax304 + 1, "%i.%i.%i", reinterpret_cast<int32_t>(ebp5) + 0xffffd7c0, reinterpret_cast<int32_t>(ebp5) + 0xffffd7bc, reinterpret_cast<int32_t>(ebp5) + 0xffffd7b8, v110, 0x80672c0, v305, v306);
            v110 = reinterpret_cast<void**>(0);
            v111 = reinterpret_cast<void**>(0);
            v112 = reinterpret_cast<void**>(0);
            v9 = v215;
            v23 = v6;
            new_ext_html(&v261->fb, v23, v9, 0, 0, 0, 0x80672c0);
            ++v256;
            fun_8048c44(v291, v23, v9, 0, 0, 0, 0x80672c0, v307, v308, v309, v310, v6, 0, 0, 0);
            continue;
        }
        addr_804f5e1_46:
        v292 = 1;
        goto addr_804f611_47;
    }
    fun_8048cb4(v255, v23, v9, v112, v111, v110, 0x80672c0, v311, v312, v313);
    v314 = 0;
    while (*reinterpret_cast<void***>((v314 << 2) + reinterpret_cast<unsigned char>(v215))) {
        v23 = *reinterpret_cast<void***>((v314 << 2) + reinterpret_cast<unsigned char>(v215));
        fun_8048ce4(v56, v23, v9, v112, v111, v110, 0x80672c0, v315, v316, v317, v318, v6, 0, 0, 0);
        ++v314;
    }
    fun_8048c04(v56, v23, v9, v112, v111, v110, 0x80672c0, v319, v320, v321, v322, v6, 0, 0, 0);
    fun_8048c44(v33, v23, v9, v112, v111, v110, 0x80672c0, v323, v324, v325, v326, v6, 0, 0, 0);
    fun_8048c44(v56, v23, v9, v112, v111, v110, 0x80672c0, v327, v328, v329, v330, v6, 0, 0, 0);
    v331 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(v191) + reinterpret_cast<unsigned char>(v158) + 10) > reinterpret_cast<int32_t>(v331)) {
        v332 = *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v331) << 2) + reinterpret_cast<unsigned char>(v215));
        fun_8048bf4(v332, v23, v9, v112, v111, v110, 0x80672c0, v333, v334, v335, v336, v6, 0, 0, 0);
        v331 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v331) + 1);
    }
    v24 = v215;
    fun_8048bf4(v24, v23, v9, v112, v111, v110, 0x80672c0, v337, v338, v339, v340, v6, 0, 0, 0);
    eax108 = v256;
    addr_804f7cb_7:
    edx341 = v8 ^ g14;
    if (edx341) {
        eax108 = fun_8048d34(v24, v23, v9, v112, v111, v110, 0x80672c0, v342, v343, v344, v345, v6, 0, 0, 0, v158, v256);
    }
    return eax108;
    addr_804f373_25:
    eax108 = reinterpret_cast<void**>(0);
    goto addr_804f7cb_7;
}

void** fun_8048ac4(void** a1, void** a2, void** a3, void** a4, void** a5);

void** mkdir_s(void** a1, void** a2, void** a3, void** a4);

void** exit_tmp();

void** basename(void** a1, void** a2, void** a3, void** a4, void** a5);

void** unpack_extension(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    uint32_t eax7;
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
    int32_t* eax32;
    int32_t v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** eax38;
    void** v39;
    void** v40;
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
    void** eax51;
    void** eax52;
    void** v53;
    void** v54;
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
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** eax83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
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
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** eax105;
    void** v106;
    void** eax107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** eax117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** eax126;
    void** eax127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** eax136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** eax145;
    void** eax146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** eax155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** eax164;
    void** eax165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** eax174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
    void** v179;
    void** v180;
    void** v181;
    void** v182;
    void** v183;
    void** v184;
    void** v185;
    void** eax186;
    void** v187;
    void** v188;
    void** v189;
    void** v190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    void** eax213;
    void** v214;
    void** v215;
    void** v216;
    void** v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g14;
    eax8 = stdout;
    fun_8048cd4("Uncompressing files...", 1, 22, eax8, v9);
    fun_8048c54(0x80632c0, "/tmp/grass.extension.XXXXXX", 28, eax8, v10, v11, v12, v13, v14, v15, v16, a1, v17, v18, v19);
    fun_8048c14(0x80632c0, "/tmp/grass.extension.XXXXXX", 28, eax8, v20, v21, v22, v23);
    v24 = reinterpret_cast<void**>(0x1ff);
    v25 = reinterpret_cast<void**>(64);
    eax27 = fun_8048ac4(0x80632c0, 64, 0x1ff, eax8, v26);
    if (reinterpret_cast<int1_t>(eax27 == 0xffffffff)) {
        eax32 = fun_8048a94(0x80632c0, 64, 0x1ff, eax8, v28, v29, v30, v31);
        v33 = *eax32;
        eax38 = fun_8048ad4(v33, 64, 0x1ff, eax8, v34, v35, v36, v37);
        v24 = eax38;
        v25 = reinterpret_cast<void**>("could not create temp directory name: %s");
        print_error(0xfffffff9, "could not create temp directory name: %s", v24, eax8, v39, v40, v41, v42, v43);
        fun_8048db4(0xfffffff9, "could not create temp directory name: %s", v24, eax8, v44, v45, v46, v47, v48, v49, v50);
    }
    eax51 = VERBOSE;
    if (eax51) {
        eax52 = stdout;
        v24 = reinterpret_cast<void**>(0x80632c0);
        v25 = reinterpret_cast<void**>("\nUncompressing to: %s.\n");
        fun_8048ce4(eax52, "\nUncompressing to: %s.\n", 0x80632c0, eax8, v53, v54, v55, v56, v57, v58, v59, a1, v60, eax27, v61);
    }
    fun_8048cc4(eax27, v25, v24, eax8);
    fun_8048d14(0x80632c0, v25, v24, eax8);
    mkdir_s(0x80632c0, "0700", v24, eax8);
    atexit(exit_tmp, "0700", v24, eax8, v62, v63, v64, v65);
    v66 = reinterpret_cast<void**>(0x80632c0);
    v67 = a1;
    v68 = reinterpret_cast<void**>("cp %s %s");
    fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "cp %s %s", v67, 0x80632c0, v69, v70, v71, v72, v73, v74, v75, a1, v76, eax27, v77, v78, v79);
    eax83 = fun_8048b84(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "cp %s %s", v67, 0x80632c0, v80, v81, v82);
    if (reinterpret_cast<signed char>(eax83) < reinterpret_cast<signed char>(0)) {
        v68 = reinterpret_cast<void**>("could not copy extension files to temp dir.\n");
        print_error(0xfffffff9, "could not copy extension files to temp dir.\n", v67, 0x80632c0, v84, v85, v86, v87, v88);
        fun_8048db4(0xfffffff9, "could not copy extension files to temp dir.\n", v67, 0x80632c0, v89, v90, v91, v92, v93, v94, v95);
    }
    eax96 = check_filetype(a1, v68, v67, 0x80632c0);
    v97 = eax96;
    if (!v97) {
        print_warning("file name not '.tar.gz', '.tgz', '.tar.bz2', '.tbz' or '.zip'. Assuming '.tgz'.\n", v68, v67, 0x80632c0, v98, v99, v100, v101, v102, v103, v104, a1, v97, eax27, eax83);
        v97 = reinterpret_cast<void**>(1);
    }
    if (reinterpret_cast<int1_t>(v97 == 1)) {
        eax105 = VERBOSE;
        if (!eax105) {
            eax107 = basename(a1, v68, v67, 0x80632c0, v106);
            v66 = eax107;
            v67 = reinterpret_cast<void**>(0x80632c0);
            v68 = reinterpret_cast<void**>("tar -xzf %s/%s -C %s");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "tar -xzf %s/%s -C %s", 0x80632c0, v66, 0x80632c0, v108, v109, v110, v111, v112, v113, a1, v97, eax27, eax83, v114, v115);
        } else {
            eax117 = basename(a1, v68, v67, 0x80632c0, v116);
            v66 = eax117;
            v67 = reinterpret_cast<void**>(0x80632c0);
            v68 = reinterpret_cast<void**>("tar -xzvf %s/%s -C %s");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "tar -xzvf %s/%s -C %s", 0x80632c0, v66, 0x80632c0, v118, v119, v120, v121, v122, v123, a1, v97, eax27, eax83, v124, v125);
        }
    }
    if (reinterpret_cast<int1_t>(v97 == 2)) {
        eax126 = VERBOSE;
        if (!eax126) {
            eax127 = basename(a1, v68, v67, v66, 0x80632c0);
            v66 = eax127;
            v67 = reinterpret_cast<void**>(0x80632c0);
            v68 = reinterpret_cast<void**>("tar -xjvf %s/%s -C %s");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "tar -xjvf %s/%s -C %s", 0x80632c0, v66, 0x80632c0, v128, v129, v130, v131, v132, v133, a1, v97, eax27, eax83, v134, v135);
        } else {
            eax136 = basename(a1, v68, v67, v66, 0x80632c0);
            v66 = eax136;
            v67 = reinterpret_cast<void**>(0x80632c0);
            v68 = reinterpret_cast<void**>("tar -xjvf %s/%s -C %s");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "tar -xjvf %s/%s -C %s", 0x80632c0, v66, 0x80632c0, v137, v138, v139, v140, v141, v142, a1, v97, eax27, eax83, v143, v144);
        }
    }
    if (reinterpret_cast<int1_t>(v97 == 3)) {
        eax145 = VERBOSE;
        if (!eax145) {
            eax146 = basename(a1, v68, v67, v66, 0x80632c0);
            v66 = eax146;
            v67 = reinterpret_cast<void**>(0x80632c0);
            v68 = reinterpret_cast<void**>("unzip -qq %s/%s -d %s");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "unzip -qq %s/%s -d %s", 0x80632c0, v66, 0x80632c0, v147, v148, v149, v150, v151, v152, a1, v97, eax27, eax83, v153, v154);
        } else {
            eax155 = basename(a1, v68, v67, v66, 0x80632c0);
            v66 = eax155;
            v67 = reinterpret_cast<void**>(0x80632c0);
            v68 = reinterpret_cast<void**>("unzip %s/%s -d %s");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "unzip %s/%s -d %s", 0x80632c0, v66, 0x80632c0, v156, v157, v158, v159, v160, v161, a1, v97, eax27, eax83, v162, v163);
        }
    }
    if (reinterpret_cast<int1_t>(v97 == 4)) {
        eax164 = VERBOSE;
        if (!eax164) {
            eax165 = basename(a1, v68, v67, v66, 0x80632c0);
            v66 = eax165;
            v67 = reinterpret_cast<void**>(0x80632c0);
            v68 = reinterpret_cast<void**>("tar -xf %s/%s -C %s");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "tar -xf %s/%s -C %s", 0x80632c0, v66, 0x80632c0, v166, v167, v168, v169, v170, v171, a1, v97, eax27, eax83, v172, v173);
        } else {
            eax174 = basename(a1, v68, v67, v66, 0x80632c0);
            v66 = eax174;
            v67 = reinterpret_cast<void**>(0x80632c0);
            v68 = reinterpret_cast<void**>("tar -xvf %s/%s -C %s");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "tar -xvf %s/%s -C %s", 0x80632c0, v66, 0x80632c0, v175, v176, v177, v178, v179, v180, a1, v97, eax27, eax83, v181, v182);
        }
    }
    v183 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4);
    eax186 = fun_8048b84(v183, v68, v67, v66, 0x80632c0, v184, v185);
    if (reinterpret_cast<signed char>(eax186) < reinterpret_cast<signed char>(0)) {
        if (reinterpret_cast<int1_t>(v97 == 1)) {
            v67 = a1;
            v68 = reinterpret_cast<void**>("could not extract files using 'tar' and 'gzip'. \n \t\t\t\t\tExtract manually using 'tar -xzvf %s'.\n");
            print_error(0xfffffff9, "could not extract files using 'tar' and 'gzip'. \n \t\t\t\t\tExtract manually using 'tar -xzvf %s'.\n", v67, v66, 0x80632c0, v187, v188, v189, v190);
        }
        if (reinterpret_cast<int1_t>(v97 == 2)) {
            v67 = a1;
            v68 = reinterpret_cast<void**>("could not extract files using 'tar' and 'bunzip2'.\n \t\t\t\tExtract manually using 'tar -xjvf %s'.\n");
            print_error(0xfffffff9, "could not extract files using 'tar' and 'bunzip2'.\n \t\t\t\tExtract manually using 'tar -xjvf %s'.\n", v67, v66, 0x80632c0, v191, v192, v193, v194);
        }
        if (reinterpret_cast<int1_t>(v97 == 3)) {
            v67 = a1;
            v68 = reinterpret_cast<void**>("could not extract files using 'unzip'.\n \t\t\t\tExtract manually using 'unzip %s'.\n");
            print_error(0xfffffff9, "could not extract files using 'unzip'.\n \t\t\t\tExtract manually using 'unzip %s'.\n", v67, v66, 0x80632c0, v195, v196, v197, v198);
        }
        v183 = reinterpret_cast<void**>(0xfffffff9);
        fun_8048db4(0xfffffff9, v68, v67, v66, 0x80632c0, v199, v200, v201, v202, v203, v204);
    }
    print_done(v183, v68, v67, v66, 0x80632c0, v205, v206, v207, v208, v209, v210, a1, v97, eax27, eax186, v211, v212);
    eax213 = reinterpret_cast<void**>(eax7 ^ g14);
    if (eax213) {
        eax213 = fun_8048d34(v183, v68, v67, v66, 0x80632c0, v214, v215, v216, v217, v218, v219, a1, v97, eax27, eax186, v220, v221);
    }
    return eax213;
}

void** basename(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    uint32_t eax38;
    void** v39;
    void** v40;
    void** v41;
    void** eax42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** eax48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebp8;
    eax16 = fun_8048d94(a1, v9, v10, v11, v12, v13, v14, v15);
    v17 = eax16;
    eax22 = fun_8048d54(v17, "/", v18, v19, v20, 0, v21, v17);
    v23 = eax22;
    if (v23) {
        eax27 = fun_8048d94(v23, "/", v24, v25, v26, 0, v23, v17);
        v28 = eax27;
        while (v23) {
            eax32 = fun_8048d54(0, "/", v29, v30, v31, v28, v23, v17);
            v23 = eax32;
            if (v28 && v23) {
                fun_8048bf4(v28, "/", v33, v34, v35, v28, v23, v17, v36, v37, v7, v6, a1, a2, a3);
            }
            if (!v23) 
                continue;
            eax38 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v23));
            if (!*reinterpret_cast<signed char*>(&eax38)) 
                continue;
            eax42 = fun_8048d94(v23, "/", v39, v40, v41, v28, v23, v17);
            v28 = eax42;
        }
        if (v17) 
            goto addr_804960d_10;
    } else {
        if (v17) {
            fun_8048bf4(v17, "/", v43, v44, v45, 0, v23, v17, v46, v47, v7, v6, a1, a2, a3);
        }
        eax48 = reinterpret_cast<void**>(0);
        goto addr_804961b_14;
    }
    addr_8049618_15:
    eax48 = v28;
    addr_804961b_14:
    return eax48;
    addr_804960d_10:
    fun_8048bf4(v17, "/", v49, v50, v51, v28, v23, v17, v52, v53, v7, v6, a1, a2, a3);
    goto addr_8049618_15;
}

void** dump_ascii(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** list_binaries(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void fun_8048a84(void* a1, void** a2, void** a3, void** a4);

void query_extension(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* esp9;
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
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** eax29;
    void*** esp30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    int32_t* eax37;
    int32_t v38;
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
    void** v49;
    void** v50;
    void** eax51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** eax63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** eax69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void* ebp81;
    uint32_t eax82;
    uint32_t v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** eax93;
    void** v94;
    void** eax95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    int32_t eax109;
    void** eax110;
    void** eax111;
    uint32_t eax112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;

    esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax14 = basename(a1, v10, v11, v12, v13);
    fun_8048c84(reinterpret_cast<int32_t>(esp9) + 0xfffff7f4, eax14, v15, v16, v17, v18, v19, v20, v21, v22, v23, a8, a7, a6, a2, a1, v24);
    v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp9) + 0xfffff7f4);
    eax29 = fun_8048c94(v25, eax14, v26, v27, v28);
    esp30 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp9) - 0x858 - 4 + 4 - 4 + 4 - 4 + 4);
    if (reinterpret_cast<signed char>(eax29) < reinterpret_cast<signed char>(0)) {
        eax37 = fun_8048a94(v25, eax14, v31, v32, v33, v34, v35, v36);
        v38 = *eax37;
        eax45 = fun_8048ad4(v38, eax14, v39, v40, v41, v42, v43, v44);
        print_error(0xfffffffe, "extension '%s' not accessible: %s\n", a1, eax45, v46, v47, v48, v49, v50);
        esp30 = esp30 - 4 + 4 - 4 + 4 - 4 + 4;
    }
    eax51 = stdout;
    fun_8048ce4(eax51, "\nExtension '%s', version %i.%i.%i\n\n", a2, a3, a4, a5, v52, v53, v54, v55, v56, a8, a7, a6, a2);
    dump_ascii("description", "Description", a2, a3, a4, a5);
    dump_ascii("commands", "Commands provided", a2, a3, a4, a5);
    dump_ascii("libs", "Libraries provided", a2, a3, a4, a5);
    dump_ascii("headers", "Header files provided", a2, a3, a4, a5);
    dump_ascii("depends", "Dependencies", a2, a3, a4, a5);
    dump_ascii("bugs", "Bugs", a2, a3, a4, a5);
    fun_8048aa4(reinterpret_cast<int32_t>(esp9) + 0xfffff7f4, "../%s", a1, a3, a4, a5, v57, v58, v59, v60, v61, a8, a7, a6, a2, a1, v62);
    list_binaries(reinterpret_cast<int32_t>(esp9) + 0xfffff7f4, "../%s", a1, a3, a4, a5);
    dump_ascii("authors", "Author(s)", a1, a3, a4, a5);
    eax63 = stdout;
    fun_8048ce4(eax63, "Type '%s -d %s' to see more detailed information.\n", a7, a8, a4, a5, v64, v65, v66, v67, v68, a8, a7, a6, a2);
    eax69 = stdout;
    fun_8048ce4(eax69, "Type '%s -l %s' to see copyright information.\n", a7, a8, a4, a5, v70, v71, v72, v73, v74, a8, a7, a6, a2);
    fun_8048b84("sh post", "Type '%s -l %s' to see copyright information.\n", a7, a8, a4, a5, v75);
    fun_8048db4(0, "Type '%s -l %s' to see copyright information.\n", a7, a8, a4, a5, v76, v77, v78, v79, v80);
    ebp81 = reinterpret_cast<void*>(esp30 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
    eax82 = g14;
    v83 = eax82;
    v84 = reinterpret_cast<void**>("r");
    eax93 = fun_8048c74("config.msg", "r", v85, v86, v87, v88, v89, v90, v91, v92);
    v94 = eax93;
    if (v94) {
        eax95 = stdout;
        v96 = eax95;
        fun_8048cd4("\nResult of configuration: \n", 1, 27, v96, v97);
        while (v98 = v94, eax109 = fun_8048ba4(reinterpret_cast<int32_t>(ebp81) + 0xfffff7f4, 0x800, v98, v96, v99, v100, v94, v101, v102, v103, v104, v105, v106, v107, v108), !!eax109) {
            eax110 = stdout;
            fun_8048a84(reinterpret_cast<int32_t>(ebp81) - 0x80c, eax110, v98, v96);
        }
        eax111 = stdout;
        v84 = eax111;
        fun_8048d44(10, v84, v98, v96);
    }
    fun_8048d14("config.msg", v84, v98, v96);
    eax112 = v83 ^ g14;
    if (eax112) {
        fun_8048d34("config.msg", v84, v98, v96, v113, v114, v94, v115, v116, v117, v118, v119, v120, v121, v122, v123, v124);
    }
    goto 0;
}

void** dump_ascii(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** v8;
    void** v9;
    uint32_t eax10;
    uint32_t v11;
    void** eax12;
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
    void** v27;
    void** eax28;
    void** v29;
    void** v30;
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
    void** eax42;
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
    void** eax55;
    void** v56;
    void** v57;
    void** eax58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = a1;
    v9 = a2;
    eax10 = g14;
    v11 = eax10;
    eax12 = stdout;
    fun_8048ce4(eax12, "%s\n", v9, v13, v14, v15, v9, v8, v16, v17, v18, v19, v20, v21, v22);
    eax28 = fun_8048c74(v8, "r", v9, v23, v24, v25, v9, v8, v26, v27);
    v29 = eax28;
    if (v29) {
        while (v30 = v29, eax31 = nc_fgets_html(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4, 0x800, v30), !!eax31) {
            eax32 = stdout;
            fun_8048ce4(eax32, "  %s", reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4, v33, v34, v35, v9, v8, v36, v37, v29, v38, v39, v40, v41);
        }
        eax42 = stdout;
        v43 = eax42;
        fun_8048d44(10, v43, v30, v44);
        v45 = v29;
        fun_8048c44(v45, v43, v30, v46, v47, v48, v9, v8, v49, v50, v29, v51, v52, v53, v54);
    } else {
        eax55 = stdout;
        v56 = eax55;
        v30 = reinterpret_cast<void**>(28);
        v43 = reinterpret_cast<void**>(1);
        v45 = reinterpret_cast<void**>("  No information available.\n");
        fun_8048cd4("  No information available.\n", 1, 28, v56, v57);
    }
    eax58 = reinterpret_cast<void**>(v11 ^ g14);
    if (eax58) {
        eax58 = fun_8048d34(v45, v43, v30, v56, v59, v60, v9, v8, v61, v62, v29, v63, v64, v65, v66, v67, v68);
    }
    return eax58;
}

void** list_binaries(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** v8;
    uint32_t eax9;
    uint32_t v10;
    int32_t v11;
    void** eax12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** eax21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    struct s2* eax28;
    struct s2* v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    int32_t eax38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    int32_t eax46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    int32_t eax54;
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
    void** v65;
    void** v66;
    void** v67;
    uint32_t v68;
    void** eax69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** eax80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    struct s2* eax96;
    void** eax97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** eax102;
    void** v103;
    void** eax104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** eax117;
    void** v118;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = a1;
    eax9 = g14;
    v10 = eax9;
    v11 = 0;
    eax12 = stdout;
    v13 = eax12;
    v14 = reinterpret_cast<void**>(26);
    fun_8048cd4("Binary installation files\n", 1, 26, v13, v15);
    eax21 = fun_8048c24(v8, 1, 26, v13, v16, v17, v18, v8, v19, v20);
    v22 = eax21;
    if (v22) {
        eax28 = fun_8048bd4(v22, 1, 26, v13, v23, v24, v25, v8, v26, v27);
        v29 = eax28;
        while (v29) {
            v30 = reinterpret_cast<void**>(".");
            eax38 = fun_8048da4(&v29->fb, ".", v14, v13, v31, v32, v33, v8, v34, v35, v36, v37);
            if (eax38 && ((v30 = reinterpret_cast<void**>(".."), eax46 = fun_8048da4(&v29->fb, "..", v14, v13, v39, v40, v41, v8, v42, v43, v44, v45), !!eax46) && ((v30 = reinterpret_cast<void**>("src"), eax54 = fun_8048da4(&v29->fb, "src", v14, v13, v47, v48, v49, v8, v50, v51, v52, v53), !!eax54) && (v13 = reinterpret_cast<void**>(&v29->fb), v14 = v8, fun_8048aa4(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4, "%s/%s", v14, v13, v55, v56, v57, v8, v58, v59, v60, v61, v62, v63, v64, v65, v66), v30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffff790), stat(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4, v30, v14, v13, v67), (v68 & 0xf000) == 0x4000)))) {
                if (v11) {
                    eax69 = stdout;
                    v14 = reinterpret_cast<void**>(&v29->fb);
                    v30 = reinterpret_cast<void**>(", %s");
                    fun_8048ce4(eax69, ", %s", v14, v13, v70, v71, v72, v8, v73, v74, v75, v76, v77, v78, v79);
                } else {
                    eax80 = stdout;
                    v14 = reinterpret_cast<void**>(&v29->fb);
                    v30 = reinterpret_cast<void**>("  %s");
                    fun_8048ce4(eax80, "  %s", v14, v13, v81, v82, v83, v8, v84, v85, v86, v87, v88, v89, v90);
                }
                ++v11;
            }
            eax96 = fun_8048bd4(v22, v30, v14, v13, v91, v92, v93, v8, v94, v95);
            v29 = eax96;
        }
        if (!v11) 
            goto addr_804a8c9_11;
    } else {
        eax97 = stdout;
        v98 = eax97;
        v99 = reinterpret_cast<void**>(9);
        v100 = reinterpret_cast<void**>("  None.\n\n");
        fun_8048cd4("  None.\n\n", 1, 9, v98, v101);
        goto addr_804a919_13;
    }
    addr_804a8f1_14:
    eax102 = stdout;
    v98 = eax102;
    v99 = reinterpret_cast<void**>(2);
    v100 = reinterpret_cast<void**>("\n\n");
    fun_8048cd4("\n\n", 1, 2, v98, v103);
    addr_804a919_13:
    eax104 = reinterpret_cast<void**>(v10 ^ g14);
    if (eax104) {
        eax104 = fun_8048d34(v100, 1, v99, v98, v105, v106, v107, v8, v108, v109, v110, v111, v112, v113, v114, v115, v116);
    }
    return eax104;
    addr_804a8c9_11:
    eax117 = stdout;
    fun_8048cd4("  None.", 1, 7, eax117, v118);
    goto addr_804a8f1_14;
}

void fun_8048ca4(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_8048be4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

int32_t SKIP_CFG = 0;

void** print_cfg(void** a1, void** a2, void** a3, void** a4, void** a5);

void** dump_html(void** a1, void** a2, void** a3, void** a4, void** a5);

void** register_html(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** source_install(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* ebp9;
    uint32_t eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    int32_t eax15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    int32_t* eax22;
    int32_t v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
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
    void** v57;
    void** v58;
    void** v59;
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
    void** v72;
    void** v73;
    void** v74;
    void** v75;
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
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** eax112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** eax118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** eax124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** eax130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** eax136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** eax142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** eax164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
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
    int32_t* eax184;
    int32_t v185;
    void** v186;
    void** v187;
    void** v188;
    void** v189;
    void** v190;
    void** eax191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    int32_t eax198;
    void** eax199;
    void** eax200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    void** v213;
    void** eax214;
    void** v215;
    void** eax216;
    void** v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    void** v223;
    void** v224;
    void** v225;
    void** v226;
    void** v227;
    void** v228;
    void** v229;
    void** eax230;
    void** v231;
    void** v232;
    void** v233;
    void** v234;
    void** v235;
    void** v236;
    void** v237;
    void** v238;
    void** v239;
    void** v240;
    void** v241;
    void** v242;
    void** v243;
    void** v244;
    void** v245;
    void** v246;
    void** v247;
    void** v248;
    void** v249;
    void** v250;
    void** v251;
    void** v252;
    void** v253;
    void** v254;
    void** v255;
    void** v256;
    void** v257;
    void** v258;
    void** v259;
    void** v260;
    void** v261;
    void** v262;
    void** v263;
    void** v264;
    void** v265;
    void** v266;
    void** v267;
    void** v268;
    void** v269;
    void** v270;
    void** v271;
    void** v272;
    void** v273;
    void** v274;
    void** v275;
    void** v276;
    void** v277;
    void** v278;
    void** v279;
    void** v280;
    void** v281;
    void** v282;
    void** v283;
    void** v284;
    void** v285;
    void** v286;
    void** v287;
    void** v288;
    void** v289;
    void** v290;
    void** v291;
    void** v292;
    void** v293;
    void** v294;
    void** v295;
    void** v296;
    void** v297;
    void** v298;
    void** v299;
    void** v300;
    void** v301;
    void** v302;
    void** v303;
    void** v304;
    void** v305;
    void** v306;
    void** v307;
    void** v308;
    void** v309;
    void** v310;
    void** v311;
    void** v312;
    void** v313;
    void** v314;
    void** v315;
    void** v316;
    void** v317;
    void** eax318;
    void** eax319;
    void** v320;
    void** v321;
    void** v322;
    void** v323;
    void** v324;
    void** v325;
    void** v326;
    void** v327;
    void** v328;
    void** v329;
    void** v330;
    void** v331;
    void** eax332;
    void** v333;
    void** eax334;
    void** v335;
    void** v336;
    void** v337;
    void** v338;
    void** v339;
    void** v340;
    void** v341;
    void** v342;
    void** v343;
    void** v344;
    void** v345;
    void** v346;
    void** v347;
    void** v348;
    void** v349;
    void** v350;
    void** v351;
    void** eax352;
    void** eax353;
    void** v354;
    void** v355;
    void** v356;
    void** v357;
    void** v358;
    void** v359;
    void** v360;
    void** v361;
    void** v362;
    void** v363;
    void** v364;
    void** v365;
    void** v366;
    void** v367;
    void** v368;
    void** v369;
    void** eax370;
    void** v371;
    void** v372;
    void** v373;
    void** v374;
    void** v375;
    void** eax376;
    void** eax377;
    void** v378;
    void** v379;
    void** v380;
    void** v381;
    void** v382;
    void** v383;
    void** v384;
    void** v385;
    void** v386;
    void** v387;
    void** v388;
    void** v389;
    void** v390;
    void** v391;
    void** v392;
    void** v393;
    void** v394;
    void** v395;
    void** v396;
    void** v397;
    void** v398;
    void** v399;
    void** v400;
    void** v401;
    void** v402;
    void** v403;
    void** v404;
    void** v405;
    void** v406;
    void** v407;
    void** v408;
    void** v409;
    void** v410;
    void** v411;
    void** v412;
    void** v413;
    void** v414;
    void** v415;
    void** v416;
    void** v417;
    void** v418;
    void** v419;
    void** v420;
    void** v421;
    void** v422;
    int32_t* eax423;
    int32_t v424;
    void** v425;
    void** v426;
    void** v427;
    void** eax428;
    void** v429;
    void** v430;
    void** v431;
    void** v432;
    void** v433;
    void** v434;
    void** v435;
    void** eax436;
    void** v437;
    void** v438;
    void** v439;
    void** v440;
    void** v441;
    void** v442;
    void** v443;
    void** v444;
    void** eax445;
    void** v446;
    void** v447;
    void** v448;
    void** v449;
    void** v450;
    void** v451;
    void** v452;
    void** v453;
    void** v454;
    void** v455;
    void** v456;
    void** v457;
    void** v458;
    void** eax459;
    void** v460;
    void** v461;
    void** v462;
    void** v463;
    void** v464;
    void** v465;
    void** v466;
    void** v467;
    void** v468;
    void** v469;
    void** v470;
    void** v471;
    void** v472;
    void** v473;
    void** v474;
    void** v475;
    void** v476;
    void** v477;
    void** v478;
    void** v479;
    void** v480;
    void** v481;
    void** eax482;
    void** v483;
    void** v484;
    void** v485;
    void** v486;

    ebp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = g14;
    v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffd778);
    eax15 = stat(a2, v11, v12, v13, v14);
    if (eax15 < 0) {
        eax22 = fun_8048a94(a2, v11, v16, v17, v18, v19, v20, v21);
        v23 = *eax22;
        eax30 = fun_8048ad4(v23, v11, v24, v25, v26, v27, v28, v29);
        print_error(0xfffffffb, "installation directory invalid: %s\n", eax30, v31, v32, v33, v34, v35, v36);
    }
    fun_8048aa4(0x80592a0, "GINSTALL_DST=%s", a2, v37, v38, v39, v40, v41, v42, v43, v44, v45, a7, a3, a2, a1, v46);
    fun_8048ca4(0x80592a0, "GINSTALL_DST=%s", a2, v47, v48);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%s/include", a2, v49, v50, v51, v52, v53, v54, v55, v56, v57, a7, a3, a2, a1, v58);
    v59 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
    fun_8048aa4(0x8059aa0, "GINSTALL_INC=%s", v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, a7, a3, a2, a1, v69);
    fun_8048ca4(0x8059aa0, "GINSTALL_INC=%s", v59, v70, v71);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%s/lib", a2, v72, v73, v74, v75, v76, v77, v78, v79, v80, a7, a3, a2, a1, v81);
    v82 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
    fun_8048aa4(0x805a2a0, "GINSTALL_LIB=%s", v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, a7, a3, a2, a1, v92);
    fun_8048ca4(0x805a2a0, "GINSTALL_LIB=%s", v82, v93, v94);
    fun_8048aa4(0x805eaa0, "GEM_GRASS_DIR=%s", a2, v95, v96, v97, v98, v99, v100, v101, v102, v103, a7, a3, a2, a1, v104);
    fun_8048ca4(0x805eaa0, "GEM_GRASS_DIR=%s", a2, v105, v106);
    eax112 = fun_8048d94(a7, "GEM_GRASS_DIR=%s", a2, v107, v108, v109, v110, v111);
    eax118 = fun_8048d54(eax112, ".", a2, v113, v114, v115, v116, v117);
    eax124 = fun_8048d54(0, ".", a2, v119, v120, v121, v122, v123);
    eax130 = fun_8048d54(0, ".", a2, v125, v126, v127, v128, v129);
    eax136 = fun_8048be4(eax118, 0, 10, v131, v132, v133, v134, v135);
    eax142 = fun_8048be4(eax124, 0, 10, v137, v138, v139, v140, v141);
    fun_8048be4(eax130, 0, 10, v143, v144, v145, v146, v147);
    fun_8048bf4(eax112, 0, 10, v148, v149, v150, v151, v152, v153, v154, v155, v156, a7, a3, a2);
    atexit(exit_tmp, 0, 10, v157, v158, v159, v160, v161);
    eax164 = basename(a1, 0, 10, v162, v163);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4, "%s/src", eax164, v165, v166, v167, v168, v169, v170, v171, v172, v173, a7, a3, a2, a1, v174);
    v175 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4);
    eax178 = fun_8048c94(v175, "%s/src", eax164, v176, v177);
    if (reinterpret_cast<signed char>(eax178) < reinterpret_cast<signed char>(0)) {
        eax184 = fun_8048a94(v175, "%s/src", eax164, v179, v180, v181, v182, v183);
        v185 = *eax184;
        eax191 = fun_8048ad4(v185, "%s/src", eax164, v186, v187, v188, v189, v190);
        v192 = eax191;
        print_error(0xfffffffe, "extension files in '%s' not accessible: %s\n", a1, v192, v193, v194, v195, v196, v197);
    }
    eax198 = SKIP_CFG;
    if (!eax198) {
        eax199 = VERBOSE;
        if (!eax199) {
            eax200 = stdout;
            fun_8048cd4("Configuring...", 1, 14, eax200, v201);
            v192 = reinterpret_cast<void**>(0x806aae0);
            v202 = reinterpret_cast<void**>("sh %s %s --quiet &> %s");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffd7f4, "sh %s %s --quiet &> %s", 0x806b2e0, 0x806aae0, 0x80672c0, v203, v204, v205, v206, v207, v208, v209, a7, a3, a2, a1, v210);
            v211 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffd7f4);
            eax214 = fun_8048b84(v211, "sh %s %s --quiet &> %s", 0x806b2e0, 0x806aae0, 0x80672c0, v212, v213);
            v215 = eax214;
        } else {
            eax216 = stdout;
            fun_8048cd4("Running configure script:\n", 1, 26, eax216, v217);
            v192 = reinterpret_cast<void**>(0x806aae0);
            v202 = reinterpret_cast<void**>("sh %s %s");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffd7f4, "sh %s %s", 0x806b2e0, 0x806aae0, v218, v219, v220, v221, v222, v223, v224, v225, a7, a3, a2, a1, v226);
            v211 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffd7f4);
            eax230 = fun_8048b84(v211, "sh %s %s", 0x806b2e0, 0x806aae0, v227, v228, v229);
            v215 = eax230;
        }
        if (reinterpret_cast<int1_t>(v215 == 0xffffffff)) {
            v202 = reinterpret_cast<void**>("could not run configure script.\n");
            v211 = reinterpret_cast<void**>(0xffffffe5);
            print_error(0xffffffe5, "could not run configure script.\n", 0x806b2e0, 0x806aae0, 0x80672c0, v231, v232, v233, v234);
        }
        if (reinterpret_cast<signed char>(v215) > reinterpret_cast<signed char>(0)) {
            v202 = reinterpret_cast<void**>("system configuration failed.\n");
            v211 = reinterpret_cast<void**>(0xfffffffd);
            print_error(0xfffffffd, "system configuration failed.\n", 0x806b2e0, 0x806aae0, 0x80672c0, v235, v236, v237, v238);
        }
        print_done(v211, v202, 0x806b2e0, 0x806aae0, 0x80672c0, v239, v240, v241, v242, v243, v244, v245, a7, a3, a2, a1, v246);
        print_cfg(v211, v202, 0x806b2e0, 0x806aae0, 0x80672c0);
    }
    fun_8048aa4(0x805b2a0, "GEM_EXT_NAME=%s", a3, v192, 0x80672c0, v247, v248, v249, v250, v251, v252, v253, a7, a3, a2, a1, v254);
    fun_8048ca4(0x805b2a0, "GEM_EXT_NAME=%s", a3, v192, 0x80672c0);
    v255 = a6;
    v256 = a5;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%i.%i.%i", a4, v256, v255, v257, v258, v259, v260, v261, v262, v263, a7, a3, a2, a1, v264);
    v265 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
    fun_8048aa4(0x805baa0, "GEM_EXT_VERSION=%s", v265, v256, v255, v266, v267, v268, v269, v270, v271, v272, a7, a3, a2, a1, v273);
    fun_8048ca4(0x805baa0, "GEM_EXT_VERSION=%s", v265, v256, v255);
    dump_html("../description", 0x8064ac0, v265, v256, v255);
    dump_html("../info", 0x80652c0, v265, v256, v255);
    dump_html("../depends", 0x8065ac0, v265, v256, v255);
    dump_html("../bugs", 0x80662c0, v265, v256, v255);
    dump_html("../authors", 0x8066ac0, v265, v256, v255);
    fun_8048aa4(0x805c2a0, "GEM_EXT_DESCR=%s", 0x8064ac0, v256, v255, v274, v275, v276, v277, v278, v279, v280, a7, a3, a2, a1, v281);
    fun_8048ca4(0x805c2a0, "GEM_EXT_DESCR=%s", 0x8064ac0, v256, v255);
    fun_8048aa4(0x805caa0, "GEM_EXT_INFO=%s", 0x80652c0, v256, v255, v282, v283, v284, v285, v286, v287, v288, a7, a3, a2, a1, v289);
    fun_8048ca4(0x805caa0, "GEM_EXT_INFO=%s", 0x80652c0, v256, v255);
    fun_8048aa4(0x805d2a0, "GEM_EXT_DEPS=%s", 0x8065ac0, v256, v255, v290, v291, v292, v293, v294, v295, v296, a7, a3, a2, a1, v297);
    fun_8048ca4(0x805d2a0, "GEM_EXT_DEPS=%s", 0x8065ac0, v256, v255);
    fun_8048aa4(0x805daa0, "GEM_EXT_BUGS=%s", 0x80662c0, v256, v255, v298, v299, v300, v301, v302, v303, v304, a7, a3, a2, a1, v305);
    fun_8048ca4(0x805daa0, "GEM_EXT_BUGS=%s", 0x80662c0, v256, v255);
    fun_8048aa4(0x805e2a0, "GEM_EXT_AUTHORS=%s", 0x8066ac0, v256, v255, v306, v307, v308, v309, v310, v311, v312, a7, a3, a2, a1, v313);
    fun_8048ca4(0x805e2a0, "GEM_EXT_AUTHORS=%s", 0x8066ac0, v256, v255);
    atexit(exit_tmp, "GEM_EXT_AUTHORS=%s", 0x8066ac0, v256, v255, v314, v315, v316);
    check_dependencies(a1, a2, a7, v256, v255, v317);
    eax318 = VERBOSE;
    if (!eax318) {
        eax319 = stdout;
        fun_8048cd4("Compiling...", 1, 12, eax319, v255);
        v256 = reinterpret_cast<void**>(0x80672c0);
        v320 = reinterpret_cast<void**>("%s -f Makefile &> %s");
        fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffd7f4, "%s -f Makefile &> %s", 0x806bae0, 0x80672c0, v255, v321, v322, v323, v324, v325, v326, v327, a7, a3, a2, a1, v328);
        v329 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffd7f4);
        eax332 = fun_8048b84(v329, "%s -f Makefile &> %s", 0x806bae0, 0x80672c0, v255, v330, v331);
        v333 = eax332;
    } else {
        eax334 = stdout;
        fun_8048ce4(eax334, "Running '%s':\n", 0x806bae0, v256, v255, v335, v336, v337, v338, v339, v340, v341, a7, a3, a2);
        v320 = reinterpret_cast<void**>("%s -f Makefile");
        fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffd7f4, "%s -f Makefile", 0x806bae0, v256, v255, v342, v343, v344, v345, v346, v347, v348, a7, a3, a2, a1, v349);
        v329 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffd7f4);
        eax352 = fun_8048b84(v329, "%s -f Makefile", 0x806bae0, v256, v255, v350, v351);
        v333 = eax352;
    }
    if (reinterpret_cast<int1_t>(v333 == 0xffffffff) && (eax353 = VERBOSE, !eax353)) {
        v320 = reinterpret_cast<void**>("could not run '%s' do you have make tools installed?\n");
        v329 = reinterpret_cast<void**>(0xfffffff7);
        print_error(0xfffffff7, "could not run '%s' do you have make tools installed?\n", 0x806bae0, v256, v255, v354, v355, v356, v357);
    }
    if (reinterpret_cast<signed char>(v333) > reinterpret_cast<signed char>(0)) {
        v320 = reinterpret_cast<void**>("source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n");
        v329 = reinterpret_cast<void**>(0xfffffffc);
        print_error(0xfffffffc, "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n", 0x806bae0, v256, v255, v358, v359, v360, v361);
    }
    print_done(v329, v320, 0x806bae0, v256, v255, v362, v363, v364, v365, v366, v367, v368, a7, a3, a2, a1, v369);
    eax370 = stdout;
    fun_8048cd4("Installing...", 1, 13, eax370, v255);
    eax376 = fun_8048c74("../uninstall", "r", 13, eax370, v255, v371, v372, v373, v374, v375);
    if (eax376) {
        eax377 = VERBOSE;
        if (!eax377) {
            v255 = reinterpret_cast<void**>(0x80672c0);
            v378 = a3;
            v379 = a2;
            fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "cp -f ../uninstall %s/etc/uninstall.%s &> %s ;", v379, v378, 0x80672c0, v380, v381, v382, v383, v384, v385, v386, a7, a3, a2, a1, v387);
            v388 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
            fun_8048c84(0x806a2e0, v388, v379, v378, 0x80672c0, v389, v390, v391, v392, v393, v394, v395, a7, a3, a2, a1, v396);
        } else {
            v378 = a3;
            v379 = a2;
            fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "cp -vf ../uninstall %s/etc/uninstall.%s ;", v379, v378, v255, v397, v398, v399, v400, v401, v402, v403, a7, a3, a2, a1, v404);
            v388 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
            fun_8048c84(0x806a2e0, v388, v379, v378, v255, v405, v406, v407, v408, v409, v410, v411, a7, a3, a2, a1, v412);
        }
        fun_8048c44(eax376, v388, v379, v378, v255, v413, v414, v415, v416, v417, v418, v419, a7, a3, a2);
    } else {
        eax423 = fun_8048a94("../uninstall", "r", 13, eax370, v255, v420, v421, v422);
        v424 = *eax423;
        eax428 = fun_8048ad4(v424, "r", 13, eax370, v255, v425, v426, v427);
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system", eax428, 13, eax370, v255, v429, v430, v431, v432, v433, v434, v435, a7, a3, a2);
    }
    register_extension(a2, "src", a3, a4, a5, a6);
    check_dependencies(a1, a2, a7, a4, a5, a6);
    if (reinterpret_cast<int1_t>(eax136 == 6) && reinterpret_cast<signed char>(eax142) <= reinterpret_cast<signed char>(0)) {
        register_entries_gisman(a3, a2, a7, a4, a5, a6);
    }
    register_entries_gisman2(a3, a2, a7, a4, a5, a6);
    register_html(a3, a2, a4, a5, a6, a6);
    eax436 = VERBOSE;
    if (!eax436) {
        v437 = a2;
        v438 = a2;
        v439 = reinterpret_cast<void**>(0x8063ac0);
        v440 = reinterpret_cast<void**>(0x80672c0);
        fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4, "%s -f Makefile -s install &> %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &> %s ; chmod a+r %s/etc/extensions.db &> %s ;", 0x806bae0, 0x80672c0, 0x8063ac0, v438, 0x80672c0, v437, 0x80672c0, v441, v442, v443, a7, a3, a2, a1, v444);
    } else {
        eax445 = stdout;
        fun_8048ce4(eax445, "Running '%s install':\n", 0x806bae0, a5, a6, a6, v446, v447, v448, v449, v450, v451, a7, a3, a2);
        v438 = a2;
        v439 = a2;
        v440 = reinterpret_cast<void**>(0x8063ac0);
        fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4, "%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;", 0x806bae0, 0x8063ac0, v439, v438, v452, v453, v454, v455, v456, v457, a7, a3, a2, a1, v458);
    }
    eax459 = VERBOSE;
    if (!eax459) {
        fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffdff4, "sh ../post &> %s", 0x80672c0, v440, v439, v438, 0x80672c0, v437, 0x80672c0, v460, v461, v462, a7, a3, a2, a1, v463);
    } else {
        fun_8048c54(reinterpret_cast<int32_t>(ebp9) + 0xffffdff4, "sh ../post", 11, v440, v439, v438, 0x80672c0, v437, 0x80672c0, v464, v465, v466, a7, a3, a2);
    }
    v467 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffdff4);
    v468 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%s %s %s %s %s %s", v468, 0x806a2e0, 0x80682e0, 0x8068ae0, 0x80692e0, v467, 0x80672c0, v469, v470, v471, a7, a3, a2, a1, v472);
    v473 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
    su(a2, v473, v468, 0x806a2e0, 0x80682e0, 0x8068ae0, 0x80692e0, v467, 0x80672c0, v474, v475, v476, a7, a3, a2, a1, v477);
    print_done(a2, v473, v468, 0x806a2e0, 0x80682e0, 0x8068ae0, 0x80692e0, v467, 0x80672c0, v478, v479, v480, a7, a3, a2, a1, v481);
    eax482 = reinterpret_cast<void**>(eax10 ^ g14);
    if (eax482) {
        eax482 = fun_8048d34(a2, v473, v468, 0x806a2e0, 0x80682e0, 0x8068ae0, 0x80692e0, v467, 0x80672c0, v483, v484, v485, a7, a3, a2, a1, v486);
    }
    return eax482;
}

int32_t putenv = 0x8048caa;

void fun_8048ca4(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto putenv;
}

int32_t strtok = 0x8048d5a;

void** fun_8048d54(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto strtok;
}

int32_t strtol = 0x8048bea;

void** fun_8048be4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto strtol;
}

void** bin_install(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* ebp9;
    uint32_t eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    int32_t eax15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    int32_t* eax22;
    int32_t v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
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
    void** v57;
    void** v58;
    void** v59;
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
    void** v72;
    void** v73;
    void** v74;
    void** v75;
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
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** eax124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** eax130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** eax136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** eax142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** eax148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** eax154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
    void** eax179;
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
    void** v192;
    void** v193;
    void** eax194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    int32_t* eax199;
    int32_t v200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** eax205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    void** v213;
    void** v214;
    void** v215;
    void** v216;
    void** v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    void** v223;
    void** v224;
    void** v225;
    void** v226;
    void** v227;
    void** v228;
    void** v229;
    void** v230;
    void** v231;
    void** v232;
    void** v233;
    void** v234;
    void** v235;
    void** v236;
    void** v237;
    void** v238;
    void** v239;
    void** v240;
    void** v241;
    void** v242;
    void** v243;
    void** v244;
    void** v245;
    void** v246;
    void** v247;
    void** v248;
    void** v249;
    void** v250;
    void** v251;
    void** v252;
    void** v253;
    void** v254;
    void** v255;
    void** v256;
    void** v257;
    void** v258;
    void** v259;
    void** v260;
    void** v261;
    void** v262;
    void** v263;
    void** v264;
    void** v265;
    void** v266;
    void** v267;
    void** v268;
    void** v269;
    void** v270;
    void** v271;
    void** v272;
    void** v273;
    void** v274;
    void** v275;
    void** v276;
    void** v277;
    void** v278;
    void** v279;
    void** v280;
    void** v281;
    void** v282;
    void** v283;
    void** v284;
    void** v285;
    void** v286;
    void** v287;
    void** v288;
    void** v289;
    void** v290;
    void** v291;
    void** v292;
    void** v293;
    void** v294;
    void** v295;
    void** v296;
    void** v297;
    void** v298;
    void** eax299;
    void** v300;
    void** v301;
    void** v302;
    void** v303;
    void** v304;
    void** eax305;
    void** eax306;
    void** v307;
    void** v308;
    void** v309;
    void** v310;
    void** v311;
    void** v312;
    void** v313;
    void** v314;
    void** v315;
    void** v316;
    void** v317;
    void** v318;
    void** v319;
    void** v320;
    void** v321;
    void** v322;
    void** v323;
    void** v324;
    void** v325;
    void** v326;
    void** v327;
    void** v328;
    void** v329;
    void** v330;
    void** v331;
    void** v332;
    void** v333;
    void** v334;
    void** v335;
    void** v336;
    void** v337;
    void** v338;
    void** v339;
    void** v340;
    void** v341;
    void** v342;
    void** v343;
    void** v344;
    void** v345;
    void** v346;
    void** v347;
    void** v348;
    void** v349;
    void** v350;
    void** v351;
    void** v352;
    void** v353;
    void** v354;
    void** v355;
    void** v356;
    void** v357;
    void** v358;
    void** v359;
    void** v360;
    void** v361;
    void** v362;
    int32_t* eax363;
    int32_t v364;
    void** v365;
    void** v366;
    void** v367;
    void** eax368;
    void** v369;
    void** v370;
    void** v371;
    void** v372;
    void** v373;
    void** v374;
    void** v375;
    void** v376;
    void** v377;
    void** v378;
    void** eax379;
    void** v380;
    void** v381;
    void** v382;
    void** v383;
    void** v384;
    void** v385;
    void** v386;
    void** v387;
    void** v388;
    void** v389;
    void** eax390;
    void** v391;
    void** v392;
    void** v393;
    void** v394;
    void** v395;
    void** v396;
    void** v397;
    void** v398;
    void** v399;
    void** v400;
    void** v401;
    void** v402;
    void** v403;
    void** v404;
    void** v405;
    void** v406;
    void** v407;
    void** v408;
    void** eax409;
    void** v410;
    void** v411;
    void** v412;
    void** v413;
    void** v414;
    void** v415;
    void** v416;
    void** v417;
    void** v418;
    void** v419;
    void** v420;
    void** v421;
    void** v422;
    void** v423;
    void** v424;
    void** v425;
    void** v426;
    void** v427;
    void** v428;
    void** v429;
    void** v430;
    void** v431;
    void** v432;
    void** v433;
    void** v434;
    void** v435;
    void** v436;
    void** v437;
    void** v438;
    void** v439;
    void** v440;
    void** v441;
    void** v442;
    void** eax443;
    void** v444;
    void** v445;
    void** v446;
    void** v447;
    void** v448;
    void** v449;

    ebp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = g14;
    v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffdf78);
    eax15 = stat(a2, v11, v12, v13, v14);
    if (eax15 < 0) {
        eax22 = fun_8048a94(a2, v11, v16, v17, v18, v19, v20, v21);
        v23 = *eax22;
        eax30 = fun_8048ad4(v23, v11, v24, v25, v26, v27, v28, v29);
        print_error(0xfffffffb, "installation directory invalid: %s\n", eax30, v31, v32, v33, v34, v35, v36);
    }
    fun_8048aa4(0x80592a0, "GINSTALL_DST=%s", a2, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, a8, a4);
    fun_8048ca4(0x80592a0, "GINSTALL_DST=%s", a2, v49, v50);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%s/include", a2, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, a8, a4);
    v63 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
    fun_8048aa4(0x8059aa0, "GINSTALL_INC=%s", v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, a8, a4);
    fun_8048ca4(0x8059aa0, "GINSTALL_INC=%s", v63, v76, v77);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%s/lib", a2, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, a8, a4);
    v90 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
    fun_8048aa4(0x805a2a0, "GINSTALL_LIB=%s", v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101, v102, a8, a4);
    fun_8048ca4(0x805a2a0, "GINSTALL_LIB=%s", v90, v103, v104);
    fun_8048aa4(0x805eaa0, "GEM_GRASS_DIR=%s", a2, v105, v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, a8, a4);
    fun_8048ca4(0x805eaa0, "GEM_GRASS_DIR=%s", a2, v117, v118);
    eax124 = fun_8048d94(a8, "GEM_GRASS_DIR=%s", a2, v119, v120, v121, v122, v123);
    eax130 = fun_8048d54(eax124, ".", a2, v125, v126, v127, v128, v129);
    eax136 = fun_8048d54(0, ".", a2, v131, v132, v133, v134, v135);
    eax142 = fun_8048d54(0, ".", a2, v137, v138, v139, v140, v141);
    eax148 = fun_8048be4(eax130, 0, 10, v143, v144, v145, v146, v147);
    eax154 = fun_8048be4(eax136, 0, 10, v149, v150, v151, v152, v153);
    fun_8048be4(eax142, 0, 10, v155, v156, v157, v158, v159);
    fun_8048bf4(eax124, 0, 10, v160, v161, v162, v163, v164, v165, v166, v167, v168, v169, v170, v171);
    atexit(exit_tmp, 0, 10, v172, v173, v174, v175, v176);
    eax179 = basename(a1, 0, 10, v177, v178);
    v180 = a3;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4, "%s/%s", eax179, v180, v181, v182, v183, v184, v185, v186, v187, v188, v189, v190, v191, a8, a4);
    v192 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4);
    eax194 = fun_8048c94(v192, "%s/%s", eax179, v180, v193);
    if (reinterpret_cast<signed char>(eax194) < reinterpret_cast<signed char>(0)) {
        eax199 = fun_8048a94(v192, "%s/%s", eax179, v180, v195, v196, v197, v198);
        v200 = *eax199;
        eax205 = fun_8048ad4(v200, "%s/%s", eax179, v180, v201, v202, v203, v204);
        v180 = eax205;
        print_error(0xfffffffe, "extension file binaries in '%s' not accessible: %s\n", a1, v180, v206, v207, v208, v209, v210);
    }
    fun_8048aa4(0x805b2a0, "GEM_EXT_NAME=%s", a4, v180, v211, v212, v213, v214, v215, v216, v217, v218, v219, v220, v221, a8, a4);
    fun_8048ca4(0x805b2a0, "GEM_EXT_NAME=%s", a4, v180, v222);
    v223 = a7;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%i.%i.%i", a5, a6, v223, v224, v225, v226, v227, v228, v229, v230, v231, v232, v233, a8, a4);
    v234 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
    fun_8048aa4(0x805baa0, "GEM_EXT_VERSION=%s", v234, a6, v223, v235, v236, v237, v238, v239, v240, v241, v242, v243, v244, a8, a4);
    fun_8048ca4(0x805baa0, "GEM_EXT_VERSION=%s", v234, a6, v223);
    dump_html("../description", 0x8064ac0, v234, a6, v223);
    dump_html("../info", 0x80652c0, v234, a6, v223);
    dump_html("../depends", 0x8065ac0, v234, a6, v223);
    dump_html("../bugs", 0x80662c0, v234, a6, v223);
    dump_html("../authors", 0x8066ac0, v234, a6, v223);
    fun_8048aa4(0x805c2a0, "GEM_EXT_DESCR=%s", 0x8064ac0, a6, v223, v245, v246, v247, v248, v249, v250, v251, v252, v253, v254, a8, a4);
    fun_8048ca4(0x805c2a0, "GEM_EXT_DESCR=%s", 0x8064ac0, a6, v223);
    fun_8048aa4(0x805caa0, "GEM_EXT_INFO=%s", 0x80652c0, a6, v223, v255, v256, v257, v258, v259, v260, v261, v262, v263, v264, a8, a4);
    fun_8048ca4(0x805caa0, "GEM_EXT_INFO=%s", 0x80652c0, a6, v223);
    fun_8048aa4(0x805d2a0, "GEM_EXT_DEPS=%s", 0x8065ac0, a6, v223, v265, v266, v267, v268, v269, v270, v271, v272, v273, v274, a8, a4);
    fun_8048ca4(0x805d2a0, "GEM_EXT_DEPS=%s", 0x8065ac0, a6, v223);
    fun_8048aa4(0x805daa0, "GEM_EXT_BUGS=%s", 0x80662c0, a6, v223, v275, v276, v277, v278, v279, v280, v281, v282, v283, v284, a8, a4);
    fun_8048ca4(0x805daa0, "GEM_EXT_BUGS=%s", 0x80662c0, a6, v223);
    fun_8048aa4(0x805e2a0, "GEM_EXT_AUTHORS=%s", 0x8066ac0, a6, v223, v285, v286, v287, v288, v289, v290, v291, v292, v293, v294, a8, a4);
    fun_8048ca4(0x805e2a0, "GEM_EXT_AUTHORS=%s", 0x8066ac0, a6, v223);
    atexit(exit_tmp, "GEM_EXT_AUTHORS=%s", 0x8066ac0, a6, v223, v295, v296, v297);
    check_dependencies(a1, a2, a8, a6, v223, v298);
    eax299 = stdout;
    fun_8048cd4("Installing...", 1, 13, eax299, v223);
    eax305 = fun_8048c74("../uninstall", "r", 13, eax299, v223, v300, v301, v302, v303, v304);
    if (eax305) {
        eax306 = VERBOSE;
        if (!eax306) {
            v223 = reinterpret_cast<void**>(0x80672c0);
            v307 = a4;
            v308 = a2;
            fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "cp -f ../uninstall %s/etc/uninstall.%s &> %s ;", v308, v307, 0x80672c0, v309, v310, v311, v312, v313, v314, v315, v316, v317, v318, a8, a4);
            v319 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
            fun_8048c84(0x806a2e0, v319, v308, v307, 0x80672c0, v320, v321, v322, v323, v324, v325, v326, v327, v328, v329, a8, a4);
        } else {
            v307 = a4;
            v308 = a2;
            fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "cp -vf ../uninstall %s/etc/uninstall.%s ;", v308, v307, v223, v330, v331, v332, v333, v334, v335, v336, v337, v338, v339, a8, a4);
            v319 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
            fun_8048c84(0x806a2e0, v319, v308, v307, v223, v340, v341, v342, v343, v344, v345, v346, v347, v348, v349, a8, a4);
        }
        fun_8048c44(eax305, v319, v308, v307, v223, v350, v351, v352, v353, v354, v355, v356, v357, v358, v359);
    } else {
        eax363 = fun_8048a94("../uninstall", "r", 13, eax299, v223, v360, v361, v362);
        v364 = *eax363;
        eax368 = fun_8048ad4(v364, "r", 13, eax299, v223, v365, v366, v367);
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system", eax368, 13, eax299, v223, v369, v370, v371, v372, v373, v374, v375, v376, v377, v378);
    }
    register_extension(a2, a3, a4, a5, a6, a7);
    check_dependencies(a1, a2, a8, a5, a6, a7);
    if (reinterpret_cast<int1_t>(eax148 == 6) && reinterpret_cast<signed char>(eax154) <= reinterpret_cast<signed char>(0)) {
        register_entries_gisman(a4, a2, a8, a5, a6, a7);
    }
    register_entries_gisman2(a4, a2, a8, a5, a6, a7);
    register_html(a4, a2, a5, a6, a7, a7);
    eax379 = VERBOSE;
    if (!eax379) {
        v380 = a2;
        v381 = a2;
        v382 = reinterpret_cast<void**>(0x8063ac0);
        v383 = reinterpret_cast<void**>(0x80672c0);
        fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4, "bin/%s -f Makefile -s install &> %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &> %s ; chmod a+r %s/etc/extensions.db &> %s ;", 0x806bae0, 0x80672c0, 0x8063ac0, v381, 0x80672c0, v380, 0x80672c0, v384, v385, v386, v387, v388, v389, a8, a4);
    } else {
        eax390 = stdout;
        fun_8048ce4(eax390, "Running '%s install':\n", 0x806bae0, a6, a7, a7, v391, v392, v393, v394, v395, v396, v397, v398, v399);
        v381 = a2;
        v382 = a2;
        v383 = reinterpret_cast<void**>(0x8063ac0);
        fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4, "bin/%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;", 0x806bae0, 0x8063ac0, v382, v381, v400, v401, v402, v403, v404, v405, v406, v407, v408, a8, a4);
    }
    eax409 = VERBOSE;
    if (!eax409) {
        fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffdff4, "sh ../post &> %s", 0x80672c0, v383, v382, v381, 0x80672c0, v380, 0x80672c0, v410, v411, v412, v413, v414, v415, a8, a4);
    } else {
        fun_8048c54(reinterpret_cast<int32_t>(ebp9) + 0xffffdff4, "sh ../post", 11, v383, v382, v381, 0x80672c0, v380, 0x80672c0, v416, v417, v418, v419, v420, v421);
    }
    v422 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffdff4);
    v423 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%s %s %s %s %s %s", v423, 0x806a2e0, 0x80682e0, 0x8068ae0, 0x80692e0, v422, 0x80672c0, v424, v425, v426, v427, v428, v429, a8, a4);
    v430 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
    su(a2, v430, v423, 0x806a2e0, 0x80682e0, 0x8068ae0, 0x80692e0, v422, 0x80672c0, v431, v432, v433, v434, v435, v436, a8, a4);
    print_done(a2, v430, v423, 0x806a2e0, 0x80682e0, 0x8068ae0, 0x80692e0, v422, 0x80672c0, v437, v438, v439, v440, v441, v442, a8, a4);
    eax443 = reinterpret_cast<void**>(eax10 ^ g14);
    if (eax443) {
        eax443 = fun_8048d34(a2, v430, v423, 0x806a2e0, 0x80682e0, 0x8068ae0, 0x80692e0, v422, 0x80672c0, v444, v445, v446, v447, v448, v449, a8, a4);
    }
    return eax443;
}

void** test_install(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* ebp9;
    uint32_t eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    int32_t eax15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    int32_t* eax22;
    int32_t v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
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
    void** v57;
    void** v58;
    void** v59;
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
    void** v72;
    void** v73;
    void** v74;
    void** v75;
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
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** eax111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** eax117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** eax123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** eax129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** eax135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** eax141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** eax162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** eax176;
    void** v177;
    void** v178;
    void** v179;
    void** v180;
    void** v181;
    int32_t* eax182;
    int32_t v183;
    void** v184;
    void** v185;
    void** v186;
    void** v187;
    void** v188;
    void** eax189;
    void** v190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    int32_t eax195;
    void** eax196;
    void** eax197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** eax211;
    void** v212;
    void** eax213;
    void** v214;
    void** v215;
    void** v216;
    void** v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    void** v223;
    void** v224;
    void** v225;
    void** v226;
    void** eax227;
    void** v228;
    void** v229;
    void** v230;
    void** v231;
    void** v232;
    void** v233;
    void** v234;
    void** v235;
    void** v236;
    void** v237;
    void** v238;
    void** v239;
    void** v240;
    void** v241;
    void** v242;
    void** v243;
    void** v244;
    void** v245;
    void** v246;
    void** v247;
    void** v248;
    void** v249;
    void** v250;
    void** v251;
    void** v252;
    void** v253;
    void** v254;
    void** v255;
    void** v256;
    void** v257;
    void** v258;
    void** v259;
    void** v260;
    void** v261;
    void** v262;
    void** v263;
    void** v264;
    void** v265;
    void** v266;
    void** v267;
    void** v268;
    void** v269;
    void** v270;
    void** v271;
    void** v272;
    void** v273;
    void** v274;
    void** v275;
    void** v276;
    void** v277;
    void** v278;
    void** v279;
    void** v280;
    void** v281;
    void** v282;
    void** v283;
    void** v284;
    void** v285;
    void** v286;
    void** v287;
    void** v288;
    void** v289;
    void** v290;
    void** v291;
    void** v292;
    void** v293;
    void** v294;
    void** v295;
    void** v296;
    void** v297;
    void** v298;
    void** v299;
    void** v300;
    void** v301;
    void** v302;
    void** v303;
    void** v304;
    void** v305;
    void** v306;
    void** v307;
    void** v308;
    void** v309;
    void** v310;
    void** v311;
    void** eax312;
    void** eax313;
    void** v314;
    void** v315;
    void** v316;
    void** v317;
    void** v318;
    void** v319;
    void** v320;
    void** v321;
    void** v322;
    void** v323;
    void** v324;
    void** v325;
    void** eax326;
    void** v327;
    void** eax328;
    void** v329;
    void** v330;
    void** v331;
    void** v332;
    void** v333;
    void** v334;
    void** v335;
    void** v336;
    void** v337;
    void** v338;
    void** v339;
    void** v340;
    void** v341;
    void** v342;
    void** v343;
    void** v344;
    void** eax345;
    void** eax346;
    void** v347;
    void** v348;
    void** v349;
    void** v350;
    void** v351;
    void** v352;
    void** v353;
    void** v354;
    void** v355;
    void** v356;
    void** v357;
    void** v358;
    void** v359;
    void** v360;
    void** eax361;
    void** v362;
    void** v363;
    void** v364;
    void** eax365;
    void** v366;
    void** v367;
    void** v368;
    void** v369;
    void** v370;
    void** v371;
    void** v372;
    void** v373;
    void** v374;
    int32_t* eax375;
    int32_t v376;
    void** v377;
    void** v378;
    void** v379;
    void** eax380;
    void** v381;
    void** v382;
    void** v383;
    void** v384;
    void** v385;
    void** v386;
    void** eax387;
    void** v388;
    void** v389;
    void** v390;
    void** v391;
    void** v392;
    void** v393;
    void** v394;
    void** v395;
    void** v396;
    void** v397;
    void** v398;
    void** v399;
    void** eax400;
    void** v401;
    void** v402;
    void** v403;
    void** v404;
    void** v405;
    void** v406;
    void** v407;

    ebp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = g14;
    v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffe778);
    eax15 = stat(a2, v11, v12, v13, v14);
    if (eax15 < 0) {
        eax22 = fun_8048a94(a2, v11, v16, v17, v18, v19, v20, v21);
        v23 = *eax22;
        eax30 = fun_8048ad4(v23, v11, v24, v25, v26, v27, v28, v29);
        print_error(0xfffffffb, "installation directory invalid: %s\n", eax30, v31, v32, v33, v34, v35, a7);
    }
    fun_8048aa4(0x80592a0, "GINSTALL_DST=%s", a2, v36, v37, v38, v39, v40, a7, a3, a2, a1, v41, v42, v43, v44, v45);
    fun_8048ca4(0x80592a0, "GINSTALL_DST=%s", a2, v46, v47);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%s/include", a2, v48, v49, v50, v51, v52, a7, a3, a2, a1, v53, v54, v55, v56, v57);
    v58 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
    fun_8048aa4(0x8059aa0, "GINSTALL_INC=%s", v58, v59, v60, v61, v62, v63, a7, a3, a2, a1, v64, v65, v66, v67, v68);
    fun_8048ca4(0x8059aa0, "GINSTALL_INC=%s", v58, v69, v70);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%s/lib", a2, v71, v72, v73, v74, v75, a7, a3, a2, a1, v76, v77, v78, v79, v80);
    v81 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
    fun_8048aa4(0x805a2a0, "GINSTALL_LIB=%s", v81, v82, v83, v84, v85, v86, a7, a3, a2, a1, v87, v88, v89, v90, v91);
    fun_8048ca4(0x805a2a0, "GINSTALL_LIB=%s", v81, v92, v93);
    fun_8048aa4(0x805eaa0, "GEM_GRASS_DIR=%s", a2, v94, v95, v96, v97, v98, a7, a3, a2, a1, v99, v100, v101, v102, v103);
    fun_8048ca4(0x805eaa0, "GEM_GRASS_DIR=%s", a2, v104, v105);
    eax111 = fun_8048d94(a7, "GEM_GRASS_DIR=%s", a2, v106, v107, v108, v109, v110);
    eax117 = fun_8048d54(eax111, ".", a2, v112, v113, v114, v115, v116);
    eax123 = fun_8048d54(0, ".", a2, v118, v119, v120, v121, v122);
    eax129 = fun_8048d54(0, ".", a2, v124, v125, v126, v127, v128);
    eax135 = fun_8048be4(eax117, 0, 10, v130, v131, v132, v133, v134);
    eax141 = fun_8048be4(eax123, 0, 10, v136, v137, v138, v139, v140);
    fun_8048be4(eax129, 0, 10, v142, v143, v144, v145, v146);
    fun_8048bf4(eax111, 0, 10, v147, v148, v149, v150, v151, a7, a3, a2, a1, v152, v153, v154);
    atexit(exit_tmp, 0, 10, v155, v156, v157, v158, v159);
    eax162 = basename(a1, 0, 10, v160, v161);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4, "%s/src", eax162, v163, v164, v165, v166, v167, a7, a3, a2, a1, v168, v169, v170, v171, v172);
    v173 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4);
    eax176 = fun_8048c94(v173, "%s/src", eax162, v174, v175);
    if (reinterpret_cast<signed char>(eax176) < reinterpret_cast<signed char>(0)) {
        eax182 = fun_8048a94(v173, "%s/src", eax162, v177, v178, v179, v180, v181);
        v183 = *eax182;
        eax189 = fun_8048ad4(v183, "%s/src", eax162, v184, v185, v186, v187, v188);
        v190 = eax189;
        print_error(0xfffffffe, "extension files in '%s' not accessible: %s\n", a1, v190, v191, v192, v193, v194, a7);
    }
    eax195 = SKIP_CFG;
    if (!eax195) {
        eax196 = VERBOSE;
        if (!eax196) {
            eax197 = stdout;
            fun_8048cd4("Configuring...", 1, 14, eax197, v198);
            v190 = reinterpret_cast<void**>(0x806aae0);
            v199 = reinterpret_cast<void**>("sh %s %s --quiet &> %s");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4, "sh %s %s --quiet &> %s", 0x806b2e0, 0x806aae0, 0x80672c0, v200, v201, v202, a7, a3, a2, a1, v203, v204, v205, v206, v207);
            v208 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4);
            eax211 = fun_8048b84(v208, "sh %s %s --quiet &> %s", 0x806b2e0, 0x806aae0, 0x80672c0, v209, v210);
            v212 = eax211;
        } else {
            eax213 = stdout;
            fun_8048cd4("Running configure script:\n", 1, 26, eax213, v214);
            v190 = reinterpret_cast<void**>(0x806aae0);
            v199 = reinterpret_cast<void**>("sh %s %s");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4, "sh %s %s", 0x806b2e0, 0x806aae0, v215, v216, v217, v218, a7, a3, a2, a1, v219, v220, v221, v222, v223);
            v208 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4);
            eax227 = fun_8048b84(v208, "sh %s %s", 0x806b2e0, 0x806aae0, v224, v225, v226);
            v212 = eax227;
        }
        if (reinterpret_cast<int1_t>(v212 == 0xffffffff)) {
            v199 = reinterpret_cast<void**>("could not run configure script.\n");
            v208 = reinterpret_cast<void**>(0xffffffe5);
            print_error(0xffffffe5, "could not run configure script.\n", 0x806b2e0, 0x806aae0, 0x80672c0, v228, v229, v230, a7);
        }
        if (reinterpret_cast<signed char>(v212) > reinterpret_cast<signed char>(0)) {
            v199 = reinterpret_cast<void**>("system configuration failed.\n");
            v208 = reinterpret_cast<void**>(0xfffffffd);
            print_error(0xfffffffd, "system configuration failed.\n", 0x806b2e0, 0x806aae0, 0x80672c0, v231, v232, v233, a7);
        }
        print_done(v208, v199, 0x806b2e0, 0x806aae0, 0x80672c0, v234, v235, v236, a7, a3, a2, a1, v237, v238, v239, v240, v241);
        print_cfg(v208, v199, 0x806b2e0, 0x806aae0, 0x80672c0);
    }
    fun_8048aa4(0x805b2a0, "GEM_EXT_NAME=%s", a3, v190, 0x80672c0, v242, v243, v244, a7, a3, a2, a1, v245, v246, v247, v248, v249);
    fun_8048ca4(0x805b2a0, "GEM_EXT_NAME=%s", a3, v190, 0x80672c0);
    v250 = a5;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%i.%i.%i", a4, v250, a6, v251, v252, v253, a7, a3, a2, a1, v254, v255, v256, v257, v258);
    v259 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
    fun_8048aa4(0x805baa0, "GEM_EXT_VERSION=%s", v259, v250, a6, v260, v261, v262, a7, a3, a2, a1, v263, v264, v265, v266, v267);
    fun_8048ca4(0x805baa0, "GEM_EXT_VERSION=%s", v259, v250, a6);
    dump_plain("../description", 0x8064ac0, v259, v250, a6);
    dump_plain("../info", 0x80652c0, v259, v250, a6);
    dump_plain("../depends", 0x8065ac0, v259, v250, a6);
    dump_plain("../bugs", 0x80662c0, v259, v250, a6);
    dump_plain("../authors", 0x8066ac0, v259, v250, a6);
    fun_8048aa4(0x805c2a0, "GEM_EXT_DESCR=%s", 0x8064ac0, v250, a6, v268, v269, v270, a7, a3, a2, a1, v271, v272, v273, v274, v275);
    fun_8048ca4(0x805c2a0, "GEM_EXT_DESCR=%s", 0x8064ac0, v250, a6);
    fun_8048aa4(0x805caa0, "GEM_EXT_INFO=%s", 0x80652c0, v250, a6, v276, v277, v278, a7, a3, a2, a1, v279, v280, v281, v282, v283);
    fun_8048ca4(0x805caa0, "GEM_EXT_INFO=%s", 0x80652c0, v250, a6);
    fun_8048aa4(0x805d2a0, "GEM_EXT_DEPS=%s", 0x8065ac0, v250, a6, v284, v285, v286, a7, a3, a2, a1, v287, v288, v289, v290, v291);
    fun_8048ca4(0x805d2a0, "GEM_EXT_DEPS=%s", 0x8065ac0, v250, a6);
    fun_8048aa4(0x805daa0, "GEM_EXT_BUGS=%s", 0x80662c0, v250, a6, v292, v293, v294, a7, a3, a2, a1, v295, v296, v297, v298, v299);
    fun_8048ca4(0x805daa0, "GEM_EXT_BUGS=%s", 0x80662c0, v250, a6);
    fun_8048aa4(0x805e2a0, "GEM_EXT_AUTHORS=%s", 0x8066ac0, v250, a6, v300, v301, v302, a7, a3, a2, a1, v303, v304, v305, v306, v307);
    fun_8048ca4(0x805e2a0, "GEM_EXT_AUTHORS=%s", 0x8066ac0, v250, a6);
    atexit(exit_tmp, "GEM_EXT_AUTHORS=%s", 0x8066ac0, v250, a6, v308, v309, v310);
    check_dependencies(a1, a2, a7, v250, a6, v311);
    eax312 = VERBOSE;
    if (!eax312) {
        eax313 = stdout;
        fun_8048cd4("Compiling...", 1, 12, eax313, a6);
        v250 = reinterpret_cast<void**>(0x80672c0);
        v314 = reinterpret_cast<void**>("%s -f Makefile &> %s");
        fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4, "%s -f Makefile &> %s", 0x806bae0, 0x80672c0, a6, v315, v316, v317, a7, a3, a2, a1, v318, v319, v320, v321, v322);
        v323 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4);
        eax326 = fun_8048b84(v323, "%s -f Makefile &> %s", 0x806bae0, 0x80672c0, a6, v324, v325);
        v327 = eax326;
    } else {
        eax328 = stdout;
        fun_8048ce4(eax328, "Running '%s':\n", 0x806bae0, v250, a6, v329, v330, v331, a7, a3, a2, a1, v332, v333, v334);
        v314 = reinterpret_cast<void**>("%s -f Makefile");
        fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4, "%s -f Makefile", 0x806bae0, v250, a6, v335, v336, v337, a7, a3, a2, a1, v338, v339, v340, v341, v342);
        v323 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffe7f4);
        eax345 = fun_8048b84(v323, "%s -f Makefile", 0x806bae0, v250, a6, v343, v344);
        v327 = eax345;
    }
    if (reinterpret_cast<int1_t>(v327 == 0xffffffff) && (eax346 = VERBOSE, !eax346)) {
        v314 = reinterpret_cast<void**>("could not run '%s' do you have make tools installed?\n");
        v323 = reinterpret_cast<void**>(0xfffffff7);
        print_error(0xfffffff7, "could not run '%s' do you have make tools installed?\n", 0x806bae0, v250, a6, v347, v348, v349, a7);
    }
    if (reinterpret_cast<signed char>(v327) > reinterpret_cast<signed char>(0)) {
        v314 = reinterpret_cast<void**>("source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n");
        v323 = reinterpret_cast<void**>(0xfffffffc);
        print_error(0xfffffffc, "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n", 0x806bae0, v250, a6, v350, v351, v352, a7);
    }
    print_done(v323, v314, 0x806bae0, v250, a6, v353, v354, v355, a7, a3, a2, a1, v356, v357, v358, v359, v360);
    eax361 = stdout;
    fun_8048cd4("Installing...", 1, 13, eax361, a6);
    eax365 = fun_8048c74("../uninstall", "r", 13, eax361, a6, v362, v363, v364, a7, a3);
    if (eax365) {
        fun_8048c44(eax365, "r", 13, eax361, a6, v366, v367, v368, a7, a3, a2, a1, v369, v370, v371);
    } else {
        eax375 = fun_8048a94("../uninstall", "r", 13, eax361, a6, v372, v373, v374);
        v376 = *eax375;
        eax380 = fun_8048ad4(v376, "r", 13, eax361, a6, v377, v378, v379);
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system", eax380, 13, eax361, a6, v381, v382, v383, a7, a3, a2, a1, v384, v385, v386);
    }
    register_extension(a2, "src", a3, a4, a5, a6);
    check_dependencies(a1, a2, a7, a4, a5, a6);
    if (reinterpret_cast<int1_t>(eax135 == 6) && reinterpret_cast<signed char>(eax141) <= reinterpret_cast<signed char>(0)) {
        register_entries_gisman(a3, a2, a7, a4, a5, a6);
    }
    register_entries_gisman2(a3, a2, a7, a4, a5, a6);
    register_html(a3, a2, a4, a5, a6, a6);
    eax387 = stdout;
    fun_8048ce4(eax387, "(skipping '%s install')...", 0x806bae0, a5, a6, a6, v388, v389, a7, a3, a2, a1, v390, v391, v392);
    print_done(eax387, "(skipping '%s install')...", 0x806bae0, a5, a6, a6, v393, v394, a7, a3, a2, a1, v395, v396, v397, v398, v399);
    eax400 = reinterpret_cast<void**>(eax10 ^ g14);
    if (eax400) {
        eax400 = fun_8048d34(eax387, "(skipping '%s install')...", 0x806bae0, a5, a6, a6, v401, v402, a7, a3, a2, a1, v403, v404, v405, v406, v407);
    }
    return eax400;
}

void** uninstall(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* ebp9;
    uint32_t eax10;
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
    void** eax36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** eax41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** eax46;
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
    void** v57;
    void** v58;
    void** v59;
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
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** eax78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    int32_t v136;
    void** v137;
    void** v138;
    void** v139;
    int32_t eax140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** eax152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
    void** v179;
    void** v180;
    int32_t* eax181;
    int32_t v182;
    void** v183;
    void** v184;
    void** v185;
    void** v186;
    void** eax187;
    void** v188;
    void** v189;
    void** v190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** eax200;

    ebp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = g14;
    eax11 = stdout;
    fun_8048cd4("Un-installing...", 1, 16, eax11, v12);
    fun_8048aa4(0x805aaa0, "UNINSTALL_BASE=%s", a3, eax11, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25);
    fun_8048ca4(0x805aaa0, "UNINSTALL_BASE=%s", a3, eax11, v26);
    eax31 = fun_8048d94(a4, "UNINSTALL_BASE=%s", a3, eax11, v27, v28, v29, v30);
    eax36 = fun_8048d54(eax31, ".", a3, eax11, v32, v33, v34, v35);
    eax41 = fun_8048d54(0, ".", a3, eax11, v37, v38, v39, v40);
    eax46 = fun_8048d54(0, ".", a3, eax11, v42, v43, v44, v45);
    eax51 = fun_8048be4(eax36, 0, 10, eax11, v47, v48, v49, v50);
    eax56 = fun_8048be4(eax41, 0, 10, eax11, v52, v53, v54, v55);
    fun_8048be4(eax46, 0, 10, eax11, v57, v58, v59, v60);
    fun_8048bf4(eax31, 0, 10, eax11, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71);
    atexit(exit_tmp, 0, 10, eax11, v72, v73, v74, v75);
    v76 = a3;
    deregister_extension(a1, a2, v76, eax11);
    if (reinterpret_cast<int1_t>(eax51 == 6) && reinterpret_cast<signed char>(eax56) <= reinterpret_cast<signed char>(0)) {
        v77 = a3;
        eax78 = deregister_entries_gisman(a2, v77, v76, eax11);
        if (reinterpret_cast<int1_t>(eax78 == 0xffffffff)) {
            print_warning("GIS Manager menu entries could not be removed.\n", v77, v76, eax11, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89);
            v76 = reinterpret_cast<void**>(1);
            v77 = reinterpret_cast<void**>(0x805698c);
            fun_8048c54(0x80682e0, 0x805698c, 1, eax11, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100);
        }
        if (!eax78) {
            print_warning("no entries found to remove from GIS Manager.\n", v77, v76, eax11, v101, v102, v103, v104, v105, v106, v107, v108, v109, v110, v111);
            v76 = reinterpret_cast<void**>(1);
            fun_8048c54(0x80682e0, 0x805698c, 1, eax11, v112, v113, v114, v115, v116, v117, v118, v119, v120, v121, v122);
        }
    }
    deregister_entries_gisman2(a2, a3, v76, eax11);
    deregister_html(a2, a3, v76, eax11);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4, "%s/etc/uninstall.%s", a3, a2, v123, v124, v125, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135);
    v136 = 0;
    v137 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffef78);
    v138 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4);
    eax140 = stat(v138, v137, a3, a2, v139);
    if (eax140 < 0) {
        v138 = reinterpret_cast<void**>("no uninstall script available for this extension.\n \t\t\tUnneeded files may have been left on your system.\n");
        print_warning("no uninstall script available for this extension.\n \t\t\tUnneeded files may have been left on your system.\n", v137, a3, a2, v141, v142, v143, v144, v145, v146, v147, v148, v149, v150, v151);
        v136 = 1;
    }
    if (!v136) {
        eax152 = VERBOSE;
        if (!eax152) {
            v153 = a3;
            v154 = a3;
            v155 = a2;
            v156 = a3;
            v157 = reinterpret_cast<void**>(0x80672c0);
            v158 = a2;
            v159 = a3;
            v160 = reinterpret_cast<void**>(0x80672c0);
            v161 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4);
            v162 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4);
            fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "sh %s &> %s ; rm -vf %s &> %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s &> %s ; rm -vf %s/etc/dm/gem-entries/%s &> %s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db &> %s ; chmod -v a+r %s/etc/extensions.db &> %s ;", v162, 0x80672c0, v161, 0x80672c0, v159, v158, 0x80672c0, v156, v155, 0x80672c0, 0x8063ac0, v154, 0x80672c0, v153, 0x80672c0);
            fun_8048c84(0x806a2e0, reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, v162, 0x80672c0, v161, 0x80672c0, v159, v158, 0x80672c0, v156, v155, 0x80672c0, 0x8063ac0, v154, 0x80672c0, v153, 0x80672c0);
        } else {
            v155 = a3;
            v156 = a3;
            v157 = reinterpret_cast<void**>(0x8063ac0);
            v158 = a2;
            v159 = a3;
            v160 = a2;
            v163 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4);
            v164 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4);
            fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "sh %s ; rm -vf %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s ; rm -vf %s/etc/dm/gem-entries/%s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;", v164, v163, a3, v160, v159, v158, 0x8063ac0, v156, v155, v165, v166, v167, v168, v169, v170);
            fun_8048c84(0x806a2e0, reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, v164, v163, a3, v160, v159, v158, 0x8063ac0, v156, v155, v171, v172, v173, v174, v175, v176);
        }
    } else {
        eax181 = fun_8048a94(v138, v137, a3, a2, v177, v178, v179, v180);
        v182 = *eax181;
        eax187 = fun_8048ad4(v182, v137, a3, a2, v183, v184, v185, v186);
        print_warning("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system", eax187, a3, a2, v188, v189, v190, v191, v192, v193, v194, v195, v196, v197, v198);
    }
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%s %s %s", 0x806a2e0, 0x80682e0, 0x80692e0, v160, v159, v158, v157, v156, v155, 0x80672c0, 0x8063ac0, v154, 0x80672c0, v153, 0x80672c0);
    v199 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4);
    su(a3, v199, 0x806a2e0, 0x80682e0, 0x80692e0, v160, v159, v158, v157, v156, v155, 0x80672c0, 0x8063ac0, v154, 0x80672c0, v153, 0x80672c0);
    print_done(a3, v199, 0x806a2e0, 0x80682e0, 0x80692e0, v160, v159, v158, v157, v156, v155, 0x80672c0, 0x8063ac0, v154, 0x80672c0, v153, 0x80672c0);
    eax200 = reinterpret_cast<void**>(eax10 ^ g14);
    if (eax200) {
        eax200 = fun_8048d34(a3, v199, 0x806a2e0, 0x80682e0, 0x80692e0, v160, v159, v158, v157, v156, v155, 0x80672c0, 0x8063ac0, v154, 0x80672c0, v153, 0x80672c0);
    }
    return eax200;
}

void** source_clean(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* ebp9;
    uint32_t eax10;
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
    void** v22;
    void** v23;
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
    void** eax37;
    void** eax38;
    void** v39;
    void** v40;
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
    void** eax56;
    void** v57;
    void** eax58;
    void** v59;
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
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** eax85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** eax104;
    uint32_t edx105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;

    ebp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = g14;
    eax15 = basename(a1, v11, v12, v13, v14);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%s/src", eax15, v16, v17, v18, v19, a1, v20, v21, v22, v23, v24, v25, v26, v27, v28);
    eax31 = fun_8048c94(reinterpret_cast<int32_t>(ebp9) + 0xfffff7f4, "%s/src", eax15, v29, v30);
    if (reinterpret_cast<signed char>(eax31) < reinterpret_cast<signed char>(0)) {
        print_error(0xfffffffe, "extension '%s' not accessible: ", a1, v32, v33, v34, v35, a1, v36);
    }
    eax37 = VERBOSE;
    if (!eax37) {
        eax38 = stdout;
        fun_8048cd4("Cleaning up...", 1, 14, eax38, v39);
        v40 = reinterpret_cast<void**>("%s -f Makefile -s clean &> %s");
        fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4, "%s -f Makefile -s clean &> %s", 0x806bae0, 0x80672c0, v41, v42, v43, a1, v44, v45, eax31, v46, v47, v48, v49, v50, v51);
        v52 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4);
        eax56 = fun_8048b84(v52, "%s -f Makefile -s clean &> %s", 0x806bae0, 0x80672c0, v53, v54, v55);
        v57 = eax56;
    } else {
        eax58 = stdout;
        fun_8048ce4(eax58, "Running '%s clean':\n", 0x806bae0, v59, v60, v61, v62, a1, v63, v64, eax31, v65, v66, v67, v68);
        v40 = reinterpret_cast<void**>("%s -f Makefile clean");
        fun_8048aa4(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4, "%s -f Makefile clean", 0x806bae0, v69, v70, v71, v72, a1, v73, v74, eax31, v75, v76, v77, v78, v79, v80);
        v52 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffeff4);
        eax85 = fun_8048b84(v52, "%s -f Makefile clean", 0x806bae0, v81, v82, v83, v84);
        v57 = eax85;
    }
    if (!reinterpret_cast<int1_t>(v57 == 0xffffffff)) {
        print_done(v52, v40, 0x806bae0, 0x80672c0, v86, v87, v88, a1, v89, v90, v57, v91, v92, v93, v94, v95, v96);
    } else {
        v40 = reinterpret_cast<void**>("could not run '%s clean' do you have make tools installed?\n");
        print_error(0xfffffff7, "could not run '%s clean' do you have make tools installed?\n", 0x806bae0, 0x80672c0, v97, v98, v99, a1, v100);
    }
    fun_8048b84("sh ../post", v40, 0x806bae0, 0x80672c0, v101, v102, v103);
    eax104 = reinterpret_cast<void**>(0);
    edx105 = eax10 ^ g14;
    if (edx105) {
        eax104 = fun_8048d34("sh ../post", v40, 0x806bae0, 0x80672c0, v106, v107, v108, a1, v109, v110, v57, v111, v112, v113, v114, v115, v116);
    }
    return eax104;
}

void** restore(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    uint32_t eax7;
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
    void** v19;
    void** v20;
    void** v21;
    void** eax22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** eax29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** eax36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** eax42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** eax48;
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
    void** eax70;
    void** eax71;
    void** eax72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** eax84;
    void** eax85;
    void** eax86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** eax97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** eax128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g14;
    eax15 = fun_8048d94(a2, v8, v9, v10, v11, v12, v13, v14);
    eax22 = fun_8048d54(eax15, ".", v16, v17, v18, v19, v20, v21);
    eax29 = fun_8048d54(0, ".", v23, v24, v25, v26, v27, v28);
    eax36 = fun_8048d54(0, ".", v30, v31, v32, v33, v34, v35);
    eax42 = fun_8048be4(eax22, 0, 10, v37, v38, v39, v40, v41);
    eax48 = fun_8048be4(eax29, 0, 10, v43, v44, v45, v46, v47);
    fun_8048be4(eax36, 0, 10, v49, v50, v51, v52, v53);
    fun_8048bf4(eax15, 0, 10, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, a2);
    eax65 = stdout;
    v66 = eax65;
    v67 = reinterpret_cast<void**>(12);
    v68 = reinterpret_cast<void**>(1);
    fun_8048cd4("Restoring...", 1, 12, v66, v69);
    if (reinterpret_cast<int1_t>(eax42 == 6) && (reinterpret_cast<signed char>(eax48) <= reinterpret_cast<signed char>(0) && (eax70 = restore_entries_gisman(a1, 1, 12, v66), eax71 = VERBOSE, !!eax71))) {
        eax72 = stdout;
        v67 = eax70;
        v68 = reinterpret_cast<void**>("\nRestored entries for GIS Manager: %i\n");
        fun_8048ce4(eax72, "\nRestored entries for GIS Manager: %i\n", v67, v66, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, a2);
    }
    v83 = a1;
    eax84 = restore_html(v83, v68, v67, v66);
    eax85 = VERBOSE;
    if (eax85) {
        eax86 = stdout;
        v67 = eax84;
        v68 = reinterpret_cast<void**>("\nRestored links in index.hml: %i\n");
        v83 = eax86;
        fun_8048ce4(v83, "\nRestored links in index.hml: %i\n", v67, v66, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, a2);
    }
    if (reinterpret_cast<signed char>(eax84) > reinterpret_cast<signed char>(0)) {
        eax97 = VERBOSE;
        if (!eax97) {
            v98 = a1;
            v99 = a1;
            v100 = reinterpret_cast<void**>(0x8067ac0);
            v101 = reinterpret_cast<void**>(0x80672c0);
            v102 = a1;
            v66 = a1;
            v67 = reinterpret_cast<void**>(0x80642c0);
            fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl &> %s ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html", 0x80642c0, v66, v102, 0x80672c0, 0x8067ac0, v99, v98, v103, v104, v105, v106, v107, a2, a1, v108);
        } else {
            v99 = a1;
            v100 = a1;
            v101 = reinterpret_cast<void**>(0x8067ac0);
            v102 = a1;
            v66 = a1;
            v67 = reinterpret_cast<void**>(0x80642c0);
            fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html", 0x80642c0, v66, v102, 0x8067ac0, v100, v99, v109, v110, v111, v112, v113, v114, a2, a1, v115);
        }
        v68 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4);
        v83 = a1;
        su(v83, v68, 0x80642c0, v66, v102, v101, v100, v99, v98, v116, v117, v118, v119, v120, a2, a1, v121);
    }
    if (eax84) {
        print_done(v83, v68, v67, v66, v102, v101, v100, v99, v98, v122, v123, v124, v125, v126, a2, a1, v127);
    } else {
        v68 = reinterpret_cast<void**>("could not find anything to restore.\n");
        v83 = reinterpret_cast<void**>(0xffffffe6);
        print_error(0xffffffe6, "could not find anything to restore.\n", v67, v66, v102, v101, v100, v99, v98);
    }
    eax128 = reinterpret_cast<void**>(eax7 ^ g14);
    if (eax128) {
        eax128 = fun_8048d34(v83, v68, v67, v66, v102, v101, v100, v99, v98, v129, v130, v131, v132, v133, a2, a1, v134);
    }
    return eax128;
}

void** list_extensions(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    uint32_t eax7;
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
    void** v41;
    void** eax42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    int32_t* eax47;
    void** eax48;
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
    void** v59;
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
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    int32_t* eax77;
    int32_t v78;
    void** v79;
    void** v80;
    void** v81;
    void** eax82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** eax100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g14;
    eax8 = stdout;
    fun_8048ce4(eax8, "\nExtensions in '%s' (name, version, type, depends):\n", a1, v9, v10, v11, v12, a1, v13, v14, v15, v16, v17, v18, v19);
    v20 = a1;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "%s/etc/extensions.db", v20, v21, v22, v23, v24, a1, v25, v26, v27, v28, v29, v30, v31, v32, v33);
    v34 = reinterpret_cast<void**>("r");
    v35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4);
    eax42 = fun_8048c74(v35, "r", v20, v36, v37, v38, v39, a1, v40, v41);
    if (!eax42) {
        eax47 = fun_8048a94(v35, "r", v20, v43, v44, v45, v46, a1);
        if (*eax47 == 2) {
            eax48 = stderr;
            v49 = eax48;
            v20 = reinterpret_cast<void**>(6);
            v34 = reinterpret_cast<void**>(1);
            fun_8048cd4("NONE.\n", 1, 6, v49, v50);
            fun_8048c44(eax42, 1, 6, v49, v51, v52, v53, a1, v54, v55, eax42, v56, v57, v58, v59);
            fun_8048db4(0, 1, 6, v49, v60, v61, v62, a1, v63, v64, eax42);
        }
        fun_8048c44(eax42, v34, v20, v49, v65, v66, v67, a1, v68, v69, eax42, v70, v71, v72, v73);
        eax77 = fun_8048a94(eax42, v34, v20, v49, v74, v75, v76, a1);
        v78 = *eax77;
        eax82 = fun_8048ad4(v78, v34, v20, v49, v79, v80, v81, a1);
        v83 = eax82;
        v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4);
        v34 = reinterpret_cast<void**>("checking for file '%s': %s\n");
        print_error(0xffffffe3, "checking for file '%s': %s\n", v20, v83, v84, v85, v86, a1, v87);
    }
    fun_8048c44(eax42, v34, v20, v83, v88, v89, v90, a1, v91, v92, eax42, v93, v94, v95, v96);
    v97 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4);
    dump_ascii(v97, 0x805698c, v20, v83, v98, v99);
    eax100 = reinterpret_cast<void**>(eax7 ^ g14);
    if (eax100) {
        eax100 = fun_8048d34(v97, 0x805698c, v20, v83, v101, v102, v103, a1, v104, v105, eax42, v106, v107, v108, v109, v110, v111);
    }
    return eax100;
}

void fun_8048d74(void* a1, void** a2, void** a3);

void** run_post(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    uint32_t eax7;
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
    void** v25;
    void** v26;
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
    void** v57;
    void** v58;
    void** v59;
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
    void** v72;
    void** v73;
    void** v74;
    void** v75;
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
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** eax92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** edx136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** edx159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
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
    void** v199;
    void** v200;
    void** v201;
    void** v202;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g14;
    switch (a2 - 3) {
    case 0:
        v8 = reinterpret_cast<void**>(19);
        v9 = reinterpret_cast<void**>("GEM_ACTION=INSTALL");
        fun_8048c54(0x805f2a0, "GEM_ACTION=INSTALL", 19, v10, v11, a4, a3, a1, v12, v13, v14, v15, v16, v17, v18);
        break;
    case 1:
        v8 = reinterpret_cast<void**>(19);
        v9 = reinterpret_cast<void**>("GEM_ACTION=INSTALL");
        fun_8048c54(0x805f2a0, "GEM_ACTION=INSTALL", 19, v19, v20, a4, a3, a1, v21, v22, v23, v24, v25, v26, v27);
        break;
    case 2:
        v8 = reinterpret_cast<void**>(17);
        v9 = reinterpret_cast<void**>("GEM_ACTION=QUERY");
        fun_8048c54(0x805f2a0, "GEM_ACTION=QUERY", 17, v28, v29, a4, a3, a1, v30, v31, v32, v33, v34, v35, v36);
        break;
    case 3:
        v8 = reinterpret_cast<void**>(17);
        v9 = reinterpret_cast<void**>("GEM_ACTION=CLEAN");
        fun_8048c54(0x805f2a0, "GEM_ACTION=CLEAN", 17, v37, v38, a4, a3, a1, v39, v40, v41, v42, v43, v44, v45);
        break;
    case 4:
        v8 = reinterpret_cast<void**>(19);
        v9 = reinterpret_cast<void**>("GEM_ACTION=LICENSE");
        fun_8048c54(0x805f2a0, "GEM_ACTION=LICENSE", 19, v46, v47, a4, a3, a1, v48, v49, v50, v51, v52, v53, v54);
        break;
    case 6:
        v8 = reinterpret_cast<void**>(19);
        v9 = reinterpret_cast<void**>("GEM_ACTION=DETAILS");
        fun_8048c54(0x805f2a0, "GEM_ACTION=DETAILS", 19, v55, v56, a4, a3, a1, v57, v58, v59, v60, v61, v62, v63);
    case 5:
        goto 0x805284a;
    }
    fun_8048ca4(0x805f2a0, v9, v8, v64, v65);
    if (!a4) {
        v66 = reinterpret_cast<void**>(23);
        v67 = reinterpret_cast<void**>("INSTALL_BASE=UNDEFINED");
        fun_8048c54(0x805faa0, "INSTALL_BASE=UNDEFINED", 23, v68, v69, a4, a3, a1, v70, v71, v72, v73, v74, v75, v76);
    } else {
        v66 = a4;
        v67 = reinterpret_cast<void**>("INSTALL_BASE=%s");
        fun_8048aa4(0x805faa0, "INSTALL_BASE=%s", v66, v77, v78, a4, a3, a1, v79, v80, v81, v82, v83, v84, v85, v86, v87);
    }
    fun_8048ca4(0x805faa0, v67, v66, v88, v89);
    fun_8048d74(reinterpret_cast<int32_t>(ebp6) - 0x80c, 0x800, v66);
    eax92 = basename(a1, 0x800, v66, v90, v91);
    fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xffffeff4, "%s/%s/src", reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, eax92, v93, a4, a3, a1, v94, v95, v96, v97, v98, v99, v100, v101, v102);
    v103 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xffffeff4);
    fun_8048aa4(0x8062aa0, "EXT_BASE=%s", v103, eax92, v104, a4, a3, a1, v105, v106, v107, v108, v109, v110, v111, v112, v113);
    fun_8048ca4(0x8062aa0, "EXT_BASE=%s", v103, eax92, v114);
    if (a3) {
        v115 = a3;
        v116 = reinterpret_cast<void**>("INSTALL_TYPE=%s");
        fun_8048aa4(0x80602a0, "INSTALL_TYPE=%s", v115, eax92, v117, a4, a3, a1, v118, v119, v120, v121, v122, v123, v124, v125, v126);
    } else {
        v115 = reinterpret_cast<void**>(17);
        v116 = reinterpret_cast<void**>("INSTALL_TYPE=src");
        fun_8048c54(0x80602a0, "INSTALL_TYPE=src", 17, eax92, v127, a4, a3, a1, v128, v129, v130, v131, v132, v133, v134);
    }
    fun_8048ca4(0x80602a0, v116, v115, eax92, v135);
    edx136 = FORCE;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "%i", edx136, eax92, v137, a4, a3, a1, v138, v139, v140, v141, v142, v143, v144, v145, v146);
    v147 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4);
    fun_8048aa4(0x8060aa0, "GEM_FORCE=%s", v147, eax92, v148, a4, a3, a1, v149, v150, v151, v152, v153, v154, v155, v156, v157);
    fun_8048ca4(0x8060aa0, "GEM_FORCE=%s", v147, eax92, v158);
    edx159 = VERBOSE;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "%i", edx159, eax92, v160, a4, a3, a1, v161, v162, v163, v164, v165, v166, v167, v168, v169);
    v170 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4);
    fun_8048aa4(0x80612a0, "GEM_VERBOSE=%s", v170, eax92, v171, a4, a3, a1, v172, v173, v174, v175, v176, v177, v178, v179, v180);
    fun_8048ca4(0x80612a0, "GEM_VERBOSE=%s", v170, eax92, v181);
    fun_8048c54(0x8061aa0, "GEM_GUI=0", 10, eax92, v182, a4, a3, a1, v183, v184, v185, v186, v187, v188, v189);
    fun_8048ca4(0x8061aa0, "GEM_GUI=0", 10, eax92, v190);
    atexit(exit_tmp, "GEM_GUI=0", 10, eax92, v191, a4, a3, a1);
    eax192 = reinterpret_cast<void**>(eax7 ^ g14);
    if (eax192) {
        eax192 = fun_8048d34(exit_tmp, "GEM_GUI=0", 10, eax92, v193, a4, a3, a1, v194, v195, v196, v197, v198, v199, v200, v201, v202);
    }
    return eax192;
}

unsigned char CONFIG_OPTS = 0;

void show_help(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    void** v7;
    void** eax8;
    void** v9;
    void** eax10;
    void** v11;
    void** eax12;
    void** v13;
    void** eax14;
    void** v15;
    void** eax16;
    void** v17;
    void** eax18;
    void** v19;
    void** eax20;
    void** v21;
    void** eax22;
    void** v23;
    void** eax24;
    void** v25;
    void** eax26;
    void** v27;
    void** eax28;
    void** v29;
    void** eax30;
    void** v31;
    void** eax32;
    void** v33;
    void** eax34;
    void** v35;
    void** eax36;
    void** v37;
    void** eax38;
    void** v39;
    void** eax40;
    void** v41;
    void** eax42;
    void** v43;
    void** eax44;
    void** v45;
    void** eax46;
    void** v47;
    void** eax48;
    void** v49;
    void** eax50;
    void** v51;
    void** eax52;
    void** v53;
    void** eax54;
    void** v55;
    void** eax56;
    void** v57;
    void** eax58;
    void** v59;
    void** eax60;
    void** v61;
    void** eax62;
    void** v63;
    void** eax64;
    void** v65;
    void** eax66;
    void** v67;
    void** eax68;
    void** v69;
    void** eax70;
    void** v71;
    void** eax72;
    void** v73;
    void** eax74;
    void** v75;
    void** eax76;
    void** v77;
    void** v78;
    void** v79;
    void** ebp80;
    void* esp81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** eax86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** eax105;
    void* esp106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    int32_t* eax112;
    int32_t v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** eax119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** esp135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** eax140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** eax159;
    void* esp160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    int32_t* eax166;
    int32_t v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** eax173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
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
    void** eax189;
    void** v190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** eax197;
    void** v198;
    void** eax199;
    void** v200;
    void** eax201;
    void** v202;
    void** eax203;
    void** v204;
    void** v205;
    void** v206;
    void* ebp207;
    uint32_t eax208;
    uint32_t eax209;
    void** v210;
    void** v211;
    void** v212;
    void** v213;
    void** v214;
    void** v215;
    void** v216;
    void** v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    void** v223;
    void** v224;
    void** v225;
    void** v226;
    void** v227;
    void** v228;
    void** v229;
    void** eax230;
    void** v231;
    void** v232;
    void** v233;
    void** v234;
    void** v235;
    void** v236;
    void** v237;
    void** v238;
    void** v239;
    void** v240;
    void** v241;
    void** v242;
    void** v243;
    void** eax244;
    void** v245;
    void** v246;
    void** v247;
    void** v248;
    void** v249;
    void** v250;
    void** v251;
    void** v252;
    void** v253;
    void** v254;
    void** v255;
    void** v256;
    void** v257;
    void** v258;
    void** v259;
    void** v260;
    void** v261;
    void** v262;
    void** v263;
    void** v264;
    void** v265;
    void** v266;
    uint32_t eax267;
    void** v268;
    void** v269;
    void** v270;
    void** v271;
    void** v272;
    void** v273;
    void** v274;
    void** v275;
    void** v276;
    void** v277;
    void** v278;
    void** v279;

    eax6 = stdout;
    fun_8048cd4("Usage: gem64 [OPTION] [ACTION] [FILE|DIR]\n", 1, 42, eax6, v7);
    eax8 = stdout;
    fun_8048cd4("Install a GRASS extension from FILE or DIR.\n", 1, 44, eax8, v9);
    eax10 = stdout;
    fun_8048cd4("Manage (installed) GRASS extension(s).\n", 1, 39, eax10, v11);
    eax12 = stdout;
    fun_8048cd4("\nPossible ACTIONs are:\n", 1, 23, eax12, v13);
    eax14 = stdout;
    fun_8048cd4("  -i, --install=EXT\tinstall a GRASS extension\n", 1, 46, eax14, v15);
    eax16 = stdout;
    fun_8048cd4("  -u, --uninstall=EXT\tremove an extension from GRASS\n", 1, 53, eax16, v17);
    eax18 = stdout;
    fun_8048cd4("  -q, --query=EXT\tdisplay information about extension/list installed\n", 1, 69, eax18, v19);
    eax20 = stdout;
    fun_8048cd4("  -d, --details=EXT\tdisplay additional details about an extension\n", 1, 66, eax20, v21);
    eax22 = stdout;
    fun_8048cd4("  -c, --clean=EXT\tclean extension's source code directories\n", 1, 60, eax22, v23);
    eax24 = stdout;
    fun_8048cd4("  -t, --test=EXT\tconfigure and compile extension, but don't install\n", 1, 68, eax24, v25);
    eax26 = stdout;
    fun_8048cd4("  -l, --license=EXT\tshow copyright information for an extension\n", 1, 64, eax26, v27);
    eax28 = stdout;
    fun_8048cd4("  -r, --restore\t\trecreate HTML links and GIS Manager entries\n", 1, 61, eax28, v29);
    eax30 = stdout;
    fun_8048cd4("  -h, --help\t\tdisplay this help and exit\n", 1, 41, eax30, v31);
    eax32 = stdout;
    fun_8048cd4("  -V, --version\t\toutput version information and exit\n\n", 1, 54, eax32, v33);
    eax34 = stdout;
    fun_8048cd4("\nPossible OPTIONs are:\n", 1, 23, eax34, v35);
    eax36 = stdout;
    fun_8048cd4("  -g, --grass=PATH\tpath to GRASS installation dir\n", 1, 50, eax36, v37);
    eax38 = stdout;
    fun_8048cd4("  -b, --binary=NAME\tno compilation: use binary files for system NAME\n", 1, 69, eax38, v39);
    eax40 = stdout;
    fun_8048cd4("  -f, --force\t\tforce action, regardless of dependencies\n", 1, 56, eax40, v41);
    eax42 = stdout;
    fun_8048cd4("  -v, --verbose\t\tdisplay detailed status information\n", 1, 53, eax42, v43);
    eax44 = stdout;
    fun_8048cd4("  -s, --skip-config\tskip configure script\n", 1, 42, eax44, v45);
    eax46 = stdout;
    fun_8048cd4("  -x, --config-opts=OPTS\tpass OPTS to configure script\n", 1, 55, eax46, v47);
    eax48 = stdout;
    fun_8048cd4("  -o, --options=OPTS\toptions to pass to the C compiler/linker\n", 1, 62, eax48, v49);
    eax50 = stdout;
    fun_8048cd4("  -C, --config-cmd=CMD\tDefine custom 'configure' command (default=configure)\n", 1, 77, eax50, v51);
    eax52 = stdout;
    fun_8048cd4("  -m, --make-cmd=CMD\tDefine custom 'make' command (default=make)\n", 1, 65, eax52, v53);
    eax54 = stdout;
    fun_8048cd4("\nWhen run from within a GRASS session, locations of libs, header files\n", 1, 71, eax54, v55);
    eax56 = stdout;
    fun_8048cd4("and installation target dir will be assumed to match those of the active\n", 1, 73, eax56, v57);
    eax58 = stdout;
    fun_8048cd4("GRASS version. ", 1, 15, eax58, v59);
    eax60 = stdout;
    fun_8048cd4("Option -g can be used to override these or install extensions\nfrom outside", 1, 74, eax60, v61);
    eax62 = stdout;
    fun_8048cd4("of a GRASS session.\n", 1, 20, eax62, v63);
    eax64 = stdout;
    fun_8048cd4("Per default, extensions will be compiled from source and then installed.\n", 1, 73, eax64, v65);
    eax66 = stdout;
    fun_8048cd4("If the exension package contains binaries for the user's platform, they can\n", 1, 76, eax66, v67);
    eax68 = stdout;
    fun_8048cd4("be installed instead using the -b option. ", 1, 42, eax68, v69);
    eax70 = stdout;
    fun_8048cd4("For installation from source code, a C compiler and make tools are needed.\n", 1, 75, eax70, v71);
    eax72 = stdout;
    fun_8048cd4("\nExample:\n", 1, 10, eax72, v73);
    eax74 = stdout;
    fun_8048cd4("\tgem64 -b macosx --grass=/usr/local/grass-6.4.0 -i myExtension\n", 1, 63, eax74, v75);
    eax76 = stdout;
    fun_8048cd4("Installs the MacOS X binaries for 'myExtension' in /usr/local/grass-6.4.0.\n", 1, 75, eax76, v77);
    fun_8048db4(0, 1, 75, eax76, v78, v79, ebp80, __return_address(), a1, a2, a3);
    esp81 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
    eax86 = basename(1, v82, v83, v84, v85);
    fun_8048c84(reinterpret_cast<int32_t>(esp81) + 0xfffff7f4, eax86, v87, v88, v89, v90, v91, 1, v92, v93, v94, v95, v96, v97, v98, v99, v100);
    v101 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp81) + 0xfffff7f4);
    eax105 = fun_8048c94(v101, eax86, v102, v103, v104);
    esp106 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp81) - 0x838 - 4 + 4 - 4 + 4 - 4 + 4);
    if (reinterpret_cast<signed char>(eax105) < reinterpret_cast<signed char>(0)) {
        eax112 = fun_8048a94(v101, eax86, v107, v108, v109, v110, v111, 1);
        v113 = *eax112;
        eax119 = fun_8048ad4(v113, eax86, v114, v115, v116, v117, v118, 1);
        v120 = eax119;
        print_error(0xfffffffe, "extension '%s' not accessible: (%s)\n", 1, v120, v121, v122, v123, 1, v124);
        esp106 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp106) - 4 + 4 - 4 + 4 - 4 + 4);
    }
    dump_ascii("info", "Detailed information", 1, v120, v125, v126);
    fun_8048b84("sh post", "Detailed information", 1, v120, v127, v128, v129);
    fun_8048db4(0, "Detailed information", 1, v120, v130, v131, v132, 1, v133, v134, eax105);
    esp135 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp106) - 4 + 4 - 4 + 4 - 4 + 4 - 4);
    eax140 = basename("Detailed information", v136, v137, v138, v139);
    fun_8048c84(esp135 + 0xfffff7f4, eax140, v141, v142, v143, v144, v145, "Detailed information", v146, v147, v148, v149, v150, v151, v152, v153, v154);
    v155 = esp135 + 0xfffff7f4;
    eax159 = fun_8048c94(v155, eax140, v156, v157, v158);
    esp160 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp135 - 0x838) - 4 + 4 - 4 + 4 - 4 + 4);
    if (reinterpret_cast<signed char>(eax159) < reinterpret_cast<signed char>(0)) {
        eax166 = fun_8048a94(v155, eax140, v161, v162, v163, v164, v165, "Detailed information");
        v167 = *eax166;
        eax173 = fun_8048ad4(v167, eax140, v168, v169, v170, v171, v172, "Detailed information");
        v174 = eax173;
        print_error(0xfffffffe, "extension '%s' not accessible: (%s)\n", "Detailed information", v174, v175, v176, v177, "Detailed information", v178);
        esp160 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp160) - 4 + 4 - 4 + 4 - 4 + 4);
    }
    dump_ascii("license", "Detailed information", "Detailed information", v174, v179, v180);
    fun_8048b84("sh post", "Detailed information", "Detailed information", v174, v181, v182, v183);
    fun_8048db4(0, "Detailed information", "Detailed information", v174, v184, v185, v186, "Detailed information", v187, v188, eax159);
    eax189 = stdout;
    __asm__("fld qword [0x8057e40]");
    __asm__("fstp qword [esp+0x8]");
    fun_8048ce4(eax189, "gem64 (GRASS extensions manager) %.2f\n", v190, v191, v192, v193, esp135, 0, "Detailed information", "Detailed information", v174, v194, v195, v196, "Detailed information");
    eax197 = stdout;
    fun_8048cd4("Written by Benjamin Ducke\n", 1, 26, eax197, v198);
    eax199 = stdout;
    fun_8048cd4("\nCopyright (C) 2005 Benjamin Ducke\n", 1, 35, eax199, v200);
    eax201 = stdout;
    fun_8048cd4("This is free software; see the source for copying conditions.  There is NO\n", 1, 75, eax201, v202);
    eax203 = stdout;
    fun_8048cd4("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 1, 76, eax203, v204);
    fun_8048db4(0, 1, 76, eax203, v205, v206, esp135, 0, "Detailed information", "Detailed information", v174);
    ebp207 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp160) - 4 + 4 - 4 + 4 - 4 + 4 - 4 - 24 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
    eax208 = g14;
    eax209 = CONFIG_OPTS;
    if (!*reinterpret_cast<signed char*>(&eax209)) {
        v210 = reinterpret_cast<void**>(1);
        fun_8048aa4(reinterpret_cast<uint32_t>(ebp207) + 0xfffff7f4, "%s/etc/config.system", 1, v211, v212, v213, v214, 1, v215, v216, v217, v218, v219, v220, v221, v222, v223);
        eax230 = fun_8048c74(reinterpret_cast<uint32_t>(ebp207) + 0xfffff7f4, "r", 1, v224, v225, v226, v227, 1, v228, v229);
        v231 = eax230;
        if (v231) {
            v210 = v231;
            v232 = reinterpret_cast<void**>(0x800);
            v233 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp207) + 0xfffff7f4);
            eax244 = nc_fgets_nb(v233, 0x800, v210, v234, v235, v236, v237, 1, v238, v239, v231, v240, v241, v242, v243);
            if (eax244) {
                v232 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp207) + 0xfffff7f4);
                v233 = reinterpret_cast<void**>(0x806aae0);
                fun_8048c84(0x806aae0, v232, v210, v245, v246, v247, v248, 1, v249, v250, v231, v251, v252, v253, v254, v255, v256);
            }
        } else {
            v232 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp207) + 0xfffff7f4);
            v233 = reinterpret_cast<void**>("could not open %s for read access. Using default configure options.\n");
            print_warning("could not open %s for read access. Using default configure options.\n", v232, 1, v257, v258, v259, v260, 1, v261, v262, v231, v263, v264, v265, v266);
        }
    }
    eax267 = eax208 ^ g14;
    if (eax267) {
        fun_8048d34(v233, v232, v210, v268, v269, v270, v271, 1, v272, v273, v231, v274, v275, v276, v277, v278, v279);
    }
    goto 0;
}

int32_t getopt_long = 0x8048c3a;

int32_t fun_8048c34(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto getopt_long;
}

void show_version(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** ebp13;
    void** eax14;
    void** v15;
    void** eax16;
    void** v17;
    void** eax18;
    void** v19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    void* ebp24;
    uint32_t eax25;
    uint32_t eax26;
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
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
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
    void** v59;
    void** v60;
    void** eax61;
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
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    uint32_t eax84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;

    eax8 = stdout;
    __asm__("fld qword [0x8057e40]");
    __asm__("fstp qword [esp+0x8]");
    fun_8048ce4(eax8, "gem64 (GRASS extensions manager) %.2f\n", v9, v10, v11, v12, ebp13, __return_address(), a1, a2, a3, a4, a5, a6, a7);
    eax14 = stdout;
    fun_8048cd4("Written by Benjamin Ducke\n", 1, 26, eax14, v15);
    eax16 = stdout;
    fun_8048cd4("\nCopyright (C) 2005 Benjamin Ducke\n", 1, 35, eax16, v17);
    eax18 = stdout;
    fun_8048cd4("This is free software; see the source for copying conditions.  There is NO\n", 1, 75, eax18, v19);
    eax20 = stdout;
    fun_8048cd4("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 1, 76, eax20, v21);
    fun_8048db4(0, 1, 76, eax20, v22, v23, ebp13, __return_address(), a1, a2, a3);
    ebp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
    eax25 = g14;
    eax26 = CONFIG_OPTS;
    if (!*reinterpret_cast<signed char*>(&eax26)) {
        v27 = reinterpret_cast<void**>(1);
        fun_8048aa4(reinterpret_cast<int32_t>(ebp24) + 0xfffff7f4, "%s/etc/config.system", 1, v28, v29, v30, v31, 1, v32, v33, v34, v35, v36, v37, v38, v39, v40);
        eax47 = fun_8048c74(reinterpret_cast<int32_t>(ebp24) + 0xfffff7f4, "r", 1, v41, v42, v43, v44, 1, v45, v46);
        v48 = eax47;
        if (v48) {
            v27 = v48;
            v49 = reinterpret_cast<void**>(0x800);
            v50 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp24) + 0xfffff7f4);
            eax61 = nc_fgets_nb(v50, 0x800, v27, v51, v52, v53, v54, 1, v55, v56, v48, v57, v58, v59, v60);
            if (eax61) {
                v49 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp24) + 0xfffff7f4);
                v50 = reinterpret_cast<void**>(0x806aae0);
                fun_8048c84(0x806aae0, v49, v27, v62, v63, v64, v65, 1, v66, v67, v48, v68, v69, v70, v71, v72, v73);
            }
        } else {
            v49 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp24) + 0xfffff7f4);
            v50 = reinterpret_cast<void**>("could not open %s for read access. Using default configure options.\n");
            print_warning("could not open %s for read access. Using default configure options.\n", v49, 1, v74, v75, v76, v77, 1, v78, v79, v48, v80, v81, v82, v83);
        }
    }
    eax84 = eax25 ^ g14;
    if (eax84) {
        fun_8048d34(v50, v49, v27, v85, v86, v87, v88, 1, v89, v90, v48, v91, v92, v93, v94, v95, v96);
    }
    goto 0;
}

int32_t open = 0x8048aca;

void** fun_8048ac4(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto open;
}

int32_t getenv = 0x8048b6a;

void** fun_8048b64(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto getenv;
}

void** wget_extension(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    uint32_t eax7;
    void** eax8;
    void** v9;
    void** eax10;
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
    void** v26;
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
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** eax61;
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
    void** v72;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g14;
    eax8 = stdout;
    fun_8048cd4("Downloading...", 1, 14, eax8, v9);
    eax10 = VERBOSE;
    if (!eax10) {
        v11 = a1;
        v12 = reinterpret_cast<void**>("wget -N -q %s");
        fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "wget -N -q %s", v11, eax8, v13, v14, v15, a1, v16, v17, v18, v19, v20, v21, v22, v23, v24);
    } else {
        v11 = a1;
        v12 = reinterpret_cast<void**>("wget -N %s");
        fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "wget -N %s", v11, eax8, v25, v26, v27, a1, v28, v29, v30, v31, v32, v33, v34, v35, v36);
    }
    v37 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4);
    eax41 = fun_8048b84(v37, v12, v11, eax8, v38, v39, v40);
    if (reinterpret_cast<int1_t>(eax41 == 0xffffffff)) {
        v12 = reinterpret_cast<void**>("could not run 'wget' to download extension. Is it installed?\n");
        v37 = reinterpret_cast<void**>(0xffffffec);
        print_error(0xffffffec, "could not run 'wget' to download extension. Is it installed?\n", v11, eax8, v42, v43, v44, a1, v45);
    }
    if (reinterpret_cast<signed char>(eax41) > reinterpret_cast<signed char>(0)) {
        v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4);
        v12 = reinterpret_cast<void**>("running command '%s'.\n");
        v37 = reinterpret_cast<void**>(0xffffffec);
        print_error(0xffffffec, "running command '%s'.\n", v11, eax8, v46, v47, v48, a1, v49);
    }
    print_done(v37, v12, v11, eax8, v50, v51, v52, a1, v53, v54, eax41, v55, v56, v57, v58, v59, v60);
    eax61 = reinterpret_cast<void**>(eax7 ^ g14);
    if (eax61) {
        eax61 = fun_8048d34(v37, v12, v11, eax8, v62, v63, v64, a1, v65, v66, eax41, v67, v68, v69, v70, v71, v72);
    }
    return eax61;
}

int32_t readdir = 0x8048bda;

struct s2* fun_8048bd4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    goto readdir;
}

int32_t fun_8048af4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** check_extension(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    uint32_t eax12;
    uint32_t v13;
    int32_t ecx14;
    void** eax15;
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
    void** eax29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    int32_t* eax34;
    int32_t v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** eax40;
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
    void** eax52;
    void** v53;
    void** v54;
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
    int32_t eax65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
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
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** eax97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** eax112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** eax141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v7 = a1;
    v8 = a2;
    v9 = a3;
    v10 = a4;
    v11 = a5;
    eax12 = g14;
    v13 = eax12;
    ecx14 = 0x1ff;
    while (ecx14) {
        --ecx14;
    }
    eax15 = stdout;
    v16 = eax15;
    v17 = reinterpret_cast<void**>(22);
    fun_8048cd4("Checking extension ...", 1, 22, v16, v18);
    fun_8048c84(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, v7, 22, v16, v19, v20, v21, v22, v23, v24, v25, v11, v10, v9, v8, v7, v26);
    v27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4);
    eax29 = fun_8048c94(v27, v7, 22, v16, v28);
    if (reinterpret_cast<signed char>(eax29) < reinterpret_cast<signed char>(0)) {
        eax34 = fun_8048a94(v27, v7, 22, v16, v30, v31, v32, v33);
        v35 = *eax34;
        eax40 = fun_8048ad4(v35, v7, 22, v16, v36, v37, v38, v39);
        v16 = eax40;
        v17 = v7;
        print_error(0xfffffffe, "extension '%s' not accessible: %s\n", v17, v16, v41, v42, v43, v44, v45);
    }
    eax52 = fun_8048c74("id", "r", v17, v16, v46, v47, v48, v49, v50, v51);
    if (eax52) {
        v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4);
        fun_8048af4(eax52, "%[<GRASS extension package>] ", v17, v16, v53, v54, v55, v56);
        v57 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4);
        eax65 = fun_8048da4("<GRASS extension package>", v57, v17, v16, v58, v59, v60, v61, v62, v63, v64, v11);
        if (eax65) {
            fun_8048c44(eax52, v57, v17, v16, v66, v67, v68, v69, v70, v71, v72, v11, v10, v9, v8);
            v57 = reinterpret_cast<void**>("unknown file identifier.\n");
            print_error(0xfffffffa, "unknown file identifier.\n", v17, v16, v73, v74, v75, v76, v77);
        }
    } else {
        v57 = reinterpret_cast<void**>("'id' file not readable.\n");
        print_error(0xfffffffa, "'id' file not readable.\n", v17, v16, v78, v79, v80, v81, v82);
    }
    fun_8048c44(eax52, v57, v17, v16, v83, v84, v85, v86, v87, v88, v89, v11, v10, v9, v8);
    get_package_name(".", v8, v17, v16, v90);
    eax97 = fun_8048c74("version", "r", v17, v16, v91, v92, v93, v94, v95, v96);
    if (eax97) {
        nc_fgets_nb(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, 0x800, eax97, v16, v98, v99, v100, v101, v102, v103, v104, v11, v10, v9, v8);
        *reinterpret_cast<void***>(v10) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(v11) = reinterpret_cast<void**>(0);
        v105 = v11;
        v16 = v10;
        v17 = v9;
        v106 = reinterpret_cast<void**>("%i.%i.%i");
        v107 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4);
        eax112 = fun_8048b34(v107, "%i.%i.%i", v17, v16, v105, v108, v109, v110, v111);
        if (reinterpret_cast<signed char>(eax112) <= reinterpret_cast<signed char>(0)) {
            fun_8048c44(eax97, "%i.%i.%i", v17, v16, v105, v113, v114, v115, v116, v117, v118, v11, v10, v9, v8);
            v106 = reinterpret_cast<void**>("invalid or missing version information.\n");
            v107 = reinterpret_cast<void**>(0xfffffffa);
            print_error(0xfffffffa, "invalid or missing version information.\n", v17, v16, v105, v119, v120, v121, v122);
        }
    } else {
        v106 = reinterpret_cast<void**>("'version' file not readable.\n");
        v107 = reinterpret_cast<void**>(0xfffffffa);
        print_error(0xfffffffa, "'version' file not readable.\n", v17, v16, v123, v124, v125, v126, v127);
    }
    print_done(v107, v106, v17, v16, v105, v128, v129, v130, v131, v132, v133, v11, v10, v9, v8, v7, v134);
    fun_8048c94("..", v106, v17, v16, v105);
    fun_8048c44(eax97, v106, v17, v16, v105, v135, v136, v137, v138, v139, v140, v11, v10, v9, v8);
    eax141 = reinterpret_cast<void**>(v13 ^ g14);
    if (eax141) {
        eax141 = fun_8048d34(eax97, v106, v17, v16, v105, v142, v143, v144, v145, v146, v147, v11, v10, v9, v8, v7, v148);
    }
    return eax141;
}

void show_details(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* esp9;
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
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** eax33;
    void* esp34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    int32_t* eax40;
    int32_t v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
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
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** esp64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** eax69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
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
    void** v87;
    void** eax88;
    void* esp89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    int32_t* eax95;
    int32_t v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** eax102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** eax118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** eax126;
    void** v127;
    void** eax128;
    void** v129;
    void** eax130;
    void** v131;
    void** eax132;
    void** v133;
    void** v134;
    void** v135;
    void* ebp136;
    uint32_t eax137;
    uint32_t eax138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** eax159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** eax173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
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
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    uint32_t eax196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;

    esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax14 = basename(a1, v10, v11, v12, v13);
    fun_8048c84(reinterpret_cast<int32_t>(esp9) + 0xfffff7f4, eax14, v15, v16, v17, v18, v19, a1, v20, v21, v22, v23, v24, v25, v26, v27, v28);
    v29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp9) + 0xfffff7f4);
    eax33 = fun_8048c94(v29, eax14, v30, v31, v32);
    esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 0x838 - 4 + 4 - 4 + 4 - 4 + 4);
    if (reinterpret_cast<signed char>(eax33) < reinterpret_cast<signed char>(0)) {
        eax40 = fun_8048a94(v29, eax14, v35, v36, v37, v38, v39, a1);
        v41 = *eax40;
        eax47 = fun_8048ad4(v41, eax14, v42, v43, v44, v45, v46, a1);
        v48 = eax47;
        v49 = a1;
        print_error(0xfffffffe, "extension '%s' not accessible: (%s)\n", v49, v48, v50, v51, v52, a1, v53);
        esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 + 4 - 4 + 4 - 4 + 4);
    }
    dump_ascii("info", "Detailed information", v49, v48, v54, v55);
    fun_8048b84("sh post", "Detailed information", v49, v48, v56, v57, v58);
    fun_8048db4(0, "Detailed information", v49, v48, v59, v60, v61, a1, v62, v63, eax33);
    esp64 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp34) - 4 + 4 - 4 + 4 - 4 + 4 - 4);
    eax69 = basename("Detailed information", v65, v66, v67, v68);
    fun_8048c84(esp64 + 0xfffff7f4, eax69, v70, v71, v72, v73, v74, "Detailed information", v75, v76, v77, v78, v79, v80, v81, v82, v83);
    v84 = esp64 + 0xfffff7f4;
    eax88 = fun_8048c94(v84, eax69, v85, v86, v87);
    esp89 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp64 - 0x838) - 4 + 4 - 4 + 4 - 4 + 4);
    if (reinterpret_cast<signed char>(eax88) < reinterpret_cast<signed char>(0)) {
        eax95 = fun_8048a94(v84, eax69, v90, v91, v92, v93, v94, "Detailed information");
        v96 = *eax95;
        eax102 = fun_8048ad4(v96, eax69, v97, v98, v99, v100, v101, "Detailed information");
        v103 = eax102;
        print_error(0xfffffffe, "extension '%s' not accessible: (%s)\n", "Detailed information", v103, v104, v105, v106, "Detailed information", v107);
        esp89 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp89) - 4 + 4 - 4 + 4 - 4 + 4);
    }
    dump_ascii("license", "Detailed information", "Detailed information", v103, v108, v109);
    fun_8048b84("sh post", "Detailed information", "Detailed information", v103, v110, v111, v112);
    fun_8048db4(0, "Detailed information", "Detailed information", v103, v113, v114, v115, "Detailed information", v116, v117, eax88);
    eax118 = stdout;
    __asm__("fld qword [0x8057e40]");
    __asm__("fstp qword [esp+0x8]");
    fun_8048ce4(eax118, "gem64 (GRASS extensions manager) %.2f\n", v119, v120, v121, v122, esp64, 0, "Detailed information", "Detailed information", v103, v123, v124, v125, "Detailed information");
    eax126 = stdout;
    fun_8048cd4("Written by Benjamin Ducke\n", 1, 26, eax126, v127);
    eax128 = stdout;
    fun_8048cd4("\nCopyright (C) 2005 Benjamin Ducke\n", 1, 35, eax128, v129);
    eax130 = stdout;
    fun_8048cd4("This is free software; see the source for copying conditions.  There is NO\n", 1, 75, eax130, v131);
    eax132 = stdout;
    fun_8048cd4("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 1, 76, eax132, v133);
    fun_8048db4(0, 1, 76, eax132, v134, v135, esp64, 0, "Detailed information", "Detailed information", v103);
    ebp136 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp89) - 4 + 4 - 4 + 4 - 4 + 4 - 4 - 24 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
    eax137 = g14;
    eax138 = CONFIG_OPTS;
    if (!*reinterpret_cast<signed char*>(&eax138)) {
        v139 = reinterpret_cast<void**>(1);
        fun_8048aa4(reinterpret_cast<uint32_t>(ebp136) + 0xfffff7f4, "%s/etc/config.system", 1, v140, v141, v142, v143, 1, v144, v145, v146, v147, v148, v149, v150, v151, v152);
        eax159 = fun_8048c74(reinterpret_cast<uint32_t>(ebp136) + 0xfffff7f4, "r", 1, v153, v154, v155, v156, 1, v157, v158);
        v160 = eax159;
        if (v160) {
            v139 = v160;
            v161 = reinterpret_cast<void**>(0x800);
            v162 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp136) + 0xfffff7f4);
            eax173 = nc_fgets_nb(v162, 0x800, v139, v163, v164, v165, v166, 1, v167, v168, v160, v169, v170, v171, v172);
            if (eax173) {
                v161 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp136) + 0xfffff7f4);
                v162 = reinterpret_cast<void**>(0x806aae0);
                fun_8048c84(0x806aae0, v161, v139, v174, v175, v176, v177, 1, v178, v179, v160, v180, v181, v182, v183, v184, v185);
            }
        } else {
            v161 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp136) + 0xfffff7f4);
            v162 = reinterpret_cast<void**>("could not open %s for read access. Using default configure options.\n");
            print_warning("could not open %s for read access. Using default configure options.\n", v161, 1, v186, v187, v188, v189, 1, v190, v191, v160, v192, v193, v194, v195);
        }
    }
    eax196 = eax137 ^ g14;
    if (eax196) {
        fun_8048d34(v162, v161, v139, v197, v198, v199, v200, 1, v201, v202, v160, v203, v204, v205, v206, v207, v208);
    }
    goto 0;
}

void show_license(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** esp9;
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
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** eax33;
    void* esp34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    int32_t* eax40;
    int32_t v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
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
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** eax64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** eax72;
    void** v73;
    void** eax74;
    void** v75;
    void** eax76;
    void** v77;
    void** eax78;
    void** v79;
    void** v80;
    void** v81;
    void* ebp82;
    uint32_t eax83;
    uint32_t eax84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** eax105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** eax119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    uint32_t eax142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;

    esp9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax14 = basename(a1, v10, v11, v12, v13);
    fun_8048c84(esp9 + 0xfffff7f4, eax14, v15, v16, v17, v18, v19, a1, v20, v21, v22, v23, v24, v25, v26, v27, v28);
    v29 = esp9 + 0xfffff7f4;
    eax33 = fun_8048c94(v29, eax14, v30, v31, v32);
    esp34 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp9 - 0x838) - 4 + 4 - 4 + 4 - 4 + 4);
    if (reinterpret_cast<signed char>(eax33) < reinterpret_cast<signed char>(0)) {
        eax40 = fun_8048a94(v29, eax14, v35, v36, v37, v38, v39, a1);
        v41 = *eax40;
        eax47 = fun_8048ad4(v41, eax14, v42, v43, v44, v45, v46, a1);
        v48 = eax47;
        v49 = a1;
        print_error(0xfffffffe, "extension '%s' not accessible: (%s)\n", v49, v48, v50, v51, v52, a1, v53);
        esp34 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp34) - 4 + 4 - 4 + 4 - 4 + 4);
    }
    dump_ascii("license", "Detailed information", v49, v48, v54, v55);
    fun_8048b84("sh post", "Detailed information", v49, v48, v56, v57, v58);
    fun_8048db4(0, "Detailed information", v49, v48, v59, v60, v61, a1, v62, v63, eax33);
    eax64 = stdout;
    __asm__("fld qword [0x8057e40]");
    __asm__("fstp qword [esp+0x8]");
    fun_8048ce4(eax64, "gem64 (GRASS extensions manager) %.2f\n", v65, v66, v67, v68, esp9, 0, "Detailed information", v49, v48, v69, v70, v71, a1);
    eax72 = stdout;
    fun_8048cd4("Written by Benjamin Ducke\n", 1, 26, eax72, v73);
    eax74 = stdout;
    fun_8048cd4("\nCopyright (C) 2005 Benjamin Ducke\n", 1, 35, eax74, v75);
    eax76 = stdout;
    fun_8048cd4("This is free software; see the source for copying conditions.  There is NO\n", 1, 75, eax76, v77);
    eax78 = stdout;
    fun_8048cd4("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 1, 76, eax78, v79);
    fun_8048db4(0, 1, 76, eax78, v80, v81, esp9, 0, "Detailed information", v49, v48);
    ebp82 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp34) - 4 + 4 - 4 + 4 - 4 + 4 - 4 - 24 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
    eax83 = g14;
    eax84 = CONFIG_OPTS;
    if (!*reinterpret_cast<signed char*>(&eax84)) {
        v85 = reinterpret_cast<void**>(1);
        fun_8048aa4(reinterpret_cast<uint32_t>(ebp82) + 0xfffff7f4, "%s/etc/config.system", 1, v86, v87, v88, v89, 1, v90, v91, v92, v93, v94, v95, v96, v97, v98);
        eax105 = fun_8048c74(reinterpret_cast<uint32_t>(ebp82) + 0xfffff7f4, "r", 1, v99, v100, v101, v102, 1, v103, v104);
        v106 = eax105;
        if (v106) {
            v85 = v106;
            v107 = reinterpret_cast<void**>(0x800);
            v108 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp82) + 0xfffff7f4);
            eax119 = nc_fgets_nb(v108, 0x800, v85, v109, v110, v111, v112, 1, v113, v114, v106, v115, v116, v117, v118);
            if (eax119) {
                v107 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp82) + 0xfffff7f4);
                v108 = reinterpret_cast<void**>(0x806aae0);
                fun_8048c84(0x806aae0, v107, v85, v120, v121, v122, v123, 1, v124, v125, v106, v126, v127, v128, v129, v130, v131);
            }
        } else {
            v107 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp82) + 0xfffff7f4);
            v108 = reinterpret_cast<void**>("could not open %s for read access. Using default configure options.\n");
            print_warning("could not open %s for read access. Using default configure options.\n", v107, 1, v132, v133, v134, v135, 1, v136, v137, v106, v138, v139, v140, v141);
        }
    }
    eax142 = eax83 ^ g14;
    if (eax142) {
        fun_8048d34(v108, v107, v85, v143, v144, v145, v146, 1, v147, v148, v106, v149, v150, v151, v152, v153, v154);
    }
    goto 0;
}

/* __i686.get_pc_thunk.bx */
int32_t __i686_get_pc_thunk_bx() {
    int32_t eax1;

    return eax1;
}

int32_t __cxa_atexit = 0x8048aea;

void fun_8048ae4(void** a1, int32_t a2, void** a3) {
    goto __cxa_atexit;
}

int32_t vsprintf = 0x8048b4a;

void fun_8048b44(void* a1, void** a2, void** a3) {
    goto vsprintf;
}

int32_t fgets = 0x8048baa;

int32_t fun_8048ba4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    goto fgets;
}

void** is_text(void** a1, void** a2, void** a3, void** a4) {
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
    struct s1* eax15;
    void** v16;
    uint32_t eax17;
    uint32_t eax18;
    uint32_t eax19;
    uint32_t eax20;
    uint32_t eax21;

    v5 = reinterpret_cast<void**>(0);
    eax15 = fun_8048c64(a1, v6, v7, v8, v9, v10, 0, v11, v12, v13, ebp14, __return_address(), a1, a2, a3);
    v16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax15) - 1);
    while (reinterpret_cast<signed char>(v16) >= reinterpret_cast<signed char>(0)) {
        eax17 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(a1));
        if (*reinterpret_cast<signed char*>(&eax17) == 32) 
            goto addr_804a1a7_4;
        eax18 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(a1));
        if (*reinterpret_cast<signed char*>(&eax18) == 9) 
            goto addr_804a1a7_4;
        eax19 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(a1));
        if (*reinterpret_cast<signed char*>(&eax19) == 10) 
            goto addr_804a1a7_4;
        eax20 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(a1));
        if (*reinterpret_cast<signed char*>(&eax20) == 12) 
            goto addr_804a1a7_4;
        eax21 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v16) + reinterpret_cast<unsigned char>(a1));
        if (*reinterpret_cast<signed char*>(&eax21) != 13) 
            goto addr_804a1b4_9;
        addr_804a1a7_4:
        v5 = reinterpret_cast<void**>(0);
        --v16;
    }
    addr_804a1c3_10:
    return v5;
    addr_804a1b4_9:
    v5 = reinterpret_cast<void**>(1);
    goto addr_804a1c3_10;
}

void** dump_html(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    void** v7;
    void** v8;
    uint32_t eax9;
    uint32_t v10;
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
    int32_t* eax36;
    int32_t v37;
    void** v38;
    void** v39;
    void** v40;
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
    void** v52;
    void** v53;
    void** eax54;
    void** eax55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
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
    void** v72;
    void** v73;
    void** v74;
    void** v75;
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
    void** v87;
    void** v88;
    void** eax89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v7 = a1;
    v8 = a2;
    eax9 = g14;
    v10 = eax9;
    v11 = reinterpret_cast<void**>(32);
    fun_8048c54(v8, "/tmp/grass.extensions.db.XXXXXX", 32, v12, v13, v14, v8, v7, v15, v16, v17, v18, v19, v20, v21);
    fun_8048c14(v8, "/tmp/grass.extensions.db.XXXXXX", 32, v22, v23, v24, v8, v7);
    v25 = reinterpret_cast<void**>("w+");
    eax31 = fun_8048c74(v8, "w+", 32, v26, v27, v28, v8, v7, v29, v30);
    v32 = eax31;
    if (!v32) {
        eax36 = fun_8048a94(v8, "w+", 32, v33, v34, v35, v8, v7);
        v37 = *eax36;
        eax41 = fun_8048ad4(v37, "w+", 32, v38, v39, v40, v8, v7);
        v42 = eax41;
        v11 = v8;
        v25 = reinterpret_cast<void**>("could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        print_error(0xffffffe9, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n", v11, v42, v43, v44, v8, v7, v45);
    }
    atexit(exit_db, v25, v11, v42, v46, v47, v8, v7);
    eax51 = fun_8048c74(v7, "r", v11, v42, v48, v49, v8, v7, v50, v32);
    v52 = eax51;
    while (eax54 = nc_fgets(reinterpret_cast<int32_t>(ebp6) + 0xffffeff4, 0x800, v52, v42, v53), !!eax54) {
        chop(reinterpret_cast<int32_t>(ebp6) + 0xffffeff4, 0x800, v52, v42);
        eax55 = is_text(reinterpret_cast<int32_t>(ebp6) + 0xffffeff4, 0x800, v52, v42);
        if (eax55) {
            v56 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xffffeff4);
            fun_8048aa4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, "%s <br>\n", v56, v42, v57, v58, v8, v7, v59, v32, v52, v60, v61, v62, v63, v64, v65);
            fun_8048ce4(v32, reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, v56, v42, v66, v67, v8, v7, v68, v32, v52, v69, v70, v71, v72);
        } else {
            v42 = v32;
            fun_8048cd4("<p>\n", 1, 4, v42, v73);
        }
    }
    fun_8048c44(v52, 0x800, v52, v42, v74, v75, v8, v7, v76, v32, v52, v77, v78, v79, v80);
    fun_8048c44(v32, 0x800, v52, v42, v81, v82, v8, v7, v83, v32, v52, v84, v85, v86, v87);
    fun_8048cc4(v88, 0x800, v52, v42);
    eax89 = reinterpret_cast<void**>(v10 ^ g14);
    if (eax89) {
        eax89 = fun_8048d34(v88, 0x800, v52, v42, v90, v91, v8, v7, v92, v32, v52, v93, v94, v95, v96, v97, v98);
    }
    return eax89;
}

int32_t __xstat = 0x8048b0a;

int32_t fun_8048b04(int32_t a1, void** a2, int32_t a3) {
    goto __xstat;
}

int32_t srand = 0x8048aba;

void fun_8048ab4(uint32_t a1) {
    goto srand;
}

int32_t rand = 0x8048d8a;

void** fun_8048d84(uint32_t a1) {
    goto rand;
}

int32_t remove = 0x8048d1a;

void fun_8048d14(void** a1, void** a2, void** a3, void** a4) {
    goto remove;
}

struct s5 {
    signed char[10] pad10;
    void** fa;
};

void** register_html(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** v8;
    void** v9;
    uint32_t eax10;
    uint32_t v11;
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
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
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
    void** eax58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    int32_t* eax64;
    int32_t v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** eax70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    int32_t* eax81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    int32_t* eax97;
    int32_t v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** eax104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** eax114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    struct s5* v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    int32_t eax144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** eax155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    int32_t eax164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    struct s1* eax170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** eax176;
    void** eax177;
    void** v178;
    void** v179;
    void** v180;
    void** v181;
    void** v182;
    int32_t v183;
    void** v184;
    void** v185;
    void** v186;
    void** v187;
    void** v188;
    void** v189;
    void** v190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    void** v213;
    void** v214;
    void** v215;
    void** eax216;
    void** v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = a1;
    v9 = a2;
    eax10 = g14;
    v11 = eax10;
    v12 = v9;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4, "%s/docs/html/index.html", v12, v13, v14, v15, v16, v17, v18, v19, v9, v8, v20, v21, v22, v23, v24);
    v25 = reinterpret_cast<void**>("r");
    v26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4);
    eax34 = fun_8048c74(v26, "r", v12, v27, v28, v29, v30, v31, v32, v33);
    v35 = eax34;
    if (v35) {
        addr_804e8b0_2:
        v36 = reinterpret_cast<void**>(32);
        fun_8048c54(0x8067ac0, "/tmp/grass.extensions.db.XXXXXX", 32, v37, v38, v39, v40, v41, v42, v43, v9, v8, v44, v45, v46);
        fun_8048c14(0x8067ac0, "/tmp/grass.extensions.db.XXXXXX", 32, v37, v47, v48, v49, v50);
        v51 = reinterpret_cast<void**>("w+");
        eax58 = fun_8048c74(0x8067ac0, "w+", 32, v37, v52, v53, v54, v55, v56, v57);
        v59 = eax58;
        if (!v59) {
            eax64 = fun_8048a94(0x8067ac0, "w+", 32, v37, v60, v61, v62, v63);
            v65 = *eax64;
            eax70 = fun_8048ad4(v65, "w+", 32, v37, v66, v67, v68, v69);
            v37 = eax70;
            v36 = reinterpret_cast<void**>(0x8067ac0);
            v51 = reinterpret_cast<void**>("could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
            print_error(0xffffffe8, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n", 0x8067ac0, v37, v71, v72, v73, v74, v75);
        }
    } else {
        eax81 = fun_8048a94(v26, "r", v12, v76, v77, v78, v79, v80);
        if (*eax81 == 2) {
            goto addr_804ebfd_6;
        } else {
            fun_8048c44(v35, "r", v12, v82, v83, v84, v85, v86, v87, v88, v9, v8, v89, v90, v91);
            eax97 = fun_8048a94(v35, "r", v12, v92, v93, v94, v95, v96);
            v98 = *eax97;
            eax104 = fun_8048ad4(v98, "r", v12, v99, v100, v101, v102, v103);
            v37 = eax104;
            print_error(0xffffffe8, "checking for file '%s': %s\n", reinterpret_cast<int32_t>(ebp7) + 0xfffff7f4, v37, v105, v106, v107, v108, v109);
            goto addr_804e8b0_2;
        }
    }
    atexit(exit_db, v51, v36, v37, v110, v111, v112, v113);
    eax114 = VERBOSE;
    if (!eax114) {
        v115 = v9;
        v116 = reinterpret_cast<void**>(0x80672c0);
        v117 = v9;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;", 0x8067ac0, v117, 0x80672c0, v115, 0x80672c0, v118, v119, v120, v9, v8, v121, v122, v59, v35, v123);
    } else {
        v116 = v9;
        v117 = v9;
        fun_8048aa4(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;", 0x8067ac0, v117, v116, v124, v125, v126, v127, v128, v9, v8, v129, v130, v59, v35, v131);
    }
    fun_8048c84(0x80692e0, reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, 0x8067ac0, v117, v116, v115, 0x80672c0, v132, v133, v134, v9, v8, v135, v136, v59, v35, v137);
    v138 = reinterpret_cast<struct s5*>(0);
    while (v12 = v35, v25 = reinterpret_cast<void**>(0x800), v26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4), eax144 = fun_8048ba4(v26, 0x800, v12, v117, v116, v115, 0x80672c0, v139, v140, v141, v9, v8, v142, v143, v59), !!eax144) {
        v138 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(v138) + 1);
    }
    if (v138) {
        fun_8048b24(v35, 0x800, v12, v117, v116, v115, 0x80672c0, v145, v146, v147, v9, v8, v148, v149, v59);
        eax155 = fun_8048b74(&v138->fa, 4, v12, v117, v116, v115, 0x80672c0, v150, v151, v152, v9, v8, v153, v154, v59);
        v156 = eax155;
        v157 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<signed char>(&v138->fa) > reinterpret_cast<signed char>(v157)) {
            *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v157) << 2) + reinterpret_cast<unsigned char>(v156)) = reinterpret_cast<void**>(0);
            ++v157;
        }
        v158 = reinterpret_cast<void**>(0);
        while (eax164 = fun_8048ba4(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, 0x800, v35, v117, v116, v115, 0x80672c0, v159, v160, v161, v9, v8, v162, v163, v59), !!eax164) {
            eax170 = fun_8048c64(reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, 0x800, v35, v117, v116, v115, 0x80672c0, v165, v166, v167, v9, v8, v168, v169, v59);
            eax176 = fun_8048d24(&eax170->f1, 0x800, v35, v117, v116, v115, 0x80672c0, v171, v172, v173, v9, v8, v174, v175, v59);
            *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v158) << 2) + reinterpret_cast<unsigned char>(v156)) = eax176;
            eax177 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v158) << 2) + reinterpret_cast<unsigned char>(v156));
            fun_8048c84(eax177, reinterpret_cast<int32_t>(ebp7) + 0xffffeff4, v35, v117, v116, v115, 0x80672c0, v178, v179, v180, v9, v8, v181, v182, v59, v35, v158);
            ++v158;
        }
        v115 = a5;
        v116 = a4;
        v117 = a3;
        v12 = v156;
        v25 = v9;
        new_ext_html(v8, v25, v12, v117, v116, v115, 0x80672c0);
        v183 = 0;
        while (*reinterpret_cast<void***>((v183 << 2) + reinterpret_cast<unsigned char>(v156))) {
            v25 = *reinterpret_cast<void***>((v183 << 2) + reinterpret_cast<unsigned char>(v156));
            fun_8048ce4(v59, v25, v12, v117, v116, v115, 0x80672c0, v184, v185, v186, v9, v8, v187, v188, v59);
            ++v183;
        }
        fun_8048c04(v59, v25, v12, v117, v116, v115, 0x80672c0, v189, v190, v191, v9, v8, v192, v193, v59);
        fun_8048c44(v35, v25, v12, v117, v116, v115, 0x80672c0, v194, v195, v196, v9, v8, v197, v198, v59);
        fun_8048c44(v59, v25, v12, v117, v116, v115, 0x80672c0, v199, v200, v201, v9, v8, v202, v203, v59);
        v204 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<signed char>(&v138->fa) > reinterpret_cast<signed char>(v204)) {
            v205 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v204) << 2) + reinterpret_cast<unsigned char>(v156));
            fun_8048bf4(v205, v25, v12, v117, v116, v115, 0x80672c0, v206, v207, v208, v9, v8, v209, v210, v59);
            ++v204;
        }
        v26 = v156;
        fun_8048bf4(v26, v25, v12, v117, v116, v115, 0x80672c0, v211, v212, v213, v9, v8, v214, v215, v59);
    }
    addr_804ebfd_6:
    eax216 = reinterpret_cast<void**>(v11 ^ g14);
    if (eax216) {
        eax216 = fun_8048d34(v26, v25, v12, v117, v116, v115, 0x80672c0, v217, v218, v219, v9, v8, v220, v221, v59, v35, v204);
    }
    return eax216;
}

int32_t __isoc99_fscanf = 0x8048afa;

int32_t fun_8048af4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto __isoc99_fscanf;
}

void** mkdir_s(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
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
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** eax21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax6 = g14;
    fun_8048aa4(reinterpret_cast<int32_t>(ebp5) + 0xffffec6c, "mkdir %s --mode=%s -p", a1, a2, v7, v8, a2, a1, v9, v10, v11, v12, v13, v14, v15, v16, v17);
    v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffec6c);
    fun_8048b84(v18, "mkdir %s --mode=%s -p", a1, a2, v19, v20, a2);
    eax21 = reinterpret_cast<void**>(eax6 ^ g14);
    if (eax21) {
        eax21 = fun_8048d34(v18, "mkdir %s --mode=%s -p", a1, a2, v22, v23, a2, a1, v24, v25, v26, v27, v28, v29, v30, v31, v32);
    }
    return eax21;
}

int32_t fputs = 0x8048a8a;

void fun_8048a84(void* a1, void** a2, void** a3, void** a4) {
    goto fputs;
}

void** print_cfg(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    uint32_t eax7;
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
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    int32_t eax34;
    void** eax35;
    void** eax36;
    void** eax37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g14;
    v8 = eax7;
    v9 = reinterpret_cast<void**>("r");
    eax18 = fun_8048c74("config.msg", "r", v10, v11, v12, v13, v14, v15, v16, v17);
    v19 = eax18;
    if (v19) {
        eax20 = stdout;
        v21 = eax20;
        fun_8048cd4("\nResult of configuration: \n", 1, 27, v21, v22);
        while (v23 = v19, eax34 = fun_8048ba4(reinterpret_cast<int32_t>(ebp6) + 0xfffff7f4, 0x800, v23, v21, v24, v25, v19, v26, v27, v28, v29, v30, v31, v32, v33), !!eax34) {
            eax35 = stdout;
            fun_8048a84(reinterpret_cast<int32_t>(ebp6) - 0x80c, eax35, v23, v21);
        }
        eax36 = stdout;
        v9 = eax36;
        fun_8048d44(10, v9, v23, v21);
    }
    fun_8048d14("config.msg", v9, v23, v21);
    eax37 = reinterpret_cast<void**>(v8 ^ g14);
    if (eax37) {
        eax37 = fun_8048d34("config.msg", v9, v23, v21, v38, v39, v19, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49);
    }
    return eax37;
}

int32_t getcwd = 0x8048d7a;

void fun_8048d74(void* a1, void** a2, void** a3) {
    goto getcwd;
}

int32_t setvbuf = 0x8048d0a;

void fun_8048d04(void** a1, void** a2, void** a3, void** a4) {
    goto setvbuf;
}

void __do_global_dtors_aux();

struct s6 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8054808(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s6* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

/* completed.7065 */
signed char completed_7065 = 0;

/* dtor_idx.7067 */
uint32_t dtor_idx_7067 = 0;

void __do_global_dtors_aux() {
    int1_t zf1;
    uint32_t eax2;
    uint32_t eax3;

    zf1 = completed_7065 == 0;
    if (zf1) {
        eax2 = dtor_idx_7067;
        if (eax2 < 0) {
            do {
                eax3 = eax2 + 1;
                dtor_idx_7067 = eax3;
                *reinterpret_cast<int32_t*>(eax3 * 4 + 0x8058f18)();
                eax2 = dtor_idx_7067;
            } while (eax2 < 0);
        }
        completed_7065 = 1;
    }
    return;
}

void main(void** a1, void** a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048bb4(main, __return_address(), esp1, 0x80546f0, 0x80546e0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8048e55() {
}

int32_t TMPDBCLEAN = 0;

unsigned char TMPDB = 0;

unsigned char TMP_GISMAN = 0;

unsigned char TMP_DESCR = 0;

unsigned char TMP_INFO = 0;

unsigned char TMP_DEPS = 0;

unsigned char TMP_BUGS = 0;

unsigned char TMP_AUTHORS = 0;

unsigned char TMP_HTML = 0;

unsigned char TMP_NULL = 0;

void** exit_db() {
    void* ebp1;
    uint32_t eax2;
    int32_t eax3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    uint32_t eax15;
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
    void** v31;
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
    uint32_t eax44;
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
    void** v57;
    void** v58;
    void** eax59;
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
    uint32_t eax70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** eax85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    uint32_t eax96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** eax111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    uint32_t eax122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** eax137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    uint32_t eax148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** eax163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    uint32_t eax174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
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
    void** eax189;
    void** v190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    uint32_t eax200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** v211;
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
    void** v223;
    void** v224;
    void** v225;
    void** eax226;
    uint32_t eax227;
    void** v228;
    void** v229;
    void** v230;
    void** v231;
    void** v232;
    void** v233;
    void** v234;
    void** v235;
    void** v236;
    void** v237;
    void** v238;
    void** v239;
    void** v240;
    void** v241;
    void** eax242;
    void** v243;
    void** v244;
    void** v245;
    void** v246;
    void** v247;
    void** v248;
    void** v249;
    void** v250;
    void** v251;
    void** v252;
    void** eax253;
    void** v254;
    void** v255;
    void** v256;
    void** v257;
    void** v258;
    void** v259;
    void** v260;
    void** v261;
    void** v262;
    void** v263;
    void** v264;
    void** v265;
    void** eax266;
    void** v267;
    void** v268;
    void** v269;
    void** v270;
    void** v271;
    void** v272;
    void** v273;
    void** v274;
    void** v275;
    void** v276;
    void** v277;
    void** v278;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax2 = g14;
    eax3 = TMPDBCLEAN;
    if (!eax3) {
        v4 = reinterpret_cast<void**>(0x806c2e0);
        fun_8048c94(0x806c2e0, v5, v6, v7, v8);
        eax9 = VERBOSE;
        if (eax9) {
            eax10 = stdout;
            v11 = eax10;
            v12 = reinterpret_cast<void**>(40);
            v13 = reinterpret_cast<void**>(1);
            v4 = reinterpret_cast<void**>("Removing temporary registration files...");
            fun_8048cd4("Removing temporary registration files...", 1, 40, v11, v14);
        }
        eax15 = TMPDB;
        if (*reinterpret_cast<signed char*>(&eax15) && (v12 = reinterpret_cast<void**>(0x8063ac0), v13 = reinterpret_cast<void**>("rm -rf %s"), fun_8048aa4(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4, "rm -rf %s", 0x8063ac0, v11, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28), v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4), eax32 = fun_8048b84(v4, "rm -rf %s", 0x8063ac0, v11, v29, v30, v31), v33 = eax32, !!v33)) {
            v13 = reinterpret_cast<void**>(0x8063ac0);
            v4 = reinterpret_cast<void**>("could not remove temporary file %s.\nPlease remove manually.\n");
            print_warning("could not remove temporary file %s.\nPlease remove manually.\n", 0x8063ac0, 0x8063ac0, v11, v34, v35, v33, v36, v37, v38, v39, v40, v41, v42, v43);
        }
        eax44 = TMP_GISMAN;
        if (*reinterpret_cast<signed char*>(&eax44) && (v12 = reinterpret_cast<void**>(0x80642c0), v13 = reinterpret_cast<void**>("rm -f %s"), fun_8048aa4(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4, "rm -f %s", 0x80642c0, v11, v45, v46, v33, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56), v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4), eax59 = fun_8048b84(v4, "rm -f %s", 0x80642c0, v11, v57, v58, v33), v33 = eax59, !!v33)) {
            v13 = reinterpret_cast<void**>(0x80642c0);
            v4 = reinterpret_cast<void**>("could not remove temporary file %s.\nPlease remove manually.\n");
            print_warning("could not remove temporary file %s.\nPlease remove manually.\n", 0x80642c0, 0x80642c0, v11, v60, v61, v33, v62, v63, v64, v65, v66, v67, v68, v69);
        }
        eax70 = TMP_DESCR;
        if (*reinterpret_cast<signed char*>(&eax70) && (v12 = reinterpret_cast<void**>(0x8064ac0), v13 = reinterpret_cast<void**>("rm -f %s"), fun_8048aa4(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4, "rm -f %s", 0x8064ac0, v11, v71, v72, v33, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82), v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4), eax85 = fun_8048b84(v4, "rm -f %s", 0x8064ac0, v11, v83, v84, v33), v33 = eax85, !!v33)) {
            v13 = reinterpret_cast<void**>(0x8064ac0);
            v4 = reinterpret_cast<void**>("could not remove temporary file %s.\nPlease remove manually.\n");
            print_warning("could not remove temporary file %s.\nPlease remove manually.\n", 0x8064ac0, 0x8064ac0, v11, v86, v87, v33, v88, v89, v90, v91, v92, v93, v94, v95);
        }
        eax96 = TMP_INFO;
        if (*reinterpret_cast<signed char*>(&eax96) && (v12 = reinterpret_cast<void**>(0x80652c0), v13 = reinterpret_cast<void**>("rm -f %s"), fun_8048aa4(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4, "rm -f %s", 0x80652c0, v11, v97, v98, v33, v99, v100, v101, v102, v103, v104, v105, v106, v107, v108), v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4), eax111 = fun_8048b84(v4, "rm -f %s", 0x80652c0, v11, v109, v110, v33), v33 = eax111, !!v33)) {
            v13 = reinterpret_cast<void**>(0x80652c0);
            v4 = reinterpret_cast<void**>("could not remove temporary file %s.\nPlease remove manually.\n");
            print_warning("could not remove temporary file %s.\nPlease remove manually.\n", 0x80652c0, 0x80652c0, v11, v112, v113, v33, v114, v115, v116, v117, v118, v119, v120, v121);
        }
        eax122 = TMP_DEPS;
        if (*reinterpret_cast<signed char*>(&eax122) && (v12 = reinterpret_cast<void**>(0x8065ac0), v13 = reinterpret_cast<void**>("rm -f %s"), fun_8048aa4(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4, "rm -f %s", 0x8065ac0, v11, v123, v124, v33, v125, v126, v127, v128, v129, v130, v131, v132, v133, v134), v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4), eax137 = fun_8048b84(v4, "rm -f %s", 0x8065ac0, v11, v135, v136, v33), v33 = eax137, !!v33)) {
            v13 = reinterpret_cast<void**>(0x80652c0);
            v4 = reinterpret_cast<void**>("could not remove temporary file %s.\nPlease remove manually.\n");
            print_warning("could not remove temporary file %s.\nPlease remove manually.\n", 0x80652c0, 0x8065ac0, v11, v138, v139, v33, v140, v141, v142, v143, v144, v145, v146, v147);
        }
        eax148 = TMP_BUGS;
        if (*reinterpret_cast<signed char*>(&eax148) && (v12 = reinterpret_cast<void**>(0x80662c0), v13 = reinterpret_cast<void**>("rm -f %s"), fun_8048aa4(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4, "rm -f %s", 0x80662c0, v11, v149, v150, v33, v151, v152, v153, v154, v155, v156, v157, v158, v159, v160), v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4), eax163 = fun_8048b84(v4, "rm -f %s", 0x80662c0, v11, v161, v162, v33), v33 = eax163, !!v33)) {
            v13 = reinterpret_cast<void**>(0x80652c0);
            v4 = reinterpret_cast<void**>("could not remove temporary file %s.\nPlease remove manually.\n");
            print_warning("could not remove temporary file %s.\nPlease remove manually.\n", 0x80652c0, 0x80662c0, v11, v164, v165, v33, v166, v167, v168, v169, v170, v171, v172, v173);
        }
        eax174 = TMP_AUTHORS;
        if (*reinterpret_cast<signed char*>(&eax174) && (v12 = reinterpret_cast<void**>(0x8066ac0), v13 = reinterpret_cast<void**>("rm -f %s"), fun_8048aa4(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4, "rm -f %s", 0x8066ac0, v11, v175, v176, v33, v177, v178, v179, v180, v181, v182, v183, v184, v185, v186), v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4), eax189 = fun_8048b84(v4, "rm -f %s", 0x8066ac0, v11, v187, v188, v33), v33 = eax189, !!v33)) {
            v13 = reinterpret_cast<void**>(0x80652c0);
            v4 = reinterpret_cast<void**>("could not remove temporary file %s.\nPlease remove manually.\n");
            print_warning("could not remove temporary file %s.\nPlease remove manually.\n", 0x80652c0, 0x8066ac0, v11, v190, v191, v33, v192, v193, v194, v195, v196, v197, v198, v199);
        }
        eax200 = TMP_HTML;
        if (*reinterpret_cast<signed char*>(&eax200) && (v12 = reinterpret_cast<void**>(0x8067ac0), v13 = reinterpret_cast<void**>("rm -f %s"), fun_8048aa4(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4, "rm -f %s", 0x8067ac0, v11, v201, v202, v33, v203, v204, v205, v206, v207, v208, v209, v210, v211, v212), v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4), eax215 = fun_8048b84(v4, "rm -f %s", 0x8067ac0, v11, v213, v214, v33), v33 = eax215, !!v33)) {
            v13 = reinterpret_cast<void**>(0x8067ac0);
            v4 = reinterpret_cast<void**>("could not remove temporary file %s.\nPlease remove manually.\n");
            print_warning("could not remove temporary file %s.\nPlease remove manually.\n", 0x8067ac0, 0x8067ac0, v11, v216, v217, v33, v218, v219, v220, v221, v222, v223, v224, v225);
        }
        eax226 = VERBOSE;
        if (!eax226 && ((eax227 = TMP_NULL, !!*reinterpret_cast<signed char*>(&eax227)) && (v12 = reinterpret_cast<void**>(0x80672c0), v13 = reinterpret_cast<void**>("rm -f %s"), fun_8048aa4(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4, "rm -f %s", 0x80672c0, v11, v228, v229, v33, v230, v231, v232, v233, v234, v235, v236, v237, v238, v239), v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4), eax242 = fun_8048b84(v4, "rm -f %s", 0x80672c0, v11, v240, v241, v33), v33 = eax242, !!v33))) {
            v13 = reinterpret_cast<void**>(0x80672c0);
            v4 = reinterpret_cast<void**>("could not remove temporary file %s.\nPlease remove manually.\n");
            print_warning("could not remove temporary file %s.\nPlease remove manually.\n", 0x80672c0, 0x80672c0, v11, v243, v244, v33, v245, v246, v247, v248, v249, v250, v251, v252);
        }
        eax253 = VERBOSE;
        if (eax253) {
            print_done(v4, v13, v12, v11, v254, v255, v33, v256, v257, v258, v259, v260, v261, v262, v263, v264, v265);
        }
        TMPDBCLEAN = 1;
    }
    eax266 = reinterpret_cast<void**>(eax2 ^ g14);
    if (eax266) {
        eax266 = fun_8048d34(v4, v13, v12, v11, v267, v268, v33, v269, v270, v271, v272, v273, v274, v275, v276, v277, v278);
    }
    return eax266;
}

int32_t TMPCLEAN = 0;

void exit_msg(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t opterr = 0;

int32_t optopt = 0;

void** optarg = reinterpret_cast<void**>(0);

void main(void** a1, void** a2) {
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
    void** v57;
    void** v58;
    void** v59;
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
    void** v72;
    void** v73;
    void** v74;
    void** v75;
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
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
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
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** eax202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    void** v213;
    void** eax214;
    void*** esp215;
    void** v216;
    void** v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    void** v223;
    void** v224;
    void** v225;
    void** v226;
    void** v227;
    void** v228;
    void** v229;
    void** eax230;
    void* esp231;
    void** v232;
    void** v233;
    void** v234;
    void** v235;
    void** v236;
    void** v237;
    void** v238;
    void** v239;
    void** v240;
    void** v241;
    void** v242;
    void** v243;
    void*** esp244;
    int32_t v245;
    void** v246;
    void** v247;
    void** v248;
    void** v249;
    void** v250;
    void** v251;
    int32_t eax252;
    void*** esp253;
    int32_t v254;
    void** v255;
    void** v256;
    void** v257;
    void** v258;
    int32_t eax259;
    int32_t eax260;
    int32_t eax261;
    int32_t eax262;
    int32_t eax263;
    int32_t eax264;
    int32_t eax265;
    void** v266;
    void** v267;
    void** v268;
    void** v269;
    int32_t eax270;
    void** v271;
    void** v272;
    void** v273;
    void** v274;
    int32_t eax275;
    void** v276;
    void** v277;
    void** v278;
    void** v279;
    int32_t eax280;
    void** v281;
    void** v282;
    void** v283;
    void** v284;
    int32_t eax285;
    void** v286;
    void** eax287;
    void** eax288;
    void** v289;
    void** v290;
    void** v291;
    void** v292;
    void** v293;
    void** v294;
    void** v295;
    void** v296;
    void** v297;
    void** v298;
    void** v299;
    void*** esp300;
    void** eax301;
    void** v302;
    void** v303;
    void** v304;
    void** v305;
    void** v306;
    void** v307;
    void** v308;
    void** v309;
    void** v310;
    void** v311;
    void** v312;
    void** eax313;
    void** v314;
    void** v315;
    void** v316;
    void** v317;
    void** v318;
    void** v319;
    void** v320;
    void** v321;
    void** v322;
    struct s1* eax323;
    void** v324;
    void** v325;
    void** v326;
    void** v327;
    void** v328;
    void** v329;
    void** v330;
    void** v331;
    void** v332;
    void** eax333;
    void** eax334;
    void** v335;
    void** v336;
    void** v337;
    void** v338;
    void** v339;
    void** v340;
    void** v341;
    void** v342;
    void** v343;
    void** v344;
    void** v345;
    void** eax346;
    void** v347;
    void** v348;
    void** v349;
    void** v350;
    void** v351;
    void** v352;
    void** v353;
    void** v354;
    void** v355;
    struct s1* eax356;
    void** v357;
    void** v358;
    void** v359;
    void** v360;
    void** v361;
    void** v362;
    void** v363;
    void** v364;
    void** v365;
    void** eax366;
    void** eax367;
    void** v368;
    void** v369;
    void** v370;
    void** v371;
    void** v372;
    void** v373;
    void** v374;
    void** v375;
    void** v376;
    void** v377;
    void** v378;
    void** eax379;
    void** v380;
    void** v381;
    void** v382;
    void** v383;
    void** v384;
    void** v385;
    void** v386;
    void** v387;
    void** v388;
    void** v389;
    void** v390;
    void** eax391;
    void** eax392;
    void** v393;
    void** v394;
    void** v395;
    void** v396;
    void** v397;
    void** v398;
    void** v399;
    void** v400;
    void** v401;
    void** v402;
    void** v403;
    void** eax404;
    void** v405;
    void** v406;
    void** v407;
    void** v408;
    void** v409;
    void** v410;
    void** v411;
    void** v412;
    void** v413;
    void** v414;
    void** v415;
    int32_t eax416;
    void** v417;
    void** v418;
    void** v419;
    void** v420;
    void** v421;
    void** v422;
    void** v423;
    void** v424;
    void** v425;
    void** v426;
    void** v427;
    void** v428;
    void** v429;
    void** v430;
    void** v431;
    void** v432;
    void** v433;
    void** v434;
    void** v435;
    void** v436;
    void** v437;
    void** v438;
    void*** esp439;
    void** v440;
    void** v441;
    void** v442;
    void** v443;
    void** v444;
    void** v445;
    void** v446;
    void** v447;
    void** v448;
    void** v449;
    void** v450;
    void** v451;
    void** v452;
    void** v453;
    void** eax454;
    void** v455;
    void** v456;
    void** v457;
    void** v458;
    void** v459;
    void** v460;
    void** v461;
    void** v462;
    void** v463;
    void** v464;
    void** v465;
    void** v466;
    void** eax467;
    void** v468;
    void** v469;
    void** v470;
    int32_t* eax471;
    int32_t v472;
    void** v473;
    void** v474;
    void** v475;
    void** eax476;
    void** v477;
    void** v478;
    void** v479;
    void** v480;
    void** v481;
    void** v482;
    void** v483;
    void** v484;
    void** v485;
    void** v486;
    void** v487;
    void** v488;
    void** v489;
    void** eax490;
    void** v491;
    void** v492;
    void** v493;
    void** v494;
    void** eax495;
    void** eax496;
    void** v497;
    void** v498;
    void** v499;
    void** v500;
    void** v501;
    void** v502;
    void** v503;
    void** v504;
    void** v505;
    void** v506;
    void** v507;
    void** v508;
    void** v509;
    void** v510;
    void** v511;
    void** v512;
    void** v513;
    void** v514;
    void** v515;
    void** eax516;
    void** v517;
    void** v518;
    void** v519;
    void** v520;
    void** eax521;
    void** eax522;
    void** v523;
    void** v524;
    void** v525;
    void** v526;
    void** v527;
    void** v528;
    void** v529;
    void** v530;
    void** v531;
    void** v532;
    void** v533;
    void** v534;
    void** v535;
    void** v536;
    void** v537;
    void** v538;
    void** v539;
    void** v540;
    void** v541;
    int32_t eax542;
    void*** esp543;
    void** v544;
    void** v545;
    void** v546;
    int32_t eax547;
    void** v548;
    void** v549;
    void** v550;
    void** v551;
    void** v552;
    void** v553;
    void** v554;
    void** v555;
    void** v556;
    void** eax557;
    void*** esp558;
    void** v559;
    void** v560;
    void** v561;
    void** v562;
    void** v563;
    void** v564;
    void** v565;
    void** v566;
    void** v567;
    void** v568;
    void** v569;
    void** v570;
    void** v571;
    void** v572;
    void** v573;
    void** v574;
    void** v575;
    void** v576;
    void** v577;
    void** v578;
    void** eax579;
    void*** esp580;
    void** v581;
    void** v582;
    void** v583;
    void** v584;
    void** v585;
    void** v586;
    void** v587;
    void** v588;
    void** v589;
    void** v590;
    void** v591;
    void** v592;
    void** v593;
    void** v594;
    void** v595;
    void** v596;
    void** v597;
    void** v598;
    void** v599;
    void** v600;
    void** eax601;
    void** eax602;
    void** v603;
    void** v604;
    void** v605;
    void** v606;
    void** v607;
    void** v608;
    void** v609;
    void** v610;
    void** v611;
    void** v612;
    void*** esp613;
    void** v614;
    void** v615;
    void** v616;
    void** v617;
    void** v618;
    void** v619;
    void** v620;
    void** v621;
    void** v622;
    void** v623;
    void** v624;
    void** v625;
    void** v626;
    int32_t eax627;
    void** v628;
    void** v629;
    void** v630;
    int32_t* eax631;
    int32_t v632;
    void** v633;
    void** v634;
    void** v635;
    void** eax636;
    void* esp637;
    void** v638;
    void** v639;
    void** v640;
    void** v641;
    uint32_t v642;
    void** v643;
    void** v644;
    void** v645;
    void** eax646;
    void** eax647;
    void** eax648;
    void** v649;
    void** v650;
    void** v651;
    void** v652;
    void** v653;
    void** v654;
    void** v655;
    void** v656;
    void** v657;
    void** v658;
    void** v659;
    void** v660;
    void** v661;
    void** v662;
    void** v663;
    void** v664;
    void** v665;
    void** v666;
    void** v667;
    void** v668;
    void** v669;
    void** v670;
    void** v671;
    void** v672;
    void** v673;
    void** v674;
    void** v675;
    void** eax676;
    void** v677;
    void** eax678;
    void** eax679;
    void** v680;
    void** v681;
    void** v682;
    void** v683;
    void** v684;
    void** v685;
    void** eax686;
    void*** esp687;
    void** v688;
    void** v689;
    void** v690;
    void** v691;
    void** v692;
    void** v693;
    void** v694;
    void** v695;
    void** v696;
    void*** esp697;
    void** v698;
    void** v699;
    void** eax700;
    void* esp701;
    void** v702;
    void** v703;
    void** v704;
    void** v705;
    void** v706;
    void** v707;
    void** eax708;
    int32_t eax709;
    void** v710;
    void** v711;
    void** v712;
    void** v713;
    void** v714;
    void** v715;
    void** v716;
    void** v717;
    void** eax718;
    void** eax719;
    void** eax720;
    void** eax721;
    void** eax722;
    void** eax723;
    void** eax724;
    void** v725;
    void** v726;
    void** v727;
    void** v728;
    void** v729;
    void** v730;
    void** eax731;
    void** v732;
    void** v733;
    void** v734;
    void** v735;
    void** v736;
    void** v737;
    void** v738;
    void** v739;
    void** v740;
    void** eax741;
    void** eax742;
    void** v743;
    void** v744;
    void** v745;
    void** v746;
    void** v747;
    void** v748;
    void** v749;
    void** v750;
    void** v751;
    void** v752;
    void** v753;
    void** v754;
    void** v755;
    void** v756;
    void** v757;
    void** v758;
    void** v759;
    void*** esp760;
    void** v761;
    void** v762;
    void** v763;
    void** v764;
    void** v765;
    void** v766;
    void** v767;
    void** v768;
    void** v769;
    void** v770;
    void** v771;
    void** v772;
    void** v773;
    void** v774;
    void** v775;
    void** eax776;
    void*** esp777;
    void** v778;
    void** v779;
    void** v780;
    void** v781;
    void** v782;
    void** v783;
    void** v784;
    void** v785;
    void** v786;
    void** v787;
    void** eax788;
    void** eax789;
    void** v790;
    void** v791;
    void** v792;
    void** v793;
    void** v794;
    void** eax795;
    void** v796;
    void** v797;
    void** v798;
    void** v799;
    void** v800;
    void** v801;
    struct s2* eax802;
    void*** esp803;
    struct s2* v804;
    int32_t v805;
    void** v806;
    void** v807;
    void** v808;
    void** v809;
    void** v810;
    void** v811;
    void** v812;
    int32_t eax813;
    void** v814;
    void** v815;
    void** v816;
    void** v817;
    void** v818;
    void** v819;
    int32_t eax820;
    void** v821;
    void** v822;
    void** v823;
    void** v824;
    void** v825;
    void** v826;
    void** v827;
    void** v828;
    void** v829;
    void** v830;
    void** v831;
    void*** esp832;
    uint32_t v833;
    void** v834;
    void** v835;
    void** v836;
    void** v837;
    void** v838;
    struct s2* eax839;
    void** v840;
    void** v841;
    void** v842;
    void** v843;
    void** v844;
    void** v845;
    void** v846;
    void** v847;
    void** v848;
    void** v849;
    void** v850;
    void** v851;
    void** v852;
    void** v853;
    void** v854;
    void** eax855;
    void** eax856;

    v3 = a2;
    VERBOSE = reinterpret_cast<void**>(0);
    TMPCLEAN = 0;
    TMPDBCLEAN = 0;
    FORCE = reinterpret_cast<void**>(0);
    UPGRADE = 0;
    ERROR = reinterpret_cast<void**>(0);
    WARNINGS = reinterpret_cast<void**>(0);
    SKIP_CFG = 0;
    fun_8048c54(0x80682e0, 0x8057925, 1, v4, v5, v6, v7, v8, v9, v10, v11, v3, v12, v13, v14);
    fun_8048c54(0x8068ae0, 0x8057925, 1, v15, v16, v17, v18, v19, v20, v21, v22, v3, v23, v24, v25);
    fun_8048c54(0x8069ae0, 0x8057925, 1, v26, v27, v28, v29, v30, v31, v32, v33, v3, v34, v35, v36);
    fun_8048c54(0x806a2e0, 0x8057925, 1, v37, v38, v39, v40, v41, v42, v43, v44, v3, v45, v46, v47);
    fun_8048c54(0x80692e0, 0x8057925, 1, v48, v49, v50, v51, v52, v53, v54, v55, v3, v56, v57, v58);
    fun_8048c54(0x80632c0, 0x8057925, 1, v59, v60, v61, v62, v63, v64, v65, v66, v3, v67, v68, v69);
    fun_8048c54(0x8063ac0, 0x8057925, 1, v70, v71, v72, v73, v74, v75, v76, v77, v3, v78, v79, v80);
    fun_8048c54(0x80642c0, 0x8057925, 1, v81, v82, v83, v84, v85, v86, v87, v88, v3, v89, v90, v91);
    fun_8048c54(0x8064ac0, 0x8057925, 1, v92, v93, v94, v95, v96, v97, v98, v99, v3, v100, v101, v102);
    fun_8048c54(0x80652c0, 0x8057925, 1, v103, v104, v105, v106, v107, v108, v109, v110, v3, v111, v112, v113);
    fun_8048c54(0x8065ac0, 0x8057925, 1, v114, v115, v116, v117, v118, v119, v120, v121, v3, v122, v123, v124);
    fun_8048c54(0x80662c0, 0x8057925, 1, v125, v126, v127, v128, v129, v130, v131, v132, v3, v133, v134, v135);
    fun_8048c54(0x8066ac0, 0x8057925, 1, v136, v137, v138, v139, v140, v141, v142, v143, v3, v144, v145, v146);
    fun_8048c54(0x8067ac0, 0x8057925, 1, v147, v148, v149, v150, v151, v152, v153, v154, v3, v155, v156, v157);
    fun_8048c54(0x80672c0, 0x8057925, 1, v158, v159, v160, v161, v162, v163, v164, v165, v3, v166, v167, v168);
    fun_8048c54(0x806aae0, 0x8057925, 1, v169, v170, v171, v172, v173, v174, v175, v176, v3, v177, v178, v179);
    fun_8048c54(0x806b2e0, "configure", 10, v180, v181, v182, v183, v184, v185, v186, v187, v3, v188, v189, v190);
    fun_8048c54(0x806bae0, "make", 5, v191, v192, v193, v194, v195, v196, v197, v198, v3, v199, v200, v201);
    fun_8048d74(0x806c2e0, 0x800, 5);
    eax202 = stdout;
    fun_8048cd4(0x8057935, 1, 4, eax202, v203);
    eax214 = fun_8048d24(0x800, 1, 4, eax202, v204, v205, v206, v207, v208, v209, v210, v3, v211, v212, v213);
    esp215 = reinterpret_cast<void***>((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4) & 0xfffffff0) - 4 - 0x395c - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
    v216 = eax214;
    v217 = *reinterpret_cast<void***>(v3);
    fun_8048c84(esp215 + 0x94c, v217, 4, eax202, v218, v219, v220, v221, v222, v223, v224, v3, v225, v226, v227, v228, v229);
    eax230 = stdout;
    fun_8048d04(eax230, 0, 2, 0);
    esp231 = reinterpret_cast<void*>(esp215 - 4 + 4 - 4 + 4);
    if (reinterpret_cast<int1_t>(a1 == 1)) {
        show_help(eax230, 0, 2, 0, v232);
        fun_8048db4(0, 0, 2, 0, v233, v234, v235, v236, v237, v238, v239);
        esp231 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp231) - 4 + 4 - 4 + 4);
    }
    atexit(exit_msg, 0, 2, 0, v240, v241, v242, v243);
    esp244 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp231) - 4 + 4);
    v245 = 0;
    v246 = reinterpret_cast<void**>(0);
    v247 = reinterpret_cast<void**>(0);
    opterr = 0;
    v248 = reinterpret_cast<void**>(esp244 + 0xe4);
    v249 = reinterpret_cast<void**>(0x8059100);
    v250 = reinterpret_cast<void**>(":i:u:q:d:c:C:t:l:m:o:x:rhVg:b:fvs");
    v251 = v3;
    eax252 = fun_8048c34(a1, v251, ":i:u:q:d:c:C:t:l:m:o:x:rhVg:b:fvs", 0x8059100, v248);
    esp253 = esp244 - 4 + 4;
    v254 = eax252;
    while (v254 != -1) {
        if (v254 == 63) {
            v251 = reinterpret_cast<void**>("unknown option or action specified.\n");
            print_error(0xffffffff, "unknown option or action specified.\n", v250, 0x8059100, v248, v255, v256, v257, v258);
            esp253 = esp253 - 4 + 4;
        }
        if (v254 == 58) {
            eax259 = optopt;
            if (eax259 == 0x69 || ((eax260 = optopt, eax260 == 0x75) || ((eax261 = optopt, eax261 == 100) || ((eax262 = optopt, eax262 == 99) || ((eax263 = optopt, eax263 == 0x74) || ((eax264 = optopt, eax264 == 0x6c) || (eax265 = optopt, eax265 == 0x72))))))) {
                v251 = reinterpret_cast<void**>("missing file or directory name.\n");
                print_error(0xffffffff, "missing file or directory name.\n", v250, 0x8059100, v248, v266, v267, v268, v269);
                esp253 = esp253 - 4 + 4;
            }
            eax270 = optopt;
            if (eax270 == 0x67) {
                v251 = reinterpret_cast<void**>("missing path to GRASS 6.\n");
                print_error(0xffffffff, "missing path to GRASS 6.\n", v250, 0x8059100, v248, v271, v272, v273, v274);
                esp253 = esp253 - 4 + 4;
            }
            eax275 = optopt;
            if (eax275 == 98) {
                v251 = reinterpret_cast<void**>("missing name of binary architecture.\n");
                print_error(0xffffffff, "missing name of binary architecture.\n", v250, 0x8059100, v248, v276, v277, v278, v279);
                esp253 = esp253 - 4 + 4;
            }
            eax280 = optopt;
            if (eax280 == 98) {
                v251 = reinterpret_cast<void**>("missing configure options.\n");
                print_error(0xffffffff, "missing configure options.\n", v250, 0x8059100, v248, v281, v282, v283, v284);
                esp253 = esp253 - 4 + 4;
            }
            eax285 = optopt;
            if (eax285 == 0x71) 
                goto addr_80537b0_17;
        }
        if (v254 == 0x69 || (v254 == 0x75 || (v254 == 0x71 || (v254 == 100 || (v254 == 99 || (v254 == 0x74 || (v254 == 0x6c || (v254 == 0x72 || (v254 == 0x68 || v254 == 86))))))))) {
            ++v245;
            switch (v254 - 86) {
            case 0:
                v286 = reinterpret_cast<void**>(2);
                break;
            case 13:
                v286 = reinterpret_cast<void**>(6);
                break;
            case 14:
                v286 = reinterpret_cast<void**>(9);
                break;
            case 18:
                v286 = reinterpret_cast<void**>(1);
                break;
            case 19:
                if (v286 == 4) {
                    break;
                } else {
                    v286 = reinterpret_cast<void**>(3);
                    break;
                }
            case 22:
                v286 = reinterpret_cast<void**>(7);
                break;
            case 27:
                v286 = reinterpret_cast<void**>(5);
                break;
            case 28:
                v286 = reinterpret_cast<void**>(11);
                break;
            case 30:
                v286 = reinterpret_cast<void**>(8);
                break;
            case 31:
                v286 = reinterpret_cast<void**>(10);
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
            case 15:
            case 16:
            case 17:
            case 20:
            case 21:
            case 23:
            case 24:
            case 25:
            case 26:
            case 29:
                goto 0x80538e5;
            }
            eax287 = optarg;
            if (eax287) {
                eax288 = optarg;
                fun_8048c84(esp253 + 0x294c, eax288, v250, 0x8059100, v248, v289, v290, v291, v292, v293, v294, v3, v295, v296, v297, v298, v299);
                esp300 = esp253 - 4 + 4;
                eax301 = optarg;
                v251 = eax301;
                fun_8048c84(esp300 + 0x214c, v251, v250, 0x8059100, v248, v302, v303, v304, v305, v306, v307, v3, v308, v309, v310, v311, v312);
                esp253 = esp300 - 4 + 4;
            }
        }
        if (v254 == 0x67) {
            eax313 = optarg;
            eax323 = fun_8048c64(eax313, v251, v250, 0x8059100, v248, v314, v315, v316, v317, v318, v319, v3, v320, v321, v322);
            eax333 = fun_8048d24(&eax323->f1, v251, v250, 0x8059100, v248, v324, v325, v326, v327, v328, v329, v3, v330, v331, v332);
            v247 = eax333;
            eax334 = optarg;
            v251 = eax334;
            fun_8048c84(v247, v251, v250, 0x8059100, v248, v335, v336, v337, v338, v339, v340, v3, v341, v342, v343, v344, v345);
            esp253 = esp253 - 4 + 4 - 4 + 4 - 4 + 4;
        }
        if (v254 == 98) {
            eax346 = optarg;
            eax356 = fun_8048c64(eax346, v251, v250, 0x8059100, v248, v347, v348, v349, v350, v351, v352, v3, v353, v354, v355);
            eax366 = fun_8048d24(&eax356->f1, v251, v250, 0x8059100, v248, v357, v358, v359, v360, v361, v362, v3, v363, v364, v365);
            v246 = eax366;
            eax367 = optarg;
            fun_8048c84(v246, eax367, v250, 0x8059100, v248, v368, v369, v370, v371, v372, v373, v3, v374, v375, v376, v377, v378);
            esp253 = esp253 - 4 + 4 - 4 + 4 - 4 + 4;
            v286 = reinterpret_cast<void**>(4);
        }
        if (v254 == 0x78) {
            eax379 = optarg;
            fun_8048c84(0x806aae0, eax379, v250, 0x8059100, v248, v380, v381, v382, v383, v384, v385, v3, v386, v387, v388, v389, v390);
            esp253 = esp253 - 4 + 4;
        }
        if (v254 == 0x66) {
            FORCE = reinterpret_cast<void**>(1);
        }
        if (v254 == 0x76) {
            VERBOSE = reinterpret_cast<void**>(1);
        }
        if (v254 == 0x73) {
            SKIP_CFG = 1;
        }
        if (v254 == 0x6f) {
            eax391 = optarg;
            fun_8048d64(esp253 + 0x14c, eax391, v250, 0x8059100, v248);
            esp253 = esp253 - 4 + 4;
        }
        if (v254 == 67) {
            eax392 = optarg;
            fun_8048c84(0x806b2e0, eax392, v250, 0x8059100, v248, v393, v394, v395, v396, v397, v398, v3, v399, v400, v401, v402, v403);
            esp253 = esp253 - 4 + 4;
        }
        if (v254 == 0x6d) {
            eax404 = optarg;
            fun_8048c84(0x806bae0, eax404, v250, 0x8059100, v248, v405, v406, v407, v408, v409, v410, v3, v411, v412, v413, v414, v415);
            esp253 = esp253 - 4 + 4;
        }
        v248 = reinterpret_cast<void**>(esp253 + 0xe4);
        v249 = reinterpret_cast<void**>(0x8059100);
        v250 = reinterpret_cast<void**>(":i:u:q:d:c:t:l:o:x:rhVg:b:fvs");
        v251 = v3;
        eax416 = fun_8048c34(a1, v251, ":i:u:q:d:c:t:l:o:x:rhVg:b:fvs", 0x8059100, v248);
        esp253 = esp253 - 4 + 4;
        v254 = eax416;
    }
    addr_8053aa9_54:
    if (v245 <= 0) {
        print_error(0xffffffff, "please specify a valid action.\n", v250, 0x8059100, v248, v417, v418, v419, v420);
        esp253 = esp253 - 4 + 4;
    }
    if (v245 > 1) {
        print_error(0xffffffff, "please specify only one action.\n", v250, 0x8059100, v248, v421, v422, v423, v424);
        esp253 = esp253 - 4 + 4;
    }
    v425 = reinterpret_cast<void**>(esp253 + 0x14c);
    v426 = reinterpret_cast<void**>("GEM_C_OPTS=%s");
    fun_8048aa4(0x80622a0, "GEM_C_OPTS=%s", v425, 0x8059100, v248, v427, v428, v429, v430, v431, v432, v3, v433, v434, v435, v436, v437);
    v438 = reinterpret_cast<void**>(0x80622a0);
    fun_8048ca4(0x80622a0, "GEM_C_OPTS=%s", v425, 0x8059100, v248);
    esp439 = esp253 - 4 + 4 - 4 + 4;
    if (reinterpret_cast<int1_t>(v286 == 1)) {
        show_help(0x80622a0, "GEM_C_OPTS=%s", v425, 0x8059100, v248);
        v438 = reinterpret_cast<void**>(0);
        fun_8048db4(0, "GEM_C_OPTS=%s", v425, 0x8059100, v248, v440, v441, v442, v443, v444, v445);
        esp439 = esp439 - 4 + 4 - 4 + 4;
    }
    if (reinterpret_cast<int1_t>(v286 == 2)) {
        show_version(v438, "GEM_C_OPTS=%s", v425, 0x8059100, v248, v446, v447);
        fun_8048db4(0, "GEM_C_OPTS=%s", v425, 0x8059100, v248, v448, v449, v450, v451, v452, v453);
        esp439 = esp439 - 4 + 4 - 4 + 4;
    }
    eax454 = VERBOSE;
    if (!eax454 && (fun_8048c54(0x80672c0, "/tmp/grass.extension.log.XXXXXX", 32, 0x8059100, v248, v455, v456, v457, v458, v459, v460, v3, v461, v462, v463), fun_8048c14(0x80672c0, "/tmp/grass.extension.log.XXXXXX", 32, 0x8059100, v248, v464, v465, v466), v425 = reinterpret_cast<void**>(0x1ff), v426 = reinterpret_cast<void**>(64), eax467 = fun_8048ac4(0x80672c0, 64, 0x1ff, 0x8059100, v248), esp439 = esp439 - 4 + 4 - 4 + 4 - 4 + 4, reinterpret_cast<int1_t>(eax467 == 0xffffffff))) {
        eax471 = fun_8048a94(0x80672c0, 64, 0x1ff, 0x8059100, v248, v468, v469, v470);
        v472 = *eax471;
        eax476 = fun_8048ad4(v472, 64, 0x1ff, 0x8059100, v248, v473, v474, v475);
        v425 = eax476;
        v426 = reinterpret_cast<void**>("could not create temp file: %s");
        print_error(0xffffffe2, "could not create temp file: %s", v425, 0x8059100, v248, v477, v478, v479, v480);
        fun_8048db4(0xffffffe2, "could not create temp file: %s", v425, 0x8059100, v248, v481, v482, v483, v484, v485, v486);
        esp439 = esp439 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4;
    }
    if (reinterpret_cast<int1_t>(v286 == 11)) {
        if (!v247 && (eax490 = fun_8048b64("GISBASE", v426, v425, 0x8059100, v248, v487, v488, v489), esp439 = esp439 - 4 + 4, v247 = eax490, !v247)) {
            print_error(0xffffffff, "GISBASE environment variable not set and path to GRASS not given.\n", v425, 0x8059100, v248, v491, v492, v493, v494);
            esp439 = esp439 - 4 + 4;
        }
        eax495 = VERBOSE;
        if (eax495) {
            eax496 = stdout;
            v425 = v247;
            fun_8048ce4(eax496, "Path to GRASS is %s.\n", v425, 0x8059100, v248, v497, v498, v499, v500, v501, v502, v3, v503, v504, v505);
            esp439 = esp439 - 4 + 4;
        }
        v426 = v506;
        restore(v247, v426, v425, 0x8059100, v248);
        fun_8048db4(0, v426, v425, 0x8059100, v248, v507, v508, v509, v510, v511, v512);
        esp439 = esp439 - 4 + 4 - 4 + 4;
    }
    if (reinterpret_cast<int1_t>(v286 == 12)) {
        if (!v247 && (eax516 = fun_8048b64("GISBASE", v426, v425, 0x8059100, v248, v513, v514, v515), esp439 = esp439 - 4 + 4, v247 = eax516, !v247)) {
            v426 = reinterpret_cast<void**>("GISBASE environment variable not set and path to GRASS not given.\n");
            print_error(0xffffffff, "GISBASE environment variable not set and path to GRASS not given.\n", v425, 0x8059100, v248, v517, v518, v519, v520);
            esp439 = esp439 - 4 + 4;
        }
        eax521 = VERBOSE;
        if (eax521) {
            eax522 = stdout;
            v425 = v247;
            v426 = reinterpret_cast<void**>("Path to GRASS is %s.\n");
            fun_8048ce4(eax522, "Path to GRASS is %s.\n", v425, 0x8059100, v248, v523, v524, v525, v526, v527, v528, v3, v529, v530, v531);
            esp439 = esp439 - 4 + 4;
        }
        list_extensions(v247, v426, v425, 0x8059100, v248);
        fun_8048db4(0, v426, v425, 0x8059100, v248, v532, v533, v534, v535, v536, v537);
        esp439 = esp439 - 4 + 4 - 4 + 4;
    }
    v538 = reinterpret_cast<void**>("http://");
    eax542 = fun_8048cf4(esp439 + 0x294c, "http://", v425, 0x8059100, v248, v539, v540, v541);
    esp543 = esp439 - 4 + 4;
    if (eax542 || (v538 = reinterpret_cast<void**>("ftp://"), eax547 = fun_8048cf4(esp543 + 0x294c, "ftp://", v425, 0x8059100, v248, v544, v545, v546), esp543 = esp543 - 4 + 4, !!eax547)) {
        wget_extension(esp543 + 0x294c, v538, v425, 0x8059100, v248);
        eax557 = fun_8048d24(0x800, v538, v425, 0x8059100, v248, v548, v549, v550, v551, v552, v553, v3, v554, v555, v556);
        esp558 = esp543 - 4 + 4 - 4 + 4;
        fun_8048c84(eax557, esp558 + 0x294c, v425, 0x8059100, v248, v559, v560, v561, v562, v563, v564, v3, v565, v566, v567, v568, v569);
        eax579 = fun_8048bc4(eax557, 47, v425, 0x8059100, v248, v570, v571, v572, v573, v574, v575, v3, v576, v577, v578);
        esp580 = esp558 - 4 + 4 - 4 + 4;
        fun_8048c84(esp580 + 0x294c, eax579 + 1, v425, 0x8059100, v248, v581, v582, v583, v584, v585, v586, v3, v587, v588, v589, v590, v591);
        fun_8048bf4(eax557, eax579 + 1, v425, 0x8059100, v248, v592, v593, v594, v595, v596, v597, v3, v598, v599, v600);
        esp543 = esp580 - 4 + 4 - 4 + 4;
    }
    eax601 = VERBOSE;
    if (eax601) {
        eax602 = stdout;
        v425 = reinterpret_cast<void**>(esp543 + 0x294c);
        fun_8048ce4(eax602, "Extension location is '%s'.\n", v425, 0x8059100, v248, v603, v604, v605, v606, v607, v608, v3, v609, v610, v611);
        esp543 = esp543 - 4 + 4;
    }
    if (v286 == 10) {
        addr_805402d_81:
        if (!reinterpret_cast<int1_t>(v286 == 10)) {
            v612 = reinterpret_cast<void**>(esp543 + 0x114c);
            get_package_name(esp543 + 0x294c, v612, v425, v249, v248);
            esp613 = esp543 - 4 + 4;
        } else {
            v612 = reinterpret_cast<void**>(esp543 + 0x294c);
            fun_8048c84(esp543 + 0x114c, v612, v425, v249, v248, v614, v615, v616, v617, v618, v619, v3, v620, v621, v622, v623, v624);
            esp613 = esp543 - 4 + 4;
        }
    } else {
        v625 = reinterpret_cast<void**>(esp543 + 0x8c);
        v626 = reinterpret_cast<void**>(esp543 + 0x294c);
        eax627 = stat(v626, v625, v425, 0x8059100, v248);
        esp543 = esp543 - 4 + 4;
        if (eax627 < 0) {
            eax631 = fun_8048a94(v626, v625, v425, 0x8059100, v248, v628, v629, v630);
            v632 = *eax631;
            eax636 = fun_8048ad4(v632, v625, v425, 0x8059100, v248, v633, v634, v635);
            esp637 = reinterpret_cast<void*>(esp543 - 4 + 4 - 4 + 4);
            v249 = eax636;
            v425 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp637) + 0x294c);
            v625 = reinterpret_cast<void**>("extension FILE or DIR '%s' invalid: %s\n");
            print_error(0xfffffffe, "extension FILE or DIR '%s' invalid: %s\n", v425, v249, v248, v638, v639, v640, v641);
            esp543 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp637) - 4 + 4);
        }
        if ((v642 & 0xf000) != 0x4000) 
            goto addr_8053eb6_87; else 
            goto addr_8053e71_88;
    }
    if (v245 > 0) {
        if (!v247) {
            eax646 = fun_8048b64("GISBASE", v612, v425, v249, v248, v643, v644, v645);
            esp613 = esp613 - 4 + 4;
            v247 = eax646;
        }
        v249 = v247;
        v425 = v246;
        v612 = v286;
        run_post(esp613 + 0x294c, v612, v425, v249, v248);
        esp613 = esp613 - 4 + 4;
    }
    eax647 = VERBOSE;
    if (eax647) {
        eax648 = stdout;
        v425 = reinterpret_cast<void**>(esp613 + 0x294c);
        v612 = reinterpret_cast<void**>("Extension will be installed from '%s'\n");
        fun_8048ce4(eax648, "Extension will be installed from '%s'\n", v425, v249, v248, v649, v650, v651, v652, v653, v654, v3, v655, v656, v657);
        esp613 = esp613 - 4 + 4;
    }
    if (v286 != 10) {
        v248 = reinterpret_cast<void**>(esp613 + 0x11c);
        v249 = reinterpret_cast<void**>(esp613 + 0x120);
        v425 = reinterpret_cast<void**>(esp613 + 0x124);
        v612 = reinterpret_cast<void**>(esp613 + 0x194c);
        check_extension(esp613 + 0x294c, v612, v425, v249, v248);
        esp613 = esp613 - 4 + 4;
    }
    if (reinterpret_cast<int1_t>(v286 == 5)) {
        v658 = reinterpret_cast<void**>(esp613 + 0x214c);
        v659 = reinterpret_cast<void**>(esp613 + 0x94c);
        v660 = reinterpret_cast<void**>(esp613 + 0x114c);
        v248 = v661;
        v249 = v662;
        v425 = v663;
        v612 = reinterpret_cast<void**>(esp613 + 0x194c);
        query_extension(esp613 + 0x294c, v612, v425, v249, v248, v660, v659, v658);
        fun_8048db4(0, v612, v425, v249, v248, v660, v659, v658, v664, v665, v666);
        esp613 = esp613 - 4 + 4 - 4 + 4;
    }
    if (reinterpret_cast<int1_t>(v286 == 9)) {
        show_details(esp613 + 0x294c, v612, v425, v249, v248, v660, v659, v658);
        fun_8048db4(0, v612, v425, v249, v248, v660, v659, v658, v667, v668, v669);
        esp613 = esp613 - 4 + 4 - 4 + 4;
    }
    if (reinterpret_cast<int1_t>(v286 == 7)) {
        show_license(esp613 + 0x294c, v612, v425, v249, v248, v660, v659, v658);
        fun_8048db4(0, v612, v425, v249, v248, v660, v659, v658, v670, v671, v672);
        esp613 = esp613 - 4 + 4 - 4 + 4;
    }
    if (reinterpret_cast<int1_t>(v286 == 6)) {
        source_clean(esp613 + 0x294c, v612, v425, v249, v248, v660, v659, v658);
        fun_8048db4(0, v612, v425, v249, v248, v660, v659, v658, v673, v674, v675);
        esp613 = esp613 - 4 + 4 - 4 + 4;
    }
    if (!v247 && (eax676 = fun_8048b64("GISBASE", v612, v425, v249, v248, v660, v659, v658), esp613 = esp613 - 4 + 4, v247 = eax676, !v247)) {
        v612 = reinterpret_cast<void**>("GISBASE environment variable not set and path to GRASS not given.\n");
        print_error(0xffffffff, "GISBASE environment variable not set and path to GRASS not given.\n", v425, v249, v248, v660, v659, v658, v677);
        esp613 = esp613 - 4 + 4;
    }
    eax678 = VERBOSE;
    if (eax678) {
        eax679 = stdout;
        v425 = v247;
        v612 = reinterpret_cast<void**>("Path to GRASS is %s.\n");
        fun_8048ce4(eax679, "Path to GRASS is %s.\n", v425, v249, v248, v660, v659, v658, v680, v681, v682, v3, v683, v684, v685);
        esp613 = esp613 - 4 + 4;
    }
    eax686 = fun_8048b64("GRASS_VERSION", v612, v425, v249, v248, v660, v659, v658);
    esp687 = esp613 - 4 + 4;
    v688 = eax686;
    if (!v688) {
        v425 = v247;
        fun_8048aa4(esp687 + 0x314c, "%s/etc/VERSIONNUMBER", v425, v249, v248, v660, v659, v658, v689, v690, v691, v3, v692, v693, v694, v695, v696);
        esp697 = esp687 - 4 + 4;
        eax700 = fun_8048c74(esp697 + 0x314c, "r", v425, v249, v248, v660, v659, v658, v698, v699);
        esp701 = reinterpret_cast<void*>(esp697 - 4 + 4);
        if (eax700) {
            eax708 = fun_8048d24(16, "r", v425, v249, v248, v660, v659, v658, v702, v703, v704, v3, v705, v706, v707);
            v688 = eax708;
            v425 = v688;
            v612 = reinterpret_cast<void**>("%s");
            eax709 = fun_8048af4(eax700, "%s", v425, v249, v248, v660, v659, v658);
            fun_8048c44(eax700, "%s", v425, v249, v248, v660, v659, v658, v710, v711, v712, v3, v713, v714, v715);
            esp687 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp701) - 4 + 4 - 4 + 4 - 4 + 4);
            if (eax709 <= 0) {
                v612 = reinterpret_cast<void**>("Could not read GRASS version. Did you specify the right path?\n");
                print_error(0xfffffff5, "Could not read GRASS version. Did you specify the right path?\n", v425, v249, v248, v660, v659, v658, v716);
                esp687 = esp687 - 4 + 4;
            }
        } else {
            v612 = reinterpret_cast<void**>("Could not read GRASS version. Did you specify the right path?\n");
            print_error(0xfffffff5, "Could not read GRASS version. Did you specify the right path?\n", v425, v249, v248, v660, v659, v658, v717);
            esp687 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp701) - 4 + 4);
        }
    }
    if (v688) {
        eax718 = fun_8048d94(v688, v612, v425, v249, v248, v660, v659, v658);
        eax719 = fun_8048d54(eax718, ".", v425, v249, v248, v660, v659, v658);
        eax720 = fun_8048d54(0, ".", v425, v249, v248, v660, v659, v658);
        eax721 = fun_8048d54(0, ".", v425, v249, v248, v660, v659, v658);
        eax722 = fun_8048be4(eax719, 0, 10, v249, v248, v660, v659, v658);
        eax723 = fun_8048be4(eax720, 0, 10, v249, v248, v660, v659, v658);
        eax724 = fun_8048be4(eax721, 0, 10, v249, v248, v660, v659, v658);
        eax731 = fun_8048d24(0x800, 0, 10, v249, v248, v660, v659, v658, v725, v726, v727, v3, v728, v729, v730);
        v688 = eax731;
        v248 = eax724;
        v249 = eax723;
        v732 = eax722;
        fun_8048aa4(v688, "%i.%i.%i", v732, v249, v248, v660, v659, v658, v733, v734, v735, v3, v736, v737, v738, v739, v740);
        esp687 = esp687 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4;
        eax741 = VERBOSE;
        if (eax741) {
            eax742 = stdout;
            v732 = v688;
            fun_8048ce4(eax742, "GRASS version is %s.\n", v732, v249, v248, v660, v659, v658, v743, v744, v745, v3, v746, v747, v748);
            esp687 = esp687 - 4 + 4;
        }
        if (reinterpret_cast<signed char>(eax722) <= reinterpret_cast<signed char>(5)) {
            print_error(0xfffffff5, "extensions only work with GRASS version 6 and above.\n", v732, v249, v248, v660, v659, v658, v749);
            esp687 = esp687 - 4 + 4;
        }
    }
    v750 = v247;
    v751 = reinterpret_cast<void**>("-L%s/lib -I/usr/local/grasslib/include/ ");
    fun_8048aa4(esp687 + 0x14c, "-L%s/lib -I/usr/local/grasslib/include/ ", v750, v249, v248, v660, v659, v658, v752, v753, v754, v3, v755, v756, v757, v758, v759);
    esp760 = esp687 - 4 + 4;
    if (reinterpret_cast<int1_t>(v286 == 3)) {
        v659 = v688;
        v660 = v761;
        v248 = v762;
        v249 = v763;
        v750 = reinterpret_cast<void**>(esp760 + 0x114c);
        v751 = v247;
        source_install(esp760 + 0x294c, v751, v750, v249, v248, v660, v659, v658);
        fun_8048db4(0, v751, v750, v249, v248, v660, v659, v658, v764, v765, v766);
        esp760 = esp760 - 4 + 4 - 4 + 4;
    }
    if (reinterpret_cast<int1_t>(v286 == 10)) {
        v249 = v688;
        v750 = v247;
        v751 = reinterpret_cast<void**>(esp760 + 0x114c);
        uninstall(esp760 + 0x294c, v751, v750, v249, v248, v660, v659, v658);
        fun_8048db4(0, v751, v750, v249, v248, v660, v659, v658, v767, v768, v769);
        esp760 = esp760 - 4 + 4 - 4 + 4;
    }
    if (reinterpret_cast<int1_t>(v286 == 8)) {
        v659 = v688;
        v660 = v770;
        v248 = v771;
        v249 = v772;
        v750 = reinterpret_cast<void**>(esp760 + 0x114c);
        v751 = v247;
        test_install(esp760 + 0x294c, v751, v750, v249, v248, v660, v659, v658);
        fun_8048db4(0, v751, v750, v249, v248, v660, v659, v658, v773, v774, v775);
        esp760 = esp760 - 4 + 4 - 4 + 4;
    }
    if (reinterpret_cast<int1_t>(v286 == 4)) {
        eax776 = binaries_exist(esp760 + 0x294c, v246, v750, v249, v248, v660, v659, v658);
        esp777 = esp760 - 4 + 4;
        if (eax776) {
            v658 = v688;
            v659 = v778;
            v660 = v779;
            v248 = v780;
            v249 = reinterpret_cast<void**>(esp777 + 0x114c);
            bin_install(esp777 + 0x294c, v247, v246, v249, v248, v660, v659, v658);
            fun_8048db4(0, v247, v246, v249, v248, v660, v659, v658, v781, v782, v783);
        }
        v750 = v246;
        v751 = reinterpret_cast<void**>("no binaries for system '%s'\n");
        print_error(0xfffffff4, "no binaries for system '%s'\n", v750, v249, v248, v660, v659, v658, v784);
    }
    fun_8048db4(0, v751, v750, v249, v248, v660, v659, v658, v785, v786, v787);
    goto 0;
    addr_8053eb6_87:
    eax788 = VERBOSE;
    if (eax788) {
        eax789 = stdout;
        v249 = eax789;
        v425 = reinterpret_cast<void**>(42);
        v625 = reinterpret_cast<void**>(1);
        fun_8048cd4("Extension files stored in a package file.\n", 1, 42, v249, v248);
        esp543 = esp543 - 4 + 4;
    }
    unpack_extension(esp543 + 0x294c, v625, v425, v249, v248);
    eax795 = fun_8048c24(0x80632c0, v625, v425, v249, v248, v790, v791, v792, v793, v794);
    v796 = eax795;
    eax802 = fun_8048bd4(v796, v625, v425, v249, v248, v797, v798, v799, v800, v801);
    esp803 = esp543 - 4 + 4 - 4 + 4 - 4 + 4;
    v804 = eax802;
    v805 = 0;
    while (v804) {
        v806 = reinterpret_cast<void**>(".");
        eax813 = fun_8048da4(&v804->fb, ".", v425, v249, v248, v807, v808, v809, v810, v811, v812, v3);
        esp803 = esp803 - 4 + 4;
        if (!eax813) 
            goto addr_8053fd1_134;
        v806 = reinterpret_cast<void**>("..");
        eax820 = fun_8048da4(&v804->fb, "..", v425, v249, v248, v814, v815, v816, v817, v818, v819, v3);
        esp803 = esp803 - 4 + 4;
        if (!eax820) 
            goto addr_8053fd1_134;
        v249 = reinterpret_cast<void**>(&v804->fb);
        v425 = reinterpret_cast<void**>(0x80632c0);
        fun_8048aa4(v216, "%s/%s", 0x80632c0, v249, v248, v821, v822, v823, v824, v825, v826, v3, v827, v828, v829, v830, v831);
        esp832 = esp803 - 4 + 4;
        v806 = reinterpret_cast<void**>(esp832 + 52);
        stat(v216, v806, 0x80632c0, v249, v248);
        esp803 = esp832 - 4 + 4;
        if ((v833 & 0xf000) == 0x4000) 
            goto addr_8053fc4_137;
        addr_8053fd1_134:
        eax839 = fun_8048bd4(v796, v806, v425, v249, v248, v834, v835, v836, v837, v838);
        esp803 = esp803 - 4 + 4;
        v804 = eax839;
    }
    addr_8053ff5_138:
    fun_8048c84(esp803 + 0x294c, v216, v425, v249, v248, v840, v841, v842, v843, v844, v845, v3, v846, v847, v848, v849, v850);
    esp543 = esp803 - 4 + 4;
    if (!v805) {
        print_error(0xfffffff9, "no top-level directory found in extension package.\n", v425, v249, v248, v851, v852, v853, v854);
        esp543 = esp543 - 4 + 4;
        goto addr_805402d_81;
    }
    addr_8053fc4_137:
    v805 = 1;
    goto addr_8053ff5_138;
    addr_8053e71_88:
    eax855 = VERBOSE;
    if (eax855) {
        eax856 = stdout;
        v249 = eax856;
        v425 = reinterpret_cast<void**>(39);
        fun_8048cd4("Extension files stored in a directory.\n", 1, 39, v249, v248);
        esp543 = esp543 - 4 + 4;
        goto addr_805402d_81;
    }
    addr_80537b0_17:
    v286 = reinterpret_cast<void**>(12);
    ++v245;
    goto addr_8053aa9_54;
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_8054808(v1, ebx2, ebp3, __return_address());
}

int32_t g8058ffc = 0;

void fun_8048b1a() {
    goto g8058ffc;
}

void fun_8048a80() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8048bba() {
    goto 0x8048a74;
}

void exit_env() {
    return;
}

void fun_8048c9a() {
    goto 0x8048a74;
}

void fun_8048aaa() {
    goto 0x8048a74;
}

void fun_8048cda() {
    goto 0x8048a74;
}

void fun_8048d3a() {
    goto 0x8048a74;
}

void fun_8048b8a() {
    goto 0x8048a74;
}

void exit_msg(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;
    void** eax9;
    void** eax10;
    void** v11;
    void** v12;
    void** eax13;
    void** ecx14;
    void** eax15;
    void** v16;
    void** v17;
    void** ebp18;
    void** ecx19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;

    eax8 = ERROR;
    if (reinterpret_cast<signed char>(eax8) >= reinterpret_cast<signed char>(0)) {
        eax9 = WARNINGS;
        if (reinterpret_cast<int1_t>(eax9 == 1)) {
            eax10 = stdout;
            v11 = eax10;
            fun_8048cd4("Job done but there was one warning. Please check.\n", 1, 50, v11, v12);
        }
        eax13 = WARNINGS;
        if (reinterpret_cast<signed char>(eax13) > reinterpret_cast<signed char>(1)) {
            ecx14 = WARNINGS;
            eax15 = stdout;
            fun_8048ce4(eax15, "Job done but there were %i warnings. Please check.\n", ecx14, v11, v16, v17, ebp18, __return_address(), a1, a2, a3, a4, a5, a6, a7);
        }
    } else {
        ecx19 = ERROR;
        eax20 = stdout;
        fun_8048ce4(eax20, "Program exited with an error (code %i). Operation aborted.\n", ecx19, v21, v22, v23, ebp18, __return_address(), a1, a2, a3, a4, a5, a6, a7);
    }
    return;
}

void fun_8048cea() {
    goto 0x8048a74;
}

void fun_8048bfa() {
    goto 0x8048a74;
}

void fun_8048d9a() {
    goto 0x8048a74;
}

void fun_8048c6a() {
    goto 0x8048a74;
}

void fun_8048d2a() {
    goto 0x8048a74;
}

void fun_8048c8a() {
    goto 0x8048a74;
}

void fun_8048dba() {
    goto 0x8048a74;
}

void dump_str(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebp6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ebp6;
    v7 = reinterpret_cast<void**>(0);
    while (*reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v7) << 2) + reinterpret_cast<unsigned char>(a2))) {
        v8 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(v7) << 2) + reinterpret_cast<unsigned char>(a2));
        fun_8048ce4(a1, "%i: %s", v7, v8, v9, v10, v11, v7, v12, v13, v5, v4, a1, a2, a3);
        ++v7;
    }
    return;
}

void fun_8048c4a() {
    goto 0x8048a74;
}

void fun_8048cfa() {
    goto 0x8048a74;
}

void fun_8048b5a() {
    goto 0x8048a74;
}

void fun_8048d4a() {
    goto 0x8048a74;
}

void fun_8048a9a() {
    goto 0x8048a74;
}

void fun_8048ada() {
    goto 0x8048a74;
}

void fun_8048c7a() {
    goto 0x8048a74;
}

void fun_8048cca() {
    goto 0x8048a74;
}

void fun_8048daa() {
    goto 0x8048a74;
}

void fun_8048b3a() {
    goto 0x8048a74;
}

void fun_8048d6a() {
    goto 0x8048a74;
}

void fun_8048c5a() {
    goto 0x8048a74;
}

void fun_8048c1a() {
    goto 0x8048a74;
}

void fun_8048c0a() {
    goto 0x8048a74;
}

void fun_8048b2a() {
    goto 0x8048a74;
}

void fun_8048b7a() {
    goto 0x8048a74;
}

void fun_8048bca() {
    goto 0x8048a74;
}

void fun_8048b9a() {
    goto 0x8048a74;
}

void fun_8048cba() {
    goto 0x8048a74;
}

void fun_8048c2a() {
    goto 0x8048a74;
}

void fun_8048caa() {
    goto 0x8048a74;
}

void fun_8048d5a() {
    goto 0x8048a74;
}

void fun_8048bea() {
    goto 0x8048a74;
}

void fun_8048c3a() {
    goto 0x8048a74;
}

void fun_8048aca() {
    goto 0x8048a74;
}

void fun_8048b6a() {
    goto 0x8048a74;
}

void fun_8048bda() {
    goto 0x8048a74;
}

void fun_8048aea() {
    goto 0x8048a74;
}

unsigned char TMPDIR = 0;

void** exit_tmp() {
    void* ebp1;
    uint32_t eax2;
    uint32_t eax3;
    int32_t eax4;
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
    void** eax26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
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
    void** v46;
    void** v47;
    void** eax48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** eax56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** eax67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** eax79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax2 = g14;
    eax3 = TMPDIR;
    if (*reinterpret_cast<signed char*>(&eax3)) {
        eax4 = TMPCLEAN;
        if (!eax4) {
            fun_8048c94(0x806c2e0, v5, v6, v7, v8);
            v9 = reinterpret_cast<void**>(0x80632c0);
            v10 = reinterpret_cast<void**>("rm -rf %s/*");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4, "rm -rf %s/*", 0x80632c0, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24);
            eax25 = VERBOSE;
            if (eax25) {
                eax26 = stdout;
                v27 = eax26;
                v9 = reinterpret_cast<void**>(37);
                v10 = reinterpret_cast<void**>(1);
                fun_8048cd4("Removing temporary extension files...", 1, 37, v27, v28);
            }
            eax32 = fun_8048b84(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4, v10, v9, v27, v29, v30, v31);
            v33 = reinterpret_cast<void**>("rmdir %s");
            fun_8048aa4(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4, "rmdir %s", 0x80632c0, v27, v34, v35, eax32, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45);
            eax48 = fun_8048b84(reinterpret_cast<int32_t>(ebp1) + 0xfffff7f4, "rmdir %s", 0x80632c0, v27, v46, v47, eax32);
            v49 = eax48;
            v50 = reinterpret_cast<void**>(0x80632c0);
            eax56 = fun_8048c24(0x80632c0, "rmdir %s", 0x80632c0, v27, v51, v52, v49, v53, v54, v55);
            v57 = eax56;
            if (v57) {
                v33 = reinterpret_cast<void**>(0x80632c0);
                v50 = reinterpret_cast<void**>("could not remove temporary directory %s.\nPlease remove manually.\n");
                print_warning("could not remove temporary directory %s.\nPlease remove manually.\n", 0x80632c0, 0x80632c0, v27, v58, v57, v49, v59, v60, v61, v62, v63, v64, v65, v66);
            }
            eax67 = VERBOSE;
            if (eax67) {
                print_done(v50, v33, 0x80632c0, v27, v68, v57, v49, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78);
            }
            TMPCLEAN = 1;
        }
    } else {
        TMPCLEAN = 1;
    }
    eax79 = reinterpret_cast<void**>(eax2 ^ g14);
    if (eax79) {
        eax79 = fun_8048d34(v50, v33, 0x80632c0, v27, v80, v57, v49, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90);
    }
    return eax79;
}

void fun_8048b4a() {
    goto 0x8048a74;
}

void fun_8048baa() {
    goto 0x8048a74;
}

void fun_8048b0a() {
    goto 0x8048a74;
}

void fun_8048aba() {
    goto 0x8048a74;
}

void fun_8048d8a() {
    goto 0x8048a74;
}

void fun_8048d1a() {
    goto 0x8048a74;
}

void fun_8048afa() {
    goto 0x8048a74;
}

void fun_8048a8a() {
    goto 0x8048a74;
}

void fun_8048d7a() {
    goto 0x8048a74;
}

void fun_8048d0a() {
    goto 0x8048a74;
}

void fun_80546e5(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    uint32_t edi6;
    uint32_t esi7;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x48f9;
    _init();
    edi6 = reinterpret_cast<uint32_t>(ebx4 - 0xe4 - (ebx4 - 0xe4) >> 2);
    if (edi6) {
        esi7 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi7 * 4 - 0xe4)(a1, a2, a3);
            ++esi7;
        } while (esi7 < edi6);
    }
    return;
}
