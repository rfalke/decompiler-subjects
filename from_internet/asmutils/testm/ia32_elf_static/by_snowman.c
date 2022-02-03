
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_80490c7(int32_t a1, void** a2, int32_t a3) {
    return;
}

int32_t __libc_start_main = 0x8049076;

void fun_8049070(int32_t a1, int16_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t putchar(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 0x8056024;
    if (1 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = putchar(0x8056024, v2);
        return eax3;
    }
}

int32_t acosh(uint32_t a1, int32_t a2) {
    __asm__("fld qword [ebp-0x18]");
    __asm__("fmul st0, st0");
    __asm__("fld1 ");
    __asm__("fsubp st1, st0");
    __asm__("fsqrt ");
    __asm__("fstp qword [ebp-0x8]");
    __asm__("fld qword [ebp-0x18]");
    __asm__("fadd qword [ebp-0x8]");
    __asm__("fldln2 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    __asm__("fstp qword [ebp-0x8]");
    __asm__("fld qword [ebp-0x8]");
    return a2;
}

int32_t asinh(uint32_t a1, int32_t a2) {
    int32_t eax3;
    int16_t fpu_status_word4;
    int32_t v5;

    eax3 = a2;
    __asm__("fld qword [ebp-0x18]");
    __asm__("fmul st0, st0");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fsqrt ");
    __asm__("fstp qword [ebp-0x8]");
    __asm__("fld qword [ebp-0x18]");
    __asm__("ftst ");
    *reinterpret_cast<int16_t*>(&eax3) = fpu_status_word4;
    __asm__("fstp st0");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) & 69) {
        __asm__("fld qword [ebp-0x8]");
        __asm__("fsub qword [ebp-0x18]");
        __asm__("fldln2 ");
        __asm__("fxch st0, st1");
        __asm__("fyl2x ");
        __asm__("fstp qword [ebp-0x8]");
        __asm__("fld qword [ebp-0x8]");
        __asm__("fchs ");
        __asm__("fstp qword [ebp-0x20]");
        eax3 = v5;
    } else {
        __asm__("fld qword [ebp-0x18]");
        __asm__("fadd qword [ebp-0x8]");
        __asm__("fldln2 ");
        __asm__("fxch st0, st1");
        __asm__("fyl2x ");
        __asm__("fstp qword [ebp-0x8]");
    }
    __asm__("fld qword [ebp-0x8]");
    return eax3;
}

int32_t atan2(uint32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fpatan ");
    return a4;
}

int16_t pow(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);

uint32_t cbrt(uint32_t a1, uint32_t a2) {
    uint32_t eax3;
    uint32_t v4;
    int16_t fpu_status_word5;
    int16_t ax6;
    int16_t fpu_status_word7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t eax12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;

    eax3 = a2;
    v4 = eax3;
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax3) = fpu_status_word5;
    __asm__("fstp st0");
    if ((eax3 & 0x4500) != 0x500) {
        __asm__("fld qword [ebp-0x10]");
        __asm__("ftst ");
        ax6 = fpu_status_word7;
        __asm__("fstp st0");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax6) + 1) & 5) {
            __asm__("fld qword [ebp-0x10]");
            __asm__("fchs ");
            __asm__("fstp qword [ebp-0x18]");
            __asm__("fld qword [0x8052670]");
            __asm__("fstp qword [esp]");
            pow(v8, v9, v10, v11);
            __asm__("fchs ");
            __asm__("fstp qword [ebp-0x18]");
            eax12 = v13;
        } else {
            __asm__("fld qword [0x8052670]");
            __asm__("fstp qword [esp]");
            pow(a1, v4, v14, v15);
            __asm__("fstp qword [ebp-0x18]");
            eax12 = v16;
        }
    } else {
        eax12 = a1;
    }
    __asm__("fld qword [ebp-0x18]");
    return eax12;
}

void exp(uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t eax4;
    int16_t fpu_status_word5;

    eax4 = a2;
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax4) = fpu_status_word5;
    __asm__("fstp st0");
    if ((eax4 & 0x4500) != 0x500) {
        __asm__("fld qword [ebp-0x10]");
        __asm__("fldl2e ");
        __asm__("fxch st0, st1");
        __asm__("fmulp st1, st0");
        __asm__("fst st1");
        __asm__("frndint ");
        __asm__("fst st2");
        __asm__("fsubp st1, st0");
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
    } else {
        if (!(eax4 & 0x200)) {
            __asm__("fld qword [ebp-0x10]");
        } else {
            __asm__("fldz ");
        }
    }
    return;
}

void exp10(uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t eax4;
    int16_t fpu_status_word5;

    eax4 = a2;
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax4) = fpu_status_word5;
    __asm__("fstp st0");
    if ((eax4 & 0x4500) != 0x500) {
        __asm__("fld qword [ebp-0x10]");
        __asm__("fldl2t ");
        __asm__("fxch st0, st1");
        __asm__("fmulp st1, st0");
        __asm__("fst st1");
        __asm__("frndint ");
        __asm__("fst st2");
        __asm__("fsubp st1, st0");
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
        __asm__("ffree st1");
    } else {
        if (!(eax4 & 0x200)) {
            __asm__("fld qword [ebp-0x10]");
        } else {
            __asm__("fldz ");
        }
    }
    return;
}

void exp2(uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t eax4;
    int16_t fpu_status_word5;

    eax4 = a2;
    __asm__("fld qword [ebp-0x8]");
    __asm__("fxam ");
    __asm__("wait ");
    *reinterpret_cast<int16_t*>(&eax4) = fpu_status_word5;
    if ((69 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1)) == 5) {
        if (eax4 & 0x200) {
            __asm__("ffreep st0");
            __asm__("fldz ");
        }
    } else {
        __asm__("fld st0");
        __asm__("frndint ");
        __asm__("fsub st1, st0");
        __asm__("fxch st0, st1");
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
        __asm__("fstp st1");
    }
    return;
}

void expm1(uint32_t a1, uint32_t a2, uint32_t a3) {
    int16_t ax4;
    int16_t fpu_status_word5;
    unsigned char ch6;

    __asm__("fld qword [ebp-0x8]");
    __asm__("fxam ");
    __asm__("wait ");
    ax4 = fpu_status_word5;
    ch6 = reinterpret_cast<unsigned char>(69 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax4) + 1));
    if (ch6 != 64) {
        if (ch6 == 5) {
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax4) + 1) & 2) {
                __asm__("ffreep st0");
                __asm__("fld1 ");
                __asm__("fchs ");
            }
        } else {
            __asm__("fldl2e ");
            __asm__("fmulp st1, st0");
            __asm__("fld st0");
            __asm__("frndint ");
            __asm__("fsub st1, st0");
            __asm__("fxch st0, st1");
            __asm__("f2xm1 ");
            __asm__("fscale ");
            __asm__("fxch st0, st1");
            __asm__("fld1 ");
            __asm__("fscale ");
            __asm__("fld1 ");
            __asm__("fsubrp st1, st0");
            __asm__("fstp st1");
            __asm__("fsubp st1, st0");
        }
    }
    return;
}

void fmax(uint32_t a1, uint32_t a2, uint32_t a3, int32_t a4) {
    int16_t ax5;
    int16_t fpu_status_word6;
    int16_t ax7;
    int16_t fpu_status_word8;

    __asm__("fld qword [ebp-0x8]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxam ");
    ax5 = fpu_status_word6;
    __asm__("fxch st0, st1");
    if ((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) & 69) != 1 && (ax7 = fpu_status_word8, *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax7) + 1))) {
        __asm__("fxch st0, st1");
    }
    __asm__("fstp st1");
    return;
}

void fmin(uint32_t a1, uint32_t a2, uint32_t a3, int32_t a4) {
    int16_t ax5;
    int16_t fpu_status_word6;
    int16_t ax7;
    int16_t fpu_status_word8;

    __asm__("fld qword [ebp-0x8]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxam ");
    ax5 = fpu_status_word6;
    if ((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) & 69) == 1 || (ax7 = fpu_status_word8, !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax7) + 1))) {
        __asm__("fxch st0, st1");
    }
    __asm__("fstp st1");
    return;
}

void fmod(uint32_t a1, uint32_t a2, uint32_t a3, int32_t a4) {
    int16_t ax5;
    int16_t fpu_status_word6;

    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x8]");
    do {
        __asm__("fprem ");
        __asm__("wait ");
        ax5 = fpu_status_word6;
    } while (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax5) + 1));
    return;
}

void hypot(uint32_t a1, uint32_t a2, uint32_t a3, int32_t a4) {
    int16_t ax5;
    int16_t fpu_status_word6;
    int16_t ax7;
    int16_t fpu_status_word8;
    unsigned char ah9;
    unsigned char al10;

    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x8]");
    __asm__("fxam ");
    ax5 = fpu_status_word6;
    __asm__("fxch st0, st1");
    __asm__("fld st0");
    __asm__("fstp st0");
    __asm__("fxam ");
    ax7 = fpu_status_word8;
    ah9 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax7) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1));
    if (*reinterpret_cast<int1_t*>(&ah9)) {
        al10 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax7) + 1) & 69);
        if (al10 == 5) {
            addr_804f123_3:
            __asm__("fstp st1");
            __asm__("fabs ");
        } else {
            if ((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) & 69) != 5) {
                if (!(al10 & 1)) {
                    __asm__("fxch st0, st1");
                }
                __asm__("fstp st1");
            } else {
                __asm__("fxch st0, st1");
                goto addr_804f123_3;
            }
        }
    } else {
        __asm__("fxch st0, st1");
        __asm__("fmul st0, st0");
        __asm__("fxch st0, st1");
        __asm__("fmul st0, st0");
        __asm__("faddp st1, st0");
        __asm__("fsqrt ");
    }
    return;
}

uint32_t log(uint32_t a1, uint32_t a2, uint32_t a3) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fldln2 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    return a2;
}

uint32_t log10(uint32_t a1, uint32_t a2, uint32_t a3) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fldlg2 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    return a2;
}

uint32_t log2(uint32_t a1, uint32_t a2, uint32_t a3) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fld1 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    return a2;
}

uint32_t log1p(uint32_t a1, uint32_t a2, uint32_t a3) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fldln2 ");
    __asm__("fxch st0, st1");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fyl2x ");
    return a2;
}

uint32_t lrint(uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t v4;

    __asm__("fld qword [ebp-0x18]");
    __asm__("fistp dword [ebp-0x4]");
    __asm__("wait ");
    return v4;
}

int16_t frac(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);

int16_t Lpow2(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);

int16_t pow(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;
    uint32_t v6;
    int16_t fpu_status_word7;
    uint32_t eax8;
    int16_t fpu_status_word9;
    int16_t ax10;
    int16_t fpu_status_word11;
    int16_t ax12;
    int16_t fpu_status_word13;
    int16_t fpu_status_word14;
    uint32_t v15;
    int16_t fpu_status_word16;

    eax5 = a4;
    v6 = eax5;
    __asm__("fld qword [ebp-0x20]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax5) = fpu_status_word7;
    __asm__("fstp st0");
    eax8 = eax5 & 0x4500;
    if (eax8 == 0x500 || (*reinterpret_cast<int16_t*>(&eax8) = fpu_status_word9, *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1) & 69) ^ 64), !*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1))) {
        __asm__("fld qword [ebp-0x20]");
    } else {
        __asm__("fld qword [0x8052658]");
        __asm__("fld qword [ebp-0x20]");
        __asm__("fucompp ");
        ax10 = fpu_status_word11;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax10) + 1) & 69) ^ 64) {
            __asm__("fld qword [ebp-0x28]");
            __asm__("fld qword [ebp-0x20]");
            __asm__("ftst ");
            ax12 = fpu_status_word13;
            if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax12) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax12) + 1)) {
                if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax12) + 1)) {
                    __asm__("fabs ");
                    __asm__("fxch st0, st1");
                    frac(a3, v6, a1, a2);
                    __asm__("ftst ");
                    *reinterpret_cast<int16_t*>(&eax8) = fpu_status_word14;
                    __asm__("fstp st0");
                    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax8) + 1)) {
                        __asm__("fist dword [ebp-0xc]");
                        __asm__("fxch st0, st1");
                        __asm__("fyl2x ");
                        *reinterpret_cast<int16_t*>(&eax8) = Lpow2(a3, v6, a1, a2);
                        if (v15 & 1) {
                            __asm__("fchs ");
                        }
                    } else {
                        __asm__("fstp st0");
                        __asm__("fchs ");
                        goto addr_804feb9_10;
                    }
                } else {
                    __asm__("fstp st0");
                    __asm__("ftst ");
                    *reinterpret_cast<int16_t*>(&eax8) = fpu_status_word16;
                    if (!reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax8) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax8) + 1))) {
                        __asm__("fstp st0");
                        __asm__("fldz ");
                    } else {
                        if (!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax8) + 1)) {
                            __asm__("fstp st0");
                            __asm__("fld1 ");
                            __asm__("fchs ");
                            goto addr_804feb9_10;
                        }
                    }
                }
            } else {
                __asm__("fyl2x ");
                *reinterpret_cast<int16_t*>(&eax8) = Lpow2(a3, v6, a1, a2);
            }
        } else {
            __asm__("fld qword [ebp-0x28]");
            __asm__("fldl2t ");
            __asm__("fmulp st1, st0");
            *reinterpret_cast<int16_t*>(&eax8) = frac(a3, v6, a1, a2);
            __asm__("f2xm1 ");
            __asm__("fld1 ");
            __asm__("faddp st1, st0");
            __asm__("fscale ");
            __asm__("fstp st1");
        }
    }
    addr_804feef_17:
    return *reinterpret_cast<int16_t*>(&eax8);
    addr_804feb9_10:
    __asm__("fsqrt ");
    goto addr_804feef_17;
}

uint32_t rint(uint32_t a1, uint32_t a2);

uint32_t scalbn(uint32_t a1, uint32_t a2, int32_t a3, uint32_t a4);

uint32_t scalb(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;
    uint32_t v6;
    int16_t fpu_status_word7;
    uint32_t eax8;
    uint32_t ebx9;
    int16_t fpu_status_word10;
    uint32_t eax11;
    int16_t fpu_status_word12;
    uint32_t eax13;
    uint32_t ebx14;
    int16_t fpu_status_word15;
    int16_t fpu_status_word16;
    int16_t ax17;
    int16_t fpu_status_word18;
    int16_t ax19;
    int16_t fpu_status_word20;
    int32_t v21;
    int16_t fpu_status_word22;
    int16_t fpu_status_word23;

    eax5 = a4;
    v6 = eax5;
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax5) = fpu_status_word7;
    __asm__("fstp st0");
    eax8 = eax5 & 0x4500;
    ebx9 = reinterpret_cast<uint1_t>(eax8 == 0x100);
    __asm__("fld qword [ebp-0x18]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax8) = fpu_status_word10;
    __asm__("fstp st0");
    eax11 = eax8 & 0x4500;
    *reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<uint1_t>(eax11 == 0x100);
    if (ebx9 || *reinterpret_cast<unsigned char*>(&eax11)) {
        __asm__("fld qword [ebp-0x10]");
        __asm__("fmul qword [ebp-0x18]");
    } else {
        __asm__("fld qword [ebp-0x10]");
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax11) = fpu_status_word12;
        __asm__("fstp st0");
        if ((eax11 & 0x4500) == 0x400 || (eax11 & 0x4500) == 0x4000) {
            eax13 = 1;
        } else {
            eax13 = 0;
        }
        ebx14 = eax13;
        __asm__("fld qword [ebp-0x18]");
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax13) = fpu_status_word15;
        __asm__("fstp st0");
        if ((eax13 & 0x4500) == 0x400 || (eax13 & 0x4500) == 0x4000) {
            eax11 = 1;
        } else {
            eax11 = 0;
        }
        if (eax11) {
            eax11 = rint(a3, v6);
            __asm__("fld qword [ebp-0x18]");
            __asm__("fucompp ");
            *reinterpret_cast<int16_t*>(&eax11) = fpu_status_word16;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) & 69);
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) == 64) {
                __asm__("fld qword [ebp-0x18]");
                __asm__("fcomp qword [0x80526f8]");
                ax17 = fpu_status_word18;
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax17) + 1) & 69) {
                    __asm__("fld qword [ebp-0x18]");
                    __asm__("fld qword [0x8052700]");
                    __asm__("fcompp ");
                    ax19 = fpu_status_word20;
                    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax19) + 1) & 69) {
                        __asm__("fld qword [ebp-0x18]");
                        __asm__("fnstcw word [ebp-0x1a]");
                        __asm__("fldcw word [ebp-0x1c]");
                        __asm__("fistp dword [ebp-0x20]");
                        __asm__("fldcw word [ebp-0x1a]");
                        eax11 = scalbn(a1, a2, v21, v6);
                    } else {
                        eax11 = scalbn(a1, a2, 0xffff0218, v6);
                    }
                } else {
                    eax11 = scalbn(a1, a2, 0xfde8, v6);
                }
            } else {
                __asm__("fldz ");
                __asm__("fdiv st0, st0");
            }
        } else {
            __asm__("fld qword [ebp-0x18]");
            __asm__("ftst ");
            *reinterpret_cast<int16_t*>(&eax11) = fpu_status_word22;
            __asm__("fstp st0");
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) & 69) {
                __asm__("fldz ");
                __asm__("fld qword [ebp-0x10]");
                __asm__("fucompp ");
                *reinterpret_cast<int16_t*>(&eax11) = fpu_status_word23;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) & 69) ^ 64);
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1)) {
                    if (ebx14) {
                        __asm__("fld qword [ebp-0x10]");
                        __asm__("fchs ");
                        __asm__("fdiv qword [ebp-0x18]");
                    } else {
                        __asm__("fldz ");
                        __asm__("fdiv st0, st0");
                    }
                } else {
                    __asm__("fld qword [ebp-0x10]");
                }
            } else {
                __asm__("fld qword [ebp-0x10]");
                __asm__("fmul qword [ebp-0x18]");
            }
        }
    }
    return eax11;
}

uint32_t sinh(uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t eax4;
    int16_t ax5;
    int16_t fpu_status_word6;
    int16_t fpu_status_word7;
    uint32_t eax8;
    uint32_t v9;
    uint32_t v10;
    int16_t fpu_status_word11;

    eax4 = a2;
    __asm__("fld qword [ebp-0x20]");
    __asm__("ftst ");
    ax5 = fpu_status_word6;
    __asm__("fstp st0");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) & 5) {
        __asm__("fld qword [ebp-0x20]");
        __asm__("fchs ");
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax4) = fpu_status_word7;
        __asm__("fstp st0");
        if ((eax4 & 0x4500) != 0x500) {
            __asm__("fld qword [ebp-0x20]");
            __asm__("fchs ");
            __asm__("fstp qword [ebp-0x28]");
            eax8 = v9;
            __asm__("fld qword [ebp-0x28]");
            __asm__("fldl2e ");
            __asm__("fxch st0, st1");
            __asm__("fmulp st1, st0");
            __asm__("fst st1");
            __asm__("frndint ");
            __asm__("fst st2");
            __asm__("fsubp st1, st0");
            __asm__("f2xm1 ");
            __asm__("fld1 ");
            __asm__("faddp st1, st0");
            __asm__("fscale ");
            __asm__("fstp qword [ebp-0x18]");
        } else {
            eax8 = eax4 & 0x200;
            if (!eax8) {
                __asm__("fld qword [ebp-0x20]");
                __asm__("fchs ");
                __asm__("fstp qword [ebp-0x28]");
                eax8 = v10;
            } else {
                __asm__("fldz ");
                __asm__("fstp qword [ebp-0x18]");
            }
        }
        __asm__("fld1 ");
        __asm__("fdiv qword [ebp-0x18]");
        __asm__("fsub qword [ebp-0x18]");
        __asm__("fld qword [0x8052690]");
        __asm__("fdivp st1, st0");
    } else {
        __asm__("fld qword [ebp-0x20]");
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax4) = fpu_status_word11;
        __asm__("fstp st0");
        eax8 = eax4 & 0x4500;
        if (eax8 != 0x500) {
            __asm__("fld qword [ebp-0x20]");
            __asm__("fldl2e ");
            __asm__("fxch st0, st1");
            __asm__("fmulp st1, st0");
            __asm__("fst st1");
            __asm__("frndint ");
            __asm__("fst st2");
            __asm__("fsubp st1, st0");
            __asm__("f2xm1 ");
            __asm__("fld1 ");
            __asm__("faddp st1, st0");
            __asm__("fscale ");
            __asm__("fstp qword [ebp-0x10]");
        } else {
            eax8 = eax4 & 0x200;
            if (!eax8) {
                __asm__("fld qword [ebp-0x20]");
                __asm__("fstp qword [ebp-0x10]");
            } else {
                __asm__("fldz ");
                __asm__("fstp qword [ebp-0x10]");
            }
        }
        __asm__("fld1 ");
        __asm__("fdiv qword [ebp-0x10]");
        __asm__("fld qword [ebp-0x10]");
        __asm__("fsubrp st1, st0");
        __asm__("fld qword [0x8052690]");
        __asm__("fdivp st1, st0");
    }
    return eax8;
}

uint32_t sqrt(uint32_t a1, uint32_t a2, uint32_t a3) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fsqrt ");
    return a2;
}

void tanh(uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t eax4;
    int16_t ax5;
    int16_t fpu_status_word6;
    int16_t ax7;
    int16_t fpu_status_word8;
    int16_t fpu_status_word9;

    eax4 = a2;
    __asm__("fld qword [ebp-0x20]");
    __asm__("fcomp qword [0x80526b8]");
    ax5 = fpu_status_word6;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) & 69) {
        __asm__("fld qword [ebp-0x20]");
        __asm__("fld qword [0x80526c0]");
        __asm__("fcompp ");
        ax7 = fpu_status_word8;
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax7) + 1) & 69) {
            __asm__("fld qword [ebp-0x20]");
            __asm__("fxam ");
            *reinterpret_cast<int16_t*>(&eax4) = fpu_status_word9;
            __asm__("fstp st0");
            if ((eax4 & 0x4500) != 0x500) {
                __asm__("fld qword [ebp-0x20]");
                __asm__("fldl2e ");
                __asm__("fxch st0, st1");
                __asm__("fmulp st1, st0");
                __asm__("fst st1");
                __asm__("frndint ");
                __asm__("fst st2");
                __asm__("fsubp st1, st0");
                __asm__("f2xm1 ");
                __asm__("fld1 ");
                __asm__("faddp st1, st0");
                __asm__("fscale ");
                __asm__("fstp qword [ebp-0x10]");
            } else {
                if (!(eax4 & 0x200)) {
                    __asm__("fld qword [ebp-0x20]");
                    __asm__("fstp qword [ebp-0x10]");
                } else {
                    __asm__("fldz ");
                    __asm__("fstp qword [ebp-0x10]");
                }
            }
            __asm__("fld1 ");
            __asm__("fdiv qword [ebp-0x10]");
            __asm__("fstp qword [ebp-0x18]");
            __asm__("fld qword [ebp-0x10]");
            __asm__("fsub qword [ebp-0x18]");
            __asm__("fld qword [ebp-0x10]");
            __asm__("fadd qword [ebp-0x18]");
            __asm__("fdivp st1, st0");
        } else {
            __asm__("fld1 ");
            __asm__("fchs ");
        }
    } else {
        __asm__("fld1 ");
    }
    return;
}

int16_t frac(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    int16_t ax5;
    int16_t v6;

    __asm__("fnstcw word [ebp-0x2]");
    __asm__("wait ");
    ax5 = v6;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) & 0xf3) | 4);
    __asm__("fldcw word [ebp-0x4]");
    __asm__("fld st0");
    __asm__("frndint ");
    __asm__("fldcw word [ebp-0x2]");
    __asm__("fxch st0, st1");
    __asm__("fsub st0, st1");
    return ax5;
}

int16_t Lpow2(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t ebp5;
    int16_t ax6;

    ax6 = frac(ebp5, __return_address(), a1, a2);
    __asm__("f2xm1 ");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fscale ");
    __asm__("fstp st1");
    return ax6;
}

int16_t powf(int32_t a1) {
    uint32_t eax2;
    int16_t fpu_status_word3;
    uint32_t eax4;
    int16_t fpu_status_word5;
    int16_t ax6;
    int16_t fpu_status_word7;
    int16_t ax8;
    int16_t fpu_status_word9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    int16_t fpu_status_word14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    int16_t fpu_status_word20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    uint32_t v25;
    uint32_t v26;
    uint32_t v27;
    uint32_t v28;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax2) = fpu_status_word3;
    __asm__("fstp st0");
    eax4 = eax2 & 0x4500;
    if (eax4 == 0x500 || (*reinterpret_cast<int16_t*>(&eax4) = fpu_status_word5, *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1) & 69) ^ 64), !*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1))) {
        __asm__("fld dword [ebp+0x8]");
    } else {
        __asm__("fld dword [0x8052650]");
        __asm__("fld dword [ebp+0x8]");
        __asm__("fucompp ");
        ax6 = fpu_status_word7;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax6) + 1) & 69) ^ 64) {
            __asm__("fld dword [ebp+0xc]");
            __asm__("fld dword [ebp+0x8]");
            __asm__("ftst ");
            ax8 = fpu_status_word9;
            if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax8) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax8) + 1)) {
                if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax8) + 1)) {
                    __asm__("fabs ");
                    __asm__("fxch st0, st1");
                    frac(v10, v11, v12, v13);
                    __asm__("ftst ");
                    *reinterpret_cast<int16_t*>(&eax4) = fpu_status_word14;
                    __asm__("fstp st0");
                    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax4) + 1)) {
                        __asm__("fist dword [ebp-0x8]");
                        __asm__("fxch st0, st1");
                        __asm__("fyl2x ");
                        *reinterpret_cast<int16_t*>(&eax4) = Lpow2(v15, v16, v17, v18);
                        if (v19 & 1) {
                            __asm__("fchs ");
                        }
                    } else {
                        __asm__("fstp st0");
                        __asm__("fchs ");
                        goto addr_804fdd7_10;
                    }
                } else {
                    __asm__("fstp st0");
                    __asm__("ftst ");
                    *reinterpret_cast<int16_t*>(&eax4) = fpu_status_word20;
                    if (!reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax4) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax4) + 1))) {
                        __asm__("fstp st0");
                        __asm__("fldz ");
                    } else {
                        if (!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax4) + 1)) {
                            __asm__("fstp st0");
                            __asm__("fld1 ");
                            __asm__("fchs ");
                            goto addr_804fdd7_10;
                        }
                    }
                }
            } else {
                __asm__("fyl2x ");
                *reinterpret_cast<int16_t*>(&eax4) = Lpow2(v21, v22, v23, v24);
            }
        } else {
            __asm__("fld dword [ebp+0xc]");
            __asm__("fldl2t ");
            __asm__("fmulp st1, st0");
            *reinterpret_cast<int16_t*>(&eax4) = frac(v25, v26, v27, v28);
            __asm__("f2xm1 ");
            __asm__("fld1 ");
            __asm__("faddp st1, st0");
            __asm__("fscale ");
            __asm__("fstp st1");
        }
    }
    addr_804fe0d_17:
    return *reinterpret_cast<int16_t*>(&eax4);
    addr_804fdd7_10:
    __asm__("fsqrt ");
    goto addr_804fe0d_17;
}

int16_t powl(int32_t a1, int32_t a2, int32_t a3) {
    uint32_t eax4;
    int16_t fpu_status_word5;
    uint32_t eax6;
    int16_t fpu_status_word7;
    int16_t ax8;
    int16_t fpu_status_word9;
    int16_t ax10;
    int16_t fpu_status_word11;
    uint32_t v12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    int16_t fpu_status_word16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint32_t v21;
    int16_t fpu_status_word22;
    uint32_t v23;
    uint32_t v24;
    uint32_t v25;
    uint32_t v26;
    uint32_t v27;
    uint32_t v28;
    uint32_t v29;
    uint32_t v30;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax4) = fpu_status_word5;
    __asm__("fstp st0");
    eax6 = eax4 & 0x4500;
    if (eax6 == 0x500 || (*reinterpret_cast<int16_t*>(&eax6) = fpu_status_word7, *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) & 69) ^ 64), !*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1))) {
        __asm__("fld tword [ebp+0x8]");
    } else {
        __asm__("fld tword [0x8052660]");
        __asm__("fld tword [ebp+0x8]");
        __asm__("fucompp ");
        ax8 = fpu_status_word9;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax8) + 1) & 69) ^ 64) {
            __asm__("fld tword [ebp+0x14]");
            __asm__("fld tword [ebp+0x8]");
            __asm__("ftst ");
            ax10 = fpu_status_word11;
            if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax10) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax10) + 1)) {
                if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax10) + 1)) {
                    __asm__("fabs ");
                    __asm__("fxch st0, st1");
                    frac(v12, v13, v14, v15);
                    __asm__("ftst ");
                    *reinterpret_cast<int16_t*>(&eax6) = fpu_status_word16;
                    __asm__("fstp st0");
                    if (*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax6) + 1)) {
                        __asm__("fist dword [ebp-0x8]");
                        __asm__("fxch st0, st1");
                        __asm__("fyl2x ");
                        *reinterpret_cast<int16_t*>(&eax6) = Lpow2(v17, v18, v19, v20);
                        if (v21 & 1) {
                            __asm__("fchs ");
                        }
                    } else {
                        __asm__("fstp st0");
                        __asm__("fchs ");
                        goto addr_804ff83_10;
                    }
                } else {
                    __asm__("fstp st0");
                    __asm__("ftst ");
                    *reinterpret_cast<int16_t*>(&eax6) = fpu_status_word22;
                    if (!reinterpret_cast<uint1_t>(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax6) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax6) + 1))) {
                        __asm__("fstp st0");
                        __asm__("fldz ");
                    } else {
                        if (!*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax6) + 1)) {
                            __asm__("fstp st0");
                            __asm__("fld1 ");
                            __asm__("fchs ");
                            goto addr_804ff83_10;
                        }
                    }
                }
            } else {
                __asm__("fyl2x ");
                *reinterpret_cast<int16_t*>(&eax6) = Lpow2(v23, v24, v25, v26);
            }
        } else {
            __asm__("fld tword [ebp+0x14]");
            __asm__("fldl2t ");
            __asm__("fmulp st1, st0");
            *reinterpret_cast<int16_t*>(&eax6) = frac(v27, v28, v29, v30);
            __asm__("f2xm1 ");
            __asm__("fld1 ");
            __asm__("faddp st1, st0");
            __asm__("fscale ");
            __asm__("fstp st1");
        }
    }
    addr_804ffb9_17:
    return *reinterpret_cast<int16_t*>(&eax6);
    addr_804ff83_10:
    __asm__("fsqrt ");
    goto addr_804ffb9_17;
}

uint32_t scalbn(uint32_t a1, uint32_t a2, int32_t a3, uint32_t a4) {
    __asm__("fild dword [ebp+0x10]");
    __asm__("fld qword [ebp-0x8]");
    __asm__("fscale ");
    return a2;
}

/* __x86.get_pc_thunk.bp */
void __x86_get_pc_thunk_bp() {
    return;
}

int32_t puts = 0x8049056;

void fun_8049050(uint32_t a1) {
    goto puts;
}

int32_t printf = 0x8049046;

void fun_8049040(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7) {
    goto printf;
}

int32_t putchar = 0x8049086;

void fun_8049080(uint32_t a1, uint32_t a2, uint32_t a3) {
    goto putchar;
}

void cosh(uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t eax4;
    int16_t fpu_status_word5;

    eax4 = a2;
    __asm__("fld qword [ebp-0x20]");
    __asm__("fabs ");
    __asm__("fstp qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax4) = fpu_status_word5;
    __asm__("fstp st0");
    if ((eax4 & 0x4500) != 0x500) {
        __asm__("fld qword [ebp-0x10]");
        __asm__("fldl2e ");
        __asm__("fxch st0, st1");
        __asm__("fmulp st1, st0");
        __asm__("fst st1");
        __asm__("frndint ");
        __asm__("fst st2");
        __asm__("fsubp st1, st0");
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
        __asm__("fstp qword [ebp-0x10]");
    } else {
        if (eax4 & 0x200) {
            __asm__("fldz ");
            __asm__("fstp qword [ebp-0x10]");
        }
    }
    __asm__("fld1 ");
    __asm__("fdiv qword [ebp-0x10]");
    __asm__("fadd qword [ebp-0x10]");
    __asm__("fld qword [0x8052690]");
    __asm__("fdivp st1, st0");
    return;
}

uint32_t llrint(uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t v4;

    __asm__("fld qword [ebp-0x18]");
    __asm__("fistp qword [ebp-0x8]");
    __asm__("wait ");
    return v4;
}

int32_t exit = 0x8049066;

void fun_8049060() {
    goto exit;
}

uint32_t rint(uint32_t a1, uint32_t a2) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("frndint ");
    return a2;
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
    eax3 = *reinterpret_cast<int32_t*>(ebx4 + 0xcff3 - 4);
    if (eax3) {
        eax3();
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void main();

void fun_8049092() {
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
    fun_80490c7(edx5, v4, eax6);
    ebx7 = ebx8 + 0xcf5c;
    fun_8049070(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x4e20, ebx7 - 0x4db0, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_80490d2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_8049172() {
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

void fun_80491a2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    if (1 || 1) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        putchar(0x8056024, 0);
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void _init();

void fun_80511e2() {
    uint64_t v1;
    int16_t ds2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t edi5;
    int32_t v6;
    int32_t ebx7;
    int32_t esi8;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bp();
    ebp3 = ebp4 + 0x4e16;
    edi5 = v6;
    _init();
    ebx7 = ebp3 - 0xf0 - (ebp3 - 0xf4) >> 2;
    if (ebx7) {
        esi8 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebp3 + esi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), edi5, 0x8051201);
            ++esi8;
        } while (ebx7 != esi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_8051252() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_805125e() {
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

void fun_8049117() {
}

void fun_8049164() {
}

void fun_8049191() {
}

void main() {
    uint32_t v1;
    uint32_t v2;
    uint32_t v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    int32_t v13;
    int32_t v14;
    int16_t ax15;
    int16_t fpu_status_word16;
    int32_t v17;
    int16_t ax18;
    int16_t fpu_status_word19;
    uint32_t eax20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    uint32_t v25;
    uint32_t v26;
    uint32_t v27;
    uint32_t v28;
    uint32_t v29;
    uint32_t v30;
    uint32_t v31;
    uint32_t v32;
    uint32_t v33;
    uint32_t v34;
    uint32_t v35;
    uint32_t v36;
    uint32_t v37;
    uint32_t v38;
    int32_t v39;
    int32_t v40;
    int16_t ax41;
    int16_t fpu_status_word42;
    int32_t v43;
    int16_t ax44;
    int16_t fpu_status_word45;
    uint32_t eax46;
    uint32_t v47;
    uint32_t v48;
    uint32_t v49;
    uint32_t v50;
    uint32_t v51;
    uint32_t v52;
    uint32_t v53;
    uint32_t v54;
    uint32_t v55;
    uint32_t v56;
    uint32_t v57;
    uint32_t v58;
    uint32_t v59;
    uint32_t v60;
    uint32_t v61;
    uint32_t v62;
    uint32_t v63;
    uint32_t v64;
    int32_t v65;
    int32_t v66;
    int32_t v67;
    int32_t v68;
    int32_t v69;
    int32_t v70;
    int16_t ax71;
    int16_t fpu_status_word72;
    int32_t v73;
    int32_t v74;
    int32_t v75;
    int16_t ax76;
    int16_t fpu_status_word77;
    uint32_t eax78;
    uint32_t v79;
    uint32_t v80;
    uint32_t v81;
    uint32_t v82;
    int32_t v83;
    int32_t v84;
    int32_t v85;
    int32_t v86;
    int32_t v87;
    int32_t v88;
    int16_t ax89;
    int16_t fpu_status_word90;
    int32_t v91;
    int32_t v92;
    int32_t v93;
    int16_t ax94;
    int16_t fpu_status_word95;
    uint32_t eax96;
    uint32_t v97;
    uint32_t v98;
    uint32_t v99;
    uint32_t v100;
    int32_t v101;
    int32_t v102;
    int32_t v103;
    int32_t v104;
    int32_t v105;
    int32_t v106;
    int16_t ax107;
    int16_t fpu_status_word108;
    int32_t v109;
    int32_t v110;
    int32_t v111;
    int16_t ax112;
    int16_t fpu_status_word113;
    uint32_t eax114;
    uint32_t v115;
    uint32_t v116;
    uint32_t v117;
    uint32_t v118;
    int32_t v119;
    int32_t v120;
    int32_t v121;
    int32_t v122;
    int32_t v123;
    int32_t v124;
    int16_t ax125;
    int16_t fpu_status_word126;
    int32_t v127;
    int32_t v128;
    int32_t v129;
    int16_t ax130;
    int16_t fpu_status_word131;
    uint32_t eax132;
    uint32_t v133;
    uint32_t v134;
    uint32_t v135;
    uint32_t v136;
    int32_t v137;
    int32_t v138;
    int32_t v139;
    int32_t v140;
    int32_t v141;
    int32_t v142;
    int16_t ax143;
    int16_t fpu_status_word144;
    int32_t v145;
    int32_t v146;
    int32_t v147;
    int16_t ax148;
    int16_t fpu_status_word149;
    uint32_t eax150;
    uint32_t v151;
    uint32_t v152;
    uint32_t v153;
    uint32_t v154;
    int32_t v155;
    int32_t v156;
    int32_t v157;
    int32_t v158;
    int32_t v159;
    int32_t v160;
    int16_t ax161;
    int16_t fpu_status_word162;
    int32_t v163;
    int32_t v164;
    int32_t v165;
    int16_t ax166;
    int16_t fpu_status_word167;
    uint32_t eax168;
    uint32_t v169;
    uint32_t v170;
    uint32_t v171;
    uint32_t v172;
    int32_t v173;
    int32_t v174;
    int32_t v175;
    int32_t v176;
    int32_t v177;
    int32_t v178;
    int16_t ax179;
    int16_t fpu_status_word180;
    int32_t v181;
    int32_t v182;
    int32_t v183;
    int16_t ax184;
    int16_t fpu_status_word185;
    uint32_t eax186;
    uint32_t v187;
    uint32_t v188;
    uint32_t v189;
    uint32_t v190;
    int32_t v191;
    int32_t v192;
    int32_t v193;
    int32_t v194;
    int32_t v195;
    int32_t v196;
    int16_t ax197;
    int16_t fpu_status_word198;
    int32_t v199;
    int32_t v200;
    int32_t v201;
    int16_t ax202;
    int16_t fpu_status_word203;
    uint32_t eax204;
    uint32_t v205;
    uint32_t v206;
    uint32_t v207;
    uint32_t v208;
    int32_t v209;
    int32_t v210;
    int32_t v211;
    int32_t v212;
    int32_t v213;
    int32_t v214;
    int16_t ax215;
    int16_t fpu_status_word216;
    int32_t v217;
    int32_t v218;
    int32_t v219;
    int16_t ax220;
    int16_t fpu_status_word221;
    uint32_t eax222;
    uint32_t v223;
    uint32_t v224;
    uint32_t v225;
    uint32_t v226;
    int32_t v227;
    int32_t v228;
    int32_t v229;
    int32_t v230;
    int32_t v231;
    int32_t v232;
    int16_t ax233;
    int16_t fpu_status_word234;
    int32_t v235;
    int32_t v236;
    int32_t v237;
    int16_t ax238;
    int16_t fpu_status_word239;
    uint32_t eax240;
    uint32_t v241;
    uint32_t v242;
    uint32_t v243;
    uint32_t v244;
    uint32_t v245;
    uint32_t v246;
    uint32_t v247;
    uint32_t v248;
    uint32_t v249;
    uint32_t v250;
    uint32_t v251;
    uint32_t v252;
    uint32_t v253;
    uint32_t v254;
    uint32_t v255;
    uint32_t v256;
    uint32_t v257;
    uint32_t v258;
    uint32_t v259;
    uint32_t v260;
    uint32_t v261;
    uint32_t v262;
    uint32_t v263;
    uint32_t v264;
    int16_t ax265;
    int16_t fpu_status_word266;
    uint32_t v267;
    int16_t ax268;
    int16_t fpu_status_word269;
    uint32_t eax270;
    uint32_t v271;
    uint32_t v272;
    uint32_t v273;
    uint32_t v274;
    uint32_t v275;
    uint32_t v276;
    int16_t ax277;
    int16_t fpu_status_word278;
    uint32_t v279;
    int16_t ax280;
    int16_t fpu_status_word281;
    uint32_t eax282;
    uint32_t v283;
    uint32_t v284;
    uint32_t v285;
    uint32_t v286;
    uint32_t v287;
    uint32_t v288;
    int16_t ax289;
    int16_t fpu_status_word290;
    uint32_t eax291;
    uint32_t v292;
    uint32_t v293;
    uint32_t v294;
    uint32_t v295;
    uint32_t v296;
    uint32_t v297;
    uint32_t v298;
    uint32_t v299;
    uint32_t v300;
    uint32_t v301;
    uint32_t v302;
    uint32_t v303;
    uint32_t v304;
    uint32_t v305;
    uint32_t v306;
    uint32_t v307;
    uint32_t v308;
    uint32_t v309;
    uint32_t v310;
    uint32_t v311;
    int16_t fpu_status_word312;
    uint32_t eax313;
    uint32_t ebx314;
    int16_t fpu_status_word315;
    int16_t fpu_status_word316;
    uint32_t eax317;
    int16_t fpu_status_word318;
    uint32_t eax319;
    int16_t fpu_status_word320;
    uint32_t eax321;
    uint32_t ebx322;
    int16_t fpu_status_word323;
    int16_t fpu_status_word324;
    uint32_t eax325;
    int16_t fpu_status_word326;
    uint32_t eax327;
    int16_t fpu_status_word328;
    uint32_t eax329;
    uint32_t ebx330;
    int16_t fpu_status_word331;
    int16_t fpu_status_word332;
    uint32_t eax333;
    int16_t fpu_status_word334;
    uint32_t eax335;
    int16_t ax336;
    int16_t fpu_status_word337;
    int16_t ax338;
    int16_t fpu_status_word339;
    uint32_t eax340;
    uint32_t v341;
    uint32_t v342;
    int16_t fpu_status_word343;
    uint32_t eax344;
    uint32_t ebx345;
    int16_t fpu_status_word346;
    int16_t fpu_status_word347;
    uint32_t eax348;
    int16_t fpu_status_word349;
    uint32_t eax350;
    int16_t ax351;
    int16_t fpu_status_word352;
    int16_t ax353;
    int16_t fpu_status_word354;
    uint32_t eax355;
    uint32_t v356;
    uint32_t v357;
    int16_t fpu_status_word358;
    uint32_t eax359;
    uint32_t ebx360;
    int16_t fpu_status_word361;
    int16_t fpu_status_word362;
    uint32_t eax363;
    int16_t fpu_status_word364;
    uint32_t eax365;
    int16_t ax366;
    int16_t fpu_status_word367;
    int16_t ax368;
    int16_t fpu_status_word369;
    uint32_t eax370;
    uint32_t v371;
    uint32_t v372;
    int16_t ax373;
    int16_t fpu_status_word374;
    int16_t ax375;
    int16_t fpu_status_word376;
    uint32_t eax377;
    uint32_t v378;
    uint32_t v379;
    int16_t ax380;
    int16_t fpu_status_word381;
    int16_t ax382;
    int16_t fpu_status_word383;
    uint32_t eax384;
    uint32_t v385;
    uint32_t v386;
    int32_t v387;
    int32_t v388;
    int16_t ax389;
    int16_t fpu_status_word390;
    int32_t v391;
    int16_t ax392;
    int16_t fpu_status_word393;
    uint32_t eax394;
    uint32_t v395;
    uint32_t v396;
    int32_t v397;
    int32_t v398;
    int16_t ax399;
    int16_t fpu_status_word400;
    int32_t v401;
    int16_t ax402;
    int16_t fpu_status_word403;
    uint32_t eax404;
    uint32_t v405;
    uint32_t v406;
    int16_t ax407;
    int16_t fpu_status_word408;
    int16_t ax409;
    int16_t fpu_status_word410;
    uint32_t eax411;
    int16_t ax412;
    int16_t fpu_status_word413;
    int16_t ax414;
    int16_t fpu_status_word415;
    uint32_t eax416;
    int16_t ax417;
    int16_t fpu_status_word418;
    int16_t ax419;
    int16_t fpu_status_word420;
    uint32_t eax421;
    int16_t ax422;
    int16_t fpu_status_word423;
    int16_t ax424;
    int16_t fpu_status_word425;
    uint32_t eax426;
    int32_t v427;
    int32_t v428;
    int16_t ax429;
    int16_t fpu_status_word430;
    int32_t v431;
    int16_t ax432;
    int16_t fpu_status_word433;
    uint32_t eax434;
    uint32_t v435;
    uint32_t v436;
    int32_t v437;
    int32_t v438;
    int16_t ax439;
    int16_t fpu_status_word440;
    int32_t v441;
    int16_t ax442;
    int16_t fpu_status_word443;
    uint32_t eax444;
    uint32_t v445;
    uint32_t v446;
    int16_t ax447;
    int16_t fpu_status_word448;
    int16_t ax449;
    int16_t fpu_status_word450;
    uint32_t eax451;
    int16_t ax452;
    int16_t fpu_status_word453;
    int16_t ax454;
    int16_t fpu_status_word455;
    uint32_t eax456;
    int16_t ax457;
    int16_t fpu_status_word458;
    int16_t ax459;
    int16_t fpu_status_word460;
    uint32_t eax461;
    int16_t ax462;
    int16_t fpu_status_word463;
    int16_t ax464;
    int16_t fpu_status_word465;
    uint32_t eax466;
    int32_t v467;
    int32_t v468;
    int16_t ax469;
    int16_t fpu_status_word470;
    int32_t v471;
    int16_t ax472;
    int16_t fpu_status_word473;
    uint32_t eax474;
    uint32_t v475;
    uint32_t v476;
    int32_t v477;
    int32_t v478;
    int16_t ax479;
    int16_t fpu_status_word480;
    int32_t v481;
    int16_t ax482;
    int16_t fpu_status_word483;
    uint32_t eax484;
    uint32_t v485;
    uint32_t v486;
    int32_t v487;
    int32_t v488;
    int16_t ax489;
    int16_t fpu_status_word490;
    int32_t v491;
    int16_t ax492;
    int16_t fpu_status_word493;
    uint32_t eax494;
    uint32_t v495;
    uint32_t v496;
    int32_t v497;
    int32_t v498;
    int16_t ax499;
    int16_t fpu_status_word500;
    int32_t v501;
    int16_t ax502;
    int16_t fpu_status_word503;
    uint32_t eax504;
    uint32_t v505;
    uint32_t v506;
    int32_t v507;
    int32_t v508;
    int16_t ax509;
    int16_t fpu_status_word510;
    int32_t v511;
    int16_t ax512;
    int16_t fpu_status_word513;
    uint32_t eax514;
    uint32_t v515;
    uint32_t v516;
    int32_t v517;
    int32_t v518;
    int16_t ax519;
    int16_t fpu_status_word520;
    int32_t v521;
    int16_t ax522;
    int16_t fpu_status_word523;
    uint32_t eax524;
    uint32_t v525;
    uint32_t v526;
    uint32_t eax527;
    uint32_t eax528;
    uint32_t eax529;
    int32_t v530;
    int32_t v531;
    int16_t ax532;
    int16_t fpu_status_word533;
    int32_t v534;
    int16_t ax535;
    int16_t fpu_status_word536;
    uint32_t eax537;
    uint32_t v538;
    uint32_t v539;
    int32_t v540;
    int32_t v541;
    int16_t ax542;
    int16_t fpu_status_word543;
    int32_t v544;
    int16_t ax545;
    int16_t fpu_status_word546;
    uint32_t eax547;
    uint32_t v548;
    uint32_t v549;
    int32_t v550;
    int16_t ax551;
    int16_t fpu_status_word552;
    uint32_t eax553;
    uint32_t v554;
    uint32_t v555;
    uint32_t v556;
    uint32_t v557;
    int16_t ax558;
    int16_t fpu_status_word559;
    int16_t ax560;
    int16_t fpu_status_word561;
    uint32_t eax562;
    int16_t ax563;
    int16_t fpu_status_word564;
    int16_t ax565;
    int16_t fpu_status_word566;
    uint32_t eax567;
    int16_t ax568;
    int16_t fpu_status_word569;
    uint32_t eax570;
    uint32_t v571;
    uint32_t v572;
    uint32_t v573;
    uint32_t v574;
    uint32_t eax575;
    uint32_t eax576;
    uint32_t ecx577;
    uint32_t eax578;
    uint32_t eax579;
    uint32_t eax580;
    uint32_t eax581;
    uint32_t eax582;
    uint32_t eax583;
    uint32_t eax584;
    uint32_t eax585;
    uint32_t eax586;
    int16_t ax587;
    int16_t fpu_status_word588;
    int16_t ax589;
    int16_t fpu_status_word590;
    uint32_t eax591;
    int16_t ax592;
    int16_t fpu_status_word593;
    int16_t ax594;
    int16_t fpu_status_word595;
    uint32_t eax596;
    int16_t ax597;
    int16_t fpu_status_word598;
    int16_t ax599;
    int16_t fpu_status_word600;
    uint32_t eax601;
    int16_t ax602;
    int16_t fpu_status_word603;
    int16_t ax604;
    int16_t fpu_status_word605;
    uint32_t eax606;
    uint32_t eax607;
    uint32_t eax608;
    uint32_t eax609;
    uint32_t eax610;
    uint32_t eax611;
    uint32_t eax612;
    uint32_t eax613;
    uint32_t eax614;
    uint32_t eax615;
    uint32_t eax616;
    uint32_t eax617;
    uint32_t eax618;
    uint32_t eax619;
    uint32_t eax620;
    uint32_t v621;
    uint32_t v622;
    uint32_t v623;
    uint32_t v624;
    uint32_t v625;
    int16_t ax626;
    int16_t fpu_status_word627;
    uint32_t eax628;
    uint32_t v629;
    uint32_t v630;
    uint32_t v631;
    uint32_t v632;
    uint32_t v633;
    int16_t ax634;
    int16_t fpu_status_word635;
    uint32_t eax636;
    uint32_t v637;
    uint32_t v638;
    uint32_t v639;
    uint32_t v640;
    uint32_t v641;
    uint32_t v642;
    int16_t ax643;
    int16_t fpu_status_word644;
    uint32_t v645;
    int16_t ax646;
    int16_t fpu_status_word647;
    uint32_t eax648;
    int16_t ax649;
    int16_t fpu_status_word650;
    int16_t ax651;
    int16_t fpu_status_word652;
    uint32_t eax653;
    uint32_t v654;
    uint32_t v655;
    int16_t ax656;
    int16_t fpu_status_word657;
    uint32_t v658;
    int16_t ax659;
    int16_t fpu_status_word660;
    uint32_t eax661;
    int16_t ax662;
    int16_t fpu_status_word663;
    int16_t ax664;
    int16_t fpu_status_word665;
    uint32_t eax666;
    uint32_t v667;
    uint32_t v668;
    int16_t ax669;
    int16_t fpu_status_word670;
    uint32_t v671;
    int16_t ax672;
    int16_t fpu_status_word673;
    uint32_t eax674;
    uint32_t v675;
    uint32_t v676;
    int16_t ax677;
    int16_t fpu_status_word678;
    uint32_t v679;
    int16_t ax680;
    int16_t fpu_status_word681;
    uint32_t eax682;
    uint32_t v683;
    uint32_t v684;
    int16_t ax685;
    int16_t fpu_status_word686;
    uint32_t v687;
    int16_t ax688;
    int16_t fpu_status_word689;
    uint32_t eax690;
    uint32_t v691;
    int16_t ax692;
    int16_t fpu_status_word693;
    uint32_t eax694;
    uint32_t v695;
    uint32_t v696;
    uint32_t v697;
    uint32_t v698;
    uint32_t v699;
    int16_t ax700;
    int16_t fpu_status_word701;
    uint32_t eax702;
    uint32_t v703;
    uint32_t v704;
    uint32_t v705;
    uint32_t v706;
    uint32_t v707;
    uint32_t v708;
    int16_t ax709;
    int16_t fpu_status_word710;
    uint32_t v711;
    int16_t ax712;
    int16_t fpu_status_word713;
    uint32_t eax714;
    uint32_t v715;
    uint32_t v716;
    int16_t ax717;
    int16_t fpu_status_word718;
    uint32_t v719;
    int16_t ax720;
    int16_t fpu_status_word721;
    uint32_t eax722;
    uint32_t v723;
    int16_t ax724;
    int16_t fpu_status_word725;
    uint32_t eax726;
    uint32_t v727;
    uint32_t v728;
    uint32_t v729;
    uint32_t v730;
    uint32_t v731;
    int16_t ax732;
    int16_t fpu_status_word733;
    uint32_t eax734;
    uint32_t v735;
    uint32_t v736;
    uint32_t v737;
    uint32_t v738;
    uint32_t v739;
    uint32_t v740;
    int16_t ax741;
    int16_t fpu_status_word742;
    uint32_t v743;
    int16_t ax744;
    int16_t fpu_status_word745;
    uint32_t eax746;
    uint32_t v747;
    uint32_t v748;
    int16_t ax749;
    int16_t fpu_status_word750;
    uint32_t v751;
    int16_t ax752;
    int16_t fpu_status_word753;
    uint32_t eax754;
    int16_t ax755;
    int16_t fpu_status_word756;
    int16_t ax757;
    int16_t fpu_status_word758;
    uint32_t eax759;
    int16_t ax760;
    int16_t fpu_status_word761;
    int16_t ax762;
    int16_t fpu_status_word763;
    uint32_t eax764;
    int16_t ax765;
    int16_t fpu_status_word766;
    uint32_t eax767;
    uint32_t v768;
    uint32_t v769;
    uint32_t v770;
    uint32_t v771;
    int16_t ax772;
    int16_t fpu_status_word773;
    int16_t ax774;
    int16_t fpu_status_word775;
    uint32_t eax776;
    int16_t ax777;
    int16_t fpu_status_word778;
    int16_t ax779;
    int16_t fpu_status_word780;
    uint32_t eax781;
    int16_t ax782;
    int16_t fpu_status_word783;
    int16_t ax784;
    int16_t fpu_status_word785;
    uint32_t eax786;
    int16_t ax787;
    int16_t fpu_status_word788;
    int16_t ax789;
    int16_t fpu_status_word790;
    uint32_t eax791;
    int16_t ax792;
    int16_t fpu_status_word793;
    int16_t ax794;
    int16_t fpu_status_word795;
    uint32_t eax796;
    int16_t ax797;
    int16_t fpu_status_word798;
    int16_t ax799;
    int16_t fpu_status_word800;
    uint32_t eax801;
    int16_t ax802;
    int16_t fpu_status_word803;
    int16_t ax804;
    int16_t fpu_status_word805;
    uint32_t eax806;
    int16_t ax807;
    int16_t fpu_status_word808;
    int16_t ax809;
    int16_t fpu_status_word810;
    uint32_t eax811;
    int16_t ax812;
    int16_t fpu_status_word813;
    uint32_t eax814;
    uint32_t v815;
    uint32_t v816;
    uint32_t v817;
    uint32_t v818;
    int16_t ax819;
    int16_t fpu_status_word820;
    int16_t ax821;
    int16_t fpu_status_word822;
    uint32_t eax823;
    int16_t ax824;
    int16_t fpu_status_word825;
    int16_t ax826;
    int16_t fpu_status_word827;
    uint32_t eax828;
    int16_t ax829;
    int16_t fpu_status_word830;
    int16_t ax831;
    int16_t fpu_status_word832;
    uint32_t eax833;
    uint32_t v834;
    uint32_t v835;
    uint32_t v836;
    uint32_t v837;

    fun_8049050("*** It's test for new mathlib *** !!!\n");
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "acos", "ok", 0x80491c7, "*** It's test for new mathlib *** !!!\n", v1, v2);
    __asm__("fld qword [0x80521f0]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x80521f0]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "acos", "ok", 0x80491c7, "*** It's test for new mathlib *** !!!\n", v3, v4);
    __asm__("fld qword [0x80521f8]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052200]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "acos", "ok", 0x80491c7, "*** It's test for new mathlib *** !!!\n", v5, v6);
    fun_8049080(10, v7, v8);
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "acosh", "ok", 0x8049268, 10, v9, v10);
    __asm__("fld qword [0x8052208]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052208]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "acosh", "ok", 0x8049268, 10, v11, v12);
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    acosh(10, v13);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    acosh(10, v14);
    __asm__("fcomp qword [0x8052218]");
    ax15 = fpu_status_word16;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax15) + 1) & 69 || (acosh(10, v17), ax18 = fpu_status_word19, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax18) + 1) & 5))) {
        eax20 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax20 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "acosh", eax20, v21, v22, v23, v24);
    fun_8049080(10, v25, v26);
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "asin", "ok", 0x8049371, 10, v27, v28);
    __asm__("fld qword [0x8052220]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052220]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "asin", "ok", 0x8049371, 10, v29, v30);
    __asm__("fld qword [0x8052228]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052230]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "asin", "ok", 0x8049371, 10, v31, v32);
    fun_8049080(10, v33, v34);
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "asinh", "ok", 0x8049412, 10, v35, v36);
    __asm__("fld qword [0x8052238]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052238]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "asinh", "ok", 0x8049412, 10, v37, v38);
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    asinh(10, v39);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    asinh(10, v40);
    __asm__("fcomp qword [0x8052218]");
    ax41 = fpu_status_word42;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax41) + 1) & 69 || (asinh(10, v43), ax44 = fpu_status_word45, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax44) + 1) & 5))) {
        eax46 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax46 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "asinh", eax46, v47, v48, v49, v50);
    fun_8049080(10, v51, v52);
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan", "ok", 0x804951b, 10, v53, v54);
    __asm__("fld qword [0x8052240]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052240]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan", "ok", 0x804951b, 10, v55, v56);
    __asm__("fld qword [0x8052248]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052248]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan", "ok", 0x804951b, 10, v57, v58);
    fun_8049080(10, v59, v60);
    __asm__("fldz ");
    __asm__("fchs ");
    __asm__("fstp qword [esp]");
    __asm__("fldz ");
    __asm__("fchs ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan2", "ok", 0x80495bc, 10, v61, v62);
    __asm__("fld qword [0x8052250]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052250]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan2", "ok", 0x80495bc, 10, v63, v64);
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052258]");
    __asm__("fstp qword [esp]");
    atan2(10, v65, v66, v67);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052258]");
    __asm__("fstp qword [esp]");
    atan2(10, v68, v69, v70);
    __asm__("fcomp qword [0x8052260]");
    ax71 = fpu_status_word72;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax71) + 1) & 5 || (atan2(10, v73, v74, v75), ax76 = fpu_status_word77, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax76) + 1) & 5))) {
        eax78 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax78 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan2", eax78, v79, v80, v81, v82);
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052270]");
    __asm__("fstp qword [esp]");
    atan2(v80, v83, v84, v85);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052270]");
    __asm__("fstp qword [esp]");
    atan2(v80, v86, v87, v88);
    __asm__("fcomp qword [0x8052260]");
    ax89 = fpu_status_word90;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax89) + 1) & 5 || (atan2(v80, v91, v92, v93), ax94 = fpu_status_word95, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax94) + 1) & 5))) {
        eax96 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax96 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fldz ");
    __asm__("fchs ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan2", eax96, v97, v98, v99, v100);
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052258]");
    __asm__("fstp qword [esp]");
    atan2(v98, v101, v102, v103);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052258]");
    __asm__("fstp qword [esp]");
    atan2(v98, v104, v105, v106);
    __asm__("fcomp qword [0x8052280]");
    ax107 = fpu_status_word108;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax107) + 1) & 5 || (atan2(v98, v109, v110, v111), ax112 = fpu_status_word113, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax112) + 1) & 5))) {
        eax114 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax114 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fld qword [0x80521f0]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan2", eax114, v115, v116, v117, v118);
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052270]");
    __asm__("fstp qword [esp]");
    atan2(v116, v119, v120, v121);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052270]");
    __asm__("fstp qword [esp]");
    atan2(v116, v122, v123, v124);
    __asm__("fcomp qword [0x8052290]");
    ax125 = fpu_status_word126;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax125) + 1) & 5 || (atan2(v116, v127, v128, v129), ax130 = fpu_status_word131, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax130) + 1) & 5))) {
        eax132 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax132 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fld qword [0x80522a0]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan2", eax132, v133, v134, v135, v136);
    __asm__("fld qword [0x80522a8]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    atan2(v134, v137, v138, v139);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x80522a8]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    atan2(v134, v140, v141, v142);
    __asm__("fcomp qword [0x80522b0]");
    ax143 = fpu_status_word144;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax143) + 1) & 5 || (atan2(v134, v145, v146, v147), ax148 = fpu_status_word149, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax148) + 1) & 5))) {
        eax150 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax150 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fld qword [0x8052220]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan2", eax150, v151, v152, v153, v154);
    __asm__("fld qword [0x8052270]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    atan2(v152, v155, v156, v157);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052270]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    atan2(v152, v158, v159, v160);
    __asm__("fcomp qword [0x80522c0]");
    ax161 = fpu_status_word162;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax161) + 1) & 5 || (atan2(v152, v163, v164, v165), ax166 = fpu_status_word167, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax166) + 1) & 5))) {
        eax168 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax168 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fld qword [0x80522d0]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan2", eax168, v169, v170, v171, v172);
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    atan2(v170, v173, v174, v175);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    atan2(v170, v176, v177, v178);
    __asm__("fcomp qword [0x80522d8]");
    ax179 = fpu_status_word180;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax179) + 1) & 5 || (atan2(v170, v181, v182, v183), ax184 = fpu_status_word185, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax184) + 1) & 5))) {
        eax186 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax186 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fld qword [0x8052240]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan2", eax186, v187, v188, v189, v190);
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    atan2(v188, v191, v192, v193);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    atan2(v188, v194, v195, v196);
    __asm__("fcomp qword [0x80522e8]");
    ax197 = fpu_status_word198;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax197) + 1) & 5 || (atan2(v188, v199, v200, v201), ax202 = fpu_status_word203, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax202) + 1) & 5))) {
        eax204 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax204 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fld qword [0x80522f8]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan2", eax204, v205, v206, v207, v208);
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    atan2(v206, v209, v210, v211);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    atan2(v206, v212, v213, v214);
    __asm__("fcomp qword [0x8052300]");
    ax215 = fpu_status_word216;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax215) + 1) & 5 || (atan2(v206, v217, v218, v219), ax220 = fpu_status_word221, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax220) + 1) & 5))) {
        eax222 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax222 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fld qword [0x8052310]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan2", eax222, v223, v224, v225, v226);
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    atan2(v224, v227, v228, v229);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    atan2(v224, v230, v231, v232);
    __asm__("fcomp qword [0x8052318]");
    ax233 = fpu_status_word234;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax233) + 1) & 5 || (atan2(v224, v235, v236, v237), ax238 = fpu_status_word239, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax238) + 1) & 5))) {
        eax240 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax240 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fld qword [0x8052328]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atan2", eax240, v241, v242, v243, v244);
    fun_8049080(10, v245, v246);
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atanh", "ok", 0x8049d6b, 10, v247, v248);
    __asm__("fld qword [0x8052330]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052338]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "atanh", "ok", 0x8049d6b, 10, v249, v250);
    fun_8049080(10, v251, v252);
    __asm__("fldz ");
    __asm__("fchs ");
    __asm__("fstp qword [esp]");
    __asm__("fldz ");
    __asm__("fchs ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "cbrt", "ok", 0x8049dd8, 10, v253, v254);
    __asm__("fld qword [0x8052340]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052340]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "cbrt", "ok", 0x8049dd8, 10, v255, v256);
    __asm__("fld qword [0x8052258]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052258]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "cbrt", "ok", 0x8049dd8, 10, v257, v258);
    __asm__("fld qword [0x8052348]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052350]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "cbrt", "ok", 0x8049dd8, 10, v259, v260);
    __asm__("fld qword [0x8052358]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052358]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "cbrt", "ok", 0x8049dd8, 10, v261, v262);
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    cbrt(10, v263);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    cbrt(10, v264);
    __asm__("fcomp qword [0x8052218]");
    ax265 = fpu_status_word266;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax265) + 1) & 69 || (cbrt(10, v267), ax268 = fpu_status_word269, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax268) + 1) & 5))) {
        eax270 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax270 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "cbrt", eax270, v271, v272, v273, v274);
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    cbrt(v272, v275);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    cbrt(v272, v276);
    __asm__("fcomp qword [0x8052278]");
    ax277 = fpu_status_word278;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax277) + 1) & 5 || (cbrt(v272, v279), ax280 = fpu_status_word281, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax280) + 1) & 69))) {
        eax282 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax282 = reinterpret_cast<uint32_t>("ok");
    }
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "cbrt", eax282, v283, v284, v285, v286);
    __asm__("fld qword [0x8052368]");
    __asm__("fstp qword [esp]");
    cbrt(v284, v287);
    __asm__("fstp qword [ebp-0x60]");
    __asm__("fld qword [0x8052368]");
    __asm__("fstp qword [esp]");
    cbrt(v284, v288);
    __asm__("fld qword [ebp-0x60]");
    __asm__("fucompp ");
    ax289 = fpu_status_word290;
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax289) + 1) & 4)) {
        eax291 = reinterpret_cast<uint32_t>("fail");
    } else {
        eax291 = reinterpret_cast<uint32_t>("ok");
    }
    fun_8049040("%s - %s (NAN version)\n", "cbrt", eax291, v292, v293, v294, v295);
    fun_8049080(10, "cbrt", eax291);
    __asm__("fldz ");
    __asm__("fchs ");
    __asm__("fstp qword [esp]");
    __asm__("fldz ");
    __asm__("fchs ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "ceil", "ok", 0x804a07e, 10, "cbrt", eax291);
    __asm__("fld qword [0x8052370]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052370]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "ceil", "ok", 0x804a07e, 10, "cbrt", eax291);
    __asm__("fld qword [0x8052270]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052270]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "ceil", "ok", 0x804a07e, 10, "cbrt", eax291);
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "ceil", "ok", 0x804a07e, 10, "cbrt", eax291);
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "ceil", "ok", 0x804a07e, 10, "cbrt", eax291);
    fun_8049080(10, "cbrt", eax291);
    __asm__("fldz ");
    __asm__("fchs ");
    __asm__("fstp qword [esp]");
    __asm__("fldz ");
    __asm__("fchs ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "copysign", "ok", 0x804a18b, 10, "cbrt", eax291);
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "copysign", "ok", 0x804a18b, 10, "cbrt", eax291);
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "copysign", "ok", 0x804a18b, 10, "cbrt", eax291);
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "copysign", "ok", 0x804a18b, 10, "cbrt", eax291);
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052278]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "copysign", "ok", 0x804a18b, 10, "cbrt", eax291);
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "copysign", "ok", 0x804a18b, 10, "cbrt", eax291);
    fun_8049040("%s - %s (NAN version)\n", "copysign", "ok", v296, v297, v298, v299);
    fun_8049040("%s - %s (NAN version)\n", "copysign", "ok", v300, v301, v302, v303);
    fun_8049040("%s - %s (NAN version)\n", "copysign", "ok", v304, v305, v306, v307);
    fun_8049040("%s - %s (NAN version)\n", "copysign", "ok", v308, v309, v310, v311);
    fun_8049080(10, "copysign", "ok");
    __asm__("fld1 ");
    __asm__("fstp qword [esp]");
    __asm__("fld1 ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "cos", "ok", 0x804a32c, 10, "copysign", "ok");
    __asm__("fldz ");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052378]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "cos", "ok", 0x804a32c, 10, "copysign", "ok");
    __asm__("fld qword [0x8052380]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052388]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "cos", "ok", 0x804a32c, 10, "copysign", "ok");
    fun_8049080(10, "copysign", "ok");
    __asm__("fld1 ");
    __asm__("fstp qword [esp]");
    __asm__("fld1 ");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "cosh", "ok", 0x804a3c9, 10, "copysign", "ok");
    __asm__("fld qword [0x8052390]");
    __asm__("fstp qword [esp]");
    __asm__("fld qword [0x8052390]");
    __asm__("fstp qword [esp]");
    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "cosh", "ok", 0x804a3c9, 10, "copysign", "ok");
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    cosh(10, "copysign", "ok");
    __asm__("fld qword [0x8052218]");
    __asm__("fxch st0, st1");
    __asm__("fucom st1");
    *reinterpret_cast<int16_t*>(&eax291) = fpu_status_word312;
    __asm__("fstp st1");
    *reinterpret_cast<unsigned char*>(&eax291) = reinterpret_cast<uint1_t>(!!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax291) + 1) & 69));
    eax313 = eax291 ^ 1;
    if (!*reinterpret_cast<unsigned char*>(&eax313)) {
        __asm__("fstp st0");
        ebx314 = 0;
    } else {
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax313) = fpu_status_word315;
        __asm__("fstp st0");
        eax313 = eax313 & 0x200;
        if (!eax313) {
            ebx314 = 1;
        } else {
            ebx314 = 0xffffffff;
        }
    }
    __asm__("fld qword [0x8052210]");
    __asm__("fstp qword [esp]");
    cosh(10, "copysign", "ok");
    __asm__("fld qword [0x8052218]");
    __asm__("fxch st0, st1");
    __asm__("fucom st1");
    *reinterpret_cast<int16_t*>(&eax313) = fpu_status_word316;
    __asm__("fstp st1");
    *reinterpret_cast<unsigned char*>(&eax313) = reinterpret_cast<uint1_t>(!!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax313) + 1) & 69));
    eax317 = eax313 ^ 1;
    if (!*reinterpret_cast<signed char*>(&eax317)) {
        __asm__("fstp st0");
        goto addr_804a4ce_53;
    } else {
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax317) = fpu_status_word318;
        __asm__("fstp st0");
        if (eax317 & 0x200) {
            addr_804a4ce_53:
            eax319 = reinterpret_cast<uint32_t>("fail");
        } else {
            eax319 = reinterpret_cast<uint32_t>("ok");
        }
        fun_8049040("%s - %s computed: %i should be: %i\n", "cosh", eax319, ebx314, 1, "copysign", "ok");
        __asm__("fld qword [0x8052278]");
        __asm__("fstp qword [esp]");
        cosh(1, "copysign", "ok");
        __asm__("fld qword [0x8052218]");
        __asm__("fxch st0, st1");
        __asm__("fucom st1");
        *reinterpret_cast<int16_t*>(&eax319) = fpu_status_word320;
        __asm__("fstp st1");
        *reinterpret_cast<unsigned char*>(&eax319) = reinterpret_cast<uint1_t>(!!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax319) + 1) & 69));
        eax321 = eax319 ^ 1;
        if (!*reinterpret_cast<unsigned char*>(&eax321)) {
            __asm__("fstp st0");
            ebx322 = 0;
        } else {
            __asm__("fxam ");
            *reinterpret_cast<int16_t*>(&eax321) = fpu_status_word323;
            __asm__("fstp st0");
            eax321 = eax321 & 0x200;
            if (!eax321) {
                ebx322 = 1;
            } else {
                ebx322 = 0xffffffff;
            }
        }
        __asm__("fld qword [0x8052278]");
        __asm__("fstp qword [esp]");
        cosh(1, "copysign", "ok");
        __asm__("fld qword [0x8052218]");
        __asm__("fxch st0, st1");
        __asm__("fucom st1");
        *reinterpret_cast<int16_t*>(&eax321) = fpu_status_word324;
        __asm__("fstp st1");
        *reinterpret_cast<unsigned char*>(&eax321) = reinterpret_cast<uint1_t>(!!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax321) + 1) & 69));
        eax325 = eax321 ^ 1;
        if (!*reinterpret_cast<signed char*>(&eax325)) {
            __asm__("fstp st0");
            goto addr_804a58e_63;
        } else {
            __asm__("fxam ");
            *reinterpret_cast<int16_t*>(&eax325) = fpu_status_word326;
            __asm__("fstp st0");
            if (eax325 & 0x200) {
                addr_804a58e_63:
                eax327 = reinterpret_cast<uint32_t>("fail");
            } else {
                eax327 = reinterpret_cast<uint32_t>("ok");
            }
            fun_8049040("%s - %s computed: %i should be: %i\n", "cosh", eax327, ebx322, 1, "copysign", "ok");
            fun_8049080(10, "copysign", "ok");
            __asm__("fld1 ");
            __asm__("fstp qword [esp]");
            __asm__("fld1 ");
            __asm__("fstp qword [esp]");
            fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "exp", "ok", 0x804a5b6, 10, "copysign", "ok");
            __asm__("fld qword [0x8052398]");
            __asm__("fstp qword [esp]");
            __asm__("fld qword [0x8052398]");
            __asm__("fstp qword [esp]");
            fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "exp", "ok", 0x804a5b6, 10, "copysign", "ok");
            __asm__("fld qword [0x80523a0]");
            __asm__("fstp qword [esp]");
            __asm__("fld qword [0x80523a0]");
            __asm__("fstp qword [esp]");
            fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "exp", "ok", 0x804a5b6, 10, "copysign", "ok");
            __asm__("fld qword [0x8052210]");
            __asm__("fstp qword [esp]");
            exp(10, "copysign", "ok");
            __asm__("fld qword [0x8052218]");
            __asm__("fxch st0, st1");
            __asm__("fucom st1");
            *reinterpret_cast<int16_t*>(&eax327) = fpu_status_word328;
            __asm__("fstp st1");
            *reinterpret_cast<unsigned char*>(&eax327) = reinterpret_cast<uint1_t>(!!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax327) + 1) & 69));
            eax329 = eax327 ^ 1;
            if (!*reinterpret_cast<unsigned char*>(&eax329)) {
                __asm__("fstp st0");
                ebx330 = 0;
            } else {
                __asm__("fxam ");
                *reinterpret_cast<int16_t*>(&eax329) = fpu_status_word331;
                __asm__("fstp st0");
                eax329 = eax329 & 0x200;
                if (!eax329) {
                    ebx330 = 1;
                } else {
                    ebx330 = 0xffffffff;
                }
            }
            __asm__("fld qword [0x8052210]");
            __asm__("fstp qword [esp]");
            exp(10, "copysign", "ok");
            __asm__("fld qword [0x8052218]");
            __asm__("fxch st0, st1");
            __asm__("fucom st1");
            *reinterpret_cast<int16_t*>(&eax329) = fpu_status_word332;
            __asm__("fstp st1");
            *reinterpret_cast<unsigned char*>(&eax329) = reinterpret_cast<uint1_t>(!!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax329) + 1) & 69));
            eax333 = eax329 ^ 1;
            if (!*reinterpret_cast<signed char*>(&eax333)) {
                __asm__("fstp st0");
                goto addr_804a6ef_73;
            } else {
                __asm__("fxam ");
                *reinterpret_cast<int16_t*>(&eax333) = fpu_status_word334;
                __asm__("fstp st0");
                if (eax333 & 0x200) {
                    addr_804a6ef_73:
                    eax335 = reinterpret_cast<uint32_t>("fail");
                } else {
                    eax335 = reinterpret_cast<uint32_t>("ok");
                }
                fun_8049040("%s - %s computed: %i should be: %i\n", "exp", eax335, ebx330, 1, "copysign", "ok");
                __asm__("fld qword [0x8052278]");
                __asm__("fstp qword [esp]");
                exp(1, "copysign", "ok");
                __asm__("fstp qword [ebp-0x60]");
                __asm__("fld qword [0x8052278]");
                __asm__("fstp qword [esp]");
                exp(1, "copysign", "ok");
                __asm__("fcomp qword [0x8052260]");
                ax336 = fpu_status_word337;
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax336) + 1) & 5 || (exp(1, "copysign", "ok"), ax338 = fpu_status_word339, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax338) + 1) & 5))) {
                    eax340 = reinterpret_cast<uint32_t>("fail");
                } else {
                    eax340 = reinterpret_cast<uint32_t>("ok");
                }
                __asm__("fldz ");
                __asm__("fstp qword [esp]");
                fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "exp", eax340, v341, v342, "copysign", "ok");
                fun_8049080(10, "copysign", "ok");
                __asm__("fld1 ");
                __asm__("fstp qword [esp]");
                __asm__("fld1 ");
                __asm__("fstp qword [esp]");
                fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "exp10", "ok", 0x804a7af, 10, "copysign", "ok");
                __asm__("fld qword [0x80523a8]");
                __asm__("fstp qword [esp]");
                __asm__("fld qword [0x80523a8]");
                __asm__("fstp qword [esp]");
                fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "exp10", "ok", 0x804a7af, 10, "copysign", "ok");
                __asm__("fld qword [0x80523b0]");
                __asm__("fstp qword [esp]");
                __asm__("fld qword [0x80523b8]");
                __asm__("fstp qword [esp]");
                fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "exp10", "ok", 0x804a7af, 10, "copysign", "ok");
                __asm__("fld qword [0x8052210]");
                __asm__("fstp qword [esp]");
                exp10(10, "copysign", "ok");
                __asm__("fld qword [0x8052218]");
                __asm__("fxch st0, st1");
                __asm__("fucom st1");
                *reinterpret_cast<int16_t*>(&eax340) = fpu_status_word343;
                __asm__("fstp st1");
                *reinterpret_cast<unsigned char*>(&eax340) = reinterpret_cast<uint1_t>(!!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax340) + 1) & 69));
                eax344 = eax340 ^ 1;
                if (!*reinterpret_cast<unsigned char*>(&eax344)) {
                    __asm__("fstp st0");
                    ebx345 = 0;
                } else {
                    __asm__("fxam ");
                    *reinterpret_cast<int16_t*>(&eax344) = fpu_status_word346;
                    __asm__("fstp st0");
                    eax344 = eax344 & 0x200;
                    if (!eax344) {
                        ebx345 = 1;
                    } else {
                        ebx345 = 0xffffffff;
                    }
                }
                __asm__("fld qword [0x8052210]");
                __asm__("fstp qword [esp]");
                exp10(10, "copysign", "ok");
                __asm__("fld qword [0x8052218]");
                __asm__("fxch st0, st1");
                __asm__("fucom st1");
                *reinterpret_cast<int16_t*>(&eax344) = fpu_status_word347;
                __asm__("fstp st1");
                *reinterpret_cast<unsigned char*>(&eax344) = reinterpret_cast<uint1_t>(!!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax344) + 1) & 69));
                eax348 = eax344 ^ 1;
                if (!*reinterpret_cast<signed char*>(&eax348)) {
                    __asm__("fstp st0");
                    goto addr_804a8e8_86;
                } else {
                    __asm__("fxam ");
                    *reinterpret_cast<int16_t*>(&eax348) = fpu_status_word349;
                    __asm__("fstp st0");
                    if (eax348 & 0x200) {
                        addr_804a8e8_86:
                        eax350 = reinterpret_cast<uint32_t>("fail");
                    } else {
                        eax350 = reinterpret_cast<uint32_t>("ok");
                    }
                    fun_8049040("%s - %s computed: %i should be: %i\n", "exp10", eax350, ebx345, 1, "copysign", "ok");
                    __asm__("fld qword [0x8052278]");
                    __asm__("fstp qword [esp]");
                    exp10(1, "copysign", "ok");
                    __asm__("fstp qword [ebp-0x60]");
                    __asm__("fld qword [0x8052278]");
                    __asm__("fstp qword [esp]");
                    exp10(1, "copysign", "ok");
                    __asm__("fcomp qword [0x8052260]");
                    ax351 = fpu_status_word352;
                    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax351) + 1) & 5 || (exp10(1, "copysign", "ok"), ax353 = fpu_status_word354, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax353) + 1) & 5))) {
                        eax355 = reinterpret_cast<uint32_t>("fail");
                    } else {
                        eax355 = reinterpret_cast<uint32_t>("ok");
                    }
                    __asm__("fldz ");
                    __asm__("fstp qword [esp]");
                    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "exp10", eax355, v356, v357, "copysign", "ok");
                    fun_8049080(10, "copysign", "ok");
                    __asm__("fld1 ");
                    __asm__("fstp qword [esp]");
                    __asm__("fld1 ");
                    __asm__("fstp qword [esp]");
                    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "exp2", "ok", 0x804a9a8, 10, "copysign", "ok");
                    __asm__("fld qword [0x80523c0]");
                    __asm__("fstp qword [esp]");
                    __asm__("fld qword [0x80523c0]");
                    __asm__("fstp qword [esp]");
                    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "exp2", "ok", 0x804a9a8, 10, "copysign", "ok");
                    __asm__("fld qword [0x80523c8]");
                    __asm__("fstp qword [esp]");
                    __asm__("fld qword [0x80523c8]");
                    __asm__("fstp qword [esp]");
                    fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "exp2", "ok", 0x804a9a8, 10, "copysign", "ok");
                    __asm__("fld qword [0x8052210]");
                    __asm__("fstp qword [esp]");
                    exp2(10, "copysign", "ok");
                    __asm__("fld qword [0x8052218]");
                    __asm__("fxch st0, st1");
                    __asm__("fucom st1");
                    *reinterpret_cast<int16_t*>(&eax355) = fpu_status_word358;
                    __asm__("fstp st1");
                    *reinterpret_cast<unsigned char*>(&eax355) = reinterpret_cast<uint1_t>(!!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax355) + 1) & 69));
                    eax359 = eax355 ^ 1;
                    if (!*reinterpret_cast<unsigned char*>(&eax359)) {
                        __asm__("fstp st0");
                        ebx360 = 0;
                    } else {
                        __asm__("fxam ");
                        *reinterpret_cast<int16_t*>(&eax359) = fpu_status_word361;
                        __asm__("fstp st0");
                        eax359 = eax359 & 0x200;
                        if (!eax359) {
                            ebx360 = 1;
                        } else {
                            ebx360 = 0xffffffff;
                        }
                    }
                    __asm__("fld qword [0x8052210]");
                    __asm__("fstp qword [esp]");
                    exp2(10, "copysign", "ok");
                    __asm__("fld qword [0x8052218]");
                    __asm__("fxch st0, st1");
                    __asm__("fucom st1");
                    *reinterpret_cast<int16_t*>(&eax359) = fpu_status_word362;
                    __asm__("fstp st1");
                    *reinterpret_cast<unsigned char*>(&eax359) = reinterpret_cast<uint1_t>(!!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax359) + 1) & 69));
                    eax363 = eax359 ^ 1;
                    if (!*reinterpret_cast<signed char*>(&eax363)) {
                        __asm__("fstp st0");
                        goto addr_804aae1_99;
                    } else {
                        __asm__("fxam ");
                        *reinterpret_cast<int16_t*>(&eax363) = fpu_status_word364;
                        __asm__("fstp st0");
                        if (eax363 & 0x200) {
                            addr_804aae1_99:
                            eax365 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax365 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s computed: %i should be: %i\n", "exp2", eax365, ebx360, 1, "copysign", "ok");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        exp2(1, "copysign", "ok");
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        exp2(1, "copysign", "ok");
                        __asm__("fcomp qword [0x8052260]");
                        ax366 = fpu_status_word367;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax366) + 1) & 5 || (exp2(1, "copysign", "ok"), ax368 = fpu_status_word369, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax368) + 1) & 5))) {
                            eax370 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax370 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "exp2", eax370, v371, v372, "copysign", "ok");
                        fun_8049080(10, "copysign", "ok");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "expm1", "ok", 0x804aba1, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        expm1(10, "copysign", "ok");
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        expm1(10, "copysign", "ok");
                        __asm__("fcomp qword [0x8052218]");
                        ax373 = fpu_status_word374;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax373) + 1) & 69 || (expm1(10, "copysign", "ok"), ax375 = fpu_status_word376, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax375) + 1) & 5))) {
                            eax377 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax377 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "expm1", eax377, v378, v379, "copysign", "ok");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        expm1(v379, "copysign", "ok");
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        expm1(v379, "copysign", "ok");
                        __asm__("fcomp qword [0x80523d0]");
                        ax380 = fpu_status_word381;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax380) + 1) & 5 || (expm1(v379, "copysign", "ok"), ax382 = fpu_status_word383, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax382) + 1) & 5))) {
                            eax384 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax384 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld1 ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "expm1", eax384, v385, v386, "copysign", "ok");
                        __asm__("fld qword [0x80523e0]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80523e8]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "expm1", "ok", v385, v386, "copysign", "ok");
                        __asm__("fld qword [0x80523f0]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80523f0]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "expm1", "ok", v385, v386, "copysign", "ok");
                        fun_8049080(10, "copysign", "ok");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fabs", "ok", 0x804ad78, 10, "copysign", "ok");
                        __asm__("fld qword [0x80523f8]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80523f8]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fabs", "ok", 0x804ad78, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052400]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052400]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fabs", "ok", 0x804ad78, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fabs", "ok", 0x804ad78, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fabs", "ok", 0x804ad78, 10, "copysign", "ok");
                        fun_8049080(10, "copysign", "ok");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fdim", "ok", 0x804ae81, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fdim", "ok", 0x804ae81, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fdim", "fail", 0x804ae81, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fdim", "fail", 0x804ae81, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fdim", "ok", 0x804ae81, 10, "copysign", "ok");
                        fun_8049080(10, "copysign", "ok");
                        __asm__("fldz ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "floor", "ok", 0x804af82, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052258]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052258]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "floor", "ok", 0x804af82, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052410]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052410]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "floor", "ok", 0x804af82, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "floor", "ok", 0x804af82, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "floor", "ok", 0x804af82, 10, "copysign", "ok");
                        fun_8049080(10, "copysign", "ok");
                        __asm__("fld qword [0x8052418]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052418]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fma", "ok", 0x804b08f, 10, "copysign", "ok");
                        fun_8049080(10, "copysign", "ok");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmax", "ok", 0x804b0d0, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmax", "ok", 0x804b0d0, 10, "copysign", "ok");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmax", "ok", 0x804b0d0, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        fmax(10, "copysign", "ok", v387);
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        fmax(10, "copysign", "ok", v388);
                        __asm__("fcomp qword [0x8052218]");
                        ax389 = fpu_status_word390;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax389) + 1) & 69 || (fmax(10, "copysign", "ok", v391), ax392 = fpu_status_word393, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax392) + 1) & 5))) {
                            eax394 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax394 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmax", eax394, v395, v396, "copysign", "ok");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fmax(v396, "copysign", "ok", v397);
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fmax(v396, "copysign", "ok", v398);
                        __asm__("fcomp qword [0x8052260]");
                        ax399 = fpu_status_word400;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax399) + 1) & 5 || (fmax(v396, "copysign", "ok", v401), ax402 = fpu_status_word403, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax402) + 1) & 5))) {
                            eax404 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax404 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmax", eax404, v405, v406, "copysign", "ok");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fcomp qword [0x8052420]");
                        ax407 = fpu_status_word408;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax407) + 1) & 5 || (ax409 = fpu_status_word410, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax409) + 1) & 5))) {
                            eax411 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax411 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmax", eax411, v405, v406, "copysign", "ok");
                        __asm__("fld qword [0x8052430]");
                        __asm__("fld qword [0x8052430]");
                        __asm__("fcomp qword [0x8052438]");
                        ax412 = fpu_status_word413;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax412) + 1) & 5 || (ax414 = fpu_status_word415, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax414) + 1) & 5))) {
                            eax416 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax416 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052430]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmax", eax416, v405, v406, "copysign", "ok");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fcomp qword [0x8052218]");
                        ax417 = fpu_status_word418;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax417) + 1) & 69 || (ax419 = fpu_status_word420, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax419) + 1) & 5))) {
                            eax421 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax421 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmax", eax421, v405, v406, "copysign", "ok");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fcomp qword [0x8052278]");
                        ax422 = fpu_status_word423;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax422) + 1) & 5 || (ax424 = fpu_status_word425, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax424) + 1) & 69))) {
                            eax426 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax426 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmax", eax426, v405, v406, "copysign", "ok");
                        fun_8049080(10, "copysign", "ok");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmin", "ok", 0x804b45d, 10, "copysign", "ok");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmin", "ok", 0x804b45d, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052430]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052430]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmin", "ok", 0x804b45d, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        fmin(10, "copysign", "ok", v427);
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        fmin(10, "copysign", "ok", v428);
                        __asm__("fcomp qword [0x8052420]");
                        ax429 = fpu_status_word430;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax429) + 1) & 5 || (fmin(10, "copysign", "ok", v431), ax432 = fpu_status_word433, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax432) + 1) & 5))) {
                            eax434 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax434 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmin", eax434, v435, v436, "copysign", "ok");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fmin(v436, "copysign", "ok", v437);
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fmin(v436, "copysign", "ok", v438);
                        __asm__("fcomp qword [0x8052278]");
                        ax439 = fpu_status_word440;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax439) + 1) & 5 || (fmin(v436, "copysign", "ok", v441), ax442 = fpu_status_word443, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax442) + 1) & 69))) {
                            eax444 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax444 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmin", eax444, v445, v446, "copysign", "ok");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fld qword [0x8052408]");
                        __asm__("fcomp qword [0x8052420]");
                        ax447 = fpu_status_word448;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax447) + 1) & 5 || (ax449 = fpu_status_word450, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax449) + 1) & 5))) {
                            eax451 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax451 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052408]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmin", eax451, v445, v446, "copysign", "ok");
                        __asm__("fld qword [0x8052430]");
                        __asm__("fld qword [0x8052430]");
                        __asm__("fcomp qword [0x8052438]");
                        ax452 = fpu_status_word453;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax452) + 1) & 5 || (ax454 = fpu_status_word455, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax454) + 1) & 5))) {
                            eax456 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax456 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052430]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmin", eax456, v445, v446, "copysign", "ok");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fcomp qword [0x8052218]");
                        ax457 = fpu_status_word458;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax457) + 1) & 69 || (ax459 = fpu_status_word460, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax459) + 1) & 5))) {
                            eax461 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax461 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmin", eax461, v445, v446, "copysign", "ok");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fcomp qword [0x8052278]");
                        ax462 = fpu_status_word463;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax462) + 1) & 5 || (ax464 = fpu_status_word465, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax464) + 1) & 69))) {
                            eax466 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax466 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmin", eax466, v445, v446, "copysign", "ok");
                        fun_8049080(10, "copysign", "ok");
                        __asm__("fld qword [0x8052448]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052450]");
                        __asm__("fstp qword [esp]");
                        fmod(10, "copysign", "ok", v467);
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052448]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052450]");
                        __asm__("fstp qword [esp]");
                        fmod(10, "copysign", "ok", v468);
                        __asm__("fcomp qword [0x8052458]");
                        ax469 = fpu_status_word470;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax469) + 1) & 5 || (fmod(10, "copysign", "ok", v471), ax472 = fpu_status_word473, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax472) + 1) & 5))) {
                            eax474 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax474 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052468]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmod", eax474, v475, v476, "copysign", "ok");
                        __asm__("fld qword [0x8052448]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052470]");
                        __asm__("fstp qword [esp]");
                        fmod(v476, "copysign", "ok", v477);
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052448]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052470]");
                        __asm__("fstp qword [esp]");
                        fmod(v476, "copysign", "ok", v478);
                        __asm__("fcomp qword [0x8052478]");
                        ax479 = fpu_status_word480;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax479) + 1) & 5 || (fmod(v476, "copysign", "ok", v481), ax482 = fpu_status_word483, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax482) + 1) & 5))) {
                            eax484 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax484 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052488]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmod", eax484, v485, v486, "copysign", "ok");
                        __asm__("fld qword [0x8052490]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052450]");
                        __asm__("fstp qword [esp]");
                        fmod(v486, "copysign", "ok", v487);
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052490]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052450]");
                        __asm__("fstp qword [esp]");
                        fmod(v486, "copysign", "ok", v488);
                        __asm__("fcomp qword [0x8052458]");
                        ax489 = fpu_status_word490;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax489) + 1) & 5 || (fmod(v486, "copysign", "ok", v491), ax492 = fpu_status_word493, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax492) + 1) & 5))) {
                            eax494 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax494 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052468]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmod", eax494, v495, v496, "copysign", "ok");
                        __asm__("fld qword [0x8052490]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052470]");
                        __asm__("fstp qword [esp]");
                        fmod(v496, "copysign", "ok", v497);
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052490]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052470]");
                        __asm__("fstp qword [esp]");
                        fmod(v496, "copysign", "ok", v498);
                        __asm__("fcomp qword [0x8052478]");
                        ax499 = fpu_status_word500;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax499) + 1) & 5 || (fmod(v496, "copysign", "ok", v501), ax502 = fpu_status_word503, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax502) + 1) & 5))) {
                            eax504 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax504 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052488]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmod", eax504, v505, v506, "copysign", "ok");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052450]");
                        __asm__("fstp qword [esp]");
                        fmod(v506, "copysign", "ok", v507);
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052450]");
                        __asm__("fstp qword [esp]");
                        fmod(v506, "copysign", "ok", v508);
                        __asm__("fcomp qword [0x8052498]");
                        ax509 = fpu_status_word510;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax509) + 1) & 5 || (fmod(v506, "copysign", "ok", v511), ax512 = fpu_status_word513, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax512) + 1) & 5))) {
                            eax514 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax514 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052450]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmod", eax514, v515, v516, "copysign", "ok");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052470]");
                        __asm__("fstp qword [esp]");
                        fmod(v516, "copysign", "ok", v517);
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052470]");
                        __asm__("fstp qword [esp]");
                        fmod(v516, "copysign", "ok", v518);
                        __asm__("fcomp qword [0x80524a8]");
                        ax519 = fpu_status_word520;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax519) + 1) & 5 || (fmod(v516, "copysign", "ok", v521), ax522 = fpu_status_word523, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax522) + 1) & 5))) {
                            eax524 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax524 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052470]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "fmod", eax524, v525, v526, "copysign", "ok");
                        fun_8049080(10, "copysign", "ok");
                        __asm__("fld qword [0x80524b8]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80524b8]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "frexp", "ok", 0x804bc57, 10, "copysign", "ok");
                        if (0) {
                            eax527 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax527 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s computed: %i should be: %i\n", "frexp", eax527, 5, 5, "copysign", "ok");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "frexp", "ok", 5, 5, "copysign", "ok");
                        if (0) {
                            eax528 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax528 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s computed: %i should be: %i\n", "frexp", eax528, 0, 0, "copysign", "ok");
                        __asm__("fld qword [0x80524c0]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80524c0]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "frexp", "ok", 0, 0, "copysign", "ok");
                        if (0) {
                            eax529 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax529 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s computed: %i should be: %i\n", "frexp", eax529, 4, 4, "copysign", "ok");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "frexp", "ok", 4, 4, "copysign", "ok");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "frexp", "ok", 4, 4, "copysign", "ok");
                        fun_8049080(10, "copysign", "ok");
                        __asm__("fld qword [0x8052418]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052418]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "hypot", "ok", 0x804be31, 10, "copysign", "ok");
                        __asm__("fld qword [0x80524c8]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80524d0]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "hypot", "ok", 0x804be31, 10, "copysign", "ok");
                        __asm__("fld qword [0x8052368]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        hypot(10, "copysign", "ok", v530);
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052368]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        hypot(10, "copysign", "ok", v531);
                        __asm__("fcomp qword [0x8052218]");
                        ax532 = fpu_status_word533;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax532) + 1) & 69 || (hypot(10, "copysign", "ok", v534), ax535 = fpu_status_word536, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax535) + 1) & 5))) {
                            eax537 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax537 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "hypot", eax537, v538, v539, "copysign", "ok");
                        __asm__("fld qword [0x8052368]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        hypot(v539, "copysign", "ok", v540);
                        __asm__("fstp qword [ebp-0x60]");
                        __asm__("fld qword [0x8052368]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        hypot(v539, "copysign", "ok", v541);
                        __asm__("fcomp qword [0x8052218]");
                        ax542 = fpu_status_word543;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax542) + 1) & 69 || (hypot(v539, "copysign", "ok", v544), ax545 = fpu_status_word546, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax545) + 1) & 5))) {
                            eax547 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax547 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "hypot", eax547, v548, v549, "copysign", "ok");
                        __asm__("fld qword [0x8052368]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052368]");
                        __asm__("fstp qword [esp]");
                        hypot(v549, "copysign", "ok", v550);
                        __asm__("fucomp st0");
                        ax551 = fpu_status_word552;
                        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax551) + 1) & 4)) {
                            eax553 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax553 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s (NAN version)\n", "hypot", eax553, v554, v555, v556, v557);
                        fun_8049080(10, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "ilogb", "ok", 0, 0, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "ilogb", "ok", 1, 1, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "ilogb", "ok", 10, 10, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "ilogb", "ok", 10, 10, "hypot", eax553);
                        fun_8049080(10, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isfinite", "ok", 1, 1, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isfinite", "ok", 1, 1, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isfinite", "ok", 1, 1, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isfinite", "ok", 0, 0, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isfinite", "ok", 0, 0, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isfinite", "ok", 0, 0, "hypot", eax553);
                        fun_8049080(10, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isnan", "ok", 0, 0, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isnan", "ok", 0, 0, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isnan", "ok", 0, 0, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isnan", "ok", 0, 0, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isnan", "ok", 0, 0, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isnan", "ok", 1, 1, "hypot", eax553);
                        fun_8049080(10, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isinf", "ok", 0, 0, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isinf", "ok", 0, 0, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isinf", "ok", 0, 0, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isinf", "ok", 1, 1, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isinf", "ok", 0xff, 0xff, "hypot", eax553);
                        fun_8049040("%s - %s computed: %i should be: %i\n", "isinf", "ok", 0, 0, "hypot", eax553);
                        fun_8049080(10, "hypot", eax553);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "ldexp", "ok", 0x804c32f, 10, "hypot", eax553);
                        __asm__("fld qword [0x80524d8]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80524d8]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "ldexp", "ok", 0x804c32f, 10, "hypot", eax553);
                        __asm__("fld qword [0x80524e0]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80524e0]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "ldexp", "ok", 0x804c32f, 10, "hypot", eax553);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fcomp qword [0x8052218]");
                        ax558 = fpu_status_word559;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax558) + 1) & 69 || (ax560 = fpu_status_word561, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax560) + 1) & 5))) {
                            eax562 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax562 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "ldexp", eax562, 0x804c32f, 10, "hypot", eax553);
                        __asm__("fld qword [0x8052278]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fcomp qword [0x8052278]");
                        ax563 = fpu_status_word564;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax563) + 1) & 5 || (ax565 = fpu_status_word566, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax565) + 1) & 69))) {
                            eax567 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax567 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "ldexp", eax567, 0x804c32f, 10, "hypot", eax553);
                        __asm__("fld qword [0x8052368]");
                        __asm__("fucomp st0");
                        ax568 = fpu_status_word569;
                        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax568) + 1) & 4)) {
                            eax570 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax570 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s (NAN version)\n", "ldexp", eax570, v571, v572, v573, v574);
                        fun_8049080(10, "ldexp", eax570);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        eax575 = llrint(10, "ldexp", eax570);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        eax576 = llrint(10, "ldexp", eax570);
                        ecx577 = eax576;
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx577) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx577) + 1)));
                        eax578 = 4;
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax578) + 1) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax578) + 1)));
                        if (1) {
                            eax579 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax579 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s computed: %lli should be: %lli\n", "llrint", eax579, eax575, 4, 0, 0);
                        __asm__("fld qword [0x80524e8]");
                        __asm__("fstp qword [esp]");
                        eax580 = llrint(4, 0, 0);
                        __asm__("fld qword [0x80524e8]");
                        __asm__("fstp qword [esp]");
                        llrint(4, 0, 0);
                        if (1) {
                            eax581 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax581 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s computed: %lli should be: %lli\n", "llrint", eax581, eax580, 4, 0, 0);
                        __asm__("fld qword [0x80524f0]");
                        __asm__("fstp qword [esp]");
                        eax582 = llrint(4, 0, 0);
                        __asm__("fld qword [0x80524f0]");
                        __asm__("fstp qword [esp]");
                        eax583 = llrint(4, 0, 0);
                        if (1) {
                            eax584 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax584 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s computed: %lli should be: %lli\n", "llrint", eax584, eax582, 4, 0xff, 0xff);
                        __asm__("fld qword [0x80524f8]");
                        __asm__("fstp qword [esp]");
                        eax585 = llrint(4, 0xff, 0xff);
                        __asm__("fld qword [0x80524f8]");
                        __asm__("fstp qword [esp]");
                        llrint(4, 0xff, 0xff);
                        if (1) {
                            eax586 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax586 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s computed: %lli should be: %lli\n", "llrint", eax586, eax585, eax583 ^ 0xffffffff, 0, 0x1000000);
                        fun_8049080(10, 0, 0x1000000);
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log", "ok", 0x804c6bb, 10, 0, 0x1000000);
                        __asm__("fld1 ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld1 ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log", "ok", 0x804c6bb, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052500]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052500]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log", "ok", 0x804c6bb, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052508]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052508]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log", "ok", 0x804c6bb, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        log(10, 0, 0x1000000);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        log(10, 0, 0x1000000);
                        __asm__("fcomp qword [0x8052218]");
                        ax587 = fpu_status_word588;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax587) + 1) & 69 || (log(10, 0, 0x1000000), ax589 = fpu_status_word590, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax589) + 1) & 5))) {
                            eax591 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax591 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log", eax591, ecx577, eax578, 0, 0x1000000);
                        fun_8049080(10, 0, 0x1000000);
                        __asm__("fld1 ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld1 ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log10", "ok", 0x804c828, 10, 0, 0x1000000);
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log10", "ok", 0x804c828, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052510]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052510]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log10", "ok", 0x804c828, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052370]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052370]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log10", "ok", 0x804c828, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        log10(10, 0, 0x1000000);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        log10(10, 0, 0x1000000);
                        __asm__("fcomp qword [0x8052218]");
                        ax592 = fpu_status_word593;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax592) + 1) & 69 || (log10(10, 0, 0x1000000), ax594 = fpu_status_word595, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax594) + 1) & 5))) {
                            eax596 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax596 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log10", eax596, ecx577, eax578, 0, 0x1000000);
                        fun_8049080(10, 0, 0x1000000);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log2", "ok", 0x804c995, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052518]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052518]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log2", "ok", 0x804c995, 10, 0, 0x1000000);
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log2", "ok", 0x804c995, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052370]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052370]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log2", "ok", 0x804c995, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        log2(10, 0, 0x1000000);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        log2(10, 0, 0x1000000);
                        __asm__("fcomp qword [0x8052218]");
                        ax597 = fpu_status_word598;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax597) + 1) & 69 || (log2(10, 0, 0x1000000), ax599 = fpu_status_word600, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax599) + 1) & 5))) {
                            eax601 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax601 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log2", eax601, ecx577, eax578, 0, 0x1000000);
                        fun_8049080(10, 0, 0x1000000);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log1p", "ok", 0x804cafe, 10, 0, 0x1000000);
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log1p", "ok", 0x804cafe, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052520]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052528]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log1p", "ok", 0x804cafe, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        log1p(10, 0, 0x1000000);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        log1p(10, 0, 0x1000000);
                        __asm__("fcomp qword [0x8052218]");
                        ax602 = fpu_status_word603;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax602) + 1) & 69 || (log1p(10, 0, 0x1000000), ax604 = fpu_status_word605, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax604) + 1) & 5))) {
                            eax606 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax606 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "log1p", eax606, ecx577, eax578, 0, 0x1000000);
                        fun_8049080(10, 0, 0x1000000);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "logb", "ok", 0x804cc33, 10, 0, 0x1000000);
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "logb", "ok", 0x804cc33, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052530]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052530]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "logb", "ok", 0x804cc33, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052530]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052530]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "logb", "ok", 0x804cc33, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "logb", "ok", 0x804cc33, 10, 0, 0x1000000);
                        fun_8049080(10, 0, 0x1000000);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        eax607 = lrint(10, 0, 0x1000000);
                        __asm__("fild dword [ebp-0x40]");
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        lrint(10, 0, 0x1000000);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        eax608 = lrint(10, 0, 0x1000000);
                        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax608) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax608 == 0))) {
                            eax609 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax609 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "lrint", eax609, eax607, eax578, 0, 0x1000000);
                        __asm__("fld qword [0x8052538]");
                        __asm__("fstp qword [esp]");
                        eax610 = lrint(eax578, 0, 0x1000000);
                        __asm__("fild dword [ebp-0x40]");
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052538]");
                        __asm__("fstp qword [esp]");
                        lrint(eax578, 0, 0x1000000);
                        __asm__("fld qword [0x8052538]");
                        __asm__("fstp qword [esp]");
                        eax611 = lrint(eax578, 0, 0x1000000);
                        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax611) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax611 == 0))) {
                            eax612 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax612 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "lrint", eax612, eax610, eax578, 0, 0x1000000);
                        __asm__("fld qword [0x8052540]");
                        __asm__("fstp qword [esp]");
                        eax613 = lrint(eax578, 0, 0x1000000);
                        __asm__("fild dword [ebp-0x40]");
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052540]");
                        __asm__("fstp qword [esp]");
                        eax614 = lrint(eax578, 0, 0x1000000);
                        if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax614) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax614 == 0) || (eax615 = lrint(eax578, 0, 0x1000000), reinterpret_cast<int32_t>(eax615) > reinterpret_cast<int32_t>(1))) {
                            eax616 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax616 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "lrint", eax616, eax613, eax578, 0, 0x1000000);
                        __asm__("fld qword [0x80524f0]");
                        __asm__("fstp qword [esp]");
                        eax617 = lrint(eax578, 0, 0x1000000);
                        __asm__("fild dword [ebp-0x40]");
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x80524f0]");
                        __asm__("fstp qword [esp]");
                        eax618 = lrint(eax578, 0, 0x1000000);
                        if (reinterpret_cast<int32_t>(eax618) < reinterpret_cast<int32_t>(0xffffffff) || (eax619 = lrint(eax578, 0, 0x1000000), reinterpret_cast<int32_t>(eax619) >= reinterpret_cast<int32_t>(0))) {
                            eax620 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax620 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld1 ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "lrint", eax620, eax617, eax578, 0, 0x1000000);
                        fun_8049080(10, 0, 0x1000000);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "pow", "ok", 0x804cf59, 10, 0, 0x1000000);
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "pow", "ok", 0x804cf59, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052548]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052548]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "pow", "ok", 0x804cf59, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052550]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052550]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "pow", "ok", 0x804cf59, 10, 0, 0x1000000);
                        __asm__("fld qword [0x80523a8]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80523a8]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "pow", "ok", 0x804cf59, 10, 0, 0x1000000);
                        __asm__("fld qword [0x8052558]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052558]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "pow", "ok", 0x804cf59, 10, 0, 0x1000000);
                        fun_8049040("%s - %s (NAN version)\n", "pow", "ok", v621, v622, v623, v624);
                        __asm__("fld qword [0x8052368]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052368]");
                        __asm__("fstp qword [esp]");
                        pow("%s - %s (NAN version)\n", "pow", "ok", v625);
                        __asm__("fucomp st0");
                        ax626 = fpu_status_word627;
                        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax626) + 1) & 4)) {
                            eax628 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax628 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s (NAN version)\n", "pow", eax628, v629, v630, v631, v632);
                        __asm__("fld qword [0x8052368]");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        pow("%s - %s (NAN version)\n", "pow", eax628, v633);
                        __asm__("fucomp st0");
                        ax634 = fpu_status_word635;
                        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax634) + 1) & 4)) {
                            eax636 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax636 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s (NAN version)\n", "pow", eax636, v637, v638, v639, v640);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "pow", "ok", 0x804d131, "%s - %s (NAN version)\n", "pow", eax636);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        pow("%s - %s (NAN version)\n", "pow", eax636, v641);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        pow("%s - %s (NAN version)\n", "pow", eax636, v642);
                        __asm__("fcomp qword [0x8052218]");
                        ax643 = fpu_status_word644;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax643) + 1) & 69 || (pow("%s - %s (NAN version)\n", "pow", eax636, v645), ax646 = fpu_status_word647, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax646) + 1) & 5))) {
                            eax648 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax648 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "pow", eax648, eax617, eax578, "pow", eax636);
                        __asm__("fld1 ");
                        __asm__("fld1 ");
                        __asm__("fcomp qword [0x8052560]");
                        ax649 = fpu_status_word650;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax649) + 1) & 5 || (ax651 = fpu_status_word652, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax651) + 1) & 5))) {
                            eax653 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax653 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "pow", eax653, eax617, eax578, "pow", eax636);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        pow(eax578, "pow", eax636, v654);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        pow(eax578, "pow", eax636, v655);
                        __asm__("fcomp qword [0x8052260]");
                        ax656 = fpu_status_word657;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax656) + 1) & 5 || (pow(eax578, "pow", eax636, v658), ax659 = fpu_status_word660, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax659) + 1) & 5))) {
                            eax661 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax661 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "pow", eax661, eax617, eax578, "pow", eax636);
                        fun_8049080(10, "pow", eax636);
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "pow10", "ok", 0x804d32a, 10, "pow", eax636);
                        __asm__("fld qword [0x8052530]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052530]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "pow10", "ok", 0x804d32a, 10, "pow", eax636);
                        __asm__("fld qword [0x80523a8]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80523a8]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "pow10", "ok", 0x804d32a, 10, "pow", eax636);
                        fun_8049080(10, "pow", eax636);
                        __asm__("fld qword [0x8052570]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052570]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "remainder", "ok", 0x804d3cb, 10, "pow", eax636);
                        __asm__("fld qword [0x8052578]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052578]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "remainder", "ok", 0x804d3cb, 10, "pow", eax636);
                        __asm__("fld qword [0x8052570]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052570]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "remainder", "ok", 0x804d3cb, 10, "pow", eax636);
                        __asm__("fld qword [0x8052578]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052578]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "remainder", "ok", 0x804d3cb, 10, "pow", eax636);
                        fun_8049080(10, "pow", eax636);
                        __asm__("fldz ");
                        __asm__("fchs ");
                        __asm__("fldz ");
                        __asm__("fchs ");
                        __asm__("fcomp qword [0x8052260]");
                        ax662 = fpu_status_word663;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax662) + 1) & 5 || (ax664 = fpu_status_word665, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax664) + 1) & 5))) {
                            eax666 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax666 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fldz ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "rint", eax666, 0x804d4a8, 10, "pow", eax636);
                        fun_8049080(10, "pow", eax636);
                        __asm__("fld qword [0x8052370]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80524c0]");
                        __asm__("fstp qword [esp]");
                        scalb(10, "pow", eax636, v667);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052370]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80524c0]");
                        __asm__("fstp qword [esp]");
                        scalb(10, "pow", eax636, v668);
                        __asm__("fcomp qword [0x8052580]");
                        ax669 = fpu_status_word670;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax669) + 1) & 5 || (scalb(10, "pow", eax636, v671), ax672 = fpu_status_word673, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax672) + 1) & 5))) {
                            eax674 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax674 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x80524d8]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "scalb", eax674, eax617, eax578, "pow", eax636);
                        __asm__("fld qword [0x8052418]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80524b8]");
                        __asm__("fstp qword [esp]");
                        scalb(eax578, "pow", eax636, v675);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052418]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80524b8]");
                        __asm__("fstp qword [esp]");
                        scalb(eax578, "pow", eax636, v676);
                        __asm__("fld tword [0x8052590]");
                        __asm__("fxch st0, st1");
                        __asm__("fcompp ");
                        ax677 = fpu_status_word678;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax677) + 1) & 5 || (scalb(eax578, "pow", eax636, v679), ax680 = fpu_status_word681, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax680) + 1) & 5))) {
                            eax682 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax682 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x80524e0]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "scalb", eax682, eax617, eax578, "pow", eax636);
                        __asm__("fld qword [0x80522a8]");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        scalb(eax578, "pow", eax636, v683);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x80522a8]");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        scalb(eax578, "pow", eax636, v684);
                        __asm__("fcomp qword [0x8052260]");
                        ax685 = fpu_status_word686;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax685) + 1) & 5 || (scalb(eax578, "pow", eax636, v687), ax688 = fpu_status_word689, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax688) + 1) & 5))) {
                            eax690 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax690 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "scalb", eax690, eax617, eax578, "pow", eax636);
                        __asm__("fld qword [0x80525b0]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052258]");
                        __asm__("fstp qword [esp]");
                        scalb(eax578, "pow", eax636, v691);
                        __asm__("fucomp st0");
                        ax692 = fpu_status_word693;
                        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax692) + 1) & 4)) {
                            eax694 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax694 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s (NAN version)\n", "scalb", eax694, v695, v696, v697, v698);
                        __asm__("fld qword [0x80525b8]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80522a8]");
                        __asm__("fstp qword [esp]");
                        scalb("%s - %s (NAN version)\n", "scalb", eax694, v699);
                        __asm__("fucomp st0");
                        ax700 = fpu_status_word701;
                        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax700) + 1) & 4)) {
                            eax702 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax702 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s (NAN version)\n", "scalb", eax702, v703, v704, v705, v706);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        scalb("%s - %s (NAN version)\n", "scalb", eax702, v707);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        scalb("%s - %s (NAN version)\n", "scalb", eax702, v708);
                        __asm__("fcomp qword [0x8052218]");
                        ax709 = fpu_status_word710;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax709) + 1) & 69 || (scalb("%s - %s (NAN version)\n", "scalb", eax702, v711), ax712 = fpu_status_word713, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax712) + 1) & 5))) {
                            eax714 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax714 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "scalb", eax714, eax617, eax578, "scalb", eax702);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        scalb(eax578, "scalb", eax702, v715);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        scalb(eax578, "scalb", eax702, v716);
                        __asm__("fcomp qword [0x8052278]");
                        ax717 = fpu_status_word718;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax717) + 1) & 5 || (scalb(eax578, "scalb", eax702, v719), ax720 = fpu_status_word721, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax720) + 1) & 69))) {
                            eax722 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax722 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "scalb", eax722, eax617, eax578, "scalb", eax702);
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        scalb(eax578, "scalb", eax702, v723);
                        __asm__("fucomp st0");
                        ax724 = fpu_status_word725;
                        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax724) + 1) & 4)) {
                            eax726 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax726 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s (NAN version)\n", "scalb", eax726, v727, v728, v729, v730);
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        scalb("%s - %s (NAN version)\n", "scalb", eax726, v731);
                        __asm__("fucomp st0");
                        ax732 = fpu_status_word733;
                        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax732) + 1) & 4)) {
                            eax734 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax734 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s (NAN version)\n", "scalb", eax734, v735, v736, v737, v738);
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052258]");
                        __asm__("fstp qword [esp]");
                        scalb("%s - %s (NAN version)\n", "scalb", eax734, v739);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052258]");
                        __asm__("fstp qword [esp]");
                        scalb("%s - %s (NAN version)\n", "scalb", eax734, v740);
                        __asm__("fcomp qword [0x8052260]");
                        ax741 = fpu_status_word742;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax741) + 1) & 5 || (scalb("%s - %s (NAN version)\n", "scalb", eax734, v743), ax744 = fpu_status_word745, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax744) + 1) & 5))) {
                            eax746 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax746 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "scalb", eax746, eax617, eax578, "scalb", eax734);
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052358]");
                        __asm__("fstp qword [esp]");
                        scalb(eax578, "scalb", eax734, v747);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052358]");
                        __asm__("fstp qword [esp]");
                        scalb(eax578, "scalb", eax734, v748);
                        __asm__("fcomp qword [0x8052260]");
                        ax749 = fpu_status_word750;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax749) + 1) & 5 || (scalb(eax578, "scalb", eax734, v751), ax752 = fpu_status_word753, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax752) + 1) & 5))) {
                            eax754 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax754 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fldz ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "scalb", eax754, eax617, eax578, "scalb", eax734);
                        fun_8049080(10, "scalb", eax734);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "scalbn", "ok", 0x804db3e, 10, "scalb", eax734);
                        __asm__("fld qword [0x80524d8]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80524d8]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "scalbn", "ok", 0x804db3e, 10, "scalb", eax734);
                        __asm__("fld qword [0x80524e0]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80524e0]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "scalbn", "ok", 0x804db3e, 10, "scalb", eax734);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fcomp qword [0x8052218]");
                        ax755 = fpu_status_word756;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax755) + 1) & 69 || (ax757 = fpu_status_word758, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax757) + 1) & 5))) {
                            eax759 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax759 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "scalbn", eax759, 0x804db3e, 10, "scalb", eax734);
                        __asm__("fld qword [0x8052278]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fcomp qword [0x8052278]");
                        ax760 = fpu_status_word761;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax760) + 1) & 5 || (ax762 = fpu_status_word763, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax762) + 1) & 69))) {
                            eax764 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax764 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "scalbn", eax764, 0x804db3e, 10, "scalb", eax734);
                        __asm__("fld qword [0x8052368]");
                        __asm__("fucomp st0");
                        ax765 = fpu_status_word766;
                        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax765) + 1) & 4)) {
                            eax767 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax767 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s (NAN version)\n", "scalbn", eax767, v768, v769, v770, v771);
                        fun_8049080(10, "scalbn", eax767);
                        __asm__("fldz ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sin", "ok", 0x804dcd8, 10, "scalbn", eax767);
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sin", "ok", 0x804dcd8, 10, "scalbn", eax767);
                        __asm__("fld1 ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld1 ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sin", "ok", 0x804dcd8, 10, "scalbn", eax767);
                        __asm__("fld qword [0x80525c0]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80525c0]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sin", "ok", 0x804dcd8, 10, "scalbn", eax767);
                        fun_8049080(10, "scalbn", eax767);
                        __asm__("fldz ");
                        __asm__("fstp qword [eax]");
                        __asm__("fld1 ");
                        __asm__("fstp qword [eax]");
                        __asm__("fld qword [ebp-0x20]");
                        __asm__("fld qword [ebp-0x20]");
                        __asm__("fcomp qword [0x8052260]");
                        ax772 = fpu_status_word773;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax772) + 1) & 5 || (ax774 = fpu_status_word775, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax774) + 1) & 5))) {
                            eax776 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax776 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sincos", eax776, 0x804dda5, 10, "scalbn", eax767);
                        __asm__("fld qword [ebp-0x28]");
                        __asm__("fld qword [ebp-0x28]");
                        __asm__("fcomp qword [0x8052560]");
                        ax777 = fpu_status_word778;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax777) + 1) & 5 || (ax779 = fpu_status_word780, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax779) + 1) & 5))) {
                            eax781 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax781 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sincos", eax781, 0x804dda5, 10, "scalbn", eax767);
                        __asm__("fld1 ");
                        __asm__("fstp qword [eax]");
                        __asm__("fld qword [0x8052378]");
                        __asm__("fstp qword [eax]");
                        __asm__("fld qword [ebp-0x20]");
                        __asm__("fld qword [ebp-0x20]");
                        __asm__("fcomp qword [0x8052560]");
                        ax782 = fpu_status_word783;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax782) + 1) & 5 || (ax784 = fpu_status_word785, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax784) + 1) & 5))) {
                            eax786 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax786 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sincos", eax786, 0x804dda5, 10, "scalbn", eax767);
                        __asm__("fld qword [ebp-0x28]");
                        __asm__("fld qword [ebp-0x28]");
                        __asm__("fcomp qword [0x8052260]");
                        ax787 = fpu_status_word788;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax787) + 1) & 5 || (ax789 = fpu_status_word790, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax789) + 1) & 5))) {
                            eax791 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax791 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sincos", eax791, 0x804dda5, 10, "scalbn", eax767);
                        __asm__("fld qword [0x80525c0]");
                        __asm__("fstp qword [eax]");
                        __asm__("fld qword [0x80525c8]");
                        __asm__("fstp qword [eax]");
                        __asm__("fld qword [ebp-0x20]");
                        __asm__("fld tword [0x80525d0]");
                        __asm__("fld qword [ebp-0x20]");
                        __asm__("fcompp ");
                        ax792 = fpu_status_word793;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax792) + 1) & 5 || (ax794 = fpu_status_word795, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax794) + 1) & 5))) {
                            eax796 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax796 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x80525c0]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sincos", eax796, 0x804dda5, 10, "scalbn", eax767);
                        __asm__("fld qword [ebp-0x28]");
                        __asm__("fld tword [0x80525f0]");
                        __asm__("fld qword [ebp-0x28]");
                        __asm__("fcompp ");
                        ax797 = fpu_status_word798;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax797) + 1) & 5 || (ax799 = fpu_status_word800, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax799) + 1) & 5))) {
                            eax801 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax801 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052610]");
                        __asm__("fstp qword [esp]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sincos", eax801, 0x804dda5, 10, "scalbn", eax767);
                        fun_8049080(10, "scalbn", eax767);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sinh", "ok", 0x804dffe, 10, "scalbn", eax767);
                        __asm__("fld qword [0x8052618]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052618]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sinh", "ok", 0x804dffe, 10, "scalbn", eax767);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        sinh(10, "scalbn", eax767);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        sinh(10, "scalbn", eax767);
                        __asm__("fcomp qword [0x8052218]");
                        ax802 = fpu_status_word803;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax802) + 1) & 69 || (sinh(10, "scalbn", eax767), ax804 = fpu_status_word805, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax804) + 1) & 5))) {
                            eax806 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax806 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sinh", eax806, eax617, eax578, "scalbn", eax767);
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        sinh(eax578, "scalbn", eax767);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        sinh(eax578, "scalbn", eax767);
                        __asm__("fcomp qword [0x8052278]");
                        ax807 = fpu_status_word808;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax807) + 1) & 5 || (sinh(eax578, "scalbn", eax767), ax809 = fpu_status_word810, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax809) + 1) & 69))) {
                            eax811 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax811 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sinh", eax811, eax617, eax578, "scalbn", eax767);
                        fun_8049080(10, "scalbn", eax767);
                        __asm__("fld qword [0x8052258]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052258]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sqrt", "ok", 0x804e1a3, 10, "scalbn", eax767);
                        __asm__("fld qword [0x80525b8]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x80525b8]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sqrt", "ok", 0x804e1a3, 10, "scalbn", eax767);
                        __asm__("fld qword [0x8052620]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052620]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sqrt", "ok", 0x804e1a3, 10, "scalbn", eax767);
                        __asm__("fld qword [0x8052368]");
                        __asm__("fstp qword [esp]");
                        sqrt(10, "scalbn", eax767);
                        __asm__("fucomp st0");
                        ax812 = fpu_status_word813;
                        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax812) + 1) & 4)) {
                            eax814 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax814 = reinterpret_cast<uint32_t>("ok");
                        }
                        fun_8049040("%s - %s (NAN version)\n", "sqrt", eax814, v815, v816, v817, v818);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        sqrt("%s - %s (NAN version)\n", "sqrt", eax814);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        sqrt("%s - %s (NAN version)\n", "sqrt", eax814);
                        __asm__("fcomp qword [0x8052218]");
                        ax819 = fpu_status_word820;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax819) + 1) & 69 || (sqrt("%s - %s (NAN version)\n", "sqrt", eax814), ax821 = fpu_status_word822, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax821) + 1) & 5))) {
                            eax823 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax823 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "sqrt", eax823, eax617, eax578, "sqrt", eax814);
                        fun_8049080(10, "sqrt", eax814);
                        __asm__("fldz ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "tan", "ok", 0x804e32b, 10, "sqrt", eax814);
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052628]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "tan", "ok", 0x804e32b, 10, "sqrt", eax814);
                        __asm__("fld qword [0x8052630]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052630]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "tan", "ok", 0x804e32b, 10, "sqrt", eax814);
                        fun_8049080(10, "sqrt", eax814);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "tanh", "ok", 0x804e3cc, 10, "sqrt", eax814);
                        __asm__("fld qword [0x8052638]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052638]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "tanh", "ok", 0x804e3cc, 10, "sqrt", eax814);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        tanh(10, "sqrt", eax814);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        tanh(10, "sqrt", eax814);
                        __asm__("fcomp qword [0x8052560]");
                        ax824 = fpu_status_word825;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax824) + 1) & 5 || (tanh(10, "sqrt", eax814), ax826 = fpu_status_word827, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax826) + 1) & 5))) {
                            eax828 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax828 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld1 ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "tanh", eax828, eax617, eax578, "sqrt", eax814);
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        tanh(eax578, "sqrt", eax814);
                        __asm__("fstp qword [ebp-0x40]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        tanh(eax578, "sqrt", eax814);
                        __asm__("fcomp qword [0x80523d0]");
                        ax829 = fpu_status_word830;
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax829) + 1) & 5 || (tanh(eax578, "sqrt", eax814), ax831 = fpu_status_word832, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax831) + 1) & 5))) {
                            eax833 = reinterpret_cast<uint32_t>("fail");
                        } else {
                            eax833 = reinterpret_cast<uint32_t>("ok");
                        }
                        __asm__("fld1 ");
                        __asm__("fchs ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "tanh", eax833, eax617, eax578, "sqrt", eax814);
                        fun_8049080(10, "sqrt", eax814);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "trunc", "ok", 0x804e56b, 10, "sqrt", eax814);
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        __asm__("fldz ");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "trunc", "ok", 0x804e56b, 10, "sqrt", eax814);
                        __asm__("fld qword [0x8052640]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052640]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "trunc", "ok", 0x804e56b, 10, "sqrt", eax814);
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052210]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "trunc", "ok", 0x804e56b, 10, "sqrt", eax814);
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        __asm__("fld qword [0x8052278]");
                        __asm__("fstp qword [esp]");
                        fun_8049040("%s - %s computed: %10.15e should be: %10.15e\n", "trunc", "ok", 0x804e56b, 10, "sqrt", eax814);
                        fun_8049040("%s - %s (NAN version)\n", "trunc", "ok", v834, v835, v836, v837);
                        fun_8049080(10, "trunc", "ok");
                        fun_8049060();
                        __asm__("fld dword [ebp+0x8]");
                        __asm__("fxam ");
                        __asm__("fstp st0");
                        goto 0;
                    }
                }
            }
        }
    }
}

uint32_t isinf(int32_t a1, uint32_t a2) {
    uint32_t eax3;
    int16_t fpu_status_word4;
    uint32_t ebx5;

    eax3 = a2;
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax3) = fpu_status_word4;
    __asm__("fstp st0");
    ebx5 = reinterpret_cast<uint1_t>((eax3 & 0x4500) == 0x500);
    if (eax3 & 0x200) {
        ebx5 = -ebx5;
    }
    return ebx5;
}

uint32_t isinfl() {
    uint32_t eax1;
    int16_t fpu_status_word2;
    uint32_t ebx3;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    ebx3 = reinterpret_cast<uint1_t>((eax1 & 0x4500) == 0x500);
    if (eax1 & 0x200) {
        ebx3 = -ebx3;
    }
    return ebx3;
}

int32_t __fpclassifyf(uint32_t a1) {
    void* eax2;
    int16_t fpu_status_word3;
    int32_t ebx4;

    eax2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    __asm__("fld dword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax2) = fpu_status_word3;
    __asm__("fstp st0");
    if ((reinterpret_cast<uint32_t>(eax2) & 0x4500) != 0x100) {
        if ((reinterpret_cast<uint32_t>(eax2) & 0x4500) != 0x500) {
            if ((reinterpret_cast<uint32_t>(eax2) & 0x4500) != 0x4000) {
                if (a1 & 0x7f000000) {
                    ebx4 = 4;
                } else {
                    ebx4 = 3;
                }
            } else {
                ebx4 = 2;
            }
        } else {
            ebx4 = 1;
        }
    } else {
        ebx4 = 0;
    }
    return ebx4;
}

void fmodl() {
    int16_t ax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x14]");
    __asm__("fld tword [ebp+0x8]");
    do {
        __asm__("fprem ");
        __asm__("wait ");
        ax1 = fpu_status_word2;
    } while (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax1) + 1));
    __asm__("fstp tword [ebp-0xc]");
    __asm__("fld tword [ebp-0xc]");
    return;
}

void hypotf() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;
    unsigned char ah5;
    unsigned char al6;

    __asm__("fld dword [ebp+0xc]");
    __asm__("fld dword [ebp+0x8]");
    __asm__("fxam ");
    ax1 = fpu_status_word2;
    __asm__("fxch st0, st1");
    __asm__("fld st0");
    __asm__("fstp st0");
    __asm__("fxam ");
    ax3 = fpu_status_word4;
    ah5 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1));
    if (*reinterpret_cast<int1_t*>(&ah5)) {
        al6 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 69);
        if (al6 == 5) {
            addr_804f0ba_3:
            __asm__("fstp st1");
            __asm__("fabs ");
        } else {
            if ((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 69) != 5) {
                if (!(al6 & 1)) {
                    __asm__("fxch st0, st1");
                }
                __asm__("fstp st1");
            } else {
                __asm__("fxch st0, st1");
                goto addr_804f0ba_3;
            }
        }
    } else {
        __asm__("fxch st0, st1");
        __asm__("fmul st0, st0");
        __asm__("fxch st0, st1");
        __asm__("fmul st0, st0");
        __asm__("faddp st1, st0");
        __asm__("fsqrt ");
    }
    return;
}

void remainder(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int16_t ax5;
    int16_t fpu_status_word6;

    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x8]");
    do {
        __asm__("fprem1 ");
        __asm__("wait ");
        ax5 = fpu_status_word6;
    } while (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax5) + 1));
    __asm__("fstp st1");
    return;
}

void remainderl() {
    int16_t ax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x14]");
    __asm__("fld tword [ebp+0x8]");
    do {
        __asm__("fprem1 ");
        __asm__("wait ");
        ax1 = fpu_status_word2;
    } while (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax1) + 1));
    __asm__("fstp st1");
    return;
}

void dremf() {
    int16_t ax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0xc]");
    __asm__("fld dword [ebp+0x8]");
    do {
        __asm__("fprem1 ");
        __asm__("wait ");
        ax1 = fpu_status_word2;
    } while (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax1) + 1));
    __asm__("fstp st1");
    return;
}

void drem(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int16_t ax5;
    int16_t fpu_status_word6;

    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x8]");
    do {
        __asm__("fprem1 ");
        __asm__("wait ");
        ax5 = fpu_status_word6;
    } while (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax5) + 1));
    __asm__("fstp st1");
    return;
}

void dreml() {
    int16_t ax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x14]");
    __asm__("fld tword [ebp+0x8]");
    do {
        __asm__("fprem1 ");
        __asm__("wait ");
        ax1 = fpu_status_word2;
    } while (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax1) + 1));
    __asm__("fstp st1");
    return;
}

void sqrtf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fsqrt ");
    return;
}

void cos(int32_t a1, int32_t a2) {
    int16_t ax3;
    int16_t fpu_status_word4;
    int16_t ax5;
    int16_t fpu_status_word6;

    __asm__("fld qword [ebp-0x8]");
    __asm__("fcos ");
    ax3 = fpu_status_word4;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 4) {
        __asm__("fldlpi ");
        __asm__("fadd st0, st0");
        __asm__("fxch st0, st1");
        do {
            __asm__("fprem1 ");
            ax5 = fpu_status_word6;
        } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) & 4);
        __asm__("fstp st1");
        __asm__("fcos ");
    }
    return;
}

void cosl() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fcos ");
    ax1 = fpu_status_word2;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 4) {
        __asm__("fldlpi ");
        __asm__("fadd st0, st0");
        __asm__("fxch st0, st1");
        do {
            __asm__("fprem1 ");
            ax3 = fpu_status_word4;
        } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 4);
        __asm__("fstp st1");
        __asm__("fcos ");
    }
    return;
}

void sinf() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fsin ");
    ax1 = fpu_status_word2;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 4) {
        __asm__("fldlpi ");
        __asm__("fadd st0, st0");
        __asm__("fxch st0, st1");
        do {
            __asm__("fprem1 ");
            ax3 = fpu_status_word4;
        } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 4);
        __asm__("fstp st1");
        __asm__("fsin ");
    }
    return;
}

void sin(int32_t a1, int32_t a2) {
    int16_t ax3;
    int16_t fpu_status_word4;
    int16_t ax5;
    int16_t fpu_status_word6;

    __asm__("fld qword [ebp-0x8]");
    __asm__("fsin ");
    ax3 = fpu_status_word4;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 4) {
        __asm__("fldlpi ");
        __asm__("fadd st0, st0");
        __asm__("fxch st0, st1");
        do {
            __asm__("fprem1 ");
            ax5 = fpu_status_word6;
        } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) & 4);
        __asm__("fstp st1");
        __asm__("fsin ");
    }
    return;
}

void sinl() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fsin ");
    ax1 = fpu_status_word2;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 4) {
        __asm__("fldlpi ");
        __asm__("fadd st0, st0");
        __asm__("fxch st0, st1");
        do {
            __asm__("fprem1 ");
            ax3 = fpu_status_word4;
        } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 4);
        __asm__("fstp st1");
        __asm__("fsin ");
    }
    return;
}

void tanf() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fptan ");
    ax1 = fpu_status_word2;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 4) {
        __asm__("fldlpi ");
        __asm__("fadd st0, st0");
        __asm__("fxch st0, st1");
        do {
            __asm__("fprem1 ");
            ax3 = fpu_status_word4;
        } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 4);
        __asm__("fstp st1");
        __asm__("fptan ");
    }
    __asm__("ffreep st0");
    return;
}

void tan(int32_t a1, int32_t a2) {
    int16_t ax3;
    int16_t fpu_status_word4;
    int16_t ax5;
    int16_t fpu_status_word6;

    __asm__("fld qword [ebp-0x8]");
    __asm__("fptan ");
    ax3 = fpu_status_word4;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 4) {
        __asm__("fldlpi ");
        __asm__("fadd st0, st0");
        __asm__("fxch st0, st1");
        do {
            __asm__("fprem1 ");
            ax5 = fpu_status_word6;
        } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) & 4);
        __asm__("fstp st1");
        __asm__("fptan ");
    }
    __asm__("ffreep st0");
    return;
}

void tanl() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fptan ");
    ax1 = fpu_status_word2;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 4) {
        __asm__("fldlpi ");
        __asm__("fadd st0, st0");
        __asm__("fxch st0, st1");
        do {
            __asm__("fprem1 ");
            ax3 = fpu_status_word4;
        } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 4);
        __asm__("fstp st1");
        __asm__("fptan ");
    }
    __asm__("ffreep st0");
    return;
}

void exp2f() {
    uint32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fxam ");
    __asm__("wait ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    if ((69 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1)) == 5) {
        if (eax1 & 0x200) {
            __asm__("ffreep st0");
            __asm__("fldz ");
        }
    } else {
        __asm__("fld st0");
        __asm__("frndint ");
        __asm__("fsub st1, st0");
        __asm__("fxch st0, st1");
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
        __asm__("fstp st1");
    }
    return;
}

void frexp(int32_t a1, int32_t a2, int32_t* a3) {
    int16_t ax4;
    int16_t fpu_status_word5;

    __asm__("fld1 ");
    __asm__("fchs ");
    *a3 = 0;
    __asm__("fld qword [ebp-0x8]");
    __asm__("ftst ");
    __asm__("wait ");
    ax4 = fpu_status_word5;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax4) + 1) & 65) ^ 64) {
        __asm__("fpxtract ");
        __asm__("fxch st0, st1");
        __asm__("fistp dword [edx]");
        __asm__("fscale ");
        *a3 = *a3 + 1;
    }
    __asm__("fstp st1");
    return;
}

void frexpl() {
    int32_t* v1;
    int16_t ax2;
    int16_t fpu_status_word3;
    int32_t* v4;

    __asm__("fld1 ");
    __asm__("fchs ");
    *v1 = 0;
    __asm__("fld tword [ebp+0x8]");
    __asm__("ftst ");
    __asm__("wait ");
    ax2 = fpu_status_word3;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax2) + 1) & 65) ^ 64) {
        __asm__("fpxtract ");
        __asm__("fxch st0, st1");
        __asm__("fistp dword [edx]");
        __asm__("fscale ");
        *v4 = *v4 + 1;
    }
    __asm__("fstp st1");
    return;
}

int32_t ilogbf() {
    int32_t v1;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fpxtract ");
    __asm__("fstp st0");
    __asm__("fistp dword [ebp-0x4]");
    __asm__("wait ");
    __asm__("fstp st0");
    return v1;
}

void fun_8051245() {
}

int32_t g8056008 = 0;

void fun_8049046() {
    goto g8056008;
}

void fun_8049076() {
    goto 0x8049030;
}

void fun_8049121() {
}

void fun_8049169() {
}

void fun_8049199() {
}

void acoshl() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fmul st0, st0");
    __asm__("fld1 ");
    __asm__("fsubp st1, st0");
    __asm__("fsqrt ");
    __asm__("fstp tword [ebp-0xc]");
    __asm__("fld tword [ebp+0x8]");
    __asm__("fld tword [ebp-0xc]");
    __asm__("faddp st1, st0");
    __asm__("fldln2 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    __asm__("fstp tword [ebp-0xc]");
    __asm__("fld tword [ebp-0xc]");
    return;
}

void atan2l() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fld tword [ebp+0x14]");
    __asm__("fpatan ");
    return;
}

void logl() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fldln2 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    return;
}

void log10l() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fldlg2 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    return;
}

void log2l() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fld1 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    return;
}

void log1pl() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fldln2 ");
    __asm__("fxch st0, st1");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fyl2x ");
    return;
}

int32_t lrintl() {
    int32_t v1;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fistp dword [ebp-0x4]");
    __asm__("wait ");
    return v1;
}

void sqrtl() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fsqrt ");
    return;
}

uint32_t isnan(int32_t a1, uint32_t a2) {
    uint32_t eax3;
    int16_t fpu_status_word4;

    eax3 = a2;
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax3) = fpu_status_word4;
    __asm__("fstp st0");
    return static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((eax3 & 0x4500) == 0x100)));
}

int32_t isfinite(int32_t a1, uint32_t a2) {
    uint32_t eax3;
    int16_t fpu_status_word4;
    int32_t eax5;

    eax3 = a2;
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax3) = fpu_status_word4;
    __asm__("fstp st0");
    if ((eax3 & 0x4500) == 0x400 || (eax3 & 0x4500) == 0x4000) {
        eax5 = 1;
    } else {
        eax5 = 0;
    }
    return eax5;
}

int32_t isfinitel() {
    uint32_t eax1;
    int16_t fpu_status_word2;
    int32_t eax3;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    if ((eax1 & 0x4500) == 0x400 || (eax1 & 0x4500) == 0x4000) {
        eax3 = 1;
    } else {
        eax3 = 0;
    }
    return eax3;
}

uint32_t isnormalf() {
    uint32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    return static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((eax1 & 0x4500) == 0x400)));
}

int32_t __fpclassify(int32_t a1, int32_t a2) {
    void* eax3;
    int16_t fpu_status_word4;
    int32_t ebx5;

    eax3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 32);
    __asm__("fld qword [ebp-0x20]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax3) = fpu_status_word4;
    __asm__("fstp st0");
    if ((reinterpret_cast<uint32_t>(eax3) & 0x4500) != 0x100) {
        if ((reinterpret_cast<uint32_t>(eax3) & 0x4500) != 0x500) {
            if ((reinterpret_cast<uint32_t>(eax3) & 0x4500) != 0x4000) {
                if (a2) {
                    ebx5 = 4;
                } else {
                    ebx5 = 3;
                }
            } else {
                ebx5 = 2;
            }
        } else {
            ebx5 = 1;
        }
    } else {
        ebx5 = 0;
    }
    return ebx5;
}

int32_t __fpclassifyl() {
    void* eax1;
    int16_t fpu_status_word2;
    int32_t v3;
    int32_t v4;
    int32_t ebx5;

    eax1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    if ((reinterpret_cast<uint32_t>(eax1) & 0x4500) != 0x100) {
        if ((reinterpret_cast<uint32_t>(eax1) & 0x4500) != 0x500) {
            if ((reinterpret_cast<uint32_t>(eax1) & 0x4500) != 0x4000) {
                if (v3 || v4 < 0) {
                    ebx5 = 4;
                } else {
                    ebx5 = 3;
                }
            } else {
                ebx5 = 2;
            }
        } else {
            ebx5 = 1;
        }
    } else {
        ebx5 = 0;
    }
    return ebx5;
}

int32_t isgreaterf() {
    int32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0xc]");
    __asm__("fld dword [ebp+0x8]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) & 69) == 0);
    return eax1;
}

void expl() {
    uint32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    if ((eax1 & 0x4500) != 0x500) {
        __asm__("fld tword [ebp+0x8]");
        __asm__("fldl2e ");
        __asm__("fxch st0, st1");
        __asm__("fmulp st1, st0");
        __asm__("fst st1");
        __asm__("frndint ");
        __asm__("fst st2");
        __asm__("fsubp st1, st0");
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
    } else {
        if (!(eax1 & 0x200)) {
            __asm__("fld tword [ebp+0x8]");
        } else {
            __asm__("fldz ");
        }
    }
    return;
}

void exp10f() {
    uint32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    if ((eax1 & 0x4500) != 0x500) {
        __asm__("fld dword [ebp+0x8]");
        __asm__("fldl2t ");
        __asm__("fxch st0, st1");
        __asm__("fmulp st1, st0");
        __asm__("fst st1");
        __asm__("frndint ");
        __asm__("fst st2");
        __asm__("fsubp st1, st0");
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
        __asm__("ffree st1");
    } else {
        if (!(eax1 & 0x200)) {
            __asm__("fld dword [ebp+0x8]");
        } else {
            __asm__("fldz ");
        }
    }
    return;
}

void exp10l() {
    uint32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    if ((eax1 & 0x4500) != 0x500) {
        __asm__("fld tword [ebp+0x8]");
        __asm__("fldl2t ");
        __asm__("fxch st0, st1");
        __asm__("fmulp st1, st0");
        __asm__("fst st1");
        __asm__("frndint ");
        __asm__("fst st2");
        __asm__("fsubp st1, st0");
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
        __asm__("ffree st1");
    } else {
        if (!(eax1 & 0x200)) {
            __asm__("fld tword [ebp+0x8]");
        } else {
            __asm__("fldz ");
        }
    }
    return;
}

void fmodf() {
    int16_t ax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0xc]");
    __asm__("fld dword [ebp+0x8]");
    do {
        __asm__("fprem ");
        __asm__("wait ");
        ax1 = fpu_status_word2;
    } while (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax1) + 1));
    return;
}

void hypotl() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;
    unsigned char ah5;
    unsigned char al6;

    __asm__("fld tword [ebp+0x14]");
    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    ax1 = fpu_status_word2;
    __asm__("fxch st0, st1");
    __asm__("fld st0");
    __asm__("fstp st0");
    __asm__("fxam ");
    ax3 = fpu_status_word4;
    ah5 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1));
    if (*reinterpret_cast<int1_t*>(&ah5)) {
        al6 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 69);
        if (al6 == 5) {
            addr_804f171_3:
            __asm__("fstp st1");
            __asm__("fabs ");
        } else {
            if ((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 69) != 5) {
                if (!(al6 & 1)) {
                    __asm__("fxch st0, st1");
                }
                __asm__("fstp st1");
            } else {
                __asm__("fxch st0, st1");
                goto addr_804f171_3;
            }
        }
    } else {
        __asm__("fxch st0, st1");
        __asm__("fmul st0, st0");
        __asm__("fxch st0, st1");
        __asm__("fmul st0, st0");
        __asm__("faddp st1, st0");
        __asm__("fsqrt ");
    }
    return;
}

void logf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fldln2 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    return;
}

void* copysign(int32_t a1, int32_t a2, int32_t a3, uint32_t a4) {
    uint32_t eax5;
    int16_t fpu_status_word6;
    void* v7;
    void* eax8;

    eax5 = a4;
    __asm__("fld qword [ebp-0x28]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax5) = fpu_status_word6;
    __asm__("fstp st0");
    v7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 32);
    if (!(eax5 & 0x200)) {
        eax8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v7) + 4);
    } else {
        eax8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v7) + 4);
    }
    __asm__("fld qword [ebp-0x20]");
    return eax8;
}

void* copysignl() {
    uint32_t eax1;
    int16_t fpu_status_word2;
    void* v3;
    void* eax4;

    __asm__("fld tword [ebp+0x14]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    v3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    if (!(eax1 & 0x200)) {
        eax4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v3) + 8);
    } else {
        eax4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v3) + 8);
    }
    __asm__("fld tword [ebp+0x8]");
    return eax4;
}

void cosf() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fcos ");
    ax1 = fpu_status_word2;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 4) {
        __asm__("fldlpi ");
        __asm__("fadd st0, st0");
        __asm__("fxch st0, st1");
        do {
            __asm__("fprem1 ");
            ax3 = fpu_status_word4;
        } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 4);
        __asm__("fstp st1");
        __asm__("fcos ");
    }
    return;
}

void exp2l() {
    uint32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    __asm__("wait ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    if ((69 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1)) == 5) {
        if (eax1 & 0x200) {
            __asm__("ffreep st0");
            __asm__("fldz ");
        }
    } else {
        __asm__("fld st0");
        __asm__("frndint ");
        __asm__("fsub st1, st0");
        __asm__("fxch st0, st1");
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
        __asm__("fstp st1");
    }
    return;
}

void fdimf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fld dword [ebp+0xc]");
    __asm__("fsubrp st1, st0");
    __asm__("fabs ");
    __asm__("fstp st1");
    return;
}

void fmaxl() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fld tword [ebp+0x14]");
    __asm__("fxam ");
    ax1 = fpu_status_word2;
    __asm__("fxch st0, st1");
    if ((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 69) != 1 && (ax3 = fpu_status_word4, *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax3) + 1))) {
        __asm__("fxch st0, st1");
    }
    __asm__("fstp st1");
    return;
}

void fminf() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fld dword [ebp+0xc]");
    __asm__("fxam ");
    ax1 = fpu_status_word2;
    if ((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 69) == 1 || (ax3 = fpu_status_word4, !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax3) + 1))) {
        __asm__("fxch st0, st1");
    }
    __asm__("fstp st1");
    return;
}

void fminl() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fld tword [ebp+0x14]");
    __asm__("fxam ");
    ax1 = fpu_status_word2;
    if ((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 69) == 1 || (ax3 = fpu_status_word4, !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax3) + 1))) {
        __asm__("fxch st0, st1");
    }
    __asm__("fstp st1");
    return;
}

void frexpf() {
    int32_t* v1;
    int16_t ax2;
    int16_t fpu_status_word3;
    int32_t* v4;

    __asm__("fld1 ");
    __asm__("fchs ");
    *v1 = 0;
    __asm__("fld dword [ebp+0x8]");
    __asm__("ftst ");
    __asm__("wait ");
    ax2 = fpu_status_word3;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax2) + 1) & 65) ^ 64) {
        __asm__("fpxtract ");
        __asm__("fxch st0, st1");
        __asm__("fistp dword [edx]");
        __asm__("fscale ");
        *v4 = *v4 + 1;
    }
    __asm__("fstp st1");
    return;
}

int32_t ilogb(int32_t a1, int32_t a2) {
    int32_t v3;

    __asm__("fld qword [ebp-0x18]");
    __asm__("fpxtract ");
    __asm__("fstp st0");
    __asm__("fistp dword [ebp-0x4]");
    __asm__("wait ");
    __asm__("fstp st0");
    return v3;
}

int16_t pow10f(uint32_t a1) {
    uint32_t eax2;
    int16_t fpu_status_word3;
    uint32_t eax4;
    uint32_t ebx5;
    uint32_t ebp6;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax2) = fpu_status_word3;
    __asm__("fstp st0");
    eax4 = eax2 & 0x4500;
    if (eax4 != 0x500) {
        __asm__("fld dword [ebp+0x8]");
        __asm__("fldl2t ");
        __asm__("fmulp st1, st0");
        *reinterpret_cast<int16_t*>(&eax4) = frac(ebx5, ebp6, __return_address(), a1);
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
        __asm__("fstp st1");
    } else {
        __asm__("fld dword [ebp+0x8]");
    }
    return *reinterpret_cast<int16_t*>(&eax4);
}

int16_t pow10(uint32_t a1, uint32_t a2) {
    uint32_t eax3;
    uint32_t v4;
    int16_t fpu_status_word5;
    uint32_t eax6;
    uint32_t v7;
    uint32_t ebx8;

    eax3 = a2;
    v4 = eax3;
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax3) = fpu_status_word5;
    __asm__("fstp st0");
    eax6 = eax3 & 0x4500;
    if (eax6 != 0x500) {
        __asm__("fld qword [ebp-0x10]");
        __asm__("fldl2t ");
        __asm__("fmulp st1, st0");
        *reinterpret_cast<int16_t*>(&eax6) = frac(a1, v4, v7, ebx8);
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
        __asm__("fstp st1");
    } else {
        __asm__("fld qword [ebp-0x10]");
    }
    return *reinterpret_cast<int16_t*>(&eax6);
}

int16_t pow10l(uint32_t a1) {
    uint32_t eax2;
    int16_t fpu_status_word3;
    uint32_t eax4;
    uint32_t ebx5;
    uint32_t ebp6;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax2) = fpu_status_word3;
    __asm__("fstp st0");
    eax4 = eax2 & 0x4500;
    if (eax4 != 0x500) {
        __asm__("fld tword [ebp+0x8]");
        __asm__("fldl2t ");
        __asm__("fmulp st1, st0");
        *reinterpret_cast<int16_t*>(&eax4) = frac(ebx5, ebp6, __return_address(), a1);
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
        __asm__("fstp st1");
    } else {
        __asm__("fld tword [ebp+0x8]");
    }
    return *reinterpret_cast<int16_t*>(&eax4);
}

int32_t cbrtf(int32_t a1) {
    uint32_t eax2;
    int16_t fpu_status_word3;
    int16_t ax4;
    int16_t fpu_status_word5;
    int32_t v6;
    int32_t eax7;
    int32_t v8;
    int32_t v9;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax2) = fpu_status_word3;
    __asm__("fstp st0");
    if ((eax2 & 0x4500) != 0x500) {
        __asm__("fld dword [ebp+0x8]");
        __asm__("ftst ");
        ax4 = fpu_status_word5;
        __asm__("fstp st0");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax4) + 1) & 5) {
            __asm__("fld dword [ebp+0x8]");
            __asm__("fchs ");
            __asm__("fstp dword [ebp-0x8]");
            __asm__("fld dword [0x805266c]");
            __asm__("fstp dword [esp]");
            powf(v6);
            __asm__("fchs ");
            __asm__("fstp dword [ebp-0x8]");
            eax7 = v8;
        } else {
            __asm__("fld dword [0x805266c]");
            __asm__("fstp dword [esp]");
            powf(a1);
            __asm__("fstp dword [ebp-0x8]");
            eax7 = v9;
        }
    } else {
        eax7 = a1;
    }
    __asm__("fld dword [ebp-0x8]");
    return eax7;
}

int32_t cbrtl(int32_t a1, int32_t a2, int32_t a3) {
    uint32_t eax4;
    int16_t fpu_status_word5;
    int16_t ax6;
    int16_t fpu_status_word7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t eax11;
    int32_t v12;
    int32_t v13;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax4) = fpu_status_word5;
    __asm__("fstp st0");
    if ((eax4 & 0x4500) != 0x500) {
        __asm__("fld tword [ebp+0x8]");
        __asm__("ftst ");
        ax6 = fpu_status_word7;
        __asm__("fstp st0");
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax6) + 1) & 5) {
            __asm__("fld tword [ebp+0x8]");
            __asm__("fchs ");
            __asm__("fstp tword [ebp-0x10]");
            __asm__("fld tword [0x8052680]");
            __asm__("fstp tword [esp]");
            powl(v8, v9, v10);
            __asm__("fchs ");
            __asm__("fstp tword [ebp-0x10]");
            eax11 = v12;
        } else {
            __asm__("fld tword [0x8052680]");
            __asm__("fstp tword [esp]");
            powl(a1, a2, a3);
            __asm__("fstp tword [ebp-0x10]");
            eax11 = v13;
        }
    } else {
        eax11 = a1;
    }
    __asm__("fld tword [ebp-0x10]");
    return eax11;
}

void acoshf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fmul st0, st0");
    __asm__("fld1 ");
    __asm__("fsubp st1, st0");
    __asm__("fsqrt ");
    __asm__("fstp dword [ebp-0x4]");
    __asm__("fld dword [ebp+0x8]");
    __asm__("fadd dword [ebp-0x4]");
    __asm__("fldln2 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    __asm__("fstp dword [ebp-0x4]");
    __asm__("fld dword [ebp-0x4]");
    return;
}

int32_t asinhl() {
    int32_t eax1;
    int16_t fpu_status_word2;
    int32_t v3;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fmul st0, st0");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fsqrt ");
    __asm__("fstp tword [ebp-0xc]");
    __asm__("fld tword [ebp+0x8]");
    __asm__("ftst ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) & 69) {
        __asm__("fld tword [ebp-0xc]");
        __asm__("fld tword [ebp+0x8]");
        __asm__("fsubp st1, st0");
        __asm__("fldln2 ");
        __asm__("fxch st0, st1");
        __asm__("fyl2x ");
        __asm__("fstp tword [ebp-0xc]");
        __asm__("fld tword [ebp-0xc]");
        __asm__("fchs ");
        __asm__("fstp tword [ebp-0x1c]");
        eax1 = v3;
    } else {
        __asm__("fld tword [ebp+0x8]");
        __asm__("fld tword [ebp-0xc]");
        __asm__("faddp st1, st0");
        __asm__("fldln2 ");
        __asm__("fxch st0, st1");
        __asm__("fyl2x ");
        __asm__("fstp tword [ebp-0xc]");
    }
    __asm__("fld tword [ebp-0xc]");
    return eax1;
}

void atanhf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fld1 ");
    __asm__("fsub dword [ebp+0x8]");
    __asm__("fdivp st1, st0");
    __asm__("fldln2 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    __asm__("fstp dword [ebp-0x4]");
    __asm__("fld dword [ebp-0x4]");
    __asm__("fld dword [0x805268c]");
    __asm__("fdivp st1, st0");
    return;
}

void coshl() {
    uint32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fabs ");
    __asm__("fstp tword [ebp-0x10]");
    __asm__("fld tword [ebp-0x10]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    if ((eax1 & 0x4500) != 0x500) {
        __asm__("fld tword [ebp-0x10]");
        __asm__("fldl2e ");
        __asm__("fxch st0, st1");
        __asm__("fmulp st1, st0");
        __asm__("fst st1");
        __asm__("frndint ");
        __asm__("fst st2");
        __asm__("fsubp st1, st0");
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
        __asm__("fstp tword [ebp-0x10]");
    } else {
        if (eax1 & 0x200) {
            __asm__("fldz ");
            __asm__("fstp tword [ebp-0x10]");
        }
    }
    __asm__("fld1 ");
    __asm__("fld tword [ebp-0x10]");
    __asm__("fdivp st1, st0");
    __asm__("fld tword [ebp-0x10]");
    __asm__("faddp st1, st0");
    __asm__("fld tword [0x80526a0]");
    __asm__("fdivp st1, st0");
    return;
}

void sinhf() {
    int16_t ax1;
    int16_t fpu_status_word2;
    uint32_t eax3;
    int16_t fpu_status_word4;
    uint32_t eax5;
    int16_t fpu_status_word6;

    __asm__("fld dword [ebp+0x8]");
    __asm__("ftst ");
    ax1 = fpu_status_word2;
    __asm__("fstp st0");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 5) {
        __asm__("fld dword [ebp+0x8]");
        __asm__("fchs ");
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax3) = fpu_status_word4;
        __asm__("fstp st0");
        if ((eax3 & 0x4500) != 0x500) {
            __asm__("fld dword [ebp+0x8]");
            __asm__("fchs ");
            __asm__("fldl2e ");
            __asm__("fxch st0, st1");
            __asm__("fmulp st1, st0");
            __asm__("fst st1");
            __asm__("frndint ");
            __asm__("fst st2");
            __asm__("fsubp st1, st0");
            __asm__("f2xm1 ");
            __asm__("fld1 ");
            __asm__("faddp st1, st0");
            __asm__("fscale ");
            __asm__("fstp dword [ebp-0x10]");
        } else {
            if (!(eax3 & 0x200)) {
                __asm__("fld dword [ebp+0x8]");
                __asm__("fchs ");
                __asm__("fstp dword [ebp-0x10]");
            } else {
                __asm__("fldz ");
                __asm__("fstp dword [ebp-0x10]");
            }
        }
        __asm__("fld dword [ebp-0x10]");
        __asm__("fld1 ");
        __asm__("fdivrp st1, st0");
        __asm__("fld dword [ebp-0x10]");
        __asm__("fsubp st1, st0");
        __asm__("fld qword [0x8052690]");
        __asm__("fdivp st1, st0");
        __asm__("fstp dword [ebp-0x1c]");
    } else {
        __asm__("fld dword [ebp+0x8]");
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax5) = fpu_status_word6;
        __asm__("fstp st0");
        if ((eax5 & 0x4500) != 0x500) {
            __asm__("fld dword [ebp+0x8]");
            __asm__("fldl2e ");
            __asm__("fxch st0, st1");
            __asm__("fmulp st1, st0");
            __asm__("fst st1");
            __asm__("frndint ");
            __asm__("fst st2");
            __asm__("fsubp st1, st0");
            __asm__("f2xm1 ");
            __asm__("fld1 ");
            __asm__("faddp st1, st0");
            __asm__("fscale ");
            __asm__("fstp dword [ebp-0xc]");
        } else {
            if (!(eax5 & 0x200)) {
                __asm__("fld dword [ebp+0x8]");
                __asm__("fstp dword [ebp-0xc]");
            } else {
                __asm__("fldz ");
                __asm__("fstp dword [ebp-0xc]");
            }
        }
        __asm__("fld dword [ebp-0xc]");
        __asm__("fld dword [ebp-0xc]");
        __asm__("fld1 ");
        __asm__("fdivrp st1, st0");
        __asm__("fsubp st1, st0");
        __asm__("fld qword [0x8052690]");
        __asm__("fdivp st1, st0");
        __asm__("fstp dword [ebp-0x1c]");
    }
    __asm__("fld dword [ebp-0x1c]");
    return;
}

void tanhl() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;
    uint32_t eax5;
    int16_t fpu_status_word6;

    __asm__("fld tword [0x80526d0]");
    __asm__("fld tword [ebp+0x8]");
    __asm__("fcompp ");
    ax1 = fpu_status_word2;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 69) {
        __asm__("fld tword [ebp+0x8]");
        __asm__("fld tword [0x80526e0]");
        __asm__("fcompp ");
        ax3 = fpu_status_word4;
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 69) {
            __asm__("fld tword [ebp+0x8]");
            __asm__("fxam ");
            *reinterpret_cast<int16_t*>(&eax5) = fpu_status_word6;
            __asm__("fstp st0");
            if ((eax5 & 0x4500) != 0x500) {
                __asm__("fld tword [ebp+0x8]");
                __asm__("fldl2e ");
                __asm__("fxch st0, st1");
                __asm__("fmulp st1, st0");
                __asm__("fst st1");
                __asm__("frndint ");
                __asm__("fst st2");
                __asm__("fsubp st1, st0");
                __asm__("f2xm1 ");
                __asm__("fld1 ");
                __asm__("faddp st1, st0");
                __asm__("fscale ");
                __asm__("fstp tword [ebp-0x10]");
            } else {
                if (!(eax5 & 0x200)) {
                    __asm__("fld tword [ebp+0x8]");
                    __asm__("fstp tword [ebp-0x10]");
                } else {
                    __asm__("fldz ");
                    __asm__("fstp tword [ebp-0x10]");
                }
            }
            __asm__("fld1 ");
            __asm__("fld tword [ebp-0x10]");
            __asm__("fdivp st1, st0");
            __asm__("fstp tword [ebp-0x1c]");
            __asm__("fld tword [ebp-0x10]");
            __asm__("fld tword [ebp-0x1c]");
            __asm__("fsubp st1, st0");
            __asm__("fld tword [ebp-0x10]");
            __asm__("fld tword [ebp-0x1c]");
            __asm__("faddp st1, st0");
            __asm__("fdivp st1, st0");
        } else {
            __asm__("fld1 ");
            __asm__("fchs ");
        }
    } else {
        __asm__("fld1 ");
    }
    return;
}

uint32_t nearbyintf() {
    uint32_t v1;

    __asm__("fnstcw word [ebp-0x8]");
    __asm__("fld dword [ebp+0x8]");
    __asm__("fldcw word [ebp-0x4]");
    __asm__("frndint ");
    __asm__("fclex ");
    __asm__("fldcw word [ebp-0x8]");
    return v1 & 0xffffffdf;
}

void expm1l() {
    int16_t ax1;
    int16_t fpu_status_word2;
    unsigned char ch3;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    __asm__("wait ");
    ax1 = fpu_status_word2;
    ch3 = reinterpret_cast<unsigned char>(69 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1));
    if (ch3 != 64) {
        if (ch3 == 5) {
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 2) {
                __asm__("ffreep st0");
                __asm__("fld1 ");
                __asm__("fchs ");
            }
        } else {
            __asm__("fldl2e ");
            __asm__("fmulp st1, st0");
            __asm__("fld st0");
            __asm__("frndint ");
            __asm__("fsub st1, st0");
            __asm__("fxch st0, st1");
            __asm__("f2xm1 ");
            __asm__("fscale ");
            __asm__("fxch st0, st1");
            __asm__("fld1 ");
            __asm__("fscale ");
            __asm__("fld1 ");
            __asm__("fsubrp st1, st0");
            __asm__("fstp st1");
            __asm__("fsubp st1, st0");
        }
    }
    return;
}

uint32_t scalbf() {
    uint32_t eax1;
    int16_t fpu_status_word2;
    uint32_t eax3;
    uint32_t ebx4;
    int16_t fpu_status_word5;
    uint32_t eax6;
    int16_t fpu_status_word7;
    uint32_t eax8;
    uint32_t ebx9;
    int16_t fpu_status_word10;
    uint32_t v11;
    uint32_t v12;
    int16_t fpu_status_word13;
    int16_t ax14;
    int16_t fpu_status_word15;
    int16_t ax16;
    int16_t fpu_status_word17;
    uint32_t v18;
    int32_t v19;
    uint32_t v20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    int16_t fpu_status_word25;
    int16_t fpu_status_word26;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    eax3 = eax1 & 0x4500;
    ebx4 = reinterpret_cast<uint1_t>(eax3 == 0x100);
    __asm__("fld dword [ebp+0xc]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax3) = fpu_status_word5;
    __asm__("fstp st0");
    eax6 = eax3 & 0x4500;
    *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(eax6 == 0x100);
    if (ebx4 || *reinterpret_cast<unsigned char*>(&eax6)) {
        __asm__("fld dword [ebp+0x8]");
        __asm__("fmul dword [ebp+0xc]");
    } else {
        __asm__("fld dword [ebp+0x8]");
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax6) = fpu_status_word7;
        __asm__("fstp st0");
        if ((eax6 & 0x4500) == 0x400 || (eax6 & 0x4500) == 0x4000) {
            eax8 = 1;
        } else {
            eax8 = 0;
        }
        ebx9 = eax8;
        __asm__("fld dword [ebp+0xc]");
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax8) = fpu_status_word10;
        __asm__("fstp st0");
        if ((eax8 & 0x4500) == 0x400 || (eax8 & 0x4500) == 0x4000) {
            eax6 = 1;
        } else {
            eax6 = 0;
        }
        if (eax6) {
            __asm__("fld dword [ebp+0xc]");
            __asm__("fstp qword [esp]");
            eax6 = rint(v11, v12);
            __asm__("fld dword [ebp+0xc]");
            __asm__("fxch st0, st1");
            __asm__("fucompp ");
            *reinterpret_cast<int16_t*>(&eax6) = fpu_status_word13;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) & 69);
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) == 64) {
                __asm__("fld dword [ebp+0xc]");
                __asm__("fcomp dword [0x80526ec]");
                ax14 = fpu_status_word15;
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax14) + 1) & 69) {
                    __asm__("fld dword [ebp+0xc]");
                    __asm__("fld dword [0x80526f0]");
                    __asm__("fcompp ");
                    ax16 = fpu_status_word17;
                    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax16) + 1) & 69) {
                        __asm__("fld dword [ebp+0xc]");
                        __asm__("fnstcw word [ebp-0xa]");
                        __asm__("fldcw word [ebp-0xc]");
                        __asm__("fistp dword [ebp-0x10]");
                        __asm__("fldcw word [ebp-0xa]");
                        __asm__("fld dword [ebp+0x8]");
                        __asm__("fstp qword [esp]");
                        eax6 = scalbn(v18, 0x8050d66, v19, v20);
                        __asm__("fstp dword [ebp-0x10]");
                        __asm__("fld dword [ebp-0x10]");
                    } else {
                        __asm__("fld dword [ebp+0x8]");
                        __asm__("fstp qword [esp]");
                        eax6 = scalbn(v21, 0x8050d66, 0xffff0218, v22);
                        __asm__("fstp dword [ebp-0x10]");
                        __asm__("fld dword [ebp-0x10]");
                    }
                } else {
                    __asm__("fld dword [ebp+0x8]");
                    __asm__("fstp qword [esp]");
                    eax6 = scalbn(v23, 0x8050d66, 0xfde8, v24);
                    __asm__("fstp dword [ebp-0x10]");
                    __asm__("fld dword [ebp-0x10]");
                }
            } else {
                __asm__("fldz ");
                __asm__("fdiv st0, st0");
            }
        } else {
            __asm__("fld dword [ebp+0xc]");
            __asm__("ftst ");
            *reinterpret_cast<int16_t*>(&eax6) = fpu_status_word25;
            __asm__("fstp st0");
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) & 69) {
                __asm__("fldz ");
                __asm__("fld dword [ebp+0x8]");
                __asm__("fucompp ");
                *reinterpret_cast<int16_t*>(&eax6) = fpu_status_word26;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) & 69) ^ 64);
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1)) {
                    if (ebx9) {
                        __asm__("fld dword [ebp+0x8]");
                        __asm__("fchs ");
                        __asm__("fdiv dword [ebp+0xc]");
                    } else {
                        __asm__("fldz ");
                        __asm__("fdiv st0, st0");
                    }
                } else {
                    __asm__("fld dword [ebp+0x8]");
                }
            } else {
                __asm__("fld dword [ebp+0x8]");
                __asm__("fmul dword [ebp+0xc]");
            }
        }
    }
    return eax6;
}

void scalbnl() {
    __asm__("fild dword [ebp+0x14]");
    __asm__("fld tword [ebp+0x8]");
    __asm__("fscale ");
    return;
}

uint32_t scalbl() {
    uint32_t eax1;
    int16_t fpu_status_word2;
    uint32_t eax3;
    uint32_t ebx4;
    int16_t fpu_status_word5;
    uint32_t eax6;
    int16_t fpu_status_word7;
    uint32_t eax8;
    uint32_t ebx9;
    int16_t fpu_status_word10;
    uint32_t v11;
    uint32_t v12;
    int16_t fpu_status_word13;
    int16_t ax14;
    int16_t fpu_status_word15;
    int16_t ax16;
    int16_t fpu_status_word17;
    uint32_t v18;
    uint32_t v19;
    int32_t v20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    int16_t fpu_status_word25;
    int16_t fpu_status_word26;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    eax3 = eax1 & 0x4500;
    ebx4 = reinterpret_cast<uint1_t>(eax3 == 0x100);
    __asm__("fld tword [ebp+0x14]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax3) = fpu_status_word5;
    __asm__("fstp st0");
    eax6 = eax3 & 0x4500;
    *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(eax6 == 0x100);
    if (ebx4 || *reinterpret_cast<unsigned char*>(&eax6)) {
        __asm__("fld tword [ebp+0x8]");
        __asm__("fld tword [ebp+0x14]");
        __asm__("fmulp st1, st0");
    } else {
        __asm__("fld tword [ebp+0x8]");
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax6) = fpu_status_word7;
        __asm__("fstp st0");
        if ((eax6 & 0x4500) == 0x400 || (eax6 & 0x4500) == 0x4000) {
            eax8 = 1;
        } else {
            eax8 = 0;
        }
        ebx9 = eax8;
        __asm__("fld tword [ebp+0x14]");
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax8) = fpu_status_word10;
        __asm__("fstp st0");
        if ((eax8 & 0x4500) == 0x400 || (eax8 & 0x4500) == 0x4000) {
            eax6 = 1;
        } else {
            eax6 = 0;
        }
        if (eax6) {
            __asm__("fld tword [ebp+0x14]");
            __asm__("fstp qword [ebp-0x18]");
            eax6 = rint(v11, v12);
            __asm__("fld tword [ebp+0x14]");
            __asm__("fucompp ");
            *reinterpret_cast<int16_t*>(&eax6) = fpu_status_word13;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) & 69);
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) == 64) {
                __asm__("fld tword [0x8052710]");
                __asm__("fld tword [ebp+0x14]");
                __asm__("fcompp ");
                ax14 = fpu_status_word15;
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax14) + 1) & 69) {
                    __asm__("fld tword [ebp+0x14]");
                    __asm__("fld tword [0x8052720]");
                    __asm__("fcompp ");
                    ax16 = fpu_status_word17;
                    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax16) + 1) & 69) {
                        __asm__("fld tword [ebp+0x14]");
                        __asm__("fnstcw word [ebp-0xa]");
                        __asm__("fldcw word [ebp-0xc]");
                        __asm__("fistp dword [ebp-0x18]");
                        __asm__("fldcw word [ebp-0xa]");
                        __asm__("fld tword [ebp+0x8]");
                        __asm__("fstp qword [ebp-0x18]");
                        eax6 = scalbn(v18, v19, v20, v12);
                    } else {
                        __asm__("fld tword [ebp+0x8]");
                        __asm__("fstp qword [ebp-0x18]");
                        eax6 = scalbn(v21, v22, 0xffff0218, v12);
                    }
                } else {
                    __asm__("fld tword [ebp+0x8]");
                    __asm__("fstp qword [ebp-0x18]");
                    eax6 = scalbn(v23, v24, 0xfde8, v12);
                }
            } else {
                __asm__("fldz ");
                __asm__("fdiv st0, st0");
            }
        } else {
            __asm__("fld tword [ebp+0x14]");
            __asm__("ftst ");
            *reinterpret_cast<int16_t*>(&eax6) = fpu_status_word25;
            __asm__("fstp st0");
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) & 69) {
                __asm__("fldz ");
                __asm__("fld tword [ebp+0x8]");
                __asm__("fucompp ");
                *reinterpret_cast<int16_t*>(&eax6) = fpu_status_word26;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1) & 69) ^ 64);
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax6) + 1)) {
                    if (ebx9) {
                        __asm__("fld tword [ebp+0x8]");
                        __asm__("fchs ");
                        __asm__("fld tword [ebp+0x14]");
                        __asm__("fdivp st1, st0");
                    } else {
                        __asm__("fldz ");
                        __asm__("fdiv st0, st0");
                    }
                } else {
                    __asm__("fld tword [ebp+0x8]");
                }
            } else {
                __asm__("fld tword [ebp+0x8]");
                __asm__("fld tword [ebp+0x14]");
                __asm__("fmulp st1, st0");
            }
        }
    }
    return eax6;
}

void fun_8049056() {
    goto 0x8049030;
}

void fun_8049086() {
    goto 0x8049030;
}

void asinhf() {
    int16_t ax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fmul st0, st0");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fsqrt ");
    __asm__("fstp dword [ebp-0x4]");
    __asm__("fld dword [ebp+0x8]");
    __asm__("ftst ");
    ax1 = fpu_status_word2;
    __asm__("fstp st0");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 69) {
        __asm__("fld dword [ebp-0x4]");
        __asm__("fsub dword [ebp+0x8]");
        __asm__("fldln2 ");
        __asm__("fxch st0, st1");
        __asm__("fyl2x ");
        __asm__("fstp dword [ebp-0x4]");
        __asm__("fld dword [ebp-0x4]");
        __asm__("fchs ");
        __asm__("fstp dword [ebp-0x4]");
    } else {
        __asm__("fld dword [ebp+0x8]");
        __asm__("fadd dword [ebp-0x4]");
        __asm__("fldln2 ");
        __asm__("fxch st0, st1");
        __asm__("fyl2x ");
        __asm__("fstp dword [ebp-0x4]");
    }
    __asm__("fld dword [ebp-0x4]");
    return;
}

void expf() {
    uint32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    if ((eax1 & 0x4500) != 0x500) {
        __asm__("fld dword [ebp+0x8]");
        __asm__("fldl2e ");
        __asm__("fxch st0, st1");
        __asm__("fmulp st1, st0");
        __asm__("fst st1");
        __asm__("frndint ");
        __asm__("fst st2");
        __asm__("fsubp st1, st0");
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
    } else {
        if (!(eax1 & 0x200)) {
            __asm__("fld dword [ebp+0x8]");
        } else {
            __asm__("fldz ");
        }
    }
    return;
}

int32_t llrintl() {
    int32_t v1;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fistp qword [ebp-0x8]");
    __asm__("wait ");
    return v1;
}

void log10f() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fldlg2 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    return;
}

void remainderf() {
    int16_t ax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0xc]");
    __asm__("fld dword [ebp+0x8]");
    do {
        __asm__("fprem1 ");
        __asm__("wait ");
        ax1 = fpu_status_word2;
    } while (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax1) + 1));
    __asm__("fstp st1");
    return;
}

void logbf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fpxtract ");
    __asm__("fstp st0");
    return;
}

void log2f() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fld1 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    return;
}

void rintf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("frndint ");
    return;
}

void atanf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fld1 ");
    __asm__("fpatan ");
    return;
}

void fun_8049066() {
    goto 0x8049030;
}

uint32_t isnanl() {
    uint32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    return static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((eax1 & 0x4500) == 0x100)));
}

uint32_t isnormal(int32_t a1, uint32_t a2) {
    uint32_t eax3;
    int16_t fpu_status_word4;

    eax3 = a2;
    __asm__("fld qword [ebp-0x10]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax3) = fpu_status_word4;
    __asm__("fstp st0");
    return static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((eax3 & 0x4500) == 0x400)));
}

int32_t isgreater(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t eax5;
    int16_t fpu_status_word6;

    eax5 = a4;
    __asm__("fld qword [ebp-0x18]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax5) = fpu_status_word6;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1) & 69) == 0);
    return eax5;
}

int32_t fdim(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fsubrp st1, st0");
    __asm__("fabs ");
    __asm__("fstp st1");
    return a4;
}

int32_t ilogbl() {
    int32_t v1;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fpxtract ");
    __asm__("fstp st0");
    __asm__("fistp dword [ebp-0x4]");
    __asm__("wait ");
    __asm__("fstp st0");
    return v1;
}

int32_t atanh(int32_t a1, int32_t a2) {
    __asm__("fld qword [ebp-0x18]");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fld1 ");
    __asm__("fsub qword [ebp-0x18]");
    __asm__("fdivp st1, st0");
    __asm__("fldln2 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    __asm__("fstp qword [ebp-0x8]");
    __asm__("fld qword [ebp-0x8]");
    __asm__("fld qword [0x8052690]");
    __asm__("fdivp st1, st0");
    return a2;
}

uint32_t sinhl() {
    int16_t ax1;
    int16_t fpu_status_word2;
    uint32_t eax3;
    int16_t fpu_status_word4;
    uint32_t eax5;
    uint32_t v6;
    uint32_t v7;
    uint32_t eax8;
    int16_t fpu_status_word9;

    __asm__("fld tword [ebp+0x8]");
    __asm__("ftst ");
    ax1 = fpu_status_word2;
    __asm__("fstp st0");
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 5) {
        __asm__("fld tword [ebp+0x8]");
        __asm__("fchs ");
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax3) = fpu_status_word4;
        __asm__("fstp st0");
        if ((eax3 & 0x4500) != 0x500) {
            __asm__("fld tword [ebp+0x8]");
            __asm__("fchs ");
            __asm__("fstp tword [ebp-0x30]");
            eax5 = v6;
            __asm__("fld tword [ebp-0x30]");
            __asm__("fldl2e ");
            __asm__("fxch st0, st1");
            __asm__("fmulp st1, st0");
            __asm__("fst st1");
            __asm__("frndint ");
            __asm__("fst st2");
            __asm__("fsubp st1, st0");
            __asm__("f2xm1 ");
            __asm__("fld1 ");
            __asm__("faddp st1, st0");
            __asm__("fscale ");
            __asm__("fstp tword [ebp-0x1c]");
        } else {
            eax5 = eax3 & 0x200;
            if (!eax5) {
                __asm__("fld tword [ebp+0x8]");
                __asm__("fchs ");
                __asm__("fstp tword [ebp-0x30]");
                eax5 = v7;
            } else {
                __asm__("fldz ");
                __asm__("fstp tword [ebp-0x1c]");
            }
        }
        __asm__("fld1 ");
        __asm__("fld tword [ebp-0x1c]");
        __asm__("fdivp st1, st0");
        __asm__("fld tword [ebp-0x1c]");
        __asm__("fsubp st1, st0");
        __asm__("fld tword [0x80526a0]");
        __asm__("fdivp st1, st0");
    } else {
        __asm__("fld tword [ebp+0x8]");
        __asm__("fxam ");
        *reinterpret_cast<int16_t*>(&eax8) = fpu_status_word9;
        __asm__("fstp st0");
        eax5 = eax8 & 0x4500;
        if (eax5 != 0x500) {
            __asm__("fld tword [ebp+0x8]");
            __asm__("fldl2e ");
            __asm__("fxch st0, st1");
            __asm__("fmulp st1, st0");
            __asm__("fst st1");
            __asm__("frndint ");
            __asm__("fst st2");
            __asm__("fsubp st1, st0");
            __asm__("f2xm1 ");
            __asm__("fld1 ");
            __asm__("faddp st1, st0");
            __asm__("fscale ");
            __asm__("fstp tword [ebp-0x10]");
        } else {
            eax5 = eax8 & 0x200;
            if (!eax5) {
                __asm__("fld tword [ebp+0x8]");
                __asm__("fstp tword [ebp-0x10]");
            } else {
                __asm__("fldz ");
                __asm__("fstp tword [ebp-0x10]");
            }
        }
        __asm__("fld1 ");
        __asm__("fld tword [ebp-0x10]");
        __asm__("fdivp st1, st0");
        __asm__("fld tword [ebp-0x10]");
        __asm__("fsubrp st1, st0");
        __asm__("fld tword [0x80526a0]");
        __asm__("fdivp st1, st0");
    }
    return eax5;
}

void tanhf() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;
    uint32_t eax5;
    int16_t fpu_status_word6;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fcomp dword [0x80526ac]");
    ax1 = fpu_status_word2;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 69) {
        __asm__("fld dword [ebp+0x8]");
        __asm__("fld dword [0x80526b0]");
        __asm__("fcompp ");
        ax3 = fpu_status_word4;
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax3) + 1) & 69) {
            __asm__("fld dword [ebp+0x8]");
            __asm__("fxam ");
            *reinterpret_cast<int16_t*>(&eax5) = fpu_status_word6;
            __asm__("fstp st0");
            if ((eax5 & 0x4500) != 0x500) {
                __asm__("fld dword [ebp+0x8]");
                __asm__("fldl2e ");
                __asm__("fxch st0, st1");
                __asm__("fmulp st1, st0");
                __asm__("fst st1");
                __asm__("frndint ");
                __asm__("fst st2");
                __asm__("fsubp st1, st0");
                __asm__("f2xm1 ");
                __asm__("fld1 ");
                __asm__("faddp st1, st0");
                __asm__("fscale ");
                __asm__("fstp dword [ebp-0x8]");
            } else {
                if (!(eax5 & 0x200)) {
                    __asm__("fld dword [ebp+0x8]");
                    __asm__("fstp dword [ebp-0x8]");
                } else {
                    __asm__("fldz ");
                    __asm__("fstp dword [ebp-0x8]");
                }
            }
            __asm__("fld1 ");
            __asm__("fdiv dword [ebp-0x8]");
            __asm__("fstp dword [ebp-0xc]");
            __asm__("fld dword [ebp-0x8]");
            __asm__("fsub dword [ebp-0xc]");
            __asm__("fld dword [ebp-0x8]");
            __asm__("fadd dword [ebp-0xc]");
            __asm__("fdivp st1, st0");
        } else {
            __asm__("fld1 ");
            __asm__("fchs ");
        }
    } else {
        __asm__("fld1 ");
    }
    return;
}

uint32_t nearbyint(int32_t a1, int32_t a2) {
    uint32_t v3;

    __asm__("fnstcw word [ebp-0x8]");
    __asm__("fld qword [ebp-0x18]");
    __asm__("fldcw word [ebp-0x4]");
    __asm__("frndint ");
    __asm__("fclex ");
    __asm__("fldcw word [ebp-0x8]");
    return v3 & 0xffffffdf;
}

void ldexpf() {
    __asm__("fild dword [ebp+0xc]");
    __asm__("fld dword [ebp+0x8]");
    __asm__("fscale ");
    return;
}

void log1pf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fldln2 ");
    __asm__("fxch st0, st1");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fyl2x ");
    return;
}

int32_t logb(int32_t a1, int32_t a2) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fpxtract ");
    __asm__("fstp st0");
    return a2;
}

int32_t atan(int32_t a1, int32_t a2) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fld1 ");
    __asm__("fpatan ");
    return a2;
}

int32_t isfinitef() {
    uint32_t eax1;
    int16_t fpu_status_word2;
    int32_t eax3;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    if ((eax1 & 0x4500) == 0x400 || (eax1 & 0x4500) == 0x4000) {
        eax3 = 1;
    } else {
        eax3 = 0;
    }
    return eax3;
}

uint32_t isnormall() {
    uint32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    return static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((eax1 & 0x4500) == 0x400)));
}

int32_t isgreaterl() {
    int32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x14]");
    __asm__("fld tword [ebp+0x8]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) & 69) == 0);
    return eax1;
}

void fdiml() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fld tword [ebp+0x14]");
    __asm__("fsubrp st1, st0");
    __asm__("fabs ");
    __asm__("fstp st1");
    return;
}

int32_t llrintf() {
    int32_t v1;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fistp qword [ebp-0x8]");
    __asm__("wait ");
    return v1;
}

void atanhl() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fld1 ");
    __asm__("faddp st1, st0");
    __asm__("fld1 ");
    __asm__("fld tword [ebp+0x8]");
    __asm__("fsubp st1, st0");
    __asm__("fdivp st1, st0");
    __asm__("fldln2 ");
    __asm__("fxch st0, st1");
    __asm__("fyl2x ");
    __asm__("fstp tword [ebp-0xc]");
    __asm__("fld tword [ebp-0xc]");
    __asm__("fld tword [0x80526a0]");
    __asm__("fdivp st1, st0");
    return;
}

uint32_t nearbyintl() {
    uint32_t v1;

    __asm__("fnstcw word [ebp-0x8]");
    __asm__("fld tword [ebp+0x8]");
    __asm__("fldcw word [ebp-0x4]");
    __asm__("frndint ");
    __asm__("fclex ");
    __asm__("fldcw word [ebp-0x8]");
    return v1 & 0xffffffdf;
}

void rintl() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("frndint ");
    return;
}

int32_t ldexp(int32_t a1, int32_t a2) {
    __asm__("fild dword [ebp+0x10]");
    __asm__("fld qword [ebp-0x8]");
    __asm__("fscale ");
    return a2;
}

void logbl() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fpxtract ");
    __asm__("fstp st0");
    return;
}

void atanl() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fld1 ");
    __asm__("fpatan ");
    return;
}

uint32_t isinff() {
    uint32_t eax1;
    int16_t fpu_status_word2;
    uint32_t ebx3;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    ebx3 = reinterpret_cast<uint1_t>((eax1 & 0x4500) == 0x500);
    if (eax1 & 0x200) {
        ebx3 = -ebx3;
    }
    return ebx3;
}

int32_t isgreaterequalf() {
    int32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0xc]");
    __asm__("fld dword [ebp+0x8]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) & 5) == 0);
    return eax1;
}

uint32_t floorf() {
    uint32_t eax1;
    uint32_t v2;

    __asm__("wait ");
    __asm__("fnstcw word [ebp-0x4]");
    eax1 = v2 & 0xf3ff;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) | 4);
    __asm__("fld dword [ebp+0x8]");
    __asm__("fldcw word [ebp-0x8]");
    __asm__("frndint ");
    __asm__("fldcw word [ebp-0x4]");
    return eax1;
}

int32_t coshf() {
    uint32_t eax1;
    int16_t fpu_status_word2;
    int32_t v3;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fabs ");
    __asm__("fstp dword [ebp-0xc]");
    __asm__("fld dword [ebp-0xc]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    __asm__("fstp st0");
    if ((eax1 & 0x4500) != 0x500) {
        __asm__("fld dword [ebp-0xc]");
        __asm__("fldl2e ");
        __asm__("fxch st0, st1");
        __asm__("fmulp st1, st0");
        __asm__("fst st1");
        __asm__("frndint ");
        __asm__("fst st2");
        __asm__("fsubp st1, st0");
        __asm__("f2xm1 ");
        __asm__("fld1 ");
        __asm__("faddp st1, st0");
        __asm__("fscale ");
        __asm__("fstp dword [ebp-0xc]");
    } else {
        if (eax1 & 0x200) {
            __asm__("fldz ");
            __asm__("fstp dword [ebp-0xc]");
        }
    }
    __asm__("fld dword [ebp-0xc]");
    __asm__("fld dword [ebp-0xc]");
    __asm__("fld1 ");
    __asm__("fdivrp st1, st0");
    __asm__("faddp st1, st0");
    __asm__("fld qword [0x8052690]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [ebp-0x1c]");
    __asm__("fld dword [ebp-0x1c]");
    return v3;
}

void expm1f() {
    int16_t ax1;
    int16_t fpu_status_word2;
    unsigned char ch3;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fxam ");
    __asm__("wait ");
    ax1 = fpu_status_word2;
    ch3 = reinterpret_cast<unsigned char>(69 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1));
    if (ch3 != 64) {
        if (ch3 == 5) {
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 2) {
                __asm__("ffreep st0");
                __asm__("fld1 ");
                __asm__("fchs ");
            }
        } else {
            __asm__("fldl2e ");
            __asm__("fmulp st1, st0");
            __asm__("fld st0");
            __asm__("frndint ");
            __asm__("fsub st1, st0");
            __asm__("fxch st0, st1");
            __asm__("f2xm1 ");
            __asm__("fscale ");
            __asm__("fxch st0, st1");
            __asm__("fld1 ");
            __asm__("fscale ");
            __asm__("fld1 ");
            __asm__("fsubrp st1, st0");
            __asm__("fstp st1");
            __asm__("fsubp st1, st0");
        }
    }
    return;
}

void scalbnf() {
    __asm__("fild dword [ebp+0xc]");
    __asm__("fld dword [ebp+0x8]");
    __asm__("fscale ");
    return;
}

void ldexpl() {
    __asm__("fild dword [ebp+0x14]");
    __asm__("fld tword [ebp+0x8]");
    __asm__("fscale ");
    return;
}

int32_t lrintf() {
    int32_t v1;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fistp dword [ebp-0x4]");
    __asm__("wait ");
    return v1;
}

uint32_t ceilf() {
    uint32_t eax1;
    uint32_t v2;

    __asm__("wait ");
    __asm__("fnstcw word [ebp-0x4]");
    eax1 = v2 & 0xf3ff;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) | 8);
    __asm__("fld dword [ebp+0x8]");
    __asm__("fldcw word [ebp-0x8]");
    __asm__("frndint ");
    __asm__("fldcw word [ebp-0x4]");
    return eax1;
}

int32_t isgreaterequal(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t eax5;
    int16_t fpu_status_word6;

    eax5 = a4;
    __asm__("fld qword [ebp-0x18]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax5) = fpu_status_word6;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1) & 5) == 0);
    return eax5;
}

uint32_t floor(int32_t a1, int32_t a2) {
    uint32_t eax3;
    uint32_t v4;

    __asm__("wait ");
    __asm__("fnstcw word [ebp-0x4]");
    eax3 = v4 & 0xf3ff;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) | 4);
    __asm__("fld qword [ebp-0x18]");
    __asm__("fldcw word [ebp-0x8]");
    __asm__("frndint ");
    __asm__("fldcw word [ebp-0x4]");
    return eax3;
}

void significandf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fpxtract ");
    __asm__("fstp st1");
    __asm__("fstp dword [ebp-0x4]");
    __asm__("fld dword [ebp-0x4]");
    return;
}

uint32_t ceil(int32_t a1, int32_t a2) {
    uint32_t eax3;
    uint32_t v4;

    __asm__("wait ");
    __asm__("fnstcw word [ebp-0x4]");
    eax3 = v4 & 0xf3ff;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) | 8);
    __asm__("fld qword [ebp-0x18]");
    __asm__("fldcw word [ebp-0x8]");
    __asm__("frndint ");
    __asm__("fldcw word [ebp-0x4]");
    return eax3;
}

int32_t isgreaterequall() {
    int32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x14]");
    __asm__("fld tword [ebp+0x8]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) & 5) == 0);
    return eax1;
}

uint32_t floorl() {
    uint32_t eax1;
    uint32_t v2;

    __asm__("wait ");
    __asm__("fnstcw word [ebp-0x4]");
    eax1 = v2 & 0xf3ff;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) | 4);
    __asm__("fld tword [ebp+0x8]");
    __asm__("fldcw word [ebp-0x8]");
    __asm__("frndint ");
    __asm__("fldcw word [ebp-0x4]");
    return eax1;
}

int32_t significand(int32_t a1, int32_t a2) {
    __asm__("fld qword [ebp-0x18]");
    __asm__("fpxtract ");
    __asm__("fstp st1");
    __asm__("fstp qword [ebp-0x8]");
    __asm__("fld qword [ebp-0x8]");
    return a2;
}

uint32_t ceill() {
    uint32_t eax1;
    uint32_t v2;

    __asm__("wait ");
    __asm__("fnstcw word [ebp-0x4]");
    eax1 = v2 & 0xf3ff;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) | 8);
    __asm__("fld tword [ebp+0x8]");
    __asm__("fldcw word [ebp-0x8]");
    __asm__("frndint ");
    __asm__("fldcw word [ebp-0x4]");
    return eax1;
}

int32_t islessf() {
    int32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fld dword [ebp+0xc]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) & 69) == 0);
    return eax1;
}

void fmaf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fmul dword [ebp+0xc]");
    __asm__("fadd dword [ebp+0x10]");
    return;
}

void significandl() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fpxtract ");
    __asm__("fstp st1");
    __asm__("fstp tword [ebp-0xc]");
    __asm__("fld tword [ebp-0xc]");
    return;
}

void* copysignf(int32_t a1) {
    uint32_t eax2;
    int16_t fpu_status_word3;
    void* v4;
    void* eax5;

    __asm__("fld dword [ebp+0xc]");
    __asm__("fxam ");
    *reinterpret_cast<int16_t*>(&eax2) = fpu_status_word3;
    __asm__("fstp st0");
    v4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    if (!(eax2 & 0x200)) {
        eax5 = v4;
    } else {
        eax5 = v4;
    }
    __asm__("fld dword [ebp+0x8]");
    return eax5;
}

int32_t isless(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t eax5;
    int16_t fpu_status_word6;

    eax5 = a4;
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x18]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax5) = fpu_status_word6;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1) & 69) == 0);
    return eax5;
}

int32_t fma(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fmul qword [ebp-0x10]");
    __asm__("fadd qword [ebp-0x18]");
    return a6;
}

void sincosf() {
    int32_t* v1;
    int32_t v2;
    int32_t* v3;
    int32_t v4;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fsincos ");
    __asm__("fstp dword [ebp-0x4]");
    *v1 = v2;
    __asm__("fstp dword [ebp-0x4]");
    *v3 = v4;
    return;
}

int32_t islessl() {
    int32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fld tword [ebp+0x14]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) & 69) == 0);
    return eax1;
}

void fmal() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fld tword [ebp+0x14]");
    __asm__("fmulp st1, st0");
    __asm__("fld tword [ebp+0x20]");
    __asm__("faddp st1, st0");
    return;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void sincos(int32_t a1, int32_t a2, struct s0* a3, struct s1* a4) {
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;

    __asm__("fld qword [ebp-0x10]");
    __asm__("fsincos ");
    __asm__("fstp qword [ebp-0x18]");
    a4->f0 = v5;
    a4->f4 = v6;
    __asm__("fstp qword [ebp-0x18]");
    a3->f0 = v7;
    a3->f4 = v8;
    return;
}

int32_t islessequalf() {
    int32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fld dword [ebp+0xc]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) & 5) == 0);
    return eax1;
}

void fmaxf() {
    int16_t ax1;
    int16_t fpu_status_word2;
    int16_t ax3;
    int16_t fpu_status_word4;

    __asm__("fld dword [ebp+0x8]");
    __asm__("fld dword [ebp+0xc]");
    __asm__("fxam ");
    ax1 = fpu_status_word2;
    __asm__("fxch st0, st1");
    if ((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax1) + 1) & 69) != 1 && (ax3 = fpu_status_word4, *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax3) + 1))) {
        __asm__("fxch st0, st1");
    }
    __asm__("fstp st1");
    return;
}

int32_t sincosl() {
    int32_t v1;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fsincos ");
    __asm__("fstp tword [eax]");
    __asm__("fstp tword [eax]");
    return v1;
}

int32_t islessequal(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t eax5;
    int16_t fpu_status_word6;

    eax5 = a4;
    __asm__("fld qword [ebp-0x10]");
    __asm__("fld qword [ebp-0x18]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax5) = fpu_status_word6;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1) & 5) == 0);
    return eax5;
}

int32_t truncf() {
    int32_t eax1;
    int32_t v2;

    __asm__("wait ");
    __asm__("fnstcw word [ebp-0x4]");
    eax1 = v2;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) | 12);
    __asm__("fld dword [ebp+0x8]");
    __asm__("fldcw word [ebp-0x8]");
    __asm__("frndint ");
    __asm__("fldcw word [ebp-0x4]");
    return eax1;
}

int32_t islessequall() {
    int32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x8]");
    __asm__("fld tword [ebp+0x14]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) & 5) == 0);
    return eax1;
}

int32_t trunc(int32_t a1, int32_t a2) {
    int32_t eax3;
    int32_t v4;

    __asm__("wait ");
    __asm__("fnstcw word [ebp-0x4]");
    eax3 = v4;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) | 12);
    __asm__("fld qword [ebp-0x18]");
    __asm__("fldcw word [ebp-0x8]");
    __asm__("frndint ");
    __asm__("fldcw word [ebp-0x4]");
    return eax3;
}

int32_t islessgreaterf() {
    int32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0xc]");
    __asm__("fld dword [ebp+0x8]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) & 68) == 0);
    return eax1;
}

int32_t truncl() {
    int32_t eax1;
    int32_t v2;

    __asm__("wait ");
    __asm__("fnstcw word [ebp-0x4]");
    eax1 = v2;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) | 12);
    __asm__("fld tword [ebp+0x8]");
    __asm__("fldcw word [ebp-0x8]");
    __asm__("frndint ");
    __asm__("fldcw word [ebp-0x4]");
    return eax1;
}

int32_t islessgreater(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t eax5;
    int16_t fpu_status_word6;

    eax5 = a4;
    __asm__("fld qword [ebp-0x18]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax5) = fpu_status_word6;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax5) + 1) & 68) == 0);
    return eax5;
}

void fabsf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fabs ");
    return;
}

int32_t islessgreaterl() {
    int32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x14]");
    __asm__("fld tword [ebp+0x8]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax1) + 1) & 68) == 0);
    return eax1;
}

int32_t fabs(int32_t a1, int32_t a2) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fabs ");
    return a2;
}

int32_t isunorderedf() {
    int32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld dword [ebp+0xc]");
    __asm__("fld dword [ebp+0x8]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    *reinterpret_cast<unsigned char*>(&eax1) = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax1) + 1);
    return eax1;
}

void fabsl() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fabs ");
    return;
}

int32_t isunordered(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t eax5;
    int16_t fpu_status_word6;

    eax5 = a4;
    __asm__("fld qword [ebp-0x18]");
    __asm__("fld qword [ebp-0x10]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax5) = fpu_status_word6;
    *reinterpret_cast<unsigned char*>(&eax5) = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax5) + 1);
    return eax5;
}

int32_t isunorderedl() {
    int32_t eax1;
    int16_t fpu_status_word2;

    __asm__("fld tword [ebp+0x14]");
    __asm__("fld tword [ebp+0x8]");
    __asm__("fucompp ");
    *reinterpret_cast<int16_t*>(&eax1) = fpu_status_word2;
    *reinterpret_cast<unsigned char*>(&eax1) = *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&eax1) + 1);
    return eax1;
}

void acosf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fld st0");
    __asm__("fmul st0, st0");
    __asm__("fld1 ");
    __asm__("fsubrp st1, st0");
    __asm__("fsqrt ");
    __asm__("fxch st0, st1");
    __asm__("fpatan ");
    return;
}

int32_t acos(int32_t a1, int32_t a2) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fld st0");
    __asm__("fmul st0, st0");
    __asm__("fld1 ");
    __asm__("fsubrp st1, st0");
    __asm__("fsqrt ");
    __asm__("fxch st0, st1");
    __asm__("fpatan ");
    return a2;
}

void acosl() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fld st0");
    __asm__("fmul st0, st0");
    __asm__("fld1 ");
    __asm__("fsubrp st1, st0");
    __asm__("fsqrt ");
    __asm__("fxch st0, st1");
    __asm__("fpatan ");
    return;
}

void asinf() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fld st0");
    __asm__("fmul st0, st0");
    __asm__("fld1 ");
    __asm__("fsubrp st1, st0");
    __asm__("fsqrt ");
    __asm__("fpatan ");
    return;
}

int32_t asin(int32_t a1, int32_t a2) {
    __asm__("fld qword [ebp-0x8]");
    __asm__("fld st0");
    __asm__("fmul st0, st0");
    __asm__("fld1 ");
    __asm__("fsubrp st1, st0");
    __asm__("fsqrt ");
    __asm__("fpatan ");
    return a2;
}

void asinl() {
    __asm__("fld tword [ebp+0x8]");
    __asm__("fld st0");
    __asm__("fmul st0, st0");
    __asm__("fld1 ");
    __asm__("fsubrp st1, st0");
    __asm__("fsqrt ");
    __asm__("fpatan ");
    return;
}

void atan2f() {
    __asm__("fld dword [ebp+0x8]");
    __asm__("fld dword [ebp+0xc]");
    __asm__("fpatan ");
    return;
}
