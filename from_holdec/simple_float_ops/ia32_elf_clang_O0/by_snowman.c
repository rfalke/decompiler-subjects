
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

int32_t fun_80482e0(int32_t a1, uint32_t a2, int32_t a3, int32_t a4, int32_t a5, uint32_t a6) {
    goto printf;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

int32_t use() {
    int32_t* edi1;
    int32_t* esi2;
    struct s0* edi3;
    struct s1* edi4;
    struct s2* esi5;
    struct s3* esi6;
    struct s4* edi7;
    struct s5* esi8;
    uint32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    uint32_t v13;
    int32_t eax14;

    *edi1 = *esi2;
    edi3 = reinterpret_cast<struct s0*>(&edi4->f4);
    esi5 = reinterpret_cast<struct s2*>(&esi6->f4);
    edi3->f0 = esi5->f0;
    edi7 = reinterpret_cast<struct s4*>(&edi3->f4);
    esi8 = reinterpret_cast<struct s5*>(&esi5->f4);
    edi7->f0 = esi8->f0;
    edi7->f4 = esi8->f4;
    eax14 = fun_80482e0("%f", v9, v10, v11, v12, v13);
    return eax14;
}

int32_t use_int(uint32_t a1) {
    int32_t v2;
    int32_t v3;
    int32_t v4;
    int32_t eax5;

    eax5 = fun_80482e0("%d", a1, v2, v3, v4, a1);
    return eax5;
}

int32_t main();

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80482f0(main, __return_address(), esp1, __libc_csu_init, 0x8048a90, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
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

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    signed char[4] pad4;
    int32_t f4;
};

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
    int32_t f0;
    int32_t f4;
};

signed char global_char = 1;

int16_t global_short = 2;

int32_t global_int = 3;

int32_t global_long = 4;

int32_t g804a034 = 0;

int32_t global_long_long = 5;

int32_t write_ints(int32_t ecx) {
    int32_t* edi2;
    int32_t* esi3;
    struct s6* edi4;
    struct s7* edi5;
    struct s8* esi6;
    struct s9* esi7;
    struct s10* edi8;
    struct s11* esi9;
    int32_t v10;
    int32_t v11;

    *edi2 = *esi3;
    edi4 = reinterpret_cast<struct s6*>(&edi5->f4);
    esi6 = reinterpret_cast<struct s8*>(&esi7->f4);
    edi4->f0 = esi6->f0;
    edi8 = reinterpret_cast<struct s10*>(&edi4->f4);
    esi9 = reinterpret_cast<struct s11*>(&esi6->f4);
    __asm__("cvttsd2si ecx, xmm0");
    global_char = *reinterpret_cast<signed char*>(&ecx);
    __asm__("cvttsd2si ecx, [ebp-0x10]");
    *reinterpret_cast<int16_t*>(&esi9) = *reinterpret_cast<int16_t*>(&ecx);
    global_short = *reinterpret_cast<int16_t*>(&esi9);
    __asm__("cvttsd2si ecx, [ebp-0x10]");
    global_int = ecx;
    __asm__("cvttsd2si ecx, [ebp-0x10]");
    global_long = ecx;
    edi8->f0 = esi9->f0;
    edi8->f4 = esi9->f4;
    __asm__("fld qword [ebp-0x18]");
    __asm__("fnstcw word [ebp-0x22]");
    __asm__("fldcw word [ebp-0x22]");
    __asm__("fistp qword [ebp-0x20]");
    __asm__("fldcw word [ebp-0x22]");
    g804a034 = v10;
    global_long_long = v11;
    return 0x79;
}

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
    signed char[4] pad4;
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

int32_t read_floats() {
    int32_t* edi1;
    int32_t* esi2;
    struct s12* edi3;
    struct s13* edi4;
    struct s14* esi5;
    struct s15* esi6;
    struct s16* edi7;
    struct s17* esi8;
    struct s18* edi9;
    struct s19* esi10;
    struct s20* edi11;
    struct s21* esi12;
    struct s22* edi13;
    struct s23* esi14;

    __asm__("movss xmm0, [0x804a038]");
    __asm__("cvtss2sd xmm0, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("addsd xmm0, xmm1");
    *edi1 = *esi2;
    edi3 = reinterpret_cast<struct s12*>(&edi4->f4);
    esi5 = reinterpret_cast<struct s14*>(&esi6->f4);
    edi3->f0 = esi5->f0;
    edi7 = reinterpret_cast<struct s16*>(&edi3->f4);
    esi8 = reinterpret_cast<struct s17*>(&esi5->f4);
    __asm__("addsd xmm0, xmm1");
    edi7->f0 = esi8->f0;
    edi9 = reinterpret_cast<struct s18*>(&edi7->f4);
    esi10 = reinterpret_cast<struct s19*>(&esi8->f4);
    __asm__("fld tword [0x804a048]");
    __asm__("fld qword [ebp-0x8]");
    __asm__("faddp st1, st0");
    __asm__("fstp qword [ebp-0x10]");
    edi9->f0 = esi10->f0;
    edi11 = reinterpret_cast<struct s20*>(&edi9->f4);
    esi12 = reinterpret_cast<struct s21*>(&esi10->f4);
    edi11->f0 = esi12->f0;
    edi13 = reinterpret_cast<struct s22*>(&edi11->f4);
    esi14 = reinterpret_cast<struct s23*>(&esi12->f4);
    edi13->f0 = esi14->f0;
    edi13->f4 = esi14->f4;
    use();
    return 0x7a;
}

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    signed char[4] pad4;
    int32_t f4;
};

struct s26 {
    int32_t f0;
    int32_t f4;
};

struct s27 {
    signed char[4] pad4;
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

void write_floats() {
    int32_t* edi1;
    int32_t* esi2;
    struct s24* edi3;
    struct s25* edi4;
    struct s26* esi5;
    struct s27* esi6;
    struct s28* edi7;
    struct s29* esi8;

    *edi1 = *esi2;
    edi3 = reinterpret_cast<struct s24*>(&edi4->f4);
    esi5 = reinterpret_cast<struct s26*>(&esi6->f4);
    edi3->f0 = esi5->f0;
    edi7 = reinterpret_cast<struct s28*>(&edi3->f4);
    esi8 = reinterpret_cast<struct s29*>(&esi5->f4);
    __asm__("cvtsd2ss xmm0, xmm0");
    __asm__("movss [0x804a038], xmm0");
    edi7->f0 = esi8->f0;
    edi7->f4 = esi8->f4;
    __asm__("fld qword [ebp-0x8]");
    __asm__("fstp tword [0x804a048]");
    return;
}

void converting_between_floats_f1() {
    __asm__("cvtsd2ss xmm0, [0x804a040]");
    __asm__("movss [0x804a038], xmm0");
    return;
}

struct s30 {
    signed char[4] pad4;
    int32_t f4;
};

struct s31 {
    signed char[4] pad4;
    int32_t f4;
};

void converting_between_floats_d2() {
    int32_t* edi1;
    int32_t* esi2;
    struct s30* edi3;
    struct s31* esi4;

    __asm__("fld tword [0x804a048]");
    __asm__("fstp qword [ebp-0x8]");
    *edi1 = *esi2;
    edi3->f4 = esi4->f4;
    return;
}

void converting_between_floats_l1() {
    __asm__("fld dword [0x804a038]");
    __asm__("fstp tword [0x804a048]");
    return;
}

struct s32 {
    int32_t f0;
    int32_t f4;
};

struct s33 {
    signed char[4] pad4;
    int32_t f4;
};

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    signed char[4] pad4;
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

int32_t compare_floats() {
    int32_t* edi1;
    int32_t* esi2;
    struct s32* edi3;
    struct s33* edi4;
    struct s34* esi5;
    struct s35* esi6;
    struct s36* edi7;
    struct s37* esi8;
    struct s38* edi9;
    struct s39* esi10;
    struct s40* edi11;
    struct s41* esi12;
    struct s42* edi13;
    struct s43* esi14;
    unsigned char al15;
    struct s44* edi16;
    struct s45* esi17;
    unsigned char al18;
    struct s46* edi19;
    struct s47* esi20;
    struct s48* edi21;
    struct s49* esi22;
    struct s50* edi23;
    struct s51* esi24;
    struct s52* edi25;
    struct s53* esi26;

    *edi1 = *esi2;
    edi3 = reinterpret_cast<struct s32*>(&edi4->f4);
    esi5 = reinterpret_cast<struct s34*>(&esi6->f4);
    edi3->f0 = esi5->f0;
    edi7 = reinterpret_cast<struct s36*>(&edi3->f4);
    esi8 = reinterpret_cast<struct s37*>(&esi5->f4);
    edi7->f0 = esi8->f0;
    edi9 = reinterpret_cast<struct s38*>(&edi7->f4);
    esi10 = reinterpret_cast<struct s39*>(&esi8->f4);
    edi9->f0 = esi10->f0;
    edi11 = reinterpret_cast<struct s40*>(&edi9->f4);
    esi12 = reinterpret_cast<struct s41*>(&esi10->f4);
    edi11->f0 = esi12->f0;
    edi13 = reinterpret_cast<struct s42*>(&edi11->f4);
    esi14 = reinterpret_cast<struct s43*>(&esi12->f4);
    __asm__("ucomisd xmm0, [ebp-0x10]");
    al15 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24 == 0)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(!__intrinsic()))) & 1);
    use_int(static_cast<uint32_t>(al15));
    edi13->f0 = esi14->f0;
    edi16 = reinterpret_cast<struct s44*>(&edi13->f4);
    esi17 = reinterpret_cast<struct s45*>(&esi14->f4);
    __asm__("ucomisd xmm0, [ebp-0x10]");
    al18 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!al15)) | static_cast<unsigned char>(__intrinsic())) & 1);
    use_int(static_cast<uint32_t>(al18));
    edi16->f0 = esi17->f0;
    edi19 = reinterpret_cast<struct s46*>(&edi16->f4);
    esi20 = reinterpret_cast<struct s47*>(&esi17->f4);
    __asm__("ucomisd xmm0, [ebp-0x10]");
    use_int(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(al18 == 0))))) & 1)));
    edi19->f0 = esi20->f0;
    edi21 = reinterpret_cast<struct s48*>(&edi19->f4);
    esi22 = reinterpret_cast<struct s49*>(&esi20->f4);
    __asm__("ucomisd xmm0, [ebp-0x10]");
    use_int(1);
    edi21->f0 = esi22->f0;
    edi23 = reinterpret_cast<struct s50*>(&edi21->f4);
    esi24 = reinterpret_cast<struct s51*>(&esi22->f4);
    edi23->f0 = esi24->f0;
    edi25 = reinterpret_cast<struct s52*>(&edi23->f4);
    esi26 = reinterpret_cast<struct s53*>(&esi24->f4);
    __asm__("ucomisd xmm1, xmm0");
    use_int(1);
    edi25->f0 = esi26->f0;
    edi25->f4 = esi26->f4;
    __asm__("ucomisd xmm1, xmm0");
    use_int(1);
    return 0x7c;
}

struct s54 {
    int32_t f0;
    int32_t f4;
};

struct s55 {
    signed char[4] pad4;
    int32_t f4;
};

struct s56 {
    int32_t f0;
    int32_t f4;
};

struct s57 {
    signed char[4] pad4;
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

struct s64 {
    int32_t f0;
    int32_t f4;
};

struct s65 {
    int32_t f0;
    int32_t f4;
};

struct s66 {
    int32_t f0;
    int32_t f4;
};

struct s67 {
    int32_t f0;
    int32_t f4;
};

struct s68 {
    int32_t f0;
    int32_t f4;
};

struct s69 {
    int32_t f0;
    int32_t f4;
};

struct s70 {
    int32_t f0;
    int32_t f4;
};

struct s71 {
    int32_t f0;
    int32_t f4;
};

struct s72 {
    int32_t f0;
    int32_t f4;
};

struct s73 {
    int32_t f0;
    int32_t f4;
};

struct s74 {
    int32_t f0;
    int32_t f4;
};

struct s75 {
    int32_t f0;
    int32_t f4;
};

int32_t constants() {
    int32_t* edi1;
    int32_t* esi2;
    struct s54* edi3;
    struct s55* edi4;
    struct s56* esi5;
    struct s57* esi6;
    struct s58* edi7;
    struct s59* esi8;
    struct s60* edi9;
    struct s61* esi10;
    struct s62* edi11;
    struct s63* esi12;
    struct s64* edi13;
    struct s65* esi14;
    struct s66* edi15;
    struct s67* esi16;
    struct s68* edi17;
    struct s69* esi18;
    struct s70* edi19;
    struct s71* esi20;
    struct s72* edi21;
    struct s73* esi22;
    struct s74* edi23;
    struct s75* esi24;

    *edi1 = *esi2;
    edi3 = reinterpret_cast<struct s54*>(&edi4->f4);
    esi5 = reinterpret_cast<struct s56*>(&esi6->f4);
    edi3->f0 = esi5->f0;
    edi7 = reinterpret_cast<struct s58*>(&edi3->f4);
    esi8 = reinterpret_cast<struct s59*>(&esi5->f4);
    edi7->f0 = esi8->f0;
    edi9 = reinterpret_cast<struct s60*>(&edi7->f4);
    esi10 = reinterpret_cast<struct s61*>(&esi8->f4);
    __asm__("mulsd xmm1, [ebp-0x8]");
    edi9->f0 = esi10->f0;
    edi11 = reinterpret_cast<struct s62*>(&edi9->f4);
    esi12 = reinterpret_cast<struct s63*>(&esi10->f4);
    use();
    edi11->f0 = esi12->f0;
    edi13 = reinterpret_cast<struct s64*>(&edi11->f4);
    esi14 = reinterpret_cast<struct s65*>(&esi12->f4);
    __asm__("mulsd xmm0, [ebp-0x8]");
    edi13->f0 = esi14->f0;
    edi15 = reinterpret_cast<struct s66*>(&edi13->f4);
    esi16 = reinterpret_cast<struct s67*>(&esi14->f4);
    use();
    edi15->f0 = esi16->f0;
    edi17 = reinterpret_cast<struct s68*>(&edi15->f4);
    esi18 = reinterpret_cast<struct s69*>(&esi16->f4);
    __asm__("mulsd xmm0, [ebp-0x8]");
    edi17->f0 = esi18->f0;
    edi19 = reinterpret_cast<struct s70*>(&edi17->f4);
    esi20 = reinterpret_cast<struct s71*>(&esi18->f4);
    use();
    edi19->f0 = esi20->f0;
    edi21 = reinterpret_cast<struct s72*>(&edi19->f4);
    esi22 = reinterpret_cast<struct s73*>(&esi20->f4);
    __asm__("mulsd xmm0, [ebp-0x8]");
    edi21->f0 = esi22->f0;
    edi23 = reinterpret_cast<struct s74*>(&edi21->f4);
    esi24 = reinterpret_cast<struct s75*>(&esi22->f4);
    use();
    edi23->f0 = esi24->f0;
    __asm__("mulsd xmm0, [ebp-0x8]");
    edi23->f4 = esi24->f4;
    use();
    return 0x7d;
}

int32_t main() {
    fun_80482e0("%zu %zu %zu %zu %zu\n", 1, 2, 4, 4, 8);
    fun_80482e0("%zu %zu %zu\n", 4, 8, 12, 4, 8);
    return 0;
}

void fun_8048a8d() {
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

void converting_between_floats_f2() {
    __asm__("fld tword [0x804a048]");
    __asm__("fstp dword [ebp-0x4]");
    __asm__("movss xmm0, [ebp-0x4]");
    __asm__("movss [0x804a038], xmm0");
    return;
}

void converting_between_floats_l2() {
    __asm__("fld qword [0x804a040]");
    __asm__("fstp tword [0x804a048]");
    return;
}

struct s76 {
    int32_t f0;
    int32_t f4;
};

struct s77 {
    signed char[4] pad4;
    int32_t f4;
};

struct s78 {
    int32_t f0;
    int32_t f4;
};

struct s79 {
    signed char[4] pad4;
    int32_t f4;
};

struct s80 {
    int32_t f0;
    int32_t f4;
};

struct s81 {
    int32_t f0;
    int32_t f4;
};

struct s82 {
    int32_t f0;
    int32_t f4;
};

struct s83 {
    int32_t f0;
    int32_t f4;
};

struct s84 {
    int32_t f0;
    int32_t f4;
};

struct s85 {
    int32_t f0;
    int32_t f4;
};

struct s86 {
    int32_t f0;
    int32_t f4;
};

struct s87 {
    int32_t f0;
    int32_t f4;
};

struct s88 {
    int32_t f0;
    int32_t f4;
};

struct s89 {
    int32_t f0;
    int32_t f4;
};

int32_t read_ints() {
    int32_t* edi1;
    int32_t* esi2;
    struct s76* edi3;
    struct s77* edi4;
    struct s78* esi5;
    struct s79* esi6;
    struct s80* edi7;
    struct s81* esi8;
    struct s82* edi9;
    struct s83* esi10;
    struct s84* edi11;
    struct s85* esi12;
    struct s86* edi13;
    struct s87* esi14;
    struct s88* edi15;
    struct s89* esi16;

    __asm__("cvtsi2sd xmm0, eax");
    __asm__("xorps xmm1, xmm1");
    __asm__("addsd xmm0, xmm1");
    *edi1 = *esi2;
    edi3 = reinterpret_cast<struct s76*>(&edi4->f4);
    esi5 = reinterpret_cast<struct s78*>(&esi6->f4);
    __asm__("cvtsi2sd xmm1, eax");
    __asm__("addsd xmm0, xmm1");
    edi3->f0 = esi5->f0;
    edi7 = reinterpret_cast<struct s80*>(&edi3->f4);
    esi8 = reinterpret_cast<struct s81*>(&esi5->f4);
    __asm__("cvtsi2sd xmm1, dword [0x804a024]");
    __asm__("addsd xmm0, xmm1");
    edi7->f0 = esi8->f0;
    edi9 = reinterpret_cast<struct s82*>(&edi7->f4);
    esi10 = reinterpret_cast<struct s83*>(&esi8->f4);
    __asm__("cvtsi2sd xmm1, dword [0x804a028]");
    __asm__("addsd xmm0, xmm1");
    edi9->f0 = esi10->f0;
    edi11 = reinterpret_cast<struct s84*>(&edi9->f4);
    esi12 = reinterpret_cast<struct s85*>(&esi10->f4);
    __asm__("fild qword [0x804a030]");
    __asm__("fstp qword [ebp-0x10]");
    edi11->f0 = esi12->f0;
    edi13 = reinterpret_cast<struct s86*>(&edi11->f4);
    esi14 = reinterpret_cast<struct s87*>(&esi12->f4);
    __asm__("addsd xmm0, [ebp-0x8]");
    edi13->f0 = esi14->f0;
    edi15 = reinterpret_cast<struct s88*>(&edi13->f4);
    esi16 = reinterpret_cast<struct s89*>(&esi14->f4);
    edi15->f0 = esi16->f0;
    edi15->f4 = esi16->f4;
    use();
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
    ebx3 = ebx4 + 0x15c7;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x8048a51);
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

struct s90 {
    int32_t f0;
    int32_t f4;
};

struct s91 {
    signed char[4] pad4;
    int32_t f4;
};

struct s92 {
    int32_t f0;
    int32_t f4;
};

struct s93 {
    signed char[4] pad4;
    int32_t f4;
};

struct s94 {
    int32_t f0;
    int32_t f4;
};

struct s95 {
    int32_t f0;
    int32_t f4;
};

struct s96 {
    int32_t f0;
    int32_t f4;
};

struct s97 {
    int32_t f0;
    int32_t f4;
};

struct s98 {
    int32_t f0;
    int32_t f4;
};

struct s99 {
    int32_t f0;
    int32_t f4;
};

struct s100 {
    int32_t f0;
    int32_t f4;
};

struct s101 {
    int32_t f0;
    int32_t f4;
};

struct s102 {
    int32_t f0;
    int32_t f4;
};

struct s103 {
    int32_t f0;
    int32_t f4;
};

struct s104 {
    int32_t f0;
    int32_t f4;
};

struct s105 {
    int32_t f0;
    int32_t f4;
};

struct s106 {
    int32_t f0;
    int32_t f4;
};

struct s107 {
    int32_t f0;
    int32_t f4;
};

struct s108 {
    int32_t f0;
    int32_t f4;
};

struct s109 {
    int32_t f0;
    int32_t f4;
};

struct s110 {
    int32_t f0;
    int32_t f4;
};

struct s111 {
    int32_t f0;
    int32_t f4;
};

struct s112 {
    int32_t f0;
    int32_t f4;
};

struct s113 {
    int32_t f0;
    int32_t f4;
};

struct s114 {
    int32_t f0;
    int32_t f4;
};

struct s115 {
    int32_t f0;
    int32_t f4;
};

struct s116 {
    int32_t f0;
    int32_t f4;
};

struct s117 {
    int32_t f0;
    int32_t f4;
};

struct s118 {
    int32_t f0;
    int32_t f4;
};

struct s119 {
    int32_t f0;
    int32_t f4;
};

struct s120 {
    int32_t f0;
    int32_t f4;
};

struct s121 {
    int32_t f0;
    int32_t f4;
};

struct s122 {
    int32_t f0;
    int32_t f4;
};

struct s123 {
    int32_t f0;
    int32_t f4;
};

struct s124 {
    int32_t f0;
    int32_t f4;
};

struct s125 {
    int32_t f0;
    int32_t f4;
};

struct s126 {
    int32_t f0;
    int32_t f4;
};

struct s127 {
    int32_t f0;
    int32_t f4;
};

struct s128 {
    int32_t f0;
    int32_t f4;
};

struct s129 {
    int32_t f0;
    int32_t f4;
};

struct s130 {
    int32_t f0;
    int32_t f4;
};

struct s131 {
    int32_t f0;
    int32_t f4;
};

struct s132 {
    int32_t f0;
    int32_t f4;
};

struct s133 {
    int32_t f0;
    int32_t f4;
};

int32_t basic_operations() {
    int32_t* edi1;
    int32_t* esi2;
    struct s90* edi3;
    struct s91* edi4;
    struct s92* esi5;
    struct s93* esi6;
    struct s94* edi7;
    struct s95* esi8;
    struct s96* edi9;
    struct s97* esi10;
    struct s98* edi11;
    struct s99* esi12;
    struct s100* edi13;
    struct s101* esi14;
    struct s102* edi15;
    struct s103* esi16;
    struct s104* edi17;
    struct s105* esi18;
    struct s106* edi19;
    struct s107* esi20;
    struct s108* edi21;
    struct s109* esi22;
    struct s110* edi23;
    struct s111* esi24;
    struct s112* edi25;
    struct s113* esi26;
    struct s114* edi27;
    struct s115* esi28;
    struct s116* edi29;
    struct s117* esi30;
    struct s118* edi31;
    struct s119* esi32;
    struct s120* edi33;
    struct s121* esi34;
    struct s122* edi35;
    struct s123* esi36;
    struct s124* edi37;
    struct s125* esi38;
    struct s126* edi39;
    struct s127* esi40;
    struct s128* edi41;
    struct s129* esi42;
    struct s130* edi43;
    struct s131* esi44;
    struct s132* edi45;
    struct s133* esi46;

    *edi1 = *esi2;
    edi3 = reinterpret_cast<struct s90*>(&edi4->f4);
    esi5 = reinterpret_cast<struct s92*>(&esi6->f4);
    edi3->f0 = esi5->f0;
    edi7 = reinterpret_cast<struct s94*>(&edi3->f4);
    esi8 = reinterpret_cast<struct s95*>(&esi5->f4);
    edi7->f0 = esi8->f0;
    edi9 = reinterpret_cast<struct s96*>(&edi7->f4);
    esi10 = reinterpret_cast<struct s97*>(&esi8->f4);
    edi9->f0 = esi10->f0;
    edi11 = reinterpret_cast<struct s98*>(&edi9->f4);
    esi12 = reinterpret_cast<struct s99*>(&esi10->f4);
    edi11->f0 = esi12->f0;
    edi13 = reinterpret_cast<struct s100*>(&edi11->f4);
    esi14 = reinterpret_cast<struct s101*>(&esi12->f4);
    __asm__("addsd xmm1, xmm0");
    edi13->f0 = esi14->f0;
    edi15 = reinterpret_cast<struct s102*>(&edi13->f4);
    esi16 = reinterpret_cast<struct s103*>(&esi14->f4);
    use();
    edi15->f0 = esi16->f0;
    edi17 = reinterpret_cast<struct s104*>(&edi15->f4);
    esi18 = reinterpret_cast<struct s105*>(&esi16->f4);
    edi17->f0 = esi18->f0;
    edi19 = reinterpret_cast<struct s106*>(&edi17->f4);
    esi20 = reinterpret_cast<struct s107*>(&esi18->f4);
    __asm__("subsd xmm0, xmm1");
    edi19->f0 = esi20->f0;
    edi21 = reinterpret_cast<struct s108*>(&edi19->f4);
    esi22 = reinterpret_cast<struct s109*>(&esi20->f4);
    use();
    edi21->f0 = esi22->f0;
    edi23 = reinterpret_cast<struct s110*>(&edi21->f4);
    esi24 = reinterpret_cast<struct s111*>(&esi22->f4);
    edi23->f0 = esi24->f0;
    edi25 = reinterpret_cast<struct s112*>(&edi23->f4);
    esi26 = reinterpret_cast<struct s113*>(&esi24->f4);
    __asm__("subsd xmm0, xmm1");
    edi25->f0 = esi26->f0;
    edi27 = reinterpret_cast<struct s114*>(&edi25->f4);
    esi28 = reinterpret_cast<struct s115*>(&esi26->f4);
    use();
    edi27->f0 = esi28->f0;
    edi29 = reinterpret_cast<struct s116*>(&edi27->f4);
    esi30 = reinterpret_cast<struct s117*>(&esi28->f4);
    edi29->f0 = esi30->f0;
    edi31 = reinterpret_cast<struct s118*>(&edi29->f4);
    esi32 = reinterpret_cast<struct s119*>(&esi30->f4);
    __asm__("mulsd xmm0, xmm1");
    edi31->f0 = esi32->f0;
    edi33 = reinterpret_cast<struct s120*>(&edi31->f4);
    esi34 = reinterpret_cast<struct s121*>(&esi32->f4);
    use();
    edi33->f0 = esi34->f0;
    edi35 = reinterpret_cast<struct s122*>(&edi33->f4);
    esi36 = reinterpret_cast<struct s123*>(&esi34->f4);
    edi35->f0 = esi36->f0;
    edi37 = reinterpret_cast<struct s124*>(&edi35->f4);
    esi38 = reinterpret_cast<struct s125*>(&esi36->f4);
    __asm__("divsd xmm0, xmm1");
    edi37->f0 = esi38->f0;
    edi39 = reinterpret_cast<struct s126*>(&edi37->f4);
    esi40 = reinterpret_cast<struct s127*>(&esi38->f4);
    use();
    edi39->f0 = esi40->f0;
    edi41 = reinterpret_cast<struct s128*>(&edi39->f4);
    esi42 = reinterpret_cast<struct s129*>(&esi40->f4);
    edi41->f0 = esi42->f0;
    edi43 = reinterpret_cast<struct s130*>(&edi41->f4);
    esi44 = reinterpret_cast<struct s131*>(&esi42->f4);
    __asm__("divsd xmm0, xmm1");
    edi43->f0 = esi44->f0;
    edi45 = reinterpret_cast<struct s132*>(&edi43->f4);
    esi46 = reinterpret_cast<struct s133*>(&esi44->f4);
    use();
    edi45->f0 = esi46->f0;
    __asm__("movapd xmm1, [0x8048ac0]");
    __asm__("xorpd xmm0, xmm1");
    edi45->f4 = esi46->f4;
    use();
    return 0x7b;
}
