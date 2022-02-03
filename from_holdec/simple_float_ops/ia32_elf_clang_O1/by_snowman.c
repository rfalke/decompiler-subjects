
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_8048300();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x1d4b - 4)) {
        fun_8048300();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0;

void fun_8048300() {
    goto __gmon_start__;
}

int32_t __libc_start_main = 0x80482f6;

void fun_80482f0(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t __libc_start_main(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;

    eax1 = 3;
    if (!1 && (eax1 = 0, !1)) {
        eax1 = __libc_start_main(0x804a054, v2);
    }
    return eax1;
}

int32_t printf = 0x80482e6;

uint32_t fun_80482e0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    goto printf;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

uint32_t use(int32_t ecx, int32_t a2, int32_t a3) {
    int32_t* edi4;
    int32_t* esi5;
    struct s0* edi6;
    struct s1* esi7;
    int32_t v8;
    int32_t v9;
    uint32_t eax10;

    *edi4 = *esi5;
    edi6->f4 = esi7->f4;
    eax10 = fun_80482e0("%f", v8, v9, __return_address(), a2, a3);
    return eax10;
}

uint32_t use_int(uint32_t a1) {
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    uint32_t eax6;

    eax6 = fun_80482e0("%d", __return_address(), v2, v3, v4, v5);
    return eax6;
}

int32_t main();

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482f0(main, __return_address(), esp1, __libc_csu_init, 0x8048880, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_80482dc() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t edx1;
    int32_t v2;
    int32_t eax3;

    edx1 = __JCR_END__;
    if (!(!edx1 || 1)) {
        __libc_start_main(0x8049f10, v2);
    }
    eax3 = 0;
    if (!1 && !1) {
        eax3 = __libc_start_main(0x804a054, 0);
    }
    return eax3;
}

void fun_80483ed() {
}

signed char global_char = 1;

int16_t global_short = 2;

int32_t global_int = 3;

int32_t global_long = 4;

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t g804a034 = 0;

int32_t global_long_long = 5;

int32_t write_ints() {
    int32_t* edi1;
    int32_t* esi2;
    signed char al3;
    int16_t ax4;
    int32_t eax5;
    int32_t eax6;
    struct s2* edi7;
    struct s3* esi8;
    int32_t v9;
    int32_t v10;

    *edi1 = *esi2;
    __asm__("cvttsd2si eax, xmm0");
    global_char = al3;
    global_short = ax4;
    global_int = eax5;
    global_long = eax6;
    edi7->f4 = esi8->f4;
    __asm__("fld qword [esp+0x10]");
    __asm__("fnstcw word [esp+0x6]");
    __asm__("fldcw word [esp+0x6]");
    __asm__("fistp qword [esp+0x8]");
    __asm__("fldcw word [esp+0x6]");
    g804a034 = v9;
    global_long_long = v10;
    return 0x79;
}

int32_t read_floats(int32_t ecx) {
    int32_t* edi2;
    int32_t* esi3;
    int32_t v4;
    int32_t v5;

    __asm__("movss xmm0, [0x804a038]");
    __asm__("xorpd xmm1, xmm1");
    __asm__("cvtss2sd xmm0, xmm0");
    __asm__("addsd xmm1, xmm0");
    __asm__("addsd xmm1, [0x804a040]");
    __asm__("fld tword [0x804a048]");
    *edi2 = *esi3;
    __asm__("fadd qword [esp+0x10]");
    __asm__("fstp qword [esp]");
    use(ecx, v4, v5);
    return 0x7a;
}

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    signed char[4] pad4;
    int32_t f4;
};

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    signed char[4] pad4;
    int32_t f4;
};

void write_floats() {
    int32_t* edi1;
    int32_t* esi2;
    struct s4* edi3;
    struct s5* edi4;
    struct s6* esi5;
    struct s7* esi6;

    *edi1 = *esi2;
    edi3 = reinterpret_cast<struct s4*>(&edi4->f4);
    esi5 = reinterpret_cast<struct s6*>(&esi6->f4);
    __asm__("cvtsd2ss xmm1, xmm0");
    edi3->f0 = esi5->f0;
    __asm__("movss [0x804a038], xmm1");
    edi3->f4 = esi5->f4;
    __asm__("fld qword [esp]");
    __asm__("fstp tword [0x804a048]");
    return;
}

void converting_between_floats_f1() {
    int32_t* edi1;
    int32_t* esi2;

    *edi1 = *esi2;
    __asm__("cvtsd2ss xmm0, xmm0");
    __asm__("movss [0x804a038], xmm0");
    return;
}

void converting_between_floats_f2() {
    __asm__("fld tword [0x804a048]");
    __asm__("fstp dword [0x804a038]");
    return;
}

void converting_between_floats_d2() {
    __asm__("fld tword [0x804a048]");
    __asm__("fstp qword [0x804a040]");
    return;
}

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

int32_t compare_floats() {
    int32_t* edi1;
    int32_t* esi2;
    int32_t* edi3;
    void* edi4;
    int32_t* esi5;
    void* esi6;
    uint32_t eax7;
    uint32_t eax8;
    struct s8* edi9;
    struct s9* esi10;

    *edi1 = *esi2;
    edi3 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi4) + 4 + 4);
    esi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi6) + 4 + 4);
    __asm__("movd eax, xmm0");
    eax8 = use_int(eax7 & 1);
    *edi3 = *esi5;
    edi9 = reinterpret_cast<struct s8*>(edi3 + 1 + 1);
    esi10 = reinterpret_cast<struct s9*>(esi5 + 1 + 1);
    __asm__("movd eax, xmm0");
    use_int(eax8 & 1);
    edi9->f0 = esi10->f0;
    __asm__("ucomisd xmm0, [esp+0x18]");
    use_int(0);
    use_int(1);
    edi9->f4 = esi10->f4;
    __asm__("ucomisd xmm0, [esp+0x10]");
    use_int(0);
    use_int(1);
    return 0x7c;
}

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    signed char[4] pad4;
    int32_t f4;
};

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    signed char[4] pad4;
    int32_t f4;
};

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

struct s18 {
    int32_t f0;
    int32_t f4;
};

struct s19 {
    int32_t f0;
    int32_t f4;
};

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s22 {
    int32_t f0;
    int32_t f4;
};

struct s23 {
    int32_t f0;
    int32_t f4;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    int32_t f0;
    int32_t f4;
};

struct s26 {
    int32_t f0;
    int32_t f4;
};

struct s27 {
    int32_t f0;
    int32_t f4;
};

int32_t constants(int32_t ecx) {
    int32_t* edi2;
    int32_t* esi3;
    struct s10* edi4;
    struct s11* edi5;
    struct s12* esi6;
    struct s13* esi7;
    struct s14* edi8;
    struct s15* esi9;
    int32_t v10;
    int32_t v11;
    struct s16* edi12;
    struct s17* esi13;
    struct s18* edi14;
    struct s19* esi15;
    int32_t v16;
    int32_t v17;
    struct s20* edi18;
    struct s21* esi19;
    struct s22* edi20;
    struct s23* esi21;
    int32_t v22;
    int32_t v23;
    struct s24* edi24;
    struct s25* esi25;
    struct s26* edi26;
    struct s27* esi27;
    int32_t v28;
    int32_t v29;
    int32_t v30;
    int32_t v31;

    *edi2 = *esi3;
    edi4 = reinterpret_cast<struct s10*>(&edi5->f4);
    esi6 = reinterpret_cast<struct s12*>(&esi7->f4);
    __asm__("addsd xmm0, xmm0");
    edi4->f0 = esi6->f0;
    edi8 = reinterpret_cast<struct s14*>(&edi4->f4);
    esi9 = reinterpret_cast<struct s15*>(&esi6->f4);
    use(ecx, v10, v11);
    edi8->f0 = esi9->f0;
    edi12 = reinterpret_cast<struct s16*>(&edi8->f4);
    esi13 = reinterpret_cast<struct s17*>(&esi9->f4);
    __asm__("mulsd xmm0, [esp+0x10]");
    edi12->f0 = esi13->f0;
    edi14 = reinterpret_cast<struct s18*>(&edi12->f4);
    esi15 = reinterpret_cast<struct s19*>(&esi13->f4);
    use(ecx, v16, v17);
    edi14->f0 = esi15->f0;
    edi18 = reinterpret_cast<struct s20*>(&edi14->f4);
    esi19 = reinterpret_cast<struct s21*>(&esi15->f4);
    __asm__("mulsd xmm0, [esp+0x10]");
    edi18->f0 = esi19->f0;
    edi20 = reinterpret_cast<struct s22*>(&edi18->f4);
    esi21 = reinterpret_cast<struct s23*>(&esi19->f4);
    use(ecx, v22, v23);
    edi20->f0 = esi21->f0;
    edi24 = reinterpret_cast<struct s24*>(&edi20->f4);
    esi25 = reinterpret_cast<struct s25*>(&esi21->f4);
    __asm__("mulsd xmm0, [esp+0x10]");
    edi24->f0 = esi25->f0;
    edi26 = reinterpret_cast<struct s26*>(&edi24->f4);
    esi27 = reinterpret_cast<struct s27*>(&esi25->f4);
    use(ecx, v28, v29);
    edi26->f0 = esi27->f0;
    __asm__("mulsd xmm0, [0x80488d8]");
    edi26->f4 = esi27->f4;
    use(ecx, v30, v31);
    return 0x7d;
}

int32_t main() {
    int32_t v1;
    int32_t v2;

    fun_80482e0("%zu %zu %zu %zu %zu\n", 1, 2, 4, 4, 8);
    fun_80482e0("%zu %zu %zu\n", 4, 8, 12, v1, v2);
    return 0;
}

void fun_804887d() {
    return;
}

int32_t g804a008 = 0;

void fun_80482f6() {
    goto g804a008;
}

void fun_804837c() {
}

signed char __TMC_END__ = 0;

int32_t fun_80483b5() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

void fun_80482e6() {
    goto 0x80482d0;
}

void converting_between_floats_d1() {
    int32_t* edi1;
    int32_t* esi2;

    __asm__("movss xmm0, [0x804a038]");
    __asm__("cvtss2sd xmm0, xmm0");
    *edi1 = *esi2;
    return;
}

void converting_between_floats_l1() {
    __asm__("fld dword [0x804a038]");
    __asm__("fstp tword [0x804a048]");
    return;
}

int32_t read_ints() {
    int32_t ecx1;
    int32_t* edi2;
    int32_t* esi3;
    int32_t v4;
    int32_t v5;

    ecx1 = global_short;
    __asm__("cvtsi2sd xmm3, dword [0x804a024]");
    __asm__("cvtsi2sd xmm2, dword [0x804a028]");
    __asm__("fild qword [0x804a030]");
    __asm__("fstp qword [esp+0x10]");
    __asm__("cvtsi2sd xmm0, eax");
    __asm__("cvtsi2sd xmm1, ecx");
    __asm__("addsd xmm1, xmm0");
    __asm__("addsd xmm3, xmm1");
    __asm__("addsd xmm2, xmm3");
    __asm__("addsd xmm2, [esp+0x10]");
    *edi2 = *esi3;
    use(ecx1, v4, v5);
    return 0x78;
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x17d7;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x8048841);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void converting_between_floats_l2() {
    __asm__("fld qword [0x804a040]");
    __asm__("fstp tword [0x804a048]");
    return;
}

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    signed char[4] pad4;
    int32_t f4;
};

struct s30 {
    int32_t f0;
    int32_t f4;
};

struct s31 {
    signed char[4] pad4;
    int32_t f4;
};

struct s32 {
    int32_t f0;
    int32_t f4;
};

struct s33 {
    int32_t f0;
    int32_t f4;
};

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

struct s36 {
    int32_t f0;
    int32_t f4;
};

struct s37 {
    int32_t f0;
    int32_t f4;
};

struct s38 {
    int32_t f0;
    int32_t f4;
};

struct s39 {
    int32_t f0;
    int32_t f4;
};

struct s40 {
    int32_t f0;
    int32_t f4;
};

struct s41 {
    int32_t f0;
    int32_t f4;
};

struct s42 {
    int32_t f0;
    int32_t f4;
};

struct s43 {
    int32_t f0;
    int32_t f4;
};

struct s44 {
    int32_t f0;
    int32_t f4;
};

struct s45 {
    int32_t f0;
    int32_t f4;
};

struct s46 {
    int32_t f0;
    int32_t f4;
};

struct s47 {
    int32_t f0;
    int32_t f4;
};

struct s48 {
    int32_t f0;
    int32_t f4;
};

struct s49 {
    int32_t f0;
    int32_t f4;
};

struct s50 {
    int32_t f0;
    int32_t f4;
};

struct s51 {
    int32_t f0;
    int32_t f4;
};

struct s52 {
    int32_t f0;
    int32_t f4;
};

struct s53 {
    int32_t f0;
    int32_t f4;
};

struct s54 {
    int32_t f0;
    int32_t f4;
};

struct s55 {
    int32_t f0;
    int32_t f4;
};

int32_t basic_operations(int32_t ecx) {
    int32_t* edi2;
    int32_t* esi3;
    struct s28* edi4;
    struct s29* edi5;
    struct s30* esi6;
    struct s31* esi7;
    struct s32* edi8;
    struct s33* esi9;
    int32_t v10;
    int32_t v11;
    struct s34* edi12;
    struct s35* esi13;
    struct s36* edi14;
    struct s37* esi15;
    int32_t v16;
    int32_t v17;
    struct s38* edi18;
    struct s39* esi19;
    struct s40* edi20;
    struct s41* esi21;
    struct s42* edi22;
    struct s43* esi23;
    int32_t v24;
    int32_t v25;
    struct s44* edi26;
    struct s45* esi27;
    struct s46* edi28;
    struct s47* esi29;
    int32_t v30;
    int32_t v31;
    struct s48* edi32;
    struct s49* esi33;
    struct s50* edi34;
    struct s51* esi35;
    int32_t v36;
    int32_t v37;
    struct s52* edi38;
    struct s53* esi39;
    struct s54* edi40;
    struct s55* esi41;
    int32_t v42;
    int32_t v43;
    int32_t v44;
    int32_t v45;

    *edi2 = *esi3;
    edi4 = reinterpret_cast<struct s28*>(&edi5->f4);
    esi6 = reinterpret_cast<struct s30*>(&esi7->f4);
    __asm__("addsd xmm0, [esp+0x18]");
    edi4->f0 = esi6->f0;
    edi8 = reinterpret_cast<struct s32*>(&edi4->f4);
    esi9 = reinterpret_cast<struct s33*>(&esi6->f4);
    use(ecx, v10, v11);
    edi8->f0 = esi9->f0;
    edi12 = reinterpret_cast<struct s34*>(&edi8->f4);
    esi13 = reinterpret_cast<struct s35*>(&esi9->f4);
    __asm__("subsd xmm0, [esp+0x18]");
    edi12->f0 = esi13->f0;
    edi14 = reinterpret_cast<struct s36*>(&edi12->f4);
    esi15 = reinterpret_cast<struct s37*>(&esi13->f4);
    use(ecx, v16, v17);
    edi14->f0 = esi15->f0;
    edi18 = reinterpret_cast<struct s38*>(&edi14->f4);
    esi19 = reinterpret_cast<struct s39*>(&esi15->f4);
    edi18->f0 = esi19->f0;
    edi20 = reinterpret_cast<struct s40*>(&edi18->f4);
    esi21 = reinterpret_cast<struct s41*>(&esi19->f4);
    __asm__("subsd xmm0, xmm1");
    edi20->f0 = esi21->f0;
    edi22 = reinterpret_cast<struct s42*>(&edi20->f4);
    esi23 = reinterpret_cast<struct s43*>(&esi21->f4);
    use(ecx, v24, v25);
    edi22->f0 = esi23->f0;
    edi26 = reinterpret_cast<struct s44*>(&edi22->f4);
    esi27 = reinterpret_cast<struct s45*>(&esi23->f4);
    __asm__("mulsd xmm0, [esp+0x18]");
    edi26->f0 = esi27->f0;
    edi28 = reinterpret_cast<struct s46*>(&edi26->f4);
    esi29 = reinterpret_cast<struct s47*>(&esi27->f4);
    use(ecx, v30, v31);
    edi28->f0 = esi29->f0;
    edi32 = reinterpret_cast<struct s48*>(&edi28->f4);
    esi33 = reinterpret_cast<struct s49*>(&esi29->f4);
    __asm__("divsd xmm0, [esp+0x18]");
    edi32->f0 = esi33->f0;
    edi34 = reinterpret_cast<struct s50*>(&edi32->f4);
    esi35 = reinterpret_cast<struct s51*>(&esi33->f4);
    use(ecx, v36, v37);
    edi34->f0 = esi35->f0;
    edi38 = reinterpret_cast<struct s52*>(&edi34->f4);
    esi39 = reinterpret_cast<struct s53*>(&esi35->f4);
    edi38->f0 = esi39->f0;
    edi40 = reinterpret_cast<struct s54*>(&edi38->f4);
    esi41 = reinterpret_cast<struct s55*>(&esi39->f4);
    __asm__("divsd xmm1, xmm0");
    edi40->f0 = esi41->f0;
    use(ecx, v42, v43);
    edi40->f4 = esi41->f4;
    __asm__("xorpd xmm0, [0x80488b0]");
    __asm__("movlpd [esp], xmm0");
    use(ecx, v44, v45);
    return 0x7b;
}
