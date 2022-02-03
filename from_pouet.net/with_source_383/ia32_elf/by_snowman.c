
struct s0 {
    int32_t f0;
    void* f4;
    void* f8;
    void* fc;
    int32_t f10;
    int32_t f14;
    int32_t f18;
    int32_t f1c;
    int32_t f20;
    int32_t f24;
    int32_t f28;
    int32_t f2c;
    int32_t f30;
};

struct s1 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
    signed char[4] pad16;
    int32_t f10;
};

struct s2 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
    signed char[4] pad16;
    int32_t f10;
};

struct s3 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
    signed char[4] pad16;
    int32_t f10;
};

struct s0* fun_80489c3(struct s0* a1, int32_t a2, uint32_t a3, uint32_t a4, struct s0* a5);

struct s0* fun_8048903(struct s0* a1, uint32_t a2, uint32_t a3, int32_t a4, struct s0* a5, uint32_t a6) {
    struct s0* eax7;
    uint32_t edx8;
    uint32_t ecx9;
    struct s1* ecx10;
    struct s2* ecx11;
    struct s3* ecx12;
    uint32_t ecx13;
    uint32_t esi14;
    uint32_t eax15;
    uint32_t esi16;
    uint32_t eax17;
    uint32_t esi18;
    uint32_t edx19;
    uint32_t esi20;
    uint32_t eax21;
    uint32_t esi22;
    uint32_t eax23;
    uint32_t esi24;
    uint32_t eax25;
    uint32_t esi26;
    uint32_t edx27;
    uint32_t esi28;
    signed char dl29;
    uint32_t esi30;
    int32_t ebp31;
    uint32_t edi32;
    uint32_t v33;
    struct s0* ebx34;
    uint32_t esi35;
    struct s0* v36;
    void* ebx37;
    struct s0* eax38;
    void* ebx39;

    eax7 = a1;
    edx8 = a2;
    ecx9 = a3 - 1;
    switch (ecx9) {
        addr_80489c2_3:
    default:
        return eax7;
    case 0:
        ecx10 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax7) + edx8 * 12);
        ecx10->f8 = 0x3f800000;
        goto addr_8048990_5;
    case 1:
        ecx11 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(eax7) + edx8 * 12);
        ecx11->f8 = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax7) + (edx8 + edx8 * 2) * 4 + 12) = 0;
        ecx11->f10 = 0x3f800000;
        return eax7;
    case 2:
        ecx10 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax7) + edx8 * 12);
        ecx10->f8 = 0x3f800000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax7) + (edx8 + edx8 * 2) * 4 + 12) = 0;
        goto addr_804899b_8;
    case 3:
        ecx10 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax7) + edx8 * 12);
        ecx10->f8 = 0x3f800000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax7) + (edx8 + edx8 * 2) * 4 + 12) = 0x3f000000;
        goto addr_804899b_8;
    case 4:
        ecx10 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax7) + edx8 * 12);
        ecx10->f8 = 0;
        goto addr_8048990_5;
    case 5:
        ecx12 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(eax7) + edx8 * 12);
        ecx12->f8 = 0x3f800000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax7) + (edx8 + edx8 * 2) * 4 + 12) = 0x3f800000;
        ecx12->f10 = 0x3f800000;
        goto addr_80489c2_3;
        ecx13 = ecx9 - 2;
        esi14 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx13) >> 31);
        eax15 = edx8 + 0xfffffffe;
        ecx9 = (ecx13 ^ esi14) - esi14;
        esi16 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax15) >> 31);
        edx8 = 0;
        eax17 = (eax15 ^ esi16) - esi16;
        esi18 = 3;
        goto addr_8048a81_13;
        esi18 = 0;
        edx8 = 0;
        eax17 = 0;
        break;
        edx19 = edx8 - 2;
        eax17 = 0;
        esi20 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(edx19) >> 31);
        edx8 = (edx19 ^ esi20) - esi20;
        esi18 = 4;
        goto addr_8048a81_13;
        eax21 = edx8 + 0xfffffffe;
        edx8 = 2;
        esi22 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax21) >> 31);
        eax17 = (eax21 ^ esi22) - esi22;
        esi18 = 2;
        goto addr_8048a81_13;
        eax23 = edx8 + 0xfffffffe;
        edx8 = ecx9;
        esi24 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax23) >> 31);
        eax17 = (eax23 ^ esi24) - esi24;
        esi18 = 5;
        break;
        eax25 = edx8 + 0xfffffffe;
        esi26 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax25) >> 31);
        edx27 = ecx9 + 0xfffffffe;
        eax17 = (eax25 ^ esi26) - esi26;
        esi28 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(edx27) >> 31);
        ecx9 = 2;
        edx8 = (edx27 ^ esi28) - esi28;
        esi18 = 0;
        goto addr_8048a81_13;
        esi18 = 1;
        eax17 = 2;
        goto addr_8048a81_13;
        while (1) {
            dl29 = 70;
            while (1) {
                esi30 = 0;
                ebp31 = dl29;
                do {
                    edi32 = 0;
                    do {
                        v33 = edi32;
                        ++edi32;
                        eax7 = fun_80489c3(eax7, ebp31, esi30, v33, ebx34);
                    } while (edi32 != 3);
                    ++esi30;
                } while (esi30 != 3);
                ebx34 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx34) + 1);
                if (reinterpret_cast<int1_t>(ebx34 == 7)) 
                    goto addr_8048b62_26;
                dl29 = 84;
                switch (reinterpret_cast<uint32_t>(ebx34) - 2) {
                case 1:
                    dl29 = 82;
                    break;
                case 2:
                    dl29 = 76;
                    break;
                case 3:
                    dl29 = 66;
                    break;
                case 4:
                    dl29 = 68;
                case 0:
                    goto 0x8048b26;
                }
            }
        }
        addr_8048b62_26:
        goto a5;
    }
    ecx9 = 0;
    addr_8048a81_13:
    esi35 = edx8 + (ecx9 + ecx9 * 8 + (eax17 + eax17 * 2)) + 12;
    v36 = *reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(ebx37) + esi35 * 4 + 4);
    eax38 = fun_8048903(v36, esi18, a6, __return_address(), a1, a2);
    *reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(ebx39) + esi35 * 4 + 4) = eax38;
    goto a2;
    addr_8048990_5:
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax7) + (edx8 + edx8 * 2) * 4 + 12) = 0x3f800000;
    addr_804899b_8:
    ecx10->f10 = 0;
    return eax7;
}

struct s4 {
    signed char[8] pad8;
    int32_t f8;
};

struct s5 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s6 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s7 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s8 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s4* fun_8048b68(struct s4* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t* ebx6;
    struct s5* ecx7;
    int32_t ebp8;
    int32_t edi9;
    int32_t v10;
    struct s6* edx11;
    struct s7* ecx12;
    struct s8* ebx13;

    ebx6 = &a1->f8;
    ecx7 = reinterpret_cast<struct s5*>(ebx6 + a2 * 3);
    ebp8 = ecx7->f0;
    edi9 = ecx7->f4;
    v10 = ecx7->f8;
    edx11 = reinterpret_cast<struct s6*>(ebx6 + a3 * 3);
    ecx7->f0 = edx11->f0;
    ecx7->f4 = edx11->f4;
    ecx7->f8 = edx11->f8;
    ecx12 = reinterpret_cast<struct s7*>(ebx6 + a4 * 3);
    edx11->f0 = ecx12->f0;
    edx11->f4 = ecx12->f4;
    edx11->f8 = ecx12->f8;
    ebx13 = reinterpret_cast<struct s8*>(ebx6 + a5 * 3);
    ecx12->f0 = ebx13->f0;
    ecx12->f4 = ebx13->f4;
    ecx12->f8 = ebx13->f8;
    ebx13->f0 = ebp8;
    ebx13->f4 = edi9;
    ebx13->f8 = v10;
    return a1;
}

struct s4* fun_8048be1(struct s4* a1, int32_t a2, struct s4* a3, int32_t a4, struct s4* a5, int32_t a6) {
    struct s4* eax7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    struct s4* eax12;

    eax7 = a1;
    if (a2 == 2) {
        v8 = 0;
        v9 = 2;
        v10 = 5;
        v11 = 3;
    } else {
        if (a2 == 3) {
            eax7 = fun_8048b68(eax7, 1, 5, 4, 0);
            goto addr_8048c23_5;
        } else {
            if (a2 - 1) {
                addr_8048c23_5:
                return eax7;
            } else {
                v8 = 3;
                v9 = 4;
                v10 = 2;
                v11 = 1;
            }
        }
    }
    eax12 = fun_8048b68(eax7, v11, v10, v9, v8);
    return eax12;
}

struct s4* fun_8048c24(struct s4* a1, int32_t a2, struct s4* a3, int32_t a4, struct s4* a5, int32_t a6) {
    struct s4* eax7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    struct s4* eax12;

    eax7 = a1;
    if (a2 == 2) {
        v8 = 3;
        v9 = 5;
        v10 = 2;
        v11 = 0;
    } else {
        if (a2 == 3) {
            eax7 = fun_8048b68(eax7, 0, 4, 5, 1);
            goto addr_8048c66_5;
        } else {
            if (a2 - 1) {
                addr_8048c66_5:
                return eax7;
            } else {
                v8 = 1;
                v9 = 2;
                v10 = 4;
                v11 = 3;
            }
        }
    }
    eax12 = fun_8048b68(eax7, v11, v10, v9, v8);
    return eax12;
}

struct s9 {
    int32_t f0;
    signed char[48] pad52;
    int32_t f34;
    int32_t f38;
    int32_t f3c;
    int32_t f40;
    signed char[4] pad72;
    int32_t f48;
    int32_t f4c;
    int32_t f50;
    int32_t f54;
};

struct s10 {
    struct s4* f0;
    struct s4* f4;
    struct s4* f8;
};

struct s11 {
    int32_t f0;
    signed char[48] pad52;
    int32_t f34;
    int32_t f38;
    int32_t f3c;
    int32_t f40;
    signed char[4] pad72;
    int32_t f48;
    int32_t f4c;
    int32_t f50;
    int32_t f54;
};

struct s12 {
    struct s4* f0;
    struct s4* f4;
    struct s4* f8;
};

struct s0* fun_80490d5(struct s0* a1, void* a2, struct s4* a3) {
    int32_t v4;
    int32_t edi5;
    struct s4* v6;
    struct s4* esi7;
    int32_t v8;
    int32_t ebx9;
    struct s0* ebx10;
    struct s4* v11;
    void* edx12;
    int16_t ax13;
    int16_t fpu_status_word14;
    void* ecx15;
    int32_t edi16;
    struct s9* eax17;
    int32_t edx18;
    int32_t esi19;
    int32_t edx20;
    int32_t esi21;
    struct s10* esi22;
    struct s4* v23;
    struct s4* eax24;
    struct s4* v25;
    struct s4* eax26;
    struct s4* v27;
    struct s4* eax28;
    int16_t ax29;
    int16_t fpu_status_word30;
    void* ecx31;
    int32_t edi32;
    struct s11* eax33;
    int32_t edx34;
    int32_t esi35;
    int32_t edx36;
    int32_t esi37;
    struct s12* esi38;
    struct s4* v39;
    struct s4* eax40;
    struct s4* v41;
    struct s4* eax42;
    struct s4* v43;
    struct s4* eax44;
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

    v4 = edi5;
    v6 = esi7;
    v8 = ebx9;
    ebx10 = a1;
    v11 = a3;
    edx12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 4);
    __asm__("fild dword [esp]");
    __asm__("fadd dword [ebx+edx*4]");
    __asm__("fst dword [ebx+edx*4]");
    if (reinterpret_cast<int32_t>(a3) >= 0) {
        if (!a3) {
            __asm__("fstp st0");
        } else {
            __asm__("fld dword [0x8049f34]");
            __asm__("fxch st0, st1");
            __asm__("fucompp ");
            ax13 = fpu_status_word14;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax13) + 1) && !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax13) + 1)) {
                ecx15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) * 36);
                edi16 = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(edx12) * 4) = 0;
                eax17 = reinterpret_cast<struct s9*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx15));
                edx18 = eax17->f3c;
                eax17->f3c = eax17->f54;
                eax17->f54 = eax17->f4c;
                esi19 = eax17->f34;
                eax17->f34 = edx18;
                edx20 = eax17->f38;
                eax17->f4c = esi19;
                eax17->f38 = eax17->f48;
                eax17->f48 = eax17->f50;
                esi21 = eax17->f40;
                eax17->f40 = edx20;
                eax17->f50 = esi21;
                esi22 = reinterpret_cast<struct s10*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx15) + 52);
                do {
                    ++edi16;
                    v23 = esi22->f0;
                    eax24 = fun_8048c24(v23, 1, v11, v8, v6, v4);
                    esi22->f0 = eax24;
                    v25 = esi22->f4;
                    eax26 = fun_8048c24(v25, 1, v23, 1, v11, v8);
                    esi22->f4 = eax26;
                    v27 = esi22->f8;
                    eax28 = fun_8048c24(v27, 1, v25, 1, v23, 1);
                    esi22->f8 = eax28;
                    ++esi22;
                } while (edi16 != 3);
            }
        }
    } else {
        __asm__("fld dword [0x8049f30]");
        __asm__("fxch st0, st1");
        __asm__("fucompp ");
        ax29 = fpu_status_word30;
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax29) + 1) && !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax29) + 1)) {
            ecx31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) * 36);
            edi32 = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(edx12) * 4) = 0;
            eax33 = reinterpret_cast<struct s11*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx31));
            edx34 = eax33->f34;
            eax33->f34 = eax33->f4c;
            eax33->f4c = eax33->f54;
            esi35 = eax33->f3c;
            eax33->f3c = edx34;
            edx36 = eax33->f40;
            eax33->f54 = esi35;
            eax33->f40 = eax33->f50;
            eax33->f50 = eax33->f48;
            esi37 = eax33->f38;
            eax33->f38 = edx36;
            eax33->f48 = esi37;
            esi38 = reinterpret_cast<struct s12*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx31) + 52);
            do {
                ++edi32;
                v39 = esi38->f0;
                eax40 = fun_8048be1(v39, 1, v11, v8, v6, v4);
                esi38->f0 = eax40;
                v41 = esi38->f4;
                eax42 = fun_8048be1(v41, 1, v39, 1, v11, v8);
                esi38->f4 = eax42;
                v43 = esi38->f8;
                eax44 = fun_8048be1(v43, 1, v41, 1, v39, 1);
                esi38->f8 = eax44;
                ++esi38;
            } while (edi32 != 3);
        }
    }
    __asm__("fld dword [ebx+0x10]");
    __asm__("fld dword [ebx+0x14]");
    __asm__("fxch st0, st1");
    __asm__("fucom st1");
    ax45 = fpu_status_word46;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax45) + 1)) 
        goto addr_8049231_13;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax45) + 1)) 
        goto addr_804925b_15;
    addr_8049231_13:
    __asm__("fld dword [0x8049f34]");
    __asm__("fld st2");
    __asm__("fsub st0, st1");
    __asm__("fxch st0, st2");
    __asm__("fucom st2");
    ax47 = fpu_status_word48;
    __asm__("fstp st2");
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax47) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax47) + 1)) {
        __asm__("fadd st0, st2");
        __asm__("fxch st0, st1");
        __asm__("fucom st1");
        ax49 = fpu_status_word50;
        __asm__("fstp st1");
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax49) + 1)) {
            __asm__("fstp st0");
            __asm__("fstp st0");
        } else {
            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax49) + 1)) {
                addr_804925b_15:
                __asm__("fld dword [ebx+0x18]");
                __asm__("fxch st0, st2");
                __asm__("fucom st2");
                ax51 = fpu_status_word52;
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax51) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax51) + 1)) {
                    __asm__("fld dword [0x8049f34]");
                    __asm__("fld st3");
                    __asm__("fsub st0, st1");
                    __asm__("fxch st0, st2");
                    __asm__("fucom st2");
                    ax53 = fpu_status_word54;
                    __asm__("fstp st2");
                    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax53) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax53) + 1)) {
                        __asm__("faddp st3, st0");
                        __asm__("fucomp st2");
                        ax55 = fpu_status_word56;
                        __asm__("fstp st1");
                        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax55) + 1)) {
                            __asm__("fstp st0");
                        } else {
                            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax55) + 1)) {
                                addr_804929b_23:
                                __asm__("fadd dword [ebx+0x4]");
                                ebx10->f18 = 0;
                                ebx10->f14 = 0;
                                ebx10->f10 = 0;
                                __asm__("fstp dword [ebx+0x4]");
                            } else {
                                __asm__("fstp st0");
                            }
                        }
                    } else {
                        __asm__("fstp st0");
                        __asm__("fstp st0");
                        __asm__("fstp st1");
                        goto addr_804929b_23;
                    }
                } else {
                    __asm__("fstp st0");
                    __asm__("fstp st1");
                    goto addr_804929b_23;
                }
            } else {
                __asm__("fstp st0");
                __asm__("fstp st0");
            }
        }
        return ebx10;
    } else {
        __asm__("fstp st0");
        goto addr_804925b_15;
    }
}

struct s0* fun_804880c(int32_t a1);

struct s0* fun_8049363(void* a1, void* a2, void* a3, void* a4) {
    struct s0* eax5;

    eax5 = fun_804880c(12);
    eax5->f4 = a1;
    eax5->f8 = a2;
    return eax5;
}

int32_t g804a10c = 0x8048822;

void fun_804881c(int32_t ecx, void* a2, struct s0* a3, struct s4* a4, void* a5, void* a6, struct s0* a7, struct s4* a8, void* a9) {
    goto g804a10c;
}

int32_t fun_804878c(void* a1);

int32_t fun_8049330(signed char a1, struct s0* a2, struct s4* a3, int32_t a4, struct s0* a5, struct s0* a6, struct s4* a7, void* a8) {
    void* ebx9;
    int32_t eax10;

    ebx9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8 + 16);
    do {
        eax10 = fun_804878c(ebx9);
        if (!eax10) 
            break;
    } while (a1 != 2 || !reinterpret_cast<int1_t>(a3 == 27));
    goto addr_8049348_4;
    addr_804935f_5:
    return eax10;
    addr_8049348_4:
    eax10 = 1;
    goto addr_804935f_5;
}

int32_t g804a130 = 0x80488b2;

int32_t fun_80488ac() {
    goto g804a130;
}

void fun_80487fc(void* a1, struct s0* a2, struct s4* a3, void* a4);

void fun_8049444(void* a1, struct s0* a2, struct s4* a3, void* a4);

void fun_804993d(int32_t ecx, struct s0* a2, struct s0* a3, struct s4* a4, void* a5) {
    int32_t edi6;
    struct s0* ebx7;
    void* v8;
    void* v9;
    struct s0* v10;
    struct s4* v11;
    void* v12;
    void* v13;
    void* v14;
    void* v15;
    struct s0* v16;
    struct s4* v17;
    void* v18;
    struct s0* v19;
    int32_t ebp20;
    void* v21;
    void* v22;
    struct s0* v23;
    struct s4* v24;
    void* v25;
    struct s0* v26;
    int32_t esi27;
    void* v28;
    void* v29;
    struct s0* v30;
    struct s4* v31;
    void* v32;
    void* v33;
    void* v34;
    struct s0* v35;
    struct s4* v36;
    void* v37;
    void* v38;
    void* v39;
    struct s0* v40;
    struct s4* v41;
    void* v42;
    void* v43;
    struct s0* v44;
    struct s4* v45;
    void* v46;
    void* v47;
    struct s0* v48;
    struct s4* v49;
    void* v50;
    void* v51;
    struct s0* v52;
    struct s4* v53;
    void* v54;

    edi6 = 0;
    ebx7 = a2;
    v8 = ebx7->f4;
    fun_804881c(ecx, v8, 0x3f800000, 0, 0, v9, v10, v11, v12);
    v13 = ebx7->f8;
    fun_804881c(ecx, v13, 0, 0x3f800000, 0, v8, 0x3f800000, 0, 0);
    v14 = ebx7->fc;
    fun_804881c(ecx, v14, 0, 0, 0x3f800000, v15, v16, v17, v18);
    v19 = ebx7;
    do {
        ebp20 = 0;
        v21 = *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx7) + edi6 * 4 + 16);
        fun_804881c(ecx, v21, 0x3f800000, 0, 0, v22, v23, v24, v25);
        v26 = v19;
        do {
            esi27 = 0;
            v28 = *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx7) + ebp20 * 4 + 28);
            fun_804881c(ecx, v28, 0, 0x3f800000, 0, v29, v30, v31, v32);
            do {
                v33 = *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx7) + esi27 * 4 + 40);
                fun_804881c(ecx, v33, 0, 0, 0x3f800000, v34, v35, v36, v37);
                __asm__("fild dword [esp+0x4c]");
                __asm__("fild dword [esp+0x4c]");
                __asm__("fild dword [esp+0x4c]");
                __asm__("fld1 ");
                __asm__("fsubr st0, st3");
                __asm__("fstp dword [esp+0x8]");
                __asm__("fld1 ");
                __asm__("fsubr st0, st2");
                __asm__("fstp dword [esp+0x4]");
                __asm__("fld1 ");
                __asm__("fsubr st0, st1");
                __asm__("fstp dword [esp]");
                __asm__("fstp dword [esp+0x30]");
                __asm__("fstp dword [esp+0x20]");
                __asm__("fstp dword [esp+0x10]");
                fun_80487fc(v33, 0, 0, 0x3f800000);
                v38 = *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v26) + esi27 * 4 + 52);
                fun_8049444(v38, 0, 0, 0x3f800000);
                __asm__("fld dword [esp+0x10]");
                __asm__("fld1 ");
                __asm__("fsubr st1, st0");
                __asm__("fxch st0, st1");
                __asm__("fstp dword [esp+0x8]");
                __asm__("fld dword [esp+0x20]");
                __asm__("fsubr st0, st1");
                __asm__("fstp dword [esp+0x4]");
                __asm__("fld dword [esp+0x30]");
                __asm__("fsubp st1, st0");
                __asm__("fstp dword [esp]");
                fun_80487fc(v38, 0, 0, 0x3f800000);
                __asm__("fld dword [ebx+esi*4+0x28]");
                ++esi27;
                __asm__("fchs ");
                __asm__("fstp dword [esp]");
                fun_804881c(ecx, v13, 0, 0, 0x3f800000, v38, 0, 0, 0x3f800000);
            } while (esi27 != 3);
            __asm__("fld dword [ebx+ebp*4+0x1c]");
            ++ebp20;
            __asm__("fchs ");
            __asm__("fstp dword [esp]");
            fun_804881c(ecx, v38, 0, 0x3f800000, 0, v39, v40, v41, v42);
            v26 = reinterpret_cast<struct s0*>(&v26->fc);
        } while (ebp20 != 3);
        __asm__("fld dword [ebx+edi*4+0x10]");
        ++edi6;
        __asm__("fchs ");
        __asm__("fstp dword [esp]");
        fun_804881c(ecx, v38, 0x3f800000, 0, 0, v43, v44, v45, v46);
        v19 = reinterpret_cast<struct s0*>(&v19->f24);
    } while (edi6 != 3);
    __asm__("fld dword [ebx+0xc]");
    __asm__("fchs ");
    __asm__("fstp dword [esp]");
    fun_804881c(ecx, v38, 0, 0, 0x3f800000, v47, v48, v49, v50);
    __asm__("fld dword [ebx+0x8]");
    __asm__("fchs ");
    __asm__("fstp dword [esp]");
    fun_804881c(ecx, v13, 0, 0x3f800000, 0, v38, 0, 0, 0x3f800000);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fchs ");
    __asm__("fstp dword [esp]");
    fun_804881c(ecx, v38, 0x3f800000, 0, 0, v51, v52, v53, v54);
    return;
}

int32_t g804a0ec = 0x80487a2;

void fun_804879c(struct s0* a1, struct s0* a2, struct s4* a3, void* a4) {
    goto g804a0ec;
}

int32_t g804a0e0 = 0x8048772;

void fun_804876c(int32_t a1, struct s0* a2, struct s4* a3, void* a4) {
    goto g804a0e0;
}

int32_t g804a124 = 0x8048882;

void fun_804887c(int32_t a1, struct s0* a2, struct s4* a3, void* a4) {
    goto g804a124;
}

int32_t g804a128 = 0x8048892;

void fun_804888c(struct s0* a1, struct s0* a2, struct s4* a3, void* a4) {
    goto g804a128;
}

struct s0* fun_8048eb5(struct s0* a1, void* a2, struct s4* a3);

struct s0* fun_8048c67(struct s0* a1, void* a2, struct s4* a3);

struct s0* fun_80492d1(struct s0* a1, struct s0* a2, struct s4* a3, void* a4) {
    void* v5;
    void* v6;
    void* v7;

    if (a2->f4 == 2) {
        v5 = a2->f8;
        fun_8048eb5(a1, v5, a3);
    } else {
        if (a2->f4 == 3) {
            v6 = a2->f8;
            fun_8048c67(a1, v6, a3);
        } else {
            if (reinterpret_cast<int32_t>(a2->f4) - 1) {
                addr_8049313_6:
                return a1;
            } else {
                v7 = a2->f8;
                fun_80490d5(a1, v7, a3);
            }
        }
    }
    goto addr_8049313_6;
}

int32_t g804a12c = 0x80488a2;

void fun_804889c() {
    goto g804a12c;
}

struct s0* fun_80489c3(struct s0* a1, int32_t a2, uint32_t a3, uint32_t a4, struct s0* a5) {
    int32_t eax6;
    struct s0* ebx7;
    uint32_t edx8;
    uint32_t ecx9;
    int32_t eax10;
    struct s0* eax11;
    uint32_t ecx12;
    uint32_t esi13;
    uint32_t eax14;
    uint32_t esi15;
    uint32_t eax16;
    uint32_t esi17;
    uint32_t edx18;
    uint32_t esi19;
    uint32_t eax20;
    uint32_t esi21;
    uint32_t eax22;
    uint32_t esi23;
    uint32_t eax24;
    uint32_t esi25;
    uint32_t edx26;
    uint32_t esi27;
    signed char dl28;
    uint32_t esi29;
    int32_t ebp30;
    uint32_t edi31;
    uint32_t v32;
    uint32_t esi33;
    struct s0* v34;
    int32_t ebx35;
    struct s0* esi36;
    struct s0* eax37;

    *reinterpret_cast<signed char*>(&eax6) = *reinterpret_cast<signed char*>(&a2);
    ebx7 = a1;
    edx8 = a3;
    ecx9 = a4;
    eax10 = eax6 - 66;
    if (*reinterpret_cast<unsigned char*>(&eax10) > 18) 
        goto addr_80489f5_2;
    eax11 = reinterpret_cast<struct s0*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax10)));
    switch (eax11) {
    case 0:
        ecx12 = ecx9 - 2;
        esi13 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx12) >> 31);
        eax14 = edx8 + 0xfffffffe;
        ecx9 = (ecx12 ^ esi13) - esi13;
        esi15 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax14) >> 31);
        edx8 = 0;
        eax16 = (eax14 ^ esi15) - esi15;
        esi17 = 3;
        goto addr_8048a81_5;
        addr_80489f5_2:
    case 1:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 17:
        esi17 = 0;
        edx8 = 0;
        eax16 = 0;
        break;
    case 2:
        edx18 = edx8 - 2;
        eax16 = 0;
        esi19 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(edx18) >> 31);
        edx8 = (edx18 ^ esi19) - esi19;
        esi17 = 4;
        goto addr_8048a81_5;
    case 4:
        eax20 = edx8 + 0xfffffffe;
        edx8 = 2;
        esi21 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax20) >> 31);
        eax16 = (eax20 ^ esi21) - esi21;
        esi17 = 2;
        goto addr_8048a81_5;
    case 10:
        eax22 = edx8 + 0xfffffffe;
        edx8 = ecx9;
        esi23 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax22) >> 31);
        eax16 = (eax22 ^ esi23) - esi23;
        esi17 = 5;
        break;
    case 16:
        eax24 = edx8 + 0xfffffffe;
        esi25 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax24) >> 31);
        edx26 = ecx9 + 0xfffffffe;
        eax16 = (eax24 ^ esi25) - esi25;
        esi27 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(edx26) >> 31);
        ecx9 = 2;
        edx8 = (edx26 ^ esi27) - esi27;
        esi17 = 0;
        goto addr_8048a81_5;
    case 18:
        esi17 = 1;
        eax16 = 2;
        goto addr_8048a81_5;
        while (1) {
        case 19:
            dl28 = 70;
            while (1) {
                esi29 = 0;
                ebp30 = dl28;
                do {
                    edi31 = 0;
                    do {
                        v32 = edi31;
                        ++edi31;
                        eax11 = fun_80489c3(eax11, ebp30, esi29, v32, ebx7);
                    } while (edi31 != 3);
                    ++esi29;
                } while (esi29 != 3);
                ebx7 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx7) + 1);
                if (reinterpret_cast<int1_t>(ebx7 == 7)) 
                    goto addr_8048b62_17;
                dl28 = 84;
                switch (reinterpret_cast<uint32_t>(ebx7) - 2) {
                case 1:
                    dl28 = 82;
                    break;
                case 2:
                    dl28 = 76;
                    break;
                case 3:
                    dl28 = 66;
                    break;
                case 4:
                    dl28 = 68;
                case 0:
                    goto 0x8048b26;
                }
            }
        }
        addr_8048b62_17:
        goto a3;
    case 22:
        goto 0x8048b32;
    case 20:
        goto 0x8048b2a;
    case 21:
        goto 0x8048b2e;
    case 23:
        goto 0x8048b36;
    }
    ecx9 = 0;
    addr_8048a81_5:
    esi33 = edx8 + (ecx9 + ecx9 * 8 + (eax16 + eax16 * 2)) + 12;
    v34 = *reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ebx7) + esi33 * 4 + 4);
    eax37 = fun_8048903(v34, esi17, a4, ebx35, esi36, __return_address());
    *reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ebx7) + esi33 * 4 + 4) = eax37;
    return ebx7;
}

struct s13 {
    struct s4* f0;
    signed char[8] pad12;
    struct s4* fc;
    signed char[8] pad24;
    struct s4* f18;
};

struct s14 {
    struct s4* f0;
    signed char[8] pad12;
    struct s4* fc;
    signed char[8] pad24;
    struct s4* f18;
};

struct s0* fun_8048c67(struct s0* a1, void* a2, struct s4* a3) {
    int32_t v4;
    int32_t edi5;
    struct s4* v6;
    struct s4* esi7;
    int32_t v8;
    int32_t ebx9;
    struct s0* ebx10;
    struct s4* v11;
    void* ecx12;
    int16_t ax13;
    int16_t fpu_status_word14;
    void* eax15;
    int32_t edi16;
    void* ecx17;
    int32_t esi18;
    void* ecx19;
    void* eax20;
    void* ecx21;
    void* esi22;
    int32_t edi23;
    void* ecx24;
    void* edx25;
    struct s13* esi26;
    int32_t edi27;
    struct s4* v28;
    struct s4* eax29;
    struct s4* v30;
    struct s4* eax31;
    struct s4* v32;
    struct s4* eax33;
    int16_t ax34;
    int16_t fpu_status_word35;
    void* ecx36;
    void* eax37;
    int32_t edi38;
    void* esi39;
    void* ecx40;
    void* esi41;
    void* ecx42;
    int32_t edi43;
    void* ecx44;
    void* edx45;
    struct s14* esi46;
    int32_t edi47;
    struct s4* v48;
    struct s4* eax49;
    struct s4* v50;
    struct s4* eax51;
    struct s4* v52;
    struct s4* eax53;
    int16_t ax54;
    int16_t fpu_status_word55;
    int16_t ax56;
    int16_t fpu_status_word57;
    int16_t ax58;
    int16_t fpu_status_word59;
    int16_t ax60;
    int16_t fpu_status_word61;
    int16_t ax62;
    int16_t fpu_status_word63;
    int16_t ax64;
    int16_t fpu_status_word65;

    v4 = edi5;
    v6 = esi7;
    v8 = ebx9;
    ebx10 = a1;
    v11 = a3;
    ecx12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 8);
    __asm__("fild dword [esp]");
    __asm__("fadd dword [ebx+ecx*4+0x8]");
    __asm__("fst dword [ebx+ecx*4+0x8]");
    if (reinterpret_cast<int32_t>(a3) >= 0) {
        if (!a3) {
            __asm__("fstp st0");
        } else {
            __asm__("fld dword [0x8049f34]");
            __asm__("fxch st0, st1");
            __asm__("fucompp ");
            ax13 = fpu_status_word14;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax13) + 1) && !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax13) + 1)) {
                eax15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 36);
                edi16 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(eax15) * 4 + 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx12) * 4 + 8) = 0;
                ecx17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 18);
                esi18 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx17) * 4 + 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx17) * 4 + 4) = edi16;
                ecx19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 30);
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(eax15) * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx19) * 4 + 4);
                eax20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx19) * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(eax20) * 4 + 4);
                ecx21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 15);
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(eax20) * 4 + 4) = esi18;
                esi22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 27);
                edi23 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx21) * 4 + 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx21) * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(esi22) * 4 + 4);
                ecx24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 33);
                edx25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 21);
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(esi22) * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx24) * 4 + 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx24) * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(edx25) * 4 + 4);
                esi26 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(eax20) * 4 + 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(edx25) * 4 + 4) = edi23;
                edi27 = 0;
                do {
                    ++edi27;
                    v28 = esi26->f0;
                    eax29 = fun_8048c24(v28, 3, v11, v8, v6, v4);
                    esi26->f0 = eax29;
                    v30 = esi26->fc;
                    eax31 = fun_8048c24(v30, 3, v28, 3, v11, v8);
                    esi26->fc = eax31;
                    v32 = esi26->f18;
                    eax33 = fun_8048c24(v32, 3, v30, 3, v28, 3);
                    esi26->f18 = eax33;
                    esi26 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(esi26) + 36);
                } while (edi27 != 3);
            }
        }
    } else {
        __asm__("fld dword [0x8049f30]");
        __asm__("fxch st0, st1");
        __asm__("fucompp ");
        ax34 = fpu_status_word35;
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax34) + 1) && !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax34) + 1)) {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx12) * 4 + 8) = 0;
            ecx36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 30);
            eax37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 12);
            edi38 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(eax37) * 4 + 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(eax37) * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx36) * 4 + 4);
            esi39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 36);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx36) * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(esi39) * 4 + 4);
            ecx40 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 18);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(esi39) * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx40) * 4 + 4);
            esi41 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 33);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx40) * 4 + 4) = edi38;
            ecx42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 21);
            edi43 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx42) * 4 + 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx42) * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(esi41) * 4 + 4);
            ecx44 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 27);
            edx45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 15);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(esi41) * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx44) * 4 + 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx44) * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(edx45) * 4 + 4);
            esi46 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(eax37) * 4 + 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(edx45) * 4 + 4) = edi43;
            edi47 = 0;
            do {
                ++edi47;
                v48 = esi46->f0;
                eax49 = fun_8048be1(v48, 3, v11, v8, v6, v4);
                esi46->f0 = eax49;
                v50 = esi46->fc;
                eax51 = fun_8048be1(v50, 3, v48, 3, v11, v8);
                esi46->fc = eax51;
                v52 = esi46->f18;
                eax53 = fun_8048be1(v52, 3, v50, 3, v48, 3);
                esi46->f18 = eax53;
                esi46 = reinterpret_cast<struct s14*>(reinterpret_cast<uint32_t>(esi46) + 36);
            } while (edi47 != 3);
        }
    }
    __asm__("fld dword [ebx+0x28]");
    __asm__("fld dword [ebx+0x2c]");
    __asm__("fxch st0, st1");
    __asm__("fucom st1");
    ax54 = fpu_status_word55;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax54) + 1)) 
        goto addr_8048e14_13;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax54) + 1)) 
        goto addr_8048e3e_15;
    addr_8048e14_13:
    __asm__("fld dword [0x8049f34]");
    __asm__("fld st2");
    __asm__("fsub st0, st1");
    __asm__("fxch st0, st2");
    __asm__("fucom st2");
    ax56 = fpu_status_word57;
    __asm__("fstp st2");
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax56) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax56) + 1)) {
        __asm__("fadd st0, st2");
        __asm__("fxch st0, st1");
        __asm__("fucom st1");
        ax58 = fpu_status_word59;
        __asm__("fstp st1");
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax58) + 1)) {
            __asm__("fstp st0");
            __asm__("fstp st0");
        } else {
            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax58) + 1)) {
                addr_8048e3e_15:
                __asm__("fld dword [ebx+0x30]");
                __asm__("fxch st0, st2");
                __asm__("fucom st2");
                ax60 = fpu_status_word61;
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax60) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax60) + 1)) {
                    __asm__("fld dword [0x8049f34]");
                    __asm__("fld st3");
                    __asm__("fsub st0, st1");
                    __asm__("fxch st0, st2");
                    __asm__("fucom st2");
                    ax62 = fpu_status_word63;
                    __asm__("fstp st2");
                    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax62) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax62) + 1)) {
                        __asm__("faddp st3, st0");
                        __asm__("fucomp st2");
                        ax64 = fpu_status_word65;
                        __asm__("fstp st1");
                        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax64) + 1)) {
                            __asm__("fstp st0");
                        } else {
                            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax64) + 1)) {
                                addr_8048e7e_23:
                                __asm__("fadd dword [ebx+0xc]");
                                ebx10->f30 = 0;
                                ebx10->f2c = 0;
                                ebx10->f28 = 0;
                                __asm__("fstp dword [ebx+0xc]");
                            } else {
                                __asm__("fstp st0");
                            }
                        }
                    } else {
                        __asm__("fstp st0");
                        __asm__("fstp st0");
                        __asm__("fstp st1");
                        goto addr_8048e7e_23;
                    }
                } else {
                    __asm__("fstp st0");
                    __asm__("fstp st1");
                    goto addr_8048e7e_23;
                }
            } else {
                __asm__("fstp st0");
                __asm__("fstp st0");
            }
        }
        return ebx10;
    } else {
        __asm__("fstp st0");
        goto addr_8048e3e_15;
    }
}

struct s15 {
    int32_t f0;
    signed char[48] pad52;
    int32_t f34;
    int32_t f38;
    int32_t f3c;
    signed char[24] pad88;
    int32_t f58;
    signed char[4] pad96;
    int32_t f60;
    signed char[24] pad124;
    int32_t f7c;
    int32_t f80;
    int32_t f84;
};

struct s16 {
    struct s4* f0;
    struct s4* f4;
    struct s4* f8;
};

struct s17 {
    int32_t f0;
    signed char[48] pad52;
    int32_t f34;
    int32_t f38;
    int32_t f3c;
    signed char[24] pad88;
    int32_t f58;
    signed char[4] pad96;
    int32_t f60;
    signed char[24] pad124;
    int32_t f7c;
    int32_t f80;
    int32_t f84;
};

struct s18 {
    struct s4* f0;
    struct s4* f4;
    struct s4* f8;
};

struct s0* fun_8048eb5(struct s0* a1, void* a2, struct s4* a3) {
    int32_t v4;
    int32_t edi5;
    struct s4* v6;
    struct s4* esi7;
    int32_t v8;
    int32_t ebx9;
    struct s0* ebx10;
    struct s4* v11;
    void* edx12;
    int16_t ax13;
    int16_t fpu_status_word14;
    void* ecx15;
    int32_t edi16;
    struct s15* eax17;
    int32_t edx18;
    int32_t esi19;
    int32_t edx20;
    int32_t esi21;
    struct s16* esi22;
    struct s4* v23;
    struct s4* eax24;
    struct s4* v25;
    struct s4* eax26;
    struct s4* v27;
    struct s4* eax28;
    int16_t ax29;
    int16_t fpu_status_word30;
    void* ecx31;
    int32_t edi32;
    struct s17* eax33;
    int32_t edx34;
    int32_t esi35;
    int32_t edx36;
    int32_t esi37;
    struct s18* esi38;
    struct s4* v39;
    struct s4* eax40;
    struct s4* v41;
    struct s4* eax42;
    struct s4* v43;
    struct s4* eax44;
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

    v4 = edi5;
    v6 = esi7;
    v8 = ebx9;
    ebx10 = a1;
    v11 = a3;
    edx12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) + 4);
    __asm__("fild dword [esp]");
    __asm__("fadd dword [ebx+edx*4+0xc]");
    __asm__("fst dword [ebx+edx*4+0xc]");
    if (reinterpret_cast<int32_t>(a3) >= 0) {
        if (!a3) {
            __asm__("fstp st0");
        } else {
            __asm__("fld dword [0x8049f34]");
            __asm__("fxch st0, st1");
            __asm__("fucompp ");
            ax13 = fpu_status_word14;
            if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax13) + 1) && !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax13) + 1)) {
                ecx15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) * 12);
                edi16 = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(edx12) * 4 + 12) = 0;
                eax17 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx15));
                edx18 = eax17->f34;
                eax17->f34 = eax17->f7c;
                eax17->f7c = eax17->f84;
                esi19 = eax17->f3c;
                eax17->f3c = edx18;
                edx20 = eax17->f58;
                eax17->f84 = esi19;
                eax17->f58 = eax17->f80;
                eax17->f80 = eax17->f60;
                esi21 = eax17->f38;
                eax17->f38 = edx20;
                eax17->f60 = esi21;
                esi22 = reinterpret_cast<struct s16*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx15) + 52);
                do {
                    ++edi16;
                    v23 = esi22->f0;
                    eax24 = fun_8048c24(v23, 2, v11, v8, v6, v4);
                    esi22->f0 = eax24;
                    v25 = esi22->f4;
                    eax26 = fun_8048c24(v25, 2, v23, 2, v11, v8);
                    esi22->f4 = eax26;
                    v27 = esi22->f8;
                    eax28 = fun_8048c24(v27, 2, v25, 2, v23, 2);
                    esi22->f8 = eax28;
                    esi22 = esi22 + 3;
                } while (edi16 != 3);
            }
        }
    } else {
        __asm__("fld dword [0x8049f30]");
        __asm__("fxch st0, st1");
        __asm__("fucompp ");
        ax29 = fpu_status_word30;
        if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax29) + 1) && !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax29) + 1)) {
            ecx31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a2) * 12);
            edi32 = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(edx12) * 4 + 12) = 0;
            eax33 = reinterpret_cast<struct s17*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx31));
            edx34 = eax33->f3c;
            eax33->f3c = eax33->f84;
            eax33->f84 = eax33->f7c;
            esi35 = eax33->f34;
            eax33->f34 = edx34;
            edx36 = eax33->f38;
            eax33->f7c = esi35;
            eax33->f38 = eax33->f60;
            eax33->f60 = eax33->f80;
            esi37 = eax33->f58;
            eax33->f58 = edx36;
            eax33->f80 = esi37;
            esi38 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<int32_t>(ecx31) + 52);
            do {
                ++edi32;
                v39 = esi38->f0;
                eax40 = fun_8048be1(v39, 2, v11, v8, v6, v4);
                esi38->f0 = eax40;
                v41 = esi38->f4;
                eax42 = fun_8048be1(v41, 2, v39, 2, v11, v8);
                esi38->f4 = eax42;
                v43 = esi38->f8;
                eax44 = fun_8048be1(v43, 2, v41, 2, v39, 2);
                esi38->f8 = eax44;
                esi38 = esi38 + 3;
            } while (edi32 != 3);
        }
    }
    __asm__("fld dword [ebx+0x1c]");
    __asm__("fld dword [ebx+0x20]");
    __asm__("fxch st0, st1");
    __asm__("fucom st1");
    ax45 = fpu_status_word46;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax45) + 1)) 
        goto addr_8049035_13;
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax45) + 1)) 
        goto addr_804905f_15;
    addr_8049035_13:
    __asm__("fld dword [0x8049f34]");
    __asm__("fld st2");
    __asm__("fsub st0, st1");
    __asm__("fxch st0, st2");
    __asm__("fucom st2");
    ax47 = fpu_status_word48;
    __asm__("fstp st2");
    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax47) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax47) + 1)) {
        __asm__("fadd st0, st2");
        __asm__("fxch st0, st1");
        __asm__("fucom st1");
        ax49 = fpu_status_word50;
        __asm__("fstp st1");
        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax49) + 1)) {
            __asm__("fstp st0");
            __asm__("fstp st0");
        } else {
            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax49) + 1)) {
                addr_804905f_15:
                __asm__("fld dword [ebx+0x24]");
                __asm__("fxch st0, st2");
                __asm__("fucom st2");
                ax51 = fpu_status_word52;
                if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax51) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax51) + 1)) {
                    __asm__("fld dword [0x8049f34]");
                    __asm__("fld st3");
                    __asm__("fsub st0, st1");
                    __asm__("fxch st0, st2");
                    __asm__("fucom st2");
                    ax53 = fpu_status_word54;
                    __asm__("fstp st2");
                    if (*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax53) + 1) || !*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax53) + 1)) {
                        __asm__("faddp st3, st0");
                        __asm__("fucomp st2");
                        ax55 = fpu_status_word56;
                        __asm__("fstp st1");
                        if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax55) + 1)) {
                            __asm__("fstp st0");
                        } else {
                            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax55) + 1)) {
                                addr_804909f_23:
                                __asm__("fadd dword [ebx+0x8]");
                                ebx10->f24 = 0;
                                ebx10->f20 = 0;
                                ebx10->f1c = 0;
                                __asm__("fstp dword [ebx+0x8]");
                            } else {
                                __asm__("fstp st0");
                            }
                        }
                    } else {
                        __asm__("fstp st0");
                        __asm__("fstp st0");
                        __asm__("fstp st1");
                        goto addr_804909f_23;
                    }
                } else {
                    __asm__("fstp st0");
                    __asm__("fstp st1");
                    goto addr_804909f_23;
                }
            } else {
                __asm__("fstp st0");
                __asm__("fstp st0");
            }
        }
        return ebx10;
    } else {
        __asm__("fstp st0");
        goto addr_804905f_15;
    }
}

int32_t g804a0e8 = 0x8048792;

int32_t fun_804878c(void* a1) {
    goto g804a0e8;
}

int32_t g804a108 = 0x8048812;

struct s0* fun_804880c(int32_t a1) {
    goto g804a108;
}

struct s0* fun_804937f() {
    struct s0* eax1;

    eax1 = fun_804880c(80);
    eax1->f4 = reinterpret_cast<void*>(0x3f4ccccd);
    return eax1;
}

struct s0* fun_8048aa8(struct s0* a1) {
    int32_t ecx2;
    struct s0* eax3;
    int32_t ebx4;
    void* v5;
    int32_t esi6;
    int32_t* edi7;
    int32_t ebp8;
    int32_t edx9;
    struct s0* ebx10;
    signed char dl11;
    uint32_t esi12;
    int32_t ebp13;
    uint32_t edi14;
    uint32_t v15;

    ecx2 = 0;
    eax3 = a1;
    do {
        ebx4 = 0;
        v5 = reinterpret_cast<void*>(ecx2 * 36);
        do {
            esi6 = 0;
            edi7 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax3) + (ebx4 * 12 + reinterpret_cast<int32_t>(v5) + 48) + 4);
            do {
                ebp8 = *edi7;
                edx9 = 0;
                do {
                    *reinterpret_cast<int32_t*>(ebp8 + edx9 + 16) = 0x3e800000;
                    *reinterpret_cast<int32_t*>(ebp8 + edx9 + 12) = 0x3e800000;
                    *reinterpret_cast<int32_t*>(ebp8 + edx9 + 8) = 0x3e800000;
                    edx9 = edx9 + 12;
                } while (edx9 != 72);
                ++esi6;
                ++edi7;
            } while (esi6 != 3);
            ++ebx4;
        } while (ebx4 != 3);
        ++ecx2;
    } while (ecx2 != 3);
    ebx10 = reinterpret_cast<struct s0*>(1);
    dl11 = 84;
    while (1) {
        esi12 = 0;
        ebp13 = dl11;
        do {
            edi14 = 0;
            do {
                v15 = edi14;
                ++edi14;
                eax3 = fun_80489c3(eax3, ebp13, esi12, v15, ebx10);
            } while (edi14 != 3);
            ++esi12;
        } while (esi12 != 3);
        ebx10 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx10) + 1);
        if (reinterpret_cast<int1_t>(ebx10 == 7)) 
            break;
        dl11 = 84;
        switch (reinterpret_cast<uint32_t>(ebx10) - 2) {
        case 0:
            dl11 = 70;
            break;
        case 1:
            dl11 = 82;
            break;
        case 2:
            dl11 = 76;
            break;
        case 3:
            dl11 = 66;
            break;
        case 4:
            dl11 = 68;
        }
    }
    return eax3;
}

void fun_804886c();

void fun_804884c(int32_t a1);

void fun_804874c(void* a1);

void fun_804885c(void* a1);

void fun_804870c(void* a1);

int32_t g804a134 = 0x80488c2;

void fun_8049444(void* a1, struct s0* a2, struct s4* a3, void* a4) {
    void* v5;
    void* v6;
    void* v7;
    void* v8;
    void* v9;
    void* v10;

    fun_804886c();
    fun_804884c(7);
    v5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a1) + 8);
    fun_804874c(v5);
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivr dword [ebx+0x4]");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fst dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v5);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivr st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fxch st0, st1");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp+0x8]");
    __asm__("fst dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v5);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld st0");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdiv st1, st0");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fstp dword [esp+0x4]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp]");
    fun_804885c(v5);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivr st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fxch st0, st1");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v5);
    v6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a1) + 20);
    fun_804874c(v6);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld st0");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdiv st1, st0");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fxch st0, st2");
    __asm__("fdivrp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v6);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivr st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fstp dword [esp+0x4]");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp]");
    fun_804885c(v6);
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivr dword [ebx+0x4]");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fst dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v6);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivr st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fxch st0, st1");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp+0x8]");
    __asm__("fst dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v6);
    v7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a1) + 32);
    fun_804874c(v7);
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivr dword [ebx+0x4]");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fst dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v7);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivr st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fstp dword [esp+0x4]");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp]");
    fun_804885c(v7);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld st0");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdiv st1, st0");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fxch st0, st2");
    __asm__("fdivrp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp+0x8]");
    __asm__("fst dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v7);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivr st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fxch st0, st1");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v7);
    v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a1) + 44);
    fun_804874c(v8);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivr st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fxch st0, st1");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp+0x8]");
    __asm__("fst dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v8);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld st0");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdiv st1, st0");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fxch st0, st2");
    __asm__("fdivrp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v8);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fst dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v8);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld st0");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdiv st1, st0");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fstp dword [esp+0x4]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp]");
    fun_804885c(v8);
    v9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a1) + 56);
    fun_804874c(v9);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fst dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v9);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld st0");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdiv st1, st0");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fxch st0, st2");
    __asm__("fdivrp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp+0x8]");
    __asm__("fst dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v9);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivr st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fxch st0, st1");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v9);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld st0");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdiv st1, st0");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fstp dword [esp+0x4]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp]");
    fun_804885c(v9);
    v10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a1) + 68);
    fun_804874c(v10);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivr st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fstp dword [esp+0x4]");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp]");
    fun_804885c(v10);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld st0");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdiv st1, st0");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fxch st0, st2");
    __asm__("fdivrp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v10);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdivp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fst dword [esp+0x8]");
    __asm__("fst dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v10);
    __asm__("fld dword [ebx+0x4]");
    __asm__("fld st0");
    __asm__("fchs ");
    __asm__("fld qword [0x8049f38]");
    __asm__("fdiv st1, st0");
    __asm__("fxch st0, st1");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fxch st0, st2");
    __asm__("fdivrp st1, st0");
    __asm__("fstp dword [esp+0x1c]");
    __asm__("fld dword [esp+0x1c]");
    __asm__("fstp dword [esp+0x8]");
    __asm__("fst dword [esp+0x4]");
    __asm__("fstp dword [esp]");
    fun_804885c(v10);
    fun_804870c(v10);
    goto g804a134;
}

int32_t g804a104 = 0x8048802;

void fun_80487fc(void* a1, struct s0* a2, struct s4* a3, void* a4) {
    goto g804a104;
}

int32_t g804a0f8 = 0x80487d2;

void fun_80487cc(int32_t a1, int32_t a2, struct s4* a3, void* a4) {
    goto g804a0f8;
}

int32_t g804a0e4 = 0x8048782;

void fun_804877c(int32_t a1, int32_t a2, struct s4* a3, void* a4) {
    goto g804a0e4;
}

int32_t g804a0fc = 0x80487e2;

void fun_80487dc(int32_t a1, int32_t a2, struct s4* a3, void* a4) {
    goto g804a0fc;
}

int32_t g804a0f4 = 0x80487c2;

void fun_80487bc(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, struct s4* a7, void* a8) {
    goto g804a0f4;
}

int32_t g804a114 = 0x8048842;

void fun_804883c(int32_t a1) {
    goto g804a114;
}

int32_t g804a0d0 = 0x8048732;

void fun_804872c(int32_t a1) {
    goto g804a0d0;
}

int32_t g804a110 = 0x8048832;

void fun_804882c() {
    goto g804a110;
}

int32_t g804a0d4 = 0x8048742;

void fun_804873c(int32_t a1) {
    goto g804a0d4;
}

int32_t g804a138 = 0x80488d2;

void fun_80488cc(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto g804a138;
}

int32_t g804a0dc = 0x8048762;

void fun_804875c(int32_t a1) {
    goto g804a0dc;
}

int32_t g804a0f0 = 0x80487b2;

void fun_80487ac(int32_t a1) {
    goto g804a0f0;
}

int32_t g804a100 = 0x80487f2;

void fun_80487ec(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13) {
    goto g804a100;
}

int32_t g804a0c4 = 0x8048702;

void fun_80486fc(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, struct s4* a8, void* a9) {
    goto g804a0c4;
}

struct s19 {
    struct s0* f0;
    struct s0* f4;
    struct s0* f8;
};

struct s0* fun_8049394(int32_t ecx) {
    int32_t edi2;
    struct s0* eax3;
    struct s0* ebx4;
    int32_t ebp5;
    struct s19* esi6;
    struct s0* eax7;
    struct s0* eax8;
    struct s0* eax9;
    struct s0* eax10;

    edi2 = 0;
    eax3 = fun_804880c(0xa0);
    ebx4 = eax3;
    eax3->f4 = reinterpret_cast<void*>(0);
    eax3->f8 = reinterpret_cast<void*>(0);
    eax3->fc = reinterpret_cast<void*>(0);
    eax3->f10 = 0;
    eax3->f1c = 0;
    eax3->f28 = 0;
    eax3->f14 = 0;
    eax3->f20 = 0;
    eax3->f2c = 0;
    eax3->f18 = 0;
    eax3->f24 = 0;
    eax3->f30 = 0;
    do {
        ebp5 = 0;
        esi6 = reinterpret_cast<struct s19*>(reinterpret_cast<uint32_t>(ebx4) + edi2 * 36 + 52);
        do {
            eax7 = fun_804937f();
            ++ebp5;
            esi6->f0 = eax7;
            eax8 = fun_804937f();
            esi6->f4 = eax8;
            eax9 = fun_804937f();
            esi6->f8 = eax9;
            ++esi6;
        } while (ebp5 != 3);
        ++edi2;
    } while (edi2 != 3);
    eax10 = fun_8048aa8(ebx4);
    return eax10;
}

int32_t g804a0cc = 0x8048722;

void fun_804871c(int32_t ecx, struct s0* a2, struct s0* a3, struct s4* a4, void* a5) {
    goto g804a0cc;
}

int32_t g804a120 = 0x8048872;

void fun_804886c() {
    goto g804a120;
}

int32_t g804a118 = 0x8048852;

void fun_804884c(int32_t a1) {
    goto g804a118;
}

int32_t g804a0d8 = 0x8048752;

void fun_804874c(void* a1) {
    goto g804a0d8;
}

int32_t g804a11c = 0x8048862;

void fun_804885c(void* a1) {
    goto g804a11c;
}

int32_t g804a0c8 = 0x8048712;

void fun_804870c(void* a1) {
    goto g804a0c8;
}

struct s20 {
    signed char[1] pad1;
    void** f1;
};

struct s21 {
    void* f0;
    signed char f1;
};

unsigned char g4000000;

struct s22 {
    signed char f0;
    unsigned char f1;
};

signed char ga0000804;

void* gb8000000;

unsigned char g70000000;

struct s23 {
    signed char[47] pad47;
    int32_t f2f;
};

struct s24 {
    signed char[97] pad97;
    unsigned char f61;
    signed char[13] pad111;
    int32_t f6f;
    signed char[4] pad119;
    int32_t f77;
};

signed char g19000000;

unsigned char gf000000;

unsigned char g14000000;

signed char g1c000000;

struct s25 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s26 {
    signed char[1] pad1;
    signed char f1;
};

struct s27 {
    signed char[1] pad1;
    signed char f1;
};

struct s28 {
    signed char[1] pad1;
    signed char f1;
};

void** g804;

void* g1070804;

void* g3070804;

void* g9070804;

signed char* fun_f0c8ae9();

signed char gb070804;

signed char gc070804;

void fun_8048000(unsigned char* ecx) {
    int1_t less_or_equal2;
    void** esi3;
    struct s20* esi4;
    int32_t eax5;
    int32_t* eax6;
    int32_t* eax7;
    int32_t eax8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    void** eax21;
    signed char al22;
    signed char* eax23;
    struct s21* eax24;
    void* tmp8_25;
    uint1_t cf26;
    int32_t ebx27;
    int32_t ebx28;
    signed char bl29;
    int32_t ebx30;
    signed char bl31;
    signed char dh32;
    void* al33;
    unsigned char tmp8_34;
    unsigned char* ebx35;
    signed char* ebx36;
    signed char dh37;
    signed char dh38;
    signed char* ebx39;
    signed char* ebx40;
    signed char dl41;
    struct s22* eax42;
    unsigned char* eax43;
    unsigned char* tmp32_44;
    unsigned char* eax45;
    signed char al46;
    unsigned char tmp8_47;
    uint1_t cf48;
    unsigned char* edx49;
    signed char* edx50;
    void** eax51;
    void* tmp8_52;
    void* tmp8_53;
    unsigned char tmp8_54;
    void* tmp8_55;
    void* tmp8_56;
    void* tmp8_57;
    void* tmp8_58;
    void* tmp8_59;
    void* tmp8_60;
    void* tmp8_61;
    void* tmp8_62;
    void* tmp8_63;
    void* tmp8_64;
    void* tmp8_65;
    void* tmp8_66;
    unsigned char tmp8_67;
    void* tmp8_68;
    void* esp69;
    struct s23* edx70;
    struct s24* ebp71;
    signed char dl72;
    unsigned char* edx73;
    signed char* edx74;
    signed char dl75;
    void* dl76;
    void* bl77;
    signed char* ebx78;
    signed char* ebx79;
    signed char dl80;
    signed char* edx81;
    signed char* edx82;
    signed char dl83;
    signed char* ebx84;
    signed char* ebx85;
    signed char bl86;
    signed char* edx87;
    signed char* edx88;
    signed char bl89;
    signed char* edi90;
    signed char* edi91;
    signed char bl92;
    signed char tmp8_93;
    signed char bl94;
    unsigned char* edx95;
    signed char* edx96;
    void** eax97;
    int16_t* esp98;
    int16_t es99;
    void* dl100;
    unsigned char tmp8_101;
    unsigned char tmp8_102;
    signed char* edi103;
    signed char* edi104;
    signed char dl105;
    void* bl106;
    signed char tmp8_107;
    signed char dl108;
    unsigned char* edi109;
    signed char* edi110;
    unsigned char* ebx111;
    signed char* ebx112;
    void** ecx113;
    signed char* edx114;
    signed char* edx115;
    signed char dl116;
    signed char* edx117;
    signed char* edx118;
    signed char dl119;
    struct s25* ebx120;
    struct s26* ebx121;
    void** tmp8_122;
    uint1_t cf123;
    void** tmp8_124;
    uint1_t cf125;
    signed char* edx126;
    signed char* edx127;
    signed char dl128;
    void** ebx129;
    signed char bl130;
    signed char dl131;
    signed char* edx132;
    signed char* edx133;
    signed char dl134;
    void** tmp8_135;
    uint1_t cf136;
    signed char* edx137;
    signed char* edx138;
    signed char dl139;
    signed char* edi140;
    signed char* edi141;
    signed char* edx142;
    signed char* edx143;
    signed char dl144;
    void* dl145;
    signed char* edx146;
    signed char* edx147;
    signed char dl148;
    signed char* edx149;
    signed char* edx150;
    signed char dl151;
    void** tmp8_152;
    uint1_t cf153;
    void** tmp8_154;
    uint1_t cf155;
    void** tmp8_156;
    uint1_t cf157;
    void** tmp8_158;
    uint1_t cf159;
    void** tmp8_160;
    uint1_t cf161;
    void** edx162;
    void** eax163;
    void** edx164;
    signed char bh165;
    struct s27* edi166;
    struct s28* edi167;
    signed char bh168;
    void* tmp8_169;
    uint1_t cf170;
    void* tmp8_171;
    uint1_t cf172;
    void* tmp8_173;
    uint1_t cf174;
    void* tmp8_175;
    uint1_t cf176;
    void* tmp8_177;
    uint1_t cf178;
    void* tmp8_179;
    uint1_t cf180;
    void* tmp8_181;
    uint1_t cf182;
    void* tmp8_183;
    uint1_t cf184;
    void** eax185;
    void** tmp8_186;
    uint1_t cf187;
    void** tmp8_188;
    uint1_t cf189;
    void** tmp8_190;
    uint1_t cf191;
    void** tmp8_192;
    uint1_t cf193;
    void** tmp8_194;
    uint1_t cf195;
    void** tmp8_196;
    uint1_t cf197;
    void** esp198;
    uint1_t cf199;
    uint1_t zf200;
    int1_t of201;
    void** esp202;
    void*** esp203;
    void** edi204;
    void** edi205;
    void*** esp206;
    signed char* eax207;
    int1_t zf208;
    unsigned char tmp8_209;
    int1_t sf210;
    uint1_t below_or_equal211;
    void** esp212;
    void** esp213;
    void** esp214;
    void*** esp215;
    void** esp216;
    unsigned char tmp8_217;
    int1_t zf218;
    void** esp219;
    void* esp220;
    void*** esp221;
    void*** esp222;
    void* esp223;
    unsigned char tmp8_224;
    void*** esp225;
    unsigned char tmp8_226;
    unsigned char tmp8_227;
    void** esp228;
    void*** esp229;
    unsigned char tmp8_230;
    unsigned char tmp8_231;
    unsigned char tmp8_232;
    int1_t cf233;

    if (less_or_equal2) {
        esi3 = reinterpret_cast<void**>(&esi4->f1);
        *ecx = reinterpret_cast<unsigned char>(*ecx + eax5);
        *eax6 = *eax7 + eax8;
        *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(al22 + *eax23);
        eax24 = reinterpret_cast<struct s21*>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<int32_t>(*eax21));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<int32_t>(eax24));
        tmp8_25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        cf26 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_25) < reinterpret_cast<unsigned char>(eax24->f0));
        eax24->f0 = tmp8_25;
        *reinterpret_cast<unsigned char*>(ebx27 + 0x340804) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(ebx28 + 0x340804) - reinterpret_cast<unsigned char>(bl29 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebx30 + 0x340804) < reinterpret_cast<unsigned char>(bl31 + cf26))));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24))));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void***>(esi3) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) + dh32);
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        al33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) ^ 0x80) + 8) ^ 0x80) + 8);
        __asm__("rol byte [eax], 0x0");
    }
    *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(al33) + reinterpret_cast<unsigned char>(al33));
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    tmp8_34 = reinterpret_cast<unsigned char>(g4000000 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    g4000000 = tmp8_34;
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    *ebx35 = reinterpret_cast<unsigned char>(*ebx36 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax24) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax24) + 1) + dh37);
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax24) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax24) + 1) + dh38);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) - 12);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) + 19);
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    *ebx39 = reinterpret_cast<signed char>(*ebx40 + dl41);
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<int32_t>(eax24));
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<int32_t>(eax24));
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    *reinterpret_cast<unsigned char*>(&(eax24 - 0x3ffffbfe)->f0) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&(eax24 - 0x3ffffbfe)->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
    eax42 = reinterpret_cast<struct s22*>(&eax24->f1);
    eax42->f0 = reinterpret_cast<signed char>(eax42->f0 + *reinterpret_cast<signed char*>(&eax42));
    eax43 = &eax42->f1;
    *eax43 = reinterpret_cast<unsigned char>(*eax43 + *reinterpret_cast<signed char*>(&eax43));
    tmp32_44 = eax43;
    eax45 = tmp32_44;
    *eax45 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax45 + *reinterpret_cast<unsigned char*>(&eax45)) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_44) < reinterpret_cast<uint32_t>(eax43)));
    *ecx = reinterpret_cast<unsigned char>(*ecx + *reinterpret_cast<unsigned char*>(&eax45));
    *eax45 = reinterpret_cast<unsigned char>(*eax45 + *reinterpret_cast<unsigned char*>(&eax45));
    *eax45 = reinterpret_cast<unsigned char>(*eax45 + *reinterpret_cast<unsigned char*>(&eax45));
    *eax45 = reinterpret_cast<unsigned char>(*eax45 & *reinterpret_cast<unsigned char*>(&eax45));
    *eax45 = reinterpret_cast<unsigned char>(*eax45 + *reinterpret_cast<unsigned char*>(&eax45));
    al46 = ga0000804;
    *reinterpret_cast<unsigned char*>(&eax45) = reinterpret_cast<unsigned char>(al46 + 8);
    *eax45 = reinterpret_cast<unsigned char>(*eax45 + *reinterpret_cast<unsigned char*>(&eax45));
    *eax45 = reinterpret_cast<unsigned char>(*eax45 + *reinterpret_cast<unsigned char*>(&eax45));
    *eax45 = reinterpret_cast<unsigned char>(*eax45 + *reinterpret_cast<unsigned char*>(&eax45));
    tmp8_47 = reinterpret_cast<unsigned char>(*eax45 + *reinterpret_cast<unsigned char*>(&eax45));
    cf48 = reinterpret_cast<uint1_t>(tmp8_47 < *eax45);
    *eax45 = tmp8_47;
    *eax45 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax45 + *reinterpret_cast<unsigned char*>(&eax45)) + cf48);
    *edx49 = reinterpret_cast<unsigned char>(*edx50 + *reinterpret_cast<unsigned char*>(&eax45));
    *eax45 = reinterpret_cast<unsigned char>(*eax45 + *reinterpret_cast<unsigned char*>(&eax45));
    *eax45 = reinterpret_cast<unsigned char>(*eax45 + *reinterpret_cast<unsigned char*>(&eax45));
    *eax45 = reinterpret_cast<unsigned char>(*eax45 & *reinterpret_cast<unsigned char*>(&eax45));
    *eax45 = reinterpret_cast<unsigned char>(*eax45 + *reinterpret_cast<unsigned char*>(&eax45));
    eax51 = reinterpret_cast<void**>(0xb8000000);
    tmp8_52 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_52;
    *reinterpret_cast<void***>(esi3) = *reinterpret_cast<void***>(esi3);
    tmp8_53 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_53;
    tmp8_54 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(g70000000));
    g70000000 = tmp8_54;
    tmp8_55 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_55;
    __asm__("in eax, 0x74");
    tmp8_56 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_56;
    tmp8_57 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_57;
    tmp8_58 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_58;
    tmp8_59 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_59;
    tmp8_60 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_60;
    tmp8_61 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_61;
    tmp8_62 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_62;
    tmp8_63 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_63;
    tmp8_64 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_64;
    tmp8_65 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_65;
    tmp8_66 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_66;
    tmp8_67 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(g70000000));
    g70000000 = tmp8_67;
    tmp8_68 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    gb8000000 = tmp8_68;
    __asm__("das ");
    __asm__("insb ");
    esp69 = reinterpret_cast<void*>(edx70->f2f * 0x6c2d646c);
    ebp71 = reinterpret_cast<struct s24*>(*reinterpret_cast<int32_t*>(esi3 + 0x75) * 0x6f732e78);
    *reinterpret_cast<void**>(&eax51) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(gb8000000)));
    *ecx = reinterpret_cast<unsigned char>(*ecx + dl72);
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *edx73 = reinterpret_cast<unsigned char>(*edx74 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax51) + 1)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *ecx = reinterpret_cast<unsigned char>(*ecx + dl75);
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *ecx = reinterpret_cast<unsigned char>(*ecx + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax51) + 1)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *ecx = reinterpret_cast<unsigned char>(*ecx + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *reinterpret_cast<void***>(esi3) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3)) + reinterpret_cast<unsigned char>(dl76));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *reinterpret_cast<void***>(esi3) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *reinterpret_cast<void***>(esi3) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3)) + reinterpret_cast<unsigned char>(bl77));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax51) + 1)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *ebx78 = reinterpret_cast<signed char>(*ebx79 + dl80);
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *edx81 = reinterpret_cast<signed char>(*edx82 + dl83);
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *ebx84 = reinterpret_cast<signed char>(*ebx85 + bl86);
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *edx87 = reinterpret_cast<signed char>(*edx88 + bl89);
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *edi90 = reinterpret_cast<signed char>(*edi91 + bl92);
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    tmp8_93 = reinterpret_cast<signed char>(g19000000 + bl94);
    g19000000 = tmp8_93;
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *edx95 = reinterpret_cast<unsigned char>(*edx96 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax51) + reinterpret_cast<int32_t>(eax51)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax51) + reinterpret_cast<int32_t>(eax51)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    *eax51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax51) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax51)));
    eax97 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax51) + reinterpret_cast<unsigned char>(*eax51));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void**>(&eax97) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    esp98 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp69) - 2);
    *esp98 = es99;
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(dl100));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    tmp8_101 = reinterpret_cast<unsigned char>(gf000000 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    gf000000 = tmp8_101;
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *ecx = reinterpret_cast<unsigned char>(*ecx + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    tmp8_102 = reinterpret_cast<unsigned char>(g14000000 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    g14000000 = tmp8_102;
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *edi103 = reinterpret_cast<signed char>(*edi104 + dl105);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(bl106));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    tmp8_107 = reinterpret_cast<signed char>(g1c000000 + dl108);
    g1c000000 = tmp8_107;
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *edi109 = reinterpret_cast<unsigned char>(*edi110 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *ebx111 = reinterpret_cast<unsigned char>(*ebx112 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax97) + reinterpret_cast<unsigned char>(eax97)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax97) + reinterpret_cast<unsigned char>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    ecx113 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *edx114 = reinterpret_cast<signed char>(*edx115 + dl116);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void**>(&ecx113) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx113 + 1))));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *edx117 = reinterpret_cast<signed char>(*edx118 + dl119);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    ebx120->f1 = reinterpret_cast<unsigned char>(ebx121->f1 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx113 + 1)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    tmp8_122 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    cf123 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_122) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)));
    *reinterpret_cast<void***>(eax97) = tmp8_122;
    *reinterpret_cast<void**>(&eax97) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97))) + cf123);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = eax97;
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    tmp8_124 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    cf125 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_124) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)));
    *reinterpret_cast<void***>(eax97) = tmp8_124;
    *reinterpret_cast<void**>(&eax97) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97))) + cf125);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    __asm__("out dx, eax");
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *edx126 = reinterpret_cast<signed char>(*edx127 + dl128);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<signed char*>(&ebx129) = reinterpret_cast<signed char>(bl130 + dl131);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *edx132 = reinterpret_cast<signed char>(*edx133 + dl134);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax97) + reinterpret_cast<unsigned char>(eax97)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax97) + reinterpret_cast<unsigned char>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx113 + 1)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    tmp8_135 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    cf136 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_135) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)));
    *reinterpret_cast<void***>(eax97) = tmp8_135;
    *reinterpret_cast<void**>(&eax97) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97))) + cf136);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *edx137 = reinterpret_cast<signed char>(*edx138 + dl139);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *edi140 = reinterpret_cast<signed char>(*edi141 + *reinterpret_cast<signed char*>(&ebx129));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *edx142 = reinterpret_cast<signed char>(*edx143 + dl144);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(ecx113) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx113)) + reinterpret_cast<unsigned char>(dl145));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *edx146 = reinterpret_cast<signed char>(*edx147 + dl148);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *edx149 = reinterpret_cast<signed char>(*edx150 + dl151);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    tmp8_152 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    cf153 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_152) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)));
    *reinterpret_cast<void***>(eax97) = tmp8_152;
    *reinterpret_cast<void**>(&eax97) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97))) + cf153);
    tmp8_154 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    cf155 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_154) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)));
    *reinterpret_cast<void***>(eax97) = tmp8_154;
    *reinterpret_cast<void**>(&eax97) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx113)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx113)) + cf155))));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    tmp8_156 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    cf157 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_156) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)));
    *reinterpret_cast<void***>(eax97) = tmp8_156;
    *reinterpret_cast<void**>(&eax97) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97))) + cf157);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void**>(&eax97) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)) ^ 1);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    tmp8_158 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    cf159 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_158) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)));
    *reinterpret_cast<void***>(eax97) = tmp8_158;
    *reinterpret_cast<void**>(&eax97) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97))) + cf159);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    tmp8_160 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    cf161 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_160) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)));
    *reinterpret_cast<void***>(eax97) = tmp8_160;
    *reinterpret_cast<void**>(&eax97) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97))) + cf161);
    *reinterpret_cast<void***>(eax97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax97)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax97)));
    edx162 = eax97;
    eax163 = edx164;
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *reinterpret_cast<void***>(edx162) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx162)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx162)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *reinterpret_cast<unsigned char*>(&edx162 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx162 + 1) + bh165);
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *reinterpret_cast<void***>(edx162) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx162)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx162)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *reinterpret_cast<unsigned char*>(&edx162 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx162 + 1) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *reinterpret_cast<void***>(edx162) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx162)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx162)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    edi166->f1 = reinterpret_cast<signed char>(edi167->f1 + bh168);
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *reinterpret_cast<void**>(&eax163) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)) + 8);
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    tmp8_169 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    cf170 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_169) < reinterpret_cast<unsigned char>(*eax163));
    *eax163 = tmp8_169;
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163))) + cf170);
    __asm__("int1 ");
    *reinterpret_cast<void***>(esp98 - 2) = *reinterpret_cast<void***>(ecx113 + 1);
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    tmp8_171 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    cf172 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_171) < reinterpret_cast<unsigned char>(*eax163));
    *eax163 = tmp8_171;
    *reinterpret_cast<void**>(&eax163) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)) + reinterpret_cast<unsigned char>(*eax163)) + cf172);
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *reinterpret_cast<void***>(ecx113) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx113)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    tmp8_173 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    cf174 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_173) < reinterpret_cast<unsigned char>(*eax163));
    *eax163 = tmp8_173;
    *reinterpret_cast<void**>(&eax163) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)) + reinterpret_cast<unsigned char>(*eax163)) + cf174);
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    tmp8_175 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    cf176 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_175) < reinterpret_cast<unsigned char>(*eax163));
    *eax163 = tmp8_175;
    *reinterpret_cast<void**>(&eax163) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)) + reinterpret_cast<unsigned char>(*eax163)) + cf176);
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    tmp8_177 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    cf178 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_177) < reinterpret_cast<unsigned char>(*eax163));
    *eax163 = tmp8_177;
    *reinterpret_cast<void**>(&eax163) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)) + reinterpret_cast<unsigned char>(*eax163)) + cf178);
    tmp8_179 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    cf180 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_179) < reinterpret_cast<unsigned char>(*eax163));
    *eax163 = tmp8_179;
    *reinterpret_cast<void**>(&eax163) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx113))) + cf180);
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    tmp8_181 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    cf182 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_181) < reinterpret_cast<unsigned char>(*eax163));
    *eax163 = tmp8_181;
    *reinterpret_cast<void**>(&eax163) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)) + reinterpret_cast<unsigned char>(*eax163)) + cf182);
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    __asm__("fiadd word [eax]");
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    tmp8_183 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    cf184 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_183) < reinterpret_cast<unsigned char>(*eax163));
    *eax163 = tmp8_183;
    *reinterpret_cast<void**>(&eax163) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)) + reinterpret_cast<unsigned char>(*eax163)) + cf184);
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    __asm__("lahf ");
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *reinterpret_cast<void***>(edx162) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx162)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx162)));
    *eax163 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax163) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax163)));
    *reinterpret_cast<unsigned char*>(ebx129 + 0x3c000001) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx129 + 0x3c000001) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx113)));
    eax185 = g804;
    tmp8_186 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    cf187 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_186) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)));
    *reinterpret_cast<void***>(eax185) = tmp8_186;
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185))) + cf187);
    __asm__("int1 ");
    *reinterpret_cast<void***>(ecx113 + 1) = *reinterpret_cast<void***>(ecx113 + 1) + 1;
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    tmp8_188 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    cf189 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_188) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)));
    *reinterpret_cast<void***>(eax185) = tmp8_188;
    *reinterpret_cast<void**>(&eax185) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185))) + cf189);
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(edx162) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx162)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx162)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(ecx113) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx113)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx113)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    tmp8_190 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    cf191 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_190) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)));
    *reinterpret_cast<void***>(eax185) = tmp8_190;
    *reinterpret_cast<void**>(&eax185) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185))) + cf191);
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    __asm__("insb ");
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(eax185));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(edx162) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx162)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx162)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(ecx113 + 1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx113 + 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx113)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    tmp8_192 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    cf193 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_192) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)));
    *reinterpret_cast<void***>(eax185) = tmp8_192;
    *reinterpret_cast<void**>(&eax185) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185))) + cf193);
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(ecx113) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx113)) - reinterpret_cast<unsigned char>(eax185));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    tmp8_194 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    cf195 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_194) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)));
    *reinterpret_cast<void***>(eax185) = tmp8_194;
    *reinterpret_cast<void**>(&eax185) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185))) + cf195);
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax185)) >= reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    }
    *reinterpret_cast<void**>(&eax185) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)) + 8);
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    tmp8_196 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
    cf197 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_196) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)));
    *reinterpret_cast<void***>(eax185) = tmp8_196;
    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185))) + cf197);
    __asm__("int1 ");
    *reinterpret_cast<void***>(eax185) = *reinterpret_cast<void***>(eax185) + 1;
    __asm__("insb ");
    esp198 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(edx162 + 83) * 0x312d4c44);
    *reinterpret_cast<void**>(&ecx113 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx113 + 1)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3)));
    cf199 = 0;
    if (1) {
        addr_8048479_8:
        ++ebx129;
        zf200 = reinterpret_cast<uint1_t>(ebx129 == 0);
        of201 = __intrinsic();
        __asm__("insb ");
        __asm__("popad ");
        goto addr_804847d_9;
    } else {
        *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
        cf199 = 0;
        esp202 = esp198 - 4;
        *reinterpret_cast<void***>(esp202) = ebx129;
        esp203 = reinterpret_cast<void***>(esp202 + 1 - 1);
        edi204 = *esp203;
        esp198 = reinterpret_cast<void**>(esp203 + 4 - 4);
        *reinterpret_cast<void***>(esp198) = eax185;
        __asm__("outsd ");
        __asm__("insb ");
        __asm__("insb ");
        ebp71 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(ebp71) + 1);
        zf200 = reinterpret_cast<uint1_t>(ebp71 == 0);
        of201 = __intrinsic();
        if (zf200) {
            addr_804847d_9:
            if (cf199) {
                addr_80484c4_11:
                esp198 = esp198 - 4;
                *reinterpret_cast<void***>(esp198) = esp198;
                if (cf199) {
                    addr_8048528_12:
                    esp198 = reinterpret_cast<void**>(ebp71->f77 * 0x74726f70);
                    goto addr_8048529_13;
                } else {
                    __asm__("outsb ");
                    if (!cf199) {
                        addr_8048536_15:
                        if (cf199) {
                            addr_804857b_16:
                            edi205 = *reinterpret_cast<void***>(esp198);
                            esp198 = esp198 + 4;
                            if (!cf199) {
                                while (1) {
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    addr_80485fa_18:
                                    *reinterpret_cast<unsigned char*>(&eax185 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax185 + 1) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    *reinterpret_cast<void**>(&eax185) = g1070804;
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    __asm__("enter 0x4a0, 0x8");
                                    *reinterpret_cast<unsigned char*>(&eax185 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax185 + 1) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx113)));
                                    *reinterpret_cast<void**>(&eax185) = g3070804;
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    *reinterpret_cast<signed char*>(eax185 + 0x4070804) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax185 + 0x4070804) << 1);
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    __asm__("aam 0xa0");
                                    *reinterpret_cast<void**>(&eax185) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)) + 8);
                                    esp206 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp198 + 2) + 2);
                                    eax185 = eax185 + 0xa0d80000;
                                    *reinterpret_cast<void**>(&eax185) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)) + 8);
                                    esp198 = reinterpret_cast<void**>(esp206 + 2 - 2);
                                    *reinterpret_cast<void***>(esp198) = *esp206;
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    __asm__("fsub qword [eax+0x7070804]");
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    --ecx113;
                                    if (!(reinterpret_cast<uint1_t>(!!ecx113) & reinterpret_cast<uint1_t>(!!*reinterpret_cast<void***>(eax185)))) 
                                        break;
                                    addr_80485d6_19:
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    addr_80485db_20:
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(eax185));
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(eax185));
                                    __asm__("popad ");
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(eax185));
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx162)));
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx162)));
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(eax185));
                                }
                                *reinterpret_cast<void**>(&eax185) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)) + 8);
                                *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                *reinterpret_cast<unsigned char*>(&eax185 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax185 + 1) + *reinterpret_cast<unsigned char*>(&eax185 + 1));
                                *reinterpret_cast<void**>(&eax185) = g9070804;
                                *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp198 + 2) - 4) = reinterpret_cast<int32_t>("\n");
                                eax207 = fun_f0c8ae9();
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax207) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax207) + 1) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx113 + 1)));
                                *reinterpret_cast<signed char*>(&eax207) = gb070804;
                                *eax207 = reinterpret_cast<signed char>(*eax207 + *reinterpret_cast<signed char*>(&eax207));
                                *reinterpret_cast<signed char*>(&eax207) = gc070804;
                                *eax207 = reinterpret_cast<signed char>(*eax207 + *reinterpret_cast<signed char*>(&eax207));
                                __asm__("hlt ");
                            } else {
                                __asm__("popad ");
                                if (cf199) 
                                    goto addr_80485fa_18;
                                *reinterpret_cast<signed char*>(edi205 + 0x65) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi205 + 0x65) + *reinterpret_cast<signed char*>(&ebx129));
                                __asm__("outsb ");
                                *reinterpret_cast<unsigned char*>(edi205 + 76) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi205 + 76) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                goto addr_804858b_24;
                            }
                        } else {
                            __asm__("outsd ");
                            __asm__("insb ");
                            __asm__("outsd ");
                            __asm__("a16 insb ");
                            ++esi3;
                            zf208 = esi3 == 0;
                            __asm__("insb ");
                            if (!zf208) {
                                addr_80485b6_27:
                                *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                goto addr_80485c0_28;
                            } else {
                                esp198 = esp198 - 4;
                                *reinterpret_cast<void***>(esp198) = reinterpret_cast<void**>(0x506c6700);
                                __asm__("outsd ");
                                if (__intrinsic()) {
                                    addr_8048598_30:
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                    goto addr_804859d_31;
                                } else {
                                    __asm__("popad ");
                                    if (zf208) {
                                        addr_80485c0_28:
                                        *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                        *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                        *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                        *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                        *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                                        goto addr_80485c9_33;
                                    } else {
                                        goto addr_8048554_35;
                                    }
                                }
                            }
                        }
                    } else {
                        __asm__("popad ");
                        if (zf200) {
                            addr_8048532_37:
                            ++ebx129;
                            __asm__("insb ");
                            __asm__("popad ");
                            goto addr_8048536_15;
                        } else {
                            tmp8_209 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi204 + 0x6c) + *reinterpret_cast<unsigned char*>(&eax185 + 1));
                            cf199 = reinterpret_cast<uint1_t>(tmp8_209 < *reinterpret_cast<unsigned char*>(edi204 + 0x6c));
                            *reinterpret_cast<unsigned char*>(edi204 + 0x6c) = tmp8_209;
                            ++ebx129;
                            zf200 = reinterpret_cast<uint1_t>(ebx129 == 0);
                            sf210 = reinterpret_cast<signed char>(ebx129) < reinterpret_cast<signed char>(0);
                            below_or_equal211 = reinterpret_cast<uint1_t>(cf199 | zf200);
                            __asm__("outsd ");
                            goto addr_80484d3_39;
                        }
                    }
                }
            } else {
                if (of201) {
                    addr_80484f7_41:
                } else {
                    esp212 = esp198 - 4;
                    *reinterpret_cast<void***>(esp212) = reinterpret_cast<void**>(0x456c6700);
                    __asm__("outsb ");
                    __asm__("popad ");
                    __asm__("a16 insb ");
                    esp213 = esp212 - 4;
                    *reinterpret_cast<void***>(esp213) = ebx129;
                    esp198 = esp213 - 4;
                    *reinterpret_cast<void***>(esp198) = reinterpret_cast<void**>(0x4d656461);
                    goto addr_8048492_43;
                }
            }
        } else {
            __asm__("outsb ");
            esp214 = esp198 - 4;
            *reinterpret_cast<void***>(esp214) = ebx129;
            esp215 = reinterpret_cast<void***>(esp214 + 1 - 1);
            edi204 = *esp215;
            esp216 = reinterpret_cast<void**>(esp215 + 4 - 4);
            *reinterpret_cast<void***>(esp216) = ebx129;
            esp198 = esp216 - 4;
            *reinterpret_cast<void***>(esp198) = reinterpret_cast<void**>(0x7543776f);
            if (0) {
                addr_804849a_46:
                *reinterpret_cast<unsigned char*>(edi204 + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi204 + 0x6c) + *reinterpret_cast<unsigned char*>(&eax185 + 1));
                zf200 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(edi204 + 0x6c) == 0);
                goto addr_804849c_47;
            } else {
                __asm__("outsd ");
                if (0) 
                    goto addr_804842a_49; else 
                    goto addr_804842a_49;
            }
        }
    }
    __asm__("a16 insb ");
    ++esi3;
    zf200 = reinterpret_cast<uint1_t>(esi3 == 0);
    if (cf199) {
        addr_8048574_51:
        edi204 = *reinterpret_cast<void***>(esp198);
        esp198 = esp198 + 4;
        goto addr_8048575_52;
    } else {
        if (!cf199) {
            addr_8048575_52:
            __asm__("popad ");
            if (zf200) 
                goto addr_80485db_20;
        } else {
            if (!zf200) {
                addr_8048570_55:
                __asm__("insb ");
                goto addr_8048571_56;
            } else {
                *reinterpret_cast<unsigned char*>(edi204 + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi204 + 0x6c) + *reinterpret_cast<unsigned char*>(&eax185 + 1));
                zf200 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(edi204 + 0x6c) == 0);
                esp198 = esp198 - 4;
                *reinterpret_cast<void***>(esp198) = edx162;
                __asm__("outsd ");
                if (zf200) {
                    addr_804856b_58:
                    ebp71->f61 = reinterpret_cast<unsigned char>(ebp71->f61 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx113 + 1)));
                    zf200 = reinterpret_cast<uint1_t>(ebp71->f61 == 0);
                    __asm__("insb ");
                    goto addr_8048570_55;
                } else {
                    addr_804850a_59:
                    if (zf200) {
                        addr_8048571_56:
                        __asm__("outsd ");
                        __asm__("arpl [eax], ax");
                        goto addr_8048574_51;
                    } else {
                        *reinterpret_cast<unsigned char*>(edi204 + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi204 + 0x6c) + *reinterpret_cast<unsigned char*>(&eax185 + 1));
                        ++edx162;
                        ebp71 = reinterpret_cast<struct s24*>(**reinterpret_cast<int32_t**>(&ebp71) * 0x6f4c6c67);
                        goto addr_8048513_61;
                    }
                }
            }
        }
    }
    tmp8_217 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi204 + 95) + *reinterpret_cast<signed char*>(&ebx129));
    cf199 = reinterpret_cast<uint1_t>(tmp8_217 < *reinterpret_cast<unsigned char*>(edi204 + 95));
    *reinterpret_cast<unsigned char*>(edi204 + 95) = tmp8_217;
    goto addr_804857b_16;
    addr_804849c_47:
    esp198 = esp198 - 4;
    *reinterpret_cast<void***>(esp198) = eax185;
    if (!zf200) {
        addr_8048513_61:
        goto addr_8048516_63;
    } else {
        esp198 = esp198 - 4;
        *reinterpret_cast<void***>(esp198) = reinterpret_cast<void**>(0x7274614d);
        edi204 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) * 0x614d6c67);
        zf218 = __undefined();
        if (zf218) {
            addr_8048520_65:
            if (zf218) {
                addr_804858b_24:
                --ecx113;
                ++edx162;
                esp198 = esp198 + 4;
                *reinterpret_cast<void**>(&ecx113 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx113 + 1)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3)));
                *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                goto addr_8048598_30;
            } else {
                if (zf218) {
                    addr_804859d_31:
                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                    *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                    goto addr_80485b6_27;
                } else {
                    *reinterpret_cast<unsigned char*>(edi204 + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi204 + 0x6c) + *reinterpret_cast<unsigned char*>(&eax185 + 1));
                    goto addr_8048525_68;
                }
            }
        } else {
            edi204 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(eax185 + 77) * 0x65646f);
            cf199 = __intrinsic();
            zf200 = __undefined();
            goto addr_80484b5_70;
        }
    }
    addr_804842a_49:
    esp219 = esp198 - 4;
    *reinterpret_cast<void***>(esp219) = ebx129;
    esp220 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp219 + 1 - 1) + 4 + 1);
    __asm__("insb ");
    __asm__("popad ");
    esp221 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp220) - 4);
    *esp221 = ebx129;
    esp222 = esp221 + 1 - 1;
    edi204 = *esp222;
    esp198 = reinterpret_cast<void**>(esp222 + 4 - 4);
    *reinterpret_cast<void***>(esp198) = ebx129;
    if (!esp222) {
        addr_8048492_43:
        __asm__("outsd ");
        __asm__("insb ");
        goto addr_804849a_46;
    } else {
        esp223 = reinterpret_cast<void*>(ebp71->f6f * 0x65646f4d);
        tmp8_224 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx129 + 68) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx162)));
        cf199 = reinterpret_cast<uint1_t>(tmp8_224 < *reinterpret_cast<unsigned char*>(ebx129 + 68));
        *reinterpret_cast<unsigned char*>(ebx129 + 68) = tmp8_224;
        esp225 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp223) - 1);
        zf200 = reinterpret_cast<uint1_t>(esp225 == 0);
        edi204 = *esp225;
        esp198 = reinterpret_cast<void**>(esp225 + 4 - 4);
        *reinterpret_cast<void***>(esp198) = ecx113;
        if (!zf200) {
            addr_80484b5_70:
            __asm__("a16 insb ");
            esp198 = esp198 - 4;
            *reinterpret_cast<void***>(esp198) = esp198;
            if (cf199) {
                addr_804851b_73:
                --ecx113;
                zf218 = ecx113 == 0;
                __asm__("outsb ");
                goto addr_8048520_65;
            } else {
                addr_80484ba_74:
                __asm__("outsb ");
                if (!cf199) {
                    addr_8048529_13:
                    tmp8_226 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi204 + 0x6c) + *reinterpret_cast<unsigned char*>(&eax185 + 1));
                    cf199 = reinterpret_cast<uint1_t>(tmp8_226 < *reinterpret_cast<unsigned char*>(edi204 + 0x6c));
                    *reinterpret_cast<unsigned char*>(edi204 + 0x6c) = tmp8_226;
                    goto addr_8048532_37;
                } else {
                    __asm__("popad ");
                    if (zf200) {
                        addr_8048525_68:
                        *reinterpret_cast<void***>(esp198 - 4) = esi3;
                        goto addr_8048528_12;
                    } else {
                        tmp8_227 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi204 + 0x6c) + *reinterpret_cast<unsigned char*>(&eax185 + 1));
                        cf199 = reinterpret_cast<uint1_t>(tmp8_227 < *reinterpret_cast<unsigned char*>(edi204 + 0x6c));
                        *reinterpret_cast<unsigned char*>(edi204 + 0x6c) = tmp8_227;
                        zf200 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(edi204 + 0x6c) == 0);
                        goto addr_80484c2_77;
                    }
                }
            }
        } else {
            esp228 = esp198 - 4;
            *reinterpret_cast<void***>(esp228) = ebx129;
            esp229 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp228 + 1 - 1) + 4 - 1);
            zf200 = reinterpret_cast<uint1_t>(esp229 == 0);
            sf210 = reinterpret_cast<int32_t>(esp229) < reinterpret_cast<int32_t>(0);
            below_or_equal211 = reinterpret_cast<uint1_t>(cf199 | zf200);
            edi204 = *esp229;
            esp198 = reinterpret_cast<void**>(esp229 + 4 - 4);
            *reinterpret_cast<void***>(esp198) = ebx129;
            if (!below_or_equal211) {
                goto addr_80484ba_74;
            }
            if (__intrinsic()) 
                goto addr_804849c_47;
        }
    }
    if (!zf200) {
        addr_80484c2_77:
        goto addr_80484c4_11;
    } else {
        if (cf199) {
            addr_80484d3_39:
            __asm__("insb ");
            __asm__("outsd ");
            if (cf199) 
                goto addr_804850a_59;
        } else {
            tmp8_230 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx113 + reinterpret_cast<int32_t>(ebp71) * 2) + 98) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx113 + 1)));
            cf199 = reinterpret_cast<uint1_t>(tmp8_230 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx113 + reinterpret_cast<int32_t>(ebp71) * 2) + 98));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx113 + reinterpret_cast<int32_t>(ebp71) * 2) + 98) = tmp8_230;
            ++edi204;
            --esp198;
            sf210 = reinterpret_cast<signed char>(esp198) < reinterpret_cast<signed char>(0);
            if (!cf199) {
                goto addr_80484da_86;
            } else {
                *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) ^ reinterpret_cast<unsigned char>(eax185));
                __asm__("a16 insb ");
                ++esp198;
                if (__intrinsic()) {
                    addr_80484e6_88:
                    __asm__("outsb ");
                    *reinterpret_cast<unsigned char*>(edi204 + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi204 + 0x6c) + *reinterpret_cast<unsigned char*>(&eax185 + 1));
                    --eax185;
                    ebp71 = reinterpret_cast<struct s24*>(*reinterpret_cast<int32_t*>(esi3 + 0x74) * 0x436c6700);
                    cf199 = __intrinsic();
                    __asm__("insb ");
                    __asm__("popad ");
                    goto addr_80484f7_41;
                } else {
                    esp198 = esp198 - 4;
                    *reinterpret_cast<void***>(esp198) = reinterpret_cast<void**>(0x636e7546);
                    tmp8_231 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi204 + 0x6c) + *reinterpret_cast<unsigned char*>(&eax185 + 1));
                    cf199 = reinterpret_cast<uint1_t>(tmp8_231 < *reinterpret_cast<unsigned char*>(edi204 + 0x6c));
                    *reinterpret_cast<unsigned char*>(edi204 + 0x6c) = tmp8_231;
                    goto addr_8048479_8;
                }
            }
        }
    }
    addr_80484da_86:
    __asm__("a16 insb ");
    esp198 = esp198 - 4;
    *reinterpret_cast<void***>(esp198) = esi3;
    if (cf199) {
        addr_8048554_35:
        *reinterpret_cast<void***>(ecx113) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx113)) ^ reinterpret_cast<unsigned char>(esi3));
        if (1) {
            addr_80485c9_33:
            *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
            *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
            *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
            *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
            *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
            goto addr_80485d3_91;
        } else {
            tmp8_232 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx113 + reinterpret_cast<int32_t>(ebp71) * 2) + 98) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx113 + 1)));
            cf233 = tmp8_232 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx113 + reinterpret_cast<int32_t>(ebp71) * 2) + 98);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx113 + reinterpret_cast<int32_t>(ebp71) * 2) + 98) = tmp8_232;
            __asm__("arpl [esi], bp");
            if (!cf233) {
                addr_80485d3_91:
                *reinterpret_cast<void***>(eax185) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax185)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax185)));
                goto addr_80485d6_19;
            } else {
                *reinterpret_cast<unsigned char*>(ebx129 + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx129 + 0x72) + *reinterpret_cast<unsigned char*>(&edx162 + 1));
                __asm__("popad ");
                __asm__("outsb ");
                goto addr_804856b_58;
            }
        }
    } else {
        if (sf210) {
            addr_8048516_63:
            __asm__("popad ");
            goto addr_804851b_73;
        } else {
            *reinterpret_cast<unsigned char*>(edi204 + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi204 + 0x6c) + *reinterpret_cast<unsigned char*>(&eax185 + 1));
            goto addr_80484e6_88;
        }
    }
}

signed char gd070804;

signed char ge070804;

signed char gf070804;

unsigned char* g13070804;

unsigned char* g15070804;

unsigned char* g19070804;

unsigned char* g1c070804;

int32_t g804a0c0 = 0;

void fun_804865d(int32_t ecx, int32_t a2, int32_t a3, int16_t a4) {
    signed char* eax5;
    signed char* eax6;
    signed char* eax7;
    signed char ah8;
    unsigned char al9;
    unsigned char tmp8_10;
    unsigned char* eax11;
    unsigned char* eax12;
    unsigned char al13;
    unsigned char tmp8_14;
    signed char dl15;
    unsigned char* eax16;
    unsigned char tmp8_17;
    uint1_t cf18;
    unsigned char tmp8_19;
    uint1_t cf20;
    unsigned char tmp8_21;
    uint1_t cf22;
    unsigned char al23;
    unsigned char tmp8_24;
    unsigned char* eax25;
    unsigned char al26;
    unsigned char tmp8_27;
    signed char* eax28;
    unsigned char* eax29;
    unsigned char al30;
    unsigned char tmp8_31;
    unsigned char* eax32;

    *reinterpret_cast<signed char*>(&eax5) = gd070804;
    *eax5 = reinterpret_cast<signed char>(*eax5 + *reinterpret_cast<signed char*>(&eax5));
    *reinterpret_cast<signed char*>(&eax6) = ge070804;
    *eax6 = reinterpret_cast<signed char>(*eax6 + *reinterpret_cast<signed char*>(&eax6));
    *reinterpret_cast<signed char*>(&eax7) = gf070804;
    *eax7 = reinterpret_cast<signed char>(*eax7 + *reinterpret_cast<signed char*>(&eax7));
    *reinterpret_cast<signed char*>(ecx + 0x10070804) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx + 0x10070804) + ah8);
    *eax7 = reinterpret_cast<signed char>(*eax7 + *reinterpret_cast<signed char*>(&eax7));
    al9 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax7) - 95);
    tmp8_10 = reinterpret_cast<unsigned char>(al9 + 8);
    *reinterpret_cast<unsigned char*>(&eax11) = tmp8_10;
    *eax11 = reinterpret_cast<unsigned char>(*eax11 + reinterpret_cast<int32_t>(eax11) + reinterpret_cast<uint1_t>(tmp8_10 < al9));
    *eax11 = reinterpret_cast<unsigned char>(*eax11 + *reinterpret_cast<signed char*>(&ecx));
    eax12 = g13070804;
    *eax12 = reinterpret_cast<unsigned char>(*eax12 + *reinterpret_cast<unsigned char*>(&eax12));
    al13 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax12) | 0xa1);
    tmp8_14 = reinterpret_cast<unsigned char>(al13 + 8);
    *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(tmp8_14)) + reinterpret_cast<uint1_t>(tmp8_14 < al13));
    *eax12 = reinterpret_cast<unsigned char>(*eax12 + dl15);
    eax16 = g15070804;
    tmp8_17 = reinterpret_cast<unsigned char>(*eax16 + *reinterpret_cast<unsigned char*>(&eax16));
    cf18 = reinterpret_cast<uint1_t>(tmp8_17 < *eax16);
    *eax16 = tmp8_17;
    *reinterpret_cast<unsigned char*>(&eax16) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax16) - 95) + cf18) + 8);
    tmp8_19 = reinterpret_cast<unsigned char>(*eax16 + *reinterpret_cast<unsigned char*>(&eax16));
    cf20 = reinterpret_cast<uint1_t>(tmp8_19 < *eax16);
    *eax16 = tmp8_19;
    *reinterpret_cast<unsigned char*>(ecx + 0x17070804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx + 0x17070804) - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax16) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ecx + 0x17070804) < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax16) + 1) + cf20))));
    tmp8_21 = reinterpret_cast<unsigned char>(*eax16 + *reinterpret_cast<unsigned char*>(&eax16));
    cf22 = reinterpret_cast<uint1_t>(tmp8_21 < *eax16);
    *eax16 = tmp8_21;
    al23 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax16) - reinterpret_cast<unsigned char>(95 - reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax16) < reinterpret_cast<unsigned char>(95 - cf22))));
    tmp8_24 = reinterpret_cast<unsigned char>(al23 + 8);
    *reinterpret_cast<unsigned char*>(&eax16) = tmp8_24;
    *eax16 = reinterpret_cast<unsigned char>(*eax16 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax16) + reinterpret_cast<uint1_t>(*eax16 < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax16) + reinterpret_cast<uint1_t>(tmp8_24 < al23)))));
    *eax16 = reinterpret_cast<unsigned char>(*eax16 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax16) + 1));
    eax25 = g19070804;
    *eax25 = reinterpret_cast<unsigned char>(*eax25 + *reinterpret_cast<unsigned char*>(&eax25));
    al26 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax25) & 0xa1);
    tmp8_27 = reinterpret_cast<unsigned char>(al26 + 8);
    *reinterpret_cast<unsigned char*>(&eax25) = tmp8_27;
    eax28 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax25) - (*eax25 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax25) < *eax25 + reinterpret_cast<uint1_t>(tmp8_27 < al26))));
    *eax28 = reinterpret_cast<signed char>(*eax28 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    eax29 = g1c070804;
    *eax29 = reinterpret_cast<unsigned char>(*eax29 + *reinterpret_cast<unsigned char*>(&eax29));
    al30 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax29) + 95);
    tmp8_31 = reinterpret_cast<unsigned char>(al30 + 8);
    *reinterpret_cast<unsigned char*>(&eax29) = tmp8_31;
    eax32 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax29) - (0x5ed00000 - reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax29) < 0x5ed00000 - reinterpret_cast<uint1_t>(tmp8_31 < al30))));
    *reinterpret_cast<unsigned char*>(&eax32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax32) + 8);
    *eax32 = reinterpret_cast<unsigned char>(*eax32 + *reinterpret_cast<unsigned char*>(&eax32));
    *reinterpret_cast<unsigned char*>(&eax32) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax32) ^ 0xa1) + 8);
    *eax32 = reinterpret_cast<unsigned char>(*eax32 + *reinterpret_cast<unsigned char*>(&eax32));
    *eax32 = reinterpret_cast<unsigned char>(*eax32 + *reinterpret_cast<unsigned char*>(&eax32));
    goto g804a0c0;
}

int32_t fun_8049b18() {
    int32_t ebx1;
    struct s4* v2;
    struct s0* v3;
    void* v4;
    struct s0* v5;
    struct s4* v6;
    void* v7;
    void* v8;
    struct s0* eax9;
    struct s0* v10;
    struct s0* ebp11;
    int32_t v12;
    void* v13;
    void* esp14;
    void* v15;
    void* esp16;
    int32_t ecx17;
    int32_t eax18;
    int32_t eax19;
    void* edx20;
    void* esi21;
    int32_t eax22;
    struct s0* eax23;
    void* esp24;
    int32_t ebx25;
    struct s0* v26;
    int32_t v27;
    void** esp28;
    struct s4* v29;
    void* esp30;
    int32_t ecx31;
    int32_t eax32;
    void* v33;
    struct s0* v34;
    struct s0* v35;
    int32_t v36;
    void* esp37;
    int32_t ecx38;
    int32_t eax39;
    void* v40;
    struct s0** esp41;
    int32_t ebx42;
    void* v43;
    int32_t ecx44;
    int32_t eax45;

    fun_80487cc(0x500, 0x320, 0, 0x80000002);
    fun_804877c(0, 0x320, 0, 0x80000002);
    fun_80487dc(0x1d01, 0x320, 0, 0x80000002);
    fun_80487bc(0x3f4ccccd, 0x3f4ccccd, 0x3f4ccccd, 0x3f000000, 0x1d01, 0x320, 0, 0x80000002);
    fun_804883c(0);
    fun_804872c(0xb71);
    fun_804882c();
    fun_804873c(0xc50);
    fun_80488cc(0, 0, 0x500, 0x320, 0xc50);
    fun_804875c(0x1701);
    fun_80487ac(0x1701);
    fun_80487ec(0x147ae148, 0xbff547ae, 0x147ae148, 0x3ff547ae, 0, 0xbff00000, 0, 0x3ff00000, 0, 0x3ff80000, 0, 0x40590000, 0x1701);
    fun_804875c(0x1700);
    fun_80487ac(0x1700);
    fun_804876c(0x4100, 0x1102, 0, 0x80000002);
    fun_80487ac(0x4100);
    ebx1 = 0;
    fun_80486fc(0x4100, 0, 0, 0, 0, 0, 0xc01c0000, 0, 0x80000002);
    v2 = reinterpret_cast<struct s4*>(0);
    v3 = reinterpret_cast<struct s0*>(0x3f800000);
    fun_804881c(0x4100, 0x41f00000, 0x3f800000, 0, 0, v4, v5, v6, v7);
    fun_804881c(0x4100, 0x42700000, 0, 0x3f800000, 0, 0x41f00000, 0x3f800000, 0, 0);
    v8 = reinterpret_cast<void*>(0x8049c67);
    eax9 = fun_8049394(0x4100);
    v10 = reinterpret_cast<struct s0*>(0x5f5e100);
    ebp11 = eax9;
    v12 = 0x8049c76;
    fun_804871c(0x4100, 0x5f5e100, 0x3f800000, 0, 0x8049c67);
    v13 = reinterpret_cast<void*>(0);
    esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 0x13c - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 + 24 - 4 - 4 - 4 + 4 - 4 + 4 - 4 + 4 + 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 + 20 - 4 - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 52 - 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 + 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 32 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 + 32 - 4 + 4 - 12 - 4 - 4 + 4 + 16);
    v15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) + 0x11c);
    do {
        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 32);
        ecx17 = 5;
        while (ecx17) {
            --ecx17;
        }
        eax18 = fun_8049330(0, 0, 0x3f800000, v12, v10, v3, v2, v8);
        if (!(eax18 - 1)) 
            break;
        eax19 = fun_80488ac();
        __asm__("cdq ");
        edx20 = reinterpret_cast<void*>(eax19 % 3);
        esi21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx20) + 1);
        v8 = reinterpret_cast<void*>(0x8049cc0);
        eax22 = fun_80488ac();
        esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 + 4 + 32 - 4 + 4 - 4 + 4);
        if (v13 != esi21) {
            v8 = edx20;
            __asm__("cdq ");
            eax23 = fun_8049363(esi21, eax22 % 3, edx20, v8);
            esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 - 4 - 4 - 4 + 4);
            *reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(esp24) + ebx1 * 4 + 60) = eax23;
            v2 = reinterpret_cast<struct s4*>(90);
            v3 = eax23;
            v10 = ebp11;
            v12 = 0x8049ce5;
            fun_80492d1(v10, v3, 90, v8);
            v13 = esi21;
            esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) + 12 - 4 - 4 - 4 - 4 + 4 + 16);
        } else {
            --ebx1;
        }
        ++ebx1;
    } while (ebx1 <= 59);
    goto addr_8049cf2_10;
    addr_8049e43_11:
    goto fun_804889c;
    addr_8049cf2_10:
    ebx25 = 0;
    v26 = ebp11;
    fun_804993d(ecx17, v26, v3, v2, v8);
    v27 = 0x8049d02;
    fun_804879c(v26, v3, v2, v8);
    esp28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp14) - 12 - 4 - 4 + 4 - 4 + 4 + 16);
    v29 = reinterpret_cast<struct s4*>(esp28 + 71);
    do {
        esp30 = reinterpret_cast<void*>(esp28 - 8);
        ecx31 = 5;
        while (ecx31) {
            --ecx31;
        }
        eax32 = fun_8049330(0, 0, 0x3f800000, v27, v26, v3, v2, v8);
        if (!(eax32 - 1)) 
            goto addr_8049e43_11;
        v8 = reinterpret_cast<void*>(0x3f800000);
        ++ebx25;
        v2 = reinterpret_cast<struct s4*>(0x3f800000);
        v3 = reinterpret_cast<struct s0*>(0);
        fun_804881c(ecx31, 0x40000000, 0, 0x3f800000, 0x3f800000, v33, v34, v29, v15);
        fun_804876c(0x4100, 0, 0x3f800000, 0x3f800000);
        fun_804887c(0x4100, 0, 0x3f800000, 0x3f800000);
        fun_804993d(ecx31, ebp11, 0, 0x3f800000, 0x3f800000);
        fun_804879c(ebp11, 0, 0x3f800000, 0x3f800000);
        v26 = reinterpret_cast<struct s0*>(20);
        v27 = 0x8049d70;
        fun_804888c(20, 0, 0x3f800000, 0x3f800000);
        esp28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) - 4 + 4 + 32 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 + 16);
    } while (ebx25 != 0xc8);
    *reinterpret_cast<signed char*>(&ebx25) = 59;
    v35 = reinterpret_cast<struct s0*>(esp28 + 71);
    do {
        v36 = 0;
        do {
            esp37 = reinterpret_cast<void*>(esp28 - 8);
            ecx38 = 5;
            while (ecx38) {
                --ecx38;
            }
            eax39 = fun_8049330(0, 0, 0x3f800000, v27, 20, v3, v2, 0x3f800000);
            if (!(eax39 - 1)) 
                goto addr_8049e43_11;
            fun_804881c(ecx38, 0x40000000, 0, 0x3f800000, 0x3f800000, v40, v35, v29, v15);
            v2 = reinterpret_cast<struct s4*>(0xfb);
            esp41 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(esp37) - 4 + 4 + 32 - 4 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4);
            v3 = (esp41 + ebx25)[13];
            fun_80492d1(ebp11, v3, 0xfb, 0x3f800000);
            fun_804876c(0x4100, v3, 0xfb, 0x3f800000);
            fun_804887c(0x4100, v3, 0xfb, 0x3f800000);
            fun_804993d(ecx38, ebp11, v3, 0xfb, 0x3f800000);
            fun_804879c(ebp11, v3, 0xfb, 0x3f800000);
            v27 = 0x8049dfb;
            fun_804888c(20, v3, 0xfb, 0x3f800000);
            ++v36;
            esp28 = reinterpret_cast<void**>(esp41 - 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1 + 1 + 4);
        } while (v36 != 18);
        --ebx25;
    } while (ebx25 != -1);
    ebx42 = 0;
    v43 = reinterpret_cast<void*>(esp28 + 71);
    do {
        ecx44 = 5;
        while (ecx44) {
            --ecx44;
        }
        eax45 = fun_8049330(0, 0, 0x3f800000, v27, 20, v3, v2, 0x3f800000);
        if (!(eax45 - 1)) 
            goto addr_8049e43_11;
        ++ebx42;
        v2 = reinterpret_cast<struct s4*>(0x3f800000);
        v3 = reinterpret_cast<struct s0*>(0);
        fun_804881c(ecx44, 0x40000000, 0, 0x3f800000, 0x3f800000, v43, v35, v29, v15);
        fun_804876c(0x4100, 0, 0x3f800000, 0x3f800000);
        fun_804887c(0x4100, 0, 0x3f800000, 0x3f800000);
        fun_804993d(ecx44, ebp11, 0, 0x3f800000, 0x3f800000);
        fun_804879c(ebp11, 0, 0x3f800000, 0x3f800000);
        v27 = 0x8049e93;
        fun_804888c(20, 0, 0x3f800000, 0x3f800000);
    } while (ebx42 != 0x15e);
    fun_804889c();
    __asm__("int 0x80");
    return 1;
}

void fun_8049eb7(int32_t ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char ah4;
    void* eax5;
    int32_t eax6;
    void* eax7;
    int32_t eax8;
    void* eax9;
    int32_t eax10;
    int32_t ecx11;
    unsigned char tmp8_12;
    signed char al13;
    int32_t eax14;
    void** eax15;
    unsigned char al16;
    void** eax17;

    *eax2 = reinterpret_cast<signed char>(*eax3 + ah4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax5) + ecx) = eax6;
    __asm__("das ");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax7) + ecx) = eax8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax9) + ecx) = eax10;
    ecx11 = *reinterpret_cast<int32_t*>(ecx - 0x767cf7fc) * 0x89a30804;
    tmp8_12 = reinterpret_cast<unsigned char>(al13 + 8);
    *reinterpret_cast<unsigned char*>(&eax14) = tmp8_12;
    eax15 = reinterpret_cast<void**>(eax14 - 0xaf7fb76 + reinterpret_cast<uint1_t>(tmp8_12 < al16));
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11) = eax15;
    eax15 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11);
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11) = eax15;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11) = eax15;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11) = eax15;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11) = eax15;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11) = eax15;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11) = eax15;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11) = eax15;
    eax15 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11);
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11) = eax15;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11) = eax15;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11) = eax15;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11) = eax15;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11) = eax15;
    __asm__("out 0x89, al");
    eax15 = eax15 + 8 + 8;
    eax17 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax15) + ecx11);
    *reinterpret_cast<signed char*>(&eax17) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax17) + 8) + 8);
    *reinterpret_cast<void***>(eax17) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax17)) + *reinterpret_cast<signed char*>(&eax17));
    *reinterpret_cast<signed char*>(&eax17 + 1) = -62;
    *reinterpret_cast<void***>(eax17) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax17)) + *reinterpret_cast<signed char*>(&eax17));
    __asm__("int 0xcc");
    __asm__("aas ");
}

void fun_80486f8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

struct s29 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s30 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

void fun_8049317(struct s29* a1, struct s30* a2) {
    a1->f0 = a2->f0;
    a1->f4 = a2->f4;
    a1->f8 = a2->f8;
    return;
}

void fun_8048822() {
    goto 0x80486ec;
}

void fun_80488b2() {
    goto 0x80486ec;
}

void fun_80487a2() {
    goto 0x80486ec;
}

void fun_8048772() {
    goto 0x80486ec;
}

void fun_8048882() {
    goto 0x80486ec;
}

void fun_8048892() {
    goto 0x80486ec;
}

void fun_80488a2() {
    goto 0x80486ec;
}

void fun_8048792() {
    goto 0x80486ec;
}

void fun_8048812() {
    goto 0x80486ec;
}

void fun_8048802() {
    goto 0x80486ec;
}

void fun_80487d2() {
    goto 0x80486ec;
}

void fun_8048782() {
    goto 0x80486ec;
}

void fun_80487e2() {
    goto 0x80486ec;
}

void fun_80487c2() {
    goto 0x80486ec;
}

void fun_8048842() {
    goto 0x80486ec;
}

void fun_8048732() {
    goto 0x80486ec;
}

void fun_8048832() {
    goto 0x80486ec;
}

void fun_8048742() {
    goto 0x80486ec;
}

void fun_80488d2() {
    goto 0x80486ec;
}

void fun_8048762() {
    goto 0x80486ec;
}

void fun_80487b2() {
    goto 0x80486ec;
}

void fun_80487f2() {
    goto 0x80486ec;
}

void fun_8048702() {
    goto 0x80486ec;
}

void fun_8048722() {
    goto 0x80486ec;
}

void fun_8048872() {
    goto 0x80486ec;
}

void fun_8048852() {
    goto 0x80486ec;
}

void fun_8048752() {
    goto 0x80486ec;
}

void fun_8048862() {
    goto 0x80486ec;
}

void fun_8048712() {
    goto 0x80486ec;
}

void fun_80488c2() {
    goto 0x80486ec;
}

void fun_80488dc(int32_t a1) {
    int32_t eax2;
    int32_t edx3;

    eax2 = a1;
    edx3 = 0;
    do {
        *reinterpret_cast<int32_t*>(eax2 + edx3 + 16) = 0x3e800000;
        *reinterpret_cast<int32_t*>(eax2 + edx3 + 12) = 0x3e800000;
        *reinterpret_cast<int32_t*>(eax2 + edx3 + 8) = 0x3e800000;
        edx3 = edx3 + 12;
    } while (edx3 != 72);
    return;
}
