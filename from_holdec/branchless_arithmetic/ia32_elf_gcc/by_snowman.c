
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_80492d7(int32_t a1, void** a2, int32_t a3) {
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

/* __x86.get_pc_thunk.bp */
void __x86_get_pc_thunk_bp() {
    return;
}

int32_t puts = 0x8049056;

void fun_8049050(int32_t a1, uint32_t a2, uint32_t a3, void* a4) {
    goto puts;
}

void* sat_addu32b(int32_t a1, uint32_t a2) {
    uint32_t tmp32_3;
    int32_t edx4;
    int32_t edx5;
    uint32_t edx6;
    int32_t edx7;

    tmp32_3 = a2 + a1;
    return tmp32_3 | edx4 - (edx5 + reinterpret_cast<uint1_t>(edx6 < edx7 + reinterpret_cast<uint1_t>(tmp32_3 < a2)));
}

int32_t printf = 0x8049046;

void fun_8049040(int32_t ecx, int32_t a2, int32_t a3, uint32_t a4, void* a5, uint32_t a6, uint32_t a7, uint32_t a8, void* a9) {
    goto printf;
}

void* sat_subu32b(int32_t ecx, uint32_t a2, uint32_t a3, uint32_t a4, void* a5) {
    return -static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(a2 >= a3))) & a2 - a3;
}

void* sat_mulu32b(int32_t ecx, int32_t a2, int32_t a3, uint32_t a4, void* a5) {
    uint32_t edx6;

    edx6 = reinterpret_cast<uint32_t>(-__intrinsic());
    return reinterpret_cast<uint32_t>(a3 * a2) | edx6 - (edx6 + reinterpret_cast<uint1_t>(edx6 < edx6 + reinterpret_cast<uint1_t>(!!__intrinsic())));
}

void* sat_divu32b(int32_t ecx, int32_t a2, int32_t a3, uint32_t a4, void* a5) {
    return a2 / reinterpret_cast<uint32_t>(a3);
}

uint32_t sat_adds32b_var3(int32_t ecx, uint32_t a2, int32_t a3, uint32_t a4, void* a5) {
    uint32_t ecx6;

    ecx6 = a2 + a3;
    if (!__intrinsic()) {
        ecx6 = (a2 >> 31) + 0x7fffffff;
    }
    return ecx6;
}

uint32_t sat_adds32b_var2(int32_t ecx, uint32_t a2, int32_t a3, uint32_t a4, void* a5) {
    if (__intrinsic() || !__intrinsic()) {
        return a3 + a2;
    } else {
        return (a2 >> 31) + 0x7fffffff;
    }
}

void* sat_adds32b_var1(int32_t ecx, void* a2, void* a3, uint32_t a4, void* a5) {
    void* tmp32_6;
    void* eax7;
    uint32_t edx8;
    int32_t edx9;
    int1_t less10;

    __asm__("cdq ");
    tmp32_6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a2) + reinterpret_cast<uint32_t>(a3));
    eax7 = tmp32_6;
    edx8 = edx9 + (reinterpret_cast<int32_t>(a3) >> 31) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_6) < reinterpret_cast<uint32_t>(a2));
    less10 = reinterpret_cast<int32_t>(0) < reinterpret_cast<int32_t>(edx8 + reinterpret_cast<uint1_t>(0x7fffffff < reinterpret_cast<uint32_t>(eax7)));
    if (less10) {
        eax7 = reinterpret_cast<void*>(0x7fffffff);
    }
    if (less10) {
        edx8 = 0;
    }
    if (reinterpret_cast<int32_t>(edx8) < reinterpret_cast<int32_t>(1 - reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax7) < 0x80000000))) {
        eax7 = reinterpret_cast<void*>(0x80000000);
    }
    return eax7;
}

void* sat_subs32b(int32_t ecx, void* a2, uint32_t a3, uint32_t a4, void* a5) {
    void* edx6;
    void* eax7;

    edx6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a2) - a3);
    eax7 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(a2) >> 31) + 0x7fffffff);
    if (reinterpret_cast<int32_t>((a3 ^ reinterpret_cast<uint32_t>(eax7)) & (reinterpret_cast<uint32_t>(edx6) ^ reinterpret_cast<uint32_t>(eax7))) < reinterpret_cast<int32_t>(0)) {
        edx6 = eax7;
    }
    return edx6;
}

void* sat_muls32b(int32_t ecx, uint32_t a2, uint32_t a3, uint32_t a4, void* a5) {
    void* eax6;
    void* ebx7;

    eax6 = reinterpret_cast<void*>(a2 * a3);
    ebx7 = eax6;
    if (reinterpret_cast<int32_t>(eax6) >> 31 != __intrinsic()) {
        ebx7 = reinterpret_cast<void*>(((a2 ^ a3) >> 31) + 0x7fffffff);
    }
    return ebx7;
}

void* sat_divs32b(int32_t ecx, int32_t a2, int32_t a3, uint32_t a4, void* a5) {
    __asm__("cdq ");
    return reinterpret_cast<int32_t>(a2 + reinterpret_cast<uint1_t>((a3 + 1 | a2 + 0x80000000) < 1)) / a3;
}

uint32_t abs32(int32_t ecx, uint32_t a2, int32_t a3, uint32_t a4, void* a5) {
    uint32_t eax6;

    eax6 = -a2;
    if (__intrinsic()) {
        eax6 = a2;
    }
    return eax6;
}

uint32_t sgn32(int32_t ecx, uint32_t a2, int32_t a3, uint32_t a4, void* a5) {
    int32_t eax6;

    eax6 = 0;
    *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(a2) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(a2 == 0)));
    return eax6 - (a2 >> 31);
}

uint32_t sat_addu64b(int32_t ecx, int32_t a2, int32_t a3, uint32_t a4, uint32_t a5, int32_t a6, int32_t a7, uint32_t a8, void* a9) {
    uint32_t tmp32_10;

    tmp32_10 = a4 + a2;
    return tmp32_10 - (tmp32_10 + reinterpret_cast<uint1_t>(tmp32_10 < tmp32_10 + reinterpret_cast<uint1_t>(a5 + a3 + reinterpret_cast<uint1_t>(tmp32_10 < a4) < a5))) | tmp32_10;
}

uint32_t sat_subu64b(int32_t ecx, uint32_t a2, uint32_t a3, uint32_t a4, int32_t a5, int32_t a6, int32_t a7, uint32_t a8, void* a9) {
    uint32_t ecx10;

    ecx10 = a2 - a4;
    return -static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(a3 >= a3 - (a5 + reinterpret_cast<uint1_t>(a3 < a5 + reinterpret_cast<uint1_t>(a2 < a4))) + reinterpret_cast<uint1_t>(a2 < ecx10)))) & ecx10;
}

int32_t __udivdi3(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

int32_t sat_divu64b(int32_t ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, uint32_t a8, void* a9) {
    int32_t eax10;

    eax10 = __udivdi3(__return_address(), a2, a3, a4);
    return eax10;
}

uint32_t sat_adds64b(int32_t ecx, int32_t a2, uint32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, uint32_t a8, void* a9) {
    uint32_t esi10;

    esi10 = reinterpret_cast<uint32_t>(a2 + a4);
    if (!__intrinsic()) {
        esi10 = (a3 >> 31) + 0x7fffffff;
    }
    return esi10;
}

uint32_t sat_subs64b(int32_t ecx, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int32_t a6, int32_t a7, uint32_t a8, void* a9) {
    uint32_t eax10;
    uint32_t ecx11;
    uint32_t tmp32_12;
    uint32_t ebx13;

    eax10 = a2 - a4;
    ecx11 = a3 >> 31;
    tmp32_12 = ecx11 + 0x7fffffff;
    ebx13 = reinterpret_cast<uint1_t>(tmp32_12 < ecx11);
    if (reinterpret_cast<int32_t>((a5 ^ ebx13) & (a3 - (a5 + reinterpret_cast<uint1_t>(a3 < a5 + reinterpret_cast<uint1_t>(a2 < a4))) ^ ebx13)) < reinterpret_cast<int32_t>(0)) {
        eax10 = tmp32_12;
    }
    return eax10;
}

int32_t __divdi3(uint32_t a1, uint32_t a2, uint32_t a3, int32_t a4);

int32_t sat_divs64b(int32_t ecx, uint32_t a2, int32_t a3, uint32_t a4, int32_t a5, int32_t a6, int32_t a7, uint32_t a8, void* a9) {
    uint32_t tmp32_10;
    uint32_t tmp32_11;
    uint32_t eax12;
    uint32_t tmp32_13;
    int32_t eax14;

    tmp32_10 = a4 + 1;
    tmp32_11 = a2 - 0x80000000;
    eax12 = reinterpret_cast<uint1_t>((tmp32_11 | tmp32_10 | (a3 - 1 + reinterpret_cast<uint1_t>(tmp32_11 < a2) | a5 + reinterpret_cast<uint1_t>(tmp32_10 < a4))) == 0);
    tmp32_13 = eax12 + a2;
    eax14 = __divdi3(tmp32_13, a3 + reinterpret_cast<uint1_t>(tmp32_13 < eax12), a4, a5);
    return eax14;
}

uint32_t abs64(int32_t ecx, uint32_t a2, int32_t a3, uint32_t a4, void* a5) {
    uint32_t eax6;

    eax6 = -a2;
    if (__intrinsic()) {
    }
    if (__intrinsic()) {
        eax6 = a2;
    }
    return eax6;
}

uint32_t sgn64(int32_t ecx, uint32_t a2, uint32_t a3, uint32_t a4, void* a5) {
    uint32_t edx6;

    edx6 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a3) >> 31);
    __asm__("cdq ");
    return (edx6 - (a3 + reinterpret_cast<uint1_t>(edx6 < a3 + reinterpret_cast<uint1_t>(edx6 < a2))) >> 31) - (a3 >> 31);
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

void fun_80492a2() {
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
    fun_80492d7(edx5, v4, eax6);
    ebx7 = ebx8 + 0x2d4c;
    fun_8049060(main, *reinterpret_cast<int16_t*>(&v1), esp3, ebx7 - 0x2660, ebx7 - 0x25f0, edx5, v4, eax6);
    __asm__("hlt ");
}

void fun_80492e2() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

signed char __TMC_END__ = 0;

void fun_8049382() {
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

void fun_80493b2() {
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

void fun_8049742() {
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

void fun_8049882() {
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

void fun_80499a2() {
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
    ebp3 = ebp4 + 0x2656;
    edi5 = v6;
    _init();
    ebx7 = ebp3 - 0xf0 - (ebp3 - 0xf4) >> 2;
    if (ebx7) {
        esi8 = 0;
        do {
            *reinterpret_cast<int32_t*>(ebp3 + esi8 * 4 - 0xf4)(*reinterpret_cast<int32_t*>(&v1), *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 4), edi5, 0x80499c1);
            ++esi8;
        } while (ebx7 != esi8);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_8049a12() {
    uint48_t v1;
    int16_t ds2;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    goto *reinterpret_cast<int16_t*>(&v1);
}

void fun_8049a1e() {
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

void fun_8049327() {
}

void fun_8049374() {
}

void fun_80493a1() {
}

void fun_80494e9() {
}

void fun_8049506() {
}

void fun_8049545() {
}

void fun_8049576() {
}

void fun_80495c9() {
}

void fun_8049615() {
}

void fun_804965d() {
}

void fun_80496cc() {
}

void fun_80496ec() {
}

void fun_80497b2() {
}

void fun_80497db() {
}

void fun_80497fa() {
}

void fun_80498b5() {
}

void fun_80498ca() {
}

void fun_80498e9() {
}

void fun_8049919() {
}

void fun_8049984() {
}

void fun_8049a05() {
}

int32_t g804c008 = 0;

void fun_8049046() {
    goto g804c008;
}

void fun_8049066() {
    goto 0x8049030;
}

void fun_8049331() {
}

void fun_8049379() {
}

void fun_80493a9() {
}

void fun_80493cd() {
}

void fun_804951b() {
}

void fun_80496ba() {
}

void fun_8049701() {
}

void fun_8049056() {
    goto 0x8049030;
}

int32_t main() {
    void* v1;
    void* eax2;
    uint32_t v3;
    uint32_t v4;
    uint32_t v5;
    void* eax6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    void* eax10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    void* eax14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t eax18;
    uint32_t eax19;
    void* eax20;
    void* eax21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    void* eax25;
    uint32_t v26;
    uint32_t v27;
    uint32_t v28;
    void* eax29;
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
    int32_t eax44;
    uint32_t tmp32_45;
    uint32_t eax46;
    uint32_t tmp32_47;
    uint32_t eax48;
    uint32_t tmp32_49;
    int32_t eax50;
    uint32_t tmp32_51;
    uint32_t eax52;
    uint32_t tmp32_53;
    uint32_t eax54;
    uint32_t tmp32_55;

    v1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    eax2 = sat_addu32b(0xff, 3);
    fun_8049040(3, "sat_addu32b(0x%08x,0x%08x) = 0x%08x\n", 0xff, 3, eax2, v3, v4, v5, v1);
    eax6 = sat_subu32b(3, 1, 3, 3, eax2);
    fun_8049040(3, "sat_subu32b(0x%08x,0x%08x) = 0x%08x\n", 1, 3, eax6, v7, v8, v9, v1);
    eax10 = sat_mulu32b(3, 0xff, 3, 3, eax6);
    fun_8049040(3, "sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n", 0xff, 3, eax10, v11, v12, v13, v1);
    eax14 = sat_divu32b("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n", 0xff, 3, 3, eax10);
    fun_8049040("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n", "sat_divu32b(0x%08x,0x%08x) = 0x%08x\n", 0xff, 3, eax14, v15, v16, v17, v1);
    eax18 = sat_adds32b_var3("sat_mulu32b(0x%08x,0x%08x) = 0x%08x\n", 0x7fffffff, 2, 3, eax14);
    eax19 = sat_adds32b_var2(2, 0x7fffffff, 2, 3, eax14);
    eax20 = sat_adds32b_var1(2, 0x7fffffff, 2, 3, eax14);
    fun_8049040(0x7fffffff, "sat_adds32b(0x%08x,0x%08x) = 0x%08x 0x%08x 0x%08x\n", 0x7fffffff, 2, eax20, eax19, eax18, 3, eax14);
    eax21 = sat_subs32b(0x7fffffff, 0x80000000, 2, 3, eax14);
    fun_8049040(0x7fffffff, "sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0x80000000, 2, eax21, v22, v23, v24, v1);
    eax25 = sat_muls32b("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0x7fffffff, 2, 2, eax21);
    fun_8049040("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", "sat_muls32b(0x%08x,0x%08x) = 0x%08x\n", 0x7fffffff, 2, eax25, v26, v27, v28, v1);
    eax29 = sat_divs32b("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0x80000000, 0xff, 2, eax25);
    fun_8049040("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", "sat_divs32b(0x%08x,0x%08x) = 0x%08x\n", 0x80000000, 0xff, eax29, v30, v31, v32, v1);
    eax33 = abs32("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0xfffffff0, 0x80000000, 0xff, eax29);
    fun_8049040("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", "abs32(0x%08x) = 0x%08x\n", 0xf0, eax33, eax29, v34, v35, v36, v1);
    eax37 = sgn32("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 3, 0xf0, eax33, eax29);
    fun_8049040("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", "sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29, v38, v39, v40, v1);
    eax41 = sat_addu64b("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0, 0, 0, 0, "sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29);
    eax42 = sat_subu64b("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0, 0, 0, 0, "sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29);
    tmp32_43 = eax41 + eax42;
    eax44 = sat_divu64b("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0, 0, 1, 0, "sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29);
    tmp32_45 = tmp32_43 + eax44;
    eax46 = sat_adds64b("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0, 0, 0, 0, "sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29);
    tmp32_47 = tmp32_45 + eax46;
    eax48 = sat_subs64b("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0, 0, 0, 0, "sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29);
    tmp32_49 = tmp32_47 + eax48;
    eax50 = sat_divs64b("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0, 0, 1, 0, "sgn32(0x%08x) = 0x%08x\n", 3, eax37, eax29);
    tmp32_51 = tmp32_49 + eax50;
    eax52 = abs64("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0, 0, eax37, eax29);
    tmp32_53 = tmp32_51 + eax52;
    eax54 = sgn64("sat_subs32b(0x%08x,0x%08x) = 0x%08x\n", 0, 0, eax37, eax29);
    tmp32_55 = eax54 + tmp32_53;
    if (!(2 + (4 + reinterpret_cast<uint1_t>(tmp32_43 < eax41) + 2 + (tmp32_45 < tmp32_43) + 2 + (tmp32_47 < tmp32_45) + 2 + (tmp32_49 < tmp32_47) + 2 + (tmp32_51 < tmp32_49) + 2 + (tmp32_53 < tmp32_51)) + (tmp32_55 < eax54) | tmp32_55 ^ 42)) {
        fun_8049050("not reached", 0, eax37, eax29);
    }
    return 0;
}

void fun_80493e5() {
}

void fun_8049415() {
}

void fun_80493fb() {
}

void fun_8049442() {
}

void fun_8049484() {
}

void fun_80494ac() {
}
