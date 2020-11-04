
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
    __asm__("rep bsf di, ax");
    return -0x19b35979 - 0x3f2e045a + 0x3dab6943 - 0x714501ad + 0x1778fb8f + 0x2c52898c + 0x76714bd4 - 0x2dc18ede;
}

int32_t inst_1_values_var_0() {
    __asm__("rep bsf edx, edi");
    return -0xf3f82083 - 0x6bcddd57 + 0xc2efa04 + 0x46d8b207 + 0x6561eb81 - 0x7dc83cd7 + 0x7ec2ad4f - 0x12c55823;
}

int32_t inst_2_values_var_0() {
}

int32_t inst_2_flags_var_0() {
}

int32_t inst_3_flags_var_0() {
}

int32_t inst_4_values_var_0() {
}

int32_t inst_5_flags_var_0() {
}

int32_t inst_6_values_var_0() {
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

int32_t inst_10_flags_var_0() {
}

int32_t inst_12_values_var_0() {
}

int32_t inst_11_flags_var_0() {
}

int32_t inst_12_flags_var_0() {
}

int32_t inst_14_flags_var_0() {
}

int32_t inst_15_flags_var_0() {
}

int32_t inst_16_values_var_0() {
}

int32_t inst_16_flags_var_0() {
}

int32_t inst_17_values_var_0() {
}

int32_t inst_17_flags_var_0() {
}

int32_t inst_18_values_var_0() {
}

int32_t inst_18_flags_var_0() {
}

int32_t inst_19_values_var_0() {
}

int32_t inst_19_flags_var_0() {
}

int32_t inst_20_values_var_0() {
    __asm__("rep bsr dx, ax");
    return -0xc5831862 - 0x8c9d76a - 0x4d5cf672 - 0x11e7821a - 0x1a0275a0 - 0x22f653cf + 0x27f16f0e + 0x4299409f;
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

    __asm__("rep bsf edx, edx");
    ebp1 = 0;
    if (1) {
        ebp1 = 1;
    }
    return ebp1;
}

int32_t inst_3_values_var_0() {
}

int32_t inst_4_flags_var_0() {
}

int32_t inst_5_values_var_0() {
}

int32_t inst_9_values_var_0() {
}

int32_t inst_9_flags_var_0() {
}

int32_t inst_10_values_var_0() {
}

int32_t inst_11_values_var_0() {
}

int32_t inst_13_values_var_0() {
}

int32_t inst_13_flags_var_0() {
}

int32_t inst_14_values_var_0() {
}

int32_t inst_15_values_var_0() {
}

int32_t inst_20_flags_var_0() {
    __asm__("rep bsr dx, dx");
    return 0;
}

int32_t inst_21_values_var_0() {
    __asm__("rep bsr ebx, edi");
    return -0x23794e63 + 0x3bb8ea - 0xf8ecfe5 - 0x1b9dc457 + 0x629a8102 + 0x7f730bba - 0x5247eba3 - 0x411fbe7a;
}

int32_t inst_21_flags_var_0() {
    __asm__("rep bsr eax, edx");
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
    fun_8049040(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2e10, ebx7 - 0x2db0, edx5, v4, eax6);
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

void fun_804946e(int32_t ecx) {
    int32_t v2;
    int32_t v3;

    if (ecx - 1) {
        goto v2;
    } else {
        goto v3;
    }
}

void fun_80494b6(int32_t ecx) {
    int1_t cf2;
    int1_t of3;
    int1_t sf4;

    if (ecx - 1) 
        goto 0x8049508;
    __asm__("repne salc ");
    if (cf2) {
    }
    if (of3) {
    }
    if (sf4) {
    }
}

int32_t fun_6853e();

void fun_804952d(int32_t ecx) {
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
        __asm__("rep fadd dword [ecx]");
        __asm__("fadd dword [ecx]");
        __asm__("enter 0xd001, 0x1");
        fun_6853e();
        goto v6;
    }
}

int32_t fun_685fd();

void fun_8049575(int32_t ecx) {
    int32_t v2;

    if (ecx - 1) {
        __asm__("fadd dword [ecx]");
        __asm__("enter 0xd001, 0x1");
        fun_685fd();
        goto v2;
    } else {
        __asm__("rep fistp qword [ebp+0x0]");
    }
}

void fun_80495ec(int32_t ecx) {
    if (ecx - 1) 
        goto 0x804962e;
    __asm__("rep rol byte [ecx], 1");
}

int32_t fun_8049634(int32_t ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    unsigned char tmp8_5;
    signed char* eax6;
    signed char al7;
    int1_t cf8;
    unsigned char* eax9;
    unsigned char* eax10;
    int32_t edi11;
    int32_t edx12;
    signed char* eax13;
    int32_t eax14;

    if (!(ecx - 1)) {
        __asm__("rep aad 0xbd");
        *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
        tmp8_5 = reinterpret_cast<unsigned char>(*eax6 + al7);
        cf8 = tmp8_5 < *eax9;
        *eax10 = tmp8_5;
        if (cf8) {
        }
        edi11 = 0;
        if (__intrinsic()) {
            edi11 = 2;
        }
        edx12 = 0;
        if (*eax13 < 0) {
            edx12 = 8;
        }
        eax14 = 1 + edi11 + edx12;
    }
    return eax14;
}

void fun_80496ab(int32_t ecx) {
    int1_t sf2;
    int32_t v3;
    int32_t v4;

    if (ecx - 1) {
        if (sf2) {
        }
        goto v3;
    } else {
        __asm__("rep into ");
        goto v4;
    }
}

void fun_80496f3(int32_t ecx) {
    unsigned char tmp8_2;
    signed char* eax3;
    signed char al4;
    int1_t cf5;
    unsigned char* eax6;
    unsigned char* eax7;

    if (ecx - 1) 
        goto 0x8049745;
    __asm__("rep enter 0xbd, 0x0");
    tmp8_2 = reinterpret_cast<unsigned char>(*eax3 + al4);
    cf5 = tmp8_2 < *eax6;
    *eax7 = tmp8_2;
    if (cf5) {
    }
    if (__intrinsic()) {
    }
}

void fun_804976a(int32_t ecx) {
    int1_t cf2;
    int1_t of3;
    int32_t v4;
    int32_t v5;

    if (ecx - 1) {
        if (cf2) {
        }
        if (of3) {
        }
        goto v4;
    } else {
        goto v5;
    }
}

void fun_80497b2(int32_t ecx) {
    if (ecx - 1) 
        goto 0x80497fc;
}

int32_t fun_68832();

void fun_8049821(int32_t ecx) {
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
        __asm__("rol byte [ecx], 1");
        __asm__("fadd dword [ecx]");
        __asm__("enter 0xd001, 0x1");
        fun_68832();
        goto v5;
    }
}

void fun_8049869(int32_t ecx) {
    int32_t ecx2;
    int32_t* ebp3;
    int32_t* ebp4;

    ecx2 = ecx - 1;
    if (ecx2) 
        goto 0x80498db;
    *ebp3 = *ebp4 >> *reinterpret_cast<signed char*>(&ecx2);
    if (__intrinsic()) {
    }
}

int32_t fun_688f1();

void fun_80498e0(int32_t ecx) {
    int32_t v2;
    int32_t v3;

    if (ecx - 1) {
        goto v2;
    } else {
        __asm__("fadd dword [ecx]");
        __asm__("enter 0xd001, 0x1");
        fun_688f1();
        goto v3;
    }
}

int32_t fun_68998();

void fun_8049928(int32_t ecx) {
    int32_t v2;

    if (ecx - 1) {
        __asm__("rol byte [ecx], 1");
        fun_68998();
        goto v2;
    }
}

void fun_8049987(void* ecx) {
    int32_t* ecx2;
    int32_t v3;

    ecx2 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx) - 1);
    if (ecx2) {
        goto v3;
    } else {
        *ecx2 = 0x1c801d8;
    }
}

void fun_80499cf(int32_t ecx) {
    if (ecx - 1) 
        goto 0x8049a24;
    __asm__("out dx, eax");
}

void fun_8049a2e(int32_t ecx) {
    int32_t v2;
    int32_t v3;

    if (ecx - 1) {
        goto v2;
    } else {
        __asm__("iretd ");
        goto v3;
    }
}

void fun_8049a76(int32_t ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;

    if (ecx - 1) 
        goto 0x8049aba;
    __asm__("aad 0xbd");
    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
}

void fun_8049ad5(int32_t ecx) {
    int32_t v2;

    if (ecx) 
        goto inst_12_values_var_0;
    __asm__("lock fidiv dword [edi]");
    goto v2;
}

void fun_8049b1e(int32_t ecx) {
    signed char* edi2;
    signed char* edi3;
    signed char bh4;
    int32_t v5;

    if (ecx) 
        goto 0x8049b9b;
    __asm__("lock rol byte [ebx+0xbd], 1");
    *edi2 = reinterpret_cast<signed char>(*edi3 + bh4);
    goto v5;
}

void fun_8049b7e(int32_t ecx) {
    int32_t v2;
    int32_t v3;

    if (ecx - 1) {
        goto v2;
    } else {
        goto v3;
    }
}

void fun_8049bc6(int32_t ecx) {
    int32_t v2;

    if (ecx - 1) {
        goto v2;
    }
}

void fun_8049c25(int32_t ecx) {
    int32_t v2;

    if (ecx - 1) {
        goto v2;
    }
}

void fun_8049c6d(int32_t ecx) {
    if (ecx - 1) 
        goto 0x8049cb0;
}

void fun_8049ccc(int32_t ecx) {
    int32_t v2;
    int32_t v3;

    if (ecx - 1) {
        goto v2;
    } else {
        goto v3;
    }
}

void fun_8049d14(int32_t ecx) {
    if (ecx - 1) 
        goto 0x8049d61;
}

void fun_8049d74(int32_t ecx) {
    int32_t v2;

    goto v2;
}

void fun_8049dbc() {
}

void fun_8049dbf() {
    int1_t of1;
    int32_t v2;

    if (of1) {
    }
    goto v2;
}

void fun_8049e23(int32_t ecx) {
    void* ebp2;

    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp2) + 4 + 2 + 4 + 4 + 4 + 4);
}

void fun_8049e6b() {
}

void fun_8049e6e() {
    int1_t cf1;
    int32_t v2;

    if (cf1) {
    }
    goto v2;
}

int32_t fun_68ee2();

void fun_8049ed2() {
    int32_t v1;

    __asm__("rol dword [ecx], cl");
    __asm__("fadd dword [ecx]");
    __asm__("enter 0xd001, 0x1");
    fun_68ee2();
    goto v1;
}

void fun_8049f1a() {
    int32_t v1;

    __asm__("int1 ");
    goto v1;
}

void fun_8049f7a(signed char* ecx) {
    int32_t v2;

    *ecx = -40;
    goto v2;
}

void fun_8049fc3(signed char cl) {
    int32_t* ebp2;
    int32_t* ebp3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    int32_t v10;

    *ebp2 = *ebp3 >> -65;
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    goto v10;
}

void fun_804a022(int32_t ecx) {
    int32_t v2;

    __asm__("in eax, dx");
    goto v2;
}

void fun_804a06a(signed char cl) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* edi5;
    signed char* edi6;
    signed char bh7;
    int32_t v8;

    __asm__("retf 0xbd");
    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *edi5 = reinterpret_cast<signed char>(*edi6 + bh7);
    goto v8;
}

void _init();

void fun_804a1f2() {
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
    ebx3 = ebx4 + 0x2e03;
    ebp5 = v6;
    _init();
    esi7 = ebx3 - 0xf0 - (ebx3 - 0xf4) >> 2;
    if (esi7) {
        edi8 = 0;
        esi9 = esi7;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), ebp5, 0x804a20f);
            ++edi8;
        } while (esi9 != edi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_804a252() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_804a25a() {
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

void fun_804a24d() {
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
