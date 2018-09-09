
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx();

void fun_8048330();

void _init() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    if (*reinterpret_cast<int32_t*>(ebx1 + 0x2d2b - 4)) {
        fun_8048330();
    }
    return;
}

/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

int32_t __gmon_start__ = 0;

void fun_8048330() {
    goto __gmon_start__;
}

int32_t basic_1_ternary_simple(uint32_t a1) {
    int32_t eax2;

    eax2 = 0;
    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<uint1_t>(a1 != 42);
    return eax2;
}

int32_t basic_2_ternary_other(uint32_t a1) {
    int32_t eax2;

    eax2 = 100;
    if (a1 != 42) {
        eax2 = 0xc9;
    }
    return eax2;
}

int32_t intermediate_1_ternary_blocks(uint32_t a1) {
    int32_t eax2;

    if (a1 != 42) {
        eax2 = 1;
    } else {
        eax2 = 0;
    }
    return eax2;
}

int32_t intermediate_2_other_in_blocks(uint32_t a1) {
    int32_t eax2;

    if (a1 != 42) {
        eax2 = 0xc9;
    } else {
        eax2 = 100;
    }
    return eax2;
}

void fun_8048300(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);

uint32_t __divdi3(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);

uint32_t __moddi3(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);

int32_t intermediate_10_double_word_signed_math(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, int32_t a7, uint32_t a8) {
    uint32_t esi9;
    uint32_t edi10;
    uint32_t tmp32_11;
    uint32_t edx12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t edx19;
    uint32_t v20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    uint32_t v25;
    uint32_t edx26;
    uint32_t v27;
    uint32_t v28;
    uint32_t v29;
    uint32_t v30;
    uint32_t v31;
    uint32_t v32;
    uint32_t v33;
    uint32_t eax34;
    uint32_t v35;
    uint32_t eax36;

    esi9 = a1;
    edi10 = a2;
    tmp32_11 = a3 + esi9;
    edx12 = a4 + edi10 + reinterpret_cast<uint1_t>(tmp32_11 < a3);
    if (reinterpret_cast<int32_t>(edx12) >= reinterpret_cast<int32_t>(a6)) {
        if (reinterpret_cast<int32_t>(edx12) <= reinterpret_cast<int32_t>(a6)) {
            if (tmp32_11 > a5) {
                fun_8048300("add", v13, v14, v15);
            }
        } else {
            fun_8048300("add", v16, v17, v18);
            esi9 = esi9;
        }
    }
    edx19 = edi10 - (a4 + reinterpret_cast<uint1_t>(edi10 < a4 + reinterpret_cast<uint1_t>(esi9 < a3)));
    if (reinterpret_cast<int32_t>(a6) <= reinterpret_cast<int32_t>(edx19)) {
        if (reinterpret_cast<int32_t>(a6) >= reinterpret_cast<int32_t>(edx19)) {
            if (a5 < esi9 - a3) {
                fun_8048300("sub", v20, v21, v22);
            }
        } else {
            fun_8048300("sub", v23, v24, v25);
        }
    }
    edx26 = __intrinsic() + (a3 * edi10 + a4 * esi9);
    if (reinterpret_cast<int32_t>(a6) <= reinterpret_cast<int32_t>(edx26)) {
        if (reinterpret_cast<int32_t>(a6) >= reinterpret_cast<int32_t>(edx26)) {
            if (a5 < a3 * esi9) {
                fun_8048300("mult", v27, v28, v29);
            }
        } else {
            fun_8048300("mult", v30, v31, v32);
            esi9 = esi9;
            edi10 = edi10;
        }
    }
    eax34 = __divdi3(esi9, edi10, v33, a3);
    if (reinterpret_cast<int32_t>(a6) > reinterpret_cast<int32_t>(edx26)) 
        goto addr_80485cc_17;
    if (reinterpret_cast<int32_t>(a6) >= reinterpret_cast<int32_t>(edx26)) {
        if (a5 >= eax34) {
            addr_80485cc_17:
            eax36 = __moddi3(esi9, edi10, v35, a3);
            if (!(a6 ^ edx26 | a5 ^ eax36)) {
                fun_8048300("modulo", edi10, v35, a3);
                return 0;
            } else {
                return 0;
            }
        }
    }
    fun_8048300("diff", edi10, v33, a3);
    goto addr_80485cc_17;
}

uint32_t __udivdi3(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);

uint32_t __umoddi3(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);

int32_t intermediate_10_double_word_unsigned_math(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, int32_t a7, uint32_t a8) {
    uint32_t esi9;
    uint32_t edi10;
    uint32_t tmp32_11;
    uint32_t edx12;
    uint32_t v13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint32_t edx19;
    uint32_t v20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    uint32_t v25;
    uint32_t edx26;
    uint32_t v27;
    uint32_t v28;
    uint32_t v29;
    uint32_t v30;
    uint32_t v31;
    uint32_t v32;
    uint32_t v33;
    uint32_t eax34;
    uint32_t v35;
    uint32_t eax36;

    esi9 = a1;
    edi10 = a2;
    tmp32_11 = a3 + esi9;
    edx12 = a4 + edi10 + reinterpret_cast<uint1_t>(tmp32_11 < a3);
    if (edx12 >= a6) {
        if (edx12 <= a6) {
            if (tmp32_11 > a5) {
                fun_8048300("add", v13, v14, v15);
            }
        } else {
            fun_8048300("add", v16, v17, v18);
            esi9 = esi9;
        }
    }
    edx19 = edi10 - (a4 + reinterpret_cast<uint1_t>(edi10 < a4 + reinterpret_cast<uint1_t>(esi9 < a3)));
    if (a6 <= edx19) {
        if (a6 >= edx19) {
            if (a5 < esi9 - a3) {
                fun_8048300("sub", v20, v21, v22);
            }
        } else {
            fun_8048300("sub", v23, v24, v25);
        }
    }
    edx26 = __intrinsic() + (a3 * edi10 + a4 * esi9);
    if (a6 <= edx26) {
        if (a6 >= edx26) {
            if (a5 < a3 * esi9) {
                fun_8048300("mult", v27, v28, v29);
            }
        } else {
            fun_8048300("mult", v30, v31, v32);
            esi9 = esi9;
            edi10 = edi10;
        }
    }
    eax34 = __udivdi3(esi9, edi10, v33, a3);
    if (a6 > edx26) 
        goto addr_804875c_17;
    if (a6 >= edx26) {
        if (a5 >= eax34) {
            addr_804875c_17:
            eax36 = __umoddi3(esi9, edi10, v35, a3);
            if (!(a6 ^ edx26 | a5 ^ eax36)) {
                fun_8048300("modulo", edi10, v35, a3);
                return 0;
            } else {
                return 0;
            }
        }
    }
    fun_8048300("diff", edi10, v33, a3);
    goto addr_804875c_17;
}

void fun_8048320(int32_t a1);

int32_t advanced_1_unrolled_loop() {
    int32_t ebx1;
    uint32_t v2;
    uint32_t v3;
    uint32_t v4;
    int32_t v5;
    int32_t ebx6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    int32_t eax10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;

    ebx1 = 48;
    fun_8048300("basic", v2, v3, v4);
    do {
        v5 = ebx1;
        ++ebx1;
        fun_8048320(v5);
    } while (ebx1 != 58);
    ebx6 = 48;
    fun_8048300("partial unrolled", v7, v8, v9);
    do {
        fun_8048320(ebx6);
        eax10 = ebx6 + 1;
        ebx6 = ebx6 + 2;
        fun_8048320(eax10);
    } while (ebx6 != 58);
    fun_8048300("fully unrolled", v11, v12, v13);
    fun_8048320(48);
    fun_8048320(49);
    fun_8048320(50);
    fun_8048320(51);
    fun_8048320(52);
    fun_8048320(53);
    fun_8048320(54);
    fun_8048320(55);
    fun_8048320(56);
    fun_8048320(57);
    return 0;
}

int32_t putchar(int32_t a1, int32_t a2);

int32_t deregister_tm_clones() {
    int32_t eax1;
    int32_t v2;

    eax1 = 3;
    if (!1 && (eax1 = 0, !1)) {
        eax1 = putchar(0x804b01c, v2);
    }
    return eax1;
}

int32_t puts = 0x8048306;

void fun_8048300(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    goto puts;
}

uint32_t __divdi3(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t edx5;
    uint32_t eax6;
    int32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint1_t cf10;
    uint1_t cf11;
    uint32_t ecx12;
    uint32_t ebp13;
    uint32_t ecx14;
    uint32_t eax15;
    uint32_t ecx16;
    uint32_t ecx17;
    uint32_t v18;
    uint32_t ecx19;
    uint32_t ecx20;
    uint32_t eax21;
    uint32_t eax22;
    uint32_t ebx23;
    uint32_t ecx24;
    uint32_t ecx25;
    uint32_t eax26;

    edx5 = a2;
    eax6 = a1;
    v7 = 0;
    v8 = a4;
    v9 = a3;
    if (reinterpret_cast<int32_t>(edx5) < reinterpret_cast<int32_t>(0)) {
        cf10 = reinterpret_cast<uint1_t>(!!eax6);
        eax6 = -eax6;
        v7 = -1;
        edx5 = -(edx5 + cf10);
    }
    if (reinterpret_cast<int32_t>(a4) < reinterpret_cast<int32_t>(0)) {
        cf11 = reinterpret_cast<uint1_t>(!!v9);
        v9 = -v9;
        v7 = ~v7;
        v8 = -(v8 + cf11);
    }
    ecx12 = v9;
    if (v8) {
        if (v8 <= edx5) {
            __asm__("bsr ebp, ebx");
            ebp13 = eax6 ^ 31;
            if (ebp13) {
                ecx14 = ebp13;
                eax15 = 32 - ebp13;
                ecx16 = eax15;
                ecx17 = ebp13;
                v18 = v9 >> *reinterpret_cast<signed char*>(&ecx16) | v8 << *reinterpret_cast<unsigned char*>(&ecx14);
                ecx19 = ebp13;
                ecx20 = eax15;
                eax21 = edx5 << *reinterpret_cast<unsigned char*>(&ecx19) | eax6 >> *reinterpret_cast<signed char*>(&ecx20);
                eax22 = eax21 / v18;
                ebx23 = eax21 % v18;
                if (ebx23 < __intrinsic() || (ecx24 = ebp13, eax6 << *reinterpret_cast<unsigned char*>(&ecx24) < eax22 * (v9 << *reinterpret_cast<unsigned char*>(&ecx17))) && ebx23 == __intrinsic()) {
                    ecx25 = eax22 + 0xffffffff;
                } else {
                    ecx25 = eax22;
                }
            } else {
                if (v8 < edx5 || (ecx25 = 0, v9 <= eax6)) {
                    ecx25 = 1;
                }
            }
        } else {
            ecx25 = 0;
        }
    } else {
        if (v9 <= edx5) {
            if (!ecx12) {
                ecx12 = 1 / ecx12;
            }
            ecx25 = eax6 / ecx12;
        } else {
            ecx25 = eax6 / v9;
        }
    }
    eax26 = ecx25;
    if (v7) {
        eax26 = -eax26;
    }
    return eax26;
}

uint32_t __udivdi3(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t edi5;
    uint32_t ebx6;
    uint32_t ecx7;
    uint32_t ebx8;
    uint32_t ecx9;
    uint32_t ecx10;
    uint32_t esi11;
    uint32_t ecx12;
    uint32_t ecx13;
    uint32_t eax14;
    uint32_t eax15;
    uint32_t ebp16;
    uint32_t ebx17;
    uint32_t ecx18;
    uint32_t ebp19;

    if (a4) {
        if (a4 > a2) {
            return 0;
        } else {
            __asm__("bsr edi, esi");
            edi5 = a3 ^ 31;
            if (!edi5) {
                if (a4 < a2 || (ebx6 = 0, a3 <= a1)) {
                    ebx6 = 1;
                }
            } else {
                ecx7 = edi5;
                ebx8 = 32 - edi5;
                ecx9 = ebx8;
                ecx10 = edi5;
                esi11 = a4 << *reinterpret_cast<unsigned char*>(&ecx7) | a3 >> *reinterpret_cast<signed char*>(&ecx9);
                ecx12 = edi5;
                ecx13 = ebx8;
                eax14 = a2 << *reinterpret_cast<unsigned char*>(&ecx12) | a1 >> *reinterpret_cast<signed char*>(&ecx13);
                eax15 = eax14 / esi11;
                ebp16 = eax14 % esi11;
                ebx17 = eax15;
                if (ebp16 < __intrinsic() || (ecx18 = edi5, a1 << *reinterpret_cast<unsigned char*>(&ecx18) < eax15 * (a3 << *reinterpret_cast<unsigned char*>(&ecx10))) && ebp16 == __intrinsic()) {
                    --ebx17;
                }
                return ebx17;
            }
        }
    } else {
        if (a3 > a2) {
            return a1 / a3;
        } else {
            ebp19 = a3;
            if (!a3) {
                ebp19 = 1 / a3;
            }
            ebx6 = a1 / ebp19;
        }
    }
    return ebx6;
}

int32_t putchar = 0x8048326;

void fun_8048320(int32_t a1) {
    goto putchar;
}

int32_t __libc_start_main = 0x8048316;

void fun_8048310(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    goto __libc_start_main;
}

uint32_t __moddi3(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t edi5;
    uint32_t esi6;
    int32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint1_t cf10;
    uint1_t cf11;
    uint32_t v12;
    uint32_t ecx13;
    uint32_t edi14;
    uint32_t v15;
    uint32_t edx16;
    uint32_t ecx17;
    uint32_t v18;
    uint32_t ecx19;
    uint32_t v20;
    uint32_t ecx21;
    uint32_t ecx22;
    uint32_t edi23;
    uint32_t ecx24;
    uint32_t ecx25;
    uint32_t ebp26;
    uint32_t eax27;
    uint32_t ebx28;
    uint32_t eax29;
    uint32_t esi30;
    uint32_t ecx31;
    uint32_t ecx32;
    uint32_t ecx33;
    uint32_t eax34;
    uint32_t v35;

    edi5 = a2;
    esi6 = a1;
    v7 = 0;
    v8 = a3;
    v9 = a4;
    if (reinterpret_cast<int32_t>(edi5) < reinterpret_cast<int32_t>(0)) {
        cf10 = reinterpret_cast<uint1_t>(!!esi6);
        esi6 = -esi6;
        v7 = -1;
        edi5 = -(edi5 + cf10);
    }
    if (reinterpret_cast<int32_t>(a4) < reinterpret_cast<int32_t>(0)) {
        cf11 = reinterpret_cast<uint1_t>(!!v8);
        v8 = -v8;
        v9 = -(v9 + cf11);
    }
    v12 = esi6;
    ecx13 = v8;
    if (v9) {
        if (v9 <= edi5) {
            __asm__("bsr edi, ebx");
            edi14 = edi5 ^ 31;
            v15 = edi14;
            if (edi14) {
                edx16 = 32 - v15;
                ecx17 = v15;
                v18 = edx16;
                ecx19 = edx16;
                v20 = v8 >> *reinterpret_cast<signed char*>(&ecx19) | v9 << *reinterpret_cast<unsigned char*>(&ecx17);
                ecx21 = v15;
                ecx22 = *reinterpret_cast<unsigned char*>(&v15);
                edi23 = v8 << *reinterpret_cast<unsigned char*>(&ecx21);
                ecx24 = edx16;
                ecx25 = *reinterpret_cast<unsigned char*>(&v15);
                ebp26 = esi6 << *reinterpret_cast<unsigned char*>(&ecx25);
                eax27 = edi5 << *reinterpret_cast<unsigned char*>(&ecx22) | esi6 >> *reinterpret_cast<signed char*>(&ecx24);
                ebx28 = eax27 % v20;
                eax29 = eax27 / v20 * edi23;
                esi30 = eax29;
                ecx31 = __intrinsic();
                if (ebx28 < __intrinsic() || ebx28 == __intrinsic() && ebp26 < eax29) {
                    ecx31 = __intrinsic() - (v20 + reinterpret_cast<uint1_t>(__intrinsic() < v20 + reinterpret_cast<uint1_t>(eax29 < edi23)));
                    esi30 = eax29 - edi23;
                }
                ecx32 = *reinterpret_cast<unsigned char*>(&v18);
                ecx33 = v15;
                eax34 = ebx28 - (ecx31 + reinterpret_cast<uint1_t>(ebx28 < ecx31 + reinterpret_cast<uint1_t>(ebp26 < esi30))) << *reinterpret_cast<unsigned char*>(&ecx32) | ebp26 - esi30 >> *reinterpret_cast<signed char*>(&ecx33);
            } else {
                if (v9 < edi5 || ecx13 <= v12) {
                    v12 = v12 - ecx13;
                }
                eax34 = v12;
            }
        } else {
            eax34 = esi6;
        }
    } else {
        if (v8 <= edi5) {
            if (!ecx13) {
                ecx13 = 1 / ecx13;
            }
            v35 = v12 % ecx13;
        } else {
            v35 = esi6 % v8;
        }
        eax34 = v35;
    }
    if (v7) {
        eax34 = -eax34;
    }
    return eax34;
}

uint32_t __umoddi3(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t v5;
    uint32_t ebp6;
    uint32_t ebp7;
    uint32_t ecx8;
    uint32_t edi9;
    uint32_t ecx10;
    uint32_t ecx11;
    uint32_t v12;
    uint32_t v13;
    uint32_t ecx14;
    uint32_t ecx15;
    uint32_t ecx16;
    uint32_t eax17;
    uint32_t esi18;
    uint32_t eax19;
    uint32_t v20;
    uint32_t ecx21;
    uint32_t ebx22;
    uint32_t ecx23;
    uint32_t ecx24;
    uint32_t ebp25;
    uint32_t edx26;

    v5 = a1;
    if (a4) {
        if (a4 > a2) {
            return a1;
        } else {
            __asm__("bsr ebp, eax");
            ebp6 = ebp7 ^ 31;
            if (ebp6) {
                ecx8 = ebp6;
                edi9 = 32 - ebp6;
                ecx10 = edi9;
                ecx11 = ebp6;
                v12 = a3 >> *reinterpret_cast<signed char*>(&ecx10) | a4 << *reinterpret_cast<unsigned char*>(&ecx8);
                v13 = a3 << *reinterpret_cast<unsigned char*>(&ecx11);
                ecx14 = ebp6;
                ecx15 = edi9;
                ecx16 = ebp6;
                eax17 = a1 >> *reinterpret_cast<signed char*>(&ecx15) | a2 << *reinterpret_cast<unsigned char*>(&ecx14);
                esi18 = eax17 % v12;
                eax19 = eax17 / v12 * v13;
                v20 = a1 << *reinterpret_cast<unsigned char*>(&ecx16);
                ecx21 = __intrinsic();
                ebx22 = eax19;
                if (esi18 < __intrinsic() || esi18 == __intrinsic() && v20 < eax19) {
                    ecx21 = __intrinsic() - (v12 + reinterpret_cast<uint1_t>(__intrinsic() < v12 + reinterpret_cast<uint1_t>(eax19 < v13)));
                    ebx22 = eax19 - v13;
                }
                ecx23 = edi9;
                ecx24 = ebp6;
                return esi18 - (ecx21 + reinterpret_cast<uint1_t>(esi18 < ecx21 + reinterpret_cast<uint1_t>(v20 < ebx22))) << *reinterpret_cast<unsigned char*>(&ecx23) | v20 - ebx22 >> *reinterpret_cast<signed char*>(&ecx24);
            } else {
                if (a4 < a2 || a3 <= a1) {
                    v5 = a1 - a3;
                }
                return v5;
            }
        }
    } else {
        if (a3 <= a2) {
            ebp25 = a3;
            if (!a3) {
                ebp25 = 1 / a3;
            }
            edx26 = a1 % ebp25;
        } else {
            edx26 = a1 % a3;
        }
        return edx26;
    }
}

int32_t main(uint32_t a1, signed char** a2) {
    uint32_t edi3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;

    edi3 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a1) >> 31);
    eax4 = basic_1_ternary_simple(a1);
    eax5 = basic_2_ternary_other(a1);
    eax6 = intermediate_1_ternary_blocks(a1);
    eax7 = intermediate_2_other_in_blocks(a1);
    eax8 = intermediate_10_double_word_signed_math(a1, edi3, a1, edi3, a1, edi3, 0x8048371, a1);
    eax9 = intermediate_10_double_word_unsigned_math(a1, edi3, a1, edi3, a1, edi3, 0x8048371, a1);
    eax10 = advanced_1_unrolled_loop();
    return **a2 + (eax4 + eax5 + eax6 + eax7 + eax8 + eax9 + eax10);
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void fun_80482fc() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void __libc_csu_init(int32_t a1, int32_t a2);

void _start() {
    void* esp1;
    int32_t edx2;
    int32_t eax3;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_8048310(main, __return_address(), esp1, __libc_csu_init, 0x8048f70, edx2, (reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4, eax3);
    __asm__("hlt ");
}

int32_t __JCR_END__ = 0;

int32_t frame_dummy() {
    int32_t edx1;
    int32_t v2;
    int32_t eax3;

    edx1 = __JCR_END__;
    if (!(!edx1 || 1)) {
        putchar(0x804af10, v2);
    }
    eax3 = 0;
    if (!1 && !1) {
        eax3 = putchar(0x804b01c, 0);
    }
    return eax3;
}

void fun_804849d() {
}

void fun_80484e3() {
}

void fun_804860d() {
}

void fun_8048629() {
}

void fun_804864d() {
}

void fun_804865d() {
}

void fun_804879d() {
}

void fun_80487b9() {
}

void fun_80487dd() {
}

void fun_80487ed() {
}

void fun_804899c() {
}

void fun_80489c4() {
}

void fun_80489e4() {
}

void fun_8048a09() {
}

void fun_8048a99() {
}

void fun_8048b1c() {
}

void fun_8048b44() {
}

void fun_8048b71() {
}

void fun_8048b9d() {
}

void fun_8048e2c() {
}

void fun_8048e4d() {
}

void fun_8048f6d() {
    return;
}

void fun_80484cc() {
}

void fun_804842c() {
}

signed char __TMC_END__ = 0;

int32_t fun_8048465() {
    int1_t zf1;
    int32_t eax2;

    zf1 = __TMC_END__ == 0;
    if (zf1) {
        eax2 = deregister_tm_clones();
        __TMC_END__ = 1;
    }
    return eax2;
}

int32_t g804b008 = 0;

void fun_8048306() {
    goto g804b008;
}

void fun_8048326() {
    goto 0x80482f0;
}

void fun_8048a25() {
}

void fun_8048bb1() {
}

void fun_8048c6c() {
}

void fun_8048d94() {
}

void fun_8048d62() {
}

void fun_8048ce9() {
}

void __libc_csu_init(int32_t a1, int32_t a2) {
    int32_t ebx3;
    int32_t ebx4;
    int32_t ebp5;
    int32_t esi6;
    int32_t edi7;
    int32_t esi8;

    __x86_get_pc_thunk_bx();
    ebx3 = ebx4 + 0x20e7;
    ebp5 = a1;
    _init();
    esi6 = ebx3 - 0xf4 - (ebx3 - 0xf8) >> 2;
    if (esi6) {
        edi7 = 0;
        esi8 = esi6;
        do {
            *reinterpret_cast<int32_t*>(ebx3 + edi7 * 4 - 0xf8)(ebp5, a1, a2, 0x8048f31);
            ++edi7;
        } while (esi8 != edi7);
    }
    return;
}

void fun_8048eed() {
}

void fun_8048316() {
    goto 0x80482f0;
}

void fun_8048a3c() {
}

void fun_804867a() {
}

void fun_804880a() {
}

void fun_8048e5c() {
}

void fun_8048bcc() {
}

void fun_8048d79() {
}
