
void fun_8048780(int32_t a1, int32_t a2);

void fun_80487e4();

void fun_80489c0();

void fun_8049410();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_8048780(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0x1988 - 4)) {
        fun_80487e4();
    }
    fun_80489c0();
    fun_8049410();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048780(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0x1988 - 4)) {
        fun_80487e4();
    }
    fun_80489c0();
    fun_8049410();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x80487ea;

void fun_80487e4() {
    goto __gmon_start__;
}

int32_t g804a010 = 0;

void glPopMatrix(int32_t a1);

void fun_80489c0() {
    int32_t eax1;

    eax1 = g804a010;
    if (eax1 && !1) {
        glPopMatrix(0x804a010);
    }
    return;
}

int32_t g804a000 = -1;

void fun_8049410() {
    int32_t eax1;
    int32_t ebx2;

    eax1 = g804a000;
    if (eax1 != -1) {
        ebx2 = 0;
        do {
            eax1();
            eax1 = *reinterpret_cast<int32_t*>(ebx2 + 0x8049ffc);
            ebx2 = ebx2 - 4;
        } while (eax1 != -1);
    }
    return;
}

int32_t __libc_start_main = 0x804882a;

void fun_8048824(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t sinf = 0x804891a;

void fun_8048914(void* ecx) {
    goto sinf;
}

int32_t cosf = 0x80488aa;

void fun_80488a4(void* ecx, int32_t a2) {
    goto cosf;
}

int32_t g804a194 = 0;

void* g804a18c = reinterpret_cast<void*>(0);

int32_t g804a190 = 0;

void fun_80489e4(void* ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    void* v11;
    int32_t v12;
    int32_t v13;
    int32_t eax14;
    int32_t v15;
    void* eax16;
    int32_t edi17;
    int32_t edx18;
    void* ecx19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t eax23;
    int32_t v24;
    void* ecx25;
    int32_t edi26;
    int32_t eax27;
    int32_t v28;
    void* v29;
    int32_t v30;
    int32_t v31;
    void* eax32;
    uint32_t eax33;
    int32_t ecx34;
    uint32_t edi35;
    uint32_t esi36;
    void* eax37;
    uint32_t edx38;
    uint32_t ebx39;
    uint32_t ecx40;
    int32_t eax41;
    uint32_t eax42;
    int32_t edx43;
    void* ecx44;
    int32_t ebx45;
    int32_t v46;
    int32_t v47;
    int32_t v48;
    int32_t v49;
    int32_t v50;
    int32_t v51;
    int32_t esi52;
    int32_t v53;
    int32_t v54;
    int32_t v55;
    int32_t v56;
    int32_t v57;
    int32_t v58;
    int32_t v59;
    int32_t v60;

    if (a8 >= 0) {
        __asm__("fld qword [0x8049470]");
        __asm__("fld st0");
        __asm__("fmul dword [ebp+0x14]");
        __asm__("fld dword [0x8049480]");
        __asm__("fdiv st1, st0");
        __asm__("fxch st0, st1");
        __asm__("fstp dword [ebp-0x20]");
        __asm__("fxch st0, st1");
        __asm__("fmul dword [ebp+0x18]");
        __asm__("fdivrp st1, st0");
        __asm__("fstp dword [ebp-0x24]");
        fun_8048914(ecx);
        __asm__("fld dword [ebp+0x1c]");
        __asm__("fmulp st1, st0");
        __asm__("fstp dword [ebp+0xfffffef4]");
        fun_80488a4(v11, v12);
        __asm__("fld dword [ebp+0xfffffef4]");
        __asm__("fmulp st1, st0");
        __asm__("fld dword [ebp+0x8]");
        __asm__("faddp st1, st0");
        __asm__("fstp dword [ebp-0x7c]");
        fun_8048914(v11);
        __asm__("fld dword [ebp+0xfffffef4]");
        __asm__("fmulp st1, st0");
        __asm__("fld dword [ebp+0xc]");
        __asm__("faddp st1, st0");
        __asm__("fstp dword [ebp-0x78]");
        fun_80488a4(v11, v13);
        __asm__("fld dword [ebp+0x1c]");
        __asm__("fmulp st1, st0");
        __asm__("fld dword [ebp+0x10]");
        __asm__("faddp st1, st0");
        __asm__("fstp dword [ebp-0x74]");
        __asm__("fld dword [ebp+0x1c]");
        __asm__("fmul dword [0x8049484]");
        __asm__("fmul dword [0x8049488]");
        __asm__("fst dword [ebp-0x28]");
        __asm__("fmul dword [0x804948c]");
        __asm__("fstp dword [ebp-0x70]");
        if (a10 == 1) {
            eax14 = g804a194;
            v15 = eax14;
            eax16 = g804a18c;
            __asm__("fld dword [0x8049490]");
            __asm__("fstp dword [ebp-0x6c]");
            edi17 = 0;
            while (edx18 = edi17 + v15, edi17 = edi17 + 6, ecx19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax16) + 6), edi17 != 18) {
                __asm__("fld dword [ebp-0x24]");
                __asm__("fstp qword [ebp-0x40]");
                __asm__("fld qword [0x8049478]");
                __asm__("fadd qword [ebp-0x40]");
                __asm__("fstp dword [ebp+0xfffffef8]");
                fun_8048914(ecx19);
                __asm__("fst dword [ebp+0xfffffefc]");
                __asm__("fld dword [ebp-0x28]");
                __asm__("fmulp st1, st0");
                __asm__("fstp dword [ebp+0xffffff00]");
                __asm__("fld dword [ebp-0x20]");
                __asm__("fadd dword [ebp-0x6c]");
                __asm__("fst dword [ebp+0xffffff04]");
                __asm__("fstp dword [esp]");
                fun_80488a4(ecx19, v20);
                __asm__("fstp dword [ebp+0xffffff08]");
                __asm__("fld dword [ebp+0xffffff00]");
                __asm__("fmul dword [ebp+0xffffff08]");
                __asm__("fadd dword [ebp+0x8]");
                __asm__("fstp dword [esi-0x18]");
                fun_8048914(ecx19);
                __asm__("fst dword [ebp+0xffffff0c]");
                __asm__("fld dword [ebp+0xffffff00]");
                __asm__("fmulp st1, st0");
                __asm__("fld dword [ebp+0xc]");
                __asm__("faddp st1, st0");
                __asm__("fstp dword [esi-0x14]");
                fun_80488a4(ecx19, v21);
                __asm__("fld dword [ebp-0x28]");
                __asm__("fmul st0, st1");
                __asm__("fadd dword [ebp+0x10]");
                __asm__("fstp dword [esi-0x10]");
                __asm__("fld dword [ebp+0x8]");
                __asm__("fstp qword [ebp+0xffffff10]");
                __asm__("fld1 ");
                __asm__("fadd dword [ebp-0x28]");
                __asm__("fld st0");
                __asm__("fmul dword [ebp+0xfffffefc]");
                __asm__("fld dword [ebp+0xffffff08]");
                __asm__("fstp qword [ebp+0xffffff18]");
                __asm__("fld qword [ebp+0xffffff18]");
                __asm__("fmul st0, st1");
                __asm__("fadd qword [ebp+0xffffff10]");
                __asm__("fstp dword [ebx-0x18]");
                __asm__("fld dword [ebp+0xc]");
                __asm__("fstp qword [ebp+0xffffff20]");
                __asm__("fld dword [ebp+0xffffff0c]");
                __asm__("fstp qword [ebp+0xffffff28]");
                __asm__("fmul qword [ebp+0xffffff28]");
                __asm__("fadd qword [ebp+0xffffff20]");
                __asm__("fstp dword [ebx-0x14]");
                __asm__("fld dword [ebp+0x10]");
                __asm__("fstp qword [ebp+0xffffff30]");
                __asm__("fmul st1, st0");
                __asm__("fxch st0, st1");
                __asm__("fadd qword [ebp+0xffffff30]");
                __asm__("fstp dword [ebx-0x10]");
                __asm__("fld qword [0x8049478]");
                __asm__("fsubr qword [ebp-0x40]");
                __asm__("fstp dword [ebp+0xffffff38]");
                __asm__("fstp qword [ebp+0xfffffed8]");
                fun_8048914(ecx19);
                __asm__("fstp dword [ebp+0xffffff3c]");
                __asm__("fld dword [ebp-0x28]");
                __asm__("fmul dword [ebp+0xffffff3c]");
                __asm__("fld dword [ebp+0xffffff08]");
                __asm__("fmul st0, st1");
                __asm__("fld dword [ebp+0x8]");
                __asm__("faddp st1, st0");
                __asm__("fstp dword [esi-0xc]");
                __asm__("fmul dword [ebp+0xffffff0c]");
                __asm__("fadd dword [ebp+0xc]");
                __asm__("fstp dword [esi-0x8]");
                fun_80488a4(ecx19, v22);
                __asm__("fld dword [ebp-0x28]");
                __asm__("fmul st0, st1");
                __asm__("fadd dword [ebp+0x10]");
                __asm__("fstp dword [esi-0x4]");
                __asm__("fld qword [ebp+0xfffffed8]");
                __asm__("fld st0");
                __asm__("fmul dword [ebp+0xffffff3c]");
                __asm__("fld qword [ebp+0xffffff18]");
                __asm__("fmul st0, st1");
                __asm__("fstp qword [ebp+0xffffff18]");
                __asm__("fld qword [ebp+0xffffff10]");
                __asm__("fadd qword [ebp+0xffffff18]");
                __asm__("fstp dword [ebx-0xc]");
                __asm__("fmul qword [ebp+0xffffff28]");
                __asm__("fadd qword [ebp+0xffffff20]");
                __asm__("fstp dword [ebx-0x8]");
                __asm__("fmulp st1, st0");
                __asm__("fadd qword [ebp+0xffffff30]");
                __asm__("fst qword [ebp+0xffffff30]");
                __asm__("fstp dword [ebx-0x4]");
                __asm__("fld qword [ebp+0xffffff40]");
                __asm__("fadd qword [0x8049470]");
                __asm__("fstp dword [ebp-0x6c]");
                eax16 = ecx19;
            }
            g804a194 = edx18;
            g804a18c = eax16;
        }
        eax23 = g804a194;
        v24 = eax23;
        ecx25 = g804a18c;
        __asm__("fld dword [0x8049490]");
        __asm__("fstp dword [ebp-0x5c]");
        edi26 = 0;
        while (eax27 = edi26 + v24, edi26 = edi26 + 6, edi26 != 18) {
            __asm__("fld dword [ebp-0x24]");
            __asm__("fstp qword [ebp-0x38]");
            __asm__("fld qword [0x8049478]");
            __asm__("fadd qword [ebp-0x38]");
            __asm__("fstp dword [ebp-0x44]");
            fun_8048914(ecx25);
            __asm__("fst dword [ebp+0xffffff48]");
            __asm__("fld dword [ebp-0x70]");
            __asm__("fmulp st1, st0");
            __asm__("fstp dword [ebp+0xffffff4c]");
            __asm__("fld dword [ebp-0x20]");
            __asm__("fadd dword [ebp-0x5c]");
            __asm__("fst dword [ebp-0x48]");
            __asm__("fstp dword [esp]");
            fun_80488a4(ecx25, v28);
            __asm__("fstp dword [ebp+0xffffff50]");
            __asm__("fld dword [ebp+0xffffff4c]");
            __asm__("fmul dword [ebp+0xffffff50]");
            __asm__("fadd dword [ebp-0x7c]");
            __asm__("fstp dword [esi-0x18]");
            fun_8048914(ecx25);
            __asm__("fst dword [ebp+0xffffff54]");
            __asm__("fld dword [ebp+0xffffff4c]");
            __asm__("fmulp st1, st0");
            __asm__("fld dword [ebp-0x78]");
            __asm__("faddp st1, st0");
            __asm__("fstp dword [esi-0x14]");
            fun_80488a4(v29, v30);
            __asm__("fld dword [ebp-0x70]");
            __asm__("fmul st0, st1");
            __asm__("fadd dword [ebp-0x74]");
            __asm__("fstp dword [esi-0x10]");
            __asm__("fld dword [ebp-0x7c]");
            __asm__("fstp qword [ebp+0xffffff58]");
            __asm__("fld1 ");
            __asm__("fadd dword [ebp-0x70]");
            __asm__("fld st0");
            __asm__("fmul dword [ebp+0xffffff48]");
            __asm__("fld dword [ebp+0xffffff50]");
            __asm__("fstp qword [ebp+0xffffff60]");
            __asm__("fld qword [ebp+0xffffff60]");
            __asm__("fmul st0, st1");
            __asm__("fadd qword [ebp+0xffffff58]");
            __asm__("fstp dword [ebx-0x18]");
            __asm__("fld dword [ebp-0x78]");
            __asm__("fstp qword [ebp+0xffffff68]");
            __asm__("fld dword [ebp+0xffffff54]");
            __asm__("fstp qword [ebp+0xffffff70]");
            __asm__("fmul qword [ebp+0xffffff70]");
            __asm__("fadd qword [ebp+0xffffff68]");
            __asm__("fstp dword [ebx-0x14]");
            __asm__("fld dword [ebp-0x74]");
            __asm__("fstp qword [ebp+0xffffff78]");
            __asm__("fmul st1, st0");
            __asm__("fxch st0, st1");
            __asm__("fadd qword [ebp+0xffffff78]");
            __asm__("fstp dword [ebx-0x10]");
            __asm__("fld qword [0x8049478]");
            __asm__("fsubr qword [ebp-0x38]");
            __asm__("fstp dword [ebp-0x4c]");
            __asm__("fstp qword [ebp+0xfffffed8]");
            fun_8048914(v29);
            __asm__("fstp dword [ebp-0x80]");
            __asm__("fld dword [ebp-0x70]");
            __asm__("fmul dword [ebp-0x80]");
            __asm__("fld dword [ebp+0xffffff50]");
            __asm__("fmul st0, st1");
            __asm__("fld dword [ebp-0x7c]");
            __asm__("faddp st1, st0");
            __asm__("fstp dword [esi-0xc]");
            __asm__("fmul dword [ebp+0xffffff54]");
            __asm__("fadd dword [ebp-0x78]");
            __asm__("fstp dword [esi-0x8]");
            fun_80488a4(v29, v31);
            __asm__("fld dword [ebp-0x70]");
            __asm__("fmul st0, st1");
            __asm__("fadd dword [ebp-0x74]");
            __asm__("fstp dword [esi-0x4]");
            __asm__("fld qword [ebp+0xfffffed8]");
            __asm__("fld st0");
            __asm__("fmul dword [ebp-0x80]");
            __asm__("fld qword [ebp+0xffffff60]");
            __asm__("fmul st0, st1");
            __asm__("fstp qword [ebp+0xffffff60]");
            __asm__("fld qword [ebp+0xffffff58]");
            __asm__("fadd qword [ebp+0xffffff60]");
            __asm__("fstp dword [ebx-0xc]");
            __asm__("fmul qword [ebp+0xffffff70]");
            __asm__("fadd qword [ebp+0xffffff68]");
            __asm__("fstp dword [ebx-0x8]");
            __asm__("fmulp st1, st0");
            __asm__("fadd qword [ebp+0xffffff78]");
            __asm__("fst qword [ebp+0xffffff78]");
            __asm__("fstp dword [ebx-0x4]");
            __asm__("fld qword [ebp-0x30]");
            __asm__("fadd qword [0x8049470]");
            __asm__("fstp dword [ebp-0x5c]");
            ecx25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx25) + 6);
        }
        g804a194 = eax27;
        g804a18c = ecx25;
        eax32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx25) / 3);
        eax33 = reinterpret_cast<uint32_t>(eax32) - 8;
        ecx34 = g804a190;
        *reinterpret_cast<uint32_t*>(ecx34 * 4 + 0x804a198) = eax33;
        edi35 = reinterpret_cast<uint32_t>(eax32) - 7;
        *reinterpret_cast<uint32_t*>(ecx34 * 4 + 0x804a19c) = edi35;
        esi36 = reinterpret_cast<uint32_t>(eax32) - 3;
        *reinterpret_cast<uint32_t*>(ecx34 * 4 + 0x804a1a0) = esi36;
        eax37 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax32) - 4);
        *reinterpret_cast<void**>(ecx34 * 4 + 0x804a1a4) = eax37;
        edx38 = reinterpret_cast<uint32_t>(eax32) - 6;
        *reinterpret_cast<uint32_t*>(ecx34 * 4 + 0x804a1a8) = edx38;
        ebx39 = reinterpret_cast<uint32_t>(eax32) - 5;
        *reinterpret_cast<uint32_t*>(ecx34 * 4 + 0x804a1ac) = ebx39;
        ecx40 = reinterpret_cast<uint32_t>(eax32) - 1;
        eax41 = g804a190;
        *reinterpret_cast<uint32_t*>(eax41 * 4 + 0x804a1b0) = ecx40;
        eax42 = reinterpret_cast<uint32_t>(eax32) - 2;
        edx43 = g804a190;
        *reinterpret_cast<uint32_t*>(edx43 * 4 + 0x804a1b4) = eax42;
        *reinterpret_cast<uint32_t*>(edx43 * 4 + 0x804a1b8) = edi35;
        *reinterpret_cast<uint32_t*>(edx43 * 4 + 0x804a1bc) = esi36;
        *reinterpret_cast<uint32_t*>(edx43 * 4 + 0x804a1c0) = ecx40;
        *reinterpret_cast<uint32_t*>(edx43 * 4 + 0x804a1c4) = ebx39;
        *reinterpret_cast<uint32_t*>(edx43 * 4 + 0x804a1c8) = eax33;
        ecx44 = eax37;
        *reinterpret_cast<void**>(edx43 * 4 + 0x804a1cc) = ecx44;
        *reinterpret_cast<uint32_t*>(edx43 * 4 + 0x804a1d0) = eax42;
        *reinterpret_cast<uint32_t*>(edx43 * 4 + 0x804a1d4) = edx38;
        g804a190 = edx43 + 16;
        __asm__("fld dword [ebp-0x70]");
        __asm__("fadd st0, st0");
        __asm__("fdiv dword [0x8049488]");
        __asm__("fst dword [ebp-0x60]");
        ebx45 = a8 - 1;
        __asm__("fstp dword [esp+0x4]");
        __asm__("fld dword [ebp+0x18]");
        __asm__("fadd dword [0x8049494]");
        __asm__("fstp dword [esp]");
        v46 = a5;
        fun_80489e4(ecx44, v47, v48, v49, v46, v50, v51, ebx45, a9, 0);
        if (a9) {
            __asm__("fld dword [0x8049498]");
            __asm__("fstp dword [ebp-0x58]");
            esi52 = 0;
            do {
                __asm__("fld dword [ebp+0x14]");
                __asm__("fadd dword [ebp-0x58]");
                __asm__("fstp dword [esp]");
                fun_80489e4(ecx44, v53, v54, v55, v46, a6, v56, ebx45, 0, 1);
                __asm__("fld dword [ebp+0x18]");
                __asm__("fadd dword [ebp-0x58]");
                __asm__("fstp dword [esp]");
                v46 = a5;
                fun_80489e4(ecx44, v57, v58, v59, v46, a6, v60, ebx45, 0, 1);
                __asm__("fld dword [ebp-0x58]");
                __asm__("fadd dword [0x8049480]");
                __asm__("fstp dword [ebp-0x58]");
                ++esi52;
            } while (esi52 != 2);
        }
    }
    return;
}

void fun_8048874(int32_t a1, int32_t a2, void* a3);

void fun_80488d4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, void* a7, int32_t a8);

void fun_8048934(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

void fun_8048904(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

void fun_80488e4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);

void fun_80488c4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);

void fun_8048944(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

int32_t g8084b18 = 0;

int32_t g8084b1c = 0;

int32_t g8084b20 = 0;

int32_t g804a198 = 0;

int32_t g8084b24 = 0;

int32_t g8084b28 = 0;

int32_t g8084b2c = 0;

int32_t g804a19c = 0;

int32_t g8084b30 = 0;

int32_t g8084b34 = 0;

int32_t g8084b38 = 0;

int32_t g804a1a0 = 0;

int32_t g8084b3c = 0;

int32_t g8084b40 = 0;

int32_t g8084b44 = 0;

int32_t g804a1a4 = 0;

void fun_804908a(void* ecx) {
    int32_t ebx2;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;

    g804a190 = 0;
    g804a18c = reinterpret_cast<void*>(0);
    g804a194 = 0;
    __asm__("fldz ");
    __asm__("fstp dword [ebp-0x1c]");
    ebx2 = 0;
    while (fun_80489e4(ecx, 0, 0, 0, 0, v3, 0x3dcccccd, 14, 1, 1), ++ebx2, ebx2 != 4) {
        __asm__("fstp st0");
    }
    __asm__("fst dword [esp+0x4]");
    __asm__("fst dword [esp]");
    __asm__("fstp dword [ebp-0x28]");
    fun_80489e4(ecx, 0, 0, 0, 0, v3, 0x3dcccccd, 14, 1, 1);
    __asm__("fld dword [ebp-0x28]");
    __asm__("fstp dword [esp]");
    fun_80489e4(ecx, 0, 0, 0, 0x43870000, v3, 0x3dcccccd, 14, 1, 1);
    fun_8048874(0x1406, 0, 0x80d2d18);
    fun_80488d4(0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000, 0x1406, 0, 0x80d2d18, v4);
    fun_8048934(3, 0x1406, 0, 0x8084b18);
    fun_8048904(3, 0x1406, 0, 0x8084b18);
    fun_80488e4(0x428c6666, 0x3f800000, 0x3f333333, 0, 3, 0x1406, 0, 0x8084b18);
    v5 = g804a190;
    fun_80488c4(7, v5, 0x1405, 0x804a198, v6, v7, v8, v9);
    fun_8048944(7, v5, 0x1405, 0x804a198);
    g8084b18 = 0xbf000000;
    g8084b1c = 0xbf000000;
    g8084b20 = 0xbf000000;
    g804a198 = 0;
    g8084b24 = 0x3f000000;
    g8084b28 = 0xbf000000;
    g8084b2c = 0xbf000000;
    g804a19c = 1;
    g8084b30 = 0x3f000000;
    g8084b34 = 0x3f000000;
    g8084b38 = 0xbf000000;
    g804a1a0 = 2;
    g8084b3c = 0xbf000000;
    g8084b40 = 0x3f000000;
    g8084b44 = 0xbf000000;
    g804a1a4 = 3;
    fun_80488c4(7, 4, 0x1405, 0x804a198, 7, v5, 0x1405, 0x804a198);
    return;
}

int32_t glNormalPointer = 0x804887a;

void fun_8048874(int32_t a1, int32_t a2, void* a3) {
    goto glNormalPointer;
}

int32_t glColor4f = 0x80488da;

void fun_80488d4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, void* a7, int32_t a8) {
    goto glColor4f;
}

int32_t glVertexPointer = 0x804893a;

void fun_8048934(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto glVertexPointer;
}

int32_t glPushMatrix = 0x804890a;

void fun_8048904(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto glPushMatrix;
}

int32_t glRotatef = 0x80488ea;

void fun_80488e4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    goto glRotatef;
}

int32_t glDrawElements = 0x80488ca;

void fun_80488c4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    goto glDrawElements;
}

int32_t glPopMatrix = 0x804894a;

void fun_8048944(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto glPopMatrix;
}

int32_t glClear = 0x80487fa;

void fun_80487f4(int32_t a1, int32_t a2, void* a3, int32_t a4) {
    goto glClear;
}

int32_t SDL_GL_SwapBuffers = 0x804883a;

void fun_8048834() {
    goto SDL_GL_SwapBuffers;
}

int32_t SDL_ShowCursor = 0x804880a;

void fun_8048804(int32_t a1, int32_t a2, void* a3, int32_t a4) {
    goto SDL_ShowCursor;
}

int32_t SDL_Quit = 0x804892a;

void fun_8048924(int32_t a1, int32_t a2, void* a3, int32_t a4) {
    goto SDL_Quit;
}

void fun_804940a() {
    return;
}

int32_t memcpy = 0x804889a;

void fun_8048894(void* a1, int32_t a2, void* a3) {
    goto memcpy;
}

int32_t SDL_Init = 0x804888a;

void fun_8048884(int32_t a1, int32_t a2, void* a3) {
    goto SDL_Init;
}

int32_t SDL_SetVideoMode = 0x804886a;

void fun_8048864(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, void* a7) {
    goto SDL_SetVideoMode;
}

int32_t glClearColor = 0x804885a;

void fun_8048854(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, void* a7) {
    goto glClearColor;
}

int32_t glMatrixMode = 0x80487da;

void fun_80487d4(int32_t a1, int32_t a2, void* a3) {
    goto glMatrixMode;
}

int32_t glLoadIdentity = 0x804884a;

void fun_8048844(int32_t a1, int32_t a2, void* a3) {
    goto glLoadIdentity;
}

int32_t glEnable = 0x80487ba;

void fun_80487b4(int32_t a1, int32_t a2, void* a3) {
    goto glEnable;
}

int32_t glEnableClientState = 0x80487ca;

void fun_80487c4(int32_t a1, int32_t a2, void* a3) {
    goto glEnableClientState;
}

int32_t glOrtho = 0x80488ba;

void fun_80488b4() {
    goto glOrtho;
}

int32_t glLightfv = 0x80488fa;

void fun_80488f4(int32_t a1, int32_t a2, void* a3) {
    goto glLightfv;
}

int32_t SDL_PollEvent = 0x804881a;

int32_t fun_8048814(void* a1, int32_t a2, void* a3, int32_t a4) {
    goto SDL_PollEvent;
}

void fun_8048990();

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8049448(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s1* ebp5;

    fun_8048990();
    goto ebp5->f4;
}

signed char _edata = 0;

int32_t* g804a184 = reinterpret_cast<int32_t*>(0x804a00c);

void fun_8048990() {
    int1_t zf1;
    int32_t* eax2;
    int32_t edx3;

    zf1 = _edata == 0;
    if (zf1) {
        while (eax2 = g804a184, edx3 = *eax2, !!edx3) {
            g804a184 = eax2 + 1;
            edx3();
        }
        _edata = 1;
    }
    return;
}

int32_t fun_804922c();

void fun_80493a0();

void fun_8048960() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048824(fun_804922c, __return_address(), esp1, 0x80493b0, fun_80493a0, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

int32_t fun_804922c() {
    void* ecx1;
    void* ebp2;
    void* ebx3;
    int32_t v4;
    void* v5;
    int32_t ebx6;
    void* esi7;
    int32_t eax8;
    signed char v9;
    int32_t v10;

    ecx1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(__zero_stack_offset()) + 4);
    ebp2 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(__zero_stack_offset()) & 0xfffffff0) - 4 - 4);
    ebx3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp2) - 24);
    fun_8048894(ebx3, 0x8049460, 12);
    fun_8048884(32, 0x8049460, 12);
    fun_8048864(0x400, 0x300, 32, 0xa0000013, 32, 0x8049460, 12);
    fun_8048804(0, 0x8049460, 12, v4);
    fun_8048854(0, 0, 0, 0, 0, 0x8049460, 12);
    fun_80487d4(0x1701, 0x8049460, 12);
    fun_8048844(0x1701, 0x8049460, 12);
    fun_80487b4(0xb71, 0x8049460, 12);
    fun_80487b4(0xb50, 0x8049460, 12);
    fun_80487b4(0x4000, 0x8049460, 12);
    fun_80487b4(0xba1, 0x8049460, 12);
    fun_80487c4(0x8074, 0x8049460, 12);
    fun_80487c4(0x8075, 0x8049460, 12);
    __asm__("fld dword [0x8049484]");
    __asm__("fst qword [esp+0x18]");
    __asm__("fld dword [0x80494a0]");
    __asm__("fst qword [esp+0x10]");
    __asm__("fxch st0, st1");
    __asm__("fstp qword [esp+0x8]");
    __asm__("fstp qword [esp]");
    fun_80488b4();
    v5 = ebx3;
    fun_80488f4(0x4000, 0x1203, v5);
    ebx6 = 0;
    esi7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp2) - 44);
    while (1) {
        eax8 = fun_8048814(esi7, 0x1203, v5, 0x8049379);
        if (eax8) {
            if (v9 != 2) 
                continue;
            if (v10 != 27) 
                continue;
            ebx6 = 1;
        } else {
            fun_80487f4(0x4100, 0x1203, v5, 0x8049379);
            fun_80488d4(0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000, 0x4100, 0x1203, v5, 0x8049379);
            fun_804908a(ecx1);
            fun_8048834();
            if (ebx6) 
                break;
        }
    }
    fun_8048804(1, 0x1203, v5, 0x8049379);
    fun_8048924(1, 0x1203, v5, 0x8049379);
    return 0;
}

void fun_80493a0() {
    return;
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_8049448(v1, ebx2, ebp3, __return_address());
}

int32_t g804a110 = 0;

void fun_80487ea() {
    goto g804a110;
}

void fun_80487b0() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_804882a() {
    goto 0x80487a4;
}

void fun_804891a() {
    goto 0x80487a4;
}

void fun_80488aa() {
    goto 0x80487a4;
}

void fun_804887a() {
    goto 0x80487a4;
}

void fun_80488da() {
    goto 0x80487a4;
}

void fun_804893a() {
    goto 0x80487a4;
}

void fun_804890a() {
    goto 0x80487a4;
}

void fun_80488ea() {
    goto 0x80487a4;
}

void fun_80488ca() {
    goto 0x80487a4;
}

void fun_804894a() {
    goto 0x80487a4;
}

void fun_80487fa() {
    goto 0x80487a4;
}

void fun_804883a() {
    goto 0x80487a4;
}

void fun_804880a() {
    goto 0x80487a4;
}

void fun_804892a() {
    goto 0x80487a4;
}

void fun_80493a5(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    int32_t edi6;
    int32_t esi7;

    fun_804940a();
    ebx4 = ebx5 + 0xd4d;
    _init();
    edi6 = ebx4 - 0x108 - (ebx4 - 0x108) >> 2;
    if (edi6) {
        esi7 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi7 * 4 - 0x108)(a1, a2, a3);
            ++esi7;
        } while (edi6 != esi7);
    }
    return;
}

void fun_804889a() {
    goto 0x80487a4;
}

void fun_804888a() {
    goto 0x80487a4;
}

void fun_804886a() {
    goto 0x80487a4;
}

void fun_804885a() {
    goto 0x80487a4;
}

void fun_80487da() {
    goto 0x80487a4;
}

void fun_804884a() {
    goto 0x80487a4;
}

void fun_80487ba() {
    goto 0x80487a4;
}

void fun_80487ca() {
    goto 0x80487a4;
}

void fun_80488ba() {
    goto 0x80487a4;
}

void fun_80488fa() {
    goto 0x80487a4;
}

void fun_804881a() {
    goto 0x80487a4;
}
