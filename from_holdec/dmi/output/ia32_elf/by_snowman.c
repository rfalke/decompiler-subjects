
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_80484d0();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x2c0f - 4)) {
        fun_80484d0();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0;

void fun_80484d0() {
    goto __gmon_start__;
}

void fun_8048470(void* a1, int32_t a2, int32_t a3);

int32_t basic_1_string_literals_quoting() {
    int32_t v1;
    int32_t v2;
    int32_t v3;
    int32_t v4;

    fun_8048470("with ' single quote", v1, v2);
    fun_8048470("with \" double quote", v3, v4);
    return 0;
}

int32_t basic_2_string_literals_low_chars() {
    int32_t v1;
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    int32_t v24;
    int32_t v25;
    int32_t v26;
    int32_t v27;
    int32_t v28;
    int32_t v29;
    int32_t v30;
    int32_t v31;
    int32_t v32;
    int32_t v33;
    int32_t v34;
    int32_t v35;
    int32_t v36;
    int32_t v37;
    int32_t v38;
    int32_t v39;
    int32_t v40;
    int32_t v41;
    int32_t v42;
    int32_t v43;
    int32_t v44;
    int32_t v45;
    int32_t v46;
    int32_t v47;
    int32_t v48;
    int32_t v49;
    int32_t v50;
    int32_t v51;
    int32_t v52;
    int32_t v53;
    int32_t v54;
    int32_t v55;
    int32_t v56;
    int32_t v57;
    int32_t v58;
    int32_t v59;
    int32_t v60;
    int32_t v61;
    int32_t v62;

    fun_8048470(0x8048cbc, v1, v2);
    fun_8048470(0x8048cd6, v3, v4);
    fun_8048470(0x8048cf0, v5, v6);
    fun_8048470(0x8048d0a, v7, v8);
    fun_8048470(0x8048d24, v9, v10);
    fun_8048470(0x8048d3e, v11, v12);
    fun_8048470(0x8048d58, v13, v14);
    fun_8048470(0x8048d72, v15, v16);
    fun_8048470("hex=0x09 dec=9 char=\tFINI", v17, v18);
    fun_8048470("hex=0x0a dec=10 char=\nFINI", v19, v20);
    fun_8048470(0x8048dc1, v21, v22);
    fun_8048470(0x8048ddc, v23, v24);
    fun_8048470("hex=0x0d dec=13 char=\rFINI", v25, v26);
    fun_8048470(0x8048e12, v27, v28);
    fun_8048470(0x8048e2d, v29, v30);
    fun_8048470(0x8048e48, v31, v32);
    fun_8048470(0x8048e63, v33, v34);
    fun_8048470(0x8048e7e, v35, v36);
    fun_8048470(0x8048e99, v37, v38);
    fun_8048470(0x8048eb4, v39, v40);
    fun_8048470(0x8048ecf, v41, v42);
    fun_8048470(0x8048eea, v43, v44);
    fun_8048470(0x8048f05, v45, v46);
    fun_8048470(0x8048f20, v47, v48);
    fun_8048470(0x8048f3b, v49, v50);
    fun_8048470(0x8048f56, v51, v52);
    fun_8048470(0x8048f71, v53, v54);
    fun_8048470(0x8048f8c, v55, v56);
    fun_8048470(0x8048fa7, v57, v58);
    fun_8048470(0x8048fc2, v59, v60);
    fun_8048470(0x8048fdd, v61, v62);
    return 0;
}

int32_t basic_3_string_literals_high_chars() {
    int32_t v1;
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    int32_t v24;
    int32_t v25;
    int32_t v26;
    int32_t v27;
    int32_t v28;
    int32_t v29;
    int32_t v30;
    int32_t v31;
    int32_t v32;

    fun_8048470(0x8048ff8, v1, v2);
    fun_8048470(0x8049014, v3, v4);
    fun_8048470(0x8049030, v5, v6);
    fun_8048470(0x804904c, v7, v8);
    fun_8048470(0x8049068, v9, v10);
    fun_8048470(0x8049084, v11, v12);
    fun_8048470(0x80490a0, v13, v14);
    fun_8048470(0x80490bc, v15, v16);
    fun_8048470(0x80490d8, v17, v18);
    fun_8048470(0x80490f4, v19, v20);
    fun_8048470(0x8049110, v21, v22);
    fun_8048470(0x804912c, v23, v24);
    fun_8048470(0x8049148, v25, v26);
    fun_8048470(0x8049164, v27, v28);
    fun_8048470(0x8049180, v29, v30);
    fun_8048470(0x804919c, v31, v32);
    return 0;
}

int32_t basic_4_readonly_vs_modifiable() {
    int32_t v1;
    int32_t v2;
    int32_t v3;
    int32_t v4;

    fun_8048470("a read only string", v1, v2);
    fun_8048470("a modifiable string", v3, v4);
    return 0;
}

int32_t fun_8048430(int32_t a1);

uint32_t basic_10_result_var_name(uint32_t a1) {
    int32_t eax2;

    if (reinterpret_cast<int32_t>(a1) <= reinterpret_cast<int32_t>(5)) {
        eax2 = fun_8048430(0);
        return eax2 + 10;
    } else {
        return a1 << 2;
    }
}

void fun_80484b0(uint32_t a1);

int32_t intermediate_1_for_loop_name(uint32_t a1) {
    uint32_t ebx2;
    uint32_t esi3;
    uint32_t v4;

    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(a1) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(a1 == 0))) {
        ebx2 = 48;
        esi3 = a1 + 48;
        do {
            v4 = ebx2;
            ++ebx2;
            fun_80484b0(v4);
        } while (ebx2 != esi3);
    }
    return 0;
}

int32_t fun_80484a0(int32_t a1, int32_t a2);

int32_t intermediate_2_parameter_names(uint32_t a1) {
    int32_t edx2;
    int32_t eax3;
    int32_t eax4;
    int32_t v5;

    if (a1 == 1) {
        edx2 = reinterpret_cast<int32_t>("/is/a/1");
        eax3 = reinterpret_cast<int32_t>("r");
    } else {
        eax3 = reinterpret_cast<int32_t>("r");
        edx2 = reinterpret_cast<int32_t>("/is/something/else");
        if (reinterpret_cast<int32_t>(a1) < reinterpret_cast<int32_t>(0)) {
            eax3 = reinterpret_cast<int32_t>("w");
        }
    }
    eax4 = fun_80484a0(edx2, eax3);
    if (!eax4) {
        fun_8048470("failed", eax3, v5);
        return 0;
    } else {
        return 0;
    }
}

int32_t intermediate_10_int_literal_in_bit_context(uint32_t a1) {
    fun_80484b0(a1 & 0xf0f0);
    fun_80484b0(a1 | 0xff0000);
    fun_80484b0(a1 ^ 3);
    fun_80484b0(a1 & 42);
    fun_80484b0(a1 | 0x3e7);
    fun_80484b0(a1 ^ 0x12d591);
    return 0;
}

int32_t intermediate_11_int_literal_in_arithm_context(uint32_t a1) {
    fun_80484b0(a1 + 0xf0f0);
    fun_80484b0(a1 + 0xff010000);
    fun_80484b0(a1 + a1 * 2);
    fun_80484b0(a1 + 42);
    fun_80484b0(a1 + 0xfffffc19);
    fun_80484b0(a1 * 0x12d591);
    return 0;
}

void fun_8048460(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);

void fun_8048440(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

void advanced_1_null_bytes_with_fixed_length(int32_t a1) {
    int32_t v2;
    int32_t v3;
    int32_t ebx4;

    fun_8048460("with null byte ", 17, 1, a1, v2, v3, ebx4, __return_address());
    fun_8048460("with null byte ", 1, 17, a1, "with null byte ", 17, 1, a1);
    fun_8048440(a1, "with null byte ", 17, a1);
    return;
}

int32_t fun_8048450(int32_t a1, int32_t a2, int32_t a3);

int32_t fun_80484c0(int32_t a1, int32_t a2, int32_t a3);

int32_t advanced_2_naming_enums(int32_t a1) {
    int32_t eax2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;

    eax2 = fun_8048450(a1, 0, 0);
    eax3 = fun_8048450(a1, 0, 1);
    eax4 = fun_8048450(a1, 0, 2);
    eax5 = fun_80484c0("/some/path", 36, 2);
    if (eax5 + (eax2 + eax3 + eax4) > 4) {
        fun_8048470("something", 36, 2);
    }
    return 0;
}

int32_t fun_8048480(int32_t a1, int32_t a2);

int32_t advanced_10_int_literal_in_char_context(signed char* a1) {
    int32_t eax2;
    void* esp3;
    int32_t v4;
    int32_t v5;

    fun_80484b0(49);
    eax2 = fun_8048480(__return_address(), 49);
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 40 - 4 - 4 + 4 + 4 + 4 - 4 - 4 - 4 + 4 + 16);
    if (eax2) {
        fun_8048470("contains a '1'", 49, v4);
        esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 12 - 4 - 4 + 4 + 16);
    }
    fun_8048470(reinterpret_cast<int32_t>(esp3) - 12 + 25, 49, v5);
    return 0;
}

void fun_8048420(uint32_t* ecx, int32_t a2, int32_t a3);

int32_t advanced_11_printf_type_related(uint32_t* ecx, signed char* a2) {
    fun_8048420(ecx, "as char %c\n", 48);
    fun_8048420(ecx, "as int %d\n", 48);
    fun_8048420("as int %d\n", "as pointer %p\n", 48);
    fun_8048420("as int %d\n", "as octal %o\n", 48);
    fun_8048420("as octal %o\n", "as hex %x\n", 48);
    fun_8048420("as octal %o\n", "as unsigned %u\n", 0xff);
    fun_8048420("as unsigned %u\n", "as signed %d\n", 0xff);
    return 0;
}

int32_t chmod(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;

    eax1 = 3;
    if (!1 && (eax1 = 0, !1)) {
        eax1 = chmod(0x804b050, v2);
    }
    return eax1;
}

int32_t putchar = 0x80484b6;

void fun_80484b0(uint32_t a1) {
    goto putchar;
}

int32_t fopen = 0x80484a6;

int32_t fun_80484a0(int32_t a1, int32_t a2) {
    goto fopen;
}

int32_t puts = 0x8048476;

void fun_8048470(void* a1, int32_t a2, int32_t a3) {
    goto puts;
}

int32_t fwrite = 0x8048466;

void fun_8048460(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    goto fwrite;
}

int32_t memcmp = 0x8048446;

void fun_8048440(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto memcmp;
}

int32_t fseek = 0x8048456;

int32_t fun_8048450(int32_t a1, int32_t a2, int32_t a3) {
    goto fseek;
}

int32_t chmod = 0x80484c6;

int32_t fun_80484c0(int32_t a1, int32_t a2, int32_t a3) {
    goto chmod;
}

int32_t strchr = 0x8048486;

int32_t fun_8048480(int32_t a1, int32_t a2) {
    goto strchr;
}

int32_t printf = 0x8048426;

void fun_8048420(uint32_t* ecx, int32_t a2, int32_t a3) {
    goto printf;
}

int32_t __libc_start_main = 0x8048496;

void fun_8048490(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t time = 0x8048436;

int32_t fun_8048430(int32_t a1) {
    goto time;
}

int32_t main(uint32_t a1, signed char** a2) {
    signed char* v3;

    basic_1_string_literals_quoting();
    basic_2_string_literals_low_chars();
    basic_3_string_literals_high_chars();
    basic_4_readonly_vs_modifiable();
    basic_10_result_var_name(a1);
    intermediate_1_for_loop_name(a1);
    intermediate_2_parameter_names(a1);
    intermediate_10_int_literal_in_bit_context(a1);
    intermediate_11_int_literal_in_arithm_context(a1);
    advanced_1_null_bytes_with_fixed_length(0);
    advanced_2_naming_enums(0);
    v3 = *a2;
    advanced_10_int_literal_in_char_context(v3);
    advanced_11_printf_type_related(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4, v3);
    return static_cast<int32_t>(**a2);
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_804841c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048490(main, __return_address(), esp1, __libc_csu_init, 0x8048c70, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t edx1;
    int32_t v2;
    int32_t eax3;

    edx1 = __JCR_END__;
    if (!(!edx1 || 1)) {
        chmod(0x804af10, v2);
    }
    eax3 = 0;
    if (!1 && !1) {
        eax3 = chmod(0x804b050, 0);
    }
    return eax3;
}

void fun_804863d() {
}

void fun_8048904() {
}

void fun_8048953() {
}

void fun_8048997() {
}

void fun_8048b43() {
}

void fun_8048c6d() {
    return;
}

int32_t g804b008 = 0;

void fun_8048426() {
    goto g804b008;
}

void fun_80487fc() {
}

void fun_80488c7() {
}

void fun_8048a32() {
}

void fun_8048a9c() {
}

void fun_8048adc() {
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x23e7;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x8048c31);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void fun_80485cc() {
}

signed char __TMC_END__ = 0;

int32_t fun_8048605() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

void fun_80484b6() {
    goto 0x8048410;
}

void fun_80484a6() {
    goto 0x8048410;
}

void fun_80489c6() {
}

void fun_8048476() {
    goto 0x8048410;
}

void fun_804891c() {
}

void fun_80489ac() {
}

void fun_8048466() {
    goto 0x8048410;
}

void fun_8048446() {
    goto 0x8048410;
}

void fun_8048456() {
    goto 0x8048410;
}

void fun_80484c6() {
    goto 0x8048410;
}

void fun_8048486() {
    goto 0x8048410;
}

void fun_8048496() {
    goto 0x8048410;
}

void fun_8048436() {
    goto 0x8048410;
}
