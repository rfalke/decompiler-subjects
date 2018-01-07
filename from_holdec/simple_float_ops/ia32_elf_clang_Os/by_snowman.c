
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

uint32_t fun_80482e0(int32_t a1, uint32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    goto printf;
}

int32_t main();

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482f0(main, __return_address(), esp1, __libc_csu_init, 0x80488d0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
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

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

uint32_t use(int32_t a1, int32_t a2) {
    int32_t* edi3;
    int32_t* esi4;
    struct s0* edi5;
    struct s1* esi6;
    uint32_t v7;
    int32_t v8;
    uint32_t eax9;

    *edi3 = *esi4;
    edi5->f4 = esi6->f4;
    eax9 = fun_80482e0("%f", v7, v8, __return_address(), a1, a2);
    return eax9;
}

uint32_t use_int() {
    int32_t v1;
    int32_t v2;
    int32_t v3;
    int32_t v4;
    uint32_t eax5;

    eax5 = fun_80482e0("%d", __return_address(), v1, v2, v3, v4);
    return eax5;
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

int32_t read_floats() {
    int32_t* edi1;
    int32_t* esi2;
    uint32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;

    __asm__("cvtss2sd xmm0, [0x804a038]");
    __asm__("xorpd xmm1, xmm1");
    __asm__("addsd xmm1, xmm0");
    __asm__("addsd xmm1, [0x804a040]");
    __asm__("fld tword [0x804a048]");
    *edi1 = *esi2;
    __asm__("fadd qword [esp+0x10]");
    __asm__("fstp qword [esp+0x4]");
    fun_80482e0("%f", v3, v4, v5, v6, v7);
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
    __asm__("cvtsd2ss xmm0, [0x804a040]");
    __asm__("movss [0x804a038], xmm0");
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
    signed char[4] pad4;
    int32_t f4;
};

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
    int32_t f0;
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

int32_t compare_floats(int32_t a1, int32_t a2) {
    int32_t* edi3;
    int32_t* esi4;
    struct s8* edi5;
    struct s9* edi6;
    struct s10* esi7;
    struct s11* esi8;
    struct s12* edi9;
    struct s13* esi10;
    uint32_t eax11;
    int32_t ebx12;
    uint32_t eax13;
    struct s14* edi14;
    struct s15* esi15;
    struct s16* edi16;
    struct s17* esi17;

    *edi3 = *esi4;
    edi5 = reinterpret_cast<struct s8*>(&edi6->f4);
    esi7 = reinterpret_cast<struct s10*>(&esi8->f4);
    edi5->f0 = esi7->f0;
    edi9 = reinterpret_cast<struct s12*>(&edi5->f4);
    esi10 = reinterpret_cast<struct s13*>(&esi7->f4);
    __asm__("movd eax, xmm0");
    eax13 = fun_80482e0("%d", eax11 & 1, ebx12, __return_address(), a1, a2);
    edi9->f0 = esi10->f0;
    edi14 = reinterpret_cast<struct s14*>(&edi9->f4);
    esi15 = reinterpret_cast<struct s15*>(&esi10->f4);
    edi14->f0 = esi15->f0;
    edi16 = reinterpret_cast<struct s16*>(&edi14->f4);
    esi17 = reinterpret_cast<struct s17*>(&esi15->f4);
    __asm__("movd eax, xmm0");
    fun_80482e0("%d", eax13 & 1, ebx12, __return_address(), a1, a2);
    edi16->f0 = esi17->f0;
    __asm__("ucomisd xmm0, [esp+0x18]");
    fun_80482e0("%d", 0, ebx12, __return_address(), a1, a2);
    fun_80482e0("%d", 1, ebx12, __return_address(), a1, a2);
    edi16->f4 = esi17->f4;
    __asm__("ucomisd xmm0, [esp+0x10]");
    fun_80482e0("%d", 0, ebx12, __return_address(), a1, a2);
    fun_80482e0("%d", 1, ebx12, __return_address(), a1, a2);
    return 0x7c;
}

struct s18 {
    int32_t f0;
    int32_t f4;
};

struct s19 {
    signed char[4] pad4;
    int32_t f4;
};

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    signed char[4] pad4;
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

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    int32_t f0;
    int32_t f4;
};

struct s30 {
    int32_t f0;
    int32_t f4;
};

struct s31 {
    int32_t f0;
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

int32_t constants(int32_t a1, int32_t a2) {
    int32_t* edi3;
    int32_t* esi4;
    struct s18* edi5;
    struct s19* edi6;
    struct s20* esi7;
    struct s21* esi8;
    struct s22* edi9;
    struct s23* esi10;
    uint32_t v11;
    int32_t v12;
    struct s24* edi13;
    struct s25* esi14;
    struct s26* edi15;
    struct s27* esi16;
    uint32_t v17;
    int32_t v18;
    struct s28* edi19;
    struct s29* esi20;
    struct s30* edi21;
    struct s31* esi22;
    uint32_t v23;
    int32_t v24;
    struct s32* edi25;
    struct s33* esi26;
    struct s34* edi27;
    struct s35* esi28;
    uint32_t v29;
    int32_t v30;
    uint32_t v31;
    int32_t v32;

    *edi3 = *esi4;
    edi5 = reinterpret_cast<struct s18*>(&edi6->f4);
    esi7 = reinterpret_cast<struct s20*>(&esi8->f4);
    __asm__("addsd xmm0, xmm0");
    edi5->f0 = esi7->f0;
    edi9 = reinterpret_cast<struct s22*>(&edi5->f4);
    esi10 = reinterpret_cast<struct s23*>(&esi7->f4);
    fun_80482e0("%f", v11, v12, __return_address(), a1, a2);
    edi9->f0 = esi10->f0;
    edi13 = reinterpret_cast<struct s24*>(&edi9->f4);
    esi14 = reinterpret_cast<struct s25*>(&esi10->f4);
    __asm__("mulsd xmm0, [esp+0x10]");
    edi13->f0 = esi14->f0;
    edi15 = reinterpret_cast<struct s26*>(&edi13->f4);
    esi16 = reinterpret_cast<struct s27*>(&esi14->f4);
    fun_80482e0("%f", v17, v18, __return_address(), a1, a2);
    edi15->f0 = esi16->f0;
    edi19 = reinterpret_cast<struct s28*>(&edi15->f4);
    esi20 = reinterpret_cast<struct s29*>(&esi16->f4);
    __asm__("mulsd xmm0, [esp+0x10]");
    edi19->f0 = esi20->f0;
    edi21 = reinterpret_cast<struct s30*>(&edi19->f4);
    esi22 = reinterpret_cast<struct s31*>(&esi20->f4);
    fun_80482e0("%f", v23, v24, __return_address(), a1, a2);
    edi21->f0 = esi22->f0;
    edi25 = reinterpret_cast<struct s32*>(&edi21->f4);
    esi26 = reinterpret_cast<struct s33*>(&esi22->f4);
    __asm__("mulsd xmm0, [esp+0x10]");
    edi25->f0 = esi26->f0;
    edi27 = reinterpret_cast<struct s34*>(&edi25->f4);
    esi28 = reinterpret_cast<struct s35*>(&esi26->f4);
    fun_80482e0("%f", v29, v30, __return_address(), a1, a2);
    edi27->f0 = esi28->f0;
    __asm__("mulsd xmm0, [0x8048928]");
    edi27->f4 = esi28->f4;
    fun_80482e0("%f", v31, v32, __return_address(), a1, a2);
    return 0x7d;
}

int32_t main() {
    int32_t eax1;
    int32_t esi2;

    fun_80482e0("%zu %zu %zu %zu %zu\n", 1, 2, 4, 4, 8);
    fun_80482e0("%zu %zu %zu\n", 4, 8, 12, eax1, esi2);
    return 0;
}

void fun_80488cd() {
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

int32_t read_ints() {
    int32_t* edi1;
    int32_t* esi2;
    uint32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;

    __asm__("cvtsi2sd xmm3, dword [0x804a024]");
    __asm__("cvtsi2sd xmm2, dword [0x804a028]");
    __asm__("cvtsi2sd xmm0, eax");
    __asm__("fild qword [0x804a030]");
    __asm__("fstp qword [esp+0x10]");
    __asm__("cvtsi2sd xmm1, eax");
    __asm__("addsd xmm1, xmm0");
    __asm__("addsd xmm3, xmm1");
    __asm__("addsd xmm2, xmm3");
    __asm__("addsd xmm2, [esp+0x10]");
    *edi1 = *esi2;
    fun_80482e0("%f", v3, v4, v5, v6, v7);
    return 0x78;
}

void converting_between_floats_f2() {
    __asm__("fld tword [0x804a048]");
    __asm__("fstp dword [0x804a038]");
    return;
}

void converting_between_floats_l1() {
    __asm__("fld dword [0x804a038]");
    __asm__("fstp tword [0x804a048]");
    return;
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x1787;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x8048891);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void converting_between_floats_d1() {
    int32_t* edi1;
    int32_t* esi2;

    __asm__("cvtss2sd xmm0, [0x804a038]");
    *edi1 = *esi2;
    return;
}

void converting_between_floats_l2() {
    __asm__("fld qword [0x804a040]");
    __asm__("fstp tword [0x804a048]");
    return;
}

struct s36 {
    int32_t f0;
    int32_t f4;
};

struct s37 {
    signed char[4] pad4;
    int32_t f4;
};

struct s38 {
    int32_t f0;
    int32_t f4;
};

struct s39 {
    signed char[4] pad4;
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

struct s56 {
    int32_t f0;
    int32_t f4;
};

struct s57 {
    int32_t f0;
    int32_t f4;
};

struct s58 {
    int32_t f0;
    int32_t f4;
};

struct s59 {
    int32_t f0;
    int32_t f4;
};

struct s60 {
    int32_t f0;
    int32_t f4;
};

struct s61 {
    int32_t f0;
    int32_t f4;
};

struct s62 {
    int32_t f0;
    int32_t f4;
};

struct s63 {
    int32_t f0;
    int32_t f4;
};

int32_t basic_operations(int32_t a1, int32_t a2) {
    int32_t* edi3;
    int32_t* esi4;
    struct s36* edi5;
    struct s37* edi6;
    struct s38* esi7;
    struct s39* esi8;
    struct s40* edi9;
    struct s41* esi10;
    uint32_t v11;
    int32_t v12;
    struct s42* edi13;
    struct s43* esi14;
    struct s44* edi15;
    struct s45* esi16;
    uint32_t v17;
    int32_t v18;
    struct s46* edi19;
    struct s47* esi20;
    struct s48* edi21;
    struct s49* esi22;
    struct s50* edi23;
    struct s51* esi24;
    uint32_t v25;
    int32_t v26;
    struct s52* edi27;
    struct s53* esi28;
    struct s54* edi29;
    struct s55* esi30;
    uint32_t v31;
    int32_t v32;
    struct s56* edi33;
    struct s57* esi34;
    struct s58* edi35;
    struct s59* esi36;
    uint32_t v37;
    int32_t v38;
    struct s60* edi39;
    struct s61* esi40;
    struct s62* edi41;
    struct s63* esi42;
    uint32_t v43;
    int32_t v44;
    uint32_t v45;
    int32_t v46;

    *edi3 = *esi4;
    edi5 = reinterpret_cast<struct s36*>(&edi6->f4);
    esi7 = reinterpret_cast<struct s38*>(&esi8->f4);
    __asm__("addsd xmm0, [esp+0x18]");
    edi5->f0 = esi7->f0;
    edi9 = reinterpret_cast<struct s40*>(&edi5->f4);
    esi10 = reinterpret_cast<struct s41*>(&esi7->f4);
    fun_80482e0("%f", v11, v12, __return_address(), a1, a2);
    edi9->f0 = esi10->f0;
    edi13 = reinterpret_cast<struct s42*>(&edi9->f4);
    esi14 = reinterpret_cast<struct s43*>(&esi10->f4);
    __asm__("subsd xmm0, [esp+0x18]");
    edi13->f0 = esi14->f0;
    edi15 = reinterpret_cast<struct s44*>(&edi13->f4);
    esi16 = reinterpret_cast<struct s45*>(&esi14->f4);
    fun_80482e0("%f", v17, v18, __return_address(), a1, a2);
    edi15->f0 = esi16->f0;
    edi19 = reinterpret_cast<struct s46*>(&edi15->f4);
    esi20 = reinterpret_cast<struct s47*>(&esi16->f4);
    edi19->f0 = esi20->f0;
    edi21 = reinterpret_cast<struct s48*>(&edi19->f4);
    esi22 = reinterpret_cast<struct s49*>(&esi20->f4);
    __asm__("subsd xmm0, xmm1");
    edi21->f0 = esi22->f0;
    edi23 = reinterpret_cast<struct s50*>(&edi21->f4);
    esi24 = reinterpret_cast<struct s51*>(&esi22->f4);
    fun_80482e0("%f", v25, v26, __return_address(), a1, a2);
    edi23->f0 = esi24->f0;
    edi27 = reinterpret_cast<struct s52*>(&edi23->f4);
    esi28 = reinterpret_cast<struct s53*>(&esi24->f4);
    __asm__("mulsd xmm0, [esp+0x18]");
    edi27->f0 = esi28->f0;
    edi29 = reinterpret_cast<struct s54*>(&edi27->f4);
    esi30 = reinterpret_cast<struct s55*>(&esi28->f4);
    fun_80482e0("%f", v31, v32, __return_address(), a1, a2);
    edi29->f0 = esi30->f0;
    edi33 = reinterpret_cast<struct s56*>(&edi29->f4);
    esi34 = reinterpret_cast<struct s57*>(&esi30->f4);
    __asm__("divsd xmm0, [esp+0x18]");
    edi33->f0 = esi34->f0;
    edi35 = reinterpret_cast<struct s58*>(&edi33->f4);
    esi36 = reinterpret_cast<struct s59*>(&esi34->f4);
    fun_80482e0("%f", v37, v38, __return_address(), a1, a2);
    edi35->f0 = esi36->f0;
    edi39 = reinterpret_cast<struct s60*>(&edi35->f4);
    esi40 = reinterpret_cast<struct s61*>(&esi36->f4);
    edi39->f0 = esi40->f0;
    edi41 = reinterpret_cast<struct s62*>(&edi39->f4);
    esi42 = reinterpret_cast<struct s63*>(&esi40->f4);
    __asm__("divsd xmm1, xmm0");
    edi41->f0 = esi42->f0;
    fun_80482e0("%f", v43, v44, __return_address(), a1, a2);
    edi41->f4 = esi42->f4;
    __asm__("xorpd xmm0, [0x8048900]");
    __asm__("movlpd [esp+0x4], xmm0");
    fun_80482e0("%f", v45, v46, __return_address(), a1, a2);
    return 0x7b;
}
