
void fun_804804c(int32_t a1, int32_t a2) {
    int32_t edx3;
    int32_t esi4;
    signed char al5;
    uint1_t cf6;

    *reinterpret_cast<unsigned char*>((edx3 << 7) + a2 + esi4) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(al5 - 0x65) + cf6);
    goto a1;
}

void fun_804805c(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ecx4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t edi9;
    int32_t ecx10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;

    ecx4 = a3;
    if (!*reinterpret_cast<signed char*>(&ecx4)) {
        return;
    } else {
        __asm__("fld dword [ebp+0x10]");
        __asm__("fld st0");
        __asm__("fld st0");
        __asm__("fmul dword [edx+0x10]");
        __asm__("fadd dword [ebp+0x18]");
        __asm__("fistp dword [edx]");
        __asm__("fmul dword [edx+0x14]");
        __asm__("fsubr dword [ebp+0x14]");
        __asm__("fistp dword [edx]");
        fun_804804c(v5, v6);
        __asm__("fmul dword [edx+0x14]");
        __asm__("fadd dword [ebp+0x1c]");
        __asm__("fistp dword [edx]");
        fun_804804c(v7, v8);
        if (edi9 + 1 >= reinterpret_cast<int32_t>("/dev/fb0")) {
        }
        __asm__("fld dword [ebp+0x4]");
        __asm__("fld dword [ebp+0x0]");
        __asm__("fld st1");
        __asm__("fld st1");
        __asm__("fxch st0, st1");
        __asm__("fmul dword [edx+0x10]");
        __asm__("fxch st0, st1");
        __asm__("fmul dword [edx+0x14]");
        __asm__("fsubp st1, st0");
        __asm__("fstp dword [edx-0x8]");
        __asm__("fmul dword [edx+0x10]");
        __asm__("fxch st0, st1");
        __asm__("fmul dword [edx+0x14]");
        __asm__("faddp st1, st0");
        ecx10 = ecx4 - 1;
        __asm__("fstp dword [esp]");
        fun_804805c(v11, v12, ecx10);
        __asm__("fld dword [ebp+0xc]");
        __asm__("fld dword [edx+0x1c]");
        __asm__("fld dword [ebp+0x8]");
        __asm__("fld dword [ebp+0x20]");
        __asm__("fsub st2, st0");
        __asm__("fld st3");
        __asm__("fld st2");
        __asm__("fxch st0, st1");
        __asm__("fmul st0, st4");
        __asm__("fxch st0, st1");
        __asm__("fmul dword [edx+0x20]");
        __asm__("faddp st1, st0");
        __asm__("fstp dword [edx-0x8]");
        __asm__("fxch st0, st1");
        __asm__("fmulp st2, st0");
        __asm__("fxch st0, st2");
        __asm__("fmul dword [edx+0x20]");
        __asm__("fsubp st1, st0");
        __asm__("faddp st1, st0");
        __asm__("fstp dword [esp]");
        fun_804805c(v13, v14, ecx10);
        return;
    }
}

void fun_8048000(void** ecx) {
    int1_t less_or_equal2;
    void* eax3;
    int32_t* ebx4;
    int32_t* ebx5;
    int32_t eax6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    void** eax19;
    signed char al20;
    signed char* eax21;
    void** eax22;
    void** tmp32_23;
    uint1_t cf24;
    void** eax25;
    int32_t edx26;
    int32_t edx27;
    signed char dl28;

    if (less_or_equal2) {
        *ecx = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ecx) + reinterpret_cast<int32_t>(eax3));
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44;
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = *ecx;
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = *ecx;
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        tmp32_23 = eax22;
        cf24 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_23) < reinterpret_cast<uint32_t>(eax22));
        eax25 = tmp32_23;
    }
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax25))) + cf24);
    *reinterpret_cast<signed char*>(edx26 - 0x73) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx27 - 0x73) + dl28);
}

uint32_t g804817a = 0x20000;

signed char g1;

struct s0 {
    signed char f0;
    signed char[17377] pad17378;
    signed char f43e2;
};

struct s0* fun_429999();

void fun_8048117() {
    int32_t ecx1;
    void* ebx2;
    signed char* edi3;
    signed char* edi4;
    signed char tmp8_5;
    struct s0* eax6;
    unsigned char al7;
    unsigned char* edx8;
    signed char* edx9;
    unsigned char* edx10;

    __asm__("int 0x80");
    ecx1 = 0x4b000;
    ebx2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4);
    __asm__("int 0x80");
    edi3 = reinterpret_cast<signed char*>(90);
    while (ecx1) {
        --ecx1;
        *edi3 = 0;
        ++edi3;
    }
    fun_804805c(0, 0, 28);
    __asm__("int 0x80");
    edi4 = reinterpret_cast<signed char*>(0x804817a ^ g804817a);
    __asm__("int 0xcc");
    tmp8_5 = reinterpret_cast<signed char>(g1 + 1);
    g1 = tmp8_5;
    *edi4 = reinterpret_cast<signed char>(*edi4 + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ebx2) + 1)));
    eax6 = fun_429999();
    __asm__("rol byte [eax], 0x0");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax6) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax6) + 1) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ebx2)));
    eax6->f43e2 = reinterpret_cast<signed char>(eax6->f43e2 + *reinterpret_cast<signed char*>(&eax6));
    if (!(reinterpret_cast<uint1_t>(!!(ecx1 - 1)) & reinterpret_cast<uint1_t>(!!eax6->f43e2))) {
        eax6->f0 = reinterpret_cast<signed char>(eax6->f0 + *reinterpret_cast<signed char*>(&eax6));
        al7 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax6) + eax6->f0);
        *edx8 = reinterpret_cast<unsigned char>(*edx9 + al7);
        __asm__("das ");
        if (!(al7 | *edx10)) {
        }
    }
}
