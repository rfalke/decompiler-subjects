
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_80490a7(int32_t a1, void** a2, int32_t a3) {
    return;
}

int32_t __libc_start_main = 0x8049066;

void fun_8049060(int32_t a1, int16_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

int32_t __libc_start_main(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;

    eax1 = 0x804c01c;
    if (1 || (eax1 = 0, 1)) {
        return eax1;
    } else {
        eax3 = __libc_start_main(0x804c01c, v2);
        return eax3;
    }
}

int32_t puts = 0x8049056;

void fun_8049050(int32_t a1, int32_t a2, uint32_t a3, uint32_t a4) {
    goto puts;
}

/* __x86.get_pc_thunk.bp */
void __x86_get_pc_thunk_bp() {
    return;
}

uint32_t abs32(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;

    eax5 = -a1;
    if (__intrinsic() != __intrinsic()) {
        eax5 = a1;
    }
    return eax5;
}

uint32_t sat_addu32b(uint32_t a1, uint32_t a2) {
    uint32_t tmp32_3;
    uint32_t eax4;

    tmp32_3 = a1 + a2;
    eax4 = 0xffffffff;
    if (tmp32_3 >= a1) {
        eax4 = tmp32_3;
    }
    return eax4;
}

int32_t printf = 0x8049046;

void fun_8049040(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8) {
    goto printf;
}

uint32_t sat_subu32b(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;

    eax5 = a1 - a2;
    if (a1 < a2) {
        eax5 = 0;
    }
    return eax5;
}

uint32_t sat_mulu32b(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;

    eax5 = a1 * a2;
    if (__intrinsic()) {
        eax5 = 0xffffffff;
    }
    return eax5;
}

uint32_t sat_divu32b(int32_t a1, int32_t a2, uint32_t a3, uint32_t a4) {
    return a1 / reinterpret_cast<uint32_t>(a2);
}

uint32_t sat_adds32b_var1(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    int32_t ecx5;
    uint32_t eax6;

    ecx5 = 0;
    *reinterpret_cast<unsigned char*>(&ecx5) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(a1 + a2) >= reinterpret_cast<int32_t>(0));
    eax6 = a1 + a2;
    if (__intrinsic()) {
        eax6 = ecx5 + 0x7fffffff;
    }
    return eax6;
}

uint32_t sat_adds32b_var2(uint32_t a1, int32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t esi5;
    uint32_t eax6;

    esi5 = a2 + a1;
    eax6 = (a1 >> 31) + 0x7fffffff;
    if (!__intrinsic()) {
        eax6 = esi5;
    }
    if (__intrinsic()) {
        eax6 = esi5;
    }
    return eax6;
}

uint32_t sat_adds32b_var3(uint32_t a1, int32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;

    eax5 = (a1 >> 31) + 0x7fffffff;
    if (__intrinsic()) {
        eax5 = a2 + a1;
    }
    return eax5;
}

uint32_t sat_subs32b(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t edx5;
    uint32_t eax6;

    edx5 = a1 - a2;
    eax6 = (a1 >> 31) + 0x7fffffff;
    if (reinterpret_cast<int32_t>((a2 ^ eax6) & (eax6 ^ edx5)) >= reinterpret_cast<int32_t>(0)) {
        eax6 = edx5;
    }
    return eax6;
}

uint32_t sat_muls32b(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;

    eax5 = a2 * a1;
    if (reinterpret_cast<int32_t>(eax5) >> 31 != __intrinsic()) {
        eax5 = ((a2 ^ a1) >> 31) + 0x7fffffff;
    }
    return eax5;
}

uint32_t sat_divs32b(uint32_t a1, int32_t a2, uint32_t a3, uint32_t a4) {
    int32_t eax5;

    eax5 = 0;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>((a1 ^ 0x80000000 | a2 + 1) == 0);
    __asm__("cdq ");
    return reinterpret_cast<int32_t>(eax5 + a1) / a2;
}

uint32_t sgn32(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t ecx5;

    ecx5 = 0;
    *reinterpret_cast<unsigned char*>(&ecx5) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(a1 < 0) | reinterpret_cast<uint1_t>(a1 == 0)));
    return (a1 >> 31) + ecx5;
}

uint32_t sat_addu64b(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t tmp32_5;
    uint32_t eax6;
    int1_t cf7;

    tmp32_5 = a1 + a3;
    eax6 = tmp32_5;
    cf7 = a2 + a4 + reinterpret_cast<uint1_t>(tmp32_5 < a1) < a2;
    if (cf7) {
    }
    if (cf7) {
        eax6 = 0xffffffff;
    }
    return eax6;
}

uint32_t sat_subu64b(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;
    int1_t cf6;

    eax5 = a1 - a3;
    cf6 = a2 < a4 + reinterpret_cast<uint1_t>(a1 < a3);
    if (cf6) {
    }
    if (cf6) {
        eax5 = 0;
    }
    return eax5;
}

uint32_t __udivdi3();

uint32_t sat_divu64b(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;

    __asm__("movaps xmm0, [esp+0x20]");
    __asm__("movups [esp], xmm0");
    eax5 = __udivdi3();
    return eax5;
}

uint32_t sat_adds64b(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;

    eax5 = (a2 >> 31) + 0x7fffffff;
    if (__intrinsic()) {
    }
    if (__intrinsic()) {
        eax5 = a3 + a1;
    }
    return eax5;
}

uint32_t sat_subs64b(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t eax5;
    int1_t sf6;

    eax5 = (a2 >> 31) + 0x7fffffff;
    sf6 = reinterpret_cast<int32_t>(a2 - (a4 + reinterpret_cast<uint1_t>(a2 < a4 + reinterpret_cast<uint1_t>(a1 < a3))) & a4) < reinterpret_cast<int32_t>(0);
    if (!sf6) {
    }
    if (!sf6) {
        eax5 = a1 - a3;
    }
    return eax5;
}

uint32_t __divdi3(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);

uint32_t sat_divs64b(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t tmp32_5;
    uint32_t tmp32_6;
    uint32_t eax7;
    uint32_t tmp32_8;
    uint32_t eax9;

    tmp32_5 = a3 + 1;
    tmp32_6 = a1 + 0x80000000;
    eax7 = 0;
    *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<uint1_t>((tmp32_6 | tmp32_5 | (a2 - 1 + (tmp32_6 < a1) | a4 + (tmp32_5 < a3))) == 0);
    tmp32_8 = eax7 + a1;
    eax9 = __divdi3(tmp32_8, a2 + reinterpret_cast<uint1_t>(tmp32_8 < eax7), a2, a4);
    return eax9;
}

uint32_t abs64(int32_t a1, int32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t ecx5;

    ecx5 = reinterpret_cast<uint32_t>(a2 >> 31);
    return a1 + ecx5 ^ ecx5;
}

uint32_t sgn64(uint32_t a1, int32_t a2, uint32_t a3, uint32_t a4) {
    return (a2 >> 31) + static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(0) < reinterpret_cast<int32_t>(a2 + reinterpret_cast<uint1_t>(0 < a1))));
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
    eax3 = *reinterpret_cast<int32_t*>(ebx4 + 0x2ff3 - 4);
    if (eax3) {
        eax3();
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

int32_t main();

void fun_8049072() {
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
    fun_80490a7(edx5, v4, eax6);
    ebx7 = ebx8 + 0x2f7c;
    fun_8049060(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x26b0, ebx7 - 0x2640, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_80490b2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_8049152() {
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

void fun_8049182() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    if (1 || 1) {
        goto *reinterpret_cast<int16_t*>(&v1);
    } else {
        __libc_start_main(0x804c01c, 0);
        goto *reinterpret_cast<int16_t*>(&v1);
    }
}

void fun_80496f2() {
    uint64_t v1;
    int16_t ds2;
    int32_t v3;
    uint32_t eax4;
    uint32_t v5;
    uint32_t v6;
    uint32_t ebp7;
    uint32_t v8;
    uint32_t ebx9;
    uint32_t v10;
    uint1_t cf11;
    uint32_t esi12;
    uint32_t esi13;
    uint32_t ecx14;
    uint32_t eax15;
    uint32_t ecx16;
    uint32_t ecx17;
    uint32_t v18;
    uint32_t ecx19;
    uint32_t ecx20;
    uint32_t eax21;
    uint32_t ebx22;
    uint32_t ecx23;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    v3 = 0;
    eax4 = v5;
    v6 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4);
    ebp7 = v8;
    if (reinterpret_cast<int32_t>(v8) < reinterpret_cast<int32_t>(0)) {
        v3 = -1;
        v6 = -*reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4);
        ebp7 = -(v8 + reinterpret_cast<uint1_t>(!!*reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4)));
    }
    ebx9 = v10;
    if (reinterpret_cast<int32_t>(v10) < reinterpret_cast<int32_t>(0)) {
        cf11 = reinterpret_cast<uint1_t>(!!eax4);
        eax4 = -eax4;
        v3 = ~v3;
        ebx9 = -(v10 + cf11);
    }
    if (ebx9) {
        if (ebx9 <= ebp7) {
            __asm__("bsr esi, ebx");
            esi12 = esi13 ^ 31;
            if (esi12) {
                ecx14 = esi12;
                eax15 = 32 - esi12;
                ecx16 = eax15;
                ecx17 = esi12;
                v18 = eax4 >> *reinterpret_cast<signed char*>(&ecx16) | ebx9 << *reinterpret_cast<unsigned char*>(&ecx14);
                ecx19 = esi12;
                ecx20 = eax15;
                eax21 = ebp7 << *reinterpret_cast<unsigned char*>(&ecx19) | v6 >> *reinterpret_cast<signed char*>(&ecx20);
                ebx22 = eax21 % v18;
                if (ebx22 < __intrinsic() || (ecx23 = esi12, v6 << *reinterpret_cast<unsigned char*>(&ecx23) < eax21 / v18 * (eax4 << *reinterpret_cast<unsigned char*>(&ecx17))) && ebx22 == __intrinsic()) {
                }
            } else {
                if (ebx9 < ebp7 || eax4 <= v6) {
                }
            }
        }
    } else {
        if (eax4 <= ebp7) {
            if (!eax4) {
            }
        }
    }
    if (v3) {
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_8049832() {
    uint64_t v1;
    int16_t ds2;
    uint32_t v3;
    uint32_t v4;
    uint32_t edi5;
    uint32_t edi6;
    uint32_t ecx7;
    uint32_t edx8;
    uint32_t ecx9;
    uint32_t v10;
    uint32_t v11;
    uint32_t ecx12;
    uint32_t ecx13;
    uint32_t ecx14;
    uint32_t eax15;
    uint32_t esi16;
    uint32_t ecx17;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    if (v3) {
        if (v3 <= v4) {
            __asm__("bsr edi, eax");
            edi5 = edi6 ^ 31;
            if (edi5) {
                ecx7 = edi5;
                edx8 = 32 - edi5;
                ecx9 = edx8;
                v10 = v3 << *reinterpret_cast<unsigned char*>(&ecx7) | v11 >> *reinterpret_cast<signed char*>(&ecx9);
                ecx12 = edi5;
                ecx13 = edi5;
                ecx14 = edx8;
                eax15 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) >> *reinterpret_cast<signed char*>(&ecx14) | v4 << *reinterpret_cast<unsigned char*>(&ecx13);
                esi16 = eax15 % v10;
                if (esi16 < __intrinsic() || (ecx17 = edi5, *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) << *reinterpret_cast<unsigned char*>(&ecx17) < eax15 / v10 * (v11 << *reinterpret_cast<unsigned char*>(&ecx12))) && esi16 == __intrinsic()) {
                }
            } else {
                if (v3 < v4 || v11 <= *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4)) {
                }
            }
        }
        goto *reinterpret_cast<int32_t*>(&v1);
    } else {
        if (v11 <= v4) {
            if (!v11) {
            }
            goto *reinterpret_cast<int32_t*>(&v1);
        } else {
            goto *reinterpret_cast<int32_t*>(&v1);
        }
    }
}

void _init();

void fun_8049952() {
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
    ebp3 = ebp4 + 0x26a6;
    edi5 = v6;
    _init();
    ebx7 = ebp3 - 0xf0 - (ebp3 - 0xf4) >> 2;
    if (ebx7) {
        esi8 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebp3 + esi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), edi5, 0x8049971);
            ++esi8;
        } while (ebx7 != esi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_80499c2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_80499ce() {
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

void fun_80490f7() {
}

void fun_8049144() {
}

void fun_8049171() {
}

void fun_8049762() {
}

void fun_804978b() {
}

void fun_80497aa() {
}

void fun_8049865() {
}

void fun_804987a() {
}

void fun_8049899() {
}

void fun_80498c9() {
}

void fun_8049934() {
}

void fun_80499b5() {
}

int32_t g804c008 = 0;

void fun_8049046() {
    goto g804c008;
}

void fun_8049066() {
    goto 0x8049030;
}

void fun_8049101() {
}

void fun_8049149() {
}

void fun_8049179() {
}

void fun_8049056() {
    goto 0x8049030;
}

int32_t main() {
    uint32_t eax1;
    uint32_t v2;
    uint32_t v3;
    uint32_t v4;
    uint32_t esi5;
    uint32_t eax6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t eax10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t eax14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t eax18;
    uint32_t eax19;
    uint32_t eax20;
    uint32_t eax21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    uint32_t eax25;
    uint32_t v26;
    uint32_t v27;
    uint32_t v28;
    uint32_t eax29;
    uint32_t v30;
    uint32_t v31;
    uint32_t v32;
    uint32_t eax33;
    uint32_t v34;
    uint32_t v35;
    uint32_t v36;
    uint32_t eax37;
    uint32_t v38;
    uint32_t v39;
    uint32_t v40;
    uint32_t eax41;
    uint32_t eax42;
    uint32_t tmp32_43;
    uint32_t eax44;
    uint32_t tmp32_45;
    uint32_t eax46;
    uint32_t tmp32_47;
    uint32_t eax48;
    uint32_t tmp32_49;
    uint32_t eax50;
    uint32_t tmp32_51;
    uint32_t eax52;
    uint32_t tmp32_53;
    uint32_t eax54;
    uint32_t tmp32_55;
    int32_t edx56;
    int32_t edx57;
    int32_t edx58;
    int32_t edx59;
    int32_t edx60;
    int32_t edx61;
    int32_t edx62;
    int32_t edx63;

    eax1 = sat_addu32b(0xff, 3);
    fun_8049040("sat_addu32b(0x%08x,0x%08x) = 0x%08x\n", 0xff, 3, eax1, v2, v3, v4, esi5);
    eax6 = sat_subu32b(1, 3, 3, eax1);
    fun_8049040("sat_subu32b(0x%08x,0x%08x) = 0x%08x\n", 1, 3, eax6, v7, v8, v9, esi5);
    eax10 = sat_mulu32b(0xff, 3, 3, eax6);
    fun_8049040("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n", 0xff, 3, eax10, v11, v12, v13, esi5);
    eax14 = sat_divu32b(0xff, 3, 3, eax10);
    fun_8049040("sat_divu32b(0x%08x,0x%08x) = 0x%08x\n", 0xff, 3, eax14, v15, v16, v17, esi5);
    eax18 = sat_adds32b_var1(0x7fffffff, 2, 3, eax14);
    eax19 = sat_adds32b_var2(0x7fffffff, 2, 3, eax14);
    eax20 = sat_adds32b_var3(0x7fffffff, 2, 3, eax14);
    fun_8049040("sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n", 0x7fffffff, 2, eax18, eax19, eax20, 3, eax14);
    eax21 = sat_subs32b(0x80000000, 2, 3, eax14);
    fun_8049040("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0x80000000, 2, eax21, v22, v23, v24, esi5);
    eax25 = sat_muls32b(0x7fffffff, 2, 2, eax21);
    fun_8049040("sat_muls32b(0x%08x,0x%08x) = 0x%08x\n", 0x7fffffff, 2, eax25, v26, v27, v28, esi5);
    eax29 = sat_divs32b(0x80000000, 0xff, 2, eax25);
    fun_8049040("sat_divs32b(0x%08x,0x%08x) = 0x%08x\n", 0x80000000, 0xff, eax29, v30, v31, v32, esi5);
    eax33 = abs32(0xf0, 0x80000000, 0xff, eax29);
    fun_8049040("abs32(0x%08x) = 0x%08x\n", 0xf0, eax33, eax29, v34, v35, v36, esi5);
    eax37 = sgn32(3, 0xf0, eax33, eax29);
    fun_8049040("sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29, v38, v39, v40, esi5);
    __asm__("xorps xmm0, xmm0");
    __asm__("movups [esp], xmm0");
    eax41 = sat_addu64b("sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29);
    __asm__("xorps xmm0, xmm0");
    __asm__("movups [esp], xmm0");
    eax42 = sat_subu64b("sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29);
    tmp32_43 = eax42 + eax41;
    __asm__("movaps xmm0, [0x804a010]");
    __asm__("movups [esp], xmm0");
    eax44 = sat_divu64b("sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29);
    tmp32_45 = eax44 + tmp32_43;
    __asm__("xorps xmm0, xmm0");
    __asm__("movups [esp], xmm0");
    eax46 = sat_adds64b("sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29);
    tmp32_47 = eax46 + tmp32_45;
    __asm__("xorps xmm0, xmm0");
    __asm__("movups [esp], xmm0");
    eax48 = sat_subs64b("sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29);
    tmp32_49 = eax48 + tmp32_47;
    __asm__("movaps xmm0, [0x804a010]");
    __asm__("movups [esp], xmm0");
    eax50 = sat_divs64b("sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29);
    tmp32_51 = eax50 + tmp32_49;
    eax52 = abs64(0, 0, eax37, eax29);
    tmp32_53 = eax52 + tmp32_51;
    eax54 = sgn64(0, 0, eax37, eax29);
    tmp32_55 = eax54 + tmp32_53;
    if (!(tmp32_55 ^ 42 | edx56 + (edx57 + (edx58 + (edx59 + (edx60 + (edx61 + (edx62 + edx63 + reinterpret_cast<uint1_t>(tmp32_43 < eax42)) + (tmp32_45 < eax44)) + (tmp32_47 < eax46)) + (tmp32_49 < eax48)) + (tmp32_51 < eax50)) + (tmp32_53 < eax52)) + (tmp32_55 < eax54))) {
        fun_8049050("not reached", 0, eax37, eax29);
    }
    return 0;
}
