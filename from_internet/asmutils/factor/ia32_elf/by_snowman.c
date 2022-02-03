
struct s0 {
    signed char[56] pad56;
    signed char f38;
};

int32_t fun_804814f() {
    signed char* ecx1;
    struct s0* edi2;
    signed char* edx3;
    signed char* ecx4;
    int16_t ax5;
    int16_t fpu_status_word6;

    __asm__("fld st0");
    __asm__("fild dword [0x80481fd]");
    ecx1 = &edi2->f38;
    edx3 = ecx1;
    ecx4 = ecx1 - 1;
    do {
        __asm__("fld st1");
        __asm__("fprem ");
        __asm__("fist dword [edx]");
        __asm__("fsubr st0, st2");
        __asm__("ftst ");
        __asm__("wait ");
        ax5 = fpu_status_word6;
        __asm__("fstp st2");
        __asm__("fdiv st1, st0");
        *ecx4 = reinterpret_cast<signed char>(48 + *edx3);
        --ecx4;
    } while (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) & 64));
    __asm__("fcompp ");
    *ecx4 = 32;
    if (!1) {
        *edx3 = 32;
    }
    __asm__("int 0x80");
    return 3;
}

struct s1 {
    signed char[12] pad12;
    int32_t fc;
};

struct s2 {
    signed char[20] pad20;
    int32_t f14;
};

int32_t fun_8048151();

void fun_804804c();

struct s3 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s4 {
    signed char[20] pad20;
    int32_t f14;
};

struct s5 {
    signed char[12] pad12;
    uint32_t fc;
};

int32_t fun_8048068() {
    int32_t eax1;
    int1_t cf2;
    struct s1* edi3;
    struct s2* edi4;
    int16_t ax5;
    int16_t fpu_status_word6;
    int32_t* edi7;
    int32_t* edi8;
    int32_t* edi9;
    signed char* edi10;
    int16_t ax11;
    int16_t fpu_status_word12;
    signed char* edi13;
    uint32_t esi14;
    uint32_t* edi15;
    uint32_t tmp32_16;
    int32_t* edi17;
    int1_t cf18;
    uint32_t* edi19;
    uint32_t* edi20;
    uint32_t edx21;
    struct s3* edi22;
    int32_t ecx23;
    struct s4* edi24;
    uint32_t eax25;
    struct s5* edi26;
    int32_t ecx27;
    uint32_t* edi28;
    uint32_t* edi29;
    uint32_t* edi30;

    eax1 = 0;
    __asm__("fild dword [0x80481fd]");
    __asm__("fldz ");
    while (*reinterpret_cast<unsigned char*>(&eax1)) {
        __asm__("fmul st0, st1");
        cf2 = *reinterpret_cast<unsigned char*>(&eax1) < 48;
        *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) - 48);
        if (cf2) 
            goto addr_8048089_4;
        if (*reinterpret_cast<unsigned char*>(&eax1) >= 10) 
            goto addr_8048089_4;
        edi3->fc = eax1;
        __asm__("fiadd dword [edi+0xc]");
    }
    __asm__("fld st0");
    __asm__("fstp tword [edi+0xc]");
    eax1 = edi4->f14;
    if (*reinterpret_cast<int16_t*>(&eax1) < 0x403f) {
        fun_8048151();
        __asm__("fxch st0, st1");
        __asm__("fld1 ");
        __asm__("fcom st0, st2");
        __asm__("wait ");
        ax5 = fpu_status_word6;
        if ((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) & 69) != 1) {
            addr_804810f_9:
            __asm__("fxch st0, st2");
            fun_804814f();
            __asm__("fstp st0");
            goto addr_8048118_10;
        } else {
            __asm__("fcompp ");
            *edi7 = 2;
            fun_804804c();
            *edi8 = *edi9 + 1;
            fun_804804c();
            *edi10 = 5;
            fun_804804c();
            __asm__("fld1 ");
            __asm__("fcom st0, st1");
            ax11 = fpu_status_word12;
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax11) + 1) & 64) {
                addr_8048118_10:
                __asm__("fcompp ");
            } else {
                *edi13 = 7;
                __asm__("fild qword [edi]");
                __asm__("fdivr st0, st2");
                addr_80480e3_13:
                while (esi14 = *edi15, tmp32_16 = reinterpret_cast<uint32_t>(*edi17 + 6), cf18 = tmp32_16 < *edi19, *edi20 = tmp32_16, !cf18) {
                    while ((edx21 = edi22->f10, ecx23 = 0x401e - edi24->f14, ecx23 < 0) || edx21 >> *reinterpret_cast<signed char*>(&ecx23) >= esi14) {
                        eax25 = edi26->fc;
                        ecx27 = -ecx23;
                        if (!__intrinsic()) {
                            edx21 = eax25;
                            eax25 = 0;
                        }
                        __asm__("shld edx, eax, cl");
                        if (eax25 << *reinterpret_cast<unsigned char*>(&ecx27) | edx21) 
                            goto addr_80480e3_13;
                        if (*edi28 != esi14) {
                            __asm__("ror ebp, 0x4");
                            *edi29 = esi14;
                        }
                        __asm__("ffree st2");
                        __asm__("fild qword [edi]");
                        fun_804814f();
                        __asm__("fdivr st0, st2");
                        esi14 = *edi30;
                    }
                    break;
                }
                goto addr_804810f_9;
            }
        }
        __asm__("int 0x80");
        return 3;
    }
    addr_8048089_4:
    *reinterpret_cast<unsigned char*>(&eax1) = 1;
    __asm__("fcompp ");
    return eax1;
}

struct s6 {
    signed char[56] pad56;
    signed char f38;
};

int32_t fun_8048151() {
    signed char* ecx1;
    struct s6* edi2;
    signed char* edx3;
    signed char* ecx4;
    int16_t ax5;
    int16_t fpu_status_word6;
    signed char bl7;
    signed char bl8;
    signed char bl9;

    __asm__("fld st0");
    __asm__("fild dword [0x80481fd]");
    ecx1 = &edi2->f38;
    edx3 = ecx1;
    ecx4 = ecx1 - 1;
    do {
        __asm__("fld st1");
        __asm__("fprem ");
        __asm__("fist dword [edx]");
        __asm__("fsubr st0, st2");
        __asm__("ftst ");
        __asm__("wait ");
        ax5 = fpu_status_word6;
        __asm__("fstp st2");
        __asm__("fdiv st1, st0");
        *ecx4 = reinterpret_cast<signed char>(48 + *edx3);
        --ecx4;
    } while (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax5) + 1) & 64));
    __asm__("fcompp ");
    *ecx4 = bl7;
    if (bl8 != 32) {
        *edx3 = bl9;
    }
    __asm__("int 0x80");
    return 3;
}

void fun_804804c() {
    uint48_t v1;
    int16_t ax2;
    int16_t fpu_status_word3;

    *reinterpret_cast<int32_t*>(&v1) = reinterpret_cast<int32_t>(__return_address());
    while (ax2 = fpu_status_word3, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax2) + 1) & 64)) {
        __asm__("fstp st2");
        fun_804814f();
    }
    __asm__("fcompp ");
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2);
}

void fun_8048000(signed char* ecx) {
    int1_t less_or_equal2;
    int32_t eax3;
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
    int32_t* eax19;
    signed char al20;
    signed char* eax21;
    signed char* eax22;
    void** eax23;
    void** ebp24;
    void* tmp8_25;
    uint1_t cf26;

    if (less_or_equal2) {
        *ecx = reinterpret_cast<signed char>(*ecx + eax3);
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax19) + *eax19);
        *eax22 = reinterpret_cast<signed char>(*eax22 + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<signed char>(*eax22 + *reinterpret_cast<signed char*>(&eax22));
        eax23 = ebp24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<uint32_t>(ecx)) + 44;
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23))));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<uint32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<unsigned char*>(eax23 + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax23 + 0x80000804) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 8);
        *ecx = reinterpret_cast<signed char>(*ecx + 1);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        if (reinterpret_cast<signed char>(*eax23) < reinterpret_cast<signed char>(0) == __intrinsic()) {
            *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        }
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    }
    tmp8_25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    cf26 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_25) < reinterpret_cast<unsigned char>(*eax23));
    *eax23 = tmp8_25;
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23))) + cf26);
}

unsigned char g804821c;

void fun_8048195(int32_t a1, int32_t a2) {
    unsigned char* ecx3;
    int32_t esi4;
    unsigned char al5;
    int32_t v6;

    if (!a2) {
        while (1) {
            ecx3 = reinterpret_cast<unsigned char*>(0x804821c);
            esi4 = 95;
            do {
                __asm__("int 0x80");
                if (!__intrinsic()) 
                    break;
                al5 = g804821c;
            } while (al5 == 32 || al5 >= 9 && al5 < 14);
            goto addr_80481d3_5;
            addr_80481ab_6:
            __asm__("int 0x80");
            continue;
            do {
                addr_80481d3_5:
                ++ecx3;
                --esi4;
                if (!esi4) 
                    break;
                __asm__("int 0x80");
            } while (__intrinsic() && (*ecx3 != 32 && (*ecx3 < 9 || *ecx3 >= 14)));
            *ecx3 = 0;
            fun_8048068();
        }
    } else {
        while (1) {
            fun_8048068();
            if (!v6) 
                goto addr_80481ab_6;
        }
    }
}
