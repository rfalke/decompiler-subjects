
struct s0 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    signed char[208] pad240;
    int32_t ff0;
};

struct s1 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
};

int32_t fun_401000(void** ecx, struct s0* a2) {
    struct s1* eax3;
    uint32_t ecx4;
    uint32_t ebx5;
    uint32_t edx6;
    uint32_t ecx7;
    uint32_t edx8;
    uint32_t edx9;
    uint32_t* edi10;
    uint32_t edx11;
    uint32_t esi12;
    uint32_t ecx13;
    uint32_t edx14;

    if (!ecx || !a2) {
        return -1;
    } else {
        a2->ff0 = 10;
        eax3 = reinterpret_cast<struct s1*>(&a2->f4);
        a2->f0 = ((static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx))) << 8 ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx + 1)))) << 8 ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx + 2)))) << 8 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ecx + 3));
        eax3->f0 = ((static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx + 4))) << 8 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ecx + 5))) << 8 ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx + 6)))) << 8 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ecx + 7));
        a2->f8 = ((static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx + 8))) << 8 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ecx + 9))) << 8 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ecx + 10))) << 8 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ecx + 11));
        ecx4 = *reinterpret_cast<unsigned char*>(ecx + 13);
        ebx5 = ((static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx + 12))) << 8 ^ ecx4) << 8 ^ static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx + 14)))) << 8 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(ecx + 15));
        a2->fc = ebx5;
        edx6 = (*reinterpret_cast<uint32_t*>((ebx5 >> 16 & 0xff) * 4 + 0x416130) ^ 0x1000000) & 0xff000000 ^ *reinterpret_cast<uint32_t*>((ebx5 >> 8 & 0xff) * 4 + 0x416130) & 0xff0000 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>((ebx5 >> 24) * 4 + 0x416130)) ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&ebx5) * 4 + 0x416130) & 0xff00 ^ a2->f0;
        ecx7 = eax3->f0 ^ edx6;
        a2->f10 = edx6;
        edx8 = a2->f8;
        a2->f14 = ecx7;
        edx9 = edx8 ^ ecx7;
        a2->f18 = edx9;
        a2->f1c = ebx5 ^ edx9;
        edi10 = reinterpret_cast<uint32_t*>(0x414d04);
        do {
            edx11 = eax3->f18;
            eax3 = reinterpret_cast<struct s1*>(&eax3->f10);
            esi12 = *reinterpret_cast<uint32_t*>((edx11 >> 8 & 0xff) * 4 + 0x416130) & 0xff0000 ^ *reinterpret_cast<uint32_t*>((edx11 >> 16 & 0xff) * 4 + 0x416130) & 0xff000000 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>((edx11 >> 24) * 4 + 0x416130)) ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&edx11) * 4 + 0x416130) & 0xff00 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(eax3) - 4) ^ *edi10;
            ++edi10;
            eax3->fc = esi12;
            ecx13 = eax3->f0 ^ esi12;
            eax3->f10 = ecx13;
            edx14 = eax3->f4 ^ ecx13;
            eax3->f14 = edx14;
            eax3->f18 = eax3->f8 ^ edx14;
        } while (!reinterpret_cast<int1_t>(edi10 == 0x414d28));
        return 0;
    }
}

uint32_t g419eec;

struct s2 {
    int32_t f0;
    signed char f1;
    signed char f2;
    signed char f3;
};

struct s3 {
    int32_t f0;
    signed char f1;
    signed char f2;
    signed char f3;
};

uint32_t g418e00 = 1;

struct s4 {
    signed char[8] pad8;
    void** f8;
};

struct s5 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s6 {
    signed char[12] pad12;
    void** fc;
};

void** fun_405c40(void** ecx, void** a2, void** a3, void** a4) {
    void** esi5;
    void** ecx6;
    void** edi7;
    int1_t cf8;
    struct s2* esi9;
    struct s3* edi10;
    uint32_t ecx11;
    uint32_t edx12;
    uint32_t ecx13;
    uint32_t edx14;
    void* eax15;
    int1_t cf16;
    void** v17;
    uint32_t eax18;
    uint32_t edx19;
    void** v20;
    uint32_t eax21;
    uint32_t ecx22;
    uint32_t eax23;
    uint32_t ecx24;
    uint32_t edx25;
    uint32_t edx26;
    uint32_t ecx27;
    uint32_t eax28;
    uint32_t ecx29;
    uint32_t ecx30;
    int1_t cf31;
    struct s4* esi32;
    struct s5* esi33;
    struct s6* esi34;

    esi5 = a3;
    ecx6 = a4;
    edi7 = a2;
    if (reinterpret_cast<unsigned char>(edi7) <= reinterpret_cast<unsigned char>(esi5) || reinterpret_cast<unsigned char>(edi7) >= reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<unsigned char>(esi5))) {
        cf8 = static_cast<int1_t>(g419eec >> 1);
        if (cf8) {
            while (ecx6) {
                --ecx6;
                *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
                ++edi7;
                ++esi5;
            }
            goto addr_405f88_7;
        }
        if (reinterpret_cast<unsigned char>(ecx6) >= reinterpret_cast<unsigned char>(0x80)) 
            goto addr_405c7d_9;
    } else {
        esi9 = reinterpret_cast<struct s2*>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<unsigned char>(esi5) + 0xfffffffc);
        edi10 = reinterpret_cast<struct s3*>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<unsigned char>(edi7) + 0xfffffffc);
        if (reinterpret_cast<uint32_t>(edi10) & 3) {
            if (reinterpret_cast<unsigned char>(ecx6) >= reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>("a@" + (reinterpret_cast<uint32_t>(edi10) & 3) * 4);
            }
            goto *reinterpret_cast<int32_t*>("$a@" + reinterpret_cast<unsigned char>(ecx6) * 4);
        } else {
            ecx11 = reinterpret_cast<unsigned char>(ecx6) >> 2;
            edx12 = reinterpret_cast<unsigned char>(ecx6) & 3;
            if (ecx11 < 8) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(-ecx11) * 4 + 0x4060c4);
                goto *reinterpret_cast<int32_t*>("$a@" + edx12 * 4);
            } else {
                while (ecx11) {
                    --ecx11;
                    edi10->f0 = esi9->f0;
                    edi10 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(edi10) - 4);
                    esi9 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esi9) - 4);
                }
                goto *reinterpret_cast<int32_t*>("$a@" + edx12 * 4);
            }
        }
    }
    addr_405e4b_21:
    if (reinterpret_cast<unsigned char>(edi7) & 3) {
        addr_405e68_22:
        if (reinterpret_cast<unsigned char>(ecx6) < reinterpret_cast<unsigned char>(4)) {
            goto *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx6 - 4) * 4 + 0x405f88);
        } else {
            goto *reinterpret_cast<int32_t*>("_@" + (reinterpret_cast<unsigned char>(edi7) & 3) * 4);
        }
    } else {
        ecx13 = reinterpret_cast<unsigned char>(ecx6) >> 2;
        edx14 = reinterpret_cast<unsigned char>(ecx6) & 3;
        if (ecx13 >= 8) {
            while (ecx13) {
                --ecx13;
                *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
                edi7 = edi7 + 4;
                esi5 = esi5 + 4;
            }
            goto *reinterpret_cast<int32_t*>(edx14 * 4 + 0x405f78);
        }
    }
    switch (ecx13) {
        addr_405f6f_31:
    case 0:
        switch (edx14) {
            addr_405f88_7:
        case 0:
            return a2;
        case 1:
            *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
            return a2;
        case 2:
            *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
            *reinterpret_cast<void***>(edi7 + 1) = *reinterpret_cast<void***>(esi5 + 1);
            return a2;
        case 3:
            *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
            *reinterpret_cast<void***>(edi7 + 1) = *reinterpret_cast<void***>(esi5 + 1);
            *reinterpret_cast<void***>(edi7 + 2) = *reinterpret_cast<void***>(esi5 + 2);
            return a2;
        }
        addr_405f5c_35:
    case 1:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 4);
        eax15 = reinterpret_cast<void*>(ecx13 * 4);
        esi5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi5) + reinterpret_cast<uint32_t>(eax15));
        edi7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi7) + reinterpret_cast<uint32_t>(eax15));
        goto addr_405f6f_31;
        addr_405f54_36:
    case 2:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 8);
        goto addr_405f5c_35;
        addr_405f4c_37:
    case 3:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 12);
        goto addr_405f54_36;
        addr_405f44_38:
    case 4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 16);
        goto addr_405f4c_37;
        addr_405f3c_39:
    case 5:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 20);
        goto addr_405f44_38;
        addr_405f34_40:
    case 6:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 24) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 24);
        goto addr_405f3c_39;
    case 7:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 28) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 28);
        goto addr_405f34_40;
    }
    addr_405c7d_9:
    if (!((reinterpret_cast<unsigned char>(edi7) ^ reinterpret_cast<unsigned char>(esi5)) & 15) && (cf16 = static_cast<int1_t>(g418e00 >> 1), cf16)) {
        v17 = edi7;
        eax18 = reinterpret_cast<unsigned char>(esi5) & 15;
        if (eax18) {
            edx19 = 16 - eax18;
            v20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx6) - edx19);
            eax21 = edx19;
            ecx22 = eax21 & 3;
            if (ecx22) {
                do {
                    *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
                    ++esi5;
                    ++edi7;
                    --ecx22;
                } while (ecx22);
            }
            eax23 = eax21 >> 2;
            if (eax23) {
                do {
                    *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
                    esi5 = esi5 + 4;
                    edi7 = edi7 + 4;
                    --eax23;
                } while (eax23);
            }
            ecx6 = v20;
        }
        ecx24 = reinterpret_cast<unsigned char>(ecx6) & 0x7f;
        edx25 = reinterpret_cast<unsigned char>(ecx6) >> 7;
        if (edx25) {
            do {
                __asm__("movdqa xmm0, [esi]");
                __asm__("movdqa xmm1, [esi+0x10]");
                __asm__("movdqa xmm2, [esi+0x20]");
                __asm__("movdqa xmm3, [esi+0x30]");
                __asm__("movdqa [edi], xmm0");
                __asm__("movdqa [edi+0x10], xmm1");
                __asm__("movdqa [edi+0x20], xmm2");
                __asm__("movdqa [edi+0x30], xmm3");
                __asm__("movdqa xmm4, [esi+0x40]");
                __asm__("movdqa xmm5, [esi+0x50]");
                __asm__("movdqa xmm6, [esi+0x60]");
                __asm__("movdqa xmm7, [esi+0x70]");
                __asm__("movdqa [edi+0x40], xmm4");
                __asm__("movdqa [edi+0x50], xmm5");
                __asm__("movdqa [edi+0x60], xmm6");
                __asm__("movdqa [edi+0x70], xmm7");
                esi5 = esi5 + 0x80;
                edi7 = edi7 + 0x80;
                --edx25;
            } while (edx25);
        }
        if (ecx24) {
            edx26 = ecx24 >> 4;
            if (edx26) {
                do {
                    __asm__("movdqa xmm0, [esi]");
                    __asm__("movdqa [edi], xmm0");
                    esi5 = esi5 + 16;
                    edi7 = edi7 + 16;
                    --edx26;
                } while (edx26);
            }
            ecx27 = ecx24 & 15;
            if (ecx27) {
                eax28 = ecx27;
                ecx29 = ecx27 >> 2;
                if (ecx29) {
                    do {
                        *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
                        esi5 = esi5 + 4;
                        edi7 = edi7 + 4;
                        --ecx29;
                    } while (ecx29);
                }
                ecx30 = eax28 & 3;
                if (ecx30) {
                    do {
                        *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
                        ++esi5;
                        ++edi7;
                        --ecx30;
                    } while (ecx30);
                }
            }
        }
        return v17;
    }
    cf31 = static_cast<int1_t>(g419eec);
    if (!cf31) 
        goto addr_405e4b_21;
    if (reinterpret_cast<unsigned char>(edi7) & 3) 
        goto addr_405e68_22;
    if (!(reinterpret_cast<unsigned char>(esi5) & 3)) {
        if (static_cast<int1_t>(reinterpret_cast<unsigned char>(edi7) >> 2)) {
            ecx6 = ecx6 - 4;
            esi5 = esi5 + 4;
            *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
            edi7 = edi7 + 4;
        }
        if (static_cast<int1_t>(reinterpret_cast<unsigned char>(edi7) >> 3)) {
            __asm__("movq xmm1, [esi]");
            ecx6 = ecx6 - 8;
            esi5 = esi5 + 8;
            __asm__("movq [edi], xmm1");
            edi7 = edi7 + 8;
        }
        if (!(reinterpret_cast<unsigned char>(esi5) & 7)) {
            __asm__("movdqa xmm1, [esi-0x8]");
            esi32 = reinterpret_cast<struct s4*>(esi5 + 0xfffffff8);
            ecx6 = ecx6;
            do {
                __asm__("movdqa xmm3, [esi+0x10]");
                ecx6 = ecx6 - 48;
                __asm__("movdqa xmm0, [esi+0x20]");
                __asm__("movdqa xmm5, [esi+0x30]");
                esi32 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esi32) + 48);
                __asm__("movdqa xmm2, xmm3");
                __asm__("palignr xmm3, xmm1, 0x8");
                __asm__("movdqa [edi], xmm3");
                __asm__("movdqa xmm4, xmm0");
                __asm__("palignr xmm0, xmm2, 0x8");
                __asm__("movdqa [edi+0x10], xmm0");
                __asm__("movdqa xmm1, xmm5");
                __asm__("palignr xmm5, xmm4, 0x8");
                __asm__("movdqa [edi+0x20], xmm5");
                edi7 = edi7 + 48;
            } while (reinterpret_cast<signed char>(ecx6) >= reinterpret_cast<signed char>(48));
            esi5 = reinterpret_cast<void**>(&esi32->f8);
        } else {
            if (!static_cast<int1_t>(reinterpret_cast<unsigned char>(esi5) >> 3)) {
                __asm__("movdqa xmm1, [esi-0x4]");
                esi33 = reinterpret_cast<struct s5*>(esi5 + 0xfffffffc);
                edi7 = edi7;
                do {
                    __asm__("movdqa xmm3, [esi+0x10]");
                    ecx6 = ecx6 - 48;
                    __asm__("movdqa xmm0, [esi+0x20]");
                    __asm__("movdqa xmm5, [esi+0x30]");
                    esi33 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esi33) + 48);
                    __asm__("movdqa xmm2, xmm3");
                    __asm__("palignr xmm3, xmm1, 0x4");
                    __asm__("movdqa [edi], xmm3");
                    __asm__("movdqa xmm4, xmm0");
                    __asm__("palignr xmm0, xmm2, 0x4");
                    __asm__("movdqa [edi+0x10], xmm0");
                    __asm__("movdqa xmm1, xmm5");
                    __asm__("palignr xmm5, xmm4, 0x4");
                    __asm__("movdqa [edi+0x20], xmm5");
                    edi7 = edi7 + 48;
                } while (reinterpret_cast<signed char>(ecx6) >= reinterpret_cast<signed char>(48));
                esi5 = reinterpret_cast<void**>(&esi33->f4);
            } else {
                __asm__("movdqa xmm1, [esi-0xc]");
                esi34 = reinterpret_cast<struct s6*>(esi5 + 0xfffffff4);
                do {
                    __asm__("movdqa xmm3, [esi+0x10]");
                    ecx6 = ecx6 - 48;
                    __asm__("movdqa xmm0, [esi+0x20]");
                    __asm__("movdqa xmm5, [esi+0x30]");
                    esi34 = reinterpret_cast<struct s6*>(reinterpret_cast<uint32_t>(esi34) + 48);
                    __asm__("movdqa xmm2, xmm3");
                    __asm__("palignr xmm3, xmm1, 0xc");
                    __asm__("movdqa [edi], xmm3");
                    __asm__("movdqa xmm4, xmm0");
                    __asm__("palignr xmm0, xmm2, 0xc");
                    __asm__("movdqa [edi+0x10], xmm0");
                    __asm__("movdqa xmm1, xmm5");
                    __asm__("palignr xmm5, xmm4, 0xc");
                    __asm__("movdqa [edi+0x20], xmm5");
                    edi7 = edi7 + 48;
                } while (reinterpret_cast<signed char>(ecx6) >= reinterpret_cast<signed char>(48));
                esi5 = reinterpret_cast<void**>(&esi34->fc);
            }
        }
        while (reinterpret_cast<signed char>(ecx6) >= reinterpret_cast<signed char>(16)) {
            __asm__("movdqu xmm1, [esi]");
            ecx6 = ecx6 - 16;
            esi5 = esi5 + 16;
            __asm__("movdqa [edi], xmm1");
            edi7 = edi7 + 16;
        }
        if (static_cast<int1_t>(reinterpret_cast<unsigned char>(ecx6) >> 2)) {
            ecx6 = ecx6 - 4;
            esi5 = esi5 + 4;
            *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
            edi7 = edi7 + 4;
        }
        if (static_cast<int1_t>(reinterpret_cast<unsigned char>(ecx6) >> 3)) {
            __asm__("movq xmm1, [esi]");
            ecx6 = ecx6 - 8;
            esi5 = esi5 + 8;
            __asm__("movq [edi], xmm1");
            edi7 = edi7 + 8;
        }
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx6) * 4 + 0x405f78);
    }
    return a2;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi10) + 3) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi9) + 3);
    return a2;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi10) + 3) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi9) + 3);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi10) + 2) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi9) + 2);
    return a2;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi10) + 3) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi9) + 3);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi10) + 2) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi9) + 2);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi10) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi9) + 1);
    return a2;
}

void** fun_401db5(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

void** fun_401e79(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** ebp10;
    void** eax11;

    eax11 = fun_401db5(ecx, a2, a3, 64, ebp10, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    return eax11;
}

void fun_404590(void** a1, void** a2, void** a3);

struct s7 {
    signed char[8] pad8;
    void** f8;
};

int32_t fun_40411a(void** a1, void** a2, void** a3, void** a4, void** a5);

uint32_t fun_401e8e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void fun_401f69(void** ecx);

void** fun_404026(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17);

void** fun_402c77(void** ecx);

void fun_4045d5(void** ecx, void** a2, void** a3, void** a4, void** a5);

int32_t fun_401efa(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int32_t ebp15;
    int32_t eax16;
    void** esi17;
    struct s7* ebp18;
    int32_t ebp19;
    uint32_t eax20;
    int32_t ebp21;
    int32_t ebp22;
    void** eax23;

    fun_404590(0x4175e0, 12, __return_address());
    *reinterpret_cast<uint32_t*>(ebp15 - 28) = 0xffffffff;
    eax16 = 0;
    esi17 = ebp18->f8;
    *reinterpret_cast<unsigned char*>(&eax16) = reinterpret_cast<uint1_t>(!!esi17);
    if (eax16) {
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi17 + 12)) & 64)) {
            fun_40411a(esi17, 0x4175e0, 12, __return_address(), a2);
            *reinterpret_cast<uint32_t*>(ebp19 - 4) = 0;
            eax20 = fun_401e8e(esi17, esi17, 0x4175e0, 12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
            ecx = esi17;
            *reinterpret_cast<uint32_t*>(ebp21 - 28) = eax20;
            *reinterpret_cast<int32_t*>(ebp22 - 4) = -2;
            fun_401f69(ecx);
        } else {
            *reinterpret_cast<void***>(esi17 + 12) = reinterpret_cast<void**>(0);
        }
    } else {
        eax23 = fun_404026(ecx, 0x4175e0, 12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(22);
        fun_402c77(ecx);
    }
    fun_4045d5(ecx, 0x4175e0, 12, __return_address(), a2);
    goto 0x4175e0;
}

struct s8 {
    signed char[8] pad8;
    void** f8;
};

struct s9 {
    signed char[16] pad16;
    void** f10;
};

struct s10 {
    signed char[12] pad12;
    void** fc;
};

uint32_t fun_401f71(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

void fun_40207b(void** ecx);

void fun_402000(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int32_t ebp15;
    int32_t eax16;
    void** esi17;
    struct s8* ebp18;
    void** edi19;
    struct s9* ebp20;
    void** eax21;
    int32_t ebp22;
    void** v23;
    struct s10* ebp24;
    uint32_t eax25;
    int32_t ebp26;
    int32_t ebp27;

    fun_404590(0x417600, 12, __return_address());
    *reinterpret_cast<uint32_t*>(ebp15 - 28) = 0;
    eax16 = 0;
    esi17 = ebp18->f8;
    *reinterpret_cast<unsigned char*>(&eax16) = reinterpret_cast<uint1_t>(!!esi17);
    if (!eax16 || (edi19 = ebp20->f10, !!edi19) && (edi19 != 1 && !reinterpret_cast<int1_t>(edi19 == 2))) {
        eax21 = fun_404026(ecx, 0x417600, 12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax21) = reinterpret_cast<void**>(22);
        fun_402c77(ecx);
    } else {
        fun_40411a(esi17, 0x417600, 12, __return_address(), a2);
        ecx = esi17;
        *reinterpret_cast<uint32_t*>(ebp22 - 4) = 0;
        v23 = ebp24->fc;
        eax25 = fun_401f71(ecx, esi17, v23, edi19, 0x417600, 12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        *reinterpret_cast<uint32_t*>(ebp26 - 28) = eax25;
        *reinterpret_cast<int32_t*>(ebp27 - 4) = -2;
        fun_40207b(ecx);
    }
    fun_4045d5(ecx, 0x417600, 12, __return_address(), a2);
    goto 0x417600;
}

struct s11 {
    signed char[12] pad12;
    int32_t fc;
};

struct s12 {
    signed char[16] pad16;
    int32_t f10;
};

struct s13 {
    signed char[20] pad20;
    void** f14;
};

struct s14 {
    signed char[16] pad16;
    void** f10;
};

struct s15 {
    signed char[12] pad12;
    void** fc;
};

struct s16 {
    signed char[8] pad8;
    void** f8;
};

void** fun_40247f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void fun_402652(void** ecx);

void fun_4025d8(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int32_t ebp15;
    struct s11* ebp16;
    struct s12* ebp17;
    int32_t eax18;
    void** esi19;
    struct s13* ebp20;
    int32_t ebp21;
    void** v22;
    struct s14* ebp23;
    void** v24;
    struct s15* ebp25;
    void** v26;
    struct s16* ebp27;
    void** eax28;
    int32_t ebp29;
    int32_t ebp30;
    void** eax31;

    fun_404590(0x417640, 12, __return_address());
    *reinterpret_cast<uint32_t*>(ebp15 - 28) = 0;
    if (!ebp16->fc || !ebp17->f10) {
        addr_402612_2:
    } else {
        eax18 = 0;
        esi19 = ebp20->f14;
        *reinterpret_cast<unsigned char*>(&eax18) = reinterpret_cast<uint1_t>(!!esi19);
        if (eax18) {
            fun_40411a(esi19, 0x417640, 12, __return_address(), a2);
            ecx = esi19;
            *reinterpret_cast<uint32_t*>(ebp21 - 4) = 0;
            v22 = ebp23->f10;
            v24 = ebp25->fc;
            v26 = ebp27->f8;
            eax28 = fun_40247f(ecx, v26, v24, v22, esi19, 0x417640, 12, __return_address(), a2, a3);
            *reinterpret_cast<void***>(ebp29 - 28) = eax28;
            *reinterpret_cast<int32_t*>(ebp30 - 4) = -2;
            fun_402652(ecx);
        } else {
            eax31 = fun_404026(ecx, 0x417640, 12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
            *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(22);
            fun_402c77(ecx);
            goto addr_402612_2;
        }
    }
    fun_4045d5(ecx, 0x417640, 12, __return_address(), a2);
    goto 0x417640;
}

void fun_4019e0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void* eax14;
    unsigned char* esi15;
    unsigned char dl16;

    eax14 = reinterpret_cast<void*>(0);
    do {
        esi15 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax14) + reinterpret_cast<unsigned char>(ecx));
        dl16 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax14) + *reinterpret_cast<signed char*>(&eax14));
        eax14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax14) + 1);
        *esi15 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(dl16 ^ *esi15) ^ 85);
    } while (reinterpret_cast<int32_t>(eax14) < 16);
    return;
}

int32_t fun_406bd8(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** g41993c;

void** fun_406fbe(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void** fun_40701b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void fun_406cf1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

int32_t HeapAlloc = 0x17b34;

void** g419938;

void** fun_40265a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** v15;
    void** v16;
    void** ebp17;
    void** v18;
    void** esi19;
    void** esi20;
    void** eax21;
    void** eax22;
    void** v23;
    void** ebx24;
    void** v25;
    void** edi26;
    void** eax27;
    void** v28;
    void** eax29;
    int1_t zf30;
    int32_t eax31;
    void** eax32;
    void** eax33;

    v15 = reinterpret_cast<void**>(__return_address());
    v16 = ebp17;
    v18 = esi19;
    esi20 = a2;
    if (reinterpret_cast<unsigned char>(esi20) > reinterpret_cast<unsigned char>(0xffffffe0)) {
        fun_406bd8(ecx, esi20, v18, v16, v15, a2, a3);
        eax21 = fun_404026(esi20, v18, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax21) = reinterpret_cast<void**>(12);
        eax22 = reinterpret_cast<void**>(0);
    } else {
        v23 = ebx24;
        v25 = edi26;
        do {
            eax27 = g41993c;
            if (!eax27) {
                fun_406fbe(ecx, v25, v23, v18, v16, v15, a2, a3, a4, a5, a6, a7, a8);
                fun_40701b(ecx, 30, v25, v23, v18, v16);
                fun_406cf1(ecx, 0xff, 30, v25, v23, v18, v16, v15, a2);
                eax27 = g41993c;
            }
            if (!esi20) {
                ecx = reinterpret_cast<void**>(1);
            } else {
                ecx = esi20;
            }
            v28 = ecx;
            eax29 = reinterpret_cast<void**>(HeapAlloc());
            if (eax29) 
                goto addr_4026cf_10;
            zf30 = g419938 == eax29;
            if (zf30) 
                goto addr_4026c1_12;
            eax31 = fun_406bd8(ecx, esi20, eax27, 0, v28, v25, v23);
            ecx = esi20;
        } while (eax31);
        goto addr_4026bf_14;
    }
    addr_4026e9_15:
    return eax22;
    addr_4026cf_10:
    eax22 = eax29;
    goto addr_4026e9_15;
    addr_4026c1_12:
    eax32 = fun_404026(ecx, eax27, 0, v28, v25, v23, v18, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9);
    *reinterpret_cast<void***>(eax32) = reinterpret_cast<void**>(12);
    addr_4026c8_16:
    eax33 = fun_404026(ecx, eax27, 0, v28, v25, v23, v18, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9);
    *reinterpret_cast<void***>(eax33) = reinterpret_cast<void**>(12);
    goto addr_4026cf_10;
    addr_4026bf_14:
    goto addr_4026c8_16;
}

void** fun_407390(void** ecx, void** a2, unsigned char a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, ...) {
    void** ecx15;
    void** eax16;
    int1_t cf17;
    void** edx18;
    int1_t cf19;
    void** v20;
    uint32_t ebx21;
    uint32_t ebx22;
    void** v23;
    uint32_t edx24;
    uint32_t ebx25;
    uint32_t edx26;
    uint32_t ebx27;
    uint32_t ebx28;
    uint32_t edx29;
    uint32_t ebx30;
    uint32_t edx31;
    uint32_t ebx32;
    void** edi33;
    void** ecx34;
    void** edi35;
    uint32_t ecx36;
    void*** eax37;
    void** ecx38;
    uint32_t ecx39;

    ecx15 = a2;
    if (!a4) {
        return a2;
    }
    eax16 = reinterpret_cast<void**>(static_cast<uint32_t>(a3));
    cf17 = static_cast<int1_t>(g419eec >> 1);
    if (!cf17) {
        edx18 = a4;
        if (reinterpret_cast<signed char>(edx18) >= reinterpret_cast<signed char>(0x80) && (cf19 = static_cast<int1_t>(g418e00 >> 1), cf19)) {
            if (eax16) {
                __asm__("movd xmm0, eax");
                __asm__("punpcklbw xmm0, xmm0");
                __asm__("punpcklwd xmm0, xmm0");
                __asm__("pshufd xmm0, xmm0, 0x0");
            } else {
                __asm__("pxor xmm0, xmm0");
            }
            v20 = ecx15;
            ebx21 = reinterpret_cast<unsigned char>(ecx15) & 15;
            if (ebx21) {
                ebx22 = -ebx21 + 16;
                v23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx18) - ebx22);
                edx24 = ebx22 & 3;
                if (edx24) {
                    do {
                        *reinterpret_cast<void***>(ecx15) = eax16;
                        ++ecx15;
                        --edx24;
                    } while (edx24);
                }
                ebx25 = ebx22 >> 2;
                if (ebx25) {
                    do {
                        __asm__("movd dword [ecx], xmm0");
                        ecx15 = ecx15 + 4;
                        --ebx25;
                    } while (ebx25);
                }
                edx18 = v23;
            }
            edx26 = reinterpret_cast<unsigned char>(edx18) & 0x7f;
            ebx27 = reinterpret_cast<unsigned char>(edx18) >> 7;
            if (ebx27) {
                do {
                    __asm__("movdqa [ecx], xmm0");
                    __asm__("movdqa [ecx+0x10], xmm0");
                    __asm__("movdqa [ecx+0x20], xmm0");
                    __asm__("movdqa [ecx+0x30], xmm0");
                    __asm__("movdqa [ecx+0x40], xmm0");
                    __asm__("movdqa [ecx+0x50], xmm0");
                    __asm__("movdqa [ecx+0x60], xmm0");
                    __asm__("movdqa [ecx+0x70], xmm0");
                    ecx15 = ecx15 + 0x80;
                    --ebx27;
                } while (ebx27);
            }
            if (edx26) {
                ebx28 = edx26 >> 4;
                if (ebx28) {
                    do {
                        __asm__("movdqa [ecx], xmm0");
                        ecx15 = ecx15 + 16;
                        --ebx28;
                    } while (ebx28);
                }
                edx29 = edx26 & 15;
                if (edx29) {
                    ebx30 = edx29;
                    edx31 = edx29 >> 2;
                    if (edx31) {
                        do {
                            __asm__("movd dword [ecx], xmm0");
                            ecx15 = ecx15 + 4;
                            --edx31;
                        } while (edx31);
                    }
                    ebx32 = ebx30 & 3;
                    if (ebx32) {
                        do {
                            *reinterpret_cast<void***>(ecx15) = eax16;
                            ++ecx15;
                            --ebx32;
                        } while (ebx32);
                    }
                }
            }
            return v20;
        }
        edi33 = ecx15;
        if (reinterpret_cast<unsigned char>(edx18) >= reinterpret_cast<unsigned char>(4)) 
            goto addr_4073da_27;
    } else {
        ecx34 = a4;
        edi35 = a2;
        while (ecx34) {
            --ecx34;
            *reinterpret_cast<void***>(edi35) = eax16;
            ++edi35;
        }
        goto addr_407415_32;
    }
    do {
        addr_40740b_33:
        *reinterpret_cast<void***>(edi33) = eax16;
        ++edi33;
        --edx18;
    } while (edx18);
    addr_407415_32:
    return a2;
    addr_4073da_27:
    ecx36 = reinterpret_cast<uint32_t>(-reinterpret_cast<unsigned char>(ecx15)) & 3;
    if (ecx36) {
        edx18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx18) - ecx36);
        do {
            *reinterpret_cast<void***>(edi33) = eax16;
            ++edi33;
            --ecx36;
        } while (ecx36);
    }
    eax37 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(eax16) << 8) + reinterpret_cast<unsigned char>(eax16));
    eax16 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(eax37) << 16) + reinterpret_cast<uint32_t>(eax37));
    ecx38 = edx18;
    edx18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx18) & 3);
    ecx39 = reinterpret_cast<unsigned char>(ecx38) >> 2;
    if (!ecx39) 
        goto addr_40740b_33;
    while (ecx39) {
        --ecx39;
        *reinterpret_cast<void***>(edi33) = eax16;
        edi33 = edi33 + 4;
    }
    if (!edx18) 
        goto addr_407415_32; else 
        goto addr_40740b_33;
}

void fun_4028cc(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

void fun_4028b1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** ebp8;

    fun_4028cc(ecx, a2, 0xff, a3, a4, a5, ebp8, __return_address(), a2, a3, a4, a5, a6, a7);
    return;
}

uint32_t fun_401d42(void** a1, void** a2, void** a3, void** a4, void* a5);

struct s17 {
    void** f0;
    void** f1;
};

void** fun_402e75(void** a1, struct s17* a2, void** a3, void** a4);

uint32_t fun_401d24(void** a1, void** a2, void* a3, void*** a4, void** a5, uint32_t a6) {
    uint32_t eax7;

    eax7 = fun_401d42(fun_402e75, a1, a2, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 16);
    return eax7;
}

void** fun_407717(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** fun_404026(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** eax18;

    eax18 = fun_407717(__return_address(), a2, a3, a4, a5, a6, a7);
    if (eax18) {
        return eax18 + 8;
    } else {
        return 0x418168;
    }
}

void** fun_402c4c(void** ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);

void** fun_402c77(void** ecx) {
    void** eax2;

    eax2 = fun_402c4c(ecx, 0, 0, 0, 0, 0);
    return eax2;
}

struct s18 {
    signed char[1] pad1;
    void** f1;
};

struct s18* fun_402cc0(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** ecx6;
    void** eax7;

    ecx6 = a2;
    if (!(reinterpret_cast<unsigned char>(ecx6) & 3)) {
        while (1) {
            addr_402cf0_2:
            ecx6 = ecx6 + 4;
            if (!((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx6)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx6) + 0x7efefeff)) & 0x81010100)) 
                continue;
            eax7 = *reinterpret_cast<void***>(ecx6 + 0xfffffffc);
            if (!*reinterpret_cast<signed char*>(&eax7)) 
                break;
            if (!*reinterpret_cast<signed char*>(&eax7 + 1)) 
                goto addr_402d37_5;
            if (!(reinterpret_cast<unsigned char>(eax7) & 0xff0000)) 
                goto addr_402d2d_7;
            if (!(reinterpret_cast<unsigned char>(eax7) & 0xff000000)) 
                goto addr_402d23_9;
        }
    } else {
        do {
            ++ecx6;
            if (!*reinterpret_cast<void***>(ecx6)) 
                goto addr_402d23_9;
        } while (reinterpret_cast<unsigned char>(ecx6) & 3);
        goto addr_402cdd_13;
    }
    return reinterpret_cast<uint32_t>(ecx6 + 0xfffffffc) - reinterpret_cast<unsigned char>(a2);
    addr_402d37_5:
    return reinterpret_cast<uint32_t>(ecx6 + 0xfffffffd) - reinterpret_cast<unsigned char>(a2);
    addr_402d2d_7:
    return reinterpret_cast<uint32_t>(ecx6 + 0xfffffffe) - reinterpret_cast<unsigned char>(a2);
    addr_402d23_9:
    return reinterpret_cast<unsigned char>(ecx6 + 0xffffffff) - reinterpret_cast<unsigned char>(a2);
    addr_402cdd_13:
    goto addr_402cf0_2;
}

int32_t fun_409180(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void** g41b004;

void** g41b000;

int32_t fun_409208(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

void fun_404159(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void fun_4041c3(void** ecx, void** a2, void** a3);

void fun_404306(void** ecx);

void** fun_408fa3(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

void fun_407e10(void** ecx, void** a2, int32_t a3, int32_t a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

int32_t EnterCriticalSection = 0x17bbe;

void** fun_4041f0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** esi12;
    int32_t ebp13;
    void** ecx14;
    int32_t ebp15;
    void** edi16;
    int32_t ebp17;
    int1_t less18;
    void** eax19;
    void** v20;
    int32_t eax21;
    void** eax22;
    void** v23;
    void** eax24;
    void** v25;
    int32_t ebp26;
    void** eax27;
    void** eax28;
    void** eax29;
    void** v30;
    void** eax31;
    void** v32;
    void** eax33;
    int32_t ebp34;
    int32_t ebp35;

    v11 = reinterpret_cast<void**>(__return_address());
    fun_404590(0x4176a0, 16, v11);
    esi12 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ebp13 - 28) = reinterpret_cast<void**>(0);
    fun_409180(ecx, 1, 0x4176a0, 16, v11, a2, a3, a4, a5, a6);
    ecx14 = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(ebp15 - 4) = reinterpret_cast<void**>(0);
    edi16 = reinterpret_cast<void**>(0);
    while (*reinterpret_cast<void***>(ebp17 - 32) = edi16, less18 = reinterpret_cast<signed char>(edi16) < reinterpret_cast<signed char>(g41b004), less18) {
        eax19 = g41b000;
        if (!*reinterpret_cast<void***>(eax19 + reinterpret_cast<unsigned char>(edi16) * 4)) 
            goto addr_404285_4;
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax19 + reinterpret_cast<unsigned char>(edi16) * 4) + 12)) & 0x83) && !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax19 + reinterpret_cast<unsigned char>(edi16) * 4) + 12)) & 0x8000)) {
            if (reinterpret_cast<uint32_t>(edi16 + 0xfffffffd) > 16) 
                goto addr_404254_7;
            v20 = edi16 + 16;
            eax21 = fun_409208(ecx14, v20, 0x4176a0, 16, v11, a2, a3, a4, a5, a6, a7, a8, a9, a10);
            ecx14 = v20;
            if (!eax21) 
                break;
            addr_404254_7:
            eax22 = g41b000;
            v23 = *reinterpret_cast<void***>(eax22 + reinterpret_cast<unsigned char>(edi16) * 4);
            fun_404159(ecx14, edi16, v23, 0x4176a0, 16, v11, a2);
            ecx14 = v23;
            eax24 = g41b000;
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax24 + reinterpret_cast<unsigned char>(edi16) * 4) + 12)) & 0x83)) 
                goto addr_40427e_9;
            v25 = *reinterpret_cast<void***>(eax24 + reinterpret_cast<unsigned char>(edi16) * 4);
            fun_4041c3(ecx14, edi16, v25);
            ecx14 = v25;
        }
        ++edi16;
    }
    addr_4042d5_12:
    if (esi12) {
        *reinterpret_cast<void***>(esi12 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi12 + 12)) & 0x8000);
        *reinterpret_cast<void***>(esi12 + 4) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi12 + 8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi12) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi12 + 28) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi12 + 16) = reinterpret_cast<void**>(0xffffffff);
    }
    *reinterpret_cast<int32_t*>(ebp26 - 4) = -2;
    fun_404306(ecx14);
    fun_4045d5(ecx14, 0x4176a0, 16, v11, a2);
    goto 0x4176a0;
    addr_404285_4:
    eax27 = fun_408fa3(ecx14, 56, 0x4176a0, 16, v11, a2, a3, a4, a5, a6, a7, a8);
    ecx14 = eax27;
    eax28 = g41b000;
    *reinterpret_cast<void***>(eax28 + reinterpret_cast<unsigned char>(edi16) * 4) = ecx14;
    if (ecx14) {
        eax29 = g41b000;
        v30 = *reinterpret_cast<void***>(eax29 + reinterpret_cast<unsigned char>(edi16) * 4) + 32;
        fun_407e10(ecx14, v30, 0xfa0, 0, 0x4176a0, 16, v11, a2, a3, a4);
        eax31 = g41b000;
        v32 = *reinterpret_cast<void***>(eax31 + reinterpret_cast<unsigned char>(edi16) * 4) + 32;
        EnterCriticalSection(v32);
        eax33 = g41b000;
        esi12 = *reinterpret_cast<void***>(eax33 + reinterpret_cast<unsigned char>(edi16) * 4);
        *reinterpret_cast<void***>(ebp34 - 28) = esi12;
        *reinterpret_cast<void***>(esi12 + 12) = reinterpret_cast<void**>(0);
        goto addr_4042d5_12;
    }
    addr_40427e_9:
    esi12 = *reinterpret_cast<void***>(eax24 + reinterpret_cast<unsigned char>(edi16) * 4);
    *reinterpret_cast<void***>(ebp35 - 28) = esi12;
    goto addr_4042d5_12;
}

void** g0;

void** g4183f0 = reinterpret_cast<void**>(78);

struct s19 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

int32_t fun_4099a5(void** ecx, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

int32_t fun_404820(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void fun_4099c4(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_404790(void** a1, void** a2, void** a3) {
    void** v4;
    void** ebp5;
    void** v6;
    void** v7;
    void** v8;
    void** esp9;
    void** v10;
    void** eax11;
    void** v12;
    struct s19* ebx13;
    void** ecx14;

    v4 = ebp5;
    v6 = a1;
    v7 = a2;
    v8 = a3;
    esp9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4);
    v10 = g0;
    eax11 = g4183f0;
    v12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax11) ^ reinterpret_cast<unsigned char>(esp9));
    g0 = esp9;
    while (*reinterpret_cast<void***>(a2 + 12) != 0xfffffffe && (a3 == 0xfffffffe || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) > reinterpret_cast<unsigned char>(a3))) {
        ebx13 = reinterpret_cast<struct s19*>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 8)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1))) + reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a2 + 12) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) * 2) * 4 + 16);
        ecx14 = ebx13->f0;
        *reinterpret_cast<void***>(a2 + 12) = ecx14;
        if (ebx13->f4) 
            continue;
        fun_4099a5(ecx14, 0x101, v10, fun_404820, v12, v8, v7, v6, v4);
        fun_4099c4(1, v10, fun_404820, v12, v8, v7, v6, v4);
    }
    g0 = v10;
    return a2;
}

void** fun_4048e2(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** fun_406284(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

uint32_t fun_404af1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    uint32_t ebx8;
    void** eax9;
    void** edi10;
    void** v11;
    void** edi12;
    void** esi13;
    void** ebx14;
    void** ebp15;
    void** eax16;
    void** eax17;
    void** eax18;
    void** ecx19;

    ebx8 = 0;
    eax9 = *reinterpret_cast<void***>(a2 + 12);
    if ((*reinterpret_cast<unsigned char*>(&eax9) & 3) == 2 && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0x108) {
        edi10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 8)));
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi10 == 0))) {
            v11 = *reinterpret_cast<void***>(a2 + 8);
            eax16 = fun_4048e2(ecx, a2, v11, edi10, edi12, esi13, ebx14, ebp15, __return_address(), a2, a3, a4, a5, a6, a7);
            eax17 = fun_406284(a2, eax16, v11, edi10, edi12, esi13, ebx14, ebp15, __return_address(), a2, a3, a4, a5, a6);
            if (eax17 != edi10) {
                *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 32);
                ebx8 = 0xffffffff;
            } else {
                eax18 = *reinterpret_cast<void***>(a2 + 12);
                if (*reinterpret_cast<signed char*>(&eax18) < 0) {
                    *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax18) & 0xfffffffd);
                }
            }
        }
    }
    ecx19 = *reinterpret_cast<void***>(a2 + 8);
    *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a2) = ecx19;
    return ebx8;
}

void** fun_40295d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, ...);

void fun_404a7b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** esi10;
    void** ebp11;

    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0x83 && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 8) {
        v9 = *reinterpret_cast<void***>(a2 + 8);
        fun_40295d(ecx, v9, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0xfffffbf7);
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a2 + 8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
    }
    return;
}

void** fun_4048e2(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** ebp16;
    void** eax17;

    if (a2) {
        return *reinterpret_cast<void***>(a2 + 16);
    } else {
        eax17 = fun_404026(ecx, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        *reinterpret_cast<void***>(eax17) = reinterpret_cast<void**>(22);
        fun_402c77(ecx);
        return 0xffffffff;
    }
}

struct s20 {
    signed char[8] pad8;
    void** f8;
};

void** g419ff8;

void** fun_403ff2(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

int32_t fun_4099c7(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

uint32_t fun_4049e1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void fun_4049b9(void** ecx);

int32_t fun_404906(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int32_t ebp15;
    void** esi16;
    struct s20* ebp17;
    int1_t cf18;
    void** eax19;
    int32_t ebx20;
    uint32_t edi21;
    int32_t ebp22;
    void** eax23;
    uint32_t edi24;
    uint32_t eax25;
    int32_t ebp26;
    int32_t ebp27;
    void** eax28;
    void** eax29;
    void** eax30;
    void** eax31;

    fun_404590(0x4176c0, 16, __return_address());
    *reinterpret_cast<void***>(ebp15 - 28) = reinterpret_cast<void**>(0);
    esi16 = ebp17->f8;
    if (!reinterpret_cast<int1_t>(esi16 == 0xfffffffe)) {
        if (reinterpret_cast<signed char>(esi16) < reinterpret_cast<signed char>(0) || (cf18 = reinterpret_cast<unsigned char>(esi16) < reinterpret_cast<unsigned char>(g419ff8), !cf18)) {
            eax19 = fun_403ff2(ecx, 0x4176c0, 16, __return_address(), a2, a3, a4, a5);
            *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(0);
        } else {
            ebx20 = reinterpret_cast<signed char>(esi16) >> 5;
            edi21 = (reinterpret_cast<unsigned char>(esi16) & 31) << 6;
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx20 * 4 + 0x4191d0)) + edi21 + 4))) & 1) {
                fun_4099c7(ecx, esi16, 0x4176c0, 16, __return_address(), a2);
                ecx = esi16;
                *reinterpret_cast<uint32_t*>(ebp22 - 4) = 0;
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx20 * 4 + 0x4191d0)) + edi21 + 4) & 1)) {
                    eax23 = fun_404026(ecx, 0x4176c0, 16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
                    *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(9);
                    edi24 = 0xffffffff;
                } else {
                    eax25 = fun_4049e1(ecx, esi16, 0x4176c0, 16, __return_address(), a2, a3, a4, a5, a6);
                    ecx = esi16;
                    edi24 = eax25;
                }
                *reinterpret_cast<uint32_t*>(ebp26 - 28) = edi24;
                *reinterpret_cast<int32_t*>(ebp27 - 4) = -2;
                fun_4049b9(ecx);
                goto addr_4049db_9;
            } else {
                eax28 = fun_403ff2(ecx, 0x4176c0, 16, __return_address(), a2, a3, a4, a5);
                *reinterpret_cast<void***>(eax28) = reinterpret_cast<void**>(0);
            }
        }
    } else {
        eax29 = fun_403ff2(ecx, 0x4176c0, 16, __return_address(), a2, a3, a4, a5);
        *reinterpret_cast<void***>(eax29) = reinterpret_cast<void**>(0);
        eax30 = fun_404026(ecx, 0x4176c0, 16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax30) = reinterpret_cast<void**>(9);
        goto addr_4049d8_12;
    }
    eax31 = fun_404026(ecx, 0x4176c0, 16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(9);
    fun_402c77(ecx);
    addr_4049d8_12:
    addr_4049db_9:
    fun_4045d5(ecx, 0x4176c0, 16, __return_address(), a2);
    goto 0x4176c0;
}

int32_t HeapFree = 0x17b50;

int32_t GetLastError = 0x17b40;

void** fun_404039(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_40295d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, ...) {
    void** v13;
    void** eax14;
    void** esi15;
    void** ebp16;
    void** eax17;
    void** eax18;

    if (a2 && (v13 = g41993c, eax14 = reinterpret_cast<void**>(HeapFree(v13, 0, a2)), !eax14)) {
        eax17 = fun_404026(ecx, esi15, v13, 0, a2, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        eax18 = reinterpret_cast<void**>(GetLastError());
        eax14 = fun_404039(ecx, eax18, esi15, v13, 0, a2);
        *reinterpret_cast<void***>(eax17) = eax14;
    }
    return eax14;
}

void fun_4045d5(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t* esp7;
    void* ebp8;

    g0 = *reinterpret_cast<void***>(ebp6 - 16);
    esp7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp8) + 4 - 4);
    *esp7 = reinterpret_cast<int32_t>(__return_address());
    goto *esp7;
}

void fun_404f60(void** ecx);

void** fun_404c42(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

uint32_t fun_404dd8(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

int32_t ReadFile = 0x17b28;

void** fun_404f47(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, ...);

void** fun_402083(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** v15;
    void** v16;
    void** ebp17;
    void*** ebp18;
    void** v19;
    void** edi20;
    void** v21;
    void** v22;
    void** ebx23;
    void** v24;
    void** esi25;
    void** eax26;
    void** v27;
    void** eax28;
    void** v29;
    int32_t eax30;
    void** ecx31;
    int32_t v32;
    void** v33;
    void* edx34;
    void** eax35;
    void** v36;
    signed char dl37;
    void** eax38;
    signed char v39;
    void** eax40;
    void** esi41;
    void** v42;
    void** edx43;
    void** edi44;
    void* eax45;
    void** v46;
    void** v47;
    uint32_t eax48;
    void** v49;
    void** v50;
    void** v51;
    unsigned char* ecx52;
    unsigned char* edx53;
    unsigned char* eax54;
    void* esi55;
    uint32_t ebx56;
    void** eax57;
    int1_t zf58;
    void** edx59;
    void** eax60;
    uint32_t eax61;
    void** eax62;
    uint32_t ecx63;
    void** eax64;

    v15 = reinterpret_cast<void**>(__return_address());
    v16 = ebp17;
    ebp18 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_404f60(ecx);
    v19 = edi20;
    v21 = a2;
    if (a2) {
        v22 = ebx23;
        v24 = esi25;
        eax26 = fun_4048e2(ecx, a2, v24, v22, v19, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9);
        v27 = eax26;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2 + 4)) < reinterpret_cast<signed char>(0)) {
            *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
        }
        eax28 = fun_404c42(a2, eax26, 0, 1, v24, v22, v19, v16, v15, a2, a3, a4, a5, a6);
        v29 = eax28;
        if (reinterpret_cast<signed char>(eax28) < reinterpret_cast<signed char>(0)) 
            goto addr_4023a1_5;
        eax30 = reinterpret_cast<signed char>(eax26) >> 5;
        ecx31 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax26) & 31) << 6);
        v32 = eax30;
        v33 = ecx31;
        edx34 = *reinterpret_cast<void**>(eax30 * 4 + 0x4191d0);
        eax35 = *reinterpret_cast<void***>(a2 + 12);
        v36 = eax35;
        dl37 = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx31) + reinterpret_cast<uint32_t>(edx34) + 36) + *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx31) + reinterpret_cast<uint32_t>(edx34) + 36)) >> 1);
        eax38 = v29;
        v39 = dl37;
        if (!(reinterpret_cast<unsigned char>(eax35) & 0x108)) 
            goto addr_402139_7;
    } else {
        eax40 = fun_404026(ecx, v19, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax40) = reinterpret_cast<void**>(22);
        fun_402c77(ecx);
        goto addr_402404_9;
    }
    esi41 = *reinterpret_cast<void***>(a2);
    v42 = *reinterpret_cast<void***>(a2 + 8);
    if (!(*reinterpret_cast<unsigned char*>(&v36) & 3)) {
        if (!(*reinterpret_cast<unsigned char*>(&v36) & 0x80)) {
            eax28 = fun_404026(ecx31, v24, v22, v19, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
            *reinterpret_cast<void***>(eax28) = reinterpret_cast<void**>(22);
            goto addr_4023a1_5;
        }
    } else {
        if (dl37 != 1 || !*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx31) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(v32 * 4 + 0x4191d0)) + 48)) {
            eax38 = v29;
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx31) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(v32 * 4 + 0x4191d0)) + 4) & 0x80) {
                edx43 = v42;
                while (reinterpret_cast<unsigned char>(edx43) < reinterpret_cast<unsigned char>(esi41)) {
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx43) == 10)) {
                    }
                    ++edx43;
                }
                dl37 = v39;
            }
        } else {
            edi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi41) - reinterpret_cast<unsigned char>(v42) >> 1);
            if (*reinterpret_cast<void***>(v21 + 4)) {
                eax45 = *reinterpret_cast<void**>(v32 * 4 + 0x4191d0);
                v46 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx31) + reinterpret_cast<uint32_t>(eax45) + 44);
                v47 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx31) + reinterpret_cast<uint32_t>(eax45) + 40);
                eax48 = fun_404dd8(ecx31, v27, v47, v46, 0, v24, v22, v19, v16, v15, a2, a3, a4, a5);
                eax28 = *reinterpret_cast<void***>(v32 * 4 + 0x4191d0);
                if (eax48 != *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(v33) + reinterpret_cast<unsigned char>(eax28) + 40)) 
                    goto addr_4023a1_5;
                if (v32 != *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v33) + reinterpret_cast<unsigned char>(eax28) + 44)) 
                    goto addr_4023a1_5;
                v49 = reinterpret_cast<void**>(ebp18 + 0xffffefe4);
                v50 = reinterpret_cast<void**>(ebp18 + 0xffffeffc);
                v51 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v33) + reinterpret_cast<unsigned char>(eax28));
                eax28 = reinterpret_cast<void**>(ReadFile(v51, v50, 0x1000, v49, 0));
                if (!eax28) 
                    goto addr_4023a1_5;
                eax28 = fun_404c42(v29, v27, v29, 0, v51, v50, 0x1000, v49, 0, v24, v22, v19, v16, v15);
                if (reinterpret_cast<signed char>(eax28) < reinterpret_cast<signed char>(0)) 
                    goto addr_4023a1_5;
                if (reinterpret_cast<unsigned char>(edi44) > reinterpret_cast<unsigned char>(v42)) 
                    goto addr_4023a1_5;
                ecx52 = reinterpret_cast<unsigned char*>(ebp18 + 0xffffeffc);
                if (edi44) {
                    edx53 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx52) + reinterpret_cast<unsigned char>(v42));
                    do {
                        --edi44;
                        if (reinterpret_cast<uint32_t>(ecx52) >= reinterpret_cast<uint32_t>(edx53)) 
                            break;
                        if (*ecx52 != 13) {
                            ecx52 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx52) + static_cast<int32_t>(*reinterpret_cast<signed char*>(*ecx52 + 0x418400)));
                        } else {
                            if (reinterpret_cast<uint32_t>(ecx52) < reinterpret_cast<uint32_t>(edx53 - 1) && (eax54 = ecx52 + 1, *eax54 == 10)) {
                                ecx52 = eax54;
                            }
                        }
                        ++ecx52;
                    } while (edi44);
                }
                goto addr_402402_36;
            } else {
                goto addr_402402_36;
            }
        }
    }
    if (eax38) {
        if (!(*reinterpret_cast<unsigned char*>(&v36) & 1)) {
            addr_4023f9_40:
            if (dl37 == 1) {
            }
        } else {
            if (*reinterpret_cast<void***>(v21 + 4)) {
                esi55 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi41) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v21 + 8)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v21 + 4)));
                ebx56 = 0;
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx31) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(v32 * 4 + 0x4191d0)) + 4) & 0x80)) {
                    addr_4023f1_44:
                    goto addr_4023f9_40;
                } else {
                    eax57 = fun_404c42(ecx31, v27, 0, 2, v24, v22, v19, v16, v15, a2, a3, a4, a5, a6);
                    if (eax57 != v29) {
                        eax28 = fun_404c42(v29, v27, v29, 0, v24, v22, v19, v16, v15, a2, a3, a4, a5, a6);
                        if (reinterpret_cast<signed char>(eax28) >= reinterpret_cast<signed char>(0)) {
                            if (reinterpret_cast<uint32_t>(esi55) > 0x200 || (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v21 + 12)) & 8) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v21 + 12)) & 0x400)) {
                            }
                            zf58 = (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v33) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(v32 * 4 + 0x4191d0)) + 4) & 4) == 0;
                            goto addr_4023e1_50;
                        } else {
                            addr_4023a1_5:
                            goto addr_402402_36;
                        }
                    } else {
                        edx59 = v21;
                        eax60 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx59 + 8)) + reinterpret_cast<uint32_t>(esi55));
                        eax61 = ~(reinterpret_cast<unsigned char>(eax60) - (reinterpret_cast<unsigned char>(eax60) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax60) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax60) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax60) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx59 + 8))))))) & reinterpret_cast<unsigned char>(eax60) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx59 + 8));
                        if (eax61) {
                            eax62 = *reinterpret_cast<void***>(edx59 + 8);
                            ecx63 = eax61;
                            do {
                                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax62) == 10)) {
                                }
                                ++eax62;
                                ++ebx56;
                            } while (ebx56 < ecx63);
                        }
                        zf58 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx59 + 12)) & 0x2000) == 0;
                        goto addr_4023e1_50;
                    }
                }
            } else {
                goto addr_4023f9_40;
            }
        }
    } else {
        goto addr_402402_36;
    }
    addr_402402_36:
    addr_402404_9:
    eax64 = fun_404f47(reinterpret_cast<unsigned char>(v19) ^ reinterpret_cast<uint32_t>(ebp18), v16, v15, a2, a3, a4, a5, a6);
    return eax64;
    addr_4023e1_50:
    if (!zf58) {
    }
    dl37 = v39;
    if (dl37 == 1) {
        goto addr_4023f1_44;
    }
    addr_402139_7:
    goto addr_402402_36;
}

int32_t fun_40411a(void** a1, void** a2, void** a3, void** a4, void** a5) {
    int32_t eax6;
    void** esi7;
    void** ebp8;

    if (reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(0x418170) || reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0x4183d0)) {
        eax6 = reinterpret_cast<int32_t>(EnterCriticalSection(a1 + 32));
    } else {
        eax6 = fun_409180(0x418170, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(0x418170)) >> 5) + 16, esi7, ebp8, __return_address(), a1, a2, a3, a4, a5);
        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) | 0x8000);
    }
    return eax6;
}

uint32_t fun_401f71(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** eax15;
    void** ebx16;
    void** edi17;
    void** edi18;
    void** ebx19;
    void** esi20;
    void** ebp21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    int32_t ecx26;
    uint32_t eax27;
    void** eax28;

    eax15 = *reinterpret_cast<void***>(a2 + 12);
    if (*reinterpret_cast<unsigned char*>(&eax15) & 0x83) {
        ebx16 = a4;
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax15) & 0xffffffef);
        if (!reinterpret_cast<int1_t>(ebx16 == 1)) {
            edi17 = a3;
        } else {
            eax22 = fun_402083(ecx, a2, edi18, ebx19, esi20, ebp21, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            edi17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(eax22));
            ebx16 = reinterpret_cast<void**>(0);
            ecx = a2;
        }
        fun_404af1(ecx, a2, edi18, ebx19, esi20, ebp21, __return_address());
        eax23 = *reinterpret_cast<void***>(a2 + 12);
        if (*reinterpret_cast<signed char*>(&eax23) >= reinterpret_cast<signed char>(0)) {
            if (*reinterpret_cast<unsigned char*>(&eax23) & 1 && (*reinterpret_cast<unsigned char*>(&eax23) & 8 && !(reinterpret_cast<unsigned char>(eax23) & 0x400))) {
                *reinterpret_cast<void***>(a2 + 24) = reinterpret_cast<void**>(0x200);
            }
        } else {
            *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax23) & 0xfffffffc);
        }
        eax24 = fun_4048e2(a2, a2, edi17, ebx16, edi18, ebx19, esi20, ebp21, __return_address(), a2, a3, a4, a5, a6, a7);
        eax25 = fun_404c42(a2, eax24, edi17, ebx16, edi18, ebx19, esi20, ebp21, __return_address(), a2, a3, a4, a5, a6);
        ecx26 = 0;
        *reinterpret_cast<unsigned char*>(&ecx26) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(eax25 == 0xffffffff));
        eax27 = reinterpret_cast<uint32_t>(ecx26 - 1);
    } else {
        eax28 = fun_404026(ecx, esi20, ebp21, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax28) = reinterpret_cast<void**>(22);
        eax27 = 0xffffffff;
    }
    return eax27;
}

void fun_404189(void** a1);

void fun_40207b(void** ecx) {
    void** esi2;

    fun_404189(esi2);
    return;
}

struct s21 {
    signed char[8] pad8;
    void** f8;
};

struct s22 {
    signed char[16] pad16;
    void** f10;
};

struct s23 {
    signed char[12] pad12;
    void** fc;
};

uint32_t fun_404d31(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void fun_404d09(void** ecx);

void** fun_404c42(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int32_t ebp15;
    void** esi16;
    struct s21* ebp17;
    int1_t cf18;
    void** eax19;
    int32_t ebx20;
    uint32_t edi21;
    int32_t ebp22;
    void** eax23;
    void** eax24;
    uint32_t edi25;
    void** v26;
    struct s22* ebp27;
    void** v28;
    struct s23* ebp29;
    uint32_t eax30;
    int32_t ebp31;
    int32_t ebp32;
    void** eax33;
    void** eax34;
    void** eax35;
    void** eax36;

    fun_404590(0x417708, 16, __return_address());
    *reinterpret_cast<void***>(ebp15 - 28) = reinterpret_cast<void**>(0);
    esi16 = ebp17->f8;
    if (!reinterpret_cast<int1_t>(esi16 == 0xfffffffe)) {
        if (reinterpret_cast<signed char>(esi16) < reinterpret_cast<signed char>(0) || (cf18 = reinterpret_cast<unsigned char>(esi16) < reinterpret_cast<unsigned char>(g419ff8), !cf18)) {
            eax19 = fun_403ff2(ecx, 0x417708, 16, __return_address(), a2, a3, a4, a5);
            *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(0);
        } else {
            ebx20 = reinterpret_cast<signed char>(esi16) >> 5;
            edi21 = (reinterpret_cast<unsigned char>(esi16) & 31) << 6;
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx20 * 4 + 0x4191d0)) + edi21 + 4))) & 1) {
                fun_4099c7(ecx, esi16, 0x417708, 16, __return_address(), a2);
                ecx = esi16;
                *reinterpret_cast<uint32_t*>(ebp22 - 4) = 0;
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx20 * 4 + 0x4191d0)) + edi21 + 4) & 1)) {
                    eax23 = fun_404026(ecx, 0x417708, 16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
                    *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(9);
                    eax24 = fun_403ff2(ecx, 0x417708, 16, __return_address(), a2, a3, a4, a5);
                    *reinterpret_cast<void***>(eax24) = reinterpret_cast<void**>(0);
                    edi25 = 0xffffffff;
                } else {
                    v26 = ebp27->f10;
                    v28 = ebp29->fc;
                    eax30 = fun_404d31(ecx, esi16, v28, v26, 0x417708, 16, __return_address(), a2, a3);
                    edi25 = eax30;
                }
                *reinterpret_cast<uint32_t*>(ebp31 - 28) = edi25;
                *reinterpret_cast<int32_t*>(ebp32 - 4) = -2;
                fun_404d09(ecx);
                goto addr_404d2b_9;
            } else {
                eax33 = fun_403ff2(ecx, 0x417708, 16, __return_address(), a2, a3, a4, a5);
                *reinterpret_cast<void***>(eax33) = reinterpret_cast<void**>(0);
            }
        }
    } else {
        eax34 = fun_403ff2(ecx, 0x417708, 16, __return_address(), a2, a3, a4, a5);
        *reinterpret_cast<void***>(eax34) = reinterpret_cast<void**>(0);
        eax35 = fun_404026(ecx, 0x417708, 16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax35) = reinterpret_cast<void**>(9);
        goto addr_404d28_12;
    }
    eax36 = fun_404026(ecx, 0x417708, 16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    *reinterpret_cast<void***>(eax36) = reinterpret_cast<void**>(9);
    fun_402c77(ecx);
    addr_404d28_12:
    addr_404d2b_9:
    fun_4045d5(ecx, 0x417708, 16, __return_address(), a2);
    goto 0x417708;
}

void** fun_407be9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** g419308;

void** fun_406fbe(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** eax14;
    void** eax15;
    int1_t zf16;

    eax14 = fun_407be9(ecx, 3, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    if (eax14 == 1 || (eax15 = fun_407be9(3, 3, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13), !eax15) && (zf16 = reinterpret_cast<int1_t>(g419308 == 1), zf16)) {
        fun_40701b(3, 0xfc, __return_address(), a2, a3, a4);
        eax15 = fun_40701b(3, 0xff, 0xfc, __return_address(), a2, a3);
    }
    return eax15;
}

void** fun_406ff7(void** a1);

int32_t GetStdHandle = 0x17c54;

int32_t WriteFile = 0x17c9c;

void** fun_40a633(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

int16_t g41954a;

int32_t GetModuleFileNameW = 0x17d16;

int32_t fun_40a68f(void** ecx, void** a2, void** a3, void** a4, void** a5);

void** fun_40a6a8(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void** fun_40a5c7(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void fun_402c87(void** ecx);

int32_t GetProcessHeap = 0x17d2c;

void** fun_40a766(void** ecx, void** a2, void** a3, uint32_t a4, void** a5, void** a6, void** a7);

void** fun_40701b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void* ebp7;
    void** eax8;
    uint32_t v9;
    void** eax10;
    void** edi11;
    void** ebx12;
    void** edi13;
    void** esi14;
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
    void** eax25;
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
    void** eax36;
    void** ecx37;
    int1_t zf38;
    int32_t eax39;
    int32_t esi40;
    void** ecx41;
    void** v42;
    void** v43;
    struct s18* eax44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** eax52;
    int32_t eax53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** eax58;
    int32_t eax59;
    int32_t eax60;
    void** v61;
    void** v62;
    void** eax63;
    void** v64;
    void** v65;
    void** v66;
    void** eax67;
    void** v68;
    void** v69;
    void** v70;
    void** eax71;
    void** eax72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** eax80;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax8 = g4183f0;
    v9 = reinterpret_cast<unsigned char>(eax8) ^ reinterpret_cast<uint32_t>(ebp7);
    eax10 = fun_406ff7(a2);
    edi11 = eax10;
    if (edi11) {
        eax25 = fun_407be9(a2, 3, ebx12, edi13, esi14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24);
        if (eax25 == 1 || (eax36 = fun_407be9(3, 3, ebx12, edi13, esi14, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35), ecx37 = reinterpret_cast<void**>(3), !eax36) && (zf38 = reinterpret_cast<int1_t>(g419308 == 1), zf38)) {
            eax39 = reinterpret_cast<int32_t>(GetStdHandle(3, 0xf4));
            esi40 = eax39;
            if (esi40 && esi40 != -1) {
                ecx41 = reinterpret_cast<void**>(0);
                do {
                    *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp7) + reinterpret_cast<unsigned char>(ecx41) + 0xfffffe08) = *reinterpret_cast<void***>(edi11 + reinterpret_cast<unsigned char>(ecx41) * 2);
                    if (!*reinterpret_cast<void***>(edi11 + reinterpret_cast<unsigned char>(ecx41) * 2)) 
                        break;
                    ++ecx41;
                } while (reinterpret_cast<unsigned char>(ecx41) < reinterpret_cast<unsigned char>(0x1f4));
                v42 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp7) + 0xfffffe04);
                v43 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp7) + 0xfffffe08);
                eax44 = fun_402cc0(ecx41, v43, v42, 0, 0xf4);
                WriteFile(v43, esi40, reinterpret_cast<uint32_t>(ebp7) + 0xfffffe08, eax44, v42, 0, 0xf4);
            }
        } else {
            if (a2 != 0xfc) {
                eax52 = fun_40a633(3, 0x419310, 0x314, "R", ebx12, edi13, esi14, v45, v46, v47, v48, v49, v50, v51);
                if (eax52 || ((g41954a = *reinterpret_cast<int16_t*>(&eax52), eax53 = reinterpret_cast<int32_t>(GetModuleFileNameW(3, 0, 0x419342, 0x104)), !eax53) && (eax58 = fun_40a633(3, 0x419342, 0x2fb, "<", 0, 0x419342, 0x104, ebx12, edi13, esi14, v54, v55, v56, v57), !!eax58) || ((eax59 = fun_40a68f(3, 0x419342, 0, 0x419342, 0x104), ecx37 = reinterpret_cast<void**>(0x419342), eax59 + 1 > 60) && (eax60 = fun_40a68f(0x419342, 0x419342, 0, 0x419342, 0x104), ecx37 = reinterpret_cast<void**>(eax60 * 2 + 0x4192cc), eax63 = fun_40a6a8(ecx37, 0x2fb - reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx37 - 0x419342) >> 1), ".", 3, 0x419342, 0, 0x419342, 0x104, ebx12, edi13, esi14, v61, v62), !!eax63) || ((eax67 = fun_40a5c7(ecx37, 0x419310, 0x314, "\n", 0, 0x419342, 0x104, ebx12, edi13, esi14, v64, v65, v66), !!eax67) || (eax71 = fun_40a5c7(ecx37, 0x419310, 0x314, edi11, 0, 0x419342, 0x104, ebx12, edi13, esi14, v68, v69, v70), !!eax71))))) {
                    fun_402c87(ecx37);
                    eax72 = reinterpret_cast<void**>(GetProcessHeap(ecx37));
                    g41993c = eax72;
                    goto 0;
                } else {
                    fun_40a766(ecx37, 0x419310, "M", 0x12010, 0, 0x419342, 0x104);
                }
            }
        }
    }
    eax80 = fun_404f47(v9 ^ reinterpret_cast<uint32_t>(ebp7), v73, v74, v75, v76, v77, v78, v79);
    return eax80;
}

void fun_406cbd(void** ecx, void** a2);

int32_t ExitProcess = 0x17cce;

void fun_406dc5(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void fun_406e7b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void fun_406cf1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** ebp10;

    fun_406cbd(ecx, a2);
    ExitProcess(a2, a2);
    fun_406fbe(a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, a2, ebp10, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    fun_40701b(a2, ebp10, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, a2, ebp10, __return_address());
    fun_406dc5(ebp10, 0xff, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, a2, ebp10, __return_address());
    fun_406e7b(ebp10, 0, 1, 1, 0xff, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, a2);
    goto 0xff;
}

int32_t DecodePointer = 0x17b92;

int32_t fun_406bd8(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    int32_t eax8;
    int32_t eax9;
    int32_t ebp10;

    eax8 = reinterpret_cast<int32_t>(DecodePointer());
    if (!eax8 || (eax9 = reinterpret_cast<int32_t>(eax8()), eax9 == 0)) {
        goto ebp10;
    } else {
        goto ebp10;
    }
}

void** fun_40730e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** edi15;
    void** esi16;
    void** ebp17;
    void** eax18;
    void** eax19;
    void** v20;
    void** eax21;

    if (a5) {
        if (a2) {
            if (!a4 || reinterpret_cast<unsigned char>(a3) < reinterpret_cast<unsigned char>(a5)) {
                fun_407390(ecx, a2, 0, a3, edi15, esi16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7);
                if (a4) {
                    if (reinterpret_cast<unsigned char>(a3) >= reinterpret_cast<unsigned char>(a5)) {
                        eax18 = reinterpret_cast<void**>(22);
                    } else {
                        eax19 = fun_404026(ecx, edi15, esi16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
                        v20 = reinterpret_cast<void**>(34);
                        goto addr_40737a_8;
                    }
                } else {
                    eax19 = fun_404026(ecx, edi15, esi16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
                    v20 = reinterpret_cast<void**>(22);
                    goto addr_40737a_8;
                }
            } else {
                fun_405c40(ecx, a2, a4, a5);
                eax18 = reinterpret_cast<void**>(0);
            }
        } else {
            eax21 = fun_404026(ecx, esi16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
            *reinterpret_cast<void***>(eax21) = reinterpret_cast<void**>(22);
            fun_402c77(ecx);
            eax18 = reinterpret_cast<void**>(22);
            goto addr_40738a_12;
        }
    } else {
        eax18 = reinterpret_cast<void**>(0);
        goto addr_40738a_12;
    }
    addr_407389_14:
    addr_40738a_12:
    return eax18;
    addr_40737a_8:
    *reinterpret_cast<void***>(eax19) = v20;
    fun_402c77(ecx);
    eax18 = v20;
    goto addr_407389_14;
}

void** fun_404ed4(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16);

uint32_t fun_409fb4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

int32_t GetConsoleMode = 0x17c32;

int32_t ReadConsoleW = 0x17c44;

void** fun_404005(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

int32_t MultiByteToWideChar = 0x17c1c;

void** fun_40509f(void** ecx, void** a2, void** a3, void** a4) {
    void*** ebp5;
    void** v6;
    void** ebx7;
    void** v8;
    void** esi9;
    void** esi10;
    void** v11;
    void** edi12;
    void** ecx13;
    void** edi14;
    void** v15;
    void** v16;
    int1_t cf17;
    void** ebx18;
    void** v19;
    void** v20;
    void* edx21;
    void** v22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** ebp29;
    void** eax30;
    void** eax31;
    signed char al32;
    signed char v33;
    int32_t eax34;
    void** v35;
    void** eax36;
    void** v37;
    void** v38;
    void** eax39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
    int32_t eax48;
    void** v49;
    void** eax50;
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
    void** eax61;
    void** v62;
    void** v63;
    void** eax64;
    void* ecx65;
    void** eax66;
    void* edx67;
    void** v68;
    void** edx69;
    void* eax70;
    void** edx71;
    void* eax72;
    void** al73;
    void* eax74;
    void** v75;
    void** v76;
    void** v77;
    uint32_t eax78;
    void** eax79;
    void** ecx80;
    void** v81;
    void** v82;
    void** eax83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    int32_t eax89;
    void* v90;
    void** v91;
    void*** eax92;
    int32_t eax93;
    void** v94;
    void** eax95;
    void** ebx96;
    void** v97;
    void** eax98;
    void** eax99;
    void** edx100;
    void* esi101;
    unsigned char al102;
    void** eax103;
    unsigned char al104;
    void** esi105;
    void** v106;
    void** esi107;
    void** edx108;
    uint32_t eax109;
    int32_t eax110;
    unsigned char al111;
    void** esi112;
    void** edi113;
    uint32_t eax114;
    void** v115;
    void** v116;
    void** v117;
    int32_t eax118;
    int32_t eax119;
    void** v120;
    int16_t v121;
    void** v122;
    void* ecx123;
    signed char v124;
    signed char v125;
    void** esi126;
    void* edx127;
    void** ebx128;
    void* eax129;
    void** edx130;
    void** esi131;
    void** eax132;
    void** esi133;
    void** eax134;
    void** eax135;
    void** edi136;
    void** v137;
    void** v138;
    void** v139;
    int32_t eax140;
    int32_t eax141;
    void** v142;
    signed char v143;
    void** v144;
    signed char v145;
    void** eax146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** eax151;
    void** v152;
    int32_t eax153;

    ebp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v6 = ebx7;
    v8 = esi9;
    esi10 = a4;
    v11 = edi12;
    ecx13 = reinterpret_cast<void**>(0xfe);
    edi14 = reinterpret_cast<void**>(0);
    v15 = reinterpret_cast<void**>(0);
    v16 = esi10;
    if (!reinterpret_cast<int1_t>(a2 == 0xfe)) {
        if (reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0) || ((cf17 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g419ff8), !cf17) || (ecx13 = reinterpret_cast<void**>(reinterpret_cast<signed char>(a2) >> 5), ebx18 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(a2) & 31) << 6), v19 = ecx13, v20 = ebx18, edx21 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx13) * 4 + 0x4191d0), (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx21) + reinterpret_cast<unsigned char>(ebx18) + 4) & 1) == 0))) {
            eax23 = fun_403ff2(ecx13, v11, v8, v6, v16, v20, 0, v22);
            *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(0);
            eax30 = fun_404026(ecx13, v11, v8, v6, v16, v20, 0, v24, 0xfe, v25, v26, v19, v27, v28, ebp29, __return_address(), a2);
            *reinterpret_cast<void***>(eax30) = reinterpret_cast<void**>(9);
        } else {
            if (reinterpret_cast<unsigned char>(esi10) <= reinterpret_cast<unsigned char>(0x7fffffff)) {
                if (!esi10 || *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx21) + reinterpret_cast<unsigned char>(ebx18) + 4) & 2) {
                    eax31 = reinterpret_cast<void**>(0);
                    goto addr_405829_7;
                } else {
                    if (!a3) 
                        goto addr_405145_9;
                    al32 = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx21) + reinterpret_cast<unsigned char>(ebx18) + 36) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx21) + reinterpret_cast<unsigned char>(ebx18) + 36)) >> 1);
                    v33 = al32;
                    eax34 = al32 - 1;
                    if (!eax34) 
                        goto addr_405175_11; else 
                        goto addr_40515f_12;
                }
            } else {
                eax36 = fun_403ff2(ecx13, v11, v8, v6, v16, v20, 0, v35);
                *reinterpret_cast<void***>(eax36) = reinterpret_cast<void**>(0);
                goto addr_405120_14;
            }
        }
    } else {
        eax39 = fun_403ff2(0xfe, v11, v8, v6, v16, v37, 0, v38);
        *reinterpret_cast<void***>(eax39) = reinterpret_cast<void**>(0);
        eax47 = fun_404026(0xfe, v11, v8, v6, v16, v40, 0, v41, 0xfe, v42, v43, v44, v45, v46, ebp29, __return_address(), a2);
        *reinterpret_cast<void***>(eax47) = reinterpret_cast<void**>(9);
        goto addr_405826_16;
    }
    addr_405821_17:
    fun_402c77(ecx13);
    addr_405826_16:
    eax31 = reinterpret_cast<void**>(0xffffffff);
    addr_405829_7:
    return eax31;
    addr_405175_11:
    eax48 = reinterpret_cast<int32_t>(~reinterpret_cast<unsigned char>(esi10));
    if (!(*reinterpret_cast<unsigned char*>(&eax48) & 1)) {
        addr_405145_9:
        eax50 = fun_403ff2(ecx13, v11, v8, v6, v16, v20, 0, v49);
        *reinterpret_cast<void***>(eax50) = reinterpret_cast<void**>(0);
    } else {
        esi10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi10) >> 1);
        if (reinterpret_cast<unsigned char>(esi10) < reinterpret_cast<unsigned char>(4)) {
            esi10 = reinterpret_cast<void**>(4);
        }
        eax54 = fun_408fa3(ecx13, esi10, v11, v8, v6, v16, v20, 0, v51, 0xfe, v52, v53);
        v55 = eax54;
        if (eax54) 
            goto addr_4051b0_21; else 
            goto addr_405195_22;
    }
    addr_405120_14:
    eax61 = fun_404026(ecx13, v11, v8, v6, v16, v20, 0, v56, 0xfe, v57, v58, v19, v59, v60, ebp29, __return_address(), a2);
    *reinterpret_cast<void***>(eax61) = reinterpret_cast<void**>(22);
    goto addr_405821_17;
    addr_4051b0_21:
    eax64 = fun_404ed4(esi10, a2, 0, 0, 1, v11, v8, v6, v16, v20, 0, v62, 0xfe, v63, v55, v19);
    ecx65 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) * 4 + 0x4191d0);
    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ecx65) + reinterpret_cast<unsigned char>(ebx18) + 40) = eax64;
    eax66 = v55;
    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx65) + reinterpret_cast<unsigned char>(ebx18) + 44) = edx21;
    ecx13 = v19;
    addr_4051d9_23:
    edx67 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx13) * 4 + 0x4191d0);
    v68 = eax66;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx67) + reinterpret_cast<unsigned char>(ebx18) + 4) & 72 && (*reinterpret_cast<void***>(reinterpret_cast<int32_t>(edx67) + reinterpret_cast<unsigned char>(ebx18) + 5) != 10 && (esi10 && ((*reinterpret_cast<void***>(eax66) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(edx67) + reinterpret_cast<unsigned char>(ebx18) + 5), edx69 = eax66 + 1, edi14 = reinterpret_cast<void**>(1), eax70 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) * 4 + 0x4191d0), --esi10, v68 = edx69, *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax70) + reinterpret_cast<unsigned char>(ebx18) + 5) = 10, !!v33) && (*reinterpret_cast<void***>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18) + 37) != 10 && (esi10 && ((*reinterpret_cast<void***>(edx69) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18) + 37), edx71 = edx69 + 1, eax72 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) * 4 + 0x4191d0), --esi10, v68 = edx71, edi14 = reinterpret_cast<void**>(2), *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax72) + reinterpret_cast<unsigned char>(ebx18) + 37) = 10, v33 == 1) && ((al73 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18) + 38), al73 != 10) && esi10)))))))) {
        *reinterpret_cast<void***>(edx71) = al73;
        eax74 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) * 4 + 0x4191d0);
        --esi10;
        edi14 = reinterpret_cast<void**>(3);
        v68 = edx71 + 1;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax74) + reinterpret_cast<unsigned char>(ebx18) + 38) = 10;
    }
    eax78 = fun_409fb4(a2, v11, v8, v6, v16, v20, 0, v68, 0xfe, v75, v55, v19, v76, v77);
    eax79 = v19;
    if (eax78 && (ecx80 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax79) * 4 + 0x4191d0), !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx80) + reinterpret_cast<unsigned char>(ebx18) + 4) & 0x80))) {
        v81 = reinterpret_cast<void**>(ebp5 + 0xffffffe0);
        v82 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx80) + reinterpret_cast<unsigned char>(ebx18));
        eax83 = reinterpret_cast<void**>(GetConsoleMode(v82, v81));
        v15 = eax83;
        if (!eax83 || v33 != 2) {
            eax79 = v19;
        } else {
            v84 = reinterpret_cast<void**>(0);
            v85 = reinterpret_cast<void**>(ebp5 + 0xffffffec);
            v86 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi10) >> 1);
            v87 = v68;
            v88 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(reinterpret_cast<unsigned char>(v19) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18));
            eax89 = reinterpret_cast<int32_t>(ReadConsoleW(v88, v87, v86, v85, 0, v82, v81));
            if (!eax89) 
                goto addr_4052d1_29;
            ecx80 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v90) + reinterpret_cast<uint32_t>(v90));
            v91 = ecx80;
            goto addr_40532c_31;
        }
    }
    eax92 = *reinterpret_cast<void****>(reinterpret_cast<unsigned char>(eax79) * 4 + 0x4191d0);
    ecx80 = reinterpret_cast<void**>(ebp5 + 0xffffffec);
    v81 = reinterpret_cast<void**>(0);
    v82 = ecx80;
    v84 = esi10;
    v85 = v68;
    v86 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(eax92) + reinterpret_cast<unsigned char>(ebx18));
    eax93 = reinterpret_cast<int32_t>(ReadFile(v86, v85, v84, v82, 0));
    if (!eax93 || ((ecx80 = v94, reinterpret_cast<signed char>(ecx80) < reinterpret_cast<signed char>(0)) || reinterpret_cast<unsigned char>(ecx80) > reinterpret_cast<unsigned char>(esi10))) {
        eax95 = reinterpret_cast<void**>(GetLastError(v86, v85, v84, v82, 0));
        if (!reinterpret_cast<int1_t>(eax95 == 5)) {
            if (!reinterpret_cast<int1_t>(eax95 == 0x6d)) {
                addr_4052d7_35:
                fun_404005(ecx80, eax95, v86, v85, v84, v82, v81, v11, v8, v6, v16, v20, v15, v68);
                ecx80 = eax95;
            } else {
                ebx96 = reinterpret_cast<void**>(0);
                goto addr_4052e1_37;
            }
        } else {
            eax98 = fun_404026(ecx80, v86, v85, v84, v82, 0, v11, v8, v6, v16, v20, v15, v68, 0xfe, v97, v55, v19);
            *reinterpret_cast<void***>(eax98) = reinterpret_cast<void**>(9);
            eax99 = fun_403ff2(ecx80, v86, v85, v84, v82, 0, v11, v8);
            *reinterpret_cast<void***>(eax99) = reinterpret_cast<void**>(5);
        }
    } else {
        addr_40532c_31:
        edx100 = v19;
        edi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + reinterpret_cast<unsigned char>(ecx80));
        esi101 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx100) * 4 + 0x4191d0);
        al102 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi101) + reinterpret_cast<unsigned char>(ebx18) + 4);
        if (reinterpret_cast<signed char>(al102) >= reinterpret_cast<signed char>(0)) {
            addr_40559b_39:
            eax103 = v55;
            goto addr_40559e_40;
        } else {
            if (v33 == 2) {
                if (!v15) {
                    if (!ecx80 || (edx100 = v19, !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v55) == 10))) {
                        al104 = reinterpret_cast<unsigned char>(al102 & 0xfb);
                    } else {
                        al104 = reinterpret_cast<unsigned char>(al102 | 4);
                    }
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi101) + reinterpret_cast<unsigned char>(ebx18) + 4) = al104;
                    esi105 = v55;
                    v16 = v55;
                    ecx80 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v55) + reinterpret_cast<unsigned char>(edi14));
                    v106 = ecx80;
                    if (reinterpret_cast<unsigned char>(v55) >= reinterpret_cast<unsigned char>(ecx80)) 
                        goto addr_4057cb_47; else 
                        goto addr_40566c_48;
                } else {
                    esi107 = v55;
                    __asm__("cdq ");
                    ecx80 = esi107;
                    edx108 = esi107 + (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edi14) - reinterpret_cast<unsigned char>(edx100)) >> 1) * 2;
                    if (reinterpret_cast<unsigned char>(esi107) >= reinterpret_cast<unsigned char>(edx108)) {
                        addr_40562b_50:
                        eax103 = v55;
                        edi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi107) - reinterpret_cast<unsigned char>(eax103) & 0xfffffffe);
                        goto addr_40559e_40;
                    } else {
                        do {
                            eax109 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(ecx80));
                            if (*reinterpret_cast<void***>(&eax109) == 26) 
                                goto addr_40561c_53;
                            if (*reinterpret_cast<void***>(&eax109) == 13) {
                                if (reinterpret_cast<unsigned char>(ecx80) < reinterpret_cast<unsigned char>(edx108 + 0xfffffffe)) {
                                    ecx80 = ecx80 + 2;
                                    eax110 = 10;
                                    if (*reinterpret_cast<void***>(ecx80) != 10) {
                                        eax110 = 13;
                                    }
                                    *reinterpret_cast<void***>(esi107) = *reinterpret_cast<void***>(&eax110);
                                    esi107 = esi107 + 2;
                                }
                            } else {
                                *reinterpret_cast<void***>(esi107) = *reinterpret_cast<void***>(&eax109);
                                esi107 = esi107 + 2;
                                ecx80 = ecx80 + 2;
                            }
                        } while (reinterpret_cast<unsigned char>(ecx80) < reinterpret_cast<unsigned char>(edx108));
                        goto addr_40561a_61;
                    }
                }
            } else {
                if (!ecx80 || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v55) == 10)) {
                    al111 = reinterpret_cast<unsigned char>(al102 & 0xfb);
                } else {
                    al111 = reinterpret_cast<unsigned char>(al102 | 4);
                }
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi101) + reinterpret_cast<unsigned char>(ebx18) + 4) = al111;
                esi112 = v55;
                v15 = v55;
                ecx80 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v55) + reinterpret_cast<unsigned char>(edi14));
                v68 = ecx80;
                if (reinterpret_cast<unsigned char>(v55) >= reinterpret_cast<unsigned char>(ecx80)) 
                    goto addr_405488_66; else 
                    goto addr_40537a_67;
            }
        }
    }
    addr_4052de_68:
    ebx96 = reinterpret_cast<void**>(0xffffffff);
    addr_4052e1_37:
    eax103 = v55;
    addr_4055a1_69:
    if (eax103 != a3) {
        fun_40295d(ecx80, eax103, v86, v85, v84, v82, v81, v11, v8, v6, v16, v20, ecx80, eax103, v86, v85, v84, v82, v81, v11, v8, v6, v16, v20);
    }
    if (ebx96 != 0xfffffffe) {
        edi14 = ebx96;
    }
    eax31 = edi14;
    goto addr_405829_7;
    addr_4057cb_47:
    eax103 = v55;
    edi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi105) - reinterpret_cast<unsigned char>(eax103));
    goto addr_40559e_40;
    addr_40566c_48:
    ecx80 = reinterpret_cast<void**>(13);
    edi113 = v55;
    do {
        eax114 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(edi113));
        if (*reinterpret_cast<void***>(&eax114) == 26) 
            break;
        if (*reinterpret_cast<void***>(&eax114) == 13) {
            if (reinterpret_cast<unsigned char>(edi113) >= reinterpret_cast<unsigned char>(v106 + 0xfffffffe)) {
                edi113 = edi113 + 2;
                v115 = reinterpret_cast<void**>(ebp5 + 0xffffffec);
                v116 = reinterpret_cast<void**>(ebp5 + 0xfffffff8);
                v117 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(reinterpret_cast<unsigned char>(edx100) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18));
                eax118 = reinterpret_cast<int32_t>(ReadFile(v117, v116, 2, v115, 0, v86, v85, v84, v82, v81));
                if (!eax118 && (eax119 = reinterpret_cast<int32_t>(GetLastError(v117, v116, 2, v115, 0, v86, v85, v84, v82, v81)), !!eax119) || !v91) {
                    edx100 = v19;
                    ecx80 = reinterpret_cast<void**>(13);
                    *reinterpret_cast<void***>(esi105) = reinterpret_cast<void**>(13);
                    esi105 = esi105 + 2;
                    continue;
                } else {
                    edx100 = v19;
                    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx100) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18) + 4) & 72)) {
                        if (esi105 == v55 && reinterpret_cast<int1_t>(v120 == 10)) {
                            *reinterpret_cast<void***>(esi105) = reinterpret_cast<void**>(10);
                            esi105 = esi105 + 2;
                            goto addr_405751_82;
                        }
                        fun_404ed4(13, a2, 0xfe, 0xff, 1, v117, v116, 2, v115, 0, v86, v85, v84, v82, v81, v11);
                        edx100 = v19;
                        if (v121 == 10) {
                            addr_405751_82:
                        } else {
                            ecx80 = reinterpret_cast<void**>(13);
                            *reinterpret_cast<void***>(esi105) = reinterpret_cast<void**>(13);
                            goto addr_405798_85;
                        }
                    } else {
                        if (!reinterpret_cast<int1_t>(v122 == 10)) {
                            *reinterpret_cast<void***>(esi105) = reinterpret_cast<void**>(13);
                            esi105 = esi105 + 2;
                            ecx123 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx100) * 4 + 0x4191d0);
                            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx123) + reinterpret_cast<unsigned char>(ebx18) + 5) = v124;
                            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx100) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18) + 37) = v125;
                            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx100) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18) + 38) = 10;
                            goto addr_405751_82;
                        } else {
                            *reinterpret_cast<void***>(esi105) = reinterpret_cast<void**>(10);
                            esi105 = esi105 + 2;
                        }
                    }
                }
            } else {
                edx100 = v19;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi113 + 2) == 10)) {
                    *reinterpret_cast<void***>(esi105) = reinterpret_cast<void**>(13);
                    goto addr_4056b6_91;
                } else {
                    edi113 = edi113 + 4;
                    *reinterpret_cast<void***>(esi105) = reinterpret_cast<void**>(10);
                    goto addr_405798_85;
                }
            }
        } else {
            *reinterpret_cast<void***>(esi105) = *reinterpret_cast<void***>(&eax114);
            goto addr_4056b6_91;
        }
        ecx80 = reinterpret_cast<void**>(13);
        continue;
        addr_405798_85:
        esi105 = esi105 + 2;
        continue;
        addr_4056b6_91:
        esi105 = esi105 + 2;
        edi113 = edi113 + 2;
    } while (reinterpret_cast<unsigned char>(edi113) < reinterpret_cast<unsigned char>(v106));
    goto addr_40575d_96;
    ecx80 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx100) * 4 + 0x4191d0);
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx80) + reinterpret_cast<unsigned char>(ebx18) + 4) & 64) {
        *reinterpret_cast<void***>(esi105) = *reinterpret_cast<void***>(edi113);
        esi105 = esi105 + 2;
        goto addr_4057cb_47;
    } else {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx80) + reinterpret_cast<unsigned char>(ebx18) + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx80) + reinterpret_cast<unsigned char>(ebx18) + 4) | 2);
        goto addr_4057cb_47;
    }
    addr_40575d_96:
    goto addr_4057cb_47;
    addr_40561c_53:
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18) + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18) + 4) | 2);
    goto addr_40562b_50;
    addr_40561a_61:
    goto addr_40562b_50;
    addr_405488_66:
    eax103 = v55;
    edi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi112) - reinterpret_cast<unsigned char>(eax103));
    if (v33 != 1 || !edi14) {
        addr_40559e_40:
        ebx96 = reinterpret_cast<void**>(0xfe);
        goto addr_4055a1_69;
    } else {
        esi126 = esi112 - 1;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi126)) < reinterpret_cast<signed char>(0)) {
            edx127 = reinterpret_cast<void*>(1);
            if (!*reinterpret_cast<signed char*>(*reinterpret_cast<void***>(esi126) + 0x418400)) {
                ebx128 = v55;
                do {
                    if (reinterpret_cast<int32_t>(edx127) > reinterpret_cast<int32_t>(4)) 
                        break;
                } while (reinterpret_cast<unsigned char>(esi126) >= reinterpret_cast<unsigned char>(ebx128) && (--esi126, edx127 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx127) + 1), *reinterpret_cast<signed char*>(*reinterpret_cast<void***>(esi126) + 0x418400) == 0));
                ebx18 = v20;
            }
            eax129 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<signed char*>(*reinterpret_cast<void***>(esi126) + 0x418400)));
            if (!eax129) 
                goto addr_4054e8_107;
        } else {
            ++esi126;
            goto addr_40555d_109;
        }
    }
    if (!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(eax129) + 1 == edx127)) {
        ecx80 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v19) * 4 + 0x4191d0);
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx80) + reinterpret_cast<unsigned char>(ebx18) + 4) & 72)) {
            edx130 = reinterpret_cast<void**>(-reinterpret_cast<uint32_t>(edx127));
            __asm__("cdq ");
            fun_404ed4(ecx80, a2, edx130, edx130, 1, v86, v85, v84, v82, v81, v11, v8, v6, v16, v20, v15);
        } else {
            esi131 = esi126 + 1;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx80) + reinterpret_cast<unsigned char>(ebx18) + 5) = *reinterpret_cast<void***>(esi126);
            eax132 = v19;
            if (reinterpret_cast<int32_t>(edx127) >= reinterpret_cast<int32_t>(2)) {
                ecx80 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax132) * 4 + 0x4191d0);
                ++esi131;
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx80) + reinterpret_cast<unsigned char>(ebx18) + 37) = *reinterpret_cast<void***>(esi131);
                eax132 = v19;
            }
            if (reinterpret_cast<int1_t>(edx127 == 3)) {
                ecx80 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax132) * 4 + 0x4191d0);
                ++esi131;
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx80) + reinterpret_cast<unsigned char>(ebx18) + 38) = *reinterpret_cast<void***>(esi131);
            }
            esi126 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi131) - reinterpret_cast<uint32_t>(edx127));
        }
    } else {
        esi126 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi126) + reinterpret_cast<uint32_t>(edx127));
    }
    addr_40555d_109:
    esi133 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi126) - reinterpret_cast<unsigned char>(v55));
    v87 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) >> 1);
    v88 = a3;
    eax134 = reinterpret_cast<void**>(MultiByteToWideChar(0xfde9, 0, v55, esi133, v88, v87, v86, v85, v84, v82, v81));
    edi14 = eax134;
    if (!edi14) {
        addr_4052d1_29:
        eax95 = reinterpret_cast<void**>(GetLastError(v88, v87, v86, v85, v84, v82, v81));
        goto addr_4052d7_35;
    } else {
        ecx80 = reinterpret_cast<void**>(0);
        ecx80 = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi14 != esi133)));
        edi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + reinterpret_cast<unsigned char>(edi14));
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18) + 48) = ecx80;
        goto addr_40559b_39;
    }
    addr_4054e8_107:
    eax135 = fun_404026(ecx80, v86, v85, v84, v82, v81, v11, v8, v6, v16, v20, v15, v68, 0xfe, v91, v55, v19);
    *reinterpret_cast<void***>(eax135) = reinterpret_cast<void**>(42);
    goto addr_4052de_68;
    addr_40537a_67:
    ecx80 = reinterpret_cast<void**>(13);
    edi136 = v55;
    do {
        if (*reinterpret_cast<void***>(edi136) == 26) 
            break;
        if (*reinterpret_cast<void***>(edi136) == 13) {
            if (reinterpret_cast<unsigned char>(edi136) >= reinterpret_cast<unsigned char>(v68 - 1)) {
                ++edi136;
                v137 = reinterpret_cast<void**>(ebp5 + 0xffffffec);
                v138 = reinterpret_cast<void**>(ebp5 + 0xffffffff);
                v139 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(reinterpret_cast<unsigned char>(edx100) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18));
                eax140 = reinterpret_cast<int32_t>(ReadFile(v139, v138, 1, v137, 0, v86, v85, v84, v82, v81));
                if (!eax140 && (eax141 = reinterpret_cast<int32_t>(GetLastError(v139, v138, 1, v137, 0, v86, v85, v84, v82, v81)), !!eax141) || !v91) {
                    edx100 = v19;
                    ecx80 = reinterpret_cast<void**>(13);
                    *reinterpret_cast<void***>(esi112) = reinterpret_cast<void**>(13);
                    ++esi112;
                    continue;
                } else {
                    edx100 = v19;
                    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx100) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18) + 4) & 72)) {
                        if (esi112 == v55 && reinterpret_cast<int1_t>(v142 == 10)) {
                            *reinterpret_cast<void***>(esi112) = reinterpret_cast<void**>(10);
                            ++esi112;
                            goto addr_40542f_128;
                        }
                        fun_404ed4(13, a2, 0xff, 0xff, 1, v139, v138, 1, v137, 0, v86, v85, v84, v82, v81, v11);
                        edx100 = v19;
                        if (v143 == 10) {
                            addr_40542f_128:
                        } else {
                            ecx80 = reinterpret_cast<void**>(13);
                            *reinterpret_cast<void***>(esi112) = reinterpret_cast<void**>(13);
                            goto addr_40545e_131;
                        }
                    } else {
                        if (!reinterpret_cast<int1_t>(v144 == 10)) {
                            *reinterpret_cast<void***>(esi112) = reinterpret_cast<void**>(13);
                            ++esi112;
                            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx100) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ebx18) + 5) = v145;
                        } else {
                            *reinterpret_cast<void***>(esi112) = reinterpret_cast<void**>(10);
                            ++esi112;
                        }
                    }
                }
            } else {
                eax146 = edi136 + 1;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax146) == 10)) {
                    *reinterpret_cast<void***>(esi112) = reinterpret_cast<void**>(13);
                    edi136 = eax146;
                    ++esi112;
                    continue;
                } else {
                    edi136 = edi136 + 2;
                    *reinterpret_cast<void***>(esi112) = reinterpret_cast<void**>(10);
                    goto addr_40545e_131;
                }
            }
        } else {
            *reinterpret_cast<void***>(esi112) = *reinterpret_cast<void***>(edi136);
            ++esi112;
            ++edi136;
            continue;
        }
        ecx80 = reinterpret_cast<void**>(13);
        continue;
        addr_40545e_131:
        ++esi112;
    } while (reinterpret_cast<unsigned char>(edi136) < reinterpret_cast<unsigned char>(v68));
    goto addr_40543b_141;
    ecx80 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx100) * 4 + 0x4191d0);
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx80) + reinterpret_cast<unsigned char>(ebx18) + 4) & 64) {
        *reinterpret_cast<void***>(esi112) = *reinterpret_cast<void***>(edi136);
        ++esi112;
        goto addr_405488_66;
    } else {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx80) + reinterpret_cast<unsigned char>(ebx18) + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx80) + reinterpret_cast<unsigned char>(ebx18) + 4) | 2);
        goto addr_405488_66;
    }
    addr_40543b_141:
    goto addr_405488_66;
    addr_405195_22:
    eax151 = fun_404026(esi10, v11, v8, v6, v16, v20, 0, v147, 0xfe, v148, v55, v19, v149, v150, ebp29, __return_address(), a2);
    *reinterpret_cast<void***>(eax151) = reinterpret_cast<void**>(12);
    eax47 = fun_403ff2(esi10, v11, v8, v6, v16, v20, 0, v152);
    *reinterpret_cast<void***>(eax47) = reinterpret_cast<void**>(8);
    goto addr_405826_16;
    addr_40515f_12:
    if (!(eax34 - 1)) {
        eax153 = reinterpret_cast<int32_t>(~reinterpret_cast<unsigned char>(esi10));
        if (!(*reinterpret_cast<unsigned char*>(&eax153) & 1)) 
            goto addr_405145_9;
        esi10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi10) & 0xfffffffe);
    }
    eax66 = a3;
    v55 = eax66;
    goto addr_4051d9_23;
}

void** fun_404039(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** ecx7;
    uint32_t eax8;
    void* eax9;

    ecx7 = a2;
    eax8 = 0;
    do {
        if (ecx7 == *reinterpret_cast<void***>(eax8 * 8 + 0x418000)) 
            break;
        ++eax8;
    } while (eax8 < 45);
    goto addr_404050_4;
    return *reinterpret_cast<void***>(eax8 * 8 + 0x418004);
    addr_404050_4:
    if (reinterpret_cast<uint32_t>(ecx7 + 0xffffffed) > 17) {
        eax9 = reinterpret_cast<void*>(ecx7 + 0xffffff44);
        return (reinterpret_cast<uint32_t>(eax9) - (reinterpret_cast<uint32_t>(eax9) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax9) < reinterpret_cast<uint32_t>(eax9) + reinterpret_cast<uint1_t>(14 < reinterpret_cast<uint32_t>(eax9)))) & 14) + 8;
    } else {
        return 13;
    }
}

void** g419a48;

void fun_402ae9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    int1_t zf12;
    void** ebp13;

    zf12 = reinterpret_cast<int1_t>(g419a48 == 2);
    if (!zf12) {
        fun_406fbe(ecx, ebp13, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    fun_40701b(ecx, a2, ebp13, __return_address(), a2, a3);
    fun_406cf1(ecx, 0xff, a2, ebp13, __return_address(), a2, a3, a4, a5);
    return;
}

void fun_406dd9();

int32_t fun_4092b1(void** ecx, void** a2, void** a3, void** a4);

void** fun_407d92(void** a1);

void fun_4075ca(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** g418540 = reinterpret_cast<void**>(0xff);

void** fun_4078af(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_408f5b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t fun_407dee(void** ecx, void** a2, void** a3);

void fun_407786(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

int32_t GetCurrentThreadId = 0x17d4e;

int32_t fun_407839(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int32_t eax6;
    void** eax7;
    void** esi8;
    void** eax9;
    void** ecx10;
    void** v11;
    int32_t eax12;
    void** eax13;

    fun_406dd9();
    eax6 = fun_4092b1(ecx, __return_address(), a2, a3);
    if (!eax6 || (eax7 = fun_407d92(fun_4075ca), g418540 = eax7, ecx = reinterpret_cast<void**>(fun_4075ca), eax7 == 0xffffffff)) {
        fun_4078af(ecx, __return_address(), a2, a3, a4, a5);
        return 0;
    } else {
        eax9 = fun_408f5b(fun_4075ca, 1, 0x3bc, esi8, __return_address(), a2, a3);
        ecx10 = reinterpret_cast<void**>(0x3bc);
        if (!eax9 || (v11 = g418540, eax12 = fun_407dee(0x3bc, v11, eax9), ecx10 = eax9, eax12 == 0)) {
            fun_4078af(ecx10, esi8, __return_address(), a2, a3, a4);
            return 0;
        } else {
            fun_407786(ecx10, eax9, 0, esi8, __return_address(), a2);
            eax13 = reinterpret_cast<void**>(GetCurrentThreadId(0));
            *reinterpret_cast<void***>(eax9 + 4) = reinterpret_cast<void**>(0xffffffff);
            *reinterpret_cast<void***>(eax9) = eax13;
            return 1;
        }
    }
}

int32_t GetEnvironmentStringsW = 0x17dc4;

int32_t WideCharToMultiByte = 0x17ca8;

int32_t FreeEnvironmentStringsW = 0x17dde;

void** fun_407d05(void** ecx) {
    void** eax2;
    void** edi3;
    void** eax4;
    void** v5;
    void** esi6;
    void** esi7;
    void** esi8;
    void** eax9;
    void** ebx10;
    void** eax11;
    void** ebx12;
    void** v13;
    int32_t eax14;

    eax2 = reinterpret_cast<void**>(GetEnvironmentStringsW());
    edi3 = eax2;
    eax4 = reinterpret_cast<void**>(0);
    if (edi3) {
        v5 = esi6;
        esi7 = edi3;
        if (*reinterpret_cast<void***>(edi3)) {
            addr_407d20_3:
            esi7 = esi7 + 2;
            if (*reinterpret_cast<void***>(esi7)) 
                goto addr_407d20_3;
            esi7 = esi7 + 2;
            if (*reinterpret_cast<void***>(esi7)) 
                goto addr_407d20_3;
        }
        esi8 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(esi7) - reinterpret_cast<unsigned char>(edi3)) >> 1) + 1);
        eax9 = reinterpret_cast<void**>(WideCharToMultiByte());
        if (!eax9 || (eax11 = fun_408fa3(ecx, eax9, 0, 0, edi3, esi8, 0, 0, 0, 0, ebx10, v5), ebx12 = eax11, ecx = eax9, ebx12 == 0)) {
            FreeEnvironmentStringsW(ecx);
            eax4 = reinterpret_cast<void**>(0);
        } else {
            v13 = ebx12;
            eax14 = reinterpret_cast<int32_t>(WideCharToMultiByte(ecx, 0, 0, edi3, esi8, v13, eax9, 0));
            if (!eax14) {
                fun_40295d(ecx, ebx12, 0, 0, edi3, esi8, v13, eax9, 0, 0, 0, 0, ecx, ebx12, 0, 0, edi3, esi8, v13, eax9, 0, 0, 0, 0);
                ecx = ebx12;
                ebx12 = reinterpret_cast<void**>(0);
            }
            FreeEnvironmentStringsW(ecx, edi3, 0, 0, edi3, esi8, v13, eax9, 0);
            eax4 = ebx12;
        }
    }
    return eax4;
}

int32_t g419ff0;

void** fun_408594(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

void** g419a44;

int32_t GetModuleFileNameA = 0x17d64;

void*** g41b008;

void*** g4192ec;

void** fun_40797f(void** ecx, void*** a2, void** a3, void** a4, void** a5, uint32_t* a6);

void** g4192dc;

void** g4192d8;

uint32_t fun_4078cc(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void*** ebp9;
    int1_t zf10;
    void** ebp11;
    void*** esi12;
    void** edx13;
    void** edi14;
    void** esi15;
    void** ebx16;
    void** eax17;
    uint32_t eax18;

    ebp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    zf10 = g419ff0 == 0;
    if (zf10) {
        fun_408594(ecx, ecx, ecx, ebp11, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    }
    g419a44 = reinterpret_cast<void**>(0);
    GetModuleFileNameA();
    esi12 = g41b008;
    g4192ec = reinterpret_cast<void***>(0x419940);
    if (!esi12 || !*esi12) {
        esi12 = reinterpret_cast<void***>(0x419940);
    }
    fun_40797f(ecx, esi12, 0, 0, ebp9 + 0xfffffffc, ebp9 + 0xfffffff8);
    if (reinterpret_cast<unsigned char>(ecx) >= reinterpret_cast<unsigned char>(0x3fffffff) || (reinterpret_cast<unsigned char>(ecx) >= reinterpret_cast<unsigned char>(0xffffffff) || ((edx13 = ecx + reinterpret_cast<unsigned char>(ecx) * 4, reinterpret_cast<unsigned char>(edx13) < reinterpret_cast<unsigned char>(ecx)) || (eax17 = fun_408fa3(ecx, edx13, 0, 0x419940, 0x104, edi14, esi15, ebx16, ecx, ecx, ebp11, __return_address()), eax17 == 0)))) {
        eax18 = 0xffffffff;
    } else {
        fun_40797f(edx13, esi12, eax17, eax17 + reinterpret_cast<unsigned char>(ecx) * 4, ebp9 + 0xfffffffc, ebp9 + 0xfffffff8);
        g4192dc = eax17;
        g4192d8 = ecx - 1;
        eax18 = 0;
    }
    return eax18;
}

void fun_406d07(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** ebp12;

    fun_406fbe(ecx, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    fun_40701b(ecx, a2, ebp12, __return_address(), a2, a3);
    fun_406dc5(a2, 0xff, ebp12, __return_address(), a2, a3);
    fun_406e7b(a2, 0, 1, 1, 0xff, ebp12, __return_address());
    goto 0xff;
}

/* (image base) */
int32_t image_base_ = 0x40c7df;

uint32_t fun_409790(void** ecx, void** a2);

void fun_4090c4(void** ecx);

void** fun_406e47(void** ecx, int32_t* a2, int32_t* a3);

int32_t fun_40a335(void** ecx, void** a2);

void fun_407ce5();

void fun_406e11(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t g419fe4;

void** fun_406d41(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int1_t zf6;
    uint32_t eax7;
    void** eax8;
    void** ebp9;
    int1_t zf10;
    uint32_t eax11;

    zf6 = image_base_ == 0;
    if (!zf6 && (eax7 = fun_409790(ecx, 0x414cc8), ecx = reinterpret_cast<void**>(0x414cc8), !!eax7)) {
        image_base_(0x414cc8);
        ecx = a2;
    }
    fun_4090c4(ecx);
    eax8 = fun_406e47(ecx, 0x41110c, 0x411124);
    if (!eax8) {
        fun_40a335(0x411124, fun_407ce5);
        fun_406e11(0x411124, 0x411104, 0x411108, ebp9, __return_address(), a2, a3);
        zf10 = g419fe4 == 0;
        if (!zf10 && (eax11 = fun_409790(0x411108, 0x419fe4), !!eax11)) {
            g419fe4(0x419fe4, 0, 2, 0);
        }
        eax8 = reinterpret_cast<void**>(0);
    }
    return eax8;
}

void fun_406faa(void** ecx, void** a2) {
    void** ebp3;

    fun_406e7b(ecx, a2, 0, 0, ebp3, __return_address(), a2);
    return;
}

void fun_406d32(void** ecx, void** a2, void** a3, void** a4) {
    fun_406e7b(ecx, 0, 0, 1, __return_address(), a2, a3);
    return;
}

void fun_406dc5(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** ebp7;

    fun_406e7b(ecx, a2, 1, 0, ebp7, __return_address(), a2);
    return;
}

void fun_406d23(void** ecx, void** a2, void** a3) {
    fun_406e7b(ecx, 0, 1, 1, __return_address(), a2, a3);
    return;
}

uint32_t g419f4c;

void fun_408152(void** ecx) {
    g419f4c = 0;
    return;
}

int32_t SetUnhandledExceptionFilter = 0x17e14;

int32_t UnhandledExceptionFilter = 0x17df8;

int32_t fun_40813c(void** a1) {
    SetUnhandledExceptionFilter();
    UnhandledExceptionFilter();
    goto 0;
}

int32_t IsDebuggerPresent = 0x17b6e;

void** fun_402b1a(void** ecx, void** a2, void** a3, void** a4, int32_t a5) {
    void* ebp6;
    void** eax7;
    void** edi8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    int32_t eax17;
    void** v18;
    int32_t eax19;
    void** v20;
    void** v21;
    void** eax22;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g4183f0;
    if (a2 != 0xffffffff) {
        fun_408152(ecx);
        ecx = a2;
    }
    fun_407390(ecx, reinterpret_cast<uint32_t>(ebp6) + 0xfffffce4, 0, 76, edi8, v9, v10, 0, v11, v12, v13, v14, v15, v16);
    eax17 = reinterpret_cast<int32_t>(IsDebuggerPresent());
    v18 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp6) + 0xfffffcd8);
    eax19 = fun_40813c(v18);
    if (!eax19 && (!eax17 && a2 != 0xffffffff)) {
        fun_408152(v18);
    }
    eax22 = fun_404f47(reinterpret_cast<unsigned char>(eax7) ^ reinterpret_cast<uint32_t>(ebp6) ^ reinterpret_cast<uint32_t>(ebp6), reinterpret_cast<uint32_t>(ebp6) + 0xfffffce0, reinterpret_cast<uint32_t>(ebp6) + 0xfffffd30, a3, a4, v20, __return_address(), v21);
    return eax22;
}

int32_t GetCurrentProcess = 0x17e62;

int32_t TerminateProcess = 0x17e76;

void** fun_408127(void** ecx, int32_t a2, void** a3, void** a4, void** a5) {
    GetCurrentProcess();
    TerminateProcess();
    goto a2;
}

void** fun_4076ff(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** esi9;
    void** eax10;

    eax10 = fun_407717(esi9, __return_address(), a2, a3, a4, a5, a6);
    if (!eax10) {
        fun_406d07(ecx, 16, esi9, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    }
    return eax10;
}

void** g418c98 = reinterpret_cast<void**>(0xfe);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xe0);

void** fun_408549(int32_t ecx, void*** a2, void** a3);

void fun_408540(void** ecx);

void** fun_4084c9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    int32_t ebp8;
    void** eax9;
    void** ecx10;
    int32_t ebp11;
    void** v12;
    void** eax13;
    void** esi14;
    int32_t ebp15;
    int32_t ebp16;
    void** eax17;

    fun_404590(0x417818, 12, __return_address());
    *reinterpret_cast<uint32_t*>(ebp8 - 28) = 0;
    eax9 = fun_4076ff(ecx, 0x417818, 12, __return_address(), a2, a3, a4, a5);
    ecx10 = g418c98;
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9 + 0x70)) & reinterpret_cast<unsigned char>(ecx10)) || !*reinterpret_cast<void***>(eax9 + 0x6c)) {
        fun_409180(ecx10, 12, 0x417818, 12, __return_address(), a2, a3, a4, a5, a6);
        *reinterpret_cast<uint32_t*>(ebp11 - 4) = 0;
        v12 = image_base_;
        eax13 = fun_408549(12, eax9 + 0x6c, v12);
        ecx10 = v12;
        esi14 = eax13;
        *reinterpret_cast<void***>(ebp15 - 28) = esi14;
        *reinterpret_cast<int32_t*>(ebp16 - 4) = -2;
        fun_408540(ecx10);
    } else {
        eax17 = fun_4076ff(ecx10, 0x417818, 12, __return_address(), a2, a3, a4, a5);
        esi14 = *reinterpret_cast<void***>(eax17 + 0x6c);
    }
    if (!esi14) {
        fun_406d07(ecx10, 32, 0x417818, 12, __return_address(), a2, a3, a4, a5, a6, a7);
        ecx10 = reinterpret_cast<void**>(32);
    }
    fun_4045d5(ecx10, 0x417818, 12, __return_address(), a2);
    goto 0x417818;
}

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(80);

void fun_4088e8(void** ecx);

void** fun_40884b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    int32_t ebp9;
    void** eax10;
    void** ecx11;
    int32_t ebp12;
    void** esi13;
    int32_t ebp14;
    int1_t zf15;
    void** eax16;
    int32_t ebp17;
    int32_t ebp18;

    fun_404590(0x417838, 12, __return_address());
    *reinterpret_cast<void***>(ebp9 - 28) = reinterpret_cast<void**>(0);
    eax10 = fun_4076ff(ecx, 0x417838, 12, __return_address(), a2, a3, a4, a5);
    ecx11 = g418c98;
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax10 + 0x70)) & reinterpret_cast<unsigned char>(ecx11)) || !*reinterpret_cast<void***>(eax10 + 0x6c)) {
        fun_409180(ecx11, 13, 0x417838, 12, __return_address(), a2, a3, a4, a5, a6);
        ecx11 = reinterpret_cast<void**>(13);
        *reinterpret_cast<void***>(ebp12 - 4) = reinterpret_cast<void**>(0);
        esi13 = *reinterpret_cast<void***>(eax10 + 0x68);
        *reinterpret_cast<void***>(ebp14 - 28) = esi13;
        zf15 = esi13 == image_base_;
        if (!zf15) {
            if (esi13 && (!1 && esi13 != 0x418750)) {
                fun_40295d(13, esi13, 0x417838, 12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
                ecx11 = esi13;
            }
            eax16 = image_base_;
            *reinterpret_cast<void***>(eax10 + 0x68) = eax16;
            esi13 = image_base_;
            *reinterpret_cast<void***>(ebp17 - 28) = esi13;
            __asm__("lock xadd [esi], eax");
        }
        *reinterpret_cast<int32_t*>(ebp18 - 4) = -2;
        fun_4088e8(ecx11);
    } else {
        esi13 = *reinterpret_cast<void***>(eax10 + 0x68);
    }
    if (!esi13) {
        fun_406d07(ecx11, 32, 0x417838, 12, __return_address(), a2, a3, a4, a5, a6, a7);
        ecx11 = reinterpret_cast<void**>(32);
    }
    fun_4045d5(ecx11, 0x417838, 12, __return_address(), a2);
    goto 0x417838;
}

void** fun_40b573(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

void** g419a68;

void fun_408119(void** ecx, void** a2);

void** fun_408f5b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** ebp10;
    void** v11;
    void** esi12;
    void** v13;
    void** edi14;
    void** esi15;
    void** eax16;
    int1_t below_or_equal17;
    void** v18;
    int1_t below_or_equal19;

    v8 = reinterpret_cast<void**>(__return_address());
    v9 = ebp10;
    v11 = esi12;
    v13 = edi14;
    esi15 = reinterpret_cast<void**>(0);
    do {
        eax16 = fun_40b573(ecx, a2, a3, 0, v13, v11, v9, v8, a2, a3, a4, a5, a6, a7);
        if (eax16) 
            break;
        below_or_equal17 = reinterpret_cast<unsigned char>(g419a68) <= reinterpret_cast<unsigned char>(eax16);
        if (below_or_equal17) 
            break;
        v18 = esi15;
        fun_408119(ecx, v18);
        esi15 = esi15 + 0x3e8;
        ecx = v18;
        below_or_equal19 = reinterpret_cast<unsigned char>(esi15) <= reinterpret_cast<unsigned char>(g419a68);
        if (!below_or_equal19) {
            esi15 = reinterpret_cast<void**>(0xffffffff);
        }
    } while (!reinterpret_cast<int1_t>(esi15 == 0xffffffff));
    return eax16;
}

void** fun_4071ed(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

void** fun_402e53(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, int16_t a13) {
    void** ebp14;
    void** eax15;
    void** edx16;

    *reinterpret_cast<void***>(a2 + 4) = *reinterpret_cast<void***>(a2 + 4) - 1;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2 + 4)) < reinterpret_cast<signed char>(0)) {
        eax15 = fun_4071ed(a2, a2, ebp14, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        edx16 = eax15;
    } else {
        edx16 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a2)))));
        *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a2) + 1;
    }
    return edx16;
}

int32_t g419f34;

void** fun_408cd6(void** a1, void** a2);

/* (image base) */
uint16_t* image_base_ = reinterpret_cast<uint16_t*>(0x412520);

void** fun_408dab(void** ecx, void** a2) {
    int1_t zf3;
    void** eax4;
    uint16_t* eax5;

    zf3 = g419f34 == 0;
    if (!zf3) {
        eax4 = fun_408cd6(a2, 0);
        return eax4;
    } else {
        eax5 = image_base_;
        return static_cast<uint32_t>(eax5[reinterpret_cast<unsigned char>(a2)]) & 8;
    }
}

void** fun_403fc4(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, int16_t a8) {
    void** v9;
    void** v10;
    void** ebp11;
    void** v12;
    void** ebx13;
    void** v14;
    void** esi15;
    void** esi16;
    void** eax17;
    void** ebx18;
    void** ecx19;
    void** eax20;

    v9 = reinterpret_cast<void**>(__return_address());
    v10 = ebp11;
    v12 = ebx13;
    v14 = esi15;
    esi16 = a2;
    do {
        *reinterpret_cast<void***>(esi16) = *reinterpret_cast<void***>(esi16) + 1;
        eax17 = fun_402e53(ecx, a3, v14, v12, v10, v9, a2, a3, a4, a5, a6, a7, a8);
        ebx18 = eax17;
        if (ebx18 == 0xffffffff) 
            break;
        ecx19 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ebx18)));
        eax20 = fun_408dab(ecx19, ecx19);
        ecx = ecx19;
    } while (eax20);
    return ebx18;
}

void fun_40a008(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_40815a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, int16_t a14) {
    void** ebx15;
    void** edi16;
    void** esi17;
    void** ebx18;
    void** ebp19;
    void** eax20;
    void** edx21;
    void** eax22;
    void** eax23;
    void** eax24;

    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 64) {
        addr_4081db_2:
        ebx15 = a2;
        if (ebx15 == 0xffffffff) 
            goto addr_4081d4_3;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 1) 
            goto addr_4081f4_5;
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 0x80)) 
            goto addr_4081d4_3;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 2) 
            goto addr_4081d4_3;
    } else {
        eax20 = fun_4048e2(ecx, a3, edi16, esi17, ebx18, ebp19, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
        ecx = eax20;
        if (ecx == 0xffffffff || ecx == 0xfffffffe) {
            edx21 = reinterpret_cast<void**>(0x418500);
        } else {
            edx21 = reinterpret_cast<void**>(((reinterpret_cast<unsigned char>(ecx) & 31) << 6) + reinterpret_cast<uint32_t>(*reinterpret_cast<void****>((reinterpret_cast<signed char>(eax20) >> 5) * 4 + 0x4191d0)));
        }
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx21 + 36)) & 0x7f) 
            goto addr_4081c4_12; else 
            goto addr_40819f_13;
    }
    addr_4081f4_5:
    if (!*reinterpret_cast<void***>(a3 + 8)) {
        fun_40a008(ecx, a3, edi16, esi17, ebx18, ebp19, __return_address(), a2);
    }
    if (*reinterpret_cast<void***>(a3) == *reinterpret_cast<void***>(a3 + 8)) 
        goto addr_408208_16;
    addr_408211_17:
    *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(a3) - 1;
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 64)) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(a3)) = ebx15;
        goto addr_408226_19;
    }
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(a3)) == ebx15) {
        addr_408226_19:
        eax22 = *reinterpret_cast<void***>(a3 + 12);
        *reinterpret_cast<void***>(a3 + 4) = *reinterpret_cast<void***>(a3 + 4) + 1;
        *reinterpret_cast<void***>(a3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax22) & 0xffffffef | 1);
        eax23 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx15)));
    } else {
        *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(a3) + 1;
        goto addr_4081d4_3;
    }
    addr_4081d6_22:
    return eax23;
    addr_408208_16:
    if (*reinterpret_cast<void***>(a3 + 4)) {
        addr_4081d4_3:
        eax23 = reinterpret_cast<void**>(0xffffffff);
        goto addr_4081d6_22;
    } else {
        *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(a3) + 1;
        goto addr_408211_17;
    }
    addr_4081c4_12:
    eax24 = fun_404026(ecx, edi16, esi17, ebx18, ebp19, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    *reinterpret_cast<void***>(eax24) = reinterpret_cast<void**>(22);
    fun_402c77(ecx);
    goto addr_4081d4_3;
    addr_40819f_13:
    if (ecx == 0xffffffff || ecx == 0xfffffffe) {
        ecx = reinterpret_cast<void**>(0x418500);
    } else {
        ecx = reinterpret_cast<void**>(((reinterpret_cast<unsigned char>(ecx) & 31) << 6) + reinterpret_cast<uint32_t>(*reinterpret_cast<void****>((reinterpret_cast<signed char>(ecx) >> 5) * 4 + 0x4191d0)));
    }
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx + 36)) & 0x80)) 
        goto addr_4081db_2; else 
        goto addr_4081c4_12;
}

void** fun_408c84(void** a1, void** a2);

void** fun_408d80(void** a1, ...) {
    int1_t zf2;
    void** eax3;
    uint16_t* eax4;

    zf2 = g419f34 == 0;
    if (!zf2) {
        eax3 = fun_408c84(a1, 0);
        return eax3;
    } else {
        eax4 = image_base_;
        return static_cast<uint32_t>(eax4[reinterpret_cast<unsigned char>(a1)]) & 4;
    }
}

void** fun_409034(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_402dd3(void** ecx, void** a2, void*** a3, void*** a4, void** a5, int32_t* a6, void** a7, ...) {
    void** eax8;
    void** eax9;
    void** ecx10;
    void** edi11;
    void** esi12;
    void** eax13;
    void** ebp14;
    void** eax15;
    void** v16;
    void** v17;

    eax8 = *a3;
    if (a2 != eax8) {
        addr_402e2b_2:
        eax9 = reinterpret_cast<void**>(1);
    } else {
        ecx10 = *a4;
        if (ecx10 != a5) {
            eax13 = fun_409034(ecx10, eax8, 2, edi11, esi12);
            if (!eax13) {
                addr_402dfc_5:
                eax9 = reinterpret_cast<void**>(0);
            } else {
                *a4 = eax13;
                goto addr_402e29_7;
            }
        } else {
            eax15 = fun_408f5b(ecx10, eax8, 2, edi11, esi12, ebp14, __return_address());
            *a4 = eax15;
            if (!eax15) 
                goto addr_402dfc_5;
            *a6 = 1;
            v16 = *a3;
            v17 = *a4;
            fun_405c40(2, v17, a5, v16);
            goto addr_402e29_7;
        }
    }
    return eax9;
    addr_402e29_7:
    *a3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*a3) << 1);
    goto addr_402e2b_2;
}

void** fun_408e03(void** ecx, void** a2, void** a3);

void** fun_408e3d(void** ecx, void** a2, void** a3, void** a4) {
    void** eax5;

    eax5 = fun_408e03(ecx, a2, 0);
    return eax5;
}

void** fun_402e32(void** ecx, unsigned char a2) {
    void** eax3;
    void** eax4;

    eax3 = fun_408d80(static_cast<uint32_t>(a2));
    eax4 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(a2)));
    if (!eax3) {
        eax4 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax4) & 0xffffffdf) - 7);
    }
    return eax4;
}

void** fun_403ff2(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** eax9;

    eax9 = fun_407717(__return_address(), a2, a3, a4, a5, a6, a7);
    if (eax9) {
        return eax9 + 12;
    } else {
        return 0x41816c;
    }
}

int32_t DeleteCriticalSection = 0x17c72;

void fun_409177(void** ecx);

void fun_4090e3(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    uint32_t edi12;
    int32_t ebp13;
    void** ecx14;
    int32_t ebp15;
    void** esi16;
    int32_t ebp17;
    int1_t less18;
    void** eax19;
    void** v20;
    int32_t eax21;
    int32_t ebp22;
    void** eax23;
    void** v24;
    void** eax25;
    void** v26;
    void** eax27;
    int32_t ebp28;

    v11 = reinterpret_cast<void**>(__return_address());
    fun_404590(0x417878, 16, v11);
    edi12 = 0;
    *reinterpret_cast<uint32_t*>(ebp13 - 28) = 0;
    fun_409180(ecx, 1, 0x417878, 16, v11, a2, a3, a4, a5, a6);
    ecx14 = reinterpret_cast<void**>(1);
    *reinterpret_cast<uint32_t*>(ebp15 - 4) = 0;
    esi16 = reinterpret_cast<void**>(3);
    while (*reinterpret_cast<void***>(ebp17 - 32) = esi16, less18 = reinterpret_cast<signed char>(esi16) < reinterpret_cast<signed char>(g41b004), less18) {
        eax19 = g41b000;
        if (*reinterpret_cast<void***>(eax19 + reinterpret_cast<unsigned char>(esi16) * 4)) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax19 + reinterpret_cast<unsigned char>(esi16) * 4) + 12)) & 0x83 && (v20 = *reinterpret_cast<void***>(eax19 + reinterpret_cast<unsigned char>(esi16) * 4), eax21 = fun_401efa(ecx14, v20, 0x417878, 16, v11, a2, a3, a4, a5, a6, a7, a8, a9, a10), ecx14 = v20, eax21 != -1)) {
                ++edi12;
                *reinterpret_cast<uint32_t*>(ebp22 - 28) = edi12;
            }
            if (reinterpret_cast<signed char>(esi16) >= reinterpret_cast<signed char>(20)) {
                eax23 = g41b000;
                v24 = *reinterpret_cast<void***>(eax23 + reinterpret_cast<unsigned char>(esi16) * 4) + 32;
                DeleteCriticalSection(ecx14, v24);
                eax25 = g41b000;
                v26 = *reinterpret_cast<void***>(eax25 + reinterpret_cast<unsigned char>(esi16) * 4);
                fun_40295d(ecx14, v26, v24, 0x417878, 16, v11, a2, a3, a4, a5, a6, a7);
                ecx14 = v26;
                eax27 = g41b000;
                *reinterpret_cast<void***>(eax27 + reinterpret_cast<unsigned char>(esi16) * 4) = reinterpret_cast<void**>(0);
            }
        }
        ++esi16;
    }
    *reinterpret_cast<int32_t*>(ebp28 - 4) = -2;
    fun_409177(ecx14);
    fun_4045d5(ecx14, 0x417878, 16, v11, a2);
    goto 0x417878;
}

struct s24 {
    signed char[32] pad32;
    void** f20;
    signed char[31] pad64;
    void** f40;
};

struct s24* fun_404114() {
    return 0x418170;
}

int32_t fun_409180(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** esi11;
    void** ebp12;
    int32_t eax13;

    if (!*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a2) * 8 + 0x418cc8) && (eax13 = fun_409208(ecx, a2, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10), ecx = a2, !eax13)) {
        fun_406d07(ecx, 17, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7);
        ecx = reinterpret_cast<void**>(17);
    }
    EnterCriticalSection(ecx);
    goto ebp12;
}

int32_t LeaveCriticalSection = 0x17bd6;

void fun_4092ea(void** ecx, void*** a2) {
    int32_t ebp3;

    LeaveCriticalSection();
    goto ebp3;
}

struct s25 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_4092a8(void** ecx);

int32_t fun_409208(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int1_t zf15;
    int32_t edi16;
    struct s25* ebp17;
    void** eax18;
    int32_t ebp19;
    int32_t ebp20;
    void** eax21;

    fun_404590(0x417898, 8, __return_address());
    zf15 = g41993c == 0;
    if (zf15) {
        fun_406fbe(ecx, 0x417898, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
        fun_40701b(ecx, 30, 0x417898, 8, __return_address(), a2);
        fun_406cf1(ecx, 0xff, 30, 0x417898, 8, __return_address(), a2, a3, a4);
        ecx = reinterpret_cast<void**>(30);
    }
    edi16 = ebp17->f8;
    if (*reinterpret_cast<int32_t*>(edi16 * 8 + 0x418cc8)) {
        addr_40929f_4:
    } else {
        eax18 = fun_408fa3(ecx, 24, 0x417898, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        ecx = reinterpret_cast<void**>(24);
        if (eax18) {
            fun_409180(24, 10, 0x417898, 8, __return_address(), a2, a3, a4, a5, a6);
            ecx = reinterpret_cast<void**>(10);
            *reinterpret_cast<int32_t*>(ebp19 - 4) = 0;
            if (*reinterpret_cast<int32_t*>(edi16 * 8 + 0x418cc8)) {
                fun_40295d(10, eax18, 0x417898, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8);
                ecx = eax18;
            } else {
                fun_407e10(10, eax18, 0xfa0, 0, 0x417898, 8, __return_address(), a2, a3, a4);
                *reinterpret_cast<void***>(edi16 * 8 + 0x418cc8) = eax18;
            }
            *reinterpret_cast<int32_t*>(ebp20 - 4) = -2;
            fun_4092a8(ecx);
            goto addr_40929f_4;
        } else {
            eax21 = fun_404026(24, 0x417898, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
            *reinterpret_cast<void***>(eax21) = reinterpret_cast<void**>(12);
        }
    }
    fun_4045d5(ecx, 0x417898, 8, __return_address(), a2);
    goto 0x417898;
}

void fun_404159(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** ebp8;

    if (reinterpret_cast<signed char>(a2) >= reinterpret_cast<signed char>(20)) {
        EnterCriticalSection();
        goto ebp8;
    } else {
        fun_409180(ecx, a2 + 16, ebp8, __return_address(), a2, a3, a4, a5, a6, a7);
        *reinterpret_cast<void***>(a3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) | 0x8000);
        return;
    }
}

void fun_4041c3(void** ecx, void** a2, void** a3) {
    int32_t ebp4;

    if (reinterpret_cast<signed char>(a2) >= reinterpret_cast<signed char>(20)) {
        LeaveCriticalSection();
        goto ebp4;
    } else {
        *reinterpret_cast<void***>(a3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 0xffff7fff);
        fun_4092ea(a2, a2 + 16);
        return;
    }
}

uint32_t g419f70;

int32_t InitializeCriticalSectionAndSpinCount = 0x17e32;

void fun_407e10(void** ecx, void** a2, int32_t a3, int32_t a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    uint32_t eax11;
    uint32_t eax12;

    eax11 = g419f70;
    eax12 = eax11 ^ reinterpret_cast<unsigned char>(g4183f0);
    if (!eax12) {
        InitializeCriticalSectionAndSpinCount();
        goto a3;
    } else {
        eax12();
        goto a3;
    }
}

void fun_404306(void** ecx) {
    fun_4092ea(ecx, 1);
    return;
}

uint32_t fun_40944c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

uint32_t fun_409434(void** a1, void** a2, void** a3) {
    void** ebp4;
    uint32_t eax5;

    eax5 = fun_40944c(a1, a2, a3, 0, ebp4, __return_address());
    return eax5;
}

void** fun_40957b(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_409563(void** a1, void** a2, void** a3) {
    void** ebp4;
    void** eax5;

    eax5 = fun_40957b(a1, a2, a3, 0, ebp4, __return_address());
    return eax5;
}

int32_t fun_4092ff(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

int32_t fun_409416(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** ebp6;
    int32_t eax7;

    eax7 = fun_4092ff(a2, a3, a4, a5, a1, 1, ebp6, __return_address(), a1, a2, a3, a4, a5);
    return eax7;
}

int32_t fun_410118(void** ecx, int32_t a2, void** a3);

int32_t g419cc8;

void** g419cc4;

int32_t g419cc0;

int32_t g419cbc;

int32_t g419cb8;

int32_t g419cb4;

int16_t g419ce0;

int16_t g419cd4;

int16_t g419cb0;

int16_t g419cac;

int16_t g419ca8;

int16_t g419ca4;

uint32_t g419cd8;

int32_t g419ccc;

int32_t g419cd0;

void* g419cdc;

int32_t g419c18;

int32_t g419bd4;

int32_t g419bc8;

int32_t g419bcc;

int32_t g419bd8;

int32_t g419bdc;

void** g4183f4 = reinterpret_cast<void**>(0xb1);

void** fun_409e7c(void** ecx, void** a2, int32_t a3);

void** fun_404f47(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, ...) {
    uint32_t eflags9;
    int1_t zf10;
    void** eax11;
    void** v12;
    int32_t eax13;
    int32_t edx14;
    int32_t ebx15;
    int32_t esi16;
    int32_t edi17;
    int16_t ss18;
    int16_t cs19;
    int16_t ds20;
    int16_t es21;
    int16_t fs22;
    int16_t gs23;
    int32_t ebp24;
    int32_t eax25;
    void** ecx26;
    void** eax27;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags9) + 1) = 0;
    zf10 = ecx == g4183f0;
    if (zf10) {
        return eax11;
    }
    eax13 = fun_410118(ecx, 23, v12);
    *reinterpret_cast<int1_t*>(&eflags9) = 0;
    *reinterpret_cast<int1_t*>(&eflags9) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags9) = eax13 == 0;
    *reinterpret_cast<int1_t*>(&eflags9) = eax13 < 0;
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags9) + 1) = 0;
    *reinterpret_cast<int1_t*>(&eflags9) = __undefined();
    if (!*reinterpret_cast<int1_t*>(&eflags9)) 
        goto addr_409ecd_5;
    addr_409ed2_6:
    g419cc8 = eax13;
    g419cc4 = ecx;
    g419cc0 = edx14;
    g419cbc = ebx15;
    g419cb8 = esi16;
    g419cb4 = edi17;
    g419ce0 = ss18;
    g419cd4 = cs19;
    g419cb0 = ds20;
    g419cac = es21;
    g419ca8 = fs22;
    g419ca4 = gs23;
    g419cd8 = eflags9 & 0xfcffff;
    g419ccc = ebp24;
    g419cd0 = reinterpret_cast<int32_t>(__return_address());
    g419cdc = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    g419c18 = 0x10001;
    eax25 = g419cd0;
    g419bd4 = eax25;
    g419bc8 = 0xc0000409;
    g419bcc = 1;
    g419bd8 = 1;
    g419bdc = 2;
    ecx26 = g4183f4;
    eax27 = fun_409e7c(ecx26, 0x41231c, 23);
    return eax27;
    addr_409ecd_5:
    ecx = reinterpret_cast<void**>(2);
    __asm__("int 0x29");
    goto addr_409ed2_6;
}

int32_t fun_404882(void** ecx) {
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(ecx());
    return eax2;
}

struct s26 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f3c;
};

int32_t fun_409850(struct s26* a1);

struct s27 {
    signed char[8] pad8;
    int32_t f8;
    uint32_t fc;
    signed char[20] pad36;
    uint32_t f24;
};

struct s28 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s27* fun_409740(struct s28* a1, uint32_t a2);

uint32_t fun_409790(void** ecx, void** a2) {
    void** eax3;
    int32_t eax4;
    struct s27* eax5;
    uint32_t eax6;

    eax3 = g0;
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff0);
    eax4 = fun_409850(0x400000);
    if (!eax4 || (eax5 = fun_409740(0x400000, a2 - 0x400000), eax5 == 0)) {
        g0 = eax3;
        return 0;
    } else {
        eax6 = ~(eax5->f24 >> 31) & 1;
        g0 = eax3;
        return eax6;
    }
}

void** fun_4048cb(void** ecx, void** a2, int32_t a3) {
    void** edx4;
    void** eax5;

    eax5 = fun_404790(a2, ecx, edx4);
    return eax5;
}

int32_t g418df8 = 0;

int32_t g418df4 = 0;

int32_t g418dfc = 0;

int32_t fun_4099a5(void** ecx, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    int32_t eax10;
    int32_t ebp11;
    int32_t eax12;

    g418df8 = a2;
    g418df4 = eax10;
    g418dfc = ebp11;
    return eax12;
}

void fun_4099c4(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    int32_t eax9;

    eax9();
    return;
}

void** fun_409c84(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

void** g4191d0 = reinterpret_cast<void**>(0);

int32_t CloseHandle = 0x17bfa;

uint32_t fun_409bfe(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

uint32_t fun_4049e1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** edi11;
    void** esi12;
    void** ebp13;
    void** eax14;
    void** ecx15;
    void** eax16;
    void** eax17;
    void** eax18;
    void** eax19;
    int32_t eax20;
    void** esi21;
    void** eax22;
    void** ecx23;
    uint32_t eax24;

    eax14 = fun_409c84(ecx, a2, edi11, esi12, ebp13, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
    ecx15 = a2;
    if (eax14 == 0xffffffff || (((eax16 = g4191d0, reinterpret_cast<int1_t>(a2 == 1)) && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax16 + 0x84)) & 1 || reinterpret_cast<int1_t>(a2 == 2) && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax16 + 68)) & 1) && (eax17 = fun_409c84(ecx15, 2, edi11, esi12, ebp13, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10), eax18 = fun_409c84(ecx15, 1, 2, edi11, esi12, ebp13, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9), ecx15 = reinterpret_cast<void**>(2), eax18 == eax17) || (eax19 = fun_409c84(ecx15, a2, edi11, esi12, ebp13, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10), ecx15 = a2, eax20 = reinterpret_cast<int32_t>(CloseHandle(ecx15, eax19)), !!eax20))) {
        esi21 = reinterpret_cast<void**>(0);
    } else {
        eax22 = reinterpret_cast<void**>(GetLastError(ecx15, eax19));
        esi21 = eax22;
    }
    fun_409bfe(ecx15, a2, edi11, esi12, ebp13, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    ecx23 = *reinterpret_cast<void***>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x4191d0);
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx23) + ((reinterpret_cast<unsigned char>(a2) & 31) << 6) + 4) = 0;
    if (!esi21) {
        eax24 = 0;
    } else {
        fun_404005(ecx23, esi21, edi11, esi12, ebp13, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
        eax24 = 0xffffffff;
    }
    return eax24;
}

void** fun_409c84(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** ecx16;
    int1_t cf17;
    int32_t eax18;
    void** ebp19;
    void** eax20;
    void** eax21;
    void** eax22;
    void** eax23;

    ecx16 = a2;
    if (!reinterpret_cast<int1_t>(ecx16 == 0xfffffffe)) {
        if (reinterpret_cast<signed char>(ecx16) < reinterpret_cast<signed char>(0) || ((cf17 = reinterpret_cast<unsigned char>(ecx16) < reinterpret_cast<unsigned char>(g419ff8), !cf17) || (eax18 = reinterpret_cast<signed char>(ecx16) >> 5, ecx16 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(ecx16) & 31) << 6), (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(eax18 * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ecx16) + 4) & 1) == 0))) {
            eax20 = fun_403ff2(ecx16, ebp19, __return_address(), a2, a3, a4, a5, a6);
            *reinterpret_cast<void***>(eax20) = reinterpret_cast<void**>(0);
            eax21 = fun_404026(ecx16, ebp19, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
            *reinterpret_cast<void***>(eax21) = reinterpret_cast<void**>(9);
            fun_402c77(ecx16);
        } else {
            return *reinterpret_cast<void***>(reinterpret_cast<int32_t>(*reinterpret_cast<void****>(eax18 * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ecx16));
        }
    } else {
        eax22 = fun_403ff2(ecx16, ebp19, __return_address(), a2, a3, a4, a5, a6);
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(0);
        eax23 = fun_404026(ecx16, ebp19, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(9);
    }
    return 0xffffffff;
}

void** fun_404005(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** esi15;
    void** ebp16;
    void** eax17;
    void** eax18;
    void** eax19;

    eax17 = fun_403ff2(ecx, esi15, ebp16, __return_address(), a2, a3, a4, a5);
    *reinterpret_cast<void***>(eax17) = a2;
    eax18 = fun_404039(a2, a2, esi15, ebp16, __return_address(), a2);
    eax19 = fun_404026(a2, esi15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    *reinterpret_cast<void***>(eax19) = eax18;
    return eax19;
}

struct s29 {
    signed char[8] pad8;
    int32_t f8;
};

uint32_t fun_404aab(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

void fun_404c06(void** ecx);

void fun_404c39(void** ecx);

uint32_t fun_404b5e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    uint32_t edi9;
    int32_t ebp10;
    int32_t ebp11;
    void** ecx12;
    int32_t ebp13;
    void** esi14;
    int32_t ebx15;
    struct s29* ebp16;
    int32_t ebp17;
    int1_t less18;
    void** eax19;
    void** v20;
    int32_t ebp21;
    void** eax22;
    void** v23;
    uint32_t eax24;
    int32_t ebp25;
    int32_t ebp26;
    void** v27;
    uint32_t eax28;
    int32_t ebp29;
    int32_t ebp30;
    int32_t ebp31;

    v8 = reinterpret_cast<void**>(__return_address());
    fun_404590(0x4176e0, 20, v8);
    edi9 = 0;
    *reinterpret_cast<uint32_t*>(ebp10 - 28) = 0;
    *reinterpret_cast<uint32_t*>(ebp11 - 36) = 0;
    fun_409180(ecx, 1, 0x4176e0, 20, v8, a2, a3, a4, a5, a6);
    ecx12 = reinterpret_cast<void**>(1);
    *reinterpret_cast<uint32_t*>(ebp13 - 4) = 0;
    esi14 = reinterpret_cast<void**>(0);
    ebx15 = ebp16->f8;
    while (*reinterpret_cast<void***>(ebp17 - 32) = esi14, less18 = reinterpret_cast<signed char>(esi14) < reinterpret_cast<signed char>(g41b004), less18) {
        eax19 = g41b000;
        if (*reinterpret_cast<void***>(eax19 + reinterpret_cast<unsigned char>(esi14) * 4) && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax19 + reinterpret_cast<unsigned char>(esi14) * 4) + 12)) & 0x83) {
            v20 = *reinterpret_cast<void***>(eax19 + reinterpret_cast<unsigned char>(esi14) * 4);
            fun_404159(ecx12, esi14, v20, 0x4176e0, 20, v8, a2);
            ecx12 = v20;
            *reinterpret_cast<int32_t*>(ebp21 - 4) = 1;
            eax22 = g41b000;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax22 + reinterpret_cast<unsigned char>(esi14) * 4) + 12)) & 0x83) {
                if (ebx15 != 1) {
                    if (!ebx15 && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax22 + reinterpret_cast<unsigned char>(esi14) * 4) + 12)) & 2 && (v23 = *reinterpret_cast<void***>(eax22 + reinterpret_cast<unsigned char>(esi14) * 4), eax24 = fun_404aab(ecx12, v23, 0x4176e0, 20, v8, a2, a3, a4, a5, a6, a7), ecx12 = v23, eax24 == 0xffffffff))) {
                        *reinterpret_cast<uint32_t*>(ebp25 - 36) = *reinterpret_cast<uint32_t*>(ebp26 - 36) | eax24;
                    }
                } else {
                    v27 = *reinterpret_cast<void***>(eax22 + reinterpret_cast<unsigned char>(esi14) * 4);
                    eax28 = fun_404aab(ecx12, v27, 0x4176e0, 20, v8, a2, a3, a4, a5, a6, a7);
                    ecx12 = v27;
                    if (eax28 != 0xffffffff) {
                        ++edi9;
                        *reinterpret_cast<uint32_t*>(ebp29 - 28) = edi9;
                    }
                }
            }
            *reinterpret_cast<uint32_t*>(ebp30 - 4) = 0;
            fun_404c06(ecx12);
        }
        ++esi14;
    }
    *reinterpret_cast<int32_t*>(ebp31 - 4) = -2;
    fun_404c39(ecx12);
    if (ebx15 != 1) {
    }
    fun_4045d5(ecx12, 0x4176e0, 20, v8, a2);
    goto 0x4176e0;
}

struct s30 {
    signed char[8] pad8;
    void** f8;
};

int32_t FlushFileBuffers = 0x17f14;

void fun_409e5b(void** ecx);

int32_t fun_409d93(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** esi15;
    int32_t ebp16;
    void** edi17;
    struct s30* ebp18;
    int1_t cf19;
    int32_t eax20;
    int32_t ebp21;
    uint32_t ebx22;
    void** eax23;
    int32_t ebp24;
    int32_t ebp25;
    void** eax26;
    int32_t ebp27;
    void** eax28;
    int32_t eax29;
    void** eax30;
    int32_t ebp31;
    void** eax32;
    int32_t ebp33;
    void** eax34;

    fun_404590(0x417940, 20, __return_address());
    esi15 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ebp16 - 28) = reinterpret_cast<void**>(0);
    edi17 = ebp18->f8;
    if (!reinterpret_cast<int1_t>(edi17 == 0xfffffffe)) {
        if (reinterpret_cast<signed char>(edi17) < reinterpret_cast<signed char>(0) || ((cf19 = reinterpret_cast<unsigned char>(edi17) < reinterpret_cast<unsigned char>(g419ff8), !cf19) || (eax20 = reinterpret_cast<signed char>(edi17) >> 5, *reinterpret_cast<int32_t*>(ebp21 - 32) = eax20, ebx22 = (reinterpret_cast<unsigned char>(edi17) & 31) << 6, (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(ebx22 + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax20 * 4 + 0x4191d0)) + 4))) & 1) == 0))) {
            eax23 = fun_404026(ecx, 0x417940, 20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
            *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(9);
            fun_402c77(ecx);
        } else {
            fun_4099c7(ecx, edi17, 0x417940, 20, __return_address(), a2);
            ecx = edi17;
            *reinterpret_cast<void***>(ebp24 - 4) = reinterpret_cast<void**>(0);
            if (!(*reinterpret_cast<unsigned char*>(ebx22 + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp25 - 32) * 4 + 0x4191d0)) + 4) & 1)) {
                addr_409e34_5:
                eax26 = fun_404026(ecx, 0x417940, 20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
                *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(9);
                *reinterpret_cast<void***>(ebp27 - 28) = reinterpret_cast<void**>(0xffffffff);
                goto addr_409e45_6;
            } else {
                eax28 = fun_409c84(ecx, edi17, 0x417940, 20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
                ecx = edi17;
                eax29 = reinterpret_cast<int32_t>(FlushFileBuffers(ecx, eax28));
                if (!eax29) {
                    eax30 = reinterpret_cast<void**>(GetLastError(ecx, eax28));
                    esi15 = eax30;
                }
                *reinterpret_cast<void***>(ebp31 - 28) = esi15;
                if (!esi15) 
                    goto addr_409e45_6; else 
                    goto addr_409e2d_10;
            }
        }
    } else {
        eax32 = fun_404026(ecx, 0x417940, 20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax32) = reinterpret_cast<void**>(9);
    }
    addr_409e76_13:
    fun_4045d5(ecx, 0x417940, 20, __return_address(), a2);
    goto 0x417940;
    addr_409e45_6:
    *reinterpret_cast<int32_t*>(ebp33 - 4) = -2;
    fun_409e5b(ecx);
    goto addr_409e76_13;
    addr_409e2d_10:
    eax34 = fun_403ff2(ecx, eax28, 0x417940, 20, __return_address(), a2, a3, a4);
    *reinterpret_cast<void***>(eax34) = esi15;
    goto addr_409e34_5;
}

struct s31 {
    signed char[8] pad8;
    void** f8;
};

struct s32 {
    signed char[16] pad16;
    void** f10;
};

struct s33 {
    signed char[12] pad12;
    void** fc;
};

void** fun_406373(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void fun_40634b(void** ecx);

void** fun_406284(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int32_t ebp15;
    void** esi16;
    struct s31* ebp17;
    int1_t cf18;
    void** eax19;
    int32_t ebx20;
    uint32_t edi21;
    int32_t ebp22;
    void** eax23;
    void** eax24;
    void** edi25;
    void** v26;
    struct s32* ebp27;
    void** v28;
    struct s33* ebp29;
    void** eax30;
    int32_t ebp31;
    int32_t ebp32;
    void** eax33;
    void** eax34;
    void** eax35;
    void** eax36;

    fun_404590(0x417788, 16, __return_address());
    *reinterpret_cast<void***>(ebp15 - 28) = reinterpret_cast<void**>(0);
    esi16 = ebp17->f8;
    if (!reinterpret_cast<int1_t>(esi16 == 0xfffffffe)) {
        if (reinterpret_cast<signed char>(esi16) < reinterpret_cast<signed char>(0) || (cf18 = reinterpret_cast<unsigned char>(esi16) < reinterpret_cast<unsigned char>(g419ff8), !cf18)) {
            eax19 = fun_403ff2(ecx, 0x417788, 16, __return_address(), a2, a3, a4, a5);
            *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(0);
        } else {
            ebx20 = reinterpret_cast<signed char>(esi16) >> 5;
            edi21 = (reinterpret_cast<unsigned char>(esi16) & 31) << 6;
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx20 * 4 + 0x4191d0)) + edi21 + 4))) & 1) {
                fun_4099c7(ecx, esi16, 0x417788, 16, __return_address(), a2);
                ecx = esi16;
                *reinterpret_cast<uint32_t*>(ebp22 - 4) = 0;
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx20 * 4 + 0x4191d0)) + edi21 + 4) & 1)) {
                    eax23 = fun_404026(ecx, 0x417788, 16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
                    *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(9);
                    eax24 = fun_403ff2(ecx, 0x417788, 16, __return_address(), a2, a3, a4, a5);
                    *reinterpret_cast<void***>(eax24) = reinterpret_cast<void**>(0);
                    edi25 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    v26 = ebp27->f10;
                    v28 = ebp29->fc;
                    eax30 = fun_406373(ecx, esi16, v28, v26, 0x417788, 16, __return_address(), a2, a3, a4, a5, a6, a7);
                    edi25 = eax30;
                }
                *reinterpret_cast<void***>(ebp31 - 28) = edi25;
                *reinterpret_cast<int32_t*>(ebp32 - 4) = -2;
                fun_40634b(ecx);
                goto addr_40636d_9;
            } else {
                eax33 = fun_403ff2(ecx, 0x417788, 16, __return_address(), a2, a3, a4, a5);
                *reinterpret_cast<void***>(eax33) = reinterpret_cast<void**>(0);
            }
        }
    } else {
        eax34 = fun_403ff2(ecx, 0x417788, 16, __return_address(), a2, a3, a4, a5);
        *reinterpret_cast<void***>(eax34) = reinterpret_cast<void**>(0);
        eax35 = fun_404026(ecx, 0x417788, 16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax35) = reinterpret_cast<void**>(9);
        goto addr_40636a_12;
    }
    eax36 = fun_404026(ecx, 0x417788, 16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    *reinterpret_cast<void***>(eax36) = reinterpret_cast<void**>(9);
    fun_402c77(ecx);
    addr_40636a_12:
    addr_40636d_9:
    fun_4045d5(ecx, 0x417788, 16, __return_address(), a2);
    goto 0x417788;
}

uint32_t fun_404aab(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** esi12;
    void** ebp13;
    uint32_t eax14;
    uint32_t eax15;
    void** eax16;
    int32_t eax17;
    uint32_t eax18;

    if (a2) {
        eax14 = fun_404af1(ecx, a2, esi12, ebp13, __return_address(), a2, a3);
        if (!eax14) {
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0x4000)) {
                eax15 = 0;
            } else {
                eax16 = fun_4048e2(a2, a2, esi12, ebp13, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
                eax17 = fun_409d93(a2, eax16, a2, esi12, ebp13, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
                eax18 = reinterpret_cast<uint32_t>(-eax17);
                eax15 = eax18 - (eax18 + reinterpret_cast<uint1_t>(eax18 < eax18 + reinterpret_cast<uint1_t>(!!eax17)));
            }
        } else {
            eax15 = 0xffffffff;
        }
    } else {
        eax15 = fun_404b5e(ecx, a2, esi12, ebp13, __return_address(), a2, a3);
    }
    return eax15;
}

int32_t SetFilePointerEx = 0x17c08;

uint32_t fun_404d31(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void*** ebp10;
    void** edi11;
    void** esi12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** ebp17;
    void** eax18;
    void** ecx19;
    int32_t ebx20;
    void** v21;
    int32_t eax22;
    void** edx23;
    int32_t eax24;
    void** eax25;
    void** ebx26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    int32_t v31;
    uint32_t esi32;
    uint32_t eax33;
    uint32_t v34;
    void** v35;
    void** v36;
    void** eax37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** eax42;

    ebp10 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax18 = fun_409c84(ecx, a2, edi11, esi12, v13, v14, v15, v16, ebp17, __return_address(), a2, a3, a4, a5, a6);
    ecx19 = a2;
    if (!reinterpret_cast<int1_t>(eax18 == 0xffffffff)) {
        ebx20 = SetFilePointerEx;
        v21 = reinterpret_cast<void**>(ebp10 + 0xfffffff8);
        eax22 = reinterpret_cast<int32_t>(ebx20(ecx19));
        if (!eax22 || (ecx19 = reinterpret_cast<void**>(ebp10 + 0xfffffff0), eax24 = reinterpret_cast<int32_t>(ebx20(eax18, a3, edx23, ecx19, a4)), !eax24)) {
            eax25 = reinterpret_cast<void**>(GetLastError(ecx19));
            fun_404005(ecx19, eax25, eax18, 0, 0, v21, 1, ebx26, edi11, esi12, v27, v28, v29, v30);
        } else {
            if (!v31) {
                esi32 = (reinterpret_cast<unsigned char>(a2) & 31) << 6;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x4191d0)) + esi32 + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x4191d0)) + esi32 + 4) & 0xfd);
                eax33 = v34;
                goto addr_404dd1_6;
            } else {
                ebx20(eax18, v35, v36, 0, 0, eax18, a3, edx23, ecx19, a4);
                eax37 = fun_404026(ecx19, eax18, v35, v36, 0, 0, eax18, a3, edx23, ecx19, a4, eax18, 0, 0, v21, 1, ebx26);
                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(22);
            }
        }
    } else {
        eax42 = fun_404026(ecx19, edi11, esi12, v38, v39, v40, v41, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
        *reinterpret_cast<void***>(eax42) = reinterpret_cast<void**>(9);
        eax33 = reinterpret_cast<unsigned char>(eax42) | reinterpret_cast<unsigned char>(eax18);
        goto addr_404dd2_9;
    }
    eax33 = 0xffffffff;
    addr_404dd1_6:
    addr_404dd2_9:
    return eax33;
}

struct s34 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s35 {
    signed char[8] pad8;
    int32_t f8;
    void** fc;
};

void fun_409a4c(void** ecx, void** a2, void** a3, void** a4);

struct s36 {
    signed char[12] pad12;
    void** fc;
};

int32_t fun_4099c7(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    uint32_t edi7;
    struct s34* ebp8;
    struct s35* esi9;
    int32_t ebp10;
    int32_t ebp11;
    void** v12;

    fun_404590(0x417920, 8, __return_address());
    edi7 = ebp8->f8;
    esi9 = reinterpret_cast<struct s35*>(((edi7 & 31) << 6) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(edi7) >> 5) * 4 + 0x4191d0)));
    if (!esi9->f8) {
        fun_409180(ecx, 10, 0x417920, 8, __return_address(), a2, a3, a4, a5, a6);
        ecx = reinterpret_cast<void**>(10);
        *reinterpret_cast<int32_t*>(ebp10 - 4) = 0;
        if (!esi9->f8) {
            fun_407e10(10, &esi9->fc, 0xfa0, 0, 0x417920, 8, __return_address(), a2, a3, a4);
            esi9->f8 = esi9->f8 + 1;
        }
        *reinterpret_cast<int32_t*>(ebp11 - 4) = -2;
        fun_409a4c(10, 0x417920, 8, __return_address());
    }
    v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(&(*reinterpret_cast<struct s36**>((reinterpret_cast<int32_t>(edi7) >> 5) * 4 + 0x4191d0))->fc) + ((edi7 & 31) << 6));
    EnterCriticalSection(ecx);
    fun_4045d5(ecx, v12, 0x417920, 8, __return_address());
    goto v12;
}

void** fun_404ed4(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    void** edi17;
    void** esi18;
    void** ebp19;
    void** eax20;
    void** ecx21;
    int32_t eax22;
    uint32_t esi23;
    void** eax24;
    void** eax25;
    void** eax26;

    eax20 = fun_409c84(ecx, a2, edi17, esi18, ecx, ecx, ebp19, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    if (!reinterpret_cast<int1_t>(eax20 == 0xffffffff)) {
        ecx21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff8);
        eax22 = reinterpret_cast<int32_t>(SetFilePointerEx(eax20, a3, a4, ecx21, a5));
        if (eax22) {
            esi23 = (reinterpret_cast<unsigned char>(a2) & 31) << 6;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x4191d0)) + esi23 + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a2) >> 5) * 4 + 0x4191d0)) + esi23 + 4) & 0xfd);
            eax24 = ecx;
        } else {
            eax25 = reinterpret_cast<void**>(GetLastError(eax20, a3, a4, ecx21, a5));
            fun_404005(ecx21, eax25, eax20, a3, a4, ecx21, a5, edi17, esi18, ecx, ecx, ebp19, __return_address(), a2);
            goto addr_404ef7_5;
        }
    } else {
        eax26 = fun_404026(a2, edi17, esi18, ecx, ecx, ebp19, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(9);
        goto addr_404ef7_5;
    }
    addr_404f41_7:
    return eax24;
    addr_404ef7_5:
    eax24 = reinterpret_cast<void**>(0xffffffff);
    goto addr_404f41_7;
}

uint32_t fun_409fb4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int1_t cf15;
    void** ebp16;
    void** eax17;
    void** eax18;

    if (!reinterpret_cast<int1_t>(a1 == 0xfffffffe)) {
        if (reinterpret_cast<signed char>(a1) < reinterpret_cast<signed char>(0) || (cf15 = reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(g419ff8), !cf15)) {
            eax17 = fun_404026(a1, ebp16, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
            *reinterpret_cast<void***>(eax17) = reinterpret_cast<void**>(9);
            fun_402c77(a1);
        } else {
            return reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(a1) >> 5) * 4 + 0x4191d0)) + ((reinterpret_cast<unsigned char>(a1) & 31) << 6) + 4))) & 64;
        }
    } else {
        eax18 = fun_404026(a1, ebp16, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax18) = reinterpret_cast<void**>(9);
    }
    return 0;
}

int32_t g4191cc = 0;

void fun_40a008(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** esi9;
    void** ebp10;
    void** eax11;
    void** eax12;

    ++g4191cc;
    eax11 = fun_408fa3(ecx, 0x1000, esi9, ebp10, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    *reinterpret_cast<void***>(a2 + 8) = eax11;
    if (!eax11) {
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 4);
        *reinterpret_cast<void***>(a2 + 8) = a2 + 20;
        *reinterpret_cast<void***>(a2 + 24) = reinterpret_cast<void**>(2);
    } else {
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 8);
        *reinterpret_cast<void***>(a2 + 24) = reinterpret_cast<void**>(0x1000);
    }
    eax12 = *reinterpret_cast<void***>(a2 + 8);
    *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a2) = eax12;
    return;
}

struct s37 {
    signed char[8] pad8;
    void** f8;
};

struct s38 {
    signed char[20] pad20;
    void** f14;
};

struct s39 {
    signed char[16] pad16;
    void** f10;
};

struct s40 {
    signed char[12] pad12;
    void** fc;
};

void fun_404eaa(void** ecx);

uint32_t fun_404dd8(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** esi15;
    int32_t ebp16;
    int32_t ebp17;
    void** edi18;
    struct s37* ebp19;
    int1_t cf20;
    int32_t eax21;
    int32_t ebp22;
    uint32_t ebx23;
    void** eax24;
    void** eax25;
    int32_t ebp26;
    int32_t ebp27;
    void** eax28;
    void** eax29;
    void** ebx30;
    void** v31;
    struct s38* ebp32;
    void** v33;
    struct s39* ebp34;
    void** v35;
    struct s40* ebp36;
    void** eax37;
    void** edx38;
    int32_t ebp39;
    int32_t ebp40;
    int32_t ebp41;
    void** eax42;
    void** eax43;

    fun_404590(0x417728, 24, __return_address());
    esi15 = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<void***>(ebp16 - 40) = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<void***>(ebp17 - 36) = reinterpret_cast<void**>(0xffffffff);
    edi18 = ebp19->f8;
    if (!reinterpret_cast<int1_t>(edi18 == 0xfffffffe)) {
        if (reinterpret_cast<signed char>(edi18) < reinterpret_cast<signed char>(0) || ((cf20 = reinterpret_cast<unsigned char>(edi18) < reinterpret_cast<unsigned char>(g419ff8), !cf20) || (eax21 = reinterpret_cast<signed char>(edi18) >> 5, *reinterpret_cast<int32_t*>(ebp22 - 28) = eax21, ebx23 = (reinterpret_cast<unsigned char>(edi18) & 31) << 6, (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax21 * 4 + 0x4191d0)) + ebx23 + 4))) & 1) == 0))) {
            eax24 = fun_403ff2(ecx, 0x417728, 24, __return_address(), a2, a3, a4, a5);
            *reinterpret_cast<void***>(eax24) = reinterpret_cast<void**>(0);
            eax25 = fun_404026(ecx, 0x417728, 24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
            *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(9);
            fun_402c77(ecx);
        } else {
            fun_4099c7(ecx, edi18, 0x417728, 24, __return_address(), a2);
            ecx = edi18;
            *reinterpret_cast<uint32_t*>(ebp26 - 4) = 0;
            if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(ebp27 - 28) * 4 + 0x4191d0)) + ebx23 + 4) & 1)) {
                eax28 = fun_404026(ecx, 0x417728, 24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
                *reinterpret_cast<void***>(eax28) = reinterpret_cast<void**>(9);
                eax29 = fun_403ff2(ecx, 0x417728, 24, __return_address(), a2, a3, a4, a5);
                *reinterpret_cast<void***>(eax29) = reinterpret_cast<void**>(0);
                ebx30 = reinterpret_cast<void**>(0xffffffff);
            } else {
                v31 = ebp32->f14;
                v33 = ebp34->f10;
                v35 = ebp36->fc;
                eax37 = fun_404ed4(ecx, edi18, v35, v33, v31, 0x417728, 24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
                esi15 = eax37;
                ebx30 = edx38;
            }
            *reinterpret_cast<void***>(ebp39 - 40) = esi15;
            *reinterpret_cast<void***>(ebp40 - 36) = ebx30;
            *reinterpret_cast<int32_t*>(ebp41 - 4) = -2;
            fun_404eaa(ecx);
            goto addr_404ecc_8;
        }
    } else {
        eax42 = fun_403ff2(ecx, 0x417728, 24, __return_address(), a2, a3, a4, a5);
        *reinterpret_cast<void***>(eax42) = reinterpret_cast<void**>(0);
        eax43 = fun_404026(ecx, 0x417728, 24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax43) = reinterpret_cast<void**>(9);
    }
    addr_404ecc_8:
    fun_4045d5(ecx, 0x417728, 24, __return_address(), a2);
    goto 0x417728;
}

int32_t GetConsoleCP = 0x17cbe;

void** fun_408f43(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

int16_t fun_40a1c7(void** ecx, int16_t a2, void** a3, void** a4);

void** fun_406373(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** ebp16;
    void*** ebp17;
    void** v18;
    void** eax19;
    void** v20;
    void** esi21;
    void** esi22;
    void** v23;
    void** v24;
    void** edi25;
    void** edi26;
    void** v27;
    void** v28;
    int32_t edx29;
    void** ecx30;
    int32_t v31;
    void** v32;
    void** ebx33;
    void* edx34;
    void** v35;
    signed char bl36;
    int32_t eax37;
    void** eax38;
    void** eax39;
    void** eax40;
    void** eax41;
    void** eax42;
    uint32_t eax43;
    void** eax44;
    void** ecx45;
    uint1_t zf46;
    void** v47;
    void** v48;
    int32_t eax49;
    int32_t* ecx50;
    int32_t v51;
    int32_t eax52;
    void** eax53;
    void** v54;
    void** edx55;
    void** v56;
    void** ecx57;
    void** ebx58;
    void** v59;
    void** eax60;
    void** eax61;
    void* eax62;
    void** edi63;
    void** ecx64;
    uint32_t edx65;
    uint32_t esi66;
    void* v67;
    void* ecx68;
    int32_t v69;
    void* v70;
    uint32_t eax71;
    uint32_t v72;
    uint32_t ecx73;
    uint32_t v74;
    void* v75;
    uint32_t v76;
    int32_t v77;
    int32_t eax78;
    uint32_t v79;
    void** eax80;
    void* ebx81;
    void** eax82;
    uint32_t edx83;
    uint32_t edi84;
    void* ebx85;
    int32_t v86;
    int32_t eax87;
    void* v88;
    void* v89;
    void** ebx90;
    void** v91;
    void* edi92;
    uint32_t v93;
    void** eax94;
    void** cl95;
    uint32_t ecx96;
    uint32_t ecx97;
    void* edi98;
    int32_t v99;
    int32_t eax100;
    void* v101;
    void* v102;
    int32_t eax103;
    void** ecx104;
    int32_t v105;
    void** v106;
    void** v107;
    void** eax108;
    void** edx109;
    void** v110;
    void** v111;
    void** edx112;
    void** dl113;
    void** eax114;
    void** ecx115;
    void* eax116;
    void** v117;
    void** eax118;
    void** v119;
    void** v120;
    void** eax121;
    void** eax122;
    void** v123;
    int16_t ax124;
    int16_t ax125;
    void** eax126;
    void* v127;
    void* v128;
    void** eax129;
    void* v130;
    void* v131;
    int32_t v132;
    int32_t eax133;
    void** ecx134;
    int32_t v135;
    int32_t eax136;
    void** eax137;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = ebp16;
    ebp17 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_404f60(ecx);
    v18 = reinterpret_cast<void**>(0);
    eax19 = a2;
    v20 = esi21;
    esi22 = reinterpret_cast<void**>(0);
    v23 = eax19;
    v24 = edi25;
    edi26 = reinterpret_cast<void**>(0);
    v27 = a3;
    v28 = reinterpret_cast<void**>(0);
    if (a4) {
        if (a3) {
            edx29 = reinterpret_cast<signed char>(eax19) >> 5;
            ecx30 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax19) & 31) << 6);
            v31 = edx29;
            v32 = ebx33;
            edx34 = *reinterpret_cast<void**>(edx29 * 4 + 0x4191d0);
            v35 = ecx30;
            bl36 = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx30) + reinterpret_cast<uint32_t>(edx34) + 36) + *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx30) + reinterpret_cast<uint32_t>(edx34) + 36)) >> 1);
            if (bl36 == 2 || bl36 == 1) {
                eax37 = reinterpret_cast<int32_t>(~reinterpret_cast<unsigned char>(a4));
                if (*reinterpret_cast<unsigned char*>(&eax37) & 1) {
                    eax19 = v23;
                    goto addr_40643c_6;
                } else {
                    eax38 = fun_403ff2(ecx30, v32, v24, v20, v15, v14, a2, a3);
                    *reinterpret_cast<void***>(eax38) = reinterpret_cast<void**>(0);
                    eax39 = fun_404026(ecx30, v32, v24, v20, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                    *reinterpret_cast<void***>(eax39) = reinterpret_cast<void**>(22);
                    fun_402c77(ecx30);
                }
            } else {
                addr_40643c_6:
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(ecx30) + reinterpret_cast<uint32_t>(edx34) + 4) & 32) {
                    fun_404ed4(ecx30, eax19, 0, 0, 2, v32, v24, v20, v15, v14, a2, a3, a4, a5, a6, a7);
                    goto addr_406452_9;
                }
            }
        } else {
            eax40 = fun_403ff2(a3, v24, v20, v15, v14, a2, a3, a4);
            *reinterpret_cast<void***>(eax40) = reinterpret_cast<void**>(0);
            eax41 = fun_404026(a3, v24, v20, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
            *reinterpret_cast<void***>(eax41) = reinterpret_cast<void**>(22);
            fun_402c77(a3);
            goto addr_406bc8_11;
        }
    } else {
        goto addr_406bc8_11;
    }
    addr_406bbe_13:
    addr_406bc7_14:
    addr_406bc8_11:
    eax42 = fun_404f47(reinterpret_cast<unsigned char>(v20) ^ reinterpret_cast<uint32_t>(ebp17), v15, v14, a2, a3, a4, a5, a6);
    return eax42;
    addr_406452_9:
    eax43 = fun_409fb4(v23, v32, v24, v20, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9);
    if (!eax43 || (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v35) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(v31 * 4 + 0x4191d0)) + 4) & 0x80) || ((eax44 = fun_4076ff(v35, v32, v24, v20, v15, v14, a2, a3), ecx45 = reinterpret_cast<void**>(0), zf46 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax44 + 0x6c) + 0xa8) == 0), v47 = reinterpret_cast<void**>(ebp17 + 0xffffe518), *reinterpret_cast<unsigned char*>(&ecx45) = zf46, v48 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v35) + reinterpret_cast<uint32_t>(*reinterpret_cast<void****>(v31 * 4 + 0x4191d0))), eax49 = reinterpret_cast<int32_t>(GetConsoleMode(v48, v47)), eax49 == 0) || ecx45 && !bl36))) {
        ecx50 = *reinterpret_cast<int32_t**>(v31 * 4 + 0x4191d0);
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v35) + reinterpret_cast<uint32_t>(ecx50) + 4) & 0x80)) {
            v47 = reinterpret_cast<void**>(0);
            v48 = reinterpret_cast<void**>(ebp17 + 0xffffe520);
            v51 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v35) + reinterpret_cast<uint32_t>(ecx50));
            eax52 = reinterpret_cast<int32_t>(WriteFile(v51, v27, a4, v48, 0));
            if (!eax52) {
                addr_4067a9_17:
                eax53 = reinterpret_cast<void**>(GetLastError(v48, v47));
                edi26 = eax53;
            } else {
                esi22 = v54;
                edi26 = reinterpret_cast<void**>(0);
            }
        } else {
            edx55 = v27;
            v56 = reinterpret_cast<void**>(0);
            if (bl36) {
                ecx57 = edx55;
                if (bl36 != 2) {
                    ebx58 = a4;
                    v59 = ecx57;
                    if (!ebx58) {
                        addr_406b88_22:
                        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(v35) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(v31 * 4 + 0x4191d0)) + 4) & 64) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx55) == 26)) {
                            eax60 = fun_404026(v35, v32, v24, v20, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                            *reinterpret_cast<void***>(eax60) = reinterpret_cast<void**>(28);
                            eax61 = fun_403ff2(v35, v32, v24, v20, v15, v14, a2, a3);
                            *reinterpret_cast<void***>(eax61) = reinterpret_cast<void**>(0);
                            goto addr_406bbe_13;
                        } else {
                            goto addr_406bc7_14;
                        }
                    } else {
                        do {
                            eax62 = reinterpret_cast<void*>(ebp17 + 0xffffe548);
                            edi63 = v59;
                            ecx64 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx57) - reinterpret_cast<unsigned char>(edx55));
                            edx65 = 0;
                            do {
                                if (reinterpret_cast<unsigned char>(ecx64) >= reinterpret_cast<unsigned char>(ebx58)) 
                                    break;
                                esi66 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(edi63));
                                ecx64 = ecx64 + 2;
                                edi63 = edi63 + 2;
                                v59 = edi63;
                                if (*reinterpret_cast<int16_t*>(&esi66) == 10) {
                                    eax62 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax62) + 2);
                                    edi63 = v59;
                                    edx65 = edx65 + 2;
                                }
                                edx65 = edx65 + 2;
                                eax62 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax62) + 2);
                            } while (edx65 < 0x6a8);
                            v47 = reinterpret_cast<void**>(0);
                            v48 = reinterpret_cast<void**>(0);
                            v67 = reinterpret_cast<void*>(ebp17 + 0xfffff29c);
                            ecx68 = reinterpret_cast<void*>(ebp17 + 0xffffe548);
                            __asm__("cdq ");
                            v69 = reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax62) - reinterpret_cast<uint32_t>(ecx68) - edx65) >> 1;
                            v70 = ecx68;
                            eax71 = reinterpret_cast<uint32_t>(WideCharToMultiByte(0xfde9, 0, v70, v69, v67, 0xd55, 0, 0));
                            esi22 = v28;
                            edi26 = v56;
                            v72 = eax71;
                            if (!eax71) 
                                goto addr_4067a9_17;
                            ecx73 = 0;
                            v74 = 0;
                            do {
                                v75 = reinterpret_cast<void*>(ebp17 + 0xffffe520);
                                v76 = eax71 - ecx73;
                                v77 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v35) + reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t**>(v31 * 4 + 0x4191d0)));
                                eax78 = reinterpret_cast<int32_t>(WriteFile(v77, reinterpret_cast<uint32_t>(ebp17 + 0xfffff29c) + ecx73, v76, v75, 0, 0xfde9, 0, v70, v69, v67, 0xd55, 0, 0));
                                if (!eax78) 
                                    break;
                                ecx73 = v74 + v79;
                                eax71 = v72;
                                v74 = ecx73;
                            } while (reinterpret_cast<int32_t>(eax71) > reinterpret_cast<int32_t>(ecx73));
                            goto addr_406b02_35;
                            eax80 = reinterpret_cast<void**>(GetLastError(v77, reinterpret_cast<uint32_t>(ebp17 + 0xfffff29c) + ecx73, v76, v75, 0, 0xfde9, 0, v70, v69, v67, 0xd55, 0, 0));
                            ecx73 = v74;
                            edi26 = eax80;
                            eax71 = v72;
                            v56 = edi26;
                            addr_406b1e_37:
                            if (reinterpret_cast<int32_t>(eax71) > reinterpret_cast<int32_t>(ecx73)) 
                                break; else 
                                continue;
                            addr_406b02_35:
                            goto addr_406b1e_37;
                            ecx57 = v59;
                            edx55 = v27;
                            esi22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx57) - reinterpret_cast<unsigned char>(edx55));
                            v28 = esi22;
                        } while (reinterpret_cast<unsigned char>(esi22) < reinterpret_cast<unsigned char>(ebx58));
                        goto addr_406b44_39;
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(a4) <= reinterpret_cast<unsigned char>(0)) 
                        goto addr_406b88_22;
                    do {
                        ebx81 = reinterpret_cast<void*>(ebp17 + 0xffffebf4);
                        eax82 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx57) - reinterpret_cast<unsigned char>(edx55));
                        edx83 = 0;
                        do {
                            if (reinterpret_cast<unsigned char>(eax82) >= reinterpret_cast<unsigned char>(a4)) 
                                break;
                            edi84 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(ecx57));
                            eax82 = eax82 + 2;
                            ecx57 = ecx57 + 2;
                            if (*reinterpret_cast<int16_t*>(&edi84) == 10) {
                                v18 = v18 + 2;
                                ebx81 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx81) + 2);
                                edx83 = edx83 + 2;
                            }
                            edx83 = edx83 + 2;
                            ebx81 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx81) + 2);
                        } while (edx83 < 0x13fe);
                        ebx85 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx81) - reinterpret_cast<uint32_t>(ebp17 + 0xffffebf4));
                        v47 = reinterpret_cast<void**>(0);
                        v48 = reinterpret_cast<void**>(ebp17 + 0xffffe520);
                        v86 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v35) + reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t**>(v31 * 4 + 0x4191d0)));
                        eax87 = reinterpret_cast<int32_t>(WriteFile(v86, ebp17 + 0xffffebf4, ebx85, v48, 0));
                        esi22 = v28;
                        edi26 = reinterpret_cast<void**>(0);
                        if (!eax87) 
                            goto addr_4067a9_17;
                        esi22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi22) + reinterpret_cast<uint32_t>(v88));
                        v28 = esi22;
                        if (reinterpret_cast<int32_t>(v89) < reinterpret_cast<int32_t>(ebx85)) 
                            break;
                        ecx57 = ecx57;
                        edx55 = v27;
                    } while (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx57) - reinterpret_cast<unsigned char>(edx55)) < reinterpret_cast<unsigned char>(a4));
                    goto addr_4069e8_50;
                }
            } else {
                ebx90 = a4;
                v91 = edx55;
                if (!ebx90) 
                    goto addr_406b88_22;
                do {
                    edi92 = reinterpret_cast<void*>(ebp17 + 0xffffebf4);
                    v93 = 0;
                    eax94 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx55) - reinterpret_cast<unsigned char>(v27));
                    do {
                        if (reinterpret_cast<unsigned char>(eax94) >= reinterpret_cast<unsigned char>(ebx90)) 
                            break;
                        cl95 = *reinterpret_cast<void***>(edx55);
                        ++eax94;
                        v91 = edx55 + 1;
                        ecx96 = v93;
                        if (reinterpret_cast<int1_t>(cl95 == 10)) {
                            ++v18;
                            edi92 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi92) + 1);
                            ++ecx96;
                        }
                        edi92 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi92) + 1);
                        edx55 = v91;
                        ecx97 = ecx96 + 1;
                        v93 = ecx97;
                    } while (ecx97 < 0x13ff);
                    edi98 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi92) - reinterpret_cast<uint32_t>(ebp17 + 0xffffebf4));
                    v47 = reinterpret_cast<void**>(0);
                    v48 = reinterpret_cast<void**>(ebp17 + 0xffffe520);
                    v99 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v35) + reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t**>(v31 * 4 + 0x4191d0)));
                    eax100 = reinterpret_cast<int32_t>(WriteFile(v99, ebp17 + 0xffffebf4, edi98, v48, 0));
                    if (!eax100) 
                        goto addr_4067a9_17;
                    esi22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi22) + reinterpret_cast<uint32_t>(v101));
                } while (reinterpret_cast<int32_t>(v102) >= reinterpret_cast<int32_t>(edi98) && (edx55 = v91, reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(edx55) - reinterpret_cast<unsigned char>(v27)) < reinterpret_cast<unsigned char>(ebx90)));
                edi26 = reinterpret_cast<void**>(0);
            }
        }
    } else {
        eax103 = reinterpret_cast<int32_t>(GetConsoleCP(v48, v47));
        edx55 = v27;
        ecx104 = reinterpret_cast<void**>(0);
        v105 = eax103;
        v106 = reinterpret_cast<void**>(0);
        v107 = edx55;
        if (reinterpret_cast<unsigned char>(a4) <= reinterpret_cast<unsigned char>(0)) 
            goto addr_406b88_22;
        eax108 = v107;
        edx109 = reinterpret_cast<void**>(0);
        v110 = reinterpret_cast<void**>(0);
        do {
            v111 = reinterpret_cast<void**>(0);
            if (bl36) {
                if (bl36 == 1 || bl36 == 2) {
                    ecx104 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(eax108))));
                    edx112 = reinterpret_cast<void**>(0);
                    v106 = ecx104;
                    *reinterpret_cast<unsigned char*>(&edx112) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&ecx104) == 10);
                    eax108 = eax108 + 2;
                    v111 = edx112;
                    edx109 = v110 + 2;
                    v107 = eax108;
                    v110 = edx109;
                }
                if (bl36 == 1) 
                    goto addr_406722_66;
                if (bl36 != 2) 
                    continue;
            } else {
                dl113 = *reinterpret_cast<void***>(eax108);
                eax114 = reinterpret_cast<void**>(0);
                ecx115 = v35;
                *reinterpret_cast<unsigned char*>(&eax114) = reinterpret_cast<uint1_t>(dl113 == 10);
                eax116 = *reinterpret_cast<void**>(v31 * 4 + 0x4191d0);
                if (!*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx115) + reinterpret_cast<uint32_t>(eax116) + 56)) {
                    v117 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(dl113)));
                    eax118 = fun_408e3d(ecx115, v117, v48, v47);
                    ecx115 = v117;
                    if (!eax118) {
                        v119 = reinterpret_cast<void**>(1);
                        v120 = v107;
                        goto addr_4065d2_71;
                    } else {
                        if (reinterpret_cast<unsigned char>(v27) - reinterpret_cast<unsigned char>(v107) + reinterpret_cast<unsigned char>(a4) <= 1) 
                            goto addr_40677b_73;
                        eax121 = fun_408f43(ecx115, ebp17 + 0xffffe534, v107, 2, v48, v47);
                        if (eax121 == 0xffffffff) 
                            break;
                        eax122 = v107 + 1;
                        ++v110;
                        goto addr_4065f0_76;
                    }
                } else {
                    *reinterpret_cast<signed char*>(&v32) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx115) + reinterpret_cast<uint32_t>(eax116) + 52);
                    (&v32)[1] = dl113;
                    v119 = reinterpret_cast<void**>(2);
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(ecx115) + reinterpret_cast<uint32_t>(eax116) + 56) = 0;
                    v120 = reinterpret_cast<void**>(ebp17 + 0xfffffff4);
                    goto addr_4065d2_71;
                }
            }
            addr_406722_66:
            v123 = ecx104;
            ax124 = fun_40a1c7(ecx104, *reinterpret_cast<int16_t*>(&v123), v48, v47);
            ecx104 = v106;
            if (ax124 != *reinterpret_cast<int16_t*>(&ecx104)) 
                goto addr_4067a9_17;
            esi22 = esi22 + 2;
            if (v111) 
                goto addr_40673f_79;
            addr_406761_80:
            edx109 = v110;
            eax108 = v107;
            continue;
            addr_40673f_79:
            v106 = reinterpret_cast<void**>(13);
            ax125 = fun_40a1c7(ecx104, 13, v48, v47);
            ecx104 = reinterpret_cast<void**>(13);
            if (ax125 != 13) 
                goto addr_4067a9_17;
            ++esi22;
            ++v18;
            goto addr_406761_80;
            addr_4065d2_71:
            eax126 = fun_408f43(ecx115, ebp17 + 0xffffe534, v120, v119, v48, v47);
            if (eax126 == 0xffffffff) 
                break;
            eax122 = v107;
            addr_4065f0_76:
            ++v110;
            v107 = eax122 + 1;
            v127 = reinterpret_cast<void*>(ebp17 + 0xfffffff4);
            v128 = reinterpret_cast<void*>(ebp17 + 0xffffe534);
            eax129 = reinterpret_cast<void**>(WideCharToMultiByte(v105, 0, v128, 1, v127, 5, 0, 0, v48, v47));
            if (!eax129) 
                break;
            v130 = reinterpret_cast<void*>(ebp17 + 0xffffe538);
            v131 = reinterpret_cast<void*>(ebp17 + 0xfffffff4);
            v132 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v35) + reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t**>(v31 * 4 + 0x4191d0)));
            eax133 = reinterpret_cast<int32_t>(WriteFile(v132, v131, eax129, v130, 0, v105, 0, v128, 1, v127, 5, 0, 0, v48, v47));
            if (!eax133) 
                goto addr_4067a9_17;
            ecx134 = v18;
            esi22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v110) + reinterpret_cast<unsigned char>(ecx134));
            if (reinterpret_cast<signed char>(0) < reinterpret_cast<signed char>(eax129)) 
                goto addr_4068c6_85;
            if (eax114) {
                *reinterpret_cast<signed char*>(&v32) = 13;
                v135 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v35) + reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t**>(v31 * 4 + 0x4191d0)));
                eax136 = reinterpret_cast<int32_t>(WriteFile(v135, ebp17 + 0xfffffff4, 1, ebp17 + 0xffffe538, 0, v132, v131, eax129, v130, 0, v105, 0, v128, 1, v127, 5, 0, 0, v48, v47));
                if (!eax136) 
                    goto addr_4067a9_17;
                if (1) 
                    break;
                ++v18;
                ++esi22;
            }
            ecx104 = v106;
            goto addr_406761_80;
        } while (reinterpret_cast<unsigned char>(edx109) < reinterpret_cast<unsigned char>(a4));
        goto addr_406776_92;
    }
    addr_4068c0_93:
    ecx134 = v18;
    addr_4068c6_85:
    if (esi22) {
        goto addr_406bc7_14;
    } else {
        if (!edi26) {
            edx55 = v27;
            goto addr_406b88_22;
        } else {
            if (!reinterpret_cast<int1_t>(edi26 == 5)) {
                fun_404005(ecx134, edi26, v48, v47, v32, v24, v20, v15, v14, a2, a3, a4, a5, a6);
                goto addr_406bbe_13;
            } else {
                eax137 = fun_404026(ecx134, v48, v47, v32, v24, v20, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10);
                *reinterpret_cast<void***>(eax137) = reinterpret_cast<void**>(9);
                eax61 = fun_403ff2(ecx134, v48, v47, v32, v24, v20, v15, v14);
                *reinterpret_cast<void***>(eax61) = reinterpret_cast<void**>(5);
                goto addr_406bbe_13;
            }
        }
    }
    addr_406b44_39:
    goto addr_4068c0_93;
    addr_4069e8_50:
    goto addr_4068c0_93;
    addr_406776_92:
    goto addr_4068c0_93;
    addr_40677b_73:
    ++esi22;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v35) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(v31 * 4 + 0x4191d0)) + 52) = *reinterpret_cast<void***>(v107);
    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v35) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(v31 * 4 + 0x4191d0)) + 56) = 1;
    goto addr_4068c0_93;
}

void** fun_408e4e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_408f43(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** ebp7;
    void** eax8;

    eax8 = fun_408e4e(ecx, a2, a3, a4, 0, ebp7, __return_address(), a2);
    return eax8;
}

int32_t g418e70 = -2;

void fun_40bf8b(void** a1);

int32_t WriteConsoleW = 0x17f28;

int16_t fun_40a1c7(void** ecx, int16_t a2, void** a3, void** a4) {
    void* ebp5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax6 = g418e70;
    if (eax6 == -2) {
        fun_40bf8b(ecx);
        eax6 = g418e70;
    }
    if (eax6 == -1 || (eax7 = reinterpret_cast<int32_t>(WriteConsoleW(eax6, reinterpret_cast<int32_t>(ebp5) + 8, 1, reinterpret_cast<int32_t>(ebp5) - 4, 0, ecx)), eax7 == 0)) {
        eax8 = 0xffff;
    } else {
        *reinterpret_cast<int16_t*>(&eax8) = a2;
    }
    return *reinterpret_cast<int16_t*>(&eax8);
}

int32_t g418544 = -1;

uint32_t g419fd4;

void** fun_407e3e(void** ecx) {
    int32_t esi2;
    uint32_t eax3;
    uint32_t eax4;
    int32_t eax5;
    void** eax6;

    esi2 = g418544;
    if (esi2 < 0) {
        eax3 = g419fd4;
        esi2 = 0;
        eax4 = eax3 ^ reinterpret_cast<unsigned char>(g4183f0);
        if (eax4 && (eax5 = reinterpret_cast<int32_t>(eax4(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4, 0)), eax5 == 0x7a)) {
            esi2 = 1;
        }
        g418544 = esi2;
    }
    eax6 = reinterpret_cast<void**>(0);
    *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi2 < 0) | reinterpret_cast<uint1_t>(esi2 == 0)));
    return eax6;
}

int32_t fun_40a239(void** ecx, void** a2, void** a3, void** a4, void** a5);

int32_t fun_40a335(void** ecx, void** a2) {
    void** ebp3;
    int32_t eax4;
    uint32_t eax5;

    eax4 = fun_40a239(ecx, a2, ebp3, __return_address(), a2);
    eax5 = reinterpret_cast<uint32_t>(-eax4);
    return reinterpret_cast<int32_t>(-(eax5 - (eax5 + reinterpret_cast<uint1_t>(eax5 < eax5 + reinterpret_cast<uint1_t>(!!eax4))))) - 1;
}

void fun_406e11(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** esi8;
    uint32_t ebx9;
    uint32_t edi10;
    int32_t edi11;
    int32_t edi12;
    uint32_t edi13;
    int32_t edi14;
    void** eax15;

    esi8 = a2;
    ebx9 = 0;
    edi10 = ~(edi11 - (edi12 + reinterpret_cast<uint1_t>(edi13 < edi14 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(a3) < reinterpret_cast<unsigned char>(esi8))))) & reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(esi8) + 3 >> 2;
    if (edi10) {
        do {
            eax15 = *reinterpret_cast<void***>(esi8);
            if (eax15) {
                eax15();
            }
            esi8 = esi8 + 4;
            ++ebx9;
        } while (ebx9 < edi10);
    }
    return;
}

void** fun_406e47(void** ecx, int32_t* a2, int32_t* a3) {
    int32_t* esi4;
    void** eax5;
    int32_t ecx6;

    esi4 = a2;
    eax5 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<uint32_t>(esi4) < reinterpret_cast<uint32_t>(a3) && !eax5) {
        ecx6 = *esi4;
        if (ecx6) {
            eax5 = reinterpret_cast<void**>(ecx6());
        }
        ++esi4;
    }
    return eax5;
}

int32_t fun_406e69(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    int32_t eax9;

    eax9 = fun_409180(ecx, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    return eax9;
}

void** fun_407be9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** ecx16;
    void** ebp17;
    void** eax18;

    if (reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0)) 
        goto addr_407c14_2;
    if (reinterpret_cast<signed char>(a2) <= reinterpret_cast<signed char>(2)) {
        ecx16 = g419a48;
        g419a48 = a2;
    } else {
        if (!reinterpret_cast<int1_t>(a2 == 3)) {
            addr_407c14_2:
            eax18 = fun_404026(ecx, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
            *reinterpret_cast<void***>(eax18) = reinterpret_cast<void**>(22);
            fun_402c77(ecx);
            return 0xffffffff;
        } else {
            ecx16 = g419a48;
        }
    }
    return ecx16;
}

void** fun_40a633(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** v15;
    void** v16;
    void** ebp17;
    void** v18;
    void** esi19;
    void** esi20;
    void** edx21;
    void** eax22;
    void** v23;
    void* edi24;
    uint32_t eax25;
    void** eax26;

    v15 = reinterpret_cast<void**>(__return_address());
    v16 = ebp17;
    v18 = esi19;
    esi20 = a2;
    if (!esi20 || (edx21 = a3, edx21 == 0)) {
        addr_40a651_2:
        eax22 = fun_404026(ecx, v18, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        v23 = reinterpret_cast<void**>(22);
    } else {
        ecx = a4;
        if (ecx) {
            edi24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi20) - reinterpret_cast<unsigned char>(ecx));
            do {
                eax25 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(ecx));
                *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edi24) + reinterpret_cast<unsigned char>(ecx)) = *reinterpret_cast<int16_t*>(&eax25);
                ecx = ecx + 2;
                if (!*reinterpret_cast<int16_t*>(&eax25)) 
                    break;
                --edx21;
            } while (edx21);
            eax26 = reinterpret_cast<void**>(0);
            if (edx21) 
                goto addr_40a662_8; else 
                goto addr_40a683_9;
        } else {
            *reinterpret_cast<void***>(esi20) = reinterpret_cast<void**>(0);
            goto addr_40a651_2;
        }
    }
    addr_40a658_11:
    *reinterpret_cast<void***>(eax22) = v23;
    fun_402c77(ecx);
    eax26 = v23;
    addr_40a662_8:
    return eax26;
    addr_40a683_9:
    *reinterpret_cast<void***>(esi20) = reinterpret_cast<void**>(0);
    eax22 = fun_404026(ecx, v18, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    v23 = reinterpret_cast<void**>(34);
    goto addr_40a658_11;
}

int32_t fun_40a68f(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;

    eax6 = a2;
    do {
        eax6 = eax6 + 2;
    } while (*reinterpret_cast<void***>(eax6));
    return (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax6) - reinterpret_cast<unsigned char>(a2)) >> 1) - 1;
}

void** fun_40a6a8(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** ebp16;
    void** edx17;
    void** ecx18;
    void** v19;
    void** esi20;
    void** eax21;
    void** v22;
    void** esi23;
    void** eax24;
    void** ebx25;
    void** edi26;
    void* esi27;
    uint32_t eax28;
    void* ebx29;
    uint32_t eax30;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = ebp16;
    edx17 = a4;
    ecx18 = a1;
    v19 = esi20;
    if (edx17) {
        if (!ecx18) 
            goto addr_40a6e5_3;
    } else {
        if (!ecx18) {
            if (a2 != ecx18) 
                goto addr_40a6e5_3; else 
                goto addr_40a6bf_6;
        }
    }
    if (!a2) {
        addr_40a6e5_3:
        eax21 = fun_404026(ecx18, v19, v15, v14, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        v22 = reinterpret_cast<void**>(22);
    } else {
        if (!edx17) {
            *reinterpret_cast<void***>(ecx18) = reinterpret_cast<void**>(0);
            goto addr_40a6bf_6;
        }
        esi23 = a3;
        if (esi23) 
            goto addr_40a6f9_11; else 
            goto addr_40a6e0_12;
    }
    addr_40a6ec_13:
    *reinterpret_cast<void***>(eax21) = v22;
    fun_402c77(ecx18);
    eax24 = v22;
    addr_40a6f6_14:
    return eax24;
    addr_40a6f9_11:
    ebx25 = ecx18;
    edi26 = a2;
    if (!reinterpret_cast<int1_t>(edx17 == 0xffffffff)) {
        esi27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi23) - reinterpret_cast<unsigned char>(ecx18));
        do {
            eax28 = *reinterpret_cast<uint16_t*>(reinterpret_cast<uint32_t>(esi27) + reinterpret_cast<unsigned char>(ebx25));
            *reinterpret_cast<void***>(ebx25) = *reinterpret_cast<void***>(&eax28);
            ebx25 = ebx25 + 2;
            if (!*reinterpret_cast<void***>(&eax28)) 
                break;
            --edi26;
        } while (edi26 && (--edx17, !!edx17));
        if (!edx17) 
            goto addr_40a735_19;
    } else {
        ebx29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx25) - reinterpret_cast<unsigned char>(esi23));
        do {
            eax30 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(esi23));
            *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ebx29) + reinterpret_cast<unsigned char>(esi23)) = *reinterpret_cast<int16_t*>(&eax30);
            esi23 = esi23 + 2;
            if (!*reinterpret_cast<int16_t*>(&eax30)) 
                break;
            --edi26;
        } while (edi26);
        goto addr_40a718_23;
    }
    addr_40a73a_24:
    if (edi26) {
        addr_40a6bf_6:
        eax24 = reinterpret_cast<void**>(0);
        goto addr_40a6f6_14;
    } else {
        if (!reinterpret_cast<int1_t>(edx17 == 0xffffffff)) {
            *reinterpret_cast<void***>(ecx18) = reinterpret_cast<void**>(0);
            eax21 = fun_404026(ecx18, v19, v15, v14, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
            v22 = reinterpret_cast<void**>(34);
            goto addr_40a6ec_13;
        } else {
            *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ecx18 + reinterpret_cast<unsigned char>(a2) * 2) - 2) = 0;
            eax24 = reinterpret_cast<void**>(80);
            goto addr_40a6f6_14;
        }
    }
    addr_40a735_19:
    *reinterpret_cast<void***>(ebx25) = reinterpret_cast<void**>(0);
    goto addr_40a73a_24;
    addr_40a718_23:
    goto addr_40a73a_24;
    addr_40a6e0_12:
    *reinterpret_cast<void***>(ecx18) = reinterpret_cast<void**>(0);
    goto addr_40a6e5_3;
}

void** fun_40a5c7(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** ebp16;
    void** v17;
    void** esi18;
    void** v19;
    void** edi20;
    void** edi21;
    void** eax22;
    void** v23;
    void** edx24;
    void** esi25;
    void** eax26;
    void* esi27;
    uint32_t eax28;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = ebp16;
    v17 = esi18;
    v19 = edi20;
    edi21 = a2;
    if (!edi21 || (ecx = a3, ecx == 0)) {
        addr_40a5e6_2:
        eax22 = fun_404026(ecx, v19, v17, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        v23 = reinterpret_cast<void**>(22);
    } else {
        edx24 = a4;
        if (edx24) {
            esi25 = edi21;
            do {
                if (!*reinterpret_cast<void***>(esi25)) 
                    break;
                esi25 = esi25 + 2;
                --ecx;
            } while (ecx);
            if (!ecx) 
                goto addr_40a5e1_8; else 
                goto addr_40a60d_9;
        } else {
            addr_40a5e1_8:
            *reinterpret_cast<void***>(edi21) = reinterpret_cast<void**>(0);
            goto addr_40a5e6_2;
        }
    }
    addr_40a5ed_10:
    *reinterpret_cast<void***>(eax22) = v23;
    fun_402c77(ecx);
    eax26 = v23;
    addr_40a5f7_11:
    return eax26;
    addr_40a60d_9:
    esi27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi25) - reinterpret_cast<unsigned char>(edx24));
    do {
        eax28 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(edx24));
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(esi27) + reinterpret_cast<unsigned char>(edx24)) = *reinterpret_cast<int16_t*>(&eax28);
        edx24 = edx24 + 2;
        if (!*reinterpret_cast<int16_t*>(&eax28)) 
            break;
        --ecx;
    } while (ecx);
    eax26 = reinterpret_cast<void**>(0);
    if (ecx) 
        goto addr_40a5f7_11;
    *reinterpret_cast<void***>(edi21) = reinterpret_cast<void**>(0);
    eax22 = fun_404026(ecx, v19, v17, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    v23 = reinterpret_cast<void**>(34);
    goto addr_40a5ed_10;
}

int32_t EncodePointer = 0x17b82;

void** g419f18;

int32_t LoadLibraryExW = 0x17f38;

int32_t GetProcAddress = 0x17cf2;

void** g419f1c;

void** g419f20;

void** g419f28;

void** g419f24;

int32_t OutputDebugStringW = 0x17f4a;

void** fun_40a766(void** ecx, void** a2, void** a3, uint32_t a4, void** a5, void** a6, void** a7) {
    void* ebp8;
    void** eax9;
    int32_t ebx10;
    void** esi11;
    void** eax12;
    void** edi13;
    void** v14;
    void** eax15;
    void** v16;
    int1_t zf17;
    int32_t eax18;
    int32_t edi19;
    int32_t eax20;
    int32_t eax21;
    int32_t eax22;
    void** eax23;
    int32_t eax24;
    void** eax25;
    int32_t eax26;
    void** eax27;
    int32_t eax28;
    void** eax29;
    int32_t eax30;
    void** eax31;
    int32_t eax32;
    void** eax33;
    int32_t ebx34;
    int1_t zf35;
    void** eax36;
    void** v37;
    void** eax38;
    int32_t eax39;
    int32_t eax40;
    unsigned char v41;
    void** eax42;
    int32_t eax43;
    void** eax44;
    void** eax45;
    int32_t eax46;
    void** eax47;
    uint32_t edi48;
    void** v49;
    int32_t eax50;
    void** ebx51;
    void** v52;
    void** v53;
    void** eax54;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax9 = g4183f0;
    ebx10 = EncodePointer;
    esi11 = reinterpret_cast<void**>(0);
    eax12 = reinterpret_cast<void**>(ebx10());
    edi13 = eax12;
    v14 = edi13;
    eax15 = fun_407e3e(ecx);
    v16 = eax15;
    zf17 = g419f18 == 0;
    if (zf17) {
        eax18 = reinterpret_cast<int32_t>(LoadLibraryExW("U", 0, 0x800));
        edi19 = eax18;
        if (edi19) 
            goto addr_40a7e6_3;
        eax20 = reinterpret_cast<int32_t>(GetLastError("U", 0, 0x800));
        if (eax20 != 87) 
            goto addr_40a939_5;
        eax21 = reinterpret_cast<int32_t>(LoadLibraryExW("U", 0, 0, "U", 0, 0x800));
        edi19 = eax21;
        if (!edi19) 
            goto addr_40a939_5;
        addr_40a7e6_3:
        eax22 = reinterpret_cast<int32_t>(GetProcAddress(edi19, "MessageBoxW", "U", 0, 0x800));
        if (!eax22) 
            goto addr_40a939_5;
        eax23 = reinterpret_cast<void**>(ebx10(eax22, edi19, "MessageBoxW", "U", 0, 0x800));
        g419f18 = eax23;
        eax24 = reinterpret_cast<int32_t>(GetProcAddress(edi19, "GetActiveWindow", eax22, edi19, "MessageBoxW", "U", 0, 0x800));
        eax25 = reinterpret_cast<void**>(ebx10(eax24, edi19, "GetActiveWindow", eax22, edi19, "MessageBoxW", "U", 0, 0x800));
        g419f1c = eax25;
        eax26 = reinterpret_cast<int32_t>(GetProcAddress(edi19, "GetLastActivePopup", eax24, edi19, "GetActiveWindow", eax22, edi19, "MessageBoxW", "U", 0, 0x800));
        eax27 = reinterpret_cast<void**>(ebx10(eax26, edi19, "GetLastActivePopup", eax24, edi19, "GetActiveWindow", eax22, edi19, "MessageBoxW", "U", 0, 0x800));
        g419f20 = eax27;
        eax28 = reinterpret_cast<int32_t>(GetProcAddress(edi19, "GetUserObjectInformationW", eax26, edi19, "GetLastActivePopup", eax24, edi19, "GetActiveWindow", eax22, edi19, "MessageBoxW", "U", 0, 0x800));
        eax29 = reinterpret_cast<void**>(ebx10(eax28, edi19, "GetUserObjectInformationW", eax26, edi19, "GetLastActivePopup", eax24, edi19, "GetActiveWindow", eax22, edi19, "MessageBoxW", "U", 0, 0x800));
        g419f28 = eax29;
        if (eax29) {
            eax30 = reinterpret_cast<int32_t>(GetProcAddress(edi19, "GetProcessWindowStation", eax28, edi19, "GetUserObjectInformationW", eax26, edi19, "GetLastActivePopup", eax24, edi19, "GetActiveWindow", eax22, edi19, "MessageBoxW", "U", 0, 0x800));
            eax31 = reinterpret_cast<void**>(ebx10(eax30, edi19, "GetProcessWindowStation", eax28, edi19, "GetUserObjectInformationW", eax26, edi19, "GetLastActivePopup", eax24, edi19, "GetActiveWindow", eax22, edi19, "MessageBoxW", "U", 0, 0x800));
            g419f24 = eax31;
        }
        edi13 = v14;
    }
    eax32 = reinterpret_cast<int32_t>(IsDebuggerPresent());
    if (!eax32) {
        if (!v16) {
            addr_40a893_12:
            eax33 = g419f24;
            ebx34 = DecodePointer;
            if (eax33 == edi13 || ((zf35 = g419f28 == edi13, zf35) || ((eax36 = reinterpret_cast<void**>(ebx34(eax33)), v37 = g419f28, v16 = eax36, eax38 = reinterpret_cast<void**>(ebx34(v37, eax33)), v14 = eax38, v16 == 0) || (!eax38 || (eax39 = reinterpret_cast<int32_t>(v16(v37, eax33)), !!eax39) && ((eax40 = reinterpret_cast<int32_t>(v14(eax39, 1, reinterpret_cast<uint32_t>(ebp8) - 16, 12, reinterpret_cast<uint32_t>(ebp8) - 36, v37, eax33)), !!eax40) && v41 & 1))))) {
                eax42 = g419f1c;
                if (eax42 != edi13 && ((eax43 = reinterpret_cast<int32_t>(ebx34(eax42)), !!eax43) && ((eax44 = reinterpret_cast<void**>(eax43(eax42)), esi11 = eax44, !!esi11) && ((eax45 = g419f20, eax45 != edi13) && (eax46 = reinterpret_cast<int32_t>(ebx34(eax45, eax42)), !!eax46))))) {
                    eax47 = reinterpret_cast<void**>(eax46(esi11, eax45, eax42));
                    esi11 = eax47;
                }
                edi48 = a4;
            } else {
                edi48 = a4 | 0x200000;
            }
        } else {
            DecodePointer();
            goto addr_40a878_18;
        }
    } else {
        if (a2) {
            OutputDebugStringW(a2);
        }
        if (!v16) 
            goto addr_40a893_12;
        goto addr_40a878_18;
    }
    v49 = g419f18;
    eax50 = reinterpret_cast<int32_t>(ebx34(v49));
    if (!eax50) {
        addr_40a939_5:
    } else {
        eax50(esi11, a2, a3, edi48, v49);
    }
    addr_40a93b_25:
    eax54 = fun_404f47(reinterpret_cast<unsigned char>(eax9) ^ reinterpret_cast<uint32_t>(ebp8) ^ reinterpret_cast<uint32_t>(ebp8), ebx51, v52, a3, a2, v14, v16, v53);
    return eax54;
    addr_40a878_18:
    goto addr_40a93b_25;
}

void** fun_408429(void** ecx, void** a2) {
    void** edx3;
    void*** ecx4;
    int32_t ebx5;

    edx3 = a2;
    if (edx3) {
        __asm__("lock xadd [edx], eax");
        if (*reinterpret_cast<void***>(edx3 + 0x78)) {
            __asm__("lock xadd [ecx], eax");
        }
        if (*reinterpret_cast<void***>(edx3 + 0x80)) {
            __asm__("lock xadd [ecx], eax");
        }
        if (*reinterpret_cast<void***>(edx3 + 0x7c)) {
            __asm__("lock xadd [ecx], eax");
        }
        if (*reinterpret_cast<void***>(edx3 + 0x88)) {
            __asm__("lock xadd [ecx], eax");
        }
        ecx4 = reinterpret_cast<void***>(edx3 + 28);
        ebx5 = 6;
        do {
            if (*reinterpret_cast<int32_t*>(ecx4 - 8) != "C" && *ecx4) {
                __asm__("lock xadd [edi], eax");
            }
            if (*reinterpret_cast<int32_t*>(ecx4 - 12) && *(ecx4 - 4)) {
                __asm__("lock xadd [edi], eax");
            }
            ecx4 = ecx4 + 16;
            --ebx5;
        } while (ebx5);
        __asm__("lock xadd [ecx], esi");
    }
    return edx3;
}

void** fun_40aad9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_40abd5(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_40ac3c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_4082cf(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** v8;
    void** ebp9;
    void** v10;
    void** ebx11;
    void** v12;
    void** esi13;
    void** esi14;
    void** v15;
    void** edi16;
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
    void** eax29;
    void*** ebx30;
    void** v31;
    void*** edi32;
    void** v33;
    void** v34;
    void** v35;
    void** eax36;

    v7 = reinterpret_cast<void**>(__return_address());
    v8 = ebp9;
    v10 = ebx11;
    v12 = esi13;
    esi14 = a2;
    v15 = edi16;
    if (*reinterpret_cast<void***>(esi14 + 0x84) && (*reinterpret_cast<void***>(esi14 + 0x84) != 0x418e10 && (*reinterpret_cast<void***>(esi14 + 0x78) && !*reinterpret_cast<void***>(*reinterpret_cast<void***>(esi14 + 0x78))))) {
        if (*reinterpret_cast<void***>(esi14 + 0x80) && !*reinterpret_cast<void***>(*reinterpret_cast<void***>(esi14 + 0x80))) {
            v17 = *reinterpret_cast<void***>(esi14 + 0x80);
            fun_40295d(ecx, v17, v15, v12, v10, v8, v7, a2, a3, a4, a5, a6);
            v18 = *reinterpret_cast<void***>(esi14 + 0x84);
            fun_40aad9(ecx, v18, v17, v15, v12, v10, v8, v7);
            ecx = v17;
        }
        if (*reinterpret_cast<void***>(esi14 + 0x7c) && !*reinterpret_cast<void***>(*reinterpret_cast<void***>(esi14 + 0x7c))) {
            v19 = *reinterpret_cast<void***>(esi14 + 0x7c);
            fun_40295d(ecx, v19, v15, v12, v10, v8, v7, a2, a3, a4, a5, a6);
            v20 = *reinterpret_cast<void***>(esi14 + 0x84);
            fun_40abd5(ecx, v20, v19, v15, v12, v10, v8, v7);
            ecx = v19;
        }
        v21 = *reinterpret_cast<void***>(esi14 + 0x78);
        fun_40295d(ecx, v21, v15, v12, v10, v8, v7, a2, a3, a4, a5, a6);
        v22 = *reinterpret_cast<void***>(esi14 + 0x84);
        fun_40295d(ecx, v22, v21, v15, v12, v10, v8, v7, a2, a3, a4, a5);
        ecx = v21;
    }
    if (*reinterpret_cast<void***>(esi14 + 0x88) && !*reinterpret_cast<void***>(*reinterpret_cast<void***>(esi14 + 0x88))) {
        v23 = *reinterpret_cast<void***>(esi14 + 0x8c) - 0xfe;
        fun_40295d(ecx, v23, v15, v12, v10, v8, v7, a2, a3, a4, a5, a6);
        v24 = *reinterpret_cast<void***>(esi14 + 0x94) - 0x80;
        fun_40295d(ecx, v24, v23, v15, v12, v10, v8, v7, a2, a3, a4, a5);
        v25 = *reinterpret_cast<void***>(esi14 + 0x98) - 0x80;
        fun_40295d(ecx, v25, v24, v23, v15, v12, v10, v8, v7, a2, a3, a4);
        v26 = *reinterpret_cast<void***>(esi14 + 0x88);
        fun_40295d(ecx, v26, v25, v24, v23, v15, v12, v10, v8, v7, a2, a3);
    }
    if (*reinterpret_cast<void***>(esi14 + 0x9c) != 0x418a78 && !*reinterpret_cast<void***>(*reinterpret_cast<void***>(esi14 + 0x9c) + 0xb0)) {
        v27 = *reinterpret_cast<void***>(esi14 + 0x9c);
        fun_40ac3c(ecx, v27, v15, v12, v10, v8, v7, a2);
        v28 = *reinterpret_cast<void***>(esi14 + 0x9c);
        fun_40295d(ecx, v28, v27, v15, v12, v10, v8, v7, a2, a3, a4, a5);
        ecx = v27;
    }
    eax29 = reinterpret_cast<void**>(6);
    ebx30 = reinterpret_cast<void***>(esi14 + 0xa0);
    v31 = reinterpret_cast<void**>(6);
    edi32 = reinterpret_cast<void***>(esi14 + 28);
    do {
        if (*reinterpret_cast<int32_t*>(edi32 - 8) != "C") {
            if (*edi32 && !*reinterpret_cast<void***>(*edi32)) {
                v33 = *edi32;
                fun_40295d(ecx, v33, v15, v12, v10, v8, v7, v31, a3, a4, a5, a6);
                v34 = *ebx30;
                fun_40295d(ecx, v34, v33, v15, v12, v10, v8, v7, v31, a3, a4, a5);
                ecx = v33;
            }
            eax29 = v31;
        }
        if (*reinterpret_cast<int32_t*>(edi32 - 12)) {
            if (*(edi32 - 4) && !*reinterpret_cast<void***>(*(edi32 - 4))) {
                v35 = *(edi32 - 4);
                fun_40295d(ecx, v35, v15, v12, v10, v8, v7, v31, a3, a4, a5, a6);
                ecx = v35;
            }
            eax29 = v31;
        }
        ebx30 = ebx30 + 4;
        edi32 = edi32 + 16;
        --eax29;
        v31 = eax29;
    } while (eax29);
    eax36 = fun_40295d(ecx, esi14, v15, v12, v10, v8, v7, v31, a3, a4, a5, a6);
    return eax36;
}

void** fun_407dcf(void** a1);

int32_t SetLastError = 0x17d3e;

void** fun_407717(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** eax9;
    void** ecx10;
    void** edi11;
    void** esi12;
    void** eax13;
    void** v14;
    int32_t eax15;
    void** eax16;

    GetLastError();
    v8 = g418540;
    eax9 = fun_407dcf(v8);
    ecx10 = v8;
    if (!eax9 && (eax13 = fun_408f5b(ecx10, 1, 0x3bc, edi11, esi12, __return_address(), a1), ecx10 = reinterpret_cast<void**>(0x3bc), !!eax13)) {
        v14 = g418540;
        eax15 = fun_407dee(0x3bc, v14, eax13);
        if (!eax15) {
            fun_40295d(eax13, eax13, edi11, esi12, __return_address(), a1, a2, a3, a4, a5, a6, a7);
            ecx10 = eax13;
        } else {
            fun_407786(eax13, eax13, 0, edi11, esi12, __return_address());
            ecx10 = reinterpret_cast<void**>(0);
            eax16 = reinterpret_cast<void**>(GetCurrentThreadId(0));
            *reinterpret_cast<void***>(eax13 + 4) = reinterpret_cast<void**>(0xffffffff);
            *reinterpret_cast<void***>(eax13) = eax16;
        }
    }
    SetLastError(ecx10);
    goto esi12;
}

uint32_t g419f6c;

int32_t TlsSetValue = 0x17ea4;

int32_t fun_407dee(void** ecx, void** a2, void** a3) {
    uint32_t eax4;
    uint32_t eax5;

    eax4 = g419f6c;
    eax5 = eax4 ^ reinterpret_cast<unsigned char>(g4183f0);
    if (!eax5) {
        TlsSetValue();
        goto a3;
    } else {
        eax5();
        goto a3;
    }
}

struct s41 {
    signed char[8] pad8;
    uint32_t f8;
    signed char[8] pad20;
    int32_t f14;
    signed char[68] pad92;
    int32_t f5c;
    signed char[8] pad104;
    int32_t f68;
    void** f6c;
    signed char[3] pad112;
    int32_t f70;
    signed char[68] pad184;
    int16_t fb8;
    signed char[260] pad446;
    int16_t f1be;
    signed char[504] pad952;
    uint32_t f3b8;
};

struct s42 {
    signed char[8] pad8;
    struct s41* f8;
};

void fun_407827(void** ecx);

struct s43 {
    signed char[12] pad12;
    void** fc;
};

void*** fun_40823a(int32_t ecx, void** a2);

void fun_407830(void** ecx);

void fun_407786(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    struct s41* esi7;
    struct s42* ebp8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    void** eax12;
    struct s43* ebp13;
    void** eax14;
    void** v15;
    int32_t ebp16;

    fun_404590(0x4177f0, 8, __return_address());
    esi7 = ebp8->f8;
    esi7->f5c = 0x411c00;
    esi7->f8 = 0;
    esi7->f14 = 1;
    esi7->f70 = 1;
    esi7->fb8 = 67;
    esi7->f1be = 67;
    esi7->f68 = 0x418750;
    esi7->f3b8 = 0;
    fun_409180(ecx, 13, 0x4177f0, 8, __return_address(), a2, a3, a4, a5, a6);
    *reinterpret_cast<uint32_t*>(ebp9 - 4) = 0;
    __asm__("lock xadd [eax], ecx");
    *reinterpret_cast<int32_t*>(ebp10 - 4) = -2;
    fun_407827(1);
    fun_409180(1, 12, 0x4177f0, 8, __return_address(), a2, a3, a4, a5, a6);
    *reinterpret_cast<int32_t*>(ebp11 - 4) = 1;
    eax12 = ebp13->fc;
    esi7->f6c = eax12;
    if (!eax12) {
        eax14 = image_base_;
        esi7->f6c = eax14;
    }
    v15 = esi7->f6c;
    fun_40823a(12, v15);
    *reinterpret_cast<int32_t*>(ebp16 - 4) = -2;
    fun_407830(v15);
    fun_4045d5(v15, 0x4177f0, 8, __return_address(), a2);
    goto 0x4177f0;
}

void*** fun_40823a(int32_t ecx, void** a2) {
    void** edx3;
    void*** esi4;
    int32_t ebx5;

    edx3 = a2;
    __asm__("lock xadd [edx], eax");
    if (*reinterpret_cast<void***>(edx3 + 0x78)) {
        __asm__("lock xadd [esi], eax");
    }
    if (*reinterpret_cast<void***>(edx3 + 0x80)) {
        __asm__("lock xadd [esi], eax");
    }
    if (*reinterpret_cast<void***>(edx3 + 0x7c)) {
        __asm__("lock xadd [esi], eax");
    }
    if (*reinterpret_cast<void***>(edx3 + 0x88)) {
        __asm__("lock xadd [esi], eax");
    }
    esi4 = reinterpret_cast<void***>(edx3 + 28);
    ebx5 = 6;
    do {
        if (*reinterpret_cast<int32_t*>(esi4 - 8) != "C" && *esi4) {
            __asm__("lock xadd [edi], eax");
        }
        if (*reinterpret_cast<int32_t*>(esi4 - 12) && *(esi4 - 4)) {
            __asm__("lock xadd [edi], eax");
        }
        esi4 = esi4 + 16;
        --ebx5;
    } while (ebx5);
    __asm__("lock xadd [eax], ecx");
    return *reinterpret_cast<void***>(edx3 + 0x9c) + 0xb0;
}

void fun_407830(void** ecx) {
    fun_4092ea(ecx, 12);
    return;
}

void** fun_407db0(void** a1);

struct s44 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

void** fun_4078af(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** eax8;
    void** v9;
    void** v10;
    void** esi11;
    void** v12;
    void** edi13;
    struct s44* esi14;
    struct s44* edi15;
    void** v16;
    void** ebx17;
    void** ebx18;
    void** v19;

    v7 = reinterpret_cast<void**>(__return_address());
    eax8 = g418540;
    if (eax8 != 0xffffffff) {
        v9 = eax8;
        eax8 = fun_407db0(v9);
        g418540 = reinterpret_cast<void**>(0xffffffff);
        ecx = v9;
    }
    v10 = esi11;
    v12 = edi13;
    esi14 = reinterpret_cast<struct s44*>(0x418cc8);
    edi15 = reinterpret_cast<struct s44*>(0x418cc8);
    v16 = ebx17;
    do {
        ebx18 = edi15->f0;
        if (ebx18 && edi15->f4 != 1) {
            DeleteCriticalSection(ecx, ebx18);
            eax8 = fun_40295d(ecx, ebx18, ebx18, v16, v12, v10, v7, a2, a3, a4, a5, a6);
            edi15->f0 = reinterpret_cast<void**>(0);
            ecx = ebx18;
        }
        ++edi15;
    } while (reinterpret_cast<int32_t>(edi15) < 0x418de8);
    do {
        if (esi14->f0 && esi14->f4 == 1) {
            v19 = esi14->f0;
            eax8 = reinterpret_cast<void**>(DeleteCriticalSection(ecx, v19));
        }
        ++esi14;
    } while (reinterpret_cast<int32_t>(esi14) < 0x418de8);
    return eax8;
}

uint32_t g419f64;

int32_t TlsFree = 0x17eb2;

void** fun_407db0(void** a1) {
    uint32_t eax2;
    uint32_t eax3;
    int32_t ebp4;

    eax2 = g419f64;
    eax3 = eax2 ^ reinterpret_cast<unsigned char>(g4183f0);
    if (!eax3) {
        TlsFree();
        goto ebp4;
    } else {
        eax3();
        goto ebp4;
    }
}

void fun_4088f1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

void** fun_408594(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    int1_t zf13;

    zf13 = g419ff0 == 0;
    if (zf13) {
        fun_4088f1(ecx, 0xfd, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        g419ff0 = 1;
    }
    return 0;
}

void** fun_408fa3(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void** v14;
    void** ebp15;
    void** v16;
    void** ebx17;
    void** v18;
    void** esi19;
    void** v20;
    void** edi21;
    void** edi22;
    void** esi23;
    void** eax24;
    void** v25;

    v13 = reinterpret_cast<void**>(__return_address());
    v14 = ebp15;
    v16 = ebx17;
    v18 = esi19;
    v20 = edi21;
    edi22 = g419a68;
    esi23 = reinterpret_cast<void**>(0);
    do {
        eax24 = fun_40265a(ecx, a2, v20, v18, v16, v14, v13, a2, a3, a4, a5, a6, a7, a8);
        if (eax24) 
            break;
        if (!edi22) 
            break;
        v25 = esi23;
        fun_408119(a2, v25);
        edi22 = g419a68;
        esi23 = esi23 + 0x3e8;
        ecx = v25;
        if (reinterpret_cast<unsigned char>(esi23) > reinterpret_cast<unsigned char>(edi22)) {
            esi23 = reinterpret_cast<void**>(0xffffffff);
        }
    } while (!reinterpret_cast<int1_t>(esi23 == 0xffffffff));
    return eax24;
}

uint32_t fun_40aa6e(uint32_t a1);

void** fun_40797f(void** ecx, void*** a2, void** a3, void** a4, void** a5, uint32_t* a6) {
    uint32_t* ebx7;
    void*** esi8;
    void** edi9;
    int32_t ecx10;
    int32_t v11;
    void** al12;
    uint32_t eax13;
    void** al14;
    int32_t eax15;
    uint32_t v16;
    int32_t edx17;
    uint32_t ecx18;
    void*** eax19;
    uint32_t eax20;
    uint32_t v21;
    uint32_t eax22;

    ebx7 = a6;
    esi8 = a2;
    *ebx7 = 0;
    edi9 = a4;
    *reinterpret_cast<void***>(a5) = reinterpret_cast<void**>(1);
    if (a3) {
        *reinterpret_cast<void***>(a3) = edi9;
        a3 = a3 + 4;
    }
    ecx10 = 0;
    v11 = 0;
    do {
        if (!reinterpret_cast<int1_t>(*esi8 == 34)) {
            *ebx7 = *ebx7 + 1;
            if (edi9) {
                *reinterpret_cast<void***>(edi9) = *esi8;
                ++edi9;
            }
            al12 = *esi8;
            ++esi8;
            eax13 = fun_40aa6e(static_cast<uint32_t>(reinterpret_cast<unsigned char>(al12)));
            if (eax13) {
                *ebx7 = *ebx7 + 1;
                if (edi9) {
                    *reinterpret_cast<void***>(edi9) = *esi8;
                    ++edi9;
                }
                ++esi8;
            }
            al14 = al12;
            if (!al14) 
                break;
            ecx10 = v11;
        } else {
            eax15 = 0;
            *reinterpret_cast<unsigned char*>(&eax15) = reinterpret_cast<uint1_t>(ecx10 == 0);
            ++esi8;
            ecx10 = eax15;
            al14 = reinterpret_cast<void**>(34);
            v11 = ecx10;
        }
    } while (ecx10 || al14 != 32 && !reinterpret_cast<int1_t>(al14 == 9));
    goto addr_407a05_15;
    --esi8;
    addr_407a10_17:
    v16 = 0;
    while (*esi8) {
        while (*esi8 == 32 || reinterpret_cast<int1_t>(*esi8 == 9)) {
            ++esi8;
        }
        if (!*esi8) 
            break;
        if (a3) {
            *reinterpret_cast<void***>(a3) = edi9;
            a3 = a3 + 4;
        }
        *reinterpret_cast<void***>(a5) = *reinterpret_cast<void***>(a5) + 1;
        while (1) {
            edx17 = 1;
            ecx18 = 0;
            while (*esi8 == 92) {
                ++esi8;
                ++ecx18;
            }
            if (reinterpret_cast<int1_t>(*esi8 == 34)) {
                if (!(*reinterpret_cast<unsigned char*>(&ecx18) & 1)) {
                    if (!v16 || (eax19 = esi8 + 1, !reinterpret_cast<int1_t>(*eax19 == 34))) {
                        eax20 = 0;
                        edx17 = 0;
                        *reinterpret_cast<unsigned char*>(&eax20) = reinterpret_cast<uint1_t>(v16 == 0);
                        v16 = eax20;
                    } else {
                        esi8 = eax19;
                    }
                }
                ecx18 = ecx18 >> 1;
            }
            while (ecx18) {
                --ecx18;
                if (edi9) {
                    *reinterpret_cast<void***>(edi9) = reinterpret_cast<void**>(92);
                    ++edi9;
                }
                *ebx7 = *ebx7 + 1;
            }
            if (!*esi8) 
                break;
            if (v16 != ecx18) 
                goto addr_407aa4_40;
            if (*esi8 == 32) 
                break;
            if (*esi8 == 9) 
                break;
            addr_407aa4_40:
            if (edx17) {
                v21 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*esi8)));
                eax22 = fun_40aa6e(v21);
                if (!edi9) {
                    if (eax22) {
                        ++esi8;
                        *ebx7 = *ebx7 + 1;
                    }
                } else {
                    if (eax22) {
                        *reinterpret_cast<void***>(edi9) = *esi8;
                        ++edi9;
                        ++esi8;
                        *ebx7 = *ebx7 + 1;
                    }
                    *reinterpret_cast<void***>(edi9) = *esi8;
                    ++edi9;
                }
                *ebx7 = *ebx7 + 1;
            }
            ++esi8;
        }
        if (edi9) {
            *reinterpret_cast<void***>(edi9) = reinterpret_cast<void**>(0);
            ++edi9;
        }
        *ebx7 = *ebx7 + 1;
    }
    if (a3) {
        *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(a5) = *reinterpret_cast<void***>(a5) + 1;
    return a5;
    addr_407a05_15:
    if (edi9) {
        *reinterpret_cast<void***>(edi9 + 0xffffffff) = reinterpret_cast<void**>(0);
        goto addr_407a10_17;
    }
}

uint32_t fun_40aa14(void** a1, uint32_t a2, uint32_t a3, unsigned char a4);

uint32_t fun_40aa6e(uint32_t a1) {
    uint32_t eax2;

    eax2 = fun_40aa14(0, a1, 0, 4);
    return eax2;
}

void** g4191c0 = reinterpret_cast<void**>(0);

struct s45 {
    signed char[1] pad1;
    void** f1;
};

void** g4192e4;

int32_t g419ff4;

void** fun_40aa84(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

uint32_t fun_407afb(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    int1_t zf13;
    void** v14;
    void** esi15;
    void** esi16;
    void** v17;
    void** edi18;
    struct s45* edi19;
    struct s18* eax20;
    void** eax21;
    void** edi22;
    void** ecx23;
    uint32_t eax24;
    void** esi25;
    void** v26;
    void** ebx27;
    struct s18* eax28;
    void** ebx29;
    void** eax30;
    void** eax31;
    void** v32;

    v12 = reinterpret_cast<void**>(__return_address());
    zf13 = g419ff0 == 0;
    if (zf13) {
        fun_408594(ecx, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    v14 = esi15;
    esi16 = g4191c0;
    v17 = edi18;
    edi19 = reinterpret_cast<struct s45*>(0);
    if (esi16) {
        while (*reinterpret_cast<void***>(esi16)) {
            if (*reinterpret_cast<void***>(esi16) != 61) {
                edi19 = reinterpret_cast<struct s45*>(&edi19->f1);
            }
            eax20 = fun_402cc0(ecx, esi16, v17, v14, v12);
            ecx = esi16;
            esi16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi16 + 1) + reinterpret_cast<uint32_t>(eax20));
        }
        eax21 = fun_408f5b(ecx, &edi19->f1, 4, v17, v14, v12, a2);
        edi22 = eax21;
        g4192e4 = edi22;
        ecx23 = reinterpret_cast<void**>(4);
        if (!edi22) 
            goto addr_407b17_9;
    } else {
        addr_407b17_9:
        eax24 = 0xffffffff;
        goto addr_407bb5_10;
    }
    esi25 = g4191c0;
    v26 = ebx27;
    if (!*reinterpret_cast<void***>(esi25)) {
        addr_407b97_12:
        fun_40295d(ecx23, esi25, v26, v17, v14, v12, a2, a3, a4, a5, a6, a7);
        g4191c0 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(edi22) = reinterpret_cast<void**>(0);
        eax24 = 0;
        g419ff4 = 1;
    } else {
        do {
            eax28 = fun_402cc0(ecx23, esi25, v26, v17, v14);
            ecx23 = esi25;
            ebx29 = reinterpret_cast<void**>(&eax28->f1);
            if (*reinterpret_cast<void***>(esi25) != 61) {
                eax30 = fun_408f5b(ecx23, ebx29, 1, v26, v17, v14, v12);
                *reinterpret_cast<void***>(edi22) = eax30;
                ecx23 = reinterpret_cast<void**>(1);
                if (!eax30) 
                    goto addr_407bb8_15;
                eax31 = fun_40aa84(1, eax30, ebx29, esi25, v26, v17, v14, v12, a2, a3, a4, a5, a6, a7);
                if (eax31) 
                    goto addr_407bcf_17;
                edi22 = edi22 + 4;
            }
            esi25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi25) + reinterpret_cast<unsigned char>(ebx29));
        } while (*reinterpret_cast<void***>(esi25));
        goto addr_407b91_20;
    }
    addr_407bb3_21:
    addr_407bb5_10:
    return eax24;
    addr_407b91_20:
    esi25 = g4191c0;
    goto addr_407b97_12;
    addr_407bb8_15:
    v32 = g4192e4;
    fun_40295d(1, v32, v26, v17, v14, v12, a2, a3, a4, a5, a6, a7);
    g4192e4 = reinterpret_cast<void**>(0);
    eax24 = 0xffffffff;
    goto addr_407bb3_21;
    addr_407bcf_17:
    fun_402c87(1);
    g419308 = reinterpret_cast<void**>(0);
    goto 0;
}

void** fun_40aa84(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** v15;
    void** v16;
    void** ebp17;
    void** v18;
    void** esi19;
    void** esi20;
    void** edx21;
    void** eax22;
    void** v23;
    void* edi24;
    void** al25;
    void** eax26;

    v15 = reinterpret_cast<void**>(__return_address());
    v16 = ebp17;
    v18 = esi19;
    esi20 = a2;
    if (!esi20 || (edx21 = a3, edx21 == 0)) {
        addr_40aa9f_2:
        eax22 = fun_404026(ecx, v18, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        v23 = reinterpret_cast<void**>(22);
    } else {
        ecx = a4;
        if (ecx) {
            edi24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi20) - reinterpret_cast<unsigned char>(ecx));
            do {
                al25 = *reinterpret_cast<void***>(ecx);
                *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi24) + reinterpret_cast<unsigned char>(ecx)) = al25;
                ++ecx;
                if (!al25) 
                    break;
                --edx21;
            } while (edx21);
            if (edx21) 
                goto addr_40aad5_8; else 
                goto addr_40aaca_9;
        } else {
            *reinterpret_cast<void***>(esi20) = ecx;
            goto addr_40aa9f_2;
        }
    }
    addr_40aaa6_11:
    *reinterpret_cast<void***>(eax22) = v23;
    fun_402c77(ecx);
    eax26 = v23;
    addr_40aab0_12:
    return eax26;
    addr_40aad5_8:
    eax26 = reinterpret_cast<void**>(0);
    goto addr_40aab0_12;
    addr_40aaca_9:
    *reinterpret_cast<void***>(esi20) = edx21;
    eax22 = fun_404026(ecx, v18, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    v23 = reinterpret_cast<void**>(34);
    goto addr_40aaa6_11;
}

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(44);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(44);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(44);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(44);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(44);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(44);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(44);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(48);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(48);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(48);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(48);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(48);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(48);

void** fun_40aad9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    int1_t zf9;
    void** v10;
    void** esi11;
    void** ebp12;
    int1_t zf13;
    void** v14;
    int1_t zf15;
    void** v16;
    int1_t zf17;
    void** v18;
    int1_t zf19;
    void** v20;
    int1_t zf21;
    void** v22;
    int1_t zf23;
    void** v24;
    int1_t zf25;
    void** v26;
    int1_t zf27;
    void** v28;
    int1_t zf29;
    void** v30;
    int1_t zf31;
    void** v32;
    int1_t zf33;
    void** v34;
    void** eax35;
    int1_t zf36;

    if (a2) {
        zf9 = *reinterpret_cast<void***>(a2 + 12) == image_base_;
        if (!zf9) {
            v10 = *reinterpret_cast<void***>(a2 + 12);
            fun_40295d(ecx, v10, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v10;
        }
        zf13 = *reinterpret_cast<void***>(a2 + 16) == image_base_;
        if (!zf13) {
            v14 = *reinterpret_cast<void***>(a2 + 16);
            fun_40295d(ecx, v14, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v14;
        }
        zf15 = *reinterpret_cast<void***>(a2 + 20) == image_base_;
        if (!zf15) {
            v16 = *reinterpret_cast<void***>(a2 + 20);
            fun_40295d(ecx, v16, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v16;
        }
        zf17 = *reinterpret_cast<void***>(a2 + 24) == image_base_;
        if (!zf17) {
            v18 = *reinterpret_cast<void***>(a2 + 24);
            fun_40295d(ecx, v18, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v18;
        }
        zf19 = *reinterpret_cast<void***>(a2 + 28) == image_base_;
        if (!zf19) {
            v20 = *reinterpret_cast<void***>(a2 + 28);
            fun_40295d(ecx, v20, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v20;
        }
        zf21 = *reinterpret_cast<void***>(a2 + 32) == image_base_;
        if (!zf21) {
            v22 = *reinterpret_cast<void***>(a2 + 32);
            fun_40295d(ecx, v22, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v22;
        }
        zf23 = *reinterpret_cast<void***>(a2 + 36) == image_base_;
        if (!zf23) {
            v24 = *reinterpret_cast<void***>(a2 + 36);
            fun_40295d(ecx, v24, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v24;
        }
        zf25 = *reinterpret_cast<void***>(a2 + 56) == image_base_;
        if (!zf25) {
            v26 = *reinterpret_cast<void***>(a2 + 56);
            fun_40295d(ecx, v26, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v26;
        }
        zf27 = *reinterpret_cast<void***>(a2 + 60) == image_base_;
        if (!zf27) {
            v28 = *reinterpret_cast<void***>(a2 + 60);
            fun_40295d(ecx, v28, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v28;
        }
        zf29 = *reinterpret_cast<void***>(a2 + 64) == image_base_;
        if (!zf29) {
            v30 = *reinterpret_cast<void***>(a2 + 64);
            fun_40295d(ecx, v30, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v30;
        }
        zf31 = *reinterpret_cast<void***>(a2 + 68) == image_base_;
        if (!zf31) {
            v32 = *reinterpret_cast<void***>(a2 + 68);
            fun_40295d(ecx, v32, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v32;
        }
        zf33 = *reinterpret_cast<void***>(a2 + 72) == image_base_;
        if (!zf33) {
            v34 = *reinterpret_cast<void***>(a2 + 72);
            fun_40295d(ecx, v34, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v34;
        }
        eax35 = *reinterpret_cast<void***>(a2 + 76);
        zf36 = eax35 == image_base_;
        if (!zf36) {
            eax35 = fun_40295d(ecx, eax35, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        }
    }
    return eax35;
}

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(12);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(44);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(44);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(96);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(48);

void** fun_40abd5(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    int1_t zf9;
    void** v10;
    void** esi11;
    void** ebp12;
    int1_t zf13;
    void** v14;
    int1_t zf15;
    void** v16;
    int1_t zf17;
    void** v18;
    void** eax19;
    int1_t zf20;

    if (a2) {
        zf9 = *reinterpret_cast<void***>(a2) == image_base_;
        if (!zf9) {
            v10 = *reinterpret_cast<void***>(a2);
            fun_40295d(ecx, v10, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v10;
        }
        zf13 = *reinterpret_cast<void***>(a2 + 4) == image_base_;
        if (!zf13) {
            v14 = *reinterpret_cast<void***>(a2 + 4);
            fun_40295d(ecx, v14, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v14;
        }
        zf15 = *reinterpret_cast<void***>(a2 + 8) == image_base_;
        if (!zf15) {
            v16 = *reinterpret_cast<void***>(a2 + 8);
            fun_40295d(ecx, v16, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v16;
        }
        zf17 = *reinterpret_cast<void***>(a2 + 48) == image_base_;
        if (!zf17) {
            v18 = *reinterpret_cast<void***>(a2 + 48);
            fun_40295d(ecx, v18, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v18;
        }
        eax19 = *reinterpret_cast<void***>(a2 + 52);
        zf20 = eax19 == image_base_;
        if (!zf20) {
            eax19 = fun_40295d(ecx, eax19, esi11, ebp12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        }
    }
    return eax19;
}

void** fun_40ac3c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** esi10;
    void** ebp11;
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
    void** v29;
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
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** eax98;

    if (a2) {
        v9 = *reinterpret_cast<void***>(a2 + 4);
        fun_40295d(ecx, v9, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        v12 = *reinterpret_cast<void***>(a2 + 8);
        fun_40295d(ecx, v12, v9, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6, a7);
        v13 = *reinterpret_cast<void***>(a2 + 12);
        fun_40295d(ecx, v13, v12, v9, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6);
        v14 = *reinterpret_cast<void***>(a2 + 16);
        fun_40295d(ecx, v14, v13, v12, v9, esi10, ebp11, __return_address(), a2, a3, a4, a5);
        v15 = *reinterpret_cast<void***>(a2 + 20);
        fun_40295d(ecx, v15, v14, v13, v12, v9, esi10, ebp11, __return_address(), a2, a3, a4);
        v16 = *reinterpret_cast<void***>(a2 + 24);
        fun_40295d(ecx, v16, v15, v14, v13, v12, v9, esi10, ebp11, __return_address(), a2, a3);
        v17 = *reinterpret_cast<void***>(a2);
        fun_40295d(ecx, v17, v16, v15, v14, v13, v12, v9, esi10, ebp11, __return_address(), a2);
        v18 = *reinterpret_cast<void***>(a2 + 32);
        fun_40295d(ecx, v18, v17, v16, v15, v14, v13, v12, v9, esi10, ebp11, __return_address());
        v19 = *reinterpret_cast<void***>(a2 + 36);
        fun_40295d(ecx, v19, v18, v17, v16, v15, v14, v13, v12, v9, esi10, ebp11);
        v20 = *reinterpret_cast<void***>(a2 + 40);
        fun_40295d(ecx, v20, v19, v18, v17, v16, v15, v14, v13, v12, v9, esi10);
        v21 = *reinterpret_cast<void***>(a2 + 44);
        fun_40295d(ecx, v21, v20, v19, v18, v17, v16, v15, v14, v13, v12, v9);
        v22 = *reinterpret_cast<void***>(a2 + 48);
        fun_40295d(ecx, v22, v21, v20, v19, v18, v17, v16, v15, v14, v13, v12, ecx, v22, v21, v20, v19, v18, v17, v16, v15, v14, v13, v12);
        v23 = *reinterpret_cast<void***>(a2 + 52);
        fun_40295d(ecx, v23, v22, v21, v20, v19, v18, v17, v16, v15, v14, v13, ecx, v23, v22, v21, v20, v19, v18, v17, v16, v15, v14, v13);
        v24 = *reinterpret_cast<void***>(a2 + 28);
        fun_40295d(ecx, v24, v23, v22, v21, v20, v19, v18, v17, v16, v15, v14, ecx, v24, v23, v22, v21, v20, v19, v18, v17, v16, v15, v14);
        v25 = *reinterpret_cast<void***>(a2 + 56);
        fun_40295d(ecx, v25, v24, v23, v22, v21, v20, v19, v18, v17, v16, v15, ecx, v25, v24, v23, v22, v21, v20, v19, v18, v17, v16, v15);
        v26 = *reinterpret_cast<void***>(a2 + 60);
        fun_40295d(ecx, v26, v25, v24, v23, v22, v21, v20, v19, v18, v17, v16, ecx, v26, v25, v24, v23, v22, v21, v20, v19, v18, v17, v16);
        v27 = *reinterpret_cast<void***>(a2 + 64);
        fun_40295d(ecx, v27, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        v28 = *reinterpret_cast<void***>(a2 + 68);
        fun_40295d(ecx, v28, v27, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6, a7);
        v29 = *reinterpret_cast<void***>(a2 + 72);
        fun_40295d(ecx, v29, v28, v27, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6);
        v30 = *reinterpret_cast<void***>(a2 + 76);
        fun_40295d(ecx, v30, v29, v28, v27, esi10, ebp11, __return_address(), a2, a3, a4, a5);
        v31 = *reinterpret_cast<void***>(a2 + 80);
        fun_40295d(ecx, v31, v30, v29, v28, v27, esi10, ebp11, __return_address(), a2, a3, a4);
        v32 = *reinterpret_cast<void***>(a2 + 84);
        fun_40295d(ecx, v32, v31, v30, v29, v28, v27, esi10, ebp11, __return_address(), a2, a3);
        v33 = *reinterpret_cast<void***>(a2 + 88);
        fun_40295d(ecx, v33, v32, v31, v30, v29, v28, v27, esi10, ebp11, __return_address(), a2);
        v34 = *reinterpret_cast<void***>(a2 + 92);
        fun_40295d(ecx, v34, v33, v32, v31, v30, v29, v28, v27, esi10, ebp11, __return_address());
        v35 = *reinterpret_cast<void***>(a2 + 96);
        fun_40295d(ecx, v35, v34, v33, v32, v31, v30, v29, v28, v27, esi10, ebp11);
        v36 = *reinterpret_cast<void***>(a2 + 100);
        fun_40295d(ecx, v36, v35, v34, v33, v32, v31, v30, v29, v28, v27, esi10);
        v37 = *reinterpret_cast<void***>(a2 + 0x68);
        fun_40295d(ecx, v37, v36, v35, v34, v33, v32, v31, v30, v29, v28, v27);
        v38 = *reinterpret_cast<void***>(a2 + 0x6c);
        fun_40295d(ecx, v38, v37, v36, v35, v34, v33, v32, v31, v30, v29, v28, ecx, v38, v37, v36, v35, v34, v33, v32, v31, v30, v29, v28);
        v39 = *reinterpret_cast<void***>(a2 + 0x70);
        fun_40295d(ecx, v39, v38, v37, v36, v35, v34, v33, v32, v31, v30, v29, ecx, v39, v38, v37, v36, v35, v34, v33, v32, v31, v30, v29);
        v40 = *reinterpret_cast<void***>(a2 + 0x74);
        fun_40295d(ecx, v40, v39, v38, v37, v36, v35, v34, v33, v32, v31, v30, ecx, v40, v39, v38, v37, v36, v35, v34, v33, v32, v31, v30);
        v41 = *reinterpret_cast<void***>(a2 + 0x78);
        fun_40295d(ecx, v41, v40, v39, v38, v37, v36, v35, v34, v33, v32, v31, ecx, v41, v40, v39, v38, v37, v36, v35, v34, v33, v32, v31);
        v42 = *reinterpret_cast<void***>(a2 + 0x7c);
        fun_40295d(ecx, v42, v41, v40, v39, v38, v37, v36, v35, v34, v33, v32, ecx, v42, v41, v40, v39, v38, v37, v36, v35, v34, v33, v32);
        v43 = *reinterpret_cast<void***>(a2 + 0x80);
        fun_40295d(ecx, v43, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        v44 = *reinterpret_cast<void***>(a2 + 0x84);
        fun_40295d(ecx, v44, v43, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6, a7);
        v45 = *reinterpret_cast<void***>(a2 + 0x88);
        fun_40295d(ecx, v45, v44, v43, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6);
        v46 = *reinterpret_cast<void***>(a2 + 0x8c);
        fun_40295d(ecx, v46, v45, v44, v43, esi10, ebp11, __return_address(), a2, a3, a4, a5);
        v47 = *reinterpret_cast<void***>(a2 + 0x90);
        fun_40295d(ecx, v47, v46, v45, v44, v43, esi10, ebp11, __return_address(), a2, a3, a4);
        v48 = *reinterpret_cast<void***>(a2 + 0x94);
        fun_40295d(ecx, v48, v47, v46, v45, v44, v43, esi10, ebp11, __return_address(), a2, a3);
        v49 = *reinterpret_cast<void***>(a2 + 0x98);
        fun_40295d(ecx, v49, v48, v47, v46, v45, v44, v43, esi10, ebp11, __return_address(), a2);
        v50 = *reinterpret_cast<void***>(a2 + 0x9c);
        fun_40295d(ecx, v50, v49, v48, v47, v46, v45, v44, v43, esi10, ebp11, __return_address());
        v51 = *reinterpret_cast<void***>(a2 + 0xa0);
        fun_40295d(ecx, v51, v50, v49, v48, v47, v46, v45, v44, v43, esi10, ebp11);
        v52 = *reinterpret_cast<void***>(a2 + 0xa4);
        fun_40295d(ecx, v52, v51, v50, v49, v48, v47, v46, v45, v44, v43, esi10);
        v53 = *reinterpret_cast<void***>(a2 + 0xa8);
        fun_40295d(ecx, v53, v52, v51, v50, v49, v48, v47, v46, v45, v44, v43);
        v54 = *reinterpret_cast<void***>(a2 + 0xb8);
        fun_40295d(ecx, v54, v53, v52, v51, v50, v49, v48, v47, v46, v45, v44, ecx, v54, v53, v52, v51, v50, v49, v48, v47, v46, v45, v44);
        v55 = *reinterpret_cast<void***>(a2 + 0xbc);
        fun_40295d(ecx, v55, v54, v53, v52, v51, v50, v49, v48, v47, v46, v45, ecx, v55, v54, v53, v52, v51, v50, v49, v48, v47, v46, v45);
        v56 = *reinterpret_cast<void***>(a2 + 0xc0);
        fun_40295d(ecx, v56, v55, v54, v53, v52, v51, v50, v49, v48, v47, v46, ecx, v56, v55, v54, v53, v52, v51, v50, v49, v48, v47, v46);
        v57 = *reinterpret_cast<void***>(a2 + 0xc4);
        fun_40295d(ecx, v57, v56, v55, v54, v53, v52, v51, v50, v49, v48, v47, ecx, v57, v56, v55, v54, v53, v52, v51, v50, v49, v48, v47);
        v58 = *reinterpret_cast<void***>(a2 + 0xc8);
        fun_40295d(ecx, v58, v57, v56, v55, v54, v53, v52, v51, v50, v49, v48, ecx, v58, v57, v56, v55, v54, v53, v52, v51, v50, v49, v48);
        v59 = *reinterpret_cast<void***>(a2 + 0xcc);
        fun_40295d(ecx, v59, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        v60 = *reinterpret_cast<void***>(a2 + 0xb4);
        fun_40295d(ecx, v60, v59, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6, a7);
        v61 = *reinterpret_cast<void***>(a2 + 0xd4);
        fun_40295d(ecx, v61, v60, v59, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6);
        v62 = *reinterpret_cast<void***>(a2 + 0xd8);
        fun_40295d(ecx, v62, v61, v60, v59, esi10, ebp11, __return_address(), a2, a3, a4, a5);
        v63 = *reinterpret_cast<void***>(a2 + 0xdc);
        fun_40295d(ecx, v63, v62, v61, v60, v59, esi10, ebp11, __return_address(), a2, a3, a4);
        v64 = *reinterpret_cast<void***>(a2 + 0xe0);
        fun_40295d(ecx, v64, v63, v62, v61, v60, v59, esi10, ebp11, __return_address(), a2, a3);
        v65 = *reinterpret_cast<void***>(a2 + 0xe4);
        fun_40295d(ecx, v65, v64, v63, v62, v61, v60, v59, esi10, ebp11, __return_address(), a2);
        v66 = *reinterpret_cast<void***>(a2 + 0xe8);
        fun_40295d(ecx, v66, v65, v64, v63, v62, v61, v60, v59, esi10, ebp11, __return_address());
        v67 = *reinterpret_cast<void***>(a2 + 0xd0);
        fun_40295d(ecx, v67, v66, v65, v64, v63, v62, v61, v60, v59, esi10, ebp11);
        v68 = *reinterpret_cast<void***>(a2 + 0xec);
        fun_40295d(ecx, v68, v67, v66, v65, v64, v63, v62, v61, v60, v59, esi10);
        v69 = *reinterpret_cast<void***>(a2 + 0xf0);
        fun_40295d(ecx, v69, v68, v67, v66, v65, v64, v63, v62, v61, v60, v59);
        v70 = *reinterpret_cast<void***>(a2 + 0xf4);
        fun_40295d(ecx, v70, v69, v68, v67, v66, v65, v64, v63, v62, v61, v60, ecx, v70, v69, v68, v67, v66, v65, v64, v63, v62, v61, v60);
        v71 = *reinterpret_cast<void***>(a2 + 0xf8);
        fun_40295d(ecx, v71, v70, v69, v68, v67, v66, v65, v64, v63, v62, v61, ecx, v71, v70, v69, v68, v67, v66, v65, v64, v63, v62, v61);
        v72 = *reinterpret_cast<void***>(a2 + 0xfc);
        fun_40295d(ecx, v72, v71, v70, v69, v68, v67, v66, v65, v64, v63, v62, ecx, v72, v71, v70, v69, v68, v67, v66, v65, v64, v63, v62);
        v73 = *reinterpret_cast<void***>(a2 + 0x100);
        fun_40295d(ecx, v73, v72, v71, v70, v69, v68, v67, v66, v65, v64, v63, ecx, v73, v72, v71, v70, v69, v68, v67, v66, v65, v64, v63);
        v74 = *reinterpret_cast<void***>(a2 + 0x104);
        fun_40295d(ecx, v74, v73, v72, v71, v70, v69, v68, v67, v66, v65, v64, ecx, v74, v73, v72, v71, v70, v69, v68, v67, v66, v65, v64);
        v75 = *reinterpret_cast<void***>(a2 + 0x108);
        fun_40295d(ecx, v75, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        v76 = *reinterpret_cast<void***>(a2 + 0x10c);
        fun_40295d(ecx, v76, v75, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6, a7);
        v77 = *reinterpret_cast<void***>(a2 + 0x110);
        fun_40295d(ecx, v77, v76, v75, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6);
        v78 = *reinterpret_cast<void***>(a2 + 0x114);
        fun_40295d(ecx, v78, v77, v76, v75, esi10, ebp11, __return_address(), a2, a3, a4, a5);
        v79 = *reinterpret_cast<void***>(a2 + 0x118);
        fun_40295d(ecx, v79, v78, v77, v76, v75, esi10, ebp11, __return_address(), a2, a3, a4);
        v80 = *reinterpret_cast<void***>(a2 + 0x11c);
        fun_40295d(ecx, v80, v79, v78, v77, v76, v75, esi10, ebp11, __return_address(), a2, a3);
        v81 = *reinterpret_cast<void***>(a2 + 0x120);
        fun_40295d(ecx, v81, v80, v79, v78, v77, v76, v75, esi10, ebp11, __return_address(), a2);
        v82 = *reinterpret_cast<void***>(a2 + 0x124);
        fun_40295d(ecx, v82, v81, v80, v79, v78, v77, v76, v75, esi10, ebp11, __return_address());
        v83 = *reinterpret_cast<void***>(a2 + 0x128);
        fun_40295d(ecx, v83, v82, v81, v80, v79, v78, v77, v76, v75, esi10, ebp11);
        v84 = *reinterpret_cast<void***>(a2 + 0x12c);
        fun_40295d(ecx, v84, v83, v82, v81, v80, v79, v78, v77, v76, v75, esi10);
        v85 = *reinterpret_cast<void***>(a2 + 0x130);
        fun_40295d(ecx, v85, v84, v83, v82, v81, v80, v79, v78, v77, v76, v75);
        v86 = *reinterpret_cast<void***>(a2 + 0x134);
        fun_40295d(ecx, v86, v85, v84, v83, v82, v81, v80, v79, v78, v77, v76, ecx, v86, v85, v84, v83, v82, v81, v80, v79, v78, v77, v76);
        v87 = *reinterpret_cast<void***>(a2 + 0x138);
        fun_40295d(ecx, v87, v86, v85, v84, v83, v82, v81, v80, v79, v78, v77, ecx, v87, v86, v85, v84, v83, v82, v81, v80, v79, v78, v77);
        v88 = *reinterpret_cast<void***>(a2 + 0x13c);
        fun_40295d(ecx, v88, v87, v86, v85, v84, v83, v82, v81, v80, v79, v78, ecx, v88, v87, v86, v85, v84, v83, v82, v81, v80, v79, v78);
        v89 = *reinterpret_cast<void***>(a2 + 0x140);
        fun_40295d(ecx, v89, v88, v87, v86, v85, v84, v83, v82, v81, v80, v79, ecx, v89, v88, v87, v86, v85, v84, v83, v82, v81, v80, v79);
        v90 = *reinterpret_cast<void***>(a2 + 0x144);
        fun_40295d(ecx, v90, v89, v88, v87, v86, v85, v84, v83, v82, v81, v80, ecx, v90, v89, v88, v87, v86, v85, v84, v83, v82, v81, v80);
        v91 = *reinterpret_cast<void***>(a2 + 0x148);
        fun_40295d(ecx, v91, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        v92 = *reinterpret_cast<void***>(a2 + 0x14c);
        fun_40295d(ecx, v92, v91, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6, a7);
        v93 = *reinterpret_cast<void***>(a2 + 0x150);
        fun_40295d(ecx, v93, v92, v91, esi10, ebp11, __return_address(), a2, a3, a4, a5, a6);
        v94 = *reinterpret_cast<void***>(a2 + 0x154);
        fun_40295d(ecx, v94, v93, v92, v91, esi10, ebp11, __return_address(), a2, a3, a4, a5);
        v95 = *reinterpret_cast<void***>(a2 + 0x158);
        fun_40295d(ecx, v95, v94, v93, v92, v91, esi10, ebp11, __return_address(), a2, a3, a4);
        v96 = *reinterpret_cast<void***>(a2 + 0x15c);
        fun_40295d(ecx, v96, v95, v94, v93, v92, v91, esi10, ebp11, __return_address(), a2, a3);
        v97 = *reinterpret_cast<void***>(a2 + 0x160);
        eax98 = fun_40295d(ecx, v97, v96, v95, v94, v93, v92, v91, esi10, ebp11, __return_address(), a2);
    }
    return eax98;
}

struct s46 {
    signed char[8] pad8;
    void** f8;
};

void** fun_4085ec(void** a1);

struct s47 {
    signed char[8] pad8;
    void** f8;
};

struct s48 {
    signed char[104] pad104;
    void*** f68;
};

struct s49 {
    signed char[8] pad8;
    void** f8;
};

void** fun_408a99(void** a1, void** a2);

struct s50 {
    signed char[8] pad8;
    void** f8;
};

struct s51 {
    signed char[104] pad104;
    void** f68;
};

struct s52 {
    signed char[112] pad112;
    unsigned char f70;
};

void** g419a4c;

void** g419a50;

void** g419a60;

void fun_408a63(void** ecx);

void fun_4088f1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** v15;
    void** eax16;
    int32_t ebp17;
    void** esi18;
    void** v19;
    struct s46* ebp20;
    void** eax21;
    void** ecx22;
    struct s47* ebp23;
    void** eax24;
    void** ebx25;
    int32_t ecx26;
    void*** esi27;
    int32_t ebp28;
    void** edi29;
    void** esi30;
    void** v31;
    struct s49* ebp32;
    void** eax33;
    struct s50* ebp34;
    void** eax35;
    struct s51* eax36;
    int32_t ebp37;
    int32_t ebp38;
    int32_t ebp39;
    int1_t zf40;
    int32_t ebp41;
    void** ecx42;
    int32_t ebp43;
    void** ecx44;
    int32_t ebp45;
    int32_t ebp46;
    void** eax47;
    int32_t ebp48;

    v15 = reinterpret_cast<void**>(__return_address());
    fun_404590(0x417858, 16, v15);
    eax16 = fun_4076ff(ecx, 0x417858, 16, v15, a2, a3, a4, a5);
    *reinterpret_cast<void***>(ebp17 - 32) = eax16;
    fun_40884b(ecx, 0x417858, 16, v15, a2, a3, a4, a5);
    esi18 = *reinterpret_cast<void***>(eax16 + 0x68);
    v19 = ebp20->f8;
    eax21 = fun_4085ec(v19);
    ecx22 = v19;
    ebp23->f8 = eax21;
    if (eax21 == *reinterpret_cast<void***>(esi18 + 4)) {
        goto addr_408a91_3;
    }
    eax24 = fun_408fa3(ecx22, 0x220, 0x417858, 16, v15, a2, a3, a4, a5, a6, a7, a8);
    ecx22 = reinterpret_cast<void**>(0x220);
    ebx25 = eax24;
    if (!ebx25) 
        goto addr_408a91_3;
    ecx26 = 0x88;
    esi27 = (*reinterpret_cast<struct s48**>(ebp28 - 32))->f68;
    edi29 = ebx25;
    while (ecx26) {
        --ecx26;
        *reinterpret_cast<void***>(edi29) = *esi27;
        edi29 = edi29 + 4;
        esi27 = esi27 + 4;
    }
    esi30 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ebx25) = reinterpret_cast<void**>(0);
    v31 = ebp32->f8;
    eax33 = fun_408a99(v31, ebx25);
    ecx22 = ebx25;
    ebp34->f8 = eax33;
    if (!eax33) 
        goto addr_408967_9;
    if (reinterpret_cast<int1_t>(eax33 == 0xffffffff)) {
        if (ebx25 != 0x418750) {
            fun_40295d(ecx22, ebx25, 0x417858, 16, v15, a2, a3, a4, a5, a6, a7, a8);
            ecx22 = ebx25;
        }
        eax35 = fun_404026(ecx22, 0x417858, 16, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax35) = reinterpret_cast<void**>(22);
        goto addr_408a91_3;
    }
    addr_408967_9:
    eax36 = *reinterpret_cast<struct s51**>(ebp37 - 32);
    ecx22 = eax36->f68;
    __asm__("lock xadd [ecx], edx");
    if (!1 && (ecx22 = eax36->f68, ecx22 != 0x418750)) {
        fun_40295d(ecx22, ecx22, 0x417858, 16, v15, a2, a3, a4, a5, a6, a7, a8);
        ecx22 = ecx22;
        eax36 = *reinterpret_cast<struct s51**>(ebp38 - 32);
    }
    eax36->f68 = ebx25;
    __asm__("lock xadd [ebx], eax");
    if ((*reinterpret_cast<struct s52**>(ebp39 - 32))->f70 & 2 || (zf40 = (*reinterpret_cast<unsigned char*>(&g418c98) & 1) == 0, !zf40)) {
        addr_408a91_3:
        fun_4045d5(ecx22, 0x417858, 16, v15, a2);
        goto 0x417858;
    } else {
        fun_409180(ecx22, 13, 0x417858, 16, v15, a2, a3, a4, a5, a6);
        *reinterpret_cast<void***>(ebp41 - 4) = reinterpret_cast<void**>(0);
        g419a4c = *reinterpret_cast<void***>(ebx25 + 4);
        g419a50 = *reinterpret_cast<void***>(ebx25 + 8);
        g419a60 = *reinterpret_cast<void***>(ebx25 + 0x21c);
        ecx42 = reinterpret_cast<void**>(0);
        while (*reinterpret_cast<void***>(ebp43 - 28) = ecx42, reinterpret_cast<signed char>(ecx42) < reinterpret_cast<signed char>(5)) {
            *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(ecx42) * 2 + 0x419a54) = *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ebx25 + reinterpret_cast<unsigned char>(ecx42) * 2) + 12);
            ++ecx42;
        }
        ecx44 = reinterpret_cast<void**>(0);
        while (*reinterpret_cast<void***>(ebp45 - 28) = ecx44, reinterpret_cast<signed char>(ecx44) < reinterpret_cast<signed char>(0x101)) {
            *reinterpret_cast<signed char*>(ecx44 + 0x418548) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx44) + reinterpret_cast<unsigned char>(ebx25) + 24);
            ++ecx44;
        }
        while (*reinterpret_cast<void***>(ebp46 - 28) = esi30, reinterpret_cast<signed char>(esi30) < reinterpret_cast<signed char>(0x100)) {
            *reinterpret_cast<signed char*>(esi30 + 0x418650) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi30) + reinterpret_cast<unsigned char>(ebx25) + 0x119);
            ++esi30;
        }
        ecx22 = reinterpret_cast<void**>(0xffffffff);
        __asm__("lock xadd [eax], ecx");
        if (1) 
            goto addr_408a45_25;
        eax47 = image_base_;
        if (eax47 != 0x418750) 
            goto addr_408a3e_27;
    }
    addr_408a45_25:
    image_base_ = ebx25;
    __asm__("lock xadd [ebx], eax");
    *reinterpret_cast<int32_t*>(ebp48 - 4) = -2;
    fun_408a63(ecx22);
    goto addr_408a91_3;
    addr_408a3e_27:
    fun_40295d(0xffffffff, eax47, 0x417858, 16, v15, a2, a3, a4, a5, a6, a7, a8);
    ecx22 = eax47;
    goto addr_408a45_25;
}

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0x90);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0x9c);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xa8);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xb4);

void** fun_4085b2(void** a1, void** a2, void** a3) {
    uint32_t eax4;
    void** eax5;
    uint32_t eax6;
    void** eax7;
    uint32_t eax8;
    void** eax9;
    void** eax10;

    eax4 = reinterpret_cast<uint32_t>(a1 - 0x3a4);
    if (!eax4) {
        eax5 = image_base_;
        return eax5;
    } else {
        eax6 = eax4 - 4;
        if (!eax6) {
            eax7 = image_base_;
            return eax7;
        } else {
            eax8 = eax6 - 13;
            if (!eax8) {
                eax9 = image_base_;
                return eax9;
            } else {
                if (!(eax8 - 1)) {
                    eax10 = image_base_;
                    return eax10;
                } else {
                    return 0;
                }
            }
        }
    }
}

struct s53 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s54 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void fun_40865a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** ebx7;
    void** esi8;
    void** edi9;
    void** esi10;
    void** ebx11;
    void** ebp12;
    int32_t ecx13;
    struct s53* edi14;
    struct s54* edi15;
    void** esi16;
    void* edi17;
    signed char* ecx18;
    int32_t edx19;

    ebx7 = a2;
    esi8 = ebx7 + 24;
    fun_407390(ecx, esi8, 0, 0x101, edi9, esi10, ebx11, ebp12, __return_address(), a2, a3, a4, a5, a6);
    *reinterpret_cast<void***>(ebx7 + 4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ebx7 + 8) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ebx7 + 0x21c) = reinterpret_cast<void**>(0);
    ecx13 = 0x101;
    edi14 = reinterpret_cast<struct s53*>(ebx7 + 12);
    edi14->f0 = reinterpret_cast<void**>(0);
    edi15 = reinterpret_cast<struct s54*>(&edi14->f4);
    edi15->f0 = reinterpret_cast<void**>(0);
    edi15->f4 = reinterpret_cast<void**>(0);
    esi16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi8 + 4) + 4 + 4);
    edi17 = reinterpret_cast<void*>(0x418750 - reinterpret_cast<unsigned char>(ebx7));
    do {
        *reinterpret_cast<void***>(esi16) = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi17) + reinterpret_cast<unsigned char>(esi16));
        ++esi16;
        --ecx13;
    } while (ecx13);
    ecx18 = reinterpret_cast<signed char*>(ebx7 + 0x119);
    edx19 = 0x100;
    do {
        *ecx18 = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx18) + reinterpret_cast<uint32_t>(edi17));
        ++ecx18;
        --edx19;
    } while (edx19);
    return;
}

int32_t GetCPInfo = 0x17ef8;

struct s55 {
    signed char[25] pad25;
    unsigned char f19;
};

void** fun_40b31c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, int32_t a7);

void** fun_40b1c0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, int32_t a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, int32_t a16, int24_t a17);

void** fun_4086b9(void** a1) {
    void* ebp2;
    void** eax3;
    uint32_t v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** esi9;
    void** v10;
    void** edi11;
    void** v12;
    void** v13;
    int32_t eax14;
    signed char* edx15;
    void* ecx16;
    void** eax17;
    void** v18;
    signed char* edx19;
    void** eax20;
    void** v21;
    struct s55* eax22;
    uint32_t eax23;
    void* eax24;
    unsigned char al25;
    unsigned char v26;
    void* edx27;
    unsigned char v28;
    void* eax29;
    unsigned char v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    int32_t v39;
    int24_t v40;
    void* ecx41;
    uint32_t eax42;
    signed char al43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g4183f0;
    v4 = reinterpret_cast<unsigned char>(eax3) ^ reinterpret_cast<uint32_t>(ebp2);
    v5 = ebx6;
    v7 = esi8;
    esi9 = a1;
    v10 = edi11;
    v12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp2) + 0xfffffae8);
    v13 = *reinterpret_cast<void***>(esi9 + 4);
    eax14 = reinterpret_cast<int32_t>(GetCPInfo());
    if (!eax14) {
        edx15 = reinterpret_cast<signed char*>(esi9 + 0x119);
        ecx16 = reinterpret_cast<void*>(0);
        eax17 = reinterpret_cast<void**>(0x9f - reinterpret_cast<uint32_t>(edx15));
        v18 = eax17;
        do {
            edx19 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx15) + reinterpret_cast<uint32_t>(ecx16));
            eax20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax17) + reinterpret_cast<uint32_t>(edx19));
            v21 = eax20;
            if (reinterpret_cast<unsigned char>(eax20 + 32) > reinterpret_cast<unsigned char>(25)) {
                if (reinterpret_cast<unsigned char>(v21) > reinterpret_cast<unsigned char>(25)) {
                    *edx19 = 0;
                    continue;
                } else {
                    eax22 = reinterpret_cast<struct s55*>(reinterpret_cast<unsigned char>(esi9) + reinterpret_cast<uint32_t>(ecx16));
                    eax22->f19 = reinterpret_cast<unsigned char>(eax22->f19 | 32);
                    eax23 = reinterpret_cast<uint32_t>(ecx16) + 0xffffffe0;
                }
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi9) + reinterpret_cast<uint32_t>(ecx16) + 25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi9) + reinterpret_cast<uint32_t>(ecx16) + 25) | 16);
                eax23 = reinterpret_cast<uint32_t>(ecx16) + 32;
            }
            *edx19 = *reinterpret_cast<signed char*>(&eax23);
            eax17 = v18;
            edx15 = reinterpret_cast<signed char*>(esi9 + 0x119);
            ecx16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx16) + 1);
        } while (reinterpret_cast<uint32_t>(ecx16) < 0x100);
    } else {
        eax24 = reinterpret_cast<void*>(0);
        do {
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp2) + reinterpret_cast<uint32_t>(eax24) + 0xfffffefc) = *reinterpret_cast<signed char*>(&eax24);
            eax24 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax24) + 1);
        } while (reinterpret_cast<uint32_t>(eax24) < 0x100);
        al25 = v26;
        while (al25) {
            edx27 = reinterpret_cast<void*>(static_cast<uint32_t>(v28));
            eax29 = reinterpret_cast<void*>(static_cast<uint32_t>(al25));
            while (reinterpret_cast<uint32_t>(eax29) <= reinterpret_cast<uint32_t>(edx27) && reinterpret_cast<uint32_t>(eax29) < 0x100) {
                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp2) + reinterpret_cast<uint32_t>(eax29) + 0xfffffefc) = 32;
                eax29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax29) + 1);
            }
            al25 = v30;
        }
        v31 = *reinterpret_cast<void***>(esi9 + 4);
        v32 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp2) + 0xfffffafc);
        v33 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp2) + 0xfffffefc);
        fun_40b31c(0, 1, v33, 0x100, v32, v31, 0);
        v34 = *reinterpret_cast<void***>(esi9 + 4);
        v35 = *reinterpret_cast<void***>(esi9 + 0x21c);
        fun_40b1c0(0, v35, 0x100, reinterpret_cast<uint32_t>(ebp2) + 0xfffffefc, 0x100, reinterpret_cast<uint32_t>(ebp2) + 0xfffffdfc, 0x100, v34, 0, 0, 1, v33, 0x100, v32, v31, 0, *reinterpret_cast<int24_t*>(&v13));
        v36 = *reinterpret_cast<void***>(esi9 + 4);
        v37 = *reinterpret_cast<void***>(esi9 + 0x21c);
        fun_40b1c0(0, v37, 0x200, reinterpret_cast<uint32_t>(ebp2) + 0xfffffefc, 0x100, reinterpret_cast<uint32_t>(ebp2) + 0xfffffcfc, 0x100, v36, 0, v13, v12, v10, v7, v5, v38, v39, v40);
        ecx41 = reinterpret_cast<void*>(0);
        do {
            eax42 = *reinterpret_cast<uint16_t*>(reinterpret_cast<uint32_t>(ebp2) + reinterpret_cast<uint32_t>(ecx41) * 2 - 0x504);
            if (!(*reinterpret_cast<unsigned char*>(&eax42) & 1)) {
                if (!(*reinterpret_cast<unsigned char*>(&eax42) & 2)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi9) + reinterpret_cast<uint32_t>(ecx41) + 0x119) = 0;
                    continue;
                } else {
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi9) + reinterpret_cast<uint32_t>(ecx41) + 25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi9) + reinterpret_cast<uint32_t>(ecx41) + 25) | 32);
                    al43 = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp2) + reinterpret_cast<uint32_t>(ecx41) + 0xfffffcfc);
                }
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi9) + reinterpret_cast<uint32_t>(ecx41) + 25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi9) + reinterpret_cast<uint32_t>(ecx41) + 25) | 16);
                al43 = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp2) + reinterpret_cast<uint32_t>(ecx41) + 0xfffffdfc);
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi9) + reinterpret_cast<uint32_t>(ecx41) + 0x119) = al43;
            ecx41 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx41) + 1);
        } while (reinterpret_cast<uint32_t>(ecx41) < 0x100);
    }
    eax47 = fun_404f47(v4 ^ reinterpret_cast<uint32_t>(ebp2), v7, v5, v18, v21, v44, v45, v46);
    return eax47;
}

void** fun_402d4b(void** ecx, void** a2, void** a3, void** a4, void** a5);

void** fun_40b224(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, int32_t a8);

struct s56 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_40b31c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, int32_t a7) {
    void* ebp8;
    void** ecx9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    signed char v14;
    struct s56* v15;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffffff0);
    fun_402d4b(ecx9, a1, v10, v11, v12);
    eax13 = fun_40b224(ecx9, reinterpret_cast<int32_t>(ebp8) + 0xfffffff0, a2, a3, a4, a5, a6, a7);
    if (v14) {
        v15->f70 = v15->f70 & 0xfffffffd;
    }
    return eax13;
}

void** fun_40afbc(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, int32_t a10);

struct s57 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_40b1c0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, int32_t a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, int32_t a16, int24_t a17) {
    void* ebp18;
    void** ecx19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    signed char v24;
    struct s57* v25;

    ebp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp18) + 0xfffffff0);
    fun_402d4b(ecx19, a1, v20, v21, v22);
    eax23 = fun_40afbc(ecx19, reinterpret_cast<int32_t>(ebp18) + 0xfffffff0, a2, a3, a4, a5, a6, a7, a8, a9);
    if (v24) {
        v25->f70 = v25->f70 & 0xfffffffd;
    }
    return eax23;
}

int32_t IsValidCodePage = 0x17ed0;

void** g419a64;

void** fun_408a99(void** a1, void** a2) {
    void* ebp3;
    void** eax4;
    uint32_t v5;
    void** v6;
    void** ebx7;
    void** v8;
    void** esi9;
    void** esi10;
    void** eax11;
    void** ebx12;
    void** v13;
    void** edi14;
    void** edi15;
    void** ecx16;
    void** eax17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    void** v28;
    void** eax29;
    void** ecx30;
    void* edx31;
    void* eax32;
    void** eax33;
    struct s53* ecx34;
    void*** edx35;
    int32_t edi36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** eax42;
    void** v43;
    void** v44;
    void** v45;
    int1_t zf46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    signed char v51;
    void* edx52;
    void* ecx53;
    unsigned char* eax54;
    int32_t ecx55;
    void** v56;
    void** eax57;
    struct s53* edi58;
    struct s54* edi59;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax4 = g4183f0;
    v5 = reinterpret_cast<unsigned char>(eax4) ^ reinterpret_cast<uint32_t>(ebp3);
    v6 = ebx7;
    v8 = esi9;
    esi10 = a2;
    eax11 = fun_4085ec(a1);
    ebx12 = eax11;
    if (ebx12) {
        v13 = edi14;
        edi15 = reinterpret_cast<void**>(0);
        ecx16 = reinterpret_cast<void**>(0);
        eax17 = reinterpret_cast<void**>(0);
        v18 = reinterpret_cast<void**>(0);
        do {
            if (*reinterpret_cast<void***>(eax17 + 0x418978) == ebx12) 
                break;
            ++ecx16;
            eax17 = eax17 + 48;
            v18 = ecx16;
        } while (reinterpret_cast<unsigned char>(eax17) < reinterpret_cast<unsigned char>(0xf0));
        goto addr_408aef_5;
    } else {
        fun_40865a(a1, esi10, v8, v6, v19, v20);
        goto addr_408c74_7;
    }
    fun_407390(ecx16, esi10 + 24, 0, 0x101, v13, v8, v6, v21, v18, v22, v23, v24, v25, v26);
    eax27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v18) * 48);
    v28 = eax27;
    eax29 = eax27 + 0x418988;
    v18 = eax29;
    do {
        ecx30 = eax29;
        if (*reinterpret_cast<void***>(eax29)) {
            do {
                if (!*reinterpret_cast<void***>(ecx30 + 1)) 
                    break;
                edx31 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx30))));
                eax32 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx30 + 1))));
                while (reinterpret_cast<uint32_t>(edx31) <= reinterpret_cast<uint32_t>(eax32) && reinterpret_cast<uint32_t>(edx31) < 0x100) {
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi10) + reinterpret_cast<uint32_t>(edx31) + 25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi10) + reinterpret_cast<uint32_t>(edx31) + 25) | *reinterpret_cast<unsigned char*>(edi15 + 0x418970));
                    edx31 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx31) + 1);
                    eax32 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx30 + 1))));
                }
                ecx30 = ecx30 + 2;
            } while (*reinterpret_cast<void***>(ecx30));
            eax29 = v18;
        }
        ++edi15;
        eax29 = eax29 + 8;
        v18 = eax29;
    } while (reinterpret_cast<unsigned char>(edi15) < reinterpret_cast<unsigned char>(4));
    *reinterpret_cast<void***>(esi10 + 4) = ebx12;
    *reinterpret_cast<void***>(esi10 + 8) = reinterpret_cast<void**>(1);
    eax33 = fun_4085b2(ebx12, v13, v8);
    *reinterpret_cast<void***>(esi10 + 0x21c) = eax33;
    ecx34 = reinterpret_cast<struct s53*>(esi10 + 12);
    edx35 = reinterpret_cast<void***>(v28 + 0x41897c);
    edi36 = 6;
    do {
        edx35 = edx35 + 2;
        ecx34->f0 = *edx35;
        ecx34 = reinterpret_cast<struct s53*>(reinterpret_cast<uint32_t>(ecx34) + 2);
        --edi36;
    } while (edi36);
    addr_408c6a_19:
    fun_4086b9(esi10);
    addr_408c70_20:
    addr_408c73_21:
    addr_408c74_7:
    eax42 = fun_404f47(v5 ^ reinterpret_cast<uint32_t>(ebp3), v28, v18, v37, v38, v39, v40, v41);
    return eax42;
    addr_408aef_5:
    if (ebx12 == 0xfde8) 
        goto addr_408bc1_22;
    if (ebx12 == 0xfde9) 
        goto addr_408bc1_22;
    v43 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ebx12)));
    eax17 = reinterpret_cast<void**>(IsValidCodePage());
    if (!eax17) 
        goto addr_408bc1_22;
    v44 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp3) + 0xffffffe8);
    v45 = ebx12;
    eax17 = reinterpret_cast<void**>(GetCPInfo(v45, v44));
    if (!eax17) {
        zf46 = g419a64 == 0;
        if (zf46) {
            addr_408bc1_22:
            goto addr_408c73_21;
        } else {
            fun_40865a(ecx16, esi10, v45, v44, v43, v13);
            goto addr_408c70_20;
        }
    } else {
        fun_407390(ecx16, esi10 + 24, 0, 0x101, v45, v44, v43, v13, v8, v6, v47, v18, v48, v49);
        *reinterpret_cast<void***>(esi10 + 4) = ebx12;
        *reinterpret_cast<void***>(esi10 + 0x21c) = reinterpret_cast<void**>(0);
        if (reinterpret_cast<unsigned char>(v50) <= reinterpret_cast<unsigned char>(1)) {
            *reinterpret_cast<void***>(esi10 + 8) = reinterpret_cast<void**>(0);
        } else {
            if (v51) {
                do {
                    if (!*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v5) + 1)) 
                        break;
                    edx52 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v5) + 1)));
                    ecx53 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v5)));
                    while (reinterpret_cast<uint32_t>(ecx53) <= reinterpret_cast<uint32_t>(edx52)) {
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi10) + reinterpret_cast<uint32_t>(ecx53) + 25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(esi10) + reinterpret_cast<uint32_t>(ecx53) + 25) | 4);
                        ecx53 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx53) + 1);
                    }
                } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v5) + 2));
            }
            eax54 = reinterpret_cast<unsigned char*>(esi10 + 26);
            ecx55 = 0xfe;
            do {
                *eax54 = reinterpret_cast<unsigned char>(*eax54 | 8);
                ++eax54;
                --ecx55;
            } while (ecx55);
            v56 = *reinterpret_cast<void***>(esi10 + 4);
            eax57 = fun_4085b2(v56, v45, v44);
            *reinterpret_cast<void***>(esi10 + 0x21c) = eax57;
            *reinterpret_cast<void***>(esi10 + 8) = reinterpret_cast<void**>(1);
        }
        edi58 = reinterpret_cast<struct s53*>(esi10 + 12);
        edi58->f0 = reinterpret_cast<void**>(0);
        edi59 = reinterpret_cast<struct s54*>(&edi58->f4);
        edi59->f0 = reinterpret_cast<void**>(0);
        edi59->f4 = reinterpret_cast<void**>(0);
        esi10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi10 + 4) + 4 + 4);
        goto addr_408c6a_19;
    }
}

struct s58 {
    signed char[4] pad4;
    void** f4;
};

struct s59 {
    signed char[144] pad144;
    uint16_t* f90;
};

struct s60 {
    signed char[112] pad112;
    uint32_t f70;
};

struct s61 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_40b35c(void** a1, uint32_t a2, void** a3) {
    void* ebp4;
    void** ebx5;
    void** v6;
    void** v7;
    void** ecx8;
    int32_t eax9;
    void** eax10;
    void** ecx11;
    void** v12;
    struct s58* v13;
    void** eax14;
    uint32_t eax15;
    struct s59* v16;
    uint16_t v17;
    void** eax18;
    signed char v19;
    struct s60* v20;
    signed char v21;
    struct s61* v22;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_402d4b(reinterpret_cast<int32_t>(ebp4) + 0xffffffe8, a3, ebx5, v6, v7);
    if (reinterpret_cast<unsigned char>(a1 + 1) > reinterpret_cast<unsigned char>(0x100)) {
        ecx8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xffffffe8);
        eax9 = reinterpret_cast<signed char>(a1) >> 8;
        eax10 = fun_408e03(ecx8, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax9)), ecx8);
        if (!eax10) {
            ecx11 = reinterpret_cast<void**>(1);
        } else {
            ecx11 = reinterpret_cast<void**>(2);
        }
        v12 = v13->f4;
        eax14 = fun_40b31c(reinterpret_cast<int32_t>(ebp4) + 0xffffffe8, 1, reinterpret_cast<int32_t>(ebp4) + 0xfffffff8, ecx11, reinterpret_cast<int32_t>(ebp4) + 0xfffffffc, v12, 1);
        if (!eax14) 
            goto addr_40b3e4_6;
    } else {
        eax15 = v16->f90[reinterpret_cast<unsigned char>(a1)];
        goto addr_40b3f8_8;
    }
    eax15 = v17;
    addr_40b3f8_8:
    eax18 = reinterpret_cast<void**>(eax15 & a2);
    if (v19) {
        v20->f70 = v20->f70 & 0xfffffffd;
    }
    addr_40b408_11:
    return eax18;
    addr_40b3e4_6:
    if (v21 != *reinterpret_cast<signed char*>(&eax14)) {
        v22->f70 = v22->f70 & 0xfffffffd;
    }
    eax18 = reinterpret_cast<void**>(0);
    goto addr_40b408_11;
}

struct s62 {
    signed char[116] pad116;
    int32_t f74;
    signed char[24] pad144;
    uint16_t* f90;
};

struct s63 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_408cd6(void** a1, void** a2) {
    void* ebp3;
    void** v4;
    void** v5;
    void** v6;
    struct s62* v7;
    void** ecx8;
    void** eax9;
    signed char v10;
    struct s63* v11;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_402d4b(reinterpret_cast<int32_t>(ebp3) + 0xfffffff0, a2, v4, v5, v6);
    if (v7->f74 <= 1) {
        ecx8 = reinterpret_cast<void**>(static_cast<uint32_t>(v7->f90[reinterpret_cast<unsigned char>(a1)]) & 8);
    } else {
        eax9 = fun_40b35c(a1, 8, reinterpret_cast<int32_t>(ebp3) + 0xfffffff0);
        ecx8 = eax9;
    }
    if (v10) {
        v11->f70 = v11->f70 & 0xfffffffd;
    }
    return ecx8;
}

struct s64 {
    signed char[116] pad116;
    int32_t f74;
    signed char[24] pad144;
    uint16_t* f90;
};

struct s65 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_408d28(void** a1, void** a2) {
    void* ebp3;
    void** v4;
    void** v5;
    void** v6;
    struct s64* v7;
    void** ecx8;
    void** eax9;
    signed char v10;
    struct s65* v11;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_402d4b(reinterpret_cast<int32_t>(ebp3) + 0xfffffff0, a2, v4, v5, v6);
    if (v7->f74 <= 1) {
        ecx8 = reinterpret_cast<void**>(static_cast<uint32_t>(v7->f90[reinterpret_cast<unsigned char>(a1)]) & 0x80);
    } else {
        eax9 = fun_40b35c(a1, 0x80, reinterpret_cast<int32_t>(ebp3) + 0xfffffff0);
        ecx8 = eax9;
    }
    if (v10) {
        v11->f70 = v11->f70 & 0xfffffffd;
    }
    return ecx8;
}

int32_t Sleep = 0x17e5a;

void fun_408119(void** ecx, void** a2) {
    int32_t ebp3;

    Sleep();
    goto ebp3;
}

void** fun_40b45f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void** fun_408fea(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** ebp11;
    void** v12;
    void** esi13;
    void** v14;
    void** edi15;
    void** esi16;
    void** eax17;
    int1_t below_or_equal18;
    void** v19;
    int1_t below_or_equal20;

    v9 = reinterpret_cast<void**>(__return_address());
    v10 = ebp11;
    v12 = esi13;
    v14 = edi15;
    esi16 = reinterpret_cast<void**>(0);
    do {
        eax17 = fun_40b45f(ecx, a2, a3, v14, v12, v10, v9, a2, a3, a4, a5, a6, a7);
        if (eax17) 
            break;
        if (a3 == eax17) 
            break;
        below_or_equal18 = reinterpret_cast<unsigned char>(g419a68) <= reinterpret_cast<unsigned char>(eax17);
        if (below_or_equal18) 
            break;
        v19 = esi16;
        fun_408119(a3, v19);
        esi16 = esi16 + 0x3e8;
        ecx = v19;
        below_or_equal20 = reinterpret_cast<unsigned char>(esi16) <= reinterpret_cast<unsigned char>(g419a68);
        if (!below_or_equal20) {
            esi16 = reinterpret_cast<void**>(0xffffffff);
        }
    } while (!reinterpret_cast<int1_t>(esi16 == 0xffffffff));
    return eax17;
}

void** fun_40b50a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void** fun_409034(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void** v9;
    void** esi10;
    void** v11;
    void** edi12;
    void** esi13;
    void** ecx14;
    void** eax15;
    int1_t below_or_equal16;
    void** v17;
    int1_t below_or_equal18;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebp8;
    v9 = esi10;
    v11 = edi12;
    esi13 = reinterpret_cast<void**>(0);
    do {
        eax15 = fun_40b50a(ecx14, a1, a2, a3, v11, v9, v7, v6, a1, a2, a3, a4, a5);
        if (eax15) 
            break;
        if (a3 == eax15) 
            break;
        below_or_equal16 = reinterpret_cast<unsigned char>(g419a68) <= reinterpret_cast<unsigned char>(eax15);
        if (below_or_equal16) 
            break;
        v17 = esi13;
        fun_408119(ecx14, v17);
        esi13 = esi13 + 0x3e8;
        ecx14 = v17;
        below_or_equal18 = reinterpret_cast<unsigned char>(esi13) <= reinterpret_cast<unsigned char>(g419a68);
        if (!below_or_equal18) {
            esi13 = reinterpret_cast<void**>(0xffffffff);
        }
    } while (!reinterpret_cast<int1_t>(esi13 == 0xffffffff));
    return eax15;
}

void** fun_406c0b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

void** fun_40b67e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_4093c8(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** ebp10;
    void** eax11;
    void** eax12;
    void** esi13;
    void** eax14;

    v9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffffc);
    eax11 = fun_406c0b(ecx, a4, v9, 0, ebp10, __return_address(), a2, a3, a4, a5, a6, a7);
    if (eax11) {
        eax12 = fun_40b67e(v9, a2, a3, 0, a5, a6, a7, a8);
        fun_40295d(v9, 0, a2, a3, 0, a5, a6, a7, a8, esi13, 0, ebp10);
        eax14 = eax12;
    } else {
        eax14 = reinterpret_cast<void**>(0xffffffff);
    }
    return eax14;
}

void fun_409d6d(int32_t a1);

void fun_40939c() {
    int32_t ebp1;
    int32_t edi2;
    uint32_t ecx3;
    uint32_t* esi4;
    int32_t v5;
    int32_t* esi6;

    if (*reinterpret_cast<int32_t*>(ebp1 - 32)) {
        if (edi2) {
            ecx3 = (*esi4 & 31) << 6;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(*esi4) >> 5) * 4 + 0x4191d0)) + ecx3 + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(*esi4) >> 5) * 4 + 0x4191d0)) + ecx3 + 4) & 0xfe);
        }
        v5 = *esi6;
        fun_409d6d(v5);
    }
    return;
}

uint32_t fun_40bde0(void** ecx, void** a2, void** a3, void** a4) {
    void** edx5;
    void** ebx6;
    void* ecx7;
    void** eax8;
    int1_t below_or_equal9;
    int1_t below_or_equal10;

    edx5 = a3;
    ebx6 = a4;
    if (!(reinterpret_cast<unsigned char>(ebx6) & 0xffffffff)) {
        addr_40be47_2:
        return 0;
    } else {
        ecx7 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(edx5));
        if (reinterpret_cast<unsigned char>(edx5) & 3) 
            goto addr_40be00_4;
        while (1) {
            if ((reinterpret_cast<unsigned char>(edx5) + reinterpret_cast<uint32_t>(ecx7) & 0xfff) > 0xffc || *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx5) + reinterpret_cast<uint32_t>(ecx7)) != *reinterpret_cast<void***>(edx5)) {
                do {
                    addr_40be00_4:
                    eax8 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx5) + reinterpret_cast<uint32_t>(ecx7))));
                    if (eax8 != *reinterpret_cast<void***>(edx5)) 
                        goto addr_40be50_6;
                    if (!eax8) {
                        ebx6 = eax8;
                    }
                    ++edx5;
                    below_or_equal9 = reinterpret_cast<unsigned char>(ebx6) <= reinterpret_cast<unsigned char>(1);
                    --ebx6;
                    if (below_or_equal9) 
                        goto addr_40be47_2;
                } while (*reinterpret_cast<unsigned char*>(&edx5) & 3);
            } else {
                below_or_equal10 = reinterpret_cast<unsigned char>(ebx6) <= reinterpret_cast<unsigned char>(4);
                ebx6 = ebx6 - 4;
                if (below_or_equal10) 
                    goto addr_40be47_2;
                edx5 = edx5 + 4;
                if (~reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx5) + reinterpret_cast<uint32_t>(ecx7))) & reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx5) + reinterpret_cast<uint32_t>(ecx7)) + 0xfefefeff) & 0x80808080) 
                    goto addr_40be47_2;
            }
        }
    }
    addr_40be50_6:
    return reinterpret_cast<unsigned char>(eax8) - (reinterpret_cast<unsigned char>(eax8) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax8) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax8) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax8) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx5)))))) | 1;
}

void** fun_40bec3(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** fun_40be58(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int1_t zf15;
    void** esi16;
    void** ebp17;
    void** eax18;
    void** eax19;
    void** ecx20;
    void** esi21;
    void** edi22;
    void** ecx23;
    void** ah24;
    void** al25;
    int1_t cf26;
    void** eax27;

    zf15 = g419f34 == 0;
    if (!zf15) {
        eax18 = fun_40bec3(a2, a3, a4, 0, esi16, ebp17, __return_address());
    } else {
        if (!a2 || !a3) {
            eax19 = fun_404026(ecx, esi16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
            *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(22);
            fun_402c77(ecx);
            eax18 = reinterpret_cast<void**>(0x7fffffff);
        } else {
            if (reinterpret_cast<unsigned char>(a4) <= reinterpret_cast<unsigned char>(0x7fffffff)) {
                ecx20 = a4;
                if (!ecx20) 
                    goto addr_40c48a_8;
                esi21 = a2;
                edi22 = a3;
                ecx23 = ecx20;
                do {
                    ah24 = *reinterpret_cast<void***>(esi21);
                    al25 = *reinterpret_cast<void***>(edi22);
                    if (!ah24) 
                        break;
                    if (!al25) 
                        break;
                    ++esi21;
                    ++edi22;
                    if (reinterpret_cast<unsigned char>(ah24) >= 65 && reinterpret_cast<unsigned char>(ah24) <= 90) {
                        ah24 = ah24 + 32;
                    }
                    if (reinterpret_cast<unsigned char>(al25) >= 65 && reinterpret_cast<unsigned char>(al25) <= 90) {
                        al25 = al25 + 32;
                    }
                    cf26 = reinterpret_cast<unsigned char>(ah24) < reinterpret_cast<unsigned char>(al25);
                    if (ah24 != al25) 
                        goto addr_40c481_17;
                    --ecx23;
                } while (ecx23);
                ecx20 = reinterpret_cast<void**>(0);
                cf26 = reinterpret_cast<unsigned char>(ah24) < reinterpret_cast<unsigned char>(al25);
                if (ah24 == al25) {
                    addr_40c48a_8:
                    return ecx20;
                } else {
                    addr_40c481_17:
                    ecx20 = reinterpret_cast<void**>(0xffffffff);
                    if (!cf26) {
                        ecx20 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(0xffffffff));
                        goto addr_40c48a_8;
                    }
                }
            } else {
                eax27 = fun_404026(ecx, esi16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
                *reinterpret_cast<void***>(eax27) = reinterpret_cast<void**>(22);
                fun_402c77(ecx);
                eax18 = reinterpret_cast<void**>(0x7fffffff);
            }
        }
    }
    return eax18;
}

struct s66 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
};

struct s27* fun_409740(struct s28* a1, uint32_t a2) {
    uint32_t edx3;
    struct s66* ecx4;
    uint32_t ebx5;
    struct s27* eax6;
    uint32_t edi7;

    edx3 = 0;
    ecx4 = reinterpret_cast<struct s66*>(a1->f3c + reinterpret_cast<int32_t>(a1));
    ebx5 = ecx4->f6;
    eax6 = reinterpret_cast<struct s27*>(ecx4->f14 + 24 + reinterpret_cast<int32_t>(ecx4));
    if (!ebx5) {
        addr_40977c_2:
        eax6 = reinterpret_cast<struct s27*>(0);
    } else {
        edi7 = a2;
        do {
            if (edi7 < eax6->fc) 
                continue;
            if (edi7 < eax6->f8 + eax6->fc) 
                break;
            ++edx3;
            ++eax6;
        } while (edx3 < ebx5);
        goto addr_40977c_2;
    }
    return eax6;
}

int32_t fun_4098b0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void fun_4098f5(void** a1, void** a2) {
    void** v3;
    void** edi4;
    void** v5;
    void** ebp6;
    void** v7;
    void*** esp8;
    void** v9;
    void** eax10;
    void** v11;
    void** ebx12;
    void*** esi13;
    void** ecx14;

    v3 = edi4;
    v5 = ebp6;
    v7 = a1;
    esp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4);
    v9 = g0;
    eax10 = g4183f0;
    v11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax10) ^ reinterpret_cast<uint32_t>(esp8));
    g0 = reinterpret_cast<void**>(esp8 - 4 + 4);
    while ((ebx12 = *reinterpret_cast<void***>(a1 + 8), *reinterpret_cast<void***>(a1 + 12) != 0xffffffff) && (a2 == 0xffffffff || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) > reinterpret_cast<unsigned char>(a2))) {
        esi13 = reinterpret_cast<void***>(*reinterpret_cast<void***>(a1 + 12) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) * 2);
        ecx14 = *reinterpret_cast<void***>(ebx12 + reinterpret_cast<uint32_t>(esi13) * 4);
        *reinterpret_cast<void***>(a1 + 12) = ecx14;
        if (!*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx12 + reinterpret_cast<uint32_t>(esi13) * 4) + 4)) {
            fun_4099a5(ecx14, 0x101, v11, v9, fun_4098b0, ecx14, v7, v5, v3);
            fun_4099c4(ecx14, v11, v9, fun_4098b0, ecx14, v7, v5, v3);
        }
    }
    g0 = v9;
    return;
}

void fun_409bf5(void** ecx) {
    fun_4092ea(ecx, 11);
    return;
}

int32_t g419ee4;

void** fun_409e7c(void** ecx, void** a2, int32_t a3) {
    int32_t eax4;
    int1_t zf5;
    void** ebp6;
    void** eax7;

    eax4 = reinterpret_cast<int32_t>(IsDebuggerPresent());
    g419ee4 = eax4;
    fun_408152(ecx);
    fun_40813c(a2);
    zf5 = g419ee4 == 0;
    if (zf5) {
        fun_408152(1);
    }
    eax7 = fun_408127(1, 0xc0000409, ebp6, __return_address(), a2);
    return eax7;
}

int32_t CreateFileW = 0x17f80;

void fun_40bf8b(void** a1) {
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(CreateFileW());
    g418e70 = eax2;
    goto "C";
}

int32_t HeapSize = 0x17f8e;

void** fun_40bfaa(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** ebp16;
    void** eax17;

    if (a2) {
        HeapSize();
        goto 0;
    } else {
        eax17 = fun_404026(ecx, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        *reinterpret_cast<void***>(eax17) = reinterpret_cast<void**>(22);
        fun_402c77(ecx);
        return 0xffffffff;
    }
}

struct s67 {
    signed char[144] pad144;
    uint16_t* f90;
};

struct s68 {
    signed char[112] pad112;
    uint32_t f70;
};

uint32_t fun_40aa14(void** a1, uint32_t a2, uint32_t a3, unsigned char a4) {
    void** esi5;
    void** v6;
    void** v7;
    uint32_t eax8;
    uint32_t esi9;
    void* v10;
    uint32_t edx11;
    uint32_t eax12;
    struct s67* v13;
    signed char v14;
    struct s68* v15;

    fun_402d4b(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff0, a1, esi5, v6, v7);
    eax8 = a2;
    esi9 = *reinterpret_cast<unsigned char*>(&eax8);
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v10) + esi9 + 25) & a4) {
        addr_40aa57_2:
        edx11 = 1;
    } else {
        edx11 = 0;
        if (!a3) {
            eax12 = 0;
        } else {
            eax12 = static_cast<uint32_t>(v13->f90[esi9]) & a3;
        }
        if (eax12) 
            goto addr_40aa57_2;
    }
    if (v14) {
        v15->f70 = v15->f70 & 0xfffffffd;
    }
    return edx11;
}

void fun_40c150(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void** fun_40c096(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19);

void** fun_40b206(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

void** fun_40afbc(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, int32_t a10) {
    void** v11;
    void*** esp12;
    void** v13;
    void** ebp14;
    void*** ebp15;
    void** eax16;
    void** v17;
    void** v18;
    void** ebx19;
    void** v20;
    void** esi21;
    void** esi22;
    void*** esp23;
    void** v24;
    void** edi25;
    void** ecx26;
    void** eax27;
    void** ecx28;
    int32_t eax29;
    void** v30;
    void** v31;
    void** eax32;
    void** esp33;
    void** ecx34;
    void** v35;
    uint1_t zf36;
    void** ebx37;
    void** ecx38;
    void** eax39;
    void** eax40;
    void** v41;
    void** v42;
    int32_t eax43;
    void** eax44;
    void** eax45;
    void** esi46;
    void** eax47;
    void** eax48;
    void** esi49;
    void** eax50;
    void** v51;
    void** v52;
    void** eax53;
    int1_t less54;

    v11 = reinterpret_cast<void**>(__return_address());
    esp12 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v13 = ebp14;
    ebp15 = esp12;
    eax16 = g4183f0;
    v17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax16) ^ reinterpret_cast<uint32_t>(ebp15));
    v18 = ebx19;
    v20 = esi21;
    esi22 = a6;
    esp23 = esp12 - 4 - 4 - 4 - 4 - 4;
    v24 = edi25;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi22 == 0)) {
        addr_40aff6_2:
        ecx26 = a9;
        if (!ecx26) {
            ecx26 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 4);
            a9 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 4);
        }
    } else {
        eax27 = a5;
        ecx28 = esi22;
        do {
            --ecx28;
            if (!*reinterpret_cast<void***>(eax27)) 
                goto addr_40afe8_6;
            ++eax27;
        } while (ecx28);
        goto addr_40afe5_8;
    }
    eax29 = 0;
    *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<uint1_t>(!!a10);
    v30 = reinterpret_cast<void**>(eax29 * 8 + 1);
    v31 = ecx26;
    eax32 = reinterpret_cast<void**>(MultiByteToWideChar(v31, v30, a5, esi22, 0, 0));
    esp33 = reinterpret_cast<void**>(esp23 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    ecx34 = eax32;
    v35 = ecx34;
    zf36 = reinterpret_cast<uint1_t>(ecx34 == 0);
    if (zf36) 
        goto addr_40b034_10;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx34) < reinterpret_cast<signed char>(0)) | zf36 || (esp33 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp33 - 4) + 4), 0xe0 / reinterpret_cast<unsigned char>(ecx34) < 2)) {
        addr_40b094_12:
        ebx37 = reinterpret_cast<void**>(0);
    } else {
        ecx38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx34) + reinterpret_cast<unsigned char>(ecx34));
        if (reinterpret_cast<unsigned char>(ecx38 + 8) <= reinterpret_cast<unsigned char>(ecx38)) {
            ecx34 = v35;
            goto addr_40b094_12;
        } else {
            eax39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v35) * 2 + 8);
            if (reinterpret_cast<unsigned char>(eax39) > reinterpret_cast<unsigned char>(0x400)) {
                eax40 = fun_40265a(ecx38, eax39, v31, v30, a5, esi22, 0, 0, v24, v20, v18, v35, v17, v13);
                ebx37 = eax40;
                esp33 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp33 - 4) - 4 + 4 + 4);
                if (!ebx37) {
                    addr_40b08c_17:
                    ecx34 = v35;
                } else {
                    *reinterpret_cast<void***>(ebx37) = reinterpret_cast<void**>(0xdddd);
                    goto addr_40b089_19;
                }
            } else {
                fun_40c150(ecx38, v31, v30, a5, esi22, 0, 0, v24, v20, v18, v35, v17, v13);
                esp33 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp33 - 4) + 4);
                ebx37 = esp33;
                if (!ebx37) 
                    goto addr_40b08c_17;
                v31 = reinterpret_cast<void**>(0xcccc);
                goto addr_40b089_19;
            }
        }
    }
    if (!ebx37) {
        addr_40b034_10:
    } else {
        v41 = ecx34;
        v42 = a9;
        eax43 = reinterpret_cast<int32_t>(MultiByteToWideChar(v42, 1, a5, esi22, ebx37, v41, v31, v30, a5, esi22, 0, 0));
        if (!eax43) 
            goto addr_40b1a3_24;
        eax44 = fun_40c096(ecx34, a3, a4, ebx37, v35, 0, 0, v42, 1, a5, esi22, ebx37, v41, v31, v30, a5, esi22, 0, 0);
        if (!eax44) 
            goto addr_40b1a3_24;
        if (!(reinterpret_cast<unsigned char>(a4) & 0x400)) 
            goto addr_40b109_27; else 
            goto addr_40b0dd_28;
    }
    addr_40b1ac_29:
    eax45 = fun_404f47(reinterpret_cast<unsigned char>(v17) ^ reinterpret_cast<uint32_t>(ebp15), v35, v17, v13, v11, a2, a3, a4);
    return eax45;
    addr_40b109_27:
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax44) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax44 == 0) || (0xe0 / reinterpret_cast<unsigned char>(eax44) < 2 || (ecx34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax44) + reinterpret_cast<unsigned char>(eax44)), reinterpret_cast<unsigned char>(ecx34 + 8) <= reinterpret_cast<unsigned char>(ecx34)))) {
        esi46 = reinterpret_cast<void**>(0);
    } else {
        eax47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax44) * 2 + 8);
        if (reinterpret_cast<unsigned char>(eax47) > reinterpret_cast<unsigned char>(0x400)) {
            eax48 = fun_40265a(ecx34, eax47, v42, 1, a5, esi22, ebx37, v41, v31, v30, a5, esi22, 0, 0);
            esi49 = eax48;
            ecx34 = eax47;
            if (!esi49) {
                addr_40b1a3_24:
                fun_40b206(ecx34, ebx37, v42, 1, a5, esi22, ebx37, v41, v31, v30, a5, esi22, 0, 0);
                goto addr_40b1ac_29;
            } else {
                *reinterpret_cast<void***>(esi49) = reinterpret_cast<void**>(0xdddd);
                goto addr_40b157_34;
            }
        } else {
            fun_40c150(ecx34, v42, 1, a5, esi22, ebx37, v41, v31, v30, a5, esi22, 0, 0);
            esi49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(esp33 - 4) - 4 - 4 - 4 - 4 - 4 - 4 + 4) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 24) - 4 + 4) - 4 + 4);
            if (!esi49) 
                goto addr_40b1a3_24;
            v42 = reinterpret_cast<void**>(0xcccc);
            goto addr_40b157_34;
        }
    }
    addr_40b15e_37:
    if (esi46) {
        eax50 = fun_40c096(ecx34, a3, a4, ebx37, v35, esi46, eax44, v42, 1, a5, esi22, ebx37, v41, v31, v30, a5, esi22, 0, 0);
        if (eax50) {
            if (a8) {
                v51 = a8;
                v52 = a7;
            } else {
                v51 = reinterpret_cast<void**>(0);
                v52 = reinterpret_cast<void**>(0);
            }
            WideCharToMultiByte(ecx34, a9, 0, esi46, eax44, v52, v51, 0, 0, v42, 1, a5, esi22, ebx37, v41, v31, v30, a5, esi22, 0, 0);
        }
        fun_40b206(ecx34, esi46, v42, 1, a5, esi22, ebx37, v41, v31, v30, a5, esi22, 0, 0);
        ecx34 = esi46;
        goto addr_40b1a3_24;
    }
    addr_40b157_34:
    esi46 = esi49 + 8;
    goto addr_40b15e_37;
    addr_40b0dd_28:
    ecx34 = a8;
    if (ecx34 && reinterpret_cast<signed char>(eax44) <= reinterpret_cast<signed char>(ecx34)) {
        fun_40c096(ecx34, a3, a4, ebx37, v35, a7, ecx34, v42, 1, a5, esi22, ebx37, v41, v31, v30, a5, esi22, 0, 0);
        goto addr_40b1a3_24;
    }
    addr_40b089_19:
    ebx37 = ebx37 + 8;
    goto addr_40b08c_17;
    addr_40afe8_6:
    eax53 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi22) - reinterpret_cast<unsigned char>(ecx28) - 1);
    less54 = reinterpret_cast<signed char>(eax53) < reinterpret_cast<signed char>(esi22);
    esi22 = eax53 + 1;
    if (!less54) {
        esi22 = eax53;
        goto addr_40aff6_2;
    }
    addr_40afe5_8:
    ecx28 = reinterpret_cast<void**>(0xffffffff);
    goto addr_40afe8_6;
}

void fun_40c150(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    int32_t v14;
    void* esp15;
    uint32_t ecx16;
    int32_t eax17;
    uint32_t tmp32_18;
    int32_t eax19;
    void* eax20;
    uint32_t eax21;
    void* esp22;
    void* ecx23;
    int32_t* ecx24;
    int32_t* eax25;

    v14 = reinterpret_cast<int32_t>(__return_address());
    esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx16 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esp15) + 8 - eax17) & 15;
    tmp32_18 = eax19 + ecx16;
    eax20 = reinterpret_cast<void*>(tmp32_18 | ecx16 - (ecx16 + reinterpret_cast<uint1_t>(ecx16 < ecx16 + reinterpret_cast<uint1_t>(tmp32_18 < eax21))));
    esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) + 4 - 4);
    ecx23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp22) + 4);
    ecx24 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx23) - reinterpret_cast<uint32_t>(eax20) & ~(reinterpret_cast<uint32_t>(eax20) - (reinterpret_cast<uint32_t>(eax20) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax20) < reinterpret_cast<uint32_t>(eax20) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(ecx23) < reinterpret_cast<uint32_t>(eax20))))));
    eax25 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp22) & 0xfffff000);
    while (reinterpret_cast<uint32_t>(ecx24) < reinterpret_cast<uint32_t>(eax25)) {
        eax25 = eax25 - 0x400;
    }
    *ecx24 = v14;
    goto *ecx24;
}

uint32_t g419fd0;

int32_t fun_40c06c(void** ecx, void** a2);

int32_t LCMapStringW = 0x17f9a;

void** fun_40c096(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19) {
    uint32_t eax20;
    uint32_t eax21;

    eax20 = g419fd0;
    eax21 = eax20 ^ reinterpret_cast<unsigned char>(g4183f0);
    if (!eax21) {
        fun_40c06c(ecx, a2);
        LCMapStringW(a2);
        goto a3;
    } else {
        eax21();
        goto a3;
    }
}

void** fun_40b206(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** eax15;
    void** ebp16;

    eax15 = a2;
    if (eax15 && (eax15 = eax15 - 8, reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax15) == 0xdddd))) {
        eax15 = fun_40295d(ecx, eax15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    }
    return eax15;
}

void** fun_408549(int32_t ecx, void*** a2, void** a3) {
    void** eax4;
    void** esi5;
    void** esi6;
    void** edi7;
    void** ebp8;

    if (!a3 || !a2) {
        eax4 = reinterpret_cast<void**>(0);
    } else {
        esi5 = *a2;
        if (esi5 != a3 && ((*a2 = a3, fun_40823a(ecx, a3), !!esi5) && ((fun_408429(a3, esi5), !*reinterpret_cast<void***>(esi5)) && esi5 != 0x418be0))) {
            fun_4082cf(esi5, esi5, esi6, edi7, ebp8, __return_address());
        }
        eax4 = a3;
    }
    return eax4;
}

void fun_40b456(void** ecx) {
    fun_4092ea(ecx, 12);
    return;
}

int32_t HeapReAlloc = 0x17f72;

void** fun_40b45f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** ebp16;
    void** eax17;
    void** v18;
    void** esi19;
    void** esi20;
    void** v21;
    void** ebx22;
    void** v23;
    void** eax24;
    int1_t zf25;
    int32_t eax26;
    void** eax27;
    void** eax28;
    void** eax29;
    void** eax30;
    void** eax31;
    void** eax32;
    void** eax33;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = ebp16;
    if (!a2) {
        eax17 = fun_40265a(ecx, a3, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        return eax17;
    }
    v18 = esi19;
    esi20 = a3;
    if (esi20) {
        v21 = ebx22;
        do {
            if (reinterpret_cast<unsigned char>(esi20) > reinterpret_cast<unsigned char>(0xffffffe0)) 
                break;
            if (!esi20) {
                ++esi20;
            }
            v23 = g41993c;
            eax24 = reinterpret_cast<void**>(HeapReAlloc(ecx, v23, 0, a2, esi20));
            if (eax24) 
                goto addr_40b506_9;
            zf25 = g419938 == eax24;
            if (zf25) 
                goto addr_40b4f0_11;
            eax26 = fun_406bd8(ecx, esi20, v23, 0, a2, esi20, v21);
            ecx = esi20;
        } while (eax26);
        goto addr_40b4d8_13;
    } else {
        fun_40295d(ecx, a2, v18, v15, v14, a2, a3, a4, a5, a6, a7, a8);
        goto addr_40b4d5_15;
    }
    fun_406bd8(ecx, esi20, v21, v18, v15, v14, a2);
    eax27 = fun_404026(esi20, v21, v18, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    *reinterpret_cast<void***>(eax27) = reinterpret_cast<void**>(12);
    addr_40b4d2_17:
    addr_40b4d4_18:
    addr_40b4d5_15:
    goto v14;
    addr_40b506_9:
    goto addr_40b4d4_18;
    addr_40b4f0_11:
    eax28 = fun_404026(ecx, v23, 0, a2, esi20, v21, v18, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9);
    eax29 = reinterpret_cast<void**>(GetLastError(ecx, v23, 0, a2, esi20));
    eax30 = fun_404039(ecx, eax29, v23, 0, a2, esi20);
    *reinterpret_cast<void***>(eax28) = eax30;
    goto addr_40b506_9;
    addr_40b4d8_13:
    eax31 = fun_404026(ecx, v23, 0, a2, esi20, v21, v18, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9);
    eax32 = reinterpret_cast<void**>(GetLastError(ecx, v23, 0, a2, esi20));
    eax33 = fun_404039(ecx, eax32, v23, 0, a2, esi20);
    *reinterpret_cast<void***>(eax31) = eax33;
    goto addr_40b4d2_17;
}

int32_t GetModuleHandleW = 0x17ebc;

void** fun_40b5f6(void** ecx, void** a2, void** a3, void** a4, void* a5, void** a6, void** a7, void** a8, void** a9) {
    void** eax10;
    void** eax11;
    int32_t eax12;
    uint32_t eax13;

    eax10 = fun_407e3e(ecx);
    if (!eax10) {
        eax11 = reinterpret_cast<void**>(CreateFileW(a2, a3, a4, a5, a6, reinterpret_cast<unsigned char>(a7) | reinterpret_cast<unsigned char>(a8), 0));
    } else {
        eax12 = reinterpret_cast<int32_t>(GetModuleHandleW("k", "CreateFile2"));
        eax13 = reinterpret_cast<uint32_t>(GetProcAddress(eax12, "k", "CreateFile2"));
        if (eax13) {
            eax11 = reinterpret_cast<void**>(eax13(a2, a3, a4, a6, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24, eax12, "k", "CreateFile2", 24, a7, a8));
        } else {
            eax11 = reinterpret_cast<void**>(0xffffffff);
        }
    }
    return eax11;
}

int32_t SetEndOfFile = 0x17faa;

void** fun_40c35c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_40c17c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** v8;
    void** ebp9;
    void** v10;
    void** ebx11;
    void** v12;
    void** esi13;
    void** v14;
    void** edi15;
    void** edi16;
    void** ebx17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void** ecx25;
    void** edx26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    uint32_t edx33;
    uint1_t cf34;
    void** esi35;
    uint1_t cf36;
    void* edx37;
    void** eax38;
    int32_t edx39;
    void** v40;
    void* edx41;
    uint1_t less42;
    void** v43;
    void** v44;
    void** eax45;
    uint32_t edx46;
    void** eax47;
    void** eax48;
    void** v49;
    void** v50;
    void** eax51;
    uint32_t edx52;
    void** v53;
    void** v54;
    void** eax55;
    int32_t eax56;
    uint32_t eax57;
    void** edx58;
    void** eax59;
    void** v60;
    void** eax61;
    void** v62;
    void** eax63;
    void** eax64;
    void** eax65;
    uint1_t less66;
    void** eax67;
    void** eax68;
    uint1_t cf69;
    int1_t less_or_equal70;
    void* edx71;
    uint1_t cf72;
    void* edx73;
    int32_t edx74;
    void** v75;
    void** v76;
    void** eax77;
    void** v78;
    void** eax79;
    void** eax80;
    void** eax81;
    void** eax82;
    int32_t eax83;

    v7 = reinterpret_cast<void**>(__return_address());
    v8 = ebp9;
    v10 = ebx11;
    v12 = esi13;
    v14 = edi15;
    edi16 = a2;
    ebx17 = reinterpret_cast<void**>(0);
    v18 = reinterpret_cast<void**>(0);
    eax24 = fun_404ed4(ecx, edi16, 0, 0, 1, v14, v12, v10, v19, v20, v21, v22, 0, v23, v8, v7);
    ecx25 = edx26;
    v27 = eax24;
    v28 = ecx25;
    if ((reinterpret_cast<unsigned char>(eax24) & reinterpret_cast<unsigned char>(ecx25)) == 0xffffffff) 
        goto addr_40c204_2;
    eax32 = fun_404ed4(ecx25, edi16, 0, 0, 2, v14, v12, v10, v27, v28, v29, v30, 0, v31, v8, v7);
    ecx25 = eax32;
    if ((reinterpret_cast<unsigned char>(eax32) & edx33) == 0xffffffff) 
        goto addr_40c204_2;
    cf34 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(a3) < reinterpret_cast<unsigned char>(ecx25));
    esi35 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(ecx25));
    cf36 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(a4) < reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(edx37) + cf34));
    eax38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) - (edx39 + cf36));
    v40 = eax38;
    if (reinterpret_cast<signed char>(eax38) < reinterpret_cast<signed char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf36)))) || reinterpret_cast<signed char>(a4) <= reinterpret_cast<signed char>(reinterpret_cast<int32_t>(edx41) + cf34) && !esi35) {
        less42 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax38) < reinterpret_cast<signed char>(0));
        if (!reinterpret_cast<uint1_t>(less42 | reinterpret_cast<uint1_t>(eax38 == 0)) || static_cast<int1_t>(!less42)) {
            addr_40c30f_6:
            eax45 = fun_404ed4(ecx25, edi16, v27, v28, 0, v14, v12, v10, v27, v28, v43, v44, v18, v40, v8, v7);
            if ((reinterpret_cast<unsigned char>(eax45) & edx46) == 0xffffffff) {
                addr_40c204_2:
                eax47 = fun_404026(ecx25, v14, v12, v10, v27, v28, v43, v44, v18, v40, v8, v7, a2, a3, a4, a5, a6);
                eax48 = *reinterpret_cast<void***>(eax47);
            } else {
                eax48 = reinterpret_cast<void**>(0);
            }
        } else {
            eax51 = fun_404ed4(ecx25, edi16, a3, a4, 0, v14, v12, v10, v27, v28, v49, v50, 0, v40, v8, v7);
            if ((reinterpret_cast<unsigned char>(eax51) & edx52) == 0xffffffff) 
                goto addr_40c204_2;
            eax55 = fun_409c84(ecx25, edi16, v14, v12, v10, v27, v28, v53, v54, 0, v40, v8, v7, a2, a3);
            eax56 = reinterpret_cast<int32_t>(SetEndOfFile(edi16, eax55));
            eax57 = reinterpret_cast<uint32_t>(-eax56);
            __asm__("cdq ");
            ebx17 = reinterpret_cast<void**>(-(eax57 - (eax57 + reinterpret_cast<uint1_t>(eax57 < eax57 + reinterpret_cast<uint1_t>(!!eax56)))) - 1);
            v18 = edx58;
            ecx25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx17) & reinterpret_cast<unsigned char>(edx58));
            if (!reinterpret_cast<int1_t>(ecx25 == 0xffffffff)) 
                goto addr_40c30f_6; else 
                goto addr_40c2e9_10;
        }
    } else {
        eax59 = reinterpret_cast<void**>(GetProcessHeap(8, 0x1000));
        v60 = eax59;
        eax61 = reinterpret_cast<void**>(HeapAlloc(v60, 8, 0x1000));
        v44 = eax61;
        if (!eax61) {
            eax63 = fun_404026(ecx25, v60, 8, 0x1000, v14, v12, v10, v27, v28, v62, v44, 0, v40, v8, v7, a2, a3);
            *reinterpret_cast<void***>(eax63) = reinterpret_cast<void**>(12);
            goto addr_40c204_2;
        }
        eax64 = fun_40c35c(ecx25, edi16, 0x8000, v60, 8, 0x1000);
        v43 = eax64;
        eax65 = v40;
        while (1) {
            less66 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax65) < reinterpret_cast<signed char>(0));
            if (less66 || reinterpret_cast<uint1_t>(less66 | reinterpret_cast<uint1_t>(eax65 == 0)) && reinterpret_cast<unsigned char>(esi35) < reinterpret_cast<unsigned char>(0x1000)) {
                eax67 = esi35;
            } else {
                eax67 = reinterpret_cast<void**>(0x1000);
            }
            eax68 = fun_406373(0x8000, edi16, v44, eax67, v60, 8, 0x1000, v14, v12, v10, v27, v28, v43);
            if (eax68 == 0xffffffff) 
                goto addr_40c263_18;
            __asm__("cdq ");
            cf69 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(esi35) < reinterpret_cast<unsigned char>(eax68));
            esi35 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi35) - reinterpret_cast<unsigned char>(eax68));
            less_or_equal70 = reinterpret_cast<signed char>(v40) <= reinterpret_cast<signed char>(reinterpret_cast<int32_t>(edx71) + cf69);
            cf72 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(v40) < reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(edx73) + cf69));
            eax65 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v40) - (edx74 + cf72));
            v40 = eax65;
            if (reinterpret_cast<signed char>(eax65) < reinterpret_cast<signed char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf72))))) 
                goto addr_40c27e_20;
            if (!less_or_equal70) 
                continue;
            if (!esi35) 
                goto addr_40c27e_20;
        }
    }
    return eax48;
    addr_40c2e9_10:
    eax77 = fun_404026(ecx25, eax55, v14, v12, v10, v27, v28, v75, v76, v18, v40, v8, v7, a2, a3, a4, a5);
    *reinterpret_cast<void***>(eax77) = reinterpret_cast<void**>(13);
    eax79 = fun_403ff2(ecx25, eax55, v14, v12, v10, v27, v28, v78);
    eax80 = reinterpret_cast<void**>(GetLastError(eax55));
    *reinterpret_cast<void***>(eax79) = eax80;
    addr_40c303_25:
    if ((reinterpret_cast<unsigned char>(ebx17) & reinterpret_cast<unsigned char>(v18)) == 0xffffffff) 
        goto addr_40c204_2; else 
        goto addr_40c30f_6;
    addr_40c263_18:
    eax81 = fun_403ff2(0x8000, v60, 8, 0x1000, v14, v12, v10, v27);
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax81) == 5)) {
        eax82 = fun_404026(0x8000, v60, 8, 0x1000, v14, v12, v10, v27, v28, v43, v44, 0, v40, v8, v7, a2, a3);
        *reinterpret_cast<void***>(eax82) = reinterpret_cast<void**>(13);
    }
    ebx17 = reinterpret_cast<void**>(0xffffffff);
    v18 = reinterpret_cast<void**>(0xffffffff);
    addr_40c27e_20:
    fun_40c35c(0x8000, edi16, v43, v60, 8, 0x1000);
    ecx25 = v43;
    eax83 = reinterpret_cast<int32_t>(GetProcessHeap(ecx25, 0, v44, v60, 8, 0x1000));
    HeapFree(ecx25, eax83, 0, v44, v60, 8, 0x1000);
    goto addr_40c303_25;
}

int32_t SetStdHandle = 0x17f04;

uint32_t fun_409bfe(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    int1_t cf14;
    int32_t edi15;
    void* esi16;
    void** edi17;
    void** esi18;
    void** ebp19;
    void** eax20;
    void** eax21;
    uint32_t eax22;
    int1_t zf23;
    void** eax24;
    int32_t v25;
    void** eax26;

    if (reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0) || ((cf14 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g419ff8), !cf14) || ((edi15 = reinterpret_cast<signed char>(a2) >> 5, esi16 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(a2) & 31) << 6), ecx = *reinterpret_cast<void***>(edi15 * 4 + 0x4191d0), (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi16) + reinterpret_cast<unsigned char>(ecx) + 4) & 1) == 0) || *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esi16) + reinterpret_cast<unsigned char>(ecx)) == 0xffffffff))) {
        eax20 = fun_404026(ecx, edi17, esi18, ebp19, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        *reinterpret_cast<void***>(eax20) = reinterpret_cast<void**>(9);
        eax21 = fun_403ff2(ecx, edi17, esi18, ebp19, __return_address(), a2, a3, a4);
        *reinterpret_cast<void***>(eax21) = reinterpret_cast<void**>(0);
        eax22 = 0xffffffff;
    } else {
        zf23 = reinterpret_cast<int1_t>(g419308 == 1);
        if (!zf23) 
            goto addr_409c5b_4;
        eax24 = a2;
        if (!eax24) 
            goto addr_409c52_6; else 
            goto addr_409c42_7;
    }
    addr_409c80_8:
    return eax22;
    addr_409c52_6:
    v25 = 0xf6;
    addr_409c55_9:
    SetStdHandle(v25, 0);
    goto addr_409c5b_4;
    addr_409c42_7:
    eax26 = eax24 - 1;
    if (!eax26) {
        v25 = 0xf5;
        goto addr_409c55_9;
    } else {
        if (eax26 - 1) {
            addr_409c5b_4:
            *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esi16) + reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t**>(edi15 * 4 + 0x4191d0))) = 0xffffffff;
            eax22 = 0;
            goto addr_409c80_8;
        } else {
            v25 = 0xf4;
            goto addr_409c55_9;
        }
    }
}

void** fun_402d4b(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** edi6;
    void** esi7;
    void** ebp8;
    void** eax9;
    void** edx10;
    void** ecx11;
    int1_t zf12;
    void** eax13;
    void** eax14;
    int1_t zf15;
    void** ecx16;
    void** eax17;
    void** eax18;
    void** eax19;

    *reinterpret_cast<void***>(ecx + 12) = reinterpret_cast<void**>(0);
    if (a2) {
        *reinterpret_cast<void***>(ecx) = *reinterpret_cast<void***>(a2);
        *reinterpret_cast<void***>(ecx + 4) = *reinterpret_cast<void***>(a2 + 4);
    } else {
        eax9 = fun_4076ff(a2, edi6, esi7, ebp8, __return_address(), a2, a3, a4);
        *reinterpret_cast<void***>(ecx + 8) = eax9;
        edx10 = *reinterpret_cast<void***>(eax9 + 0x6c);
        *reinterpret_cast<void***>(ecx) = edx10;
        ecx11 = *reinterpret_cast<void***>(eax9 + 0x68);
        *reinterpret_cast<void***>(ecx + 4) = ecx11;
        zf12 = edx10 == image_base_;
        if (!zf12 && (eax13 = g418c98, !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9 + 0x70)) & reinterpret_cast<unsigned char>(eax13)))) {
            eax14 = fun_4084c9(ecx11, edi6, esi7, ebp8, __return_address(), a2, a3);
            *reinterpret_cast<void***>(ecx) = eax14;
        }
        zf15 = *reinterpret_cast<void***>(ecx + 4) == image_base_;
        if (!zf15 && (ecx16 = *reinterpret_cast<void***>(ecx + 8), eax17 = g418c98, !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx16 + 0x70)) & reinterpret_cast<unsigned char>(eax17)))) {
            eax18 = fun_40884b(ecx16, esi7, ebp8, __return_address(), a2, a3, a4, a5);
            *reinterpret_cast<void***>(ecx + 4) = eax18;
        }
        eax19 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx + 8) + 0x70);
        if (!(*reinterpret_cast<unsigned char*>(&eax19) & 2)) {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx + 8) + 0x70) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax19) | 2);
            *reinterpret_cast<void***>(ecx + 12) = reinterpret_cast<void**>(1);
        }
    }
    return ecx;
}

void** fun_40c430(void** a1, void** a2, void** a3) {
    void** ecx4;
    void** esi5;
    void** edi6;
    void** ecx7;
    void** ah8;
    void** al9;
    int1_t cf10;

    ecx4 = a3;
    if (!ecx4) 
        goto addr_40c48a_2;
    esi5 = a1;
    edi6 = a2;
    ecx7 = ecx4;
    do {
        ah8 = *reinterpret_cast<void***>(esi5);
        al9 = *reinterpret_cast<void***>(edi6);
        if (!ah8) 
            break;
        if (!al9) 
            break;
        ++esi5;
        ++edi6;
        if (reinterpret_cast<unsigned char>(ah8) >= 65 && reinterpret_cast<unsigned char>(ah8) <= 90) {
            ah8 = ah8 + 32;
        }
        if (reinterpret_cast<unsigned char>(al9) >= 65 && reinterpret_cast<unsigned char>(al9) <= 90) {
            al9 = al9 + 32;
        }
        cf10 = reinterpret_cast<unsigned char>(ah8) < reinterpret_cast<unsigned char>(al9);
        if (ah8 != al9) 
            goto addr_40c481_11;
        --ecx7;
    } while (ecx7);
    ecx4 = reinterpret_cast<void**>(0);
    cf10 = reinterpret_cast<unsigned char>(ah8) < reinterpret_cast<unsigned char>(al9);
    if (ah8 == al9) {
        addr_40c48a_2:
        return ecx4;
    } else {
        addr_40c481_11:
        ecx4 = reinterpret_cast<void**>(0xffffffff);
        if (!cf10) {
            ecx4 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(0xffffffff));
            goto addr_40c48a_2;
        }
    }
}

struct s69 {
    signed char[8] pad8;
    void** f8;
};

int32_t g419f04;

int32_t g419efc;

int32_t g419f00;

void** fun_40a580(void** a1, void** a2);

int32_t g419ef8;

void** g411c98 = reinterpret_cast<void**>(3);

void* g411c9c = reinterpret_cast<void*>(9);

void fun_40a546(void** ecx);

void fun_40a3c5(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebx17;
    int32_t ebp18;
    void** edi19;
    int32_t ebp20;
    void** esi21;
    struct s69* ebp22;
    uint32_t eax23;
    int32_t ebp24;
    int32_t eax25;
    uint32_t eax26;
    int32_t ebp27;
    int32_t ebp28;
    void** eax29;
    void** eax30;
    int32_t ebp31;
    void** v32;
    void** eax33;
    void** ecx34;
    void*** eax35;
    int32_t ebp36;
    void** eax37;
    void*** eax38;
    int32_t ebp39;
    void* eax40;
    void* eax41;
    int32_t ebp42;
    int32_t ebp43;
    int32_t ebp44;
    int32_t ebp45;
    int32_t ebp46;
    void** eax47;
    void** ecx48;
    int32_t ebp49;
    void** edx50;
    int32_t ebp51;
    void* eax52;
    int32_t ebp53;
    int32_t ebp54;
    void** v55;
    int32_t ebp56;
    int32_t ebp57;
    int32_t ebp58;
    int32_t ebp59;

    v14 = reinterpret_cast<void**>(__return_address());
    fun_404590(0x4179a0, 36, v14);
    *reinterpret_cast<uint32_t*>(ebp15 - 44) = 0;
    *reinterpret_cast<uint32_t*>(ebp16 - 48) = 0;
    ebx17 = 0;
    *reinterpret_cast<int32_t*>(ebp18 - 32) = 0;
    edi19 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ebp20 - 40) = reinterpret_cast<void**>(0);
    esi21 = ebp22->f8;
    if (reinterpret_cast<signed char>(esi21) > reinterpret_cast<signed char>(11)) {
        eax23 = reinterpret_cast<uint32_t>(esi21 - 15);
        if (!eax23) {
            *reinterpret_cast<int32_t*>(ebp24 - 28) = 0x419f04;
            eax25 = g419f04;
        } else {
            eax26 = eax23 - 6;
            if (!eax26) {
                *reinterpret_cast<int32_t*>(ebp27 - 28) = 0x419efc;
                eax25 = g419efc;
            } else {
                if (!(eax26 - 1)) {
                    addr_40a45c_7:
                    *reinterpret_cast<int32_t*>(ebp28 - 28) = 0x419f00;
                    eax25 = g419f00;
                } else {
                    addr_40a44a_8:
                    eax29 = fun_404026(2, 0x4179a0, 36, v14, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
                    *reinterpret_cast<void***>(eax29) = reinterpret_cast<void**>(22);
                    fun_402c77(2);
                    goto addr_40a410_9;
                }
            }
        }
    } else {
        if (esi21 == 11) {
            addr_40a402_11:
            eax30 = fun_407717(0x4179a0, 36, v14, a1, a2, a3, a4);
            edi19 = eax30;
            *reinterpret_cast<void***>(ebp31 - 40) = edi19;
            if (edi19) {
                v32 = *reinterpret_cast<void***>(edi19 + 92);
                eax33 = fun_40a580(esi21, v32);
                ecx34 = v32;
                eax35 = reinterpret_cast<void***>(eax33 + 8);
                *reinterpret_cast<void****>(ebp36 - 28) = eax35;
                eax37 = *eax35;
                goto addr_40a491_13;
            } else {
                addr_40a410_9:
                goto addr_40a57a_14;
            }
        } else {
            ecx34 = reinterpret_cast<void**>(2);
            eax38 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi21) - reinterpret_cast<unsigned char>(2));
            if (!eax38) {
                *reinterpret_cast<int32_t*>(ebp39 - 28) = 0x419ef8;
                eax25 = g419ef8;
            } else {
                eax40 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax38) - reinterpret_cast<unsigned char>(2));
                if (eax40) {
                    eax41 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax40) - reinterpret_cast<unsigned char>(2));
                    if (!eax41) 
                        goto addr_40a45c_7;
                    if (reinterpret_cast<uint32_t>(eax41) - reinterpret_cast<unsigned char>(2)) 
                        goto addr_40a44a_8; else 
                        goto addr_40a402_11;
                }
            }
        }
    }
    ebx17 = 1;
    *reinterpret_cast<int32_t*>(ebp42 - 32) = 1;
    eax37 = reinterpret_cast<void**>(DecodePointer(eax25));
    addr_40a491_13:
    *reinterpret_cast<void***>(ebp43 - 36) = eax37;
    if (eax37 == 1) {
        addr_40a578_21:
    } else {
        if (!eax37) {
            fun_406dc5(ecx34, 3, 0x4179a0, 36, v14, a1);
        }
        if (ebx17) {
            fun_409180(ecx34, 0, 0x4179a0, 36, v14, a1, a2, a3, a4, a5);
            ecx34 = reinterpret_cast<void**>(0);
        }
        *reinterpret_cast<uint32_t*>(ebp44 - 4) = 0;
        if (esi21 == 8) 
            goto addr_40a4c7_27;
        if (esi21 == 11) 
            goto addr_40a4c7_27;
        if (!reinterpret_cast<int1_t>(esi21 == 4)) 
            goto addr_40a4e3_30; else 
            goto addr_40a4c7_27;
    }
    addr_40a57a_14:
    fun_4045d5(ecx34, 0x4179a0, 36, v14, a1);
    goto 0x4179a0;
    addr_40a4c7_27:
    *reinterpret_cast<void***>(ebp45 - 44) = *reinterpret_cast<void***>(edi19 + 96);
    *reinterpret_cast<void***>(edi19 + 96) = reinterpret_cast<void**>(0);
    if (!reinterpret_cast<int1_t>(esi21 == 8)) 
        goto addr_40a515_31;
    *reinterpret_cast<void***>(ebp46 - 48) = *reinterpret_cast<void***>(edi19 + 100);
    *reinterpret_cast<void***>(edi19 + 100) = reinterpret_cast<void**>(0x8c);
    addr_40a4e3_30:
    if (!reinterpret_cast<int1_t>(esi21 == 8)) {
        addr_40a515_31:
        eax47 = reinterpret_cast<void**>(EncodePointer(ecx34, 0));
        ecx48 = *reinterpret_cast<void***>(ebp49 - 28);
        *reinterpret_cast<void***>(ecx48) = eax47;
    } else {
        ecx48 = g411c98;
        edx50 = ecx48;
        *reinterpret_cast<void***>(ebp51 - 52) = edx50;
        while (eax52 = g411c9c, reinterpret_cast<signed char>(edx50) < reinterpret_cast<signed char>(reinterpret_cast<int32_t>(eax52) + reinterpret_cast<unsigned char>(ecx48))) {
            *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(edi19 + 92) + reinterpret_cast<unsigned char>(edx50) * 12) + 8) = 0;
            ++edx50;
            *reinterpret_cast<void***>(ebp53 - 52) = edx50;
            ecx48 = g411c98;
        }
    }
    *reinterpret_cast<int32_t*>(ebp54 - 4) = -2;
    fun_40a546(ecx48);
    if (!reinterpret_cast<int1_t>(esi21 == 8)) {
        v55 = esi21;
        *reinterpret_cast<int32_t*>(ebp56 - 36)();
    } else {
        v55 = *reinterpret_cast<void***>(edi19 + 100);
        *reinterpret_cast<int32_t*>(ebp57 - 36)();
    }
    ecx34 = v55;
    if ((esi21 == 8 || (esi21 == 11 || reinterpret_cast<int1_t>(esi21 == 4))) && (*reinterpret_cast<void***>(edi19 + 96) = *reinterpret_cast<void***>(ebp58 - 44), reinterpret_cast<int1_t>(esi21 == 8))) {
        *reinterpret_cast<void***>(edi19 + 100) = *reinterpret_cast<void***>(ebp59 - 48);
        goto addr_40a578_21;
    }
}

int32_t IsProcessorFeaturePresent = 0x17ba2;

int32_t fun_410118(void** ecx, int32_t a2, void** a3) {
    goto IsProcessorFeaturePresent;
}

uint32_t fun_40c0e2(void** ecx, void** a2, uint16_t* a3, int32_t a4);

uint32_t fun_40c01e(void** ecx, void** a2) {
    int32_t edi3;
    int32_t ebx4;
    int32_t esi5;
    int32_t edx6;
    uint16_t* v7;
    uint32_t eax8;
    uint32_t eax9;

    edi3 = 0;
    ebx4 = 0xe3;
    do {
        __asm__("cdq ");
        esi5 = ebx4 + edi3 - edx6 >> 1;
        v7 = *reinterpret_cast<uint16_t**>(esi5 * 8 + 0x413368);
        eax8 = fun_40c0e2(ecx, a2, v7, 85);
        if (!eax8) 
            break;
        if (reinterpret_cast<int32_t>(eax8) >= reinterpret_cast<int32_t>(0)) {
            edi3 = esi5 + 1;
        } else {
            ebx4 = esi5 - 1;
        }
    } while (edi3 <= ebx4);
    goto addr_40c05b_7;
    eax9 = *reinterpret_cast<uint32_t*>("B" + esi5 * 8);
    addr_40c067_9:
    return eax9;
    addr_40c05b_7:
    eax9 = 0xffffffff;
    goto addr_40c067_9;
}

void** g419f3c;

int32_t fun_40c332(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** eax15;
    void** ebp16;
    void** eax17;

    if (a1) {
        eax15 = g419f3c;
        *reinterpret_cast<void***>(a1) = eax15;
        return 0;
    } else {
        eax17 = fun_404026(a1, ebp16, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax17) = reinterpret_cast<void**>(22);
        fun_402c77(a1);
        return 22;
    }
}

struct s70 {
    signed char[144] pad144;
    uint16_t* f90;
};

struct s71 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_408e03(void** ecx, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** eax7;
    void** eax8;
    struct s70* v9;
    signed char v10;
    struct s71* v11;

    fun_402d4b(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff0, a3, v4, v5, v6);
    eax7 = a2;
    eax8 = reinterpret_cast<void**>(static_cast<uint32_t>(v9->f90[*reinterpret_cast<unsigned char*>(&eax7)]) & 0x8000);
    if (v10) {
        v11->f70 = v11->f70 & 0xfffffffd;
    }
    return eax8;
}

struct s72 {
    signed char[2] pad2;
    void** f2;
    signed char[3] pad6;
    void** f6;
    signed char[3] pad10;
    uint16_t fa;
};

void* g418eb8 = reinterpret_cast<void*>(24);

void* g418eb4 = reinterpret_cast<void*>(0xffffff81);

void* g418eb0 = reinterpret_cast<void*>(0x80);

void* g418ec4 = reinterpret_cast<void*>(0x7f);

uint32_t g418ebc = 8;

int32_t g418ec0 = 32;

void** fun_40cdd2(void** ecx, struct s72* a2, void** a3) {
    void* ebp4;
    void** eax5;
    uint32_t v6;
    uint32_t eax7;
    void** ebx8;
    void** edi9;
    void** v10;
    void** v11;
    void* edx12;
    void** v13;
    void** v14;
    void* v15;
    void* eax16;
    void* v17;
    void** v18;
    void** eax19;
    void** v20;
    void** v21;
    void** v22;
    void** ecx23;
    void** edx24;
    void** v25;
    uint32_t ecx26;
    void** esi27;
    void** eax28;
    void** esi29;
    void** v30;
    void** ecx31;
    uint32_t edi32;
    void** esi33;
    void** eax34;
    int32_t* edi35;
    uint32_t ecx36;
    int1_t zf37;
    void* ecx38;
    void* edx39;
    void* eax40;
    int1_t less41;
    void* esi42;
    uint32_t ecx43;
    void** v44;
    uint32_t v45;
    uint32_t ecx46;
    void** v47;
    void** esi48;
    uint32_t ebx49;
    uint32_t edi50;
    uint32_t v51;
    uint32_t ecx52;
    uint32_t ecx53;
    void** eax54;
    uint32_t edi55;
    int32_t* edx56;
    uint32_t ecx57;
    uint32_t ecx58;
    void** esi59;
    void** ecx60;
    void* edx61;
    uint32_t eax62;
    uint32_t eax63;
    uint32_t ecx64;
    uint32_t eax65;
    int32_t eax66;
    void** esi67;
    void** ecx68;
    void** eax69;
    void** v70;
    uint32_t edi71;
    uint32_t v72;
    uint32_t edx73;
    uint32_t ecx74;
    void** esi75;
    int32_t* edx76;
    void** ecx77;
    void* esi78;
    void** tmp32_79;
    void** v80;
    uint32_t edi81;
    uint32_t ecx82;
    uint32_t v83;
    void** esi84;
    uint32_t ecx85;
    void** ecx86;
    void** eax87;
    int32_t* edx88;
    uint32_t edi89;
    void** eax90;
    void** ecx91;
    void** ecx92;
    void** edx93;
    uint32_t ecx94;
    void** ecx95;
    void** edx96;
    int32_t* edi97;
    uint32_t ecx98;
    int1_t zf99;
    uint32_t ecx100;
    uint32_t ecx101;
    uint32_t v102;
    uint32_t ecx103;
    void** eax104;
    void** v105;
    uint32_t edi106;
    uint32_t ebx107;
    uint32_t v108;
    uint32_t ecx109;
    uint32_t eax110;
    uint32_t ecx111;
    uint32_t esi112;
    int32_t* edx113;
    uint32_t ecx114;
    int32_t edx115;
    uint32_t edi116;
    uint32_t eax117;
    uint32_t ecx118;
    uint32_t edi119;
    void** ecx120;
    uint32_t edi121;
    int32_t edx122;
    int1_t cf123;
    int32_t edx124;
    uint32_t eax125;
    uint32_t ecx126;
    void** eax127;
    void** ecx128;
    void** ecx129;
    int32_t edx130;
    uint32_t eax131;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = g4183f0;
    v6 = reinterpret_cast<unsigned char>(eax5) ^ reinterpret_cast<uint32_t>(ebp4);
    eax7 = a2->fa;
    ebx8 = reinterpret_cast<void**>(0);
    edi9 = a3;
    v10 = edi9;
    v11 = reinterpret_cast<void**>(eax7 & 0x8000);
    edx12 = reinterpret_cast<void*>((eax7 & 0x7fff) - 0x3fff);
    v13 = a2->f6;
    v14 = a2->f2;
    v15 = edx12;
    if (!reinterpret_cast<int1_t>(edx12 == 0xffffc001)) {
        eax16 = g418eb8;
        v17 = edx12;
        v18 = v13;
        eax19 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax16) - 1);
        v20 = eax19;
        v21 = reinterpret_cast<void**>(0);
        v22 = v14;
        ecx23 = eax19 + 1;
        __asm__("cdq ");
        edx24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>((reinterpret_cast<uint32_t>(edx12) & 31) + reinterpret_cast<unsigned char>(ecx23)) >> 5);
        v25 = edx24;
        ecx26 = reinterpret_cast<unsigned char>(ecx23) & 0x8000001f;
        if (__intrinsic()) 
            goto addr_40ce82_12;
    } else {
        esi27 = reinterpret_cast<void**>(0);
        eax28 = reinterpret_cast<void**>(0);
        do {
            if (*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(eax28) * 4 - 16)) 
                goto addr_40ce3f_15;
            ++eax28;
        } while (reinterpret_cast<signed char>(eax28) < reinterpret_cast<signed char>(3));
        goto addr_40ce3a_17;
    }
    addr_40ce87_18:
    esi29 = reinterpret_cast<void**>(31 - ecx26);
    v30 = esi29;
    ecx31 = esi29;
    edi32 = 0xffffffff;
    esi33 = reinterpret_cast<void**>(3);
    if (!(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(edx24) * 4 - 16) & 1 << *reinterpret_cast<unsigned char*>(&ecx31))) {
        addr_40cf47_19:
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(edx24) * 4 - 16) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(edx24) * 4 - 16) & edi32 << *reinterpret_cast<unsigned char*>(&ecx31);
        eax34 = edx24 + 1;
        if (reinterpret_cast<signed char>(eax34) < reinterpret_cast<signed char>(3)) {
            edi35 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp4) - 16 + reinterpret_cast<unsigned char>(eax34) * 4);
            ecx36 = 3 - reinterpret_cast<unsigned char>(eax34);
            while (ecx36) {
                --ecx36;
                *edi35 = 0;
                ++edi35;
                esi33 = esi33 + 4;
            }
            edi32 = 0xffffffff;
        }
    } else {
        zf37 = (*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(edx24) * 4 - 16) & reinterpret_cast<uint32_t>(~(-1 << *reinterpret_cast<unsigned char*>(&ecx31)))) == 0;
        while (zf37) {
            ++edx24;
            if (reinterpret_cast<signed char>(edx24) >= reinterpret_cast<signed char>(3)) 
                goto addr_40ceba_27;
            zf37 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(edx24) * 4 - 16) == 0;
        }
        goto addr_40cebf_29;
    }
    ecx38 = v15;
    if (v21) {
        ecx38 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx38) + 1);
    }
    edx39 = g418eb4;
    eax40 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx39) - reinterpret_cast<uint32_t>(g418eb8));
    if (reinterpret_cast<int32_t>(ecx38) >= reinterpret_cast<int32_t>(eax40)) {
        if (reinterpret_cast<int32_t>(ecx38) > reinterpret_cast<int32_t>(edx39)) {
            less41 = reinterpret_cast<int32_t>(ecx38) < reinterpret_cast<int32_t>(g418eb0);
            if (less41) {
                esi42 = g418ec4;
                v13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v13) & 0x7fffffff);
                ecx43 = g418ebc;
                __asm__("cdq ");
                v44 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi42) + reinterpret_cast<uint32_t>(ecx38));
                v45 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx43 + (reinterpret_cast<uint32_t>(edx39) & 31)) >> 5);
                ecx46 = ecx43 & 0x8000001f;
                if (__intrinsic()) {
                    ecx46 = (ecx46 - 1 | 0xffffffe0) + 1;
                }
                v47 = reinterpret_cast<void**>(0);
                esi48 = reinterpret_cast<void**>(0);
                ebx49 = ecx46;
                edi50 = ~(edi32 << *reinterpret_cast<unsigned char*>(&ecx46));
                v51 = 32 - ebx49;
                do {
                    ecx52 = ebx49;
                    ecx53 = v51;
                    eax54 = reinterpret_cast<void**>((*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(esi48) * 4 - 16) & edi50) << *reinterpret_cast<unsigned char*>(&ecx53));
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(esi48) * 4 - 16) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(esi48) * 4 - 16) >> *reinterpret_cast<signed char*>(&ecx52) | reinterpret_cast<unsigned char>(v47);
                    ++esi48;
                    v47 = eax54;
                } while (reinterpret_cast<signed char>(esi48) < reinterpret_cast<signed char>(3));
                edi55 = v45;
                esi27 = v44;
                edx56 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp4) - 8 - (edi55 << 2));
                ecx57 = 2;
                do {
                    if (reinterpret_cast<int32_t>(ecx57) < reinterpret_cast<int32_t>(edi55)) {
                        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp4) + ecx57 * 4 - 16) = reinterpret_cast<void**>(0);
                    } else {
                        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp4) + ecx57 * 4 - 16) = *edx56;
                    }
                    --edx56;
                    --ecx57;
                } while (reinterpret_cast<int32_t>(ecx57) >= reinterpret_cast<int32_t>(0));
            } else {
                ecx58 = g418ebc;
                v14 = reinterpret_cast<void**>(0);
                esi59 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi33 + 4) + 4 + 4);
                v13 = reinterpret_cast<void**>(0x80000000);
                __asm__("cdq ");
                v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx58 + (reinterpret_cast<uint32_t>(edx39) & 31)) >> 5);
                ecx60 = reinterpret_cast<void**>(ecx58 & 0x8000001f);
                if (!__intrinsic()) 
                    goto addr_40d1ee_54; else 
                    goto addr_40d1e9_55;
            }
        } else {
            edx61 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx39) - reinterpret_cast<uint32_t>(v17));
            v13 = v18;
            __asm__("cdq ");
            v14 = v22;
            v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edx61) + (reinterpret_cast<uint32_t>(edx61) & 31)) >> 5);
            eax62 = reinterpret_cast<uint32_t>(edx61) & 0x8000001f;
            if (!__intrinsic()) 
                goto addr_40cfc5_66; else 
                goto addr_40cfc0_67;
        }
    } else {
        v13 = reinterpret_cast<void**>(0);
        v14 = reinterpret_cast<void**>(0);
        goto addr_40cf8a_77;
    }
    addr_40d2f5_78:
    edi9 = v10;
    addr_40d2f8_79:
    eax63 = 31 - g418ebc;
    ecx64 = eax63;
    eax65 = -reinterpret_cast<unsigned char>(v11);
    eax66 = g418ec0;
    esi67 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi27) << *reinterpret_cast<unsigned char*>(&ecx64) | eax65 - (eax65 + reinterpret_cast<uint1_t>(eax65 < eax65 + reinterpret_cast<uint1_t>(!!v11))) & 0x80000000 | reinterpret_cast<unsigned char>(v13));
    if (eax66 != 64) {
        if (eax66 == 32) {
            *reinterpret_cast<void***>(edi9) = esi67;
        }
    } else {
        *reinterpret_cast<void***>(edi9 + 4) = esi67;
        *reinterpret_cast<void***>(edi9) = v14;
    }
    ecx68 = reinterpret_cast<void**>(v6 ^ reinterpret_cast<uint32_t>(ebp4));
    eax69 = fun_404f47(ecx68, v11, v10, v25, v44, v20, v30, v21, ecx68, v11, v10, v25, v44, v20, v30, v21);
    return eax69;
    addr_40d1ee_54:
    v44 = ecx60;
    v70 = reinterpret_cast<void**>(0);
    edi71 = reinterpret_cast<uint32_t>(~(-1 << *reinterpret_cast<unsigned char*>(&ecx60)));
    v72 = 32 - reinterpret_cast<unsigned char>(ecx60);
    do {
        edx73 = 0x80000000 >> *reinterpret_cast<unsigned char*>(&ecx60) | reinterpret_cast<unsigned char>(v70);
        ecx74 = v72;
        ecx60 = v44;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(ebx8) * 4 - 16) = edx73;
        ++ebx8;
        v70 = reinterpret_cast<void**>((0x80000000 & edi71) << *reinterpret_cast<unsigned char*>(&ecx74));
    } while (reinterpret_cast<signed char>(ebx8) < reinterpret_cast<signed char>(esi59));
    esi75 = v20;
    edx76 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp4) - 8 - (reinterpret_cast<unsigned char>(esi75) << 2));
    ecx77 = reinterpret_cast<void**>(2);
    do {
        if (reinterpret_cast<signed char>(ecx77) < reinterpret_cast<signed char>(esi75)) {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(ecx77) * 4 - 16) = 0;
        } else {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(ecx77) * 4 - 16) = *edx76;
        }
        --edx76;
        --ecx77;
    } while (reinterpret_cast<signed char>(ecx77) >= reinterpret_cast<signed char>(0));
    esi78 = g418ec4;
    tmp32_79 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi78) + reinterpret_cast<uint32_t>(g418eb0));
    esi27 = tmp32_79;
    goto addr_40d2f5_78;
    addr_40d1e9_55:
    ecx60 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(ecx60 - 1) | 0xffffffe0) + 1);
    goto addr_40d1ee_54;
    addr_40cfc5_66:
    v80 = reinterpret_cast<void**>(0);
    edi81 = eax62;
    ecx82 = edi81;
    v83 = reinterpret_cast<uint32_t>(~(-1 << *reinterpret_cast<unsigned char*>(&ecx82)));
    v44 = reinterpret_cast<void**>(32 - edi81);
    esi84 = reinterpret_cast<void**>(3);
    do {
        ecx85 = edi81;
        ecx86 = v44;
        eax87 = reinterpret_cast<void**>((*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(ebx8) * 4 - 16) & v83) << *reinterpret_cast<unsigned char*>(&ecx86));
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(ebx8) * 4 - 16) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(ebx8) * 4 - 16) >> *reinterpret_cast<signed char*>(&ecx85) | reinterpret_cast<unsigned char>(v80);
        ++ebx8;
        v80 = eax87;
    } while (reinterpret_cast<signed char>(ebx8) < reinterpret_cast<signed char>(3));
    edx88 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp4) - 8 - (reinterpret_cast<unsigned char>(v25) << 2));
    edi89 = 0xffffffff;
    eax90 = v25;
    ecx91 = reinterpret_cast<void**>(2);
    do {
        if (reinterpret_cast<signed char>(ecx91) < reinterpret_cast<signed char>(eax90)) {
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(ecx91) * 4 - 16) = reinterpret_cast<void**>(0);
        } else {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(ecx91) * 4 - 16) = *edx88;
            eax90 = v25;
        }
        --edx88;
        --ecx91;
    } while (reinterpret_cast<signed char>(ecx91) >= reinterpret_cast<signed char>(0));
    ecx92 = v20 + 1;
    __asm__("cdq ");
    edx93 = reinterpret_cast<void**>(reinterpret_cast<int32_t>((reinterpret_cast<uint32_t>(edx88) & 31) + reinterpret_cast<unsigned char>(ecx92)) >> 5);
    v21 = edx93;
    ecx94 = reinterpret_cast<unsigned char>(ecx92) & 0x8000001f;
    if (__intrinsic()) {
        ecx94 = (ecx94 - 1 | 0xffffffe0) + 1;
    }
    v30 = reinterpret_cast<void**>(31 - ecx94);
    ecx95 = v30;
    if (!(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(edx93) * 4 - 16) & 1 << *reinterpret_cast<unsigned char*>(&ecx95))) {
        addr_40d102_100:
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(edx93) * 4 - 16) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(edx93) * 4 - 16) & edi89 << *reinterpret_cast<unsigned char*>(&ecx95);
        edx96 = edx93 + 1;
        if (reinterpret_cast<signed char>(edx96) < reinterpret_cast<signed char>(3)) {
            edi97 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp4) - 16 + reinterpret_cast<unsigned char>(edx96) * 4);
            ecx98 = 3 - reinterpret_cast<unsigned char>(edx96);
            while (ecx98) {
                --ecx98;
                *edi97 = 0;
                ++edi97;
                esi84 = esi84 + 4;
            }
            edi89 = 0xffffffff;
        }
    } else {
        zf99 = (*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(edx93) * 4 - 16) & reinterpret_cast<uint32_t>(~(-1 << *reinterpret_cast<unsigned char*>(&ecx95)))) == 0;
        while (zf99) {
            ++edx93;
            if (reinterpret_cast<signed char>(edx93) >= reinterpret_cast<signed char>(3)) 
                goto addr_40d087_108;
            zf99 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(edx93) * 4 - 16) == 0;
        }
        goto addr_40d089_110;
    }
    ecx100 = g418ebc;
    ecx101 = ecx100 + 1;
    __asm__("cdq ");
    v102 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx101 + (reinterpret_cast<unsigned char>(edx96) & 31)) >> 5);
    ecx103 = ecx101 & 0x8000001f;
    if (__intrinsic()) {
        ecx103 = (ecx103 - 1 | 0xffffffe0) + 1;
    }
    eax104 = reinterpret_cast<void**>(0);
    v105 = reinterpret_cast<void**>(0);
    edi106 = ~(edi89 << *reinterpret_cast<unsigned char*>(&ecx103));
    ebx107 = ecx103;
    v20 = reinterpret_cast<void**>(0);
    v108 = 32 - ebx107;
    do {
        ecx109 = ebx107;
        eax110 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(eax104) * 4 - 16) & edi106;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(v20) * 4 - 16) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + reinterpret_cast<unsigned char>(eax104) * 4 - 16) >> *reinterpret_cast<signed char*>(&ecx109) | reinterpret_cast<unsigned char>(v105);
        ecx111 = v108;
        v105 = reinterpret_cast<void**>(eax110 << *reinterpret_cast<unsigned char*>(&ecx111));
        eax104 = v20 + 1;
        v20 = eax104;
    } while (reinterpret_cast<signed char>(eax104) < reinterpret_cast<signed char>(esi84));
    esi112 = v102;
    edx113 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp4) - 8 - (esi112 << 2));
    ecx114 = 2;
    do {
        if (reinterpret_cast<int32_t>(ecx114) < reinterpret_cast<int32_t>(esi112)) {
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp4) + ecx114 * 4 - 16) = reinterpret_cast<void**>(0);
        } else {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp4) + ecx114 * 4 - 16) = *edx113;
        }
        --edx113;
        --ecx114;
    } while (reinterpret_cast<int32_t>(ecx114) >= reinterpret_cast<int32_t>(0));
    addr_40cf8a_77:
    esi27 = reinterpret_cast<void**>(0);
    addr_40ce47_121:
    goto addr_40d2f5_78;
    addr_40d089_110:
    __asm__("cdq ");
    edx115 = reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(edx93) & 31) + reinterpret_cast<unsigned char>(v20)) >> 5;
    edi116 = reinterpret_cast<unsigned char>(v20) & 0x8000001f;
    if (__intrinsic()) {
        edi116 = (edi116 - 1 | 0xffffffe0) + 1;
    }
    eax117 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + edx115 * 4 - 16);
    ecx118 = 31 - edi116;
    edi119 = 1 << *reinterpret_cast<unsigned char*>(&ecx118);
    ecx120 = reinterpret_cast<void**>(0);
    edi121 = edi119 + eax117;
    edi89 = 0xff;
    if (edi121 < eax117 || edi121 < edi119) {
        ecx120 = reinterpret_cast<void**>(1);
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + edx115 * 4 - 16) = edi121;
    edx122 = edx115 - 1;
    if (edx122 >= 0) {
        do {
            if (!ecx120) 
                break;
            ecx120 = reinterpret_cast<void**>(0);
            edi89 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + edx122 * 4 - 16) + 1;
            cf123 = edi89 < *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + edx122 * 4 - 16);
            if (cf123 || edi89 < 1) {
                ecx120 = reinterpret_cast<void**>(1);
            }
            *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + edx122 * 4 - 16) = edi89;
            --edx122;
        } while (edx122 >= 0);
        edi89 = 0xffffffff;
    }
    ecx95 = v30;
    addr_40d0ff_132:
    edx93 = v21;
    goto addr_40d102_100;
    addr_40d087_108:
    goto addr_40d0ff_132;
    addr_40cfc0_67:
    eax62 = (eax62 - 1 | 0xffffffe0) + 1;
    goto addr_40cfc5_66;
    addr_40cebf_29:
    __asm__("cdq ");
    edx124 = reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(edx24) & 31) + reinterpret_cast<unsigned char>(v20)) >> 5;
    eax125 = reinterpret_cast<unsigned char>(v20) & 0x8000001f;
    if (__intrinsic()) {
        eax125 = (eax125 - 1 | 0xffffffe0) + 1;
    }
    ecx126 = 31 - eax125;
    v21 = reinterpret_cast<void**>(0);
    v44 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx126));
    eax127 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp4) + edx124 * 4 - 16);
    ecx128 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v44) + reinterpret_cast<unsigned char>(eax127));
    ecx129 = reinterpret_cast<void**>(0);
    edi32 = 0xff;
    if (reinterpret_cast<unsigned char>(ecx128) < reinterpret_cast<unsigned char>(eax127) || reinterpret_cast<unsigned char>(ecx128) < reinterpret_cast<unsigned char>(v44)) {
        ecx129 = reinterpret_cast<void**>(1);
        v21 = reinterpret_cast<void**>(1);
    }
    *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp4) + edx124 * 4 - 16) = ecx128;
    edx130 = edx124 - 1;
    if (edx130 >= 0) {
        do {
            if (!ecx129) 
                break;
            eax131 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + edx130 * 4 - 16);
            ecx129 = reinterpret_cast<void**>(0);
            v21 = reinterpret_cast<void**>(0);
            edi32 = eax131 + 1;
            if (edi32 < eax131 || edi32 < 1) {
                ecx129 = reinterpret_cast<void**>(1);
                v21 = reinterpret_cast<void**>(1);
            }
            *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp4) + edx130 * 4 - 16) = edi32;
            --edx130;
        } while (edx130 >= 0);
        edi32 = 0xffffffff;
    }
    ecx31 = v30;
    addr_40cf44_143:
    edx24 = v25;
    goto addr_40cf47_19;
    addr_40ceba_27:
    goto addr_40cf44_143;
    addr_40ce82_12:
    ecx26 = (ecx26 - 1 | 0xffffffe0) + 1;
    goto addr_40ce87_18;
    addr_40ce3f_15:
    v13 = reinterpret_cast<void**>(0);
    v14 = reinterpret_cast<void**>(0);
    esi27 = reinterpret_cast<void**>(12);
    goto addr_40ce47_121;
    addr_40ce3a_17:
    goto addr_40d2f8_79;
}

void** fun_40d344(void** ecx, void** a2, void** a3, void** a4, void** a5, void* a6, uint32_t a7, void** a8, void** a9);

struct s73 {
    signed char[2] pad2;
    void** f2;
    signed char[3] pad6;
    void** f6;
    signed char[3] pad10;
    uint16_t fa;
};

void** fun_40c860(void** ecx, struct s73* a2, void** a3, void** a4, void** a5, void** a6, void** a7, void* a8, uint32_t a9, void** a10, void** a11);

struct s74 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_40c739(void** a1, void** a2, void** a3) {
    void* ebp4;
    void** eax5;
    void** ecx6;
    void** edi7;
    void** esi8;
    void** ebx9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** eax14;
    void** eax15;
    signed char v16;
    struct s74* v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = g4183f0;
    ecx6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp4) + 0xffffffd8);
    fun_402d4b(ecx6, a3, edi7, esi8, ebx9);
    v10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp4) + 0xffffffd8);
    v11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp4) + 0xffffffe8);
    v12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp4) + 0xfffffff0);
    eax13 = fun_40d344(ecx6, v12, v11, a2, 0, 0, 0, 0, v10);
    eax14 = fun_40c860(ecx6, reinterpret_cast<uint32_t>(ebp4) + 0xfffffff0, a1, v12, v11, a2, 0, 0, 0, 0, v10);
    eax15 = eax13;
    if (!(*reinterpret_cast<unsigned char*>(&eax15) & 3)) {
        if (eax14 == 1) 
            goto addr_40c7a4_3;
        if (!reinterpret_cast<int1_t>(eax14 == 2)) 
            goto addr_40c7a7_5; else 
            goto addr_40c798_6;
    }
    if (*reinterpret_cast<unsigned char*>(&eax15) & 1) {
        addr_40c798_6:
    } else {
        if (!(*reinterpret_cast<unsigned char*>(&eax15) & 2)) {
            addr_40c7a7_5:
            if (v16) {
                v17->f70 = v17->f70 & 0xfffffffd;
                goto addr_40c7b4_10;
            }
        } else {
            addr_40c7a4_3:
        }
    }
    goto addr_40c7a7_5;
    addr_40c7b4_10:
    eax24 = fun_404f47(reinterpret_cast<unsigned char>(eax5) ^ reinterpret_cast<uint32_t>(ebp4) ^ reinterpret_cast<uint32_t>(ebp4), v18, v19, v20, v21, v22, eax13, v23);
    return eax24;
}

void** fun_40c695(void** a1, void** a2, void** a3, void** a4);

void** fun_40c7c7(void** a1, void** a2, void** a3) {
    void** eax4;

    eax4 = fun_40c695(a1, a2, a3, 0);
    return eax4;
}

void** fun_40f22f(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void** g4;

void** g8;

void fun_40e58a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** esi10;
    void** eax11;
    signed char* v12;
    signed char* v13;
    int32_t eax14;
    int32_t v15;
    int1_t zf16;
    void** edx17;
    void** ecx18;
    void** esi19;
    void** esi20;
    void** edx21;
    void** edi22;
    void** esi23;
    void** ecx24;
    void** ecx25;
    void** v26;
    void** v27;
    void** v28;
    void* edx29;
    void** v30;
    void** v31;
    void** v32;
    uint32_t esi33;
    uint32_t edi34;
    void** edx35;
    void** esi36;
    void** edi37;
    void** eax38;
    int32_t ecx39;
    void** eax40;
    int32_t ecx41;
    int32_t eax42;
    void** ecx43;
    void** edx44;
    void* edi45;
    void** esi46;
    void** edi47;
    void** eax48;
    int32_t eax49;
    void** eax50;
    int32_t edx51;
    signed char* eax52;

    eax11 = fun_40f22f(0, 0x10000, 0x30000, esi10, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    if (!eax11) {
        return;
    }
    v12 = reinterpret_cast<signed char*>(0);
    v13 = reinterpret_cast<signed char*>(0);
    fun_402c87(ecx);
    eax14 = 0x404e;
    v15 = 0x404e;
    g0 = reinterpret_cast<void**>(0);
    g4 = reinterpret_cast<void**>(0);
    g8 = reinterpret_cast<void**>(0);
    if (!1) 
        goto addr_40e5d8_5;
    addr_40e714_6:
    zf16 = g8 == 0;
    if (zf16) {
        edx17 = g4;
        do {
            ecx18 = g0;
            esi19 = edx17;
            edx17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx17) << 16 | reinterpret_cast<unsigned char>(ecx18) >> 16);
            esi20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi19) >> 16);
            eax14 = v15 + 0xfff0;
            g0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx18) << 16);
            v15 = eax14;
        } while (!esi20);
        g4 = edx17;
        g8 = esi20;
    }
    edx21 = g8;
    if (!(reinterpret_cast<unsigned char>(edx21) & 0x8000)) {
        edi22 = g0;
        esi23 = g4;
        do {
            ecx24 = esi23;
            esi23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi23) + reinterpret_cast<unsigned char>(esi23) | reinterpret_cast<unsigned char>(edi22) >> 31);
            edx21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx21) + reinterpret_cast<unsigned char>(edx21) | reinterpret_cast<unsigned char>(ecx24) >> 31);
            eax14 = v15 + 0xffff;
            edi22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi22) + reinterpret_cast<unsigned char>(edi22));
            v15 = eax14;
        } while (!(reinterpret_cast<unsigned char>(edx21) & 0x8000));
        g0 = edi22;
        g4 = esi23;
        g8 = edx21;
    }
    *reinterpret_cast<int16_t*>(&g8 + 2) = *reinterpret_cast<int16_t*>(&eax14);
    goto 0;
    addr_40e5d8_5:
    ecx25 = reinterpret_cast<void**>(0);
    v26 = reinterpret_cast<void**>(0);
    v27 = reinterpret_cast<void**>(0);
    v28 = reinterpret_cast<void**>(0);
    do {
        edx29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v27) + reinterpret_cast<unsigned char>(v27));
        v30 = g0;
        v31 = g4;
        v32 = g8;
        esi33 = reinterpret_cast<unsigned char>(v26) + reinterpret_cast<unsigned char>(v26) | reinterpret_cast<unsigned char>(ecx25) >> 31;
        edi34 = reinterpret_cast<unsigned char>(v28) + reinterpret_cast<unsigned char>(v28) | reinterpret_cast<unsigned char>(v26) >> 31;
        edx35 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx29) + reinterpret_cast<uint32_t>(edx29));
        esi36 = reinterpret_cast<void**>(esi33 + esi33 | reinterpret_cast<uint32_t>(edx29) >> 31);
        g0 = edx35;
        edi37 = reinterpret_cast<void**>(edi34 + edi34 | esi33 >> 31);
        g4 = esi36;
        eax38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(edx35));
        g8 = edi37;
        ecx39 = 0;
        if (reinterpret_cast<unsigned char>(eax38) < reinterpret_cast<unsigned char>(edx35) || reinterpret_cast<unsigned char>(eax38) < reinterpret_cast<unsigned char>(v30)) {
            ecx39 = 1;
        }
        g0 = eax38;
        if (ecx39) {
            eax40 = esi36;
            ecx41 = 0;
            esi36 = eax40 + 1;
            if (reinterpret_cast<unsigned char>(esi36) < reinterpret_cast<unsigned char>(eax40) || reinterpret_cast<unsigned char>(esi36) < reinterpret_cast<unsigned char>(1)) {
                ecx41 = 1;
            }
            g4 = esi36;
            if (ecx41) {
                ++edi37;
                g8 = edi37;
            }
        }
        eax42 = 0;
        ecx43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi36) + reinterpret_cast<unsigned char>(v31));
        if (reinterpret_cast<unsigned char>(ecx43) < reinterpret_cast<unsigned char>(esi36) || reinterpret_cast<unsigned char>(ecx43) < reinterpret_cast<unsigned char>(v31)) {
            eax42 = 1;
        }
        g4 = ecx43;
        if (eax42) {
            ++edi37;
            g8 = edi37;
        }
        edx44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax38) + reinterpret_cast<unsigned char>(eax38));
        edi45 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi37) + reinterpret_cast<unsigned char>(v32));
        esi46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx43) + reinterpret_cast<unsigned char>(ecx43) | reinterpret_cast<unsigned char>(eax38) >> 31);
        edi47 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi45) + reinterpret_cast<uint32_t>(edi45) | reinterpret_cast<unsigned char>(ecx43) >> 31);
        g0 = edx44;
        g4 = esi46;
        g8 = edi47;
        eax48 = reinterpret_cast<void**>(static_cast<int32_t>(*v13));
        v26 = esi46;
        v28 = edi47;
        ecx25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx44) + reinterpret_cast<unsigned char>(eax48));
        v27 = ecx25;
        if (reinterpret_cast<unsigned char>(ecx25) < reinterpret_cast<unsigned char>(edx44) || reinterpret_cast<unsigned char>(ecx25) < reinterpret_cast<unsigned char>(eax48)) {
            eax49 = 1;
        } else {
            eax49 = 0;
        }
        g0 = ecx25;
        if (eax49) {
            eax50 = esi46;
            edx51 = 0;
            esi46 = eax50 + 1;
            v26 = esi46;
            if (reinterpret_cast<unsigned char>(esi46) < reinterpret_cast<unsigned char>(eax50) || reinterpret_cast<unsigned char>(esi46) < reinterpret_cast<unsigned char>(1)) {
                edx51 = 1;
            }
            g4 = esi46;
            if (edx51) {
                ++edi47;
                v28 = edi47;
                g8 = edi47;
            }
        }
        eax52 = v12 - 1;
        g4 = esi46;
        ++v13;
        g8 = edi47;
        v12 = eax52;
    } while (eax52);
    eax14 = 0x404e;
    goto addr_40e714_6;
}

/* (image base) */
int32_t image_base_ = 0x40b5ed;

struct s75 {
    signed char f0;
    signed char f1;
};

void fun_40e3d8(struct s75* a1);

/* (image base) */
int32_t image_base_ = 0x40b5ed;

void** fun_40daec(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6);

/* (image base) */
int32_t image_base_ = 0x40b5ed;

struct s76 {
    int32_t f0;
    int32_t f4;
};

void fun_40e469(int32_t ecx, int32_t a2, struct s76* a3, void** a4);

/* (image base) */
int32_t image_base_ = 0x40b5ed;

struct s77 {
    unsigned char f0;
    unsigned char f1;
};

void fun_40e4c3(struct s77* a1);

/* (image base) */
int32_t image_base_ = 0x40b5ed;

int32_t fun_40e548(int32_t a1);

/* (image base) */
int32_t image_base_ = 0x40b5ed;

/* (image base) */
int32_t image_base_ = 0x40b5ed;

void** fun_40db0d(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6, void** a7);

/* (image base) */
int32_t image_base_ = 0x40b5ed;

void fun_40e481(int32_t ecx, int32_t a2, struct s76* a3, void** a4, void** a5);

/* (image base) */
int32_t image_base_ = 0x40b5ed;

void fun_40e3e9(struct s75* a1, void** a2);

/* (image base) */
int32_t image_base_ = 0x40b5ed;

void fun_40e4d4(struct s77* a1, void** a2);

void fun_40c7f6() {
    image_base_ = reinterpret_cast<int32_t>(fun_40e3d8);
    image_base_ = reinterpret_cast<int32_t>(fun_40daec);
    image_base_ = reinterpret_cast<int32_t>(fun_40e469);
    image_base_ = reinterpret_cast<int32_t>(fun_40e4c3);
    image_base_ = reinterpret_cast<int32_t>(fun_40e548);
    image_base_ = reinterpret_cast<int32_t>(fun_40daec);
    image_base_ = reinterpret_cast<int32_t>(fun_40db0d);
    image_base_ = reinterpret_cast<int32_t>(fun_40e481);
    image_base_ = reinterpret_cast<int32_t>(fun_40e3e9);
    image_base_ = reinterpret_cast<int32_t>(fun_40e4d4);
    return;
}

void** fun_40e05e(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_40db93(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_40e2d9(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_40e218(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_40db0d(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6, void** a7) {
    void** eax8;
    void** eax9;

    if (a4 == 0x65 || a4 == 69) {
        eax8 = fun_40e05e(a1, a2, a3, a5, a6, a7);
    } else {
        if (a4 != 0x66) {
            if (a4 == 97 || a4 == 65) {
                eax8 = fun_40db93(a1, a2, a3, a5, a6, a7);
            } else {
                eax8 = fun_40e2d9(a1, a2, a3, a5, a6, a7);
            }
        } else {
            eax9 = fun_40e218(a1, a2, a3, a5, a7);
            return eax9;
        }
    }
    return eax8;
}

void** fun_40f09f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, int32_t a7, void** a8, void** a9);

void** fun_40ef27(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void** fun_40e12c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** fun_40e218(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void*** ebp6;
    void** eax7;
    void** v8;
    void** ecx9;
    void** v10;
    void** v11;
    int32_t edi12;
    void** ebx13;
    void** v14;
    void** ecx15;
    uint32_t eax16;
    int32_t v17;
    void** v18;
    void* eax19;
    void** esi20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** eax28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** ebp37;
    void** eax38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** eax54;

    ebp6 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = g4183f0;
    v8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) ^ reinterpret_cast<uint32_t>(ebp6));
    ecx9 = reinterpret_cast<void**>(ebp6 + 0xffffffd4);
    v10 = *reinterpret_cast<void***>(a1 + 4);
    v11 = *reinterpret_cast<void***>(a1);
    fun_40f09f(ecx9, v11, v10, ecx9, ebp6 + 0xffffffe4, 22, edi12, ebx13, v14);
    if (a2) {
        if (a3) {
            ecx15 = reinterpret_cast<void**>(0xffffffff);
            if (a3 != 0xffffffff) {
                eax16 = 0;
                *reinterpret_cast<unsigned char*>(&eax16) = reinterpret_cast<uint1_t>(v17 == 45);
                ecx15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) - eax16);
            }
            v18 = reinterpret_cast<void**>(ebp6 + 0xffffffd4);
            eax19 = reinterpret_cast<void*>(0);
            *reinterpret_cast<unsigned char*>(&eax19) = reinterpret_cast<uint1_t>(v18 == 45);
            eax28 = fun_40ef27(ecx15, reinterpret_cast<int32_t>(eax19) + reinterpret_cast<unsigned char>(a2), ecx15, reinterpret_cast<unsigned char>(esi20) + reinterpret_cast<unsigned char>(a4), v18, esi20, v21, v22, v23, v24, v25, v26, v27);
            if (!eax28) {
                fun_40e12c(a2, a3, a4, ebp6 + 0xffffffd4, 0, a5, esi20);
            } else {
                *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
            }
        } else {
            eax38 = fun_404026(ecx9, esi20, v29, v30, v31, v32, v33, v34, v35, v36, v8, ebp37, __return_address(), a1, a2, a3, a4);
            *reinterpret_cast<void***>(eax38) = reinterpret_cast<void**>(22);
            fun_402c77(ecx9);
        }
    } else {
        eax47 = fun_404026(ecx9, v39, v40, v41, v42, v43, v44, v45, v46, v8, ebp37, __return_address(), a1, a2, a3, a4, a5);
        *reinterpret_cast<void***>(eax47) = reinterpret_cast<void**>(22);
        fun_402c77(ecx9);
    }
    eax54 = fun_404f47(reinterpret_cast<unsigned char>(v8) ^ reinterpret_cast<uint32_t>(ebp6), v48, v49, v50, v51, v52, v53, v8);
    return eax54;
}

void** fun_40df0d(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_40e2d9(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void*** ebp7;
    void** eax8;
    void** v9;
    void** edi10;
    void** ecx11;
    void** v12;
    void** v13;
    int32_t edi14;
    void** ebx15;
    void** v16;
    void** v17;
    void** esi18;
    void** esi19;
    void* ecx20;
    void** v21;
    int32_t v22;
    void** eax23;
    void** ebx24;
    void** ecx25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
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
    void** ebp43;
    void** eax44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
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
    void** eax61;

    ebp7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax8 = g4183f0;
    v9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) ^ reinterpret_cast<uint32_t>(ebp7));
    edi10 = a2;
    ecx11 = reinterpret_cast<void**>(ebp7 + 0xffffffd0);
    v12 = *reinterpret_cast<void***>(a1 + 4);
    v13 = *reinterpret_cast<void***>(a1);
    fun_40f09f(ecx11, v13, v12, ecx11, ebp7 + 0xffffffe4, 22, edi14, ebx15, v16);
    if (edi10) {
        v17 = esi18;
        esi19 = a3;
        if (esi19) {
            ecx20 = reinterpret_cast<void*>(0);
            v21 = v17 - 1;
            *reinterpret_cast<unsigned char*>(&ecx20) = reinterpret_cast<uint1_t>(v22 == 45);
            eax23 = reinterpret_cast<void**>(0xffffffff);
            ebx24 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx20) + reinterpret_cast<unsigned char>(edi10));
            if (esi19 != 0xffffffff) {
                eax23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi19) - reinterpret_cast<uint32_t>(ecx20));
            }
            ecx25 = reinterpret_cast<void**>(ebp7 + 0xffffffd0);
            eax32 = fun_40ef27(ecx25, ebx24, eax23, a4, ecx25, v17, v26, v27, v21, v28, v29, v30, v31);
            if (!eax32) {
                eax33 = v17 - 1;
                if (reinterpret_cast<signed char>(eax33) < reinterpret_cast<signed char>(0xfffffffc) || reinterpret_cast<signed char>(eax33) >= reinterpret_cast<signed char>(a4)) {
                    fun_40df0d(edi10, esi19, a4, a5, ebp7 + 0xffffffd0, 1, a6, v17);
                } else {
                    if (reinterpret_cast<signed char>(v21) < reinterpret_cast<signed char>(eax33)) {
                        do {
                            ++ebx24;
                        } while (*reinterpret_cast<void***>(ebx24));
                        *reinterpret_cast<void***>(ebx24 + 0xfffffffe) = *reinterpret_cast<void***>(ebx24);
                    }
                    fun_40e12c(edi10, esi19, a4, ebp7 + 0xffffffd0, 1, a6, v17);
                }
            } else {
                *reinterpret_cast<void***>(edi10) = reinterpret_cast<void**>(0);
            }
        } else {
            eax44 = fun_404026(ecx11, v17, v34, v35, v36, v37, v38, v39, v40, v41, v42, v9, ebp43, __return_address(), a1, a2, a3);
            *reinterpret_cast<void***>(eax44) = reinterpret_cast<void**>(22);
            fun_402c77(ecx11);
        }
    } else {
        eax54 = fun_404026(ecx11, v45, v46, v47, v48, v49, v50, v51, v52, v53, v9, ebp43, __return_address(), a1, a2, a3, a4);
        *reinterpret_cast<void***>(eax54) = reinterpret_cast<void**>(22);
        fun_402c77(ecx11);
    }
    eax61 = fun_404f47(reinterpret_cast<unsigned char>(v9) ^ reinterpret_cast<uint32_t>(ebp7), v21, v55, v56, v57, v58, v59, v60);
    return eax61;
}

struct s78 {
    void** f0;
    signed char f1;
    signed char[1] pad3;
    signed char f3;
};

uint32_t g419ee8;

struct s79 {
    void** f0;
    void** f1;
};

struct s78* fun_40edf0(void** ecx, struct s78* a2, void** a3) {
    int1_t cf4;
    int1_t below_or_equal5;
    struct s78* edi6;
    uint32_t ecx7;
    int32_t ecx8;
    struct s79* edi9;
    void** al10;
    struct s78* edi11;
    struct s78* edi12;
    uint32_t edx13;
    void*** eax14;
    uint32_t ecx15;
    void* edx16;
    uint32_t edi17;
    struct s78* eax18;
    uint32_t ecx19;
    uint32_t ecx20;
    void* eax21;
    void* edi22;
    struct s78* edx23;
    uint32_t ecx24;
    uint32_t ecx25;
    void* eax26;
    struct s78* eax27;
    uint32_t ebx28;
    struct s78* eax29;

    cf4 = g419ee8 < 1;
    below_or_equal5 = g419ee8 <= 1;
    if (cf4) {
        edi6 = a2;
        ecx7 = 0xffffffff;
        do {
            if (!ecx7) 
                break;
            --ecx7;
            edi6 = reinterpret_cast<struct s78*>(&edi6->f1);
        } while (edi6->f0);
        ecx8 = reinterpret_cast<int32_t>(-(ecx7 + 1));
        edi9 = reinterpret_cast<struct s79*>(reinterpret_cast<uint32_t>(edi6) - 1);
        al10 = a3;
        do {
            if (!ecx8) 
                break;
            --ecx8;
            edi9 = reinterpret_cast<struct s79*>(reinterpret_cast<uint32_t>(edi9) - 1);
        } while (edi9->f0 != al10);
        edi11 = reinterpret_cast<struct s78*>(&edi9->f1);
        if (edi11->f0 != al10) 
            goto addr_40ef1d_9;
    } else {
        edi12 = a2;
        if (!below_or_equal5) {
            edx13 = reinterpret_cast<unsigned char>(a3);
            if (!edx13) {
                eax14 = reinterpret_cast<void***>(0xfffffff0 & reinterpret_cast<uint32_t>(edi12));
                __asm__("pxor xmm0, xmm0");
                __asm__("pcmpeqb xmm0, [eax]");
                ecx15 = 15 & reinterpret_cast<uint32_t>(edi12);
                edx16 = reinterpret_cast<void*>(0xffffffff << *reinterpret_cast<unsigned char*>(&ecx15));
                __asm__("pmovmskb edi, xmm0");
                edi17 = reinterpret_cast<uint32_t>(edi12) & reinterpret_cast<uint32_t>(edx16);
                if (!edi17) {
                    do {
                        __asm__("pxor xmm0, xmm0");
                        __asm__("pcmpeqb xmm0, [eax+0x10]");
                        eax14 = eax14 + 16;
                        __asm__("pmovmskb edi, xmm0");
                    } while (!edi17);
                }
                __asm__("bsf edx, edi");
                eax18 = reinterpret_cast<struct s78*>(reinterpret_cast<uint32_t>(eax14) + reinterpret_cast<uint32_t>(edx16));
                goto addr_40eebb_15;
            } else {
                eax18 = reinterpret_cast<struct s78*>(0);
                if (!(reinterpret_cast<uint32_t>(edi12) & 15)) {
                    addr_40eea4_17:
                    __asm__("movd xmm0, edx");
                    goto addr_40eea8_18;
                } else {
                    do {
                        ecx19 = reinterpret_cast<unsigned char>(edi12->f0);
                        if (ecx19 == edx13) {
                            eax18 = edi12;
                        }
                        if (!ecx19) 
                            goto addr_40eebb_15;
                        edi12 = reinterpret_cast<struct s78*>(&edi12->f1);
                    } while (reinterpret_cast<uint32_t>(edi12) & 15);
                    goto addr_40eea4_17;
                }
            }
        } else {
            __asm__("movd xmm3, edx");
            __asm__("pshuflw xmm3, xmm3, 0x0");
            __asm__("movlhps xmm3, xmm3");
            ecx20 = 15 & reinterpret_cast<uint32_t>(edi12);
            eax21 = reinterpret_cast<void*>(0xffffffff << *reinterpret_cast<unsigned char*>(&ecx20));
            edi22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi12) - ecx20);
            edx23 = reinterpret_cast<struct s78*>(0);
            while (ecx24 = ecx20 & reinterpret_cast<uint32_t>(eax21), !ecx24) {
                __asm__("pmovmskb ecx, xmm1");
                ecx20 = ecx24 & reinterpret_cast<uint32_t>(eax21);
                __asm__("bsr eax, ecx");
                if (ecx20) {
                    edx23 = reinterpret_cast<struct s78*>(reinterpret_cast<uint32_t>(eax21) + reinterpret_cast<uint32_t>(edi22));
                }
                eax21 = reinterpret_cast<void*>(0xffffffff);
                edi22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi22) + 16);
            }
            __asm__("pmovmskb ebx, xmm1");
            ecx25 = ecx24 << 1;
            eax26 = reinterpret_cast<void*>(-ecx25);
            __asm__("bsr eax, ecx");
            eax27 = reinterpret_cast<struct s78*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(edi22));
            if (!((ecx25 & reinterpret_cast<uint32_t>(eax26)) - 1 & (ebx28 & reinterpret_cast<uint32_t>(eax21)))) 
                goto label_29; else 
                goto addr_40ee7a_30;
        }
    }
    eax29 = edi11;
    addr_40ef23_32:
    return eax29;
    addr_40ef1d_9:
    eax29 = reinterpret_cast<struct s78*>(0);
    goto addr_40ef23_32;
    addr_40eebb_15:
    return eax18;
    addr_40eea8_18:
    label_29:
    eax27 = edx23;
    addr_40ee7a_30:
    return eax27;
}

uint32_t fun_40f210(void** cl) {
    uint32_t edx2;
    uint32_t eax3;

    if (reinterpret_cast<unsigned char>(cl) >= 64) {
        return 0;
    } else {
        if (reinterpret_cast<unsigned char>(cl) >= 32) {
            return edx2 >> reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(cl) & 31);
        } else {
            __asm__("shrd eax, edx, cl");
            return eax3;
        }
    }
}

struct s80 {
    signed char[48] pad48;
    void** f30;
};

struct s80* fun_40f130(void** a1, void** a2, uint32_t a3, uint32_t a4) {
    int32_t edi5;
    int32_t ebp6;
    void* eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t ebx10;
    uint32_t ecx11;
    void** eax12;
    uint32_t eax13;
    uint32_t esi14;
    void** tmp32_15;
    uint32_t eax16;

    edi5 = 0;
    ebp6 = 0;
    if (__intrinsic()) {
        edi5 = 1;
        ebp6 = 1;
        eax7 = reinterpret_cast<void*>(-reinterpret_cast<unsigned char>(a2));
        a2 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax7) - reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax7) < static_cast<uint32_t>(reinterpret_cast<uint1_t>(!!a1))));
        a1 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(a1));
    }
    eax8 = a4;
    if (__intrinsic()) {
        ++edi5;
        eax9 = -eax8;
        eax8 = eax9 - reinterpret_cast<uint1_t>(eax9 < static_cast<uint32_t>(reinterpret_cast<uint1_t>(!!a3)));
        a4 = eax8;
        a3 = -a3;
    }
    if (eax8) {
        ebx10 = eax8;
        ecx11 = a3;
        eax12 = a1;
        do {
            ebx10 = ebx10 >> 1;
            __asm__("rcr ecx, 1");
            __asm__("rcr eax, 1");
        } while (ebx10);
        eax13 = reinterpret_cast<unsigned char>(eax12) / ecx11;
        esi14 = eax13;
        tmp32_15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(__intrinsic()) + eax13 * a4);
        if (reinterpret_cast<unsigned char>(tmp32_15) < reinterpret_cast<unsigned char>(__intrinsic())) 
            goto addr_40f1d8_9;
        if (reinterpret_cast<unsigned char>(tmp32_15) > reinterpret_cast<unsigned char>(a2)) 
            goto addr_40f1d8_9;
        if (reinterpret_cast<unsigned char>(tmp32_15) < reinterpret_cast<unsigned char>(a2)) 
            goto addr_40f1e1_12;
        if (reinterpret_cast<unsigned char>(a3 * esi14) <= reinterpret_cast<unsigned char>(a1)) 
            goto addr_40f1e1_12;
    } else {
        esi14 = reinterpret_cast<unsigned char>(a1) / a3;
        goto addr_40f1e3_15;
    }
    addr_40f1d8_9:
    --esi14;
    addr_40f1e1_12:
    addr_40f1e3_15:
    if (ebp6 - 1 < 0) {
    }
    eax16 = esi14;
    if (!(edi5 - 1)) {
        eax16 = -eax16;
    }
    return *reinterpret_cast<struct s80**>(&eax16);
}

void** fun_40deef(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;

    eax6 = fun_40e05e(a1, a2, a3, a4, a5, 0);
    return eax6;
}

void** fun_40e7a0(void** a1, void** a2, void** a3, void** a4);

void** fun_40e562(void** ecx, void** a2, void** a3) {
    void** esi4;
    void** edi5;
    void** ebp6;
    struct s18* eax7;
    void** eax8;

    if (a3) {
        eax7 = fun_402cc0(ecx, a2, esi4, edi5, ebp6);
        eax8 = fun_40e7a0(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(a3), a2, &eax7->f1, a2);
    }
    return eax8;
}

struct s81 {
    int32_t f0;
    signed char f1;
    signed char f2;
    signed char f3;
};

struct s82 {
    int32_t f0;
    signed char f1;
    signed char f2;
    signed char f3;
};

void** fun_40e7a0(void** a1, void** a2, void** a3, void** a4) {
    void** esi5;
    void** ecx6;
    void** edi7;
    int1_t cf8;
    struct s81* esi9;
    struct s82* edi10;
    uint32_t ecx11;
    uint32_t edx12;
    uint32_t ecx13;
    uint32_t edx14;
    void* eax15;
    int1_t cf16;
    void** v17;
    uint32_t eax18;
    uint32_t edx19;
    void** v20;
    uint32_t eax21;
    uint32_t ecx22;
    uint32_t eax23;
    uint32_t ecx24;
    uint32_t edx25;
    uint32_t edx26;
    uint32_t ecx27;
    uint32_t eax28;
    uint32_t ecx29;
    uint32_t ecx30;
    int1_t cf31;
    struct s4* esi32;
    struct s5* esi33;
    struct s6* esi34;

    esi5 = a2;
    ecx6 = a3;
    edi7 = a1;
    if (reinterpret_cast<unsigned char>(edi7) <= reinterpret_cast<unsigned char>(esi5) || reinterpret_cast<unsigned char>(edi7) >= reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<unsigned char>(esi5))) {
        cf8 = static_cast<int1_t>(g419eec >> 1);
        if (cf8) {
            while (ecx6) {
                --ecx6;
                *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
                ++edi7;
                ++esi5;
            }
            goto addr_40eae8_7;
        }
        if (reinterpret_cast<unsigned char>(ecx6) >= reinterpret_cast<unsigned char>(0x80)) 
            goto addr_40e7dd_9;
    } else {
        esi9 = reinterpret_cast<struct s81*>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<unsigned char>(esi5) + 0xfffffffc);
        edi10 = reinterpret_cast<struct s82*>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<unsigned char>(edi7) + 0xfffffffc);
        if (reinterpret_cast<uint32_t>(edi10) & 3) {
            if (reinterpret_cast<unsigned char>(ecx6) >= reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(edi10) & 3) * 4 + 0x40eb78);
            }
            goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx6) * 4 + 0x40ec74);
        } else {
            ecx11 = reinterpret_cast<unsigned char>(ecx6) >> 2;
            edx12 = reinterpret_cast<unsigned char>(ecx6) & 3;
            if (ecx11 < 8) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(-ecx11) * 4 + 0x40ec24);
                goto *reinterpret_cast<int32_t*>(edx12 * 4 + 0x40ec74);
            } else {
                while (ecx11) {
                    --ecx11;
                    edi10->f0 = esi9->f0;
                    edi10 = reinterpret_cast<struct s82*>(reinterpret_cast<uint32_t>(edi10) - 4);
                    esi9 = reinterpret_cast<struct s81*>(reinterpret_cast<uint32_t>(esi9) - 4);
                }
                goto *reinterpret_cast<int32_t*>(edx12 * 4 + 0x40ec74);
            }
        }
    }
    addr_40e9ab_21:
    if (reinterpret_cast<unsigned char>(edi7) & 3) {
        addr_40e9c8_22:
        if (reinterpret_cast<unsigned char>(ecx6) < reinterpret_cast<unsigned char>(4)) {
            goto *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx6 - 4) * 4 + 0x40eae8);
        } else {
            goto *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(edi7) & 3) * 4 + 0x40e9ec);
        }
    } else {
        ecx13 = reinterpret_cast<unsigned char>(ecx6) >> 2;
        edx14 = reinterpret_cast<unsigned char>(ecx6) & 3;
        if (ecx13 >= 8) {
            while (ecx13) {
                --ecx13;
                *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
                edi7 = edi7 + 4;
                esi5 = esi5 + 4;
            }
            goto *reinterpret_cast<int32_t*>(edx14 * 4 + 0x40ead8);
        }
    }
    switch (ecx13) {
        addr_40eacf_31:
    case 0:
        switch (edx14) {
            addr_40eae8_7:
        case 0:
            return a1;
        case 1:
            *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
            return a1;
        case 2:
            *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
            *reinterpret_cast<void***>(edi7 + 1) = *reinterpret_cast<void***>(esi5 + 1);
            return a1;
        case 3:
            *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
            *reinterpret_cast<void***>(edi7 + 1) = *reinterpret_cast<void***>(esi5 + 1);
            *reinterpret_cast<void***>(edi7 + 2) = *reinterpret_cast<void***>(esi5 + 2);
            return a1;
        }
        addr_40eabc_35:
    case 1:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 4);
        eax15 = reinterpret_cast<void*>(ecx13 * 4);
        esi5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi5) + reinterpret_cast<uint32_t>(eax15));
        edi7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi7) + reinterpret_cast<uint32_t>(eax15));
        goto addr_40eacf_31;
        addr_40eab4_36:
    case 2:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 8);
        goto addr_40eabc_35;
        addr_40eaac_37:
    case 3:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 12);
        goto addr_40eab4_36;
        addr_40eaa4_38:
    case 4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 16);
        goto addr_40eaac_37;
        addr_40ea9c_39:
    case 5:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 20);
        goto addr_40eaa4_38;
        addr_40ea94_40:
    case 6:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 24) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 24);
        goto addr_40ea9c_39;
    case 7:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi7 + ecx13 * 4) - 28) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi5 + ecx13 * 4) - 28);
        goto addr_40ea94_40;
    }
    addr_40e7dd_9:
    if (!((reinterpret_cast<unsigned char>(edi7) ^ reinterpret_cast<unsigned char>(esi5)) & 15) && (cf16 = static_cast<int1_t>(g418e00 >> 1), cf16)) {
        v17 = edi7;
        eax18 = reinterpret_cast<unsigned char>(esi5) & 15;
        if (eax18) {
            edx19 = 16 - eax18;
            v20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx6) - edx19);
            eax21 = edx19;
            ecx22 = eax21 & 3;
            if (ecx22) {
                do {
                    *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
                    ++esi5;
                    ++edi7;
                    --ecx22;
                } while (ecx22);
            }
            eax23 = eax21 >> 2;
            if (eax23) {
                do {
                    *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
                    esi5 = esi5 + 4;
                    edi7 = edi7 + 4;
                    --eax23;
                } while (eax23);
            }
            ecx6 = v20;
        }
        ecx24 = reinterpret_cast<unsigned char>(ecx6) & 0x7f;
        edx25 = reinterpret_cast<unsigned char>(ecx6) >> 7;
        if (edx25) {
            do {
                __asm__("movdqa xmm0, [esi]");
                __asm__("movdqa xmm1, [esi+0x10]");
                __asm__("movdqa xmm2, [esi+0x20]");
                __asm__("movdqa xmm3, [esi+0x30]");
                __asm__("movdqa [edi], xmm0");
                __asm__("movdqa [edi+0x10], xmm1");
                __asm__("movdqa [edi+0x20], xmm2");
                __asm__("movdqa [edi+0x30], xmm3");
                __asm__("movdqa xmm4, [esi+0x40]");
                __asm__("movdqa xmm5, [esi+0x50]");
                __asm__("movdqa xmm6, [esi+0x60]");
                __asm__("movdqa xmm7, [esi+0x70]");
                __asm__("movdqa [edi+0x40], xmm4");
                __asm__("movdqa [edi+0x50], xmm5");
                __asm__("movdqa [edi+0x60], xmm6");
                __asm__("movdqa [edi+0x70], xmm7");
                esi5 = esi5 + 0x80;
                edi7 = edi7 + 0x80;
                --edx25;
            } while (edx25);
        }
        if (ecx24) {
            edx26 = ecx24 >> 4;
            if (edx26) {
                do {
                    __asm__("movdqa xmm0, [esi]");
                    __asm__("movdqa [edi], xmm0");
                    esi5 = esi5 + 16;
                    edi7 = edi7 + 16;
                    --edx26;
                } while (edx26);
            }
            ecx27 = ecx24 & 15;
            if (ecx27) {
                eax28 = ecx27;
                ecx29 = ecx27 >> 2;
                if (ecx29) {
                    do {
                        *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
                        esi5 = esi5 + 4;
                        edi7 = edi7 + 4;
                        --ecx29;
                    } while (ecx29);
                }
                ecx30 = eax28 & 3;
                if (ecx30) {
                    do {
                        *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
                        ++esi5;
                        ++edi7;
                        --ecx30;
                    } while (ecx30);
                }
            }
        }
        return v17;
    }
    cf31 = static_cast<int1_t>(g419eec);
    if (!cf31) 
        goto addr_40e9ab_21;
    if (reinterpret_cast<unsigned char>(edi7) & 3) 
        goto addr_40e9c8_22;
    if (!(reinterpret_cast<unsigned char>(esi5) & 3)) {
        if (static_cast<int1_t>(reinterpret_cast<unsigned char>(edi7) >> 2)) {
            ecx6 = ecx6 - 4;
            esi5 = esi5 + 4;
            *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
            edi7 = edi7 + 4;
        }
        if (static_cast<int1_t>(reinterpret_cast<unsigned char>(edi7) >> 3)) {
            __asm__("movq xmm1, [esi]");
            ecx6 = ecx6 - 8;
            esi5 = esi5 + 8;
            __asm__("movq [edi], xmm1");
            edi7 = edi7 + 8;
        }
        if (!(reinterpret_cast<unsigned char>(esi5) & 7)) {
            __asm__("movdqa xmm1, [esi-0x8]");
            esi32 = reinterpret_cast<struct s4*>(esi5 + 0xfffffff8);
            ecx6 = ecx6;
            do {
                __asm__("movdqa xmm3, [esi+0x10]");
                ecx6 = ecx6 - 48;
                __asm__("movdqa xmm0, [esi+0x20]");
                __asm__("movdqa xmm5, [esi+0x30]");
                esi32 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(esi32) + 48);
                __asm__("movdqa xmm2, xmm3");
                __asm__("palignr xmm3, xmm1, 0x8");
                __asm__("movdqa [edi], xmm3");
                __asm__("movdqa xmm4, xmm0");
                __asm__("palignr xmm0, xmm2, 0x8");
                __asm__("movdqa [edi+0x10], xmm0");
                __asm__("movdqa xmm1, xmm5");
                __asm__("palignr xmm5, xmm4, 0x8");
                __asm__("movdqa [edi+0x20], xmm5");
                edi7 = edi7 + 48;
            } while (reinterpret_cast<signed char>(ecx6) >= reinterpret_cast<signed char>(48));
            esi5 = reinterpret_cast<void**>(&esi32->f8);
        } else {
            if (!static_cast<int1_t>(reinterpret_cast<unsigned char>(esi5) >> 3)) {
                __asm__("movdqa xmm1, [esi-0x4]");
                esi33 = reinterpret_cast<struct s5*>(esi5 + 0xfffffffc);
                edi7 = edi7;
                do {
                    __asm__("movdqa xmm3, [esi+0x10]");
                    ecx6 = ecx6 - 48;
                    __asm__("movdqa xmm0, [esi+0x20]");
                    __asm__("movdqa xmm5, [esi+0x30]");
                    esi33 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(esi33) + 48);
                    __asm__("movdqa xmm2, xmm3");
                    __asm__("palignr xmm3, xmm1, 0x4");
                    __asm__("movdqa [edi], xmm3");
                    __asm__("movdqa xmm4, xmm0");
                    __asm__("palignr xmm0, xmm2, 0x4");
                    __asm__("movdqa [edi+0x10], xmm0");
                    __asm__("movdqa xmm1, xmm5");
                    __asm__("palignr xmm5, xmm4, 0x4");
                    __asm__("movdqa [edi+0x20], xmm5");
                    edi7 = edi7 + 48;
                } while (reinterpret_cast<signed char>(ecx6) >= reinterpret_cast<signed char>(48));
                esi5 = reinterpret_cast<void**>(&esi33->f4);
            } else {
                __asm__("movdqa xmm1, [esi-0xc]");
                esi34 = reinterpret_cast<struct s6*>(esi5 + 0xfffffff4);
                do {
                    __asm__("movdqa xmm3, [esi+0x10]");
                    ecx6 = ecx6 - 48;
                    __asm__("movdqa xmm0, [esi+0x20]");
                    __asm__("movdqa xmm5, [esi+0x30]");
                    esi34 = reinterpret_cast<struct s6*>(reinterpret_cast<uint32_t>(esi34) + 48);
                    __asm__("movdqa xmm2, xmm3");
                    __asm__("palignr xmm3, xmm1, 0xc");
                    __asm__("movdqa [edi], xmm3");
                    __asm__("movdqa xmm4, xmm0");
                    __asm__("palignr xmm0, xmm2, 0xc");
                    __asm__("movdqa [edi+0x10], xmm0");
                    __asm__("movdqa xmm1, xmm5");
                    __asm__("palignr xmm5, xmm4, 0xc");
                    __asm__("movdqa [edi+0x20], xmm5");
                    edi7 = edi7 + 48;
                } while (reinterpret_cast<signed char>(ecx6) >= reinterpret_cast<signed char>(48));
                esi5 = reinterpret_cast<void**>(&esi34->fc);
            }
        }
        while (reinterpret_cast<signed char>(ecx6) >= reinterpret_cast<signed char>(16)) {
            __asm__("movdqu xmm1, [esi]");
            ecx6 = ecx6 - 16;
            esi5 = esi5 + 16;
            __asm__("movdqa [edi], xmm1");
            edi7 = edi7 + 16;
        }
        if (static_cast<int1_t>(reinterpret_cast<unsigned char>(ecx6) >> 2)) {
            ecx6 = ecx6 - 4;
            esi5 = esi5 + 4;
            *reinterpret_cast<void***>(edi7) = *reinterpret_cast<void***>(esi5);
            edi7 = edi7 + 4;
        }
        if (static_cast<int1_t>(reinterpret_cast<unsigned char>(ecx6) >> 3)) {
            __asm__("movq xmm1, [esi]");
            ecx6 = ecx6 - 8;
            esi5 = esi5 + 8;
            __asm__("movq [edi], xmm1");
            edi7 = edi7 + 8;
        }
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx6) * 4 + 0x40ead8);
    }
    return a1;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi10) + 3) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi9) + 3);
    return a1;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi10) + 3) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi9) + 3);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi10) + 2) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi9) + 2);
    return a1;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi10) + 3) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi9) + 3);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi10) + 2) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi9) + 2);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi10) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi9) + 1);
    return a1;
}

void** fun_40ef27(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** edx14;
    void** v15;
    void** esi16;
    void** esi17;
    void** v18;
    void** edi19;
    void** edi20;
    void** ebp21;
    void** eax22;
    void** v23;
    void** eax24;
    void** eax25;
    void** v26;
    void** ebx27;
    void** ebx28;
    void** eax29;
    int32_t edx30;
    struct s18* eax31;

    edx14 = a5;
    v15 = esi16;
    esi17 = a2;
    v18 = edi19;
    edi20 = *reinterpret_cast<void***>(edx14 + 12);
    if (!esi17 || reinterpret_cast<unsigned char>(a3) <= reinterpret_cast<unsigned char>(0)) {
        eax22 = fun_404026(ecx, v18, v15, ebp21, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        v23 = reinterpret_cast<void**>(22);
    } else {
        ecx = a4;
        *reinterpret_cast<void***>(esi17) = reinterpret_cast<void**>(0);
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx == 0)) {
            eax24 = reinterpret_cast<void**>(0);
        } else {
            eax24 = ecx;
        }
        if (reinterpret_cast<unsigned char>(a3) > reinterpret_cast<unsigned char>(eax24 + 1)) 
            goto addr_40ef74_7; else 
            goto addr_40ef6b_8;
    }
    addr_40ef40_9:
    *reinterpret_cast<void***>(eax22) = v23;
    fun_402c77(ecx);
    eax25 = v23;
    addr_40efd3_10:
    return eax25;
    addr_40ef74_7:
    *reinterpret_cast<void***>(esi17) = reinterpret_cast<void**>(48);
    v26 = ebx27;
    ebx28 = esi17 + 1;
    eax29 = ebx28;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx == 0))) {
        do {
            if (!*reinterpret_cast<void***>(edi20)) {
                edx30 = 48;
            } else {
                edx30 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi20));
                ++edi20;
            }
            *reinterpret_cast<void***>(eax29) = *reinterpret_cast<void***>(&edx30);
            ++eax29;
            --ecx;
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx == 0)));
        edx14 = a5;
    }
    *reinterpret_cast<void***>(eax29) = reinterpret_cast<void**>(0);
    if (reinterpret_cast<signed char>(ecx) >= reinterpret_cast<signed char>(0) && reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi20)) >= reinterpret_cast<signed char>(53)) {
        while (--eax29, *reinterpret_cast<void***>(eax29) == 57) {
            *reinterpret_cast<void***>(eax29) = reinterpret_cast<void**>(48);
        }
        *reinterpret_cast<void***>(eax29) = *reinterpret_cast<void***>(eax29) + 1;
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi17) == 49)) {
        eax31 = fun_402cc0(ecx, ebx28, v26, v18, v15);
        fun_40e7a0(esi17, ebx28, &eax31->f1, ebx28);
    } else {
        *reinterpret_cast<void***>(edx14 + 4) = *reinterpret_cast<void***>(edx14 + 4) + 1;
    }
    eax25 = reinterpret_cast<void**>(0);
    goto addr_40efd3_10;
    addr_40ef6b_8:
    eax22 = fun_404026(ecx, v18, v15, ebp21, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    v23 = reinterpret_cast<void**>(34);
    goto addr_40ef40_9;
}

void** fun_40c491(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_40c5d4(void** ecx, void** a2, void** a3) {
    int1_t zf4;
    void** ebp5;
    void** eax6;
    void** ecx7;

    zf4 = g419f34 == 0;
    if (!zf4) {
        eax6 = fun_40c491(a2, 0, ebp5, __return_address(), a2, a3);
        return eax6;
    } else {
        ecx7 = a2;
        if (reinterpret_cast<uint32_t>(ecx7 + 0xffffffbf) <= 25) {
            ecx7 = ecx7 + 32;
        }
        return ecx7;
    }
}

struct s83 {
    signed char[48] pad48;
    void** f30;
};

struct s84 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    uint32_t f8;
    uint16_t fa;
};

void** fun_40f28c(void** ecx, void** a2, void** a3, uint16_t a4, void** a5, unsigned char a6, void** a7) {
    void* ebp8;
    void** eax9;
    uint32_t v10;
    void** v11;
    void** edx12;
    uint32_t esi13;
    uint48_t v14;
    void** v15;
    uint32_t edx16;
    uint112_t v17;
    void*** edi18;
    int32_t v19;
    void** v20;
    int32_t eax21;
    uint32_t ecx22;
    uint32_t eax23;
    uint32_t v24;
    uint32_t v25;
    int1_t zf26;
    void** edx27;
    void** esi28;
    void** v29;
    void** v30;
    uint32_t eax31;
    void** ecx32;
    uint32_t eax33;
    void** edi34;
    void** v35;
    uint96_t v36;
    uint32_t v37;
    void** eax38;
    void* ecx39;
    void** v40;
    void* eax41;
    uint32_t edi42;
    uint32_t v43;
    void** eax44;
    uint32_t v45;
    void** ebx46;
    int32_t edi47;
    uint32_t eax48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    uint32_t edi54;
    void** ebx55;
    uint32_t eax56;
    void** esi57;
    void** eax58;
    void** v59;
    void*** edi60;
    void*** v61;
    void*** ecx62;
    void*** v63;
    void* edi64;
    uint32_t edx65;
    uint32_t esi66;
    void** edi67;
    void** edx68;
    void* esi69;
    void** ecx70;
    void** v71;
    void** eax72;
    void** ecx73;
    void** edi74;
    void* esi75;
    void** edx76;
    void** eax77;
    uint32_t eax78;
    void** eax79;
    void*** ecx80;
    void** eax81;
    unsigned char cl82;
    void** v83;
    void** v84;
    void** eax85;
    int32_t eax86;
    int32_t esi87;
    uint32_t edi88;
    uint32_t v89;
    int32_t eax90;
    void** esi91;
    uint32_t edi92;
    uint16_t cx93;
    int32_t eax94;
    uint32_t eax95;
    uint32_t v96;
    uint32_t v97;
    void** edi98;
    void** eax99;
    int16_t ax100;
    int32_t eax101;
    uint32_t edi102;
    void** v103;
    void*** v104;
    uint32_t eax105;
    struct s84* ecx106;
    struct s84* v107;
    uint32_t edi108;
    uint32_t edi109;
    uint32_t eax110;
    uint32_t v111;
    uint32_t eax112;
    uint32_t v113;
    uint32_t edi114;
    uint32_t eax115;
    uint96_t v116;
    uint32_t v117;
    int1_t zf118;
    void** eax119;
    int32_t esi120;
    int32_t v121;
    int32_t esi122;
    uint32_t ecx123;
    uint32_t v124;
    void** ecx125;
    uint32_t edi126;
    uint16_t ax127;
    int32_t eax128;
    uint32_t eax129;
    uint32_t v130;
    uint32_t v131;
    void** edi132;
    void** eax133;
    uint16_t ax134;
    void** ecx135;
    int32_t eax136;
    uint32_t edi137;
    void** edi138;
    void** esi139;
    void** ebx140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** eax146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** eax152;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax9 = g4183f0;
    v10 = reinterpret_cast<unsigned char>(eax9) ^ reinterpret_cast<uint32_t>(ebp8);
    v11 = a7;
    edx12 = reinterpret_cast<void**>(static_cast<uint32_t>(a4) & 0x8000);
    esi13 = static_cast<uint32_t>(a4) & 0x7fff;
    *reinterpret_cast<int32_t*>(&v14) = 0x3ffbcccc;
    v15 = edx12;
    if (!*reinterpret_cast<int16_t*>(&edx12)) {
        *reinterpret_cast<void***>(a7 + 2) = reinterpret_cast<void**>(32);
    } else {
        *reinterpret_cast<void***>(a7 + 2) = reinterpret_cast<void**>(45);
    }
    if (*reinterpret_cast<uint16_t*>(&esi13)) {
        if (*reinterpret_cast<uint16_t*>(&esi13) != 0x7fff) {
            addr_40f3c2_6:
            edx16 = *reinterpret_cast<uint16_t*>(&esi13);
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 6) = a3;
            edi18 = reinterpret_cast<void***>(" %A");
            *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(&v17) + 10) = *reinterpret_cast<uint16_t*>(&esi13);
            v19 = 5;
            v20 = reinterpret_cast<void**>(0xbffd);
            eax21 = reinterpret_cast<int32_t>(edx16 * 0x4d10 + 0xecbced0c + ((edx16 >> 8) + (reinterpret_cast<unsigned char>(a3) >> 24) * 2) * 77) >> 16;
            ecx22 = *reinterpret_cast<uint16_t*>(&eax21);
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 2) = a2;
            *reinterpret_cast<int16_t*>(&v17) = 0;
            eax23 = reinterpret_cast<uint32_t>(-static_cast<int32_t>(*reinterpret_cast<int16_t*>(&ecx22)));
            v24 = ecx22;
            v25 = eax23;
            zf26 = eax23 == 0;
            if (zf26) {
                addr_40f75c_7:
                edx27 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 4);
                esi28 = *reinterpret_cast<void***>(&v17);
            } else {
                if (reinterpret_cast<int32_t>(eax23) < reinterpret_cast<int32_t>(0)) {
                    eax23 = -eax23;
                    edi18 = reinterpret_cast<void***>(0x418fc8);
                    v25 = eax23;
                    zf26 = eax23 == 0;
                }
                if (zf26) 
                    goto addr_40f75c_7; else 
                    goto addr_40f444_11;
            }
        } else {
            *reinterpret_cast<void***>(a7) = reinterpret_cast<void**>(1);
            if (reinterpret_cast<int1_t>(a3 == 0x80000000) && !a2 || reinterpret_cast<unsigned char>(a3) & 0x40000000) {
                if (!*reinterpret_cast<int16_t*>(&v15) || !reinterpret_cast<int1_t>(a3 == 0xc0000000)) {
                    if (!reinterpret_cast<int1_t>(a3 == 0x80000000) || a2) {
                        addr_40f39c_15:
                        v29 = reinterpret_cast<void**>("1#QNAN");
                        goto addr_40f3a1_16;
                    } else {
                        v30 = reinterpret_cast<void**>("1#INF");
                        goto addr_40f380_18;
                    }
                } else {
                    if (a2) 
                        goto addr_40f39c_15;
                    v30 = reinterpret_cast<void**>("1#IND");
                    goto addr_40f380_18;
                }
            } else {
                v29 = reinterpret_cast<void**>("1#SNAN");
                goto addr_40f3a1_16;
            }
        }
    } else {
        if (a3) 
            goto addr_40f3c2_6;
        if (a2 != a3) 
            goto addr_40f3c2_6;
        *reinterpret_cast<unsigned char*>(a7 + 3) = 1;
        *reinterpret_cast<void***>(a7) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a7 + 2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&edx12) != 0x8000) - 1) & 13) + 32);
        *reinterpret_cast<void***>(a7 + 4) = reinterpret_cast<void**>(48);
        goto addr_40fc09_25;
    }
    addr_40f762_26:
    eax31 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 8)) >> 16;
    if (*reinterpret_cast<uint16_t*>(&eax31) < 0x3fff) {
        addr_40fa15_27:
        ecx32 = v11;
        eax33 = v24;
        edi34 = a5;
        *reinterpret_cast<void***>(ecx32) = *reinterpret_cast<void***>(&eax33);
        if (!(a6 & 1)) {
            v35 = edi34;
            goto addr_40fa60_29;
        }
    } else {
        v24 = ecx22 + 1;
        *reinterpret_cast<void***>(&v36) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 4) = reinterpret_cast<void**>(0);
        v37 = (*reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v14) + 2) ^ eax31) & 0x8000;
        eax38 = reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v14) + 2) & 0x7fff);
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 8) = reinterpret_cast<void**>(0);
        ecx39 = reinterpret_cast<void*>(eax31 & 0x7fff);
        v40 = eax38;
        eax41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax38) + reinterpret_cast<uint32_t>(ecx39));
        edi42 = *reinterpret_cast<uint16_t*>(&eax41);
        v43 = edi42;
        if (*reinterpret_cast<uint16_t*>(&ecx39) >= 0x7fff) 
            goto addr_40f9fa_31;
        eax44 = v40;
        if (*reinterpret_cast<uint16_t*>(&eax44) >= 0x7fff) 
            goto addr_40f9fa_31;
        if (*reinterpret_cast<uint16_t*>(&edi42) > 0xbffd) 
            goto addr_40f9fa_31;
        if (*reinterpret_cast<uint16_t*>(&edi42) <= 0x3fbf) 
            goto addr_40f7d7_35;
        if (*reinterpret_cast<uint16_t*>(&ecx39)) 
            goto addr_40f804_37;
        ++edi42;
        v43 = edi42;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 8)) & 0x7fffffff) 
            goto addr_40f804_37;
        if (edx27) 
            goto addr_40f804_37;
        if (esi28) 
            goto addr_40f804_37; else 
            goto addr_40f7f9_41;
    }
    edi34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi34) + static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(&eax33))));
    v35 = edi34;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi34) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi34 == 0))) {
        addr_40fa60_29:
        if (reinterpret_cast<signed char>(edi34) > reinterpret_cast<signed char>(21)) {
            v35 = reinterpret_cast<void**>(21);
        }
    } else {
        *reinterpret_cast<void***>(ecx32) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(ecx32 + 2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&v15) != 0x8000) - 1) & 13) + 32);
        *reinterpret_cast<unsigned char*>(ecx32 + 3) = 1;
        *reinterpret_cast<void***>(ecx32 + 4) = reinterpret_cast<void**>(48);
        goto addr_40fa55_45;
    }
    v45 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 8)) >> 16) - 0x3ffe;
    *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(&v17) + 10) = 0;
    ebx46 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 8);
    edi47 = 8;
    do {
        eax48 = reinterpret_cast<unsigned char>(esi28) >> 31;
        esi28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi28) + reinterpret_cast<unsigned char>(esi28));
        ebx46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx46) + reinterpret_cast<unsigned char>(ebx46) | reinterpret_cast<unsigned char>(edx27) >> 31);
        edx27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx27) + reinterpret_cast<unsigned char>(edx27) | eax48);
        v49 = esi28;
        v50 = ebx46;
        --edi47;
    } while (edi47);
    v51 = ebx46;
    v52 = edx27;
    v53 = esi28;
    if (reinterpret_cast<int32_t>(v45) < reinterpret_cast<int32_t>(0) && (edi54 = -v45 & 0xff, !(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(edi54 == 0)))) {
        ebx55 = v51;
        do {
            eax56 = reinterpret_cast<unsigned char>(ebx55) << 31;
            esi28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi28) >> 1 | reinterpret_cast<unsigned char>(edx27) << 31);
            ebx55 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx55) >> 1);
            edx27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx27) >> 1 | eax56);
            --edi54;
            v50 = ebx55;
            v49 = esi28;
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edi54) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edi54 == 0)));
        v51 = ebx55;
        v52 = edx27;
        v53 = esi28;
    }
    esi57 = v11;
    eax58 = v35 + 1;
    v59 = eax58;
    edi60 = reinterpret_cast<void***>(esi57 + 4);
    v61 = edi60;
    ecx62 = edi60;
    v63 = ecx62;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax58) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax58 == 0))) {
        while (1) {
            edi64 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v53) + reinterpret_cast<unsigned char>(v53));
            edx65 = reinterpret_cast<unsigned char>(edx27) + reinterpret_cast<unsigned char>(edx27) | reinterpret_cast<unsigned char>(v53) >> 31;
            esi66 = reinterpret_cast<unsigned char>(v51) + reinterpret_cast<unsigned char>(v51) | reinterpret_cast<unsigned char>(edx27) >> 31;
            edi67 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi64) + reinterpret_cast<uint32_t>(edi64));
            edx68 = reinterpret_cast<void**>(edx65 + edx65 | reinterpret_cast<uint32_t>(edi64) >> 31);
            esi69 = reinterpret_cast<void*>(esi66 + esi66 | edx65 >> 31);
            ecx70 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v49) + reinterpret_cast<unsigned char>(edi67));
            v71 = ecx70;
            if (reinterpret_cast<unsigned char>(ecx70) < reinterpret_cast<unsigned char>(edi67) || reinterpret_cast<unsigned char>(ecx70) < reinterpret_cast<unsigned char>(v49)) {
                eax72 = edx68 + 1;
                ecx73 = reinterpret_cast<void**>(0);
                if (reinterpret_cast<unsigned char>(eax72) < reinterpret_cast<unsigned char>(edx68) || reinterpret_cast<unsigned char>(eax72) < reinterpret_cast<unsigned char>(1)) {
                    ecx73 = reinterpret_cast<void**>(1);
                }
                edx68 = eax72;
                ecx70 = v71;
                if (ecx73) {
                    esi69 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi69) + 1);
                }
            }
            edi74 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v52) + reinterpret_cast<unsigned char>(edx68));
            if (reinterpret_cast<unsigned char>(edi74) < reinterpret_cast<unsigned char>(edx68) || reinterpret_cast<unsigned char>(edi74) < reinterpret_cast<unsigned char>(v52)) {
                esi69 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi69) + 1);
            }
            esi75 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi69) + reinterpret_cast<unsigned char>(v50));
            edx76 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v71) + reinterpret_cast<unsigned char>(v71));
            v53 = edx76;
            v49 = edx76;
            edx27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi74) + reinterpret_cast<unsigned char>(edi74) | reinterpret_cast<unsigned char>(ecx70) >> 31);
            v52 = edx27;
            eax77 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi75) + reinterpret_cast<uint32_t>(esi75) | reinterpret_cast<unsigned char>(edi74) >> 31);
            v50 = eax77;
            eax78 = reinterpret_cast<unsigned char>(eax77) >> 24;
            *reinterpret_cast<unsigned char*>(&v50 + 3) = 0;
            *v63 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s83**>(&eax78))->f30);
            ecx62 = v63 + 1;
            eax79 = v59 - 1;
            v63 = ecx62;
            v59 = eax79;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax79) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax79 == 0)) 
                break;
            v51 = v50;
        }
        esi57 = v11;
        edi60 = v61;
    }
    ecx80 = ecx62 - 2;
    if (*reinterpret_cast<signed char*>(ecx62 + 0xffffffff) < 53) {
        while (reinterpret_cast<uint32_t>(ecx80) >= reinterpret_cast<uint32_t>(edi60) && reinterpret_cast<int1_t>(*ecx80 == 48)) {
            --ecx80;
        }
        if (reinterpret_cast<uint32_t>(ecx80) < reinterpret_cast<uint32_t>(edi60)) 
            goto addr_40fc28_76;
    } else {
        while (reinterpret_cast<uint32_t>(ecx80) >= reinterpret_cast<uint32_t>(edi60) && reinterpret_cast<int1_t>(*ecx80 == 57)) {
            *ecx80 = reinterpret_cast<void**>(48);
            --ecx80;
        }
        if (reinterpret_cast<uint32_t>(ecx80) >= reinterpret_cast<uint32_t>(edi60)) 
            goto addr_40fbf2_81; else 
            goto addr_40fbee_82;
    }
    addr_40fbf4_83:
    eax81 = v11;
    cl82 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx80) - *reinterpret_cast<signed char*>(&eax81)) - 3);
    *reinterpret_cast<unsigned char*>(eax81 + 3) = cl82;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<signed char>(cl82) + reinterpret_cast<unsigned char>(eax81) + 4) = 0;
    addr_40fc09_25:
    eax85 = fun_404f47(v10 ^ reinterpret_cast<uint32_t>(ebp8), v83, v84, v15, 0, 0, v11, v20);
    return eax85;
    addr_40fc28_76:
    ecx32 = v11;
    *reinterpret_cast<void***>(ecx32) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ecx32 + 2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&v15) != 0x8000) - 1) & 13) + 32);
    *reinterpret_cast<unsigned char*>(ecx32 + 3) = 1;
    *edi60 = reinterpret_cast<void**>(48);
    addr_40fa55_45:
    *reinterpret_cast<unsigned char*>(ecx32 + 5) = 0;
    goto addr_40fc09_25;
    addr_40fbf2_81:
    *ecx80 = *ecx80 + 1;
    goto addr_40fbf4_83;
    addr_40fbee_82:
    ++ecx80;
    *reinterpret_cast<void***>(esi57) = *reinterpret_cast<void***>(esi57) + 1;
    goto addr_40fbf2_81;
    addr_40f804_37:
    if (*reinterpret_cast<uint16_t*>(&eax44) || ((v43 = edi42 + 1, 1) || (1 || !0))) {
        eax86 = 5;
        do {
            esi87 = eax86;
            if (!(reinterpret_cast<uint1_t>(eax86 < 0) | reinterpret_cast<uint1_t>(eax86 == 0))) {
                v20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp8) + 0xffffffd8);
                do {
                    edi88 = v89;
                    if (edi88 < v89 || edi88 < 0) {
                        eax90 = 1;
                    } else {
                        eax90 = 0;
                    }
                    v89 = edi88;
                    if (eax90) {
                    }
                    --esi87;
                    v20 = v20 - 2;
                } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi87 < 0) | reinterpret_cast<uint1_t>(esi87 == 0)));
                eax86 = v19;
            }
            --eax86;
            v19 = eax86;
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax86 < 0) | reinterpret_cast<uint1_t>(eax86 == 0)));
        esi91 = reinterpret_cast<void**>(0);
        edi92 = v43 + 0xc002;
        if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&edi92) < reinterpret_cast<int16_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi92) == 0))) 
            goto addr_40f8af_96;
    } else {
        addr_40f7d7_35:
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 8) = reinterpret_cast<void**>(0);
        goto addr_40fa11_97;
    }
    addr_40f94e_99:
    edi92 = edi92 + 0xffff;
    if (*reinterpret_cast<int16_t*>(&edi92) >= reinterpret_cast<int16_t>(0)) {
        addr_40f8f3_100:
        cx93 = 0;
    } else {
        eax94 = reinterpret_cast<int32_t>(-edi92);
        eax95 = *reinterpret_cast<uint16_t*>(&eax94);
        v96 = eax95;
        v97 = edi92 + eax95;
        edi98 = reinterpret_cast<void**>(0);
        do {
            if (!1) {
                ++edi98;
            }
            esi91 = reinterpret_cast<void**>(0);
            --v96;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(&v36) = reinterpret_cast<void**>(0);
        } while (v96);
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 8) = reinterpret_cast<void**>(0);
        edi92 = v97;
        if (!edi98) 
            goto addr_40f8f3_100; else 
            goto addr_40f9a6_106;
    }
    addr_40f8f7_107:
    if (cx93 > 0x8000 || !1) {
        if (1) {
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 2) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 2) + 1;
        } else {
            eax99 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 6);
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 2) = reinterpret_cast<void**>(0);
            if (1) {
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 6) = eax99 + 1;
            } else {
                ax100 = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v36) + 10);
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 6) = reinterpret_cast<void**>(0);
                if (ax100 != -1) {
                    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v36) + 10) = reinterpret_cast<int16_t>(ax100 + 1);
                } else {
                    ++edi92;
                    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v36) + 10) = 0x8000;
                }
            }
            esi91 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 8);
        }
    }
    if (*reinterpret_cast<uint16_t*>(&edi92) >= 0x7fff) {
        addr_40f9fa_31:
        eax101 = 0;
        *reinterpret_cast<unsigned char*>(&eax101) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&v37) == 0);
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 8) = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(eax101 - 1) & 0x80000000) + 0x7fff8000);
    } else {
        edi102 = edi92 | v37;
        *reinterpret_cast<int16_t*>(&v17) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v36) + 2);
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 2) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 4);
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 6) = esi91;
        edx27 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 4);
        esi28 = *reinterpret_cast<void***>(&v17);
        *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(&v17) + 10) = *reinterpret_cast<uint16_t*>(&edi102);
        goto addr_40fa15_27;
    }
    addr_40fa11_97:
    esi28 = reinterpret_cast<void**>(0);
    edx27 = reinterpret_cast<void**>(0);
    goto addr_40fa15_27;
    addr_40f9a6_106:
    cx93 = 1;
    goto addr_40f8f7_107;
    addr_40f8af_96:
    do {
        if (0) 
            break;
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 4) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(&v36) = reinterpret_cast<void**>(0);
        esi91 = reinterpret_cast<void**>(0);
        edi92 = edi92 + 0xffff;
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v36) + 8) = reinterpret_cast<void**>(0);
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&edi92) < reinterpret_cast<int16_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi92) == 0)));
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&edi92) < reinterpret_cast<int16_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi92) == 0)) 
        goto addr_40f94e_99; else 
        goto addr_40f8f3_100;
    addr_40f7f9_41:
    *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(&v17) + 10) = 0;
    goto addr_40fa15_27;
    addr_40f444_11:
    esi28 = *reinterpret_cast<void***>(&v17);
    edx27 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 4);
    v103 = esi28;
    while (1) {
        v25 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v25) >> 3);
        edi18 = edi18 + 84;
        v104 = edi18;
        eax105 = eax23 & 7;
        if (!eax105) {
            addr_40f74c_122:
            eax23 = v25;
            if (eax23) 
                continue; else 
                break;
        } else {
            ecx106 = reinterpret_cast<struct s84*>(edi18 + eax105 * 12);
            v107 = ecx106;
            if (reinterpret_cast<unsigned char>(ecx106->f0) >= reinterpret_cast<unsigned char>(0x8000)) {
                ecx106 = reinterpret_cast<struct s84*>(reinterpret_cast<uint32_t>(ebp8) + 0xffffffc4);
                v107 = ecx106;
            }
            edi108 = *reinterpret_cast<uint16_t*>(reinterpret_cast<uint32_t>(ecx106) + 10);
            edi109 = edi108 & 0x7fff;
            eax110 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v17) + 10) & 0x7fff;
            v111 = (edi108 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v17) + 10)) & 0x8000;
            eax112 = eax110 + edi109;
            v113 = edi109;
            edi114 = *reinterpret_cast<uint16_t*>(&eax112);
            eax115 = eax110;
            esi28 = v103;
            *reinterpret_cast<void***>(&v116) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 8) = reinterpret_cast<void**>(0);
            v117 = edi114;
            if (*reinterpret_cast<uint16_t*>(&eax115) >= 0x7fff) 
                goto addr_40f725_135;
            if (*reinterpret_cast<uint16_t*>(&v113) >= 0x7fff) 
                goto addr_40f725_135;
            if (*reinterpret_cast<uint16_t*>(&edi114) > 0xbffd) 
                goto addr_40f725_135;
            if (*reinterpret_cast<uint16_t*>(&edi114) <= 0x3fbf) 
                goto addr_40f4ef_139;
            if (*reinterpret_cast<uint16_t*>(&eax115)) 
                goto addr_40f51c_141;
            ++edi114;
            v117 = edi114;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 8)) & 0x7fffffff) 
                goto addr_40f51c_141;
            if (edx27) 
                goto addr_40f51c_141;
            if (!esi28) 
                goto addr_40f511_145;
        }
        addr_40f51c_141:
        if (*reinterpret_cast<uint16_t*>(&v113) || ((zf118 = (v107->f8 & 0x7fffffff) == 0, v117 = edi114 + 1, !zf118) || (v107->f4 || v107->f0))) {
            eax119 = reinterpret_cast<void**>(0);
            esi120 = 5;
            v84 = reinterpret_cast<void**>(0);
            v121 = 5;
            do {
                if (!(reinterpret_cast<uint1_t>(esi120 < 0) | reinterpret_cast<uint1_t>(esi120 == 0))) {
                    v83 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp8) + 0xffffffe0 + reinterpret_cast<unsigned char>(eax119) * 2);
                    esi122 = esi120;
                    do {
                        ecx123 = v124;
                        if (ecx123 < v124 || ecx123 < 0) {
                            ecx125 = reinterpret_cast<void**>(1);
                        } else {
                            ecx125 = reinterpret_cast<void**>(0);
                        }
                        v124 = ecx123;
                        if (ecx125) {
                        }
                        v83 = v83 + 2;
                        --esi122;
                    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi122 < 0) | reinterpret_cast<uint1_t>(esi122 == 0)));
                    esi120 = v121;
                    eax119 = v84;
                }
                ++eax119;
                --esi120;
                v84 = eax119;
                v121 = esi120;
            } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi120 < 0) | reinterpret_cast<uint1_t>(esi120 == 0)));
            edi126 = v117 + 0xc002;
            if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&edi126) < reinterpret_cast<int16_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi126) == 0))) 
                goto addr_40f5f0_158;
        } else {
            addr_40f4ef_139:
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 8) = reinterpret_cast<void**>(0);
            goto addr_40f73c_159;
        }
        addr_40f62b_160:
        edi126 = edi126 + 0xffff;
        if (*reinterpret_cast<int16_t*>(&edi126) >= reinterpret_cast<int16_t>(0)) {
            addr_40f69c_161:
            ax127 = 0;
        } else {
            eax128 = reinterpret_cast<int32_t>(-edi126);
            eax129 = *reinterpret_cast<uint16_t*>(&eax128);
            v130 = eax129;
            v131 = edi126 + eax129;
            edi132 = reinterpret_cast<void**>(0);
            do {
                if (!1) {
                    ++edi132;
                }
                --v130;
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 8) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 4) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(&v116) = reinterpret_cast<void**>(0);
            } while (v130);
            edi126 = v131;
            if (!edi132) 
                goto addr_40f69c_161; else 
                goto addr_40f68d_167;
        }
        addr_40f6a0_168:
        if (ax127 > 0x8000 || !1) {
            if (1) {
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 2) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 2) + 1;
                goto addr_40f6f8_171;
            } else {
                eax133 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 6);
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 2) = reinterpret_cast<void**>(0);
                if (1) {
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 6) = eax133 + 1;
                } else {
                    ax134 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(&v116) + 10);
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 6) = reinterpret_cast<void**>(0);
                    if (ax134 != 0xffff) {
                        *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(&v116) + 10) = reinterpret_cast<uint16_t>(ax134 + 1);
                    } else {
                        *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(&v116) + 10) = 0x8000;
                        ++edi126;
                    }
                }
                ecx135 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 8);
            }
        } else {
            addr_40f6f8_171:
            ecx135 = reinterpret_cast<void**>(0);
        }
        if (*reinterpret_cast<uint16_t*>(&edi126) >= 0x7fff) {
            addr_40f725_135:
            eax136 = 0;
            *reinterpret_cast<unsigned char*>(&eax136) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&v111) == 0);
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 8) = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(eax136 - 1) & 0x80000000) + 0x7fff8000);
        } else {
            edi137 = edi126 | v111;
            *reinterpret_cast<int16_t*>(&v17) = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v116) + 2);
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 2) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 4);
            esi28 = *reinterpret_cast<void***>(&v17);
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 6) = ecx135;
            edx27 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v17) + 4);
            *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(&v17) + 10) = *reinterpret_cast<uint16_t*>(&edi137);
            goto addr_40f746_180;
        }
        addr_40f73c_159:
        esi28 = reinterpret_cast<void**>(0);
        edx27 = reinterpret_cast<void**>(0);
        addr_40f746_180:
        v103 = esi28;
        addr_40f749_181:
        edi18 = v104;
        goto addr_40f74c_122;
        addr_40f68d_167:
        ax127 = 1;
        goto addr_40f6a0_168;
        do {
            addr_40f5f0_158:
            if (0) 
                break;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(&v116) = reinterpret_cast<void**>(0);
            edi126 = edi126 + 0xffff;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v116) + 8) = reinterpret_cast<void**>(0);
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&edi126) < reinterpret_cast<int16_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi126) == 0)));
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&edi126) < reinterpret_cast<int16_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&edi126) == 0))) 
            goto addr_40f69c_161; else 
            goto addr_40f62b_160;
        addr_40f511_145:
        *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(&v17) + 10) = 0;
        goto addr_40f749_181;
    }
    ecx22 = v24;
    goto addr_40f762_26;
    addr_40f3a1_16:
    eax146 = fun_40aa84(a2, a7 + 4, 22, v29, edi138, esi139, ebx140, v141, v142, v15, v143, v144, v11, v145);
    if (eax146) {
        addr_40fc53_185:
        fun_402c87(a2);
    } else {
        *reinterpret_cast<unsigned char*>(a7 + 3) = 6;
        goto addr_40f3bb_187;
    }
    if (!1) {
    }
    if (!1) {
    }
    if (!1) {
    }
    if (!1) {
    }
    if (!1) {
    }
    if (!1) {
    }
    if (!1) {
        if (!0) {
            if (!0) {
                if (!1) {
                }
            }
        }
    }
    if (!0) {
        if (0) {
            goto 0;
        } else {
            if (!1) {
                goto 0;
            }
        }
    }
    goto 0;
    addr_40f3bb_187:
    goto addr_40fc09_25;
    addr_40f380_18:
    eax152 = fun_40aa84(a2, a7 + 4, 22, v30, edi138, esi139, ebx140, v147, v148, v15, v149, v150, v11, v151);
    if (eax152) 
        goto addr_40fc53_185;
    *reinterpret_cast<unsigned char*>(a7 + 3) = 5;
    goto addr_40f3bb_187;
}

uint16_t fun_41000b(void** a1);

void** fun_40fd09(void** a1, void** a2) {
    uint16_t ax3;
    uint16_t v4;
    void** ecx5;
    uint32_t esi6;
    uint32_t edx7;
    uint32_t esi8;
    void** esi9;
    uint16_t ax10;
    uint32_t eax11;
    uint32_t edx12;
    uint32_t ecx13;
    uint32_t edx14;
    int1_t less15;

    __asm__("wait ");
    __asm__("fnstcw word [ebp-0x4]");
    ax3 = v4;
    ecx5 = reinterpret_cast<void**>(0);
    if (*reinterpret_cast<unsigned char*>(&ax3) & 1) {
        ecx5 = reinterpret_cast<void**>(16);
    }
    if (*reinterpret_cast<unsigned char*>(&ax3) & 4) {
        ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) | 8);
    }
    if (*reinterpret_cast<unsigned char*>(&ax3) & 8) {
        ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) | 4);
    }
    if (*reinterpret_cast<unsigned char*>(&ax3) & 16) {
        ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) | 2);
    }
    if (*reinterpret_cast<unsigned char*>(&ax3) & 32) {
        ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) | 1);
    }
    if (*reinterpret_cast<unsigned char*>(&ax3) & 2) {
        ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) | 0x80000);
    }
    esi6 = ax3;
    edx7 = esi6 & 0xc00;
    if (edx7) {
        if (edx7 == 0x400) {
            ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) | 0x100);
        } else {
            if (edx7 == 0x800) {
                ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) | 0x200);
            } else {
                if (edx7 == 0xc00) {
                    ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) | 0x300);
                }
            }
        }
    }
    esi8 = esi6 & 0x300;
    if (!esi8) {
        ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) | 0x20000);
    } else {
        if (esi8 == 0x200) {
            ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) | 0x10000);
        }
    }
    if (0x1000 & static_cast<uint32_t>(ax3)) {
        ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) | 0x40000);
    }
    esi9 = reinterpret_cast<void**>(~reinterpret_cast<unsigned char>(a2) & reinterpret_cast<unsigned char>(ecx5) | reinterpret_cast<unsigned char>(a1) & reinterpret_cast<unsigned char>(a2));
    if (esi9 != ecx5) {
        ax10 = fun_41000b(esi9);
        __asm__("fldcw word [ebp-0x8]");
        __asm__("wait ");
        __asm__("fnstcw word [ebp-0x8]");
        eax11 = ax10;
        esi9 = reinterpret_cast<void**>(0);
        if (*reinterpret_cast<unsigned char*>(&eax11) & 1) {
            esi9 = reinterpret_cast<void**>(16);
        }
        if (*reinterpret_cast<unsigned char*>(&eax11) & 4) {
            esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi9) | 8);
        }
        if (*reinterpret_cast<unsigned char*>(&eax11) & 8) {
            esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi9) | 4);
        }
        if (*reinterpret_cast<unsigned char*>(&eax11) & 16) {
            esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi9) | 2);
        }
        if (*reinterpret_cast<unsigned char*>(&eax11) & 32) {
            esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi9) | 1);
        }
        if (*reinterpret_cast<unsigned char*>(&eax11) & 2) {
            esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi9) | 0x80000);
        }
        edx12 = *reinterpret_cast<uint16_t*>(&eax11);
        ecx13 = edx12 & 0xc00;
        if (ecx13) {
            if (ecx13 == 0x400) {
                esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi9) | 0x100);
            } else {
                if (ecx13 == 0x800) {
                    esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi9) | 0x200);
                } else {
                    if (ecx13 == 0xc00) {
                        esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi9) | 0x300);
                    }
                }
            }
        }
        edx14 = edx12 & 0x300;
        if (!edx14) {
            esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi9) | 0x20000);
        } else {
            if (edx14 == 0x200) {
                esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi9) | 0x10000);
            }
        }
        if (0x1000 & eax11) {
            esi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi9) | 0x40000);
        }
    }
    less15 = reinterpret_cast<int32_t>(g419ee8) < reinterpret_cast<int32_t>(1);
    if (less15) {
        return esi9;
    }
}

uint16_t fun_41000b(void** a1) {
    void** ecx2;
    uint32_t eax3;
    uint32_t edx4;
    uint32_t edx5;

    ecx2 = a1;
    eax3 = 0;
    if (*reinterpret_cast<unsigned char*>(&ecx2) & 16) {
        eax3 = 1;
    }
    if (*reinterpret_cast<unsigned char*>(&ecx2) & 8) {
        eax3 = eax3 | 4;
    }
    if (*reinterpret_cast<unsigned char*>(&ecx2) & 4) {
        eax3 = eax3 | 8;
    }
    if (*reinterpret_cast<unsigned char*>(&ecx2) & 2) {
        eax3 = eax3 | 16;
    }
    if (*reinterpret_cast<unsigned char*>(&ecx2) & 1) {
        eax3 = eax3 | 32;
    }
    if (reinterpret_cast<unsigned char>(ecx2) & 0x80000) {
        eax3 = eax3 | 2;
    }
    edx4 = reinterpret_cast<unsigned char>(ecx2) & 0x300;
    if (edx4) {
        if (edx4 == 0x100) {
            eax3 = eax3 | 0x400;
        } else {
            if (edx4 == 0x200) {
                eax3 = eax3 | 0x800;
            } else {
                if (edx4 == 0x300) {
                    eax3 = eax3 | 0xc00;
                }
            }
        }
    }
    edx5 = reinterpret_cast<unsigned char>(ecx2) & 0x30000;
    if (!edx5) {
        eax3 = eax3 | 0x300;
    } else {
        if (edx5 == 0x10000) {
            eax3 = eax3 | 0x200;
        }
    }
    if (reinterpret_cast<unsigned char>(ecx2) & 0x40000) {
        eax3 = eax3 | 0x1000;
    }
    return *reinterpret_cast<uint16_t*>(&eax3);
}

uint32_t fun_40fc60(uint32_t a1, int32_t a2) {
    uint32_t ecx3;
    uint32_t eax4;
    uint32_t edx5;
    uint32_t ecx6;

    ecx3 = a1;
    eax4 = 0;
    if (*reinterpret_cast<unsigned char*>(&ecx3) & 16) {
        eax4 = 0x80;
    }
    if (*reinterpret_cast<unsigned char*>(&ecx3) & 8) {
        eax4 = eax4 | 0x200;
    }
    if (*reinterpret_cast<unsigned char*>(&ecx3) & 4) {
        eax4 = eax4 | 0x400;
    }
    if (*reinterpret_cast<unsigned char*>(&ecx3) & 2) {
        eax4 = eax4 | 0x800;
    }
    if (*reinterpret_cast<unsigned char*>(&ecx3) & 1) {
        eax4 = eax4 | 0x1000;
    }
    if (ecx3 & 0x80000) {
        eax4 = eax4 | 0x100;
    }
    edx5 = ecx3 & 0x300;
    if (edx5) {
        if (edx5 == 0x100) {
            eax4 = eax4 | 0x2000;
        } else {
            if (edx5 == 0x200) {
                eax4 = eax4 | 0x4000;
            } else {
                if (edx5 == 0x300) {
                    eax4 = eax4 | 0x6000;
                }
            }
        }
    }
    ecx6 = ecx3 & 0x3000000;
    if (ecx6 == 0x1000000) {
        eax4 = eax4 | 0x8040;
    } else {
        if (ecx6 == 0x2000000) {
            return eax4 | 64;
        } else {
            if (ecx6 == 0x3000000) {
                return eax4 | 0x8000;
            }
        }
    }
    return eax4;
}

struct s85 {
    signed char[8] pad8;
    int32_t f8;
};

uint32_t g4191a8 = 1;

void fun_4100a2(int16_t cx) {
    int1_t less2;
    int32_t eax3;
    struct s85* ebp4;
    int1_t zf5;
    unsigned char* edi6;
    unsigned char* edi7;
    int32_t ebp8;

    fun_404590(0x4179e0, 8, __return_address());
    less2 = reinterpret_cast<int32_t>(g419ee8) < reinterpret_cast<int32_t>(1);
    if (!less2) {
        eax3 = ebp4->f8;
        if (!(*reinterpret_cast<unsigned char*>(&eax3) & 64) || (zf5 = g4191a8 == 0, zf5)) {
            *edi6 = reinterpret_cast<unsigned char>(*edi7 | *reinterpret_cast<unsigned char*>(&cx));
        } else {
            *reinterpret_cast<uint32_t*>(ebp8 - 4) = 0;
        }
    }
    goto IsProcessorFeaturePresent;
}

struct s86 {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
    unsigned char f4;
    unsigned char f5;
    unsigned char f6;
    unsigned char f7;
    unsigned char f8;
    unsigned char f9;
    unsigned char fa;
    unsigned char fb;
    unsigned char fc;
    unsigned char fd;
    unsigned char fe;
    unsigned char ff;
};

struct s87 {
    signed char f0;
    signed char f1;
    signed char f2;
    signed char f3;
    signed char f4;
    signed char f5;
    signed char f6;
    signed char f7;
    signed char f8;
    signed char f9;
    signed char fa;
    signed char fb;
    signed char fc;
    signed char fd;
    signed char fe;
    signed char ff;
};

void fun_4011c0(struct s86* ecx, void** a2) {
    uint32_t eax3;
    struct s87* v4;
    struct s87* edx5;
    uint32_t edx6;
    uint32_t eax7;
    uint32_t ebx8;
    uint32_t v9;
    uint32_t ebx10;
    uint32_t eax11;
    uint32_t v12;
    uint32_t ebx13;
    uint32_t edx14;
    uint32_t v15;
    uint32_t eax16;
    uint32_t v17;
    uint32_t v18;
    uint32_t ecx19;
    uint32_t eax20;
    uint32_t ecx21;
    uint32_t v22;
    uint32_t ecx23;
    void** edi24;
    int32_t eax25;
    uint32_t v26;
    int32_t v27;
    uint32_t edx28;
    uint32_t eax29;
    uint32_t v30;
    uint32_t v31;
    uint32_t ecx32;
    uint32_t ebx33;
    uint32_t eax34;
    uint32_t edx35;
    uint32_t eax36;
    uint32_t v37;
    uint32_t ecx38;
    uint32_t eax39;
    uint32_t ecx40;
    uint32_t ecx41;
    uint32_t ebx42;
    uint32_t edx43;
    uint32_t eax44;
    uint32_t ecx45;
    uint32_t eax46;
    uint32_t eax47;
    uint32_t eax48;
    uint32_t ecx49;
    uint32_t eax50;
    uint32_t eax51;
    uint32_t eax52;
    uint32_t ecx53;
    uint32_t eax54;
    uint32_t eax55;
    uint32_t eax56;
    uint32_t eax57;
    uint32_t eax58;
    uint32_t ecx59;
    uint32_t eax60;
    uint32_t eax61;
    uint32_t eax62;

    eax3 = ecx->f1;
    v4 = edx5;
    edx6 = ((static_cast<uint32_t>(ecx->f0) << 8 ^ eax3) << 8 ^ static_cast<uint32_t>(ecx->f2)) << 8 ^ static_cast<uint32_t>(ecx->f3);
    eax7 = ecx->f5;
    ebx8 = ecx->f8;
    v9 = edx6 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2));
    ebx10 = ebx8 << 8 ^ static_cast<uint32_t>(ecx->f9);
    eax11 = ecx->fa;
    v12 = ((static_cast<uint32_t>(ecx->f4) << 8 ^ eax7) << 8 ^ static_cast<uint32_t>(ecx->f6)) << 8 ^ static_cast<uint32_t>(ecx->f7) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4));
    ebx13 = (ebx10 << 8 ^ eax11) << 8 ^ static_cast<uint32_t>(ecx->fb) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 8));
    edx14 = ((static_cast<uint32_t>(ecx->fc) << 8 ^ static_cast<uint32_t>(ecx->fd)) << 8 ^ static_cast<uint32_t>(ecx->fe)) << 8 ^ static_cast<uint32_t>(ecx->ff) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12));
    v15 = *reinterpret_cast<uint32_t*>((ebx13 >> 8 & 0xff) * 4 + 0x416930) ^ *reinterpret_cast<uint32_t*>((v12 >> 16 & 0xff) * 4 + 0x416d30) ^ *reinterpret_cast<uint32_t*>((v9 >> 24) * 4 + 0x417130) ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&edx14) * 4 + 0x416530) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 16));
    eax16 = v9;
    v17 = *reinterpret_cast<uint32_t*>((edx14 >> 8 & 0xff) * 4 + 0x416930) ^ *reinterpret_cast<uint32_t*>((ebx13 >> 16 & 0xff) * 4 + 0x416d30) ^ *reinterpret_cast<uint32_t*>((v12 >> 24) * 4 + 0x417130) ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&eax16) * 4 + 0x416530) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 20));
    v18 = *reinterpret_cast<uint32_t*>((edx14 >> 16 & 0xff) * 4 + 0x416d30) ^ *reinterpret_cast<uint32_t*>((v9 >> 8 & 0xff) * 4 + 0x416930) ^ *reinterpret_cast<uint32_t*>((ebx13 >> 24) * 4 + 0x417130);
    ecx19 = v12;
    eax20 = v18 ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&ecx19) * 4 + 0x416530);
    ecx21 = *reinterpret_cast<uint32_t*>((ecx19 >> 8 & 0xff) * 4 + 0x416930);
    v22 = eax20 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 24));
    ecx23 = ecx21 ^ *reinterpret_cast<uint32_t*>((v9 >> 16 & 0xff) * 4 + 0x416d30) ^ *reinterpret_cast<uint32_t*>((edx14 >> 24) * 4 + 0x417130) ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&ebx13) * 4 + 0x416530) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 28));
    edi24 = a2 + 32;
    eax25 = (reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2 + 0xf0)) >> 1) - 1;
    v26 = ecx23;
    v27 = eax25;
    if (eax25) {
        do {
            edx28 = v15;
            eax29 = v26;
            v30 = *reinterpret_cast<uint32_t*>((v22 >> 8 & 0xff) * 4 + 0x416930) ^ *reinterpret_cast<uint32_t*>((v17 >> 16 & 0xff) * 4 + 0x416d30) ^ *reinterpret_cast<uint32_t*>((edx28 >> 24) * 4 + 0x417130) ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&eax29) * 4 + 0x416530) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi24));
            v31 = *reinterpret_cast<uint32_t*>((v26 >> 8 & 0xff) * 4 + 0x416930) ^ *reinterpret_cast<uint32_t*>((v22 >> 16 & 0xff) * 4 + 0x416d30) ^ *reinterpret_cast<uint32_t*>((v17 >> 24) * 4 + 0x417130) ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&edx28) * 4 + 0x416530) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi24 + 4));
            ecx32 = v17;
            ebx33 = *reinterpret_cast<uint32_t*>((v26 >> 16 & 0xff) * 4 + 0x416d30) ^ *reinterpret_cast<uint32_t*>((edx28 >> 8 & 0xff) * 4 + 0x416930) ^ *reinterpret_cast<uint32_t*>((v22 >> 24) * 4 + 0x417130) ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&ecx32) * 4 + 0x416530) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi24 + 8));
            eax34 = v22;
            edx35 = *reinterpret_cast<uint32_t*>((ecx32 >> 8 & 0xff) * 4 + 0x416930) ^ *reinterpret_cast<uint32_t*>((edx28 >> 16 & 0xff) * 4 + 0x416d30) ^ *reinterpret_cast<uint32_t*>((v26 >> 24) * 4 + 0x417130) ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&eax34) * 4 + 0x416530) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi24 + 12));
            v15 = *reinterpret_cast<uint32_t*>((ebx33 >> 8 & 0xff) * 4 + 0x416930) ^ *reinterpret_cast<uint32_t*>((v31 >> 16 & 0xff) * 4 + 0x416d30) ^ *reinterpret_cast<uint32_t*>((v30 >> 24) * 4 + 0x417130) ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&edx35) * 4 + 0x416530) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi24 + 16));
            eax36 = v30;
            v17 = *reinterpret_cast<uint32_t*>((edx35 >> 8 & 0xff) * 4 + 0x416930) ^ *reinterpret_cast<uint32_t*>((ebx33 >> 16 & 0xff) * 4 + 0x416d30) ^ *reinterpret_cast<uint32_t*>((v31 >> 24) * 4 + 0x417130) ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&eax36) * 4 + 0x416530) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi24 + 20));
            v37 = *reinterpret_cast<uint32_t*>((edx35 >> 16 & 0xff) * 4 + 0x416d30) ^ *reinterpret_cast<uint32_t*>((v30 >> 8 & 0xff) * 4 + 0x416930) ^ *reinterpret_cast<uint32_t*>((ebx33 >> 24) * 4 + 0x417130);
            ecx38 = v31;
            eax39 = v37 ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&ecx38) * 4 + 0x416530);
            ecx40 = *reinterpret_cast<uint32_t*>((ecx38 >> 8 & 0xff) * 4 + 0x416930);
            v22 = eax39 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi24 + 24));
            ecx41 = ecx40 ^ *reinterpret_cast<uint32_t*>((v30 >> 16 & 0xff) * 4 + 0x416d30) ^ *reinterpret_cast<uint32_t*>((edx35 >> 24) * 4 + 0x417130) ^ *reinterpret_cast<uint32_t*>(*reinterpret_cast<unsigned char*>(&ebx33) * 4 + 0x416530) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi24 + 28));
            edi24 = edi24 + 32;
            --v27;
            v26 = ecx41;
        } while (v27);
    }
    ebx42 = v17;
    edx43 = v15;
    eax44 = v26;
    ecx45 = *reinterpret_cast<uint32_t*>((ebx42 >> 16 & 0xff) * 4 + 0x416130) & 0xff0000 ^ *reinterpret_cast<uint32_t*>((v22 >> 8 & 0xff) * 4 + 0x416130) & 0xff00 ^ *reinterpret_cast<uint32_t*>((edx43 >> 24) * 4 + 0x416130) & 0xff000000 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(*reinterpret_cast<unsigned char*>(&eax44) * 4 + 0x416130)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi24));
    v4->f3 = *reinterpret_cast<signed char*>(&ecx45);
    eax46 = ecx45 >> 24;
    v4->f0 = *reinterpret_cast<signed char*>(&eax46);
    eax47 = ecx45 >> 16;
    v4->f1 = *reinterpret_cast<signed char*>(&eax47);
    eax48 = ecx45 >> 8;
    v4->f2 = *reinterpret_cast<signed char*>(&eax48);
    ecx49 = *reinterpret_cast<uint32_t*>((v22 >> 16 & 0xff) * 4 + 0x416130) & 0xff0000 ^ *reinterpret_cast<uint32_t*>((v26 >> 8 & 0xff) * 4 + 0x416130) & 0xff00 ^ *reinterpret_cast<uint32_t*>((ebx42 >> 24) * 4 + 0x416130) & 0xff000000 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(*reinterpret_cast<unsigned char*>(&edx43) * 4 + 0x416130)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi24 + 4));
    v4->f7 = *reinterpret_cast<signed char*>(&ecx49);
    eax50 = ecx49 >> 24;
    v4->f4 = *reinterpret_cast<signed char*>(&eax50);
    eax51 = ecx49 >> 16;
    v4->f5 = *reinterpret_cast<signed char*>(&eax51);
    eax52 = ecx49 >> 8;
    v4->f6 = *reinterpret_cast<signed char*>(&eax52);
    ecx53 = *reinterpret_cast<uint32_t*>((v26 >> 16 & 0xff) * 4 + 0x416130) & 0xff0000 ^ *reinterpret_cast<uint32_t*>((edx43 >> 8 & 0xff) * 4 + 0x416130) & 0xff00 ^ *reinterpret_cast<uint32_t*>((v22 >> 24) * 4 + 0x416130) & 0xff000000 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(*reinterpret_cast<unsigned char*>(&ebx42) * 4 + 0x416130)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi24 + 8));
    eax54 = ecx53 >> 24;
    v4->f8 = *reinterpret_cast<signed char*>(&eax54);
    eax55 = ecx53 >> 16;
    v4->f9 = *reinterpret_cast<signed char*>(&eax55);
    eax56 = ecx53 >> 8;
    v4->fa = *reinterpret_cast<signed char*>(&eax56);
    eax57 = *reinterpret_cast<uint32_t*>((ebx42 >> 8 & 0xff) * 4 + 0x416130) & 0xff00;
    v4->fb = *reinterpret_cast<signed char*>(&ecx53);
    eax58 = v22;
    ecx59 = *reinterpret_cast<uint32_t*>((edx43 >> 16 & 0xff) * 4 + 0x416130) & 0xff0000 ^ eax57 ^ *reinterpret_cast<uint32_t*>((v26 >> 24) * 4 + 0x416130) & 0xff000000 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(*reinterpret_cast<unsigned char*>(&eax58) * 4 + 0x416130)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi24 + 12));
    v4->ff = *reinterpret_cast<signed char*>(&ecx59);
    eax60 = ecx59 >> 24;
    v4->fc = *reinterpret_cast<signed char*>(&eax60);
    eax61 = ecx59 >> 16;
    v4->fd = *reinterpret_cast<signed char*>(&eax61);
    eax62 = ecx59 >> 8;
    v4->fe = *reinterpret_cast<signed char*>(&eax62);
    return;
}

void*** fun_401c00(void*** a1, void** a2, uint32_t a3) {
    uint32_t ecx4;
    uint32_t ebx5;
    void** esi6;
    void*** edi7;
    uint32_t ecx8;
    void** eax9;
    uint32_t ecx10;
    void** edx11;

    ecx4 = a3;
    if (!ecx4) {
        addr_401c9f_2:
        return a1;
    } else {
        ebx5 = ecx4;
        esi6 = a2;
        edi7 = a1;
        if (!(reinterpret_cast<unsigned char>(esi6) & 3)) {
            ecx8 = ecx4 >> 2;
            if (!ecx8) {
                goto addr_401c53_6;
            }
        }
        do {
            eax9 = *reinterpret_cast<void***>(esi6);
            ++esi6;
            *edi7 = eax9;
            ++edi7;
            --ecx4;
            if (!ecx4) 
                goto addr_401c66_8;
            if (!eax9) 
                break;
        } while (reinterpret_cast<unsigned char>(esi6) & 3);
        goto addr_401c47_11;
    }
    if (reinterpret_cast<uint32_t>(edi7) & 3) {
        do {
            *edi7 = eax9;
            ++edi7;
            --ecx4;
            if (!ecx4) 
                goto addr_401d1c_14;
        } while (reinterpret_cast<uint32_t>(edi7) & 3);
    }
    ebx5 = ecx4;
    ecx10 = ecx4 >> 2;
    if (ecx10) 
        goto addr_401d07_17; else 
        goto addr_401c93_18;
    addr_401c47_11:
    ebx5 = ecx4;
    ecx8 = ecx4 >> 2;
    if (ecx8) {
        do {
            edx11 = *reinterpret_cast<void***>(esi6);
            esi6 = esi6 + 4;
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi6)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(esi6) + 0x7efefeff)) & 0x81010100) {
                if (!*reinterpret_cast<signed char*>(&edx11)) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx11 + 1)) 
                    goto addr_401cef_22;
                if (!(reinterpret_cast<unsigned char>(edx11) & 0xff0000)) 
                    goto addr_401ce5_24;
                if (!(reinterpret_cast<unsigned char>(edx11) & 0xff000000)) 
                    goto addr_401ce1_26;
            }
            *edi7 = edx11;
            edi7 = edi7 + 4;
            --ecx8;
        } while (ecx8);
        goto addr_401c4e_28;
    } else {
        addr_401c4e_28:
        ebx5 = ebx5 & 3;
        if (!ebx5) {
            addr_401c66_8:
            return a1;
        } else {
            do {
                addr_401c53_6:
                eax9 = *reinterpret_cast<void***>(esi6);
                ++esi6;
                *edi7 = eax9;
                ++edi7;
                if (!eax9) 
                    goto addr_401c98_29;
                --ebx5;
            } while (ebx5);
            goto addr_401c66_8;
        }
    }
    *edi7 = reinterpret_cast<void**>(0);
    addr_401cfd_32:
    edi7 = edi7 + 4;
    eax9 = reinterpret_cast<void**>(0);
    ecx10 = ecx8 - 1;
    if (!ecx10) {
        addr_401d13_33:
        ebx5 = ebx5 & 3;
        if (ebx5) {
            do {
                addr_401c93_18:
                *edi7 = eax9;
                ++edi7;
                addr_401c98_29:
                --ebx5;
            } while (ebx5);
        } else {
            addr_401d1c_14:
            return a1;
        }
    } else {
        addr_401d07_17:
        eax9 = reinterpret_cast<void**>(0);
        goto addr_401d09_34;
    }
    goto addr_401c9f_2;
    do {
        addr_401d09_34:
        *edi7 = reinterpret_cast<void**>(0);
        edi7 = edi7 + 4;
        --ecx10;
    } while (ecx10);
    goto addr_401d13_33;
    addr_401cef_22:
    *edi7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx11) & 0xff);
    goto addr_401cfd_32;
    addr_401ce5_24:
    *edi7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx11) & 0xffff);
    goto addr_401cfd_32;
    addr_401ce1_26:
    *edi7 = edx11;
    goto addr_401cfd_32;
}

void** fun_401960(void** ecx) {
    void* ebp2;
    int32_t ebx3;
    int32_t edx4;
    void** edi5;
    void** edx6;
    int32_t esi7;
    void*** v8;
    uint32_t eax9;
    signed char v10;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebx3 = edx4;
    edi5 = ecx;
    edx6 = ecx + 1;
    do {
        ++ecx;
    } while (*reinterpret_cast<void***>(ecx));
    if (reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(edx6) != 32) {
        return *reinterpret_cast<void***>(ecx);
    }
    esi7 = 0;
    do {
        v8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp2) + 0xfffffffc);
        fun_401c00(v8, edi5, 2);
        eax9 = fun_401d24(reinterpret_cast<int32_t>(ebp2) + 0xfffffffc, "%2X", reinterpret_cast<int32_t>(ebp2) - 8, v8, edi5, 2);
        if (eax9 != 1) 
            break;
        edi5 = edi5 + 2;
        *reinterpret_cast<signed char*>(esi7 + ebx3) = v10;
        ++esi7;
    } while (esi7 < 16);
    goto addr_4019c5_8;
    return 0;
    addr_4019c5_8:
    return 1;
}

struct s88 {
    signed char[8] pad8;
    void** f8;
};

struct s89 {
    signed char[12] pad12;
    void** fc;
};

struct s90 {
    signed char[8] pad8;
    void** f8;
};

struct s91 {
    signed char[16] pad16;
    void** f10;
};

void** fun_40430f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void fun_401e71();

void** fun_401db5(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int32_t ebp15;
    int32_t eax16;
    void** edi17;
    struct s88* ebp18;
    int32_t eax19;
    void** ebx20;
    struct s89* ebp21;
    int32_t eax22;
    void** eax23;
    void** eax24;
    struct s90* ebp25;
    int32_t ebp26;
    void** v27;
    struct s91* ebp28;
    void** eax29;
    int32_t ebp30;
    int32_t ebp31;
    void** eax32;
    void* ebp33;
    void** eax34;

    fun_404590(0x4175c0, 12, __return_address());
    *reinterpret_cast<uint32_t*>(ebp15 - 28) = 0;
    eax16 = 0;
    edi17 = ebp18->f8;
    *reinterpret_cast<unsigned char*>(&eax16) = reinterpret_cast<uint1_t>(!!edi17);
    if (!eax16 || ((eax19 = 0, ebx20 = ebp21->fc, *reinterpret_cast<unsigned char*>(&eax19) = reinterpret_cast<uint1_t>(!!ebx20), eax19 == 0) || (eax22 = 0, *reinterpret_cast<void***>(&eax22) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!*reinterpret_cast<void***>(ebx20)))), eax22 == 0))) {
        eax23 = fun_404026(ecx, 0x4175c0, 12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(22);
        fun_402c77(ecx);
    } else {
        eax24 = fun_4041f0(ecx, 0x4175c0, 12, __return_address(), a2, a3, a4, a5, a6, a7);
        ebp25->f8 = eax24;
        if (eax24) {
            *reinterpret_cast<uint32_t*>(ebp26 - 4) = 0;
            if (*reinterpret_cast<void***>(edi17)) {
                v27 = ebp28->f10;
                eax29 = fun_40430f(ecx, edi17, ebx20, v27, eax24, 0x4175c0, 12, __return_address(), a2, a3);
                *reinterpret_cast<void***>(ebp30 - 28) = eax29;
                *reinterpret_cast<int32_t*>(ebp31 - 4) = -2;
                fun_401e71();
                goto addr_401e65_6;
            } else {
                eax32 = fun_404026(ecx, 0x4175c0, 12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
                *reinterpret_cast<void***>(eax32) = reinterpret_cast<void**>(22);
                fun_404790(0x4183f0, reinterpret_cast<int32_t>(ebp33) + 0xfffffff0, 0xfe);
            }
        } else {
            eax34 = fun_404026(ecx, 0x4175c0, 12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
            *reinterpret_cast<void***>(eax34) = reinterpret_cast<void**>(24);
        }
    }
    addr_401e65_6:
    fun_4045d5(ecx, 0x4175c0, 12, __return_address(), a2);
    goto 0x4175c0;
}

uint32_t fun_401e8e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    uint32_t edi14;
    void** edi15;
    void** esi16;
    void** ebp17;
    uint32_t eax18;
    void** eax19;
    int32_t eax20;
    void** v21;
    uint32_t eax22;
    void** eax23;

    edi14 = 0xffffffff;
    if (a2) {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0x83) {
            eax18 = fun_404af1(ecx, a2, edi15, esi16, ebp17, __return_address(), a2);
            edi14 = eax18;
            fun_404a7b(ecx, a2, a2, edi15, esi16, ebp17, __return_address(), a2);
            eax19 = fun_4048e2(ecx, a2, a2, a2, edi15, esi16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            eax20 = fun_404906(ecx, eax19, a2, a2, a2, edi15, esi16, ebp17, __return_address(), a2, a3, a4, a5, a6);
            if (eax20 >= 0) {
                if (*reinterpret_cast<void***>(a2 + 28)) {
                    v21 = *reinterpret_cast<void***>(a2 + 28);
                    fun_40295d(ecx, v21, edi15, esi16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7);
                    *reinterpret_cast<void***>(a2 + 28) = reinterpret_cast<void**>(0);
                }
            } else {
                edi14 = 0xffffffff;
            }
        }
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(0);
        eax22 = edi14;
    } else {
        eax23 = fun_404026(ecx, edi15, esi16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(22);
        fun_402c77(ecx);
        eax22 = 0xffffffff;
    }
    return eax22;
}

void fun_404590(void** a1, void** a2, void** a3) {
    void* esp4;
    void* ebp5;
    int32_t* esp6;
    int32_t ebx7;
    int32_t* esp8;
    int32_t esi9;
    int32_t* esp10;
    int32_t edi11;
    void** eax12;
    uint32_t* esp13;
    int32_t* esp14;

    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) + 16);
    esp6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp4) - reinterpret_cast<unsigned char>(a2) - 4);
    *esp6 = ebx7;
    esp8 = esp6 - 1;
    *esp8 = esi9;
    esp10 = esp8 - 1;
    *esp10 = edi11;
    eax12 = g4183f0;
    esp13 = reinterpret_cast<uint32_t*>(esp10 - 1);
    *esp13 = reinterpret_cast<unsigned char>(eax12) ^ reinterpret_cast<uint32_t>(ebp5);
    esp14 = reinterpret_cast<int32_t*>(esp13 - 1);
    *esp14 = reinterpret_cast<int32_t>(__return_address());
    g0 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffff0);
    goto *esp14;
}

struct s92 {
    signed char[8] pad8;
    void** f8;
};

void fun_402477(void** ecx);

void** fun_402413(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int32_t ebp15;
    int32_t eax16;
    void** esi17;
    struct s92* ebp18;
    int32_t ebp19;
    void** eax20;
    int32_t ebp21;
    int32_t ebp22;
    void** eax23;

    fun_404590(0x417620, 12, __return_address());
    *reinterpret_cast<uint32_t*>(ebp15 - 28) = 0;
    eax16 = 0;
    esi17 = ebp18->f8;
    *reinterpret_cast<unsigned char*>(&eax16) = reinterpret_cast<uint1_t>(!!esi17);
    if (eax16) {
        fun_40411a(esi17, 0x417620, 12, __return_address(), a2);
        *reinterpret_cast<uint32_t*>(ebp19 - 4) = 0;
        eax20 = fun_402083(esi17, esi17, 0x417620, 12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
        ecx = esi17;
        *reinterpret_cast<void***>(ebp21 - 28) = eax20;
        *reinterpret_cast<int32_t*>(ebp22 - 4) = -2;
        fun_402477(ecx);
    } else {
        eax23 = fun_404026(ecx, 0x417620, 12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(22);
        fun_402c77(ecx);
    }
    fun_4045d5(ecx, 0x417620, 12, __return_address(), a2);
    goto 0x417620;
}

struct s93 {
    signed char[16] pad16;
    int32_t f10;
};

struct s94 {
    signed char[20] pad20;
    int32_t f14;
};

struct s95 {
    signed char[24] pad24;
    void** f18;
};

struct s96 {
    signed char[20] pad20;
    void** f14;
};

struct s97 {
    signed char[16] pad16;
    void** f10;
};

struct s98 {
    signed char[12] pad12;
    void** fc;
};

struct s99 {
    signed char[8] pad8;
    void** f8;
};

void** fun_4026ec(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void fun_402955(void** ecx);

struct s100 {
    signed char[12] pad12;
    int32_t fc;
};

struct s101 {
    signed char[12] pad12;
    void** fc;
};

struct s102 {
    signed char[8] pad8;
    void** f8;
};

void fun_4028cc(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int32_t ebp15;
    struct s93* ebp16;
    struct s94* ebp17;
    void** esi18;
    struct s95* ebp19;
    int32_t ebp20;
    void** v21;
    struct s96* ebp22;
    void** v23;
    struct s97* ebp24;
    void** v25;
    struct s98* ebp26;
    void** v27;
    struct s99* ebp28;
    void** eax29;
    int32_t ebp30;
    int32_t ebp31;
    struct s100* ebp32;
    void** v33;
    struct s101* ebp34;
    void** v35;
    struct s102* ebp36;
    void** eax37;

    fun_404590(0x417660, 12, __return_address());
    *reinterpret_cast<int32_t*>(ebp15 - 28) = 0;
    if (!ebp16->f10 || !ebp17->f14) {
        addr_402913_2:
    } else {
        esi18 = ebp19->f18;
        if (esi18) {
            fun_40411a(esi18, 0x417660, 12, __return_address(), a2);
            ecx = esi18;
            *reinterpret_cast<int32_t*>(ebp20 - 4) = 0;
            v21 = ebp22->f14;
            v23 = ebp24->f10;
            v25 = ebp26->fc;
            v27 = ebp28->f8;
            eax29 = fun_4026ec(ecx, v27, v25, v23, v21, esi18, 0x417660, 12, __return_address());
            *reinterpret_cast<void***>(ebp30 - 28) = eax29;
            *reinterpret_cast<int32_t*>(ebp31 - 4) = -2;
            fun_402955(ecx);
        } else {
            if (ebp32->fc != -1) {
                v33 = ebp34->fc;
                v35 = ebp36->f8;
                fun_407390(ecx, v35, 0, v33, 0x417660, 12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            }
            eax37 = fun_404026(ecx, 0x417660, 12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(22);
            fun_402c77(ecx);
            goto addr_402913_2;
        }
    }
    fun_4045d5(ecx, 0x417660, 12, __return_address(), a2);
    goto 0x417660;
}

int32_t fun_401780(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void* ebp6;
    void** edi7;
    void** ebx8;
    int32_t v9;
    int32_t edx10;
    void** edx11;
    void** v12;
    void* esi13;
    uint32_t v14;
    void* ecx15;
    void** eax16;
    int32_t edx17;
    void* edi18;
    int32_t eax19;
    void** esi20;
    void** ecx21;
    void* ecx22;
    void* ebx23;
    void* edx24;
    void* esi25;
    void** ecx26;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edi7 = a2;
    ebx8 = ecx;
    v9 = edx10;
    edx11 = a4;
    v12 = ecx;
    if (reinterpret_cast<unsigned char>(edi7) >= reinterpret_cast<unsigned char>(16)) {
        esi13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx8) - reinterpret_cast<unsigned char>(edx11));
        v14 = reinterpret_cast<unsigned char>(edi7) >> 4;
        do {
            ecx15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xffffffd8);
            if (reinterpret_cast<uint32_t>(ecx15) > reinterpret_cast<uint32_t>(esi13) + 15 + reinterpret_cast<unsigned char>(edx11) || reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(ebp6) + 0xffffffe7) < reinterpret_cast<unsigned char>(ebx8)) {
                __asm__("movdqu xmm1, [ebx]");
                __asm__("movdqu xmm0, [edx]");
                __asm__("pxor xmm1, xmm0");
                __asm__("movdqu [ebp-0x28], xmm1");
            } else {
                eax16 = edx11;
                edx17 = 16;
                edi18 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx15) - reinterpret_cast<unsigned char>(edx11));
                do {
                    ++eax16;
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi18) + reinterpret_cast<unsigned char>(eax16) - 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi13) + reinterpret_cast<unsigned char>(eax16)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax16 + 0xffffffff)));
                    --edx17;
                } while (edx17);
                edi7 = a2;
            }
            fun_4011c0(reinterpret_cast<int32_t>(ebp6) - 40, a3);
            edi7 = edi7 - 16;
            edx11 = a4;
            ebx8 = ebx8 + 16;
            a2 = edi7;
            esi13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi13) + 16);
            __asm__("movdqu xmm0, [eax]");
            eax19 = v9 + 16;
            --v14;
            v9 = eax19;
            __asm__("movdqu [edx], xmm0");
        } while (v14);
        v12 = ebx8;
    }
    if (edi7) {
        esi20 = reinterpret_cast<void**>(0);
        if (edi7) {
            if (reinterpret_cast<unsigned char>(edi7) >= reinterpret_cast<unsigned char>(32) && ((edx11 = a4, reinterpret_cast<int32_t>(ebp6) + 0xffffffd8 > reinterpret_cast<unsigned char>(ebx8 + 0xffffffff) + reinterpret_cast<unsigned char>(edi7)) || reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(ebp6) + reinterpret_cast<unsigned char>(edi7) + 0xffffffd7) < reinterpret_cast<unsigned char>(ebx8))) {
                ecx21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi7) - (reinterpret_cast<unsigned char>(edi7) & 31));
                do {
                    __asm__("movdqu xmm1, [edx+eax]");
                    __asm__("movdqu xmm0, [eax-0x20]");
                    __asm__("pxor xmm1, xmm0");
                    __asm__("movdqu xmm0, [eax-0x10]");
                    __asm__("movdqu [edi+eax-0x20], xmm1");
                    __asm__("movdqu xmm1, [edx+esi]");
                    esi20 = esi20 + 32;
                    __asm__("pxor xmm1, xmm0");
                    __asm__("movdqu [ebx+eax-0x20], xmm1");
                } while (reinterpret_cast<unsigned char>(esi20) < reinterpret_cast<unsigned char>(ecx21));
                ebx8 = v12;
                edi7 = a2;
                edx11 = a4;
            }
            if (reinterpret_cast<unsigned char>(esi20) < reinterpret_cast<unsigned char>(edi7)) {
                ecx22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi20) + reinterpret_cast<unsigned char>(edx11));
                ebx23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx8) - reinterpret_cast<unsigned char>(edx11));
                edx24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi7) - reinterpret_cast<unsigned char>(esi20));
                esi25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) - 40 - reinterpret_cast<unsigned char>(edx11));
                do {
                    ecx22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx22) + 1);
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx22) + reinterpret_cast<uint32_t>(esi25) - 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx22) + reinterpret_cast<uint32_t>(ebx23)) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx22) + 0xffffffff));
                    edx24 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx24) - 1);
                } while (edx24);
            }
        }
        if (reinterpret_cast<unsigned char>(edi7) < reinterpret_cast<unsigned char>(16)) {
            ecx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi7) + reinterpret_cast<unsigned char>(a4));
            fun_405c40(ecx26, reinterpret_cast<int32_t>(ebp6) - 40 + reinterpret_cast<unsigned char>(edi7), ecx26, 16 - reinterpret_cast<unsigned char>(edi7));
        }
        fun_4011c0(reinterpret_cast<int32_t>(ebp6) - 40, a3);
        __asm__("movdqu xmm0, [ebp-0x28]");
        eax19 = v9;
        __asm__("movdqu [esi], xmm0");
        __asm__("movdqu [eax], xmm0");
    }
    return eax19;
}

uint32_t fun_401d42(void** a1, void** a2, void** a3, void** a4, void* a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void*** ebp9;
    void** v10;
    void** esi11;
    void** esi12;
    void** v13;
    void** edi14;
    void** ecx15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    uint32_t eax24;
    struct s18* eax25;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebp8;
    ebp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v10 = esi11;
    esi12 = a2;
    v13 = edi14;
    ecx15 = reinterpret_cast<void**>(7);
    while (ecx15) {
        --ecx15;
        esi12 = esi12 + 4;
    }
    if (!esi12 || !a3) {
        eax23 = fun_404026(ecx15, v13, v10, 0, v16, v17, v18, v19, v20, v21, v22, v7, v6, a1, a2, a3, a4);
        *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(22);
        fun_402c77(ecx15);
        eax24 = 0xffffffff;
    } else {
        eax25 = fun_402cc0(ecx15, esi12, v13, v10, 0);
        if (reinterpret_cast<uint32_t>(eax25) <= 0x7fffffff) {
        }
        eax24 = reinterpret_cast<uint32_t>(a1(ebp9 - 32, a3, a4, a5));
    }
    return eax24;
}

void** fun_402c4c(void** ecx, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t eax7;

    eax7 = reinterpret_cast<int32_t>(DecodePointer());
    if (!eax7) {
        fun_402c87(ecx);
        fun_402c4c(ecx, 0, 0, 0, 0, 0);
        goto a2;
    } else {
        goto eax7;
    }
}

void fun_402c87(void** ecx) {
    int32_t eax2;
    int32_t esi3;

    eax2 = fun_410118(ecx, 23, __return_address());
    if (eax2) {
        ecx = reinterpret_cast<void**>(5);
        __asm__("int 0x29");
    }
    fun_402b1a(ecx, 2, 0xc0000417, 1, esi3);
    fun_408127(ecx, 0xc0000417, 2, 0xc0000417, 1);
    goto 23;
}

uint32_t g419bc0;

void** fun_40430f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** ebp13;
    void*** ebp14;
    void** v15;
    void** ebx16;
    uint32_t edx17;
    void** v18;
    void** v19;
    void** esi20;
    void** esi21;
    void** v22;
    void** edi23;
    uint32_t edi24;
    void** v25;
    void** ebx26;
    void** edi27;
    void** esi28;
    void** al29;
    void* eax30;
    int32_t eax31;
    int32_t eax32;
    int32_t eax33;
    int32_t eax34;
    void* eax35;
    void* eax36;
    void* eax37;
    void* eax38;
    void* eax39;
    void** eax40;
    int32_t eax41;
    void** eax42;
    uint32_t eax43;
    void** esi44;
    void** eax45;
    void** eax46;
    void** eax47;
    void** eax48;

    v11 = reinterpret_cast<void**>(__return_address());
    v12 = ebp13;
    ebp14 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v15 = ebx16;
    edx17 = 0;
    v18 = reinterpret_cast<void**>(0);
    v19 = esi20;
    esi21 = a3;
    v22 = edi23;
    edi24 = g419bc0;
    v25 = reinterpret_cast<void**>(0);
    while (*reinterpret_cast<void***>(esi21) == 32) {
        ++esi21;
    }
    if (*reinterpret_cast<void***>(esi21) == 97) {
        ebx26 = reinterpret_cast<void**>(0x109);
    } else {
        if (*reinterpret_cast<void***>(esi21) == 0x72) {
            ebx26 = reinterpret_cast<void**>(0);
            edi27 = reinterpret_cast<void**>(edi24 | 1);
            goto addr_40436d_8;
        } else {
            if (*reinterpret_cast<void***>(esi21) != 0x77) 
                goto addr_404340_10;
            ebx26 = reinterpret_cast<void**>(0x301);
        }
    }
    edi27 = reinterpret_cast<void**>(edi24 | 2);
    addr_40436d_8:
    ecx = reinterpret_cast<void**>(1);
    esi28 = esi21 + 1;
    al29 = *reinterpret_cast<void***>(esi28);
    if (!al29) {
        addr_404535_13:
        while (*reinterpret_cast<void***>(esi28) == 32) {
            ++esi28;
        }
    } else {
        a3 = reinterpret_cast<void**>(0x1000);
        do {
            if (!ecx) 
                break;
            eax30 = reinterpret_cast<void*>(static_cast<int32_t>(reinterpret_cast<signed char>(al29)));
            if (reinterpret_cast<int32_t>(eax30) > 83) {
                eax31 = reinterpret_cast<int32_t>(eax30) - 84;
                if (!eax31) {
                    if (!(0x1000 & reinterpret_cast<unsigned char>(ebx26))) {
                        ebx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx26) | 0x1000);
                    } else {
                        addr_40447c_21:
                        ecx = reinterpret_cast<void**>(0);
                    }
                } else {
                    eax32 = eax31 - 14;
                    if (!eax32) {
                        if (reinterpret_cast<unsigned char>(ebx26) & 0xc000) 
                            goto addr_40447c_21;
                        ebx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx26) | 0x8000);
                    } else {
                        eax33 = eax32 - 1;
                        if (!eax33) {
                            if (edx17) 
                                goto addr_40447c_21;
                            ++edx17;
                            edi27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi27) | 0x4000);
                        } else {
                            eax34 = eax33 - 11;
                            if (!eax34) {
                                if (edx17) 
                                    goto addr_40447c_21;
                                ++edx17;
                                edi27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi27) & 0xffffbfff);
                            } else {
                                if (eax34 - 6) 
                                    goto addr_404340_10;
                                if (reinterpret_cast<unsigned char>(ebx26) & 0xc000) 
                                    goto addr_40447c_21;
                                ebx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx26) | 0x4000);
                            }
                        }
                    }
                }
            } else {
                if (eax30 == 83) {
                    if (v18) 
                        goto addr_40447c_21;
                    v18 = reinterpret_cast<void**>(1);
                    ebx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx26) | 32);
                } else {
                    eax35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax30) - 32);
                    if (eax35) {
                        eax36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax35) - 11);
                        if (!eax36) {
                            if (*reinterpret_cast<unsigned char*>(&ebx26) & 2) 
                                goto addr_40447c_21;
                            ebx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx26) & 0xfffffffe | 2);
                            edi27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi27) & 0xfffffffc | 0x80);
                        } else {
                            eax37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax36) - 1);
                            if (!eax37) {
                                v25 = reinterpret_cast<void**>(1);
                                goto addr_40447c_21;
                            } else {
                                eax38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax37) - 24);
                                if (!eax38) {
                                    if (*reinterpret_cast<unsigned char*>(&ebx26) & 64) 
                                        goto addr_40447c_21;
                                    ebx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx26) | 64);
                                } else {
                                    eax39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax38) - 10);
                                    if (!eax39) {
                                        ebx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx26) | 0x80);
                                    } else {
                                        eax40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax39) - 4);
                                        if (eax40) 
                                            goto addr_404340_10;
                                        if (v18 != eax40) 
                                            goto addr_40447c_21;
                                        v18 = reinterpret_cast<void**>(1);
                                        ebx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx26) | 16);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            ++esi28;
            al29 = *reinterpret_cast<void***>(esi28);
        } while (al29);
        if (!v25) 
            goto addr_404535_13; else 
            goto addr_404498_53;
    }
    if (!*reinterpret_cast<void***>(esi28)) {
        eax41 = fun_409416(ebp14 + 12, a2, ebx26, a4, 0x180);
        if (eax41) {
            addr_404350_56:
            eax42 = reinterpret_cast<void**>(0);
        } else {
            eax42 = a5;
            ++g4191cc;
            *reinterpret_cast<void***>(eax42 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(eax42) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(eax42 + 8) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(eax42 + 28) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(eax42 + 12) = edi27;
            *reinterpret_cast<void***>(eax42 + 16) = a3;
        }
        return eax42;
    }
    addr_404498_53:
    while (*reinterpret_cast<void***>(esi28) == 32) {
        ++esi28;
    }
    eax43 = fun_409434("ccs", esi28, 3);
    if (eax43) 
        goto addr_404340_10;
    esi44 = esi28 + 3;
    while (*reinterpret_cast<void***>(esi44) == 32) {
        ++esi44;
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi44) == 61)) 
        goto addr_404340_10;
    do {
        ++esi44;
    } while (*reinterpret_cast<void***>(esi44) == 32);
    eax45 = fun_409563(esi44, "UTF-8", 5);
    if (!eax45) 
        goto addr_4044e7_68;
    eax46 = fun_409563(esi44, "UTF-16LE", 8);
    if (eax46) {
        eax47 = fun_409563(esi44, "UNICODE", 7);
        if (eax47) {
            addr_404340_10:
            eax48 = fun_404026(ecx, v22, v19, v15, v25, v18, v12, v11, a2, a3, a4, a5, a6, a7, a8, a9, a10);
            *reinterpret_cast<void***>(eax48) = reinterpret_cast<void**>(22);
            fun_402c77(ecx);
            goto addr_404350_56;
        } else {
            esi28 = esi44 + 7;
            ebx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx26) | 0x10000);
            goto addr_404535_13;
        }
    } else {
        esi28 = esi44 + 8;
        ebx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx26) | 0x20000);
        goto addr_404535_13;
    }
    addr_4044e7_68:
    esi28 = esi44 + 5;
    ebx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx26) | 0x40000);
    goto addr_404535_13;
}

void fun_401e71() {
    void** esi1;

    fun_404189(esi1);
    return;
}

void fun_401f69(void** ecx) {
    void** esi2;

    fun_404189(esi2);
    return;
}

void fun_404f60(void** ecx) {
    int32_t v2;
    void* esp3;
    void* ecx4;
    int32_t* ecx5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    uint32_t eax9;
    int32_t eax10;
    void* eax11;
    int32_t* eax12;

    v2 = reinterpret_cast<int32_t>(__return_address());
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp3) + 4);
    ecx5 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx4) - eax6 & ~(eax7 - (eax8 + reinterpret_cast<uint1_t>(eax9 < eax10 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(ecx4) < reinterpret_cast<uint32_t>(eax11))))));
    eax12 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp3) & 0xfffff000);
    while (reinterpret_cast<uint32_t>(ecx5) < reinterpret_cast<uint32_t>(eax12)) {
        eax12 = eax12 - 0x400;
    }
    *ecx5 = v2;
    goto *ecx5;
}

void fun_404189(void** a1) {
    int32_t ebp2;

    if (reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(0x418170) || reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0x4183d0)) {
        LeaveCriticalSection();
        goto ebp2;
    } else {
        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0xffff7fff);
        fun_4092ea(0x418170, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(0x418170)) >> 5) + 16);
        return;
    }
}

void fun_402477(void** ecx) {
    void** esi2;

    fun_404189(esi2);
    return;
}

uint32_t fun_405ae4(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** edi14;
    void** esi15;
    void** ebp16;
    void** eax17;
    void** ecx18;
    void** edi19;
    void** ebx20;
    uint32_t eax21;
    void** eax22;
    struct s24* eax23;
    struct s24* eax24;
    void** ebx25;
    uint32_t eax26;
    void** eax27;
    void** v28;
    void** edx29;
    void** ecx30;
    void** ecx31;
    uint32_t eax32;
    void** eax33;
    uint32_t eax34;

    eax17 = fun_4048e2(ecx, a3, edi14, esi15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
    ecx18 = *reinterpret_cast<void***>(a3 + 12);
    edi19 = eax17;
    if (*reinterpret_cast<unsigned char*>(&ecx18) & 0x82) {
        if (!(*reinterpret_cast<unsigned char*>(&ecx18) & 64)) {
            ebx20 = reinterpret_cast<void**>(0);
            if (!(*reinterpret_cast<unsigned char*>(&ecx18) & 1)) {
                addr_405b41_4:
                eax21 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 0xffffffef;
                *reinterpret_cast<void***>(a3 + 4) = reinterpret_cast<void**>(0);
                eax22 = reinterpret_cast<void**>(eax21 | 2);
                *reinterpret_cast<void***>(a3 + 12) = eax22;
                if (!(reinterpret_cast<unsigned char>(eax22) & 0x10c) && ((eax23 = fun_404114(), a3 != &eax23->f20) && (eax24 = fun_404114(), !reinterpret_cast<int1_t>(a3 == &eax24->f40)) || (eax26 = fun_409fb4(edi19, ebx25, edi14, esi15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9), ecx18 = edi19, !eax26))) {
                    fun_40a008(ecx18, a3, ebx25, edi14, esi15, ebp16, __return_address(), a2);
                    ecx18 = a3;
                }
            } else {
                *reinterpret_cast<void***>(a3 + 4) = reinterpret_cast<void**>(0);
                if (!(*reinterpret_cast<unsigned char*>(&ecx18) & 16)) {
                    *reinterpret_cast<void***>(a3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx18) | 32);
                    goto addr_405c23_8;
                } else {
                    ecx18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx18) & 0xfffffffe);
                    *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(a3 + 8);
                    *reinterpret_cast<void***>(a3 + 12) = ecx18;
                    goto addr_405b41_4;
                }
            }
        } else {
            eax27 = fun_404026(ecx18, edi14, esi15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
            *reinterpret_cast<void***>(eax27) = reinterpret_cast<void**>(34);
            goto addr_405b08_11;
        }
    } else {
        eax27 = fun_404026(ecx18, edi14, esi15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        *reinterpret_cast<void***>(eax27) = reinterpret_cast<void**>(9);
        goto addr_405b08_11;
    }
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 0x108)) {
        v28 = reinterpret_cast<void**>(1);
        eax17 = fun_406284(ecx18, edi19, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8, 1, ebx25, edi14, esi15, ebp16, __return_address(), a2, 1, a4, a5, a6);
        ebx20 = eax17;
    } else {
        edx29 = *reinterpret_cast<void***>(a3 + 8);
        ecx30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) - reinterpret_cast<unsigned char>(edx29));
        v28 = ecx30;
        *reinterpret_cast<void***>(a3) = edx29 + 1;
        *reinterpret_cast<void***>(a3 + 4) = *reinterpret_cast<void***>(a3 + 24) - 1;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx30) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx30 == 0)) {
            if (edi19 == 0xffffffff || edi19 == 0xfffffffe) {
                ecx31 = reinterpret_cast<void**>(0x418500);
            } else {
                ecx31 = reinterpret_cast<void**>(((reinterpret_cast<unsigned char>(edi19) & 31) << 6) + reinterpret_cast<uint32_t>(*reinterpret_cast<void****>(reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(edi19) >> 5) * 4 + 0x4191d0)));
            }
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx31 + 4)) & 32)) 
                goto addr_405bfa_20;
            eax32 = fun_404dd8(ecx31, edi19, 0, 0, 2, ebx25, edi14, esi15, ebp16, __return_address(), a2, v28, a4, a5);
            if ((eax32 & reinterpret_cast<unsigned char>(edx29)) == 0xffffffff) 
                goto addr_405c1f_22;
        } else {
            eax17 = fun_406284(ecx30, edi19, edx29, ecx30, ebx25, edi14, esi15, ebp16, __return_address(), a2, v28, a4, a5, a6);
            ebx20 = eax17;
        }
        addr_405bfa_20:
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(a3 + 8)) = a2;
    }
    if (ebx20 == v28) {
        eax33 = a2;
        eax34 = *reinterpret_cast<unsigned char*>(&eax33);
    } else {
        addr_405c1f_22:
        *reinterpret_cast<void***>(a3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) | 32);
        goto addr_405c23_8;
    }
    addr_405c2e_26:
    addr_405c2f_27:
    return eax34;
    addr_405c23_8:
    eax34 = 0xffffffff;
    goto addr_405c2e_26;
    addr_405b08_11:
    *reinterpret_cast<void***>(a3 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) | 32);
    eax34 = 0xffffffff;
    goto addr_405c2f_27;
}

void** fun_40247f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** ebp13;
    void** v14;
    void** v15;
    void** ebx16;
    void** v17;
    void** esi18;
    void** v19;
    void** edi20;
    void** eax21;
    void** esi22;
    void** eax23;
    void** edi24;
    void** ebx25;
    void** ecx26;
    void** v27;
    uint32_t edx28;
    void** eax29;
    void** v30;
    uint32_t eax31;
    uint32_t eax32;
    void** eax33;
    void** eax34;
    void** eax35;
    void** edx36;
    void** v37;

    v11 = reinterpret_cast<void**>(__return_address());
    v12 = ebp13;
    v14 = ecx;
    v15 = ebx16;
    v17 = esi18;
    v19 = edi20;
    if (!a3 || !a4) {
        addr_4024ac_2:
        eax21 = reinterpret_cast<void**>(0);
    } else {
        esi22 = a5;
        if (!esi22 || (!a2 || reinterpret_cast<unsigned char>(a4) > reinterpret_cast<unsigned char>(-1 / reinterpret_cast<unsigned char>(a3)))) {
            eax23 = fun_404026(a3, v19, v17, v15, v14, ecx, v12, v11, a2, a3, a4, a5, a6, a7, a8, a9, a10);
            *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(22);
            fun_402c77(a3);
            goto addr_4024ac_2;
        } else {
            edi24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) * reinterpret_cast<unsigned char>(a4));
            ebx25 = edi24;
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi22 + 12)) & 0x10c)) {
                ecx26 = reinterpret_cast<void**>(0x1000);
            } else {
                ecx26 = *reinterpret_cast<void***>(esi22 + 24);
            }
            v27 = ecx26;
            if (!edi24) 
                goto addr_4025be_9; else 
                goto addr_4024eb_10;
        }
    }
    addr_4024ae_11:
    return eax21;
    addr_4025be_9:
    eax21 = a4;
    goto addr_4024ae_11;
    do {
        addr_4024eb_10:
        edx28 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi22 + 12)) & 0x108;
        if (!edx28 || (eax29 = *reinterpret_cast<void***>(esi22 + 4), v14 = eax29, eax29 == 0)) {
            if (reinterpret_cast<unsigned char>(ebx25) < reinterpret_cast<unsigned char>(ecx26)) {
                v30 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a2))));
                eax31 = fun_405ae4(ecx26, v30, esi22, v19, v17, v15, v14, v27, v12, v11, a2, a3, a4);
                if (eax31 == 0xffffffff) 
                    break;
                ++a2;
                --ebx25;
                ecx26 = *reinterpret_cast<void***>(esi22 + 24);
                v27 = ecx26;
                if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx26) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx26 == 0))) 
                    continue;
            } else {
                if (edx28) {
                    eax32 = fun_404af1(ecx26, esi22, v19, v17, v15, v14, v27);
                    if (eax32) 
                        break;
                    ecx26 = v27;
                }
                eax33 = ebx25;
                if (!ecx26) {
                    v14 = ebx25;
                } else {
                    eax33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx25) - reinterpret_cast<unsigned char>(eax33) % reinterpret_cast<unsigned char>(ecx26));
                    v14 = eax33;
                }
                eax34 = fun_4048e2(ecx26, esi22, a2, eax33, v19, v17, v15, v14, v27, v12, v11, a2, a3, a4, a5);
                eax35 = fun_406284(esi22, eax34, a2, eax33, v19, v17, v15, v14, v27, v12, v11, a2, a3, a4);
                if (eax35 == 0xffffffff) 
                    goto addr_4025c6_22;
                edx36 = v14;
                if (reinterpret_cast<unsigned char>(eax35) <= reinterpret_cast<unsigned char>(v14)) {
                    edx36 = eax35;
                }
                a2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(edx36));
                ebx25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx25) - reinterpret_cast<unsigned char>(edx36));
                if (reinterpret_cast<unsigned char>(eax35) < reinterpret_cast<unsigned char>(v14)) 
                    goto addr_4025c6_22; else 
                    goto addr_402589_26;
            }
        } else {
            if (reinterpret_cast<signed char>(eax29) < reinterpret_cast<signed char>(0)) 
                goto addr_4025c6_22;
            if (reinterpret_cast<unsigned char>(ebx25) >= reinterpret_cast<unsigned char>(eax29)) 
                goto addr_40250f_29; else 
                goto addr_40250a_30;
        }
        ecx26 = reinterpret_cast<void**>(1);
        v27 = reinterpret_cast<void**>(1);
        continue;
        addr_402589_26:
        ecx26 = v27;
        continue;
        addr_40250f_29:
        v37 = *reinterpret_cast<void***>(esi22);
        fun_405c40(ecx26, v37, a2, eax29);
        *reinterpret_cast<void***>(esi22 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi22 + 4)) - reinterpret_cast<unsigned char>(v14));
        ebx25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx25) - reinterpret_cast<unsigned char>(v14));
        *reinterpret_cast<void***>(esi22) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi22)) + reinterpret_cast<unsigned char>(v14));
        a2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(v14));
        goto addr_402589_26;
        addr_40250a_30:
        eax29 = ebx25;
        v14 = ebx25;
        goto addr_40250f_29;
    } while (ebx25);
    goto addr_4025be_9;
    addr_4025ca_33:
    eax21 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(edi24) - reinterpret_cast<unsigned char>(ebx25)) / reinterpret_cast<unsigned char>(a3));
    goto addr_4024ae_11;
    addr_4025c6_22:
    *reinterpret_cast<void***>(esi22 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi22 + 12)) | 32);
    goto addr_4025ca_33;
}

void fun_402652(void** ecx) {
    void** esi2;

    fun_404189(esi2);
    return;
}

void** fun_406ff7(void** a1) {
    void** ecx2;
    uint32_t eax3;

    ecx2 = a1;
    eax3 = 0;
    do {
        if (ecx2 == *reinterpret_cast<void***>(eax3 * 8 + 0x411198)) 
            break;
        ++eax3;
    } while (eax3 < 23);
    goto addr_40700e_4;
    return *reinterpret_cast<void***>(eax3 * 8 + 0x41119c);
    addr_40700e_4:
    return 0;
}

int32_t GetModuleHandleExW = 0x17cdc;

void fun_406cbd(void** ecx, void** a2) {
    void* v3;
    int32_t eax4;
    int32_t eax5;

    v3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    eax4 = reinterpret_cast<int32_t>(GetModuleHandleExW(0, "m", v3));
    if (eax4 && (eax5 = reinterpret_cast<int32_t>(GetProcAddress(ecx, "CorExitProcess", 0, "m", v3)), !!eax5)) {
        eax5(a2, ecx, "CorExitProcess", 0, "m", v3);
    }
    return;
}

void** fun_4026ec(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;
    void** v11;
    void** ebp12;
    void** ecx13;
    void** v14;
    void** ebx15;
    void** v16;
    void** esi17;
    void** v18;
    void** edi19;
    void** v20;
    void** v21;
    void** eax22;
    void** esi23;
    void** v24;
    void** v25;
    void** edi26;
    void** ebx27;
    void** v28;
    void** v29;
    void** eax30;
    void** v31;
    void** eax32;
    void** v33;
    void** eax34;
    void** eax35;
    uint32_t edx36;
    void** eax37;
    void** eax38;
    void** eax39;
    void** v40;
    void** eax41;

    v10 = reinterpret_cast<void**>(__return_address());
    v11 = ebp12;
    ecx13 = a2;
    v14 = ebx15;
    v16 = esi17;
    v18 = edi19;
    v20 = ecx13;
    v21 = a3;
    if (!a4 || !a5) {
        addr_402722_2:
        eax22 = reinterpret_cast<void**>(0);
    } else {
        if (ecx13) {
            esi23 = a6;
            if (!esi23 || reinterpret_cast<unsigned char>(a5) > reinterpret_cast<unsigned char>(-1 / reinterpret_cast<unsigned char>(a4))) {
                if (a3 != 0xffffffff) {
                    fun_407390(ecx13, ecx13, 0, a3, v18, v16, v14, v24, v25, v21, v20, v11, v10, a2);
                }
                if (!esi23) 
                    goto addr_402712_8;
                if (reinterpret_cast<unsigned char>(a5) > reinterpret_cast<unsigned char>(-1 / reinterpret_cast<unsigned char>(a4))) 
                    goto addr_402712_8; else 
                    goto addr_402762_10;
            } else {
                addr_402762_10:
                edi26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) * reinterpret_cast<unsigned char>(a5));
                ebx27 = edi26;
                if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi23 + 12)) & 0x10c)) {
                    ecx13 = reinterpret_cast<void**>(0x1000);
                    goto addr_40277d_12;
                } else {
                    ecx13 = *reinterpret_cast<void***>(esi23 + 24);
                    goto addr_40277d_12;
                }
            }
        } else {
            addr_402712_8:
            eax30 = fun_404026(ecx13, v18, v16, v14, v28, v29, v21, v20, v11, v10, a2, a3, a4, a5, a6, a7, a8);
            *reinterpret_cast<void***>(eax30) = reinterpret_cast<void**>(22);
            goto addr_40271d_14;
        }
    }
    addr_402724_15:
    return eax22;
    addr_40277d_12:
    v31 = ecx13;
    if (!edi26) {
        addr_40286b_16:
        eax22 = a5;
        goto addr_402724_15;
    } else {
        do {
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi23 + 12)) & 0x10c) || (eax32 = *reinterpret_cast<void***>(esi23 + 4), v33 = eax32, eax32 == 0)) {
                if (reinterpret_cast<unsigned char>(ebx27) < reinterpret_cast<unsigned char>(ecx13)) {
                    eax34 = fun_4071ed(ecx13, esi23, v18, v16, v14, v33, v31, v21, v20, v11, v10, a2, a3, a4);
                    if (eax34 == 0xffffffff) 
                        break;
                    ecx13 = v21;
                    if (!ecx13) 
                        goto addr_402873_21;
                    *reinterpret_cast<void***>(v20) = eax34;
                    --ebx27;
                    ++v20;
                    v21 = ecx13 - 1;
                    ecx13 = *reinterpret_cast<void***>(esi23 + 24);
                    v31 = ecx13;
                    continue;
                } else {
                    if (!ecx13) {
                        eax35 = reinterpret_cast<void**>(0x7fffffff);
                        if (reinterpret_cast<unsigned char>(ebx27) <= reinterpret_cast<unsigned char>(0x7fffffff)) {
                            eax35 = ebx27;
                        }
                    } else {
                        if (reinterpret_cast<unsigned char>(ebx27) <= reinterpret_cast<unsigned char>(0x7fffffff)) {
                            edx36 = reinterpret_cast<unsigned char>(ebx27) % reinterpret_cast<unsigned char>(ecx13);
                            eax37 = ebx27;
                        } else {
                            edx36 = 0x7fffffff % reinterpret_cast<unsigned char>(ecx13);
                            eax37 = reinterpret_cast<void**>(0x7fffffff);
                        }
                        eax35 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax37) - edx36);
                    }
                    if (reinterpret_cast<unsigned char>(eax35) > reinterpret_cast<unsigned char>(v21)) 
                        goto addr_402873_21;
                    eax38 = fun_4048e2(ecx13, esi23, v20, eax35, v18, v16, v14, v33, v31, v21, v20, v11, v10, a2, a3);
                    eax39 = fun_40509f(esi23, eax38, v20, eax35);
                    if (!eax39) 
                        goto addr_4028ab_32;
                    if (eax39 == 0xffffffff) 
                        goto addr_402899_34;
                    ebx27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx27) - reinterpret_cast<unsigned char>(eax39));
                }
            } else {
                if (reinterpret_cast<signed char>(eax32) < reinterpret_cast<signed char>(0)) 
                    goto addr_402899_34;
                if (reinterpret_cast<unsigned char>(ebx27) >= reinterpret_cast<unsigned char>(eax32)) 
                    goto addr_4027aa_38; else 
                    goto addr_4027a5_39;
            }
            addr_402831_40:
            v20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v20) + reinterpret_cast<unsigned char>(eax39));
            v21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v21) - reinterpret_cast<unsigned char>(eax39));
            ecx13 = v31;
            continue;
            addr_4027aa_38:
            ecx13 = v21;
            if (reinterpret_cast<unsigned char>(eax32) > reinterpret_cast<unsigned char>(ecx13)) 
                goto addr_402873_21;
            v40 = *reinterpret_cast<void***>(esi23);
            fun_40730e(ecx13, v20, ecx13, v40, eax32, v18, v16, v14, v33, v31, v21, v20, v11, v10);
            eax39 = v33;
            *reinterpret_cast<void***>(esi23 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi23 + 4)) - reinterpret_cast<unsigned char>(eax39));
            ebx27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx27) - reinterpret_cast<unsigned char>(eax39));
            *reinterpret_cast<void***>(esi23) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi23)) + reinterpret_cast<unsigned char>(eax39));
            goto addr_402831_40;
            addr_4027a5_39:
            eax32 = ebx27;
            v33 = ebx27;
            goto addr_4027aa_38;
        } while (ebx27);
        goto addr_40286b_16;
    }
    addr_40289d_43:
    eax22 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(edi26) - reinterpret_cast<unsigned char>(ebx27)) / reinterpret_cast<unsigned char>(a4));
    goto addr_402724_15;
    addr_402873_21:
    if (a3 != 0xffffffff) {
        fun_407390(ecx13, a2, 0, a3, v18, v16, v14, v33, v31, v21, v20, v11, v10, a2);
    }
    eax41 = fun_404026(ecx13, v18, v16, v14, v33, v31, v21, v20, v11, v10, a2, a3, a4, a5, a6, a7, a8);
    *reinterpret_cast<void***>(eax41) = reinterpret_cast<void**>(34);
    addr_40271d_14:
    fun_402c77(ecx13);
    goto addr_402722_2;
    addr_4028ab_32:
    *reinterpret_cast<void***>(esi23 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi23 + 12)) | 16);
    goto addr_40289d_43;
    addr_402899_34:
    *reinterpret_cast<void***>(esi23 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi23 + 12)) | 32);
    goto addr_40289d_43;
}

void fun_402955(void** ecx) {
    void** esi2;

    fun_404189(esi2);
    return;
}

int32_t fun_4071d8(void** ecx) {
    void** eax2;
    int32_t ecx3;

    eax2 = reinterpret_cast<void**>(GetProcessHeap(ecx));
    ecx3 = 0;
    g41993c = eax2;
    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<uint1_t>(!!eax2);
    return ecx3;
}

void fun_406bfe(int32_t a1);

void fun_402c3f(int32_t a1, int32_t a2);

void fun_40a38f(int32_t a1, int32_t a2, int32_t a3);

void fun_40a3a9(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

void fun_40a37e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

void fun_40a5ba(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);

uint32_t g419f60;

uint32_t g419f68;

uint32_t g419f74;

uint32_t g419f78;

uint32_t g419f7c;

uint32_t g419f80;

uint32_t g419f84;

uint32_t g419f88;

uint32_t g419f8c;

uint32_t g419f90;

uint32_t g419f94;

uint32_t g419f98;

uint32_t g419f9c;

uint32_t g419fa0;

uint32_t g419fa4;

uint32_t g419fa8;

uint32_t g419fac;

uint32_t g419fb0;

uint32_t g419fb8;

uint32_t g419fb4;

uint32_t g419fbc;

uint32_t g419fc0;

uint32_t g419fc4;

uint32_t g419fc8;

uint32_t g419fcc;

uint32_t g419fd8;

uint32_t g419fdc;

uint32_t g419fe0;

void fun_406dd9() {
    int32_t eax1;
    int32_t edi2;
    int32_t esi3;
    int32_t eax4;
    int32_t esi5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t eax10;
    uint32_t eax11;
    uint32_t eax12;
    uint32_t eax13;
    uint32_t eax14;
    uint32_t eax15;
    uint32_t eax16;
    uint32_t eax17;
    uint32_t eax18;
    uint32_t eax19;
    uint32_t eax20;
    uint32_t eax21;
    uint32_t eax22;
    uint32_t eax23;
    uint32_t eax24;
    uint32_t eax25;
    uint32_t eax26;
    uint32_t eax27;
    uint32_t eax28;
    uint32_t eax29;
    uint32_t eax30;
    uint32_t eax31;
    uint32_t eax32;
    uint32_t eax33;
    uint32_t eax34;
    uint32_t eax35;
    uint32_t eax36;
    uint32_t eax37;
    uint32_t eax38;
    uint32_t eax39;
    uint32_t eax40;
    uint32_t eax41;
    uint32_t eax42;
    uint32_t eax43;
    uint32_t eax44;
    uint32_t eax45;
    uint32_t eax46;
    uint32_t eax47;
    uint32_t eax48;
    uint32_t eax49;
    uint32_t eax50;
    uint32_t eax51;
    uint32_t eax52;
    uint32_t eax53;
    uint32_t eax54;
    uint32_t eax55;
    uint32_t eax56;
    uint32_t eax57;
    uint32_t eax58;
    uint32_t eax59;
    uint32_t eax60;
    uint32_t eax61;
    uint32_t eax62;
    uint32_t eax63;
    uint32_t eax64;
    uint32_t eax65;
    uint32_t eax66;
    uint32_t eax67;
    uint32_t eax68;
    uint32_t eax69;
    uint32_t eax70;
    uint32_t eax71;

    eax1 = reinterpret_cast<int32_t>(EncodePointer());
    fun_406bfe(eax1);
    fun_402c3f(eax1, eax1);
    fun_40a38f(eax1, eax1, eax1);
    fun_40a3a9(eax1, eax1, eax1, eax1);
    fun_40a37e(eax1, eax1, eax1, eax1, eax1);
    fun_40a5ba(eax1, eax1, eax1, eax1, eax1, eax1);
    eax4 = reinterpret_cast<int32_t>(GetModuleHandleW("k", edi2, 0, esi3, __return_address()));
    esi5 = GetProcAddress;
    eax6 = reinterpret_cast<uint32_t>(esi5(eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax7 = eax6 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f60 = eax7;
    eax8 = reinterpret_cast<uint32_t>(esi5(eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax9 = eax8 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f64 = eax9;
    eax10 = reinterpret_cast<uint32_t>(esi5(eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax11 = eax10 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f68 = eax11;
    eax12 = reinterpret_cast<uint32_t>(esi5(eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax13 = eax12 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f6c = eax13;
    eax14 = reinterpret_cast<uint32_t>(esi5(eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax15 = eax14 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f70 = eax15;
    eax16 = reinterpret_cast<uint32_t>(esi5(eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax17 = eax16 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f74 = eax17;
    eax18 = reinterpret_cast<uint32_t>(esi5(eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax19 = eax18 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f78 = eax19;
    eax20 = reinterpret_cast<uint32_t>(esi5(eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax21 = eax20 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f7c = eax21;
    eax22 = reinterpret_cast<uint32_t>(esi5(eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax23 = eax22 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f80 = eax23;
    eax24 = reinterpret_cast<uint32_t>(esi5(eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax25 = eax24 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f84 = eax25;
    eax26 = reinterpret_cast<uint32_t>(esi5(eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax27 = eax26 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f88 = eax27;
    eax28 = reinterpret_cast<uint32_t>(esi5(eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax29 = eax28 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f8c = eax29;
    eax30 = reinterpret_cast<uint32_t>(esi5(eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax31 = eax30 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f90 = eax31;
    eax32 = reinterpret_cast<uint32_t>(esi5(eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax33 = eax32 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f94 = eax33;
    eax34 = reinterpret_cast<uint32_t>(esi5(eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax35 = eax34 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f98 = eax35;
    eax36 = reinterpret_cast<uint32_t>(esi5(eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax37 = eax36 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419f9c = eax37;
    eax38 = reinterpret_cast<uint32_t>(esi5(eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax39 = eax38 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fa0 = eax39;
    eax40 = reinterpret_cast<uint32_t>(esi5(eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax41 = eax40 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fa4 = eax41;
    eax42 = reinterpret_cast<uint32_t>(esi5(eax4, "GetLogicalProcessorInformation", eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax43 = eax42 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fa8 = eax43;
    eax44 = reinterpret_cast<uint32_t>(esi5(eax4, "CreateSymbolicLinkW", eax4, "GetLogicalProcessorInformation", eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax45 = eax44 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fac = eax45;
    eax46 = reinterpret_cast<uint32_t>(esi5(eax4, "SetDefaultDllDirectories", eax4, "CreateSymbolicLinkW", eax4, "GetLogicalProcessorInformation", eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax47 = eax46 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fb0 = eax47;
    eax48 = reinterpret_cast<uint32_t>(esi5(eax4, "EnumSystemLocalesEx", eax4, "SetDefaultDllDirectories", eax4, "CreateSymbolicLinkW", eax4, "GetLogicalProcessorInformation", eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax49 = eax48 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fb8 = eax49;
    eax50 = reinterpret_cast<uint32_t>(esi5(eax4, "CompareStringEx", eax4, "EnumSystemLocalesEx", eax4, "SetDefaultDllDirectories", eax4, "CreateSymbolicLinkW", eax4, "GetLogicalProcessorInformation", eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax51 = eax50 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fb4 = eax51;
    eax52 = reinterpret_cast<uint32_t>(esi5(eax4, "GetDateFormatEx", eax4, "CompareStringEx", eax4, "EnumSystemLocalesEx", eax4, "SetDefaultDllDirectories", eax4, "CreateSymbolicLinkW", eax4, "GetLogicalProcessorInformation", eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax53 = eax52 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fbc = eax53;
    eax54 = reinterpret_cast<uint32_t>(esi5(eax4, "GetLocaleInfoEx", eax4, "GetDateFormatEx", eax4, "CompareStringEx", eax4, "EnumSystemLocalesEx", eax4, "SetDefaultDllDirectories", eax4, "CreateSymbolicLinkW", eax4, "GetLogicalProcessorInformation", eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax55 = eax54 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fc0 = eax55;
    eax56 = reinterpret_cast<uint32_t>(esi5(eax4, "GetTimeFormatEx", eax4, "GetLocaleInfoEx", eax4, "GetDateFormatEx", eax4, "CompareStringEx", eax4, "EnumSystemLocalesEx", eax4, "SetDefaultDllDirectories", eax4, "CreateSymbolicLinkW", eax4, "GetLogicalProcessorInformation", eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax57 = eax56 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fc4 = eax57;
    eax58 = reinterpret_cast<uint32_t>(esi5(eax4, "GetUserDefaultLocaleName", eax4, "GetTimeFormatEx", eax4, "GetLocaleInfoEx", eax4, "GetDateFormatEx", eax4, "CompareStringEx", eax4, "EnumSystemLocalesEx", eax4, "SetDefaultDllDirectories", eax4, "CreateSymbolicLinkW", eax4, "GetLogicalProcessorInformation", eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax59 = eax58 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fc8 = eax59;
    eax60 = reinterpret_cast<uint32_t>(esi5(eax4, "IsValidLocaleName", eax4, "GetUserDefaultLocaleName", eax4, "GetTimeFormatEx", eax4, "GetLocaleInfoEx", eax4, "GetDateFormatEx", eax4, "CompareStringEx", eax4, "EnumSystemLocalesEx", eax4, "SetDefaultDllDirectories", eax4, "CreateSymbolicLinkW", eax4, "GetLogicalProcessorInformation", eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax61 = eax60 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fcc = eax61;
    eax62 = reinterpret_cast<uint32_t>(esi5(eax4, "LCMapStringEx", eax4, "IsValidLocaleName", eax4, "GetUserDefaultLocaleName", eax4, "GetTimeFormatEx", eax4, "GetLocaleInfoEx", eax4, "GetDateFormatEx", eax4, "CompareStringEx", eax4, "EnumSystemLocalesEx", eax4, "SetDefaultDllDirectories", eax4, "CreateSymbolicLinkW", eax4, "GetLogicalProcessorInformation", eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax63 = eax62 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fd0 = eax63;
    eax64 = reinterpret_cast<uint32_t>(esi5(eax4, "GetCurrentPackageId", eax4, "LCMapStringEx", eax4, "IsValidLocaleName", eax4, "GetUserDefaultLocaleName", eax4, "GetTimeFormatEx", eax4, "GetLocaleInfoEx", eax4, "GetDateFormatEx", eax4, "CompareStringEx", eax4, "EnumSystemLocalesEx", eax4, "SetDefaultDllDirectories", eax4, "CreateSymbolicLinkW", eax4, "GetLogicalProcessorInformation", eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax65 = eax64 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fd4 = eax65;
    eax66 = reinterpret_cast<uint32_t>(esi5(eax4, "GetTickCount64", eax4, "GetCurrentPackageId", eax4, "LCMapStringEx", eax4, "IsValidLocaleName", eax4, "GetUserDefaultLocaleName", eax4, "GetTimeFormatEx", eax4, "GetLocaleInfoEx", eax4, "GetDateFormatEx", eax4, "CompareStringEx", eax4, "EnumSystemLocalesEx", eax4, "SetDefaultDllDirectories", eax4, "CreateSymbolicLinkW", eax4, "GetLogicalProcessorInformation", eax4, "GetCurrentProcessorNumber", eax4, "FreeLibraryWhenCallbackReturns", eax4, "FlushProcessWriteBuffers", eax4, "CloseThreadpoolWait", eax4, "SetThreadpoolWait", eax4, "CreateThreadpoolWait", eax4, "CloseThreadpoolTimer", eax4, "WaitForThreadpoolTimerCallbacks", eax4, "SetThreadpoolTimer", eax4, "CreateThreadpoolTimer", eax4, "SetThreadStackGuarantee", eax4, "CreateSemaphoreExW", eax4, "CreateEventExW", eax4, "InitializeCriticalSectionEx", eax4, "FlsSetValue", eax4, "FlsGetValue", eax4, "FlsFree", eax4, "FlsAlloc", "k", edi2, 0, esi3, __return_address()));
    eax67 = eax66 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fd8 = eax67;
    eax68 = reinterpret_cast<uint32_t>(esi5());
    eax69 = eax68 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fdc = eax69;
    eax70 = reinterpret_cast<uint32_t>(esi5());
    eax71 = eax70 ^ reinterpret_cast<unsigned char>(g4183f0);
    g419fe0 = eax71;
    goto eax4;
}

struct s103 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

int32_t fun_4092b1(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    struct s103* esi10;
    void** edi11;
    void** v12;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = esi7;
    v8 = edi9;
    esi10 = reinterpret_cast<struct s103*>(0x418cc8);
    edi11 = reinterpret_cast<void**>(0x419a70);
    do {
        if (esi10->f4 == 1) {
            esi10->f0 = edi11;
            edi11 = edi11 + 24;
            v12 = esi10->f0;
            fun_407e10(ecx, v12, 0xfa0, 0, v8, v6, v5, a2, a3, a4);
        }
        ++esi10;
    } while (reinterpret_cast<int32_t>(esi10) < 0x418de8);
    return 1;
}

void fun_407cc5(void** ecx) {
    int32_t* esi2;
    int32_t eax3;

    esi2 = reinterpret_cast<int32_t*>(0x4175b0);
    while (reinterpret_cast<uint32_t>(esi2) < 0x4175b0) {
        eax3 = *esi2;
        if (eax3) {
            eax3();
        }
        ++esi2;
    }
    return;
}

int32_t GetStartupInfoW = 0x17c8a;

struct s104 {
    void** f0;
    signed char[3] pad4;
    unsigned char f4;
    signed char[3] pad8;
    int32_t f8;
    void** fc;
};

int32_t GetFileType = 0x17c64;

void fun_405adb(void** ecx, void** a2);

struct s105 {
    signed char[2048] pad2048;
    void** f800;
};

struct s106 {
    void** f0;
    signed char[3] pad4;
    signed char f4;
    signed char[3] pad8;
    int32_t f8;
    void** fc;
};

struct s107 {
    signed char[1] pad1;
    unsigned char f1;
};

int32_t fun_405830(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    int32_t ebp8;
    void** eax9;
    void** ecx10;
    int32_t ebp11;
    int32_t ebp12;
    void** v13;
    void* ebp14;
    int32_t ebp15;
    void*** eax16;
    int32_t ebp17;
    void* ebp18;
    int32_t edi19;
    int32_t ebp20;
    struct s104* tmp32_21;
    int32_t ebp22;
    int32_t eax23;
    void* eax24;
    void** eax25;
    void** eax26;
    int32_t ebp27;
    uint32_t eax28;
    int32_t eax29;
    int32_t eax30;
    void** eax31;
    int32_t ebp32;
    uint32_t eax33;
    int32_t eax34;
    unsigned char al35;
    int32_t eax36;
    int32_t ebp37;
    int32_t ebp38;
    int32_t eax39;
    int32_t ebp40;
    int32_t ebp41;
    int32_t ebp42;
    int32_t esi43;
    int32_t ebp44;
    int1_t less45;
    void** eax46;
    void** ecx47;
    int32_t ebp48;
    void** tmp32_49;
    int32_t ebp50;
    int32_t ebp51;
    int32_t ebp52;
    void** edi53;
    int32_t ebp54;
    unsigned char* eax55;
    int32_t ebp56;
    void*** edx57;
    int32_t ebp58;
    void** v59;
    int32_t eax60;
    int32_t ebp61;
    struct s106* esi62;
    int32_t ebp63;
    int32_t ebp64;
    int32_t ebp65;
    int32_t ebp66;
    int32_t ebp67;
    int32_t ebp68;
    int32_t ebp69;
    int32_t ebp70;
    int32_t ebp71;

    v7 = reinterpret_cast<void**>(__return_address());
    fun_404590(0x417768, 100, v7);
    fun_409180(ecx, 11, 0x417768, 100, v7, a2, a3, a4, a5, a6);
    *reinterpret_cast<void***>(ebp8 - 4) = reinterpret_cast<void**>(0);
    eax9 = fun_408f5b(11, 32, 64, 0x417768, 100, v7, a2);
    ecx10 = eax9;
    *reinterpret_cast<void***>(ebp11 - 36) = ecx10;
    if (ecx10) {
        g4191d0 = eax9;
        g419ff8 = reinterpret_cast<void**>(32);
        while (reinterpret_cast<unsigned char>(ecx10) < reinterpret_cast<unsigned char>(eax9 + 0x800)) {
            *reinterpret_cast<void***>(ecx10 + 4) = reinterpret_cast<void**>(0xa00);
            *reinterpret_cast<void***>(ecx10) = reinterpret_cast<void**>(0xffffffff);
            *reinterpret_cast<void***>(ecx10 + 8) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(ecx10 + 36) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx10 + 36)) & 0x80);
            *reinterpret_cast<void***>(ecx10 + 36) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx10 + 36)) & 0x7f);
            *reinterpret_cast<int16_t*>(ecx10 + 37) = 0xa0a;
            *reinterpret_cast<void***>(ecx10 + 56) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(ecx10 + 52) = reinterpret_cast<void**>(0);
            ecx10 = ecx10 + 64;
            *reinterpret_cast<void***>(ebp12 - 36) = ecx10;
            eax9 = g4191d0;
        }
        v13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp14) + 0xffffff8c);
        GetStartupInfoW(v13);
        if (!*reinterpret_cast<int16_t*>(ebp15 - 66)) 
            goto addr_405a03_6;
        eax16 = *reinterpret_cast<void****>(ebp17 - 64);
        if (eax16) 
            goto addr_4058df_8;
    } else {
        fun_404790(0x4183f0, reinterpret_cast<int32_t>(ebp18) + 0xfffffff0, 0xfe);
        goto addr_405ad5_10;
    }
    addr_405a03_6:
    addr_405a06_11:
    edi19 = 0;
    while (*reinterpret_cast<int32_t*>(ebp20 - 44) = edi19, edi19 < 3) {
        tmp32_21 = reinterpret_cast<struct s104*>((edi19 << 6) + reinterpret_cast<unsigned char>(g4191d0));
        *reinterpret_cast<struct s104**>(ebp22 - 36) = tmp32_21;
        if (tmp32_21->f0 == 0xffffffff || tmp32_21->f0 == 0xfe) {
            tmp32_21->f4 = 0x81;
            if (edi19) {
                eax23 = edi19 - 1;
                eax24 = reinterpret_cast<void*>(-eax23);
                eax25 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax24) - (reinterpret_cast<uint32_t>(eax24) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax24) < reinterpret_cast<uint32_t>(eax24) + reinterpret_cast<uint1_t>(!!eax23))) + 0xfffffff5);
            } else {
                eax25 = reinterpret_cast<void**>(0xf6);
            }
            eax26 = reinterpret_cast<void**>(GetStdHandle(eax25, v13));
            *reinterpret_cast<void***>(ebp27 - 28) = eax26;
            if (eax26 == 0xffffffff) 
                goto addr_405aab_18;
            if (!eax26) 
                goto addr_405aab_18;
            eax28 = reinterpret_cast<uint32_t>(GetFileType(eax26, eax25, v13));
            if (eax28) 
                goto addr_405a6e_21;
        } else {
            eax29 = reinterpret_cast<signed char>(tmp32_21->f4);
            tmp32_21->f4 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax29) | 0x80);
            goto addr_405ac5_23;
        }
        addr_405aab_18:
        eax30 = reinterpret_cast<signed char>(tmp32_21->f4);
        tmp32_21->f4 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax30) | 64);
        tmp32_21->f0 = reinterpret_cast<void**>(0xfe);
        eax31 = g41b000;
        if (eax31) {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax31 + edi19 * 4) + 16) = reinterpret_cast<void**>(0xfe);
        }
        addr_405ac5_23:
        ++edi19;
        continue;
        addr_405a6e_21:
        ecx10 = *reinterpret_cast<void***>(ebp32 - 28);
        tmp32_21->f0 = ecx10;
        eax33 = eax28 & 0xff;
        if (eax33 != 2) {
            if (eax33 != 3) {
                addr_405a93_26:
                fun_407e10(ecx10, &tmp32_21->fc, 0xfa0, 0, eax26, eax25, v13, 0x417768, 100, v7);
                tmp32_21->f8 = tmp32_21->f8 + 1;
                goto addr_405ac5_23;
            } else {
                eax34 = reinterpret_cast<signed char>(tmp32_21->f4);
                al35 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax34) | 8);
            }
        } else {
            eax36 = reinterpret_cast<signed char>(tmp32_21->f4);
            al35 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax36) | 64);
        }
        tmp32_21->f4 = al35;
        goto addr_405a93_26;
    }
    *reinterpret_cast<void***>(ebp37 - 4) = reinterpret_cast<void**>(0xfe);
    fun_405adb(ecx10, v13);
    addr_405ad5_10:
    fun_4045d5(ecx10, 0x417768, 100, v7, a2);
    goto 0x417768;
    addr_4058df_8:
    ecx10 = *eax16;
    *reinterpret_cast<void***>(ebp38 - 28) = ecx10;
    eax39 = reinterpret_cast<int32_t>(eax16 + 4);
    *reinterpret_cast<int32_t*>(ebp40 - 40) = eax39;
    *reinterpret_cast<uint32_t*>(ebp41 - 32) = eax39 + reinterpret_cast<unsigned char>(ecx10);
    if (reinterpret_cast<signed char>(ecx10) >= reinterpret_cast<signed char>(0x800)) {
        ecx10 = reinterpret_cast<void**>(0x800);
        *reinterpret_cast<void***>(ebp42 - 28) = reinterpret_cast<void**>(0x800);
    }
    esi43 = 1;
    *reinterpret_cast<int32_t*>(ebp44 - 48) = 1;
    while (less45 = reinterpret_cast<signed char>(g419ff8) < reinterpret_cast<signed char>(ecx10), less45) {
        eax46 = fun_408f5b(ecx10, 32, 64, v13, 0x417768, 100, v7);
        ecx47 = eax46;
        *reinterpret_cast<void***>(ebp48 - 36) = ecx47;
        if (!ecx47) 
            goto addr_405922_35;
        *reinterpret_cast<void***>(esi43 * 4 + 0x4191d0) = ecx47;
        tmp32_49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g419ff8) + reinterpret_cast<unsigned char>(32));
        g419ff8 = tmp32_49;
        while (reinterpret_cast<unsigned char>(ecx47) < reinterpret_cast<unsigned char>(&(*reinterpret_cast<struct s105**>(esi43 * 4 + 0x4191d0))->f800)) {
            *reinterpret_cast<void***>(ecx47 + 4) = reinterpret_cast<void**>(0xa00);
            *reinterpret_cast<void***>(ecx47) = reinterpret_cast<void**>(0xffffffff);
            *reinterpret_cast<void***>(ecx47 + 8) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(ecx47 + 36) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx47 + 36)) & 0x80);
            *reinterpret_cast<int16_t*>(ecx47 + 37) = 0xa0a;
            *reinterpret_cast<void***>(ecx47 + 56) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(ecx47 + 52) = reinterpret_cast<void**>(0);
            ecx47 = ecx47 + 64;
            *reinterpret_cast<void***>(ebp50 - 36) = ecx47;
        }
        ++esi43;
        *reinterpret_cast<int32_t*>(ebp51 - 48) = esi43;
        ecx10 = *reinterpret_cast<void***>(ebp52 - 28);
    }
    addr_40592b_40:
    edi53 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ebp54 - 44) = reinterpret_cast<void**>(0);
    eax55 = *reinterpret_cast<unsigned char**>(ebp56 - 40);
    edx57 = *reinterpret_cast<void****>(ebp58 - 32);
    while (reinterpret_cast<signed char>(edi53) < reinterpret_cast<signed char>(ecx10)) {
        if (*edx57 != 0xffffffff && (*edx57 != 0xfe && *eax55 & 1)) {
            if (*eax55 & 8 || (v59 = *edx57, eax60 = reinterpret_cast<int32_t>(GetFileType(v59, v13)), edx57 = *reinterpret_cast<void****>(ebp61 - 32), !!eax60)) {
                esi62 = reinterpret_cast<struct s106*>(((reinterpret_cast<unsigned char>(edi53) & 31) << 6) + reinterpret_cast<uint32_t>(*reinterpret_cast<void****>((reinterpret_cast<signed char>(edi53) >> 5) * 4 + 0x4191d0)));
                *reinterpret_cast<struct s106**>(ebp63 - 36) = esi62;
                esi62->f0 = *edx57;
                esi62->f4 = **reinterpret_cast<signed char**>(ebp64 - 40);
                fun_407e10(ecx10, &esi62->fc, 0xfa0, 0, v13, 0x417768, 100, v7, a2, a3);
                esi62->f8 = esi62->f8 + 1;
                edx57 = *reinterpret_cast<void****>(ebp65 - 32);
            }
            ecx10 = *reinterpret_cast<void***>(ebp66 - 28);
        }
        ++edi53;
        *reinterpret_cast<void***>(ebp67 - 44) = edi53;
        eax55 = &(*reinterpret_cast<struct s107**>(ebp68 - 40))->f1;
        *reinterpret_cast<unsigned char**>(ebp69 - 40) = eax55;
        edx57 = edx57 + 4;
        *reinterpret_cast<void****>(ebp70 - 32) = edx57;
    }
    goto addr_405a06_11;
    addr_405922_35:
    ecx10 = g419ff8;
    *reinterpret_cast<void***>(ebp71 - 28) = ecx10;
    goto addr_40592b_40;
}

void** fun_401a00(void** ecx, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** v6;
    void** esi7;
    void** esi8;
    void** ecx9;
    void** al10;
    void** ecx11;
    void** v12;
    void** edi13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    void** edi20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** eax26;
    void** v27;
    void** v28;
    void** ebx29;
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
    void** eax43;
    void** ecx44;
    void** esi45;
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
    uint32_t ebx56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    signed char* ecx64;
    void* edx65;
    signed char v66;
    void** ebx67;
    void** ecx68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** ecx79;
    void** v80;
    void** ecx81;
    void** eax82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** eax93;
    void** edi94;
    void** v95;
    void** edx96;
    void* ecx97;
    void** ecx98;
    int32_t eax99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (a2 != 4) {
        return 1;
    }
    v6 = esi7;
    esi8 = a3;
    ecx9 = *reinterpret_cast<void***>(esi8 + 4);
    al10 = fun_401960(ecx9);
    if (!al10) {
        return 2;
    }
    ecx11 = reinterpret_cast<void**>(0);
    do {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<unsigned char>(ecx11) + 0xffffffec) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ecx11) + *reinterpret_cast<signed char*>(&ecx11)) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<unsigned char>(ecx11) + 0xffffffec)) ^ 85);
        ++ecx11;
    } while (reinterpret_cast<signed char>(ecx11) < reinterpret_cast<signed char>(16));
    v12 = edi13;
    v14 = *reinterpret_cast<void***>(esi8 + 8);
    eax19 = fun_401e79(ecx11, v14, "rb", v12, v6, v15, v16, v17, v18);
    edi20 = eax19;
    if (!edi20) 
        goto addr_401a62_8;
    v21 = *reinterpret_cast<void***>(esi8 + 12);
    eax26 = fun_401e79(ecx11, v21, "wb", v12, v6, v22, v23, v24, v25);
    v27 = eax26;
    if (eax26) {
        v28 = ebx29;
        fun_402000(ecx11, edi20, 0, 2, v28, v12, v6, v30, v31, v32, v33, v34, v35, v36);
        eax43 = fun_402413(ecx11, edi20, edi20, 0, 2, v28, v12, v6, v37, v38, v39, v40, v41, v42);
        ecx44 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffec);
        esi45 = eax43;
        v46 = esi45;
        fun_4019e0(ecx44, v28, v12, v6, v47, v48, v49, v50, v51, v52, v53, v54, v55);
        ebx56 = reinterpret_cast<unsigned char>(esi45) & 15;
        if (ebx56) {
            esi45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi45) - ebx56 + 16);
        }
        fun_402000(ecx44, edi20, 0, 0, v28, v12, v6, v57, v58, v59, v60, v61, v62, v63);
        __asm__("movdqu xmm0, [0x41753c]");
        ecx64 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp5) - 48);
        edx65 = reinterpret_cast<void*>(ecx64 + 1);
        __asm__("movdqu [ebp-0x30], xmm0");
        __asm__("movq xmm0, [0x41754c]");
        __asm__("movq [ebp-0x20], xmm0");
        do {
            ++ecx64;
        } while (v66);
        ebx67 = v27;
        ecx68 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx64) - reinterpret_cast<uint32_t>(edx65));
        v69 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffd0);
        fun_4025d8(ecx68, v69, ecx68, 1, ebx67, v28, v12, v6, v70, v71, v72, v73, v74, v75);
        v76 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 8);
        fun_4025d8(ecx68, v76, 4, 1, ebx67, v69, ecx68, 1, ebx67, v28, v12, v6, v77, v78);
        ecx79 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffec);
        fun_4019e0(ecx79, v76, 4, 1, ebx67, v69, ecx68, 1, ebx67, v28, v12, v6, v80);
        fun_4025d8(ecx79, ecx79, 16, 1, ebx67, v76, 4, 1, ebx67, v69, ecx68, 1, ebx67, v28);
        ecx81 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffec);
        fun_4019e0(ecx81, ecx79, 16, 1, ebx67, v76, 4, 1, ebx67, v69, ecx68, 1, ebx67);
        eax82 = fun_40265a(ecx81, esi45, ecx79, 16, 1, ebx67, v76, 4, 1, ebx67, v69, ecx68, 1, ebx67);
        v83 = eax82;
        fun_407390(ecx81, eax82, 0, esi45, esi45, ecx79, 16, 1, ebx67, v76, 4, 1, ebx67, v69, ecx81, eax82, 0, esi45, esi45, ecx79, 16, 1, ebx67, v76, 4, 1, ebx67, v69);
        fun_4028b1(ecx81, v83, v46, 1, edi20, v28, v12);
        fun_401efa(ecx81, edi20, v83, v46, 1, edi20, v28, v12, v6, v84, v85, v86, v87, v88);
        eax93 = fun_40265a(ecx81, esi45, edi20, v83, v46, 1, edi20, v28, v12, v6, v89, v90, v91, v92);
        edi94 = eax93;
        fun_407390(ecx81, edi94, 0, esi45, esi45, edi20, v83, v46, 1, edi20, v28, v12, v6, v95);
        edx96 = v46;
        ecx97 = reinterpret_cast<void*>(0);
        do {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<int32_t>(ecx97) - 64) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx96) ^ *reinterpret_cast<unsigned char*>(&ecx97));
            ecx97 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx97) + 1);
        } while (reinterpret_cast<int32_t>(ecx97) < 16);
        ecx98 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffec);
        eax99 = fun_401000(ecx98, reinterpret_cast<int32_t>(ebp5) - 0x134);
        if (!eax99) {
            v100 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffc0);
            v101 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffecc);
            fun_401780(v83, esi45, v101, v100, ecx98);
            fun_4025d8(v83, edi94, esi45, 1, ebx67, esi45, v101, v100, ecx98, v28, v12, v6, v102, v103);
            fun_40295d(v83, v83, edi94, esi45, 1, ebx67, esi45, v101, v100, ecx98, v28, v12);
            fun_40295d(v83, edi94, v83, edi94, esi45, 1, ebx67, esi45, v101, v100, ecx98, v28);
            fun_401efa(v83, ebx67, edi94, v83, edi94, esi45, 1, ebx67, esi45, v101, v100, ecx98, v28, v12);
            return 0;
        } else {
            return 4;
        }
    } else {
        fun_401efa(ecx11, edi20, v12, v6, v104, v105, v106, v107, v108, v109, v110, v111, v112, v113);
        return 4;
    }
    addr_401a62_8:
    return edi20 + 3;
}

int32_t g4192d4;

int32_t g4192fc;

signed char g4192f8;

struct s108 {
    signed char[16] pad16;
    signed char f10;
};

struct s109 {
    signed char[12] pad12;
    int32_t fc;
};

void** g419fec;

void** g419fe8;

void fun_406f95(void** ecx);

struct s110 {
    signed char[16] pad16;
    int32_t f10;
};

struct s111 {
    signed char[8] pad8;
    void** f8;
};

struct s112 {
    signed char[16] pad16;
    int32_t f10;
};

void fun_406e7b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** ecx9;
    int32_t ebp10;
    int1_t zf11;
    struct s108* ebp12;
    struct s109* ebp13;
    void** v14;
    int32_t esi15;
    void** eax16;
    void** ebx17;
    int32_t ebp18;
    void** v19;
    void** eax20;
    void** edi21;
    int32_t ebp22;
    int32_t ebp23;
    int32_t ebp24;
    int32_t ebp25;
    void** eax26;
    void** v27;
    int32_t eax28;
    void** eax29;
    void** v30;
    int32_t eax31;
    int32_t ebp32;
    void** v33;
    void** eax34;
    int32_t ebp35;
    int32_t ebp36;
    int32_t ebp37;
    int32_t ebp38;
    int32_t ebp39;
    int32_t ebp40;
    int32_t ebp41;
    struct s110* ebp42;
    void** v43;
    struct s111* ebp44;
    struct s112* ebp45;

    v8 = reinterpret_cast<void**>(__return_address());
    fun_404590(0x4177a8, 28, v8);
    fun_409180(ecx, 8, 0x4177a8, 28, v8, a2, a3, a4, a5, a6);
    ecx9 = reinterpret_cast<void**>(8);
    *reinterpret_cast<uint32_t*>(ebp10 - 4) = 0;
    zf11 = g4192d4 == 1;
    if (!zf11) {
        g4192fc = 1;
        g4192f8 = ebp12->f10;
        if (!ebp13->fc) {
            v14 = g419fec;
            esi15 = DecodePointer;
            eax16 = reinterpret_cast<void**>(esi15(8, v14));
            ebx17 = eax16;
            *reinterpret_cast<void***>(ebp18 - 44) = ebx17;
            if (ebx17) {
                v19 = g419fe8;
                eax20 = reinterpret_cast<void**>(esi15(8, v19, v14));
                edi21 = eax20;
                *reinterpret_cast<void***>(ebp22 - 28) = ebx17;
                *reinterpret_cast<void***>(ebp23 - 32) = edi21;
                while (1) {
                    *reinterpret_cast<void***>(ebp24 - 36) = edi21;
                    do {
                        addr_406ee6_6:
                        edi21 = edi21 - 4;
                        *reinterpret_cast<void***>(ebp25 - 36) = edi21;
                        if (reinterpret_cast<unsigned char>(edi21) < reinterpret_cast<unsigned char>(ebx17)) 
                            goto addr_406f47_7;
                        eax26 = reinterpret_cast<void**>(EncodePointer(ecx9, 0, v19, v14));
                        if (*reinterpret_cast<void***>(edi21) == eax26) 
                            goto addr_406ee6_6;
                        if (reinterpret_cast<unsigned char>(edi21) < reinterpret_cast<unsigned char>(ebx17)) 
                            goto addr_406f47_7;
                        v27 = *reinterpret_cast<void***>(edi21);
                        eax28 = reinterpret_cast<int32_t>(esi15(ecx9, v27, 0, v19, v14));
                        eax29 = reinterpret_cast<void**>(EncodePointer(ecx9, 0, v27, 0, v19, v14));
                        *reinterpret_cast<void***>(edi21) = eax29;
                        eax28(ecx9, 0, v27, 0, v19, v14);
                        v30 = g419fec;
                        esi15 = DecodePointer;
                        eax31 = reinterpret_cast<int32_t>(esi15(ecx9, v30, 0, v27, 0, v19, v14));
                        *reinterpret_cast<int32_t*>(ebp32 - 40) = eax31;
                        v33 = g419fe8;
                        eax34 = reinterpret_cast<void**>(esi15(ecx9, v33, v30, 0, v27, 0, v19, v14));
                        ecx9 = *reinterpret_cast<void***>(ebp35 - 40);
                    } while (*reinterpret_cast<void***>(ebp36 - 28) == ecx9 && *reinterpret_cast<void***>(ebp37 - 32) == eax34);
                    *reinterpret_cast<void***>(ebp38 - 28) = ecx9;
                    ebx17 = ecx9;
                    *reinterpret_cast<void***>(ebp39 - 44) = ebx17;
                    *reinterpret_cast<void***>(ebp40 - 32) = eax34;
                    edi21 = eax34;
                }
            }
            addr_406f47_7:
            fun_406e11(ecx9, 0x411128, 0x411138, v14, 0x4177a8, 28, v8);
            ecx9 = reinterpret_cast<void**>(0x411138);
        }
        fun_406e11(ecx9, 0x41113c, 0x411140, 0x4177a8, 28, v8, a2);
        ecx9 = reinterpret_cast<void**>(0x411140);
    }
    *reinterpret_cast<int32_t*>(ebp41 - 4) = -2;
    fun_406f95(ecx9);
    if (ebp42->f10) {
        fun_4045d5(ecx9, 0x4177a8, 28, v8, a2);
        goto 0x4177a8;
    }
    g4192d4 = 1;
    fun_4092ea(ecx9, 8);
    v43 = ebp44->f8;
    fun_406cf1(8, v43, 0x4177a8, 28, v8, a2, a3, a4, a5);
    if (ebp45->f10) 
        goto addr_406f9b_17;
    addr_406fa3_18:
    goto v43;
    addr_406f9b_17:
    fun_4092ea(8, 8);
    goto addr_406fa3_18;
}

void** fun_40746f(void** a1, void** a2, void** a3, void** a4) {
    void** esi5;
    void** ebp6;
    void** eax7;
    void** esi8;
    void** edx9;
    void** ecx10;
    void** edi11;
    void** edx12;
    void** ebx13;
    void* edi14;
    void** edi15;

    eax7 = fun_407717(esi5, ebp6, __return_address(), a1, a2, a3, a4);
    esi8 = eax7;
    if (!esi8) {
        addr_4075c7_2:
        return eax7;
    } else {
        edx9 = *reinterpret_cast<void***>(esi8 + 92);
        ecx10 = edx9;
        edi11 = a1;
        do {
            if (*reinterpret_cast<void***>(ecx10) == edi11) 
                break;
            ecx10 = ecx10 + 12;
        } while (reinterpret_cast<unsigned char>(ecx10) < reinterpret_cast<unsigned char>(edx9 + 0x90));
        if (reinterpret_cast<unsigned char>(ecx10) >= reinterpret_cast<unsigned char>(edx9 + 0x90)) 
            goto addr_4074aa_7;
        if (*reinterpret_cast<void***>(ecx10) == edi11) 
            goto addr_4074ac_9;
    }
    addr_4074aa_7:
    ecx10 = reinterpret_cast<void**>(0);
    addr_4074ac_9:
    if (!ecx10 || (edx12 = *reinterpret_cast<void***>(ecx10 + 8), edx12 == 0)) {
        eax7 = reinterpret_cast<void**>(0);
    } else {
        if (!reinterpret_cast<int1_t>(edx12 == 5)) {
            if (!reinterpret_cast<int1_t>(edx12 == 1)) {
                ebx13 = *reinterpret_cast<void***>(esi8 + 96);
                *reinterpret_cast<void***>(esi8 + 96) = a2;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx10 + 4) == 8)) {
                    *reinterpret_cast<void***>(ecx10 + 8) = reinterpret_cast<void**>(0);
                    edx12();
                    goto addr_4075ba_15;
                } else {
                    edi14 = reinterpret_cast<void*>(36);
                    do {
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(edi14) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi8 + 92)) + 8) = 0;
                        edi14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi14) + 12);
                    } while (reinterpret_cast<int32_t>(edi14) < 0x90);
                    edi15 = *reinterpret_cast<void***>(esi8 + 100);
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx10) == 0xc000008e)) 
                        goto addr_40751e_19; else 
                        goto addr_407512_20;
                }
            } else {
                eax7 = reinterpret_cast<void**>(0xffffffff);
            }
        } else {
            *reinterpret_cast<void***>(ecx10 + 8) = reinterpret_cast<void**>(0);
            eax7 = reinterpret_cast<void**>(1);
        }
    }
    addr_4075c6_23:
    goto addr_4075c7_2;
    addr_4075ba_15:
    *reinterpret_cast<void***>(esi8 + 96) = ebx13;
    eax7 = reinterpret_cast<void**>(0xffffffff);
    goto addr_4075c6_23;
    addr_40751e_19:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx10) == 0xc0000090)) {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx10) == 0xc0000091)) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx10) == 0xc0000093)) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx10) == 0xc000008d)) {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx10) == 0xc000008f)) {
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx10) == 0xc0000092)) {
                            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx10) == 0xc00002b5)) {
                                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx10) == 0xc00002b4)) {
                                    *reinterpret_cast<void***>(esi8 + 100) = reinterpret_cast<void**>(0x8e);
                                }
                            } else {
                                *reinterpret_cast<void***>(esi8 + 100) = reinterpret_cast<void**>(0x8d);
                            }
                        } else {
                            *reinterpret_cast<void***>(esi8 + 100) = reinterpret_cast<void**>(0x8a);
                        }
                    } else {
                        *reinterpret_cast<void***>(esi8 + 100) = reinterpret_cast<void**>(0x86);
                    }
                } else {
                    *reinterpret_cast<void***>(esi8 + 100) = reinterpret_cast<void**>(0x82);
                }
            } else {
                *reinterpret_cast<void***>(esi8 + 100) = reinterpret_cast<void**>(0x85);
            }
        } else {
            *reinterpret_cast<void***>(esi8 + 100) = reinterpret_cast<void**>(0x84);
        }
    } else {
        *reinterpret_cast<void***>(esi8 + 100) = reinterpret_cast<void**>(0x81);
    }
    addr_4075a4_39:
    edx12();
    *reinterpret_cast<void***>(esi8 + 100) = edi15;
    goto addr_4075ba_15;
    addr_407512_20:
    *reinterpret_cast<void***>(esi8 + 100) = reinterpret_cast<void**>(0x83);
    goto addr_4075a4_39;
}

int32_t GetSystemTimeAsFileTime = 0x17daa;

int32_t GetCurrentProcessId = 0x17d94;

int32_t QueryPerformanceCounter = 0x17d7a;

void fun_407c29(void** a1) {
    void* ebp2;
    void** eax3;
    void* v4;
    uint32_t eax5;
    uint32_t eax6;
    void** ecx7;
    uint32_t v8;
    uint32_t v9;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g4183f0;
    if (eax3 == 0xbb40e64e || !(0xffff0000 & reinterpret_cast<unsigned char>(eax3))) {
        v4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 12);
        GetSystemTimeAsFileTime(v4);
        eax5 = reinterpret_cast<uint32_t>(GetCurrentThreadId(v4));
        eax6 = reinterpret_cast<uint32_t>(GetCurrentProcessId(v4));
        QueryPerformanceCounter(reinterpret_cast<int32_t>(ebp2) - 20, v4);
        ecx7 = reinterpret_cast<void**>(v8 ^ v9 ^ (eax5 ^ eax6) ^ reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ebp2) - 4));
        if (!reinterpret_cast<int1_t>(ecx7 == 0xbb40e64e)) {
            if (!(0xffff0000 & reinterpret_cast<unsigned char>(ecx7))) {
                ecx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx7) | (reinterpret_cast<unsigned char>(ecx7) | 0x4711) << 16);
            }
        } else {
            ecx7 = reinterpret_cast<void**>(0xbb40e64f);
        }
        g4183f0 = ecx7;
        g4183f4 = reinterpret_cast<void**>(~reinterpret_cast<unsigned char>(ecx7));
    } else {
        g4183f4 = reinterpret_cast<void**>(~reinterpret_cast<unsigned char>(eax3));
    }
    return;
}

int32_t g4191c8 = 0;

void fun_402c3f(int32_t a1, int32_t a2) {
    g4191c8 = a1;
    return;
}

void** fun_40b573(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** v15;
    void** v16;
    void** ebp17;
    void** v18;
    void** esi19;
    void** esi20;
    void** ecx21;
    void** v22;
    void** eax23;
    int1_t zf24;
    int32_t eax25;
    void** eax26;
    void** eax27;

    v15 = reinterpret_cast<void**>(__return_address());
    v16 = ebp17;
    v18 = esi19;
    if (!a2 || reinterpret_cast<unsigned char>(0xe0 / reinterpret_cast<unsigned char>(a2)) >= reinterpret_cast<unsigned char>(a3)) {
        esi20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) * reinterpret_cast<unsigned char>(a3));
        if (!esi20) {
            ++esi20;
        }
        do {
            ecx21 = reinterpret_cast<void**>(0);
            if (reinterpret_cast<unsigned char>(esi20) > reinterpret_cast<unsigned char>(0xffffffe0)) 
                goto addr_40b5be_5;
            v22 = g41993c;
            eax23 = reinterpret_cast<void**>(HeapAlloc(v22, 8, esi20));
            ecx21 = eax23;
            if (ecx21) 
                break;
            addr_40b5be_5:
            zf24 = g419938 == 0;
            if (zf24) 
                goto addr_40b5db_7;
            eax25 = fun_406bd8(ecx21, esi20, v18, v16, v15, a2, a3);
        } while (eax25);
        goto addr_40b5d2_9;
    } else {
        eax26 = fun_404026(ecx, v18, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        goto addr_40b58f_11;
    }
    addr_40b5e8_12:
    eax27 = ecx21;
    addr_40b5ea_13:
    return eax27;
    addr_40b5db_7:
    if (a4) {
        *reinterpret_cast<void***>(a4) = reinterpret_cast<void**>(12);
        goto addr_40b5e8_12;
    }
    addr_40b5d2_9:
    eax26 = a4;
    if (!eax26) {
        addr_40b595_15:
        eax27 = reinterpret_cast<void**>(0);
        goto addr_40b5ea_13;
    }
    addr_40b58f_11:
    *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(12);
    goto addr_40b595_15;
}

void** fun_404f8b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14);

struct s113 {
    signed char[4] pad4;
    unsigned char f4;
};

void** fun_4071ed(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** edi15;
    void** ebp16;
    void** eax17;
    void** eax18;
    void** eax19;
    void** eax20;
    void** v21;
    void** v22;
    void** eax23;
    void** eax24;
    uint32_t eax25;
    void** eax26;
    void** eax27;
    struct s113* eax28;
    void** esi29;
    void** eax30;
    void** eax31;
    void** ecx32;

    if (!a2) {
        eax17 = fun_404026(ecx, edi15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax17) = reinterpret_cast<void**>(22);
        fun_402c77(ecx);
        goto addr_407308_3;
    }
    eax18 = *reinterpret_cast<void***>(a2 + 12);
    if (!(*reinterpret_cast<unsigned char*>(&eax18) & 0x83) || *reinterpret_cast<unsigned char*>(&eax18) & 64) {
        addr_407308_3:
        eax19 = reinterpret_cast<void**>(0xffffffff);
    } else {
        if (!(*reinterpret_cast<unsigned char*>(&eax18) & 2)) {
            eax20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax18) | 1);
            *reinterpret_cast<void***>(a2 + 12) = eax20;
            if (reinterpret_cast<unsigned char>(eax20) & 0x10c) {
                *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a2 + 8);
            } else {
                fun_40a008(ecx, a2, edi15, ebp16, __return_address(), a2, a3, a4);
                ecx = a2;
            }
            v21 = *reinterpret_cast<void***>(a2 + 24);
            v22 = *reinterpret_cast<void***>(a2 + 8);
            eax23 = fun_4048e2(ecx, a2, v22, v21, edi15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
            eax24 = fun_404f8b(a2, eax23, v22, v21, edi15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            *reinterpret_cast<void***>(a2 + 4) = eax24;
            if (!eax24) 
                goto addr_4072f7_10;
            if (eax24 == 0xffffffff) 
                goto addr_4072f7_10; else 
                goto addr_407274_12;
        } else {
            eax18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax18) | 32);
            *reinterpret_cast<void***>(a2 + 12) = eax18;
            goto addr_407308_3;
        }
    }
    addr_40730b_14:
    return eax19;
    addr_4072f7_10:
    eax25 = -reinterpret_cast<unsigned char>(eax24);
    *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | reinterpret_cast<unsigned char>((eax25 - (eax25 + reinterpret_cast<uint1_t>(eax25 < eax25 + reinterpret_cast<uint1_t>(!!eax24))) & 16) + 16));
    *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
    goto addr_407308_3;
    addr_407274_12:
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0x82)) {
        eax26 = fun_4048e2(a2, a2, edi15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        if (eax26 == 0xffffffff || (eax27 = fun_4048e2(a2, a2, edi15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11), eax27 == 0xfffffffe)) {
            eax28 = reinterpret_cast<struct s113*>(0x418500);
        } else {
            eax30 = fun_4048e2(a2, a2, esi29, edi15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
            eax31 = fun_4048e2(a2, a2, a2, esi29, edi15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
            eax28 = reinterpret_cast<struct s113*>(((reinterpret_cast<unsigned char>(eax31) & 31) << 6) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(eax30) >> 5) * 4 + 0x4191d0)));
        }
        if ((eax28->f4 & 0x82) == 0x82) {
            *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 0x2000);
        }
    }
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a2 + 24) == 0x200) && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 8 && !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0x400))) {
        *reinterpret_cast<void***>(a2 + 24) = reinterpret_cast<void**>(0x1000);
    }
    ecx32 = *reinterpret_cast<void***>(a2);
    *reinterpret_cast<void***>(a2 + 4) = *reinterpret_cast<void***>(a2 + 4) - 1;
    eax19 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx32))));
    *reinterpret_cast<void***>(a2) = ecx32 + 1;
    goto addr_40730b_14;
}

struct s114 {
    signed char[168] pad168;
    int32_t fa8;
};

struct s115 {
    signed char[4] pad4;
    int32_t f4;
};

struct s116 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_408e4e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void*** ebp9;
    void** eax10;
    void** ecx11;
    void** edi12;
    void** esi13;
    void** ebx14;
    struct s114* v15;
    uint32_t eax16;
    void** edi17;
    void** v18;
    void** v19;
    void** eax20;
    void** eax21;
    int32_t v22;
    struct s115* v23;
    int32_t eax24;
    signed char v25;
    struct s116* v26;
    void** v27;
    void** v28;
    void** v29;
    void** ebp30;
    void** eax31;
    void** v32;
    int1_t cf33;
    void** eax34;
    void** v35;
    void** v36;
    int32_t eax37;
    void** v38;

    ebp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (!a3 || !a4) {
        addr_408e75_2:
        eax10 = reinterpret_cast<void**>(0);
    } else {
        if (*reinterpret_cast<void***>(a3)) {
            ecx11 = reinterpret_cast<void**>(ebp9 + 0xfffffff0);
            fun_402d4b(ecx11, a5, edi12, esi13, ebx14);
            if (!v15->fa8) {
                if (a2) {
                    eax16 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3));
                    *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(&eax16);
                }
                edi17 = reinterpret_cast<void**>(1);
                goto addr_408f2e_8;
            }
            v18 = reinterpret_cast<void**>(ebp9 + 0xfffffff0);
            v19 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3))));
            eax20 = fun_408e03(ecx11, v19, v18);
            if (!eax20) 
                goto addr_408efd_10; else 
                goto addr_408ebd_11;
        } else {
            if (a2) {
                *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
                goto addr_408e75_2;
            }
        }
    }
    addr_408e77_14:
    return eax10;
    addr_408efd_10:
    eax21 = reinterpret_cast<void**>(0);
    *reinterpret_cast<unsigned char*>(&eax21) = reinterpret_cast<uint1_t>(!!a2);
    edi17 = reinterpret_cast<void**>(1);
    v22 = v23->f4;
    eax24 = reinterpret_cast<int32_t>(MultiByteToWideChar(v18, v22, 9, a3, 1, a2, eax21));
    if (eax24) {
        addr_408f2e_8:
        if (v25) {
            v26->f70 = v26->f70 & 0xfffffffd;
        }
    } else {
        addr_408f20_16:
        eax31 = fun_404026(v18, edi12, esi13, ebx14, 1, v27, v28, v29, ebp30, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        edi17 = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(42);
        goto addr_408f2e_8;
    }
    eax10 = edi17;
    goto addr_408e77_14;
    addr_408ebd_11:
    edi17 = v32;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi17 + 0x74)) <= reinterpret_cast<signed char>(1)) 
        goto addr_408eed_18;
    cf33 = reinterpret_cast<unsigned char>(a4) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi17 + 0x74));
    if (reinterpret_cast<signed char>(a4) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi17 + 0x74))) {
        eax34 = reinterpret_cast<void**>(0);
        *reinterpret_cast<unsigned char*>(&eax34) = reinterpret_cast<uint1_t>(!!a2);
        v35 = *reinterpret_cast<void***>(edi17 + 0x74);
        v36 = *reinterpret_cast<void***>(edi17 + 4);
        eax37 = reinterpret_cast<int32_t>(MultiByteToWideChar(v18, v36, 9, a3, v35, a2, eax34));
        edi17 = v38;
        if (eax37) {
            addr_408ef8_21:
            edi17 = *reinterpret_cast<void***>(edi17 + 0x74);
            goto addr_408f2e_8;
        } else {
            addr_408eed_18:
            cf33 = reinterpret_cast<unsigned char>(a4) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi17 + 0x74));
        }
    }
    if (cf33) 
        goto addr_408f20_16;
    if (!*reinterpret_cast<void***>(a3 + 1)) 
        goto addr_408f20_16; else 
        goto addr_408ef8_21;
}

void** fun_408dd6(void** a1) {
    int1_t zf2;
    void** eax3;
    uint16_t* eax4;

    zf2 = g419f34 == 0;
    if (!zf2) {
        eax3 = fun_408d28(a1, 0);
        return eax3;
    } else {
        eax4 = image_base_;
        return static_cast<uint32_t>(eax4[reinterpret_cast<unsigned char>(a1)]) & 0x80;
    }
}

void** fun_409090(void** a1, void** a2, uint32_t a3, uint32_t a4) {
    if (a4 | reinterpret_cast<unsigned char>(a2)) {
        return reinterpret_cast<unsigned char>(a1) * a3;
    } else {
        return reinterpret_cast<unsigned char>(a1) * a3;
    }
}

struct s117 {
    signed char[24] pad24;
    void** f18;
};

struct s118 {
    signed char[8] pad8;
    int32_t f8;
};

struct s119 {
    signed char[28] pad28;
    void** f1c;
};

struct s120 {
    signed char[20] pad20;
    uint32_t f14;
};

struct s121 {
    signed char[28] pad28;
    void** f1c;
};

struct s122 {
    signed char[20] pad20;
    void** f14;
};

struct s123 {
    signed char[16] pad16;
    void** f10;
};

struct s124 {
    signed char[12] pad12;
    void** fc;
};

struct s125 {
    signed char[8] pad8;
    void** f8;
};

int32_t fun_4092ff(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    int32_t ebp14;
    int32_t ebp15;
    int32_t eax16;
    void** esi17;
    struct s117* ebp18;
    int32_t eax19;
    struct s118* ebp20;
    struct s119* ebp21;
    uint32_t eax22;
    struct s120* ebp23;
    uint32_t eax24;
    void** eax25;
    int32_t ebp26;
    void** v27;
    struct s121* ebp28;
    void** v29;
    struct s122* ebp30;
    void** v31;
    struct s123* ebp32;
    void** v33;
    struct s124* ebp34;
    void** v35;
    struct s125* ebp36;
    void* ebp37;
    void** eax38;
    int32_t ebp39;
    int32_t ebp40;

    fun_404590(0x4178b8, 20, __return_address());
    *reinterpret_cast<void***>(ebp14 - 28) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(ebp15 - 32) = reinterpret_cast<void**>(0);
    eax16 = 0;
    esi17 = ebp18->f18;
    *reinterpret_cast<unsigned char*>(&eax16) = reinterpret_cast<uint1_t>(!!esi17);
    if (!eax16 || ((*reinterpret_cast<void***>(esi17) = reinterpret_cast<void**>(0xffffffff), eax19 = 0, *reinterpret_cast<unsigned char*>(&eax19) = reinterpret_cast<uint1_t>(!!ebp20->f8), eax19 == 0) || ebp21->f1c && (eax22 = ebp23->f14 & 0xfffffe7f, eax24 = -eax22, eax24 - (eax24 + reinterpret_cast<uint1_t>(eax24 < eax24 + reinterpret_cast<uint1_t>(!!eax22))) + 1 == 0))) {
        eax25 = fun_404026(0, 0x4178b8, 20, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(22);
        fun_402c77(0);
    } else {
        *reinterpret_cast<void***>(ebp26 - 4) = reinterpret_cast<void**>(0);
        v27 = ebp28->f1c;
        v29 = ebp30->f14;
        v31 = ebp32->f10;
        v33 = ebp34->fc;
        v35 = ebp36->f8;
        eax38 = fun_4093c8(0, reinterpret_cast<int32_t>(ebp37) + 0xffffffe0, esi17, v35, v33, v31, v29, v27);
        *reinterpret_cast<void***>(ebp39 - 28) = eax38;
        *reinterpret_cast<int32_t*>(ebp40 - 4) = -2;
        fun_40939c();
        if (eax38) {
            *reinterpret_cast<void***>(esi17) = reinterpret_cast<void**>(0xffffffff);
        }
    }
    fun_4045d5(0, 0x4178b8, 20, __return_address(), a1);
    goto 0x4178b8;
}

struct s126 {
    signed char[8] pad8;
    int32_t f8;
};

struct s127 {
    signed char[112] pad112;
    uint32_t f70;
};

uint32_t fun_40944c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** esi7;
    void** ecx8;
    void** edi9;
    void** ebx10;
    void** esi11;
    struct s126* v12;
    void** ebx13;
    void** edi14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** ebp20;
    void** eax21;
    uint32_t edx22;
    uint32_t ecx23;
    void** ebx24;
    void** v25;
    void* v26;
    uint32_t ebx27;
    void* v28;
    uint32_t ebx29;
    uint32_t eax30;
    uint32_t ecx31;
    uint32_t eax32;
    int32_t v33;
    uint32_t eax34;
    uint32_t eax35;
    signed char v36;
    struct s127* v37;

    esi7 = a3;
    if (esi7) {
        ecx8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffec);
        fun_402d4b(ecx8, a4, edi9, ebx10, esi11);
        if (v12->f8) {
            ebx13 = a1;
            if (!ebx13 || (edi14 = a2, !edi14)) {
                eax21 = fun_404026(ecx8, edi9, ebx10, esi11, v15, v16, v17, v18, v19, ebp20, __return_address(), a1, a2, a3, a4, a5, a6);
                *reinterpret_cast<void***>(eax21) = reinterpret_cast<void**>(22);
                fun_402c77(ecx8);
                edx22 = 0x7fffffff;
            } else {
                do {
                    ecx23 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx13));
                    --esi7;
                    ebx24 = ebx13 + 1;
                    v25 = ebx24;
                    edx22 = 0;
                    if (!(*reinterpret_cast<unsigned char*>(ecx23 + reinterpret_cast<int32_t>(v26) + 25) & 4)) {
                        addr_409501_6:
                        ebx27 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14));
                        ++edi14;
                        edx22 = 0;
                        if (*reinterpret_cast<unsigned char*>(ebx27 + reinterpret_cast<int32_t>(v28) + 25) & 4) {
                            if (!esi7 || (--esi7, *reinterpret_cast<void***>(edi14) == 0)) {
                                ebx27 = 0;
                            } else {
                                ebx29 = ebx27 << 8;
                                eax30 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14));
                                ++edi14;
                                ebx27 = *reinterpret_cast<uint16_t*>(&ebx29) | *reinterpret_cast<uint16_t*>(&eax30);
                            }
                        }
                    } else {
                        if (esi7) {
                            if (*reinterpret_cast<void***>(ebx24)) {
                                ecx31 = ecx23 << 8;
                                eax32 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx24));
                                ecx23 = *reinterpret_cast<uint16_t*>(&ecx31) | *reinterpret_cast<uint16_t*>(&eax32);
                                v25 = ebx24 + 1;
                                goto addr_409501_6;
                            } else {
                                ecx23 = 0;
                                goto addr_409501_6;
                            }
                        } else {
                            ecx23 = 0;
                            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14)) + v33 + 25) & 4) 
                                break;
                            ebx27 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14));
                        }
                    }
                    if (*reinterpret_cast<uint16_t*>(&ebx27) != *reinterpret_cast<uint16_t*>(&ecx23)) 
                        goto addr_409547_17;
                    if (!*reinterpret_cast<uint16_t*>(&ecx23)) 
                        break;
                    ebx13 = v25;
                } while (esi7);
                goto addr_409545_20;
            }
        } else {
            eax34 = fun_40bde0(ecx8, a1, a2, esi7);
            edx22 = eax34;
        }
    } else {
        eax35 = 0;
        goto addr_40955e_23;
    }
    addr_40954d_24:
    if (v36) {
        v37->f70 = v37->f70 & 0xfffffffd;
    }
    eax35 = edx22;
    addr_40955e_23:
    return eax35;
    addr_409547_17:
    edx22 = (-static_cast<uint32_t>(reinterpret_cast<uint1_t>(0 < static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&ebx27) < *reinterpret_cast<uint16_t*>(&ecx23))))) & 2) - 1;
    goto addr_40954d_24;
    addr_409545_20:
    goto addr_40954d_24;
}

struct s128 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_40957b(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** edi7;
    void** ebx8;
    void** v9;
    void** edi10;
    void** edx11;
    signed char v12;
    struct s128* v13;
    void** ecx14;
    void** v15;
    void** eax16;
    void** v17;
    void** ebx18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** ebp24;
    void** eax25;
    uint32_t esi26;
    uint32_t v27;
    void** si28;
    void* eax29;
    uint32_t eax30;
    uint32_t v31;
    uint32_t eax32;
    void* edx33;
    void** eax34;
    void** al35;
    void** v36;
    uint32_t v37;
    uint32_t eax38;
    uint32_t eax39;
    void** v40;
    uint32_t esi41;
    uint32_t eax42;
    uint32_t eax43;
    void* eax44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** eax51;

    fun_402d4b(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffe8, a4, edi7, ebx8, v9);
    edi10 = a3;
    edx11 = reinterpret_cast<void**>(0);
    if (!edi10) {
        addr_409721_2:
        if (v12) {
            v13->f70 = v13->f70 & 0xfffffffd;
        }
    } else {
        ecx14 = v15;
        if (*reinterpret_cast<void***>(ecx14 + 8)) {
            eax16 = a1;
            v17 = eax16;
            if (!eax16 || (ebx18 = a2, !ebx18)) {
                eax25 = fun_404026(ecx14, edi7, ebx8, v19, v20, v21, v22, v17, v23, ebp24, __return_address(), a1, a2, a3, a4, a5, a6);
                *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(22);
                fun_402c77(ecx14);
                edx11 = reinterpret_cast<void**>(0x7fffffff);
                goto addr_409721_2;
            } else {
                do {
                    esi26 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax16));
                    --edi10;
                    ++v17;
                    v27 = esi26;
                    if (!(*reinterpret_cast<unsigned char*>(*reinterpret_cast<unsigned char*>(&v27) + reinterpret_cast<unsigned char>(ecx14) + 25) & 4)) {
                        si28 = *reinterpret_cast<void***>(&v27);
                        eax29 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(si28)));
                        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<unsigned char>(ecx14) + 25) & 16)) {
                            addr_409680_10:
                            eax30 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx18));
                            ++ebx18;
                            v31 = eax30;
                            if (!(*reinterpret_cast<unsigned char*>(*reinterpret_cast<unsigned char*>(&eax30) + reinterpret_cast<unsigned char>(ecx14) + 25) & 4)) {
                                *reinterpret_cast<void***>(&eax32) = *reinterpret_cast<void***>(&v31);
                                edx33 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(&eax32))));
                                edx11 = reinterpret_cast<void**>(0);
                                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx33) + reinterpret_cast<unsigned char>(ecx14) + 25) & 16)) {
                                    addr_409703_12:
                                    if (*reinterpret_cast<void***>(&eax32) != si28) 
                                        goto addr_40971a_13;
                                } else {
                                    eax34 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx33) + reinterpret_cast<unsigned char>(ecx14) + 0x119)));
                                    goto addr_4096fc_15;
                                }
                            } else {
                                if (!edi10 || (al35 = *reinterpret_cast<void***>(ebx18), --edi10, al35 == 0)) {
                                    v36 = reinterpret_cast<void**>(0);
                                    goto addr_4096ff_18;
                                } else {
                                    v37 = eax30 << 8;
                                    eax38 = reinterpret_cast<unsigned char>(al35);
                                    *reinterpret_cast<uint16_t*>(&v37) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&v37) | *reinterpret_cast<uint16_t*>(&eax38));
                                    ++ebx18;
                                    eax39 = v37;
                                    eax32 = *reinterpret_cast<uint16_t*>(&eax39);
                                    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&eax32)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx14 + 12)) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&eax32)) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx14 + 14))) {
                                        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&eax32)) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx14 + 18)) && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&eax32)) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx14 + 20))) {
                                            *reinterpret_cast<void***>(&eax32) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&eax32)) + reinterpret_cast<uint16_t>(*reinterpret_cast<void**>(ecx14 + 22)));
                                            goto addr_409703_12;
                                        }
                                    } else {
                                        *reinterpret_cast<void***>(&eax32) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&eax32)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx14 + 16)));
                                        goto addr_409703_12;
                                    }
                                }
                            }
                        } else {
                            v40 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<unsigned char>(ecx14) + 0x119)));
                            goto addr_40967c_24;
                        }
                    } else {
                        if (edi10) {
                            if (*reinterpret_cast<void***>(v17)) {
                                esi41 = esi26 << 8;
                                eax42 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v17));
                                ++v17;
                                eax43 = *reinterpret_cast<uint16_t*>(&esi41) | *reinterpret_cast<uint16_t*>(&eax42);
                                si28 = *reinterpret_cast<void***>(&eax43);
                                if (reinterpret_cast<unsigned char>(si28) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx14 + 12)) || reinterpret_cast<unsigned char>(si28) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx14 + 14))) {
                                    if (reinterpret_cast<unsigned char>(si28) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx14 + 18)) && reinterpret_cast<unsigned char>(si28) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx14 + 20))) {
                                        si28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(si28) + reinterpret_cast<uint16_t>(*reinterpret_cast<void**>(ecx14 + 22)));
                                        goto addr_409680_10;
                                    }
                                } else {
                                    si28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(si28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx14 + 16)));
                                    goto addr_409680_10;
                                }
                            } else {
                                v40 = reinterpret_cast<void**>(0);
                                goto addr_40967c_24;
                            }
                        } else {
                            eax44 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx18))));
                            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax44) + reinterpret_cast<unsigned char>(ecx14) + 25) & 4) 
                                goto addr_409720_33;
                            si28 = reinterpret_cast<void**>(0);
                            eax34 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx18))));
                            goto addr_4096fc_15;
                        }
                    }
                    if (!si28) 
                        goto addr_409720_33; else 
                        continue;
                    addr_4096fc_15:
                    v36 = eax34;
                    addr_4096ff_18:
                    *reinterpret_cast<void***>(&eax32) = v36;
                    goto addr_409703_12;
                    addr_40967c_24:
                    si28 = v40;
                    goto addr_409680_10;
                    eax16 = v17;
                } while (edi10);
                goto addr_409718_37;
            }
        } else {
            eax51 = fun_40be58(ecx14, a1, a2, edi10, edi7, ebx8, v45, v46, v47, v48, v49, v50, ebp24, __return_address());
            edx11 = eax51;
            goto addr_409721_2;
        }
    }
    return edx11;
    addr_40971a_13:
    edx11 = reinterpret_cast<void**>((-static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&eax32)) < reinterpret_cast<unsigned char>(si28)))))))) & 2) - 1);
    addr_409720_33:
    goto addr_409721_2;
    addr_409718_37:
    goto addr_409720_33;
}

void fun_404899(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    fun_4099a5(ecx, 1, __return_address(), a2, a3, a4, a5, a6, a7);
    goto ecx;
}

void fun_41011e();

void fun_4048b2(void** ecx) {
    int32_t edi2;

    fun_41011e();
    goto edi2;
}

struct s129 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f18;
};

int32_t fun_409850(struct s26* a1) {
    struct s129* ecx2;
    int32_t eax3;

    if (a1->f0 == 0x5a4d) {
        ecx2 = reinterpret_cast<struct s129*>(a1->f3c + reinterpret_cast<int32_t>(a1));
        eax3 = 0;
        if (ecx2->f0 == 0x4550) {
            *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<uint1_t>(ecx2->f18 == 0x10b);
        }
        return eax3;
    } else {
        return 0;
    }
}

void fun_4049b9(void** ecx) {
    int32_t esi2;

    fun_409d6d(esi2);
    return;
}

uint32_t fun_404b55(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    uint32_t eax6;

    eax6 = fun_404b5e(ecx, 1, __return_address(), a2, a3, a4, a5);
    return eax6;
}

void fun_404c06(void** ecx) {
    void** eax2;
    void** v3;
    int32_t esi4;
    void** esi5;

    eax2 = g41b000;
    v3 = *reinterpret_cast<void***>(eax2 + esi4 * 4);
    fun_4041c3(ecx, esi5, v3);
    return;
}

void fun_404d09(void** ecx) {
    int32_t esi2;

    fun_409d6d(esi2);
    return;
}

void fun_404eaa(void** ecx) {
    int32_t edi2;

    fun_409d6d(edi2);
    return;
}

struct s130 {
    signed char[8] pad8;
    void** f8;
};

struct s131 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s132 {
    signed char[16] pad16;
    void** f10;
};

struct s133 {
    signed char[12] pad12;
    void** fc;
};

void fun_405077(void** ecx);

void** fun_404f8b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int32_t ebp15;
    void** esi16;
    struct s130* ebp17;
    int1_t cf18;
    void** eax19;
    int32_t ebx20;
    uint32_t edi21;
    struct s131* ebp22;
    int32_t ebp23;
    void** eax24;
    void** eax25;
    void** edi26;
    void** v27;
    struct s132* ebp28;
    void** v29;
    struct s133* ebp30;
    void** eax31;
    int32_t ebp32;
    int32_t ebp33;
    void** eax34;
    void** eax35;
    void** eax36;
    void** eax37;
    void** eax38;
    void** eax39;

    fun_404590(0x417748, 16, __return_address());
    *reinterpret_cast<void***>(ebp15 - 28) = reinterpret_cast<void**>(0);
    esi16 = ebp17->f8;
    if (!reinterpret_cast<int1_t>(esi16 == 0xfffffffe)) {
        if (reinterpret_cast<signed char>(esi16) < reinterpret_cast<signed char>(0) || (cf18 = reinterpret_cast<unsigned char>(esi16) < reinterpret_cast<unsigned char>(g419ff8), !cf18)) {
            eax19 = fun_403ff2(ecx, 0x417748, 16, __return_address(), a2, a3, a4, a5);
            *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(0);
        } else {
            ebx20 = reinterpret_cast<signed char>(esi16) >> 5;
            edi21 = (reinterpret_cast<unsigned char>(esi16) & 31) << 6;
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx20 * 4 + 0x4191d0)) + edi21 + 4))) & 1) {
                if (0x7fffffff - (0x7fffffff + (0x7fffffff < 0x7fffffff + (0x7fffffff < ebp22->f10))) + 1) {
                    fun_4099c7(ecx, esi16, 0x417748, 16, __return_address(), a2);
                    ecx = esi16;
                    *reinterpret_cast<uint32_t*>(ebp23 - 4) = 0;
                    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx20 * 4 + 0x4191d0)) + edi21 + 4) & 1)) {
                        eax24 = fun_404026(ecx, 0x417748, 16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
                        *reinterpret_cast<void***>(eax24) = reinterpret_cast<void**>(9);
                        eax25 = fun_403ff2(ecx, 0x417748, 16, __return_address(), a2, a3, a4, a5);
                        *reinterpret_cast<void***>(eax25) = reinterpret_cast<void**>(0);
                        edi26 = reinterpret_cast<void**>(0xffffffff);
                    } else {
                        v27 = ebp28->f10;
                        v29 = ebp30->fc;
                        eax31 = fun_40509f(ecx, esi16, v29, v27);
                        edi26 = eax31;
                    }
                    *reinterpret_cast<void***>(ebp32 - 28) = edi26;
                    *reinterpret_cast<int32_t*>(ebp33 - 4) = -2;
                    fun_405077(ecx);
                    goto addr_405099_10;
                } else {
                    eax34 = fun_403ff2(ecx, 0x417748, 16, __return_address(), a2, a3, a4, a5);
                    *reinterpret_cast<void***>(eax34) = reinterpret_cast<void**>(0);
                    eax35 = fun_404026(ecx, 0x417748, 16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
                    *reinterpret_cast<void***>(eax35) = reinterpret_cast<void**>(22);
                    goto addr_405091_12;
                }
            } else {
                eax36 = fun_403ff2(ecx, 0x417748, 16, __return_address(), a2, a3, a4, a5);
                *reinterpret_cast<void***>(eax36) = reinterpret_cast<void**>(0);
            }
        }
    } else {
        eax37 = fun_403ff2(ecx, 0x417748, 16, __return_address(), a2, a3, a4, a5);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        eax38 = fun_404026(ecx, 0x417748, 16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        *reinterpret_cast<void***>(eax38) = reinterpret_cast<void**>(9);
        goto addr_405096_15;
    }
    eax39 = fun_404026(ecx, 0x417748, 16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    *reinterpret_cast<void***>(eax39) = reinterpret_cast<void**>(9);
    addr_405091_12:
    fun_402c77(ecx);
    addr_405096_15:
    addr_405099_10:
    fun_4045d5(ecx, 0x417748, 16, __return_address(), a2);
    goto 0x417748;
}

void fun_405077(void** ecx) {
    int32_t esi2;

    fun_409d6d(esi2);
    return;
}

void fun_405adb(void** ecx, void** a2) {
    fun_4092ea(ecx, 11);
    return;
}

void fun_40634b(void** ecx) {
    int32_t esi2;

    fun_409d6d(esi2);
    return;
}

int32_t g4192d0;

void fun_406bfe(int32_t a1) {
    g4192d0 = a1;
    return;
}

void fun_4090c4(void** ecx) {
    int32_t v2;
    int32_t esi3;
    uint32_t esi4;
    int32_t eax5;

    v2 = esi3;
    esi4 = 0;
    do {
        eax5 = reinterpret_cast<int32_t>(EncodePointer());
        *reinterpret_cast<int32_t*>(esi4 + 0x418c9c) = eax5;
        esi4 = esi4 + 4;
    } while (esi4 < 40);
    goto v2;
}

struct s134 {
    signed char[8] pad8;
    void** f8;
};

void** fun_40a27d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void fun_40a277(void** ecx);

int32_t fun_40a239(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int32_t ebp6;
    int32_t ebp7;
    void** v8;
    struct s134* ebp9;
    void** eax10;
    int32_t ebp11;
    int32_t ebp12;

    fun_404590(0x417960, 12, __return_address());
    *reinterpret_cast<uint32_t*>(ebp6 - 28) = 0;
    fun_406e69(ecx, 0x417960, 12, __return_address(), a2, a3, a4, a5);
    *reinterpret_cast<uint32_t*>(ebp7 - 4) = 0;
    v8 = ebp9->f8;
    eax10 = fun_40a27d(ecx, v8, 0x417960, 12, __return_address(), a2);
    *reinterpret_cast<void***>(ebp11 - 28) = eax10;
    *reinterpret_cast<int32_t*>(ebp12 - 4) = -2;
    fun_40a277(v8);
    fun_4045d5(v8, 0x417960, 12, __return_address(), a2);
    goto 0x417960;
}

void fun_40bfdb(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

int32_t g419ef0;

void fun_40a34a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** eax10;
    void** eax11;
    int32_t ebp12;
    int32_t ebp13;
    int32_t eax14;

    fun_404590(0x417980, 8, __return_address());
    eax10 = fun_4076ff(ecx, 0x417980, 8, __return_address(), a2, a3, a4, a5);
    eax11 = *reinterpret_cast<void***>(eax10 + 0x78);
    if (eax11) {
        *reinterpret_cast<uint32_t*>(ebp12 - 4) = 0;
        eax11(0x417980, 8, __return_address());
        *reinterpret_cast<int32_t*>(ebp13 - 4) = -2;
    }
    fun_40bfdb(0x417980, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    eax14 = reinterpret_cast<int32_t>(EncodePointer());
    g419ef0 = eax14;
    goto fun_40a34a;
}

void fun_406e72(void** ecx) {
    fun_4092ea(ecx, 8);
    return;
}

struct s135 {
    signed char[16] pad16;
    int32_t f10;
};

void fun_406f95(void** ecx) {
    struct s135* ebp2;

    if (ebp2->f10) {
        fun_4092ea(ecx, 8);
    }
    return;
}

void fun_40810b(int32_t a1) {
    int32_t ebp2;

    SetUnhandledExceptionFilter();
    goto ebp2;
}

void fun_4076ea(void** ecx) {
    fun_4092ea(ecx, 13);
    return;
}

void fun_4076f6(void** ecx) {
    fun_4092ea(ecx, 12);
    return;
}

int32_t TlsGetValue = 0x17e96;

void** fun_407dcf(void** a1) {
    uint32_t eax2;
    uint32_t eax3;
    int32_t ebp4;

    eax2 = g419f68;
    eax3 = eax2 ^ reinterpret_cast<unsigned char>(g4183f0);
    if (!eax3) {
        TlsGetValue();
        goto ebp4;
    } else {
        eax3();
        goto ebp4;
    }
}

void fun_407827(void** ecx) {
    fun_4092ea(ecx, 13);
    return;
}

int32_t TlsAlloc = 0x17e8a;

void** fun_407d92(void** a1) {
    uint32_t eax2;
    uint32_t eax3;
    int32_t ebp4;

    eax2 = g419f60;
    eax3 = eax2 ^ reinterpret_cast<unsigned char>(g4183f0);
    if (!eax3) {
        goto TlsAlloc;
    } else {
        eax3();
        goto ebp4;
    }
}

void fun_408540(void** ecx) {
    fun_4092ea(ecx, 12);
    return;
}

struct s136 {
    signed char[4] pad4;
    void** f4;
};

int32_t GetACP = 0x17ee2;

int32_t GetOEMCP = 0x17eec;

struct s137 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_4085ec(void** a1) {
    void** ecx2;
    void** v3;
    void** v4;
    void** v5;
    void** eax6;
    struct s136* v7;
    signed char v8;
    struct s137* v9;

    ecx2 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff0);
    fun_402d4b(ecx2, 0, v3, v4, v5);
    g419a64 = reinterpret_cast<void**>(0);
    eax6 = a1;
    if (!reinterpret_cast<int1_t>(eax6 == 0xfffffffe)) {
        if (!reinterpret_cast<int1_t>(eax6 == 0xfffffffd)) {
            if (reinterpret_cast<int1_t>(eax6 == 0xfffffffc)) {
                g419a64 = reinterpret_cast<void**>(1);
                eax6 = v7->f4;
            }
        } else {
            g419a64 = reinterpret_cast<void**>(1);
            eax6 = reinterpret_cast<void**>(GetACP(ecx2));
        }
    } else {
        g419a64 = reinterpret_cast<void**>(1);
        eax6 = reinterpret_cast<void**>(GetOEMCP(ecx2));
    }
    if (v8) {
        v9->f70 = v9->f70 & 0xfffffffd;
    }
    return eax6;
}

int32_t GetStringTypeW = 0x17f60;

void** fun_40b224(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, int32_t a8) {
    void*** esp9;
    void** eax10;
    void** v11;
    void** ecx12;
    int32_t eax13;
    void** v14;
    void** v15;
    void** eax16;
    uint1_t zf17;
    void** esi18;
    void** eax19;
    void** edi20;
    void** esi21;
    void** ebx22;
    void** ebp23;
    void** eax24;
    void** esi25;
    int32_t eax26;
    void** eax27;

    esp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = g4183f0;
    v11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax10) ^ reinterpret_cast<uint32_t>(esp9));
    ecx12 = a7;
    if (!ecx12) {
        ecx12 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 4);
        a7 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 4);
    }
    eax13 = 0;
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<uint1_t>(!!a8);
    v14 = reinterpret_cast<void**>(eax13 * 8 + 1);
    v15 = ecx12;
    eax16 = reinterpret_cast<void**>(MultiByteToWideChar(v15, v14, a4, a5, 0, 0));
    zf17 = reinterpret_cast<uint1_t>(eax16 == 0);
    if (zf17) 
        goto addr_40b270_4;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax16) < reinterpret_cast<signed char>(0)) | zf17 || (reinterpret_cast<unsigned char>(eax16) > reinterpret_cast<unsigned char>(0x7ffffff0) || (ecx12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax16) + reinterpret_cast<unsigned char>(eax16)), reinterpret_cast<unsigned char>(ecx12 + 8) <= reinterpret_cast<unsigned char>(ecx12)))) {
        esi18 = reinterpret_cast<void**>(0);
    } else {
        eax19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax16) * 2 + 8);
        if (reinterpret_cast<unsigned char>(eax19) > reinterpret_cast<unsigned char>(0x400)) {
            eax24 = fun_40265a(ecx12, eax19, v15, v14, a4, a5, 0, 0, edi20, esi21, ebx22, v11, ebp23, __return_address());
            esi25 = eax24;
            ecx12 = eax19;
            if (!esi25) 
                goto addr_40b270_4;
            *reinterpret_cast<void***>(esi25) = reinterpret_cast<void**>(0xdddd);
        } else {
            fun_40c150(ecx12, v15, v14, a4, a5, 0, 0, edi20, esi21, ebx22, v11, ebp23, __return_address());
            esi25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esp9 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4) - 4 + 4);
            if (!esi25) 
                goto addr_40b270_4;
            v15 = reinterpret_cast<void**>(0xcccc);
        }
        esi18 = esi25 + 8;
    }
    if (!esi18) {
        addr_40b270_4:
    } else {
        fun_407390(ecx12, esi18, 0, reinterpret_cast<unsigned char>(eax16) + reinterpret_cast<unsigned char>(eax16), v15, v14, a4, a5, 0, 0, edi20, esi21, ebx22, v11);
        eax26 = reinterpret_cast<int32_t>(MultiByteToWideChar(ecx12, a7, 1, a4, a5, esi18, eax16, v15, v14, a4, a5, 0, 0));
        if (eax26) {
            GetStringTypeW(ecx12, a3, esi18, eax26, a6, a7, 1, a4, a5, esi18, eax16, v15, v14, a4, a5, 0, 0);
        }
        fun_40b206(ecx12, esi18, a7, 1, a4, a5, esi18, eax16, v15, v14, a4, a5, 0, 0);
    }
    eax27 = fun_404f47(reinterpret_cast<unsigned char>(v11) ^ reinterpret_cast<uint32_t>(esp9), v11, ebp23, __return_address(), a2, a3, a4, a5);
    return eax27;
}

void fun_408a63(void** ecx) {
    fun_4092ea(ecx, 13);
    return;
}

struct s138 {
    signed char[116] pad116;
    int32_t f74;
    signed char[24] pad144;
    uint16_t* f90;
};

struct s139 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_408c84(void** a1, void** a2) {
    void* ebp3;
    void** v4;
    void** v5;
    void** v6;
    struct s138* v7;
    void** ecx8;
    void** eax9;
    signed char v10;
    struct s139* v11;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_402d4b(reinterpret_cast<int32_t>(ebp3) + 0xfffffff0, a2, v4, v5, v6);
    if (v7->f74 <= 1) {
        ecx8 = reinterpret_cast<void**>(static_cast<uint32_t>(v7->f90[reinterpret_cast<unsigned char>(a1)]) & 4);
    } else {
        eax9 = fun_40b35c(a1, 4, reinterpret_cast<int32_t>(ebp3) + 0xfffffff0);
        ecx8 = eax9;
    }
    if (v10) {
        v11->f70 = v11->f70 & 0xfffffffd;
    }
    return ecx8;
}

void** fun_40b50a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** edi14;
    void** esi15;
    void** ebx16;
    void** edi17;
    void** esi18;
    void** ebp19;
    void** eax20;
    void** eax21;
    void** eax22;
    void** eax23;

    edi14 = reinterpret_cast<void**>(0);
    if (!a3 || reinterpret_cast<unsigned char>(0xe0 / reinterpret_cast<unsigned char>(a3)) >= reinterpret_cast<unsigned char>(a4)) {
        esi15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) * reinterpret_cast<unsigned char>(a4));
        if (a2) {
            eax20 = fun_40bfaa(ecx, a2, ebx16, edi17, esi18, ebp19, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
            ecx = a2;
            edi14 = eax20;
        }
        eax21 = fun_40b45f(ecx, a2, esi15, ebx16, edi17, esi18, ebp19, __return_address(), a2, a3, a4, a5, a6);
        if (eax21 && reinterpret_cast<unsigned char>(edi14) < reinterpret_cast<unsigned char>(esi15)) {
            fun_407390(esi15, reinterpret_cast<unsigned char>(edi14) + reinterpret_cast<unsigned char>(eax21), 0, reinterpret_cast<unsigned char>(esi15) - reinterpret_cast<unsigned char>(edi14), ebx16, edi17, esi18, ebp19, __return_address(), a2, a3, a4, a5, a6);
        }
        eax22 = eax21;
    } else {
        eax23 = fun_404026(ecx, edi17, esi18, ebp19, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(12);
        eax22 = reinterpret_cast<void**>(0);
    }
    return eax22;
}

void fun_4092a8(void** ecx) {
    fun_4092ea(ecx, 10);
    return;
}

int32_t AreFileApisANSI = 0x17d04;

void** fun_406c0b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** ebx13;
    void** esi14;
    void** ebx15;
    void** ebp16;
    void** eax17;
    void** eax18;
    void** eax19;
    int32_t eax20;
    void** eax21;
    void** eax22;
    int32_t eax23;
    void** eax24;
    void** v25;
    void** eax26;

    ebx13 = reinterpret_cast<void**>(0);
    if (!a2 || !a3) {
        eax17 = fun_404026(ecx, esi14, ebx15, ecx, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        *reinterpret_cast<void***>(eax17) = reinterpret_cast<void**>(22);
        fun_402c77(ecx);
        eax18 = reinterpret_cast<void**>(22);
    } else {
        eax19 = fun_407e3e(ecx);
        if (!eax19 && (eax20 = reinterpret_cast<int32_t>(AreFileApisANSI()), !eax20)) {
            ebx13 = reinterpret_cast<void**>(1);
        }
        *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(0);
        eax21 = reinterpret_cast<void**>(MultiByteToWideChar(ebx13, 0, a2, 0xff, 0, 0));
        if (eax21) 
            goto addr_406c76_6; else 
            goto addr_406c65_7;
    }
    addr_406cb7_8:
    return eax18;
    addr_406c76_6:
    eax22 = fun_408fa3(ecx, reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(eax21), ebx13, 0, a2, 0xff, 0, 0, esi14, ebx15, eax21, ebp16);
    *reinterpret_cast<void***>(a3) = eax22;
    if (!eax22) {
        addr_406c72_9:
        eax18 = reinterpret_cast<void**>(0);
        goto addr_406cb7_8;
    } else {
        eax23 = reinterpret_cast<int32_t>(MultiByteToWideChar(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(eax21), ebx13, 0, a2, 0xff, eax22));
        if (eax23) {
            eax18 = reinterpret_cast<void**>(1);
            goto addr_406cb7_8;
        } else {
            eax24 = reinterpret_cast<void**>(GetLastError(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(eax21), ebx13, 0, a2, 0xff, eax22));
            fun_404005(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(eax21), eax24, ebx13, 0, a2, 0xff, eax22, eax21, ebx13, 0, a2, 0xff, 0, 0);
            v25 = *reinterpret_cast<void***>(a3);
            fun_40295d(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(eax21), v25, eax24, ebx13, 0, a2, 0xff, eax22, eax21, ebx13, 0, a2, reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(eax21), v25, eax24, ebx13, 0, a2, 0xff, eax22, eax21, ebx13, 0, a2);
            *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(0);
        }
    }
    addr_406c71_13:
    goto addr_406c72_9;
    addr_406c65_7:
    eax26 = reinterpret_cast<void**>(GetLastError(ebx13, 0, a2, 0xff, 0, 0));
    fun_404005(ecx, eax26, ebx13, 0, a2, 0xff, 0, 0, esi14, ebx15, eax21, ebp16, __return_address(), a2);
    goto addr_406c71_13;
}

void fun_409d6d(int32_t a1) {
    int32_t ebp2;

    LeaveCriticalSection();
    goto ebp2;
}

int32_t g4192f4;

void** fun_409a55(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

uint32_t fun_409ceb(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

void** fun_40b67e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* ebp9;
    void** v10;
    void** ebx11;
    void** ebx12;
    void** v13;
    void** edi14;
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
    int32_t eax25;
    unsigned char* edx26;
    uint32_t ebx27;
    void** ecx28;
    uint32_t eax29;
    uint32_t eax30;
    int1_t below_or_equal31;
    int1_t below_or_equal32;
    void** edi33;
    void** v34;
    void** v35;
    void** esi36;
    void** v37;
    void* eax38;
    void** v39;
    void* eax40;
    void* eax41;
    void* eax42;
    void** eax43;
    uint32_t eax44;
    void** esi45;
    void** v46;
    void** eax47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** eax54;
    void** v55;
    void** edx56;
    void** eax57;
    void** v58;
    void** v59;
    int32_t eax60;
    uint32_t eax61;
    void** v62;
    void** v63;
    void** eax64;
    void** edi65;
    void** eax66;
    void** v67;
    void** ecx68;
    void** v69;
    int32_t eax70;
    void** v71;
    void** v72;
    void** v73;
    void** ecx74;
    uint32_t ecx75;
    void** ecx76;
    unsigned char al77;
    unsigned char v78;
    void** v79;
    void** v80;
    void** v81;
    void** eax82;
    void** v83;
    void** ecx84;
    void** v85;
    void** eax86;
    void** v87;
    void** eax88;
    void** v89;
    void** eax90;
    void** v91;
    void** v92;
    void** ecx93;
    void** eax94;
    void** v95;
    void** v96;
    void** ecx97;
    void** v98;
    void** v99;
    void** v100;
    void** eax101;
    void** ecx102;
    void** eax103;
    void** v104;
    void** v105;
    void** v106;
    void** eax107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** eax112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** eax117;
    void** eax118;
    void** eax119;
    uint32_t eax120;
    void** eax121;
    void** v122;
    void** eax123;
    void** v124;
    void** eax125;
    void** v126;
    void** esi127;
    int32_t eax128;
    uint32_t edx129;
    uint32_t esi130;
    uint32_t ecx131;
    void** ecx132;
    uint32_t ecx133;
    void** v134;
    void** eax135;
    void** eax136;
    void** eax137;
    void** ecx138;
    void** v139;
    void** eax140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    uint32_t eax145;
    void** v146;
    void** v147;
    void** eax148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** eax158;

    ebp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v10 = ebx11;
    ebx12 = reinterpret_cast<void**>(0);
    v13 = edi14;
    *reinterpret_cast<unsigned char*>(&v15 + 2) = 0;
    if (!(*reinterpret_cast<unsigned char*>(&a5) & 0x80)) {
        v16 = reinterpret_cast<void**>(1);
        *reinterpret_cast<unsigned char*>(&v15 + 3) = 0;
    } else {
        v16 = reinterpret_cast<void**>(0);
        *reinterpret_cast<unsigned char*>(&v15 + 3) = 16;
    }
    v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp9) + 0xffffffe0);
    eax25 = fun_40c332(v17, v13, v10, 12, 0, v16, v18, v19, v20, 0, v21, v22, v23, v24);
    if (eax25) {
        fun_402c87(v17);
        edx26 = reinterpret_cast<unsigned char*>(0);
        ebx27 = 0;
        if (!1) 
            goto addr_40bdf6_7;
    } else {
        ecx28 = a5;
        if (!(0x8000 & reinterpret_cast<unsigned char>(ecx28)) && (reinterpret_cast<unsigned char>(ecx28) & 0x74000 || !0)) {
            *reinterpret_cast<unsigned char*>(&v15 + 3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v15 + 3) | 0x80);
        }
        eax29 = reinterpret_cast<unsigned char>(ecx28) & 3;
        if (!eax29) 
            goto addr_40b736_11; else 
            goto addr_40b6ee_12;
    }
    addr_40be47_13:
    goto 0;
    addr_40bdf6_7:
    if (!1) 
        goto addr_40be00_14;
    while (1) {
        if ((reinterpret_cast<uint32_t>(edx26) & 0xfff) > 0xffc || *edx26 != *edx26) {
            do {
                addr_40be00_14:
                eax30 = *edx26;
                if (*reinterpret_cast<unsigned char*>(&eax30) != *edx26) 
                    goto addr_40be50_16;
                if (!eax30) {
                    ebx27 = eax30;
                }
                ++edx26;
                below_or_equal31 = ebx27 <= 1;
                --ebx27;
                if (below_or_equal31) 
                    goto addr_40be47_13;
            } while (*reinterpret_cast<unsigned char*>(&edx26) & 3);
        } else {
            below_or_equal32 = ebx27 <= 4;
            ebx27 = ebx27 - 4;
            if (below_or_equal32) 
                goto addr_40be47_13;
            edx26 = edx26 + 4;
            if (~*edx26 & *edx26 - 0x1010101 & 0x80808080) 
                goto addr_40be47_13;
        }
    }
    addr_40be50_16:
    goto 0;
    addr_40b736_11:
    edi33 = reinterpret_cast<void**>(0x80000000);
    addr_40b73b_23:
    v34 = edi33;
    addr_40b73e_24:
    v35 = esi36;
    v37 = reinterpret_cast<void**>(2);
    eax38 = reinterpret_cast<void*>(a6 - 16);
    if (!eax38) {
        v39 = reinterpret_cast<void**>(0);
    } else {
        eax40 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax38) - 16);
        if (!eax40) {
            v39 = reinterpret_cast<void**>(1);
        } else {
            eax41 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax40) - 16);
            if (!eax41) {
                v39 = reinterpret_cast<void**>(2);
            } else {
                eax42 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax41) - 16);
                if (!eax42) {
                    v39 = reinterpret_cast<void**>(3);
                } else {
                    eax43 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax42) - 64);
                    if (eax43) 
                        goto addr_40b7d5_33;
                    *reinterpret_cast<unsigned char*>(&eax43) = reinterpret_cast<uint1_t>(edi33 == 0x80000000);
                    v39 = eax43;
                }
            }
        }
    }
    eax44 = reinterpret_cast<unsigned char>(ecx28) & 0x700;
    if (reinterpret_cast<int32_t>(eax44) > reinterpret_cast<int32_t>(0x400)) {
        if (eax44 == 0x500) 
            goto addr_40b7fa_37;
        if (eax44 == 0x600) 
            goto addr_40b7f6_39;
        if (eax44 == 0x700) {
            addr_40b7fa_37:
            esi45 = reinterpret_cast<void**>(1);
        } else {
            addr_40b7d5_33:
            eax47 = fun_403ff2(ecx28, v35, v13, v10, 12, 0, v16, v46);
            *reinterpret_cast<void***>(eax47) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(0xffffffff);
            eax54 = fun_404026(ecx28, v35, v13, v10, 12, 0, v16, v48, 2, v49, 0, v50, v51, v52, v53, v39, v34);
            ebx12 = reinterpret_cast<void**>(22);
            *reinterpret_cast<void***>(eax54) = reinterpret_cast<void**>(22);
            fun_402c77(ecx28);
            goto addr_40bdbf_41;
        }
    } else {
        if (eax44 == 0x400 || !eax44) {
            v55 = reinterpret_cast<void**>(3);
            goto addr_40b7bd_44;
        } else {
            if (eax44 == 0x100) {
                v55 = reinterpret_cast<void**>(4);
                goto addr_40b7bd_44;
            } else {
                if (eax44 == 0x200) {
                    addr_40b7f6_39:
                    v55 = reinterpret_cast<void**>(5);
                    goto addr_40b7bd_44;
                } else {
                    if (eax44 != 0x300) 
                        goto addr_40b7d5_33;
                    esi45 = reinterpret_cast<void**>(2);
                }
            }
        }
    }
    addr_40b7fd_50:
    edx56 = reinterpret_cast<void**>(0x80);
    eax57 = reinterpret_cast<void**>(0);
    v58 = reinterpret_cast<void**>(0x80);
    v59 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<unsigned char>(ecx28) & 0x100 && (eax60 = g4192f4, eax61 = reinterpret_cast<uint32_t>(~eax60) & reinterpret_cast<unsigned char>(a7), eax57 = reinterpret_cast<void**>(0), *reinterpret_cast<signed char*>(&eax61) >= 0)) {
        edx56 = reinterpret_cast<void**>(1);
        v58 = reinterpret_cast<void**>(1);
    }
    if (*reinterpret_cast<unsigned char*>(&ecx28) & 64) {
        eax57 = reinterpret_cast<void**>(0x4000000);
        v39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v39) | 4);
        v59 = reinterpret_cast<void**>(0x4000000);
        v34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi33) | 0x10000);
    }
    if (reinterpret_cast<unsigned char>(ecx28) & 0x1000) {
        edx56 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx56) | 0x100);
        v58 = edx56;
    }
    if (reinterpret_cast<unsigned char>(ecx28) & 0x2000) {
        eax57 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax57) | 0x2000000);
        v59 = eax57;
    }
    if (!(*reinterpret_cast<unsigned char*>(&ecx28) & 32)) {
        if (!(*reinterpret_cast<unsigned char*>(&ecx28) & 16)) {
            addr_40b87c_60:
            eax64 = fun_409a55(ecx28, v35, v13, v10, 12, 0, v16, v62, 2, v63);
            edi65 = a3;
            *reinterpret_cast<void***>(edi65) = eax64;
            if (!reinterpret_cast<int1_t>(eax64 == 0xffffffff)) {
                *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(1);
                eax66 = fun_40b5f6(ecx28, a4, v34, v39, reinterpret_cast<int32_t>(ebp9) - 56, esi45, v58, v59, v35);
                v67 = eax66;
                if (!reinterpret_cast<int1_t>(eax66 == 0xffffffff) || (edx56 = reinterpret_cast<void**>(0xc0000000), (reinterpret_cast<unsigned char>(v34) & reinterpret_cast<unsigned char>(0xc0000000)) == 0xc0000000) && (*reinterpret_cast<unsigned char*>(&a5) & 1 && (ecx68 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v34) & 0x7fffffff), v34 = ecx68, eax66 = fun_40b5f6(ecx68, a4, ecx68, v39, reinterpret_cast<int32_t>(ebp9) - 56, esi45, v58, v59, v35), v67 = eax66, !reinterpret_cast<int1_t>(eax66 == 0xffffffff)))) {
                    v69 = eax66;
                    eax70 = reinterpret_cast<int32_t>(GetFileType());
                    if (eax70) {
                        if (eax70 != 2) {
                            if (eax70 == 3) {
                                *reinterpret_cast<unsigned char*>(&v15 + 3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v15 + 3) | 8);
                            }
                        } else {
                            *reinterpret_cast<unsigned char*>(&v15 + 3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v15 + 3) | 64);
                        }
                        v71 = *reinterpret_cast<void***>(edi65);
                        fun_409ceb(v71, v67, v69, v35, v13, v10, 12, 0, v16, v72, 2, v73);
                        ecx74 = *reinterpret_cast<void***>(edi65);
                        *reinterpret_cast<unsigned char*>(&edx56) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v15 + 3) | 1);
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(ecx74) >> 5) * 4 + 0x4191d0)) + ((reinterpret_cast<unsigned char>(ecx74) & 31) << 6) + 4) = *reinterpret_cast<unsigned char*>(&edx56);
                        ecx75 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi65)) & 31) << 6;
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + ecx75 + 36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + ecx75 + 36) & 0x80);
                        ecx76 = a5;
                        al77 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx56) & 72);
                        v78 = al77;
                        if (al77) 
                            goto addr_40ba9b_68;
                        if (*reinterpret_cast<signed char*>(&edx56) >= reinterpret_cast<signed char>(0)) 
                            goto addr_40bcbf_70;
                        if (!(*reinterpret_cast<unsigned char*>(&ecx76) & 2)) {
                            addr_40ba9b_68:
                            if (*reinterpret_cast<signed char*>(&edx56) >= reinterpret_cast<signed char>(0)) 
                                goto addr_40bcbf_70;
                        } else {
                            v79 = *reinterpret_cast<void***>(edi65);
                            eax82 = fun_404ed4(ecx76, v79, 0xff, 0xff, 2, v69, v35, v13, v10, 12, 0, v16, v80, 2, v81, 0);
                            v83 = eax82;
                            ecx84 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax82) & reinterpret_cast<unsigned char>(edx56));
                            v85 = edx56;
                            if (!1) {
                                eax86 = fun_403ff2(ecx84, v69, v35, v13, v10, 12, 0, v16);
                                if (*reinterpret_cast<void***>(eax86) == 0x83) 
                                    goto addr_40ba95_74; else 
                                    goto addr_40ba42_75;
                            }
                            v87 = *reinterpret_cast<void***>(edi65);
                            eax88 = fun_40509f(ecx84, v87, reinterpret_cast<int32_t>(ebp9) + 0xffffffdc, 1);
                            if (!eax88 && (!1 && (v89 = *reinterpret_cast<void***>(edi65), eax90 = fun_40c17c(ecx84, v89, v83, v85, v69, v35), eax90 == 0xffffffff)) || (v91 = *reinterpret_cast<void***>(edi65), fun_404ed4(ecx84, v91, 0, 0, 0, v69, v35, v13, v10, 12, 0, v16, v83, 2, 0, 0), 0)) {
                                addr_40ba42_75:
                                v92 = *reinterpret_cast<void***>(edi65);
                                fun_4049e1(ecx84, v92, v69, v35, v13, v10, 12, 0, v16, v83);
                                goto addr_40b941_77;
                            } else {
                                addr_40ba95_74:
                                *reinterpret_cast<unsigned char*>(&edx56) = *reinterpret_cast<unsigned char*>(&edx56);
                                ecx76 = a5;
                                goto addr_40ba9b_68;
                            }
                        }
                    } else {
                        ecx93 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi65)) & 31) << 6);
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ecx93) + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ecx93) + 4) & 0xfe);
                        eax94 = reinterpret_cast<void**>(GetLastError());
                        fun_404005(ecx93, eax94, v69, v35, v13, v10, 12, 0, v16, v95, 2, v96, 0, v67);
                        ecx97 = eax94;
                        CloseHandle(ecx97, v67);
                        if (!eax94) {
                            eax101 = fun_404026(ecx97, v67, v69, v35, v13, v10, 12, 0, v16, v98, 2, v99, 0, v67, v58, v100, v59);
                            *reinterpret_cast<void***>(eax101) = reinterpret_cast<void**>(13);
                            goto addr_40b942_80;
                        }
                    }
                } else {
                    ecx102 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi65)) & 31) << 6);
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ecx102) + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ecx102) + 4) & 0xfe);
                    eax103 = reinterpret_cast<void**>(GetLastError());
                    v69 = eax103;
                    fun_404005(ecx102, v69, v35, v13, v10, 12, 0, v16, v104, 2, v105, 0, v67, v58);
                    goto addr_40b941_77;
                }
            } else {
                eax107 = fun_403ff2(ecx28, v35, v13, v10, 12, 0, v16, v106);
                *reinterpret_cast<void***>(eax107) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(edi65) = reinterpret_cast<void**>(0xffffffff);
                eax112 = fun_404026(ecx28, v35, v13, v10, 12, 0, v16, v108, 2, v109, 0, v110, v58, v111, v59, v39, v34);
                *reinterpret_cast<void***>(eax112) = reinterpret_cast<void**>(24);
                eax117 = fun_404026(ecx28, v35, v13, v10, 12, 0, v16, v113, 2, v114, 0, v115, v58, v116, v59, v39, v34);
                eax118 = *reinterpret_cast<void***>(eax117);
                goto addr_40b8a7_83;
            }
        } else {
            eax119 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax57) | 0x10000000);
            goto addr_40b879_85;
        }
    } else {
        eax119 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax57) | 0x8000000);
        goto addr_40b879_85;
    }
    if (!(reinterpret_cast<unsigned char>(ecx76) & 0x74000)) {
        if (0) {
            ecx76 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ecx76)));
        } else {
            ecx76 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx76) | 0x4000);
        }
        a5 = ecx76;
    }
    eax120 = reinterpret_cast<unsigned char>(ecx76) & 0x74000;
    if (eax120 != 0x4000) 
        goto addr_40bad0_93;
    *reinterpret_cast<unsigned char*>(&v15 + 2) = 0;
    goto addr_40bb17_95;
    addr_40bad0_93:
    if (eax120 != 0x10000 && eax120 != 0x14000) {
        if (eax120 == 0x20000) 
            goto addr_40bb0e_97;
        if (eax120 == 0x24000) 
            goto addr_40bb0e_97;
        if (eax120 == 0x40000 || eax120 == 0x44000) {
            *reinterpret_cast<unsigned char*>(&v15 + 2) = 1;
            goto addr_40bb17_95;
        }
    }
    if ((reinterpret_cast<unsigned char>(ecx76) & 0x301) != 0x301) {
        addr_40bb17_95:
        if (!(reinterpret_cast<unsigned char>(ecx76) & 0x70000)) 
            goto addr_40bcbf_70;
        v85 = reinterpret_cast<void**>(0);
        if (*reinterpret_cast<unsigned char*>(&edx56) & 64) 
            goto addr_40bcbf_70;
    } else {
        addr_40bb0e_97:
        *reinterpret_cast<unsigned char*>(&v15 + 2) = 2;
        goto addr_40bb17_95;
    }
    ecx84 = reinterpret_cast<void**>(0xc0000000);
    eax121 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v34) & reinterpret_cast<unsigned char>(0xc0000000));
    if (eax121 == 0x40000000) {
        if (!esi45) 
            goto addr_40bcbf_70;
        ecx84 = reinterpret_cast<void**>(2);
        if (reinterpret_cast<unsigned char>(esi45) > reinterpret_cast<unsigned char>(2)) 
            goto addr_40bc40_106;
    } else {
        if (eax121 == 0x80000000) {
            addr_40bba6_108:
            v122 = *reinterpret_cast<void***>(edi65);
            eax123 = fun_40509f(ecx84, v122, reinterpret_cast<int32_t>(ebp9) + 0xffffffec, 3);
            if (eax123 != 0xffffffff) {
                ecx84 = reinterpret_cast<void**>(0);
                if (eax123 != 2) {
                    if (!reinterpret_cast<int1_t>(eax123 == 3)) 
                        goto addr_40bc5a_111;
                    if (!1) {
                        *reinterpret_cast<unsigned char*>(&v15 + 2) = 1;
                        goto addr_40bcbf_70;
                    }
                }
                ecx84 = reinterpret_cast<void**>(0);
                if (!1) {
                    v124 = *reinterpret_cast<void***>(edi65);
                    fun_4049e1(0, v124, v69, v35, v13, v10, 12, 0, v16, v83);
                    eax125 = fun_404026(v124, v69, v35, v13, v10, 12, 0, v16, v83, 2, 0, 0, v67, v58, 0, v59, v39);
                    ebx12 = reinterpret_cast<void**>(22);
                    *reinterpret_cast<void***>(eax125) = reinterpret_cast<void**>(22);
                    goto addr_40bdbf_41;
                }
                if (1) 
                    goto addr_40bc5a_111;
                v126 = *reinterpret_cast<void***>(edi65);
                fun_404ed4(0, v126, 2, 0, 0, v69, v35, v13, v10, 12, 0, v16, v83, 2, 0, 0);
                if (!0) {
                    *reinterpret_cast<unsigned char*>(&v15 + 2) = 2;
                    goto addr_40bcbf_70;
                }
            }
        } else {
            if (!reinterpret_cast<int1_t>(eax121 == 0xc0000000)) 
                goto addr_40bcbf_70;
            if (!esi45) 
                goto addr_40bcbf_70;
            ecx84 = reinterpret_cast<void**>(2);
            if (reinterpret_cast<unsigned char>(esi45) > reinterpret_cast<unsigned char>(2)) 
                goto addr_40bb66_122;
        }
    }
    addr_40bc76_123:
    esi127 = reinterpret_cast<void**>(0);
    eax128 = *reinterpret_cast<signed char*>(&v15 + 2) - 1;
    if (!eax128) {
        ecx84 = reinterpret_cast<void**>(3);
        v85 = reinterpret_cast<void**>(0xbfbbef);
        v37 = reinterpret_cast<void**>(3);
    } else {
        if (eax128 - 1) {
            addr_40bcbf_70:
            edx129 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi65)) & 31) << 6;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + edx129 + 36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + edx129 + 36) ^ reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + edx129 + 36) ^ *reinterpret_cast<unsigned char*>(&v15 + 2)) & 0x7f));
            esi130 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi65)) & 31) << 6;
            ecx131 = reinterpret_cast<unsigned char>(a5) >> 16;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + esi130 + 36) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx131) << 7) | reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + esi130 + 36) & 0x7f));
            ecx132 = a5;
            if (!v78 && *reinterpret_cast<unsigned char*>(&ecx132) & 8) {
                ecx133 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi65)) & 31) << 6;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + ecx133 + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + ecx133 + 4) | 32);
                ecx132 = a5;
                goto addr_40bd32_127;
            }
        } else {
            v85 = reinterpret_cast<void**>(0xfeff);
        }
    }
    do {
        v134 = *reinterpret_cast<void***>(edi65);
        eax135 = fun_406284(ecx84, v134, reinterpret_cast<int32_t>(ebp9) - 20 + reinterpret_cast<unsigned char>(esi127), reinterpret_cast<unsigned char>(ecx84) - reinterpret_cast<unsigned char>(esi127), v69, v35, v13, v10, 12, 0, v16, v83, v37, 0);
        if (eax135 == 0xffffffff) 
            goto addr_40ba42_75;
        ecx84 = v37;
        esi127 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi127) + reinterpret_cast<unsigned char>(eax135));
    } while (reinterpret_cast<signed char>(ecx84) > reinterpret_cast<signed char>(esi127));
    goto addr_40bcbf_70;
    addr_40bd32_127:
    if ((reinterpret_cast<unsigned char>(v34) & 0xc0000000) != 0xc0000000 || !(*reinterpret_cast<unsigned char*>(&ecx132) & 1)) {
        addr_40bdbf_41:
        eax118 = ebx12;
    } else {
        CloseHandle(v67);
        eax136 = fun_40b5f6(ecx132, a4, reinterpret_cast<unsigned char>(v34) & 0x7fffffff, v39, reinterpret_cast<int32_t>(ebp9) - 56, 3, v58, v59, v67);
        if (!reinterpret_cast<int1_t>(eax136 == 0xffffffff)) {
            *reinterpret_cast<void***>(((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi65)) & 31) << 6) + reinterpret_cast<int32_t>(*reinterpret_cast<void****>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0))) = eax136;
            goto addr_40bdbf_41;
        } else {
            eax137 = reinterpret_cast<void**>(GetLastError(v67));
            fun_404005(ecx132, eax137, v67, v69, v35, v13, v10, 12, 0, v16, v83, v37, 0, 0);
            ecx138 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi65)) & 31) << 6);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ecx138) + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi65)) >> 5) * 4 + 0x4191d0)) + reinterpret_cast<unsigned char>(ecx138) + 4) & 0xfe);
            v139 = *reinterpret_cast<void***>(edi65);
            fun_409bfe(ecx138, v139, eax137, v67, v69, v35, v13, v10, 12, 0, v16, v83, v37);
            goto addr_40b941_77;
        }
    }
    addr_40b8a7_83:
    addr_40b8a8_134:
    return eax118;
    addr_40b941_77:
    ecx97 = v69;
    addr_40b942_80:
    eax140 = fun_404026(ecx97, v35, v13, v10, 12, 0, v16, v83, v37, 0, 0, v67, v58, v85, v59, v39, v34);
    ebx12 = *reinterpret_cast<void***>(eax140);
    goto addr_40bdbf_41;
    addr_40bc40_106:
    if (reinterpret_cast<unsigned char>(esi45) > reinterpret_cast<unsigned char>(4)) {
        addr_40bb6b_135:
        if (esi45 != 5) {
            goto addr_40bcbf_70;
        }
    } else {
        v141 = *reinterpret_cast<void***>(edi65);
        fun_404ed4(2, v141, 0, 0, 2, v69, v35, v13, v10, 12, 0, v16, v83, 2, 0, 0);
        if (0) {
            addr_40bc73_138:
            ecx84 = reinterpret_cast<void**>(2);
            goto addr_40bc76_123;
        } else {
            addr_40bc5a_111:
            v142 = *reinterpret_cast<void***>(edi65);
            fun_404ed4(ecx84, v142, 0, 0, 0, v69, v35, v13, v10, 12, 0, v16, v83, 2, 0, 0);
            if (1) 
                goto addr_40bcbf_70;
        }
    }
    goto addr_40ba42_75;
    addr_40bb66_122:
    if (reinterpret_cast<unsigned char>(esi45) > reinterpret_cast<unsigned char>(4)) 
        goto addr_40bb6b_135;
    v143 = *reinterpret_cast<void***>(edi65);
    fun_404ed4(2, v143, 0, 0, 2, v69, v35, v13, v10, 12, 0, v16, v83, 2, 0, 0);
    if (0) 
        goto addr_40bc73_138;
    v144 = *reinterpret_cast<void***>(edi65);
    fun_404ed4(2, v144, 0, 0, 0, v69, v35, v13, v10, 12, 0, v16, v83, 2, 0, 0);
    if (0) 
        goto addr_40ba42_75; else 
        goto addr_40bba6_108;
    addr_40b879_85:
    v59 = eax119;
    goto addr_40b87c_60;
    addr_40b7bd_44:
    esi45 = v55;
    goto addr_40b7fd_50;
    addr_40b6ee_12:
    eax145 = eax29 - 1;
    if (!eax145) {
        if (!(*reinterpret_cast<unsigned char*>(&ecx28) & 8) || !(reinterpret_cast<unsigned char>(ecx28) & 0x70000)) {
            edi33 = reinterpret_cast<void**>(0x40000000);
            goto addr_40b73b_23;
        } else {
            edi33 = reinterpret_cast<void**>(0xc0000000);
            v34 = reinterpret_cast<void**>(0xc0000000);
            goto addr_40b73e_24;
        }
    } else {
        if (!(eax145 - 1)) {
            edi33 = reinterpret_cast<void**>(0xc0000000);
            goto addr_40b73b_23;
        } else {
            eax148 = fun_403ff2(ecx28, v13, v10, 12, 0, v16, v146, v147);
            *reinterpret_cast<void***>(eax148) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(0xffffffff);
            eax158 = fun_404026(ecx28, v13, v10, 12, 0, v16, v149, v150, v151, 0, v152, v153, v154, v155, v156, v157, v15);
            *reinterpret_cast<void***>(eax158) = reinterpret_cast<void**>(22);
            fun_402c77(ecx28);
            eax118 = reinterpret_cast<void**>(22);
            goto addr_40b8a8_134;
        }
    }
}

int32_t RtlUnwind = 0x17bee;

void fun_41011e() {
    goto RtlUnwind;
}

void fun_409a4c(void** ecx, void** a2, void** a3, void** a4) {
    fun_4092ea(ecx, 10);
    return;
}

void fun_409b2d(void** ecx) {
    fun_4092ea(ecx, 10);
    return;
}

uint32_t fun_409ceb(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    int1_t cf13;
    int32_t ebx14;
    uint32_t edi15;
    void** edi16;
    void** ebx17;
    void** ebp18;
    void** eax19;
    void** eax20;
    uint32_t eax21;
    int1_t zf22;
    void** ecx23;
    void** v24;
    int32_t v25;
    void** ecx26;

    if (reinterpret_cast<signed char>(a1) < reinterpret_cast<signed char>(0) || ((cf13 = reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(g419ff8), !cf13) || (ebx14 = reinterpret_cast<signed char>(a1) >> 5, edi15 = (reinterpret_cast<unsigned char>(a1) & 31) << 6, *reinterpret_cast<int32_t*>(edi15 + reinterpret_cast<int32_t>(*reinterpret_cast<int32_t**>(ebx14 * 4 + 0x4191d0))) != -1))) {
        eax19 = fun_404026(a1, edi16, ebx17, ebp18, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(9);
        eax20 = fun_403ff2(a1, edi16, ebx17, ebp18, __return_address(), a1, a2, a3);
        *reinterpret_cast<void***>(eax20) = reinterpret_cast<void**>(0);
        eax21 = 0xffffffff;
    } else {
        zf22 = reinterpret_cast<int1_t>(g419308 == 1);
        if (!zf22) 
            goto addr_409d44_4;
        ecx23 = a1;
        if (!ecx23) 
            goto addr_409d3b_6; else 
            goto addr_409d2b_7;
    }
    addr_409d69_8:
    return eax21;
    addr_409d3b_6:
    v24 = a2;
    v25 = 0xf6;
    addr_409d3e_9:
    SetStdHandle(v25, v24);
    goto addr_409d44_4;
    addr_409d2b_7:
    ecx26 = ecx23 - 1;
    if (!ecx26) {
        v24 = a2;
        v25 = 0xf5;
        goto addr_409d3e_9;
    } else {
        if (ecx26 - 1) {
            addr_409d44_4:
            *reinterpret_cast<void***>(edi15 + reinterpret_cast<int32_t>(*reinterpret_cast<void****>(ebx14 * 4 + 0x4191d0))) = a2;
            eax21 = 0;
            goto addr_409d69_8;
        } else {
            v24 = a2;
            v25 = 0xf4;
            goto addr_409d3e_9;
        }
    }
}

void fun_409e5b(void** ecx) {
    int32_t edi2;

    fun_409d6d(edi2);
    return;
}

int32_t fun_40a39c();

unsigned char g418e74 = 2;

void fun_40bfdb(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    int32_t eax13;
    void** ecx14;
    int1_t zf15;
    int32_t eax16;
    int32_t edi17;
    int32_t ebx18;
    int32_t esi19;
    int32_t edx20;
    uint16_t* v21;
    uint32_t eax22;

    v12 = reinterpret_cast<void**>(__return_address());
    eax13 = fun_40a39c();
    if (eax13) {
        fun_40a3c5(22, v12, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        ecx14 = reinterpret_cast<void**>(22);
    }
    zf15 = (g418e74 & 2) == 0;
    if (!zf15) {
        eax16 = fun_410118(22, 23, v12);
        if (eax16) {
            ecx14 = reinterpret_cast<void**>(7);
            __asm__("int 0x29");
        }
        fun_402b1a(ecx14, 3, 0x40000015, 1, 23);
    }
    fun_406dc5(ecx14, 3, v12, a1, a2, a3);
    edi17 = 0;
    ebx18 = 0xe3;
    do {
        __asm__("cdq ");
        esi19 = ebx18 + edi17 - edx20 >> 1;
        v21 = *reinterpret_cast<uint16_t**>(esi19 * 8 + 0x413368);
        eax22 = fun_40c0e2(ecx14, v12, v21, 85);
        if (!eax22) 
            break;
        if (reinterpret_cast<int32_t>(eax22) >= reinterpret_cast<int32_t>(0)) {
            edi17 = esi19 + 1;
        } else {
            ebx18 = esi19 - 1;
        }
    } while (edi17 <= ebx18);
    goto addr_40c05b_14;
    addr_40c067_16:
    goto 3;
    addr_40c05b_14:
    goto addr_40c067_16;
}

int32_t g419ef4;

void fun_40a38f(int32_t a1, int32_t a2, int32_t a3) {
    g419ef4 = a1;
    return;
}

int32_t g411c90 = 12;

void** fun_40a580(void** a1, void** a2) {
    void** edx3;
    int32_t ecx4;
    void** esi5;
    void** eax6;

    edx3 = a2;
    ecx4 = g411c90;
    esi5 = a1;
    do {
        if (*reinterpret_cast<void***>(edx3 + 4) == esi5) 
            break;
        edx3 = edx3 + 12;
    } while (reinterpret_cast<unsigned char>(edx3) < reinterpret_cast<unsigned char>(a2 + ecx4 * 12));
    if (reinterpret_cast<unsigned char>(edx3) >= reinterpret_cast<unsigned char>(a2 + ecx4 * 12) || *reinterpret_cast<void***>(edx3 + 4) != esi5) {
        eax6 = reinterpret_cast<void**>(0);
    } else {
        eax6 = edx3;
    }
    return eax6;
}

void fun_40a546(void** ecx) {
    int32_t ebx2;

    if (ebx2) {
        fun_4092ea(ecx, 0);
    }
    return;
}

int32_t g419f0c;

void fun_40a5ba(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    g419f0c = a1;
    return;
}

struct s140 {
    signed char[168] pad168;
    int32_t fa8;
};

struct s141 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_40bec3(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void*** ebp8;
    void** eax9;
    void** v10;
    void** ebx11;
    void** v12;
    void** esi13;
    void** v14;
    void** edi15;
    void** ecx16;
    void** esi17;
    void** ebx18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** ebp23;
    void** eax24;
    struct s140* v25;
    void* edi26;
    void** eax27;
    void** v28;
    void** v29;
    void** eax30;
    void** eax31;
    void** eax32;
    void** eax33;
    signed char v34;
    struct s141* v35;

    ebp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (!a3) {
        eax9 = reinterpret_cast<void**>(0);
    } else {
        v10 = ebx11;
        v12 = esi13;
        v14 = edi15;
        ecx16 = reinterpret_cast<void**>(ebp8 + 0xfffffff0);
        fun_402d4b(ecx16, a4, v14, v12, v10);
        esi17 = reinterpret_cast<void**>(0x7fffffff);
        if (!a1 || ((ebx18 = a2, ebx18 == 0) || (ecx16 = a3, reinterpret_cast<unsigned char>(ecx16) > reinterpret_cast<unsigned char>(0x7fffffff)))) {
            eax24 = fun_404026(ecx16, v14, v12, v10, v19, v20, v21, v22, ebp23, __return_address(), a1, a2, a3, a4, a5, a6, a7);
            *reinterpret_cast<void***>(eax24) = reinterpret_cast<void**>(22);
            fun_402c77(ecx16);
        } else {
            if (v25->fa8) {
                edi26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(ebx18));
                do {
                    eax27 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi26) + reinterpret_cast<unsigned char>(ebx18))));
                    v28 = reinterpret_cast<void**>(ebp8 + 0xfffffff0);
                    eax30 = fun_40c491(eax27, v28, v14, v12, v10, v29);
                    eax31 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx18))));
                    eax32 = fun_40c491(eax31, ebp8 + 0xfffffff0, eax27, v28, v14, v12);
                    ++ebx18;
                    --a3;
                    if (!a3) 
                        break;
                } while (eax30 && eax30 == eax32);
                esi17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax30) - reinterpret_cast<unsigned char>(eax32));
            } else {
                eax33 = fun_40c430(a1, ebx18, ecx16);
                esi17 = eax33;
            }
        }
        if (v34) {
            v35->f70 = v35->f70 & 0xfffffffd;
        }
        eax9 = esi17;
    }
    return eax9;
}

struct s142 {
    signed char[116] pad116;
    int32_t f74;
};

struct s143 {
    signed char[4] pad4;
    void** f4;
    signed char[163] pad168;
    void** fa8;
};

struct s144 {
    signed char[116] pad116;
    int32_t f74;
    signed char[24] pad144;
    uint16_t* f90;
    void* f94;
};

struct s145 {
    signed char[112] pad112;
    uint32_t f70;
};

struct s146 {
    signed char[112] pad112;
    uint32_t f70;
};

struct s147 {
    signed char[112] pad112;
    uint32_t f70;
};

struct s148 {
    signed char[112] pad112;
    uint32_t f70;
};

struct s149 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_40c491(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void*** ebp7;
    void** ecx8;
    void** edi9;
    void** ebx10;
    void** v11;
    void** ebx12;
    struct s142* v13;
    void** ecx14;
    void** eax15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** ebp23;
    void** eax24;
    void** ecx25;
    int24_t v26;
    void** eax27;
    void** v28;
    struct s143* v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    int32_t v35;
    void** eax36;
    struct s144* ecx37;
    struct s144* v38;
    void** eax39;
    struct s144* v40;
    signed char v41;
    struct s145* v42;
    void** eax43;
    unsigned char v44;
    unsigned char v45;
    unsigned char v46;
    signed char v47;
    struct s146* v48;
    signed char v49;
    struct s147* v50;
    signed char v51;
    struct s148* v52;
    void** ecx53;
    signed char v54;
    struct s149* v55;

    ebp7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx8 = reinterpret_cast<void**>(ebp7 + 0xffffffe8);
    fun_402d4b(ecx8, a2, edi9, ebx10, v11);
    ebx12 = a1;
    if (reinterpret_cast<unsigned char>(ebx12) >= reinterpret_cast<unsigned char>(0x100)) {
        if (v13->f74 <= 1 || (ecx14 = reinterpret_cast<void**>(ebp7 + 0xffffffe8), eax15 = reinterpret_cast<void**>(reinterpret_cast<signed char>(ebx12) >> 8), a1 = eax15, eax16 = fun_408e03(ecx14, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax15)), ecx14), ecx8 = ecx14, eax16 == 0)) {
            eax24 = fun_404026(ecx8, edi9, ebx10, v17, v18, v19, v20, v21, v22, ebp23, __return_address(), a1, a2, a3, a4, a5, a6);
            ecx25 = reinterpret_cast<void**>(1);
            *reinterpret_cast<void***>(eax24) = reinterpret_cast<void**>(42);
            *reinterpret_cast<signed char*>(&v26) = *reinterpret_cast<signed char*>(&ebx12);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v26) + 1) = 0;
        } else {
            eax27 = a1;
            *reinterpret_cast<signed char*>(&v26) = *reinterpret_cast<signed char*>(&eax27);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v26) + 1) = *reinterpret_cast<signed char*>(&ebx12);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v26) + 2) = 0;
            ecx25 = reinterpret_cast<void**>(2);
        }
        v28 = v29->f4;
        v30 = v29->fa8;
        eax36 = fun_40b1c0(ebp7 + 0xffffffe8, v30, 0x100, ebp7 + 0xfffffffc, ecx25, ebp7 + 0xfffffff8, 3, v28, 1, edi9, ebx10, v31, v32, v33, v34, v35, v26);
        if (!eax36) 
            goto addr_40c585_6;
    } else {
        ecx37 = v38;
        if (ecx37->f74 <= 1) {
            eax39 = reinterpret_cast<void**>(static_cast<uint32_t>(ecx37->f90[reinterpret_cast<unsigned char>(ebx12)]) & 1);
        } else {
            eax39 = fun_40b35c(ebx12, 1, ebp7 + 0xffffffe8);
            ecx37 = v40;
        }
        if (!eax39) 
            goto addr_40c4fc_11; else 
            goto addr_40c4de_12;
    }
    if (!reinterpret_cast<int1_t>(eax36 == 1)) {
        if (v41) {
            v42->f70 = v42->f70 & 0xfffffffd;
        }
        eax43 = reinterpret_cast<void**>(static_cast<uint32_t>(v44) << 8 | static_cast<uint32_t>(v45));
    } else {
        eax43 = reinterpret_cast<void**>(static_cast<uint32_t>(v46));
        if (v47) {
            v48->f70 = v48->f70 & 0xfffffffd;
        }
    }
    addr_40c5ce_19:
    return eax43;
    addr_40c585_6:
    if (v49 != *reinterpret_cast<signed char*>(&eax36)) {
        v50->f70 = v50->f70 & 0xfffffffd;
    }
    addr_40c509_21:
    eax43 = ebx12;
    goto addr_40c5ce_19;
    addr_40c4fc_11:
    if (v51) {
        v52->f70 = v52->f70 & 0xfffffffd;
        goto addr_40c509_21;
    }
    addr_40c4de_12:
    ecx53 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx37->f94) + reinterpret_cast<unsigned char>(ebx12))));
    if (v54) {
        v55->f70 = v55->f70 & 0xfffffffd;
    }
    eax43 = ecx53;
    goto addr_40c5ce_19;
}

int32_t fun_40c06c(void** ecx, void** a2) {
    uint32_t eax3;

    if (!a2 || ((eax3 = fun_40c01e(ecx, a2), reinterpret_cast<int32_t>(eax3) < reinterpret_cast<int32_t>(0)) || eax3 >= 0xe4)) {
        return 0;
    } else {
        return *reinterpret_cast<int32_t*>(eax3 * 8 + 0x412c48);
    }
}

uint32_t fun_40c0e2(void** ecx, void** a2, uint16_t* a3, int32_t a4) {
    int32_t esi5;
    uint32_t eax6;
    uint16_t* ecx7;
    uint32_t edi8;
    uint32_t eax9;
    uint32_t edx10;
    uint32_t eax11;
    uint32_t eax12;
    uint32_t eax13;

    esi5 = a4;
    eax6 = 0;
    if (esi5) {
        ecx7 = a3;
        edi8 = reinterpret_cast<unsigned char>(a2) - reinterpret_cast<uint32_t>(ecx7);
        while (1) {
            eax9 = *reinterpret_cast<uint16_t*>(edi8 + reinterpret_cast<uint32_t>(ecx7));
            if (*reinterpret_cast<uint16_t*>(&eax9) < 65 || *reinterpret_cast<uint16_t*>(&eax9) > 90) {
                edx10 = eax9;
            } else {
                eax11 = eax9 + 32;
                edx10 = *reinterpret_cast<uint16_t*>(&eax11);
            }
            eax12 = *ecx7;
            if (*reinterpret_cast<uint16_t*>(&eax12) >= 65 && *reinterpret_cast<uint16_t*>(&eax12) <= 90) {
                eax13 = eax12 + 32;
                eax12 = *reinterpret_cast<uint16_t*>(&eax13);
            }
            ++ecx7;
            --esi5;
            if (!esi5) 
                break;
            if (!*reinterpret_cast<uint16_t*>(&edx10)) 
                break;
            if (*reinterpret_cast<uint16_t*>(&edx10) != *reinterpret_cast<uint16_t*>(&eax12)) 
                break;
        }
        eax6 = *reinterpret_cast<uint16_t*>(&edx10) - *reinterpret_cast<uint16_t*>(&eax12);
    }
    return eax6;
}

void** fun_40c35c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t ebx7;
    uint32_t esi8;
    void* edi9;
    unsigned char cl10;
    int32_t edx11;
    void* ecx12;
    unsigned char al13;
    uint32_t edx14;

    ebx7 = reinterpret_cast<signed char>(a2) >> 5;
    esi8 = (reinterpret_cast<unsigned char>(a2) & 31) << 6;
    edi9 = *reinterpret_cast<void**>(ebx7 * 4 + 0x4191d0);
    cl10 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi9) + esi8 + 4);
    edx11 = static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi9) + esi8 + 36) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi9) + esi8 + 36))) >> 1;
    if (a3 == 0x4000) {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi9) + esi8 + 4) = reinterpret_cast<unsigned char>(cl10 | 0x80);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx7 * 4 + 0x4191d0)) + esi8 + 36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx7 * 4 + 0x4191d0)) + esi8 + 36) & 0x80);
        goto addr_40c407_3;
    } else {
        if (a3 == 0x8000) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi9) + esi8 + 4) = reinterpret_cast<unsigned char>(cl10 & 0x7f);
            goto addr_40c407_3;
        } else {
            if (a3 == 0x10000 || a3 == 0x20000) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi9) + esi8 + 4) = reinterpret_cast<unsigned char>(cl10 | 0x80);
                ecx12 = *reinterpret_cast<void**>(ebx7 * 4 + 0x4191d0);
                al13 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx12) + esi8 + 36) & 0x82) | 2);
            } else {
                if (!reinterpret_cast<int1_t>(a3 == 0x40000)) {
                    addr_40c407_3:
                    if (static_cast<uint32_t>(cl10) & 0x80) {
                        edx14 = reinterpret_cast<uint32_t>(-edx11);
                        return (edx14 - (edx14 + reinterpret_cast<uint1_t>(edx14 < edx14 + reinterpret_cast<uint1_t>(!!edx11))) & 0xc000) + 0x4000;
                    } else {
                        return 0x8000;
                    }
                } else {
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi9) + esi8 + 4) = reinterpret_cast<unsigned char>(cl10 | 0x80);
                    ecx12 = *reinterpret_cast<void**>(ebx7 * 4 + 0x4191d0);
                    al13 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx12) + esi8 + 36) & 0x81) | 1);
                }
            }
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx12) + esi8 + 36) = al13;
            goto addr_40c407_3;
        }
    }
}

struct s150 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_40c695(void** a1, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** eax6;
    void** ecx7;
    void** edi8;
    void** esi9;
    void** ebx10;
    void** eax11;
    void** ebx12;
    void** v13;
    void** eax14;
    signed char v15;
    struct s150* v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax6 = g4183f0;
    ecx7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp5) + 0xffffffd4);
    fun_402d4b(ecx7, a3, edi8, esi9, ebx10);
    eax11 = fun_40d344(ecx7, reinterpret_cast<uint32_t>(ebp5) + 0xfffffff0, reinterpret_cast<uint32_t>(ebp5) + 0xffffffe8, a2, 0, 0, 0, 0, reinterpret_cast<uint32_t>(ebp5) + 0xffffffd4);
    ebx12 = eax11;
    if (a4) {
        ecx7 = v13;
        *reinterpret_cast<void***>(a4) = ecx7;
    }
    eax14 = fun_40cdd2(ecx7, reinterpret_cast<uint32_t>(ebp5) + 0xfffffff0, a1);
    if (!(*reinterpret_cast<unsigned char*>(&ebx12) & 3)) {
        if (eax14 == 1) 
            goto addr_40c716_5;
        if (!reinterpret_cast<int1_t>(eax14 == 2)) 
            goto addr_40c719_7; else 
            goto addr_40c708_8;
    }
    if (*reinterpret_cast<unsigned char*>(&ebx12) & 1) {
        addr_40c708_8:
    } else {
        if (!(*reinterpret_cast<unsigned char*>(&ebx12) & 2)) {
            addr_40c719_7:
            if (v15) {
                v16->f70 = v16->f70 & 0xfffffffd;
                goto addr_40c726_12;
            }
        } else {
            addr_40c716_5:
        }
    }
    goto addr_40c719_7;
    addr_40c726_12:
    eax22 = fun_404f47(reinterpret_cast<unsigned char>(eax6) ^ reinterpret_cast<uint32_t>(ebp5) ^ reinterpret_cast<uint32_t>(ebp5), v17, v18, v19, v20, a4, v21, a1);
    return eax22;
}

struct s151 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[1] pad10;
    int16_t fa;
};

void fun_40e5b1(signed char* a1, void** a2, struct s151* a3);

struct s152 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    uint16_t f8;
    uint16_t fa;
};

void** fun_40d344(void** ecx, void** a2, void** a3, void** a4, void** a5, void* a6, uint32_t a7, void** a8, void** a9) {
    void* ebp10;
    void** eax11;
    uint32_t v12;
    void** v13;
    void** v14;
    void** v15;
    void** esi16;
    void** eax17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** edx24;
    void** ecx25;
    void** v26;
    void** v27;
    unsigned char eax28;
    int32_t eax29;
    int32_t eax30;
    void** v31;
    void** v32;
    unsigned char eax33;
    unsigned char eax34;
    void** eax35;
    void** esi36;
    void** eax37;
    int1_t less38;
    void** esi39;
    void** eax40;
    unsigned char eax41;
    int32_t eax42;
    int32_t eax43;
    int1_t zf44;
    unsigned char eax45;
    int32_t eax46;
    void** edi47;
    void** esi48;
    void** ebx49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** eax55;
    void** eax56;
    void** esi57;
    void** ecx58;
    signed char v59;
    void** ecx60;
    void** edx61;
    uint32_t eax62;
    void** v63;
    void** eax64;
    void* esi65;
    void*** edx66;
    uint112_t v67;
    void* eax68;
    void*** v69;
    void* v70;
    uint32_t eax71;
    struct s152* ecx72;
    struct s152* v73;
    uint32_t edi74;
    uint96_t v75;
    uint32_t v76;
    uint32_t edx77;
    uint32_t edi78;
    uint32_t eax79;
    void** esi80;
    int32_t eax81;
    int1_t zf82;
    void** eax83;
    void** edi84;
    uint16_t* esi85;
    uint16_t* v86;
    uint32_t v87;
    void** ecx88;
    void** ecx89;
    void** eax90;
    void** edx91;
    void* esi92;
    void** edi93;
    void** v94;
    uint16_t ax95;
    void** ebx96;
    int32_t eax97;
    void** eax98;
    void** eax99;
    void** eax100;
    uint16_t ax101;
    void** ecx102;
    uint32_t esi103;
    int32_t eax104;
    uint32_t ecx105;
    void** eax106;

    ebp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax11 = g4183f0;
    v12 = reinterpret_cast<unsigned char>(eax11) ^ reinterpret_cast<uint32_t>(ebp10);
    v13 = a2;
    v14 = a3;
    v15 = reinterpret_cast<void**>(1);
    esi16 = reinterpret_cast<void**>(0);
    eax17 = reinterpret_cast<void**>(0);
    v18 = reinterpret_cast<void**>(0);
    v19 = reinterpret_cast<void**>(0);
    v20 = reinterpret_cast<void**>(0);
    v21 = reinterpret_cast<void**>(0);
    v22 = reinterpret_cast<void**>(0);
    v23 = reinterpret_cast<void**>(0);
    if (a9) {
        edx24 = a4;
        ecx25 = edx24;
        v26 = ecx25;
        while (*reinterpret_cast<void***>(edx24) == 32 || (*reinterpret_cast<void***>(edx24) == 9 || (*reinterpret_cast<void***>(edx24) == 10 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx24) == 13)))) {
            ++edx24;
        }
        while (1) {
            ecx25 = *reinterpret_cast<void***>(edx24);
            ++edx24;
            v27 = ecx25;
            if (reinterpret_cast<unsigned char>(eax17) > reinterpret_cast<unsigned char>(11)) 
                goto addr_40d64e_6;
            switch (eax17) {
            case 0:
                eax28 = reinterpret_cast<unsigned char>(ecx25 + 0xffffffcf);
                if (eax28 > 8) {
                    if (ecx25 != *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a9) + 0x84)))) {
                        eax29 = reinterpret_cast<int32_t>(ecx25 - 43);
                        if (!eax29) {
                            eax17 = reinterpret_cast<void**>(2);
                            v18 = reinterpret_cast<void**>(0);
                            continue;
                        } else {
                            eax30 = eax29 - 1 - 1;
                            if (!eax30) {
                                ecx25 = reinterpret_cast<void**>(0x8000);
                                eax17 = reinterpret_cast<void**>(2);
                                v18 = reinterpret_cast<void**>(0x8000);
                                continue;
                            } else {
                                if (eax30 - 3) 
                                    goto addr_40d6a0_15; else 
                                    goto addr_40d412_16;
                            }
                        }
                    } else {
                        addr_40d3f8_17:
                        v31 = reinterpret_cast<void**>(5);
                        goto addr_40d3fa_18;
                    }
                } else {
                    addr_40d3e1_19:
                    v32 = reinterpret_cast<void**>(3);
                    goto addr_40d3e3_20;
                }
            case 1:
                v20 = reinterpret_cast<void**>(1);
                eax33 = reinterpret_cast<unsigned char>(ecx25 + 0xffffffcf);
                if (eax33 <= 8) 
                    goto addr_40d3e1_19;
                if (ecx25 != *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a9) + 0x84)))) {
                    if (ecx25 == 43 || ecx25 == 45) {
                        addr_40d47e_24:
                        --edx24;
                        v31 = reinterpret_cast<void**>(11);
                        goto addr_40d3fa_18;
                    } else {
                        if (ecx25 == 48) {
                            addr_40d412_16:
                            eax17 = reinterpret_cast<void**>(1);
                            continue;
                        } else {
                            addr_40d45d_26:
                            if (reinterpret_cast<signed char>(ecx25) <= reinterpret_cast<signed char>(67)) 
                                goto addr_40d6a0_15;
                            if (reinterpret_cast<signed char>(ecx25) <= reinterpret_cast<signed char>(69)) 
                                break;
                            if (reinterpret_cast<unsigned char>(ecx25 - 100) > 1) 
                                goto addr_40d6a0_15; else 
                                break;
                        }
                    }
                } else {
                    v31 = reinterpret_cast<void**>(4);
                    goto addr_40d3fa_18;
                }
            case 2:
                eax34 = reinterpret_cast<unsigned char>(ecx25 + 0xffffffcf);
                if (eax34 <= 8) 
                    goto addr_40d3e1_19;
                if (ecx25 == *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a9) + 0x84)))) 
                    goto addr_40d3f8_17;
                if (ecx25 == 48) 
                    goto addr_40d412_16; else 
                    goto addr_40d4af_33;
            case 3:
                v20 = reinterpret_cast<void**>(1);
                if (reinterpret_cast<signed char>(ecx25) >= reinterpret_cast<signed char>(48)) {
                    eax35 = v19;
                    esi36 = v23;
                    do {
                        if (reinterpret_cast<signed char>(ecx25) > reinterpret_cast<signed char>(57)) 
                            break;
                        if (reinterpret_cast<unsigned char>(eax35) >= reinterpret_cast<unsigned char>(25)) {
                            ++esi36;
                        } else {
                            ++eax35;
                        }
                        ecx25 = *reinterpret_cast<void***>(edx24);
                        ++edx24;
                    } while (reinterpret_cast<signed char>(ecx25) >= reinterpret_cast<signed char>(48));
                    v23 = esi36;
                    esi16 = reinterpret_cast<void**>(0);
                    v19 = eax35;
                }
                if (ecx25 != *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a9) + 0x84)))) {
                    if (ecx25 != 43 && ecx25 != 45) {
                        goto addr_40d45d_26;
                    }
                }
            case 4:
                v20 = reinterpret_cast<void**>(1);
                v21 = reinterpret_cast<void**>(1);
                eax37 = v19;
                if (eax37) {
                    addr_40d53f_46:
                    less38 = reinterpret_cast<signed char>(ecx25) < reinterpret_cast<signed char>(48);
                    goto addr_40d542_47;
                } else {
                    less38 = reinterpret_cast<signed char>(ecx25) < reinterpret_cast<signed char>(48);
                    if (!reinterpret_cast<int1_t>(ecx25 == 48)) {
                        addr_40d542_47:
                        if (!less38) {
                            esi39 = v23;
                            do {
                                if (reinterpret_cast<signed char>(ecx25) > reinterpret_cast<signed char>(57)) 
                                    break;
                                if (reinterpret_cast<unsigned char>(eax37) < reinterpret_cast<unsigned char>(25)) {
                                    ++eax37;
                                    --esi39;
                                }
                                ecx25 = *reinterpret_cast<void***>(edx24);
                                ++edx24;
                            } while (reinterpret_cast<signed char>(ecx25) >= reinterpret_cast<signed char>(48));
                            v23 = esi39;
                            esi16 = reinterpret_cast<void**>(0);
                            v19 = eax37;
                        }
                    } else {
                        eax40 = v23;
                        do {
                            ecx25 = *reinterpret_cast<void***>(edx24);
                            --eax40;
                            ++edx24;
                        } while (ecx25 == 48);
                        v23 = eax40;
                        eax37 = v19;
                        goto addr_40d53f_46;
                    }
                }
                if (ecx25 == 43) 
                    goto addr_40d47e_24;
                if (ecx25 == 45) 
                    goto addr_40d47e_24;
                if (reinterpret_cast<signed char>(ecx25) <= reinterpret_cast<signed char>(67)) 
                    goto addr_40d595_61;
                if (reinterpret_cast<signed char>(ecx25) <= reinterpret_cast<signed char>(69)) 
                    break;
                if (reinterpret_cast<unsigned char>(ecx25 - 100) <= 1) 
                    break; else 
                    goto addr_40d595_61;
            case 5:
                v21 = reinterpret_cast<void**>(1);
                if (reinterpret_cast<unsigned char>(ecx25 - 48) > 9) 
                    goto addr_40d4af_33;
                v32 = reinterpret_cast<void**>(4);
                goto addr_40d3e3_20;
            case 6:
                v26 = edx24 + 0xfffffffe;
                eax41 = reinterpret_cast<unsigned char>(ecx25 + 0xffffffcf);
                if (eax41 > 8) {
                    eax42 = reinterpret_cast<int32_t>(ecx25 - 43);
                    if (!eax42) {
                        v31 = reinterpret_cast<void**>(7);
                        goto addr_40d3fa_18;
                    } else {
                        eax43 = eax42 - 1 - 1;
                        if (!eax43) {
                            ecx25 = reinterpret_cast<void**>(0xffffffff);
                            eax17 = reinterpret_cast<void**>(7);
                            v15 = reinterpret_cast<void**>(0xffffffff);
                            continue;
                        } else {
                            zf44 = eax43 - 3 == 0;
                            goto addr_40d5d7_72;
                        }
                    }
                } else {
                    addr_40d5c1_73:
                    v32 = reinterpret_cast<void**>(9);
                    goto addr_40d3e3_20;
                }
            case 7:
                eax45 = reinterpret_cast<unsigned char>(ecx25 + 0xffffffcf);
                if (eax45 <= 8) 
                    goto addr_40d5c1_73;
                zf44 = reinterpret_cast<int1_t>(ecx25 == 48);
                goto addr_40d5d7_72;
            case 8:
                v22 = reinterpret_cast<void**>(1);
                while (ecx25 == 48) {
                    ecx25 = *reinterpret_cast<void***>(edx24);
                    ++edx24;
                }
                if (reinterpret_cast<unsigned char>(ecx25 - 49) > 8) 
                    goto addr_40d6a0_15;
                goto addr_40d5c1_73;
                addr_40d64e_6:
            case 10:
                if (!reinterpret_cast<int1_t>(eax17 == 10)) 
                    continue; else 
                    goto addr_40d657_81;
            case 11:
                if (!a8) {
                    eax17 = reinterpret_cast<void**>(10);
                    --edx24;
                    goto addr_40d64e_6;
                } else {
                    v26 = edx24 + 0xffffffff;
                    eax46 = reinterpret_cast<int32_t>(ecx25 - 43);
                    if (eax46) {
                        if (eax46 - 1 - 1) 
                            goto addr_40d4af_33;
                        v15 = reinterpret_cast<void**>(0xffffffff);
                        eax17 = reinterpret_cast<void**>(7);
                        continue;
                    }
                }
            case 9:
                goto 0x40d659;
            }
            v31 = reinterpret_cast<void**>(6);
            addr_40d3fa_18:
            eax17 = v31;
            continue;
            addr_40d3e3_20:
            eax17 = v32;
            --edx24;
            continue;
            addr_40d5d7_72:
            if (!zf44) 
                goto addr_40d4af_33;
            v31 = reinterpret_cast<void**>(8);
            goto addr_40d3fa_18;
        }
    } else {
        eax55 = fun_404026(ecx, edi47, esi48, ebx49, v13, v50, v51, v52, 0, 1, v14, 0, 0, 0, v53, 0, v54);
        *reinterpret_cast<void***>(eax55) = reinterpret_cast<void**>(22);
        fun_402c77(ecx);
        goto addr_40daab_90;
    }
    addr_40d657_81:
    addr_40d6a1_91:
    eax37 = v19;
    addr_40d6a4_92:
    *reinterpret_cast<void***>(v14) = edx24;
    if (!v20) {
        eax56 = reinterpret_cast<void**>(0);
        esi57 = reinterpret_cast<void**>(0);
    } else {
        if (reinterpret_cast<unsigned char>(eax37) <= reinterpret_cast<unsigned char>(24)) {
            ecx58 = v23;
        } else {
            if (v59 >= 5) {
            }
            ecx58 = v23 + 1;
            eax37 = reinterpret_cast<void**>(24);
            v23 = ecx58;
        }
        if (!eax37) 
            goto addr_40da81_100; else 
            goto addr_40d6dd_101;
    }
    addr_40da91_102:
    ecx60 = reinterpret_cast<void**>(0);
    edx61 = reinterpret_cast<void**>(0);
    addr_40da96_103:
    eax62 = reinterpret_cast<unsigned char>(eax56) | reinterpret_cast<unsigned char>(v18);
    *reinterpret_cast<unsigned char*>(v13 + 10) = *reinterpret_cast<unsigned char*>(&eax62);
    *reinterpret_cast<void***>(v13) = ecx60;
    *reinterpret_cast<void***>(v13 + 2) = edx61;
    *reinterpret_cast<void***>(v13 + 6) = esi57;
    addr_40daab_90:
    eax64 = fun_404f47(v12 ^ reinterpret_cast<uint32_t>(ebp10), v13, 0, 0, v63, v18, v15, v14);
    return eax64;
    addr_40da81_100:
    ecx60 = reinterpret_cast<void**>(0);
    eax56 = reinterpret_cast<void**>(0);
    esi57 = reinterpret_cast<void**>(0);
    edx61 = reinterpret_cast<void**>(0);
    goto addr_40da96_103;
    addr_40d6dd_101:
    if (!*reinterpret_cast<signed char*>(&a4 + 2)) {
        do {
            --eax37;
            ++ecx58;
        } while (!*reinterpret_cast<signed char*>(&a4 + 1));
        v23 = ecx58;
    }
    fun_40e5b1(reinterpret_cast<uint32_t>(ebp10) - 32, eax37, reinterpret_cast<uint32_t>(ebp10) - 60);
    if (reinterpret_cast<signed char>(v15) < reinterpret_cast<signed char>(0)) {
        esi16 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(esi16));
    }
    esi65 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi16) + reinterpret_cast<unsigned char>(v23));
    if (!v22) {
        esi65 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi65) + reinterpret_cast<uint32_t>(a6));
    }
    if (!v21) {
        esi65 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi65) - a7);
    }
    if (reinterpret_cast<int32_t>(esi65) <= reinterpret_cast<int32_t>(0x1450)) 
        goto addr_40d729_113;
    eax56 = reinterpret_cast<void**>(0x7fff);
    esi57 = reinterpret_cast<void**>(0x80000000);
    goto addr_40da91_102;
    addr_40d729_113:
    if (reinterpret_cast<int32_t>(esi65) < reinterpret_cast<int32_t>(0xffffebb0)) {
        ecx60 = reinterpret_cast<void**>(0);
        eax56 = reinterpret_cast<void**>(0);
        esi57 = reinterpret_cast<void**>(0);
        edx61 = reinterpret_cast<void**>(0);
        goto addr_40da96_103;
    } else {
        edx66 = reinterpret_cast<void***>(" %A");
        if (esi65) {
            if (reinterpret_cast<int32_t>(esi65) < reinterpret_cast<int32_t>(0)) {
                esi65 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(esi65));
                edx66 = reinterpret_cast<void***>(0x418fc8);
            }
            if (!a5) {
                *reinterpret_cast<uint16_t*>(&v67) = 0;
            }
            while (esi65) {
                eax68 = esi65;
                edx66 = edx66 + 84;
                esi65 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi65) >> 3);
                v69 = edx66;
                v70 = esi65;
                eax71 = reinterpret_cast<uint32_t>(eax68) & 7;
                if (!eax71) 
                    continue;
                ecx72 = reinterpret_cast<struct s152*>(edx66 + eax71 * 12);
                v73 = ecx72;
                if (reinterpret_cast<unsigned char>(ecx72->f0) >= reinterpret_cast<unsigned char>(0x8000)) {
                    ecx72 = reinterpret_cast<struct s152*>(reinterpret_cast<uint32_t>(ebp10) - 72);
                    v73 = ecx72;
                }
                edi74 = ecx72->fa;
                *reinterpret_cast<void***>(&v75) = reinterpret_cast<void**>(0);
                v76 = (edi74 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v67) + 10)) & 0x8000;
                edx77 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v67) + 10) & 0x7fff;
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 4) = reinterpret_cast<void**>(0);
                edi78 = edi74 & 0x7fff;
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 8) = reinterpret_cast<void**>(0);
                eax79 = edi78 + edx77;
                esi80 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax79)));
                v15 = esi80;
                if (*reinterpret_cast<uint16_t*>(&edx77) >= 0x7fff || (*reinterpret_cast<uint16_t*>(&edi78) >= 0x7fff || *reinterpret_cast<uint16_t*>(&esi80) > 0xbffd)) {
                    eax81 = 0;
                    *reinterpret_cast<unsigned char*>(&eax81) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&v76) == 0);
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v67) + 8) = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(eax81 - 1) & 0x80000000) + 0x7fff8000);
                } else {
                    if (*reinterpret_cast<uint16_t*>(&esi80) <= 0x3fbf) 
                        goto addr_40d7ff_137;
                    if (*reinterpret_cast<uint16_t*>(&edx77)) 
                        goto addr_40d830_139;
                    ++esi80;
                    v15 = esi80;
                    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v67) + 8)) & 0x7fffffff) 
                        goto addr_40d830_139;
                    if (*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v67) + 4)) 
                        goto addr_40d830_139;
                    if (*reinterpret_cast<void***>(&v67)) 
                        goto addr_40d830_139; else 
                        goto addr_40d825_143;
                }
                addr_40da3e_144:
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v67) + 4) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(&v67) = reinterpret_cast<void**>(0);
                addr_40da44_145:
                edx66 = v69;
                addr_40da47_146:
                esi65 = v70;
                continue;
                addr_40d830_139:
                if (*reinterpret_cast<uint16_t*>(&edi78) || ((zf82 = (ecx72->f8 & 0x7fffffff) == 0, v15 = esi80 + 1, !zf82) || (ecx72->f4 || ecx72->f0))) {
                    eax83 = reinterpret_cast<void**>(0);
                    edi84 = reinterpret_cast<void**>(5);
                    v63 = reinterpret_cast<void**>(0);
                    v14 = reinterpret_cast<void**>(5);
                    do {
                        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi84) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi84 == 0))) {
                            esi85 = reinterpret_cast<uint16_t*>(reinterpret_cast<uint32_t>(ebp10) - 60 + reinterpret_cast<unsigned char>(eax83) * 2);
                            v86 = &ecx72->f8;
                            do {
                                v87 = *esi85;
                                ecx88 = reinterpret_cast<void**>(v87 * *v86);
                                ecx89 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx88) + reinterpret_cast<unsigned char>(a4));
                                if (reinterpret_cast<unsigned char>(ecx89) < reinterpret_cast<unsigned char>(a4) || reinterpret_cast<unsigned char>(ecx89) < reinterpret_cast<unsigned char>(ecx88)) {
                                    eax90 = reinterpret_cast<void**>(1);
                                } else {
                                    eax90 = reinterpret_cast<void**>(0);
                                }
                                a4 = ecx89;
                                if (eax90) {
                                }
                                --v86;
                                ++esi85;
                                --edi84;
                            } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi84) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi84 == 0)));
                            ecx72 = v73;
                            edi84 = v14;
                            eax83 = v63;
                        }
                        ++eax83;
                        --edi84;
                        v63 = eax83;
                        v14 = edi84;
                    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi84) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi84 == 0)));
                    edx91 = reinterpret_cast<void**>(0);
                    esi92 = reinterpret_cast<void*>(v15 + 0xc002);
                    edi93 = reinterpret_cast<void**>(0);
                    v94 = reinterpret_cast<void**>(0);
                    if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&esi92) < reinterpret_cast<int16_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&esi92) == 0))) 
                        goto addr_40d8de_159;
                } else {
                    addr_40d7ff_137:
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v67) + 8) = reinterpret_cast<void**>(0);
                    goto addr_40da3e_144;
                }
                addr_40d919_160:
                esi92 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi92) + 0xffff);
                if (*reinterpret_cast<int16_t*>(&esi92) >= reinterpret_cast<int16_t>(0)) {
                    addr_40d982_161:
                    ax95 = *reinterpret_cast<uint16_t*>(&v75);
                } else {
                    ebx96 = reinterpret_cast<void**>(0);
                    eax97 = reinterpret_cast<int32_t>(-reinterpret_cast<uint32_t>(esi92));
                    eax98 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax97)));
                    v14 = eax98;
                    esi92 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi92) + reinterpret_cast<unsigned char>(eax98));
                    do {
                        if (*reinterpret_cast<unsigned char*>(&v75) & 1) {
                            ++ebx96;
                        }
                        eax99 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 4)) >> 1 | reinterpret_cast<unsigned char>(edx91) << 31);
                        edx91 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx91) >> 1);
                        edi93 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi93) >> 1 | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 4)) << 31);
                        --v14;
                        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 8) = edx91;
                        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 4) = eax99;
                        *reinterpret_cast<void***>(&v75) = edi93;
                    } while (v14);
                    v94 = edx91;
                    if (!ebx96) 
                        goto addr_40d982_161; else 
                        goto addr_40d970_167;
                }
                addr_40d986_168:
                if (ax95 > 0x8000 || (reinterpret_cast<unsigned char>(edi93) & 0x1ffff) == 0x18000) {
                    if (1) {
                        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 2) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 2) + 1;
                        goto addr_40d9de_171;
                    } else {
                        eax100 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 6);
                        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 2) = reinterpret_cast<void**>(0);
                        if (1) {
                            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 6) = eax100 + 1;
                        } else {
                            ax101 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(&v75) + 10);
                            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 6) = reinterpret_cast<void**>(0);
                            if (ax101 != 0xffff) {
                                *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(&v75) + 10) = reinterpret_cast<uint16_t>(ax101 + 1);
                            } else {
                                *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(&v75) + 10) = 0x8000;
                                esi92 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi92) + 1);
                            }
                        }
                        ecx102 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 8);
                    }
                } else {
                    addr_40d9de_171:
                    ecx102 = v94;
                }
                edx66 = v69;
                if (*reinterpret_cast<uint16_t*>(&esi92) < 0x7fff) {
                    esi103 = reinterpret_cast<uint32_t>(esi92) | v76;
                    *reinterpret_cast<uint16_t*>(&v67) = *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(&v75) + 2);
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v67) + 2) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 4);
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v67) + 6) = ecx102;
                    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v67) + 10) = *reinterpret_cast<int16_t*>(&esi103);
                    goto addr_40da47_146;
                } else {
                    eax104 = 0;
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v67) + 4) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(&v67) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<unsigned char*>(&eax104) = reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&v76) == 0);
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v67) + 8) = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(eax104 - 1) & 0x80000000) + 0x7fff8000);
                    goto addr_40da47_146;
                }
                addr_40d970_167:
                ax95 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi93) | 1);
                *reinterpret_cast<uint16_t*>(&v75) = ax95;
                edi93 = *reinterpret_cast<void***>(&v75);
                goto addr_40d986_168;
                do {
                    addr_40d8de_159:
                    if (reinterpret_cast<signed char>(edx91) < reinterpret_cast<signed char>(0)) 
                        break;
                    ecx105 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 4)) >> 31;
                    eax106 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 4)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 4)) | reinterpret_cast<unsigned char>(edi93) >> 31);
                    edi93 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi93) + reinterpret_cast<unsigned char>(edi93));
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 4) = eax106;
                    *reinterpret_cast<void***>(&v75) = edi93;
                    edx91 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v94) + reinterpret_cast<unsigned char>(v94) | ecx105);
                    esi92 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi92) + 0xffff);
                    v94 = edx91;
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v75) + 8) = edx91;
                } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&esi92) < reinterpret_cast<int16_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&esi92) == 0)));
                if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&esi92) < reinterpret_cast<int16_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint16_t*>(&esi92) == 0))) 
                    goto addr_40d982_161; else 
                    goto addr_40d919_160;
                addr_40d825_143:
                *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v67) + 10) = 0;
                goto addr_40da44_145;
            }
        }
        ecx60 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&v67)));
        edx61 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v67) + 2);
        esi57 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v67) + 6);
        eax56 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v67) + 8)) >> 16);
        goto addr_40da96_103;
    }
    esi16 = reinterpret_cast<void**>(0);
    v22 = reinterpret_cast<void**>(1);
    while (reinterpret_cast<signed char>(ecx25) >= reinterpret_cast<signed char>(48)) {
        if (reinterpret_cast<signed char>(ecx25) > reinterpret_cast<signed char>(57)) 
            goto addr_40d69b_187;
        esi16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v27 - 48) + reinterpret_cast<unsigned char>(esi16) * 10);
        if (reinterpret_cast<signed char>(esi16) > reinterpret_cast<signed char>(0x1450)) 
            goto addr_40d689_189;
        ecx25 = *reinterpret_cast<void***>(edx24);
        ++edx24;
        v27 = ecx25;
    }
    addr_40d69b_187:
    while (reinterpret_cast<signed char>(ecx25) >= reinterpret_cast<signed char>(48) && reinterpret_cast<signed char>(ecx25) <= reinterpret_cast<signed char>(57)) {
        ecx25 = *reinterpret_cast<void***>(edx24);
        ++edx24;
    }
    addr_40d6a0_15:
    --edx24;
    goto addr_40d6a1_91;
    addr_40d689_189:
    ecx25 = v27;
    esi16 = reinterpret_cast<void**>(0x1451);
    goto addr_40d69b_187;
    addr_40d4af_33:
    edx24 = v26;
    goto addr_40d6a1_91;
    addr_40d595_61:
    --edx24;
    goto addr_40d6a4_92;
}

void* g418ea0 = reinterpret_cast<void*>(53);

void* g418e9c = reinterpret_cast<void*>(0xfffffc01);

void* g418e98 = reinterpret_cast<void*>(0x400);

void* g418eac = reinterpret_cast<void*>(0x3ff);

uint32_t g418ea4 = 11;

int32_t g418ea8 = 64;

void** fun_40c860(void** ecx, struct s73* a2, void** a3, void** a4, void** a5, void** a6, void** a7, void* a8, uint32_t a9, void** a10, void** a11) {
    void* ebp12;
    void** eax13;
    uint32_t v14;
    uint32_t eax15;
    void** ebx16;
    void** edi17;
    void** v18;
    void** v19;
    void* edx20;
    void** v21;
    void** v22;
    void* v23;
    void* eax24;
    void* v25;
    void** v26;
    void** eax27;
    void** v28;
    void** v29;
    void** v30;
    void** ecx31;
    void** edx32;
    void** v33;
    uint32_t ecx34;
    void** esi35;
    void** eax36;
    void** esi37;
    void** v38;
    void** ecx39;
    uint32_t edi40;
    void** esi41;
    void** eax42;
    int32_t* edi43;
    uint32_t ecx44;
    int1_t zf45;
    void* ecx46;
    void* edx47;
    void* eax48;
    int1_t less49;
    void* esi50;
    uint32_t ecx51;
    void** v52;
    uint32_t v53;
    uint32_t ecx54;
    void** v55;
    void** esi56;
    uint32_t ebx57;
    uint32_t edi58;
    uint32_t v59;
    uint32_t ecx60;
    uint32_t ecx61;
    void** eax62;
    uint32_t edi63;
    int32_t* edx64;
    uint32_t ecx65;
    uint32_t ecx66;
    void** esi67;
    void** ecx68;
    void* edx69;
    uint32_t eax70;
    uint32_t eax71;
    uint32_t ecx72;
    uint32_t eax73;
    int32_t eax74;
    void** esi75;
    void** ecx76;
    void** eax77;
    void** v78;
    uint32_t edi79;
    uint32_t v80;
    uint32_t edx81;
    uint32_t ecx82;
    void** esi83;
    int32_t* edx84;
    void** ecx85;
    void* esi86;
    void** tmp32_87;
    void** v88;
    uint32_t edi89;
    uint32_t ecx90;
    uint32_t v91;
    void** esi92;
    uint32_t ecx93;
    void** ecx94;
    void** eax95;
    int32_t* edx96;
    uint32_t edi97;
    void** eax98;
    void** ecx99;
    void** ecx100;
    void** edx101;
    uint32_t ecx102;
    void** ecx103;
    void** edx104;
    int32_t* edi105;
    uint32_t ecx106;
    int1_t zf107;
    uint32_t ecx108;
    uint32_t ecx109;
    uint32_t v110;
    uint32_t ecx111;
    void** eax112;
    void** v113;
    uint32_t edi114;
    uint32_t ebx115;
    uint32_t v116;
    uint32_t ecx117;
    uint32_t eax118;
    uint32_t ecx119;
    uint32_t esi120;
    int32_t* edx121;
    uint32_t ecx122;
    int32_t edx123;
    uint32_t edi124;
    uint32_t eax125;
    uint32_t ecx126;
    uint32_t edi127;
    void** ecx128;
    uint32_t edi129;
    int32_t edx130;
    int1_t cf131;
    int32_t edx132;
    uint32_t eax133;
    uint32_t ecx134;
    void** eax135;
    void** ecx136;
    void** ecx137;
    int32_t edx138;
    uint32_t eax139;

    ebp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax13 = g4183f0;
    v14 = reinterpret_cast<unsigned char>(eax13) ^ reinterpret_cast<uint32_t>(ebp12);
    eax15 = a2->fa;
    ebx16 = reinterpret_cast<void**>(0);
    edi17 = a3;
    v18 = edi17;
    v19 = reinterpret_cast<void**>(eax15 & 0x8000);
    edx20 = reinterpret_cast<void*>((eax15 & 0x7fff) - 0x3fff);
    v21 = a2->f6;
    v22 = a2->f2;
    v23 = edx20;
    if (!reinterpret_cast<int1_t>(edx20 == 0xffffc001)) {
        eax24 = g418ea0;
        v25 = edx20;
        v26 = v21;
        eax27 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax24) - 1);
        v28 = eax27;
        v29 = reinterpret_cast<void**>(0);
        v30 = v22;
        ecx31 = eax27 + 1;
        __asm__("cdq ");
        edx32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>((reinterpret_cast<uint32_t>(edx20) & 31) + reinterpret_cast<unsigned char>(ecx31)) >> 5);
        v33 = edx32;
        ecx34 = reinterpret_cast<unsigned char>(ecx31) & 0x8000001f;
        if (__intrinsic()) 
            goto addr_40c910_12;
    } else {
        esi35 = reinterpret_cast<void**>(0);
        eax36 = reinterpret_cast<void**>(0);
        do {
            if (*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(eax36) * 4 - 16)) 
                goto addr_40c8cd_15;
            ++eax36;
        } while (reinterpret_cast<signed char>(eax36) < reinterpret_cast<signed char>(3));
        goto addr_40c8c8_17;
    }
    addr_40c915_18:
    esi37 = reinterpret_cast<void**>(31 - ecx34);
    v38 = esi37;
    ecx39 = esi37;
    edi40 = 0xffffffff;
    esi41 = reinterpret_cast<void**>(3);
    if (!(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(edx32) * 4 - 16) & 1 << *reinterpret_cast<unsigned char*>(&ecx39))) {
        addr_40c9d5_19:
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(edx32) * 4 - 16) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(edx32) * 4 - 16) & edi40 << *reinterpret_cast<unsigned char*>(&ecx39);
        eax42 = edx32 + 1;
        if (reinterpret_cast<signed char>(eax42) < reinterpret_cast<signed char>(3)) {
            edi43 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp12) - 16 + reinterpret_cast<unsigned char>(eax42) * 4);
            ecx44 = 3 - reinterpret_cast<unsigned char>(eax42);
            while (ecx44) {
                --ecx44;
                *edi43 = 0;
                ++edi43;
                esi41 = esi41 + 4;
            }
            edi40 = 0xffffffff;
        }
    } else {
        zf45 = (*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(edx32) * 4 - 16) & reinterpret_cast<uint32_t>(~(-1 << *reinterpret_cast<unsigned char*>(&ecx39)))) == 0;
        while (zf45) {
            ++edx32;
            if (reinterpret_cast<signed char>(edx32) >= reinterpret_cast<signed char>(3)) 
                goto addr_40c948_27;
            zf45 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(edx32) * 4 - 16) == 0;
        }
        goto addr_40c94d_29;
    }
    ecx46 = v23;
    if (v29) {
        ecx46 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx46) + 1);
    }
    edx47 = g418e9c;
    eax48 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx47) - reinterpret_cast<uint32_t>(g418ea0));
    if (reinterpret_cast<int32_t>(ecx46) >= reinterpret_cast<int32_t>(eax48)) {
        if (reinterpret_cast<int32_t>(ecx46) > reinterpret_cast<int32_t>(edx47)) {
            less49 = reinterpret_cast<int32_t>(ecx46) < reinterpret_cast<int32_t>(g418e98);
            if (less49) {
                esi50 = g418eac;
                v21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v21) & 0x7fffffff);
                ecx51 = g418ea4;
                __asm__("cdq ");
                v52 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi50) + reinterpret_cast<uint32_t>(ecx46));
                v53 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx51 + (reinterpret_cast<uint32_t>(edx47) & 31)) >> 5);
                ecx54 = ecx51 & 0x8000001f;
                if (__intrinsic()) {
                    ecx54 = (ecx54 - 1 | 0xffffffe0) + 1;
                }
                v55 = reinterpret_cast<void**>(0);
                esi56 = reinterpret_cast<void**>(0);
                ebx57 = ecx54;
                edi58 = ~(edi40 << *reinterpret_cast<unsigned char*>(&ecx54));
                v59 = 32 - ebx57;
                do {
                    ecx60 = ebx57;
                    ecx61 = v59;
                    eax62 = reinterpret_cast<void**>((*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(esi56) * 4 - 16) & edi58) << *reinterpret_cast<unsigned char*>(&ecx61));
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(esi56) * 4 - 16) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(esi56) * 4 - 16) >> *reinterpret_cast<signed char*>(&ecx60) | reinterpret_cast<unsigned char>(v55);
                    ++esi56;
                    v55 = eax62;
                } while (reinterpret_cast<signed char>(esi56) < reinterpret_cast<signed char>(3));
                edi63 = v53;
                esi35 = v52;
                edx64 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp12) - 8 - (edi63 << 2));
                ecx65 = 2;
                do {
                    if (reinterpret_cast<int32_t>(ecx65) < reinterpret_cast<int32_t>(edi63)) {
                        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp12) + ecx65 * 4 - 16) = reinterpret_cast<void**>(0);
                    } else {
                        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp12) + ecx65 * 4 - 16) = *edx64;
                    }
                    --edx64;
                    --ecx65;
                } while (reinterpret_cast<int32_t>(ecx65) >= reinterpret_cast<int32_t>(0));
            } else {
                ecx66 = g418ea4;
                v22 = reinterpret_cast<void**>(0);
                esi67 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi41 + 4) + 4 + 4);
                v21 = reinterpret_cast<void**>(0x80000000);
                __asm__("cdq ");
                v28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx66 + (reinterpret_cast<uint32_t>(edx47) & 31)) >> 5);
                ecx68 = reinterpret_cast<void**>(ecx66 & 0x8000001f);
                if (!__intrinsic()) 
                    goto addr_40cc7c_54; else 
                    goto addr_40cc77_55;
            }
        } else {
            edx69 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx47) - reinterpret_cast<uint32_t>(v25));
            v21 = v26;
            __asm__("cdq ");
            v22 = v30;
            v33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edx69) + (reinterpret_cast<uint32_t>(edx69) & 31)) >> 5);
            eax70 = reinterpret_cast<uint32_t>(edx69) & 0x8000001f;
            if (!__intrinsic()) 
                goto addr_40ca53_66; else 
                goto addr_40ca4e_67;
        }
    } else {
        v21 = reinterpret_cast<void**>(0);
        v22 = reinterpret_cast<void**>(0);
        goto addr_40ca18_77;
    }
    addr_40cd83_78:
    edi17 = v18;
    addr_40cd86_79:
    eax71 = 31 - g418ea4;
    ecx72 = eax71;
    eax73 = -reinterpret_cast<unsigned char>(v19);
    eax74 = g418ea8;
    esi75 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi35) << *reinterpret_cast<unsigned char*>(&ecx72) | eax73 - (eax73 + reinterpret_cast<uint1_t>(eax73 < eax73 + reinterpret_cast<uint1_t>(!!v19))) & 0x80000000 | reinterpret_cast<unsigned char>(v21));
    if (eax74 != 64) {
        if (eax74 == 32) {
            *reinterpret_cast<void***>(edi17) = esi75;
        }
    } else {
        *reinterpret_cast<void***>(edi17 + 4) = esi75;
        *reinterpret_cast<void***>(edi17) = v22;
    }
    ecx76 = reinterpret_cast<void**>(v14 ^ reinterpret_cast<uint32_t>(ebp12));
    eax77 = fun_404f47(ecx76, v19, v18, v33, v52, v28, v38, v29, ecx76, v19, v18, v33, v52, v28, v38, v29);
    return eax77;
    addr_40cc7c_54:
    v52 = ecx68;
    v78 = reinterpret_cast<void**>(0);
    edi79 = reinterpret_cast<uint32_t>(~(-1 << *reinterpret_cast<unsigned char*>(&ecx68)));
    v80 = 32 - reinterpret_cast<unsigned char>(ecx68);
    do {
        edx81 = 0x80000000 >> *reinterpret_cast<unsigned char*>(&ecx68) | reinterpret_cast<unsigned char>(v78);
        ecx82 = v80;
        ecx68 = v52;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(ebx16) * 4 - 16) = edx81;
        ++ebx16;
        v78 = reinterpret_cast<void**>((0x80000000 & edi79) << *reinterpret_cast<unsigned char*>(&ecx82));
    } while (reinterpret_cast<signed char>(ebx16) < reinterpret_cast<signed char>(esi67));
    esi83 = v28;
    edx84 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp12) - 8 - (reinterpret_cast<unsigned char>(esi83) << 2));
    ecx85 = reinterpret_cast<void**>(2);
    do {
        if (reinterpret_cast<signed char>(ecx85) < reinterpret_cast<signed char>(esi83)) {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(ecx85) * 4 - 16) = 0;
        } else {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(ecx85) * 4 - 16) = *edx84;
        }
        --edx84;
        --ecx85;
    } while (reinterpret_cast<signed char>(ecx85) >= reinterpret_cast<signed char>(0));
    esi86 = g418eac;
    tmp32_87 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi86) + reinterpret_cast<uint32_t>(g418e98));
    esi35 = tmp32_87;
    goto addr_40cd83_78;
    addr_40cc77_55:
    ecx68 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(ecx68 - 1) | 0xffffffe0) + 1);
    goto addr_40cc7c_54;
    addr_40ca53_66:
    v88 = reinterpret_cast<void**>(0);
    edi89 = eax70;
    ecx90 = edi89;
    v91 = reinterpret_cast<uint32_t>(~(-1 << *reinterpret_cast<unsigned char*>(&ecx90)));
    v52 = reinterpret_cast<void**>(32 - edi89);
    esi92 = reinterpret_cast<void**>(3);
    do {
        ecx93 = edi89;
        ecx94 = v52;
        eax95 = reinterpret_cast<void**>((*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(ebx16) * 4 - 16) & v91) << *reinterpret_cast<unsigned char*>(&ecx94));
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(ebx16) * 4 - 16) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(ebx16) * 4 - 16) >> *reinterpret_cast<signed char*>(&ecx93) | reinterpret_cast<unsigned char>(v88);
        ++ebx16;
        v88 = eax95;
    } while (reinterpret_cast<signed char>(ebx16) < reinterpret_cast<signed char>(3));
    edx96 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp12) - 8 - (reinterpret_cast<unsigned char>(v33) << 2));
    edi97 = 0xffffffff;
    eax98 = v33;
    ecx99 = reinterpret_cast<void**>(2);
    do {
        if (reinterpret_cast<signed char>(ecx99) < reinterpret_cast<signed char>(eax98)) {
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(ecx99) * 4 - 16) = reinterpret_cast<void**>(0);
        } else {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(ecx99) * 4 - 16) = *edx96;
            eax98 = v33;
        }
        --edx96;
        --ecx99;
    } while (reinterpret_cast<signed char>(ecx99) >= reinterpret_cast<signed char>(0));
    ecx100 = v28 + 1;
    __asm__("cdq ");
    edx101 = reinterpret_cast<void**>(reinterpret_cast<int32_t>((reinterpret_cast<uint32_t>(edx96) & 31) + reinterpret_cast<unsigned char>(ecx100)) >> 5);
    v29 = edx101;
    ecx102 = reinterpret_cast<unsigned char>(ecx100) & 0x8000001f;
    if (__intrinsic()) {
        ecx102 = (ecx102 - 1 | 0xffffffe0) + 1;
    }
    v38 = reinterpret_cast<void**>(31 - ecx102);
    ecx103 = v38;
    if (!(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(edx101) * 4 - 16) & 1 << *reinterpret_cast<unsigned char*>(&ecx103))) {
        addr_40cb90_100:
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(edx101) * 4 - 16) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(edx101) * 4 - 16) & edi97 << *reinterpret_cast<unsigned char*>(&ecx103);
        edx104 = edx101 + 1;
        if (reinterpret_cast<signed char>(edx104) < reinterpret_cast<signed char>(3)) {
            edi105 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp12) - 16 + reinterpret_cast<unsigned char>(edx104) * 4);
            ecx106 = 3 - reinterpret_cast<unsigned char>(edx104);
            while (ecx106) {
                --ecx106;
                *edi105 = 0;
                ++edi105;
                esi92 = esi92 + 4;
            }
            edi97 = 0xffffffff;
        }
    } else {
        zf107 = (*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(edx101) * 4 - 16) & reinterpret_cast<uint32_t>(~(-1 << *reinterpret_cast<unsigned char*>(&ecx103)))) == 0;
        while (zf107) {
            ++edx101;
            if (reinterpret_cast<signed char>(edx101) >= reinterpret_cast<signed char>(3)) 
                goto addr_40cb15_108;
            zf107 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(edx101) * 4 - 16) == 0;
        }
        goto addr_40cb17_110;
    }
    ecx108 = g418ea4;
    ecx109 = ecx108 + 1;
    __asm__("cdq ");
    v110 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx109 + (reinterpret_cast<unsigned char>(edx104) & 31)) >> 5);
    ecx111 = ecx109 & 0x8000001f;
    if (__intrinsic()) {
        ecx111 = (ecx111 - 1 | 0xffffffe0) + 1;
    }
    eax112 = reinterpret_cast<void**>(0);
    v113 = reinterpret_cast<void**>(0);
    edi114 = ~(edi97 << *reinterpret_cast<unsigned char*>(&ecx111));
    ebx115 = ecx111;
    v28 = reinterpret_cast<void**>(0);
    v116 = 32 - ebx115;
    do {
        ecx117 = ebx115;
        eax118 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(eax112) * 4 - 16) & edi114;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(v28) * 4 - 16) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<unsigned char>(eax112) * 4 - 16) >> *reinterpret_cast<signed char*>(&ecx117) | reinterpret_cast<unsigned char>(v113);
        ecx119 = v116;
        v113 = reinterpret_cast<void**>(eax118 << *reinterpret_cast<unsigned char*>(&ecx119));
        eax112 = v28 + 1;
        v28 = eax112;
    } while (reinterpret_cast<signed char>(eax112) < reinterpret_cast<signed char>(esi92));
    esi120 = v110;
    edx121 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp12) - 8 - (esi120 << 2));
    ecx122 = 2;
    do {
        if (reinterpret_cast<int32_t>(ecx122) < reinterpret_cast<int32_t>(esi120)) {
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp12) + ecx122 * 4 - 16) = reinterpret_cast<void**>(0);
        } else {
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp12) + ecx122 * 4 - 16) = *edx121;
        }
        --edx121;
        --ecx122;
    } while (reinterpret_cast<int32_t>(ecx122) >= reinterpret_cast<int32_t>(0));
    addr_40ca18_77:
    esi35 = reinterpret_cast<void**>(0);
    addr_40c8d5_121:
    goto addr_40cd83_78;
    addr_40cb17_110:
    __asm__("cdq ");
    edx123 = reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(edx101) & 31) + reinterpret_cast<unsigned char>(v28)) >> 5;
    edi124 = reinterpret_cast<unsigned char>(v28) & 0x8000001f;
    if (__intrinsic()) {
        edi124 = (edi124 - 1 | 0xffffffe0) + 1;
    }
    eax125 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + edx123 * 4 - 16);
    ecx126 = 31 - edi124;
    edi127 = 1 << *reinterpret_cast<unsigned char*>(&ecx126);
    ecx128 = reinterpret_cast<void**>(0);
    edi129 = edi127 + eax125;
    edi97 = 0xff;
    if (edi129 < eax125 || edi129 < edi127) {
        ecx128 = reinterpret_cast<void**>(1);
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + edx123 * 4 - 16) = edi129;
    edx130 = edx123 - 1;
    if (edx130 >= 0) {
        do {
            if (!ecx128) 
                break;
            ecx128 = reinterpret_cast<void**>(0);
            edi97 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + edx130 * 4 - 16) + 1;
            cf131 = edi97 < *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + edx130 * 4 - 16);
            if (cf131 || edi97 < 1) {
                ecx128 = reinterpret_cast<void**>(1);
            }
            *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + edx130 * 4 - 16) = edi97;
            --edx130;
        } while (edx130 >= 0);
        edi97 = 0xffffffff;
    }
    ecx103 = v38;
    addr_40cb8d_132:
    edx101 = v29;
    goto addr_40cb90_100;
    addr_40cb15_108:
    goto addr_40cb8d_132;
    addr_40ca4e_67:
    eax70 = (eax70 - 1 | 0xffffffe0) + 1;
    goto addr_40ca53_66;
    addr_40c94d_29:
    __asm__("cdq ");
    edx132 = reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(edx32) & 31) + reinterpret_cast<unsigned char>(v28)) >> 5;
    eax133 = reinterpret_cast<unsigned char>(v28) & 0x8000001f;
    if (__intrinsic()) {
        eax133 = (eax133 - 1 | 0xffffffe0) + 1;
    }
    ecx134 = 31 - eax133;
    v29 = reinterpret_cast<void**>(0);
    v52 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx134));
    eax135 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp12) + edx132 * 4 - 16);
    ecx136 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v52) + reinterpret_cast<unsigned char>(eax135));
    ecx137 = reinterpret_cast<void**>(0);
    edi40 = 0xff;
    if (reinterpret_cast<unsigned char>(ecx136) < reinterpret_cast<unsigned char>(eax135) || reinterpret_cast<unsigned char>(ecx136) < reinterpret_cast<unsigned char>(v52)) {
        ecx137 = reinterpret_cast<void**>(1);
        v29 = reinterpret_cast<void**>(1);
    }
    *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp12) + edx132 * 4 - 16) = ecx136;
    edx138 = edx132 - 1;
    if (edx138 >= 0) {
        do {
            if (!ecx137) 
                break;
            eax139 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + edx138 * 4 - 16);
            ecx137 = reinterpret_cast<void**>(0);
            v29 = reinterpret_cast<void**>(0);
            edi40 = eax139 + 1;
            if (edi40 < eax139 || edi40 < 1) {
                ecx137 = reinterpret_cast<void**>(1);
                v29 = reinterpret_cast<void**>(1);
            }
            *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ebp12) + edx138 * 4 - 16) = edi40;
            --edx138;
        } while (edx138 >= 0);
        edi40 = 0xffffffff;
    }
    ecx39 = v38;
    addr_40c9d2_143:
    edx32 = v33;
    goto addr_40c9d5_19;
    addr_40c948_27:
    goto addr_40c9d2_143;
    addr_40c910_12:
    ecx34 = (ecx34 - 1 | 0xffffffe0) + 1;
    goto addr_40c915_18;
    addr_40c8cd_15:
    v21 = reinterpret_cast<void**>(0);
    v22 = reinterpret_cast<void**>(0);
    esi35 = reinterpret_cast<void**>(12);
    goto addr_40c8d5_121;
    addr_40c8c8_17:
    goto addr_40cd86_79;
}

void** fun_40f22f(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** ecx14;
    void** eax15;
    void** eax16;
    void** eax17;
    void** esi18;
    void** ebp19;
    void** eax20;

    ecx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) & 0xfff7ffff);
    if (!(reinterpret_cast<unsigned char>(a2) & reinterpret_cast<unsigned char>(ecx14) & 0xfcf0fce0)) {
        if (!a1) {
            fun_40fd09(a2, ecx14);
        } else {
            eax15 = fun_40fd09(a2, ecx14);
            *reinterpret_cast<void***>(a1) = eax15;
        }
        eax16 = reinterpret_cast<void**>(0);
    } else {
        if (a1) {
            eax17 = fun_40fd09(0, 0);
            ecx14 = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(a1) = eax17;
        }
        eax20 = fun_404026(ecx14, esi18, ebp19, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        *reinterpret_cast<void***>(eax20) = reinterpret_cast<void**>(22);
        fun_402c77(ecx14);
        eax16 = reinterpret_cast<void**>(22);
    }
    return eax16;
}

struct s153 {
    void** f0;
    signed char[3] pad4;
    void* f4;
};

void fun_40e5b1(signed char* a1, void** a2, struct s151* a3) {
    struct s151* ebx4;
    int32_t eax5;
    int32_t v6;
    void** ecx7;
    void** v8;
    void** v9;
    void** v10;
    void* edx11;
    void** v12;
    struct s153* esi13;
    void** v14;
    void* v15;
    uint32_t esi16;
    uint32_t edi17;
    void** edx18;
    void** esi19;
    void** edi20;
    void** eax21;
    int32_t ecx22;
    void** eax23;
    int32_t ecx24;
    int32_t eax25;
    void** ecx26;
    void** edx27;
    void* edi28;
    void** esi29;
    void** edi30;
    void** eax31;
    int32_t eax32;
    void** eax33;
    int32_t edx34;
    void** eax35;
    void** edx36;
    void** esi37;
    void** esi38;
    void** edx39;
    void** edi40;
    void** esi41;
    void** ecx42;

    ebx4 = a3;
    eax5 = 0x404e;
    v6 = 0x404e;
    ebx4->f0 = reinterpret_cast<void**>(0);
    ebx4->f4 = reinterpret_cast<void**>(0);
    ebx4->f8 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(0)) {
        ecx7 = reinterpret_cast<void**>(0);
        v8 = reinterpret_cast<void**>(0);
        v9 = reinterpret_cast<void**>(0);
        v10 = reinterpret_cast<void**>(0);
        do {
            edx11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v9) + reinterpret_cast<unsigned char>(v9));
            v12 = ebx4->f0;
            esi13 = reinterpret_cast<struct s153*>(&ebx4->f4);
            v14 = esi13->f0;
            v15 = esi13->f4;
            esi16 = reinterpret_cast<unsigned char>(v8) + reinterpret_cast<unsigned char>(v8) | reinterpret_cast<unsigned char>(ecx7) >> 31;
            edi17 = reinterpret_cast<unsigned char>(v10) + reinterpret_cast<unsigned char>(v10) | reinterpret_cast<unsigned char>(v8) >> 31;
            edx18 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx11) + reinterpret_cast<uint32_t>(edx11));
            esi19 = reinterpret_cast<void**>(esi16 + esi16 | reinterpret_cast<uint32_t>(edx11) >> 31);
            ebx4->f0 = edx18;
            edi20 = reinterpret_cast<void**>(edi17 + edi17 | esi16 >> 31);
            ebx4->f4 = esi19;
            eax21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v12) + reinterpret_cast<unsigned char>(edx18));
            ebx4->f8 = edi20;
            ecx22 = 0;
            if (reinterpret_cast<unsigned char>(eax21) < reinterpret_cast<unsigned char>(edx18) || reinterpret_cast<unsigned char>(eax21) < reinterpret_cast<unsigned char>(v12)) {
                ecx22 = 1;
            }
            ebx4->f0 = eax21;
            if (ecx22) {
                eax23 = esi19;
                ecx24 = 0;
                esi19 = eax23 + 1;
                if (reinterpret_cast<unsigned char>(esi19) < reinterpret_cast<unsigned char>(eax23) || reinterpret_cast<unsigned char>(esi19) < reinterpret_cast<unsigned char>(1)) {
                    ecx24 = 1;
                }
                ebx4->f4 = esi19;
                if (ecx24) {
                    ++edi20;
                    ebx4->f8 = edi20;
                }
            }
            eax25 = 0;
            ecx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi19) + reinterpret_cast<unsigned char>(v14));
            if (reinterpret_cast<unsigned char>(ecx26) < reinterpret_cast<unsigned char>(esi19) || reinterpret_cast<unsigned char>(ecx26) < reinterpret_cast<unsigned char>(v14)) {
                eax25 = 1;
            }
            ebx4->f4 = ecx26;
            if (eax25) {
                ++edi20;
                ebx4->f8 = edi20;
            }
            edx27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(eax21));
            edi28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi20) + reinterpret_cast<uint32_t>(v15));
            esi29 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx26) + reinterpret_cast<unsigned char>(ecx26) | reinterpret_cast<unsigned char>(eax21) >> 31);
            edi30 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi28) + reinterpret_cast<uint32_t>(edi28) | reinterpret_cast<unsigned char>(ecx26) >> 31);
            ebx4->f0 = edx27;
            ebx4->f4 = esi29;
            ebx4->f8 = edi30;
            eax31 = reinterpret_cast<void**>(static_cast<int32_t>(*a1));
            v8 = esi29;
            v10 = edi30;
            ecx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx27) + reinterpret_cast<unsigned char>(eax31));
            v9 = ecx7;
            if (reinterpret_cast<unsigned char>(ecx7) < reinterpret_cast<unsigned char>(edx27) || reinterpret_cast<unsigned char>(ecx7) < reinterpret_cast<unsigned char>(eax31)) {
                eax32 = 1;
            } else {
                eax32 = 0;
            }
            ebx4->f0 = ecx7;
            if (eax32) {
                eax33 = esi29;
                edx34 = 0;
                esi29 = eax33 + 1;
                v8 = esi29;
                if (reinterpret_cast<unsigned char>(esi29) < reinterpret_cast<unsigned char>(eax33) || reinterpret_cast<unsigned char>(esi29) < reinterpret_cast<unsigned char>(1)) {
                    edx34 = 1;
                }
                ebx4->f4 = esi29;
                if (edx34) {
                    ++edi30;
                    v10 = edi30;
                    ebx4->f8 = edi30;
                }
            }
            eax35 = a2 - 1;
            ebx4->f4 = esi29;
            ++a1;
            ebx4->f8 = edi30;
            a2 = eax35;
        } while (eax35);
        eax5 = 0x404e;
    }
    if (!ebx4->f8) {
        edx36 = ebx4->f4;
        do {
            esi37 = edx36;
            edx36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx36) << 16 | reinterpret_cast<unsigned char>(ebx4->f0) >> 16);
            esi38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi37) >> 16);
            eax5 = v6 + 0xfff0;
            ebx4->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx4->f0) << 16);
            v6 = eax5;
        } while (!esi38);
        ebx4->f4 = edx36;
        ebx4->f8 = esi38;
    }
    edx39 = ebx4->f8;
    if (!(reinterpret_cast<unsigned char>(edx39) & 0x8000)) {
        edi40 = ebx4->f0;
        esi41 = ebx4->f4;
        do {
            ecx42 = esi41;
            esi41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi41) + reinterpret_cast<unsigned char>(esi41) | reinterpret_cast<unsigned char>(edi40) >> 31);
            edx39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx39) + reinterpret_cast<unsigned char>(edx39) | reinterpret_cast<unsigned char>(ecx42) >> 31);
            eax5 = v6 + 0xffff;
            edi40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi40) + reinterpret_cast<unsigned char>(edi40));
            v6 = eax5;
        } while (!(reinterpret_cast<unsigned char>(edx39) & 0x8000));
        ebx4->f0 = edi40;
        ebx4->f4 = esi41;
        ebx4->f8 = edx39;
    }
    ebx4->fa = *reinterpret_cast<int16_t*>(&eax5);
    return;
}

void** fun_40e05e(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void*** ebp7;
    void** eax8;
    void** v9;
    void** ecx10;
    void** v11;
    void** v12;
    int32_t edi13;
    void** esi14;
    void** ebx15;
    void** ecx16;
    uint32_t eax17;
    int32_t v18;
    uint32_t eax19;
    void** v20;
    void* ecx21;
    void* eax22;
    void** ecx23;
    void** v24;
    void** v25;
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
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** ebp43;
    void** eax44;
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
    void** v57;
    void** v58;
    void** v59;
    void** eax60;

    ebp7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax8 = g4183f0;
    v9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) ^ reinterpret_cast<uint32_t>(ebp7));
    ecx10 = reinterpret_cast<void**>(ebp7 + 0xffffffd4);
    v11 = *reinterpret_cast<void***>(a1 + 4);
    v12 = *reinterpret_cast<void***>(a1);
    fun_40f09f(ecx10, v12, v11, ecx10, ebp7 + 0xffffffe4, 22, edi13, esi14, ebx15);
    if (a2) {
        if (a3) {
            ecx16 = reinterpret_cast<void**>(0xffffffff);
            if (a3 != 0xffffffff) {
                eax17 = 0;
                *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<uint1_t>(v18 == 45);
                eax19 = 0;
                *reinterpret_cast<unsigned char*>(&eax19) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(a4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(a4 == 0)));
                ecx16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) - eax17 - eax19);
            }
            v20 = reinterpret_cast<void**>(ebp7 + 0xffffffd4);
            ecx21 = reinterpret_cast<void*>(0);
            *reinterpret_cast<unsigned char*>(&ecx21) = reinterpret_cast<uint1_t>(v20 == 45);
            eax22 = reinterpret_cast<void*>(0);
            *reinterpret_cast<unsigned char*>(&eax22) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(a4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(a4 == 0)));
            ecx23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx21) + reinterpret_cast<unsigned char>(a2));
            eax32 = fun_40ef27(ecx23, reinterpret_cast<int32_t>(eax22) + reinterpret_cast<unsigned char>(ecx23), ecx16, a4 + 1, v20, v24, v25, v26, v27, v28, v29, v30, v31);
            if (!eax32) {
                fun_40df0d(a2, a3, a4, a5, ebp7 + 0xffffffd4, 0, a6, v33);
            } else {
                *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
            }
        } else {
            eax44 = fun_404026(ecx10, v34, v35, v36, v37, v38, v39, v40, v41, v42, v9, ebp43, __return_address(), a1, a2, a3, a4);
            goto addr_40e09c_9;
        }
    } else {
        eax44 = fun_404026(ecx10, v45, v46, v47, v48, v49, v50, v51, v52, v53, v9, ebp43, __return_address(), a1, a2, a3, a4);
        goto addr_40e09c_9;
    }
    addr_40e11b_11:
    eax60 = fun_404f47(reinterpret_cast<unsigned char>(v9) ^ reinterpret_cast<uint32_t>(ebp7), v54, v55, v56, v57, v58, v59, v9);
    return eax60;
    addr_40e09c_9:
    *reinterpret_cast<void***>(eax44) = reinterpret_cast<void**>(22);
    fun_402c77(ecx10);
    goto addr_40e11b_11;
}

struct s154 {
    uint32_t f0;
    uint32_t f4;
    int16_t f8;
};

void fun_40efd7(void** ecx, struct s154* a2, void** a3);

void** fun_40f09f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, int32_t a7, void** a8, void** a9) {
    void* ebp10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    uint16_t v15;
    void** v16;
    void** v17;
    void** eax18;
    signed char v19;
    int16_t v20;
    void** edi21;
    void** esi22;
    void** ebx23;
    void** v24;
    void** eax25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    uint32_t v33;
    uint32_t v34;
    uint32_t v35;
    uint32_t v36;
    int32_t edi37;
    int32_t ebp38;
    uint32_t eax39;
    uint32_t eax40;
    uint32_t ebx41;
    uint32_t ecx42;
    uint32_t eax43;
    uint32_t eax44;
    uint32_t tmp32_45;
    uint32_t eax46;

    ebp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax11 = g4183f0;
    v12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp10) + 8);
    fun_40efd7(ecx, reinterpret_cast<uint32_t>(ebp10) + 0xffffffd0, v12);
    v13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp10) + 0xffffffe0);
    *reinterpret_cast<uint16_t*>(&v14) = v15;
    eax18 = fun_40f28c(v12, v16, v17, *reinterpret_cast<uint16_t*>(&v14), 17, 0, v13);
    *reinterpret_cast<void***>(a4 + 8) = eax18;
    *reinterpret_cast<void***>(a4) = reinterpret_cast<void**>(static_cast<int32_t>(v19));
    *reinterpret_cast<void***>(a4 + 4) = reinterpret_cast<void**>(static_cast<int32_t>(v20));
    eax25 = fun_40aa84(v12, a5, a6, reinterpret_cast<uint32_t>(ebp10) + 0xffffffe4, v16, v17, v14, 17, 0, v13, edi21, esi22, ebx23, v24);
    if (!eax25) {
        *reinterpret_cast<void***>(a4 + 12) = a5;
        eax32 = fun_404f47(reinterpret_cast<unsigned char>(eax11) ^ reinterpret_cast<uint32_t>(ebp10) ^ reinterpret_cast<uint32_t>(ebp10), v26, v27, v28, a5, v29, v30, v31);
        return eax32;
    }
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    fun_402c87(v12);
    edi37 = 0;
    ebp38 = 0;
    if (__intrinsic()) 
        goto addr_40f13f_14;
    addr_40f154_15:
    eax39 = 0;
    if (__intrinsic()) {
        ++edi37;
        eax40 = -0;
        eax39 = eax40 - reinterpret_cast<uint1_t>(eax40 < 0);
        v33 = eax39;
        v34 = reinterpret_cast<uint32_t>(-0);
    }
    if (eax39) {
        ebx41 = eax39;
        ecx42 = v34;
        eax43 = v36;
        do {
            ebx41 = ebx41 >> 1;
            __asm__("rcr ecx, 1");
            __asm__("rcr eax, 1");
        } while (ebx41);
        eax44 = eax43 / ecx42;
        tmp32_45 = __intrinsic() + eax44 * v33;
        if (tmp32_45 < __intrinsic()) 
            goto addr_40f1d8_21;
        if (tmp32_45 > v35) 
            goto addr_40f1d8_21;
        if (tmp32_45 < v35) 
            goto addr_40f1e1_24;
        if (v34 * eax44 <= v36) 
            goto addr_40f1e1_24;
    } else {
        goto addr_40f1e3_27;
    }
    addr_40f1d8_21:
    addr_40f1e1_24:
    addr_40f1e3_27:
    if (ebp38 - 1 < 0) {
    }
    if (!(edi37 - 1)) {
    }
    goto 0;
    addr_40f13f_14:
    edi37 = 1;
    ebp38 = 1;
    eax46 = reinterpret_cast<uint32_t>(-0);
    v35 = eax46 - reinterpret_cast<uint1_t>(eax46 < 0);
    v36 = reinterpret_cast<uint32_t>(-0);
    goto addr_40f154_15;
}

struct s155 {
    signed char[112] pad112;
    uint32_t f70;
};

struct s156 {
    signed char[132] pad132;
    void**** f84;
};

struct s157 {
    signed char[58] pad58;
    void** f3a;
};

struct s158 {
    signed char[48] pad48;
    void** f30;
};

void** fun_40db93(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** ebx8;
    void** v9;
    void** esi10;
    void** v11;
    void** edi12;
    void** v13;
    void** v14;
    void** ecx15;
    void** edi16;
    void** esi17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** ebp27;
    void** eax28;
    void** v29;
    void** ebx30;
    void** v31;
    void** eax32;
    void** ebx33;
    void** eax34;
    void** edi35;
    struct s78* eax36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    signed char v46;
    struct s155* v47;
    uint32_t ebx48;
    uint32_t ebx49;
    int1_t zf50;
    uint32_t v51;
    void** esi52;
    void** ecx53;
    void** esi54;
    void** v55;
    struct s156* v56;
    void** eax57;
    void** v58;
    void** eax59;
    void** v60;
    void** ecx61;
    int32_t ecx62;
    uint32_t eax63;
    uint32_t eax64;
    void** ecx65;
    uint32_t eax66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** eax72;
    uint32_t ebx73;
    uint32_t eax74;
    void** ecx75;
    uint1_t cf76;
    void** ecx77;
    uint1_t cf78;
    void** ebx79;
    struct s78* esi80;
    uint1_t cf81;
    struct s78* edi82;
    struct s80* al83;
    struct s80* al84;
    struct s80* al85;

    v7 = ebx8;
    v9 = esi10;
    v11 = edi12;
    v13 = reinterpret_cast<void**>(0x3ff);
    v14 = reinterpret_cast<void**>(48);
    ecx15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffd4);
    fun_402d4b(ecx15, a6, v11, v9, v7);
    edi16 = a4;
    if (reinterpret_cast<signed char>(edi16) < reinterpret_cast<signed char>(0)) {
        edi16 = reinterpret_cast<void**>(0);
    }
    esi17 = a2;
    if (!esi17 || (ecx15 = a3, !ecx15)) {
        eax28 = fun_404026(ecx15, v11, v9, v7, v18, v19, v20, v21, v22, v23, v24, v25, v26, 0x3ff, 48, ebp27, __return_address());
        v29 = reinterpret_cast<void**>(22);
    } else {
        *reinterpret_cast<void***>(esi17) = reinterpret_cast<void**>(0);
        if (reinterpret_cast<unsigned char>(ecx15) > reinterpret_cast<unsigned char>(edi16 + 11)) {
            ebx30 = *reinterpret_cast<void***>(a1 + 4);
            v31 = *reinterpret_cast<void***>(a1);
            if ((reinterpret_cast<unsigned char>(ebx30) >> 20 & 0x7ff) != 0x7ff) {
                goto addr_40dc8c_8;
            }
            if (0) {
                addr_40dc8c_8:
                if (reinterpret_cast<unsigned char>(ebx30) & 0x80000000) {
                    *reinterpret_cast<void***>(esi17) = reinterpret_cast<void**>(45);
                    ++esi17;
                    goto addr_40dc9a_11;
                }
            } else {
                eax32 = reinterpret_cast<void**>(0xffffffff);
                if (ecx15 != 0xffffffff) {
                    eax32 = ecx15 + 0xfffffffe;
                }
                ebx33 = esi17 + 2;
                eax34 = fun_40deef(a1, ebx33, eax32, edi16, 0);
                edi35 = eax34;
                if (!edi35) {
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx33) == 45)) {
                        *reinterpret_cast<void***>(esi17) = reinterpret_cast<void**>(45);
                        ++esi17;
                    }
                    *reinterpret_cast<void***>(esi17) = reinterpret_cast<void**>(48);
                    *reinterpret_cast<void***>(esi17 + 1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(a5 == 0) - 1) & 0xe0) + 0x78);
                    eax36 = fun_40edf0(ecx15, esi17 + 2, 0x65);
                    if (eax36) {
                        eax36->f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(a5 == 0) - 1) & 0xe0) + 0x70);
                        eax36->f3 = 0;
                    }
                    edi35 = reinterpret_cast<void**>(0);
                    goto addr_40ded9_20;
                } else {
                    *reinterpret_cast<void***>(esi17) = reinterpret_cast<void**>(0);
                    goto addr_40ded9_20;
                }
            }
        } else {
            eax28 = fun_404026(ecx15, v11, v9, v7, v37, v38, v39, v40, v41, v42, v43, v44, v45, 0x3ff, 48, ebp27, __return_address());
            v29 = reinterpret_cast<void**>(34);
        }
    }
    edi35 = v29;
    *reinterpret_cast<void***>(eax28) = edi35;
    fun_402c77(ecx15);
    addr_40ded9_20:
    if (v46) {
        v47->f70 = v47->f70 & 0xfffffffd;
    }
    return edi35;
    addr_40dc9a_11:
    *reinterpret_cast<void***>(esi17) = reinterpret_cast<void**>(48);
    ebx48 = -reinterpret_cast<unsigned char>(a5);
    *reinterpret_cast<void***>(esi17 + 1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(a5 == 0) - 1) & 0xe0) + 0x78);
    ebx49 = (ebx48 - (ebx48 + reinterpret_cast<uint1_t>(ebx48 < ebx48 + reinterpret_cast<uint1_t>(!!a5))) & 0xffffffe0) + 39;
    zf50 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) & 0x7ff00000) == 0;
    v51 = ebx49;
    if (!zf50) {
        *reinterpret_cast<void***>(esi17 + 2) = reinterpret_cast<void**>(49);
        esi52 = esi17 + 3;
    } else {
        *reinterpret_cast<void***>(esi17 + 2) = reinterpret_cast<void**>(48);
        esi52 = esi17 + 3;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) & 0xfffff) {
            v13 = reinterpret_cast<void**>(0x3fe);
        } else {
            v13 = reinterpret_cast<void**>(0);
        }
    }
    ecx53 = esi52;
    esi54 = esi52 + 1;
    v55 = ecx53;
    if (edi16) {
        *reinterpret_cast<void***>(ecx53) = **v56->f84;
    } else {
        *reinterpret_cast<void***>(ecx53) = reinterpret_cast<void**>(0);
    }
    eax57 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) & 0xfffff);
    v58 = eax57;
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(eax57 == 0))) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) > reinterpret_cast<unsigned char>(0)) {
        ecx53 = reinterpret_cast<void**>(0xf0000);
        eax59 = reinterpret_cast<void**>(48);
        v60 = reinterpret_cast<void**>(0xf0000);
        do {
            if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi16) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi16 == 0)) 
                break;
            ecx61 = v14;
            ecx62 = *reinterpret_cast<int16_t*>(&ecx61);
            eax63 = fun_40f210(*reinterpret_cast<void***>(&ecx62));
            eax64 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&eax63) + 48);
            if (eax64 > 57) {
                eax64 = eax64 + ebx49;
            }
            *reinterpret_cast<void***>(esi54) = *reinterpret_cast<void***>(&eax64);
            ++esi54;
            __asm__("shrd eax, ecx, 0x4");
            ecx53 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v60) >> 4);
            eax59 = v14 - 4;
            --edi16;
            v60 = ecx53;
            v14 = eax59;
        } while (*reinterpret_cast<int16_t*>(&eax59) >= 0);
        if (*reinterpret_cast<int16_t*>(&eax59) < 0) 
            goto addr_40ddf2_40;
        ecx65 = v14;
        ecx53 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&ecx65)));
        eax66 = fun_40f210(ecx53);
        if (*reinterpret_cast<uint16_t*>(&eax66) <= 8) 
            goto addr_40ddf2_40;
    } else {
        addr_40ddf2_40:
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi16) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi16 == 0))) {
            fun_407390(ecx53, esi54, 48, edi16, v11, v9, v7, v67, v68, v69, v70, v71, v58, v31);
            esi54 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi54) + reinterpret_cast<unsigned char>(edi16));
            goto addr_40de06_43;
        }
    }
    eax72 = esi54 + 0xffffffff;
    while ((ecx53 = *reinterpret_cast<void***>(eax72), ecx53 == 0x66) || reinterpret_cast<int1_t>(ecx53 == 70)) {
        *reinterpret_cast<void***>(eax72) = reinterpret_cast<void**>(48);
        --eax72;
    }
    ebx73 = v51;
    if (eax72 != v55) 
        goto addr_40dddb_48;
    *reinterpret_cast<void***>(eax72 + 0xffffffff) = *reinterpret_cast<void***>(eax72 + 0xffffffff) + 1;
    goto addr_40ddf2_40;
    addr_40dddb_48:
    ecx53 = *reinterpret_cast<void***>(eax72);
    if (!reinterpret_cast<int1_t>(ecx53 == 57)) {
        ++ecx53;
        *reinterpret_cast<void***>(eax72) = ecx53;
        goto addr_40ddf2_40;
    } else {
        *reinterpret_cast<void***>(eax72) = reinterpret_cast<void**>(&(*reinterpret_cast<struct s157**>(&ebx73))->f3a);
        goto addr_40ddf2_40;
    }
    addr_40de06_43:
    if (!*reinterpret_cast<void***>(v55)) {
        esi54 = v55;
    }
    *reinterpret_cast<void***>(esi54) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<uint1_t>(a5 == 0) - 1) & 0xe0) + 0x70);
    eax74 = fun_40f210(52);
    ecx75 = reinterpret_cast<void**>(eax74 & 0x7ff);
    cf76 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(ecx75) < reinterpret_cast<unsigned char>(v13));
    ecx77 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx75) - reinterpret_cast<unsigned char>(v13));
    cf78 = reinterpret_cast<uint1_t>(0 < static_cast<uint32_t>(cf76));
    ebx79 = reinterpret_cast<void**>(-static_cast<uint32_t>(cf78));
    if (reinterpret_cast<signed char>(ebx79) < reinterpret_cast<signed char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf78)))) || reinterpret_cast<int32_t>(0) <= reinterpret_cast<int32_t>(static_cast<uint32_t>(cf76)) && reinterpret_cast<unsigned char>(ecx77) < reinterpret_cast<unsigned char>(0)) {
        *reinterpret_cast<void***>(esi54 + 1) = reinterpret_cast<void**>(45);
        esi80 = reinterpret_cast<struct s78*>(esi54 + 2);
        cf81 = reinterpret_cast<uint1_t>(!!ecx77);
        ecx77 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(ecx77));
        ebx79 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx79))) + cf81));
    } else {
        *reinterpret_cast<void***>(esi54 + 1) = reinterpret_cast<void**>(43);
        esi80 = reinterpret_cast<struct s78*>(esi54 + 2);
    }
    esi80->f0 = reinterpret_cast<void**>(48);
    edi82 = esi80;
    if (reinterpret_cast<signed char>(ebx79) >= reinterpret_cast<signed char>(0) && ((reinterpret_cast<signed char>(ebx79) > reinterpret_cast<signed char>(0) || reinterpret_cast<unsigned char>(ecx77) >= reinterpret_cast<unsigned char>(0x3e8)) && (al83 = fun_40f130(ecx77, ebx79, 0x3e8, 0), esi80->f0 = reinterpret_cast<void**>(&al83->f30), esi80 = reinterpret_cast<struct s78*>(&esi80->f1), esi80 != edi82) || reinterpret_cast<signed char>(ebx79) >= reinterpret_cast<signed char>(0) && (reinterpret_cast<signed char>(ebx79) > reinterpret_cast<signed char>(0) || reinterpret_cast<unsigned char>(ecx77) >= reinterpret_cast<unsigned char>(100)))) {
        al84 = fun_40f130(ecx77, ebx79, 100, 0);
        esi80->f0 = reinterpret_cast<void**>(&al84->f30);
        esi80 = reinterpret_cast<struct s78*>(&esi80->f1);
    }
    if (esi80 != edi82 || reinterpret_cast<signed char>(ebx79) >= reinterpret_cast<signed char>(0) && (reinterpret_cast<signed char>(ebx79) > reinterpret_cast<signed char>(0) || reinterpret_cast<unsigned char>(ecx77) >= reinterpret_cast<unsigned char>(10))) {
        al85 = fun_40f130(ecx77, ebx79, 10, 0);
        esi80->f0 = reinterpret_cast<void**>(&al85->f30);
        esi80 = reinterpret_cast<struct s78*>(&esi80->f1);
    }
    edi35 = reinterpret_cast<void**>(0);
    esi80->f0 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s158**>(&ecx77))->f30);
    esi80->f1 = 0;
    goto addr_40ded9_20;
}

struct s159 {
    signed char[112] pad112;
    uint32_t f70;
};

struct s160 {
    signed char[132] pad132;
    void**** f84;
};

unsigned char g419f44;

void** fun_40df0d(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** esp9;
    void** ecx10;
    void** edi11;
    void** ebx12;
    void** v13;
    void* esp14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** ebp19;
    void** eax20;
    void** v21;
    void** edx22;
    void** edi23;
    void** eax24;
    signed char v25;
    struct s159* v26;
    void** eax27;
    void* eax28;
    void** esi29;
    struct s160* v30;
    void* eax31;
    void** esi32;
    void** eax33;
    void** esi34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** eax39;
    void*** ebp40;
    void** eax41;
    void** v42;
    void** ecx43;
    void** v44;
    void** v45;
    void** ecx46;
    uint32_t eax47;
    int32_t v48;
    void** v49;
    void** ecx50;
    void** ecx51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** eax60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** eax71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** ecx87;
    void** edx88;
    void** eax89;
    int32_t eax90;
    void** eax91;
    int32_t eax92;
    int1_t zf93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;

    esp9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx10 = esp9 + 0xfffffff0;
    fun_402d4b(ecx10, a7, edi11, ebx12, v13);
    esp14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp9 - 16) - 4 - 4 - 4 - 4 + 4 + 4);
    if (!a1 || reinterpret_cast<unsigned char>(a2) <= reinterpret_cast<unsigned char>(0)) {
        eax20 = fun_404026(ecx10, edi11, ebx12, v15, v16, v17, v18, ebp19, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8);
        v21 = reinterpret_cast<void**>(22);
    } else {
        edx22 = a3;
        edi23 = reinterpret_cast<void**>(0);
        eax24 = edx22;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx22 == 0))) {
            eax24 = reinterpret_cast<void**>(0);
        }
        if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(eax24 + 9)) 
            goto addr_40df5f_6; else 
            goto addr_40df4b_7;
    }
    addr_40df52_8:
    edi23 = v21;
    *reinterpret_cast<void***>(eax20) = edi23;
    fun_402c77(ecx10);
    addr_40e03e_9:
    if (v25) {
        v26->f70 = v26->f70 & 0xfffffffd;
    }
    return edi23;
    addr_40df5f_6:
    if (*reinterpret_cast<unsigned char*>(&a6)) {
        eax27 = reinterpret_cast<void**>(0);
        *reinterpret_cast<unsigned char*>(&eax27) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx22 == 0)));
        eax28 = reinterpret_cast<void*>(0);
        *reinterpret_cast<unsigned char*>(&eax28) = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(a5) == 45);
        fun_40e562(a5, reinterpret_cast<int32_t>(eax28) + reinterpret_cast<unsigned char>(a1), eax27);
        edx22 = a3;
        ecx10 = eax27;
        esp14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp14) - 4 - 4 - 4 + 4 + 4 + 4);
    }
    esi29 = a1;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a5) == 45)) {
        *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(45);
        esi29 = a1 + 1;
    }
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx22 == 0))) {
        *reinterpret_cast<void***>(esi29) = *reinterpret_cast<void***>(esi29 + 1);
        ++esi29;
        *reinterpret_cast<void***>(esi29) = **v30->f84;
    }
    eax31 = reinterpret_cast<void*>(0);
    *reinterpret_cast<unsigned char*>(&eax31) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&a6) == 0);
    esi32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi29) + (reinterpret_cast<int32_t>(eax31) + reinterpret_cast<unsigned char>(edx22)));
    eax33 = reinterpret_cast<void**>(0xffffffff);
    if (a2 != 0xffffffff) {
        eax33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(esi32) + reinterpret_cast<unsigned char>(a2));
    }
    eax39 = fun_40aa84(ecx10, esi32, eax33, "e+000", esi34, edi11, ebx12, v35, v36, v37, v38, ebp19, __return_address(), a1);
    if (!eax39) 
        goto addr_40dfdd_20;
    fun_402c87(ecx10);
    ebp40 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp14) - 4 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4);
    eax41 = g4183f0;
    v42 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax41) ^ reinterpret_cast<uint32_t>(ebp40));
    ecx43 = reinterpret_cast<void**>(ebp40 + 0xffffffd4);
    v44 = g4;
    v45 = g0;
    fun_40f09f(ecx43, v45, v44, ecx43, ebp40 + 0xffffffe4, 22, 0, esi32, a1);
    if (!0) 
        goto addr_40e097_23;
    if (0) {
        ecx46 = reinterpret_cast<void**>(0xffffffff);
        if (!0) {
            eax47 = 0;
            *reinterpret_cast<unsigned char*>(&eax47) = reinterpret_cast<uint1_t>(v48 == 45);
            ecx46 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(-eax47)));
        }
        v49 = reinterpret_cast<void**>(ebp40 + 0xffffffd4);
        ecx50 = reinterpret_cast<void**>(0);
        *reinterpret_cast<unsigned char*>(&ecx50) = reinterpret_cast<uint1_t>(v49 == 45);
        ecx51 = ecx50;
        eax60 = fun_40ef27(ecx51, ecx51, ecx46, 1, v49, v52, v53, v54, v55, v56, v57, v58, v59);
        if (!eax60) {
            fun_40df0d(0, 0, 0, esi34, ebp40 + 0xffffffd4, 0, edi11, v61);
        } else {
            *reinterpret_cast<signed char*>(&g0) = 0;
        }
    } else {
        eax71 = fun_404026(ecx43, v62, v63, v64, v65, v66, v67, v68, v69, v70, v42, esp9, 0, 0, 0, 0, 0);
        goto addr_40e09c_31;
    }
    addr_40e11b_32:
    fun_404f47(reinterpret_cast<unsigned char>(v42) ^ reinterpret_cast<uint32_t>(ebp40), v72, v73, v74, v75, v76, v77, v42);
    goto 0;
    addr_40e09c_31:
    *reinterpret_cast<void***>(eax71) = reinterpret_cast<void**>(22);
    fun_402c77(ecx43);
    goto addr_40e11b_32;
    addr_40e097_23:
    eax71 = fun_404026(ecx43, v78, v79, v80, v81, v82, v83, v84, v85, v86, v42, esp9, 0, 0, 0, 0, 0);
    goto addr_40e09c_31;
    addr_40dfdd_20:
    ecx87 = esi32 + 2;
    if (a4) {
        *reinterpret_cast<void***>(esi32) = reinterpret_cast<void**>(69);
    }
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(a5 + 12)) != 48) {
        edx88 = *reinterpret_cast<void***>(a5 + 4) - 1;
        if (reinterpret_cast<signed char>(edx88) < reinterpret_cast<signed char>(0)) {
            edx88 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(edx88));
            *reinterpret_cast<void***>(esi32 + 1) = reinterpret_cast<void**>(45);
        }
        if (reinterpret_cast<signed char>(edx88) >= reinterpret_cast<signed char>(100)) {
            eax89 = edx88;
            __asm__("cdq ");
            edx88 = reinterpret_cast<void**>(reinterpret_cast<signed char>(eax89) % reinterpret_cast<signed char>(100));
            eax90 = reinterpret_cast<signed char>(eax89) / reinterpret_cast<signed char>(100);
            *reinterpret_cast<void***>(esi32 + 2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi32 + 2)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax90)));
        }
        if (reinterpret_cast<signed char>(edx88) >= reinterpret_cast<signed char>(10)) {
            eax91 = edx88;
            __asm__("cdq ");
            edx88 = reinterpret_cast<void**>(reinterpret_cast<signed char>(eax91) % reinterpret_cast<signed char>(10));
            eax92 = reinterpret_cast<signed char>(eax91) / reinterpret_cast<signed char>(10);
            *reinterpret_cast<unsigned char*>(esi32 + 3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi32 + 3) + *reinterpret_cast<unsigned char*>(&eax92));
        }
        *reinterpret_cast<void***>(esi32 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi32 + 4)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&edx88)));
    }
    zf93 = (g419f44 & 1) == 0;
    if (!zf93 && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx87) == 48)) {
        fun_40e7a0(ecx87, ecx87 + 1, 3, edi11);
        goto addr_40e03e_9;
    }
    addr_40df4b_7:
    eax20 = fun_404026(ecx10, edi11, ebx12, v94, v95, v96, v97, ebp19, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8);
    v21 = reinterpret_cast<void**>(34);
    goto addr_40df52_8;
}

struct s161 {
    signed char[132] pad132;
    void**** f84;
};

struct s162 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_40e12c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** ecx8;
    void** v9;
    void** esi10;
    void** ebx11;
    void** v12;
    void** esi13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** ebp18;
    void** eax19;
    void** ebx20;
    void** edi21;
    void* eax22;
    void** esi23;
    struct s161* v24;
    void** esi25;
    void** eax26;
    void** edi27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    signed char v32;
    struct s162* v33;

    ecx8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffec);
    v9 = *reinterpret_cast<void***>(a4 + 4) - 1;
    fun_402d4b(ecx8, a6, esi10, ebx11, v12);
    esi13 = a1;
    if (!esi13 || reinterpret_cast<unsigned char>(a2) <= reinterpret_cast<unsigned char>(0)) {
        eax19 = fun_404026(ecx8, esi10, ebx11, v14, v15, v16, v17, v9, ebp18, __return_address(), a1, a2, a3, a4, a5, a6, a7);
        ebx20 = reinterpret_cast<void**>(22);
        *reinterpret_cast<void***>(eax19) = reinterpret_cast<void**>(22);
        fun_402c77(ecx8);
    } else {
        ebx20 = reinterpret_cast<void**>(0);
        edi21 = a3;
        if (*reinterpret_cast<signed char*>(&a5) && (ecx8 = v9, ecx8 == edi21)) {
            eax22 = reinterpret_cast<void*>(0);
            *reinterpret_cast<unsigned char*>(&eax22) = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(a4) == 45);
            *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<unsigned char>(ecx8) + reinterpret_cast<unsigned char>(esi13)) = 48;
        }
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a4) == 45)) {
            *reinterpret_cast<void***>(esi13) = reinterpret_cast<void**>(45);
            ++esi13;
        }
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a4 + 4)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(a4 + 4) == 0))) {
            esi23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi13) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4 + 4)));
        } else {
            fun_40e562(ecx8, esi13, 1);
            *reinterpret_cast<void***>(esi13) = reinterpret_cast<void**>(48);
            esi23 = esi13 + 1;
            ecx8 = reinterpret_cast<void**>(1);
        }
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi21) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi21 == 0)) && (fun_40e562(ecx8, esi23, 1), *reinterpret_cast<void***>(esi23) = **v24->f84, esi25 = esi23 + 1, reinterpret_cast<signed char>(*reinterpret_cast<void***>(a4 + 4)) < reinterpret_cast<signed char>(0))) {
            if (!*reinterpret_cast<signed char*>(&a5)) {
                eax26 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4 + 4)));
                if (reinterpret_cast<signed char>(edi21) >= reinterpret_cast<signed char>(eax26)) {
                    edi21 = eax26;
                }
            } else {
                edi21 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4 + 4)));
            }
            fun_40e562(1, esi25, edi21);
            fun_407390(1, esi25, 48, edi21, esi25, edi21, edi27, esi10, ebx11, v28, v29, v30, v31, v9);
        }
    }
    if (v32) {
        v33->f70 = v33->f70 & 0xfffffffd;
    }
    return ebx20;
}

void fun_40e481(int32_t ecx, int32_t a2, struct s76* a3, void** a4, void** a5) {
    void* ebp6;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (!a2) {
        fun_40c7c7(reinterpret_cast<int32_t>(ebp6) + 8, a4, a5);
        a3->f0 = a2;
    } else {
        fun_40c739(reinterpret_cast<int32_t>(ebp6) + 0xfffffff8, a4, a5);
        a3->f0 = ecx;
        a3->f4 = ecx;
    }
    return;
}

void fun_40efd7(void** ecx, struct s154* a2, void** a3) {
    uint32_t edi4;
    uint32_t ebx5;
    void** eax6;
    uint32_t edi7;
    uint32_t edx8;
    uint32_t ecx9;
    uint32_t v10;
    uint32_t eax11;
    uint32_t eax12;
    uint32_t esi13;
    struct s154* ebx14;
    uint32_t edi15;
    uint32_t edi16;

    edi4 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a3 + 6));
    ebx5 = 0x80000000;
    eax6 = *reinterpret_cast<void***>(a3);
    edi7 = edi4 & 0x8000;
    edx8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) & 0xfffff;
    ecx9 = edi4 >> 4 & 0x7ff;
    v10 = edi7;
    if (!ecx9) {
        if (edx8 || eax6) {
            eax11 = ecx9 + 0x3c01;
            ebx5 = 0;
        } else {
            a2->f4 = a2->f4 & edx8;
            a2->f0 = a2->f0 & edx8;
            a2->f8 = *reinterpret_cast<int16_t*>(&edi7);
            goto addr_40f098_5;
        }
    } else {
        if (ecx9 == 0x7ff) {
            eax12 = 0x7fff;
            goto addr_40f04b_8;
        } else {
            eax11 = ecx9 + 0x3c00;
        }
    }
    eax12 = *reinterpret_cast<uint16_t*>(&eax11);
    addr_40f04b_8:
    esi13 = reinterpret_cast<unsigned char>(eax6) >> 21 | edx8 << 11 | ebx5;
    ebx14 = a2;
    ebx14->f4 = esi13;
    ebx14->f0 = reinterpret_cast<unsigned char>(eax6) << 11;
    if (reinterpret_cast<int32_t>(esi13) >= reinterpret_cast<int32_t>(0)) {
        edi15 = eax12;
        do {
            edi15 = edi15 + 0xffff;
            esi13 = esi13 + esi13 | ebx14->f0 >> 31;
            ebx14->f0 = ebx14->f0 + ebx14->f0;
        } while (!__intrinsic());
        edi7 = v10;
        eax12 = edi15;
        ebx14->f4 = esi13;
    }
    edi16 = edi7 | eax12;
    ebx14->f8 = *reinterpret_cast<int16_t*>(&edi16);
    addr_40f098_5:
    return;
}

void fun_407bdc(void** a1) {
    g419308 = a1;
    return;
}

void fun_40a3a9(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    g419ef8 = a1;
    g419efc = a1;
    g419f00 = a1;
    g419f04 = a1;
    return;
}

void fun_40a37e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t eax6;

    eax6 = reinterpret_cast<int32_t>(EncodePointer());
    g419ef0 = eax6;
    goto fun_40a34a;
}

void fun_409177(void** ecx) {
    fun_4092ea(ecx, 1);
    return;
}

void fun_404c39(void** ecx) {
    fun_4092ea(ecx, 1);
    return;
}

struct s163 {
    signed char[4] pad4;
    void** f4;
};

void** fun_40a27d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t esi7;
    void** v8;
    void** eax9;
    void** v10;
    void** eax11;
    void** ebx12;
    struct s163* edi13;
    void** ecx14;
    void** eax15;
    void** edi16;
    void** esi17;
    void** ebx18;
    void** ebp19;
    void** eax20;
    void** ecx21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** eax28;

    esi7 = DecodePointer;
    v8 = g419fec;
    eax9 = reinterpret_cast<void**>(esi7());
    v10 = g419fe8;
    eax11 = reinterpret_cast<void**>(esi7());
    ebx12 = eax11;
    if (reinterpret_cast<unsigned char>(ebx12) < reinterpret_cast<unsigned char>(eax9) || (edi13 = reinterpret_cast<struct s163*>(reinterpret_cast<unsigned char>(ebx12) - reinterpret_cast<unsigned char>(eax9)), ecx14 = reinterpret_cast<void**>(&edi13->f4), reinterpret_cast<unsigned char>(ecx14) < reinterpret_cast<unsigned char>(4))) {
        addr_40a32c_2:
        eax15 = reinterpret_cast<void**>(0);
    } else {
        eax20 = fun_40bfaa(ecx14, eax9, v10, v8, edi16, esi17, ebx18, eax9, ebp19, __return_address(), a2, a3, a4, a5, a6);
        ecx21 = eax9;
        if (reinterpret_cast<unsigned char>(eax20) >= reinterpret_cast<unsigned char>(&edi13->f4)) {
            addr_40a30d_4:
            eax22 = reinterpret_cast<void**>(EncodePointer(ecx21, a2));
            *reinterpret_cast<void***>(ebx12) = eax22;
            eax23 = reinterpret_cast<void**>(EncodePointer(ebx12 + 4, a2));
            g419fe8 = eax23;
            eax15 = a2;
        } else {
            eax24 = reinterpret_cast<void**>(0x800);
            if (reinterpret_cast<unsigned char>(eax20) < reinterpret_cast<unsigned char>(0x800)) {
                eax24 = eax20;
            }
            eax25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax24) + reinterpret_cast<unsigned char>(eax20));
            if (reinterpret_cast<unsigned char>(eax25) < reinterpret_cast<unsigned char>(eax20)) 
                goto addr_40a2e7_8;
            eax26 = fun_408fea(ecx21, eax9, eax25, v10, v8, edi16, esi17, ebx18);
            ecx21 = eax25;
            if (eax26) 
                goto addr_40a2fb_10;
            addr_40a2e7_8:
            eax27 = eax20 + 16;
            if (reinterpret_cast<unsigned char>(eax27) < reinterpret_cast<unsigned char>(eax20)) 
                goto addr_40a32c_2;
            eax26 = fun_408fea(ecx21, eax9, eax27, v10, v8, edi16, esi17, ebx18);
            ecx21 = eax27;
            if (!eax26) 
                goto addr_40a32c_2; else 
                goto addr_40a2fb_10;
        }
    }
    return eax15;
    addr_40a2fb_10:
    ebx12 = eax26 + (reinterpret_cast<int32_t>(edi13) >> 2) * 4;
    eax28 = reinterpret_cast<void**>(EncodePointer(ecx21, eax26));
    g419fec = eax28;
    goto addr_40a30d_4;
}

void fun_40a277(void** ecx) {
    fun_406e72(ecx);
    return;
}

void fun_4088e8(void** ecx) {
    fun_4092ea(ecx, 13);
    return;
}

struct s164 {
    uint32_t f0;
    unsigned char f4;
    signed char[3] pad8;
    int32_t f8;
    void** fc;
};

struct s165 {
    signed char[2048] pad2048;
    uint32_t f800;
};

struct s166 {
    signed char[2048] pad2048;
    void** f800;
};

struct s167 {
    signed char[4] pad4;
    signed char f4;
};

void** fun_409a55(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** esi12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t eax15;
    void** ecx16;
    int32_t ebp17;
    uint32_t ebx18;
    int32_t ebp19;
    struct s164* edi20;
    int32_t ebp21;
    int32_t ebp22;
    int32_t ebp23;
    int32_t ebp24;
    void** v25;
    int32_t ebp26;
    int32_t ebp27;
    void** eax28;
    int32_t ebp29;
    int32_t ebp30;
    void** tmp32_31;
    int32_t ebp32;
    int32_t ebp33;
    int32_t eax34;
    int32_t ebp35;

    v11 = reinterpret_cast<void**>(__return_address());
    fun_404590(0x4178f8, 24, v11);
    esi12 = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<void***>(ebp13 - 28) = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<uint32_t*>(ebp14 - 36) = 0;
    eax15 = fun_409208(ecx, 11, 0x4178f8, 24, v11, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    ecx16 = reinterpret_cast<void**>(11);
    if (eax15) {
        fun_409180(11, 11, 0x4178f8, 24, v11, a2, a3, a4, a5, a6);
        ecx16 = reinterpret_cast<void**>(11);
        *reinterpret_cast<uint32_t*>(ebp17 - 4) = 0;
        ebx18 = 0;
        while (*reinterpret_cast<uint32_t*>(ebp19 - 40) = ebx18, reinterpret_cast<int32_t>(ebx18) < reinterpret_cast<int32_t>(64)) {
            edi20 = *reinterpret_cast<struct s164**>(ebx18 * 4 + 0x4191d0);
            if (!edi20) 
                goto addr_409b65_5;
            while (*reinterpret_cast<struct s164**>(ebp21 - 32) = edi20, reinterpret_cast<uint32_t>(edi20) < reinterpret_cast<uint32_t>(&(*reinterpret_cast<struct s165**>(ebx18 * 4 + 0x4191d0))->f800)) {
                if (!(edi20->f4 & 1)) {
                    if (!edi20->f8) {
                        fun_409180(ecx16, 10, 0x4178f8, 24, v11, a2, a3, a4, a5, a6);
                        ecx16 = reinterpret_cast<void**>(10);
                        *reinterpret_cast<int32_t*>(ebp22 - 4) = 1;
                        if (!edi20->f8) {
                            fun_407e10(10, &edi20->fc, 0xfa0, 0, 0x4178f8, 24, v11, a2, a3, a4);
                            edi20->f8 = edi20->f8 + 1;
                        }
                        *reinterpret_cast<uint32_t*>(ebp23 - 4) = 0;
                        fun_409b2d(10);
                    }
                    if (!*reinterpret_cast<int32_t*>(ebp24 - 36)) {
                        v25 = reinterpret_cast<void**>(&edi20->fc);
                        EnterCriticalSection(ecx16, v25);
                        if (!(edi20->f4 & 1)) {
                            if (!*reinterpret_cast<int32_t*>(ebp26 - 36)) 
                                goto addr_409b3d_15;
                        } else {
                            LeaveCriticalSection(ecx16, &edi20->fc, v25);
                        }
                    }
                }
                edi20 = reinterpret_cast<struct s164*>(reinterpret_cast<uint32_t>(edi20) + 64);
            }
            addr_409b5a_18:
            if (!reinterpret_cast<int1_t>(esi12 == 0xffffffff)) 
                break;
            ++ebx18;
            continue;
            addr_409b3d_15:
            edi20->f4 = 1;
            edi20->f0 = 0xffffffff;
            esi12 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edi20) - *reinterpret_cast<uint32_t*>(ebx18 * 4 + 0x4191d0)) >> 6) + (ebx18 << 5));
            *reinterpret_cast<void***>(ebp27 - 28) = esi12;
            goto addr_409b5a_18;
        }
        goto addr_409bde_20;
        addr_409b65_5:
        eax28 = fun_408f5b(ecx16, 32, 64, 0x4178f8, 24, v11, a2);
        ecx16 = eax28;
        *reinterpret_cast<void***>(ebp29 - 32) = ecx16;
        if (!ecx16) {
            addr_409bde_20:
            *reinterpret_cast<int32_t*>(ebp30 - 4) = -2;
            fun_409bf5(ecx16);
        } else {
            *reinterpret_cast<void***>(ebx18 * 4 + 0x4191d0) = ecx16;
            tmp32_31 = g419ff8 + 32;
            g419ff8 = tmp32_31;
            while (reinterpret_cast<unsigned char>(ecx16) < reinterpret_cast<unsigned char>(&(*reinterpret_cast<struct s166**>(ebx18 * 4 + 0x4191d0))->f800)) {
                *reinterpret_cast<void***>(ecx16 + 4) = reinterpret_cast<void**>(0xa00);
                *reinterpret_cast<void***>(ecx16) = reinterpret_cast<void**>(0xffffffff);
                *reinterpret_cast<void***>(ecx16 + 8) = reinterpret_cast<void**>(0);
                ecx16 = ecx16 + 64;
                *reinterpret_cast<void***>(ebp32 - 32) = ecx16;
            }
            esi12 = reinterpret_cast<void**>(ebx18 << 5);
            *reinterpret_cast<void***>(ebp33 - 28) = esi12;
            (*reinterpret_cast<struct s167**>((reinterpret_cast<signed char>(esi12) >> 5) * 4 + 0x4191d0))->f4 = 1;
            eax34 = fun_4099c7(0, esi12, 0x4178f8, 24, v11, a2);
            ecx16 = esi12;
            if (eax34) 
                goto addr_409bde_20; else 
                goto addr_409bd8_25;
        }
    }
    fun_4045d5(ecx16, 0x4178f8, 24, v11, a2);
    goto 0x4178f8;
    addr_409bd8_25:
    *reinterpret_cast<void***>(ebp35 - 28) = reinterpret_cast<void**>(0xffffffff);
    goto addr_409bde_20;
}

int32_t fun_40a39c() {
    int32_t v1;

    v1 = g419f00;
    DecodePointer();
    goto v1;
}

struct s168 {
    signed char[132] pad132;
    signed char** f84;
};

struct s169 {
    signed char[112] pad112;
    uint32_t f70;
};

void fun_40e3e9(struct s75* a1, void** a2) {
    void** edi3;
    void** v4;
    void** v5;
    struct s75* edx6;
    struct s168* edi7;
    struct s168* v8;
    signed char cl9;
    signed char al10;
    signed char* edx11;
    signed char v12;
    struct s169* v13;
    signed char* esi14;
    signed char al15;

    fun_402d4b(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff0, a2, edi3, v4, v5);
    edx6 = a1;
    edi7 = v8;
    cl9 = edx6->f0;
    if (cl9) {
        al10 = **edi7->f84;
        do {
            if (cl9 == al10) 
                break;
            edx6 = reinterpret_cast<struct s75*>(&edx6->f1);
            cl9 = edx6->f0;
        } while (cl9);
    }
    edx11 = &edx6->f1;
    if (!edx6->f0) {
        addr_40e457_6:
        if (v12) {
            v13->f70 = v13->f70 & 0xfffffffd;
        }
    } else {
        while (*edx11 && (*edx11 != 0x65 && *edx11 != 69)) {
            ++edx11;
        }
        esi14 = edx11;
        do {
            --edx11;
        } while (*edx11 == 48);
        if (*edx11 != **edi7->f84) 
            goto addr_40e44c_14; else 
            goto addr_40e44b_15;
    }
    return;
    do {
        addr_40e44c_14:
        al15 = *esi14;
        ++edx11;
        ++esi14;
        *edx11 = al15;
    } while (al15);
    goto addr_40e457_6;
    addr_40e44b_15:
    --edx11;
    goto addr_40e44c_14;
}

struct s170 {
    signed char[132] pad132;
    unsigned char** f84;
};

struct s171 {
    signed char[112] pad112;
    uint32_t f70;
};

void fun_40e4d4(struct s77* a1, void** a2) {
    void** ecx3;
    void** v4;
    void** esi5;
    void** v6;
    void** v7;
    struct s77* esi8;
    void** v9;
    void** eax10;
    int1_t zf11;
    void** eax12;
    void** v13;
    void** eax14;
    unsigned char cl15;
    struct s170* v16;
    unsigned char* esi17;
    unsigned char al18;
    unsigned char v19;
    struct s171* v20;

    ecx3 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff0);
    v4 = esi5;
    fun_402d4b(ecx3, a2, v4, v6, v7);
    esi8 = a1;
    v9 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(esi8->f0)));
    eax10 = fun_40c5d4(ecx3, v9, v4);
    zf11 = reinterpret_cast<int1_t>(eax10 == 0x65);
    while (!zf11) {
        esi8 = reinterpret_cast<struct s77*>(&esi8->f1);
        v9 = reinterpret_cast<void**>(static_cast<uint32_t>(esi8->f0));
        eax12 = fun_408d80(v9, v9);
        zf11 = eax12 == 0;
    }
    v13 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(esi8->f0)));
    eax14 = fun_40c5d4(v9, v13, v4);
    if (reinterpret_cast<int1_t>(eax14 == 0x78)) {
        ++esi8;
    }
    cl15 = esi8->f0;
    esi8->f0 = **v16->f84;
    esi17 = &esi8->f1;
    do {
        al18 = *esi17;
        *esi17 = cl15;
        cl15 = al18;
        ++esi17;
    } while (*esi17);
    if (v19 != *esi17) {
        v20->f70 = v20->f70 & 0xfffffffd;
    }
    return;
}

struct s172 {
    signed char[1] pad1;
    signed char f1;
};

struct s173 {
    signed char[1] pad1;
    signed char f1;
};

struct s174 {
    signed char[2] pad2;
    signed char f2;
};

struct s175 {
    signed char[2] pad2;
    signed char f2;
};

struct s176 {
    signed char[3] pad3;
    int32_t f3;
};

struct s177 {
    signed char[3] pad3;
    int32_t f3;
};

void fun_405e9c(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    struct s172* edi6;
    struct s173* esi7;
    uint32_t ecx8;
    struct s174* edi9;
    struct s175* esi10;
    int32_t* esi11;
    struct s176* esi12;
    int32_t* edi13;
    struct s177* edi14;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    edi6->f1 = esi7->f1;
    ecx8 = ecx >> 2;
    edi9->f2 = esi10->f2;
    esi11 = &esi12->f3;
    edi13 = &edi14->f3;
    if (ecx8 < 8) 
        goto 0x405e88;
    while (ecx8) {
        --ecx8;
        *edi13 = *esi11;
        ++edi13;
        ++esi11;
    }
    switch (edx2) {
    case 3:
        goto 0x405fb0;
    case 2:
        goto 0x405f9c;
    case 1:
        goto 0x405f90;
    case 0:
        goto 0x405f88;
    }
}

struct s178 {
    signed char[3] pad3;
    signed char f3;
};

struct s179 {
    signed char[3] pad3;
    signed char f3;
};

void fun_406028(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s178* edi4;
    struct s179* esi5;
    int32_t* esi6;
    void* esi7;
    uint32_t ecx8;
    int32_t* edi9;
    void* edi10;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    esi6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi7) - 1);
    ecx8 = ecx >> 2;
    edi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi10) - 1);
    if (ecx8 < 8) 
        goto 0x405ff0;
    while (ecx8) {
        --ecx8;
        *edi9 = *esi6;
        --edi9;
        --esi6;
    }
    switch (edx2) {
    case 3:
        goto 0x406150;
    case 2:
        goto 0x40613c;
    case 1:
        goto 0x40612c;
    case 0:
        goto 0x406124;
    }
}

void fun_4060c8(int32_t ecx) {
    void* edi2;
    void* esi3;
    void* edi4;
    void* esi5;
    void* edi6;
    void* esi7;
    void* edi8;
    void* esi9;
    void* edi10;
    void* esi11;
    void* edi12;
    void* esi13;
    void* edi14;
    void* esi15;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi2) + ecx * 4 + 28) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi3) + ecx * 4 + 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi4) + ecx * 4 + 24) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi5) + ecx * 4 + 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi6) + ecx * 4 + 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi7) + ecx * 4 + 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi8) + ecx * 4 + 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi9) + ecx * 4 + 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi10) + ecx * 4 + 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi11) + ecx * 4 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi12) + ecx * 4 + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi13) + ecx * 4 + 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi14) + ecx * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi15) + ecx * 4 + 4);
}

void** fun_40daec(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6) {
    void** eax7;

    eax7 = fun_40db0d(a1, a2, a3, a4, a5, a6, 0);
    return eax7;
}

struct s180 {
    signed char[1] pad1;
    signed char f1;
};

struct s181 {
    signed char[1] pad1;
    signed char f1;
};

struct s182 {
    signed char[2] pad2;
    signed char f2;
};

struct s183 {
    signed char[2] pad2;
    signed char f2;
};

struct s184 {
    signed char[3] pad3;
    int32_t f3;
};

struct s185 {
    signed char[3] pad3;
    int32_t f3;
};

void fun_40e9fc(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    struct s180* edi6;
    struct s181* esi7;
    uint32_t ecx8;
    struct s182* edi9;
    struct s183* esi10;
    int32_t* esi11;
    struct s184* esi12;
    int32_t* edi13;
    struct s185* edi14;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    edi6->f1 = esi7->f1;
    ecx8 = ecx >> 2;
    edi9->f2 = esi10->f2;
    esi11 = &esi12->f3;
    edi13 = &edi14->f3;
    if (ecx8 < 8) 
        goto 0x40e9e8;
    while (ecx8) {
        --ecx8;
        *edi13 = *esi11;
        ++edi13;
        ++esi11;
    }
    switch (edx2) {
    case 3:
        goto 0x40eb10;
    case 2:
        goto 0x40eafc;
    case 1:
        goto 0x40eaf0;
    case 0:
        goto 0x40eae8;
    }
}

struct s186 {
    signed char[3] pad3;
    signed char f3;
};

struct s187 {
    signed char[3] pad3;
    signed char f3;
};

void fun_40eb88(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s186* edi4;
    struct s187* esi5;
    int32_t* esi6;
    void* esi7;
    uint32_t ecx8;
    int32_t* edi9;
    void* edi10;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    esi6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi7) - 1);
    ecx8 = ecx >> 2;
    edi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi10) - 1);
    if (ecx8 < 8) 
        goto 0x40eb50;
    while (ecx8) {
        --ecx8;
        *edi9 = *esi6;
        --edi9;
        --esi6;
    }
    switch (edx2) {
    case 3:
        goto 0x40ecb0;
    case 2:
        goto 0x40ec9c;
    case 1:
        goto 0x40ec8c;
    case 0:
        goto 0x40ec84;
    }
}

void fun_40ec28(int32_t ecx) {
    void* edi2;
    void* esi3;
    void* edi4;
    void* esi5;
    void* edi6;
    void* esi7;
    void* edi8;
    void* esi9;
    void* edi10;
    void* esi11;
    void* edi12;
    void* esi13;
    void* edi14;
    void* esi15;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi2) + ecx * 4 + 28) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi3) + ecx * 4 + 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi4) + ecx * 4 + 24) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi5) + ecx * 4 + 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi6) + ecx * 4 + 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi7) + ecx * 4 + 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi8) + ecx * 4 + 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi9) + ecx * 4 + 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi10) + ecx * 4 + 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi11) + ecx * 4 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi12) + ecx * 4 + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi13) + ecx * 4 + 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi14) + ecx * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi15) + ecx * 4 + 4);
}

struct s188 {
    signed char[71] pad71;
    unsigned char f47;
};

void fun_40eead(int32_t ecx) {
    unsigned char ah2;
    struct s188* ebx3;
    int32_t eax4;

    if (ah2 < ebx3->f47) {
    }
    if (eax4 + 1) 
        goto 0x40eea8; else 
        goto "???";
}

void fun_40fe80() {
    __asm__("hlt ");
}

void fun_40ff48() {
    uint32_t eax1;
    unsigned char al2;
    uint32_t* esp3;
    uint32_t ecx4;
    uint32_t edx5;
    uint32_t eax6;
    int32_t ebx7;
    uint32_t eax8;
    int32_t ebx9;
    int32_t esi10;

    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al2 | 0x8b) | 51);
    if (*reinterpret_cast<signed char*>(&eax1) < reinterpret_cast<signed char>(0)) {
        esp3 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(__return_address()) + 1 + 4 - 4);
        *esp3 = 16;
        ecx4 = *esp3;
    }
    if (eax1 & 0x200) {
        ecx4 = ecx4 | 8;
    }
    if (eax1 & 0x400) {
        ecx4 = ecx4 | 4;
    }
    if (eax1 & 0x800) {
        ecx4 = ecx4 | 2;
    }
    if (eax1 & 0x1000) {
        ecx4 = ecx4 | 1;
    }
    if (eax1 & 0x100) {
        ecx4 = ecx4 | 0x80000;
    }
    edx5 = eax1 & 0x6000;
    if (edx5) {
        if (edx5 == 0x2000) {
            ecx4 = ecx4 | 0x100;
        } else {
            if (edx5 == 0x4000) {
                ecx4 = ecx4 | 0x200;
            } else {
                if (edx5 == 0x6000) {
                    ecx4 = ecx4 | 0x300;
                }
            }
        }
    }
    eax6 = (eax1 & 0x8040) - ebx7;
    if (!eax6) {
        ecx4 = ecx4 | 0x2000000;
    } else {
        eax8 = eax6 - 0x7fc0;
        if (!eax8) {
            ecx4 = ecx4 | 0x3000000;
        } else {
            if (!(eax8 - ebx9)) {
                ecx4 = ecx4 | 0x1000000;
            }
        }
    }
    if ((ecx4 ^ reinterpret_cast<uint32_t>(esi10 + 1)) & 0x8031f) {
    }
    goto 0x410004;
}

void fun_4100cc() {
    int32_t ebp1;
    int32_t ebp2;

    if (***reinterpret_cast<int32_t***>(ebp1 - 20) == 0xc0000005 || ***reinterpret_cast<int32_t***>(ebp1 - 20) == 0xc000001d) {
        goto ebp2;
    } else {
        goto ebp2;
    }
}

void fun_4100fc() {
}

void fun_410105() {
    int32_t ebx1;

    goto ebx1;
}

void fun_4017e5() {
    goto 0x4017f0;
}

void** fun_402aac(void** a1) {
    void** ecx2;
    int32_t ebp3;
    void** eax4;
    int32_t ebp5;
    void** eax6;

    ecx2 = *reinterpret_cast<void***>(ebp3 - 20);
    eax4 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx2));
    *reinterpret_cast<void***>(ebp5 - 32) = eax4;
    eax6 = fun_40746f(eax4, ecx2, __return_address(), a1);
    return eax6;
}

/* (image base) */
int16_t image_base_;

int32_t g40003c;

int32_t GetCommandLineA = 0x17b5c;

void** g419304;

void fun_402b10(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** ecx8;
    int1_t zf9;
    int32_t eax10;
    int32_t ebx11;
    int32_t ebp12;
    int32_t eax13;
    int32_t eax14;
    int32_t ebp15;
    int32_t eax16;
    void*** eax17;
    void** eax18;
    uint32_t eax19;
    uint32_t eax20;
    void** eax21;
    void** ecx22;
    void** eax23;
    void** v24;
    void** v25;
    void** eax26;
    int32_t ebp27;
    int32_t ebp28;

    fun_407c29(__return_address());
    fun_404590(0x417680, 20, __return_address());
    fun_407bdc(1);
    ecx8 = reinterpret_cast<void**>(1);
    zf9 = image_base_ == 0x5a4d;
    if (!zf9 || ((eax10 = g40003c, *reinterpret_cast<int32_t*>(eax10 + 0x400000) != 0x4550) || (ecx8 = reinterpret_cast<void**>(0x10b), *reinterpret_cast<int16_t*>(eax10 + 0x400018) != 0x10b))) {
        ebx11 = 0;
    } else {
        ebx11 = 0;
        if (*reinterpret_cast<uint32_t*>(eax10 + 0x400074) > 14) {
            *reinterpret_cast<unsigned char*>(&ebx11) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int32_t*>(eax10 + 0x4000e8));
        }
    }
    *reinterpret_cast<int32_t*>(ebp12 - 28) = ebx11;
    eax13 = fun_4071d8(ecx8);
    if (!eax13) {
        fun_402ae9(ecx8, 28, 0x417680, 20, __return_address(), a1, a2, a3, a4, a5, a6);
        ecx8 = reinterpret_cast<void**>(28);
    }
    eax14 = fun_407839(ecx8, 0x417680, 20, __return_address(), a1);
    if (!eax14) {
        fun_402ae9(ecx8, 16, 0x417680, 20, __return_address(), a1, a2, a3, a4, a5, a6);
        ecx8 = reinterpret_cast<void**>(16);
    }
    fun_407cc5(ecx8);
    *reinterpret_cast<uint32_t*>(ebp15 - 4) = 0;
    eax16 = fun_405830(ecx8, 0x417680, 20, __return_address(), a1, a2);
    if (eax16 < 0) {
        fun_402ae9(ecx8, 27, 0x417680, 20, __return_address(), a1, a2, a3, a4, a5, a6);
        ecx8 = reinterpret_cast<void**>(27);
    }
    eax17 = reinterpret_cast<void***>(GetCommandLineA(ecx8));
    g41b008 = eax17;
    eax18 = fun_407d05(ecx8);
    g4191c0 = eax18;
    eax19 = fun_4078cc(ecx8, 0x417680, 20, __return_address(), a1, a2, a3, a4);
    if (reinterpret_cast<int32_t>(eax19) < reinterpret_cast<int32_t>(0)) {
        fun_406d07(ecx8, 8, 0x417680, 20, __return_address(), a1, a2, a3, a4, a5, a6);
        ecx8 = reinterpret_cast<void**>(8);
    }
    eax20 = fun_407afb(ecx8, 0x417680, 20, __return_address(), a1, a2, a3, a4, a5, a6, a7);
    if (reinterpret_cast<int32_t>(eax20) < reinterpret_cast<int32_t>(0)) {
        fun_406d07(ecx8, 9, 0x417680, 20, __return_address(), a1, a2, a3, a4, a5, a6);
        ecx8 = reinterpret_cast<void**>(9);
    }
    eax21 = fun_406d41(ecx8, 1, 0x417680, 20, __return_address());
    ecx22 = reinterpret_cast<void**>(1);
    if (eax21) {
        fun_406d07(1, eax21, 0x417680, 20, __return_address(), a1, a2, a3, a4, a5, a6);
        ecx22 = eax21;
    }
    eax23 = g4192e4;
    g419304 = eax23;
    v24 = g4192dc;
    v25 = g4192d8;
    eax26 = fun_401a00(ecx22, v25, v24, eax23);
    *reinterpret_cast<void***>(ebp27 - 36) = eax26;
    if (!ebx11) {
        fun_406faa(ecx22, eax26);
    }
    fun_406d32(ecx22, 0x417680, 20, __return_address());
    *reinterpret_cast<int32_t*>(ebp28 - 4) = -2;
    fun_4045d5(ecx22, 0x417680, 20, __return_address(), a1);
    goto 0x417680;
}

void fun_404303() {
}

struct s189 {
    signed char[24] pad24;
    void** f18;
    signed char[3] pad28;
    void** f1c;
    signed char[11] pad40;
    void** f28;
};

void** fun_404866(struct s189* a1) {
    void** v2;
    void** v3;
    void** v4;
    void** eax5;

    v2 = a1->f1c;
    v3 = a1->f18;
    v4 = a1->f28;
    eax5 = fun_404790(v4, v3, v2);
    return eax5;
}

void fun_404c33() {
}

struct s190 {
    signed char[1] pad1;
    signed char f1;
};

struct s191 {
    signed char[1] pad1;
    signed char f1;
};

struct s192 {
    signed char[2] pad2;
    int32_t f2;
};

struct s193 {
    signed char[2] pad2;
    int32_t f2;
};

void fun_405ec5(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    uint32_t ecx6;
    struct s190* edi7;
    struct s191* esi8;
    int32_t* esi9;
    struct s192* esi10;
    int32_t* edi11;
    struct s193* edi12;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    ecx6 = ecx >> 2;
    edi7->f1 = esi8->f1;
    esi9 = &esi10->f2;
    edi11 = &edi12->f2;
    if (ecx6 < 8) 
        goto 0x405e88;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        ++edi11;
        ++esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x405fb0;
    case 2:
        goto 0x405f9c;
    case 1:
        goto 0x405f90;
    case 0:
        goto 0x405f88;
    }
}

struct s194 {
    signed char[1] pad1;
    int32_t f1;
};

struct s195 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_405eec(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    int32_t* esi6;
    struct s194* esi7;
    uint32_t ecx8;
    int32_t* edi9;
    struct s195* edi10;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    esi6 = &esi7->f1;
    ecx8 = ecx >> 2;
    edi9 = &edi10->f1;
    if (ecx8 < 8) 
        goto 0x405e88;
    while (ecx8) {
        --ecx8;
        *edi9 = *esi6;
        ++edi9;
        ++esi6;
    }
    switch (edx2) {
    case 3:
        goto 0x405fb0;
    case 2:
        goto 0x405f9c;
    case 1:
        goto 0x405f90;
    case 0:
        goto 0x405f88;
    }
}

void fun_405f09(int32_t ecx) {
}

void fun_405f76() {
}

void fun_405fee() {
}

struct s196 {
    signed char[3] pad3;
    signed char f3;
};

struct s197 {
    signed char[3] pad3;
    signed char f3;
};

struct s198 {
    signed char[2] pad2;
    signed char f2;
};

struct s199 {
    signed char[2] pad2;
    signed char f2;
};

void fun_406049(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s196* edi4;
    struct s197* esi5;
    uint32_t ecx6;
    struct s198* edi7;
    struct s199* esi8;
    int32_t* esi9;
    void* esi10;
    int32_t* edi11;
    void* edi12;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    ecx6 = ecx >> 2;
    edi7->f2 = esi8->f2;
    esi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) - 2);
    edi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi12) - 2);
    if (ecx6 < 8) 
        goto 0x405ff0;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        --edi11;
        --esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x406150;
    case 2:
        goto 0x40613c;
    case 1:
        goto 0x40612c;
    case 0:
        goto 0x406124;
    }
}

struct s200 {
    signed char[3] pad3;
    signed char f3;
};

struct s201 {
    signed char[3] pad3;
    signed char f3;
};

struct s202 {
    signed char[2] pad2;
    signed char f2;
};

struct s203 {
    signed char[2] pad2;
    signed char f2;
};

struct s204 {
    signed char[1] pad1;
    signed char f1;
};

struct s205 {
    signed char[1] pad1;
    signed char f1;
};

void fun_406074(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s200* edi4;
    struct s201* esi5;
    struct s202* edi6;
    struct s203* esi7;
    uint32_t ecx8;
    struct s204* edi9;
    struct s205* esi10;
    int32_t* esi11;
    void* esi12;
    int32_t* edi13;
    void* edi14;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    edi6->f2 = esi7->f2;
    ecx8 = ecx >> 2;
    edi9->f1 = esi10->f1;
    esi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi12) - 3);
    edi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi14) - 3);
    if (ecx8 < 8) 
        goto 0x405ff0;
    while (ecx8) {
        --ecx8;
        *edi13 = *esi11;
        --edi13;
        --esi11;
    }
    switch (edx2) {
    case 3:
        goto 0x406150;
    case 2:
        goto 0x40613c;
    case 1:
        goto 0x40612c;
    case 0:
        goto 0x406124;
    }
}

void fun_4060a5(int32_t ecx) {
}

void fun_406112() {
}

void fun_407821() {
}

void fun_407ce5() {
    int32_t* esi1;
    int32_t eax2;

    esi1 = reinterpret_cast<int32_t*>(0x4175b8);
    while (reinterpret_cast<uint32_t>(esi1) < 0x4175b8) {
        eax2 = *esi1;
        if (eax2) {
            eax2();
        }
        ++esi1;
    }
    return;
}

int32_t fun_409819() {
    int32_t ecx1;
    int32_t ebp2;

    ecx1 = 0;
    *reinterpret_cast<unsigned char*>(&ecx1) = reinterpret_cast<uint1_t>(***reinterpret_cast<int32_t***>(ebp2 - 20) == 0xc0000005);
    return ecx1;
}

struct s206 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_409890(struct s206* a1) {
    fun_41011e();
    goto a1->f4;
}

int32_t fun_40a36a() {
    return 1;
}

void fun_40a53d() {
}

void fun_40a9b9(int32_t ecx) {
}

void fun_40b40d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int1_t zf7;
    int32_t ebp8;
    void** eax9;
    int32_t ebp10;

    fun_404590(0x4179c0, 8, __return_address());
    zf7 = reinterpret_cast<int1_t>(image_base_ == 0x418be0);
    if (!zf7) {
        fun_409180(ecx, 12, 0x4179c0, 8, __return_address(), a2, a3, a4, a5, a6);
        *reinterpret_cast<uint32_t*>(ebp8 - 4) = 0;
        eax9 = fun_408549(12, 0x418bdc, 0x418be0);
        ecx = reinterpret_cast<void**>(0x418be0);
        image_base_ = eax9;
        *reinterpret_cast<int32_t*>(ebp10 - 4) = -2;
        fun_40b456(0x418be0);
    }
    fun_4045d5(ecx, 0x4179c0, 8, __return_address(), a2);
    goto 0x4179c0;
}

void fun_40be4c() {
}

void fun_40e469(int32_t ecx, int32_t a2, struct s76* a3, void** a4) {
    fun_40e481(ecx, a2, a3, a4, 0);
    return;
}

struct s207 {
    signed char[1] pad1;
    signed char f1;
};

struct s208 {
    signed char[1] pad1;
    signed char f1;
};

struct s209 {
    signed char[2] pad2;
    int32_t f2;
};

struct s210 {
    signed char[2] pad2;
    int32_t f2;
};

void fun_40ea25(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    uint32_t ecx6;
    struct s207* edi7;
    struct s208* esi8;
    int32_t* esi9;
    struct s209* esi10;
    int32_t* edi11;
    struct s210* edi12;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    ecx6 = ecx >> 2;
    edi7->f1 = esi8->f1;
    esi9 = &esi10->f2;
    edi11 = &edi12->f2;
    if (ecx6 < 8) 
        goto 0x40e9e8;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        ++edi11;
        ++esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x40eb10;
    case 2:
        goto 0x40eafc;
    case 1:
        goto 0x40eaf0;
    case 0:
        goto 0x40eae8;
    }
}

struct s211 {
    signed char[1] pad1;
    int32_t f1;
};

struct s212 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_40ea4c(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    int32_t* esi6;
    struct s211* esi7;
    uint32_t ecx8;
    int32_t* edi9;
    struct s212* edi10;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    esi6 = &esi7->f1;
    ecx8 = ecx >> 2;
    edi9 = &edi10->f1;
    if (ecx8 < 8) 
        goto 0x40e9e8;
    while (ecx8) {
        --ecx8;
        *edi9 = *esi6;
        ++edi9;
        ++esi6;
    }
    switch (edx2) {
    case 3:
        goto 0x40eb10;
    case 2:
        goto 0x40eafc;
    case 1:
        goto 0x40eaf0;
    case 0:
        goto 0x40eae8;
    }
}

void fun_40ea69(int32_t ecx) {
}

void fun_40ead6() {
}

void fun_40eb4e() {
}

struct s213 {
    signed char[3] pad3;
    signed char f3;
};

struct s214 {
    signed char[3] pad3;
    signed char f3;
};

struct s215 {
    signed char[2] pad2;
    signed char f2;
};

struct s216 {
    signed char[2] pad2;
    signed char f2;
};

void fun_40eba9(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s213* edi4;
    struct s214* esi5;
    uint32_t ecx6;
    struct s215* edi7;
    struct s216* esi8;
    int32_t* esi9;
    void* esi10;
    int32_t* edi11;
    void* edi12;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    ecx6 = ecx >> 2;
    edi7->f2 = esi8->f2;
    esi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) - 2);
    edi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi12) - 2);
    if (ecx6 < 8) 
        goto 0x40eb50;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        --edi11;
        --esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x40ecb0;
    case 2:
        goto 0x40ec9c;
    case 1:
        goto 0x40ec8c;
    case 0:
        goto 0x40ec84;
    }
}

struct s217 {
    signed char[3] pad3;
    signed char f3;
};

struct s218 {
    signed char[3] pad3;
    signed char f3;
};

struct s219 {
    signed char[2] pad2;
    signed char f2;
};

struct s220 {
    signed char[2] pad2;
    signed char f2;
};

struct s221 {
    signed char[1] pad1;
    signed char f1;
};

struct s222 {
    signed char[1] pad1;
    signed char f1;
};

void fun_40ebd4(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s217* edi4;
    struct s218* esi5;
    struct s219* edi6;
    struct s220* esi7;
    uint32_t ecx8;
    struct s221* edi9;
    struct s222* esi10;
    int32_t* esi11;
    void* esi12;
    int32_t* edi13;
    void* edi14;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    edi6->f2 = esi7->f2;
    ecx8 = ecx >> 2;
    edi9->f1 = esi10->f1;
    esi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi12) - 3);
    edi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi14) - 3);
    if (ecx8 < 8) 
        goto 0x40eb50;
    while (ecx8) {
        --ecx8;
        *edi13 = *esi11;
        --edi13;
        --esi11;
    }
    switch (edx2) {
    case 3:
        goto 0x40ecb0;
    case 2:
        goto 0x40ec9c;
    case 1:
        goto 0x40ec8c;
    case 0:
        goto 0x40ec84;
    }
}

void fun_40ec05(int32_t ecx) {
}

void fun_40ec72() {
}

struct s223 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s224 {
    signed char[12] pad12;
    uint32_t fc;
};

void fun_40fe83() {
    uint32_t eax1;
    int32_t ebp2;
    uint32_t ecx3;
    uint32_t edx4;
    uint32_t edx5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t eax8;
    int32_t edi9;
    uint32_t edi10;
    struct s223* ebp11;
    uint32_t eax12;
    struct s224* ebp13;

    eax1 = *reinterpret_cast<uint32_t*>(ebp2 - 12);
    ecx3 = 0;
    if (*reinterpret_cast<signed char*>(&eax1) < 0) {
        ecx3 = 16;
    }
    if (eax1 & 0x200) {
        ecx3 = ecx3 | 8;
    }
    if (eax1 & 0x400) {
        ecx3 = ecx3 | 4;
    }
    if (eax1 & 0x800) {
        ecx3 = ecx3 | 2;
    }
    if (edx4 & eax1) {
        ecx3 = ecx3 | 1;
    }
    if (eax1 & 0x100) {
        ecx3 = ecx3 | 0x80000;
    }
    edx5 = eax1 & 0x6000;
    if (edx5) {
        if (edx5 == 0x2000) {
            ecx3 = ecx3 | 0x100;
        } else {
            if (edx5 == 0x4000) {
                ecx3 = ecx3 | 0x200;
            } else {
                if (edx5 == 0x6000) {
                    ecx3 = ecx3 | 0x300;
                }
            }
        }
    }
    eax6 = (eax1 & 0x8040) - 64;
    if (!eax6) {
        ecx3 = ecx3 | 0x2000000;
    } else {
        eax7 = eax6 - 0x7fc0;
        if (!eax7) {
            ecx3 = ecx3 | 0x3000000;
        } else {
            if (!(eax7 - 64)) {
                ecx3 = ecx3 | 0x1000000;
            }
        }
    }
    eax8 = reinterpret_cast<uint32_t>(~edi9) & ecx3 | edi10 & ebp11->f8;
    if (eax8 == ecx3) 
        goto 0x40ffeb;
    eax12 = fun_40fc60(eax8, __return_address());
    ebp13->fc = eax12;
    fun_4100a2(*reinterpret_cast<int16_t*>(&ecx3));
}

void fun_410107() {
}

void fun_4017e7() {
}

void fun_40198d(int32_t ecx) {
}

void fun_401e6b() {
}

struct s225 {
    void** f0;
    signed char[3] pad4;
    void* f4;
    void* f8;
    void* fc;
};

int32_t g419ffc;

void** fun_4045f0(void** a1, void** a2, void** a3) {
    void** v4;
    void** ebx5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    signed char v10;
    void** esi11;
    struct s225* edi12;
    void** v13;
    void** ecx14;
    void** v15;
    void** v16;
    void** v17;
    void** ecx18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void** v25;
    void* eax26;
    void** ecx27;
    void** eax28;
    void** ebx29;
    void** v30;
    int32_t eax31;
    int1_t sf32;
    void** ecx33;
    void** ecx34;
    int1_t zf35;
    uint32_t eax36;
    void** eax37;
    void** ecx38;
    void** ecx39;
    void** ecx40;

    v4 = ebx5;
    v6 = esi7;
    v8 = edi9;
    v10 = 0;
    esi11 = a2 + 16;
    edi12 = reinterpret_cast<struct s225*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 8)) ^ reinterpret_cast<unsigned char>(g4183f0));
    v13 = reinterpret_cast<void**>(1);
    if (edi12->f0 != 0xfffffffe) {
        ecx14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edi12->f4) + reinterpret_cast<unsigned char>(esi11) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(edi12->f0) + reinterpret_cast<unsigned char>(esi11)));
        fun_404f47(ecx14, v8, v6, v4, v15, v16, v17, 1);
    }
    ecx18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edi12->fc) + reinterpret_cast<unsigned char>(esi11) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(edi12->f8) + reinterpret_cast<unsigned char>(esi11)));
    fun_404f47(ecx18, v8, v6, v4, v19, v20, v21, 1);
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) & 0x66) {
        if (*reinterpret_cast<void***>(a2 + 12) == 0xfffffffe) {
            addr_40474f_5:
            return v13;
        } else {
            fun_4048cb(a2, esi11, 0x4183f0);
        }
    } else {
        v22 = a1;
        v23 = a3;
        *reinterpret_cast<void***>(a2 + 0xfffffffc) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffe8);
        eax24 = *reinterpret_cast<void***>(a2 + 12);
        v25 = eax24;
        if (eax24 == 0xfffffffe) 
            goto addr_40474f_5;
        do {
            eax26 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax24 + reinterpret_cast<unsigned char>(eax24) * 2) + 4);
            ecx27 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi12) + reinterpret_cast<uint32_t>(eax26) * 4 + 4);
            eax28 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi12) + reinterpret_cast<uint32_t>(eax26) * 4);
            ebx29 = *reinterpret_cast<void***>(eax28);
            v30 = eax28;
            if (!ecx27) {
                *reinterpret_cast<signed char*>(&ecx27) = v10;
            } else {
                eax31 = fun_404882(ecx27);
                *reinterpret_cast<signed char*>(&ecx27) = 1;
                v10 = 1;
                sf32 = eax31 < 0;
                if (sf32) 
                    goto addr_40470a_11;
                if (!(reinterpret_cast<uint1_t>(sf32) | reinterpret_cast<uint1_t>(eax31 == 0))) 
                    goto addr_40468e_13;
            }
            v25 = ebx29;
            eax24 = ebx29;
        } while (!reinterpret_cast<int1_t>(ebx29 == 0xfffffffe));
        goto addr_404704_15;
    }
    addr_40472b_16:
    if (edi12->f0 != 0xfffffffe) {
        ecx33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edi12->f4) + reinterpret_cast<unsigned char>(esi11) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(edi12->f0) + reinterpret_cast<unsigned char>(esi11)));
        fun_404f47(ecx33, v8, v6, v4, v22, v23, v30, v13);
    }
    ecx34 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edi12->fc) + reinterpret_cast<unsigned char>(esi11) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(edi12->f8) + reinterpret_cast<unsigned char>(esi11)));
    fun_404f47(ecx34, v8, v6, v4, v22, v23, v30, v13);
    goto addr_40474f_5;
    addr_404704_15:
    if (!*reinterpret_cast<signed char*>(&ecx27)) 
        goto addr_40474f_5;
    goto addr_40472b_16;
    addr_40470a_11:
    v13 = reinterpret_cast<void**>(0);
    goto addr_40472b_16;
    addr_40468e_13:
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a1) == 0xe06d7363) && ((zf35 = g419ffc == 0, !zf35) && (eax36 = fun_409790(ecx27, 0x419ffc), !!eax36))) {
        g419ffc(a1, 1);
    }
    fun_4048b2(a2);
    eax37 = a2;
    if (*reinterpret_cast<void***>(eax37 + 12) != v25) {
        fun_4048cb(eax37, esi11, 0x4183f0);
        eax37 = a2;
    }
    *reinterpret_cast<void***>(eax37 + 12) = ebx29;
    if (edi12->f0 != 0xfffffffe) {
        ecx38 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edi12->f4) + reinterpret_cast<unsigned char>(esi11) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(edi12->f0) + reinterpret_cast<unsigned char>(esi11)));
        fun_404f47(ecx38, v8, v6, v4, v22, v23, v30, 1);
    }
    ecx39 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edi12->fc) + reinterpret_cast<unsigned char>(esi11) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(edi12->f8) + reinterpret_cast<unsigned char>(esi11)));
    fun_404f47(ecx39, v8, v6, v4, v22, v23, v30, 1);
    ecx40 = *reinterpret_cast<void***>(v30 + 8);
    fun_404899(ecx40, v8, v6, v4, v22, v23, v30);
}

void fun_401f63() {
}

void fun_402075() {
}

void fun_402471() {
}

void fun_40264c() {
}

void fun_40294f() {
}

struct s226 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

struct s227 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[3] pad20;
    void** f14;
};

void fun_402ac0(void** ecx) {
    void*** esp2;
    int32_t ebp3;
    int32_t esi4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t ebp7;
    struct s226* esp8;
    struct s227* esp9;
    struct s226* esp10;

    esp2 = *reinterpret_cast<void****>(ebp3 - 24);
    esi4 = *reinterpret_cast<int32_t*>(ebp5 - 32);
    *reinterpret_cast<int32_t*>(ebp6 - 36) = esi4;
    if (!*reinterpret_cast<int32_t*>(ebp7 - 28)) {
        esp8 = reinterpret_cast<struct s226*>(esp2 - 4);
        esp8->f0 = esi4;
        esp9 = reinterpret_cast<struct s227*>(reinterpret_cast<int32_t>(esp8) - 4);
        esp9->f0 = 0x402ad5;
        fun_406dc5(ecx, esp9->f4, esp9->f8, esp9->fc, esp9->f10, esp9->f14);
        esp2 = &esp9->f4;
    }
    esp10 = reinterpret_cast<struct s226*>(esp2 - 4);
    esp10->f0 = 0x402ada;
    fun_406d23(ecx, esp10->f4, esp10->f8);
}

struct s228 {
    signed char[116] pad116;
    void** f74;
};

struct s229 {
    signed char[132] pad132;
    void*** f84;
};

struct s230 {
    signed char[112] pad112;
    uint32_t f70;
};

void** fun_402e75(void** a1, struct s17* a2, void** a3, void** a4) {
    void* ebp5;
    void** eax6;
    uint32_t v7;
    void** v8;
    void** ebx9;
    void** v10;
    void** edi11;
    struct s17* edi12;
    void** ebx13;
    void** v14;
    void** ecx15;
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
    void** eax31;
    int1_t zf32;
    void** v33;
    void** esi34;
    void** eax35;
    void** esi36;
    void** ecx37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** eax48;
    void** ecx49;
    void** edx50;
    void** ecx51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    int32_t v56;
    int32_t v57;
    int32_t v58;
    int32_t v59;
    void** eax60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** eax69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    int16_t v75;
    void** dl76;
    void** v77;
    uint32_t ecx78;
    struct s17* edi79;
    void* edx80;
    struct s17* v81;
    void** al82;
    void** v83;
    void** eax84;
    void** v85;
    int16_t v86;
    void** eax87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** al93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** eax98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    signed char bh104;
    void** v105;
    void** esi106;
    void** bl107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void* eax116;
    void** v117;
    void** eax118;
    void** cl119;
    struct s17* eax120;
    void** al121;
    struct s17* ecx122;
    struct s17* ecx123;
    signed char v124;
    void** v125;
    void** esi126;
    void** v127;
    void** eax128;
    signed char v129;
    void** al130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    int16_t v138;
    void** edx139;
    uint32_t eax140;
    uint32_t eax141;
    uint32_t eax142;
    uint32_t eax143;
    signed char al144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** eax149;
    void** edi150;
    void** v151;
    void** eax152;
    void** v153;
    void** eax154;
    void* eax155;
    void** v156;
    void** eax157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** eax162;
    void** v163;
    void** eax164;
    void** ecx165;
    void** v166;
    void** v167;
    void** eax168;
    void** ecx169;
    void** v170;
    void** eax171;
    void** tmp32_172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** eax177;
    void** eax178;
    uint32_t edi179;
    uint32_t edi180;
    void** esi181;
    void** v182;
    void** v183;
    void** v184;
    void** v185;
    uint1_t cf186;
    void** esi187;
    void** v188;
    void** v189;
    void** v190;
    void** v191;
    void** edi192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** eax197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** eax202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** eax207;
    void** eax208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    void** v213;
    void** esi214;
    void** v215;
    void** v216;
    void** v217;
    void** v218;
    void** edi219;
    void** eax220;
    void** ecx221;
    void** v222;
    void** v223;
    void** v224;
    void** v225;
    void** eax226;
    uint32_t ecx227;
    void** v228;
    void** eax229;
    void** ecx230;
    void** eax231;
    void** v232;
    void** v233;
    void** v234;
    void** v235;
    void** eax236;
    void** v237;
    struct s228* v238;
    void** eax239;
    void** v240;
    void** v241;
    void** v242;
    void** v243;
    void** v244;
    void** v245;
    void** v246;
    void** v247;
    void** v248;
    int32_t v249;
    int32_t v250;
    int32_t v251;
    int32_t v252;
    void** cl253;
    struct s17* v254;
    uint32_t esi255;
    uint32_t edi256;
    void* edx257;
    uint32_t ecx258;
    uint32_t ecx259;
    void* edx260;
    void** esi261;
    void** edi262;
    void** v263;
    void** v264;
    void** v265;
    void** v266;
    void** eax267;
    void** v268;
    void** eax269;
    void** eax270;
    int32_t* v271;
    void** v272;
    void*** v273;
    void*** v274;
    void** v275;
    void** v276;
    void** v277;
    void** v278;
    void** eax279;
    void** v280;
    struct s229* v281;
    void** v282;
    void** v283;
    void** v284;
    void** v285;
    void** v286;
    void** eax287;
    int32_t* v288;
    void** v289;
    void*** v290;
    void*** v291;
    void** v292;
    int32_t* v293;
    void** v294;
    void*** v295;
    void*** v296;
    void** v297;
    void** v298;
    void** v299;
    void** v300;
    void** eax301;
    void** v302;
    void** v303;
    void** edi304;
    void** v305;
    void** v306;
    void** v307;
    void** v308;
    int32_t* v309;
    void** v310;
    void*** v311;
    void*** v312;
    void** v313;
    void** v314;
    void** v315;
    void** v316;
    void** eax317;
    void* v318;
    int32_t v319;
    int32_t v320;
    void** v321;
    void** eax322;
    void** ecx323;
    void** v324;
    void** v325;
    void** v326;
    void** v327;
    void** eax328;
    int32_t* v329;
    void** v330;
    void*** v331;
    void*** v332;
    void** v333;
    void** v334;
    void** v335;
    void** v336;
    void** eax337;
    void** v338;
    int32_t* v339;
    void** v340;
    void*** v341;
    void*** v342;
    void** v343;
    void** v344;
    void** v345;
    void** v346;
    int32_t v347;
    int32_t v348;
    int32_t v349;
    int32_t v350;
    signed char v351;
    struct s230* v352;
    void** v353;
    void** v354;
    void** v355;
    void** v356;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax6 = g4183f0;
    v7 = reinterpret_cast<unsigned char>(eax6) ^ reinterpret_cast<uint32_t>(ebp5);
    v8 = ebx9;
    v10 = edi11;
    edi12 = a2;
    ebx13 = reinterpret_cast<void**>(0);
    v14 = a4;
    ecx15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe7c);
    v16 = a1;
    v17 = ecx15;
    v18 = reinterpret_cast<void**>(0);
    v19 = reinterpret_cast<void**>(0);
    v20 = reinterpret_cast<void**>(0);
    v21 = reinterpret_cast<void**>(0);
    v22 = reinterpret_cast<void**>(0);
    if (!edi12 || !a1) {
        eax31 = fun_404026(ecx15, v10, v8, v23, v24, v25, v26, 0, v14, 0, v27, v28, 0x15e, 0, v29, v30, 0);
        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(22);
        fun_402c77(ecx15);
    } else {
        zf32 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 64) == 0;
        v33 = esi34;
        if (!zf32) {
            addr_402f76_4:
            fun_402d4b(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe04, a3, v33, v10, v8);
            eax35 = edi12->f0;
            esi36 = reinterpret_cast<void**>(0);
            ecx37 = reinterpret_cast<void**>(0);
            v38 = reinterpret_cast<void**>(0);
            v39 = reinterpret_cast<void**>(0);
            v40 = reinterpret_cast<void**>(0);
            v41 = reinterpret_cast<void**>(0);
            if (!eax35) 
                goto addr_403f9e_5; else 
                goto addr_402faa_6;
        } else {
            eax48 = fun_4048e2(ecx15, a1, v33, v10, v8, v42, v43, v44, v45, 0, v14, 0, v46, v47, 0x15e);
            ecx49 = eax48;
            if (ecx49 == 0xffffffff || ecx49 == 0xfffffffe) {
                edx50 = reinterpret_cast<void**>(0x418500);
            } else {
                edx50 = reinterpret_cast<void**>(((reinterpret_cast<unsigned char>(ecx49) & 31) << 6) + reinterpret_cast<uint32_t>(*reinterpret_cast<void****>((reinterpret_cast<signed char>(eax48) >> 5) * 4 + 0x4191d0)));
            }
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx50 + 36)) & 0x7f) 
                goto addr_402f5e_11; else 
                goto addr_402f38_12;
        }
    }
    addr_403fb4_13:
    ecx51 = reinterpret_cast<void**>(v7 ^ reinterpret_cast<uint32_t>(ebp5));
    eax60 = fun_404f47(ecx51, v52, v53, v54, v55, v22, v14, v20, ecx51, v56, v57, v58, v59, v22, v14, v20);
    return eax60;
    addr_402f5e_11:
    eax69 = fun_404026(ecx49, v33, v10, v8, v61, v62, v63, v64, 0, v14, 0, v65, v66, 0x15e, 0, v67, v68);
    *reinterpret_cast<void***>(eax69) = reinterpret_cast<void**>(22);
    fun_402c77(ecx49);
    addr_403fb3_14:
    goto addr_403fb4_13;
    addr_402f38_12:
    if (ecx49 == 0xffffffff || ecx49 == 0xfffffffe) {
        ecx49 = reinterpret_cast<void**>(0x418500);
    } else {
        ecx49 = reinterpret_cast<void**>(((reinterpret_cast<unsigned char>(ecx49) & 31) << 6) + reinterpret_cast<uint32_t>(*reinterpret_cast<void****>((reinterpret_cast<signed char>(ecx49) >> 5) * 4 + 0x4191d0)));
    }
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx49 + 36)) & 0x80)) 
        goto addr_402f76_4; else 
        goto addr_402f5e_11;
    addr_403f68_18:
    fun_40815a(ecx37, ebx13, v70, v33, v10, v8, v71, v72, v73, v74, v22, v14, v20, v75);
    ecx37 = v70;
    goto addr_403f70_19;
    addr_403f3f_20:
    goto addr_403f70_19;
    addr_403f55_21:
    if (ebx13 == 0xffffffff) 
        goto addr_403f70_19;
    v70 = v16;
    goto addr_403f68_18;
    while (1) {
        addr_403962_23:
        dl76 = v77;
        goto addr_403968_24;
        addr_403949_25:
        ecx78 = reinterpret_cast<unsigned char>(edi79->f0);
        v77 = edi79->f0;
        edx80 = reinterpret_cast<void*>(ecx78 >> 3);
        ecx37 = reinterpret_cast<void**>(ecx78 & 7);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp5) + reinterpret_cast<uint32_t>(edx80) - 36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp5) + reinterpret_cast<uint32_t>(edx80) - 36) | reinterpret_cast<unsigned char>(1 << reinterpret_cast<unsigned char>(ecx37)));
        continue;
        while (1) {
            addr_403692_26:
            edi12 = v81;
            while (1) {
                while (1) {
                    al82 = v38;
                    while (1) {
                        esi36 = v39;
                        v38 = al82 + 1;
                        edi12 = reinterpret_cast<struct s17*>(&edi12->f1);
                        while (1) {
                            if (!reinterpret_cast<int1_t>(ebx13 == 0xffffffff)) 
                                goto addr_403f35_30;
                            if (!reinterpret_cast<int1_t>(edi12->f0 == 37)) 
                                goto addr_403f70_19;
                            if (!reinterpret_cast<int1_t>(edi12->f1 == 0x6e)) 
                                goto addr_403f70_19;
                            while (1) {
                                addr_403f35_30:
                                eax35 = edi12->f0;
                                if (!eax35) 
                                    goto addr_403f3f_20;
                                addr_402faa_6:
                                v83 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(eax35)));
                                eax84 = fun_408dab(ecx37, v83);
                                if (!eax84) 
                                    break;
                                v40 = esi36 - 1;
                                eax87 = fun_403fc4(v83, reinterpret_cast<uint32_t>(ebp5) + 0xfffffe64, v16, v33, v10, v8, v85, v86);
                                ecx37 = v16;
                                if (eax87 != 0xffffffff) {
                                    fun_40815a(ecx37, eax87, v16, v33, v10, v8, v88, v89, v90, v91, v22, v14, v20, v75);
                                    ecx37 = v16;
                                }
                                do {
                                    edi12 = reinterpret_cast<struct s17*>(&edi12->f1);
                                    v92 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(edi12->f0)));
                                    eax35 = fun_408dab(ecx37, v92);
                                    ecx37 = v92;
                                } while (eax35);
                                esi36 = v40;
                                v39 = esi36;
                            }
                            al93 = edi12->f0;
                            if (!reinterpret_cast<int1_t>(al93 == 37)) {
                                addr_403ece_38:
                                ++esi36;
                                v39 = esi36;
                                v40 = esi36;
                                eax98 = fun_402e53(37, v16, v33, v10, v8, v94, v95, v96, v97, v22, v14, v20, v75);
                                ebx13 = eax98;
                                eax35 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(edi12->f0)));
                                edi12 = reinterpret_cast<struct s17*>(&edi12->f1);
                                v21 = ebx13;
                                ecx37 = v16;
                                if (eax35 != ebx13) 
                                    goto addr_403f5d_39;
                            } else {
                                if (edi12->f1 != 37) 
                                    break;
                                if (!reinterpret_cast<int1_t>(al93 == 37)) 
                                    goto addr_403ece_38;
                                if (!reinterpret_cast<int1_t>(edi12->f1 == 37)) 
                                    goto addr_403ece_38; else 
                                    goto addr_403ecd_43;
                            }
                            v99 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx13)));
                            eax35 = fun_408e3d(ecx37, v99, v33, v10);
                            ecx37 = v99;
                            if (!eax35) 
                                continue;
                            eax35 = fun_402e53(ecx37, v16, v33, v10, v8, v100, v101, v102, v103, v22, v14, v20, v75);
                            ecx37 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(edi12->f0)));
                            edi12 = reinterpret_cast<struct s17*>(&edi12->f1);
                            if (ecx37 != eax35) 
                                goto addr_403f41_46;
                            v39 = esi36;
                            v40 = esi36;
                            continue;
                            addr_403ecd_43:
                            edi12 = reinterpret_cast<struct s17*>(&edi12->f1);
                            goto addr_403ece_38;
                        }
                        bh104 = 1;
                        v105 = reinterpret_cast<void**>(0);
                        esi106 = reinterpret_cast<void**>(0);
                        v77 = reinterpret_cast<void**>(0);
                        bl107 = reinterpret_cast<void**>(0);
                        v108 = reinterpret_cast<void**>(0);
                        v109 = reinterpret_cast<void**>(0);
                        v110 = reinterpret_cast<void**>(0);
                        v111 = reinterpret_cast<void**>(0);
                        v112 = reinterpret_cast<void**>(0);
                        v113 = reinterpret_cast<void**>(0);
                        v114 = reinterpret_cast<void**>(0);
                        v115 = reinterpret_cast<void**>(0);
                        do {
                            edi12 = reinterpret_cast<struct s17*>(&edi12->f1);
                            eax116 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(edi12->f0)));
                            v117 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax116)));
                            eax118 = fun_408d80(v117, v117);
                            if (eax118) {
                                ++v109;
                                esi106 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax116) + 0xffffffd0 + reinterpret_cast<unsigned char>(esi106) * 10);
                                goto addr_403088_51;
                            }
                            if (reinterpret_cast<int32_t>(eax116) > reinterpret_cast<int32_t>(78)) {
                                if (eax116 == 0x68) {
                                    bh104 = reinterpret_cast<signed char>(bh104 - 1);
                                    cl119 = v114 - 1;
                                } else {
                                    if (eax116 == 0x6c) {
                                        eax120 = reinterpret_cast<struct s17*>(&edi12->f1);
                                        if (!reinterpret_cast<int1_t>(eax120->f0 == 0x6c)) {
                                            bh104 = reinterpret_cast<signed char>(bh104 + 1);
                                            goto addr_4031ad_58;
                                        } else {
                                            edi12 = eax120;
                                            goto addr_403122_60;
                                        }
                                    } else {
                                        if (eax116 == 0x77) {
                                            addr_4031ad_58:
                                            cl119 = v114 + 1;
                                        } else {
                                            addr_403195_62:
                                            ++bl107;
                                            goto addr_403088_51;
                                        }
                                    }
                                }
                            } else {
                                if (eax116 == 78) 
                                    goto addr_403088_51;
                                if (eax116 == 42) 
                                    goto addr_403173_65; else 
                                    goto addr_4030f7_66;
                            }
                            v114 = cl119;
                            addr_4031bb_68:
                            al121 = v112;
                            continue;
                            addr_403122_60:
                            ++v115;
                            v18 = reinterpret_cast<void**>(0);
                            v19 = reinterpret_cast<void**>(0);
                            goto addr_403088_51;
                            addr_403173_65:
                            al121 = v112 + 1;
                            v112 = al121;
                            addr_40308e_69:
                            cl119 = v114;
                            continue;
                            addr_4030f7_66:
                            if (eax116 == 70) 
                                goto addr_403088_51;
                            if (eax116 != 73) 
                                goto addr_403101_71;
                            if (!reinterpret_cast<int1_t>(edi12->f1 == 54) || (ecx122 = edi12 + 1, !reinterpret_cast<int1_t>(ecx122->f0 == 52))) {
                                if (reinterpret_cast<int1_t>(edi12->f1 == 51) && (ecx123 = edi12 + 1, reinterpret_cast<int1_t>(ecx123->f0 == 50))) {
                                    edi12 = ecx123;
                                    goto addr_403088_51;
                                }
                                if (edi12->f1 == 100) {
                                    addr_403088_51:
                                    al121 = v112;
                                    goto addr_40308e_69;
                                } else {
                                    if (edi12->f1 == 0x69) {
                                        cl119 = v114;
                                        goto addr_4031bb_68;
                                    } else {
                                        if (edi12->f1 != 0x6f && edi12->f1 != 0x78) {
                                            if (!reinterpret_cast<int1_t>(edi12->f1 == 88)) 
                                                goto addr_403195_62;
                                            goto addr_403088_51;
                                        }
                                    }
                                }
                            } else {
                                edi12 = ecx122;
                                goto addr_403122_60;
                            }
                            addr_403101_71:
                            if (!reinterpret_cast<int1_t>(eax116 == 76)) 
                                goto addr_403195_62;
                            bh104 = reinterpret_cast<signed char>(bh104 + 1);
                            goto addr_403088_51;
                        } while (!bl107);
                        v124 = bh104;
                        ebx13 = v21;
                        v125 = esi106;
                        esi126 = v39;
                        v81 = edi12;
                        if (al121) {
                            v127 = reinterpret_cast<void**>(0);
                        } else {
                            v22 = v14;
                            eax128 = v14 + 4;
                            v14 = eax128;
                            v127 = *reinterpret_cast<void***>(eax128 + 0xfffffffc);
                        }
                        v129 = 0;
                        if (!cl119 && ((al130 = edi12->f0, al130 == 83) || (v114 = reinterpret_cast<void**>(0xff), reinterpret_cast<int1_t>(al130 == 67)))) {
                            v114 = reinterpret_cast<void**>(1);
                        }
                        ecx37 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(edi12->f0)) | 32);
                        v131 = ecx37;
                        if (ecx37 != 0x6e) {
                            if (ecx37 == 99 || ecx37 == 0x7b) {
                                v132 = v16;
                                ++esi126;
                                v39 = esi126;
                                v40 = esi126;
                                eax35 = fun_402e53(ecx37, v132, v33, v10, v8, v133, v134, v135, v136, v22, v14, v20, v75);
                            } else {
                                v132 = v16;
                                eax35 = fun_403fc4(ecx37, reinterpret_cast<uint32_t>(ebp5) + 0xfffffe64, v132, v33, v10, v8, v137, v138);
                                esi126 = v40;
                                v39 = esi126;
                            }
                            ebx13 = eax35;
                            v21 = ebx13;
                            ecx37 = v132;
                            if (ebx13 == 0xffffffff) 
                                goto addr_403f70_19;
                            ecx37 = v131;
                        }
                        eax35 = v109;
                        edx139 = v125;
                        if (!eax35) 
                            goto addr_403289_96;
                        if (!edx139) 
                            goto addr_403f5d_39;
                        addr_403289_96:
                        if (reinterpret_cast<signed char>(ecx37) > reinterpret_cast<signed char>(0x6f)) {
                            eax140 = reinterpret_cast<uint32_t>(ecx37 - 0x70);
                            if (!eax140) 
                                break;
                            eax141 = eax140 - 3;
                            if (!eax141) 
                                goto addr_4036c7_100;
                            eax142 = eax141 - 1 - 1;
                            if (!eax142) 
                                goto addr_403b5f_102;
                            eax143 = eax142 - 3;
                            if (!eax143) 
                                goto addr_403985_104;
                            if (!(eax143 - 3)) 
                                goto addr_4038a1_106;
                        } else {
                            if (ecx37 == 0x6f) 
                                goto addr_403b65_108;
                            if (ecx37 == 99) 
                                goto addr_4036b2_110;
                            if (ecx37 == 100) 
                                goto addr_403b65_108;
                            if (reinterpret_cast<signed char>(ecx37) > reinterpret_cast<signed char>(100)) 
                                goto addr_4032b0_113;
                        }
                        addr_403870_114:
                        if (!reinterpret_cast<int1_t>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(edi12->f0)) == ebx13)) 
                            goto addr_403f5d_39;
                        al82 = v38 - 1;
                        if (v112) 
                            continue;
                        ecx37 = v22;
                        v14 = ecx37;
                        continue;
                        addr_4032b0_113:
                        if (reinterpret_cast<signed char>(ecx37) <= reinterpret_cast<signed char>(0x67)) 
                            goto addr_4032e5_117;
                        if (ecx37 == 0x69) 
                            goto addr_4032d7_119;
                        if (!reinterpret_cast<int1_t>(ecx37 == 0x6e)) 
                            goto addr_403870_114; else 
                            goto addr_4032c3_121;
                    }
                    v124 = 1;
                    addr_403b5f_102:
                    eax35 = v109;
                    addr_403b65_108:
                    if (reinterpret_cast<int1_t>(ebx13 == 45)) {
                        v111 = reinterpret_cast<void**>(1);
                        goto addr_403b78_124;
                    }
                    if (!reinterpret_cast<int1_t>(ebx13 == 43)) {
                        addr_403bb0_126:
                        al144 = v129;
                    } else {
                        addr_403b78_124:
                        --edx139;
                        v125 = edx139;
                        if (edx139 || !eax35) {
                            ++esi126;
                            v39 = esi126;
                            v40 = esi126;
                            eax149 = fun_402e53(ecx37, v16, v33, v10, v8, v145, v146, v147, v148, v22, v14, v20, v75);
                            ebx13 = eax149;
                            v21 = ebx13;
                            goto addr_403baa_128;
                        } else {
                            al144 = 1;
                        }
                    }
                    if (!v115) {
                        if (al144) {
                            edi150 = v131;
                        } else {
                            while (1) {
                                if (ecx37 == 0x78 || ecx37 == 0x70) {
                                    v151 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx13)));
                                    eax152 = fun_408dd6(v151);
                                    ecx37 = v151;
                                    if (!eax152) 
                                        goto addr_403e09_135;
                                    v153 = ebx13;
                                    eax154 = fun_402e32(ecx37, *reinterpret_cast<unsigned char*>(&v153));
                                    edi150 = v131;
                                    ebx13 = eax154;
                                    eax155 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v105) << 4);
                                    ecx37 = v153;
                                    v21 = ebx13;
                                } else {
                                    v156 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx13)));
                                    eax157 = fun_408d80(v156, v156);
                                    edi150 = v131;
                                    ecx37 = v156;
                                    if (!eax157) 
                                        goto addr_403e0f_138;
                                    if (!reinterpret_cast<int1_t>(edi150 == 0x6f)) 
                                        goto addr_403d82_140; else 
                                        goto addr_403d6e_141;
                                }
                                addr_403dbb_142:
                                ++v108;
                                eax35 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax155) + 0xffffffd0 + reinterpret_cast<unsigned char>(ebx13));
                                v105 = eax35;
                                if (!v109) 
                                    goto addr_403ddd_143;
                                --v125;
                                if (!v125) 
                                    goto addr_403e3d_145;
                                addr_403ddd_143:
                                ++esi126;
                                v39 = esi126;
                                v40 = esi126;
                                eax162 = fun_402e53(ecx37, v16, v33, v10, v8, v158, v159, v160, v161, v22, v14, v20, v75);
                                ecx37 = v131;
                                ebx13 = eax162;
                                v21 = ebx13;
                                continue;
                                addr_403d82_140:
                                eax155 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v105) * 10);
                                goto addr_403dbb_142;
                                addr_403d6e_141:
                                if (reinterpret_cast<signed char>(ebx13) >= reinterpret_cast<signed char>(56)) 
                                    goto addr_403e0f_138;
                                eax155 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v105) << 3);
                                goto addr_403dbb_142;
                            }
                        }
                    } else {
                        if (al144) {
                            edi150 = v131;
                            goto addr_403d0e_149;
                        } else {
                            while (1) {
                                if (ecx37 == 0x78 || ecx37 == 0x70) {
                                    v163 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx13)));
                                    eax164 = fun_408dd6(v163);
                                    ecx165 = v163;
                                    if (!eax164) 
                                        goto addr_403ce0_152;
                                    __asm__("shld ecx, eax, 0x4");
                                    v166 = ebx13;
                                    v167 = v19;
                                    eax168 = fun_402e32(v19, *reinterpret_cast<unsigned char*>(&v166));
                                    edi150 = v131;
                                    ebx13 = eax168;
                                    ecx169 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v18) << 4);
                                    v21 = ebx13;
                                } else {
                                    v170 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx13)));
                                    eax171 = fun_408d80(v170, v170);
                                    edi150 = v131;
                                    ecx165 = v170;
                                    if (!eax171) 
                                        goto addr_403ce6_155;
                                    if (!reinterpret_cast<int1_t>(edi150 == 0x6f)) 
                                        goto addr_403c16_157; else 
                                        goto addr_403bf2_158;
                                }
                                addr_403c83_159:
                                ++v108;
                                __asm__("cdq ");
                                tmp32_172 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx169) + reinterpret_cast<unsigned char>(ebx13 + 0xffffffd0));
                                ecx37 = tmp32_172;
                                v18 = ecx37;
                                eax35 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v167) + reinterpret_cast<unsigned char>(edx139) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_172) < reinterpret_cast<unsigned char>(ecx169)));
                                v19 = eax35;
                                if (!v109) 
                                    goto addr_403cb4_160;
                                --v125;
                                if (!v125) 
                                    goto addr_403d1a_162;
                                addr_403cb4_160:
                                ++esi126;
                                v39 = esi126;
                                v40 = esi126;
                                eax177 = fun_402e53(ecx37, v16, v33, v10, v8, v173, v174, v175, v176, v22, v14, v20, v75);
                                ecx37 = v131;
                                ebx13 = eax177;
                                v21 = ebx13;
                                continue;
                                addr_403c16_157:
                                eax178 = fun_409090(v18, v19, 10, 0);
                                ecx169 = eax178;
                                v167 = edx139;
                                goto addr_403c83_159;
                                addr_403bf2_158:
                                if (reinterpret_cast<signed char>(ebx13) >= reinterpret_cast<signed char>(56)) 
                                    goto addr_403ce6_155;
                                __asm__("shld eax, ecx, 0x3");
                                v167 = v19;
                                ecx169 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v18) << 3);
                                goto addr_403c83_159;
                            }
                        }
                    }
                    addr_403e37_164:
                    eax35 = v105;
                    addr_403e3d_145:
                    if (v111) {
                        eax35 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax35));
                        v105 = eax35;
                    }
                    addr_403e4e_166:
                    edi179 = reinterpret_cast<uint32_t>(edi150 - 70);
                    edi180 = -edi179;
                    if (!(edi180 - (edi180 + (edi180 < edi180 + reinterpret_cast<uint1_t>(!!edi179))) & reinterpret_cast<unsigned char>(v108))) 
                        goto addr_403f70_19;
                    if (v112) 
                        goto addr_403692_26;
                    ++v41;
                    edi12 = v81;
                    eax35 = v105;
                    if (!v115) {
                        ecx37 = v127;
                        if (!v124) {
                            *reinterpret_cast<void***>(ecx37) = eax35;
                            continue;
                        } else {
                            *reinterpret_cast<void***>(ecx37) = eax35;
                            continue;
                        }
                    } else {
                        *reinterpret_cast<void***>(v127) = v18;
                        ecx37 = v19;
                        *reinterpret_cast<void***>(v127 + 4) = ecx37;
                        continue;
                    }
                    addr_403e09_135:
                    edi150 = v131;
                    addr_403e0f_138:
                    esi181 = esi126 - 1;
                    v39 = esi181;
                    v40 = esi181;
                    if (ebx13 != 0xffffffff) {
                        fun_40815a(ecx37, ebx13, v16, v33, v10, v8, v182, v183, v184, v185, v22, v14, v20, v75);
                        ecx37 = v16;
                        goto addr_403e37_164;
                    }
                    addr_403d0e_149:
                    ecx37 = v18;
                    eax35 = v19;
                    addr_403d1a_162:
                    if (v111) {
                        cf186 = reinterpret_cast<uint1_t>(!!ecx37);
                        ecx37 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(ecx37));
                        v18 = ecx37;
                        eax35 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(eax35) + cf186));
                        v19 = eax35;
                        goto addr_403e4e_166;
                    }
                    addr_403ce0_152:
                    edi150 = v131;
                    addr_403ce6_155:
                    esi187 = esi126 - 1;
                    v39 = esi187;
                    v40 = esi187;
                    if (ebx13 != 0xffffffff) {
                        fun_40815a(ecx165, ebx13, v16, v33, v10, v8, v188, v189, v190, v191, v22, v14, v20, v75);
                        goto addr_403d0e_149;
                    }
                    addr_403baa_128:
                    ecx37 = v131;
                    goto addr_403bb0_126;
                    addr_403985_104:
                    eax35 = v109;
                    addr_40398b_177:
                    if (!reinterpret_cast<int1_t>(ebx13 == 45)) {
                        if (!reinterpret_cast<int1_t>(ebx13 == 43)) {
                            addr_4039b7_179:
                            edi192 = v16;
                        } else {
                            addr_40399e_180:
                            --edx139;
                            v125 = edx139;
                            if (edx139 || !eax35) {
                                edi192 = v16;
                                ++esi126;
                                v39 = esi126;
                                v40 = esi126;
                                eax197 = fun_402e53(ecx37, edi192, v33, v10, v8, v193, v194, v195, v196, v22, v14, v20, v75);
                                ebx13 = eax197;
                                ecx37 = edi192;
                                v21 = ebx13;
                            } else {
                                v129 = 1;
                                goto addr_4039b7_179;
                            }
                        }
                        if (reinterpret_cast<int1_t>(ebx13 == 48)) {
                            ++esi126;
                            v39 = esi126;
                            v40 = esi126;
                            eax202 = fun_402e53(ecx37, edi192, v33, v10, v8, v198, v199, v200, v201, v22, v14, v20, v75);
                            ebx13 = eax202;
                            v21 = ebx13;
                            if (ebx13 == 0x78 || ebx13 == 88) {
                                ++esi126;
                                v39 = esi126;
                                v40 = esi126;
                                eax207 = fun_402e53(edi192, edi192, v33, v10, v8, v203, v204, v205, v206, v22, v14, v20, v75);
                                ebx13 = eax207;
                                v21 = ebx13;
                                if (v109 && (eax208 = v125 - 2, v125 = eax208, reinterpret_cast<signed char>(eax208) < reinterpret_cast<signed char>(1))) {
                                    v129 = reinterpret_cast<signed char>(v129 + 1);
                                }
                                v209 = reinterpret_cast<void**>(0x78);
                            } else {
                                ecx37 = v131;
                                v108 = reinterpret_cast<void**>(1);
                                if (ecx37 == 0x78) {
                                    --esi126;
                                    v39 = esi126;
                                    v40 = esi126;
                                    if (ebx13 != 0xffffffff) {
                                        fun_40815a(ecx37, ebx13, edi192, v33, v10, v8, v210, v211, v212, v213, v22, v14, v20, v75);
                                        ecx37 = v131;
                                    }
                                    ebx13 = reinterpret_cast<void**>(48);
                                    v21 = reinterpret_cast<void**>(48);
                                    goto addr_403bb0_126;
                                } else {
                                    if (v109 && (--v125, !v125)) {
                                        v129 = reinterpret_cast<signed char>(v129 + 1);
                                    }
                                    v209 = reinterpret_cast<void**>(0x6f);
                                }
                            }
                            ecx37 = v209;
                            v131 = ecx37;
                            goto addr_403bb0_126;
                        }
                    } else {
                        v111 = reinterpret_cast<void**>(1);
                        goto addr_40399e_180;
                    }
                    addr_4032d7_119:
                    v131 = reinterpret_cast<void**>(100);
                    goto addr_40398b_177;
                    addr_4032c3_121:
                    eax35 = esi126;
                    if (v112) {
                    }
                }
                addr_4036c7_100:
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v114) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v114 == 0))) {
                    v113 = reinterpret_cast<void**>(1);
                }
                addr_4036d8_199:
                esi214 = v127;
                ecx37 = v39 - 1;
                v39 = ecx37;
                v40 = ecx37;
                if (ebx13 != 0xffffffff) {
                    fun_40815a(ecx37, ebx13, v16, v33, v10, v8, v215, v216, v217, v218, v22, v14, v20, v75);
                    ecx37 = v39;
                }
                edi219 = v131;
                while (!v109 || (eax220 = v125, --v125, !!eax220)) {
                    ecx221 = ecx37 + 1;
                    v39 = ecx221;
                    v40 = ecx221;
                    eax226 = fun_402e53(ecx221, v16, v33, v10, v8, v222, v223, v224, v225, v22, v14, v20, v75);
                    ebx13 = eax226;
                    v21 = ebx13;
                    ecx37 = v16;
                    if (ebx13 == 0xffffffff) 
                        goto addr_403ae7_204;
                    if (edi219 != 99) {
                        if (!reinterpret_cast<int1_t>(edi219 == 0x73)) {
                            addr_403777_207:
                            if (!reinterpret_cast<int1_t>(edi219 == 0x7b)) 
                                goto addr_403ae7_204;
                            ecx227 = reinterpret_cast<unsigned char>(ebx13) & 7;
                            ecx37 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp5) + (reinterpret_cast<signed char>(ebx13) >> 3) + 0xffffffdc))) ^ reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(v110))));
                            if (!(reinterpret_cast<unsigned char>(ecx37) & 1 << *reinterpret_cast<unsigned char*>(&ecx227))) 
                                goto addr_403ae7_204;
                        } else {
                            if (reinterpret_cast<signed char>(ebx13) < reinterpret_cast<signed char>(9)) 
                                goto addr_403772_210;
                            if (reinterpret_cast<signed char>(ebx13) <= reinterpret_cast<signed char>(13)) 
                                goto addr_403ae7_204;
                            addr_403772_210:
                            if (reinterpret_cast<int1_t>(ebx13 == 32)) 
                                goto addr_403777_207;
                        }
                    }
                    if (v112) {
                        ++esi214;
                    } else {
                        if (!v113) {
                            *reinterpret_cast<void***>(v127) = ebx13;
                            ++v127;
                        } else {
                            v228 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx13)));
                            *reinterpret_cast<void***>(&v75) = ebx13;
                            eax229 = fun_408e3d(ecx37, v228, v33, v10);
                            ecx230 = v228;
                            if (eax229) {
                                eax231 = v39 + 1;
                                v39 = eax231;
                                v40 = eax231;
                                eax236 = fun_402e53(ecx230, v16, v33, v10, v8, v232, v233, v234, v235, v22, v14, v20, v75);
                                ecx230 = v16;
                                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v75) + 1) = *reinterpret_cast<signed char*>(&eax236);
                            }
                            v20 = reinterpret_cast<void**>(63);
                            v237 = v238->f74;
                            fun_408e4e(ecx230, reinterpret_cast<uint32_t>(ebp5) + 0xfffffe1c, reinterpret_cast<uint32_t>(ebp5) + 0xfffffe20, v237, reinterpret_cast<uint32_t>(ebp5) + 0xfffffe04, v33, v10, v8);
                            *reinterpret_cast<void***>(v127) = reinterpret_cast<void**>(63);
                            v127 = v127 + 2;
                        }
                    }
                    ecx37 = v39;
                }
                addr_403b0d_220:
                if (esi214 == v127) 
                    goto addr_403f70_19;
                if (v112) 
                    goto addr_403692_26;
                ++v41;
                if (edi219 == 99) 
                    goto addr_403692_26;
                edi12 = v81;
                if (!v113) {
                    *reinterpret_cast<void***>(v127) = reinterpret_cast<void**>(0);
                    continue;
                } else {
                    ecx37 = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(v127) = reinterpret_cast<void**>(0);
                    continue;
                }
                addr_403ae7_204:
                eax239 = v39 - 1;
                v39 = eax239;
                v40 = eax239;
                if (ebx13 != 0xffffffff) {
                    fun_40815a(ecx37, ebx13, v16, v33, v10, v8, v240, v241, v242, v243, v22, v14, v20, v75);
                    ecx37 = v16;
                    goto addr_403b0d_220;
                }
                addr_4038a1_106:
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v114) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v114 == 0))) {
                    v113 = reinterpret_cast<void**>(1);
                }
                edi79 = reinterpret_cast<struct s17*>(&edi12->f1);
                if (reinterpret_cast<int1_t>(edi79->f0 == 94)) {
                    edi79 = reinterpret_cast<struct s17*>(&edi79->f1);
                    v110 = reinterpret_cast<void**>(0xff);
                }
                v244 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp5) + 0xffffffdc);
                fun_407390(ecx37, v244, 0, 32, v33, v10, v8, v245, v246, v247, v248, v22, v14, v20, ecx37, v244, 0, 32, v33, v10, v8, v249, v250, v251, v252, v22, v14, v20);
                if (!reinterpret_cast<int1_t>(edi79->f0 == 93)) 
                    goto addr_403962_23;
                dl76 = reinterpret_cast<void**>(93);
                edi79 = reinterpret_cast<struct s17*>(&edi79->f1);
                addr_403968_24:
                while (!reinterpret_cast<int1_t>(edi79->f0 == 93)) {
                    edi79 = reinterpret_cast<struct s17*>(&edi79->f1);
                    if (!reinterpret_cast<int1_t>(edi79->f0 == 45)) 
                        goto addr_403949_25;
                    if (!dl76) 
                        goto addr_403949_25;
                    cl253 = edi79->f0;
                    if (cl253 == 93) 
                        goto addr_403949_25;
                    edi79 = reinterpret_cast<struct s17*>(&edi79->f1);
                    v254 = edi79;
                    if (reinterpret_cast<unsigned char>(dl76) >= reinterpret_cast<unsigned char>(cl253)) {
                        (&eax35)[1] = dl76;
                        dl76 = cl253;
                    } else {
                        (&eax35)[1] = cl253;
                    }
                    if (reinterpret_cast<unsigned char>(dl76) < reinterpret_cast<unsigned char>((&eax35)[1])) {
                        esi255 = reinterpret_cast<unsigned char>(dl76);
                        edi256 = reinterpret_cast<unsigned char>((&eax35)[1]) - reinterpret_cast<unsigned char>(dl76);
                        do {
                            edx257 = reinterpret_cast<void*>(esi255 >> 3);
                            ecx258 = esi255 & 7;
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp5) + reinterpret_cast<uint32_t>(edx257) - 36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp5) + reinterpret_cast<uint32_t>(edx257) - 36) | reinterpret_cast<unsigned char>(1 << *reinterpret_cast<unsigned char*>(&ecx258)));
                            ++esi255;
                            --edi256;
                        } while (edi256);
                        edi79 = v254;
                    }
                    ecx259 = reinterpret_cast<unsigned char>((&eax35)[1]);
                    ecx37 = reinterpret_cast<void**>(ecx259 & 7);
                    edx260 = reinterpret_cast<void*>(ecx259 >> 3);
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp5) + reinterpret_cast<uint32_t>(edx260) - 36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp5) + reinterpret_cast<uint32_t>(edx260) - 36) | reinterpret_cast<unsigned char>(1 << reinterpret_cast<unsigned char>(ecx37)));
                    dl76 = reinterpret_cast<void**>(0);
                }
                if (!edi79->f0) 
                    goto addr_403f70_19;
                v81 = edi79;
                goto addr_4036d8_199;
                addr_4036b2_110:
                if (!eax35) {
                    v109 = reinterpret_cast<void**>(1);
                    v125 = edx139 + 1;
                    goto addr_4036c7_100;
                }
            }
            addr_4032e5_117:
            esi261 = reinterpret_cast<void**>(0);
            if (reinterpret_cast<int1_t>(ebx13 == 45)) {
                esi261 = reinterpret_cast<void**>(1);
                goto addr_4032fc_247;
            }
            if (!reinterpret_cast<int1_t>(ebx13 == 43)) {
                edi262 = v39;
            } else {
                addr_4032fc_247:
                v125 = edx139 - 1;
                edi262 = v39 + 1;
                eax267 = fun_402e53(ecx37, v16, v33, v10, v8, v263, v264, v265, v266, v22, v14, v20, v75);
                ebx13 = eax267;
                eax35 = v109;
                v21 = ebx13;
            }
            if (!eax35) {
                v125 = reinterpret_cast<void**>(0xffffffff);
            }
            v268 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx13)));
            eax269 = fun_408d80(v268, v268);
            while ((ecx37 = v125, !!eax269) && (eax270 = ecx37, --ecx37, v125 = ecx37, !!eax270)) {
                ++v108;
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi261) + reinterpret_cast<unsigned char>(v17)) = ebx13;
                v271 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe2c);
                ++esi261;
                v272 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe7c);
                v273 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe4c);
                v274 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe28);
                eax35 = fun_402dd3(ecx37, esi261, v274, v273, v272, v271, v33, ecx37, esi261, v274, v273, v272, v271, v33);
                if (!eax35) 
                    goto addr_403f70_19;
                ++edi262;
                eax279 = fun_402e53(ecx37, v16, v33, v10, v8, v275, v276, v277, v278, v22, v14, v20, v75);
                ebx13 = eax279;
                v280 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx13)));
                v21 = ebx13;
                eax269 = fun_408d80(v280, v280);
            }
            eax35 = *reinterpret_cast<void***>(*v281->f84);
            v282 = eax35;
            if (eax35 == ebx13 && (eax35 = ecx37, --ecx37, v125 = ecx37, !!eax35)) {
                ++edi262;
                eax287 = fun_402e53(ecx37, v16, v33, v10, v8, v283, v284, v285, v286, v22, v14, v20, v75);
                ecx37 = v17;
                ebx13 = eax287;
                v21 = ebx13;
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi261) + reinterpret_cast<unsigned char>(ecx37)) = v282;
                v288 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe2c);
                ++esi261;
                v289 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe7c);
                v290 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe4c);
                v291 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe28);
                eax35 = fun_402dd3(ecx37, esi261, v291, v290, v289, v288, v16, ecx37, esi261, v291, v290, v289, v288, v16);
                if (!eax35) 
                    goto addr_403f70_19;
                v292 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx13)));
                eax35 = fun_408d80(v292, v292);
                while ((ecx37 = v292, !!eax35) && (eax35 = v125, ecx37 = v125 - 1, v125 = ecx37, !!eax35)) {
                    ++v108;
                    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi261) + reinterpret_cast<unsigned char>(v17)) = ebx13;
                    v293 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe2c);
                    ++esi261;
                    v294 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe7c);
                    v295 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe4c);
                    v296 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe28);
                    eax35 = fun_402dd3(ecx37, esi261, v296, v295, v294, v293, v33, ecx37, esi261, v296, v295, v294, v293, v33);
                    if (!eax35) 
                        goto addr_403f70_19;
                    v292 = v16;
                    ++edi262;
                    eax301 = fun_402e53(ecx37, v292, v33, v10, v8, v297, v298, v299, v300, v22, v14, v20, v75);
                    ebx13 = eax301;
                    v302 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx13)));
                    v21 = ebx13;
                    eax35 = fun_408d80(v302, v302);
                }
            }
            if (!v108 || (ebx13 != 0x65 && !reinterpret_cast<int1_t>(ebx13 == 69) || (ecx37 = v125 - 1, v303 = ecx37, v125 == 0))) {
                addr_403623_263:
                edi304 = edi262 - 1;
                v39 = edi304;
                v40 = edi304;
                if (ebx13 != 0xffffffff) {
                    fun_40815a(ecx37, ebx13, v16, v33, v10, v8, v305, v306, v307, v308, v22, v14, v20, v75);
                    ecx37 = v16;
                }
            } else {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi261) + reinterpret_cast<unsigned char>(v17)) = 0x65;
                v309 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe2c);
                ++esi261;
                v310 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe7c);
                v311 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe4c);
                v312 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe28);
                eax35 = fun_402dd3(ecx37, esi261, v312, v311, v310, v309, v33, ecx37, esi261, v312, v311, v310, v309, v33);
                if (!eax35) 
                    goto addr_403f70_19;
                ++edi262;
                eax317 = fun_402e53(ecx37, v16, v33, v10, v8, v313, v314, v315, v316, v22, v14, v20, v75);
                ebx13 = eax317;
                v21 = ebx13;
                ecx37 = v16;
                if (!reinterpret_cast<int1_t>(ebx13 == 45)) 
                    goto addr_403570_267; else 
                    goto addr_403537_268;
            }
            if (!v108) 
                goto addr_403f70_19;
            if (v112) 
                continue;
            ++v41;
            v318 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe04);
            ecx37 = v127;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi261) + reinterpret_cast<unsigned char>(v17)) = 0;
            v319 = v124 - 1;
            v320 = image_base_;
            eax35 = reinterpret_cast<void**>(DecodePointer(v320, v319, ecx37, v17, v318));
            eax35(v320, v319, ecx37, v17, v318);
            continue;
            addr_403570_267:
            if (!reinterpret_cast<int1_t>(ebx13 == 43)) {
                addr_4035a5_272:
                v321 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx13)));
                eax35 = fun_408d80(v321, v321);
            } else {
                addr_403575_273:
                eax322 = v303;
                ecx323 = v303 - 1;
                v303 = ecx323;
                if (eax322) {
                    ++edi262;
                    eax328 = fun_402e53(ecx323, v16, v33, v10, v8, v324, v325, v326, v327, v22, v14, v20, v75);
                    ebx13 = eax328;
                    v21 = ebx13;
                    goto addr_4035a5_272;
                } else {
                    v303 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v303) & reinterpret_cast<unsigned char>(eax322));
                    goto addr_4035a5_272;
                }
            }
            while ((ecx37 = v321, !!eax35) && (eax35 = v303, ecx37 = v303 - 1, v303 = ecx37, !!eax35)) {
                ++v108;
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi261) + reinterpret_cast<unsigned char>(v17)) = ebx13;
                v329 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe2c);
                ++esi261;
                v330 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe7c);
                v331 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe4c);
                v332 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe28);
                eax35 = fun_402dd3(ecx37, esi261, v332, v331, v330, v329, v33, ecx37, esi261, v332, v331, v330, v329, v33);
                if (!eax35) 
                    goto addr_403f70_19;
                v321 = v16;
                ++edi262;
                eax337 = fun_402e53(ecx37, v321, v33, v10, v8, v333, v334, v335, v336, v22, v14, v20, v75);
                ebx13 = eax337;
                v338 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebx13)));
                v21 = ebx13;
                eax35 = fun_408d80(v338, v338);
            }
            goto addr_403623_263;
            addr_403537_268:
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(esi261) + reinterpret_cast<unsigned char>(v17)) = ebx13;
            v339 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe2c);
            ++esi261;
            v340 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe7c);
            v341 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe4c);
            v342 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp5) + 0xfffffe28);
            eax35 = fun_402dd3(ecx37, esi261, v342, v341, v340, v339, v33, ecx37, esi261, v342, v341, v340, v339, v33);
            if (!eax35) 
                goto addr_403f70_19;
            goto addr_403575_273;
        }
    }
    addr_403f5d_39:
    if (ebx13 == 0xffffffff) {
        addr_403f70_19:
        if (!1) {
            fun_40295d(ecx37, v17, v33, v10, v8, v343, v344, v345, v346, v22, v14, v20, ecx37, v17, v33, v10, v8, v347, v348, v349, v350, v22, v14, v20);
        }
    } else {
        v70 = v16;
        goto addr_403f68_18;
    }
    ecx37 = v41;
    if (!reinterpret_cast<int1_t>(ebx13 == 0xffffffff) || (ecx37 || v38 != ecx37)) {
        addr_403f9e_5:
        goto addr_403fa0_283;
    } else {
        addr_403fa0_283:
        if (v351) {
            v352->f70 = v352->f70 & 0xfffffffd;
            goto addr_403fb3_14;
        }
    }
    addr_403f41_46:
    if (eax35 != 0xffffffff) {
        fun_40815a(ecx37, eax35, v16, v33, v10, v8, v353, v354, v355, v356, v22, v14, v20, v75);
        ecx37 = v16;
        goto addr_403f55_21;
    }
}

void** fun_4040ed(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    int1_t zf11;
    void** v12;
    void** eax13;

    fun_404b55(ecx, __return_address(), a2, a3, a4);
    zf11 = g4192f8 == 0;
    if (!zf11) {
        fun_4090e3(ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    }
    v12 = g41b000;
    eax13 = fun_40295d(ecx, v12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
    g41b000 = reinterpret_cast<void**>(0);
    return eax13;
}

int32_t fun_404820(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t eax7;
    void** ecx8;
    void** eax9;
    void** v10;
    void** v11;
    void** v12;

    eax7 = 1;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) & 6) {
        ecx8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 8)) ^ reinterpret_cast<unsigned char>(a2));
        eax9 = fun_404f47(ecx8, __return_address(), a1, a2, a3, a4, a5, a6);
        v10 = *reinterpret_cast<void***>(eax9 + 12);
        v11 = *reinterpret_cast<void***>(eax9 + 16);
        v12 = *reinterpret_cast<void***>(eax9 + 20);
        fun_404790(v12, v11, v10);
        *reinterpret_cast<void***>(a4) = a2;
        eax7 = 3;
    }
    return eax7;
}

void fun_4049b3() {
}

void fun_404bfd() {
}

void fun_404d03() {
}

void fun_404ea1() {
}

void fun_405071() {
}

void fun_405fad(int32_t ecx) {
}

void fun_405ff9(int32_t ecx) {
}

void fun_406139(int32_t ecx) {
}

void fun_406169() {
}

void fun_406244() {
    goto 0x406250;
}

void fun_406345() {
}

int32_t fun_407420(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** ebp8;

    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a2)) == 0xe06d7363) || (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 16) == 3) || *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 20) != 0x19930520 && (*reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 20) != 0x19930521 && (*reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 20) != 0x19930522 && *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 20) != 0x1994000)))) {
        return 0;
    } else {
        fun_40a34a(ecx, ebp8, __return_address(), a2, a3, a4, a5, a6, a7);
        fun_40810b(fun_407420);
        goto ebp8;
    }
}

struct s231 {
    signed char[8] pad8;
    void** f8;
};

void fun_4075ca(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** esi9;
    struct s231* ebp10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    int32_t ebp19;
    void** ecx20;
    int32_t ebp21;
    void** ecx22;
    int32_t ebp23;
    void** edi24;
    int1_t zf25;
    int32_t ebp26;

    fun_404590(0x4177c8, 8, __return_address());
    esi9 = ebp10->f8;
    if (esi9) {
        if (*reinterpret_cast<void***>(esi9 + 36)) {
            v11 = *reinterpret_cast<void***>(esi9 + 36);
            fun_40295d(ecx, v11, 0x4177c8, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v11;
        }
        if (*reinterpret_cast<void***>(esi9 + 44)) {
            v12 = *reinterpret_cast<void***>(esi9 + 44);
            fun_40295d(ecx, v12, 0x4177c8, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v12;
        }
        if (*reinterpret_cast<void***>(esi9 + 52)) {
            v13 = *reinterpret_cast<void***>(esi9 + 52);
            fun_40295d(ecx, v13, 0x4177c8, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v13;
        }
        if (*reinterpret_cast<void***>(esi9 + 60)) {
            v14 = *reinterpret_cast<void***>(esi9 + 60);
            fun_40295d(ecx, v14, 0x4177c8, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v14;
        }
        if (*reinterpret_cast<void***>(esi9 + 64)) {
            v15 = *reinterpret_cast<void***>(esi9 + 64);
            fun_40295d(ecx, v15, 0x4177c8, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v15;
        }
        if (*reinterpret_cast<void***>(esi9 + 68)) {
            v16 = *reinterpret_cast<void***>(esi9 + 68);
            fun_40295d(ecx, v16, 0x4177c8, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v16;
        }
        if (*reinterpret_cast<void***>(esi9 + 72)) {
            v17 = *reinterpret_cast<void***>(esi9 + 72);
            fun_40295d(ecx, v17, 0x4177c8, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v17;
        }
        if (*reinterpret_cast<void***>(esi9 + 92) != 0x411c00) {
            v18 = *reinterpret_cast<void***>(esi9 + 92);
            fun_40295d(ecx, v18, 0x4177c8, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx = v18;
        }
        fun_409180(ecx, 13, 0x4177c8, 8, __return_address(), a2, a3, a4, a5, a6);
        *reinterpret_cast<uint32_t*>(ebp19 - 4) = 0;
        ecx20 = *reinterpret_cast<void***>(esi9 + 0x68);
        if (ecx20 && (!1 && ecx20 != 0x418750)) {
            fun_40295d(ecx20, ecx20, 0x4177c8, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            ecx20 = ecx20;
        }
        *reinterpret_cast<int32_t*>(ebp21 - 4) = -2;
        fun_4076ea(ecx20);
        fun_409180(ecx20, 12, 0x4177c8, 8, __return_address(), a2, a3, a4, a5, a6);
        ecx22 = reinterpret_cast<void**>(12);
        *reinterpret_cast<int32_t*>(ebp23 - 4) = 1;
        edi24 = *reinterpret_cast<void***>(esi9 + 0x6c);
        if (edi24 && ((fun_408429(12, edi24), ecx22 = edi24, zf25 = edi24 == image_base_, !zf25) && (edi24 != 0x418be0 && !*reinterpret_cast<void***>(edi24)))) {
            fun_4082cf(ecx22, edi24, 0x4177c8, 8, __return_address(), a2);
            ecx22 = edi24;
        }
        *reinterpret_cast<int32_t*>(ebp26 - 4) = -2;
        fun_4076f6(ecx22);
        fun_40295d(ecx22, esi9, 0x4177c8, 8, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        ecx = esi9;
    }
    fun_4045d5(ecx, 0x4177c8, 8, __return_address(), a2);
    goto 0x4177c8;
}

void fun_4076e7() {
}

void fun_40853d() {
}

void fun_408a60() {
}

void fun_409396() {
}

void fun_40982c() {
}

int32_t fun_4098b0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t eax7;
    void** ecx8;
    void** eax9;
    void** v10;
    void** v11;

    eax7 = 1;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) & 6) {
        ecx8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a5 + 0xfffffffc)) ^ reinterpret_cast<unsigned char>(a5));
        eax9 = fun_404f47(ecx8, __return_address(), a1, a2, a3, a4, a5, a6);
        v10 = *reinterpret_cast<void***>(eax9 + 40);
        v11 = *reinterpret_cast<void***>(eax9 + 36);
        fun_4098f5(v11, v10);
        *reinterpret_cast<void***>(a4) = a2;
        eax7 = 3;
    }
    return eax7;
}

int32_t fun_409979() {
    int32_t eax1;
    void** ecx2;

    eax1 = 0;
    ecx2 = g0;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx2 + 4) == fun_4098b0) && *reinterpret_cast<void***>(ecx2 + 8) == *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx2 + 12) + 12)) {
        eax1 = 1;
    }
    return eax1;
}

void fun_40999c(int32_t ecx) {
    goto 0x4099b0;
}

void fun_409bf2() {
}

void fun_409b24() {
}

void fun_409e55() {
}

int32_t fun_40a04e(void** ecx) {
    void** ebx2;
    int32_t eax3;
    uint32_t esi4;
    uint32_t esi5;
    uint32_t ecx6;
    int32_t ecx7;
    uint32_t ecx8;
    uint32_t eax9;
    uint32_t edi10;
    uint32_t edi11;
    uint32_t eax12;
    uint32_t esi13;
    uint32_t esi14;

    g419ee8 = 0;
    g418e00 = g418e00 | 1;
    eax3 = fun_410118(ecx, 10, ebx2);
    if (eax3) {
        g419ee8 = 1;
        esi4 = g418e00;
        esi5 = esi4 | 2;
        g418e00 = esi5;
        ecx6 = __intrinsic() ^ 0x49656e69 | __intrinsic() ^ 0x6c65746e | __intrinsic() ^ 0x756e6547;
        ecx7 = reinterpret_cast<int32_t>(-ecx6);
        ecx8 = __intrinsic();
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx7) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx7) + (*reinterpret_cast<unsigned char*>(&ecx7) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx7) + reinterpret_cast<uint1_t>(!!ecx6))))) + 1) || (eax9 = __intrinsic() & 0xfff3ff0, eax9 != 0x106c0) && (eax9 != 0x20660 && (eax9 != 0x20670 && (eax9 != 0x30650 && (eax9 != 0x30660 && eax9 != 0x30670))))) {
            edi10 = g419eec;
        } else {
            edi11 = g419eec;
            edi10 = edi11 | 1;
            g419eec = edi10;
        }
        if (reinterpret_cast<int32_t>(__intrinsic()) < reinterpret_cast<int32_t>(7)) {
            eax12 = 0;
        } else {
            esi5 = g418e00;
            ecx8 = ecx8;
            eax12 = __intrinsic();
            if (eax12 & 0x200) {
                g419eec = edi10 | 2;
            }
        }
        if (ecx8 & 0x100000 && ((esi13 = esi5 | 4, g419ee8 = 2, g418e00 = esi13, !!(ecx8 & 0x8000000)) && (ecx8 & 0x10000000 && (esi14 = esi13 | 8, g419ee8 = 3, g418e00 = esi14, !!(*reinterpret_cast<unsigned char*>(&eax12) & 32))))) {
            g419ee8 = 5;
            g418e00 = esi14 | 32;
        }
    }
    return 0;
}

void fun_40a20a(void** ecx, void** a2, void** a3) {
    void** esi4;
    void** eax5;
    void** eax6;

    eax5 = fun_408f5b(ecx, 32, 4, esi4, __return_address(), a2, a3);
    eax6 = reinterpret_cast<void**>(EncodePointer(4));
    g419fec = eax6;
    g419fe8 = eax6;
    if (eax5) {
        *reinterpret_cast<void***>(eax5) = reinterpret_cast<void**>(0);
        goto esi4;
    } else {
        goto esi4;
    }
}

void fun_40a36e() {
}

void fun_40c166(int32_t ecx) {
    goto fun_404f60;
}

void fun_40b5ed(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    fun_406d07(ecx, 2, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    return;
}

void fun_40bf74() {
    int32_t eax1;

    eax1 = g418e70;
    if (eax1 != -1 && eax1 != -2) {
        CloseHandle(eax1);
    }
    return;
}

void fun_40c7df(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** ebp8;

    fun_40c7f6();
    if (a2) {
        fun_40e58a(ecx, ebp8, __return_address(), a2, a3, a4, a5, a6, a7);
    }
    __asm__("fclex ");
    return;
}

void fun_40e3d8(struct s75* a1) {
    fun_40e3e9(a1, 0);
    return;
}

void fun_40e4c3(struct s77* a1) {
    fun_40e4d4(a1, 0);
    return;
}

int32_t fun_40e548(int32_t a1) {
    __asm__("fldz ");
    __asm__("fcomp qword [eax]");
    if (__intrinsic()) {
        return 0;
    } else {
        return 1;
    }
}

void fun_40eb0d(int32_t ecx) {
}

void fun_40eb59(int32_t ecx) {
}

void fun_40ec99(int32_t ecx) {
}

void fun_40ecc9() {
}

void fun_40eda4() {
    goto 0x40edb0;
}

struct s232 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s233 {
    signed char[8] pad8;
    uint32_t f8;
};

void fun_4100ed() {
    struct s232* ebp1;
    struct s233* ebp2;

    g4191a8 = 0;
    ebp1->f8 = ebp2->f8 & 0xffffffbf;
}

int32_t fun_40407a(void** ecx, void** a2, void** a3) {
    void** eax4;
    void** esi5;
    void** eax6;
    void* edx7;
    int32_t ecx8;

    eax4 = g41b004;
    if (eax4) {
        if (reinterpret_cast<signed char>(eax4) >= reinterpret_cast<signed char>(20)) {
            addr_404099_3:
            eax6 = fun_408f5b(ecx, eax4, 4, esi5, __return_address(), a2, a3);
            g41b000 = eax6;
            if (eax6 || (g41b004 = reinterpret_cast<void**>(20), eax6 = fun_408f5b(4, 20, 4, esi5, __return_address(), a2, a3), g41b000 = eax6, !!eax6)) {
                edx7 = reinterpret_cast<void*>(0);
                ecx8 = 0x418170;
                while (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edx7) + reinterpret_cast<unsigned char>(eax6)) = ecx8, ecx8 = ecx8 + 32, edx7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx7) + 4), ecx8 < 0x4183f0) {
                    eax6 = g41b000;
                }
                return 0;
            } else {
                return 26;
            }
        } else {
            eax4 = reinterpret_cast<void**>(20);
        }
    } else {
        eax4 = reinterpret_cast<void**>(0x200);
    }
    g41b004 = eax4;
    goto addr_404099_3;
}

void fun_409174() {
}

void fun_409a49() {
}

void fun_40a274() {
}

void fun_4076f3() {
}

void fun_4088e5() {
}

void fun_408a6c() {
    goto 0x408a91;
}

void fun_410124() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
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
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    signed char* eax25;
    signed char* eax26;
    signed char al27;
    signed char* eax28;
    signed char* eax29;
    signed char al30;
    signed char* eax31;
    signed char* eax32;
    signed char al33;
    signed char* eax34;
    signed char* eax35;
    signed char al36;
    signed char* eax37;
    signed char* eax38;
    signed char al39;
    signed char* eax40;
    signed char* eax41;
    signed char al42;
    signed char* eax43;
    signed char* eax44;
    signed char al45;
    signed char* eax46;
    signed char* eax47;
    signed char al48;
    signed char* eax49;
    signed char* eax50;
    signed char al51;
    signed char* eax52;
    signed char* eax53;
    signed char al54;
    signed char* eax55;
    signed char* eax56;
    signed char al57;
    signed char* eax58;
    signed char* eax59;
    signed char al60;
    signed char* eax61;
    signed char* eax62;
    signed char al63;
    signed char* eax64;
    signed char* eax65;
    signed char al66;
    signed char* eax67;
    signed char* eax68;
    signed char al69;
    signed char* eax70;
    signed char* eax71;
    signed char al72;
    signed char* eax73;
    signed char* eax74;
    signed char al75;
    signed char* eax76;
    signed char* eax77;
    signed char al78;
    signed char* eax79;
    signed char* eax80;
    signed char al81;
    signed char* eax82;
    signed char* eax83;
    signed char al84;
    signed char* eax85;
    signed char* eax86;
    signed char al87;
    signed char* eax88;
    signed char* eax89;
    signed char al90;
    signed char* eax91;
    signed char* eax92;
    signed char al93;
    signed char* eax94;
    signed char* eax95;
    signed char al96;
    signed char* eax97;
    signed char* eax98;
    signed char al99;
    signed char* eax100;
    signed char* eax101;
    signed char al102;
    signed char* eax103;
    signed char* eax104;
    signed char al105;
    signed char* eax106;
    signed char* eax107;
    signed char al108;
    signed char* eax109;
    signed char* eax110;
    signed char al111;
    signed char* eax112;
    signed char* eax113;
    signed char al114;
    signed char* eax115;
    signed char* eax116;
    signed char al117;
    signed char* eax118;
    signed char* eax119;
    signed char al120;
    signed char* eax121;
    signed char* eax122;
    signed char al123;
    signed char* eax124;
    signed char* eax125;
    signed char al126;
    signed char* eax127;
    signed char* eax128;
    signed char al129;
    signed char* eax130;
    signed char* eax131;
    signed char al132;
    signed char* eax133;
    signed char* eax134;
    signed char al135;
    signed char* eax136;
    signed char* eax137;
    signed char al138;
    signed char* eax139;
    signed char* eax140;
    signed char al141;
    signed char* eax142;
    signed char* eax143;
    signed char al144;
    signed char* eax145;
    signed char* eax146;
    signed char al147;
    signed char* eax148;
    signed char* eax149;
    signed char al150;
    signed char* eax151;
    signed char* eax152;
    signed char al153;
    signed char* eax154;
    signed char* eax155;
    signed char al156;
    signed char* eax157;
    signed char* eax158;
    signed char al159;
    signed char* eax160;
    signed char* eax161;
    signed char al162;
    signed char* eax163;
    signed char* eax164;
    signed char al165;
    signed char* eax166;
    signed char* eax167;
    signed char al168;
    signed char* eax169;
    signed char* eax170;
    signed char al171;
    signed char* eax172;
    signed char* eax173;
    signed char al174;
    signed char* eax175;
    signed char* eax176;
    signed char al177;
    signed char* eax178;
    signed char* eax179;
    signed char al180;
    signed char* eax181;
    signed char* eax182;
    signed char al183;
    signed char* eax184;
    signed char* eax185;
    signed char al186;
    signed char* eax187;
    signed char* eax188;
    signed char al189;
    signed char* eax190;
    signed char* eax191;
    signed char al192;
    signed char* eax193;
    signed char* eax194;
    signed char al195;
    signed char* eax196;
    signed char* eax197;
    signed char al198;
    signed char* eax199;
    signed char* eax200;
    signed char al201;
    signed char* eax202;
    signed char* eax203;
    signed char al204;
    signed char* eax205;
    signed char* eax206;
    signed char al207;
    signed char* eax208;
    signed char* eax209;
    signed char al210;
    signed char* eax211;
    signed char* eax212;
    signed char al213;
    signed char* eax214;
    signed char* eax215;
    signed char al216;
    signed char* eax217;
    signed char* eax218;
    signed char al219;
    signed char* eax220;
    signed char* eax221;
    signed char al222;
    signed char* eax223;
    signed char* eax224;
    signed char al225;
    signed char* eax226;
    signed char* eax227;
    signed char al228;
    signed char* eax229;
    signed char* eax230;
    signed char al231;
    signed char* eax232;
    signed char* eax233;
    signed char al234;
    signed char* eax235;
    signed char* eax236;
    signed char al237;
    signed char* eax238;
    signed char* eax239;
    signed char al240;
    signed char* eax241;
    signed char* eax242;
    signed char al243;
    signed char* eax244;
    signed char* eax245;
    signed char al246;
    signed char* eax247;
    signed char* eax248;
    signed char al249;
    signed char* eax250;
    signed char* eax251;
    signed char al252;
    signed char* eax253;
    signed char* eax254;
    signed char al255;
    signed char* eax256;
    signed char* eax257;
    signed char al258;
    signed char* eax259;
    signed char* eax260;
    signed char al261;
    signed char* eax262;
    signed char* eax263;
    signed char al264;
    signed char* eax265;
    signed char* eax266;
    signed char al267;
    signed char* eax268;
    signed char* eax269;
    signed char al270;
    signed char* eax271;
    signed char* eax272;
    signed char al273;
    signed char* eax274;
    signed char* eax275;
    signed char al276;
    signed char* eax277;
    signed char* eax278;
    signed char al279;
    signed char* eax280;
    signed char* eax281;
    signed char al282;
    signed char* eax283;
    signed char* eax284;
    signed char al285;
    signed char* eax286;
    signed char* eax287;
    signed char al288;
    signed char* eax289;
    signed char* eax290;
    signed char al291;
    signed char* eax292;
    signed char* eax293;
    signed char al294;
    signed char* eax295;
    signed char* eax296;
    signed char al297;
    signed char* eax298;
    signed char* eax299;
    signed char al300;
    signed char* eax301;
    signed char* eax302;
    signed char al303;
    signed char* eax304;
    signed char* eax305;
    signed char al306;
    signed char* eax307;
    signed char* eax308;
    signed char al309;
    signed char* eax310;
    signed char* eax311;
    signed char al312;
    signed char* eax313;
    signed char* eax314;
    signed char al315;
    signed char* eax316;
    signed char* eax317;
    signed char al318;
    signed char* eax319;
    signed char* eax320;
    signed char al321;
    signed char* eax322;
    signed char* eax323;
    signed char al324;
    signed char* eax325;
    signed char* eax326;
    signed char al327;
    signed char* eax328;
    signed char* eax329;
    signed char al330;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
    *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
    *eax28 = reinterpret_cast<signed char>(*eax29 + al30);
    *eax31 = reinterpret_cast<signed char>(*eax32 + al33);
    *eax34 = reinterpret_cast<signed char>(*eax35 + al36);
    *eax37 = reinterpret_cast<signed char>(*eax38 + al39);
    *eax40 = reinterpret_cast<signed char>(*eax41 + al42);
    *eax43 = reinterpret_cast<signed char>(*eax44 + al45);
    *eax46 = reinterpret_cast<signed char>(*eax47 + al48);
    *eax49 = reinterpret_cast<signed char>(*eax50 + al51);
    *eax52 = reinterpret_cast<signed char>(*eax53 + al54);
    *eax55 = reinterpret_cast<signed char>(*eax56 + al57);
    *eax58 = reinterpret_cast<signed char>(*eax59 + al60);
    *eax61 = reinterpret_cast<signed char>(*eax62 + al63);
    *eax64 = reinterpret_cast<signed char>(*eax65 + al66);
    *eax67 = reinterpret_cast<signed char>(*eax68 + al69);
    *eax70 = reinterpret_cast<signed char>(*eax71 + al72);
    *eax73 = reinterpret_cast<signed char>(*eax74 + al75);
    *eax76 = reinterpret_cast<signed char>(*eax77 + al78);
    *eax79 = reinterpret_cast<signed char>(*eax80 + al81);
    *eax82 = reinterpret_cast<signed char>(*eax83 + al84);
    *eax85 = reinterpret_cast<signed char>(*eax86 + al87);
    *eax88 = reinterpret_cast<signed char>(*eax89 + al90);
    *eax91 = reinterpret_cast<signed char>(*eax92 + al93);
    *eax94 = reinterpret_cast<signed char>(*eax95 + al96);
    *eax97 = reinterpret_cast<signed char>(*eax98 + al99);
    *eax100 = reinterpret_cast<signed char>(*eax101 + al102);
    *eax103 = reinterpret_cast<signed char>(*eax104 + al105);
    *eax106 = reinterpret_cast<signed char>(*eax107 + al108);
    *eax109 = reinterpret_cast<signed char>(*eax110 + al111);
    *eax112 = reinterpret_cast<signed char>(*eax113 + al114);
    *eax115 = reinterpret_cast<signed char>(*eax116 + al117);
    *eax118 = reinterpret_cast<signed char>(*eax119 + al120);
    *eax121 = reinterpret_cast<signed char>(*eax122 + al123);
    *eax124 = reinterpret_cast<signed char>(*eax125 + al126);
    *eax127 = reinterpret_cast<signed char>(*eax128 + al129);
    *eax130 = reinterpret_cast<signed char>(*eax131 + al132);
    *eax133 = reinterpret_cast<signed char>(*eax134 + al135);
    *eax136 = reinterpret_cast<signed char>(*eax137 + al138);
    *eax139 = reinterpret_cast<signed char>(*eax140 + al141);
    *eax142 = reinterpret_cast<signed char>(*eax143 + al144);
    *eax145 = reinterpret_cast<signed char>(*eax146 + al147);
    *eax148 = reinterpret_cast<signed char>(*eax149 + al150);
    *eax151 = reinterpret_cast<signed char>(*eax152 + al153);
    *eax154 = reinterpret_cast<signed char>(*eax155 + al156);
    *eax157 = reinterpret_cast<signed char>(*eax158 + al159);
    *eax160 = reinterpret_cast<signed char>(*eax161 + al162);
    *eax163 = reinterpret_cast<signed char>(*eax164 + al165);
    *eax166 = reinterpret_cast<signed char>(*eax167 + al168);
    *eax169 = reinterpret_cast<signed char>(*eax170 + al171);
    *eax172 = reinterpret_cast<signed char>(*eax173 + al174);
    *eax175 = reinterpret_cast<signed char>(*eax176 + al177);
    *eax178 = reinterpret_cast<signed char>(*eax179 + al180);
    *eax181 = reinterpret_cast<signed char>(*eax182 + al183);
    *eax184 = reinterpret_cast<signed char>(*eax185 + al186);
    *eax187 = reinterpret_cast<signed char>(*eax188 + al189);
    *eax190 = reinterpret_cast<signed char>(*eax191 + al192);
    *eax193 = reinterpret_cast<signed char>(*eax194 + al195);
    *eax196 = reinterpret_cast<signed char>(*eax197 + al198);
    *eax199 = reinterpret_cast<signed char>(*eax200 + al201);
    *eax202 = reinterpret_cast<signed char>(*eax203 + al204);
    *eax205 = reinterpret_cast<signed char>(*eax206 + al207);
    *eax208 = reinterpret_cast<signed char>(*eax209 + al210);
    *eax211 = reinterpret_cast<signed char>(*eax212 + al213);
    *eax214 = reinterpret_cast<signed char>(*eax215 + al216);
    *eax217 = reinterpret_cast<signed char>(*eax218 + al219);
    *eax220 = reinterpret_cast<signed char>(*eax221 + al222);
    *eax223 = reinterpret_cast<signed char>(*eax224 + al225);
    *eax226 = reinterpret_cast<signed char>(*eax227 + al228);
    *eax229 = reinterpret_cast<signed char>(*eax230 + al231);
    *eax232 = reinterpret_cast<signed char>(*eax233 + al234);
    *eax235 = reinterpret_cast<signed char>(*eax236 + al237);
    *eax238 = reinterpret_cast<signed char>(*eax239 + al240);
    *eax241 = reinterpret_cast<signed char>(*eax242 + al243);
    *eax244 = reinterpret_cast<signed char>(*eax245 + al246);
    *eax247 = reinterpret_cast<signed char>(*eax248 + al249);
    *eax250 = reinterpret_cast<signed char>(*eax251 + al252);
    *eax253 = reinterpret_cast<signed char>(*eax254 + al255);
    *eax256 = reinterpret_cast<signed char>(*eax257 + al258);
    *eax259 = reinterpret_cast<signed char>(*eax260 + al261);
    *eax262 = reinterpret_cast<signed char>(*eax263 + al264);
    *eax265 = reinterpret_cast<signed char>(*eax266 + al267);
    *eax268 = reinterpret_cast<signed char>(*eax269 + al270);
    *eax271 = reinterpret_cast<signed char>(*eax272 + al273);
    *eax274 = reinterpret_cast<signed char>(*eax275 + al276);
    *eax277 = reinterpret_cast<signed char>(*eax278 + al279);
    *eax280 = reinterpret_cast<signed char>(*eax281 + al282);
    *eax283 = reinterpret_cast<signed char>(*eax284 + al285);
    *eax286 = reinterpret_cast<signed char>(*eax287 + al288);
    *eax289 = reinterpret_cast<signed char>(*eax290 + al291);
    *eax292 = reinterpret_cast<signed char>(*eax293 + al294);
    *eax295 = reinterpret_cast<signed char>(*eax296 + al297);
    *eax298 = reinterpret_cast<signed char>(*eax299 + al300);
    *eax301 = reinterpret_cast<signed char>(*eax302 + al303);
    *eax304 = reinterpret_cast<signed char>(*eax305 + al306);
    *eax307 = reinterpret_cast<signed char>(*eax308 + al309);
    *eax310 = reinterpret_cast<signed char>(*eax311 + al312);
    *eax313 = reinterpret_cast<signed char>(*eax314 + al315);
    *eax316 = reinterpret_cast<signed char>(*eax317 + al318);
    *eax319 = reinterpret_cast<signed char>(*eax320 + al321);
    *eax322 = reinterpret_cast<signed char>(*eax323 + al324);
    *eax325 = reinterpret_cast<signed char>(*eax326 + al327);
    *eax328 = reinterpret_cast<signed char>(*eax329 + al330);
}

uint32_t fun_40c600(uint32_t a1, uint32_t a2, int32_t a3, uint32_t a4) {
    uint32_t ecx5;
    int32_t ebx6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t esi9;
    uint32_t tmp32_10;

    if (a4) {
        ecx5 = a4;
        ebx6 = a3;
        eax7 = a1;
        do {
            ecx5 = ecx5 >> 1;
            __asm__("rcr ebx, 1");
            __asm__("rcr eax, 1");
        } while (ecx5);
        eax8 = eax7 / ebx6;
        esi9 = eax8;
        tmp32_10 = __intrinsic() + eax8 * a4;
        if (tmp32_10 < __intrinsic()) 
            goto addr_40c66d_5;
        if (tmp32_10 > a2) 
            goto addr_40c66d_5;
        if (tmp32_10 < a2) 
            goto addr_40c676_8;
        if (a3 * esi9 <= a1) 
            goto addr_40c676_8;
    } else {
        esi9 = a1 / a3;
        goto addr_40c678_11;
    }
    addr_40c66d_5:
    --esi9;
    addr_40c676_8:
    addr_40c678_11:
    return esi9;
}
