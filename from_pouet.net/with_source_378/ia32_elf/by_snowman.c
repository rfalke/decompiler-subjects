
int32_t fun_80486e2(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;

    eax2 = 0;
    *reinterpret_cast<signed char*>(&eax2) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ecx + 0x804a48e)) + reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t**>(ecx + 0x804a6e6)));
    eax3 = eax2 << 2;
    *reinterpret_cast<signed char*>(&eax3) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax3 + 0x804a5e2)) + reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t**>(ecx + 0x87cab98)));
    return eax3;
}

uint32_t g804a626 = 0xf31782ce;

uint32_t fun_804890c() {
    uint32_t eax1;
    uint32_t eax2;

    eax1 = g804a626;
    eax2 = eax1 - 0xce87d32 ^ 0xf31782ce;
    __asm__("ror eax, 1");
    g804a626 = eax2;
    return eax2;
}

uint32_t g804ab40 = 0;

uint32_t g804ab44 = 0;

uint32_t g804ab48 = 0;

uint32_t g804ab4c = 0;

uint32_t g804ab50 = 0;

uint32_t g804ab60 = 0;

uint32_t g804ab64 = 0;

uint32_t g804ab68 = 0;

struct s0 {
    signed char[28] pad28;
    int32_t f28;
};

struct s1 {
    signed char[24] pad24;
    int32_t f24;
};

struct s2 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_804888c(int32_t ecx);

uint32_t g804ab54 = 0;

struct s3 {
    signed char[12] pad12;
    int32_t f12;
};

void fun_8048891(int32_t ecx);

struct s4 {
    signed char[16] pad16;
    int32_t f16;
};

struct s5 {
    signed char[20] pad20;
    int32_t f20;
};

void fun_80487cb() {
    struct s0* ebp1;
    int32_t eax2;
    struct s1* ebp3;
    int32_t ecx4;
    struct s2* ebp5;
    int32_t ecx6;
    struct s3* ebp7;
    int32_t ecx8;
    struct s4* ebp9;
    int32_t ecx10;
    struct s5* ebp11;

    g804ab40 = 0;
    g804ab44 = 0;
    g804ab48 = 0;
    g804ab4c = 0;
    g804ab50 = 0;
    g804ab60 = 0;
    g804ab64 = 0x10000;
    __asm__("cdq ");
    g804ab68 = reinterpret_cast<uint32_t>((ebp1->f28 << 16) / 0x29040);
    eax2 = ebp3->f24;
    if (!eax2) {
        g804ab48 = 42;
    } else {
        __asm__("cdq ");
        g804ab40 = eax2 / reinterpret_cast<uint32_t>(0x67);
        g804ab44 = eax2 % reinterpret_cast<uint32_t>(0x67) * 0x27c4597;
    }
    ecx4 = ebp5->f8;
    __asm__("cdq ");
    fun_804888c(ecx4);
    g804ab54 = -g804ab54;
    ecx6 = ebp7->f12;
    fun_8048891(ecx6);
    ecx8 = ebp9->f16;
    fun_804888c(ecx8);
    ecx10 = ebp11->f20;
    __asm__("cdq ");
    fun_804888c(ecx10);
    return;
}

void fun_8048891(int32_t ecx) {
    uint32_t eax2;
    uint32_t tmp32_3;
    uint32_t eax4;
    uint32_t tmp32_5;
    uint32_t eax6;
    uint32_t ebx7;
    uint32_t edx8;
    int32_t* edi9;
    int32_t* esi10;
    uint32_t eax11;
    uint32_t tmp32_12;
    uint32_t eax13;
    uint32_t tmp32_14;
    uint1_t cf15;
    uint32_t eax16;
    uint32_t tmp32_17;

    do {
        if (!ecx) 
            break;
        eax2 = g804ab64;
        tmp32_3 = g804ab60 + eax2;
        g804ab60 = tmp32_3;
        eax4 = g804ab68;
        tmp32_5 = g804ab64 + eax4;
        g804ab64 = tmp32_5;
        eax6 = g804ab60;
        ebx7 = g804ab50;
        edx8 = g804ab48;
        *edi9 = (*reinterpret_cast<int32_t*>(((edx8 & 0xffff) << 2) + 0x808ab70) >> 4) * (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) + (eax6 >> 16 << 2)) * (reinterpret_cast<int32_t>(ebx7) >> 10) >> 11) >> 12;
        ++edi9;
        ++esi10;
        eax11 = g804ab54;
        tmp32_12 = g804ab50 + eax11;
        g804ab50 = tmp32_12;
        eax13 = g804ab44;
        tmp32_14 = g804ab4c + eax13;
        cf15 = reinterpret_cast<uint1_t>(tmp32_14 < g804ab4c);
        g804ab4c = tmp32_14;
        eax16 = g804ab40;
        tmp32_17 = g804ab48 + eax16 + cf15;
        g804ab48 = tmp32_17;
    } while (ecx - 1);
    goto addr_804890b_6;
    return;
    addr_804890b_6:
    return;
}

int32_t SDL_PollEvent = 0x80484c6;

void SDL_PollEvent() {
    goto SDL_PollEvent;
}

int32_t SDL_Quit = 0x8048456;

void SDL_Quit(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    goto SDL_Quit;
}

void fun_8048a31(int32_t a1, uint32_t a2, int32_t a3, int32_t a4);

int32_t g87d558c = 0;

int32_t g87d5580 = 0;

int32_t g87d5598 = 0;

int32_t g87d5564 = 0;

int32_t g87d556c = 0;

int32_t g87d5568 = 0;

int32_t g87d5590 = 0;

void fun_8048b1e(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t esi5;
    uint32_t v6;
    int32_t edi7;
    uint32_t ebx8;
    int32_t eax9;
    int32_t v10;
    int32_t v11;
    int32_t edx12;
    int32_t v13;
    int32_t v14;
    int32_t ebx15;
    int32_t ecx16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t v21;

    esi5 = 0;
    v6 = 0;
    do {
        edi7 = 0;
        do {
            ebx8 = v6 + v6 * 2 << 2;
            __asm__("fld dword [0x804a8e0]");
            __asm__("fimul dword [esp]");
            __asm__("fst dword [ebp-0x14]");
            __asm__("fstp dword [esp]");
            fun_8048a31(edi7, ebx8 + 0x804a800, 0x87d4864, eax9);
            v10 = 0x87d4870;
            fun_8048a31(v11, ebx8 + 0x804a860, 0x87d4870, eax9);
            edx12 = 0;
            do {
                __asm__("fld dword [ebp+0x8]");
                __asm__("fsubr dword [0x804a8e4]");
                __asm__("fmul dword [edx*4+0x87d4864]");
                __asm__("fld dword [ebp+0x8]");
                __asm__("fmul dword [edx*4+0x87d4870]");
                __asm__("faddp st1, st0");
                __asm__("fstp dword [eax*4+0x87d48a0]");
                ++edx12;
            } while (edx12 <= 2);
            eax9 = esi5 + esi5 * 2;
            __asm__("fld dword [0x804a8e8]");
            v13 = esi5;
            __asm__("fimul dword [esp]");
            __asm__("fsin ");
            __asm__("fmul dword [0x804a8ec]");
            __asm__("fstp dword [eax*4+0x87d48a8]");
            ++esi5;
            ++edi7;
        } while (edi7 <= 15);
        ++v6;
    } while (v6 <= 3);
    v14 = 0;
    if (0 < esi5 - 1) {
        do {
            ebx15 = v14 + v14 * 2 << 2;
            __asm__("fld dword [ebx+0x87d48b4]");
            __asm__("fsub dword [ebx+0x87d48a8]");
            __asm__("fstp dword [0x87d487c]");
            __asm__("fld dword [ebx+0x87d48a0]");
            __asm__("fsub dword [ebx+0x87d48ac]");
            __asm__("fstp dword [0x87d4880]");
            __asm__("fld dword [ebx+0x87d48b0]");
            __asm__("fsub dword [ebx+0x87d48a4]");
            __asm__("fstp dword [0x87d4884]");
            __asm__("fild dword [ebp-0x10]");
            __asm__("fld st0");
            __asm__("fmul dword [0x804a8dc]");
            __asm__("fld dword [0x87d55c8]");
            __asm__("fld dword [0x804a8f0]");
            __asm__("fld st1");
            __asm__("fmul st0, st1");
            __asm__("faddp st3, st0");
            __asm__("fxch st0, st2");
            __asm__("fsin ");
            __asm__("fmul dword [0x87d55c0]");
            __asm__("fld st3");
            __asm__("fmul dword [0x804a8f4]");
            __asm__("fld1 ");
            __asm__("fadd st1, st0");
            __asm__("fxch st0, st2");
            __asm__("fmulp st1, st0");
            __asm__("fmulp st3, st0");
            __asm__("fxch st0, st2");
            __asm__("fadd dword [ebx+0x87d48a4]");
            __asm__("fstp dword [ebx+0x87d48a4]");
            __asm__("fld st2");
            __asm__("fmul dword [0x804a8f8]");
            __asm__("fxch st0, st1");
            __asm__("fmul dword [0x804a8fc]");
            __asm__("faddp st1, st0");
            __asm__("fsin ");
            __asm__("fmul dword [0x87d55c0]");
            __asm__("fxch st0, st2");
            __asm__("faddp st1, st0");
            __asm__("fmulp st1, st0");
            __asm__("fmul dword [0x804a900]");
            __asm__("fadd dword [ebx+0x87d48a8]");
            __asm__("fstp dword [ebx+0x87d48a8]");
            g87d558c(ecx16, 0xb50);
            g87d558c(ecx16, 0xba1);
            g87d558c(ecx16, 0xb71);
            __asm__("fld dword [0x87d4850]");
            __asm__("fld st0");
            __asm__("fmul dword [0x804a904]");
            __asm__("fstp dword [esp+0x8]");
            __asm__("fld st0");
            __asm__("fmul dword [0x804a908]");
            __asm__("fstp dword [esp+0x4]");
            __asm__("fmul dword [0x804a90c]");
            __asm__("fstp dword [esp]");
            g87d5580(ecx16, 0xb71);
            g87d5598(ecx16, 0x87d487c);
            g87d5564(ecx16);
            __asm__("fld dword [ebx+0x87d48a4]");
            __asm__("fmul dword [0x804a910]");
            __asm__("fstp dword [esp]");
            g87d556c(9);
            __asm__("fld dword [ebx+0x87d48b0]");
            __asm__("fmul dword [0x804a910]");
            __asm__("fstp dword [esp]");
            v17 = *reinterpret_cast<int32_t*>(ebx15 + 0x87d48ac);
            g87d556c(9);
            __asm__("fld dword [ebx+0x87d48b0]");
            __asm__("fmul dword [0x804a910]");
            __asm__("fstp dword [esp]");
            g87d556c(v17);
            __asm__("fld dword [ebx+0x87d48a4]");
            __asm__("fmul dword [0x804a910]");
            __asm__("fstp dword [esp]");
            v18 = *reinterpret_cast<int32_t*>(ebx15 + 0x87d48a8);
            v19 = *reinterpret_cast<int32_t*>(ebx15 + 0x87d48a0);
            g87d556c(v17, v19, v18, v10, v13);
            g87d5568(v17, v19, v18, v10, v13);
            v10 = 0;
            g87d5580(v17, 0);
            g87d5590(v17, 0xb50);
            g87d5564(v17);
            __asm__("fld dword [ebx+0x87d48a4]");
            __asm__("fmul dword [0x804a910]");
            __asm__("fstp dword [esp]");
            g87d556c(1);
            __asm__("fld dword [ebx+0x87d48b0]");
            __asm__("fmul dword [0x804a910]");
            __asm__("fstp dword [esp]");
            v20 = *reinterpret_cast<int32_t*>(ebx15 + 0x87d48ac);
            g87d556c(1);
            ecx16 = v20;
            __asm__("fld dword [ebx+0x87d48b0]");
            __asm__("fmul dword [0x804a910]");
            __asm__("fstp dword [esp]");
            g87d556c(ecx16);
            __asm__("fld dword [ebx+0x87d48a4]");
            __asm__("fmul dword [0x804a910]");
            __asm__("fstp dword [esp]");
            v21 = *reinterpret_cast<int32_t*>(ebx15 + 0x87d48a0);
            g87d556c(ecx16, v21);
            g87d5568(ecx16, v21);
            ++v14;
        } while (v14 < esi5 - 1);
    }
    return;
}

int32_t g87d55c4 = 0;

signed char g804a74c = 0;

int32_t g804a8b4 = 0x3e8;

int32_t g87d5578 = 0;

int32_t g87d557c = 0;

int32_t g87d5570 = 0;

int32_t g87d5574 = 0;

int32_t g87d55a0 = 0;

int32_t g87d4854 = 0;

int32_t g87d5588 = 0;

int32_t g87d5584 = 0;

int32_t g87d559c = 0;

int32_t g87d5594 = 0;

void fun_8048e99(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    int32_t edi11;
    int1_t less_or_equal12;
    int1_t zf13;
    int32_t v14;
    uint32_t ebx15;
    int1_t less16;
    int32_t ecx17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t eax21;
    int1_t less_or_equal22;
    int32_t esi23;
    int32_t ebx24;
    int32_t ebx25;

    edi11 = a1;
    __asm__("fild dword [esp]");
    __asm__("fstp dword [0x87d55c8]");
    __asm__("fld dword [0x804a914]");
    __asm__("fimul dword [0x804a72e]");
    __asm__("fsub dword [0x804a918]");
    __asm__("fmul dword [0x804a91c]");
    __asm__("fnstcw word [ebp-0xe]");
    __asm__("fldcw word [ebp-0x10]");
    __asm__("fistp dword [0x87d55c4]");
    __asm__("fldcw word [ebp-0xe]");
    less_or_equal12 = g87d55c4 <= 58;
    if (!less_or_equal12) {
        g804a74c = 1;
    }
    __asm__("fld dword [0x804a920]");
    __asm__("fimul dword [esp]");
    __asm__("fldcw word [ebp-0x10]");
    __asm__("fistp dword [ebp-0x14]");
    __asm__("fldcw word [ebp-0xe]");
    zf13 = v14 == g804a8b4;
    if (zf13) {
        addr_80491b3_4:
        return;
    } else {
        g804a8b4 = v14;
        ebx15 = 0;
        do {
            less16 = g87d55c4 < static_cast<int32_t>(*reinterpret_cast<signed char*>(ebx15 + ebx15 * 8 + 0x804a769));
            if (less16) 
                break;
            ++ebx15;
        } while (ebx15 <= 15);
        goto addr_8048f70_8;
    }
    ecx17 = 1;
    do {
        __asm__("fld dword [0x804a924]");
        __asm__("fld dword [edx+ecx*4]");
        __asm__("fmulp st1, st0");
        __asm__("fild word [esp]");
        __asm__("fmul dword [0x804a928]");
        __asm__("faddp st1, st0");
        __asm__("fstp dword [edx+ecx*4]");
        ++ecx17;
    } while (ecx17 <= 9);
    addr_8048f70_8:
    __asm__("fld dword [0x87d4860]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fst dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    g87d5578();
    g87d557c(0x4100);
    g87d5570(0x1701);
    g87d5574(0x1701);
    g87d55a0(0x47ae147b, 0xbf847ae1, 0x47ae147b, 0x3f847ae1, 0xeb851eb8, 0xbf7eb851, 0xeb851eb8, 0x3f7eb851, 0x47ae147b, 0x3f847ae1, 0, 0x4091bc00, 0x1701);
    g87d5570(0x1700);
    g87d5574(0x1700);
    v18 = g87d4854;
    g87d5588(0, 0, v18, 0x3f800000);
    __asm__("fld dword [0x87d4858]");
    __asm__("fchs ");
    __asm__("fmul dword [0x804a92c]");
    __asm__("fstp dword [esp]");
    g87d5584(0x47ae147b, 0x3f800000, 0, 0, 0, 0, v18, 0x3f800000);
    __asm__("fld dword [0x804a930]");
    __asm__("fmul dword [0x87d485c]");
    __asm__("fadd dword [0x87d5560]");
    __asm__("fst dword [0x87d5560]");
    v19 = 0;
    v20 = 0;
    __asm__("fstp dword [esp]");
    eax21 = reinterpret_cast<int32_t>(g87d5584(0, 0, 0, 0x3f800000));
    less_or_equal22 = g87d55c4 <= 47;
    if (less_or_equal22) {
        g87d5590(0xb50, 0, 0, 0x3f800000);
        g87d559c(0x40400000, 0, 0, 0x3f800000);
        esi23 = 0;
        do {
            g87d5564(3, 0, 0, 0x3f800000);
            ebx24 = 0;
            do {
                __asm__("fild dword [esp]");
                __asm__("fst dword [ebp-0x18]");
                __asm__("fmul dword [0x804a934]");
                __asm__("fsin ");
                __asm__("fsubr dword [0x804a8e4]");
                __asm__("fst dword [esp+0x8]");
                __asm__("fst dword [esp+0x4]");
                __asm__("fstp dword [esp]");
                g87d5580(3, v20, v19, ebx24);
                v19 = 0xbe99999a;
                v20 = *reinterpret_cast<int32_t*>(ebx24 * 4 + 0x87d55e0);
                __asm__("fld dword [ebp-0x18]");
                __asm__("fmul dword [0x804a938]");
                __asm__("fsub dword [0x804a8dc]");
                __asm__("fadd st0, st0");
                __asm__("fstp dword [esp]");
                g87d556c(3, v20, 0xbe99999a, ebx24);
                ++ebx24;
            } while (ebx24 <= 0x3ff);
            g87d5568();
            v19 = 0;
            v20 = 0;
            eax21 = reinterpret_cast<int32_t>(g87d5584(0x42b40000, 0, 0, 0x3f800000));
            ++esi23;
        } while (esi23 <= 1);
    }
    g87d5594(0x4000, 0x1200, 0x804a8b8, eax21);
    g87d558c(0x4000, 0x1200, 0x804a8b8, eax21);
    g87d558c(0xb57, 0x1200, 0x804a8b8, eax21);
    g87d5584(0x41700000, 0, 0, 0x3f800000, 0xb57, 0x1200, 0x804a8b8, eax21);
    ebx25 = 0;
    do {
        g87d5584(0x41f00000, 0, 0, 0x3f800000);
        __asm__("fld dword [0x804a900]");
        __asm__("fimul dword [esp]");
        __asm__("fsin ");
        __asm__("fmul dword [0x804a8dc]");
        __asm__("fadd dword [0x804a8dc]");
        __asm__("fstp dword [esp]");
        fun_8048b1e(edi11, 0, 0, 0x3f800000);
        ++ebx25;
    } while (ebx25 <= 11);
    goto addr_80491b3_4;
}

int32_t dlsym = 0x8048466;

int32_t dlsym() {
    goto dlsym;
}

uint32_t fun_8048706() {
    int32_t eax1;

    __asm__("cdq ");
    return eax1 / reinterpret_cast<uint32_t>(0x3e04);
}

int32_t g87d55c0 = 0;

void fun_80489c8() {
    int32_t esi1;
    int32_t ebx2;
    int32_t ecx3;
    int16_t* edi4;
    int32_t edx5;
    int1_t less_or_equal6;

    esi1 = 0;
    ebx2 = 0;
    do {
        *reinterpret_cast<int16_t*>(&ecx3) = edi4[ebx2];
        __asm__("fild word [esp]");
        __asm__("fmul dword [0x804a8c8]");
        __asm__("fstp dword [ebx*4+0x87d55e0]");
        edx5 = *reinterpret_cast<int16_t*>(&ecx3);
        if (edx5 < 0) {
            edx5 = -edx5;
        }
        if (edx5 >= esi1) {
            esi1 = edx5;
        }
        ++ebx2;
    } while (ebx2 <= 0x3ff);
    __asm__("fild word [esp]");
    __asm__("fmul dword [0x804a8cc]");
    __asm__("fld dword [0x804a8d0]");
    __asm__("fmul dword [0x87d55c0]");
    __asm__("faddp st1, st0");
    __asm__("fstp dword [0x87d55c0]");
    less_or_equal6 = g87d55c4 <= 47;
    if (!less_or_equal6) {
        g87d55c0 = 0;
    }
    return;
}

void fun_804888c(int32_t ecx) {
    uint32_t eax2;
    uint32_t eax3;
    uint32_t tmp32_4;
    uint32_t eax5;
    uint32_t tmp32_6;
    uint32_t eax7;
    uint32_t ebx8;
    uint32_t edx9;
    int32_t* edi10;
    int32_t* esi11;
    uint32_t eax12;
    uint32_t tmp32_13;
    uint32_t eax14;
    uint32_t tmp32_15;
    uint1_t cf16;
    uint32_t eax17;
    uint32_t tmp32_18;

    g804ab54 = eax2;
    do {
        if (!ecx) 
            break;
        eax3 = g804ab64;
        tmp32_4 = g804ab60 + eax3;
        g804ab60 = tmp32_4;
        eax5 = g804ab68;
        tmp32_6 = g804ab64 + eax5;
        g804ab64 = tmp32_6;
        eax7 = g804ab60;
        ebx8 = g804ab50;
        edx9 = g804ab48;
        *edi10 = (*reinterpret_cast<int32_t*>(((edx9 & 0xffff) << 2) + 0x808ab70) >> 4) * (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi11) + (eax7 >> 16 << 2)) * (reinterpret_cast<int32_t>(ebx8) >> 10) >> 11) >> 12;
        ++edi10;
        ++esi11;
        eax12 = g804ab54;
        tmp32_13 = g804ab50 + eax12;
        g804ab50 = tmp32_13;
        eax14 = g804ab44;
        tmp32_15 = g804ab4c + eax14;
        cf16 = reinterpret_cast<uint1_t>(tmp32_15 < g804ab4c);
        g804ab4c = tmp32_15;
        eax17 = g804ab40;
        tmp32_18 = g804ab48 + eax17 + cf16;
        g804ab48 = tmp32_18;
        --ecx;
    } while (ecx);
    goto addr_804890b_7;
    return;
    addr_804890b_7:
    return;
}

int32_t SDL_GetTicks = 0x8048486;

int32_t SDL_GetTicks(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    goto SDL_GetTicks;
}

int32_t SDL_GL_SwapBuffers = 0x80484a6;

void SDL_GL_SwapBuffers(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    goto SDL_GL_SwapBuffers;
}

void fun_8048a31(int32_t a1, uint32_t a2, int32_t a3, int32_t a4) {
    int32_t eax5;

    eax5 = 0;
    do {
        __asm__("fld dword [ebp+0x8]");
        __asm__("fadd st0, st0");
        __asm__("fmul dword [ebp+0x8]");
        __asm__("fld dword [ebp+0x8]");
        __asm__("fmul st0, st1");
        __asm__("fld dword [ebp+0x8]");
        __asm__("fmul st0, st0");
        __asm__("fst dword [ebp-0x4]");
        __asm__("fmul dword [0x804a8d4]");
        __asm__("fsub st1, st0");
        __asm__("fld1 ");
        __asm__("faddp st2, st0");
        __asm__("fxch st0, st1");
        __asm__("fmul dword [edx+eax*4+0xc]");
        __asm__("fld dword [ebp-0x4]");
        __asm__("fmul dword [ebp+0x8]");
        __asm__("fld st0");
        __asm__("fmul dword [0x804a8d8]");
        __asm__("faddp st3, st0");
        __asm__("fxch st0, st2");
        __asm__("fmul dword [edx+eax*4+0x18]");
        __asm__("faddp st1, st0");
        __asm__("fxch st0, st1");
        __asm__("fsubrp st2, st0");
        __asm__("fxch st0, st1");
        __asm__("fadd dword [ebp+0x8]");
        __asm__("fld1 ");
        __asm__("fsub dword [0x87d4844]");
        __asm__("fstp dword [ebp-0x8]");
        __asm__("fld1 ");
        __asm__("fadd dword [0x87d484c]");
        __asm__("fld1 ");
        __asm__("fsub dword [0x87d4848]");
        __asm__("fst dword [ebp-0xc]");
        __asm__("fmul st0, st1");
        __asm__("fld dword [edx+eax*4+0xc]");
        __asm__("fsub dword [edx+eax*4]");
        __asm__("fmulp st1, st0");
        __asm__("fld1 ");
        __asm__("fsub dword [0x87d484c]");
        __asm__("fld1 ");
        __asm__("fadd dword [0x87d4848]");
        __asm__("fld st1");
        __asm__("fmul st0, st1");
        __asm__("fld dword [edx+eax*4+0x18]");
        __asm__("fsub dword [edx+eax*4+0xc]");
        __asm__("fmul st1, st0");
        __asm__("fxch st0, st4");
        __asm__("faddp st1, st0");
        __asm__("fld dword [ebp-0x8]");
        __asm__("fmulp st1, st0");
        __asm__("fmulp st5, st0");
        __asm__("fld dword [0x804a8dc]");
        __asm__("fmul st5, st0");
        __asm__("fxch st0, st6");
        __asm__("faddp st5, st0");
        __asm__("fld1 ");
        __asm__("fsubr dword [ebp+0x8]");
        __asm__("fld dword [ebp-0x4]");
        __asm__("fmulp st1, st0");
        __asm__("fxch st0, st4");
        __asm__("fmulp st1, st0");
        __asm__("fmulp st2, st0");
        __asm__("fmul dword [ebp-0xc]");
        __asm__("fld dword [edx+eax*4+0x24]");
        __asm__("fsub dword [edx+eax*4+0x18]");
        __asm__("fmulp st1, st0");
        __asm__("faddp st1, st0");
        __asm__("fld dword [ebp-0x8]");
        __asm__("fmulp st1, st0");
        __asm__("fmulp st1, st0");
        __asm__("fmulp st2, st0");
        __asm__("faddp st1, st0");
        __asm__("fstp dword [ecx+eax*4]");
        ++eax5;
    } while (eax5 <= 1);
    return;
}

int32_t dlopen = 0x80484f6;

int32_t dlopen() {
    goto dlopen;
}

struct s6 {
    int32_t f0;
    signed char[262136] pad262140;
    int32_t f262140;
    signed char[262140] pad524284;
    uint32_t f524284;
    signed char[262140] pad786428;
    uint32_t f786428;
};

int32_t g804a712 = 0;

void fun_8048714(int32_t a1) {
    uint16_t* edi2;
    int32_t ecx3;
    uint16_t ax4;
    struct s6* edi5;
    int32_t ebx6;
    int32_t ecx7;
    uint32_t eax8;
    int32_t eax9;
    uint32_t eax10;
    int32_t eax11;
    int32_t ecx12;

    __asm__("pushad ");
    edi2 = reinterpret_cast<uint16_t*>(0x804a6a0);
    ecx3 = 60;
    do {
        __asm__("lodsw ");
        ax4 = reinterpret_cast<uint16_t>(ax4 >> 1);
        *edi2 = ax4;
        --edi2;
        --ecx3;
    } while (ecx3);
    edi5 = reinterpret_cast<struct s6*>(0x804ab70);
    ebx6 = 0;
    ecx7 = 0x10000;
    do {
        __asm__("cdq ");
        eax8 = (ebx6 + ebx6) / reinterpret_cast<uint32_t>(0xa8);
        eax9 = 0x7fff;
        if (*reinterpret_cast<unsigned char*>(&eax8) & 1) {
            eax9 = -0x7fff;
        }
        edi5->f0 = eax9;
        edi5 = reinterpret_cast<struct s6*>(&edi5->pad262140);
        __asm__("cdq ");
        __asm__("cdq ");
        edi5->f524284 = (ebx6 % reinterpret_cast<uint32_t>(0xa8) << 16) / 0xa8 - 0x8000;
        eax10 = fun_804890c();
        edi5->f786428 = (eax10 & 0xffff) - 0x8000;
        __asm__("fld qword [0x804a71e]");
        __asm__("fld st0");
        __asm__("fsin ");
        __asm__("fmul qword [0x804a726]");
        __asm__("fistp dword [0x804a712]");
        __asm__("fadd qword [0x804a716]");
        __asm__("fstp qword [0x804a71e]");
        eax11 = g804a712;
        edi5->f262140 = eax11;
        ++ebx6;
        --ecx7;
    } while (ecx7);
    ecx12 = 9;
    do {
        fun_80487cb();
        --ecx12;
    } while (ecx12);
    __asm__("popad ");
    return;
}

int32_t SDL_Init = 0x80484b6;

void SDL_Init(int32_t a1, int32_t a2) {
    goto SDL_Init;
}

int32_t SDL_OpenAudio = 0x8048496;

void SDL_OpenAudio(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto SDL_OpenAudio;
}

int32_t SDL_SetVideoMode = 0x80484e6;

void SDL_SetVideoMode(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    goto SDL_SetVideoMode;
}

int32_t fun_80491c0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int32_t* edi9;
    int32_t eax10;

    __asm__("pushad ");
    dlopen();
    edi9 = reinterpret_cast<int32_t*>(0x87d5564);
    while (!1) {
        eax10 = dlsym();
        *edi9 = eax10;
        ++edi9;
    }
    __asm__("popad ");
    return 0;
}

int32_t SDL_ShowCursor = 0x80484d6;

void SDL_ShowCursor(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    goto SDL_ShowCursor;
}

int32_t SDL_PauseAudio = 0x8048476;

void SDL_PauseAudio(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    goto SDL_PauseAudio;
}

void fun_804844c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

int32_t g87cabe8 = 0;

signed char g87cabec = 0;

void fun_8048930() {
    int32_t v1;
    int32_t eax2;
    int32_t eax3;
    int32_t eax4;
    int1_t zf5;
    int1_t zf6;

    v1 = reinterpret_cast<int32_t>(__return_address());
    fun_8048714(v1);
    SDL_Init(49, v1);
    SDL_OpenAudio(0x804a734, 0, 49, v1);
    SDL_SetVideoMode(0x280, 0x1e0, 32, 0x80000003, 0x804a734, 0, 49, v1);
    fun_80491c0(0x280, 0x1e0, 32, 0x80000003, 0x804a734, 0, 49, v1);
    SDL_ShowCursor(0, 0x280, 0x1e0, 32, 0x80000003, 0x804a734, 0, 49, v1);
    SDL_PauseAudio(0, 0x280, 0x1e0, 32, 0x80000003, 0x804a734, 0, 49, v1);
    eax2 = SDL_GetTicks(0, 0x280, 0x1e0, 32, 0x80000003, 0x804a734, 0, 49, v1);
    g87cabe8 = eax2;
    do {
        eax3 = SDL_GetTicks(0, 0x280, 0x1e0, 32, 0x80000003, 0x804a734, 0, 49, v1);
        eax4 = eax3 - g87cabe8;
        fun_8048e99(eax4, 0, 0x280, 0x1e0, 32, 0x80000003, 0x804a734, 0, 49, v1);
        SDL_GL_SwapBuffers(0, 0x280, 0x1e0, 32, 0x80000003, 0x804a734, 0, 49, v1);
        zf5 = g804a74c == 0;
        if (!zf5) 
            break;
        SDL_PollEvent();
        zf6 = g87cabec == 2;
    } while (!zf6);
    SDL_Quit(0, 0x280, 0x1e0, 32, 0x80000003, 0x804a734, 0, 49, v1);
    __asm__("int 0x80");
}

int32_t g804aaf4 = 0;

void fun_80484c6() {
    goto g804aaf4;
}

void fun_8048456() {
    goto 0x8048440;
}

void fun_8048466() {
    goto 0x8048440;
}

void fun_8048486() {
    goto 0x8048440;
}

void fun_80484a6() {
    goto 0x8048440;
}

void fun_80484f6() {
    goto 0x8048440;
}

void fun_80484b6() {
    goto 0x8048440;
}

void fun_8048496() {
    goto 0x8048440;
}

void fun_80484e6() {
    goto 0x8048440;
}

void fun_80484d6() {
    goto 0x8048440;
}

void fun_8048476() {
    goto 0x8048440;
}

int32_t g804a72e = 0;

int32_t g804ab58 = 0;

int32_t* g804ab5c = reinterpret_cast<int32_t*>(0);

void fun_8048500() {
    int16_t* edi1;
    int16_t* v2;
    int32_t eax3;
    int32_t* edx4;
    int32_t ecx5;
    int32_t* eax6;
    int32_t eax7;
    signed char al8;
    int32_t eax9;
    int1_t zf10;
    int1_t zf11;
    int32_t eax12;
    int32_t eax13;
    int32_t ecx14;
    int32_t ebx15;
    int32_t tmp32_16;
    int32_t eax17;
    int32_t tmp32_18;
    int32_t* ebx19;
    uint32_t eax20;
    int32_t eax21;
    int32_t eax22;
    int32_t v23;

    __asm__("pushad ");
    edi1 = v2;
    while (1) {
        eax3 = g804a72e;
        __asm__("cdq ");
        edx4 = reinterpret_cast<int32_t*>(eax3 % reinterpret_cast<uint32_t>(0x14ac));
        if (!edx4) {
            ecx5 = 4;
            while (1) {
                eax6 = *reinterpret_cast<int32_t**>(ecx5 + 0x804a6e6);
                if (!reinterpret_cast<int1_t>(eax6 == 0xfffffffe)) {
                    *reinterpret_cast<int32_t**>(ecx5 + 0x87cab98) = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t**>(ecx5 + 0x87cab98)) + 1);
                    if (eax6 == 0xffffffff || (eax7 = fun_80486e2(ecx5), *reinterpret_cast<signed char*>(&eax7) == -2)) {
                        *reinterpret_cast<int32_t**>(ecx5 + 0x804a6e6) = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t**>(ecx5 + 0x804a6e6)) + 1);
                        al8 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ecx5 + 0x804a48e)) + reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t**>(ecx5 + 0x804a6e6)));
                        edx4 = reinterpret_cast<int32_t*>(0);
                        if (al8 == -3) {
                            *reinterpret_cast<int32_t**>(ecx5 + 0x804a6e6) = reinterpret_cast<int32_t*>(0);
                        }
                        if (al8 == -2) {
                            *reinterpret_cast<int32_t**>(ecx5 + 0x804a6e6) = reinterpret_cast<int32_t*>(0xfffffffe);
                        }
                        *reinterpret_cast<int32_t**>(ecx5 + 0x87cab98) = reinterpret_cast<int32_t*>(0);
                    }
                    eax9 = fun_80486e2(ecx5);
                    *reinterpret_cast<signed char*>(&eax9) = *reinterpret_cast<signed char*>(&eax9);
                    if (*reinterpret_cast<signed char*>(&eax9) && (((zf10 = *reinterpret_cast<signed char*>(&eax9) == -6, !zf10) || (*reinterpret_cast<int32_t**>(ecx5 + 0x804a6ba) = reinterpret_cast<int32_t*>(0xffffffff), !zf10)) && (((zf11 = *reinterpret_cast<signed char*>(&eax9) == -4, !zf11) || (*reinterpret_cast<signed char*>(ecx5 + 0x87cabc0) = *reinterpret_cast<signed char*>(&eax9), !zf11)) && (*reinterpret_cast<signed char*>(&eax9) != -5 || (*reinterpret_cast<signed char*>(&edx4) = 0, *reinterpret_cast<signed char*>(ecx5 + 0x87cabc0) = 0, !1))))) {
                        eax12 = eax9 + eax9;
                        *reinterpret_cast<int16_t*>(&eax12) = *reinterpret_cast<int16_t*>(eax12 + 0x804a628);
                        eax13 = eax12 << 16;
                        __asm__("cdq ");
                        edx4 = reinterpret_cast<int32_t*>(eax13 % reinterpret_cast<uint32_t>(0x106));
                        *reinterpret_cast<uint32_t*>(ecx5 + 0x87cab70) = eax13 / reinterpret_cast<uint32_t>(0x106);
                        __asm__("cdq ");
                        *reinterpret_cast<int32_t**>(ecx5 + 0x804a6ba) = edx4;
                    }
                }
                ecx5 = ecx5 + 4;
                if (ecx5 == 40) 
                    break;
            }
        }
        g804ab58 = 0;
        ecx14 = 4;
        while (1) {
            fun_8048706();
            ebx15 = *edx4;
            tmp32_16 = g804ab58 + ebx15;
            g804ab58 = tmp32_16;
            fun_8048706();
            *edx4 = ebx15 >> 1;
            g804ab5c = edx4;
            if (*reinterpret_cast<uint32_t*>(ecx14 + 0x804a6ba) != 0xffffffff) {
                eax17 = *reinterpret_cast<int32_t*>((ecx14 << 16) + ((*reinterpret_cast<uint32_t*>(ecx14 + 0x804a6ba) >> 16 << 2) + 0x82cab70));
                tmp32_18 = g804ab58 + eax17;
                g804ab58 = tmp32_18;
                if (*reinterpret_cast<unsigned char*>(ecx14 + 0x87cabc0) & 0xff) {
                    __asm__("cdq ");
                    edx4 = reinterpret_cast<int32_t*>(eax17 % 5);
                    ebx19 = g804ab5c;
                    *ebx19 = eax17 / 5;
                }
                eax20 = *reinterpret_cast<uint32_t*>(ecx14 + 0x804a6ba) + *reinterpret_cast<int32_t*>(ecx14 + 0x87cab70);
                if (eax20 >= 0xac440000) {
                    eax20 = 0xffffffff;
                }
                *reinterpret_cast<uint32_t*>(ecx14 + 0x804a6ba) = eax20;
            }
            ecx14 = ecx14 + 4;
            if (ecx14 == 40) 
                break;
        }
        eax21 = g804ab58;
        if (eax21 < 0xfffe8003) {
            eax21 = 0xfffe8003;
        }
        if (eax21 > 0x17ffd) {
            eax21 = 0x17ffd;
        }
        __asm__("cdq ");
        eax22 = eax21 / 3;
        *edi1 = *reinterpret_cast<int16_t*>(&eax22);
        ++edi1;
        ++g804a72e;
        v23 = v23 - 2;
        if (!v23) 
            break;
    }
    fun_80489c8();
    __asm__("popad ");
    return;
}
