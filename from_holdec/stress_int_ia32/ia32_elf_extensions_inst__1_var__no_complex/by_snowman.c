
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_8049207(int32_t a1, void** a2, int32_t a3) {
    return;
}

int32_t __libc_start_main = 0x8049046;

void fun_8049040(int32_t a1, int16_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t __assert_fail(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 0x804d018;
    if (1 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = __assert_fail(0x804d018, v2);
        return eax3;
    }
}

int32_t inst_0_values_var_0() {
    __asm__("rep bsf bp, di");
    return -0x47d08557 - 0x600bd63b + 0x56bd0473 - 0x2e9b1159 + 0x69513c27 + 0x7a814b27 - 0x665b434c + 0x243609b;
}

int32_t inst_1_values_var_0() {
    __asm__("rep bsf edx, esi");
    return -0xec9cdc05 + 0x2006adfc + 0x74d5188e - 0x735f7242 + 0x538d37 - 0x2daa537d + 0x243559f4 + 0x60e281cd;
}

int32_t inst_2_values_var_0() {
}

int32_t inst_3_flags_var_0() {
}

int32_t inst_4_values_var_0() {
}

int32_t inst_4_flags_var_0() {
}

int32_t inst_5_values_var_0() {
}

int32_t inst_5_flags_var_0() {
}

int32_t inst_6_flags_var_0() {
}

int32_t inst_7_values_var_0() {
}

int32_t inst_7_flags_var_0() {
}

int32_t inst_8_values_var_0() {
}

int32_t inst_8_flags_var_0() {
}

int32_t inst_9_flags_var_0() {
}

int32_t inst_10_flags_var_0() {
}

int32_t inst_11_flags_var_0() {
}

int32_t inst_15_flags_var_0() {
}

int32_t inst_16_values_var_0() {
}

int32_t inst_17_values_var_0() {
}

int32_t inst_17_flags_var_0() {
}

int32_t inst_18_flags_var_0() {
}

int32_t inst_19_values_var_0() {
}

int32_t inst_19_flags_var_0() {
}

int32_t inst_20_values_var_0() {
    __asm__("rep bsr si, dx");
    return -0xeef864c9 + 0x2c03928d + 0x5e29c213 + 0x45b684b6 - 0x4c27d6c3 - 0x507cc53b - 0x3d26b4eb - 0x71fe8df;
}

int32_t __assert_fail = 0x8049056;

void fun_8049050(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto __assert_fail;
}

int32_t inst_0_flags_var_0() {
    int32_t ebp1;

    __asm__("rep bsf bx, si");
    ebp1 = 0;
    if (1) {
        ebp1 = 1;
    }
    return ebp1;
}

int32_t inst_1_flags_var_0() {
    int32_t ebp1;

    __asm__("rep bsf ecx, edx");
    ebp1 = 0;
    if (1) {
        ebp1 = 1;
    }
    return ebp1;
}

int32_t inst_2_flags_var_0() {
}

int32_t inst_3_values_var_0() {
}

int32_t inst_6_values_var_0() {
}

int32_t inst_9_values_var_0() {
}

int32_t inst_10_values_var_0() {
}

int32_t inst_11_values_var_0() {
}

int32_t inst_12_values_var_0() {
}

int32_t inst_12_flags_var_0() {
}

int32_t inst_13_values_var_0() {
}

int32_t inst_13_flags_var_0() {
}

int32_t inst_14_values_var_0() {
}

int32_t inst_14_flags_var_0() {
}

int32_t inst_15_values_var_0() {
}

int32_t inst_16_flags_var_0() {
}

int32_t inst_18_values_var_0() {
}

int32_t inst_20_flags_var_0() {
    __asm__("rep bsr bx, bp");
    return 0;
}

int32_t inst_21_values_var_0() {
    __asm__("rep bsr edx, eax");
    return -0x53188130 + 0x639cf9b0 - 0x725c5b8b - 0x41065df8 - 0x1490ddd9 + 0x37184fe0 + 0x60b6c173 - 0x2166506f;
}

int32_t inst_21_flags_var_0() {
    __asm__("rep bsr ecx, esi");
    return 0;
}

void fun_8049002() {
    uint48_t v1;
    int16_t ds2;
    int32_t eax3;
    int32_t ebx4;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    eax3 = *reinterpret_cast<int32_t*>(ebx4 + 0x3ff3 - 4);
    if (eax3) {
        eax3();
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

int32_t main();

void fun_80491d2() {
    uint48_t v1;
    int16_t ds2;
    void* esp3;
    void** v4;
    int32_t edx5;
    int32_t eax6;
    int32_t ebx7;
    int32_t ebx8;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 4);
    v4 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(esp3) & 0xfffffff0) - 4 - 4);
    fun_8049207(edx5, v4, eax6);
    ebx7 = ebx8 + 0x3e1c;
    fun_8049040(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2dc0, ebx7 - 0x2d60, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_8049212() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_80492b2() {
    uint48_t v1;
    int16_t ds2;
    int1_t zf3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    zf3 = __TMC_END__ == 0;
    if (!zf3) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        deregister_tm_clones();
        __TMC_END__ = 1;
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void fun_80492e2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    if (1 || 1) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        __assert_fail(0x804d018, 0);
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

struct s0 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s1 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s2 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s3 {
    signed char[1] pad1;
    signed char 0x1;
};

void fun_8049477(int32_t ecx) {
    unsigned char tmp8_2;
    struct s0* eax3;
    signed char bh4;
    int1_t cf5;
    struct s1* eax6;
    struct s2* eax7;
    struct s3* eax8;
    int32_t v9;

    if (ecx - 1) {
        tmp8_2 = reinterpret_cast<unsigned char>(eax3->0x1 + bh4);
        cf5 = tmp8_2 < eax6->0x1;
        eax7->0x1 = tmp8_2;
        if (cf5) {
        }
        if (__intrinsic()) {
        }
        if (eax8->0x1 < 0) {
        }
        goto v9;
    } else {
        return;
    }
}

void fun_80494c1(int32_t ecx) {
    if (ecx - 1) 
        goto 0x8049503;
    return;
}

int32_t fun_6854b();

void fun_804953a(int32_t ecx) {
    int1_t cf2;
    int1_t of3;
    int1_t sf4;
    int32_t v5;
    int32_t v6;

    if (ecx - 1) {
        if (cf2) {
        }
        if (of3) {
        }
        if (sf4) {
        }
        goto v5;
    } else {
        __asm__("rep fld qword [ecx]");
        __asm__("fadd dword [ecx]");
        __asm__("enter 0xd001, 0x1");
        fun_6854b();
        goto v6;
    }
}

void fun_8049584(int32_t ecx) {
    if (ecx - 1) 
        goto 0x80495e6;
    __asm__("rep fidivr word [ebp+0x0]");
}

int32_t fun_6860e();

void fun_80495fd(int32_t ecx) {
    int1_t of2;
    int1_t sf3;
    int32_t v4;
    int32_t v5;

    if (ecx - 1) {
        if (of2) {
        }
        if (sf3) {
        }
        goto v4;
    } else {
        __asm__("rep rol byte [ecx], cl");
        __asm__("fadd dword [ecx]");
        __asm__("enter 0xd001, 0x1");
        fun_6860e();
        goto v5;
    }
}

void fun_8049647(int32_t ecx) {
    int32_t ecx2;
    void* ebp3;
    int32_t* ebp4;
    int32_t* ebp5;

    ecx2 = ecx - 1;
    if (ecx2) {
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp3) + 4 + 2 + 4 + 4 + 4 + 4 + 4);
    } else {
        *ebp4 = *ebp5 >> *reinterpret_cast<signed char*>(&ecx2);
        if (__intrinsic()) {
        }
    }
}

void fun_80496c0(int32_t ecx) {
    int1_t sf2;
    int32_t v3;

    if (!(ecx - 1)) 
        goto "???";
    if (sf2) {
    }
    goto v3;
}

struct s4 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s5 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s6 {
    signed char[1] pad1;
    unsigned char 0x1;
};

void fun_804970a(int32_t ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    unsigned char tmp8_5;
    struct s4* eax6;
    signed char bh7;
    int1_t cf8;
    struct s5* eax9;
    struct s6* eax10;

    if (ecx - 1) 
        goto 0x804974c;
    __asm__("rep retf 0xbd");
    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    tmp8_5 = reinterpret_cast<unsigned char>(eax6->0x1 + bh7);
    cf8 = tmp8_5 < eax9->0x1;
    eax10->0x1 = tmp8_5;
    if (cf8) {
    }
    if (__intrinsic()) {
    }
}

struct s7 {
    signed char[1] pad1;
    signed char 0x1;
};

struct s8 {
    signed char[1] pad1;
    unsigned char 0x1;
};

struct s9 {
    signed char[1] pad1;
    unsigned char 0x1;
};

void fun_8049783(int32_t ecx) {
    unsigned char tmp8_2;
    struct s7* eax3;
    signed char bh4;
    int1_t cf5;
    struct s8* eax6;
    struct s9* eax7;
    int32_t v8;
    int32_t v9;

    if (ecx - 1) {
        tmp8_2 = reinterpret_cast<unsigned char>(eax3->0x1 + bh4);
        cf5 = tmp8_2 < eax6->0x1;
        eax7->0x1 = tmp8_2;
        if (cf5) {
        }
        if (__intrinsic()) {
        }
        goto v8;
    } else {
        goto v9;
    }
}

void fun_80497cd(int32_t ecx) {
    if (ecx - 1) 
        goto 0x8049817;
}

void fun_804983e(int32_t ecx) {
    int1_t sf2;
    int32_t v3;
    int32_t v4;

    if (ecx - 1) {
        if (sf2) {
        }
        goto v3;
    } else {
        __asm__("rol dword [ecx], 0xd8");
        goto v4;
    }
}

int32_t fun_68912();

void fun_8049888(int32_t ecx) {
    int32_t v2;
    int1_t cf3;
    int1_t of4;

    if (ecx - 1) {
        __asm__("fadd dword [ecx]");
        __asm__("enter 0xd001, 0x1");
        fun_68912();
        goto v2;
    } else {
        if (!cf3) {
        }
        if (of4) {
        }
    }
}

void fun_8049901(int32_t ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    int32_t v8;

    if (!(ecx - 1)) 
        goto "???";
    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    goto v8;
}

void fun_804994b(int32_t ecx) {
    if (ecx - 1) 
        goto 0x80499a0;
}

void fun_80499ac(int32_t ecx) {
    int32_t v2;
    int32_t v3;

    if (ecx - 1) {
        goto v2;
    } else {
        __asm__("into ");
        goto v3;
    }
}

void fun_80499f6(int32_t ecx) {
    int32_t v2;

    if (ecx - 1) 
        goto 0x8049a3b;
    goto v2;
}

void fun_8049a57(int32_t ecx) {
    int32_t v2;

    if (ecx - 1) 
        goto 0x8049acb;
    goto v2;
}

void fun_8049aa1(int32_t ecx) {
    if (ecx - 1) 
        goto 0x8049aed;
    __asm__("lds edi, [ebp+0x0]");
}

void fun_8049b02(int32_t ecx, int32_t a2, int32_t a3) {
    uint112_t v2;
    int32_t v3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 4) = a2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 8) = a3;
    if (ecx) {
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 8);
    } else {
        goto v3;
    }
}

void fun_8049b4d(int32_t ecx, int32_t a2) {
    if (ecx) {
        goto a2;
    } else {
        return;
    }
}

void fun_8049baf(int32_t ecx, int32_t a2) {
    uint80_t v2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 4) = a2;
    if (ecx - 1) {
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 4);
    }
}

void fun_8049bf9(int32_t ecx, int32_t a2) {
    uint80_t v2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 4) = a2;
    if (ecx - 1) {
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 4);
    }
}

void fun_8049c5a(int32_t ecx, int32_t a2, int32_t a3) {
    uint112_t v2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 4) = a2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 8) = a3;
    if (ecx - 1) {
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 8);
    }
}

void fun_8049ca4(int32_t ecx) {
    int32_t v2;
    signed char* edi3;
    signed char* edi4;
    signed char bh5;

    if (ecx - 1) {
        goto v2;
    } else {
        *edi3 = reinterpret_cast<signed char>(*edi4 + bh5);
    }
}

void fun_8049d05(int32_t ecx) {
    signed char* edi2;
    signed char* edi3;
    signed char bh4;
    int32_t v5;

    if (ecx - 1) {
        *edi2 = reinterpret_cast<signed char>(*edi3 + bh4);
        goto v5;
    }
}

void fun_8049d4f(int32_t ecx) {
    if (ecx - 1) 
        goto 0x8049d9c;
}

int32_t fun_68dc1();

void fun_8049db1(signed char* ecx) {
    int32_t v2;

    *ecx = reinterpret_cast<signed char>(*ecx + 1);
    __asm__("fadd dword [ecx]");
    __asm__("enter 0xd001, 0x1");
    fun_68dc1();
    goto v2;
}

void fun_8049dfb() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    int32_t v7;

    __asm__("int 0xbd");
    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    if (__intrinsic()) {
    }
    goto v7;
}

void fun_8049e64() {
}

void fun_8049eae() {
}

void fun_8049eb1() {
    int1_t cf1;
    int32_t v2;

    if (cf1) {
    }
    goto v2;
}

int32_t fun_68f27();

void fun_8049f17() {
    int32_t v1;

    __asm__("int 0x1");
    __asm__("fadd dword [ecx]");
    __asm__("enter 0xd001, 0x1");
    fun_68f27();
    goto v1;
}

void fun_8049f61() {
    __asm__("hlt ");
}

void fun_8049fc3(int32_t ecx) {
    int32_t v2;

    __asm__("in eax, dx");
    goto v2;
}

void fun_804a00e(signed char cl) {
    int32_t v2;

    __asm__("lds edi, [ebp+0x0]");
    goto v2;
}

void fun_804a06f(int32_t ecx) {
    int32_t v2;

    __asm__("xlatb ");
    goto v2;
}

void fun_804a0b9(signed char cl) {
    int32_t v2;

    __asm__("in eax, dx");
    goto v2;
}

void _init();

void fun_804a242() {
    uint64_t v1;
    int16_t ds2;
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t v6;
    int32_t esi7;
    int32_t edi8;
    int32_t esi9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x2db3;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804a25f);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804a2a2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804a2aa() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804903c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8049257() {
}

void fun_80492a4() {
}

void fun_80492d1() {
}

void fun_804947d(int32_t ecx) {
    int32_t v2;

    goto v2;
}

void fun_80494c7() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
}

void fun_80499fe() {
    signed char* edi1;
    signed char* edi2;
    signed char bh3;

    *edi1 = reinterpret_cast<signed char>(*edi2 + bh3);
}

void fun_8049b53() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_8049e6b() {
    int32_t v1;

    goto v1;
}

void fun_8049f64() {
    int32_t v1;

    goto v1;
}

void fun_804a29d() {
}

int32_t g804d008 = 0;

void fun_8049046() {
    goto g804d008;
}

void fun_8049261() {
}

void fun_80492a9() {
}

void fun_80492d9() {
}

void fun_8049056() {
    goto 0x8049030;
}

int32_t main() {
    int32_t eax1;
    int32_t eax2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    int32_t eax18;
    int32_t eax19;
    int32_t eax20;
    int32_t eax21;
    int32_t eax22;
    int32_t eax23;
    int32_t eax24;
    int32_t eax25;
    int32_t eax26;
    int32_t eax27;
    int32_t eax28;
    int32_t eax29;
    int32_t eax30;
    int32_t eax31;
    int32_t eax32;
    int32_t eax33;
    int32_t eax34;
    int32_t eax35;
    int32_t eax36;
    int32_t eax37;
    int32_t eax38;
    int32_t eax39;
    int32_t eax40;
    int32_t eax41;
    int32_t eax42;
    int32_t eax43;
    int32_t eax44;

    eax1 = inst_0_values_var_0();
    eax2 = inst_0_flags_var_0();
    eax3 = inst_1_values_var_0();
    eax4 = inst_1_flags_var_0();
    eax5 = inst_2_values_var_0();
    eax6 = inst_2_flags_var_0();
    eax7 = inst_3_values_var_0();
    eax8 = inst_3_flags_var_0();
    eax9 = inst_4_values_var_0();
    eax10 = inst_4_flags_var_0();
    eax11 = inst_5_values_var_0();
    eax12 = inst_5_flags_var_0();
    eax13 = inst_6_values_var_0();
    eax14 = inst_6_flags_var_0();
    eax15 = inst_7_values_var_0();
    eax16 = inst_7_flags_var_0();
    eax17 = inst_8_values_var_0();
    eax18 = inst_8_flags_var_0();
    eax19 = inst_9_values_var_0();
    eax20 = inst_9_flags_var_0();
    eax21 = inst_10_values_var_0();
    eax22 = inst_10_flags_var_0();
    eax23 = inst_11_values_var_0();
    eax24 = inst_11_flags_var_0();
    eax25 = inst_12_values_var_0();
    eax26 = inst_12_flags_var_0();
    eax27 = inst_13_values_var_0();
    eax28 = inst_13_flags_var_0();
    eax29 = inst_14_values_var_0();
    eax30 = inst_14_flags_var_0();
    eax31 = inst_15_values_var_0();
    eax32 = inst_15_flags_var_0();
    eax33 = inst_16_values_var_0();
    eax34 = inst_16_flags_var_0();
    eax35 = inst_17_values_var_0();
    eax36 = inst_17_flags_var_0();
    eax37 = inst_18_values_var_0();
    eax38 = inst_18_flags_var_0();
    eax39 = inst_19_values_var_0();
    eax40 = inst_19_flags_var_0();
    eax41 = inst_20_values_var_0();
    eax42 = inst_20_flags_var_0();
    eax43 = inst_21_values_var_0();
    eax44 = inst_21_flags_var_0();
    if (eax1 + eax2 + eax3 + eax4 + eax5 + eax6 + eax7 + eax8 + eax9 + eax10 + eax11 + eax12 + eax13 + eax14 + eax15 + eax16 + eax17 + eax18 + eax19 + eax20 + eax21 + eax22 + eax23 + eax24 + eax25 + eax26 + eax27 + eax28 + eax29 + eax30 + eax31 + eax32 + eax33 + eax34 + eax35 + eax36 + eax37 + eax38 + eax39 + eax40 + eax41 + eax42 + eax43 + eax44) {
        fun_8049050("sum==0", "source_extensions_inst__1_var__no_complex.c", 99, "main");
    } else {
        return 0;
    }
}
