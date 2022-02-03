
void fun_80487f0(int32_t a1, int32_t a2);

void fun_8048854();

void frame_dummy();

void __do_global_ctors_aux();

int32_t _init() {
    int32_t v1;
    int32_t ebx2;
    int32_t v3;

    fun_80487f0(v1, ebx2);
    if (*reinterpret_cast<int32_t*>(v3 + 0xd804 - 8)) {
        fun_8048854();
    }
    frame_dummy();
    __do_global_ctors_aux();
    return ebx2;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80487f0(int32_t a1, int32_t a2) {
    struct s0* ebp3;

    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 0xd804 - 8)) {
        fun_8048854();
    }
    frame_dummy();
    __do_global_ctors_aux();
    goto ebp3->f4;
}

int32_t __gmon_start__ = 0x804885a;

void fun_8048854() {
    goto __gmon_start__;
}

int32_t __JCR_END__ = 0;

void sin(int32_t a1);

void frame_dummy() {
    int32_t eax1;

    eax1 = __JCR_END__;
    if (eax1 && !1) {
        sin(0x8055f10);
    }
    return;
}

int32_t __init_array_start = -1;

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t* ebx2;

    eax1 = __init_array_start;
    if (eax1 != -1) {
        ebx2 = reinterpret_cast<int32_t*>(0x8055f00);
        do {
            --ebx2;
            eax1();
            eax1 = *ebx2;
        } while (eax1 != -1);
    }
    return;
}

int32_t __libc_start_main = 0x80488ba;

void fun_80488b4(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

void** quantum_gcd(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;

    while (a2) {
        v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(a1) % reinterpret_cast<int32_t>(a2));
        a1 = a2;
        a2 = v6;
    }
    return a1;
}

void quantum_frac_approx(int32_t* a1, int32_t* a2, void** a3, void** a4, void** a5) {
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    void** ecx12;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int16_t ax16;
    int16_t fpu_status_word17;

    __asm__("fild dword [esp]");
    __asm__("fild dword [esp]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [ebp-0x4]");
    v6 = 0;
    v7 = 1;
    v8 = 1;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    __asm__("fnstcw word [ebp-0x36]");
    do {
        __asm__("fld dword [ebp-0x8]");
        __asm__("fld qword [0x8054278]");
        __asm__("faddp st1, st0");
        __asm__("fldcw word [ebp-0x38]");
        __asm__("fistp dword [ebp-0xc]");
        __asm__("fldcw word [ebp-0x36]");
        __asm__("fld dword [ebp-0x8]");
        __asm__("fild dword [ebp-0xc]");
        __asm__("fld qword [0x8054278]");
        __asm__("fsubp st1, st0");
        __asm__("fsubp st1, st0");
        __asm__("fstp dword [ebp-0x8]");
        __asm__("fld1 ");
        __asm__("fdiv dword [ebp-0x8]");
        __asm__("fstp dword [ebp-0x8]");
        ecx12 = a3;
        if (v13 * v9 + v7 > 1 << *reinterpret_cast<unsigned char*>(&ecx12)) 
            break;
        v10 = v14 * v8 + v6;
        v11 = v15 * v9 + v7;
        v6 = v8;
        v7 = v9;
        v8 = v10;
        v9 = v11;
        __asm__("fild dword [ebp-0x20]");
        __asm__("fild dword [ebp-0x24]");
        __asm__("fdivp st1, st0");
        __asm__("fld dword [ebp-0x4]");
        __asm__("fsubp st1, st0");
        __asm__("fabs ");
        __asm__("fild dword [esp]");
        __asm__("fld1 ");
        __asm__("fdivrp st1, st0");
        __asm__("fxch st0, st1");
        __asm__("fucompp ");
        ax16 = fpu_status_word17;
    } while (!reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax16) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax16) + 1)));
    *a1 = v10;
    *a2 = v11;
    return;
}

void** quantum_getwidth(void** a1) {
    void** v2;
    void** ecx3;

    v2 = reinterpret_cast<void**>(1);
    while (ecx3 = v2, reinterpret_cast<int32_t>(1 << *reinterpret_cast<unsigned char*>(&ecx3)) < reinterpret_cast<int32_t>(a1)) {
        v2 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v2) + 1);
    }
    return v2;
}

int32_t quantum_inverse_mod(void** a1, int32_t a2) {
    int32_t v3;

    v3 = 1;
    while (v3 * a2 % reinterpret_cast<int32_t>(a1) != 1) {
        ++v3;
    }
    return v3;
}

int32_t calloc = 0x804888a;

void** fun_8048884(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto calloc;
}

int32_t quantum_error_handler(int32_t a1);

void** stdout = reinterpret_cast<void**>(0);

void fun_80488e4(void** a1);

void** quantum_strerr(void** a1);

void** stderr = reinterpret_cast<void**>(0);

void fun_8048994(void** a1, void** a2, void** a3, void** a4, void** a5);

void fun_8048824();

void** quantum_sigma_x(void** a1, void** a2, void** a3, void** a4, void** a5);

void** mul_mod_n(void** a1, int32_t a2, void** a3, void** a4, void** a5);

void quantum_error(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    int32_t eax8;
    void** eax9;
    void** eax10;
    void** edx11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** v16;
    void* eax17;
    void* v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void* v23;
    void* v24;
    int32_t v25;
    void* v26;
    void* v27;
    void** v28;
    void** v29;

    eax8 = quantum_error_handler(0);
    if (!eax8) {
        eax9 = stdout;
        fun_80488e4(eax9);
        eax10 = quantum_strerr(a1);
        edx11 = stderr;
        v12 = eax10;
        fun_8048994(edx11, "ERROR: %s\n", v12, v13, v14);
        eax15 = stderr;
        v16 = eax15;
        fun_80488e4(v16);
        fun_8048824();
        eax17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v18) + 1);
        quantum_sigma_x(reinterpret_cast<uint32_t>(eax17) + reinterpret_cast<uint32_t>(eax17), v19, v20, v21, v22);
        v23 = reinterpret_cast<void*>(1);
        while (reinterpret_cast<int32_t>(v23) <= reinterpret_cast<int32_t>(v24)) {
            v25 = reinterpret_cast<int32_t>(v12) % reinterpret_cast<int32_t>("ERROR: %s\n");
            v26 = reinterpret_cast<void*>(1);
            while (reinterpret_cast<int32_t>(v26) < reinterpret_cast<int32_t>(v23)) {
                v25 = v25 * v25 % reinterpret_cast<int32_t>("ERROR: %s\n");
                v26 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v26) + 1);
            }
            mul_mod_n("ERROR: %s\n", v25, reinterpret_cast<int32_t>(v27) + reinterpret_cast<int32_t>(v27) + reinterpret_cast<int32_t>(v27) + 1 + reinterpret_cast<uint32_t>(v23), v28, v29);
            v23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v23) + 1);
        }
        goto v16;
    } else {
        eax8(a1);
        return;
    }
}

int32_t log = 0x80489da;

void fun_80489d4(void** a1, void** a2) {
    goto log;
}

int32_t sqrt = 0x80488fa;

void fun_80488f4(void** a1, void** a2, void** a3, void** a4) {
    goto sqrt;
}

struct s1 {
    void** f0;
    void** f4;
    void** f8;
};

void fun_8048934(struct s1* a1, void** a2, void** a3);

void fun_8048a14(struct s1* a1, void** a2, void** a3);

struct s1* __muldc3(struct s1* a1, void** a2, void** a3);

void** quantum_cexp(void** a1, void** a2, void** a3, void** a4) {
    struct s1* v5;
    void** v6;
    void** v7;
    struct s1* v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8048934(v5, v6, v7);
    __asm__("fstp qword [ebp-0x28]");
    __asm__("fldz ");
    __asm__("fstp qword [ebp-0x30]");
    __asm__("fld dword [ebp+0x8]");
    __asm__("fstp qword [esp]");
    fun_8048a14(v8, v9, v10);
    __asm__("fldz ");
    __asm__("fld1 ");
    __asm__("fstp qword [esp+0x1c]");
    __asm__("fldz ");
    __asm__("fstp qword [esp+0x14]");
    __asm__("fstp qword [esp+0xc]");
    __asm__("fstp qword [esp+0x4]");
    __muldc3(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24, v11, v12);
    __asm__("fld qword [ebp-0x18]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x28]");
    __asm__("fld qword [ebp-0x30]");
    __asm__("fxch st0, st3");
    __asm__("faddp st1, st0");
    __asm__("fxch st0, st1");
    __asm__("faddp st2, st0");
    __asm__("fstp dword [ebp-0x1c]");
    __asm__("fld dword [ebp-0x1c]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp-0x1c]");
    __asm__("fld dword [ebp-0x1c]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp-0x34]");
    __asm__("fstp dword [ebp-0x34]");
    return v13;
}

/* __i686.get_pc_thunk.cx */
void __i686_get_pc_thunk_cx();

void** __mulsc3(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    int16_t ax9;
    int16_t fpu_status_word10;
    int16_t ax11;
    int16_t fpu_status_word12;
    int16_t ax13;
    int16_t fpu_status_word14;
    int16_t ax15;
    int16_t fpu_status_word16;
    int16_t ax17;
    int16_t fpu_status_word18;
    int16_t ax19;
    int16_t fpu_status_word20;
    int16_t ax21;
    int16_t fpu_status_word22;
    int32_t edx23;
    int16_t ax24;
    int16_t fpu_status_word25;
    int16_t ax26;
    int16_t fpu_status_word27;
    int16_t ax28;
    int16_t fpu_status_word29;
    int16_t ax30;
    int16_t fpu_status_word31;
    int16_t ax32;
    int16_t fpu_status_word33;
    int16_t ax34;
    int16_t fpu_status_word35;
    void** v36;
    int16_t ax37;
    int16_t fpu_status_word38;
    int16_t ax39;
    int16_t fpu_status_word40;
    int16_t ax41;
    int16_t fpu_status_word42;
    int16_t ax43;
    int16_t fpu_status_word44;
    int16_t ax45;
    int16_t fpu_status_word46;
    int16_t ax47;
    int16_t fpu_status_word48;
    int16_t ax49;
    int16_t fpu_status_word50;
    int16_t ax51;
    int16_t fpu_status_word52;
    int16_t ax53;
    int16_t fpu_status_word54;
    int16_t ax55;
    int16_t fpu_status_word56;
    int16_t ax57;
    int16_t fpu_status_word58;
    int16_t ax59;
    int16_t fpu_status_word60;
    int16_t ax61;
    int16_t fpu_status_word62;
    int16_t ax63;
    int16_t fpu_status_word64;
    int16_t ax65;
    int16_t fpu_status_word66;
    int16_t ax67;
    int16_t fpu_status_word68;
    int16_t ax69;
    int16_t fpu_status_word70;
    int16_t ax71;
    int16_t fpu_status_word72;
    int16_t ax73;
    int16_t fpu_status_word74;
    int16_t ax75;
    int16_t fpu_status_word76;
    int16_t ax77;
    int16_t fpu_status_word78;
    int16_t ax79;
    int16_t fpu_status_word80;
    int16_t ax81;
    int16_t fpu_status_word82;
    int16_t ax83;
    int16_t fpu_status_word84;
    int16_t ax85;
    int16_t fpu_status_word86;
    int16_t ax87;
    int16_t fpu_status_word88;
    int16_t ax89;
    int16_t fpu_status_word90;
    int16_t ax91;
    int16_t fpu_status_word92;
    int16_t ax93;
    int16_t fpu_status_word94;
    int16_t ax95;
    int16_t fpu_status_word96;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fld dword [ebp+0xc]");
    __asm__("fld dword [ebp+0x10]");
    __asm__("fld dword [ebp+0x14]");
    __asm__("fld st3");
    __asm__("fmul st0, st2");
    __i686_get_pc_thunk_cx();
    __asm__("fstp dword [ebp-0x4]");
    __asm__("fld st2");
    __asm__("fmul st0, st1");
    __asm__("fstp dword [ebp-0x8]");
    __asm__("fld st3");
    __asm__("fmul st0, st1");
    __asm__("fstp dword [ebp-0xc]");
    __asm__("fld st2");
    __asm__("fmul st0, st2");
    __asm__("fstp dword [ebp-0x10]");
    __asm__("fld dword [ebp-0x4]");
    __asm__("fld dword [ebp-0x8]");
    __asm__("fld st1");
    __asm__("fsub st0, st1");
    __asm__("fld dword [ebp-0xc]");
    __asm__("fstp dword [ebp-0x3c]");
    __asm__("fld dword [ebp-0x10]");
    __asm__("fst dword [ebp-0x34]");
    __asm__("fadd dword [ebp-0x3c]");
    __asm__("fstp dword [ebp-0x18]");
    __asm__("fucom st0");
    ax9 = fpu_status_word10;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax9) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax9) + 1)) {
        __asm__("fld dword [ebp-0x18]");
        __asm__("fucomp st0");
        ax11 = fpu_status_word12;
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax11) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax11) + 1)) {
            __asm__("fld st6");
            __asm__("fsub st0, st7");
            __asm__("fst dword [ebp-0x30]");
            __asm__("fxch st0, st7");
            __asm__("fucom st0");
            ax13 = fpu_status_word14;
            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax13) + 1)) {
                __asm__("fstp st7");
                __asm__("fxch st0, st1");
                __asm__("fxch st0, st2");
                __asm__("fxch st0, st3");
                __asm__("fxch st0, st4");
                __asm__("fxch st0, st5");
                __asm__("fxch st0, st6");
            } else {
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax13) + 1)) {
                    __asm__("fstp st7");
                    __asm__("fxch st0, st1");
                    __asm__("fxch st0, st2");
                    __asm__("fxch st0, st3");
                    __asm__("fxch st0, st4");
                    __asm__("fxch st0, st5");
                    __asm__("fxch st0, st6");
                } else {
                    __asm__("fxch st0, st7");
                    __asm__("fucomp st0");
                    ax15 = fpu_status_word16;
                    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax15) + 1)) {
                        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax15) + 1)) {
                            __asm__("fxch st0, st6");
                            goto addr_8052c24_10;
                        } else {
                            __asm__("fxch st0, st1");
                            __asm__("fxch st0, st2");
                            __asm__("fxch st0, st3");
                            __asm__("fxch st0, st4");
                            __asm__("fxch st0, st5");
                            __asm__("fxch st0, st6");
                        }
                    } else {
                        __asm__("fxch st0, st6");
                        goto addr_8052c24_10;
                    }
                }
            }
        } else {
            __asm__("fstp st5");
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fstp st1");
            goto addr_8052be0_14;
        }
    } else {
        __asm__("fstp st5");
        __asm__("fstp st0");
        __asm__("fstp st0");
        __asm__("fstp st0");
        __asm__("fstp st0");
        __asm__("fstp st1");
        goto addr_8052be0_14;
    }
    __asm__("fld st6");
    __asm__("fsub st0, st7");
    __asm__("fst dword [ebp-0x2c]");
    __asm__("fxch st0, st7");
    __asm__("fucom st0");
    ax17 = fpu_status_word18;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax17) + 1)) {
        __asm__("fstp st7");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st5");
        __asm__("fxch st0, st6");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax17) + 1)) {
            __asm__("fstp st7");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
            __asm__("fxch st0, st5");
            __asm__("fxch st0, st6");
        } else {
            __asm__("fxch st0, st7");
            __asm__("fucomp st0");
            ax19 = fpu_status_word20;
            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax19) + 1) || *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax19) + 1)) {
                __asm__("fxam ");
                ax21 = fpu_status_word22;
                __asm__("fstp st0");
                __asm__("fldz ");
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax21) + 1) & 2)) {
                    __asm__("fxch st0, st1");
                    __asm__("fxch st0, st6");
                    __asm__("fxch st0, st5");
                    __asm__("fxch st0, st4");
                    __asm__("fxch st0, st3");
                    __asm__("fxch st0, st2");
                    __asm__("fxch st0, st1");
                    goto addr_80530a6_23;
                } else {
                    __asm__("fstp st0");
                    __asm__("fldz ");
                    __asm__("fchs ");
                    __asm__("fxch st0, st1");
                    __asm__("fxch st0, st6");
                    __asm__("fxch st0, st5");
                    __asm__("fxch st0, st4");
                    __asm__("fxch st0, st3");
                    __asm__("fxch st0, st2");
                    __asm__("fxch st0, st1");
                    goto addr_80530a6_23;
                }
            } else {
                __asm__("fxch st0, st1");
                __asm__("fxch st0, st2");
                __asm__("fxch st0, st3");
                __asm__("fxch st0, st4");
                __asm__("fxch st0, st5");
                __asm__("fxch st0, st6");
            }
        }
    }
    edx23 = 0;
    addr_8052ce2_27:
    __asm__("fld st6");
    __asm__("fsub st0, st7");
    __asm__("fst dword [ebp-0x24]");
    __asm__("fxch st0, st7");
    __asm__("fucom st0");
    ax24 = fpu_status_word25;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax24) + 1)) {
        __asm__("fstp st7");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st5");
        __asm__("fxch st0, st6");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax24) + 1)) {
            __asm__("fstp st7");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
            __asm__("fxch st0, st5");
            __asm__("fxch st0, st6");
        } else {
            __asm__("fxch st0, st7");
            __asm__("fucomp st0");
            ax26 = fpu_status_word27;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax26) + 1)) {
                __asm__("fstp st3");
                __asm__("fstp st3");
                __asm__("fstp st0");
                goto addr_8052d1c_33;
            } else {
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax26) + 1)) {
                    __asm__("fxch st0, st1");
                    __asm__("fxch st0, st2");
                    __asm__("fxch st0, st3");
                    __asm__("fxch st0, st4");
                    __asm__("fxch st0, st5");
                    __asm__("fxch st0, st6");
                } else {
                    __asm__("fstp st3");
                    __asm__("fstp st3");
                    __asm__("fstp st0");
                    goto addr_8052d1c_33;
                }
            }
        }
    }
    __asm__("fld st6");
    __asm__("fsub st0, st7");
    __asm__("fst dword [ebp-0x20]");
    __asm__("fxch st0, st7");
    __asm__("fucom st0");
    ax28 = fpu_status_word29;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax28) + 1)) {
        __asm__("fstp st7");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st5");
        __asm__("fxch st0, st6");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax28) + 1)) {
            __asm__("fstp st7");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
            __asm__("fxch st0, st5");
            __asm__("fxch st0, st6");
        } else {
            __asm__("fxch st0, st7");
            __asm__("fucomp st0");
            ax30 = fpu_status_word31;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax30) + 1)) {
                __asm__("fstp st3");
                __asm__("fstp st3");
                __asm__("fstp st3");
                goto addr_8052e40_43;
            } else {
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax30) + 1)) {
                    __asm__("fxch st0, st1");
                    __asm__("fxch st0, st2");
                    __asm__("fxch st0, st3");
                    __asm__("fxch st0, st4");
                    __asm__("fxch st0, st5");
                    __asm__("fxch st0, st6");
                } else {
                    __asm__("fstp st3");
                    __asm__("fstp st3");
                    __asm__("fstp st3");
                    goto addr_8052e40_43;
                }
            }
        }
    }
    if (*reinterpret_cast<signed char*>(&edx23)) {
        __asm__("fstp st6");
        __asm__("fstp st3");
        __asm__("fstp st3");
        __asm__("fxch st0, st3");
    } else {
        __asm__("fld st6");
        __asm__("fsub st0, st7");
        __asm__("fst dword [ebp-0x1c]");
        __asm__("fxch st0, st7");
        __asm__("fucomp st0");
        ax32 = fpu_status_word33;
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax32) + 1)) {
            __asm__("fstp st6");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
            __asm__("fxch st0, st5");
            goto addr_8052edc_51;
        } else {
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax32) + 1)) {
                __asm__("fstp st6");
                __asm__("fxch st0, st1");
                __asm__("fxch st0, st2");
                __asm__("fxch st0, st3");
                __asm__("fxch st0, st4");
                __asm__("fxch st0, st5");
                goto addr_8052edc_51;
            } else {
                __asm__("fxch st0, st6");
                __asm__("fucomp st0");
                ax34 = fpu_status_word35;
                if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax34) + 1)) {
                    __asm__("fstp st4");
                    __asm__("fstp st2");
                    goto addr_8052fac_56;
                } else {
                    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax34) + 1)) {
                        __asm__("fstp st4");
                        __asm__("fstp st2");
                        goto addr_8052fac_56;
                    } else {
                        __asm__("fxch st0, st1");
                        __asm__("fxch st0, st2");
                        __asm__("fxch st0, st3");
                        __asm__("fxch st0, st4");
                        __asm__("fxch st0, st5");
                        goto addr_8052edc_51;
                    }
                }
            }
        }
    }
    addr_8052dc0_60:
    __asm__("fld st3");
    __asm__("fmul st0, st2");
    __asm__("fld st3");
    __asm__("fmul st0, st2");
    __asm__("fsubp st1, st0");
    __asm__("fld dword [ecx+0xffffe5e8]");
    __asm__("fmul st1, st0");
    __asm__("fxch st0, st5");
    __asm__("fmulp st2, st0");
    __asm__("fxch st0, st3");
    __asm__("fmulp st2, st0");
    __asm__("faddp st1, st0");
    __asm__("fmulp st2, st0");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp-0x18]");
    addr_8052be0_14:
    __asm__("fstp dword [ebp-0x38]");
    return v36;
    addr_8052edc_51:
    __asm__("fld st5");
    __asm__("fsub st0, st6");
    __asm__("fxch st0, st6");
    __asm__("fucomp st0");
    ax37 = fpu_status_word38;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax37) + 1)) {
        __asm__("fstp st5");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax37) + 1)) {
            __asm__("fstp st5");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
        } else {
            __asm__("fxch st0, st5");
            __asm__("fucomp st0");
            ax39 = fpu_status_word40;
            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax39) + 1)) {
                __asm__("fstp st3");
                __asm__("fxch st0, st1");
                goto addr_8052fac_56;
            } else {
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax39) + 1)) {
                    __asm__("fstp st3");
                    __asm__("fxch st0, st1");
                    goto addr_8052fac_56;
                } else {
                    __asm__("fxch st0, st1");
                    __asm__("fxch st0, st2");
                    __asm__("fxch st0, st3");
                    __asm__("fxch st0, st4");
                }
            }
        }
    }
    __asm__("fld dword [ebp-0x3c]");
    __asm__("fsub st0, st0");
    __asm__("fld dword [ebp-0x3c]");
    __asm__("fucomp st0");
    ax41 = fpu_status_word42;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax41) + 1)) {
        __asm__("fstp st0");
        goto addr_8052f4c_71;
    }
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax41) + 1)) {
        __asm__("fstp st0");
        goto addr_8052f4c_71;
    }
    __asm__("fucomp st0");
    ax43 = fpu_status_word44;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax43) + 1)) 
        goto addr_8052f36_75;
    __asm__("fstp st4");
    __asm__("fxch st0, st2");
    addr_8052fac_56:
    __asm__("fucom st0");
    ax45 = fpu_status_word46;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax45) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax45) + 1)) {
        __asm__("fxam ");
        ax47 = fpu_status_word48;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax47) + 1) & 2) {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
        }
        __asm__("fxch st0, st1");
    } else {
        __asm__("fxch st0, st1");
    }
    __asm__("fucom st0");
    ax49 = fpu_status_word50;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax49) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax49) + 1)) {
        __asm__("fxam ");
        ax51 = fpu_status_word52;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax51) + 1) & 2) {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
        }
        __asm__("fxch st0, st2");
    } else {
        __asm__("fxch st0, st2");
    }
    __asm__("fucom st0");
    ax53 = fpu_status_word54;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax53) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax53) + 1)) {
        __asm__("fxam ");
        ax55 = fpu_status_word56;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax55) + 1) & 2) {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
        }
        __asm__("fxch st0, st3");
    } else {
        __asm__("fxch st0, st3");
    }
    __asm__("fucom st0");
    ax57 = fpu_status_word58;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax57) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax57) + 1)) {
        __asm__("fxam ");
        ax59 = fpu_status_word60;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax59) + 1) & 2)) {
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st1");
        } else {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st1");
            goto addr_805301b_95;
        }
    } else {
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st1");
        goto addr_8052dc0_60;
    }
    addr_8052da8_97:
    __asm__("fxch st0, st2");
    __asm__("fxch st0, st3");
    __asm__("fxch st0, st2");
    goto addr_8052dc0_60;
    addr_8052f36_75:
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax43) + 1)) {
        addr_8052f4c_71:
        __asm__("fld dword [ebp-0x34]");
        __asm__("fsub st0, st0");
        __asm__("fld dword [ebp-0x34]");
        __asm__("fucomp st0");
        ax61 = fpu_status_word62;
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax61) + 1)) {
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fstp st0");
            goto addr_8052be0_14;
        } else {
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax61) + 1)) {
                __asm__("fstp st0");
                __asm__("fstp st0");
                __asm__("fstp st0");
                __asm__("fstp st0");
                __asm__("fstp st0");
                goto addr_8052be0_14;
            } else {
                __asm__("fucomp st0");
                ax63 = fpu_status_word64;
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax63) + 1)) {
                    __asm__("fstp st4");
                    __asm__("fxch st0, st2");
                    goto addr_8052fac_56;
                } else {
                    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax63) + 1)) {
                        __asm__("fstp st0");
                        __asm__("fstp st0");
                        __asm__("fstp st0");
                        __asm__("fstp st0");
                        goto addr_8052be0_14;
                    } else {
                        __asm__("fstp st4");
                        __asm__("fxch st0, st2");
                        goto addr_8052fac_56;
                    }
                }
            }
        }
    } else {
        __asm__("fstp st4");
        __asm__("fxch st0, st2");
        goto addr_8052fac_56;
    }
    addr_8052e40_43:
    __asm__("fld1 ");
    __asm__("fldz ");
    __asm__("fxch st0, st3");
    __asm__("fxch st0, st4");
    __asm__("fxch st0, st2");
    __asm__("fxch st0, st5");
    __asm__("fxch st0, st2");
    addr_8052d4c_108:
    __asm__("fucom st0");
    ax65 = fpu_status_word66;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax65) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax65) + 1)) {
        __asm__("fxam ");
        ax67 = fpu_status_word68;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax67) + 1) & 2) {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
        }
        __asm__("fxch st0, st4");
    } else {
        __asm__("fxch st0, st4");
    }
    __asm__("fucom st0");
    ax69 = fpu_status_word70;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax69) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax69) + 1)) {
        __asm__("fxam ");
        ax71 = fpu_status_word72;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax71) + 1) & 2) {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
        }
        __asm__("fxch st0, st5");
    } else {
        __asm__("fxch st0, st5");
    }
    __asm__("fxam ");
    ax73 = fpu_status_word74;
    __asm__("fstp st0");
    __asm__("fxch st0, st2");
    __asm__("fabs ");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax73) + 1) & 2) {
        __asm__("fchs ");
    }
    __asm__("fxch st0, st1");
    __asm__("fxam ");
    ax75 = fpu_status_word76;
    __asm__("fstp st0");
    __asm__("fxch st0, st1");
    __asm__("fabs ");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax75) + 1) & 2) {
        addr_805301b_95:
        __asm__("fchs ");
        goto addr_8052da8_97;
    } else {
        goto addr_8052da8_97;
    }
    addr_8052d1c_33:
    __asm__("fld st2");
    __asm__("fsub st0, st3");
    __asm__("fucomp st0");
    ax77 = fpu_status_word78;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax77) + 1)) {
        __asm__("fxch st0, st2");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax77) + 1)) {
            addr_80531c4_124:
            __asm__("fldz ");
            __asm__("fld1 ");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st4");
            __asm__("fxch st0, st2");
            goto addr_8052d4c_108;
        } else {
            __asm__("fxch st0, st2");
        }
    }
    __asm__("fucom st0");
    ax79 = fpu_status_word80;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax79) + 1)) {
        __asm__("fxch st0, st2");
        goto addr_80531c4_124;
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax79) + 1)) {
            __asm__("fxch st0, st2");
            goto addr_80531c4_124;
        } else {
            __asm__("fld1 ");
            __asm__("fld st0");
            __asm__("fxch st0, st3");
            goto addr_8052d4c_108;
        }
    }
    addr_8052c24_10:
    __asm__("fxam ");
    ax81 = fpu_status_word82;
    __asm__("fstp st0");
    __asm__("fld1 ");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax81) + 1) & 2) {
        __asm__("fstp st0");
        __asm__("fld1 ");
        __asm__("fchs ");
    }
    __asm__("fld st5");
    __asm__("fsub st0, st6");
    __asm__("fst dword [ebp-0x14]");
    __asm__("fxch st0, st6");
    __asm__("fucom st0");
    ax83 = fpu_status_word84;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax83) + 1)) {
        __asm__("fstp st6");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st5");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax83) + 1)) {
            __asm__("fstp st6");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
            __asm__("fxch st0, st5");
        } else {
            __asm__("fxch st0, st6");
            __asm__("fucomp st0");
            ax85 = fpu_status_word86;
            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax85) + 1) || *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax85) + 1)) {
                addr_80530a6_23:
                __asm__("fld1 ");
                __asm__("fstp dword [ebp-0x28]");
                __asm__("fxch st0, st1");
                __asm__("fxch st0, st2");
                __asm__("fxch st0, st3");
                __asm__("fxch st0, st4");
                __asm__("fxch st0, st5");
                goto addr_8052c89_137;
            } else {
                __asm__("fxch st0, st1");
                __asm__("fxch st0, st2");
                __asm__("fxch st0, st3");
                __asm__("fxch st0, st4");
                __asm__("fxch st0, st5");
            }
        }
    }
    __asm__("fldz ");
    __asm__("fstp dword [ebp-0x28]");
    addr_8052c89_137:
    __asm__("fxam ");
    ax87 = fpu_status_word88;
    __asm__("fstp st0");
    __asm__("fld dword [ebp-0x28]");
    __asm__("fabs ");
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax87) + 1) & 2)) {
        __asm__("fxch st0, st5");
    } else {
        __asm__("fchs ");
        __asm__("fxch st0, st5");
    }
    __asm__("fucom st0");
    ax89 = fpu_status_word90;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax89) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax89) + 1)) {
        __asm__("fxam ");
        ax91 = fpu_status_word92;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax91) + 1) & 2)) {
            __asm__("fxch st0, st4");
        } else {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
            __asm__("fxch st0, st4");
        }
    } else {
        __asm__("fxch st0, st4");
    }
    __asm__("fucom st0");
    ax93 = fpu_status_word94;
    edx23 = 1;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax93) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax93) + 1)) {
        __asm__("fxam ");
        ax95 = fpu_status_word96;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax95) + 1) & 2) {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
        }
        __asm__("fxch st0, st5");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st6");
        __asm__("fxch st0, st2");
        edx23 = 1;
        goto addr_8052ce2_27;
    } else {
        __asm__("fxch st0, st5");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st6");
        __asm__("fxch st0, st2");
        goto addr_8052ce2_27;
    }
}

int32_t free = 0x80488da;

void fun_80488d4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto free;
}

/* mem.2105 */
void** mem_2105 = reinterpret_cast<void**>(0);

/* max.2106 */
void** max_2106 = reinterpret_cast<void**>(0);

void** quantum_memman(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;
    void** edx9;
    void** eax10;
    void** eax11;
    void** eax12;

    eax8 = mem_2105;
    mem_2105 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax8) + reinterpret_cast<uint32_t>(a1));
    edx9 = mem_2105;
    eax10 = max_2106;
    if (reinterpret_cast<int32_t>(edx9) > reinterpret_cast<int32_t>(eax10)) {
        eax11 = mem_2105;
        max_2106 = eax11;
    }
    eax12 = mem_2105;
    return eax12;
}

struct s2 {
    void** f0;
    void** f4;
    void** f8;
};

struct s3 {
    void** f0;
    void** f4;
    void** f8;
    void** fc;
    void** f10;
};

struct s4 {
    void** f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
};

struct s5 {
    void** f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
};

struct s2* quantum_new_density_op(struct s2* a1, void** a2, void*** a3, struct s3* a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    struct s4* ecx27;
    struct s5* edx28;

    v5 = a2;
    eax10 = fun_8048884(a2, 4, v6, v7, v5, v8, v9);
    v11 = eax10;
    if (!v11) {
        quantum_error(2, 4, v12, v13, v5, v11, v14);
    }
    eax18 = fun_8048884(a2, 20, v15, v16, v5, v11, v17);
    v19 = eax18;
    if (!v19) {
        quantum_error(2, 20, v20, v21, v5, v11, v19);
    }
    quantum_memman(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) << 3, 20, v22, v23, v5, v11, v19);
    *reinterpret_cast<void***>(v11) = *a3;
    v24 = a4->f10;
    v25 = a4->f8;
    *reinterpret_cast<void***>(v19) = a4->f0;
    *reinterpret_cast<void***>(v19 + 1) = a4->f4;
    *reinterpret_cast<void***>(v19 + 2) = a4->f8;
    *reinterpret_cast<void***>(v19 + 3) = a4->fc;
    *reinterpret_cast<void***>(v19 + 4) = a4->f10;
    a4->f4 = reinterpret_cast<void**>(0);
    a4->f0 = reinterpret_cast<void**>(0);
    a4->fc = reinterpret_cast<void**>(0);
    a4->f10 = reinterpret_cast<void**>(0);
    v26 = reinterpret_cast<void**>(1);
    while (reinterpret_cast<int32_t>(v26) < reinterpret_cast<int32_t>(a2)) {
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v11) + (reinterpret_cast<uint32_t>(v26) << 2)) = *reinterpret_cast<void***>((reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(a3));
        ecx27 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(v19) + ((reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(v26) << 2));
        edx28 = reinterpret_cast<struct s5*>(((reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(a4));
        ecx27->f0 = edx28->f0;
        ecx27->f4 = edx28->f4;
        ecx27->f8 = edx28->f8;
        ecx27->fc = edx28->fc;
        ecx27->f10 = edx28->f10;
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v19) + ((reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(v26) << 2) + 16) = v24;
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v19) + ((reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(v26) << 2) + 8) = v25;
        *reinterpret_cast<int32_t*>(((reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(a4) + 4) = 0;
        *reinterpret_cast<void***>(((reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(a4)) = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(((reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(a4) + 12) = 0;
        *reinterpret_cast<int32_t*>(((reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(v26) << 2) + reinterpret_cast<uint32_t>(a4) + 16) = 0;
        v26 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v26) + 1);
    }
    a1->f0 = v5;
    a1->f4 = v11;
    a1->f8 = v19;
    return a1;
}

int32_t realloc = 0x804886a;

void** fun_8048864(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    goto realloc;
}

void** quantum_real(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** quantum_imag(void** a1, void** a2);

void** quantum_prob_inline(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** ebp13;
    void** eax14;

    quantum_real(a1, a2, v9, v10, v11, v12, ebp13);
    __asm__("fstp dword [ebp-0x4]");
    eax14 = quantum_imag(a1, a2);
    __asm__("fstp dword [ebp-0x8]");
    __asm__("fld dword [ebp-0x4]");
    __asm__("fmul dword [ebp-0x4]");
    __asm__("fld dword [ebp-0x8]");
    __asm__("fmul dword [ebp-0x8]");
    __asm__("faddp st1, st0");
    return eax14;
}

struct s6 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s7 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s8 {
    void** f0;
    void** f4;
};

void** quantum_prob_inline(void** a1, void** a2);

struct s9 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s10 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s11 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s12 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s13 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

void** __divsc3(void** ecx, void** a2, void** a3, void** a4, void** a5);

void** quantum_state_collapse(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** ecx10;
    uint32_t edx11;
    uint32_t eax12;
    uint32_t v13;
    uint32_t v14;
    void** v15;
    struct s6* eax16;
    struct s7* eax17;
    struct s8* edx18;
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
    uint32_t v45;
    struct s9* eax46;
    struct s10* eax47;
    void** v48;
    uint32_t v49;
    uint32_t v50;
    void** ecx51;
    int32_t edx52;
    int32_t eax53;
    uint32_t tmp32_54;
    uint1_t cf55;
    struct s11* eax56;
    uint32_t edx57;
    uint32_t v58;
    uint32_t v59;
    void** v60;
    uint32_t v61;
    uint32_t v62;
    void** ecx63;
    int32_t edx64;
    int32_t eax65;
    uint32_t tmp32_66;
    uint1_t cf67;
    struct s12* eax68;
    uint32_t edx69;
    uint32_t v70;
    struct s13* esi71;
    int16_t ax72;
    int16_t fpu_status_word73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** eax78;

    v9 = reinterpret_cast<void**>(0);
    __asm__("fldz ");
    __asm__("fstp qword [ebp-0x20]");
    ecx10 = a2;
    edx11 = 0;
    __asm__("shld edx, eax, cl");
    eax12 = 1 << *reinterpret_cast<unsigned char*>(&ecx10);
    if (*reinterpret_cast<unsigned char*>(&ecx10) & 32) {
        edx11 = eax12;
        eax12 = 0;
    }
    v13 = eax12;
    v14 = edx11;
    v15 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(a5) > reinterpret_cast<int32_t>(v15)) {
        eax16 = reinterpret_cast<struct s6*>(reinterpret_cast<uint32_t>(a7) + (reinterpret_cast<uint32_t>(v15) << 4));
        if (eax16->f8 & v13 | eax16->fc & v14 && a3 || (eax17 = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(a7) + (reinterpret_cast<uint32_t>(v15) << 4)), !(eax17->f8 & v13 | eax17->fc & v14)) && !a3) {
            edx18 = reinterpret_cast<struct s8*>(reinterpret_cast<uint32_t>(a7) + (reinterpret_cast<uint32_t>(v15) << 4));
            v19 = edx18->f0;
            v20 = edx18->f4;
            quantum_prob_inline(v19, v20);
            __asm__("fld qword [ebp-0x20]");
            __asm__("faddp st1, st0");
            __asm__("fstp qword [ebp-0x20]");
            v9 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v9) + 1);
        }
        v15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v15) + 1);
    }
    v21 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4) - 1);
    v22 = v9;
    v23 = reinterpret_cast<void**>(16);
    eax29 = fun_8048884(v9, 16, v24, v25, v26, v27, v28);
    v30 = eax29;
    if (!v30) {
        quantum_error(2, 16, v31, v32, v33, v34, v35);
    }
    v36 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v9) << 4);
    quantum_memman(v36, 16, v37, v38, v39, v40, v41);
    v42 = a6;
    v43 = a8;
    v44 = reinterpret_cast<void**>(0);
    v45 = 0;
    while (reinterpret_cast<int32_t>(a5) > reinterpret_cast<int32_t>(v44)) {
        eax46 = reinterpret_cast<struct s9*>(reinterpret_cast<uint32_t>(a7) + (reinterpret_cast<uint32_t>(v44) << 4));
        if (eax46->f8 & v13 | eax46->fc & v14 && a3 || (eax47 = reinterpret_cast<struct s10*>(reinterpret_cast<uint32_t>(a7) + (reinterpret_cast<uint32_t>(v44) << 4)), !(eax47->f8 & v13 | eax47->fc & v14)) && !a3) {
            v48 = reinterpret_cast<void**>(0);
            v49 = 0;
            v50 = 0;
            while (reinterpret_cast<int32_t>(v48) < reinterpret_cast<int32_t>(a2)) {
                ecx51 = v48;
                edx52 = 0;
                __asm__("shld edx, eax, cl");
                eax53 = 1 << *reinterpret_cast<unsigned char*>(&ecx51);
                if (*reinterpret_cast<unsigned char*>(&ecx51) & 32) {
                    edx52 = eax53;
                    eax53 = 0;
                }
                tmp32_54 = v49 + eax53;
                cf55 = reinterpret_cast<uint1_t>(tmp32_54 < v49);
                v49 = tmp32_54;
                v50 = v50 + edx52 + cf55;
                v48 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v48) + 1);
            }
            eax56 = reinterpret_cast<struct s11*>(reinterpret_cast<uint32_t>(a7) + (reinterpret_cast<uint32_t>(v44) << 4));
            edx57 = eax56->fc;
            v58 = v49 & eax56->f8;
            v59 = v50 & edx57;
            v60 = reinterpret_cast<void**>(63);
            v61 = 0;
            v62 = 0;
            while (reinterpret_cast<int32_t>(v60) > reinterpret_cast<int32_t>(a2)) {
                ecx63 = v60;
                edx64 = 0;
                __asm__("shld edx, eax, cl");
                eax65 = 1 << *reinterpret_cast<unsigned char*>(&ecx63);
                if (*reinterpret_cast<unsigned char*>(&ecx63) & 32) {
                    edx64 = eax65;
                    eax65 = 0;
                }
                tmp32_66 = v61 + eax65;
                cf67 = reinterpret_cast<uint1_t>(tmp32_66 < v61);
                v61 = tmp32_66;
                v62 = v62 + edx64 + cf67;
                v60 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v60) - 1);
            }
            eax68 = reinterpret_cast<struct s12*>(reinterpret_cast<uint32_t>(a7) + (reinterpret_cast<uint32_t>(v44) << 4));
            edx69 = eax68->fc;
            v70 = v61 & eax68->f8;
            esi71 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(v30) + (v45 << 4));
            __asm__("shrd ecx, ebx, 0x1");
            esi71->f8 = v70 | v58;
            esi71->fc = (v62 & edx69) >> 1 | v59;
            __asm__("fld dword [eax]");
            __asm__("fstp dword [ebp-0x60]");
            __asm__("fld dword [eax+0x4]");
            __asm__("fstp dword [ebp-0x64]");
            __asm__("fld qword [ebp-0x20]");
            __asm__("fsqrt ");
            __asm__("fstp qword [ebp-0x70]");
            __asm__("fld qword [ebp-0x70]");
            __asm__("fucomp st0");
            ax72 = fpu_status_word73;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax72) + 1)) 
                goto addr_805191a_24;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax72) + 1)) 
                goto addr_8051928_26;
        } else {
            addr_8051971_27:
            v44 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v44) + 1);
            continue;
        }
        addr_805191a_24:
        __asm__("fld qword [ebp-0x20]");
        __asm__("fstp qword [esp]");
        fun_80488f4(v36, v23, v74, 0);
        __asm__("fstp qword [ebp-0x70]");
        addr_8051928_26:
        __asm__("fld qword [ebp-0x70]");
        __asm__("fstp dword [ebp-0x5c]");
        __asm__("fld dword [ebp-0x5c]");
        __asm__("fstp dword [ebp-0x74]");
        v74 = v75;
        v23 = v76;
        v36 = v77;
        eax78 = __divsc3(0, v36, v23, v74, 0);
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v30) + (v45 << 4)) = eax78;
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v30) + (v45 << 4) + 4) = v75;
        ++v45;
        goto addr_8051971_27;
    }
    *reinterpret_cast<void***>(a1) = v21;
    *reinterpret_cast<void***>(a1 + 1) = v22;
    *reinterpret_cast<void***>(a1 + 2) = v42;
    *reinterpret_cast<void***>(a1 + 3) = v30;
    *reinterpret_cast<void***>(a1 + 4) = v43;
    return a1;
}

void quantum_delete_qureg_hashpreserve(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** ebp11;
    void** v12;
    void** v13;

    v9 = *reinterpret_cast<void***>(a1 + 3);
    fun_80488d4(v9, v10, ebp11, __return_address(), a1, a2, a3);
    v12 = reinterpret_cast<void**>(-(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 1)) << 4));
    quantum_memman(v12, v13, ebp11, __return_address(), a1, a2, a3);
    *reinterpret_cast<void***>(a1 + 3) = reinterpret_cast<void**>(0);
    return;
}

struct s1* quantum_new_matrix(struct s1* a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebp6;
    void** eax7;
    void** v8;
    void** v9;

    eax7 = fun_8048884(reinterpret_cast<uint32_t>(a2) * reinterpret_cast<uint32_t>(a3), 8, v4, a3, a2, v5, ebp6);
    if (!eax7) {
        quantum_error(2, 8, v8, a3, a2, eax7, ebp6);
    }
    quantum_memman(reinterpret_cast<uint32_t>(a3) * reinterpret_cast<uint32_t>(a2) << 3, 8, v9, a3, a2, eax7, ebp6);
    a1->f0 = a3;
    a1->f4 = a2;
    a1->f8 = eax7;
    return a1;
}

void** quantum_real(void** a1, void** a2);

void** quantum_imag(void** a1, void** a2);

void** quantum_conj(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** v10;
    void** v11;

    quantum_real(a1, a2);
    __asm__("fstp dword [ebp-0x10]");
    quantum_imag(a1, a2);
    __asm__("fstp dword [ebp-0x14]");
    __mulsc3(v8, v8, 0, 0x80000000, 0xbf800000, v9, v10, v11);
    __asm__("fld dword [ebp-0x20]");
    __asm__("fld dword [ebp-0x20]");
    __asm__("fld dword [ebp-0x20]");
    __asm__("fld dword [ebp-0x20]");
    __asm__("fxch st0, st1");
    __asm__("faddp st3, st0");
    __asm__("faddp st1, st0");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp-0x20]");
    __asm__("fstp dword [ebp-0x20]");
    return 0;
}

struct s14 {
    void** f0;
    signed char[4] pad8;
    void** f8;
    void** fc;
};

void quantum_add_hash(void** a1, void** a2, void** a3, void** a4);

void quantum_reconstruct_hash(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    uint32_t v8;
    void** ecx9;
    void** v10;
    struct s14* eax11;
    void** edx12;
    void** ecx13;

    v8 = 0;
    while (ecx9 = *reinterpret_cast<void***>(a1 + 2), reinterpret_cast<int32_t>(1 << *reinterpret_cast<unsigned char*>(&ecx9)) > reinterpret_cast<int32_t>(v8)) {
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 4)) + (v8 << 2)) = reinterpret_cast<void**>(0);
        ++v8;
    }
    v10 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a1 + 1)) > reinterpret_cast<int32_t>(v10)) {
        eax11 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 3)) + (reinterpret_cast<uint32_t>(v10) << 4));
        edx12 = eax11->f8;
        ecx13 = eax11->fc;
        quantum_add_hash(edx12, ecx13, v10, a1);
        v10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v10) + 1);
    }
    return;
}

uint32_t quantum_hash64(void** a1, void** a2, void** a3);

void quantum_add_hash(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    int32_t v7;
    void** v8;
    void** v9;
    uint32_t eax10;
    uint32_t v11;
    void** ecx12;
    void** v13;
    void** v14;

    v5 = a1;
    v6 = a2;
    v7 = 0;
    v8 = *reinterpret_cast<void***>(a4 + 2);
    v9 = v6;
    eax10 = quantum_hash64(v5, v9, v8);
    v11 = eax10;
    while (*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 4)) + (v11 << 2))) {
        ++v11;
        ecx12 = *reinterpret_cast<void***>(a4 + 2);
        if (1 << *reinterpret_cast<unsigned char*>(&ecx12) != v11) 
            continue;
        if (v7) {
            quantum_error(5, v9, v8, v13, v5, v6, v14);
        } else {
            v11 = 0;
            v7 = 1;
        }
    }
    *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 4)) + (v11 << 2)) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3) + 1);
    return;
}

uint32_t quantum_hash64(void** a1, void** a2, void** a3) {
    uint32_t ecx4;

    ecx4 = 32 - reinterpret_cast<uint32_t>(a3);
    return (reinterpret_cast<uint32_t>(a2) ^ reinterpret_cast<uint32_t>(a1)) * 0x9e370001 >> *reinterpret_cast<signed char*>(&ecx4);
}

void** quantum_strerr(void** a1) {
    void** v2;

    if (a1 == 3) {
        v2 = reinterpret_cast<void**>("matrix too large");
    } else {
        if (reinterpret_cast<int32_t>(a1) > reinterpret_cast<int32_t>(3)) {
            if (a1 == 5) {
                v2 = reinterpret_cast<void**>("hash table full");
            } else {
                if (reinterpret_cast<int32_t>(a1) < reinterpret_cast<int32_t>(5)) {
                    v2 = reinterpret_cast<void**>("wrong matrix size");
                } else {
                    if (a1 == 0x10000) {
                        v2 = reinterpret_cast<void**>("single-column matrix expected");
                    } else {
                        if (a1 == 0x10001) {
                            v2 = reinterpret_cast<void**>("unknown opcode");
                        } else {
                            goto addr_804a010_13;
                        }
                    }
                }
            }
        } else {
            if (a1 == 1) {
                v2 = reinterpret_cast<void**>("failure");
            } else {
                if (reinterpret_cast<int32_t>(a1) > reinterpret_cast<int32_t>(1)) {
                    v2 = reinterpret_cast<void**>("malloc failed");
                } else {
                    if (!a1) {
                        v2 = reinterpret_cast<void**>("success");
                    } else {
                        goto addr_804a010_13;
                    }
                }
            }
        }
    }
    addr_804a017_21:
    return v2;
    addr_804a010_13:
    v2 = reinterpret_cast<void**>("unknown error code");
    goto addr_804a017_21;
}

void muln(void** a1, int32_t a2, void** a3, void** a4, void** a5);

void quantum_swaptheleads_omuln_controlled(void** a1, void** a2, void** a3, void** a4, void** a5);

void** muln_inv(void** a1, int32_t a2, void** a3, void** a4, void** a5);

void** mul_mod_n(void** a1, int32_t a2, void** a3, void** a4, void** a5) {
    void** eax6;

    muln(a1, a2, a3, a4, a5);
    quantum_swaptheleads_omuln_controlled(a3, a4, a5, a4, a5);
    eax6 = muln_inv(a1, a2, a3, a4, a5);
    return eax6;
}

void** type = reinterpret_cast<void**>(0);

void** quantum_get_decoherence();

void quantum_set_decoherence(void** a1, void** a2, void** a3);

void** quantum_cnot(void** a1, void** a2, void** a3, void** a4, void** a5);

void** width = reinterpret_cast<void**>(0);

void** quantum_qec_counter(void* a1, void** a2, void** a3);

void** quantum_cnot_ft(void** a1, void** a2, void** a3) {
    void** eax4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** eax14;
    void** eax15;
    void** v16;
    void** v17;

    eax4 = type;
    type = reinterpret_cast<void**>(0);
    quantum_get_decoherence();
    __asm__("fstp dword [ebp-0x8]");
    quantum_set_decoherence(0, v5, v6);
    quantum_cnot(a1, a2, a3, v7, v8);
    eax9 = width;
    eax10 = width;
    quantum_cnot(reinterpret_cast<uint32_t>(eax10) + reinterpret_cast<uint32_t>(a1), reinterpret_cast<uint32_t>(eax9) + reinterpret_cast<uint32_t>(a2), a3, v11, v12);
    quantum_set_decoherence(v13, reinterpret_cast<uint32_t>(eax9) + reinterpret_cast<uint32_t>(a2), a3);
    eax14 = width;
    eax15 = width;
    quantum_cnot(reinterpret_cast<uint32_t>(eax15) + reinterpret_cast<uint32_t>(eax15) + reinterpret_cast<uint32_t>(a1), reinterpret_cast<uint32_t>(eax14) + reinterpret_cast<uint32_t>(eax14) + reinterpret_cast<uint32_t>(a2), a3, v16, v17);
    quantum_qec_counter(1, 0, a3);
    type = eax4;
    return eax4;
}

int32_t quantum_gate_counter(int32_t a1);

void** quantum_status = reinterpret_cast<void**>(0);

int32_t quantum_frand(void** a1, void** a2);

struct s15 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s16 {
    void** f0;
    void** f4;
};

void** quantum_decohere(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;
    void** eax9;
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
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    int16_t ax30;
    int16_t fpu_status_word31;
    int16_t ax32;
    int16_t fpu_status_word33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    struct s15* eax40;
    uint32_t eax41;
    void** ecx42;
    uint32_t eax43;
    struct s16* edi44;
    void** edx45;
    void** esi46;
    void** v47;
    void** v48;
    void** eax49;
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

    quantum_gate_counter(1);
    eax8 = quantum_status;
    if (eax8) {
        eax9 = *reinterpret_cast<void***>(a1);
        v10 = reinterpret_cast<void**>(4);
        eax16 = fun_8048884(eax9, 4, v11, v12, v13, v14, v15);
        v17 = eax16;
        if (!v17) {
            quantum_error(2, 4, v18, v19, v20, v21, v22);
        }
        v23 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1)) << 2);
        quantum_memman(v23, 4, v24, v25, v26, v27, v28);
        v29 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a1)) > reinterpret_cast<int32_t>(v29)) {
            do {
                quantum_frand(v23, 4);
                __asm__("fld st0");
                __asm__("faddp st1, st0");
                __asm__("fld1 ");
                __asm__("fsubp st1, st0");
                __asm__("fstp dword [ebp-0x14]");
                quantum_frand(v23, 4);
                __asm__("fld st0");
                __asm__("faddp st1, st0");
                __asm__("fld1 ");
                __asm__("fsubp st1, st0");
                __asm__("fstp dword [ebp-0x18]");
                __asm__("fld dword [ebp-0x14]");
                __asm__("fmul dword [ebp-0x14]");
                __asm__("fld dword [ebp-0x18]");
                __asm__("fmul dword [ebp-0x18]");
                __asm__("faddp st1, st0");
                __asm__("fstp dword [ebp-0x1c]");
                __asm__("fld dword [ebp-0x1c]");
                __asm__("fld1 ");
                __asm__("fxch st0, st1");
                __asm__("fucompp ");
                ax30 = fpu_status_word31;
            } while (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax30) + 1));
            __asm__("fld dword [ebp-0x14]");
            __asm__("fstp qword [ebp-0x50]");
            __asm__("fld dword [ebp-0x1c]");
            __asm__("fstp qword [esp]");
            fun_80489d4(v23, 4);
            __asm__("fld qword [0x8054280]");
            __asm__("fmulp st1, st0");
            __asm__("fld dword [ebp-0x1c]");
            __asm__("fdivp st1, st0");
            __asm__("fstp qword [ebp-0x48]");
            __asm__("fld qword [ebp-0x48]");
            __asm__("fsqrt ");
            __asm__("fstp qword [ebp-0x60]");
            __asm__("fld qword [ebp-0x60]");
            __asm__("fucomp st0");
            ax32 = fpu_status_word33;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax32) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax32) + 1)) {
                __asm__("fld qword [ebp-0x48]");
                __asm__("fstp qword [esp]");
                fun_80488f4(v23, 4, v34, v35);
                __asm__("fstp qword [ebp-0x60]");
            }
            __asm__("fld qword [ebp-0x60]");
            __asm__("fmul qword [ebp-0x50]");
            __asm__("fstp dword [ebp-0x20]");
            __asm__("fld dword [ebp-0x20]");
            __asm__("fstp qword [ebp-0x40]");
            __asm__("fld dword [0x80560d0]");
            __asm__("fadd st0, st0");
            __asm__("fstp qword [esp]");
            fun_80488f4(v23, 4, v36, v37);
            __asm__("fmul qword [ebp-0x40]");
            __asm__("fstp dword [ebp-0x20]");
            __asm__("fld dword [ebp-0x20]");
            __asm__("fld dword [0x8054288]");
            __asm__("fdivp st1, st0");
            __asm__("fstp dword [eax]");
            v29 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v29) + 1);
        }
        v38 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a1 + 1)) > reinterpret_cast<int32_t>(v38)) {
            v39 = reinterpret_cast<void**>(0);
            while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a1)) > reinterpret_cast<int32_t>(v39)) {
                eax40 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 3)) + (reinterpret_cast<uint32_t>(v38) << 4));
                eax41 = eax40->f8;
                ecx42 = v39;
                __asm__("shrd eax, edx, cl");
                if (*reinterpret_cast<unsigned char*>(&ecx42) & 32) {
                    eax41 = eax40->fc >> *reinterpret_cast<unsigned char*>(&ecx42);
                }
                eax43 = eax41 & 1;
                if (!*reinterpret_cast<signed char*>(&eax43)) {
                    __asm__("fld dword [eax]");
                    __asm__("fld dword [ebp-0x28]");
                    __asm__("fsubrp st1, st0");
                    __asm__("fstp dword [ebp-0x28]");
                } else {
                    __asm__("fld dword [eax]");
                    __asm__("fld dword [ebp-0x28]");
                    __asm__("faddp st1, st0");
                    __asm__("fstp dword [ebp-0x28]");
                }
                v39 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v39) + 1);
            }
            edi44 = reinterpret_cast<struct s16*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 3)) + (reinterpret_cast<uint32_t>(v38) << 4));
            edx45 = *reinterpret_cast<void***>(a1 + 3);
            esi46 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx45) + (reinterpret_cast<uint32_t>(v38) << 4));
            __asm__("fld dword [eax+0x4]");
            __asm__("fstp dword [ebp-0x38]");
            eax49 = quantum_cexp(0, v10, v47, v48);
            v48 = edx45;
            v47 = eax49;
            v10 = v50;
            eax54 = __mulsc3(edx45, esi46, v10, v47, v48, v51, v52, v53);
            edi44->f0 = eax54;
            edi44->f4 = eax49;
            v38 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v38) + 1);
        }
        fun_80488d4(v17, v10, v47, v48, v55, v56, v57);
        v58 = reinterpret_cast<void**>(-(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1)) << 2));
        eax8 = quantum_memman(v58, v10, v47, v48, v59, v60, v61);
    }
    return eax8;
}

struct s17 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s18 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s19 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s20 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s21 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s22 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s23 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s24 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

void** quantum_toffoli_ft(void** a1, void** a2, void** a3, void** a4) {
    void** ecx5;
    void* esi6;
    void* ebx7;
    void** eax8;
    void* ecx9;
    void* edx10;
    void* eax11;
    void* tmp32_12;
    void** eax13;
    void* ecx14;
    void** edx15;
    void** eax16;
    void** tmp32_17;
    void** v18;
    void* v19;
    void** v20;
    uint32_t v21;
    uint32_t v22;
    struct s17* eax23;
    uint32_t eax24;
    void** ecx25;
    uint32_t eax26;
    struct s18* eax27;
    void** eax28;
    void* ecx29;
    uint32_t eax30;
    uint32_t eax31;
    struct s19* eax32;
    void** eax33;
    void* ecx34;
    uint32_t eax35;
    uint32_t eax36;
    struct s20* eax37;
    uint32_t eax38;
    void** ecx39;
    uint32_t eax40;
    struct s21* eax41;
    void** eax42;
    void* ecx43;
    uint32_t eax44;
    uint32_t eax45;
    struct s22* eax46;
    void** eax47;
    void* ecx48;
    uint32_t eax49;
    uint32_t eax50;
    struct s23* esi51;
    struct s24* eax52;
    uint32_t edx53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** eax59;

    ecx5 = a3;
    esi6 = reinterpret_cast<void*>(0);
    __asm__("shld esi, ebx, cl");
    ebx7 = reinterpret_cast<void*>(1 << *reinterpret_cast<unsigned char*>(&ecx5));
    if (*reinterpret_cast<unsigned char*>(&ecx5) & 32) {
        esi6 = ebx7;
        ebx7 = reinterpret_cast<void*>(0);
    }
    eax8 = width;
    ecx9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax8) + reinterpret_cast<uint32_t>(a3));
    edx10 = reinterpret_cast<void*>(0);
    __asm__("shld edx, eax, cl");
    eax11 = reinterpret_cast<void*>(1 << *reinterpret_cast<unsigned char*>(&ecx9));
    if (*reinterpret_cast<unsigned char*>(&ecx9) & 32) {
        edx10 = eax11;
        eax11 = reinterpret_cast<void*>(0);
    }
    tmp32_12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx7) + reinterpret_cast<uint32_t>(eax11));
    eax13 = width;
    ecx14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax13) + reinterpret_cast<uint32_t>(eax13) + reinterpret_cast<uint32_t>(a3));
    edx15 = reinterpret_cast<void**>(0);
    __asm__("shld edx, eax, cl");
    eax16 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx14));
    if (*reinterpret_cast<unsigned char*>(&ecx14) & 32) {
        edx15 = eax16;
        eax16 = reinterpret_cast<void**>(0);
    }
    tmp32_17 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax16) + reinterpret_cast<uint32_t>(tmp32_12));
    v18 = tmp32_17;
    v19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx15) + (reinterpret_cast<uint32_t>(esi6) + reinterpret_cast<uint32_t>(edx10) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_12) < reinterpret_cast<uint32_t>(ebx7))) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_17) < reinterpret_cast<uint32_t>(eax16)));
    v20 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a4 + 1)) > reinterpret_cast<int32_t>(v20)) {
        v21 = 0;
        v22 = 0;
        eax23 = reinterpret_cast<struct s17*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v20) << 4));
        eax24 = eax23->f8;
        ecx25 = a1;
        __asm__("shrd eax, edx, cl");
        if (*reinterpret_cast<unsigned char*>(&ecx25) & 32) {
            eax24 = eax23->fc >> *reinterpret_cast<unsigned char*>(&ecx25);
        }
        eax26 = eax24 & 1;
        if (*reinterpret_cast<signed char*>(&eax26)) {
            v21 = 1;
        }
        eax27 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v20) << 4));
        eax28 = width;
        ecx29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax28) + reinterpret_cast<uint32_t>(a1));
        eax30 = eax27->f8;
        __asm__("shrd eax, edx, cl");
        if (*reinterpret_cast<unsigned char*>(&ecx29) & 32) {
            eax30 = eax27->fc >> *reinterpret_cast<unsigned char*>(&ecx29);
        }
        eax31 = eax30 & 1;
        if (*reinterpret_cast<signed char*>(&eax31)) {
            v21 = v21 ^ 1;
        }
        eax32 = reinterpret_cast<struct s19*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v20) << 4));
        eax33 = width;
        ecx34 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax33) + reinterpret_cast<uint32_t>(eax33) + reinterpret_cast<uint32_t>(a1));
        eax35 = eax32->f8;
        __asm__("shrd eax, edx, cl");
        if (*reinterpret_cast<unsigned char*>(&ecx34) & 32) {
            eax35 = eax32->fc >> *reinterpret_cast<unsigned char*>(&ecx34);
        }
        eax36 = eax35 & 1;
        if (*reinterpret_cast<signed char*>(&eax36)) {
            v21 = v21 ^ 1;
        }
        eax37 = reinterpret_cast<struct s20*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v20) << 4));
        eax38 = eax37->f8;
        ecx39 = a2;
        __asm__("shrd eax, edx, cl");
        if (*reinterpret_cast<unsigned char*>(&ecx39) & 32) {
            eax38 = eax37->fc >> *reinterpret_cast<unsigned char*>(&ecx39);
        }
        eax40 = eax38 & 1;
        if (*reinterpret_cast<signed char*>(&eax40)) {
            v22 = 1;
        }
        eax41 = reinterpret_cast<struct s21*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v20) << 4));
        eax42 = width;
        ecx43 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax42) + reinterpret_cast<uint32_t>(a2));
        eax44 = eax41->f8;
        __asm__("shrd eax, edx, cl");
        if (*reinterpret_cast<unsigned char*>(&ecx43) & 32) {
            eax44 = eax41->fc >> *reinterpret_cast<unsigned char*>(&ecx43);
        }
        eax45 = eax44 & 1;
        if (*reinterpret_cast<signed char*>(&eax45)) {
            v22 = v22 ^ 1;
        }
        eax46 = reinterpret_cast<struct s22*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v20) << 4));
        eax47 = width;
        ecx48 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax47) + reinterpret_cast<uint32_t>(eax47) + reinterpret_cast<uint32_t>(a2));
        eax49 = eax46->f8;
        __asm__("shrd eax, edx, cl");
        if (*reinterpret_cast<unsigned char*>(&ecx48) & 32) {
            eax49 = eax46->fc >> *reinterpret_cast<unsigned char*>(&ecx48);
        }
        eax50 = eax49 & 1;
        if (*reinterpret_cast<signed char*>(&eax50)) {
            v22 = v22 ^ 1;
        }
        if (v21 == 1 && v22 == 1) {
            esi51 = reinterpret_cast<struct s23*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v20) << 4));
            eax52 = reinterpret_cast<struct s24*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v20) << 4));
            edx53 = eax52->fc ^ reinterpret_cast<uint32_t>(v19);
            esi51->f8 = eax52->f8 ^ reinterpret_cast<uint32_t>(v18);
            esi51->fc = edx53;
        }
        v20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v20) + 1);
    }
    quantum_decohere(a4, v54, v55, v56, v57, v58, v18);
    eax59 = quantum_qec_counter(1, 0, a4);
    return eax59;
}

void quantum_qec_get_status(void*** a1, void*** a2);

void** quantum_objcode_put(void** a1, void** a2, void** a3, void** a4);

struct s25 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

void** quantum_sigma_x_ft(void** a1, void** a2);

void** quantum_sigma_x(void** a1, void** a2, void** a3, void** a4, void** a5) {
    int32_t v6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    void** v11;
    void** v12;
    struct s25* eax13;
    uint32_t esi14;
    uint32_t edi15;
    void** ecx16;
    void** edx17;
    void** eax18;
    void** v19;
    void** v20;

    quantum_qec_get_status(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24, 0);
    if (!v6) {
        v7 = a1;
        eax10 = quantum_objcode_put(3, v7, v8, v9);
        if (!eax10) {
            v11 = reinterpret_cast<void**>(0);
            while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 1)) > reinterpret_cast<int32_t>(v11)) {
                v12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v11) << 4));
                eax13 = reinterpret_cast<struct s25*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v11) << 4));
                esi14 = eax13->f8;
                edi15 = eax13->fc;
                ecx16 = a1;
                edx17 = reinterpret_cast<void**>(0);
                __asm__("shld edx, eax, cl");
                eax18 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx16));
                if (*reinterpret_cast<unsigned char*>(&ecx16) & 32) {
                    edx17 = eax18;
                    eax18 = reinterpret_cast<void**>(0);
                }
                *reinterpret_cast<void***>(v12 + 2) = reinterpret_cast<void**>(esi14 ^ reinterpret_cast<uint32_t>(eax18));
                *reinterpret_cast<void***>(v12 + 3) = reinterpret_cast<void**>(edi15 ^ reinterpret_cast<uint32_t>(edx17));
                v11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v11) + 1);
            }
            eax10 = quantum_decohere(a2, v7, 1, 0, v19, v12, v20);
        }
    } else {
        eax10 = quantum_sigma_x_ft(a1, a2);
    }
    return eax10;
}

void** quantum_sigma_x_ft(void** a1, void** a2) {
    void** eax3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** v16;
    void** v17;
    void** v18;

    eax3 = type;
    type = reinterpret_cast<void**>(0);
    quantum_get_decoherence();
    __asm__("fstp dword [ebp-0x8]");
    quantum_set_decoherence(0, v4, v5);
    quantum_sigma_x(a1, a2, v6, v7, v8);
    eax9 = width;
    quantum_sigma_x(reinterpret_cast<uint32_t>(eax9) + reinterpret_cast<uint32_t>(a1), a2, v10, v11, v12);
    quantum_set_decoherence(v13, a2, v14);
    eax15 = width;
    quantum_sigma_x(reinterpret_cast<uint32_t>(eax15) + reinterpret_cast<uint32_t>(eax15) + reinterpret_cast<uint32_t>(a1), a2, v16, v17, v18);
    quantum_qec_counter(1, 0, a2);
    type = eax3;
    return eax3;
}

struct s26 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s27 {
    void** f0;
    void** f4;
};

void** quantum_sigma_z(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    struct s26* eax11;
    uint32_t eax12;
    void** ecx13;
    uint32_t eax14;
    struct s27* ecx15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;

    v6 = a1;
    eax9 = quantum_objcode_put(5, v6, v7, v8);
    if (!eax9) {
        v10 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 1)) > reinterpret_cast<int32_t>(v10)) {
            eax11 = reinterpret_cast<struct s26*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v10) << 4));
            eax12 = eax11->f8;
            ecx13 = a1;
            __asm__("shrd eax, edx, cl");
            if (*reinterpret_cast<unsigned char*>(&ecx13) & 32) {
                eax12 = eax11->fc >> *reinterpret_cast<unsigned char*>(&ecx13);
            }
            eax14 = eax12 & 1;
            if (*reinterpret_cast<signed char*>(&eax14)) {
                ecx15 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v10) << 4));
                eax16 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v10) << 4) + 4);
                __asm__("fld dword [ebp-0x14]");
                v17 = eax16;
                __asm__("fld dword [ebp-0x14]");
                __asm__("fxch st0, st1");
                __asm__("fchs ");
                __asm__("fxch st0, st1");
                __asm__("fchs ");
                __asm__("fxch st0, st1");
                __asm__("fstp dword [ebp-0x14]");
                __asm__("fstp dword [ebp-0x14]");
                ecx15->f0 = v17;
                ecx15->f4 = v17;
            }
            v10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v10) + 1);
        }
        eax9 = quantum_decohere(a2, v6, v18, v19, v20, v17, v21);
    }
    return eax9;
}

struct s28 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s29 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

void quantum_swaptheleads(void** a1, void** a2, void** a3, void** a4, void** a5) {
    int32_t v6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    void** ecx11;
    int32_t eax12;
    uint32_t v13;
    uint32_t v14;
    void** v15;
    void* ecx16;
    uint32_t eax17;
    struct s28* eax18;
    uint32_t eax19;
    int32_t edx20;
    uint32_t edx21;
    uint32_t v22;
    void** ecx23;
    uint32_t eax24;
    uint32_t tmp32_25;
    void** ecx26;
    uint32_t eax27;
    uint32_t tmp32_28;
    struct s29* ecx29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;

    quantum_qec_get_status(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 36, 0);
    if (!v6) {
        v7 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 1)) > reinterpret_cast<int32_t>(v7) && (eax10 = quantum_objcode_put(14, a1, v8, v9), !eax10)) {
            ecx11 = a1;
            __asm__("shld edx, eax, cl");
            eax12 = 1 << *reinterpret_cast<unsigned char*>(&ecx11);
            if (*reinterpret_cast<unsigned char*>(&ecx11) & 32) {
                eax12 = 0;
            }
            v13 = reinterpret_cast<uint32_t>(eax12 - 1) & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v7) << 4) + 8);
            v14 = 0;
            v15 = reinterpret_cast<void**>(0);
            while (reinterpret_cast<int32_t>(v15) < reinterpret_cast<int32_t>(a1)) {
                ecx16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a1) + reinterpret_cast<uint32_t>(v15));
                __asm__("shld edx, eax, cl");
                eax17 = 1 << *reinterpret_cast<unsigned char*>(&ecx16);
                if (*reinterpret_cast<unsigned char*>(&ecx16) & 32) {
                    eax17 = 0;
                }
                v14 = (*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v7) << 4) + 8) & eax17) + v14;
                v15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v15) + 1);
            }
            eax18 = reinterpret_cast<struct s28*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v7) << 4));
            eax19 = v13 + v14;
            edx20 = reinterpret_cast<int32_t>(eax19) >> 31;
            edx21 = eax18->fc - (edx20 + reinterpret_cast<uint1_t>(eax18->fc < edx20 + reinterpret_cast<uint1_t>(eax18->f8 < eax19)));
            v22 = eax18->f8 - eax19;
            ecx23 = a1;
            eax24 = v13 << *reinterpret_cast<unsigned char*>(&ecx23);
            tmp32_25 = v22 + eax24;
            ecx26 = a1;
            eax27 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v14) >> *reinterpret_cast<signed char*>(&ecx26));
            tmp32_28 = tmp32_25 + eax27;
            ecx29 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v7) << 4));
            ecx29->f8 = tmp32_28;
            ecx29->fc = edx21 + (reinterpret_cast<int32_t>(eax24) >> 31) + reinterpret_cast<uint1_t>(tmp32_25 < v22) + (reinterpret_cast<int32_t>(eax27) >> 31) + reinterpret_cast<uint1_t>(tmp32_28 < tmp32_25);
            v7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v7) + 1);
        }
    } else {
        v30 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(v30) < reinterpret_cast<int32_t>(a1)) {
            quantum_cnot(v30, reinterpret_cast<uint32_t>(a1) + reinterpret_cast<uint32_t>(v30), a2, v31, v32);
            quantum_cnot(reinterpret_cast<uint32_t>(a1) + reinterpret_cast<uint32_t>(v30), v30, a2, v33, v34);
            quantum_cnot(v30, reinterpret_cast<uint32_t>(a1) + reinterpret_cast<uint32_t>(v30), a2, v35, v36);
            v30 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v30) + 1);
        }
    }
    return;
}

void** quantum_toffoli(void** a1, void** a2, void** a3, void** a4, void** a5);

void quantum_swaptheleads_omuln_controlled(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;

    v6 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(v6) < reinterpret_cast<int32_t>(a2)) {
        quantum_toffoli(a1, reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v6), reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v6) + 2, a3, v7);
        quantum_toffoli(a1, reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v6) + 2, reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v6), a3, v8);
        quantum_toffoli(a1, reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v6), reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v6) + 2, a3, v9);
        v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v6) + 1);
    }
    return;
}

void quantum_reconstruct_hash(void** a1);

struct s30 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s31 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

void** quantum_get_state(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

struct s32 {
    void** f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

struct s33 {
    void** f0;
    int32_t f4;
};

struct s34 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s35 {
    void** f0;
    void** f4;
};

struct s36 {
    void** f0;
    void** f4;
};

struct s37 {
    void** f0;
    void** f4;
};

struct s38 {
    void** f0;
    void** f4;
};

struct s39 {
    void** f0;
    void** f4;
};

struct s40 {
    void** f0;
    void** f4;
};

struct s41 {
    void** f0;
    void** f4;
};

struct s42 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s43 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s44 {
    void** f0;
    void** f4;
};

struct s45 {
    void** f0;
    void** f4;
};

struct s46 {
    void** f0;
    void** f4;
};

struct s47 {
    void** f0;
    void** f4;
};

struct s48 {
    void** f0;
    void** f4;
};

void** quantum_prob_inline(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

struct s49 {
    void** f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

struct s50 {
    void** f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

struct s51 {
    void** f0;
    int32_t f4;
};

struct s52 {
    void** f0;
    int32_t f4;
};

void** quantum_gate1(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* v6;
    uint32_t v7;
    int32_t v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    struct s30* eax16;
    struct s31* eax17;
    uint32_t esi18;
    uint32_t edi19;
    void** ecx20;
    uint32_t edx21;
    uint32_t eax22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** eax28;
    void** eax29;
    void** v30;
    void** eax31;
    void* v32;
    struct s32* eax33;
    struct s33* edx34;
    void** eax35;
    void** v36;
    void** eax37;
    void** v38;
    void** v39;
    void** v40;
    void** ecx41;
    int32_t edx42;
    void** v43;
    uint32_t eax44;
    void** ecx45;
    uint32_t eax46;
    uint32_t v47;
    void** v48;
    void** v49;
    struct s34* eax50;
    uint32_t esi51;
    uint32_t edi52;
    void** ecx53;
    uint32_t edx54;
    uint32_t eax55;
    void** v56;
    void** v57;
    void** eax58;
    struct s35* eax59;
    void** eax60;
    void** v61;
    struct s36* eax62;
    void** eax63;
    struct s37* esi64;
    void** ebx65;
    void** ecx66;
    struct s38* eax67;
    void** ebx68;
    void** ecx69;
    void** eax70;
    void** ecx71;
    struct s39* esi72;
    struct s40* eax73;
    void** ebx74;
    void** ecx75;
    struct s41* eax76;
    void** ebx77;
    void** ecx78;
    void** eax79;
    struct s38* eax80;
    void** edx81;
    void** eax82;
    int16_t fpu_status_word83;
    uint32_t ecx84;
    int16_t fpu_status_word85;
    int1_t pf86;
    uint32_t eax87;
    struct s40* eax88;
    void** edx89;
    void** eax90;
    int16_t fpu_status_word91;
    uint32_t ecx92;
    int16_t fpu_status_word93;
    int1_t pf94;
    uint32_t eax95;
    struct s42* v96;
    struct s43* eax97;
    uint32_t esi98;
    uint32_t edi99;
    void** ecx100;
    uint32_t edx101;
    uint32_t eax102;
    struct s44* esi103;
    struct s40* eax104;
    void** ebx105;
    void** ecx106;
    void** eax107;
    struct s45* esi108;
    struct s38* eax109;
    void** ebx110;
    void** ecx111;
    void** eax112;
    struct s46* esi113;
    struct s40* eax114;
    void** ebx115;
    void** ecx116;
    struct s41* eax117;
    void** ebx118;
    void** ecx119;
    struct s47* esi120;
    void** ebx121;
    void** ecx122;
    struct s38* eax123;
    void** ebx124;
    void** ecx125;
    void** v126;
    void** eax127;
    void** v128;
    uint32_t v129;
    struct s48* edx130;
    void** v131;
    int16_t ax132;
    int16_t fpu_status_word133;
    struct s49* ecx134;
    struct s50* eax135;
    int32_t edx136;
    struct s51* ecx137;
    struct s52* eax138;
    int32_t eax139;
    void** eax140;
    void** eax141;

    v6 = reinterpret_cast<void*>(0);
    v7 = 0;
    v8 = 1;
    if (!reinterpret_cast<int1_t>(a3 == 2) || a2 != 2) {
        quantum_error(4, v9, v10, v11, v12, v13, v14);
    }
    quantum_reconstruct_hash(a5);
    v15 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a5 + 1)) > reinterpret_cast<int32_t>(v15)) {
        if (v8 && (eax16 = reinterpret_cast<struct s30*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v15) << 4)), !!(reinterpret_cast<uint32_t>(v15) ^ eax16->f8 | eax16->fc ^ reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v15) >> 31)))) {
            v8 = 0;
        }
        eax17 = reinterpret_cast<struct s31*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v15) << 4));
        esi18 = eax17->f8;
        edi19 = eax17->fc;
        ecx20 = a1;
        edx21 = 0;
        __asm__("shld edx, eax, cl");
        eax22 = 1 << *reinterpret_cast<unsigned char*>(&ecx20);
        if (*reinterpret_cast<unsigned char*>(&ecx20) & 32) {
            edx21 = eax22;
            eax22 = 0;
        }
        v23 = *reinterpret_cast<void***>(a5);
        v24 = *reinterpret_cast<void***>(a5 + 1);
        v25 = *reinterpret_cast<void***>(a5 + 2);
        v26 = *reinterpret_cast<void***>(a5 + 3);
        v27 = *reinterpret_cast<void***>(a5 + 4);
        eax28 = quantum_get_state(esi18 ^ eax22, edi19 ^ edx21, v23, v24, v25, v26, v27);
        if (reinterpret_cast<int1_t>(eax28 == 0xffffffff)) {
            v6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v6) + 1);
        }
        v15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v15) + 1);
    }
    eax29 = *reinterpret_cast<void***>(a5 + 3);
    v30 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 1)) + reinterpret_cast<uint32_t>(v6) << 4);
    eax31 = fun_8048864(eax29, v30, v23, v24, v25, v26, v27);
    *reinterpret_cast<void***>(a5 + 3) = eax31;
    if (!*reinterpret_cast<void***>(a5 + 3)) {
        quantum_error(2, v30, v23, v24, v25, v26, v27);
    }
    quantum_memman(reinterpret_cast<uint32_t>(v6) << 4, v30, v23, v24, v25, v26, v27);
    v32 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v32) < reinterpret_cast<int32_t>(v6)) {
        eax33 = reinterpret_cast<struct s32*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 1)) + reinterpret_cast<uint32_t>(v32) << 4));
        eax33->f8 = 0;
        eax33->fc = 0;
        edx34 = reinterpret_cast<struct s33*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 1)) + reinterpret_cast<uint32_t>(v32) << 4));
        edx34->f0 = reinterpret_cast<void**>(0);
        edx34->f4 = 0;
        v32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v32) + 1);
    }
    eax35 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 1)) + reinterpret_cast<uint32_t>(v6));
    v36 = reinterpret_cast<void**>(1);
    eax37 = fun_8048884(eax35, 1, v23, v24, v25, v26, v27);
    v38 = eax37;
    if (!v38) {
        quantum_error(2, 1, v23, v24, v25, v26, v27);
    }
    v39 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 1)) + reinterpret_cast<uint32_t>(v6));
    quantum_memman(v39, 1, v23, v24, v25, v26, v27);
    v40 = *reinterpret_cast<void***>(a5 + 1);
    ecx41 = *reinterpret_cast<void***>(a5);
    edx42 = 0;
    __asm__("shld edx, eax, cl");
    if (*reinterpret_cast<unsigned char*>(&ecx41) & 32) {
        edx42 = 1 << *reinterpret_cast<unsigned char*>(&ecx41);
    }
    __asm__("fild qword [esp]");
    __asm__("fstp tword [ebp+0xffffff78]");
    if (edx42 < 0) {
        __asm__("fld tword [0x8054330]");
        __asm__("fld tword [ebp+0xffffff78]");
        __asm__("faddp st1, st0");
        __asm__("fstp tword [ebp+0xffffff78]");
    }
    __asm__("fld tword [ebp+0xffffff78]");
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [ebp-0x60]");
    __asm__("fld1 ");
    __asm__("fdivrp st1, st0");
    __asm__("fld qword [0x8054340]");
    __asm__("fmulp st1, st0");
    __asm__("fstp dword [ebp-0x38]");
    v43 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a5 + 1)) > reinterpret_cast<int32_t>(v43)) {
        eax44 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v43) + reinterpret_cast<uint32_t>(v38));
        if (*reinterpret_cast<signed char*>(&eax44)) {
            addr_804b38f_26:
            v43 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v43) + 1);
            continue;
        } else {
            ecx45 = a1;
            __asm__("shld edx, eax, cl");
            eax46 = 1 << *reinterpret_cast<unsigned char*>(&ecx45);
            if (*reinterpret_cast<unsigned char*>(&ecx45) & 32) {
                eax46 = 0;
            }
            v47 = eax46 & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v43) << 4) + 8);
            v48 = reinterpret_cast<void**>(0);
            v49 = reinterpret_cast<void**>(0);
            eax50 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v43) << 4));
            esi51 = eax50->f8;
            edi52 = eax50->fc;
            ecx53 = a1;
            edx54 = 0;
            __asm__("shld edx, eax, cl");
            eax55 = 1 << *reinterpret_cast<unsigned char*>(&ecx53);
            if (*reinterpret_cast<unsigned char*>(&ecx53) & 32) {
                edx54 = eax55;
                eax55 = 0;
            }
            v56 = *reinterpret_cast<void***>(a5);
            v57 = *reinterpret_cast<void***>(a5 + 1);
            v25 = *reinterpret_cast<void***>(a5 + 2);
            v26 = *reinterpret_cast<void***>(a5 + 3);
            v27 = *reinterpret_cast<void***>(a5 + 4);
            eax58 = quantum_get_state(esi51 ^ eax55, edi52 ^ edx54, v56, v57, v25, v26, v27);
            eax59 = reinterpret_cast<struct s35*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v43) << 4));
            eax60 = eax59->f4;
            v61 = eax59->f0;
            if (reinterpret_cast<int32_t>(eax58) >= reinterpret_cast<int32_t>(0)) {
                eax62 = reinterpret_cast<struct s36*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(eax58) << 4));
                eax63 = eax62->f4;
                v48 = eax62->f0;
                v49 = eax63;
            }
            if (!v47) {
                esi64 = reinterpret_cast<struct s37*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v43) << 4));
                ebx65 = *reinterpret_cast<void***>(a4);
                ecx66 = *reinterpret_cast<void***>(a4 + 1);
                __mulsc3(ecx66, ebx65, ecx66, v61, eax60, v25, v26, v27);
                eax67 = reinterpret_cast<struct s38*>(a4 + 2);
                ebx68 = eax67->f0;
                ecx69 = eax67->f4;
                v24 = v49;
                v23 = v48;
                v36 = ecx69;
                eax70 = __mulsc3(ecx69, ebx68, v36, v23, v24, v25, v26, v27);
                ecx71 = eax70;
                __asm__("fld dword [ebp+0xffffff64]");
                __asm__("fld dword [ebp-0x74]");
                __asm__("fld dword [ebp+0xffffff64]");
                __asm__("fld dword [ebp+0xffffff64]");
                __asm__("fxch st0, st1");
                __asm__("faddp st3, st0");
                __asm__("faddp st1, st0");
                __asm__("fxch st0, st1");
                __asm__("fstp dword [ebp+0xffffff64]");
                __asm__("fstp dword [ebp+0xffffff64]");
                esi64->f0 = v48;
                esi64->f4 = v48;
            } else {
                esi72 = reinterpret_cast<struct s39*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v43) << 4));
                eax73 = reinterpret_cast<struct s40*>(a4 + 4);
                ebx74 = eax73->f0;
                ecx75 = eax73->f4;
                __mulsc3(ecx75, ebx74, ecx75, v48, v49, v25, v26, v27);
                eax76 = reinterpret_cast<struct s41*>(a4 + 6);
                ebx77 = eax76->f0;
                ecx78 = eax76->f4;
                v24 = eax60;
                v23 = v61;
                v36 = ecx78;
                eax79 = __mulsc3(ecx78, ebx77, v36, v23, v24, v25, v26, v27);
                ecx71 = eax79;
                __asm__("fld dword [ebp+0xffffff64]");
                __asm__("fld dword [ebp-0x78]");
                __asm__("fld dword [ebp+0xffffff64]");
                __asm__("fld dword [ebp+0xffffff64]");
                __asm__("fxch st0, st1");
                __asm__("faddp st3, st0");
                __asm__("faddp st1, st0");
                __asm__("fxch st0, st1");
                __asm__("fstp dword [ebp+0xffffff64]");
                __asm__("fstp dword [ebp+0xffffff64]");
                esi72->f0 = v61;
                esi72->f4 = v61;
            }
            if (reinterpret_cast<int32_t>(eax58) >= reinterpret_cast<int32_t>(0)) 
                goto addr_804b043_37;
        }
        eax80 = reinterpret_cast<struct s38*>(a4 + 2);
        edx81 = eax80->f0;
        eax82 = eax80->f4;
        __asm__("fld dword [ebp+0xffffff64]");
        __asm__("fld dword [ebp+0xffffff64]");
        __asm__("fldz ");
        __asm__("fucomp st2");
        *reinterpret_cast<int16_t*>(&eax82) = fpu_status_word83;
        __asm__("fstp st1");
        *reinterpret_cast<unsigned char*>(&ecx71) = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax82) + 1);
        *reinterpret_cast<unsigned char*>(&eax82) = reinterpret_cast<uint1_t>(!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax82) + 1));
        ecx84 = reinterpret_cast<uint32_t>(ecx71) & reinterpret_cast<uint32_t>(eax82);
        __asm__("fldz ");
        __asm__("fucompp ");
        *reinterpret_cast<int16_t*>(&eax82) = fpu_status_word85;
        pf86 = *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax82) + 1);
        *reinterpret_cast<unsigned char*>(&eax82) = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax82) + 1);
        *reinterpret_cast<unsigned char*>(&edx81) = reinterpret_cast<uint1_t>(!pf86);
        eax87 = reinterpret_cast<uint32_t>(eax82) & reinterpret_cast<uint32_t>(edx81) & ecx84;
        if (!*reinterpret_cast<signed char*>(&eax87)) 
            goto addr_804b22b_39;
        if (v47) 
            break;
        addr_804b22b_39:
        eax88 = reinterpret_cast<struct s40*>(a4 + 4);
        edx89 = eax88->f0;
        eax90 = eax88->f4;
        __asm__("fld dword [ebp+0xffffff64]");
        __asm__("fld dword [ebp+0xffffff64]");
        __asm__("fldz ");
        __asm__("fucomp st2");
        *reinterpret_cast<int16_t*>(&eax90) = fpu_status_word91;
        __asm__("fstp st1");
        *reinterpret_cast<unsigned char*>(&ecx84) = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax90) + 1);
        *reinterpret_cast<unsigned char*>(&eax90) = reinterpret_cast<uint1_t>(!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax90) + 1));
        ecx92 = ecx84 & reinterpret_cast<uint32_t>(eax90);
        __asm__("fldz ");
        __asm__("fucompp ");
        *reinterpret_cast<int16_t*>(&eax90) = fpu_status_word93;
        pf94 = *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eax90) + 1);
        *reinterpret_cast<unsigned char*>(&eax90) = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax90) + 1);
        *reinterpret_cast<unsigned char*>(&edx89) = reinterpret_cast<uint1_t>(!pf94);
        eax95 = reinterpret_cast<uint32_t>(eax90) & reinterpret_cast<uint32_t>(edx89) & ecx92;
        if (!*reinterpret_cast<signed char*>(&eax95)) 
            goto addr_804b27e_41;
        if (!v47) 
            break;
        addr_804b27e_41:
        v96 = reinterpret_cast<struct s42*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v40) << 4));
        eax97 = reinterpret_cast<struct s43*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v43) << 4));
        esi98 = eax97->f8;
        edi99 = eax97->fc;
        ecx100 = a1;
        edx101 = 0;
        __asm__("shld edx, eax, cl");
        eax102 = 1 << *reinterpret_cast<unsigned char*>(&ecx100);
        if (*reinterpret_cast<unsigned char*>(&ecx100) & 32) 
            goto addr_804b2d1_43;
        addr_804b2d5_44:
        v96->f8 = esi98 ^ eax102;
        v96->fc = edi99 ^ edx101;
        if (!v47) {
            esi103 = reinterpret_cast<struct s44*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v40) << 4));
            eax104 = reinterpret_cast<struct s40*>(a4 + 4);
            ebx105 = eax104->f0;
            ecx106 = eax104->f4;
            v24 = eax60;
            v23 = v61;
            v36 = ecx106;
            eax107 = __mulsc3(ecx106, ebx105, v36, v23, v24, v25, v26, v27);
            esi103->f0 = eax107;
            esi103->f4 = v61;
        } else {
            esi108 = reinterpret_cast<struct s45*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v40) << 4));
            eax109 = reinterpret_cast<struct s38*>(a4 + 2);
            ebx110 = eax109->f0;
            ecx111 = eax109->f4;
            v24 = eax60;
            v23 = v61;
            v36 = ecx111;
            eax112 = __mulsc3(ecx111, ebx110, v36, v23, v24, v25, v26, v27);
            esi108->f0 = eax112;
            esi108->f4 = v61;
        }
        v40 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v40) + 1);
        addr_804b380_48:
        if (reinterpret_cast<int32_t>(eax58) >= reinterpret_cast<int32_t>(0)) {
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax58) + reinterpret_cast<uint32_t>(v38)) = 1;
            goto addr_804b38f_26;
        }
        addr_804b2d1_43:
        edx101 = eax102;
        eax102 = 0;
        goto addr_804b2d5_44;
        addr_804b043_37:
        if (!v47) {
            esi113 = reinterpret_cast<struct s46*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(eax58) << 4));
            eax114 = reinterpret_cast<struct s40*>(a4 + 4);
            ebx115 = eax114->f0;
            ecx116 = eax114->f4;
            __mulsc3(ecx116, ebx115, ecx116, v61, eax60, v25, v26, v27);
            eax117 = reinterpret_cast<struct s41*>(a4 + 6);
            ebx118 = eax117->f0;
            ecx119 = eax117->f4;
            v24 = v49;
            v23 = v48;
            v36 = ecx119;
            __mulsc3(ecx119, ebx118, v36, v23, v24, v25, v26, v27);
            __asm__("fld dword [ebp+0xffffff64]");
            __asm__("fld dword [ebp-0x6c]");
            __asm__("fld dword [ebp+0xffffff64]");
            __asm__("fld dword [ebp+0xffffff64]");
            __asm__("fxch st0, st1");
            __asm__("faddp st3, st0");
            __asm__("faddp st1, st0");
            __asm__("fxch st0, st1");
            __asm__("fstp dword [ebp+0xffffff64]");
            __asm__("fstp dword [ebp+0xffffff64]");
            esi113->f0 = v48;
            esi113->f4 = v48;
            goto addr_804b380_48;
        } else {
            esi120 = reinterpret_cast<struct s47*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(eax58) << 4));
            ebx121 = *reinterpret_cast<void***>(a4);
            ecx122 = *reinterpret_cast<void***>(a4 + 1);
            __mulsc3(ecx122, ebx121, ecx122, v48, v49, v25, v26, v27);
            eax123 = reinterpret_cast<struct s38*>(a4 + 2);
            ebx124 = eax123->f0;
            ecx125 = eax123->f4;
            v24 = eax60;
            v23 = v61;
            v36 = ecx125;
            __mulsc3(ecx125, ebx124, v36, v23, v24, v25, v26, v27);
            __asm__("fld dword [ebp+0xffffff64]");
            __asm__("fld dword [ebp-0x70]");
            __asm__("fld dword [ebp+0xffffff64]");
            __asm__("fld dword [ebp+0xffffff64]");
            __asm__("fxch st0, st1");
            __asm__("faddp st3, st0");
            __asm__("faddp st1, st0");
            __asm__("fxch st0, st1");
            __asm__("fstp dword [ebp+0xffffff64]");
            __asm__("fstp dword [ebp+0xffffff64]");
            esi120->f0 = v61;
            esi120->f4 = v61;
            goto addr_804b380_48;
        }
    }
    *reinterpret_cast<void***>(a5 + 1) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 1)) + reinterpret_cast<uint32_t>(v6));
    fun_80488d4(v38, v36, v23, v24, v25, v26, v27);
    v126 = reinterpret_cast<void**>(-reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 1)));
    quantum_memman(v126, v36, v23, v24, v25, v26, v27);
    if (v8) {
        addr_804b4f3_53:
        eax127 = quantum_decohere(a5, v36, v23, v24, v25, v26, v27);
        return eax127;
    } else {
        v128 = reinterpret_cast<void**>(0);
        v129 = 0;
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a5 + 1)) > reinterpret_cast<int32_t>(v128)) {
            edx130 = reinterpret_cast<struct s48*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v128) << 4));
            v131 = edx130->f0;
            v36 = edx130->f4;
            quantum_prob_inline(v131, v36, v23, v24, v25, v26, v27);
            __asm__("fld dword [ebp-0x38]");
            __asm__("fucompp ");
            ax132 = fpu_status_word133;
            if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax132) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax132) + 1)) {
                if (v129) {
                    ecx134 = reinterpret_cast<struct s49*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v128) - v129 << 4));
                    eax135 = reinterpret_cast<struct s50*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v128) << 4));
                    edx136 = eax135->fc;
                    ecx134->f8 = eax135->f8;
                    ecx134->fc = edx136;
                    ecx137 = reinterpret_cast<struct s51*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v128) - v129 << 4));
                    eax138 = reinterpret_cast<struct s52*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 3)) + (reinterpret_cast<uint32_t>(v128) << 4));
                    eax139 = eax138->f4;
                    ecx137->f0 = eax138->f0;
                    ecx137->f4 = eax139;
                }
            } else {
                ++v129;
                ++v7;
            }
            v128 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v128) + 1);
        }
        if (!v7) 
            goto addr_804b4f3_53;
    }
    *reinterpret_cast<void***>(a5 + 1) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 1)) - v7);
    eax140 = *reinterpret_cast<void***>(a5 + 3);
    v36 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a5 + 1)) << 4);
    eax141 = fun_8048864(eax140, v36, v23, v24, v25, v26, v27);
    *reinterpret_cast<void***>(a5 + 3) = eax141;
    if (!*reinterpret_cast<void***>(a5 + 3)) {
        quantum_error(2, v36, v23, v24, v25, v26, v27);
    }
    quantum_memman(-(v7 << 4), v36, v23, v24, v25, v26, v27);
    goto addr_804b4f3_53;
}

uint32_t quantum_hash64(void** a1, void** a2, void** a3);

struct s53 {
    signed char[8] pad8;
    uint32_t f8;
    uint32_t fc;
};

void** quantum_get_state(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    uint32_t eax10;
    uint32_t v11;
    struct s53* eax12;
    void** ecx13;
    void** v14;

    v8 = a1;
    v9 = a2;
    if (a5) {
        eax10 = quantum_hash64(v8, v9, a5);
        v11 = eax10;
        while (*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(a7) + (v11 << 2))) {
            eax12 = reinterpret_cast<struct s53*>(reinterpret_cast<uint32_t>(a6) + -(1 - reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(a7) + (v11 << 2))) << 4));
            if (!(eax12->f8 ^ reinterpret_cast<uint32_t>(v8) | eax12->fc ^ reinterpret_cast<uint32_t>(v9))) 
                goto addr_804b6e5_5;
            ++v11;
            ecx13 = a5;
            if (1 << *reinterpret_cast<unsigned char*>(&ecx13) != v11) 
                continue;
            v11 = 0;
        }
    } else {
        v14 = v8;
        goto addr_804b72e_9;
    }
    v14 = reinterpret_cast<void**>(0xffffffff);
    addr_804b72e_9:
    return v14;
    addr_804b6e5_5:
    v14 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(a7) + (v11 << 2))) - 1);
    goto addr_804b72e_9;
}

void quantum_add_hash(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    int32_t v7;
    void** v8;
    void** v9;
    uint32_t eax10;
    uint32_t v11;
    void** ecx12;
    void** v13;
    void** v14;

    v5 = a1;
    v6 = a2;
    v7 = 0;
    v8 = *reinterpret_cast<void***>(a4 + 2);
    v9 = v6;
    eax10 = quantum_hash64(v5, v9, v8);
    v11 = eax10;
    while (*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 4)) + (v11 << 2))) {
        ++v11;
        ecx12 = *reinterpret_cast<void***>(a4 + 2);
        if (1 << *reinterpret_cast<unsigned char*>(&ecx12) != v11) 
            continue;
        if (v7) {
            quantum_error(5, v9, v8, v13, v5, v6, v14);
        } else {
            v11 = 0;
            v7 = 1;
        }
    }
    *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 4)) + (v11 << 2)) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3) + 1);
    return;
}

uint32_t quantum_hash64(void** a1, void** a2, void** a3) {
    uint32_t ecx4;

    ecx4 = 32 - reinterpret_cast<uint32_t>(a3);
    return (reinterpret_cast<uint32_t>(a2) ^ reinterpret_cast<uint32_t>(a1)) * 0x9e370001 >> *reinterpret_cast<signed char*>(&ecx4);
}

uint32_t quantum_bitmask(void** a1, uint32_t a2, int32_t a3, int32_t* a4, void** a5, void** a6, void** a7) {
    void** v8;
    uint32_t v9;
    uint32_t v10;
    int32_t v11;
    int32_t ecx12;
    void** eax13;
    uint32_t eax14;
    int32_t ecx15;

    v8 = a1;
    v9 = a2;
    v10 = 0;
    v11 = 0;
    while (v11 < a3) {
        ecx12 = *reinterpret_cast<int32_t*>((v11 << 2) + reinterpret_cast<int32_t>(a4));
        eax13 = v8;
        __asm__("shrd eax, edx, cl");
        if (*reinterpret_cast<unsigned char*>(&ecx12) & 32) {
            eax13 = reinterpret_cast<void**>(v9 >> *reinterpret_cast<unsigned char*>(&ecx12));
        }
        eax14 = reinterpret_cast<uint32_t>(eax13) & 1;
        if (*reinterpret_cast<signed char*>(&eax14)) {
            ecx15 = v11;
            v10 = v10 + (1 << *reinterpret_cast<unsigned char*>(&ecx15));
        }
        ++v11;
    }
    return v10;
}

void quantum_delete_matrix(void** a1, void** a2, void** a3, void** a4, void** a5);

void quantum_hadamard(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    struct s38* edx11;
    struct s40* edx12;
    struct s41* edx13;
    void** v14;
    void** v15;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax9 = quantum_objcode_put(6, a1, v7, v8);
    if (!eax9) {
        quantum_new_matrix(reinterpret_cast<int32_t>(ebp6) - 40, 2, 2);
        *reinterpret_cast<void***>(v10) = reinterpret_cast<void**>(0x3f3504f3);
        *reinterpret_cast<void***>(v10 + 1) = reinterpret_cast<void**>(0);
        edx11 = reinterpret_cast<struct s38*>(v10 + 2);
        edx11->f0 = reinterpret_cast<void**>(0x3f3504f3);
        edx11->f4 = reinterpret_cast<void**>(0);
        edx12 = reinterpret_cast<struct s40*>(v10 + 4);
        edx12->f0 = reinterpret_cast<void**>(0x3f3504f3);
        edx12->f4 = reinterpret_cast<void**>(0);
        edx13 = reinterpret_cast<struct s41*>(v10 + 6);
        edx13->f0 = reinterpret_cast<void**>(0xbf3504f3);
        edx13->f4 = reinterpret_cast<void**>(0);
        quantum_gate1(a1, v14, v15, v10, a2);
        quantum_delete_matrix(reinterpret_cast<int32_t>(ebp6) + 0xffffffec, v14, v15, v10, a2);
    }
    return;
}

void quantum_delete_matrix(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void** v9;
    void** v10;

    v6 = *reinterpret_cast<void***>(a1 + 2);
    fun_80488d4(v6, v7, ebp8, __return_address(), a1, a2, a3);
    v9 = reinterpret_cast<void**>(-(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1)) * reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 1)) << 3));
    quantum_memman(v9, v10, ebp8, __return_address(), a1, a2, a3);
    *reinterpret_cast<void***>(a1 + 2) = reinterpret_cast<void**>(0);
    return;
}

void quantum_r_x(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    void** v7;
    void** v8;
    void** eax9;
    struct s1* v10;
    void** v11;
    void** v12;
    struct s38* ebx13;
    struct s1* v14;
    void** v15;
    void** v16;
    struct s40* ebx17;
    struct s1* v18;
    void** v19;
    void** v20;
    struct s41* ebx21;
    void** v22;
    void** v23;
    void** v24;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __asm__("fld dword [ebp+0xc]");
    __asm__("fstp qword [esp+0x8]");
    eax9 = quantum_objcode_put(7, a1, v7, v8);
    if (!eax9) {
        v10 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(ebp6) - 40);
        quantum_new_matrix(v10, 2, 2);
        __asm__("fld dword [ebp+0xc]");
        __asm__("fld dword [0x8054350]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [esp]");
        fun_8048934(v10, 2, 2);
        __asm__("fstp dword [ebp-0x2c]");
        __asm__("fld dword [ebp-0x2c]");
        __asm__("fstp dword [ebp-0x4c]");
        *reinterpret_cast<void***>(v11) = v12;
        *reinterpret_cast<void***>(v11 + 1) = reinterpret_cast<void**>(0);
        ebx13 = reinterpret_cast<struct s38*>(v11 + 2);
        __asm__("fld dword [ebp+0xc]");
        __asm__("fld dword [0x8054350]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [esp]");
        fun_8048a14(v10, 2, 2);
        __asm__("fldz ");
        __asm__("fld1 ");
        __asm__("fchs ");
        __asm__("fstp qword [esp+0x1c]");
        __asm__("fldz ");
        __asm__("fstp qword [esp+0x14]");
        __asm__("fstp qword [esp+0xc]");
        __asm__("fstp qword [esp+0x4]");
        v14 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(ebp6) - 64);
        __muldc3(v14, 2, 2);
        __asm__("fld qword [ebp-0x40]");
        __asm__("fld qword [ebp-0x38]");
        __asm__("fxch st0, st1");
        __asm__("fstp dword [ebp-0x2c]");
        __asm__("fld dword [ebp-0x2c]");
        __asm__("fxch st0, st1");
        __asm__("fstp dword [ebp-0x2c]");
        __asm__("fld dword [ebp-0x2c]");
        __asm__("fxch st0, st1");
        __asm__("fstp dword [ebp-0x4c]");
        __asm__("fstp dword [ebp-0x4c]");
        ebx13->f0 = v15;
        ebx13->f4 = v16;
        ebx17 = reinterpret_cast<struct s40*>(v11 + 4);
        __asm__("fld dword [ebp+0xc]");
        __asm__("fld dword [0x8054350]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [esp]");
        fun_8048a14(v14, 2, 2);
        __asm__("fldz ");
        __asm__("fld1 ");
        __asm__("fchs ");
        __asm__("fstp qword [esp+0x1c]");
        __asm__("fldz ");
        __asm__("fstp qword [esp+0x14]");
        __asm__("fstp qword [esp+0xc]");
        __asm__("fstp qword [esp+0x4]");
        v18 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(ebp6) - 64);
        __muldc3(v18, 2, 2);
        __asm__("fld qword [ebp-0x40]");
        __asm__("fld qword [ebp-0x38]");
        __asm__("fxch st0, st1");
        __asm__("fstp dword [ebp-0x2c]");
        __asm__("fld dword [ebp-0x2c]");
        __asm__("fxch st0, st1");
        __asm__("fstp dword [ebp-0x2c]");
        __asm__("fld dword [ebp-0x2c]");
        __asm__("fxch st0, st1");
        __asm__("fstp dword [ebp-0x4c]");
        __asm__("fstp dword [ebp-0x4c]");
        ebx17->f0 = v19;
        ebx17->f4 = v20;
        ebx21 = reinterpret_cast<struct s41*>(v11 + 6);
        __asm__("fld dword [ebp+0xc]");
        __asm__("fld dword [0x8054350]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [esp]");
        fun_8048934(v18, 2, 2);
        __asm__("fstp dword [ebp-0x2c]");
        __asm__("fld dword [ebp-0x2c]");
        __asm__("fstp dword [ebp-0x4c]");
        ebx21->f0 = v22;
        ebx21->f4 = reinterpret_cast<void**>(0);
        quantum_gate1(a1, v23, v24, v11, a3);
        quantum_delete_matrix(reinterpret_cast<int32_t>(ebp6) + 0xffffffec, v23, v24, v11, a3);
    }
    return;
}

int32_t cos = 0x804893a;

void fun_8048934(struct s1* a1, void** a2, void** a3) {
    goto cos;
}

int32_t sin = 0x8048a1a;

void fun_8048a14(struct s1* a1, void** a2, void** a3) {
    goto sin;
}

/* __i686.get_pc_thunk.bx */
int32_t __i686_get_pc_thunk_bx();

struct s1* __muldc3(struct s1* a1, void** a2, void** a3) {
    int16_t ax4;
    int16_t fpu_status_word5;
    int16_t ax6;
    int16_t fpu_status_word7;
    int16_t ax8;
    int16_t fpu_status_word9;
    int16_t ax10;
    int16_t fpu_status_word11;
    int16_t ax12;
    int16_t fpu_status_word13;
    int16_t ax14;
    int16_t fpu_status_word15;
    int16_t ax16;
    int16_t fpu_status_word17;
    int32_t ecx18;
    int16_t ax19;
    int16_t fpu_status_word20;
    int16_t ax21;
    int16_t fpu_status_word22;
    int16_t ax23;
    int16_t fpu_status_word24;
    int16_t ax25;
    int16_t fpu_status_word26;
    int16_t ax27;
    int16_t fpu_status_word28;
    int16_t ax29;
    int16_t fpu_status_word30;
    int16_t ax31;
    int16_t fpu_status_word32;
    int16_t ax33;
    int16_t fpu_status_word34;
    int16_t ax35;
    int16_t fpu_status_word36;
    int16_t ax37;
    int16_t fpu_status_word38;
    int16_t ax39;
    int16_t fpu_status_word40;
    int16_t ax41;
    int16_t fpu_status_word42;
    int16_t ax43;
    int16_t fpu_status_word44;
    int16_t ax45;
    int16_t fpu_status_word46;
    int16_t ax47;
    int16_t fpu_status_word48;
    int16_t ax49;
    int16_t fpu_status_word50;
    int16_t ax51;
    int16_t fpu_status_word52;
    int16_t ax53;
    int16_t fpu_status_word54;
    int16_t ax55;
    int16_t fpu_status_word56;
    int16_t ax57;
    int16_t fpu_status_word58;
    int16_t ax59;
    int16_t fpu_status_word60;
    int16_t ax61;
    int16_t fpu_status_word62;
    int16_t ax63;
    int16_t fpu_status_word64;
    int16_t ax65;
    int16_t fpu_status_word66;
    int16_t ax67;
    int16_t fpu_status_word68;
    int16_t ax69;
    int16_t fpu_status_word70;
    int16_t ax71;
    int16_t fpu_status_word72;
    int16_t ax73;
    int16_t fpu_status_word74;
    int16_t ax75;
    int16_t fpu_status_word76;
    int16_t ax77;
    int16_t fpu_status_word78;
    int16_t ax79;
    int16_t fpu_status_word80;
    int16_t ax81;
    int16_t fpu_status_word82;
    int16_t ax83;
    int16_t fpu_status_word84;
    int16_t ax85;
    int16_t fpu_status_word86;
    int16_t ax87;
    int16_t fpu_status_word88;
    int16_t ax89;
    int16_t fpu_status_word90;

    __asm__("fld qword [ebp+0xc]");
    __asm__("fld qword [ebp+0x14]");
    __asm__("fld qword [ebp+0x1c]");
    __asm__("fld qword [ebp+0x24]");
    __asm__("fld st3");
    __asm__("fmul st0, st2");
    __i686_get_pc_thunk_bx();
    __asm__("fstp qword [ebp-0x10]");
    __asm__("fld st2");
    __asm__("fmul st0, st1");
    __asm__("fstp qword [ebp-0x18]");
    __asm__("fld st3");
    __asm__("fmul st0, st1");
    __asm__("fstp qword [ebp-0x20]");
    __asm__("fld st2");
    __asm__("fmul st0, st2");
    __asm__("fstp qword [ebp-0x28]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x18]");
    __asm__("fst qword [ebp-0x78]");
    __asm__("fsubr st0, st1");
    __asm__("fld qword [ebp-0x20]");
    __asm__("fst qword [ebp-0x70]");
    __asm__("fld qword [ebp-0x28]");
    __asm__("fst qword [ebp-0x68]");
    __asm__("faddp st1, st0");
    __asm__("fxch st0, st1");
    __asm__("fucom st0");
    ax4 = fpu_status_word5;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax4) + 1)) {
        __asm__("fxch st0, st1");
    } else {
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax4) + 1)) {
            __asm__("fxch st0, st1");
        } else {
            __asm__("fstp st5");
            __asm__("fstp st5");
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fstp st0");
            goto addr_8053280_6;
        }
    }
    __asm__("fucom st0");
    ax6 = fpu_status_word7;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax6) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax6) + 1)) {
        __asm__("fld st6");
        __asm__("fsub st0, st7");
        __asm__("fst qword [ebp-0x60]");
        __asm__("fxch st0, st7");
        __asm__("fucom st0");
        ax8 = fpu_status_word9;
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax8) + 1)) {
            __asm__("fstp st7");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
            __asm__("fxch st0, st5");
            __asm__("fxch st0, st6");
        } else {
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax8) + 1)) {
                __asm__("fstp st7");
                __asm__("fxch st0, st1");
                __asm__("fxch st0, st2");
                __asm__("fxch st0, st3");
                __asm__("fxch st0, st4");
                __asm__("fxch st0, st5");
                __asm__("fxch st0, st6");
            } else {
                __asm__("fxch st0, st7");
                __asm__("fucomp st0");
                ax10 = fpu_status_word11;
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax10) + 1)) {
                    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax10) + 1)) {
                        __asm__("fxch st0, st6");
                        goto addr_80532dc_15;
                    } else {
                        __asm__("fxch st0, st1");
                        __asm__("fxch st0, st2");
                        __asm__("fxch st0, st3");
                        __asm__("fxch st0, st4");
                        __asm__("fxch st0, st5");
                        __asm__("fxch st0, st6");
                    }
                } else {
                    __asm__("fxch st0, st6");
                    goto addr_80532dc_15;
                }
            }
        }
    } else {
        __asm__("fstp st6");
        __asm__("fstp st4");
        __asm__("fstp st0");
        __asm__("fstp st0");
        __asm__("fstp st0");
        goto addr_8053280_6;
    }
    __asm__("fld st6");
    __asm__("fsub st0, st7");
    __asm__("fst qword [ebp-0x58]");
    __asm__("fxch st0, st7");
    __asm__("fucom st0");
    ax12 = fpu_status_word13;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax12) + 1)) {
        __asm__("fstp st7");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st5");
        __asm__("fxch st0, st6");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax12) + 1)) {
            __asm__("fstp st7");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
            __asm__("fxch st0, st5");
            __asm__("fxch st0, st6");
        } else {
            __asm__("fxch st0, st7");
            __asm__("fucomp st0");
            ax14 = fpu_status_word15;
            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax14) + 1) || *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax14) + 1)) {
                __asm__("fxam ");
                ax16 = fpu_status_word17;
                __asm__("fstp st0");
                __asm__("fldz ");
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax16) + 1) & 2)) {
                    __asm__("fxch st0, st1");
                    __asm__("fxch st0, st6");
                    __asm__("fxch st0, st5");
                    __asm__("fxch st0, st4");
                    __asm__("fxch st0, st3");
                    __asm__("fxch st0, st2");
                    __asm__("fxch st0, st1");
                    goto addr_8053756_26;
                } else {
                    __asm__("fstp st0");
                    __asm__("fldz ");
                    __asm__("fchs ");
                    __asm__("fxch st0, st1");
                    __asm__("fxch st0, st6");
                    __asm__("fxch st0, st5");
                    __asm__("fxch st0, st4");
                    __asm__("fxch st0, st3");
                    __asm__("fxch st0, st2");
                    __asm__("fxch st0, st1");
                    goto addr_8053756_26;
                }
            } else {
                __asm__("fxch st0, st1");
                __asm__("fxch st0, st2");
                __asm__("fxch st0, st3");
                __asm__("fxch st0, st4");
                __asm__("fxch st0, st5");
                __asm__("fxch st0, st6");
            }
        }
    }
    ecx18 = 0;
    addr_805339a_30:
    __asm__("fld st6");
    __asm__("fsub st0, st7");
    __asm__("fst qword [ebp-0x48]");
    __asm__("fxch st0, st7");
    __asm__("fucom st0");
    ax19 = fpu_status_word20;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax19) + 1)) {
        __asm__("fstp st7");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st5");
        __asm__("fxch st0, st6");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax19) + 1)) {
            __asm__("fstp st7");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
            __asm__("fxch st0, st5");
            __asm__("fxch st0, st6");
        } else {
            __asm__("fxch st0, st7");
            __asm__("fucomp st0");
            ax21 = fpu_status_word22;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax21) + 1)) {
                __asm__("fstp st3");
                __asm__("fstp st3");
                __asm__("fstp st0");
                goto addr_80533d4_36;
            } else {
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax21) + 1)) {
                    __asm__("fxch st0, st1");
                    __asm__("fxch st0, st2");
                    __asm__("fxch st0, st3");
                    __asm__("fxch st0, st4");
                    __asm__("fxch st0, st5");
                    __asm__("fxch st0, st6");
                } else {
                    __asm__("fstp st3");
                    __asm__("fstp st3");
                    __asm__("fstp st0");
                    goto addr_80533d4_36;
                }
            }
        }
    }
    __asm__("fld st6");
    __asm__("fsub st0, st7");
    __asm__("fst qword [ebp-0x40]");
    __asm__("fxch st0, st7");
    __asm__("fucom st0");
    ax23 = fpu_status_word24;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax23) + 1)) {
        __asm__("fstp st7");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st5");
        __asm__("fxch st0, st6");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax23) + 1)) {
            __asm__("fstp st7");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
            __asm__("fxch st0, st5");
            __asm__("fxch st0, st6");
        } else {
            __asm__("fxch st0, st7");
            __asm__("fucomp st0");
            ax25 = fpu_status_word26;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax25) + 1)) {
                __asm__("fstp st3");
                __asm__("fstp st3");
                __asm__("fstp st3");
                goto addr_80534f8_46;
            } else {
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax25) + 1)) {
                    __asm__("fxch st0, st1");
                    __asm__("fxch st0, st2");
                    __asm__("fxch st0, st3");
                    __asm__("fxch st0, st4");
                    __asm__("fxch st0, st5");
                    __asm__("fxch st0, st6");
                } else {
                    __asm__("fstp st3");
                    __asm__("fstp st3");
                    __asm__("fstp st3");
                    goto addr_80534f8_46;
                }
            }
        }
    }
    if (*reinterpret_cast<signed char*>(&ecx18)) {
        __asm__("fstp st6");
        __asm__("fstp st3");
        __asm__("fstp st3");
        __asm__("fxch st0, st3");
    } else {
        __asm__("fld st6");
        __asm__("fsub st0, st7");
        __asm__("fst qword [ebp-0x38]");
        __asm__("fxch st0, st7");
        __asm__("fucomp st0");
        ax27 = fpu_status_word28;
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax27) + 1)) {
            __asm__("fstp st6");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
            __asm__("fxch st0, st5");
            goto addr_8053594_54;
        } else {
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax27) + 1)) {
                __asm__("fstp st6");
                __asm__("fxch st0, st1");
                __asm__("fxch st0, st2");
                __asm__("fxch st0, st3");
                __asm__("fxch st0, st4");
                __asm__("fxch st0, st5");
                goto addr_8053594_54;
            } else {
                __asm__("fxch st0, st6");
                __asm__("fucomp st0");
                ax29 = fpu_status_word30;
                if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax29) + 1)) {
                    __asm__("fstp st4");
                    __asm__("fstp st2");
                    goto addr_805365c_59;
                } else {
                    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax29) + 1)) {
                        __asm__("fstp st4");
                        __asm__("fstp st2");
                        goto addr_805365c_59;
                    } else {
                        __asm__("fxch st0, st1");
                        __asm__("fxch st0, st2");
                        __asm__("fxch st0, st3");
                        __asm__("fxch st0, st4");
                        __asm__("fxch st0, st5");
                        goto addr_8053594_54;
                    }
                }
            }
        }
    }
    addr_8053478_63:
    __asm__("fld st3");
    __asm__("fmul st0, st2");
    __asm__("fld st3");
    __asm__("fmul st0, st2");
    __asm__("fsubp st1, st0");
    __asm__("fld dword [ebx+0xffffe5e8]");
    __asm__("fmul st1, st0");
    __asm__("fxch st0, st5");
    __asm__("fmulp st2, st0");
    __asm__("fxch st0, st3");
    __asm__("fmulp st2, st0");
    __asm__("faddp st1, st0");
    __asm__("fmulp st2, st0");
    addr_8053280_6:
    __asm__("fstp qword [edx]");
    __asm__("fstp qword [edx+0x8]");
    return a1;
    addr_8053594_54:
    __asm__("fld qword [ebp-0x78]");
    __asm__("fsub st0, st0");
    __asm__("fld qword [ebp-0x78]");
    __asm__("fucomp st0");
    ax31 = fpu_status_word32;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax31) + 1)) {
        __asm__("fstp st0");
        goto addr_80535c4_65;
    }
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax31) + 1)) {
        __asm__("fstp st0");
        goto addr_80535c4_65;
    }
    __asm__("fucomp st0");
    ax33 = fpu_status_word34;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax33) + 1)) 
        goto addr_80535b0_69;
    __asm__("fstp st5");
    __asm__("fstp st3");
    __asm__("fxch st0, st1");
    addr_805365c_59:
    __asm__("fucom st0");
    ax35 = fpu_status_word36;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax35) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax35) + 1)) {
        __asm__("fxam ");
        ax37 = fpu_status_word38;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax37) + 1) & 2) {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
        }
        __asm__("fxch st0, st1");
    } else {
        __asm__("fxch st0, st1");
    }
    __asm__("fucom st0");
    ax39 = fpu_status_word40;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax39) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax39) + 1)) {
        __asm__("fxam ");
        ax41 = fpu_status_word42;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax41) + 1) & 2) {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
        }
        __asm__("fxch st0, st2");
    } else {
        __asm__("fxch st0, st2");
    }
    __asm__("fucom st0");
    ax43 = fpu_status_word44;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax43) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax43) + 1)) {
        __asm__("fxam ");
        ax45 = fpu_status_word46;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax45) + 1) & 2) {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
        }
        __asm__("fxch st0, st3");
    } else {
        __asm__("fxch st0, st3");
    }
    __asm__("fucom st0");
    ax47 = fpu_status_word48;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax47) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax47) + 1)) {
        __asm__("fxam ");
        ax49 = fpu_status_word50;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax49) + 1) & 2)) {
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st1");
        } else {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st1");
            goto addr_80536cb_89;
        }
    } else {
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st1");
        goto addr_8053478_63;
    }
    addr_805345e_91:
    __asm__("fxch st0, st2");
    __asm__("fxch st0, st3");
    __asm__("fxch st0, st2");
    goto addr_8053478_63;
    addr_80535b0_69:
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax33) + 1)) {
        addr_80535c4_65:
        __asm__("fld qword [ebp-0x70]");
        __asm__("fsub st0, st0");
        __asm__("fld qword [ebp-0x70]");
        __asm__("fucomp st0");
        ax51 = fpu_status_word52;
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax51) + 1)) {
            __asm__("fstp st0");
            goto addr_80535f4_93;
        }
    } else {
        __asm__("fstp st5");
        __asm__("fstp st3");
        __asm__("fxch st0, st1");
        goto addr_805365c_59;
    }
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax51) + 1)) {
        __asm__("fstp st0");
        goto addr_80535f4_93;
    }
    __asm__("fucomp st0");
    ax53 = fpu_status_word54;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax53) + 1)) 
        goto addr_80535dc_99;
    __asm__("fstp st5");
    __asm__("fstp st3");
    __asm__("fxch st0, st1");
    goto addr_805365c_59;
    addr_80535dc_99:
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax53) + 1)) {
        addr_80535f4_93:
        __asm__("fld qword [ebp-0x68]");
        __asm__("fsub st0, st0");
        __asm__("fld qword [ebp-0x68]");
        __asm__("fucomp st0");
        ax55 = fpu_status_word56;
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax55) + 1)) {
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fxch st0, st1");
            goto addr_8053280_6;
        } else {
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax55) + 1)) {
                __asm__("fstp st0");
                __asm__("fstp st0");
                __asm__("fstp st0");
                __asm__("fstp st0");
                __asm__("fstp st0");
                __asm__("fxch st0, st1");
                goto addr_8053280_6;
            } else {
                __asm__("fucomp st0");
                ax57 = fpu_status_word58;
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax57) + 1)) {
                    __asm__("fstp st5");
                    __asm__("fstp st3");
                    __asm__("fxch st0, st1");
                    goto addr_805365c_59;
                } else {
                    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax57) + 1)) {
                        __asm__("fstp st0");
                        __asm__("fstp st0");
                        __asm__("fstp st0");
                        __asm__("fstp st0");
                        __asm__("fxch st0, st1");
                        goto addr_8053280_6;
                    } else {
                        __asm__("fstp st5");
                        __asm__("fstp st3");
                        __asm__("fxch st0, st1");
                        goto addr_805365c_59;
                    }
                }
            }
        }
    } else {
        __asm__("fstp st5");
        __asm__("fstp st3");
        __asm__("fxch st0, st1");
        goto addr_805365c_59;
    }
    addr_80534f8_46:
    __asm__("fld1 ");
    __asm__("fldz ");
    __asm__("fxch st0, st1");
    __asm__("fxch st0, st3");
    __asm__("fxch st0, st4");
    __asm__("fxch st0, st2");
    __asm__("fxch st0, st5");
    __asm__("fxch st0, st2");
    addr_8053404_111:
    __asm__("fucom st0");
    ax59 = fpu_status_word60;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax59) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax59) + 1)) {
        __asm__("fxam ");
        ax61 = fpu_status_word62;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax61) + 1) & 2) {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
        }
        __asm__("fxch st0, st4");
    } else {
        __asm__("fxch st0, st4");
    }
    __asm__("fucom st0");
    ax63 = fpu_status_word64;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax63) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax63) + 1)) {
        __asm__("fxam ");
        ax65 = fpu_status_word66;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax65) + 1) & 2) {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
        }
        __asm__("fxch st0, st5");
    } else {
        __asm__("fxch st0, st5");
    }
    __asm__("fxam ");
    ax67 = fpu_status_word68;
    __asm__("fstp st0");
    __asm__("fabs ");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax67) + 1) & 2) {
        __asm__("fchs ");
    }
    __asm__("fxch st0, st1");
    __asm__("fxam ");
    ax69 = fpu_status_word70;
    __asm__("fstp st0");
    __asm__("fxch st0, st1");
    __asm__("fabs ");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax69) + 1) & 2) {
        addr_80536cb_89:
        __asm__("fchs ");
        goto addr_805345e_91;
    } else {
        goto addr_805345e_91;
    }
    addr_80533d4_36:
    __asm__("fld st2");
    __asm__("fsub st0, st3");
    __asm__("fucomp st0");
    ax71 = fpu_status_word72;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax71) + 1)) {
        __asm__("fxch st0, st2");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax71) + 1)) {
            addr_8053874_127:
            __asm__("fldz ");
            __asm__("fld1 ");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st4");
            __asm__("fxch st0, st2");
            goto addr_8053404_111;
        } else {
            __asm__("fxch st0, st2");
        }
    }
    __asm__("fucom st0");
    ax73 = fpu_status_word74;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax73) + 1)) {
        __asm__("fxch st0, st2");
        goto addr_8053874_127;
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax73) + 1)) {
            __asm__("fxch st0, st2");
            goto addr_8053874_127;
        } else {
            __asm__("fld1 ");
            __asm__("fld st0");
            __asm__("fxch st0, st3");
            goto addr_8053404_111;
        }
    }
    addr_80532dc_15:
    __asm__("fxam ");
    ax75 = fpu_status_word76;
    __asm__("fstp st0");
    __asm__("fld1 ");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax75) + 1) & 2) {
        __asm__("fstp st0");
        __asm__("fld1 ");
        __asm__("fchs ");
    }
    __asm__("fld st5");
    __asm__("fsub st0, st6");
    __asm__("fst qword [ebp-0x30]");
    __asm__("fxch st0, st6");
    __asm__("fucom st0");
    ax77 = fpu_status_word78;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax77) + 1)) {
        __asm__("fstp st6");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st5");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax77) + 1)) {
            __asm__("fstp st6");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
            __asm__("fxch st0, st5");
        } else {
            __asm__("fxch st0, st6");
            __asm__("fucomp st0");
            ax79 = fpu_status_word80;
            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax79) + 1) || *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax79) + 1)) {
                addr_8053756_26:
                __asm__("fld1 ");
                __asm__("fstp qword [ebp-0x50]");
                __asm__("fxch st0, st1");
                __asm__("fxch st0, st2");
                __asm__("fxch st0, st3");
                __asm__("fxch st0, st4");
                __asm__("fxch st0, st5");
                goto addr_8053341_140;
            } else {
                __asm__("fxch st0, st1");
                __asm__("fxch st0, st2");
                __asm__("fxch st0, st3");
                __asm__("fxch st0, st4");
                __asm__("fxch st0, st5");
            }
        }
    }
    __asm__("fldz ");
    __asm__("fstp qword [ebp-0x50]");
    addr_8053341_140:
    __asm__("fxam ");
    ax81 = fpu_status_word82;
    __asm__("fstp st0");
    __asm__("fld qword [ebp-0x50]");
    __asm__("fabs ");
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax81) + 1) & 2)) {
        __asm__("fxch st0, st5");
    } else {
        __asm__("fchs ");
        __asm__("fxch st0, st5");
    }
    __asm__("fucom st0");
    ax83 = fpu_status_word84;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax83) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax83) + 1)) {
        __asm__("fxam ");
        ax85 = fpu_status_word86;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax85) + 1) & 2)) {
            __asm__("fxch st0, st4");
        } else {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
            __asm__("fxch st0, st4");
        }
    } else {
        __asm__("fxch st0, st4");
    }
    __asm__("fucom st0");
    ax87 = fpu_status_word88;
    ecx18 = 1;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax87) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax87) + 1)) {
        __asm__("fxam ");
        ax89 = fpu_status_word90;
        __asm__("fstp st0");
        __asm__("fldz ");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax89) + 1) & 2) {
            __asm__("fstp st0");
            __asm__("fldz ");
            __asm__("fchs ");
        }
        __asm__("fxch st0, st5");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st6");
        __asm__("fxch st0, st2");
        ecx18 = 1;
        goto addr_805339a_30;
    } else {
        __asm__("fxch st0, st5");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st6");
        __asm__("fxch st0, st2");
        goto addr_805339a_30;
    }
}

void quantum_r_y(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    void** v7;
    void** v8;
    void** eax9;
    struct s1* v10;
    void** v11;
    void** v12;
    struct s38* ebx13;
    void** v14;
    struct s40* ebx15;
    void** v16;
    struct s41* ebx17;
    void** v18;
    void** v19;
    void** v20;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __asm__("fld dword [ebp+0xc]");
    __asm__("fstp qword [esp+0x8]");
    eax9 = quantum_objcode_put(8, a1, v7, v8);
    if (!eax9) {
        v10 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(ebp6) - 40);
        quantum_new_matrix(v10, 2, 2);
        __asm__("fld dword [ebp+0xc]");
        __asm__("fld dword [0x8054350]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [esp]");
        fun_8048934(v10, 2, 2);
        __asm__("fstp dword [ebp-0x2c]");
        __asm__("fld dword [ebp-0x2c]");
        __asm__("fstp dword [ebp-0x3c]");
        *reinterpret_cast<void***>(v11) = v12;
        *reinterpret_cast<void***>(v11 + 1) = reinterpret_cast<void**>(0);
        ebx13 = reinterpret_cast<struct s38*>(v11 + 2);
        __asm__("fld dword [ebp+0xc]");
        __asm__("fld dword [0x8054354]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [esp]");
        fun_8048a14(v10, 2, 2);
        __asm__("fstp dword [ebp-0x2c]");
        __asm__("fld dword [ebp-0x2c]");
        __asm__("fstp dword [ebp-0x3c]");
        ebx13->f0 = v14;
        ebx13->f4 = reinterpret_cast<void**>(0);
        ebx15 = reinterpret_cast<struct s40*>(v11 + 4);
        __asm__("fld dword [ebp+0xc]");
        __asm__("fld dword [0x8054350]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [esp]");
        fun_8048a14(v10, 2, 2);
        __asm__("fstp dword [ebp-0x2c]");
        __asm__("fld dword [ebp-0x2c]");
        __asm__("fstp dword [ebp-0x3c]");
        ebx15->f0 = v16;
        ebx15->f4 = reinterpret_cast<void**>(0);
        ebx17 = reinterpret_cast<struct s41*>(v11 + 6);
        __asm__("fld dword [ebp+0xc]");
        __asm__("fld dword [0x8054350]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [esp]");
        fun_8048934(v10, 2, 2);
        __asm__("fstp dword [ebp-0x2c]");
        __asm__("fld dword [ebp-0x2c]");
        __asm__("fstp dword [ebp-0x3c]");
        ebx17->f0 = v18;
        ebx17->f4 = reinterpret_cast<void**>(0);
        quantum_gate1(a1, v19, v20, v11, a3);
        quantum_delete_matrix(reinterpret_cast<int32_t>(ebp6) + 0xffffffec, v19, v20, v11, a3);
    }
    return;
}

struct s54 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s55 {
    void** f0;
    void** f4;
};

struct s56 {
    void** f0;
    void** f4;
};

struct s57 {
    void** f0;
    void** f4;
};

struct s58 {
    void** f0;
    void** f4;
};

void** quantum_r_z(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    void** v14;
    void** edx15;
    void** v16;
    struct s54* eax17;
    uint32_t eax18;
    void** ecx19;
    uint32_t eax20;
    struct s55* esi21;
    struct s56* eax22;
    void** ebx23;
    void** ecx24;
    void** v25;
    void** v26;
    void** eax27;
    struct s57* esi28;
    struct s58* eax29;
    void** ebx30;
    void** ecx31;
    void** v32;
    void** eax33;
    void** v34;

    __asm__("fld dword [ebp+0xc]");
    __asm__("fstp qword [esp+0x8]");
    v6 = a1;
    eax9 = quantum_objcode_put(9, v6, v7, v8);
    if (!eax9) {
        __asm__("fld dword [ebp+0xc]");
        __asm__("fld dword [0x8054350]");
        __asm__("fdivp st1, st0");
        __asm__("fstp dword [esp]");
        eax12 = quantum_cexp(9, v6, v10, v11);
        v13 = eax12;
        v14 = edx15;
        v16 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a3 + 1)) > reinterpret_cast<int32_t>(v16)) {
            eax17 = reinterpret_cast<struct s54*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
            eax18 = eax17->f8;
            ecx19 = a1;
            __asm__("shrd eax, edx, cl");
            if (*reinterpret_cast<unsigned char*>(&ecx19) & 32) {
                eax18 = eax17->fc >> *reinterpret_cast<unsigned char*>(&ecx19);
            }
            eax20 = eax18 & 1;
            if (!*reinterpret_cast<signed char*>(&eax20)) {
                esi21 = reinterpret_cast<struct s55*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
                eax22 = reinterpret_cast<struct s56*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
                ebx23 = eax22->f0;
                ecx24 = eax22->f4;
                v25 = v14;
                v26 = v13;
                v6 = ecx24;
                eax27 = __divsc3(ecx24, ebx23, v6, v26, v25);
                esi21->f0 = eax27;
                esi21->f4 = v13;
            } else {
                esi28 = reinterpret_cast<struct s57*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
                eax29 = reinterpret_cast<struct s58*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
                ebx30 = eax29->f0;
                ecx31 = eax29->f4;
                v25 = v14;
                v26 = v13;
                v6 = ecx31;
                eax33 = __mulsc3(ecx31, ebx30, v6, v26, v25, v32, v13, v14);
                esi28->f0 = eax33;
                esi28->f4 = v13;
            }
            v16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v16) + 1);
        }
        eax9 = quantum_decohere(a3, v6, v26, v25, v34, v13, v14);
    }
    return eax9;
}

struct s59 {
    void** f0;
    void** f4;
};

struct s60 {
    void** f0;
    void** f4;
};

void** quantum_phase_scale(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    void** v14;
    void** edx15;
    void** v16;
    struct s59* esi17;
    struct s60* eax18;
    void** ebx19;
    void** ecx20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void** v25;

    __asm__("fld dword [ebp+0xc]");
    __asm__("fstp qword [esp+0x8]");
    v6 = a1;
    eax9 = quantum_objcode_put(11, v6, v7, v8);
    if (!eax9) {
        eax12 = quantum_cexp(a2, v6, v10, v11);
        v13 = eax12;
        v14 = edx15;
        v16 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a3 + 1)) > reinterpret_cast<int32_t>(v16)) {
            esi17 = reinterpret_cast<struct s59*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
            eax18 = reinterpret_cast<struct s60*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
            ebx19 = eax18->f0;
            ecx20 = eax18->f4;
            v21 = v14;
            v22 = v13;
            v6 = ecx20;
            eax24 = __mulsc3(ecx20, ebx19, v6, v22, v21, v23, v13, v14);
            esi17->f0 = eax24;
            esi17->f4 = v13;
            v16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v16) + 1);
        }
        eax9 = quantum_decohere(a3, v6, v22, v21, v25, v13, v14);
    }
    return eax9;
}

struct s61 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s62 {
    void** f0;
    void** f4;
};

struct s63 {
    void** f0;
    void** f4;
};

void** quantum_phase_kick(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    void** v14;
    void** edx15;
    void** v16;
    struct s61* eax17;
    uint32_t eax18;
    void** ecx19;
    uint32_t eax20;
    struct s62* esi21;
    struct s63* eax22;
    void** ebx23;
    void** ecx24;
    void** v25;
    void** v26;
    void** v27;
    void** eax28;
    void** v29;

    __asm__("fld dword [ebp+0xc]");
    __asm__("fstp qword [esp+0x8]");
    v6 = a1;
    eax9 = quantum_objcode_put(10, v6, v7, v8);
    if (!eax9) {
        eax12 = quantum_cexp(a2, v6, v10, v11);
        v13 = eax12;
        v14 = edx15;
        v16 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a3 + 1)) > reinterpret_cast<int32_t>(v16)) {
            eax17 = reinterpret_cast<struct s61*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
            eax18 = eax17->f8;
            ecx19 = a1;
            __asm__("shrd eax, edx, cl");
            if (*reinterpret_cast<unsigned char*>(&ecx19) & 32) {
                eax18 = eax17->fc >> *reinterpret_cast<unsigned char*>(&ecx19);
            }
            eax20 = eax18 & 1;
            if (*reinterpret_cast<signed char*>(&eax20)) {
                esi21 = reinterpret_cast<struct s62*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
                eax22 = reinterpret_cast<struct s63*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
                ebx23 = eax22->f0;
                ecx24 = eax22->f4;
                v25 = v14;
                v26 = v13;
                v6 = ecx24;
                eax28 = __mulsc3(ecx24, ebx23, v6, v26, v25, v27, v13, v14);
                esi21->f0 = eax28;
                esi21->f4 = v13;
            }
            v16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v16) + 1);
        }
        eax9 = quantum_decohere(a3, v6, v26, v25, v29, v13, v14);
    }
    return eax9;
}

struct s64 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s65 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s66 {
    void** f0;
    void** f4;
};

struct s67 {
    void** f0;
    void** f4;
};

void** quantum_cond_phase(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void* ecx10;
    void** edx11;
    void** v12;
    void** eax13;
    void** v14;
    void** v15;
    void** v16;
    struct s64* eax17;
    uint32_t eax18;
    void** ecx19;
    uint32_t eax20;
    struct s65* eax21;
    uint32_t eax22;
    void** ecx23;
    uint32_t eax24;
    struct s66* esi25;
    struct s67* eax26;
    void** ebx27;
    void** ecx28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** eax33;
    void** v34;
    void** v35;
    void** v36;

    v6 = a2;
    v7 = a1;
    eax9 = quantum_objcode_put(12, v7, v6, v8);
    if (!eax9) {
        ecx10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a1) - reinterpret_cast<uint32_t>(a2));
        edx11 = reinterpret_cast<void**>(0);
        __asm__("shld edx, eax, cl");
        if (*reinterpret_cast<unsigned char*>(&ecx10) & 32) {
            edx11 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx10));
        }
        __asm__("fild qword [esp]");
        __asm__("fstp tword [ebp-0x38]");
        if (reinterpret_cast<int32_t>(edx11) < reinterpret_cast<int32_t>(0)) {
            __asm__("fld tword [0x8054330]");
            __asm__("fld tword [ebp-0x38]");
            __asm__("faddp st1, st0");
            __asm__("fstp tword [ebp-0x38]");
        }
        __asm__("fld tword [ebp-0x38]");
        __asm__("fstp qword [ebp-0x20]");
        __asm__("fld qword [ebp-0x20]");
        __asm__("fld qword [0x8054358]");
        __asm__("fdivrp st1, st0");
        __asm__("fstp dword [ebp-0x24]");
        __asm__("fld dword [ebp-0x24]");
        __asm__("fstp dword [esp]");
        eax13 = quantum_cexp(12, v7, v6, v12);
        v14 = eax13;
        v15 = edx11;
        v16 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a3 + 1)) > reinterpret_cast<int32_t>(v16)) {
            eax17 = reinterpret_cast<struct s64*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
            eax18 = eax17->f8;
            ecx19 = a1;
            __asm__("shrd eax, edx, cl");
            if (*reinterpret_cast<unsigned char*>(&ecx19) & 32) {
                eax18 = eax17->fc >> *reinterpret_cast<unsigned char*>(&ecx19);
            }
            eax20 = eax18 & 1;
            if (*reinterpret_cast<signed char*>(&eax20)) {
                eax21 = reinterpret_cast<struct s65*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
                eax22 = eax21->f8;
                ecx23 = a2;
                __asm__("shrd eax, edx, cl");
                if (*reinterpret_cast<unsigned char*>(&ecx23) & 32) {
                    eax22 = eax21->fc >> *reinterpret_cast<unsigned char*>(&ecx23);
                }
                eax24 = eax22 & 1;
                if (*reinterpret_cast<signed char*>(&eax24)) {
                    esi25 = reinterpret_cast<struct s66*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
                    eax26 = reinterpret_cast<struct s67*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v16) << 4));
                    ebx27 = eax26->f0;
                    ecx28 = eax26->f4;
                    v29 = v15;
                    v6 = v14;
                    v7 = ecx28;
                    eax33 = __mulsc3(ecx28, ebx27, v7, v6, v29, v30, v31, v32);
                    esi25->f0 = eax33;
                    esi25->f4 = v14;
                }
            }
            v16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v16) + 1);
        }
        eax9 = quantum_decohere(a3, v7, v6, v29, v34, v35, v36);
    }
    return eax9;
}

struct s68 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s69 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s70 {
    void** f0;
    void** f4;
};

struct s71 {
    void** f0;
    void** f4;
};

void** quantum_cond_phase_inv(void** a1, void** a2, void** a3) {
    void* ecx4;
    void** edx5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    struct s68* eax14;
    uint32_t eax15;
    void** ecx16;
    uint32_t eax17;
    struct s69* eax18;
    uint32_t eax19;
    void** ecx20;
    uint32_t eax21;
    struct s70* esi22;
    struct s71* eax23;
    void** ebx24;
    void** ecx25;
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
    void** eax36;

    ecx4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a1) - reinterpret_cast<uint32_t>(a2));
    edx5 = reinterpret_cast<void**>(0);
    __asm__("shld edx, eax, cl");
    if (*reinterpret_cast<unsigned char*>(&ecx4) & 32) {
        edx5 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx4));
    }
    __asm__("fild qword [esp]");
    __asm__("fstp tword [ebp-0x38]");
    if (reinterpret_cast<int32_t>(edx5) < reinterpret_cast<int32_t>(0)) {
        __asm__("fld tword [0x8054330]");
        __asm__("fld tword [ebp-0x38]");
        __asm__("faddp st1, st0");
        __asm__("fstp tword [ebp-0x38]");
    }
    __asm__("fld tword [ebp-0x38]");
    __asm__("fstp qword [ebp-0x20]");
    __asm__("fld qword [ebp-0x20]");
    __asm__("fld qword [0x8054360]");
    __asm__("fdivrp st1, st0");
    __asm__("fstp dword [ebp-0x24]");
    __asm__("fld dword [ebp-0x24]");
    __asm__("fstp dword [esp]");
    eax10 = quantum_cexp(v6, v7, v8, v9);
    v11 = eax10;
    v12 = edx5;
    v13 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a3 + 1)) > reinterpret_cast<int32_t>(v13)) {
        eax14 = reinterpret_cast<struct s68*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v13) << 4));
        eax15 = eax14->f8;
        ecx16 = a1;
        __asm__("shrd eax, edx, cl");
        if (*reinterpret_cast<unsigned char*>(&ecx16) & 32) {
            eax15 = eax14->fc >> *reinterpret_cast<unsigned char*>(&ecx16);
        }
        eax17 = eax15 & 1;
        if (*reinterpret_cast<signed char*>(&eax17)) {
            eax18 = reinterpret_cast<struct s69*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v13) << 4));
            eax19 = eax18->f8;
            ecx20 = a2;
            __asm__("shrd eax, edx, cl");
            if (*reinterpret_cast<unsigned char*>(&ecx20) & 32) {
                eax19 = eax18->fc >> *reinterpret_cast<unsigned char*>(&ecx20);
            }
            eax21 = eax19 & 1;
            if (*reinterpret_cast<signed char*>(&eax21)) {
                esi22 = reinterpret_cast<struct s70*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v13) << 4));
                eax23 = reinterpret_cast<struct s71*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v13) << 4));
                ebx24 = eax23->f0;
                ecx25 = eax23->f4;
                v26 = v12;
                v27 = v11;
                v28 = ecx25;
                eax32 = __mulsc3(ecx25, ebx24, v28, v27, v26, v29, v30, v31);
                esi22->f0 = eax32;
                esi22->f4 = v11;
            }
        }
        v13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v13) + 1);
    }
    eax36 = quantum_decohere(a3, v28, v27, v26, v33, v34, v35);
    return eax36;
}

struct s72 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s73 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s74 {
    void** f0;
    void** f4;
};

struct s75 {
    void** f0;
    void** f4;
};

void** quantum_cond_phase_kick(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;
    void** edx14;
    void** v15;
    struct s72* eax16;
    uint32_t eax17;
    void** ecx18;
    uint32_t eax19;
    struct s73* eax20;
    uint32_t eax21;
    void** ecx22;
    uint32_t eax23;
    struct s74* esi24;
    struct s75* eax25;
    void** ebx26;
    void** ecx27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    void** v33;
    void** v34;
    void** v35;

    __asm__("fld dword [ebp+0x10]");
    __asm__("fstp qword [esp+0xc]");
    v6 = a2;
    v7 = a1;
    eax9 = quantum_objcode_put(12, v7, v6, v8);
    if (!eax9) {
        eax11 = quantum_cexp(a3, v7, v6, v10);
        v12 = eax11;
        v13 = edx14;
        v15 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a4 + 1)) > reinterpret_cast<int32_t>(v15)) {
            eax16 = reinterpret_cast<struct s72*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v15) << 4));
            eax17 = eax16->f8;
            ecx18 = a1;
            __asm__("shrd eax, edx, cl");
            if (*reinterpret_cast<unsigned char*>(&ecx18) & 32) {
                eax17 = eax16->fc >> *reinterpret_cast<unsigned char*>(&ecx18);
            }
            eax19 = eax17 & 1;
            if (*reinterpret_cast<signed char*>(&eax19)) {
                eax20 = reinterpret_cast<struct s73*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v15) << 4));
                eax21 = eax20->f8;
                ecx22 = a2;
                __asm__("shrd eax, edx, cl");
                if (*reinterpret_cast<unsigned char*>(&ecx22) & 32) {
                    eax21 = eax20->fc >> *reinterpret_cast<unsigned char*>(&ecx22);
                }
                eax23 = eax21 & 1;
                if (*reinterpret_cast<signed char*>(&eax23)) {
                    esi24 = reinterpret_cast<struct s74*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v15) << 4));
                    eax25 = reinterpret_cast<struct s75*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v15) << 4));
                    ebx26 = eax25->f0;
                    ecx27 = eax25->f4;
                    v28 = v13;
                    v6 = v12;
                    v7 = ecx27;
                    eax32 = __mulsc3(ecx27, ebx26, v7, v6, v28, v29, v30, v31);
                    esi24->f0 = eax32;
                    esi24->f4 = v12;
                }
            }
            v15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v15) + 1);
        }
        eax9 = quantum_decohere(a4, v7, v6, v28, v33, v34, v35);
    }
    return eax9;
}

/* counter.4541 */
int32_t counter_4541 = 0;

int32_t quantum_gate_counter(int32_t a1) {
    int32_t eax2;
    int32_t eax3;

    if (a1 <= 0) {
        if (a1 < 0) {
            counter_4541 = 0;
        }
    } else {
        eax2 = counter_4541;
        counter_4541 = eax2 + a1;
    }
    eax3 = counter_4541;
    return eax3;
}

int32_t putchar = 0x804889a;

void fun_8048894(int32_t a1, void** a2) {
    goto putchar;
}

int32_t quantum_imag(void** a1, int32_t a2) {
    __asm__("fld dword [ebp-0x14]");
    return a2;
}

int32_t fun_80489f4(void** a1, void** a2, void** a3);

int32_t quantum_frand(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** ebp5;
    int32_t eax6;

    eax6 = fun_80489f4(v3, v4, ebp5);
    __asm__("fild dword [esp]");
    __asm__("fld qword [0x8054378]");
    __asm__("fdivp st1, st0");
    return eax6;
}

void** quantum_real(void** a1, void** a2);

void** quantum_imag(void** a1, void** a2);

void** quantum_prob_inline(void** a1, void** a2) {
    void** eax3;

    quantum_real(a1, a2);
    __asm__("fstp dword [ebp-0x4]");
    eax3 = quantum_imag(a1, a2);
    __asm__("fstp dword [ebp-0x8]");
    __asm__("fld dword [ebp-0x4]");
    __asm__("fmul dword [ebp-0x4]");
    __asm__("fld dword [ebp-0x8]");
    __asm__("fmul dword [ebp-0x8]");
    __asm__("faddp st1, st0");
    return eax3;
}

struct s76 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s77 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s78 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

void** quantum_cnot(void** a1, void** a2, void** a3, void** a4, void** a5) {
    int32_t v6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    void** v11;
    struct s76* eax12;
    uint32_t eax13;
    void** ecx14;
    uint32_t eax15;
    struct s77* v16;
    struct s78* eax17;
    uint32_t esi18;
    uint32_t edi19;
    void** ecx20;
    uint32_t edx21;
    uint32_t eax22;
    void** v23;
    void** v24;
    void** v25;

    quantum_qec_get_status(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24, 0);
    if (!v6) {
        v7 = a2;
        v8 = a1;
        eax10 = quantum_objcode_put(1, v8, v7, v9);
        if (!eax10) {
            v11 = reinterpret_cast<void**>(0);
            while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a3 + 1)) > reinterpret_cast<int32_t>(v11)) {
                eax12 = reinterpret_cast<struct s76*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v11) << 4));
                eax13 = eax12->f8;
                ecx14 = a1;
                __asm__("shrd eax, edx, cl");
                if (*reinterpret_cast<unsigned char*>(&ecx14) & 32) {
                    eax13 = eax12->fc >> *reinterpret_cast<unsigned char*>(&ecx14);
                }
                eax15 = eax13 & 1;
                if (*reinterpret_cast<signed char*>(&eax15)) {
                    v16 = reinterpret_cast<struct s77*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v11) << 4));
                    eax17 = reinterpret_cast<struct s78*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v11) << 4));
                    esi18 = eax17->f8;
                    edi19 = eax17->fc;
                    ecx20 = a2;
                    edx21 = 0;
                    __asm__("shld edx, eax, cl");
                    eax22 = 1 << *reinterpret_cast<unsigned char*>(&ecx20);
                    if (*reinterpret_cast<unsigned char*>(&ecx20) & 32) {
                        edx21 = eax22;
                        eax22 = 0;
                    }
                    v16->f8 = esi18 ^ eax22;
                    v16->fc = edi19 ^ edx21;
                }
                v11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v11) + 1);
            }
            eax10 = quantum_decohere(a3, v8, v7, v23, v24, v25, 1);
        }
    } else {
        eax10 = quantum_cnot_ft(a1, a2, a3);
    }
    return eax10;
}

struct s79 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s80 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s81 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s82 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

void** quantum_toffoli(void** a1, void** a2, void** a3, void** a4, void** a5) {
    int32_t v6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    void** v11;
    struct s79* eax12;
    uint32_t eax13;
    void** ecx14;
    uint32_t eax15;
    struct s80* eax16;
    uint32_t eax17;
    void** ecx18;
    uint32_t eax19;
    struct s81* v20;
    struct s82* eax21;
    uint32_t esi22;
    uint32_t edi23;
    void** ecx24;
    uint32_t edx25;
    uint32_t eax26;
    void** v27;
    void** v28;

    quantum_qec_get_status(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24, 0);
    if (!v6) {
        v7 = a3;
        v8 = a2;
        v9 = a1;
        eax10 = quantum_objcode_put(2, v9, v8, v7);
        if (!eax10) {
            v11 = reinterpret_cast<void**>(0);
            while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a4 + 1)) > reinterpret_cast<int32_t>(v11)) {
                eax12 = reinterpret_cast<struct s79*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v11) << 4));
                eax13 = eax12->f8;
                ecx14 = a1;
                __asm__("shrd eax, edx, cl");
                if (*reinterpret_cast<unsigned char*>(&ecx14) & 32) {
                    eax13 = eax12->fc >> *reinterpret_cast<unsigned char*>(&ecx14);
                }
                eax15 = eax13 & 1;
                if (*reinterpret_cast<signed char*>(&eax15)) {
                    eax16 = reinterpret_cast<struct s80*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v11) << 4));
                    eax17 = eax16->f8;
                    ecx18 = a2;
                    __asm__("shrd eax, edx, cl");
                    if (*reinterpret_cast<unsigned char*>(&ecx18) & 32) {
                        eax17 = eax16->fc >> *reinterpret_cast<unsigned char*>(&ecx18);
                    }
                    eax19 = eax17 & 1;
                    if (*reinterpret_cast<signed char*>(&eax19)) {
                        v20 = reinterpret_cast<struct s81*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v11) << 4));
                        eax21 = reinterpret_cast<struct s82*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 3)) + (reinterpret_cast<uint32_t>(v11) << 4));
                        esi22 = eax21->f8;
                        edi23 = eax21->fc;
                        ecx24 = a3;
                        edx25 = 0;
                        __asm__("shld edx, eax, cl");
                        eax26 = 1 << *reinterpret_cast<unsigned char*>(&ecx24);
                        if (*reinterpret_cast<unsigned char*>(&ecx24) & 32) {
                            edx25 = eax26;
                            eax26 = 0;
                        }
                        v20->f8 = esi22 ^ eax26;
                        v20->fc = edi23 ^ edx25;
                    }
                }
                v11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v11) + 1);
            }
            eax10 = quantum_decohere(a4, v9, v8, v7, v27, v28, 1);
        }
    } else {
        eax10 = quantum_toffoli_ft(a1, a2, a3, a4);
    }
    return eax10;
}

void** muxfa(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, uint32_t a7, void** a8) {
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
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

    if (!a1) {
        v9 = a8;
        quantum_toffoli(a2, a3, a4, v9, v10);
        v11 = a8;
        eax13 = quantum_cnot(a2, a3, v11, v9, v12);
    }
    if (a1 == 3) {
        quantum_toffoli(a6, a3, a4, a8, v14);
        quantum_cnot(a6, a3, a8, a8, v15);
        v9 = a8;
        quantum_toffoli(a2, a3, a4, v9, v16);
        v11 = a8;
        eax13 = quantum_cnot(a2, a3, v11, v9, v17);
    }
    if (a1 == 1) {
        quantum_toffoli(a6, a5, a2, a8, v18);
        quantum_toffoli(a2, a3, a4, a8, v19);
        quantum_toffoli(a6, a5, a2, a8, v20);
        quantum_toffoli(a2, a3, a4, a8, v21);
        quantum_toffoli(a6, a5, a3, a8, v22);
        v9 = a8;
        quantum_toffoli(a2, a3, a4, v9, v23);
        v11 = a8;
        eax13 = quantum_cnot(a2, a3, v11, v9, v24);
    }
    if (a1 == 2) {
        quantum_sigma_x(a5, a8, v11, v9, v25);
        quantum_toffoli(a6, a5, a2, a8, v26);
        quantum_toffoli(a2, a3, a4, a8, v27);
        quantum_toffoli(a6, a5, a2, a8, v28);
        quantum_toffoli(a2, a3, a4, a8, v29);
        quantum_toffoli(a6, a5, a3, a8, v30);
        quantum_toffoli(a2, a3, a4, a8, v31);
        quantum_cnot(a2, a3, a8, a8, v32);
        eax13 = quantum_sigma_x(a5, a8, a8, a8, v33);
    }
    return eax13;
}

void** muxha(int32_t a1, void** a2, void** a3, void** a4, void** a5, uint32_t a6, void** a7, void** a8) {
    void** v9;
    void** v10;
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

    if (!a1) {
        v9 = a7;
        eax12 = quantum_cnot(a2, a3, v9, v10, v11);
    }
    if (a1 == 3) {
        quantum_cnot(a5, a3, a7, v13, v14);
        v9 = a7;
        eax12 = quantum_cnot(a2, a3, v9, v15, v16);
    }
    if (a1 == 1) {
        v17 = a7;
        quantum_toffoli(a5, a4, a3, v17, v18);
        v9 = a7;
        eax12 = quantum_cnot(a2, a3, v9, v17, v19);
    }
    if (a1 == 2) {
        quantum_sigma_x(a4, a7, v9, v17, v20);
        quantum_toffoli(a5, a4, a3, a7, v21);
        quantum_cnot(a2, a3, a7, a7, v22);
        eax12 = quantum_sigma_x(a4, a7, a7, a7, v23);
    }
    return eax12;
}

void** muxha_inv(int32_t a1, void** a2, void** a3, void** a4, void** a5, uint32_t a6, void** a7);

void** muxfa_inv(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, uint32_t a7, void** a8);

void** madd_inv(uint32_t a1, void* a2, void** a3, void** a4) {
    uint32_t eax5;
    uint32_t v6;
    int32_t v7;
    void** ecx8;
    uint32_t eax9;
    void** ecx10;
    uint32_t eax11;
    void** eax12;
    void** v13;
    void** ecx14;
    uint32_t eax15;
    int32_t v16;
    void** ecx17;
    uint32_t eax18;

    eax5 = reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3) + 1;
    v6 = eax5 + eax5;
    v7 = 0;
    ecx8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3) + 0xffffffff);
    eax9 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a1) >> *reinterpret_cast<signed char*>(&ecx8)) & 1;
    if (*reinterpret_cast<signed char*>(&eax9)) {
        v7 = 2;
    }
    ecx10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3) + 0xffffffff);
    eax11 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a2) >> *reinterpret_cast<signed char*>(&ecx10)) & 1;
    if (*reinterpret_cast<signed char*>(&eax11)) {
        ++v7;
    }
    muxha_inv(v7, reinterpret_cast<uint32_t>(a3) + 0xffffffff, reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3) + 0xffffffff, reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3), reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3) + 1, v6, a4);
    eax12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3) - 2);
    v13 = eax12;
    while (reinterpret_cast<int32_t>(v13) >= reinterpret_cast<int32_t>(0)) {
        ecx14 = v13;
        eax15 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a1) >> *reinterpret_cast<signed char*>(&ecx14)) & 1;
        if (!*reinterpret_cast<signed char*>(&eax15)) {
            v16 = 0;
        } else {
            v16 = 2;
        }
        ecx17 = v13;
        eax18 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a2) >> *reinterpret_cast<signed char*>(&ecx17)) & 1;
        if (*reinterpret_cast<signed char*>(&eax18)) {
            ++v16;
        }
        eax12 = muxfa_inv(v16, v13, reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(v13), reinterpret_cast<uint32_t>(a3) + 1 + reinterpret_cast<uint32_t>(v13), reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3), reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3) + 1, v6, a4);
        v13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v13) - 1);
    }
    return eax12;
}

void** muxfa_inv(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, uint32_t a7, void** a8) {
    void** v9;
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
    void** v33;
    void** v34;

    if (!a1) {
        quantum_cnot(a2, a3, a8, v9, v10);
        v11 = a8;
        v12 = a4;
        eax14 = quantum_toffoli(a2, a3, v12, v11, v13);
    }
    if (a1 == 3) {
        quantum_cnot(a2, a3, a8, v11, v15);
        quantum_toffoli(a2, a3, a4, a8, v16);
        quantum_cnot(a6, a3, a8, a8, v17);
        v11 = a8;
        v12 = a4;
        eax14 = quantum_toffoli(a6, a3, v12, v11, v18);
    }
    if (a1 == 1) {
        quantum_cnot(a2, a3, a8, v11, v19);
        quantum_toffoli(a2, a3, a4, a8, v20);
        quantum_toffoli(a6, a5, a3, a8, v21);
        quantum_toffoli(a2, a3, a4, a8, v22);
        quantum_toffoli(a6, a5, a2, a8, v23);
        quantum_toffoli(a2, a3, a4, a8, v24);
        v11 = a8;
        v12 = a2;
        eax14 = quantum_toffoli(a6, a5, v12, v11, v25);
    }
    if (a1 == 2) {
        quantum_sigma_x(a5, a8, v12, v11, v26);
        quantum_cnot(a2, a3, a8, v11, v27);
        quantum_toffoli(a2, a3, a4, a8, v28);
        quantum_toffoli(a6, a5, a3, a8, v29);
        quantum_toffoli(a2, a3, a4, a8, v30);
        quantum_toffoli(a6, a5, a2, a8, v31);
        quantum_toffoli(a2, a3, a4, a8, v32);
        quantum_toffoli(a6, a5, a2, a8, v33);
        eax14 = quantum_sigma_x(a5, a8, a2, a8, v34);
    }
    return eax14;
}

void** test_sum(void* a1, void** a2, void** a3, void** a4);

void** madd(void* a1, void* a2, void** a3, void** a4);

void** addn(void** a1, void* a2, void** a3, void** a4) {
    void** v5;
    void** ecx6;
    void** eax7;

    test_sum(reinterpret_cast<uint32_t>(a1) - reinterpret_cast<uint32_t>(a2), a3, a4, v5);
    ecx6 = a3;
    eax7 = madd((1 << *reinterpret_cast<unsigned char*>(&ecx6)) + reinterpret_cast<uint32_t>(a2) - reinterpret_cast<uint32_t>(a1), a2, a3, a4);
    return eax7;
}

void quantum_int2char(void** a1, void** a2) {
    void* v3;
    int32_t ecx4;
    int32_t eax5;
    int32_t ecx6;

    v3 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v3) < 4) {
        ecx4 = ~(reinterpret_cast<int32_t>(v3) - 4) * 8;
        eax5 = reinterpret_cast<int32_t>(a1) / (1 << *reinterpret_cast<unsigned char*>(&ecx4));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(v3) + reinterpret_cast<uint32_t>(a2)) = *reinterpret_cast<signed char*>(&eax5);
        ecx6 = ~(reinterpret_cast<int32_t>(v3) - 4) * 8;
        a1 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(a1) % (1 << *reinterpret_cast<unsigned char*>(&ecx6)));
        v3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v3) + 1);
    }
    return;
}

void quantum_double2char(void** a1, void** a2, void** a3) {
    void* v4;
    void* v5;
    uint32_t eax6;

    v4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24);
    v5 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<uint32_t>(v5) <= 7) {
        eax6 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v5) + reinterpret_cast<int32_t>(v4));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v5) + reinterpret_cast<uint32_t>(a3)) = *reinterpret_cast<signed char*>(&eax6);
        v5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v5) + 1);
    }
    return;
}

void** quantum_char2mu(void* a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void* v7;
    uint32_t eax8;
    int32_t ecx9;
    void* eax10;

    v6 = reinterpret_cast<void**>(0);
    v7 = reinterpret_cast<void*>(7);
    while (reinterpret_cast<int32_t>(v7) >= 0) {
        eax8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v7) + reinterpret_cast<int32_t>(a1));
        ecx9 = ~(reinterpret_cast<int32_t>(v7) - 8) * 8;
        __asm__("shld edx, eax, cl");
        eax10 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax8)) << *reinterpret_cast<unsigned char*>(&ecx9));
        if (*reinterpret_cast<unsigned char*>(&ecx9) & 32) {
            eax10 = reinterpret_cast<void*>(0);
        }
        v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v6) + reinterpret_cast<uint32_t>(eax10));
        v7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v7) - 1);
    }
    return v6;
}

void** quantum_char2int(void* a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void* v7;
    uint32_t eax8;
    int32_t ecx9;

    v6 = reinterpret_cast<void**>(0);
    v7 = reinterpret_cast<void*>(3);
    while (reinterpret_cast<int32_t>(v7) >= 0) {
        eax8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v7) + reinterpret_cast<int32_t>(a1));
        ecx9 = ~(reinterpret_cast<int32_t>(v7) - 4) * 8;
        v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v6) + (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax8)) << *reinterpret_cast<unsigned char*>(&ecx9)));
        v7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v7) - 1);
    }
    return v6;
}

void* quantum_char2double(void* a1, void** a2, void** a3, void** a4, void** a5) {
    __asm__("fld qword [eax]");
    return a1;
}

int32_t opstatus = 0;

void** objcode = reinterpret_cast<void**>(0);

uint32_t allocated = 0;

void** quantum_objcode_stop(void** a1, void** a2, void** a3) {
    void** eax4;
    void** v5;
    void** ebp6;
    uint32_t eax7;
    void** v8;
    void** eax9;

    opstatus = 0;
    eax4 = objcode;
    fun_80488d4(eax4, v5, ebp6, __return_address(), a1, a2, a3);
    objcode = reinterpret_cast<void**>(0);
    eax7 = allocated;
    eax9 = quantum_memman(-(eax7 << 16), v8, ebp6, __return_address(), a1, a2, a3);
    allocated = 0;
    return eax9;
}

int32_t __stack_chk_fail = 0x80489ca;

void** fun_80489c4(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto __stack_chk_fail;
}

void** globalfile = reinterpret_cast<void**>(0);

void** fun_8048924(void** a1, void** a2);

void** position = reinterpret_cast<void**>(0);

void fun_8048984(void** a1, void** a2, void** a3, void** a4);

void fun_8048904(void** a1, void** a2, void** a3, void** a4, void** a5);

int32_t quantum_objcode_write(void** a1) {
    int32_t eax2;
    void** eax3;
    void** eax4;
    void** edx5;
    void** ecx6;
    void** v7;
    int32_t v8;
    void** eax9;

    eax2 = opstatus;
    if (eax2) {
        if (!a1) {
            eax3 = globalfile;
            a1 = eax3;
        }
        eax4 = fun_8048924(a1, "w");
        if (eax4) {
            edx5 = position;
            ecx6 = objcode;
            fun_8048984(ecx6, edx5, 1, eax4);
            fun_8048904(eax4, edx5, 1, eax4, v7);
            v8 = 0;
        } else {
            v8 = -1;
        }
    } else {
        eax9 = stderr;
        fun_8048984("Object code generation not active! Forgot to call quantum_objcode_start?\n", 1, 73, eax9);
        v8 = 1;
    }
    return v8;
}

int32_t fwrite = 0x804898a;

void fun_8048984(void** a1, void** a2, void** a3, void** a4) {
    goto fwrite;
}

int32_t fopen = 0x804892a;

void** fun_8048924(void** a1, void** a2) {
    goto fopen;
}

int32_t fprintf = 0x804899a;

void fun_8048994(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto fprintf;
}

int32_t perror = 0x80488ca;

void fun_80488c4(void** a1, void** a2, void** a3) {
    goto perror;
}

int32_t fgetc = 0x804894a;

unsigned char fun_8048944(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto fgetc;
}

int32_t fclose = 0x804890a;

void fun_8048904(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto fclose;
}

void** emul(int32_t a1, void** a2, void** a3, void** a4);

void add_mod_n(void** a1, void* a2, void** a3, void** a4);

void muln(void** a1, int32_t a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** eax7;
    void** v8;
    void** eax9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    void** ecx14;
    void** eax15;
    void** v16;

    v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4) + reinterpret_cast<uint32_t>(a4) + 1);
    eax7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4) + 1);
    quantum_toffoli(a3, reinterpret_cast<uint32_t>(eax7) + reinterpret_cast<uint32_t>(eax7), v6, a5, v8);
    emul(a2 % reinterpret_cast<int32_t>(a1), v6, a4, a5);
    eax9 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4) + 1);
    quantum_toffoli(a3, reinterpret_cast<uint32_t>(eax9) + reinterpret_cast<uint32_t>(eax9), v6, a5, v10);
    v11 = reinterpret_cast<void**>(1);
    while (reinterpret_cast<int32_t>(v11) < reinterpret_cast<int32_t>(a4)) {
        eax12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4) + 1);
        quantum_toffoli(a3, reinterpret_cast<uint32_t>(eax12) + reinterpret_cast<uint32_t>(eax12) + reinterpret_cast<uint32_t>(v11), v6, a5, v13);
        ecx14 = v11;
        add_mod_n(a1, (a2 << *reinterpret_cast<unsigned char*>(&ecx14)) % reinterpret_cast<int32_t>(a1), a4, a5);
        eax15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4) + 1);
        quantum_toffoli(a3, reinterpret_cast<uint32_t>(eax15) + reinterpret_cast<uint32_t>(eax15) + reinterpret_cast<uint32_t>(v11), v6, a5, v16);
        v11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v11) + 1);
    }
    return;
}

void** muln_inv(void** a1, int32_t a2, void** a3, void** a4, void** a5) {
    void** v6;
    int32_t eax7;
    int32_t v8;
    void** v9;
    void** eax10;
    void** v11;
    void** ecx12;
    void** eax13;
    void** v14;
    void** eax15;
    void** v16;
    void** eax17;
    void** v18;
    void** eax19;

    v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4) + reinterpret_cast<uint32_t>(a4) + 1);
    eax7 = quantum_inverse_mod(a1, a2);
    v8 = eax7;
    v9 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4) - 1);
    while (reinterpret_cast<int32_t>(v9) > reinterpret_cast<int32_t>(0)) {
        eax10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4) + 1);
        quantum_toffoli(a3, reinterpret_cast<uint32_t>(eax10) + reinterpret_cast<uint32_t>(eax10) + reinterpret_cast<uint32_t>(v9), v6, a5, v11);
        ecx12 = v9;
        add_mod_n(a1, reinterpret_cast<uint32_t>(a1) - (v8 << *reinterpret_cast<unsigned char*>(&ecx12)) % reinterpret_cast<int32_t>(a1), a4, a5);
        eax13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4) + 1);
        quantum_toffoli(a3, reinterpret_cast<uint32_t>(eax13) + reinterpret_cast<uint32_t>(eax13) + reinterpret_cast<uint32_t>(v9), v6, a5, v14);
        v9 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v9) - 1);
    }
    eax15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4) + 1);
    quantum_toffoli(a3, reinterpret_cast<uint32_t>(eax15) + reinterpret_cast<uint32_t>(eax15), v6, a5, v16);
    emul(v8 % reinterpret_cast<int32_t>(a1), v6, a4, a5);
    eax17 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4) + 1);
    eax19 = quantum_toffoli(a3, reinterpret_cast<uint32_t>(eax17) + reinterpret_cast<uint32_t>(eax17), v6, a5, v18);
    return eax19;
}

void** emul(int32_t a1, void** a2, void** a3, void** a4) {
    void** eax5;
    void** v6;
    void** ecx7;
    void** eax8;
    void** v9;

    eax5 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3) - 1);
    v6 = eax5;
    while (reinterpret_cast<int32_t>(v6) >= reinterpret_cast<int32_t>(0)) {
        ecx7 = v6;
        eax5 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a1 >> *reinterpret_cast<signed char*>(&ecx7)) & 1);
        if (*reinterpret_cast<signed char*>(&eax5)) {
            eax8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3) + 1);
            eax5 = quantum_toffoli(reinterpret_cast<uint32_t>(eax8) + reinterpret_cast<uint32_t>(eax8), a2, reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(v6), a4, v9);
        }
        v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v6) - 1);
    }
    return eax5;
}

void** quantum_lambda = reinterpret_cast<void**>(0);

void quantum_set_decoherence(void** a1, void** a2, void** a3) {
    int16_t ax4;
    int16_t fpu_status_word5;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fldz ");
    __asm__("fxch st0, st1");
    __asm__("fucompp ");
    ax4 = fpu_status_word5;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax4) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax4) + 1)) {
        quantum_status = reinterpret_cast<void**>(1);
        quantum_lambda = a1;
    } else {
        quantum_status = reinterpret_cast<void**>(0);
    }
    return;
}

void quantum_qec_set_status(void** a1, void** a2, void** a3) {
    type = a1;
    width = a2;
    return;
}

void** quantum_bmeasure(void** a1, void** a2, void** a3, void** a4, void** a5);

void quantum_qec_decode(void** a1, void** a2, void** a3) {
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
    void** eax22;
    void** v23;
    void** eax24;
    void** v25;

    quantum_get_decoherence();
    __asm__("fstp dword [ebp-0x14]");
    quantum_set_decoherence(0, v4, v5);
    v6 = *reinterpret_cast<void***>(a3);
    v7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__intrinsic()) - reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v6) >> 31));
    v8 = reinterpret_cast<void**>(0);
    quantum_qec_set_status(0, 0, v9);
    v10 = *reinterpret_cast<void***>(a3);
    v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__intrinsic()) - (reinterpret_cast<int32_t>(v10) >> 31) - 1);
    while (reinterpret_cast<int32_t>(v11) >= reinterpret_cast<int32_t>(0)) {
        if (!v11) {
            quantum_set_decoherence(v12, v8, v13);
        }
        if (reinterpret_cast<int32_t>(v11) >= reinterpret_cast<int32_t>(a2)) {
            quantum_cnot(v11, reinterpret_cast<uint32_t>(v7) + reinterpret_cast<uint32_t>(v7) + reinterpret_cast<uint32_t>(v11), a3, v14, 0x55555556);
            v13 = a3;
            v8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v7) + reinterpret_cast<uint32_t>(v11));
            quantum_cnot(v11, v8, v13, v15, 0x55555556);
        } else {
            quantum_cnot(reinterpret_cast<uint32_t>(v7) + reinterpret_cast<uint32_t>(v7) + reinterpret_cast<uint32_t>(v11), v11, a3, v16, 0x55555556);
            v13 = a3;
            quantum_cnot(reinterpret_cast<uint32_t>(v7) + reinterpret_cast<uint32_t>(v11), v11, v13, v17, 0x55555556);
            quantum_hadamard(reinterpret_cast<uint32_t>(v7) + reinterpret_cast<uint32_t>(v7) + reinterpret_cast<uint32_t>(v11), a3, v13, v18, 0x55555556);
            v8 = a3;
            quantum_hadamard(reinterpret_cast<uint32_t>(v7) + reinterpret_cast<uint32_t>(v11), v8, v13, v19, 0x55555556);
        }
        v11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v11) - 1);
    }
    v20 = reinterpret_cast<void**>(1);
    while (reinterpret_cast<int32_t>(v20) <= reinterpret_cast<int32_t>(v7)) {
        eax22 = quantum_bmeasure(v7, a3, v13, v21, 0x55555556);
        eax24 = quantum_bmeasure(reinterpret_cast<uint32_t>(v7) + reinterpret_cast<uint32_t>(v7) - reinterpret_cast<uint32_t>(v20), a3, v13, v23, 0x55555556);
        if (reinterpret_cast<int1_t>(eax22 == 1) && (reinterpret_cast<int1_t>(eax24 == 1) && reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(v20) - 1) < reinterpret_cast<int32_t>(a2))) {
            quantum_sigma_z(reinterpret_cast<uint32_t>(v20) + 0xffffffff, a3, v13, v25, 0x55555556);
        }
        v20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v20) + 1);
    }
    return;
}

/* counter.2126 */
void** counter_2126 = reinterpret_cast<void**>(0);

/* freq.2127 */
void** freq_2127 = reinterpret_cast<void**>(0x40000000);

void quantum_qec_encode(void** a1, void** a2, void** a3);

void** quantum_qec_counter(void* a1, void** a2, void** a3) {
    void** eax4;
    void** edx5;
    void** eax6;
    void** edx7;
    void** ecx8;
    void** edx9;
    void** ecx10;
    void** eax11;

    if (reinterpret_cast<int32_t>(a1) <= reinterpret_cast<int32_t>(0)) {
        if (reinterpret_cast<int32_t>(a1) < reinterpret_cast<int32_t>(0)) {
            counter_2126 = reinterpret_cast<void**>(0);
        }
    } else {
        eax4 = counter_2126;
        counter_2126 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax4) + reinterpret_cast<uint32_t>(a1));
    }
    if (reinterpret_cast<int32_t>(a2) > reinterpret_cast<int32_t>(0)) {
        freq_2127 = a2;
    }
    edx5 = counter_2126;
    eax6 = freq_2127;
    if (reinterpret_cast<int32_t>(edx5) >= reinterpret_cast<int32_t>(eax6)) {
        counter_2126 = reinterpret_cast<void**>(0);
        edx7 = width;
        ecx8 = type;
        quantum_qec_decode(ecx8, edx7, a3);
        edx9 = width;
        ecx10 = type;
        quantum_qec_encode(ecx10, edx9, a3);
    }
    eax11 = counter_2126;
    return eax11;
}

void quantum_qec_encode(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** edx10;
    void** v11;
    void** v12;
    void** edx13;
    void** v14;
    void** v15;
    void** edx16;
    void** v17;
    void** v18;
    void** edx19;
    void** v20;
    void** v21;
    void** edx22;
    void** v23;
    void** v24;
    void** edx25;
    void** v26;
    void** v27;
    void** v28;

    quantum_get_decoherence();
    __asm__("fstp dword [ebp-0x8]");
    quantum_set_decoherence(0, v4, v5);
    v6 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a3)) > reinterpret_cast<int32_t>(v6)) {
        if (reinterpret_cast<int1_t>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3)) - 1 == v6)) {
            quantum_set_decoherence(v7, v8, v9);
        }
        if (reinterpret_cast<int32_t>(v6) >= reinterpret_cast<int32_t>(a2)) {
            edx10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<uint32_t>(v6));
            quantum_cnot(v6, edx10, a3, v11, v12);
            edx13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<uint32_t>(v6));
            v9 = a3;
            v8 = edx13;
            quantum_cnot(v6, v8, v9, v14, v15);
        } else {
            edx16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<uint32_t>(v6));
            quantum_hadamard(edx16, a3, v9, v17, v18);
            edx19 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<uint32_t>(v6));
            quantum_hadamard(edx19, a3, v9, v20, v21);
            edx22 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<uint32_t>(v6));
            quantum_cnot(edx22, v6, a3, v23, v24);
            edx25 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<uint32_t>(v6));
            v9 = a3;
            v8 = v6;
            quantum_cnot(edx25, v8, v9, v26, v27);
        }
        v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v6) + 1);
    }
    v28 = *reinterpret_cast<void***>(a3);
    quantum_qec_set_status(1, v28, v9);
    *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3)));
    return;
}

void** quantum_real(void** a1, void** a2, uint32_t a3) {
    __asm__("fld dword [ebp-0x14]");
    return a1;
}

int32_t pow = 0x80488aa;

void fun_80488a4(void** a1, void** a2, uint32_t a3) {
    goto pow;
}

int32_t memcpy = 0x804891a;

void fun_8048914(void** a1, void** a2, uint32_t a3) {
    goto memcpy;
}

struct s83 {
    void** f0;
    int32_t f4;
    uint32_t f8;
    void** fc;
    void** f10;
};

void** fun_8048874(void** a1, void** a2);

void** quantum_objcode_start(void** a1, void** a2, void** a3);

void quantum_objcode_file(void** a1, void** a2);

void atexit(int32_t a1, void** a2);

void** quantum_objcode_exit();

struct s83* quantum_new_qureg(struct s83* a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    uint32_t ecx16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    uint32_t ecx24;
    void** v25;
    void** v26;
    void** v27;
    void** eax28;
    void** v29;
    void** v30;

    eax9 = fun_8048884(1, 16, v6, v7, a2, a3, v8);
    if (!eax9) {
        quantum_error(2, 16, v10, v11, a2, a3, v12);
    }
    quantum_memman(16, 16, v13, v14, a2, a3, v15);
    ecx16 = reinterpret_cast<uint32_t>(a4) + 2;
    eax20 = fun_8048884(1 << *reinterpret_cast<unsigned char*>(&ecx16), 4, v17, v18, a2, a3, v19);
    if (!eax20) {
        quantum_error(2, 4, v21, v22, a2, a3, v23);
    }
    ecx24 = reinterpret_cast<uint32_t>(a4) + 2;
    quantum_memman(4 << *reinterpret_cast<unsigned char*>(&ecx24), 4, v25, v26, a2, a3, v27);
    *reinterpret_cast<void***>(eax9 + 2) = a2;
    *reinterpret_cast<void***>(eax9 + 3) = a3;
    *reinterpret_cast<void***>(eax9) = reinterpret_cast<void**>(0x3f800000);
    *reinterpret_cast<void***>(eax9 + 1) = reinterpret_cast<void**>(0);
    eax28 = fun_8048874("QUOBFILE", 4);
    if (eax28) {
        quantum_objcode_start("QUOBFILE", 4, v29);
        quantum_objcode_file(eax28, 4);
        atexit(quantum_objcode_exit, 4);
    }
    quantum_objcode_put(0, a2, a3, v30);
    a1->f0 = a4;
    a1->f4 = 1;
    a1->f8 = reinterpret_cast<uint32_t>(a4) + 2;
    a1->fc = eax9;
    a1->f10 = eax20;
    return a1;
}

void** fun_80489b4(uint32_t a1);

void** quantum_objcode_start(void** a1, void** a2, void** a3) {
    void** eax4;
    void** eax5;
    void** v6;
    void** ebp7;
    void** v8;
    void** eax9;

    opstatus = 1;
    allocated = 1;
    eax4 = fun_80489b4(0x10000);
    objcode = eax4;
    eax5 = objcode;
    if (!eax5) {
        quantum_error(2, v6, ebp7, __return_address(), a1, a2, a3);
    }
    eax9 = quantum_memman(0x10000, v8, ebp7, __return_address(), a1, a2, a3);
    return eax9;
}

void quantum_objcode_file(void** a1, void** a2) {
    globalfile = a1;
    return;
}

void fun_8048844(int32_t a1, int32_t a2, int32_t a3);

void atexit(int32_t a1, void** a2) {
    int32_t eax3;
    int32_t ebx4;

    eax3 = __i686_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t**>(ebx4 + 0x1e09 - 4)) {
        eax3 = **reinterpret_cast<int32_t**>(ebx4 + 0x1e09 - 4);
    }
    fun_8048844(a1, 0, eax3);
    return;
}

uint32_t g14;

void quantum_mu2char(void** a1, void** a2, void** a3);

void** quantum_objcode_put(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** eax6;
    uint32_t eax7;
    uint32_t v8;
    void* v9;
    int32_t eax10;
    uint32_t v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** edx16;
    void** eax17;
    uint32_t eax18;
    uint32_t eax19;
    void** edx20;
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
    void** v32;
    void** v33;
    void** v34;
    void* v35;
    void** edx36;
    void** eax37;
    uint32_t eax38;
    void** eax39;
    void** eax40;
    uint32_t edx41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax6 = a1;
    eax7 = g14;
    v8 = eax7;
    v9 = reinterpret_cast<void*>(0);
    eax10 = opstatus;
    if (eax10) {
        v11 = *reinterpret_cast<unsigned char*>(&eax6);
        if (reinterpret_cast<int32_t>(v11) > reinterpret_cast<int32_t>(11)) {
            if (v11 == 0x80) 
                goto addr_804e9a8_4;
            if (reinterpret_cast<int32_t>(v11) <= reinterpret_cast<int32_t>(0x80)) 
                goto addr_804e75c_6;
        } else {
            if (reinterpret_cast<int32_t>(v11) >= reinterpret_cast<int32_t>(7)) {
                __asm__("fld qword [eax]");
                __asm__("fstp qword [ebp-0x68]");
                v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) - 84 + 1);
                v13 = a2;
                quantum_int2char(v13, v12);
                v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) - 84 + 5);
                __asm__("fld qword [ebp-0x68]");
                __asm__("fstp qword [esp]");
                quantum_double2char(v13, v12, v14);
                v9 = reinterpret_cast<void*>(13);
                goto addr_804e9bd_9;
            } else {
                if (v11 == 2) {
                    quantum_int2char(a2, reinterpret_cast<int32_t>(ebp5) - 84 + 1);
                    quantum_int2char(a3, reinterpret_cast<int32_t>(ebp5) - 84 + 5);
                    v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) - 84 + 9);
                    v13 = a4;
                    quantum_int2char(v13, v12);
                    v9 = reinterpret_cast<void*>(13);
                    goto addr_804e9bd_9;
                } else {
                    if (reinterpret_cast<int32_t>(v11) > reinterpret_cast<int32_t>(2)) 
                        goto addr_804e8a9_13;
                    if (!v11) 
                        goto addr_804e79a_15; else 
                        goto addr_804e737_16;
                }
            }
        }
    } else {
        v15 = reinterpret_cast<void**>(0);
        goto addr_804ea67_18;
    }
    if (reinterpret_cast<int32_t>(v11) <= reinterpret_cast<int32_t>(0x82)) {
        addr_804e8a9_13:
        v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) - 84 + 1);
        v13 = a2;
        quantum_int2char(v13, v12);
        v9 = reinterpret_cast<void*>(5);
    } else {
        if (v11 == 0xff) {
            addr_804e9a8_4:
            v9 = reinterpret_cast<void*>(1);
        } else {
            goto addr_804e9b1_22;
        }
    }
    addr_804e9bd_9:
    edx16 = position;
    eax17 = position;
    if (reinterpret_cast<uint32_t>(edx16) + reinterpret_cast<uint32_t>(v9) >> 16 > reinterpret_cast<uint32_t>(eax17) >> 16) {
        eax18 = allocated;
        allocated = eax18 + 1;
        eax19 = allocated;
        edx20 = objcode;
        v12 = reinterpret_cast<void**>(eax19 << 16);
        eax25 = fun_8048864(edx20, v12, v14, v21, v22, v23, v24);
        objcode = eax25;
        eax26 = objcode;
        if (!eax26) {
            quantum_error(2, v12, v14, v27, v28, v29, v30);
        }
        v13 = reinterpret_cast<void**>(0x10000);
        quantum_memman(0x10000, v12, v14, v31, v32, v33, v34);
    }
    v35 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v35) < reinterpret_cast<int32_t>(v9)) {
        edx36 = objcode;
        eax37 = position;
        eax38 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<uint32_t>(v35) + 0xffffffac);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx36) + reinterpret_cast<uint32_t>(eax37)) = *reinterpret_cast<signed char*>(&eax38);
        eax39 = position;
        position = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax39) + 1);
        v35 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v35) + 1);
    }
    v15 = reinterpret_cast<void**>(1);
    addr_804ea67_18:
    eax40 = v15;
    edx41 = v8 ^ g14;
    if (edx41) {
        eax40 = fun_80489c4(v13, v12, v14, v42, v43);
    }
    return eax40;
    addr_804e9b1_22:
    v13 = reinterpret_cast<void**>(0x10001);
    quantum_error(0x10001, v44, v45, v46, v47, v48, v49);
    goto addr_804e9bd_9;
    addr_804e75c_6:
    if (v11 == 13) {
        quantum_int2char(a2, reinterpret_cast<int32_t>(ebp5) - 84 + 1);
        v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) - 84 + 5);
        v13 = a3;
        quantum_int2char(v13, v12);
        __asm__("fld qword [eax]");
        __asm__("fstp qword [ebp-0x68]");
        v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) - 84 + 9);
        __asm__("fld qword [ebp-0x68]");
        __asm__("fstp qword [esp]");
        quantum_double2char(v13, v12, v14);
        v9 = reinterpret_cast<void*>(17);
        goto addr_804e9bd_9;
    } else {
        if (reinterpret_cast<int32_t>(v11) < reinterpret_cast<int32_t>(13)) {
            addr_804e7d8_34:
            quantum_int2char(a2, reinterpret_cast<int32_t>(ebp5) - 84 + 1);
            v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) - 84 + 5);
            v13 = a3;
            quantum_int2char(v13, v12);
            v9 = reinterpret_cast<void*>(9);
            goto addr_804e9bd_9;
        } else {
            if (v11 == 14) 
                goto addr_804e8a9_13;
            goto addr_804e9b1_22;
        }
    }
    addr_804e79a_15:
    v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) - 84 + 1);
    v13 = a2;
    v12 = a3;
    quantum_mu2char(v13, v12, v14);
    v9 = reinterpret_cast<void*>(9);
    goto addr_804e9bd_9;
    addr_804e737_16:
    if (v11 == 1) 
        goto addr_804e7d8_34;
    goto addr_804e9b1_22;
}

void quantum_destroy_hash(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebp6;
    void** ecx7;
    void** v8;

    v4 = *reinterpret_cast<void***>(a1 + 4);
    fun_80488d4(v4, v5, ebp6, __return_address(), a1, a2, a3);
    ecx7 = *reinterpret_cast<void***>(a1 + 2);
    quantum_memman(0xfffffffc << *reinterpret_cast<unsigned char*>(&ecx7), v8, ebp6, __return_address(), a1, a2, a3);
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    return;
}

int32_t puts = 0x80489ea;

void fun_80489e4(int32_t a1, void** a2, void** a3, void** a4, void** a5, int32_t a6, void*** a7) {
    goto puts;
}

void** quantum_real(void** a1, void** a2);

void** quantum_imag(void** a1, void** a2);

void** quantum_prob_inline(void** a1, void** a2) {
    void** eax3;

    quantum_real(a1, a2);
    __asm__("fstp dword [ebp-0x4]");
    eax3 = quantum_imag(a1, a2);
    __asm__("fstp dword [ebp-0x8]");
    __asm__("fld dword [ebp-0x4]");
    __asm__("fmul dword [ebp-0x4]");
    __asm__("fld dword [ebp-0x8]");
    __asm__("fmul dword [ebp-0x8]");
    __asm__("faddp st1, st0");
    return eax3;
}

struct s84 {
    uint32_t f0;
    int32_t f4;
    signed char[4] pad12;
    void* fc;
};

struct s85 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
};

struct s86 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
};

void quantum_addscratch(void** a1, struct s84* a2, void** a3, void** a4) {
    int32_t v5;
    struct s85* eax6;
    int32_t edx7;
    void** ecx8;
    int32_t eax9;
    struct s86* ecx10;

    a2->f0 = a2->f0 + reinterpret_cast<uint32_t>(a1);
    v5 = 0;
    while (a2->f4 > v5) {
        eax6 = reinterpret_cast<struct s85*>(reinterpret_cast<int32_t>(a2->fc) + (v5 << 4));
        edx7 = eax6->fc;
        ecx8 = a1;
        __asm__("shld edx, eax, cl");
        eax9 = eax6->f8 << *reinterpret_cast<unsigned char*>(&ecx8);
        if (*reinterpret_cast<unsigned char*>(&ecx8) & 32) {
            edx7 = eax9;
            eax9 = 0;
        }
        ecx10 = reinterpret_cast<struct s86*>(reinterpret_cast<int32_t>(a2->fc) + (v5 << 4));
        ecx10->f8 = eax9;
        ecx10->fc = edx7;
        ++v5;
    }
    return;
}

int32_t printf = 0x804896a;

void fun_8048964(int32_t a1, void** a2, void** a3, void** a4, void** a5, int32_t a6, void*** a7) {
    goto printf;
}

void quantum_reconstruct_hash(void** a1, void** a2);

struct s87 {
    void** f0;
    signed char[4] pad8;
    void** f8;
    void** fc;
};

void** quantum_get_state(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

struct s88 {
    void** f0;
    void** f4;
};

void** quantum_dot_product(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** v10;
    struct s87* eax11;
    void** ecx12;
    void** ebx13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    void** edx20;
    void** v21;
    void** v22;
    void** eax23;
    struct s88* eax24;
    void** edx25;
    void** v26;

    v8 = reinterpret_cast<void**>(0);
    if (*reinterpret_cast<void***>(a2 + 2)) {
        quantum_reconstruct_hash(a2, v9);
    }
    v10 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a1 + 1)) > reinterpret_cast<int32_t>(v10)) {
        eax11 = reinterpret_cast<struct s87*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 3)) + (reinterpret_cast<uint32_t>(v10) << 4));
        ecx12 = eax11->f8;
        ebx13 = eax11->fc;
        v14 = *reinterpret_cast<void***>(a2);
        v15 = *reinterpret_cast<void***>(a2 + 1);
        v16 = *reinterpret_cast<void***>(a2 + 2);
        v17 = *reinterpret_cast<void***>(a2 + 3);
        v18 = *reinterpret_cast<void***>(a2 + 4);
        eax19 = quantum_get_state(ecx12, ebx13, v14, v15, v16, v17, v18);
        if (reinterpret_cast<int32_t>(eax19) >= reinterpret_cast<int32_t>(0)) {
            edx20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 3)) + (reinterpret_cast<uint32_t>(v10) << 4));
            v21 = *reinterpret_cast<void***>(edx20);
            v22 = *reinterpret_cast<void***>(edx20 + 1);
            eax23 = quantum_conj(v21, v22, v14, v15, v16, v17, v18);
            eax24 = reinterpret_cast<struct s88*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(eax19) << 4));
            edx25 = eax24->f0;
            v26 = eax24->f4;
            __mulsc3(edx20, eax23, edx20, edx25, v26, v16, v17, v18);
            __asm__("fld dword [ebp-0x1c]");
            __asm__("fld dword [ebp-0x1c]");
            __asm__("fld dword [ebp-0x18]");
            __asm__("fld dword [ebp-0x14]");
            __asm__("fxch st0, st1");
            __asm__("faddp st3, st0");
            __asm__("faddp st1, st0");
            __asm__("fxch st0, st1");
            __asm__("fstp dword [ebp-0x1c]");
            __asm__("fstp dword [ebp-0x1c]");
            v8 = edx25;
        }
        v10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v10) + 1);
    }
    return v8;
}

struct s89 {
    void** f0;
    signed char[4] pad8;
    void** f8;
    void** fc;
};

void quantum_add_hash(void** a1, void** a2, void** a3, void** a4);

void quantum_reconstruct_hash(void** a1, void** a2) {
    uint32_t v3;
    void** ecx4;
    void** v5;
    struct s89* eax6;
    void** edx7;
    void** ecx8;

    v3 = 0;
    while (ecx4 = *reinterpret_cast<void***>(a1 + 2), reinterpret_cast<int32_t>(1 << *reinterpret_cast<unsigned char*>(&ecx4)) > reinterpret_cast<int32_t>(v3)) {
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 4)) + (v3 << 2)) = reinterpret_cast<void**>(0);
        ++v3;
    }
    v5 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a1 + 1)) > reinterpret_cast<int32_t>(v5)) {
        eax6 = reinterpret_cast<struct s89*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 3)) + (reinterpret_cast<uint32_t>(v5) << 4));
        edx7 = eax6->f8;
        ecx8 = eax6->fc;
        quantum_add_hash(edx7, ecx8, v5, a1);
        v5 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v5) + 1);
    }
    return;
}

uint32_t quantum_hash64(void** a1, void** a2, void** a3);

void quantum_add_hash(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    int32_t v7;
    void** v8;
    void** v9;
    uint32_t eax10;
    uint32_t v11;
    void** ecx12;
    void** v13;
    void** v14;

    v5 = a1;
    v6 = a2;
    v7 = 0;
    v8 = *reinterpret_cast<void***>(a4 + 2);
    v9 = v6;
    eax10 = quantum_hash64(v5, v9, v8);
    v11 = eax10;
    while (*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 4)) + (v11 << 2))) {
        ++v11;
        ecx12 = *reinterpret_cast<void***>(a4 + 2);
        if (1 << *reinterpret_cast<unsigned char*>(&ecx12) != v11) 
            continue;
        if (v7) {
            quantum_error(5, v9, v8, v13, v5, v6, v14);
        } else {
            v11 = 0;
            v7 = 1;
        }
    }
    *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a4 + 4)) + (v11 << 2)) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3) + 1);
    return;
}

uint32_t quantum_hash64(void** a1, void** a2, void** a3) {
    uint32_t ecx4;

    ecx4 = 32 - reinterpret_cast<uint32_t>(a3);
    return (reinterpret_cast<uint32_t>(a2) ^ reinterpret_cast<uint32_t>(a1)) * 0x9e370001 >> *reinterpret_cast<signed char*>(&ecx4);
}

struct s90 {
    int32_t f0;
    uint32_t f4;
    int32_t f8;
    void** fc;
    int32_t f10;
};

void quantum_copy_qureg(void** a1, void** a2);

struct s91 {
    void** f0;
    signed char[4] pad8;
    void** f8;
    void** fc;
};

struct s92 {
    void** f0;
    signed char[4] pad8;
    void** f8;
    void** fc;
};

struct s93 {
    void** f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

struct s94 {
    void** f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

struct s95 {
    void** f0;
    int32_t f4;
};

struct s96 {
    void** f0;
    int32_t f4;
};

struct s97 {
    void** f0;
    void** f4;
};

struct s90* quantum_vectoradd(struct s90* a1, void** a2, void** a3) {
    void* ebp4;
    uint32_t v5;
    void** v6;
    void** v7;
    struct s91* eax8;
    void** ecx9;
    void** ebx10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** eax16;
    uint32_t v17;
    int32_t v18;
    void** v19;
    void** v20;
    void** eax21;
    void** v22;
    void** v23;
    void** v24;
    struct s92* eax25;
    void** ecx26;
    void** ebx27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** eax33;
    struct s93* ecx34;
    struct s94* eax35;
    int32_t edx36;
    struct s95* ecx37;
    struct s96* eax38;
    int32_t eax39;
    struct s97* esi40;
    void** eax41;
    int32_t v42;
    int32_t v43;
    int32_t v44;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v5 = 0;
    v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xffffffd4);
    quantum_copy_qureg(a2, v6);
    if (*reinterpret_cast<void***>(a2 + 2) || *reinterpret_cast<void***>(a3 + 2)) {
        quantum_reconstruct_hash(a2, v6);
        quantum_copy_qureg(a2, reinterpret_cast<int32_t>(ebp4) + 0xffffffd4);
        v7 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a3 + 1)) > reinterpret_cast<int32_t>(v7)) {
            eax8 = reinterpret_cast<struct s91*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v7) << 4));
            ecx9 = eax8->f8;
            ebx10 = eax8->fc;
            v11 = *reinterpret_cast<void***>(a2);
            v12 = *reinterpret_cast<void***>(a2 + 1);
            v13 = *reinterpret_cast<void***>(a2 + 2);
            v14 = *reinterpret_cast<void***>(a2 + 3);
            v15 = *reinterpret_cast<void***>(a2 + 4);
            eax16 = quantum_get_state(ecx9, ebx10, v11, v12, v13, v14, v15);
            if (reinterpret_cast<int1_t>(eax16 == 0xffffffff)) {
                ++v5;
            }
            v7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v7) + 1);
        }
    }
    v17 = v18 + v5;
    v19 = reinterpret_cast<void**>(v17 << 4);
    eax21 = fun_8048864(v20, v19, v11, v12, v13, v14, v15);
    v22 = eax21;
    if (!v22) {
        quantum_error(2, v19, v11, v12, v13, v14, v15);
    }
    quantum_memman(v5 << 4, v19, v11, v12, v13, v14, v15);
    v23 = *reinterpret_cast<void***>(a2 + 1);
    v24 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a3 + 1)) > reinterpret_cast<int32_t>(v24)) {
        eax25 = reinterpret_cast<struct s92*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v24) << 4));
        ecx26 = eax25->f8;
        ebx27 = eax25->fc;
        v28 = *reinterpret_cast<void***>(a2);
        v29 = *reinterpret_cast<void***>(a2 + 1);
        v30 = *reinterpret_cast<void***>(a2 + 2);
        v31 = *reinterpret_cast<void***>(a2 + 3);
        v32 = *reinterpret_cast<void***>(a2 + 4);
        eax33 = quantum_get_state(ecx26, ebx27, v28, v29, v30, v31, v32);
        if (reinterpret_cast<int32_t>(eax33) < reinterpret_cast<int32_t>(0)) {
            ecx34 = reinterpret_cast<struct s93*>(reinterpret_cast<uint32_t>(v22) + (reinterpret_cast<uint32_t>(v23) << 4));
            eax35 = reinterpret_cast<struct s94*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v24) << 4));
            edx36 = eax35->fc;
            ecx34->f8 = eax35->f8;
            ecx34->fc = edx36;
            ecx37 = reinterpret_cast<struct s95*>(reinterpret_cast<uint32_t>(v22) + (reinterpret_cast<uint32_t>(v23) << 4));
            eax38 = reinterpret_cast<struct s96*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v24) << 4));
            eax39 = eax38->f4;
            ecx37->f0 = eax38->f0;
            ecx37->f4 = eax39;
            v23 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v23) + 1);
        } else {
            esi40 = reinterpret_cast<struct s97*>(reinterpret_cast<uint32_t>(v22) + (reinterpret_cast<uint32_t>(eax33) << 4));
            eax41 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v24) << 4) + 4);
            __asm__("fld dword [ebp-0x3c]");
            __asm__("fld dword [ebp-0x3c]");
            __asm__("fld dword [ebp-0x3c]");
            __asm__("fld dword [ebp-0x3c]");
            __asm__("fxch st0, st1");
            __asm__("faddp st3, st0");
            __asm__("faddp st1, st0");
            __asm__("fxch st0, st1");
            __asm__("fstp dword [ebp-0x3c]");
            __asm__("fstp dword [ebp-0x3c]");
            esi40->f0 = eax41;
            esi40->f4 = eax41;
        }
        v24 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v24) + 1);
    }
    a1->f0 = v42;
    a1->f4 = v17;
    a1->f8 = v43;
    a1->fc = v22;
    a1->f10 = v44;
    return a1;
}

void quantum_copy_qureg(void** a1, void** a2) {
    void** eax3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** ebp8;
    void** eax9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** ecx19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** ecx29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** ecx34;
    void** eax35;
    uint32_t v36;

    *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a1);
    *reinterpret_cast<void***>(a2 + 1) = *reinterpret_cast<void***>(a1 + 1);
    *reinterpret_cast<void***>(a2 + 2) = *reinterpret_cast<void***>(a1 + 2);
    *reinterpret_cast<void***>(a2 + 3) = *reinterpret_cast<void***>(a1 + 3);
    *reinterpret_cast<void***>(a2 + 4) = *reinterpret_cast<void***>(a1 + 4);
    eax3 = *reinterpret_cast<void***>(a2 + 1);
    eax9 = fun_8048884(eax3, 16, v4, v5, v6, v7, ebp8);
    *reinterpret_cast<void***>(a2 + 3) = eax9;
    if (!*reinterpret_cast<void***>(a2 + 3)) {
        quantum_error(2, 16, v10, v11, v12, v13, ebp8);
    }
    v14 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 1)) << 4);
    quantum_memman(v14, 16, v15, v16, v17, v18, ebp8);
    if (*reinterpret_cast<void***>(a2 + 2)) {
        ecx19 = *reinterpret_cast<void***>(a2 + 2);
        eax24 = fun_8048884(1 << *reinterpret_cast<unsigned char*>(&ecx19), 4, v20, v21, v22, v23, ebp8);
        *reinterpret_cast<void***>(a2 + 4) = eax24;
        if (!*reinterpret_cast<void***>(a2 + 4)) {
            quantum_error(2, 4, v25, v26, v27, v28, ebp8);
        }
        ecx29 = *reinterpret_cast<void***>(a2 + 2);
        quantum_memman(4 << *reinterpret_cast<unsigned char*>(&ecx29), 4, v30, v31, v32, v33, ebp8);
    }
    ecx34 = *reinterpret_cast<void***>(a1 + 3);
    eax35 = *reinterpret_cast<void***>(a2 + 3);
    v36 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 1)) << 4;
    fun_8048914(eax35, ecx34, v36);
    return;
}

struct s98 {
    void** f0;
    signed char[4] pad8;
    void** f8;
    void** fc;
};

struct s99 {
    void** f0;
    signed char[4] pad8;
    void** f8;
    void** fc;
};

struct s100 {
    void** f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

struct s101 {
    void** f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

struct s102 {
    void** f0;
    int32_t f4;
};

struct s103 {
    void** f0;
    int32_t f4;
};

struct s104 {
    void** f0;
    void** f4;
};

void quantum_vectoradd_inplace(void** a1, void** a2, void** a3) {
    void* v4;
    void** v5;
    void** v6;
    struct s98* eax7;
    void** ecx8;
    void** ebx9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** eax16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    struct s99* eax21;
    void** ecx22;
    void** ebx23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** eax29;
    struct s100* ecx30;
    struct s101* eax31;
    int32_t edx32;
    struct s102* ecx33;
    struct s103* eax34;
    int32_t eax35;
    struct s104* esi36;
    void** eax37;

    v4 = reinterpret_cast<void*>(0);
    if (*reinterpret_cast<void***>(a1 + 2) || *reinterpret_cast<void***>(a2 + 2)) {
        quantum_reconstruct_hash(a1, v5);
        v6 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 1)) > reinterpret_cast<int32_t>(v6)) {
            eax7 = reinterpret_cast<struct s98*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v6) << 4));
            ecx8 = eax7->f8;
            ebx9 = eax7->fc;
            v10 = *reinterpret_cast<void***>(a1);
            v11 = *reinterpret_cast<void***>(a1 + 1);
            v12 = *reinterpret_cast<void***>(a1 + 2);
            v13 = *reinterpret_cast<void***>(a1 + 3);
            v14 = *reinterpret_cast<void***>(a1 + 4);
            eax15 = quantum_get_state(ecx8, ebx9, v10, v11, v12, v13, v14);
            if (reinterpret_cast<int1_t>(eax15 == 0xffffffff)) {
                v4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v4) + 1);
            }
            v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v6) + 1);
        }
    }
    eax16 = *reinterpret_cast<void***>(a1 + 3);
    v17 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 1)) + reinterpret_cast<uint32_t>(v4) << 4);
    eax18 = fun_8048864(eax16, v17, v10, v11, v12, v13, v14);
    *reinterpret_cast<void***>(a1 + 3) = eax18;
    if (!*reinterpret_cast<void***>(a1 + 3)) {
        quantum_error(2, v17, v10, v11, v12, v13, v14);
    }
    quantum_memman(reinterpret_cast<uint32_t>(v4) << 4, v17, v10, v11, v12, v13, v14);
    v19 = *reinterpret_cast<void***>(a1 + 1);
    v20 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 1)) > reinterpret_cast<int32_t>(v20)) {
        eax21 = reinterpret_cast<struct s99*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v20) << 4));
        ecx22 = eax21->f8;
        ebx23 = eax21->fc;
        v24 = *reinterpret_cast<void***>(a1);
        v25 = *reinterpret_cast<void***>(a1 + 1);
        v26 = *reinterpret_cast<void***>(a1 + 2);
        v27 = *reinterpret_cast<void***>(a1 + 3);
        v28 = *reinterpret_cast<void***>(a1 + 4);
        eax29 = quantum_get_state(ecx22, ebx23, v24, v25, v26, v27, v28);
        if (reinterpret_cast<int32_t>(eax29) < reinterpret_cast<int32_t>(0)) {
            ecx30 = reinterpret_cast<struct s100*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 3)) + (reinterpret_cast<uint32_t>(v19) << 4));
            eax31 = reinterpret_cast<struct s101*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v20) << 4));
            edx32 = eax31->fc;
            ecx30->f8 = eax31->f8;
            ecx30->fc = edx32;
            ecx33 = reinterpret_cast<struct s102*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 3)) + (reinterpret_cast<uint32_t>(v19) << 4));
            eax34 = reinterpret_cast<struct s103*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v20) << 4));
            eax35 = eax34->f4;
            ecx33->f0 = eax34->f0;
            ecx33->f4 = eax35;
            v19 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v19) + 1);
        } else {
            esi36 = reinterpret_cast<struct s104*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 3)) + (reinterpret_cast<uint32_t>(eax29) << 4));
            eax37 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v20) << 4) + 4);
            __asm__("fld dword [ebp-0x1c]");
            __asm__("fld dword [ebp-0x1c]");
            __asm__("fld dword [ebp-0x1c]");
            __asm__("fld dword [ebp-0x1c]");
            __asm__("fxch st0, st1");
            __asm__("faddp st3, st0");
            __asm__("faddp st1, st0");
            __asm__("fxch st0, st1");
            __asm__("fstp dword [ebp-0x1c]");
            __asm__("fstp dword [ebp-0x1c]");
            esi36->f0 = eax37;
            esi36->f4 = eax37;
        }
        v20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v20) + 1);
    }
    *reinterpret_cast<void***>(a1 + 1) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 1)) + reinterpret_cast<uint32_t>(v4));
    return;
}

struct s105 {
    void** f0;
    void** f4;
    int32_t f8;
    void** fc;
    int32_t f10;
};

struct s106 {
    void** f0;
    signed char[4] pad8;
    void** f8;
    void** fc;
};

struct s107 {
    void** f0;
    void** f4;
};

struct s108 {
    signed char[4] pad4;
    int32_t f4;
    signed char[4] pad12;
    void*** fc;
};

void** quantum_dot_product_noconj(struct s108* a1, void** a2, void** a3, void** a4);

void quantum_delete_qureg(void** a1, void** a2, void** a3, void** a4, void** a5);

struct s105* quantum_matrix_qureg(struct s105* a1, void** a2, void** a3, int32_t a4, void** a5) {
    void* ebp6;
    void** v7;
    void** ecx8;
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
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** ecx29;
    void** eax30;
    void** v31;
    struct s106* ecx32;
    struct s107* esi33;
    void** eax34;
    void** v35;
    void** tmp32_36;
    uint1_t cf37;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v7 = *reinterpret_cast<void***>(a5);
    ecx8 = v7;
    v9 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx8));
    eax15 = fun_8048884(v9, 16, v10, v11, v12, v13, v14);
    v16 = eax15;
    if (!v16) {
        quantum_error(2, 16, v17, v18, v19, v20, v21);
    }
    quantum_memman(reinterpret_cast<uint32_t>(v9) << 4, 16, v22, v23, v24, v25, v26);
    v27 = reinterpret_cast<void**>(0);
    v28 = reinterpret_cast<void**>(0);
    while ((ecx29 = *reinterpret_cast<void***>(a5), eax30 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx29)), v31 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax30) >> 31), reinterpret_cast<uint32_t>(v31) > reinterpret_cast<uint32_t>(v28)) || reinterpret_cast<uint32_t>(v31) >= reinterpret_cast<uint32_t>(v28) && reinterpret_cast<uint32_t>(eax30) > reinterpret_cast<uint32_t>(v27)) {
        ecx32 = reinterpret_cast<struct s106*>(reinterpret_cast<uint32_t>(v16) + (reinterpret_cast<uint32_t>(v27) << 4));
        ecx32->f8 = v27;
        ecx32->fc = v28;
        __asm__("fld qword [ebp-0x40]");
        __asm__("fstp qword [esp+0xc]");
        a2(reinterpret_cast<int32_t>(ebp6) - 0x68, v27, v28);
        esi33 = reinterpret_cast<struct s107*>(reinterpret_cast<uint32_t>(v16) + (reinterpret_cast<uint32_t>(v27) << 4));
        eax34 = quantum_dot_product_noconj(reinterpret_cast<int32_t>(ebp6) - 56, a5, v27, v28);
        esi33->f0 = eax34;
        esi33->f4 = v16;
        quantum_delete_qureg(reinterpret_cast<int32_t>(ebp6) + 0xffffffc8, a5, v27, v28, v35);
        tmp32_36 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v27) + 1);
        cf37 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_36) < reinterpret_cast<uint32_t>(v27));
        v27 = tmp32_36;
        v28 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v28) + cf37);
    }
    a1->f0 = v7;
    a1->f4 = v9;
    a1->f8 = 0;
    a1->fc = v16;
    a1->f10 = 0;
    return a1;
}

struct s109 {
    void** f0;
    void** f4;
};

struct s110 {
    void** f0;
    void** f4;
};

void quantum_scalar_qureg(void** a1, void** a2, void** a3) {
    void** v4;
    struct s109* esi5;
    struct s110* eax6;
    void** ebx7;
    void** ecx8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;

    v4 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a3 + 1)) > reinterpret_cast<int32_t>(v4)) {
        esi5 = reinterpret_cast<struct s109*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v4) << 4));
        eax6 = reinterpret_cast<struct s110*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a3 + 3)) + (reinterpret_cast<uint32_t>(v4) << 4));
        ebx7 = eax6->f0;
        ecx8 = eax6->f4;
        eax12 = __mulsc3(ecx8, ebx7, ecx8, a1, a2, v9, v10, v11);
        esi5->f0 = eax12;
        esi5->f4 = a1;
        v4 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v4) + 1);
    }
    return;
}

void quantum_delete_qureg(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** ebp7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;

    if (*reinterpret_cast<void***>(a1 + 2) && *reinterpret_cast<void***>(a1 + 4)) {
        quantum_destroy_hash(a1, v6, ebp7);
    }
    v8 = *reinterpret_cast<void***>(a1 + 3);
    fun_80488d4(v8, v9, ebp7, __return_address(), a1, a2, a3);
    v10 = reinterpret_cast<void**>(-(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 1)) << 4));
    quantum_memman(v10, v11, ebp7, __return_address(), a1, a2, a3);
    *reinterpret_cast<void***>(a1 + 3) = reinterpret_cast<void**>(0);
    return;
}

struct s111 {
    void** f0;
    int32_t f4;
};

struct s112 {
    void** f0;
    void** f4;
};

void** quantum_real(void** a1, void** a2);

void quantum_print_matrix(struct s83* a1, void** a2, void** a3, void** a4) {
    int32_t v5;
    int32_t ecx6;
    struct s83* v7;
    void** v8;
    struct s111* edx9;
    void** v10;
    int32_t v11;
    struct s112* edx12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    int32_t v18;
    void*** v19;

    v5 = 0;
    do {
        ecx6 = v5;
        ++v5;
    } while (reinterpret_cast<int32_t>(1 << *reinterpret_cast<unsigned char*>(&ecx6)) < reinterpret_cast<int32_t>(a1));
    v7 = reinterpret_cast<struct s83*>(0);
    while (reinterpret_cast<int32_t>(a1) > reinterpret_cast<int32_t>(v7)) {
        v8 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(a2) > reinterpret_cast<int32_t>(v8)) {
            edx9 = reinterpret_cast<struct s111*>(reinterpret_cast<uint32_t>(a3) + (reinterpret_cast<uint32_t>(a2) * reinterpret_cast<uint32_t>(v7) + reinterpret_cast<uint32_t>(v8) << 3));
            v10 = edx9->f0;
            v11 = edx9->f4;
            quantum_imag(v10, v11);
            __asm__("fstp qword [ebp-0x18]");
            edx12 = reinterpret_cast<struct s112*>(reinterpret_cast<uint32_t>(a3) + (reinterpret_cast<uint32_t>(a2) * reinterpret_cast<uint32_t>(v7) + reinterpret_cast<uint32_t>(v8) << 3));
            v13 = edx12->f0;
            v14 = edx12->f4;
            quantum_real(v13, v14);
            __asm__("fld qword [ebp-0x18]");
            __asm__("fstp qword [esp+0xc]");
            __asm__("fstp qword [esp+0x4]");
            fun_8048964("%g %+gi ", v14, v15, v16, v17, v18, v19);
            v8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v8) + 1);
        }
        fun_8048894(10, v14);
        v7 = reinterpret_cast<struct s83*>(reinterpret_cast<uint32_t>(v7) + 1);
    }
    fun_8048894(10, v14);
    return;
}

int32_t atoi = 0x804897a;

void** fun_8048974(void** a1, void** a2, void** a3) {
    goto atoi;
}

void quantum_exp_mod_n(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    int32_t v11;
    void** v12;

    eax6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4) + 1);
    quantum_sigma_x(reinterpret_cast<uint32_t>(eax6) + reinterpret_cast<uint32_t>(eax6), a5, v7, v8, v9);
    v10 = reinterpret_cast<void**>(1);
    while (reinterpret_cast<int32_t>(v10) <= reinterpret_cast<int32_t>(a3)) {
        v11 = reinterpret_cast<int32_t>(a2) % reinterpret_cast<int32_t>(a1);
        v12 = reinterpret_cast<void**>(1);
        while (reinterpret_cast<int32_t>(v12) < reinterpret_cast<int32_t>(v10)) {
            v11 = v11 * v11 % reinterpret_cast<int32_t>(a1);
            v12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v12) + 1);
        }
        mul_mod_n(a1, v11, reinterpret_cast<uint32_t>(a4) + reinterpret_cast<uint32_t>(a4) + reinterpret_cast<uint32_t>(a4) + 1 + reinterpret_cast<uint32_t>(v10), a4, a5);
        v10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v10) + 1);
    }
    return;
}

void quantum_qft(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;

    v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a1) - 1);
    while (reinterpret_cast<int32_t>(v6) >= reinterpret_cast<int32_t>(0)) {
        v7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a1) - 1);
        while (reinterpret_cast<int32_t>(v7) > reinterpret_cast<int32_t>(v6)) {
            v8 = a2;
            quantum_cond_phase(v7, v6, v8, v9, v10);
            v7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v7) - 1);
        }
        quantum_hadamard(v6, a2, v8, v11, v12);
        v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v6) - 1);
    }
    return;
}

struct s113 {
    void** f0;
    void** f4;
};

void** quantum_measure(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    void** v11;
    struct s113* edx12;
    void** v13;
    void** v14;
    int16_t ax15;
    int16_t fpu_status_word16;
    void** v17;

    eax9 = quantum_objcode_put(0x80, v6, v7, v8);
    if (!eax9) {
        quantum_frand(0x80, v10);
        __asm__("fstp qword [ebp-0x10]");
        v11 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(a2) > reinterpret_cast<int32_t>(v11)) {
            edx12 = reinterpret_cast<struct s113*>(reinterpret_cast<uint32_t>(a4) + (reinterpret_cast<uint32_t>(v11) << 4));
            v13 = edx12->f0;
            v14 = edx12->f4;
            quantum_prob_inline(v13, v14);
            __asm__("fld qword [ebp-0x10]");
            __asm__("fsubrp st1, st0");
            __asm__("fstp qword [ebp-0x10]");
            __asm__("fld qword [ebp-0x10]");
            __asm__("fldz ");
            __asm__("fucompp ");
            ax15 = fpu_status_word16;
            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax15) + 1)) 
                goto addr_804cfa4_5;
            v11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v11) + 1);
        }
    } else {
        v17 = reinterpret_cast<void**>(0);
        goto addr_804cfd8_8;
    }
    v17 = reinterpret_cast<void**>(0xffffffff);
    addr_804cfd8_8:
    return v17;
    addr_804cfa4_5:
    v17 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(a4) + (reinterpret_cast<uint32_t>(v11) << 4) + 8);
    goto addr_804cfd8_8;
}

int32_t __cxa_atexit = 0x804884a;

void fun_8048844(int32_t a1, int32_t a2, int32_t a3) {
    goto __cxa_atexit;
}

/* errfunc.2059 */
int32_t errfunc_2059 = 0;

int32_t quantum_error_handler(int32_t a1) {
    int32_t eax2;

    if (a1) {
        errfunc_2059 = a1;
    }
    eax2 = errfunc_2059;
    return eax2;
}

void** quantum_get_decoherence() {
    void** eax1;

    eax1 = quantum_lambda;
    __asm__("fld dword [ebp-0x4]");
    return eax1;
}

/* __i686.get_pc_thunk.cx */
void __i686_get_pc_thunk_cx() {
    return;
}

void** quantum_real(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    __asm__("fld dword [ebp-0x14]");
    return a1;
}

void** quantum_imag(void** a1, void** a2) {
    __asm__("fld dword [ebp-0x14]");
    return a2;
}

void** quantum_real(void** a1, void** a2) {
    __asm__("fld dword [ebp-0x14]");
    return a1;
}

void** quantum_imag(void** a1, void** a2) {
    __asm__("fld dword [ebp-0x14]");
    return a2;
}

struct s114 {
    signed char[8] pad8;
    uint32_t f8;
    uint32_t fc;
};

void** quantum_get_state(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    uint32_t eax10;
    uint32_t v11;
    struct s114* eax12;
    void** ecx13;
    void** v14;

    v8 = a1;
    v9 = a2;
    if (a5) {
        eax10 = quantum_hash64(v8, v9, a5);
        v11 = eax10;
        while (*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(a7) + (v11 << 2))) {
            eax12 = reinterpret_cast<struct s114*>(reinterpret_cast<uint32_t>(a6) + -(1 - reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(a7) + (v11 << 2))) << 4));
            if (!(eax12->f8 ^ reinterpret_cast<uint32_t>(v8) | eax12->fc ^ reinterpret_cast<uint32_t>(v9))) 
                goto addr_8049b72_5;
            ++v11;
            ecx13 = a5;
            if (1 << *reinterpret_cast<unsigned char*>(&ecx13) != v11) 
                continue;
            v11 = 0;
        }
    } else {
        v14 = v8;
        goto addr_8049bbb_9;
    }
    v14 = reinterpret_cast<void**>(0xffffffff);
    addr_8049bbb_9:
    return v14;
    addr_8049b72_5:
    v14 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(a7) + (v11 << 2))) - 1);
    goto addr_8049bbb_9;
}

int32_t fflush = 0x80488ea;

void fun_80488e4(void** a1) {
    goto fflush;
}

int32_t abort = 0x804882a;

void fun_8048824() {
    goto abort;
}

void quantum_qec_get_status(void*** a1, void*** a2) {
    void** edx3;
    void** edx4;

    if (a1) {
        edx3 = type;
        *a1 = edx3;
    }
    if (a2) {
        edx4 = width;
        *a2 = edx4;
    }
    return;
}

struct s115 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s116 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s117 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s118 {
    void** f0;
    void** f4;
};

struct s119 {
    void** f0;
    void** f4;
};

struct s120 {
    void** f0;
    void** f4;
};

struct s121 {
    void** f0;
    void** f4;
};

void** quantum_sigma_y(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    struct s115* v11;
    struct s116* eax12;
    uint32_t esi13;
    uint32_t edi14;
    void** ecx15;
    uint32_t edx16;
    uint32_t eax17;
    struct s117* eax18;
    uint32_t eax19;
    void** ecx20;
    uint32_t eax21;
    struct s118* esi22;
    struct s119* eax23;
    void** ecx24;
    void** edx25;
    void** v26;
    void** v27;
    void** v28;
    void** eax29;
    struct s120* esi30;
    struct s121* eax31;
    void** ecx32;
    void** edx33;
    void** v34;
    void** v35;
    void** eax36;
    void** v37;
    void** v38;

    v6 = a1;
    eax9 = quantum_objcode_put(4, v6, v7, v8);
    if (!eax9) {
        v10 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 1)) > reinterpret_cast<int32_t>(v10)) {
            v11 = reinterpret_cast<struct s115*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v10) << 4));
            eax12 = reinterpret_cast<struct s116*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v10) << 4));
            esi13 = eax12->f8;
            edi14 = eax12->fc;
            ecx15 = a1;
            edx16 = 0;
            __asm__("shld edx, eax, cl");
            eax17 = 1 << *reinterpret_cast<unsigned char*>(&ecx15);
            if (*reinterpret_cast<unsigned char*>(&ecx15) & 32) {
                edx16 = eax17;
                eax17 = 0;
            }
            v11->f8 = esi13 ^ eax17;
            v11->fc = edi14 ^ edx16;
            eax18 = reinterpret_cast<struct s117*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v10) << 4));
            eax19 = eax18->f8;
            ecx20 = a1;
            __asm__("shrd eax, edx, cl");
            if (*reinterpret_cast<unsigned char*>(&ecx20) & 32) {
                eax19 = eax18->fc >> *reinterpret_cast<unsigned char*>(&ecx20);
            }
            eax21 = eax19 & 1;
            if (!*reinterpret_cast<signed char*>(&eax21)) {
                esi22 = reinterpret_cast<struct s118*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v10) << 4));
                eax23 = reinterpret_cast<struct s119*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v10) << 4));
                ecx24 = eax23->f0;
                edx25 = eax23->f4;
                v26 = reinterpret_cast<void**>(0xbf800000);
                v6 = edx25;
                eax29 = __mulsc3(ecx24, ecx24, v6, 0, 0xbf800000, v27, v28, 1);
                esi22->f0 = eax29;
                esi22->f4 = edx25;
            } else {
                esi30 = reinterpret_cast<struct s120*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v10) << 4));
                eax31 = reinterpret_cast<struct s121*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v10) << 4));
                ecx32 = eax31->f0;
                edx33 = eax31->f4;
                v26 = reinterpret_cast<void**>(0x3f800000);
                v6 = edx33;
                eax36 = __mulsc3(ecx32, ecx32, v6, 0, 0x3f800000, v34, v35, 1);
                esi30->f0 = eax36;
                esi30->f4 = edx33;
            }
            v10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v10) + 1);
        }
        eax9 = quantum_decohere(a2, v6, 0, v26, v37, v38, 1);
    }
    return eax9;
}

struct s122 {
    void** f0;
    signed char[4] pad8;
    void** f8;
    void** fc;
};

void quantum_reconstruct_hash(void** a1) {
    uint32_t v2;
    void** ecx3;
    void** v4;
    struct s122* eax5;
    void** edx6;
    void** ecx7;

    v2 = 0;
    while (ecx3 = *reinterpret_cast<void***>(a1 + 2), reinterpret_cast<int32_t>(1 << *reinterpret_cast<unsigned char*>(&ecx3)) > reinterpret_cast<int32_t>(v2)) {
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 4)) + (v2 << 2)) = reinterpret_cast<void**>(0);
        ++v2;
    }
    v4 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a1 + 1)) > reinterpret_cast<int32_t>(v4)) {
        eax5 = reinterpret_cast<struct s122*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 3)) + (reinterpret_cast<uint32_t>(v4) << 4));
        edx6 = eax5->f8;
        ecx7 = eax5->fc;
        quantum_add_hash(edx6, ecx7, v4, a1);
        v4 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v4) + 1);
    }
    return;
}

void** quantum_real(void** a1, void** a2);

void** quantum_imag(void** a1, void** a2);

void** quantum_prob_inline(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;

    quantum_real(a1, a2);
    __asm__("fstp dword [ebp-0x4]");
    eax8 = quantum_imag(a1, a2);
    __asm__("fstp dword [ebp-0x8]");
    __asm__("fld dword [ebp-0x4]");
    __asm__("fmul dword [ebp-0x4]");
    __asm__("fld dword [ebp-0x8]");
    __asm__("fmul dword [ebp-0x8]");
    __asm__("faddp st1, st0");
    return eax8;
}

/* __i686.get_pc_thunk.bx */
int32_t __i686_get_pc_thunk_bx() {
    int32_t eax1;

    return eax1;
}

void** __divsc3(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int16_t ax6;
    int16_t fpu_status_word7;
    int16_t ax8;
    int16_t fpu_status_word9;
    int16_t ax10;
    int16_t fpu_status_word11;
    int16_t ax12;
    int16_t fpu_status_word13;
    int16_t ax14;
    int16_t fpu_status_word15;
    int16_t ax16;
    int16_t fpu_status_word17;
    int16_t ax18;
    int16_t fpu_status_word19;
    unsigned char dl20;
    int16_t ax21;
    int16_t fpu_status_word22;
    int16_t ax23;
    int16_t fpu_status_word24;
    int16_t ax25;
    int16_t fpu_status_word26;
    int16_t ax27;
    int16_t fpu_status_word28;
    int16_t ax29;
    int16_t fpu_status_word30;
    int16_t ax31;
    int16_t fpu_status_word32;
    int16_t ax33;
    int16_t fpu_status_word34;
    int16_t ax35;
    int16_t fpu_status_word36;
    unsigned char dl37;
    int16_t ax38;
    int16_t fpu_status_word39;
    int16_t ax40;
    int16_t fpu_status_word41;
    int16_t ax42;
    int16_t fpu_status_word43;
    int16_t ax44;
    int16_t fpu_status_word45;
    int16_t ax46;
    int16_t fpu_status_word47;
    int16_t ax48;
    int16_t fpu_status_word49;
    void** v50;
    int16_t ax51;
    int16_t fpu_status_word52;
    int16_t ax53;
    int16_t fpu_status_word54;
    int16_t ax55;
    int16_t fpu_status_word56;
    int16_t ax57;
    int16_t fpu_status_word58;
    int16_t ax59;
    int16_t fpu_status_word60;
    int16_t ax61;
    int16_t fpu_status_word62;
    int16_t ax63;
    int16_t fpu_status_word64;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fld dword [ebp+0xc]");
    __asm__("fld dword [ebp+0x10]");
    __asm__("fld dword [ebp+0x14]");
    __asm__("fld st1");
    __asm__("fabs ");
    __asm__("fld st1");
    __asm__("fabs ");
    __asm__("fucompp ");
    ax6 = fpu_status_word7;
    __i686_get_pc_thunk_cx();
    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax6) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax6) + 1)) {
        __asm__("fld st0");
        __asm__("fdiv st0, st2");
        __asm__("fld st1");
        __asm__("fmul st0, st1");
        __asm__("fadd st0, st3");
        __asm__("fld st4");
        __asm__("fmul st0, st2");
        __asm__("fadd st0, st6");
        __asm__("fdiv st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fmul st0, st6");
        __asm__("fld st5");
        __asm__("fsubrp st1, st0");
        __asm__("fdivrp st1, st0");
        __asm__("fxch st0, st1");
    } else {
        __asm__("fld st1");
        __asm__("fdiv st0, st1");
        __asm__("fld st2");
        __asm__("fmul st0, st1");
        __asm__("fadd st0, st2");
        __asm__("fld st5");
        __asm__("fmul st0, st2");
        __asm__("fadd st0, st5");
        __asm__("fdiv st0, st1");
        __asm__("fld st5");
        __asm__("fmulp st3, st0");
        __asm__("fxch st0, st2");
        __asm__("fsub st0, st6");
        __asm__("fdivrp st1, st0");
        __asm__("fxch st0, st1");
    }
    __asm__("fucom st0");
    ax8 = fpu_status_word9;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax8) + 1)) {
        __asm__("fxch st0, st1");
    } else {
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax8) + 1)) {
            __asm__("fxch st0, st1");
        } else {
            __asm__("fstp st4");
            __asm__("fstp st4");
            __asm__("fstp st0");
            __asm__("fstp st0");
            goto addr_8053950_9;
        }
    }
    __asm__("fucom st0");
    ax10 = fpu_status_word11;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax10) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax10) + 1)) {
        __asm__("fldz ");
        __asm__("fxch st0, st4");
        __asm__("fucom st4");
        ax12 = fpu_status_word13;
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax12) + 1)) {
            __asm__("fstp st4");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st2");
            goto addr_80539d7_13;
        }
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax12) + 1)) {
            __asm__("fstp st4");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st2");
            goto addr_80539d7_13;
        }
        __asm__("fxch st0, st3");
        __asm__("fucom st4");
        ax14 = fpu_status_word15;
        __asm__("fstp st4");
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax14) + 1)) {
            addr_80539d7_13:
            __asm__("fld st5");
            __asm__("fsub st0, st6");
            __asm__("fst dword [ebp-0x4]");
            __asm__("fxch st0, st6");
            __asm__("fucom st0");
            ax16 = fpu_status_word17;
            __asm__("fxch st0, st6");
            __asm__("fucomp st0");
            ax18 = fpu_status_word19;
            dl20 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax16) + 1))) & static_cast<unsigned char>(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax18) + 1)));
            if (dl20) 
                goto addr_8053a1e_17;
        } else {
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax14) + 1)) 
                goto addr_80539d7_13; else 
                goto addr_8053c59_20;
        }
    } else {
        __asm__("fstp st5");
        __asm__("fstp st3");
        __asm__("fstp st0");
        __asm__("fstp st0");
        goto addr_8053950_9;
    }
    __asm__("fld st4");
    __asm__("fsub st0, st5");
    __asm__("fxch st0, st5");
    __asm__("fucom st0");
    ax21 = fpu_status_word22;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax21) + 1)) {
        __asm__("fstp st5");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax21) + 1)) {
            __asm__("fstp st5");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
        } else {
            __asm__("fxch st0, st5");
            __asm__("fucomp st0");
            ax23 = fpu_status_word24;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax23) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax23) + 1)) {
                addr_8053a1e_17:
                __asm__("fld st2");
                __asm__("fsub st0, st3");
                __asm__("fucom st0");
                ax25 = fpu_status_word26;
                if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax25) + 1)) {
                    __asm__("fxch st0, st4");
                    __asm__("fxch st0, st5");
                    __asm__("fxch st0, st1");
                    __asm__("fxch st0, st2");
                    __asm__("fxch st0, st3");
                    goto addr_8053b33_28;
                } else {
                    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax25) + 1)) {
                        __asm__("fxch st0, st4");
                        __asm__("fxch st0, st5");
                        __asm__("fxch st0, st1");
                        __asm__("fxch st0, st2");
                        __asm__("fxch st0, st3");
                        goto addr_8053b33_28;
                    } else {
                        __asm__("fld st4");
                        __asm__("fsub st0, st5");
                        __asm__("fucomp st0");
                        ax27 = fpu_status_word28;
                        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax27) + 1)) {
                            __asm__("fxch st0, st4");
                            __asm__("fxch st0, st5");
                            __asm__("fxch st0, st1");
                            __asm__("fxch st0, st2");
                            __asm__("fxch st0, st3");
                            goto addr_8053b33_28;
                        } else {
                            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax27) + 1)) {
                                __asm__("fxch st0, st4");
                                __asm__("fxch st0, st5");
                                __asm__("fxch st0, st1");
                                __asm__("fxch st0, st2");
                                __asm__("fxch st0, st3");
                                goto addr_8053b33_28;
                            } else {
                                __asm__("fstp st0");
                                __asm__("fstp st0");
                                __asm__("fstp st0");
                                if (dl20) {
                                    __asm__("fld1 ");
                                    __asm__("fxch st0, st4");
                                } else {
                                    __asm__("fldz ");
                                    __asm__("fxch st0, st4");
                                }
                                __asm__("fxam ");
                                ax29 = fpu_status_word30;
                                __asm__("fstp st0");
                                __asm__("fxch st0, st3");
                                __asm__("fabs ");
                                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax29) + 1) & 2) {
                                    __asm__("fchs ");
                                }
                                __asm__("fld st2");
                                __asm__("fsub st0, st3");
                                __asm__("fxch st0, st3");
                                __asm__("fucom st0");
                                ax31 = fpu_status_word32;
                                if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax31) + 1)) 
                                    goto addr_8053cd0_41; else 
                                    goto addr_8053a82_42;
                            }
                        }
                    }
                }
            } else {
                __asm__("fxch st0, st1");
                __asm__("fxch st0, st2");
                __asm__("fxch st0, st3");
                __asm__("fxch st0, st4");
            }
        }
    }
    __asm__("fld st3");
    __asm__("fsub st0, st4");
    __asm__("fxch st0, st4");
    addr_8053b33_28:
    __asm__("fucom st0");
    ax33 = fpu_status_word34;
    __asm__("fxch st0, st4");
    __asm__("fucomp st0");
    ax35 = fpu_status_word36;
    dl37 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax33) + 1))) & static_cast<unsigned char>(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax35) + 1)));
    if (dl37) 
        goto addr_8053b76_45;
    __asm__("fld st4");
    __asm__("fsub st0, st5");
    __asm__("fxch st0, st5");
    __asm__("fucom st0");
    ax38 = fpu_status_word39;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax38) + 1)) {
        __asm__("fstp st0");
        __asm__("fstp st0");
        __asm__("fstp st4");
        __asm__("fstp st2");
        __asm__("fstp st0");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax38) + 1)) {
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fstp st4");
            __asm__("fstp st2");
            __asm__("fstp st0");
        } else {
            __asm__("fxch st0, st5");
            __asm__("fucomp st0");
            ax40 = fpu_status_word41;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax40) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax40) + 1)) {
                addr_8053b76_45:
                __asm__("fld dword [ebp-0x4]");
                __asm__("fucomp st0");
                ax42 = fpu_status_word43;
                if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax42) + 1)) {
                    __asm__("fstp st0");
                    __asm__("fstp st4");
                    __asm__("fstp st2");
                    __asm__("fstp st0");
                } else {
                    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax42) + 1)) {
                        __asm__("fstp st0");
                        __asm__("fstp st4");
                        __asm__("fstp st2");
                        __asm__("fstp st0");
                    } else {
                        __asm__("fld st0");
                        __asm__("fsub st0, st1");
                        __asm__("fucomp st0");
                        ax44 = fpu_status_word45;
                        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax44) + 1)) {
                            __asm__("fstp st0");
                            __asm__("fstp st4");
                            __asm__("fstp st2");
                            __asm__("fstp st0");
                        } else {
                            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax44) + 1)) {
                                __asm__("fstp st0");
                                __asm__("fstp st4");
                                __asm__("fstp st2");
                                __asm__("fstp st0");
                            } else {
                                __asm__("fstp st2");
                                __asm__("fstp st0");
                                if (dl37) {
                                    __asm__("fld1 ");
                                    __asm__("fxch st0, st2");
                                } else {
                                    __asm__("fldz ");
                                    __asm__("fxch st0, st2");
                                }
                                __asm__("fxam ");
                                ax46 = fpu_status_word47;
                                __asm__("fstp st0");
                                __asm__("fxch st0, st1");
                                __asm__("fabs ");
                                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax46) + 1) & 2) {
                                    __asm__("fchs ");
                                }
                                __asm__("fld st2");
                                __asm__("fsub st0, st3");
                                __asm__("fxch st0, st3");
                                __asm__("fucom st0");
                                ax48 = fpu_status_word49;
                                if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax48) + 1)) 
                                    goto addr_8053ca6_64; else 
                                    goto addr_8053bd8_65;
                            }
                        }
                    }
                }
            } else {
                __asm__("fstp st0");
                __asm__("fstp st4");
                __asm__("fstp st2");
                __asm__("fstp st0");
            }
        }
    }
    addr_8053950_9:
    __asm__("fstp dword [ebp-0x8]");
    __asm__("fstp dword [ebp-0x8]");
    return v50;
    addr_8053ca6_64:
    __asm__("fstp st3");
    __asm__("fxch st0, st1");
    __asm__("fxch st0, st2");
    addr_8053cba_67:
    __asm__("fldz ");
    __asm__("fxch st0, st3");
    __asm__("fxch st0, st2");
    __asm__("fxch st0, st1");
    addr_8053bf2_68:
    __asm__("fxam ");
    ax51 = fpu_status_word52;
    __asm__("fstp st0");
    __asm__("fxch st0, st2");
    __asm__("fabs ");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax51) + 1) & 2) {
        __asm__("fchs ");
    }
    __asm__("fld st3");
    __asm__("fmul st0, st3");
    __asm__("fld st2");
    __asm__("fmul st0, st2");
    __asm__("faddp st1, st0");
    __asm__("fldz ");
    __asm__("fmul st1, st0");
    __asm__("fxch st0, st4");
    __asm__("fmulp st3, st0");
    __asm__("fxch st0, st4");
    __asm__("fmulp st1, st0");
    __asm__("fsubp st1, st0");
    __asm__("fmulp st1, st0");
    __asm__("fxch st0, st1");
    goto addr_8053950_9;
    addr_8053bd8_65:
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax48) + 1)) {
        __asm__("fstp st3");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        goto addr_8053cba_67;
    } else {
        __asm__("fxch st0, st3");
        __asm__("fucomp st0");
        ax53 = fpu_status_word54;
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax53) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax53) + 1)) {
            __asm__("fld1 ");
            __asm__("fxch st0, st3");
            goto addr_8053bf2_68;
        } else {
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            goto addr_8053cba_67;
        }
    }
    addr_8053cd0_41:
    __asm__("fstp st3");
    __asm__("fxch st0, st1");
    __asm__("fxch st0, st2");
    addr_8053ce4_75:
    __asm__("fldz ");
    __asm__("fxch st0, st3");
    __asm__("fxch st0, st2");
    __asm__("fxch st0, st1");
    addr_8053aa2_76:
    __asm__("fxam ");
    ax55 = fpu_status_word56;
    __asm__("fstp st0");
    __asm__("fxch st0, st2");
    __asm__("fabs ");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax55) + 1) & 2) {
        __asm__("fchs ");
    }
    __asm__("fld st2");
    __asm__("fmul st0, st4");
    __asm__("fld st1");
    __asm__("fmul st0, st3");
    __asm__("faddp st1, st0");
    __asm__("fld dword [ecx+0xffffe5e8]");
    __asm__("fmul st1, st0");
    __asm__("fxch st0, st2");
    __asm__("fmulp st5, st0");
    __asm__("fxch st0, st3");
    __asm__("fmulp st2, st0");
    __asm__("fxch st0, st3");
    __asm__("fsubrp st1, st0");
    __asm__("fmulp st2, st0");
    goto addr_8053950_9;
    addr_8053a82_42:
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax31) + 1)) {
        __asm__("fstp st3");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        goto addr_8053ce4_75;
    } else {
        __asm__("fxch st0, st3");
        __asm__("fucomp st0");
        ax57 = fpu_status_word58;
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax57) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax57) + 1)) {
            __asm__("fld1 ");
            __asm__("fxch st0, st3");
            goto addr_8053aa2_76;
        } else {
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            goto addr_8053ce4_75;
        }
    }
    addr_8053c59_20:
    __asm__("fxch st0, st5");
    __asm__("fucom st0");
    ax59 = fpu_status_word60;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax59) + 1)) {
        __asm__("fxch st0, st4");
    } else {
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax59) + 1)) {
            __asm__("fxch st0, st4");
        } else {
            __asm__("fstp st5");
            __asm__("fstp st0");
            __asm__("fstp st1");
            goto addr_8053c80_87;
        }
    }
    __asm__("fucom st0");
    ax61 = fpu_status_word62;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax61) + 1) || *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax61) + 1)) {
        __asm__("fld st4");
        __asm__("fsub st0, st5");
        __asm__("fstp dword [ebp-0x4]");
        __asm__("fld st2");
        __asm__("fsub st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st5");
        __asm__("fxch st0, st6");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        goto addr_8053b33_28;
    } else {
        __asm__("fstp st3");
        __asm__("fstp st0");
        __asm__("fstp st3");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
    }
    addr_8053c80_87:
    __asm__("fxam ");
    ax63 = fpu_status_word64;
    __asm__("fstp st0");
    __asm__("fld dword [ecx+0xffffe5e8]");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax63) + 1) & 2) {
        __asm__("fstp st0");
        __asm__("fld dword [ecx+0xffffe5ec]");
    }
    __asm__("fld st0");
    __asm__("fmulp st3, st0");
    __asm__("fmulp st1, st0");
    __asm__("fxch st0, st1");
    goto addr_8053950_9;
}

void** quantum_real(void** a1, void** a2) {
    __asm__("fld dword [ebp-0x14]");
    return a1;
}

int32_t rand = 0x80489fa;

int32_t fun_80489f4(void** a1, void** a2, void** a3) {
    goto rand;
}

struct s123 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s124 {
    void** f0;
    void** f4;
};

struct s125 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s126 {
    void** f0;
    void** f4;
};

struct s127 {
    void** f0;
    int32_t f4;
};

struct s128 {
    void** f0;
    void** f4;
};

struct s129 {
    void** f0;
    int32_t f4;
};

struct s130 {
    void** f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

struct s131 {
    void** f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

int32_t quantum_bmeasure_bitpreserve(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    int32_t v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** ecx13;
    uint32_t edx14;
    uint32_t eax15;
    uint32_t v16;
    uint32_t v17;
    void** v18;
    struct s123* eax19;
    struct s124* edx20;
    int16_t ax21;
    int16_t fpu_status_word22;
    void** v23;
    struct s125* eax24;
    struct s126* edx25;
    void** v26;
    void** v27;
    struct s127* edx28;
    struct s128* edx29;
    void** v30;
    void** v31;
    struct s129* edx32;
    void** v33;
    void** v34;
    void** v35;
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
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    uint32_t v57;
    void** edx58;
    void** v59;
    int16_t ax60;
    int16_t fpu_status_word61;
    int16_t ax62;
    int16_t fpu_status_word63;
    struct s130* ecx64;
    struct s131* eax65;
    int32_t edx66;
    int16_t ax67;
    int16_t fpu_status_word68;
    void** v69;
    void** v70;
    void** v71;
    void** eax72;
    void** v73;
    void** v74;
    void** v75;
    int32_t v76;

    v6 = reinterpret_cast<void**>(0);
    v7 = 0;
    __asm__("fldz ");
    __asm__("fstp qword [ebp-0x20]");
    __asm__("fldz ");
    __asm__("fstp qword [ebp-0x28]");
    v8 = a1;
    v9 = reinterpret_cast<void**>(0x82);
    eax12 = quantum_objcode_put(0x82, v8, v10, v11);
    if (!eax12) {
        ecx13 = a1;
        edx14 = 0;
        __asm__("shld edx, eax, cl");
        eax15 = 1 << *reinterpret_cast<unsigned char*>(&ecx13);
        if (*reinterpret_cast<unsigned char*>(&ecx13) & 32) {
            edx14 = eax15;
            eax15 = 0;
        }
        v16 = eax15;
        v17 = edx14;
        v18 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 1)) > reinterpret_cast<int32_t>(v18)) {
            eax19 = reinterpret_cast<struct s123*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v18) << 4));
            if (!(eax19->f8 & v16 | eax19->fc & v17)) {
                edx20 = reinterpret_cast<struct s124*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v18) << 4));
                v9 = edx20->f0;
                v8 = edx20->f4;
                quantum_prob_inline(v9, v8);
                __asm__("fld qword [ebp-0x28]");
                __asm__("faddp st1, st0");
                __asm__("fstp qword [ebp-0x28]");
            }
            v18 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v18) + 1);
        }
        quantum_frand(v9, v8);
        __asm__("fstp qword [ebp-0x30]");
        __asm__("fld qword [ebp-0x30]");
        __asm__("fld qword [ebp-0x28]");
        __asm__("fxch st0, st1");
        __asm__("fucompp ");
        ax21 = fpu_status_word22;
        if (!(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax21) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax21) + 1))) {
            v7 = 1;
        }
        v23 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 1)) > reinterpret_cast<int32_t>(v23)) {
            eax24 = reinterpret_cast<struct s125*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v23) << 4));
            if (!(eax24->f8 & v16 | eax24->fc & v17)) {
                if (!v7) {
                    edx25 = reinterpret_cast<struct s126*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v23) << 4));
                    v26 = edx25->f0;
                    v27 = edx25->f4;
                    quantum_prob_inline(v26, v27);
                    __asm__("fld qword [ebp-0x20]");
                    __asm__("faddp st1, st0");
                    __asm__("fstp qword [ebp-0x20]");
                    v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v6) + 1);
                } else {
                    edx28 = reinterpret_cast<struct s127*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v23) << 4));
                    edx28->f0 = reinterpret_cast<void**>(0);
                    edx28->f4 = 0;
                }
            } else {
                if (v7) {
                    edx29 = reinterpret_cast<struct s128*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v23) << 4));
                    v30 = edx29->f0;
                    v31 = edx29->f4;
                    quantum_prob_inline(v30, v31);
                    __asm__("fld qword [ebp-0x20]");
                    __asm__("faddp st1, st0");
                    __asm__("fstp qword [ebp-0x20]");
                    v6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v6) + 1);
                } else {
                    edx32 = reinterpret_cast<struct s129*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v23) << 4));
                    edx32->f0 = reinterpret_cast<void**>(0);
                    edx32->f4 = 0;
                }
            }
            v23 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v23) + 1);
        }
        v33 = v6;
        v34 = reinterpret_cast<void**>(16);
        eax40 = fun_8048884(v6, 16, v35, v36, v37, v38, v39);
        v41 = eax40;
        if (!v41) {
            quantum_error(2, 16, v42, v43, v44, v45, v46);
        }
        v47 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v6) << 4);
        quantum_memman(v47, 16, v48, v49, v50, v51, v52);
        v53 = *reinterpret_cast<void***>(a2 + 2);
        v54 = *reinterpret_cast<void***>(a2 + 4);
        v55 = *reinterpret_cast<void***>(a2);
        v56 = reinterpret_cast<void**>(0);
        v57 = 0;
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 1)) > reinterpret_cast<int32_t>(v56)) {
            edx58 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v56) << 4));
            v59 = edx58;
            __asm__("fld dword [ebp+0xffffff7c]");
            __asm__("fldz ");
            __asm__("fxch st0, st1");
            __asm__("fucompp ");
            ax60 = fpu_status_word61;
            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax60) + 1) || (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax60) + 1) || ((ax62 = fpu_status_word63, *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax62) + 1)) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax62) + 1)))) {
                ecx64 = reinterpret_cast<struct s130*>(reinterpret_cast<uint32_t>(v41) + (v57 << 4));
                eax65 = reinterpret_cast<struct s131*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v56) << 4));
                edx66 = eax65->fc;
                ecx64->f8 = eax65->f8;
                ecx64->fc = edx66;
                __asm__("fld dword [eax]");
                __asm__("fstp dword [ebp-0x60]");
                __asm__("fld dword [eax+0x4]");
                __asm__("fstp dword [ebp-0x64]");
                __asm__("fld qword [ebp-0x20]");
                __asm__("fsqrt ");
                __asm__("fstp qword [ebp-0x80]");
                __asm__("fld qword [ebp-0x80]");
                __asm__("fucomp st0");
                ax67 = fpu_status_word68;
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax67) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax67) + 1)) {
                    __asm__("fld qword [ebp-0x20]");
                    __asm__("fstp qword [esp]");
                    fun_80488f4(v47, v34, v69, 0);
                    __asm__("fstp qword [ebp-0x80]");
                }
                __asm__("fld qword [ebp-0x80]");
                __asm__("fstp dword [ebp-0x5c]");
                __asm__("fld dword [ebp-0x5c]");
                __asm__("fstp dword [ebp+0xffffff7c]");
                v69 = v59;
                v34 = v70;
                v47 = v71;
                eax72 = __divsc3(0, v47, v34, v69, 0);
                *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v41) + (v57 << 4)) = eax72;
                *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v41) + (v57 << 4) + 4) = v59;
                ++v57;
            }
            v56 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v56) + 1);
        }
        quantum_delete_qureg_hashpreserve(a2, v34, v69, 0, v73, v59, v74, v75);
        *reinterpret_cast<void***>(a2) = v55;
        *reinterpret_cast<void***>(a2 + 1) = v33;
        *reinterpret_cast<void***>(a2 + 2) = v53;
        *reinterpret_cast<void***>(a2 + 3) = v41;
        *reinterpret_cast<void***>(a2 + 4) = v54;
        v76 = v7;
    } else {
        v76 = 0;
    }
    return v76;
}

void** quantum_real(void** a1, void** a2) {
    __asm__("fld dword [ebp-0x14]");
    return a1;
}

void** quantum_imag(void** a1, void** a2) {
    __asm__("fld dword [ebp-0x14]");
    return a2;
}

void** muxha_inv(int32_t a1, void** a2, void** a3, void** a4, void** a5, uint32_t a6, void** a7) {
    void** v8;
    void** v9;
    void** v10;
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

    if (!a1) {
        v8 = a7;
        eax11 = quantum_cnot(a2, a3, v8, v9, v10);
    }
    if (a1 == 3) {
        quantum_cnot(a2, a3, a7, v12, v13);
        v8 = a7;
        eax11 = quantum_cnot(a5, a3, v8, v14, v15);
    }
    if (a1 == 1) {
        quantum_cnot(a2, a3, a7, v16, v17);
        v18 = a7;
        v8 = a3;
        eax11 = quantum_toffoli(a5, a4, v8, v18, v19);
    }
    if (a1 == 2) {
        quantum_sigma_x(a4, a7, v8, v18, v20);
        quantum_cnot(a2, a3, a7, v18, v21);
        quantum_toffoli(a5, a4, a3, a7, v22);
        eax11 = quantum_sigma_x(a4, a7, a3, a7, v23);
    }
    return eax11;
}

void** madd(void* a1, void* a2, void** a3, void** a4) {
    uint32_t eax5;
    uint32_t v6;
    void** v7;
    void** ecx8;
    uint32_t eax9;
    int32_t v10;
    void** ecx11;
    uint32_t eax12;
    void** v13;
    int32_t v14;
    void** ecx15;
    uint32_t eax16;
    void** ecx17;
    uint32_t eax18;
    void** eax19;

    eax5 = reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3) + 1;
    v6 = eax5 + eax5;
    v7 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a3) - 1) > reinterpret_cast<int32_t>(v7)) {
        ecx8 = v7;
        eax9 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a1) >> *reinterpret_cast<signed char*>(&ecx8)) & 1;
        if (!*reinterpret_cast<signed char*>(&eax9)) {
            v10 = 0;
        } else {
            v10 = 2;
        }
        ecx11 = v7;
        eax12 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a2) >> *reinterpret_cast<signed char*>(&ecx11)) & 1;
        if (*reinterpret_cast<signed char*>(&eax12)) {
            ++v10;
        }
        v13 = a4;
        muxfa(v10, reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(v7), v7, reinterpret_cast<uint32_t>(v7) + 1, reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3), reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3) + 1, v6, v13);
        v7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v7) + 1);
    }
    v14 = 0;
    ecx15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3) + 0xffffffff);
    eax16 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a1) >> *reinterpret_cast<signed char*>(&ecx15)) & 1;
    if (*reinterpret_cast<signed char*>(&eax16)) {
        v14 = 2;
    }
    ecx17 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a3) + 0xffffffff);
    eax18 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a2) >> *reinterpret_cast<signed char*>(&ecx17)) & 1;
    if (*reinterpret_cast<signed char*>(&eax18)) {
        ++v14;
    }
    eax19 = muxha(v14, reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3) + 0xffffffff, reinterpret_cast<uint32_t>(a3) + 0xffffffff, reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3), reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3) + 1, v6, a4, v13);
    return eax19;
}

void** test_sum(void* a1, void** a2, void** a3, void** a4) {
    void** ecx5;
    void* eax6;
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
    void** ecx21;
    uint32_t eax22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    uint32_t eax29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    uint32_t eax34;
    void** v35;
    void** v36;
    void** v37;
    void** ecx38;
    uint32_t eax39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** ecx45;
    uint32_t eax46;
    void** v47;
    void** v48;
    void** eax49;
    void** v50;
    void** v51;
    void** v52;

    ecx5 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a2) + 0xffffffff);
    eax6 = a1;
    __asm__("shrd eax, edx, cl");
    if (*reinterpret_cast<unsigned char*>(&ecx5) & 32) {
        eax6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a1) >> 31) >> *reinterpret_cast<unsigned char*>(&ecx5));
    }
    eax7 = reinterpret_cast<uint32_t>(eax6) & 1;
    if (!*reinterpret_cast<signed char*>(&eax7)) {
        quantum_sigma_x(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + 0xffffffff, a3, v8, v9, v10);
        v11 = a3;
        quantum_cnot(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + 0xffffffff, reinterpret_cast<uint32_t>(a2) + 0xffffffff, v11, v12, v13);
    } else {
        quantum_cnot(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + 0xffffffff, reinterpret_cast<uint32_t>(a2) + 0xffffffff, a3, v14, v15);
        quantum_sigma_x(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + 0xffffffff, a3, a3, v16, v17);
        v11 = a3;
        quantum_cnot(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + 0xffffffff, 0, v11, v18, v19);
    }
    v20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a2) - 2);
    while (reinterpret_cast<int32_t>(v20) > reinterpret_cast<int32_t>(0)) {
        ecx21 = v20;
        eax22 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a1) >> *reinterpret_cast<signed char*>(&ecx21)) & 1;
        if (!*reinterpret_cast<signed char*>(&eax22)) {
            quantum_sigma_x(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v20), a3, v11, v23, v24);
            v23 = a3;
            v11 = v20;
            quantum_toffoli(reinterpret_cast<uint32_t>(v20) + 1, reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v20), v11, v23, v25);
        } else {
            quantum_toffoli(reinterpret_cast<uint32_t>(v20) + 1, reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v20), v20, a3, v26);
            quantum_sigma_x(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v20), a3, v20, a3, v27);
            v23 = a3;
            v11 = reinterpret_cast<void**>(0);
            quantum_toffoli(reinterpret_cast<uint32_t>(v20) + 1, reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v20), 0, v23, v28);
        }
        v20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v20) - 1);
    }
    eax29 = reinterpret_cast<uint32_t>(a1) & 1;
    if (*reinterpret_cast<signed char*>(&eax29)) {
        quantum_sigma_x(a2, a3, v11, v23, v30);
        quantum_toffoli(a2, 1, 0, a3, v31);
    }
    v32 = a3;
    quantum_toffoli(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + 1, 0, reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2), v32, v33);
    eax34 = reinterpret_cast<uint32_t>(a1) & 1;
    if (*reinterpret_cast<signed char*>(&eax34)) {
        v32 = a3;
        quantum_toffoli(a2, 1, 0, v32, v35);
        quantum_sigma_x(a2, a3, 0, v32, v36);
    }
    v37 = reinterpret_cast<void**>(1);
    while (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a2) - 2) >= reinterpret_cast<int32_t>(v37)) {
        ecx38 = v37;
        eax39 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a1) >> *reinterpret_cast<signed char*>(&ecx38)) & 1;
        if (!*reinterpret_cast<signed char*>(&eax39)) {
            v32 = a3;
            quantum_toffoli(reinterpret_cast<uint32_t>(v37) + 1, reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v37), v37, v32, v40);
            quantum_sigma_x(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v37), a3, v37, v32, v41);
        } else {
            quantum_toffoli(reinterpret_cast<uint32_t>(v37) + 1, reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v37), 0, a3, v42);
            quantum_sigma_x(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v37), a3, 0, a3, v43);
            v32 = a3;
            quantum_toffoli(reinterpret_cast<uint32_t>(v37) + 1, reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(v37), v37, v32, v44);
        }
        v37 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v37) + 1);
    }
    ecx45 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a2) + 0xffffffff);
    eax46 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a1) >> *reinterpret_cast<signed char*>(&ecx45)) & 1;
    if (!*reinterpret_cast<signed char*>(&eax46)) {
        quantum_cnot(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + 0xffffffff, reinterpret_cast<uint32_t>(a2) + 0xffffffff, a3, v32, v47);
        eax49 = quantum_sigma_x(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + 0xffffffff, a3, a3, v32, v48);
    } else {
        quantum_cnot(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + 0xffffffff, 0, a3, v32, v50);
        quantum_sigma_x(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + 0xffffffff, a3, a3, v32, v51);
        eax49 = quantum_cnot(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a2) + 0xffffffff, reinterpret_cast<uint32_t>(a2) + 0xffffffff, a3, v32, v52);
    }
    return eax49;
}

void addn_inv(void** a1, void* a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** ecx7;
    void** v8;

    quantum_cnot(reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3) + 1, reinterpret_cast<uint32_t>(a3) + reinterpret_cast<uint32_t>(a3), a4, v5, v6);
    ecx7 = a3;
    madd_inv((1 << *reinterpret_cast<unsigned char*>(&ecx7)) - reinterpret_cast<uint32_t>(a2), reinterpret_cast<uint32_t>(a1) - reinterpret_cast<uint32_t>(a2), a3, a4);
    quantum_swaptheleads(a3, a4, a3, a4, v8);
    test_sum(a2, a3, a4, a4);
    return;
}

void quantum_mu2char(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void* v6;
    int32_t ecx7;
    void** eax8;
    int32_t ecx9;
    uint32_t edx10;
    uint32_t eax11;
    uint32_t tmp32_12;

    v4 = a1;
    v5 = a2;
    v6 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v6) < 8) {
        ecx7 = ~(reinterpret_cast<int32_t>(v6) - 8) * 8;
        eax8 = v4;
        __asm__("shrd eax, edx, cl");
        if (*reinterpret_cast<unsigned char*>(&ecx7) & 32) {
            eax8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v5) >> *reinterpret_cast<unsigned char*>(&ecx7));
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(v6) + reinterpret_cast<uint32_t>(a3)) = *reinterpret_cast<signed char*>(&eax8);
        ecx9 = ~(reinterpret_cast<int32_t>(v6) - 8) * 8;
        edx10 = 0;
        __asm__("shld edx, eax, cl");
        eax11 = 1 << *reinterpret_cast<unsigned char*>(&ecx9);
        if (*reinterpret_cast<unsigned char*>(&ecx9) & 32) {
            edx10 = eax11;
            eax11 = 0;
        }
        tmp32_12 = eax11 - 1;
        v4 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v4) & tmp32_12);
        v5 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v5) & edx10 - 1 + reinterpret_cast<uint1_t>(tmp32_12 < eax11));
        v6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v6) + 1);
    }
    return;
}

int32_t fread = 0x8048a0a;

void fun_8048a04(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto fread;
}

struct s132 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s133 {
    void** f0;
    void** f4;
};

void** quantum_bmeasure(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** ecx13;
    uint32_t edx14;
    uint32_t eax15;
    uint32_t v16;
    uint32_t v17;
    void** v18;
    struct s132* eax19;
    struct s133* edx20;
    int16_t ax21;
    int16_t fpu_status_word22;
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

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v7 = reinterpret_cast<void**>(0);
    __asm__("fldz ");
    __asm__("fstp qword [ebp-0x18]");
    v8 = a1;
    v9 = reinterpret_cast<void**>(0x81);
    eax12 = quantum_objcode_put(0x81, v8, v10, v11);
    if (!eax12) {
        ecx13 = a1;
        edx14 = 0;
        __asm__("shld edx, eax, cl");
        eax15 = 1 << *reinterpret_cast<unsigned char*>(&ecx13);
        if (*reinterpret_cast<unsigned char*>(&ecx13) & 32) {
            edx14 = eax15;
            eax15 = 0;
        }
        v16 = eax15;
        v17 = edx14;
        v18 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 1)) > reinterpret_cast<int32_t>(v18)) {
            eax19 = reinterpret_cast<struct s132*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v18) << 4));
            if (!(eax19->f8 & v16 | eax19->fc & v17)) {
                edx20 = reinterpret_cast<struct s133*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v18) << 4));
                v9 = edx20->f0;
                v8 = edx20->f4;
                quantum_prob_inline(v9, v8);
                __asm__("fld qword [ebp-0x18]");
                __asm__("faddp st1, st0");
                __asm__("fstp qword [ebp-0x18]");
            }
            v18 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v18) + 1);
        }
        quantum_frand(v9, v8);
        __asm__("fstp qword [ebp-0x20]");
        __asm__("fld qword [ebp-0x20]");
        __asm__("fld qword [ebp-0x18]");
        __asm__("fxch st0, st1");
        __asm__("fucompp ");
        ax21 = fpu_status_word22;
        if (!(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax21) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax21) + 1))) {
            v7 = reinterpret_cast<void**>(1);
        }
        v23 = *reinterpret_cast<void***>(a2);
        v24 = *reinterpret_cast<void***>(a2 + 1);
        v25 = *reinterpret_cast<void***>(a2 + 2);
        v26 = *reinterpret_cast<void***>(a2 + 3);
        v27 = *reinterpret_cast<void***>(a2 + 4);
        quantum_state_collapse(reinterpret_cast<int32_t>(ebp6) + 0xffffffc4, a1, v7, v23, v24, v25, v26, v27);
        quantum_delete_qureg_hashpreserve(a2, a1, v7, v23, v24, v25, v26, v27);
        *reinterpret_cast<void***>(a2) = v28;
        *reinterpret_cast<void***>(a2 + 1) = v29;
        *reinterpret_cast<void***>(a2 + 2) = v30;
        *reinterpret_cast<void***>(a2 + 3) = v31;
        *reinterpret_cast<void***>(a2 + 4) = v32;
        v33 = v7;
    } else {
        v33 = reinterpret_cast<void**>(0);
    }
    return v33;
}

void* __divdc3(void* a1, void** a2, void** a3) {
    int32_t eax4;
    int16_t ax5;
    int16_t fpu_status_word6;
    int16_t ax7;
    int16_t fpu_status_word8;
    int16_t ax9;
    int16_t fpu_status_word10;
    int16_t ax11;
    int16_t fpu_status_word12;
    int16_t ax13;
    int16_t fpu_status_word14;
    int16_t ax15;
    int16_t fpu_status_word16;
    unsigned char dl17;
    int16_t ax18;
    int16_t fpu_status_word19;
    int16_t ax20;
    int16_t fpu_status_word21;
    int16_t ax22;
    int16_t fpu_status_word23;
    int16_t ax24;
    int16_t fpu_status_word25;
    int16_t ax26;
    int16_t fpu_status_word27;
    int16_t ax28;
    int16_t fpu_status_word29;
    int16_t ax30;
    int16_t fpu_status_word31;
    int16_t ax32;
    int16_t fpu_status_word33;
    unsigned char dl34;
    int16_t ax35;
    int16_t fpu_status_word36;
    int16_t ax37;
    int16_t fpu_status_word38;
    int16_t ax39;
    int16_t fpu_status_word40;
    int16_t ax41;
    int16_t fpu_status_word42;
    int16_t ax43;
    int16_t fpu_status_word44;
    int16_t ax45;
    int16_t fpu_status_word46;
    int16_t ax47;
    int16_t fpu_status_word48;
    int16_t ax49;
    int16_t fpu_status_word50;
    int16_t ax51;
    int16_t fpu_status_word52;
    int16_t ax53;
    int16_t fpu_status_word54;
    int16_t ax55;
    int16_t fpu_status_word56;
    int16_t ax57;
    int16_t fpu_status_word58;
    int16_t ax59;
    int16_t fpu_status_word60;

    __asm__("fld qword [ebp+0xc]");
    __asm__("fld qword [ebp+0x14]");
    __asm__("fld qword [ebp+0x1c]");
    __asm__("fld qword [ebp+0x24]");
    __asm__("fld st1");
    __asm__("fabs ");
    __asm__("fld st1");
    __asm__("fabs ");
    __asm__("fucompp ");
    eax4 = __i686_get_pc_thunk_bx();
    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax4) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax4) + 1)) {
        __asm__("fld st0");
        __asm__("fdiv st0, st2");
        __asm__("fld st1");
        __asm__("fmul st0, st1");
        __asm__("fadd st0, st3");
        __asm__("fld st4");
        __asm__("fmul st0, st2");
        __asm__("fadd st0, st6");
        __asm__("fdiv st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fmul st0, st6");
        __asm__("fld st5");
        __asm__("fsubrp st1, st0");
        __asm__("fdivrp st1, st0");
        __asm__("fxch st0, st1");
    } else {
        __asm__("fld st1");
        __asm__("fdiv st0, st1");
        __asm__("fld st2");
        __asm__("fmul st0, st1");
        __asm__("fadd st0, st2");
        __asm__("fld st5");
        __asm__("fmul st0, st2");
        __asm__("fadd st0, st5");
        __asm__("fdiv st0, st1");
        __asm__("fld st5");
        __asm__("fmulp st3, st0");
        __asm__("fxch st0, st2");
        __asm__("fsub st0, st6");
        __asm__("fdivrp st1, st0");
        __asm__("fxch st0, st1");
    }
    __asm__("fucom st0");
    ax5 = fpu_status_word6;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax5) + 1)) {
        __asm__("fxch st0, st1");
    } else {
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax5) + 1)) {
            __asm__("fxch st0, st1");
        } else {
            __asm__("fstp st4");
            __asm__("fstp st4");
            __asm__("fstp st0");
            __asm__("fstp st0");
            goto addr_8053dc0_9;
        }
    }
    __asm__("fucom st0");
    ax7 = fpu_status_word8;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax7) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax7) + 1)) {
        __asm__("fldz ");
        __asm__("fxch st0, st4");
        __asm__("fucom st4");
        ax9 = fpu_status_word10;
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax9) + 1)) {
            __asm__("fstp st4");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st2");
            goto addr_8053e47_13;
        }
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax9) + 1)) {
            __asm__("fstp st4");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st2");
            goto addr_8053e47_13;
        }
        __asm__("fxch st0, st3");
        __asm__("fucom st4");
        ax11 = fpu_status_word12;
        __asm__("fstp st4");
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax11) + 1)) {
            addr_8053e47_13:
            __asm__("fld st5");
            __asm__("fsub st0, st6");
            __asm__("fst qword [ebp-0x10]");
            __asm__("fxch st0, st6");
            __asm__("fucom st0");
            ax13 = fpu_status_word14;
            __asm__("fxch st0, st6");
            __asm__("fucomp st0");
            ax15 = fpu_status_word16;
            dl17 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax13) + 1))) & static_cast<unsigned char>(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax15) + 1)));
            if (dl17) 
                goto addr_8053e8e_17;
        } else {
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax11) + 1)) 
                goto addr_8053e47_13; else 
                goto addr_80540c9_20;
        }
    } else {
        __asm__("fstp st5");
        __asm__("fstp st3");
        __asm__("fstp st0");
        __asm__("fstp st0");
        goto addr_8053dc0_9;
    }
    __asm__("fld st4");
    __asm__("fsub st0, st5");
    __asm__("fxch st0, st5");
    __asm__("fucom st0");
    ax18 = fpu_status_word19;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax18) + 1)) {
        __asm__("fstp st5");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        __asm__("fxch st0, st4");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax18) + 1)) {
            __asm__("fstp st5");
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            __asm__("fxch st0, st3");
            __asm__("fxch st0, st4");
        } else {
            __asm__("fxch st0, st5");
            __asm__("fucomp st0");
            ax20 = fpu_status_word21;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax20) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax20) + 1)) {
                addr_8053e8e_17:
                __asm__("fld st2");
                __asm__("fsub st0, st3");
                __asm__("fucom st0");
                ax22 = fpu_status_word23;
                if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax22) + 1)) {
                    __asm__("fxch st0, st4");
                    __asm__("fxch st0, st5");
                    __asm__("fxch st0, st1");
                    __asm__("fxch st0, st2");
                    __asm__("fxch st0, st3");
                    goto addr_8053fa3_28;
                } else {
                    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax22) + 1)) {
                        __asm__("fxch st0, st4");
                        __asm__("fxch st0, st5");
                        __asm__("fxch st0, st1");
                        __asm__("fxch st0, st2");
                        __asm__("fxch st0, st3");
                        goto addr_8053fa3_28;
                    } else {
                        __asm__("fld st4");
                        __asm__("fsub st0, st5");
                        __asm__("fucomp st0");
                        ax24 = fpu_status_word25;
                        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax24) + 1)) {
                            __asm__("fxch st0, st4");
                            __asm__("fxch st0, st5");
                            __asm__("fxch st0, st1");
                            __asm__("fxch st0, st2");
                            __asm__("fxch st0, st3");
                            goto addr_8053fa3_28;
                        } else {
                            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax24) + 1)) {
                                __asm__("fxch st0, st4");
                                __asm__("fxch st0, st5");
                                __asm__("fxch st0, st1");
                                __asm__("fxch st0, st2");
                                __asm__("fxch st0, st3");
                                goto addr_8053fa3_28;
                            } else {
                                __asm__("fstp st0");
                                __asm__("fstp st0");
                                __asm__("fstp st0");
                                if (dl17) {
                                    __asm__("fld1 ");
                                    __asm__("fxch st0, st4");
                                } else {
                                    __asm__("fldz ");
                                    __asm__("fxch st0, st4");
                                }
                                __asm__("fxam ");
                                ax26 = fpu_status_word27;
                                __asm__("fstp st0");
                                __asm__("fxch st0, st3");
                                __asm__("fabs ");
                                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax26) + 1) & 2) {
                                    __asm__("fchs ");
                                }
                                __asm__("fld st2");
                                __asm__("fsub st0, st3");
                                __asm__("fxch st0, st3");
                                __asm__("fucom st0");
                                ax28 = fpu_status_word29;
                                if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax28) + 1)) 
                                    goto addr_8054140_41; else 
                                    goto addr_8053ef2_42;
                            }
                        }
                    }
                }
            } else {
                __asm__("fxch st0, st1");
                __asm__("fxch st0, st2");
                __asm__("fxch st0, st3");
                __asm__("fxch st0, st4");
            }
        }
    }
    __asm__("fld st3");
    __asm__("fsub st0, st4");
    __asm__("fxch st0, st4");
    addr_8053fa3_28:
    __asm__("fucom st0");
    ax30 = fpu_status_word31;
    __asm__("fxch st0, st4");
    __asm__("fucomp st0");
    ax32 = fpu_status_word33;
    dl34 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax30) + 1))) & static_cast<unsigned char>(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax32) + 1)));
    if (dl34) 
        goto addr_8053fe6_45;
    __asm__("fld st4");
    __asm__("fsub st0, st5");
    __asm__("fxch st0, st5");
    __asm__("fucom st0");
    ax35 = fpu_status_word36;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax35) + 1)) {
        __asm__("fstp st0");
        __asm__("fstp st0");
        __asm__("fstp st4");
        __asm__("fstp st2");
        __asm__("fstp st0");
    } else {
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax35) + 1)) {
            __asm__("fstp st0");
            __asm__("fstp st0");
            __asm__("fstp st4");
            __asm__("fstp st2");
            __asm__("fstp st0");
        } else {
            __asm__("fxch st0, st5");
            __asm__("fucomp st0");
            ax37 = fpu_status_word38;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax37) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax37) + 1)) {
                addr_8053fe6_45:
                __asm__("fld qword [ebp-0x10]");
                __asm__("fucomp st0");
                ax39 = fpu_status_word40;
                if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax39) + 1)) {
                    __asm__("fstp st0");
                    __asm__("fstp st4");
                    __asm__("fstp st2");
                    __asm__("fstp st0");
                } else {
                    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax39) + 1)) {
                        __asm__("fstp st0");
                        __asm__("fstp st4");
                        __asm__("fstp st2");
                        __asm__("fstp st0");
                    } else {
                        __asm__("fld st0");
                        __asm__("fsub st0, st1");
                        __asm__("fucomp st0");
                        ax41 = fpu_status_word42;
                        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax41) + 1)) {
                            __asm__("fstp st0");
                            __asm__("fstp st4");
                            __asm__("fstp st2");
                            __asm__("fstp st0");
                        } else {
                            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax41) + 1)) {
                                __asm__("fstp st0");
                                __asm__("fstp st4");
                                __asm__("fstp st2");
                                __asm__("fstp st0");
                            } else {
                                __asm__("fstp st2");
                                __asm__("fstp st0");
                                if (dl34) {
                                    __asm__("fld1 ");
                                    __asm__("fxch st0, st2");
                                } else {
                                    __asm__("fldz ");
                                    __asm__("fxch st0, st2");
                                }
                                __asm__("fxam ");
                                ax43 = fpu_status_word44;
                                __asm__("fstp st0");
                                __asm__("fxch st0, st1");
                                __asm__("fabs ");
                                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax43) + 1) & 2) {
                                    __asm__("fchs ");
                                }
                                __asm__("fld st2");
                                __asm__("fsub st0, st3");
                                __asm__("fxch st0, st3");
                                __asm__("fucom st0");
                                ax45 = fpu_status_word46;
                                if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax45) + 1)) 
                                    goto addr_8054116_64; else 
                                    goto addr_8054048_65;
                            }
                        }
                    }
                }
            } else {
                __asm__("fstp st0");
                __asm__("fstp st4");
                __asm__("fstp st2");
                __asm__("fstp st0");
            }
        }
    }
    addr_8053dc0_9:
    __asm__("fstp qword [ecx]");
    __asm__("fstp qword [ecx+0x8]");
    return a1;
    addr_8054116_64:
    __asm__("fstp st3");
    __asm__("fxch st0, st1");
    __asm__("fxch st0, st2");
    addr_805412a_67:
    __asm__("fldz ");
    __asm__("fxch st0, st3");
    __asm__("fxch st0, st2");
    __asm__("fxch st0, st1");
    addr_8054062_68:
    __asm__("fxam ");
    ax47 = fpu_status_word48;
    __asm__("fstp st0");
    __asm__("fxch st0, st2");
    __asm__("fabs ");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax47) + 1) & 2) {
        __asm__("fchs ");
    }
    __asm__("fld st3");
    __asm__("fmul st0, st3");
    __asm__("fld st2");
    __asm__("fmul st0, st2");
    __asm__("faddp st1, st0");
    __asm__("fldz ");
    __asm__("fmul st1, st0");
    __asm__("fxch st0, st4");
    __asm__("fmulp st3, st0");
    __asm__("fxch st0, st4");
    __asm__("fmulp st1, st0");
    __asm__("fsubp st1, st0");
    __asm__("fmulp st1, st0");
    __asm__("fxch st0, st1");
    goto addr_8053dc0_9;
    addr_8054048_65:
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax45) + 1)) {
        __asm__("fstp st3");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        goto addr_805412a_67;
    } else {
        __asm__("fxch st0, st3");
        __asm__("fucomp st0");
        ax49 = fpu_status_word50;
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax49) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax49) + 1)) {
            __asm__("fld1 ");
            __asm__("fxch st0, st3");
            goto addr_8054062_68;
        } else {
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            goto addr_805412a_67;
        }
    }
    addr_8054140_41:
    __asm__("fstp st3");
    __asm__("fxch st0, st1");
    __asm__("fxch st0, st2");
    addr_8054154_75:
    __asm__("fldz ");
    __asm__("fxch st0, st3");
    __asm__("fxch st0, st2");
    __asm__("fxch st0, st1");
    addr_8053f12_76:
    __asm__("fxam ");
    ax51 = fpu_status_word52;
    __asm__("fstp st0");
    __asm__("fxch st0, st2");
    __asm__("fabs ");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax51) + 1) & 2) {
        __asm__("fchs ");
    }
    __asm__("fld st2");
    __asm__("fmul st0, st4");
    __asm__("fld st1");
    __asm__("fmul st0, st3");
    __asm__("faddp st1, st0");
    __asm__("fld dword [ebx+0xffffe5e8]");
    __asm__("fmul st1, st0");
    __asm__("fxch st0, st2");
    __asm__("fmulp st5, st0");
    __asm__("fxch st0, st3");
    __asm__("fmulp st2, st0");
    __asm__("fxch st0, st3");
    __asm__("fsubrp st1, st0");
    __asm__("fmulp st2, st0");
    goto addr_8053dc0_9;
    addr_8053ef2_42:
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax28) + 1)) {
        __asm__("fstp st3");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
        goto addr_8054154_75;
    } else {
        __asm__("fxch st0, st3");
        __asm__("fucomp st0");
        ax53 = fpu_status_word54;
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax53) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax53) + 1)) {
            __asm__("fld1 ");
            __asm__("fxch st0, st3");
            goto addr_8053f12_76;
        } else {
            __asm__("fxch st0, st1");
            __asm__("fxch st0, st2");
            goto addr_8054154_75;
        }
    }
    addr_80540c9_20:
    __asm__("fxch st0, st5");
    __asm__("fucom st0");
    ax55 = fpu_status_word56;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax55) + 1)) {
        __asm__("fxch st0, st4");
    } else {
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax55) + 1)) {
            __asm__("fxch st0, st4");
        } else {
            __asm__("fstp st5");
            __asm__("fstp st0");
            __asm__("fstp st1");
            goto addr_80540f0_87;
        }
    }
    __asm__("fucom st0");
    ax57 = fpu_status_word58;
    if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax57) + 1) || *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax57) + 1)) {
        __asm__("fld st4");
        __asm__("fsub st0, st5");
        __asm__("fstp qword [ebp-0x10]");
        __asm__("fld st2");
        __asm__("fsub st0, st3");
        __asm__("fxch st0, st4");
        __asm__("fxch st0, st5");
        __asm__("fxch st0, st6");
        __asm__("fxch st0, st2");
        __asm__("fxch st0, st3");
        goto addr_8053fa3_28;
    } else {
        __asm__("fstp st3");
        __asm__("fstp st0");
        __asm__("fstp st3");
        __asm__("fxch st0, st1");
        __asm__("fxch st0, st2");
    }
    addr_80540f0_87:
    __asm__("fxam ");
    ax59 = fpu_status_word60;
    __asm__("fstp st0");
    __asm__("fld dword [ebx+0xffffe5e8]");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax59) + 1) & 2) {
        __asm__("fstp st0");
        __asm__("fld dword [ebx+0xffffe5ec]");
    }
    __asm__("fld st0");
    __asm__("fmulp st3, st0");
    __asm__("fmulp st1, st0");
    __asm__("fxch st0, st1");
    goto addr_8053dc0_9;
}

struct s134 {
    void** f0;
    void** f4;
};

int32_t quantum_prob(void** a1, void** a2, void** a3);

void quantum_rk4(void** a1, void** a2, uint32_t a3, int32_t a4, int32_t a5, void** a6) {
    void* ebp7;
    void** v8;
    void** v9;
    void** v10;
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
    int32_t v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    int32_t v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    int32_t v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    struct s134* edx50;
    void** v51;
    void** v52;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __asm__("fldz ");
    __asm__("fstp qword [ebp-0x20]");
    v8 = *reinterpret_cast<void***>(a1 + 4);
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    v9 = *reinterpret_cast<void***>(a1 + 2);
    *reinterpret_cast<void***>(a1 + 2) = reinterpret_cast<void**>(0);
    __asm__("fld qword [ebp-0x70]");
    __asm__("fstp qword [esp+0x8]");
    quantum_matrix_qureg(reinterpret_cast<int32_t>(ebp7) - 0x98, a6, v10, v11, a1);
    __asm__("fld qword [ebp-0x78]");
    __asm__("fldz ");
    __asm__("fld1 ");
    __asm__("fchs ");
    __asm__("fstp qword [esp+0x1c]");
    __asm__("fldz ");
    __asm__("fstp qword [esp+0x14]");
    __asm__("fstp qword [esp+0xc]");
    __asm__("fstp qword [esp+0x4]");
    __muldc3(reinterpret_cast<int32_t>(ebp7) - 0xa8, a6, v12);
    __asm__("fld qword [ebp+0xffffff58]");
    __asm__("fld qword [ebp+0xffffff60]");
    __asm__("fldz ");
    __asm__("fstp qword [esp+0x1c]");
    __asm__("fld qword [0x8054430]");
    __asm__("fstp qword [esp+0x14]");
    __asm__("fstp qword [esp+0xc]");
    __asm__("fstp qword [esp+0x4]");
    __divdc3(reinterpret_cast<int32_t>(ebp7) - 0xa8, a6, v13);
    __asm__("fld qword [ebp+0xffffff58]");
    __asm__("fld qword [ebp+0xffffff60]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp+0xffffff54]");
    __asm__("fld dword [ebp+0xffffff54]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp+0xffffff54]");
    __asm__("fld dword [ebp+0xffffff54]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp+0xffffff44]");
    __asm__("fstp dword [ebp+0xffffff44]");
    quantum_scalar_qureg(v14, v15, reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    quantum_vectoradd(reinterpret_cast<int32_t>(ebp7) - 0x98, a1, reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    quantum_scalar_qureg(0x3eaaaaab, 0, reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    v16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    quantum_vectoradd(reinterpret_cast<int32_t>(ebp7) - 0x98, a1, v16);
    v17 = v18;
    v19 = v20;
    v21 = v22;
    quantum_delete_qureg(reinterpret_cast<int32_t>(ebp7) + 0xffffffcc, a1, v16, v23, a1);
    __asm__("fld qword [ebp-0x78]");
    __asm__("fld qword [0x8054430]");
    __asm__("fdivp st1, st0");
    __asm__("fadd qword [ebp-0x70]");
    v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffa4);
    __asm__("fstp qword [esp+0x8]");
    quantum_matrix_qureg(reinterpret_cast<int32_t>(ebp7) - 0x98, a6, v16, v25, v24);
    quantum_delete_qureg(reinterpret_cast<int32_t>(ebp7) + 0xffffffa4, a6, v16, v26, v24);
    __asm__("fld qword [ebp-0x78]");
    __asm__("fldz ");
    __asm__("fld1 ");
    __asm__("fchs ");
    __asm__("fstp qword [esp+0x1c]");
    __asm__("fldz ");
    __asm__("fstp qword [esp+0x14]");
    __asm__("fstp qword [esp+0xc]");
    __asm__("fstp qword [esp+0x4]");
    __muldc3(reinterpret_cast<int32_t>(ebp7) - 0xa8, a6, v16);
    __asm__("fld qword [ebp+0xffffff58]");
    __asm__("fld qword [ebp+0xffffff60]");
    __asm__("fldz ");
    __asm__("fstp qword [esp+0x1c]");
    __asm__("fld qword [0x8054430]");
    __asm__("fstp qword [esp+0x14]");
    __asm__("fstp qword [esp+0xc]");
    __asm__("fstp qword [esp+0x4]");
    __divdc3(reinterpret_cast<int32_t>(ebp7) - 0xa8, a6, v16);
    __asm__("fld qword [ebp+0xffffff58]");
    __asm__("fld qword [ebp+0xffffff60]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp+0xffffff54]");
    __asm__("fld dword [ebp+0xffffff54]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp+0xffffff54]");
    __asm__("fld dword [ebp+0xffffff54]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp+0xffffff44]");
    __asm__("fstp dword [ebp+0xffffff44]");
    quantum_scalar_qureg(v27, v28, reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    quantum_vectoradd(reinterpret_cast<int32_t>(ebp7) - 0x98, a1, reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    v29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    quantum_scalar_qureg(0x3f2aaaab, 0, v29);
    v30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    quantum_vectoradd_inplace(reinterpret_cast<int32_t>(ebp7) + 0xffffffb8, v30, v29);
    quantum_delete_qureg(reinterpret_cast<int32_t>(ebp7) + 0xffffffcc, v30, v29, v31, v24);
    __asm__("fld qword [ebp-0x78]");
    __asm__("fld qword [0x8054430]");
    __asm__("fdivp st1, st0");
    __asm__("fadd qword [ebp-0x70]");
    v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffa4);
    __asm__("fstp qword [esp+0x8]");
    quantum_matrix_qureg(reinterpret_cast<int32_t>(ebp7) - 0x98, a6, v29, v33, v32);
    quantum_delete_qureg(reinterpret_cast<int32_t>(ebp7) + 0xffffffa4, a6, v29, v34, v32);
    __asm__("fld qword [ebp-0x78]");
    __asm__("fldz ");
    __asm__("fld1 ");
    __asm__("fchs ");
    __asm__("fstp qword [esp+0x1c]");
    __asm__("fldz ");
    __asm__("fstp qword [esp+0x14]");
    __asm__("fstp qword [esp+0xc]");
    __asm__("fstp qword [esp+0x4]");
    __muldc3(reinterpret_cast<int32_t>(ebp7) - 0xa8, a6, v29);
    __asm__("fld qword [ebp+0xffffff58]");
    __asm__("fld qword [ebp+0xffffff60]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp+0xffffff54]");
    __asm__("fld dword [ebp+0xffffff54]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp+0xffffff54]");
    __asm__("fld dword [ebp+0xffffff54]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp+0xffffff44]");
    __asm__("fstp dword [ebp+0xffffff44]");
    quantum_scalar_qureg(v35, v36, reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    quantum_vectoradd(reinterpret_cast<int32_t>(ebp7) - 0x98, a1, reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    v37 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    quantum_scalar_qureg(0x3eaaaaab, 0, v37);
    v38 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    quantum_vectoradd_inplace(reinterpret_cast<int32_t>(ebp7) + 0xffffffb8, v38, v37);
    quantum_delete_qureg(reinterpret_cast<int32_t>(ebp7) + 0xffffffcc, v38, v37, v39, v32);
    __asm__("fld qword [ebp-0x70]");
    __asm__("fadd qword [ebp-0x78]");
    v40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffa4);
    __asm__("fstp qword [esp+0x8]");
    quantum_matrix_qureg(reinterpret_cast<int32_t>(ebp7) - 0x98, a6, v37, v41, v40);
    quantum_delete_qureg(reinterpret_cast<int32_t>(ebp7) + 0xffffffa4, a6, v37, v42, v40);
    __asm__("fld qword [ebp-0x78]");
    __asm__("fldz ");
    __asm__("fld1 ");
    __asm__("fchs ");
    __asm__("fstp qword [esp+0x1c]");
    __asm__("fldz ");
    __asm__("fstp qword [esp+0x14]");
    __asm__("fstp qword [esp+0xc]");
    __asm__("fstp qword [esp+0x4]");
    __muldc3(reinterpret_cast<int32_t>(ebp7) - 0xa8, a6, v37);
    __asm__("fld qword [ebp+0xffffff58]");
    __asm__("fld qword [ebp+0xffffff60]");
    __asm__("fldz ");
    __asm__("fstp qword [esp+0x1c]");
    __asm__("fld qword [0x8054438]");
    __asm__("fstp qword [esp+0x14]");
    __asm__("fstp qword [esp+0xc]");
    __asm__("fstp qword [esp+0x4]");
    __divdc3(reinterpret_cast<int32_t>(ebp7) - 0xa8, a6, v37);
    __asm__("fld qword [ebp+0xffffff58]");
    __asm__("fld qword [ebp+0xffffff60]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp+0xffffff54]");
    __asm__("fld dword [ebp+0xffffff54]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp+0xffffff54]");
    __asm__("fld dword [ebp+0xffffff54]");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [ebp+0xffffff44]");
    __asm__("fstp dword [ebp+0xffffff44]");
    v43 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    quantum_scalar_qureg(v44, v45, v43);
    v46 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffcc);
    quantum_vectoradd_inplace(reinterpret_cast<int32_t>(ebp7) + 0xffffffb8, v46, v43);
    quantum_delete_qureg(reinterpret_cast<int32_t>(ebp7) + 0xffffffcc, v46, v43, v47, v40);
    quantum_delete_qureg(a1, v46, v43, v48, v40);
    v49 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(v19) > reinterpret_cast<int32_t>(v49)) {
        edx50 = reinterpret_cast<struct s134*>(reinterpret_cast<uint32_t>(v21) + (reinterpret_cast<uint32_t>(v49) << 4));
        v51 = edx50->f0;
        v52 = edx50->f4;
        quantum_prob(v51, v52, v43);
        __asm__("fld qword [ebp-0x20]");
        __asm__("faddp st1, st0");
        __asm__("fstp qword [ebp-0x20]");
        v49 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v49) + 1);
    }
    *reinterpret_cast<void***>(a1) = v17;
    *reinterpret_cast<void***>(a1 + 1) = v19;
    *reinterpret_cast<void***>(a1 + 2) = v9;
    *reinterpret_cast<void***>(a1 + 3) = v21;
    *reinterpret_cast<void***>(a1 + 4) = v8;
    return;
}

void** quantum_imag(void** a1, void** a2, uint32_t a3) {
    __asm__("fld dword [ebp-0x14]");
    return a2;
}

int32_t getenv = 0x804887a;

void** fun_8048874(void** a1, void** a2) {
    goto getenv;
}

int32_t malloc = 0x80489ba;

void** fun_80489b4(uint32_t a1) {
    goto malloc;
}

void** quantum_imag(void** a1, void** a2) {
    __asm__("fld dword [ebp-0x14]");
    return a2;
}

void** quantum_real(void** a1, void** a2) {
    __asm__("fld dword [ebp-0x14]");
    return a1;
}

struct s135 {
    signed char[8] pad8;
    uint32_t f8;
    uint32_t fc;
};

void** quantum_get_state(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    uint32_t eax10;
    uint32_t v11;
    struct s135* eax12;
    void** ecx13;
    void** v14;

    v8 = a1;
    v9 = a2;
    if (a5) {
        eax10 = quantum_hash64(v8, v9, a5);
        v11 = eax10;
        while (*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(a7) + (v11 << 2))) {
            eax12 = reinterpret_cast<struct s135*>(reinterpret_cast<uint32_t>(a6) + -(1 - reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(a7) + (v11 << 2))) << 4));
            if (!(eax12->f8 ^ reinterpret_cast<uint32_t>(v8) | eax12->fc ^ reinterpret_cast<uint32_t>(v9))) 
                goto addr_8051cd4_5;
            ++v11;
            ecx13 = a5;
            if (1 << *reinterpret_cast<unsigned char*>(&ecx13) != v11) 
                continue;
            v11 = 0;
        }
    } else {
        v14 = v8;
        goto addr_8051d1d_9;
    }
    v14 = reinterpret_cast<void**>(0xffffffff);
    addr_8051d1d_9:
    return v14;
    addr_8051cd4_5:
    v14 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(a7) + (v11 << 2))) - 1);
    goto addr_8051d1d_9;
}

struct s136 {
    void** f0;
    signed char[4] pad8;
    void** f8;
    void** fc;
};

struct s137 {
    void** f0;
    void** f4;
};

struct s138 {
    void** f0;
    void** f4;
};

void** quantum_dot_product_noconj(struct s108* a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    int32_t v7;
    struct s136* eax8;
    void** ecx9;
    void** ebx10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** eax16;
    struct s137* eax17;
    struct s138* eax18;
    void** edx19;
    void** esi20;
    void** ecx21;
    void** v22;

    v5 = reinterpret_cast<void**>(0);
    if (*reinterpret_cast<void***>(a2 + 2)) {
        quantum_reconstruct_hash(a2, v6);
    }
    v7 = 0;
    while (a1->f4 > v7) {
        eax8 = reinterpret_cast<struct s136*>(reinterpret_cast<int32_t>(a1->fc) + (v7 << 4));
        ecx9 = eax8->f8;
        ebx10 = eax8->fc;
        v11 = *reinterpret_cast<void***>(a2);
        v12 = *reinterpret_cast<void***>(a2 + 1);
        v13 = *reinterpret_cast<void***>(a2 + 2);
        v14 = *reinterpret_cast<void***>(a2 + 3);
        v15 = *reinterpret_cast<void***>(a2 + 4);
        eax16 = quantum_get_state(ecx9, ebx10, v11, v12, v13, v14, v15);
        if (reinterpret_cast<int32_t>(eax16) >= reinterpret_cast<int32_t>(0)) {
            eax17 = reinterpret_cast<struct s137*>(reinterpret_cast<int32_t>(a1->fc) + (v7 << 4));
            eax18 = reinterpret_cast<struct s138*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(eax16) << 4));
            edx19 = eax18->f0;
            esi20 = eax17->f0;
            ecx21 = eax17->f4;
            v22 = eax18->f4;
            __mulsc3(ecx21, esi20, ecx21, edx19, v22, v13, v14, v15);
            __asm__("fld dword [ebp-0x1c]");
            __asm__("fld dword [ebp-0x1c]");
            __asm__("fld dword [ebp-0x18]");
            __asm__("fld dword [ebp-0x14]");
            __asm__("fxch st0, st1");
            __asm__("faddp st3, st0");
            __asm__("faddp st1, st0");
            __asm__("fxch st0, st1");
            __asm__("fstp dword [ebp-0x1c]");
            __asm__("fstp dword [ebp-0x1c]");
            v5 = edx19;
        }
        ++v7;
    }
    return v5;
}

int32_t time = 0x80489aa;

int32_t fun_80489a4(int32_t a1) {
    goto time;
}

int32_t srand = 0x804883a;

void fun_8048834(int32_t a1) {
    goto srand;
}

void* quantum_ipow(void** a1, int32_t a2, void** a3, void** a4, void** a5) {
    void* v6;
    int32_t v7;

    v6 = reinterpret_cast<void*>(1);
    v7 = 0;
    while (v7 < a2) {
        v6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v6) * reinterpret_cast<uint32_t>(a1));
        ++v7;
    }
    return v6;
}

int32_t __do_global_dtors_aux();

struct s139 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8054258(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    struct s139* ebp5;

    __do_global_dtors_aux();
    goto ebp5->f4;
}

struct s140 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s141 {
    uint32_t f0;
    void*** f4;
    void*** f8;
};

struct s142 {
    void** f0;
    void** f4;
    void** f8;
    void** fc;
    void** f10;
};

struct s143 {
    void** f0;
    void** f4;
    void** f8;
    void** fc;
    void** f10;
};

struct s144 {
    void** f0;
    void** f4;
};

struct s145 {
    void** f0;
    void** f4;
};

struct s140* quantum_density_matrix(struct s140* a1, struct s141* a2) {
    void** ecx3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    uint32_t v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    struct s142* edx21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    struct s143* edx28;
    void** eax29;
    struct s144* edi30;
    void*** v31;
    int32_t v32;
    void** ebx33;
    struct s145* eax34;
    void** edx35;
    void** v36;
    void** eax37;
    void** edx38;
    void** v39;
    void** v40;
    void** eax41;
    int32_t v42;
    int32_t v43;
    int32_t v44;

    ecx3 = *a2->f8;
    v4 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx3));
    if (reinterpret_cast<int32_t>(v4) < reinterpret_cast<int32_t>(0)) {
        quantum_error(3, v5, v6, v7, v8, v9, v10);
    }
    v11 = v4;
    v12 = v4;
    quantum_new_matrix(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 48, v12, v11);
    v13 = 0;
    while (reinterpret_cast<int32_t>(a2->f0) > reinterpret_cast<int32_t>(v13)) {
        v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(a2->f8) + ((v13 << 2) + v13 << 2));
        quantum_reconstruct_hash(v14, v12, v11, v15, v16, v17, v18);
        v19 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(v19) < reinterpret_cast<int32_t>(v4)) {
            v20 = reinterpret_cast<void**>(0);
            while (reinterpret_cast<int32_t>(v20) < reinterpret_cast<int32_t>(v4)) {
                edx21 = reinterpret_cast<struct s142*>(reinterpret_cast<int32_t>(a2->f8) + ((v13 << 2) + v13 << 2));
                v22 = edx21->f0;
                v23 = edx21->f4;
                v24 = edx21->f8;
                v25 = edx21->fc;
                v26 = edx21->f10;
                eax27 = quantum_get_state(v19, reinterpret_cast<int32_t>(v19) >> 31, v22, v23, v24, v25, v26);
                edx28 = reinterpret_cast<struct s143*>(reinterpret_cast<int32_t>(a2->f8) + ((v13 << 2) + v13 << 2));
                v11 = edx28->f0;
                v15 = edx28->f4;
                v16 = edx28->f8;
                v17 = edx28->fc;
                v18 = edx28->f10;
                v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v20) >> 31);
                eax29 = quantum_get_state(v20, v12, v11, v15, v16, v17, v18);
                if (reinterpret_cast<int32_t>(eax27) >= reinterpret_cast<int32_t>(0) && reinterpret_cast<int32_t>(eax29) >= reinterpret_cast<int32_t>(0)) {
                    edi30 = reinterpret_cast<struct s144*>(reinterpret_cast<int32_t>(v31) + (v32 * reinterpret_cast<uint32_t>(v20) + reinterpret_cast<uint32_t>(v19) << 3));
                    __asm__("fld dword [eax]");
                    __asm__("fstp dword [ebp-0x44]");
                    __asm__("fld dword [eax+0x4]");
                    __asm__("fstp dword [ebp-0x48]");
                    ebx33 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(a2->f4) + (v13 << 2));
                    eax34 = reinterpret_cast<struct s145*>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(reinterpret_cast<int32_t>(a2->f8) + ((v13 << 2) + v13 << 2) + 12)) + (reinterpret_cast<uint32_t>(eax29) << 4));
                    edx35 = eax34->f0;
                    v36 = eax34->f4;
                    eax37 = __mulsc3(0, ebx33, 0, edx35, v36, v16, v17, v18);
                    edx38 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(reinterpret_cast<int32_t>(a2->f8) + ((v13 << 2) + v13 << 2) + 12)) + (reinterpret_cast<uint32_t>(eax27) << 4));
                    v39 = *reinterpret_cast<void***>(edx38);
                    v40 = *reinterpret_cast<void***>(edx38 + 1);
                    eax41 = quantum_conj(v39, v40, edx35, v36, v16, v17, v18);
                    v15 = edx38;
                    v11 = eax41;
                    v12 = edx35;
                    __mulsc3(edx38, eax37, v12, v11, v15, v16, v17, v18);
                    __asm__("fld dword [ebp-0x44]");
                    __asm__("fld dword [ebp-0x48]");
                    __asm__("fld dword [ebp-0x4c]");
                    __asm__("fld dword [ebp-0x4c]");
                    __asm__("fxch st0, st1");
                    __asm__("faddp st3, st0");
                    __asm__("faddp st1, st0");
                    __asm__("fxch st0, st1");
                    __asm__("fstp dword [ebp-0x4c]");
                    __asm__("fstp dword [ebp-0x4c]");
                    edi30->f0 = eax41;
                    edi30->f4 = eax41;
                }
                v20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v20) + 1);
            }
            v19 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v19) + 1);
        }
        ++v13;
    }
    a1->f0 = v42;
    a1->f4 = v43;
    a1->f8 = v44;
    return a1;
}

void** quantum_prob_inline(void** a1, void** a2);

int32_t quantum_prob(void** a1, void** a2, void** a3) {
    int32_t v4;

    quantum_prob_inline(a1, a2);
    __asm__("fstp dword [ebp-0x4]");
    __asm__("fld dword [ebp-0x4]");
    return v4;
}

void** quantum_real(void** a1, void** a2) {
    __asm__("fld dword [ebp-0x14]");
    return a1;
}

void** quantum_imag(void** a1, void** a2) {
    __asm__("fld dword [ebp-0x14]");
    return a2;
}

void add_mod_n(void** a1, void* a2, void** a3, void** a4) {
    addn(a1, a2, a3, a4);
    addn_inv(a1, a2, a3, a4);
    return;
}

int32_t feof = 0x804895a;

int32_t fun_8048954(void** a1, void** a2, void** a3, void** a4, void** a5) {
    goto feof;
}

/* completed.6635 */
signed char completed_6635 = 0;

/* dtor_idx.6637 */
uint32_t dtor_idx_6637 = 0;

int32_t __do_global_dtors_aux() {
    int1_t zf1;
    uint32_t edx2;
    int32_t eax3;
    uint32_t eax4;

    zf1 = completed_6635 == 0;
    if (zf1) {
        edx2 = dtor_idx_6637;
        eax3 = 1;
        if (edx2 < 0) {
            do {
                eax4 = edx2 + 1;
                dtor_idx_6637 = eax4;
                eax3 = reinterpret_cast<int32_t>(*reinterpret_cast<int32_t*>(eax4 * 4 + 0x8055f08)());
                edx2 = dtor_idx_6637;
            } while (edx2 < 0);
        }
        completed_6635 = 1;
    }
    return eax3;
}

void** quantum_prob_inline(void** a1, void** a2) {
    void** eax3;

    quantum_real(a1, a2);
    __asm__("fstp dword [ebp-0x4]");
    eax3 = quantum_imag(a1, a2);
    __asm__("fstp dword [ebp-0x8]");
    __asm__("fld dword [ebp-0x4]");
    __asm__("fmul dword [ebp-0x4]");
    __asm__("fld dword [ebp-0x8]");
    __asm__("fmul dword [ebp-0x8]");
    __asm__("faddp st1, st0");
    return eax3;
}

struct s146 {
    signed char[4] pad4;
    void** f4;
    void** f8;
};

int32_t main(int32_t a1, struct s146* a2);

void __libc_csu_fini();

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_80488b4(main, __return_address(), esp1, 0x8054180, __libc_csu_fini, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

void fun_8048ab6() {
}

struct s2* quantum_qureg2density_op(struct s2* a1, struct s3* a2) {
    quantum_new_density_op(a1, 1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8, a2);
    return a1;
}

struct s147 {
    void** f0;
    signed char[4] pad8;
    void*** f8;
};

struct s148 {
    void** f0;
    void** f4;
    void** f8;
    void** fc;
    void** f10;
};

struct s149 {
    signed char[8] pad8;
    void** f8;
    void** fc;
};

struct s150 {
    void** f0;
    void** f4;
};

int32_t quantum_purity(struct s147* a1) {
    void** v2;
    void** v3;
    void** v4;
    void** eax5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** v13;
    void** v14;
    int32_t v15;
    struct s148* ecx16;
    struct s149* eax17;
    void** ebx18;
    void** esi19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    struct s150* eax25;
    void** edx26;
    void** v27;
    void** eax28;
    void** edx29;
    void** v30;
    void** v31;
    void** eax32;
    void** eax33;

    v2 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(a1->f0) > reinterpret_cast<int32_t>(v2)) {
        __asm__("fld dword [eax]");
        __asm__("fld dword [eax]");
        __asm__("fmulp st1, st0");
        __asm__("fld dword [ebp-0x20]");
        __asm__("faddp st1, st0");
        __asm__("fstp dword [ebp-0x20]");
        v2 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v2) + 1);
    }
    v3 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(a1->f0) > reinterpret_cast<int32_t>(v3)) {
        v4 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(v4) < reinterpret_cast<int32_t>(v3)) {
            eax5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(a1->f8) + ((reinterpret_cast<uint32_t>(v3) << 2) + reinterpret_cast<uint32_t>(v3) << 2));
            v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(a1->f8) + ((reinterpret_cast<uint32_t>(v4) << 2) + reinterpret_cast<uint32_t>(v4) << 2));
            eax12 = quantum_dot_product(eax5, v6, v7, v8, v9, v10, v11);
            v13 = eax12;
            v14 = v3;
            v15 = 0;
            while (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(a1->f8) + ((reinterpret_cast<uint32_t>(v3) << 2) + reinterpret_cast<uint32_t>(v3) << 2) + 4) > v15) {
                ecx16 = reinterpret_cast<struct s148*>(reinterpret_cast<int32_t>(a1->f8) + ((reinterpret_cast<uint32_t>(v4) << 2) + reinterpret_cast<uint32_t>(v4) << 2));
                eax17 = reinterpret_cast<struct s149*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(a1->f8) + ((reinterpret_cast<uint32_t>(v3) << 2) + reinterpret_cast<uint32_t>(v3) << 2) + 12)) + (v15 << 4));
                ebx18 = eax17->f8;
                esi19 = eax17->fc;
                v7 = ecx16->f0;
                v8 = ecx16->f4;
                v9 = ecx16->f8;
                v10 = ecx16->fc;
                v11 = ecx16->f10;
                eax20 = quantum_get_state(ebx18, esi19, v7, v8, v9, v10, v11);
                if (reinterpret_cast<int32_t>(eax20) < reinterpret_cast<int32_t>(0)) {
                    v21 = reinterpret_cast<void**>(0);
                    v22 = reinterpret_cast<void**>(0);
                } else {
                    __asm__("fld dword [eax]");
                    __asm__("fld dword [eax]");
                    __asm__("fmulp st1, st0");
                    __asm__("fstp dword [ebp-0x40]");
                    eax24 = __mulsc3(0, v23, 0, v13, v14, v9, v10, v11);
                    eax25 = reinterpret_cast<struct s150*>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(reinterpret_cast<int32_t>(a1->f8) + ((reinterpret_cast<uint32_t>(v3) << 2) + reinterpret_cast<uint32_t>(v3) << 2) + 12)) + (v15 << 4));
                    edx26 = eax25->f0;
                    v27 = eax25->f4;
                    eax28 = __mulsc3(v13, eax24, v13, edx26, v27, v9, v10, v11);
                    edx29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(reinterpret_cast<int32_t>(a1->f8) + ((reinterpret_cast<uint32_t>(v4) << 2) + reinterpret_cast<uint32_t>(v4) << 2) + 12)) + (reinterpret_cast<uint32_t>(eax20) << 4));
                    v30 = *reinterpret_cast<void***>(edx29);
                    v31 = *reinterpret_cast<void***>(edx29 + 1);
                    eax32 = quantum_conj(v30, v31, edx26, v27, v9, v10, v11);
                    v8 = edx29;
                    v7 = eax32;
                    eax33 = __mulsc3(edx29, eax28, edx26, v7, v8, v9, v10, v11);
                    v21 = eax33;
                    v22 = eax32;
                }
                quantum_real(v21, v22, v7, v8, v9, v10, v11);
                __asm__("fld st0");
                __asm__("faddp st1, st0");
                __asm__("fld dword [ebp-0x20]");
                __asm__("faddp st1, st0");
                __asm__("fstp dword [ebp-0x20]");
                ++v15;
            }
            v4 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v4) + 1);
        }
        v3 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v3) + 1);
    }
    __asm__("fld dword [ebp-0x40]");
    return 0;
}

void quantum_walsh(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;

    v3 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(v3) < reinterpret_cast<int32_t>(a1)) {
        quantum_hadamard(v3, a2, v4, v5, v6);
        v3 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v3) + 1);
    }
    return;
}

void quantum_qft_inv(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;

    v3 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(v3) < reinterpret_cast<int32_t>(a1)) {
        quantum_hadamard(v3, a2, v4, v5, v6);
        v7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v3) + 1);
        while (reinterpret_cast<int32_t>(v7) < reinterpret_cast<int32_t>(a1)) {
            v4 = a2;
            quantum_cond_phase_inv(v7, v3, v4);
            v7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v7) + 1);
        }
        v3 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v3) + 1);
    }
    return;
}

void quantum_rk4a(void** a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, void** a7) {
    void* ebp8;
    void** v9;
    void** v10;
    void** v11;
    uint32_t v12;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    void** v17;
    int32_t v18;
    int32_t v19;
    void** v20;
    void** eax21;
    void* v22;
    void** eax23;
    void* v24;
    int16_t ax25;
    int16_t fpu_status_word26;
    void** eax27;
    void* v28;
    void** eax29;
    void* v30;
    void** eax31;
    void* v32;
    void** eax33;
    void* v34;
    int16_t ax35;
    int16_t fpu_status_word36;
    int16_t ax37;
    int16_t fpu_status_word38;
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
    void** eax49;
    uint32_t v50;
    void** v51;
    void** eax52;
    int16_t ax53;
    int16_t fpu_status_word54;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v9 = *reinterpret_cast<void***>(a1 + 4);
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    v10 = *reinterpret_cast<void***>(a1 + 2);
    *reinterpret_cast<void***>(a1 + 2) = reinterpret_cast<void**>(0);
    quantum_copy_qureg(a1, reinterpret_cast<int32_t>(ebp8) + 0xffffffa8);
    v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xffffffbc);
    quantum_copy_qureg(a1, v11);
    do {
        __asm__("fld qword [eax]");
        __asm__("fstp qword [esp+0xc]");
        __asm__("fld qword [ebp-0x80]");
        __asm__("fstp qword [esp+0x4]");
        quantum_rk4(a1, v11, v12, v13, v14, a7);
        __asm__("fld qword [eax]");
        __asm__("fld qword [0x8054430]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [esp+0xc]");
        __asm__("fld qword [ebp-0x80]");
        __asm__("fstp qword [esp+0x4]");
        quantum_rk4(reinterpret_cast<int32_t>(ebp8) + 0xffffffbc, v11, v12, v15, v16, a7);
        __asm__("fld qword [eax]");
        __asm__("fld qword [0x8054430]");
        __asm__("fdivp st1, st0");
        __asm__("fstp qword [esp+0xc]");
        __asm__("fld qword [ebp-0x80]");
        __asm__("fstp qword [esp+0x4]");
        v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xffffffbc);
        quantum_rk4(v17, v11, v12, v18, v19, a7);
        __asm__("fldz ");
        __asm__("fstp qword [ebp-0x20]");
        v20 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a1 + 1)) > reinterpret_cast<int32_t>(v20)) {
            eax21 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v22) + (reinterpret_cast<uint32_t>(v20) << 4) + 4);
            __asm__("fld dword [ebp+0xffffff54]");
            __asm__("fld dword [ebp+0xffffff54]");
            __asm__("fld dword [ebp+0xffffff54]");
            __asm__("fld dword [ebp+0xffffff54]");
            __asm__("fxch st0, st1");
            __asm__("fsubp st3, st0");
            __asm__("fsubp st1, st0");
            __asm__("fxch st0, st1");
            __asm__("fstp dword [ebp+0xffffff54]");
            __asm__("fstp dword [ebp+0xffffff54]");
            quantum_real(eax21, eax21, v12);
            __asm__("fstp dword [ebp+0xffffff64]");
            eax23 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v24) + (reinterpret_cast<uint32_t>(v20) << 4) + 4);
            __asm__("fld dword [ebp+0xffffff54]");
            __asm__("fld dword [ebp+0xffffff54]");
            __asm__("fld dword [ebp+0xffffff54]");
            __asm__("fld dword [ebp+0xffffff54]");
            __asm__("fxch st0, st1");
            __asm__("fsubp st3, st0");
            __asm__("fsubp st1, st0");
            __asm__("fxch st0, st1");
            __asm__("fstp dword [ebp+0xffffff54]");
            __asm__("fstp dword [ebp+0xffffff54]");
            quantum_imag(eax23, eax23, v12);
            __asm__("fld dword [ebp+0xffffff64]");
            __asm__("fucompp ");
            ax25 = fpu_status_word26;
            if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax25) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax25) + 1)) {
                eax27 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v28) + (reinterpret_cast<uint32_t>(v20) << 4) + 4);
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fxch st0, st1");
                __asm__("fsubp st3, st0");
                __asm__("fsubp st1, st0");
                __asm__("fxch st0, st1");
                __asm__("fstp dword [ebp+0xffffff54]");
                __asm__("fstp dword [ebp+0xffffff54]");
                quantum_imag(eax27, eax27, v12);
                __asm__("fld st0");
                __asm__("faddp st1, st0");
                __asm__("fstp dword [ebp+0xffffff6c]");
                eax29 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v30) + (reinterpret_cast<uint32_t>(v20) << 4) + 4);
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fxch st0, st1");
                __asm__("faddp st3, st0");
                __asm__("faddp st1, st0");
                __asm__("fxch st0, st1");
                __asm__("fstp dword [ebp+0xffffff54]");
                __asm__("fstp dword [ebp+0xffffff54]");
                v17 = eax29;
                v11 = eax29;
                quantum_imag(v17, v11, v12);
                __asm__("fdivr dword [ebp+0xffffff6c]");
                __asm__("fstp qword [ebp-0x28]");
            } else {
                eax31 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v32) + (reinterpret_cast<uint32_t>(v20) << 4) + 4);
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fxch st0, st1");
                __asm__("fsubp st3, st0");
                __asm__("fsubp st1, st0");
                __asm__("fxch st0, st1");
                __asm__("fstp dword [ebp+0xffffff54]");
                __asm__("fstp dword [ebp+0xffffff54]");
                quantum_real(eax31, eax31, v12);
                __asm__("fld st0");
                __asm__("faddp st1, st0");
                __asm__("fstp dword [ebp+0xffffff68]");
                eax33 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(v34) + (reinterpret_cast<uint32_t>(v20) << 4) + 4);
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fld dword [ebp+0xffffff54]");
                __asm__("fxch st0, st1");
                __asm__("faddp st3, st0");
                __asm__("faddp st1, st0");
                __asm__("fxch st0, st1");
                __asm__("fstp dword [ebp+0xffffff54]");
                __asm__("fstp dword [ebp+0xffffff54]");
                v17 = eax33;
                v11 = eax33;
                quantum_real(v17, v11, v12);
                __asm__("fdivr dword [ebp+0xffffff68]");
                __asm__("fstp qword [ebp-0x28]");
            }
            __asm__("fld qword [ebp-0x28]");
            __asm__("fld qword [ebp-0x20]");
            __asm__("fxch st0, st1");
            __asm__("fucompp ");
            ax35 = fpu_status_word36;
            if (!(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax35) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax35) + 1))) {
                __asm__("fld qword [ebp-0x28]");
                __asm__("fstp qword [ebp-0x20]");
            }
            v20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v20) + 1);
        }
        __asm__("fld qword [eax]");
        __asm__("fstp qword [ebp-0x30]");
        __asm__("fld qword [eax]");
        __asm__("fstp qword [ebp+0xffffff70]");
        __asm__("fld qword [ebp+0xffffff78]");
        __asm__("fdiv qword [ebp-0x20]");
        __asm__("fld qword [0x8054440]");
        __asm__("fstp qword [esp+0x8]");
        __asm__("fstp qword [esp]");
        fun_80488a4(v17, v11, v12);
        __asm__("fmul qword [ebp+0xffffff70]");
        __asm__("fstp qword [eax]");
        __asm__("fld qword [ebp-0x20]");
        __asm__("fld qword [ebp+0xffffff78]");
        __asm__("fxch st0, st1");
        __asm__("fucompp ");
        ax37 = fpu_status_word38;
        if (!(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax37) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax37) + 1))) {
            v39 = *reinterpret_cast<void***>(a1);
            v40 = *reinterpret_cast<void***>(a1 + 1);
            v41 = *reinterpret_cast<void***>(a1 + 2);
            v42 = *reinterpret_cast<void***>(a1 + 3);
            v43 = *reinterpret_cast<void***>(a1 + 4);
            *reinterpret_cast<void***>(a1) = v44;
            *reinterpret_cast<void***>(a1 + 1) = v45;
            *reinterpret_cast<void***>(a1 + 2) = v46;
            *reinterpret_cast<void***>(a1 + 3) = v47;
            *reinterpret_cast<void***>(a1 + 4) = v48;
            v44 = v39;
            v45 = v40;
            v46 = v41;
            v47 = v42;
            v48 = v43;
            eax49 = *reinterpret_cast<void***>(a1 + 3);
            v50 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 1)) << 4;
            fun_8048914(v51, eax49, v50);
            eax52 = *reinterpret_cast<void***>(a1 + 3);
            v12 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 1)) << 4;
            v11 = eax52;
            fun_8048914(v47, v11, v12);
        }
        __asm__("fld qword [ebp-0x20]");
        __asm__("fld qword [ebp+0xffffff78]");
        __asm__("fxch st0, st1");
        __asm__("fucompp ");
        ax53 = fpu_status_word54;
    } while (!reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax53) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax53) + 1)));
    *reinterpret_cast<void***>(a1 + 4) = v9;
    *reinterpret_cast<void***>(a1 + 2) = v10;
    __asm__("fld qword [ebp-0x30]");
    return;
}

struct s151 {
    void** f0;
    void** f4;
    int32_t f8;
    void** fc;
    int32_t f10;
};

struct s151* quantum_new_qureg_size(struct s151* a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** eax7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;

    eax7 = fun_8048884(a2, 16, v4, v5, v6, a3, a2);
    if (!eax7) {
        quantum_error(2, 16, v8, v9, v10, a3, a2);
    }
    quantum_memman(reinterpret_cast<uint32_t>(a2) << 4, 16, v11, v12, v13, a3, a2);
    a1->f0 = a3;
    a1->f4 = a2;
    a1->f8 = 0;
    a1->fc = eax7;
    a1->f10 = 0;
    return a1;
}

struct s152 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s153 {
    int32_t f0;
    int32_t f4;
};

struct s154 {
    int32_t f0;
    int32_t f4;
};

struct s152* quantum_qureg2matrix(struct s152* a1, int32_t a2, int32_t a3) {
    int32_t ecx4;
    int32_t v5;
    struct s153* ecx6;
    int32_t* v7;
    void* v8;
    struct s154* eax9;
    int32_t* v10;
    int32_t eax11;
    int32_t v12;
    int32_t v13;
    int32_t v14;

    ecx4 = a2;
    quantum_new_matrix(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16, 1, 1 << *reinterpret_cast<unsigned char*>(&ecx4));
    v5 = 0;
    while (a3 > v5) {
        ecx6 = reinterpret_cast<struct s153*>(reinterpret_cast<int32_t>(v7) + (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v8) + (v5 << 4) + 8) << 3));
        eax9 = reinterpret_cast<struct s154*>(reinterpret_cast<int32_t>(v10) + (v5 << 4));
        eax11 = eax9->f4;
        ecx6->f0 = eax9->f0;
        ecx6->f4 = eax11;
        ++v5;
    }
    a1->f0 = v12;
    a1->f4 = v13;
    a1->f8 = v14;
    return a1;
}

struct s155 {
    signed char[8] pad8;
    void** f8;
    void** fc;
};

void quantum_print_hash() {
    void** v1;
    int32_t ecx2;
    int32_t v3;
    struct s155* eax4;
    void* v5;
    int32_t* v6;
    void** ebx7;
    void** eax8;
    void** v9;
    void** v10;
    int32_t v11;
    void*** v12;

    v1 = reinterpret_cast<void**>(0);
    while (ecx2 = v3, reinterpret_cast<int32_t>(1 << *reinterpret_cast<unsigned char*>(&ecx2)) > reinterpret_cast<int32_t>(v1)) {
        if (v1) {
            eax4 = reinterpret_cast<struct s155*>(reinterpret_cast<int32_t>(v5) + -(1 - *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v6) + (reinterpret_cast<uint32_t>(v1) << 2)) << 4));
            ebx7 = eax4->fc;
            eax8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(v9) + (reinterpret_cast<uint32_t>(v1) << 2))) - 1);
            v10 = eax4->f8;
            fun_8048964("%i: %i %llu\n", v1, eax8, v10, ebx7, v11, v12);
        }
        v1 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v1) + 1);
    }
    return;
}

struct s156 {
    int32_t f0;
    void** f4;
    uint32_t f8;
    void** fc;
    void** f10;
};

struct s157 {
    int32_t f0;
    uint32_t f4;
    signed char[4] pad12;
    void*** fc;
};

struct s158 {
    int32_t f0;
    uint32_t f4;
    signed char[4] pad12;
    void*** fc;
};

struct s159 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s160 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s161 {
    void** f0;
    void** f4;
};

struct s162 {
    void** f0;
    void** f4;
};

struct s163 {
    void** f0;
    void** f4;
};

struct s156* quantum_kronecker(struct s156* a1, struct s157* a2, struct s158* a3) {
    int32_t v4;
    void** v5;
    uint32_t v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
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
    uint32_t ecx24;
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
    uint32_t ecx37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    uint32_t v43;
    uint32_t v44;
    void** v45;
    struct s159* eax46;
    int32_t ecx47;
    uint32_t edi48;
    uint32_t esi49;
    struct s160* eax50;
    void** edx51;
    struct s161* edi52;
    struct s162* eax53;
    struct s163* eax54;
    void** edx55;
    void** esi56;
    void** ecx57;
    void** v58;
    void** v59;
    void** v60;
    void** eax61;

    v4 = a2->f0 + a3->f0;
    v5 = reinterpret_cast<void**>(a3->f4 * a2->f4);
    v6 = a3->f4 * a2->f4 + 2;
    eax12 = fun_8048884(v5, 16, v7, v8, v9, v10, v11);
    v13 = eax12;
    if (!v13) {
        quantum_error(2, 16, v14, v15, v16, v17, v18);
    }
    quantum_memman(reinterpret_cast<uint32_t>(v5) << 4, 16, v19, v20, v21, v22, v23);
    ecx24 = v6;
    eax30 = fun_8048884(1 << *reinterpret_cast<unsigned char*>(&ecx24), 4, v25, v26, v27, v28, v29);
    v31 = eax30;
    if (!v31) {
        quantum_error(2, 4, v32, v33, v34, v35, v36);
    }
    ecx37 = v6;
    quantum_memman(4 << *reinterpret_cast<unsigned char*>(&ecx37), 4, v38, v39, v40, v41, v42);
    v43 = 0;
    while (reinterpret_cast<int32_t>(a2->f4) > reinterpret_cast<int32_t>(v43)) {
        v44 = 0;
        while (reinterpret_cast<int32_t>(a3->f4) > reinterpret_cast<int32_t>(v44)) {
            v45 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v13) + (a3->f4 * v43 + v44 << 4));
            eax46 = reinterpret_cast<struct s159*>(reinterpret_cast<int32_t>(a2->fc) + (v43 << 4));
            ecx47 = a3->f0;
            edi48 = eax46->fc;
            __asm__("shld edi, esi, cl");
            esi49 = eax46->f8 << *reinterpret_cast<unsigned char*>(&ecx47);
            if (*reinterpret_cast<unsigned char*>(&ecx47) & 32) {
                edi48 = esi49;
                esi49 = 0;
            }
            eax50 = reinterpret_cast<struct s160*>(reinterpret_cast<int32_t>(a3->fc) + (v44 << 4));
            edx51 = reinterpret_cast<void**>(edi48 | eax50->fc);
            *reinterpret_cast<void***>(v45 + 2) = reinterpret_cast<void**>(esi49 | eax50->f8);
            *reinterpret_cast<void***>(v45 + 3) = edx51;
            edi52 = reinterpret_cast<struct s161*>(reinterpret_cast<uint32_t>(v13) + (a3->f4 * v43 + v44 << 4));
            eax53 = reinterpret_cast<struct s162*>(reinterpret_cast<int32_t>(a2->fc) + (v43 << 4));
            eax54 = reinterpret_cast<struct s163*>(reinterpret_cast<int32_t>(a3->fc) + (v44 << 4));
            edx55 = eax54->f0;
            esi56 = eax53->f0;
            ecx57 = eax53->f4;
            v58 = eax54->f4;
            eax61 = __mulsc3(ecx57, esi56, ecx57, edx55, v58, v59, v60, v45);
            edi52->f0 = eax61;
            edi52->f4 = edx55;
            ++v44;
        }
        ++v43;
    }
    a1->f0 = v4;
    a1->f4 = v5;
    a1->f8 = v6;
    a1->fc = v13;
    a1->f10 = v31;
    return a1;
}

struct s164 {
    void** f0;
    int32_t f4;
};

struct s165 {
    void** f0;
    int32_t f4;
};

void quantum_print_timeop(void** a1, int32_t a2) {
    void* ebp3;
    void** ecx4;
    void** ecx5;
    struct s83* v6;
    struct s83* v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** ecx13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    int32_t v18;
    int32_t v19;
    void*** v20;
    void*** v21;
    int32_t v22;
    struct s164* ecx23;
    struct s165* eax24;
    int32_t eax25;
    void** v26;
    void** v27;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx4 = a1;
    ecx5 = a1;
    quantum_new_matrix(reinterpret_cast<int32_t>(ebp3) - 72, 1 << *reinterpret_cast<unsigned char*>(&ecx5), 1 << *reinterpret_cast<unsigned char*>(&ecx4));
    v6 = v7;
    v8 = v9;
    v10 = v11;
    v12 = reinterpret_cast<void**>(0);
    while (ecx13 = a1, reinterpret_cast<int32_t>(1 << *reinterpret_cast<unsigned char*>(&ecx13)) > reinterpret_cast<int32_t>(v12)) {
        v14 = a1;
        v15 = v12;
        v16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v12) >> 31);
        quantum_new_qureg(reinterpret_cast<int32_t>(ebp3) + 0xffffff98, v15, v16, v14, v17);
        v18 = v19;
        v20 = v21;
        a2(reinterpret_cast<int32_t>(ebp3) - 48, v15, v16, v14);
        v22 = 0;
        while (v18 > v22) {
            ecx23 = reinterpret_cast<struct s164*>(reinterpret_cast<uint32_t>(v10) + (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v20) + (v22 << 4) + 8) + reinterpret_cast<uint32_t>(v8) * reinterpret_cast<uint32_t>(v12) << 3));
            eax24 = reinterpret_cast<struct s165*>(reinterpret_cast<int32_t>(v20) + (v22 << 4));
            eax25 = eax24->f4;
            ecx23->f0 = eax24->f0;
            ecx23->f4 = eax25;
            ++v22;
        }
        quantum_delete_qureg(reinterpret_cast<int32_t>(ebp3) + 0xffffffd0, v15, v16, v14, v26);
        v12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v12) + 1);
    }
    quantum_print_matrix(v6, v8, v10, v14);
    quantum_delete_matrix(reinterpret_cast<int32_t>(ebp3) + 0xffffffe4, v8, v10, v14, v27);
    return;
}

int32_t main(int32_t a1, struct s146* a2) {
    void* ebp3;
    void** v4;
    int32_t eax5;
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    void** eax11;
    void** v12;
    void** eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    int32_t v18;
    void*** v19;
    void** v20;
    void** eax21;
    void** v22;
    void** v23;
    void** eax24;
    int32_t eax25;
    void** v26;
    void** v27;
    int32_t v28;
    void*** v29;
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
    uint32_t v47;
    void** v48;
    void** eax49;
    void** ecx50;
    void** v51;
    int32_t v52;
    void*** v53;
    void** v54;
    int32_t v55;
    void*** v56;
    void* ecx57;
    void** ecx58;
    int32_t v59;
    void*** v60;
    void* ecx61;
    int32_t v62;
    void*** v63;
    void* eax64;
    void* eax65;
    void** eax66;
    void** eax67;
    void** v68;
    int32_t v69;
    void*** v70;
    int32_t v71;
    void** v72;
    int32_t v73;
    void*** v74;
    int32_t v75;
    void*** v76;
    int32_t v77;
    void*** v78;
    int32_t v79;
    void*** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    int32_t v85;
    void*** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    int32_t v91;
    void*** v92;

    ebp3 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(__zero_stack_offset()) & 0xfffffff0) - 4 - 4);
    v4 = reinterpret_cast<void**>(0);
    eax5 = fun_80489a4(0);
    fun_8048834(eax5);
    if (a1 != 1) {
        v6 = a2->f4;
        eax9 = fun_8048974(v6, v7, v8);
        v10 = eax9;
        if (reinterpret_cast<int32_t>(v10) > reinterpret_cast<int32_t>(14)) {
            eax11 = quantum_getwidth(reinterpret_cast<uint32_t>(v10) * reinterpret_cast<uint32_t>(v10));
            v12 = eax11;
            eax13 = quantum_getwidth(v10);
            v14 = eax13;
            v15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v14) + reinterpret_cast<uint32_t>(v14) + reinterpret_cast<uint32_t>(v14) + reinterpret_cast<uint32_t>(v12) + 2);
            fun_8048964("N = %i, %i qubits required\n", v10, v15, v16, v17, v18, v19);
            if (a1 > 2) {
                v20 = a2->f8;
                eax21 = fun_8048974(v20, v10, v15);
                v4 = eax21;
            }
            while ((eax24 = quantum_gcd(v10, v4, v15, v22, v23), reinterpret_cast<int32_t>(eax24) > reinterpret_cast<int32_t>(1)) || reinterpret_cast<int32_t>(v4) <= reinterpret_cast<int32_t>(1)) {
                eax25 = fun_80489f4(v10, v4, v15);
                v4 = reinterpret_cast<void**>(eax25 % reinterpret_cast<int32_t>(v10));
            }
            fun_8048964("Random seed: %i\n", v4, v15, v26, v27, v28, v29);
            v30 = v12;
            quantum_new_qureg(reinterpret_cast<uint32_t>(ebp3) + 0xffffff98, 0, 0, v30, v31);
            v32 = v33;
            v34 = v35;
            v36 = v37;
            v38 = v39;
            v40 = v41;
            v42 = reinterpret_cast<void**>(0);
            while (reinterpret_cast<int32_t>(v42) < reinterpret_cast<int32_t>(v12)) {
                quantum_hadamard(v42, reinterpret_cast<uint32_t>(ebp3) + 0xffffffbc, 0, v30, v43);
                v42 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v42) + 1);
            }
            quantum_addscratch(reinterpret_cast<uint32_t>(v14) + reinterpret_cast<uint32_t>(v14) + reinterpret_cast<uint32_t>(v14) + 2, reinterpret_cast<uint32_t>(ebp3) + 0xffffffbc, 0, v30);
            v44 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp3) + 0xffffffbc);
            v45 = v14;
            v46 = v12;
            quantum_exp_mod_n(v10, v4, v46, v45, v44);
            v47 = 0;
            while (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(v14) + reinterpret_cast<uint32_t>(v14) + reinterpret_cast<uint32_t>(v14) + 2) > reinterpret_cast<int32_t>(v47)) {
                quantum_bmeasure(0, reinterpret_cast<uint32_t>(ebp3) + 0xffffffbc, v46, v45, v44);
                ++v47;
            }
            quantum_qft(v12, reinterpret_cast<uint32_t>(ebp3) + 0xffffffbc, v46, v45, v44);
            v48 = reinterpret_cast<void**>(0);
            while (reinterpret_cast<int32_t>((reinterpret_cast<uint32_t>(v12) >> 31) + reinterpret_cast<uint32_t>(v12)) >> 1 > reinterpret_cast<int32_t>(v48)) {
                quantum_cnot(v48, reinterpret_cast<uint32_t>(v12) - reinterpret_cast<uint32_t>(v48) + 0xffffffff, reinterpret_cast<uint32_t>(ebp3) + 0xffffffbc, v45, v44);
                quantum_cnot(reinterpret_cast<uint32_t>(v12) - reinterpret_cast<uint32_t>(v48) + 0xffffffff, v48, reinterpret_cast<uint32_t>(ebp3) + 0xffffffbc, v45, v44);
                quantum_cnot(v48, reinterpret_cast<uint32_t>(v12) - reinterpret_cast<uint32_t>(v48) + 0xffffffff, reinterpret_cast<uint32_t>(ebp3) + 0xffffffbc, v45, v44);
                v48 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v48) + 1);
            }
            eax49 = quantum_measure(v32, v34, v36, v38, v40);
            if (!reinterpret_cast<int1_t>(eax49 == 0xffffffff)) {
                if (eax49) {
                    ecx50 = v12;
                    v51 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx50));
                    __asm__("fild dword [esp]");
                    __asm__("fild dword [esp]");
                    __asm__("fdivp st1, st0");
                    __asm__("fstp qword [esp+0x8]");
                    fun_8048964("Measured %i (%f), ", eax49, v36, v38, v40, v52, v53);
                    quantum_frac_approx(reinterpret_cast<uint32_t>(ebp3) + 0xffffffe0, reinterpret_cast<uint32_t>(ebp3) + 0xffffffdc, v12, v38, v40);
                    v54 = v51;
                    fun_8048964("fractional approximation is %i/%i.\n", eax49, v54, v38, v40, v55, v56);
                    ecx57 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v51) >> 31) >> 31);
                    if ((reinterpret_cast<uint32_t>(v51) + reinterpret_cast<uint32_t>(ecx57) & 1) - reinterpret_cast<uint32_t>(ecx57) == 1 && (ecx58 = v12, reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(v51) + reinterpret_cast<uint32_t>(v51)) < reinterpret_cast<int32_t>(1 << *reinterpret_cast<unsigned char*>(&ecx58)))) {
                        fun_80489e4("Odd denominator, trying to expand by 2.", eax49, v54, v38, v40, v59, v60);
                        v51 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v51) + reinterpret_cast<uint32_t>(v51));
                    }
                    ecx61 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v51) >> 31) >> 31);
                    if ((reinterpret_cast<uint32_t>(v51) + reinterpret_cast<uint32_t>(ecx61) & 1) - reinterpret_cast<uint32_t>(ecx61) != 1) {
                        fun_8048964("Possible period is %i.\n", v51, v54, v38, v40, v62, v63);
                        eax64 = quantum_ipow(v4, reinterpret_cast<int32_t>((reinterpret_cast<uint32_t>(v51) >> 31) + reinterpret_cast<uint32_t>(v51)) >> 1, v54, v38, v40);
                        eax65 = quantum_ipow(v4, reinterpret_cast<int32_t>((reinterpret_cast<uint32_t>(v51) >> 31) + reinterpret_cast<uint32_t>(v51)) >> 1, v54, v38, v40);
                        eax66 = quantum_gcd(v10, reinterpret_cast<uint32_t>(eax64) + 1 % reinterpret_cast<int32_t>(v10), v54, v38, v40);
                        eax67 = quantum_gcd(v10, reinterpret_cast<uint32_t>(eax65) - 1 % reinterpret_cast<int32_t>(v10), v54, v38, v40);
                        if (reinterpret_cast<int32_t>(eax66) <= reinterpret_cast<int32_t>(eax67)) {
                            v68 = eax67;
                        } else {
                            v68 = eax66;
                        }
                        if (reinterpret_cast<int32_t>(v68) >= reinterpret_cast<int32_t>(v10) || reinterpret_cast<int32_t>(v68) <= reinterpret_cast<int32_t>(1)) {
                            fun_80489e4("Unable to determine factors, try again.", reinterpret_cast<uint32_t>(eax65) - 1 % reinterpret_cast<int32_t>(v10), v54, v38, v40, v69, v70);
                            v71 = 2;
                        } else {
                            v72 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v10) / reinterpret_cast<int32_t>(v68));
                            fun_8048964("%i = %i * %i\n", v10, v68, v72, v40, v73, v74);
                            quantum_delete_qureg(reinterpret_cast<uint32_t>(ebp3) + 0xffffffbc, v10, v68, v72, v40);
                            v71 = 0;
                        }
                    } else {
                        fun_80489e4("Odd period, try again.", eax49, v54, v38, v40, v75, v76);
                        v71 = 2;
                    }
                } else {
                    fun_80489e4("Measured zero, try again.", v34, v36, v38, v40, v77, v78);
                    v71 = 2;
                }
            } else {
                fun_80489e4("Impossible Measurement!", v34, v36, v38, v40, v79, v80);
                v71 = 1;
            }
        } else {
            fun_80489e4("Invalid number\n", v81, v82, v83, v84, v85, v86);
            v71 = 3;
        }
    } else {
        fun_80489e4("Usage: shor [number]\n", v87, v88, v89, v90, v91, v92);
        v71 = 3;
    }
    return v71;
}

void fun_8053022() {
}

void fun_80536d2() {
}

void _fini() {
    int32_t v1;
    int32_t ebx2;
    int32_t ebp3;

    fun_8054258(v1, ebx2, ebp3, __return_address());
}

int32_t g8055ffc = 0;

void fun_804885a() {
    goto g8055ffc;
}

void fun_8048820() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_80488ba() {
    goto 0x8048814;
}

void fun_804888a() {
    goto 0x8048814;
}

void fun_80489da() {
    goto 0x8048814;
}

void fun_80488fa() {
    goto 0x8048814;
}

void fun_80488da() {
    goto 0x8048814;
}

struct s166 {
    uint32_t f0;
    void** f4;
    void** f8;
};

struct s167 {
    void** f0;
    void** f4;
    void** f8;
    void** fc;
    void** f10;
};

struct s168 {
    signed char[8] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s169 {
    void** f0;
    void** f4;
};

struct s170 {
    void** f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
};

struct s171 {
    void** f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
};

void quantum_reduced_density_op(void** a1, struct s166* a2) {
    void* ebp3;
    void** eax4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** eax17;
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
    void** v33;
    void** v34;
    void** v35;
    void** ecx36;
    uint32_t edx37;
    uint32_t eax38;
    uint32_t v39;
    uint32_t v40;
    uint32_t v41;
    struct s167* edx42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    int32_t v48;
    struct s168* eax49;
    struct s169* edx50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    struct s170* ebx58;
    void** v59;
    int32_t v60;
    int32_t v61;
    int32_t v62;
    int32_t v63;
    struct s171* ebx64;
    void** v65;
    int32_t v66;
    int32_t v67;
    int32_t v68;
    int32_t v69;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __asm__("fldz ");
    __asm__("fstp qword [ebp-0x18]");
    eax4 = a2->f4;
    v5 = reinterpret_cast<void**>(a2->f0 << 3);
    eax11 = fun_8048864(eax4, v5, v6, v7, v8, v9, v10);
    a2->f4 = eax11;
    if (!a2->f4) {
        quantum_error(2, v5, v12, v13, v14, v15, v16);
    }
    eax17 = a2->f8;
    v18 = reinterpret_cast<void**>((a2->f0 << 2) + a2->f0 << 3);
    eax24 = fun_8048864(eax17, v18, v19, v20, v21, v22, v23);
    a2->f8 = eax24;
    if (!a2->f8) {
        quantum_error(2, v18, v25, v26, v27, v28, v29);
    }
    v30 = reinterpret_cast<void**>(a2->f0 + a2->f0 + a2->f0 << 3);
    quantum_memman(v30, v18, v31, v32, v33, v34, v35);
    ecx36 = a1;
    edx37 = 0;
    __asm__("shld edx, eax, cl");
    eax38 = 1 << *reinterpret_cast<unsigned char*>(&ecx36);
    if (*reinterpret_cast<unsigned char*>(&ecx36) & 32) {
        edx37 = eax38;
        eax38 = 0;
    }
    v39 = eax38;
    v40 = edx37;
    v41 = 0;
    while (reinterpret_cast<int32_t>(a2->f0) > reinterpret_cast<int32_t>(v41)) {
        __asm__("fld dword [eax]");
        __asm__("fstp qword [ebp-0x20]");
        edx42 = reinterpret_cast<struct s167*>(reinterpret_cast<uint32_t>(a2->f8) + ((v41 << 2) + v41 << 2));
        v43 = edx42->f0;
        v44 = edx42->f4;
        v45 = edx42->f8;
        v46 = edx42->fc;
        v47 = edx42->f10;
        __asm__("fldz ");
        __asm__("fstp qword [ebp-0x18]");
        v48 = 0;
        while (*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(a2->f8) + ((v41 << 2) + v41 << 2) + 4) > v48) {
            eax49 = reinterpret_cast<struct s168*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a2->f8) + ((v41 << 2) + v41 << 2) + 12)) + (v48 << 4));
            if (!(eax49->f8 & v39 | eax49->fc & v40)) {
                edx50 = reinterpret_cast<struct s169*>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(reinterpret_cast<uint32_t>(a2->f8) + ((v41 << 2) + v41 << 2) + 12)) + (v48 << 4));
                v51 = edx50->f0;
                v52 = edx50->f4;
                quantum_prob_inline(v51, v52, 1, v53, v54, v55, v56, v57);
                __asm__("fld qword [ebp-0x18]");
                __asm__("faddp st1, st0");
                __asm__("fstp qword [ebp-0x18]");
            }
            ++v48;
        }
        __asm__("fld qword [ebp-0x20]");
        __asm__("fmul qword [ebp-0x18]");
        __asm__("fstp dword [ebp-0x4c]");
        __asm__("fld dword [ebp-0x4c]");
        __asm__("fstp dword [eax]");
        __asm__("fld1 ");
        __asm__("fsub qword [ebp-0x18]");
        __asm__("fmul qword [ebp-0x20]");
        __asm__("fstp dword [ebp-0x4c]");
        __asm__("fld dword [ebp-0x4c]");
        __asm__("fstp dword [eax]");
        ebx58 = reinterpret_cast<struct s170*>(reinterpret_cast<uint32_t>(a2->f8) + ((v41 << 2) + v41 << 2));
        quantum_state_collapse(reinterpret_cast<int32_t>(ebp3) + 0xffffff88, a1, 0, v43, v44, v45, v46, v47);
        ebx58->f0 = v59;
        ebx58->f4 = v60;
        ebx58->f8 = v61;
        ebx58->fc = v62;
        ebx58->f10 = v63;
        ebx64 = reinterpret_cast<struct s171*>(reinterpret_cast<uint32_t>(a2->f8) + ((a2->f0 + v41 << 2) + (a2->f0 + v41) << 2));
        v53 = v43;
        v54 = v44;
        v55 = v45;
        v56 = v46;
        v57 = v47;
        quantum_state_collapse(reinterpret_cast<int32_t>(ebp3) + 0xffffff88, a1, 1, v53, v54, v55, v56, v57);
        ebx64->f0 = v65;
        ebx64->f4 = v66;
        ebx64->f8 = v67;
        ebx64->fc = v68;
        ebx64->f10 = v69;
        quantum_delete_qureg_hashpreserve(reinterpret_cast<int32_t>(ebp3) + 0xffffffc4, a1, 1, v53, v54, v55, v56, v57);
        ++v41;
    }
    a2->f0 = a2->f0 + a2->f0;
    return;
}

void fun_804886a() {
    goto 0x8048814;
}

void quantum_print_density_matrix(struct s141* a1) {
    void* ebp2;
    struct s83* v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    quantum_density_matrix(reinterpret_cast<int32_t>(ebp2) - 40, a1);
    quantum_print_matrix(v3, v4, v5, v6);
    quantum_delete_matrix(reinterpret_cast<int32_t>(ebp2) + 0xffffffec, v4, v5, v7, v8);
    return;
}

struct s172 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s173 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

void** quantum_unbounded_toffoli(uint32_t a1, void** a2) {
    void** eax3;
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
    uint32_t v17;
    void** v18;
    int32_t v19;
    int32_t v20;
    void** v21;
    uint32_t v22;
    struct s172* eax23;
    void** ecx24;
    uint32_t eax25;
    uint32_t eax26;
    void** v27;
    struct s173* eax28;
    uint32_t esi29;
    uint32_t edi30;
    int32_t ecx31;
    void** edx32;
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
    void** eax43;

    eax3 = fun_80489b4(a1 << 2);
    v4 = eax3;
    if (!v4) {
        quantum_error(2, v5, v6, v7, v8, v9, v10);
    }
    quantum_memman(a1 << 2, v11, v12, v13, v14, v15, v16);
    v17 = 0;
    while (reinterpret_cast<int32_t>(v17) < reinterpret_cast<int32_t>(a1)) {
        *reinterpret_cast<void***>((v17 << 2) + reinterpret_cast<uint32_t>(v4)) = v18;
        ++v17;
    }
    v19 = v20;
    v21 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a2 + 1)) > reinterpret_cast<int32_t>(v21)) {
        v22 = 0;
        while (reinterpret_cast<int32_t>(v22) < reinterpret_cast<int32_t>(a1)) {
            eax23 = reinterpret_cast<struct s172*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v21) << 4));
            ecx24 = *reinterpret_cast<void***>((v22 << 2) + reinterpret_cast<uint32_t>(v4));
            eax25 = eax23->f8;
            __asm__("shrd eax, edx, cl");
            if (*reinterpret_cast<unsigned char*>(&ecx24) & 32) {
                eax25 = eax23->fc >> *reinterpret_cast<unsigned char*>(&ecx24);
            }
            eax26 = eax25 & 1;
            if (!*reinterpret_cast<signed char*>(&eax26)) 
                break;
            ++v22;
        }
        if (v22 == a1) {
            v27 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v21) << 4));
            eax28 = reinterpret_cast<struct s173*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 3)) + (reinterpret_cast<uint32_t>(v21) << 4));
            esi29 = eax28->f8;
            edi30 = eax28->fc;
            ecx31 = v19;
            edx32 = reinterpret_cast<void**>(0);
            __asm__("shld edx, eax, cl");
            eax33 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx31));
            if (*reinterpret_cast<unsigned char*>(&ecx31) & 32) {
                edx32 = eax33;
                eax33 = reinterpret_cast<void**>(0);
            }
            *reinterpret_cast<void***>(v27 + 2) = reinterpret_cast<void**>(esi29 ^ reinterpret_cast<uint32_t>(eax33));
            *reinterpret_cast<void***>(v27 + 3) = reinterpret_cast<void**>(edi30 ^ reinterpret_cast<uint32_t>(edx32));
        }
        v21 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v21) + 1);
    }
    fun_80488d4(v4, v34, 1, 0, v35, v27, v36);
    quantum_memman(-(a1 << 2), v37, 1, 0, v38, v27, v39);
    eax43 = quantum_decohere(a2, v40, 1, 0, v41, v27, v42);
    return eax43;
}

void fun_804893a() {
    goto 0x8048814;
}

void fun_8048a1a() {
    goto 0x8048814;
}

void fun_804889a() {
    goto 0x8048814;
}

void fun_80489ca() {
    goto 0x8048814;
}

void fun_804898a() {
    goto 0x8048814;
}

void fun_804892a() {
    goto 0x8048814;
}

void fun_804899a() {
    goto 0x8048814;
}

void fun_80488ca() {
    goto 0x8048814;
}

void fun_804894a() {
    goto 0x8048814;
}

void fun_804890a() {
    goto 0x8048814;
}

void fun_80488aa() {
    goto 0x8048814;
}

void fun_804891a() {
    goto 0x8048814;
}

void** quantum_objcode_exit() {
    void** v1;
    void** ebp2;
    void** eax3;

    quantum_objcode_write(0);
    eax3 = quantum_objcode_stop(0, v1, ebp2);
    return eax3;
}

struct s174 {
    void** f0;
    void** f4;
};

struct s175 {
    signed char[8] pad8;
    int32_t f8;
    void*** fc;
};

struct s176 {
    void** f0;
    void** f4;
};

struct s177 {
    void** f0;
    void** f4;
};

struct s178 {
    signed char[8] pad8;
    uint32_t f8;
    uint32_t fc;
};

void quantum_print_qureg(int32_t a1, int32_t a2) {
    int32_t v3;
    struct s174* edx4;
    void*** v5;
    void** v6;
    void** v7;
    struct s175* eax8;
    void* v9;
    int32_t ebx10;
    void*** esi11;
    struct s176* edx12;
    void*** v13;
    void** v14;
    void** v15;
    struct s177* edx16;
    void*** v17;
    void** v18;
    void** v19;
    int32_t v20;
    void*** v21;
    void** v22;
    void** v23;
    void** v24;
    int32_t v25;
    uint32_t ecx26;
    struct s178* eax27;
    void* v28;
    uint32_t eax29;
    int32_t ecx30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;

    v3 = 0;
    while (a2 > v3) {
        edx4 = reinterpret_cast<struct s174*>(reinterpret_cast<int32_t>(v5) + (v3 << 4));
        v6 = edx4->f0;
        v7 = edx4->f4;
        quantum_prob_inline(v6, v7);
        __asm__("fstp qword [ebp-0x28]");
        eax8 = reinterpret_cast<struct s175*>(reinterpret_cast<int32_t>(v9) + (v3 << 4));
        ebx10 = eax8->f8;
        esi11 = eax8->fc;
        edx12 = reinterpret_cast<struct s176*>(reinterpret_cast<int32_t>(v13) + (v3 << 4));
        v14 = edx12->f0;
        v15 = edx12->f4;
        quantum_imag(v14, v15);
        __asm__("fstp qword [ebp-0x20]");
        edx16 = reinterpret_cast<struct s177*>(reinterpret_cast<int32_t>(v17) + (v3 << 4));
        v18 = edx16->f0;
        v19 = edx16->f4;
        quantum_real(v18, v19);
        __asm__("fld qword [ebp-0x28]");
        __asm__("fstp qword [esp+0x1c]");
        v20 = ebx10;
        v21 = esi11;
        __asm__("fld qword [ebp-0x20]");
        __asm__("fstp qword [esp+0xc]");
        __asm__("fstp qword [esp+0x4]");
        fun_8048964("% f %+fi|%lli> (%e) (|", v19, v22, v23, v24, v20, v21);
        v25 = a1 - 1;
        while (v25 >= 0) {
            ecx26 = reinterpret_cast<uint32_t>(v25 >> 31) >> 30;
            if ((v25 + ecx26 & 3) - ecx26 == 3) {
                fun_8048894(32, v19);
            }
            eax27 = reinterpret_cast<struct s178*>(reinterpret_cast<int32_t>(v28) + (v3 << 4));
            eax29 = eax27->f8;
            ecx30 = v25;
            __asm__("shrd eax, edx, cl");
            if (*reinterpret_cast<unsigned char*>(&ecx30) & 32) {
                eax29 = eax27->fc >> *reinterpret_cast<unsigned char*>(&ecx30);
            }
            v19 = reinterpret_cast<void**>(eax29 & 1);
            fun_8048964("%i", v19, v31, v32, v33, v20, v21);
            --v25;
        }
        fun_80489e4(">)", v19, v34, v35, v36, v20, v21);
        ++v3;
    }
    fun_8048894(10, v19);
    return;
}

void fun_80489ea() {
    goto 0x8048814;
}

void fun_804896a() {
    goto 0x8048814;
}

int32_t quantum_get_version() {
    return "0.9.1";
}

void fun_804897a() {
    goto 0x8048814;
}

void fun_80530ba() {
}

void fun_8052e54() {
}

void fun_805376a() {
}

void fun_80534bc() {
}

void fun_805350d() {
}

void fun_805391c() {
}

void fun_8053c24() {
}

void __libc_csu_fini() {
    return;
}

void fun_8054094() {
}

void fun_804884a() {
    goto 0x8048814;
}

struct s179 {
    void** f0;
    void** f4;
    void** f8;
};

void quantum_delete_density_op(struct s179* a1) {
    void** v2;
    void** v3;
    void** ebp4;
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

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ebp4;
    v5 = a1->f8;
    quantum_destroy_hash(v5, v6, v7);
    v8 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(a1->f0) > reinterpret_cast<int32_t>(v8)) {
        v9 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a1->f8) + ((reinterpret_cast<uint32_t>(v8) << 2) + reinterpret_cast<uint32_t>(v8) << 2));
        quantum_delete_qureg_hashpreserve(v9, v10, v11, v12, v13, v8, v3, v2);
        v8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v8) + 1);
    }
    v14 = a1->f4;
    fun_80488d4(v14, v15, v16, v17, v18, v8, v3);
    v19 = a1->f8;
    fun_80488d4(v19, v20, v21, v22, v23, v8, v3);
    v24 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a1->f0) * 0xffffffe8);
    quantum_memman(v24, v25, v26, v27, v28, v8, v3);
    a1->f4 = reinterpret_cast<void**>(0);
    a1->f8 = reinterpret_cast<void**>(0);
    return;
}

void fun_80488ea() {
    goto 0x8048814;
}

void fun_804882a() {
    goto 0x8048814;
}

void fun_8053294() {
}

struct s180 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s181 {
    void** f0;
    void** f4;
};

struct s182 {
    void** f0;
    void** f4;
};

struct s180* quantum_mmult(struct s180* a1, void** a2, uint32_t a3, void*** a4, uint32_t a5, void** a6, void*** a7) {
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    uint32_t v16;
    struct s181* esi17;
    void*** v18;
    int32_t v19;
    struct s182* eax20;
    void** edx21;
    void** ebx22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    int32_t v27;
    int32_t v28;
    int32_t v29;

    if (a3 != a5) {
        quantum_error(4, v8, v9, v10, v11, v12, v13);
    }
    quantum_new_matrix(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 36, a6, a2);
    v14 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(a6) > reinterpret_cast<int32_t>(v14)) {
        v15 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<int32_t>(a2) > reinterpret_cast<int32_t>(v15)) {
            v16 = 0;
            while (reinterpret_cast<int32_t>(a5) > reinterpret_cast<int32_t>(v16)) {
                esi17 = reinterpret_cast<struct s181*>(reinterpret_cast<int32_t>(v18) + (v19 * reinterpret_cast<uint32_t>(v15) + reinterpret_cast<uint32_t>(v14) << 3));
                __asm__("fld dword [eax+0x4]");
                __asm__("fstp dword [ebp-0x30]");
                __asm__("fld dword [eax+0x4]");
                eax20 = reinterpret_cast<struct s182*>(reinterpret_cast<int32_t>(a7) + (reinterpret_cast<uint32_t>(a6) * v16 + reinterpret_cast<uint32_t>(v14) << 3));
                edx21 = eax20->f0;
                ebx22 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(a4) + (a3 * reinterpret_cast<uint32_t>(v15) + v16 << 3));
                __asm__("fstp dword [ebp-0x34]");
                v23 = eax20->f4;
                __mulsc3(v24, ebx22, v24, edx21, v23, v25, v24, v26);
                __asm__("fld dword [ebp-0x34]");
                __asm__("fld dword [ebp-0x30]");
                __asm__("fld dword [ebp-0x34]");
                v24 = edx21;
                __asm__("fld dword [ebp-0x34]");
                __asm__("fxch st0, st1");
                __asm__("faddp st3, st0");
                __asm__("faddp st1, st0");
                __asm__("fxch st0, st1");
                __asm__("fstp dword [ebp-0x34]");
                __asm__("fstp dword [ebp-0x34]");
                esi17->f0 = v24;
                esi17->f4 = v24;
                ++v16;
            }
            v15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v15) + 1);
        }
        v14 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v14) + 1);
    }
    a1->f0 = v27;
    a1->f4 = v28;
    a1->f8 = v29;
    return a1;
}

void fun_80489fa() {
    goto 0x8048814;
}

void fun_8048a0a() {
    goto 0x8048814;
}

struct s183 {
    void** f0;
    void** f4;
    uint32_t f8;
    void** fc;
    void** f10;
};

struct s184 {
    int32_t f0;
    int32_t f4;
    void*** f8;
};

struct s185 {
    void** f0;
    void** f4;
};

struct s186 {
    void** f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

struct s187 {
    void** f0;
    int32_t f4;
};

struct s188 {
    void** f0;
    int32_t f4;
};

struct s183* quantum_matrix2qureg(struct s183* a1, struct s184* a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    int32_t v12;
    struct s185* eax13;
    void** edx14;
    void** v15;
    void** v16;
    int16_t ax17;
    int16_t fpu_status_word18;
    int16_t ax19;
    int16_t fpu_status_word20;
    void** v21;
    uint32_t v22;
    void** v23;
    void** v24;
    void** eax25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    uint32_t ecx31;
    void** v32;
    void** v33;
    void** eax34;
    void** v35;
    void** v36;
    void** v37;
    uint32_t ecx38;
    void** v39;
    void** v40;
    int32_t v41;
    uint32_t v42;
    int16_t ax43;
    int16_t fpu_status_word44;
    int16_t ax45;
    int16_t fpu_status_word46;
    struct s186* ecx47;
    struct s187* ecx48;
    struct s188* eax49;
    int32_t eax50;

    v4 = reinterpret_cast<void**>(0);
    if (a2->f4 != 1) {
        quantum_error(0x10000, v5, v6, v7, v8, v9, v10);
    }
    v11 = a3;
    v12 = 0;
    while (a2->f0 > v12) {
        eax13 = reinterpret_cast<struct s185*>(reinterpret_cast<int32_t>(a2->f8) + (v12 << 3));
        edx14 = eax13->f0;
        v15 = eax13->f4;
        v16 = edx14;
        __asm__("fld dword [ebp-0x2c]");
        __asm__("fldz ");
        __asm__("fxch st0, st1");
        __asm__("fucompp ");
        ax17 = fpu_status_word18;
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax17) + 1) || (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax17) + 1) || ((ax19 = fpu_status_word20, *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax19) + 1)) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax19) + 1)))) {
            v4 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v4) + 1);
        }
        ++v12;
    }
    v21 = v4;
    v22 = reinterpret_cast<uint32_t>(a3) + 2;
    eax25 = fun_8048884(v4, 16, v23, v16, v15, v24, v11);
    v26 = eax25;
    if (!v26) {
        quantum_error(2, 16, v27, v16, v15, v28, v11);
    }
    quantum_memman(reinterpret_cast<uint32_t>(v4) << 4, 16, v29, v16, v15, v30, v11);
    ecx31 = v22;
    eax34 = fun_8048884(1 << *reinterpret_cast<unsigned char*>(&ecx31), 4, v32, v16, v15, v33, v11);
    v35 = eax34;
    if (!v35) {
        quantum_error(2, 4, v36, v16, v15, v37, v11);
    }
    ecx38 = v22;
    quantum_memman(4 << *reinterpret_cast<unsigned char*>(&ecx38), 4, v39, v16, v15, v40, v11);
    v41 = 0;
    v42 = 0;
    while (a2->f0 > v41) {
        __asm__("fld dword [ebp-0x2c]");
        __asm__("fldz ");
        __asm__("fxch st0, st1");
        __asm__("fucompp ");
        ax43 = fpu_status_word44;
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax43) + 1) || (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax43) + 1) || ((ax45 = fpu_status_word46, *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax45) + 1)) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax45) + 1)))) {
            ecx47 = reinterpret_cast<struct s186*>(reinterpret_cast<uint32_t>(v26) + (v42 << 4));
            ecx47->f8 = v41;
            ecx47->fc = v41 >> 31;
            ecx48 = reinterpret_cast<struct s187*>(reinterpret_cast<uint32_t>(v26) + (v42 << 4));
            eax49 = reinterpret_cast<struct s188*>(reinterpret_cast<int32_t>(a2->f8) + (v41 << 3));
            eax50 = eax49->f4;
            ecx48->f0 = eax49->f0;
            ecx48->f4 = eax50;
            ++v42;
        }
        ++v41;
    }
    a1->f0 = v11;
    a1->f4 = v21;
    a1->f8 = v22;
    a1->fc = v26;
    a1->f10 = v35;
    return a1;
}

void fun_804887a() {
    goto 0x8048814;
}

void fun_80489ba() {
    goto 0x8048814;
}

void** quantum_objcode_run(void** a1, void** a2) {
    void* ebp3;
    void** v4;
    uint32_t eax5;
    uint32_t v6;
    void** v7;
    void** eax8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    int32_t eax14;
    void* v15;
    unsigned char al16;
    void** edx17;
    void** v18;
    void** eax19;
    uint32_t v20;
    void** eax21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** eax28;
    uint32_t v29;
    void** eax30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** edx36;
    void** v37;
    void** v38;
    void** v39;
    void** eax40;
    void** edx41;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v4 = a2;
    eax5 = g14;
    v6 = eax5;
    v7 = reinterpret_cast<void**>("r");
    eax8 = fun_8048924(a1, "r");
    v9 = eax8;
    if (v9) {
        v10 = reinterpret_cast<void**>(0);
        while (eax14 = fun_8048954(v9, v7, v11, v12, v13), eax14 == 0) {
            v15 = reinterpret_cast<void*>(0);
            while (reinterpret_cast<int32_t>(v15) <= 79) {
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<int32_t>(v15) - 92) = 0;
                v15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v15) + 1);
            }
            al16 = fun_8048944(v9, v7, v11, v12, v13);
            edx17 = reinterpret_cast<void**>(static_cast<uint32_t>(al16));
            if (reinterpret_cast<int32_t>(edx17) > reinterpret_cast<int32_t>(11)) {
                if (edx17 == 0x80) {
                    v18 = *reinterpret_cast<void***>(v4);
                    v7 = *reinterpret_cast<void***>(v4 + 1);
                    v11 = *reinterpret_cast<void***>(v4 + 2);
                    v12 = *reinterpret_cast<void***>(v4 + 3);
                    v13 = *reinterpret_cast<void***>(v4 + 4);
                    quantum_measure(v18, v7, v11, v12, v13);
                } else {
                    if (reinterpret_cast<int32_t>(edx17) > reinterpret_cast<int32_t>(0x80)) {
                        if (reinterpret_cast<int32_t>(edx17) <= reinterpret_cast<int32_t>(0x82)) {
                            addr_804eecb_12:
                            v12 = v9;
                            v11 = reinterpret_cast<void**>(1);
                            v7 = reinterpret_cast<void**>(4);
                            fun_8048a04(reinterpret_cast<int32_t>(ebp3) + 0xffffffa4, 4, 1, v12, v13);
                            eax19 = quantum_char2int(reinterpret_cast<int32_t>(ebp3) - 92, 4, 1, v12, v13);
                            v20 = al16;
                            if (v20 == 6) {
                                v7 = v4;
                                quantum_hadamard(eax19, v7, 1, v12, v13);
                            } else {
                                if (reinterpret_cast<int32_t>(v20) > reinterpret_cast<int32_t>(6)) {
                                    if (v20 == 0x81) {
                                        v7 = v4;
                                        quantum_bmeasure(eax19, v7, 1, v12, v13);
                                    } else {
                                        if (v20 == 0x82) {
                                            v7 = v4;
                                            quantum_bmeasure_bitpreserve(eax19, v7, 1, v12, v13);
                                        } else {
                                            if (v20 == 14) {
                                                v7 = v4;
                                                quantum_swaptheleads(eax19, v7, 1, v12, v13);
                                            }
                                        }
                                    }
                                } else {
                                    if (v20 == 4) {
                                        v7 = v4;
                                        quantum_sigma_y(eax19, v7, 1, v12, v13);
                                    } else {
                                        if (reinterpret_cast<int32_t>(v20) > reinterpret_cast<int32_t>(4)) {
                                            v7 = v4;
                                            quantum_sigma_z(eax19, v7, 1, v12, v13);
                                        } else {
                                            if (v20 == 3) {
                                                v7 = v4;
                                                quantum_sigma_x(eax19, v7, 1, v12, v13);
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (edx17 != 0xff) 
                                goto addr_804ecba_30;
                        }
                    } else {
                        if (edx17 == 13) {
                            fun_8048a04(reinterpret_cast<int32_t>(ebp3) + 0xffffffa4, 4, 1, v9, v13);
                            eax21 = quantum_char2int(reinterpret_cast<int32_t>(ebp3) - 92, 4, 1, v9, v13);
                            fun_8048a04(reinterpret_cast<int32_t>(ebp3) + 0xffffffa4, 4, 1, v9, v13);
                            eax22 = quantum_char2int(reinterpret_cast<int32_t>(ebp3) - 92, 4, 1, v9, v13);
                            v11 = reinterpret_cast<void**>(1);
                            fun_8048a04(reinterpret_cast<int32_t>(ebp3) + 0xffffffa4, 8, 1, v9, v13);
                            quantum_char2double(reinterpret_cast<int32_t>(ebp3) - 92, 8, 1, v9, v13);
                            __asm__("fstp qword [ebp+0xffffff78]");
                            __asm__("fld qword [ebp+0xffffff78]");
                            __asm__("fstp dword [ebp+0xffffff44]");
                            __asm__("fld dword [ebp+0xffffff44]");
                            v12 = v4;
                            __asm__("fstp dword [esp+0x8]");
                            v7 = eax22;
                            quantum_cond_phase_kick(eax21, v7, 1, v12, v13);
                        } else {
                            if (reinterpret_cast<int32_t>(edx17) >= reinterpret_cast<int32_t>(13)) {
                                if (edx17 == 14) 
                                    goto addr_804eecb_12; else 
                                    goto addr_804ec95_35;
                            }
                        }
                    }
                }
            } else {
                if (reinterpret_cast<int32_t>(edx17) >= reinterpret_cast<int32_t>(7)) {
                    fun_8048a04(reinterpret_cast<int32_t>(ebp3) + 0xffffffa4, 4, 1, v9, v13);
                    eax23 = quantum_char2int(reinterpret_cast<int32_t>(ebp3) - 92, 4, 1, v9, v13);
                    v12 = v9;
                    v11 = reinterpret_cast<void**>(1);
                    v7 = reinterpret_cast<void**>(8);
                    fun_8048a04(reinterpret_cast<int32_t>(ebp3) + 0xffffffa4, 8, 1, v12, v13);
                    quantum_char2double(reinterpret_cast<int32_t>(ebp3) - 92, 8, 1, v12, v13);
                    __asm__("fstp qword [ebp+0xffffff78]");
                    switch (al16 - 7) {
                    case 0:
                        __asm__("fld qword [ebp+0xffffff78]");
                        __asm__("fstp dword [ebp+0xffffff44]");
                        __asm__("fld dword [ebp+0xffffff44]");
                        v11 = v4;
                        __asm__("fstp dword [esp+0x4]");
                        quantum_r_x(eax23, 8, v11, v12, v13);
                        break;
                    case 1:
                        __asm__("fld qword [ebp+0xffffff78]");
                        __asm__("fstp dword [ebp+0xffffff44]");
                        __asm__("fld dword [ebp+0xffffff44]");
                        v11 = v4;
                        __asm__("fstp dword [esp+0x4]");
                        quantum_r_y(eax23, 8, v11, v12, v13);
                        break;
                    case 2:
                        __asm__("fld qword [ebp+0xffffff78]");
                        __asm__("fstp dword [ebp+0xffffff44]");
                        __asm__("fld dword [ebp+0xffffff44]");
                        v11 = v4;
                        __asm__("fstp dword [esp+0x4]");
                        quantum_r_z(eax23, 8, v11, v12, v13);
                        break;
                    case 3:
                        __asm__("fld qword [ebp+0xffffff78]");
                        __asm__("fstp dword [ebp+0xffffff44]");
                        __asm__("fld dword [ebp+0xffffff44]");
                        v11 = v4;
                        __asm__("fstp dword [esp+0x4]");
                        quantum_phase_kick(eax23, 8, v11, v12, v13);
                        break;
                    case 4:
                        __asm__("fld qword [ebp+0xffffff78]");
                        __asm__("fstp dword [ebp+0xffffff44]");
                        __asm__("fld dword [ebp+0xffffff44]");
                        v11 = v4;
                        __asm__("fstp dword [esp+0x4]");
                        quantum_phase_scale(eax23, 8, v11, v12, v13);
                    }
                } else {
                    if (edx17 == 2) {
                        fun_8048a04(reinterpret_cast<int32_t>(ebp3) + 0xffffffa4, 4, 1, v9, v13);
                        eax24 = quantum_char2int(reinterpret_cast<int32_t>(ebp3) - 92, 4, 1, v9, v13);
                        fun_8048a04(reinterpret_cast<int32_t>(ebp3) + 0xffffffa4, 4, 1, v9, v13);
                        eax25 = quantum_char2int(reinterpret_cast<int32_t>(ebp3) - 92, 4, 1, v9, v13);
                        fun_8048a04(reinterpret_cast<int32_t>(ebp3) + 0xffffffa4, 4, 1, v9, v13);
                        eax26 = quantum_char2int(reinterpret_cast<int32_t>(ebp3) - 92, 4, 1, v9, v13);
                        v12 = v4;
                        v11 = eax26;
                        v7 = eax25;
                        quantum_toffoli(eax24, v7, v11, v12, v13);
                    } else {
                        if (reinterpret_cast<int32_t>(edx17) > reinterpret_cast<int32_t>(2)) 
                            goto addr_804eecb_12;
                        if (!edx17) 
                            goto addr_804ecbf_48; else 
                            goto addr_804ec40_49;
                    }
                }
            }
            addr_804f2bb_50:
            v10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v10) + 1);
            continue;
            addr_804ed50_51:
            fun_8048a04(reinterpret_cast<int32_t>(ebp3) + 0xffffffa4, 4, 1, v9, v13);
            eax27 = quantum_char2int(reinterpret_cast<int32_t>(ebp3) - 92, 4, 1, v9, v13);
            v12 = v9;
            v11 = reinterpret_cast<void**>(1);
            v7 = reinterpret_cast<void**>(4);
            fun_8048a04(reinterpret_cast<int32_t>(ebp3) + 0xffffffa4, 4, 1, v12, v13);
            eax28 = quantum_char2int(reinterpret_cast<int32_t>(ebp3) - 92, 4, 1, v12, v13);
            v29 = al16;
            if (v29 == 1) {
                v11 = v4;
                v7 = eax28;
                quantum_cnot(eax27, v7, v11, v12, v13);
                goto addr_804f2bb_50;
            } else {
                if (v29 == 12) {
                    v11 = v4;
                    v7 = eax28;
                    quantum_cond_phase(eax27, v7, v11, v12, v13);
                    goto addr_804f2bb_50;
                } else {
                    goto addr_804f2bb_50;
                }
            }
            addr_804ecbf_48:
            fun_8048a04(reinterpret_cast<int32_t>(ebp3) + 0xffffffa4, 8, 1, v9, v13);
            eax30 = quantum_char2mu(reinterpret_cast<int32_t>(ebp3) - 92, 8, 1, v9, v13);
            v12 = reinterpret_cast<void**>(12);
            v7 = eax30;
            v11 = edx17;
            quantum_new_qureg(reinterpret_cast<int32_t>(ebp3) + 0xffffff48, v7, v11, 12, v13);
            *reinterpret_cast<void***>(v4) = v31;
            *reinterpret_cast<void***>(v4 + 1) = v32;
            *reinterpret_cast<void***>(v4 + 2) = v33;
            *reinterpret_cast<void***>(v4 + 3) = v34;
            *reinterpret_cast<void***>(v4 + 4) = v35;
            goto addr_804f2bb_50;
            addr_804ec40_49:
            if (edx17 == 1) 
                goto addr_804ed50_51; else 
                goto addr_804ec4d_56;
        }
    } else {
        edx36 = stderr;
        v11 = a1;
        v7 = reinterpret_cast<void**>("quantum_objcode_run: Could not open %s: ");
        fun_8048994(edx36, "quantum_objcode_run: Could not open %s: ", v11, v37, v38);
        v39 = reinterpret_cast<void**>(0);
        fun_80488c4(0, "quantum_objcode_run: Could not open %s: ", v11);
        goto addr_804f2dd_58;
    }
    v39 = v9;
    fun_8048904(v39, v7, v11, v12, v13);
    addr_804f2dd_58:
    eax40 = reinterpret_cast<void**>(v6 ^ g14);
    if (eax40) {
        eax40 = fun_80489c4(v39, v7, v11, v12, v13);
    }
    return eax40;
    addr_804ecba_30:
    addr_804f294_62:
    edx41 = stderr;
    v12 = reinterpret_cast<void**>(static_cast<uint32_t>(al16));
    v11 = v10;
    v7 = reinterpret_cast<void**>("%i: Unknown opcode 0x(%X)!\n");
    v39 = edx41;
    fun_8048994(v39, "%i: Unknown opcode 0x(%X)!\n", v11, v12, v13);
    goto addr_804f2dd_58;
    addr_804ec95_35:
    goto addr_804f294_62;
    addr_804ec4d_56:
    goto addr_804f294_62;
}

struct s189 {
    signed char[8] pad8;
    void*** f8;
    void* fc;
};

void quantum_print_expn(uint32_t a1, void** a2) {
    void** v3;
    struct s189* eax4;
    void* v5;
    void* ecx6;
    void*** v7;
    int32_t ecx8;
    void*** eax9;
    int32_t edx10;
    void** v11;
    int32_t v12;

    v3 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(a2) > reinterpret_cast<int32_t>(v3)) {
        eax4 = reinterpret_cast<struct s189*>(reinterpret_cast<int32_t>(v5) + (reinterpret_cast<uint32_t>(v3) << 4));
        ecx6 = eax4->fc;
        v7 = eax4->f8;
        ecx8 = reinterpret_cast<int32_t>((a1 >> 31) + a1) >> 1;
        eax9 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v3) << *reinterpret_cast<unsigned char*>(&ecx8));
        edx10 = reinterpret_cast<int32_t>(eax9) >> 31;
        fun_8048964("%i: %lli\n", v3, reinterpret_cast<uint32_t>(v7) - reinterpret_cast<uint32_t>(eax9), reinterpret_cast<uint32_t>(ecx6) - (edx10 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(ecx6) < edx10 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(v7) < reinterpret_cast<uint32_t>(eax9)))), v11, v12, v7);
        v3 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v3) + 1);
    }
    return;
}

void fun_80489aa() {
    goto 0x8048814;
}

void fun_804883a() {
    goto 0x8048814;
}

void fun_8054175(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int32_t ebx5;
    uint32_t edi6;
    uint32_t esi7;

    __i686_get_pc_thunk_bx();
    ebx4 = ebx5 + 0x1e69;
    _init();
    edi6 = reinterpret_cast<uint32_t>(ebx4 - 0xf4 - (ebx4 - 0xf4) >> 2);
    if (edi6) {
        esi7 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebx4 + esi7 * 4 - 0xf4)(a1, a2, a3);
            ++esi7;
        } while (esi7 < edi6);
    }
    return;
}

struct s190 {
    void** f0;
    signed char[4] pad8;
    void** f8;
    void** fc;
};

struct s191 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s192 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s193 {
    void** f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

struct s194 {
    void** f0;
    int32_t f4;
};

struct s195 {
    void** f0;
    signed char[4] pad8;
    void** f8;
    uint32_t fc;
};

struct s196 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s197 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s198 {
    void** f0;
    signed char[4] pad8;
    uint32_t f8;
    uint32_t fc;
};

struct s199 {
    void** f0;
    int32_t f4;
};

struct s200 {
    void** f0;
    int32_t f4;
};

struct s201 {
    void** f0;
    void** f4;
};

struct s202 {
    void** f0;
    void** f4;
};

struct s203 {
    void** f0;
    void** f4;
};

struct s204 {
    void** f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

struct s205 {
    void** f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

struct s206 {
    void** f0;
    int32_t f4;
};

struct s207 {
    void** f0;
    int32_t f4;
};

void** quantum_gate2(int32_t a1, int32_t a2, int32_t a3, int32_t a4, void*** a5, void** a6) {
    void* ebp7;
    void* v8;
    uint32_t v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    uint32_t v16;
    void** ecx17;
    void** v18;
    struct s190* eax19;
    void** edx20;
    void** ecx21;
    void** v22;
    void** v23;
    void** v24;
    struct s191* eax25;
    uint32_t esi26;
    uint32_t edi27;
    int32_t ecx28;
    uint32_t edx29;
    uint32_t eax30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** eax36;
    struct s192* eax37;
    uint32_t esi38;
    uint32_t edi39;
    int32_t ecx40;
    uint32_t edx41;
    uint32_t eax42;
    void** v43;
    void** v44;
    void** v45;
    void** eax46;
    void** eax47;
    void** v48;
    void** eax49;
    void* v50;
    struct s193* eax51;
    struct s194* edx52;
    void** eax53;
    void** v54;
    void** eax55;
    void** v56;
    void** v57;
    void** v58;
    void** ecx59;
    int32_t edx60;
    void** v61;
    uint32_t eax62;
    struct s195* eax63;
    void** edx64;
    uint32_t ecx65;
    uint32_t eax66;
    struct s196* eax67;
    uint32_t esi68;
    uint32_t edi69;
    int32_t ecx70;
    uint32_t edx71;
    uint32_t eax72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** eax78;
    struct s197* eax79;
    uint32_t esi80;
    uint32_t edi81;
    int32_t ecx82;
    uint32_t edx83;
    uint32_t eax84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** eax90;
    struct s198* eax91;
    uint32_t esi92;
    uint32_t edi93;
    int32_t ecx94;
    uint32_t edx95;
    uint32_t eax96;
    int32_t v97;
    uint32_t esi98;
    uint32_t ecx99;
    uint32_t ebx100;
    void** eax101;
    int32_t v102;
    struct s199* eax103;
    int32_t eax104;
    int32_t v105;
    struct s200* edx106;
    int32_t v107;
    struct s201* edi108;
    struct s202* eax109;
    void** ecx110;
    void** esi111;
    void** edx112;
    void** v113;
    void** v114;
    uint32_t v115;
    struct s203* edx116;
    void** v117;
    int16_t ax118;
    int16_t fpu_status_word119;
    struct s204* ecx120;
    struct s205* eax121;
    int32_t edx122;
    struct s206* ecx123;
    struct s207* eax124;
    int32_t eax125;
    void** eax126;
    void** eax127;
    void** eax128;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = reinterpret_cast<void*>(0);
    v9 = 0;
    if (a4 != 4 || a3 != 4) {
        quantum_error(4, v10, v11, v12, v13, v14, v15);
    }
    v16 = 0;
    while (ecx17 = *reinterpret_cast<void***>(a6 + 2), reinterpret_cast<int32_t>(1 << *reinterpret_cast<unsigned char*>(&ecx17)) > reinterpret_cast<int32_t>(v16)) {
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 4)) + (v16 << 2)) = reinterpret_cast<void**>(0);
        ++v16;
    }
    v18 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a6 + 1)) > reinterpret_cast<int32_t>(v18)) {
        eax19 = reinterpret_cast<struct s190*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(v18) << 4));
        edx20 = eax19->f8;
        ecx21 = eax19->fc;
        v22 = a6;
        v23 = v18;
        quantum_add_hash(edx20, ecx21, v23, v22);
        v18 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v18) + 1);
    }
    v24 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a6 + 1)) > reinterpret_cast<int32_t>(v24)) {
        eax25 = reinterpret_cast<struct s191*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(v24) << 4));
        esi26 = eax25->f8;
        edi27 = eax25->fc;
        ecx28 = a1;
        edx29 = 0;
        __asm__("shld edx, eax, cl");
        eax30 = 1 << *reinterpret_cast<unsigned char*>(&ecx28);
        if (*reinterpret_cast<unsigned char*>(&ecx28) & 32) {
            edx29 = eax30;
            eax30 = 0;
        }
        v31 = *reinterpret_cast<void***>(a6);
        v32 = *reinterpret_cast<void***>(a6 + 1);
        v33 = *reinterpret_cast<void***>(a6 + 2);
        v34 = *reinterpret_cast<void***>(a6 + 3);
        v35 = *reinterpret_cast<void***>(a6 + 4);
        eax36 = quantum_get_state(esi26 ^ eax30, edi27 ^ edx29, v31, v32, v33, v34, v35);
        if (reinterpret_cast<int1_t>(eax36 == 0xffffffff)) {
            v8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v8) + 1);
        }
        eax37 = reinterpret_cast<struct s192*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(v24) << 4));
        esi38 = eax37->f8;
        edi39 = eax37->fc;
        ecx40 = a2;
        edx41 = 0;
        __asm__("shld edx, eax, cl");
        eax42 = 1 << *reinterpret_cast<unsigned char*>(&ecx40);
        if (*reinterpret_cast<unsigned char*>(&ecx40) & 32) {
            edx41 = eax42;
            eax42 = 0;
        }
        v23 = *reinterpret_cast<void***>(a6);
        v22 = *reinterpret_cast<void***>(a6 + 1);
        v43 = *reinterpret_cast<void***>(a6 + 2);
        v44 = *reinterpret_cast<void***>(a6 + 3);
        v45 = *reinterpret_cast<void***>(a6 + 4);
        eax46 = quantum_get_state(esi38 ^ eax42, edi39 ^ edx41, v23, v22, v43, v44, v45);
        if (reinterpret_cast<int1_t>(eax46 == 0xffffffff)) {
            v8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v8) + 1);
        }
        v24 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v24) + 1);
    }
    eax47 = *reinterpret_cast<void***>(a6 + 3);
    v48 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 1)) + reinterpret_cast<uint32_t>(v8) << 4);
    eax49 = fun_8048864(eax47, v48, v23, v22, v43, v44, v45);
    *reinterpret_cast<void***>(a6 + 3) = eax49;
    if (!*reinterpret_cast<void***>(a6 + 3)) {
        quantum_error(4, v48, v23, v22, v43, v44, v45);
    }
    quantum_memman(reinterpret_cast<uint32_t>(v8) << 4, v48, v23, v22, v43, v44, v45);
    v50 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<int32_t>(v50) < reinterpret_cast<int32_t>(v8)) {
        eax51 = reinterpret_cast<struct s193*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 1)) + reinterpret_cast<uint32_t>(v50) << 4));
        eax51->f8 = 0;
        eax51->fc = 0;
        edx52 = reinterpret_cast<struct s194*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 1)) + reinterpret_cast<uint32_t>(v50) << 4));
        edx52->f0 = reinterpret_cast<void**>(0);
        edx52->f4 = 0;
        v50 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v50) + 1);
    }
    eax53 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 1)) + reinterpret_cast<uint32_t>(v8));
    v54 = reinterpret_cast<void**>(1);
    eax55 = fun_8048884(eax53, 1, v23, v22, v43, v44, v45);
    v56 = eax55;
    if (!v56) {
        quantum_error(4, 1, v23, v22, v43, v44, v45);
    }
    v57 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 1)) + reinterpret_cast<uint32_t>(v8));
    quantum_memman(v57, 1, v23, v22, v43, v44, v45);
    v58 = *reinterpret_cast<void***>(a6 + 1);
    ecx59 = *reinterpret_cast<void***>(a6);
    edx60 = 0;
    __asm__("shld edx, eax, cl");
    if (*reinterpret_cast<unsigned char*>(&ecx59) & 32) {
        edx60 = 1 << *reinterpret_cast<unsigned char*>(&ecx59);
    }
    __asm__("fild qword [esp]");
    __asm__("fstp tword [ebp+0xffffff58]");
    if (edx60 < 0) {
        __asm__("fld tword [0x8054330]");
        __asm__("fld tword [ebp+0xffffff58]");
        __asm__("faddp st1, st0");
        __asm__("fstp tword [ebp+0xffffff58]");
    }
    __asm__("fld tword [ebp+0xffffff58]");
    __asm__("fstp qword [ebp-0x80]");
    __asm__("fld qword [ebp-0x80]");
    __asm__("fld1 ");
    __asm__("fdivrp st1, st0");
    __asm__("fld qword [0x8054348]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [ebp-0x34]");
    v61 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a6 + 1)) > reinterpret_cast<int32_t>(v61)) {
        eax62 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v61) + reinterpret_cast<uint32_t>(v56));
        if (!*reinterpret_cast<signed char*>(&eax62)) {
            eax63 = reinterpret_cast<struct s195*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(v61) << 4));
            edx64 = eax63->f8;
            ecx65 = eax63->fc;
            eax66 = quantum_bitmask(edx64, ecx65, 2, reinterpret_cast<int32_t>(ebp7) - 64, v43, v44, v45);
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp7) + eax66 * 4 - 80) = v61;
            eax67 = reinterpret_cast<struct s196*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(v61) << 4));
            esi68 = eax67->f8;
            edi69 = eax67->fc;
            ecx70 = a2;
            edx71 = 0;
            __asm__("shld edx, eax, cl");
            eax72 = 1 << *reinterpret_cast<unsigned char*>(&ecx70);
            if (*reinterpret_cast<unsigned char*>(&ecx70) & 32) {
                edx71 = eax72;
                eax72 = 0;
            }
            v73 = *reinterpret_cast<void***>(a6);
            v74 = *reinterpret_cast<void***>(a6 + 1);
            v75 = *reinterpret_cast<void***>(a6 + 2);
            v76 = *reinterpret_cast<void***>(a6 + 3);
            v77 = *reinterpret_cast<void***>(a6 + 4);
            eax78 = quantum_get_state(esi68 ^ eax72, edi69 ^ edx71, v73, v74, v75, v76, v77);
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp7) + (eax66 ^ 1) * 4 - 80) = eax78;
            eax79 = reinterpret_cast<struct s197*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(v61) << 4));
            esi80 = eax79->f8;
            edi81 = eax79->fc;
            ecx82 = a1;
            edx83 = 0;
            __asm__("shld edx, eax, cl");
            eax84 = 1 << *reinterpret_cast<unsigned char*>(&ecx82);
            if (*reinterpret_cast<unsigned char*>(&ecx82) & 32) {
                edx83 = eax84;
                eax84 = 0;
            }
            v85 = *reinterpret_cast<void***>(a6);
            v86 = *reinterpret_cast<void***>(a6 + 1);
            v87 = *reinterpret_cast<void***>(a6 + 2);
            v88 = *reinterpret_cast<void***>(a6 + 3);
            v89 = *reinterpret_cast<void***>(a6 + 4);
            eax90 = quantum_get_state(esi80 ^ eax84, edi81 ^ edx83, v85, v86, v87, v88, v89);
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp7) + (eax66 ^ 2) * 4 - 80) = eax90;
            eax91 = reinterpret_cast<struct s198*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(v61) << 4));
            esi92 = eax91->f8;
            edi93 = eax91->fc;
            ecx94 = a1;
            edx95 = 0;
            __asm__("shld edx, eax, cl");
            eax96 = 1 << *reinterpret_cast<unsigned char*>(&ecx94);
            if (*reinterpret_cast<unsigned char*>(&ecx94) & 32) {
                edx95 = eax96;
                eax96 = 0;
            }
            v97 = a2;
            esi98 = 0;
            ecx99 = *reinterpret_cast<unsigned char*>(&v97);
            __asm__("shld esi, ebx, cl");
            ebx100 = 1 << *reinterpret_cast<unsigned char*>(&ecx99);
            if (*reinterpret_cast<unsigned char*>(&ecx99) & 32) {
                esi98 = ebx100;
                ebx100 = 0;
            }
            v23 = *reinterpret_cast<void***>(a6);
            v22 = *reinterpret_cast<void***>(a6 + 1);
            v43 = *reinterpret_cast<void***>(a6 + 2);
            v44 = *reinterpret_cast<void***>(a6 + 3);
            v45 = *reinterpret_cast<void***>(a6 + 4);
            v54 = reinterpret_cast<void**>(esi98 ^ (edi93 ^ edx95));
            eax101 = quantum_get_state(ebx100 ^ (esi92 ^ eax96), v54, v23, v22, v43, v44, v45);
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp7) + (eax66 ^ 3) * 4 - 80) = eax101;
            v102 = 0;
            while (v102 <= 3) {
                if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp7) + v102 * 4 - 80) == -1) {
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp7) + v102 * 4 - 80) = v58;
                    v58 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v58) + 1);
                }
                eax103 = reinterpret_cast<struct s199*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (*reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebp7) + v102 * 4 - 80) << 4));
                eax104 = eax103->f4;
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp7) + v102 * 8 - 0x70) = eax103->f0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp7) + v102 * 8 - 0x6c) = eax104;
                ++v102;
            }
            v105 = 0;
            while (v105 <= 3) {
                edx106 = reinterpret_cast<struct s200*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (*reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebp7) + v105 * 4 - 80) << 4));
                edx106->f0 = reinterpret_cast<void**>(0);
                edx106->f4 = 0;
                v107 = 0;
                while (v107 <= 3) {
                    edi108 = reinterpret_cast<struct s201*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (*reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebp7) + v105 * 4 - 80) << 4));
                    __asm__("fld dword [eax]");
                    __asm__("fstp dword [ebp+0xffffff78]");
                    __asm__("fld dword [eax+0x4]");
                    __asm__("fstp dword [ebp+0xffffff74]");
                    eax109 = reinterpret_cast<struct s202*>(reinterpret_cast<int32_t>(a5) + (a4 * v105 + v107 << 3));
                    ecx110 = eax109->f4;
                    esi111 = eax109->f0;
                    edx112 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp7) + v107 * 8 - 0x70);
                    v22 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp7) + v107 * 8 - 0x6c);
                    v23 = edx112;
                    v54 = ecx110;
                    __mulsc3(ecx110, esi111, v54, v23, v22, v43, v44, v45);
                    __asm__("fld dword [ebp+0xffffff78]");
                    __asm__("fld dword [ebp+0xffffff74]");
                    __asm__("fld dword [ebp+0xffffff44]");
                    __asm__("fld dword [ebp+0xffffff44]");
                    __asm__("fxch st0, st1");
                    __asm__("faddp st3, st0");
                    __asm__("faddp st1, st0");
                    __asm__("fxch st0, st1");
                    __asm__("fstp dword [ebp+0xffffff44]");
                    __asm__("fstp dword [ebp+0xffffff44]");
                    edi108->f0 = edx112;
                    edi108->f4 = edx112;
                    ++v107;
                }
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + v105 * 4 - 80)) + reinterpret_cast<uint32_t>(v56)) = 1;
                ++v105;
            }
        }
        v61 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v61) + 1);
    }
    *reinterpret_cast<void***>(a6 + 1) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 1)) + reinterpret_cast<uint32_t>(v8));
    fun_80488d4(v56, v54, v23, v22, v43, v44, v45);
    v113 = reinterpret_cast<void**>(-reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 1)));
    quantum_memman(v113, v54, v23, v22, v43, v44, v45);
    v114 = reinterpret_cast<void**>(0);
    v115 = 0;
    while (reinterpret_cast<int32_t>(*reinterpret_cast<void***>(a6 + 1)) > reinterpret_cast<int32_t>(v114)) {
        edx116 = reinterpret_cast<struct s203*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(v114) << 4));
        v117 = edx116->f0;
        v54 = edx116->f4;
        quantum_prob_inline(v117, v54, v23, v22, v43, v44, v45);
        __asm__("fld dword [ebp-0x34]");
        __asm__("fucompp ");
        ax118 = fpu_status_word119;
        if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax118) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax118) + 1)) {
            if (v115) {
                ecx120 = reinterpret_cast<struct s204*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(v114) - v115 << 4));
                eax121 = reinterpret_cast<struct s205*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(v114) << 4));
                edx122 = eax121->fc;
                ecx120->f8 = eax121->f8;
                ecx120->fc = edx122;
                ecx123 = reinterpret_cast<struct s206*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(v114) - v115 << 4));
                eax124 = reinterpret_cast<struct s207*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 3)) + (reinterpret_cast<uint32_t>(v114) << 4));
                eax125 = eax124->f4;
                ecx123->f0 = eax124->f0;
                ecx123->f4 = eax125;
            }
        } else {
            ++v115;
            ++v9;
        }
        v114 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v114) + 1);
    }
    if (v9) {
        *reinterpret_cast<void***>(a6 + 1) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 1)) - v9);
        eax126 = *reinterpret_cast<void***>(a6 + 3);
        v54 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a6 + 1)) << 4);
        eax127 = fun_8048864(eax126, v54, v23, v22, v43, v44, v45);
        *reinterpret_cast<void***>(a6 + 3) = eax127;
        if (!*reinterpret_cast<void***>(a6 + 3)) {
            quantum_error(2, v54, v23, v22, v43, v44, v45);
        }
        quantum_memman(-(v9 << 4), v54, v23, v22, v43, v44, v45);
    }
    eax128 = quantum_decohere(a6, v54, v23, v22, v43, v44, v45);
    return eax128;
}

void fun_804895a() {
    goto 0x8048814;
}
