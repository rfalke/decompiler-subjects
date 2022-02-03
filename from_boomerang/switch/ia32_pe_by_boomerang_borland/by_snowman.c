
uint32_t fun_40106c(int32_t a1, int32_t a2, int32_t a3) {
    __asm__("pushad ");
    goto 0xbad;
}

void fun_4099fc();

void fun_407d64(uint32_t a1, uint32_t a2) {
    fun_4099fc();
    goto a2;
}

uint32_t fun_407d78(uint32_t a1) {
    uint32_t eax2;

    return eax2;
}

uint32_t fun_4099ea();

uint32_t fun_407d3c() {
    uint32_t eax1;

    eax1 = fun_4099ea();
    return eax1;
}

uint32_t g40a10f = 0;

int32_t fun_407d54(uint32_t a1);

int32_t fun_40998a(int32_t a1, int32_t a2);

void fun_4099ba(int32_t a1, int32_t a2, int32_t a3);

void fun_407d80(uint32_t a1, int32_t a2, int32_t a3, int32_t a4);

void fun_4010f3() {
    int1_t cf1;
    uint32_t v2;
    int32_t eax3;
    int32_t eax4;
    uint32_t v5;

    cf1 = g40a10f < 0;
    if (!cf1 && (v2 = g40a10f, eax3 = fun_407d54(v2), !!eax3)) {
        eax4 = fun_40998a(8, eax3);
        fun_4099ba(eax4, 8, eax3);
        v5 = g40a10f;
        fun_407d80(v5, eax4, 8, eax3);
    }
    return;
}

void fun_4099f6();

int32_t fun_407d54(uint32_t a1) {
    int32_t ebp2;

    fun_4099f6();
    goto ebp2;
}

int32_t GetProcessHeap = 0xf2b2;

int32_t fun_40998a(int32_t a1, int32_t a2) {
    goto GetProcessHeap;
}

int32_t HeapFree = 0xf338;

void fun_4099ba(int32_t a1, int32_t a2, int32_t a3) {
    goto HeapFree;
}

void fun_407d80(uint32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    return;
}

void fun_4099f0();

void fun_407d44(uint32_t a1) {
    int32_t ebp2;

    fun_4099f0();
    goto ebp2;
}

void*** g2c;

void** fun_401140(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    uint32_t eax7;
    void*** edx8;

    eax7 = g40a10f;
    edx8 = g2c;
    return edx8[eax7 * 4];
}

struct s0 {
    signed char f0;
    signed char f1;
};

uint32_t fun_403ad0(int32_t a1, int32_t a2, struct s0* a3, int32_t a4, int32_t a5, void* a6);

void** fun_4033c4(void** ecx, void** a2, void** a3, void** a4);

uint32_t fun_4038e4(struct s0* a1) {
    uint32_t eax2;

    eax2 = fun_403ad0(fun_4033c4, 0x40a6d0, a1, 0, 0, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 12);
    return eax2;
}

void** fun_4021ac(void** ecx, void** a2, void** a3, void** a4) {
    void** ax5;
    void** edi6;
    void* edx7;
    void*** ecx8;
    void** eax9;
    uint32_t edx10;
    uint32_t edx11;
    uint32_t edx12;
    uint32_t edx13;
    uint32_t edx14;
    uint32_t edx15;

    ax5 = a3;
    edi6 = a2;
    (&ax5)[1] = ax5;
    if (!(reinterpret_cast<unsigned char>(a4) & 0xfffffffc)) {
        edx7 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a4) & 3);
        if (edx7 && (*reinterpret_cast<void***>(edi6) = ax5, *reinterpret_cast<signed char*>(&edx7) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx7) - 1), !!*reinterpret_cast<signed char*>(&edx7))) {
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi6) + reinterpret_cast<uint32_t>(edx7) - 1) = ax5;
        }
        return a2;
    } else {
        *reinterpret_cast<void***>(edi6) = ax5;
        ecx8 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi6) + reinterpret_cast<unsigned char>(a4) + 0xfffffffc);
        *reinterpret_cast<void***>(edi6 + 2) = ax5;
        eax9 = *reinterpret_cast<void***>(edi6);
        edx10 = reinterpret_cast<unsigned char>(a4) >> 3;
        if (!edx10) {
            *ecx8 = eax9;
            return a2;
        } else {
            do {
                *reinterpret_cast<void***>(edi6) = eax9;
                *reinterpret_cast<void***>(edi6 + 4) = eax9;
                edx11 = edx10 - 1;
                if (!edx11) 
                    break;
                *reinterpret_cast<void***>(edi6 + 8) = eax9;
                *reinterpret_cast<void***>(edi6 + 12) = eax9;
                edx12 = edx11 - 1;
            } while (edx12 && ((*reinterpret_cast<void***>(edi6 + 16) = eax9, *reinterpret_cast<void***>(edi6 + 20) = eax9, edx13 = edx12 - 1, !!edx13) && ((*reinterpret_cast<void***>(edi6 + 24) = eax9, *reinterpret_cast<void***>(edi6 + 28) = eax9, edx14 = edx13 - 1, !!edx14) && ((*reinterpret_cast<void***>(edi6 + 32) = eax9, *reinterpret_cast<void***>(edi6 + 36) = eax9, edx15 = edx14 - 1, !!edx15) && (*reinterpret_cast<void***>(edi6 + 40) = eax9, *reinterpret_cast<void***>(edi6 + 44) = eax9, edi6 = edi6 + 48, edx10 = edx15 - 1, !!edx10)))));
            *ecx8 = eax9;
            *(ecx8 - 4) = eax9;
            return a2;
        }
    }
}

int32_t VirtualAlloc = 0xf412;

void** fun_409a08(void** a1, void** a2, void** a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    goto VirtualAlloc;
}

int32_t fun_409a0e();

void fun_40130c(void** a1, void** a2, void** a3, int32_t a4) {
    int32_t eax5;
    int32_t eax6;

    eax5 = fun_409a0e();
    if (!(eax5 - 1)) {
        goto eax6;
    } else {
        goto eax6;
    }
}

void** fun_406cdc(void** ecx, void** a2, void** a3, void** a4);

void** fun_406f40(void** ecx, int32_t a2);

void** fun_406e08(void** ecx, void** a2, void** a3, void** a4) {
    void** ebp5;
    void** eax6;

    fun_406cdc(ecx, a2, ebp5, __return_address());
    eax6 = fun_406f40(a2, 1);
    return eax6;
}

void fun_4014d0(signed char* a1, signed char* a2) {
    return;
}

void** g40a234 = reinterpret_cast<void**>(0);

void** g40a238 = reinterpret_cast<void**>(0);

struct s1 {
    int32_t f0;
    void** f4;
};

void** g40a23c = reinterpret_cast<void**>(0);

void** g40a228 = reinterpret_cast<void**>(0);

void fun_4014d4();

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(64);

uint32_t fun_401514(void** a1, void** a2, void** a3) {
    void** esi4;
    void** ecx5;
    void** edx6;
    struct s1* ebx7;
    void** ebx8;
    int1_t zf9;
    void** esi10;
    void** esi11;
    void** eax12;
    void** edx13;
    int1_t cf14;
    void** edx15;
    void* tmp32_16;
    uint32_t eax17;

    esi4 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<unsigned char>(a2) >= reinterpret_cast<unsigned char>(0x1000)) {
        *reinterpret_cast<void***>(a1 + 8) = reinterpret_cast<void**>(1);
        *reinterpret_cast<void***>(a1 + 12) = a1;
        *reinterpret_cast<void***>(a1) = a2;
        *reinterpret_cast<void***>(a1 + 4) = a3;
        ecx5 = g40a234;
        *reinterpret_cast<void***>(a1 + 0x8c) = ecx5;
        *reinterpret_cast<void***>(a1 + 0x90) = reinterpret_cast<void**>(0);
        edx6 = g40a234;
        if (!edx6) {
            g40a238 = a1;
        } else {
            *reinterpret_cast<void***>(edx6 + 0x90) = a1;
        }
        g40a234 = a1;
        ebx7 = reinterpret_cast<struct s1*>(a1 + 0x94);
        ebx7->f0 = 0;
        ebx8 = reinterpret_cast<void**>(&ebx7->f0 + 1);
        zf9 = g40a23c == 0;
        if (zf9) {
            esi10 = g40a228;
            esi11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi10) + reinterpret_cast<unsigned char>(esi10) + 3 & 0xfffffffc);
            g40a23c = ebx8 + 4;
            *reinterpret_cast<void***>(ebx8) = esi11;
            ebx8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx8) + (reinterpret_cast<unsigned char>(esi11) & 0xfffffffc) + 4);
            fun_4014d4();
            esi4 = esi11 + 4;
        }
        eax12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a2 - 0x94) - 12 - reinterpret_cast<unsigned char>(esi4));
        edx13 = eax12 + 1;
        *reinterpret_cast<void***>(ebx8) = edx13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx8) + (reinterpret_cast<unsigned char>(edx13) & 0xfffffffc) + 4) = 2;
        cf14 = reinterpret_cast<unsigned char>(eax12) < reinterpret_cast<unsigned char>(g40a228);
        if (!cf14) {
            edx15 = image_base_;
        } else {
            tmp32_16 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax12) + reinterpret_cast<unsigned char>(eax12) + reinterpret_cast<unsigned char>(g40a23c));
            edx15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(tmp32_16) + 0xfffffff4);
        }
        *reinterpret_cast<void***>(ebx8 + 4) = *reinterpret_cast<void***>(edx15 + 4);
        *reinterpret_cast<void***>(ebx8 + 8) = edx15;
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx8 + 4) + 8) = ebx8;
        *reinterpret_cast<void***>(edx15 + 4) = ebx8;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx8) + reinterpret_cast<unsigned char>(eax12)) = eax12 + 4;
        eax17 = 0;
    } else {
        eax17 = 0xffffffff;
    }
    return eax17;
}

struct s2 {
    signed char[4] pad4;
    struct s2* f4;
    struct s2* f8;
};

struct s3 {
    signed char[4] pad4;
    int32_t f4;
    int32_t f8;
};

void fun_4014d4() {
    void** edx1;
    int1_t less2;
    void* tmp32_3;
    struct s2* eax4;
    void** eax5;
    void* tmp32_6;
    struct s3* eax7;

    edx1 = reinterpret_cast<void**>(12);
    while (less2 = reinterpret_cast<signed char>(edx1) < reinterpret_cast<signed char>(g40a228), less2) {
        tmp32_3 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx1) + reinterpret_cast<unsigned char>(edx1) + reinterpret_cast<unsigned char>(g40a23c));
        eax4 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(tmp32_3) + 0xfffffff4);
        eax4->f4 = eax4;
        eax4->f8 = eax4;
        edx1 = edx1 + 4;
    }
    eax5 = g40a228;
    tmp32_6 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax5) + reinterpret_cast<unsigned char>(eax5) + reinterpret_cast<unsigned char>(g40a23c));
    eax7 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(tmp32_6) + 0xfffffff4);
    eax7->f4 = 0;
    eax7->f8 = 0;
    return;
}

void fun_4099ae(void** a1, int32_t a2);

uint32_t fun_401e28() {
    int32_t v1;

    fun_4099ae(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 4, 32);
    goto v1;
}

struct s4 {
    unsigned char f0;
    signed char[3] pad4;
    void** f4;
};

void** fun_401ae4(void** a1);

struct s6 {
    signed char[8] pad8;
    struct s5* f8;
};

struct s5 {
    uint32_t f0;
    struct s6* f4;
    struct s5* f8;
};

uint32_t fun_401614(void** a1, void** a2) {
    void** edx3;
    struct s4* eax4;
    void* esi5;
    uint32_t eax6;
    struct s5* eax7;
    void* esi8;
    void* edx9;
    int1_t cf10;
    struct s6* edx11;
    void* edx12;
    void** ecx13;
    void* edx14;
    void* tmp32_15;
    void* edx16;
    void** ecx17;

    edx3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) & 0xfffff000);
    eax4 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) + reinterpret_cast<unsigned char>(a1) + 0xfffffffc);
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) <= reinterpret_cast<unsigned char>(edx3)) {
        esi5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx3) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)));
        eax4->f0 = reinterpret_cast<unsigned char>(eax4->f0 + (reinterpret_cast<uint32_t>(esi5) - 4));
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax4) + (eax4->f0 & 0xfffffffc) + 4) = 0;
        fun_401ae4(&eax4->f4);
        *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) + reinterpret_cast<uint32_t>(esi5));
    } else {
        if (!(eax4->f0 & 2)) {
            eax6 = 0xffffffff;
            goto addr_4016fb_5;
        } else {
            eax7 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(eax4) - *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax4) + 0xfffffffc));
            esi8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) - reinterpret_cast<unsigned char>(edx3));
            if (reinterpret_cast<uint32_t>(esi8) <= (eax7->f0 & 0xfffffffc) - 12) {
                eax7->f0 = eax7->f0 - reinterpret_cast<uint32_t>(esi8);
                edx9 = reinterpret_cast<void*>(eax7->f0 & 0xfffffffc);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax7) + reinterpret_cast<uint32_t>(edx9)) = reinterpret_cast<uint32_t>(edx9) + 4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax7) + (eax7->f0 & 0xfffffffc) + 4) = 2;
                cf10 = reinterpret_cast<unsigned char>(eax7->f0 & 0xfffffffc) < reinterpret_cast<unsigned char>(g40a228);
                if (cf10) {
                    edx11 = eax7->f4;
                    edx11->f8 = eax7->f8;
                    eax7->f8->f4 = edx11;
                    edx12 = reinterpret_cast<void*>(eax7->f0 & 0xfffffffc);
                    ecx13 = g40a23c;
                    eax7->f4 = *reinterpret_cast<struct s6**>(reinterpret_cast<unsigned char>(ecx13) + (reinterpret_cast<uint32_t>(edx12) + reinterpret_cast<uint32_t>(edx12)) - 8);
                    edx14 = reinterpret_cast<void*>(eax7->f0 & 0xfffffffc);
                    tmp32_15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx14) + reinterpret_cast<uint32_t>(edx14) + reinterpret_cast<unsigned char>(g40a23c));
                    eax7->f8 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(tmp32_15) - 12);
                    eax7->f4->f8 = eax7;
                    edx16 = reinterpret_cast<void*>(eax7->f0 & 0xfffffffc);
                    ecx17 = g40a23c;
                    *reinterpret_cast<struct s5**>(reinterpret_cast<unsigned char>(ecx17) + (reinterpret_cast<uint32_t>(edx16) + reinterpret_cast<uint32_t>(edx16)) - 8) = eax7;
                }
            } else {
                eax6 = 0xffffffff;
                goto addr_4016fb_5;
            }
        }
    }
    eax6 = 0;
    addr_4016fb_5:
    return eax6;
}

uint32_t fun_4012c0() {
    int32_t v1;
    int32_t v2;
    int32_t ebx3;
    int32_t v4;
    int32_t esi5;
    int32_t v6;
    int32_t edi7;
    int32_t esi8;
    int32_t edx9;
    void** ebx10;
    void** eax11;
    uint32_t eax12;
    void** eax13;

    v1 = reinterpret_cast<int32_t>(__return_address());
    v2 = ebx3;
    v4 = esi5;
    v6 = edi7;
    esi8 = edx9;
    ebx10 = eax11;
    if (!esi8) {
        addr_401302_2:
        eax12 = 1;
    } else {
        do {
            eax13 = fun_409a08(ebx10, 0x1000, 0x1000, 4, v6, v4, v2, v1);
            if (!eax13) 
                goto addr_4012e3_4;
            ebx10 = ebx10 + 0x1000;
            esi8 = esi8 - 0x1000;
        } while (esi8);
        goto addr_401302_2;
    }
    addr_401307_6:
    return eax12;
    addr_4012e3_4:
    fun_40130c(ebx10, 0x1000, 0x1000, 4);
    eax12 = 0;
    goto addr_401307_6;
}

void** fun_401324() {
    int32_t eax1;
    int32_t eax2;

    eax1 = fun_409a0e();
    if (!(eax1 - 1)) {
        goto eax2;
    } else {
        goto eax2;
    }
}

uint32_t g40a250 = 0;

uint32_t g40a254 = 0;

void** g40a230 = reinterpret_cast<void**>(0);

void** g40a22c = reinterpret_cast<void**>(0);

void** fun_4019c4(void** a1) {
    int32_t v2;
    int32_t ebp3;
    void** v4;
    void** ebx5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    uint32_t eax10;
    uint32_t ecx11;
    int1_t below_or_equal12;
    void** ecx13;
    void** ebx14;
    uint32_t ecx15;
    void** ebx16;
    void** eax17;
    void** edi18;
    uint32_t esi19;
    void** ecx20;

    v2 = ebp3;
    v4 = ebx5;
    v6 = esi7;
    v8 = edi9;
    eax10 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) & 0xfffffffc) + reinterpret_cast<unsigned char>(a1) + 4;
    ecx11 = g40a250;
    below_or_equal12 = ecx11 <= g40a254;
    if (below_or_equal12) {
        ecx13 = g40a230;
    } else {
        ecx13 = g40a22c;
    }
    ebx14 = *reinterpret_cast<void***>(a1) - 12;
    if (reinterpret_cast<unsigned char>(ecx13) <= reinterpret_cast<unsigned char>(ebx14)) {
        ecx15 = reinterpret_cast<unsigned char>(ebx14) & ~reinterpret_cast<unsigned char>(ecx13 - 1);
        ebx16 = g40a234;
        if (!ebx16) {
            addr_401aae_6:
            eax17 = reinterpret_cast<void**>(0);
        } else {
            do {
                if (eax10 == reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16)) + reinterpret_cast<unsigned char>(ebx16) + 0xfffffffc) 
                    goto addr_401a25_8;
                ebx16 = *reinterpret_cast<void***>(ebx16 + 0x8c);
            } while (ebx16);
            goto addr_401aae_6;
        }
    } else {
        eax17 = reinterpret_cast<void**>(0);
    }
    addr_401ab0_11:
    return eax17;
    addr_401a25_8:
    edi18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16)) - ecx15);
    fun_401614(ebx16, edi18);
    while (reinterpret_cast<unsigned char>(edi18) + reinterpret_cast<unsigned char>(ebx16) <= reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx16 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16 + 8)) * 4) + 8))) {
        *reinterpret_cast<void***>(ebx16 + 8) = *reinterpret_cast<void***>(ebx16 + 8) - 1;
        esi19 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16)) - (*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx16 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16 + 8)) * 4) + 12) - reinterpret_cast<unsigned char>(ebx16));
        fun_40130c(v8, v6, v4, v2);
        g40a254 = g40a254 - esi19;
        fun_401324();
        ecx20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx16 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16 + 8)) * 4) + 12)) - reinterpret_cast<unsigned char>(ebx16));
        *reinterpret_cast<void***>(ebx16 + 4) = ecx20;
        *reinterpret_cast<void***>(ebx16) = ecx20;
    }
    fun_40130c(v8, v6, v4, v2);
    g40a254 = g40a254 - (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16)) - reinterpret_cast<unsigned char>(edi18));
    *reinterpret_cast<void***>(ebx16) = edi18;
    eax17 = reinterpret_cast<void**>(1);
    goto addr_401ab0_11;
}

int32_t fun_401298();

void** g0;

void** fun_401bec(void** ecx, void** a2) {
    void** v3;
    int32_t eax4;

    v3 = reinterpret_cast<void**>(0);
    eax4 = fun_401298();
    if (eax4) {
        v3 = reinterpret_cast<void**>(4);
        g0 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(a2 + 0x1003) & 0xfffff000) - 4);
    }
    return v3;
}

uint32_t g40a218 = 0x400000;

uint32_t fun_40122c(void*** ecx);

void* g40a21c = reinterpret_cast<void*>(0x10000);

void* g40a220 = reinterpret_cast<void*>(0x1000);

uint32_t fun_401700(void** a1) {
    void* ebp2;
    void* esi3;
    int1_t zf4;
    uint32_t eax5;
    int1_t zf6;
    void** eax7;
    void** ebx8;
    int1_t cf9;
    uint32_t eax10;
    uint32_t edx11;
    uint32_t tmp32_12;
    int1_t cf13;
    void* ecx14;
    uint32_t eax15;
    uint32_t tmp32_16;
    int1_t cf17;
    void* edx18;
    void** ebx19;
    void** edi20;
    uint32_t eax21;
    uint32_t eax22;
    uint32_t tmp32_23;
    void** v24;
    void** v25;
    void* v26;
    void* esi27;
    uint32_t eax28;
    uint32_t tmp32_29;
    void** ecx30;
    int32_t v31;
    void* v32;
    void** v33;
    uint32_t eax34;
    uint32_t tmp32_35;
    void** v36;
    uint32_t ecx37;
    uint32_t tmp32_38;
    int1_t cf39;
    void* edx40;
    uint32_t ecx41;
    uint32_t tmp32_42;
    int1_t cf43;
    void* ecx44;
    uint32_t edx45;
    uint32_t tmp32_46;
    int1_t cf47;
    void* eax48;
    uint32_t edx49;
    uint32_t tmp32_50;
    int1_t cf51;
    void* ecx52;
    void** eax53;
    uint32_t eax54;
    uint32_t eax55;
    uint32_t tmp32_56;
    void** v57;
    uint32_t tmp32_58;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esi3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a1 + 0xfff) & 0xfffff000);
    zf4 = g40a250 == 0;
    if (zf4) {
        eax5 = fun_401e28();
        g40a250 = eax5;
    }
    zf6 = g40a23c == 0;
    if (zf6) {
        eax7 = g40a228;
        esi3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi3) + (reinterpret_cast<unsigned char>(eax7) + reinterpret_cast<unsigned char>(eax7) + 0x109f & 0xfffff000));
    }
    ebx8 = g40a234;
    if (!ebx8) {
        addr_401866_6:
        cf9 = reinterpret_cast<uint32_t>(esi3) + 0x1000 < g40a218;
        if (!cf9) {
        }
    } else {
        do {
            if (reinterpret_cast<uint32_t>(esi3) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx8 + 4)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx8))) 
                goto addr_401769_10;
            ebx8 = *reinterpret_cast<void***>(ebx8 + 0x8c);
        } while (ebx8);
        goto addr_401866_6;
    }
    eax10 = fun_40122c(reinterpret_cast<int32_t>(ebp2) - 8);
    if (eax10) {
        edx11 = g40a254;
        tmp32_12 = edx11 + reinterpret_cast<int32_t>(g40a21c);
        cf13 = tmp32_12 < g40a250;
        if (!cf13) {
            ecx14 = g40a220;
        } else {
            ecx14 = g40a21c;
        }
        eax15 = g40a254;
        tmp32_16 = eax15 + reinterpret_cast<int32_t>(g40a21c);
        cf17 = tmp32_16 < g40a250;
        if (!cf17) {
            edx18 = g40a220;
        } else {
            edx18 = g40a21c;
        }
        ebx19 = g40a234;
        edi20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi3) + (reinterpret_cast<int32_t>(ecx14) - 1) + 0x1000 & ~reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(edx18) - 1));
        if (ebx19) 
            goto addr_4018e9_20;
    } else {
        eax21 = 0xffffffff;
        goto addr_4019bb_22;
    }
    addr_401987_23:
    eax22 = fun_4012c0();
    if (eax22) {
        tmp32_23 = g40a254 + reinterpret_cast<unsigned char>(edi20);
        g40a254 = tmp32_23;
        fun_401514(v24, edi20, v25);
        eax21 = 0;
    } else {
        fun_401324();
        eax21 = 0xffffffff;
    }
    addr_4019bb_22:
    return eax21;
    do {
        addr_4018e9_20:
        if (!reinterpret_cast<int1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx19 + 4)) + reinterpret_cast<unsigned char>(ebx19) == v26)) 
            continue;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx19 + 8)) < reinterpret_cast<signed char>(32)) 
            break;
        ebx19 = *reinterpret_cast<void***>(ebx19 + 0x8c);
    } while (ebx19);
    goto addr_401987_23;
    esi27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx19 + 4)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx19)));
    if (!esi27) {
        addr_401935_29:
        eax28 = fun_4012c0();
        if (!eax28) {
            eax21 = 0xffffffff;
            goto addr_4019bb_22;
        } else {
            tmp32_29 = g40a254 + (reinterpret_cast<unsigned char>(edi20) - reinterpret_cast<uint32_t>(esi27));
            g40a254 = tmp32_29;
            ecx30 = *reinterpret_cast<void***>(ebx19 + 8);
            *reinterpret_cast<void***>(ebx19 + 8) = *reinterpret_cast<void***>(ebx19 + 8) + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx19 + reinterpret_cast<unsigned char>(ecx30) * 4) + 12) = v31;
            *reinterpret_cast<void***>(ebx19 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx19 + 4)) + reinterpret_cast<uint32_t>(v32));
            v33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi20) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx19)) - reinterpret_cast<uint32_t>(esi27));
            fun_401614(ebx19, v33);
            eax21 = 0;
            goto addr_4019bb_22;
        }
    } else {
        eax34 = fun_4012c0();
        if (!eax34) {
            eax21 = 0xffffffff;
            goto addr_4019bb_22;
        } else {
            tmp32_35 = g40a254 + reinterpret_cast<uint32_t>(esi27);
            g40a254 = tmp32_35;
            v36 = *reinterpret_cast<void***>(ebx19 + 4);
            fun_401614(ebx19, v36);
            goto addr_401935_29;
        }
    }
    addr_401769_10:
    ecx37 = g40a254;
    tmp32_38 = ecx37 + reinterpret_cast<int32_t>(g40a21c);
    cf39 = tmp32_38 < g40a250;
    if (!cf39) {
        edx40 = g40a220;
    } else {
        edx40 = g40a21c;
    }
    ecx41 = g40a254;
    tmp32_42 = ecx41 + reinterpret_cast<int32_t>(g40a21c);
    cf43 = tmp32_42 < g40a250;
    if (!cf43) {
        ecx44 = g40a220;
    } else {
        ecx44 = g40a21c;
    }
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx8 + 4)) >= reinterpret_cast<unsigned char>((reinterpret_cast<int32_t>(edx40) - 1 + reinterpret_cast<uint32_t>(esi3) & ~reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx44) - 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx8)))) {
        edx45 = g40a254;
        tmp32_46 = edx45 + reinterpret_cast<int32_t>(g40a21c);
        cf47 = tmp32_46 < g40a250;
        if (!cf47) {
            eax48 = g40a220;
        } else {
            eax48 = g40a21c;
        }
        edx49 = g40a254;
        tmp32_50 = edx49 + reinterpret_cast<int32_t>(g40a21c);
        cf51 = tmp32_50 < g40a250;
        if (!cf51) {
            ecx52 = g40a220;
        } else {
            ecx52 = g40a21c;
        }
        eax53 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(eax48) - 1 + reinterpret_cast<uint32_t>(esi3) & ~reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx52) - 1)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx8)));
    } else {
        eax53 = *reinterpret_cast<void***>(ebx8 + 4);
    }
    eax54 = fun_4012c0();
    if (!eax54) {
        eax55 = fun_4012c0();
        if (!eax55) {
            eax21 = 0xffffffff;
            goto addr_4019bb_22;
        } else {
            tmp32_56 = g40a254 + 0x1000;
            g40a254 = tmp32_56;
            v57 = *reinterpret_cast<void***>(ebx8) + 0x1000;
            fun_401614(ebx8, v57);
            eax21 = 0;
            goto addr_4019bb_22;
        }
    } else {
        tmp32_58 = g40a254 + (reinterpret_cast<unsigned char>(eax53) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx8)));
        g40a254 = tmp32_58;
        fun_401614(ebx8, eax53);
        eax21 = 0;
        goto addr_4019bb_22;
    }
}

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(64);

void** fun_401c50(void** ecx, void** a2) {
    void** esi3;
    void** ebx4;
    int1_t zf5;
    int1_t cf6;
    void** eax7;
    void** ecx8;
    void** eax9;
    void** edx10;
    void** v11;
    uint32_t eax12;
    void** ecx13;
    void* esi14;
    void** ecx15;
    void** edx16;
    int1_t cf17;
    void** ecx18;
    void** ecx19;
    void* tmp32_20;
    void** ecx21;
    int1_t zf22;
    void** edx23;
    void* edx24;
    int1_t cf25;
    void** edx26;
    void** ecx27;
    int1_t zf28;
    void* ecx29;
    void* tmp32_30;
    void** eax31;
    void** edx32;
    void* tmp32_33;
    void** eax34;
    void** eax35;
    void* edx36;
    void** edx37;

    esi3 = a2;
    if (esi3) {
        if (reinterpret_cast<unsigned char>(esi3) >= reinterpret_cast<unsigned char>(12)) {
            ebx4 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi3 + 3) & 0xfffffffc);
        } else {
            ebx4 = reinterpret_cast<void**>(12);
        }
        zf5 = g40a23c == 0;
        if (zf5) {
            fun_401700(1);
        }
        cf6 = reinterpret_cast<unsigned char>(ebx4) < reinterpret_cast<unsigned char>(g40a228);
        if (cf6) 
            goto addr_401c8e_8;
    } else {
        eax7 = reinterpret_cast<void**>(0);
        goto addr_401e22_10;
    }
    ecx8 = image_base_;
    eax9 = ecx8;
    edx10 = *reinterpret_cast<void***>(ecx8);
    if (reinterpret_cast<unsigned char>(ebx4) <= reinterpret_cast<unsigned char>(edx10)) {
        addr_401d39_12:
        if (eax9 == 0x40a240) {
            v11 = esi3 + 64;
            eax12 = fun_401700(v11);
            if (eax12) {
                eax7 = reinterpret_cast<void**>(0);
            } else {
                eax7 = fun_401c50(v11, esi3);
            }
        } else {
            ecx13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9)) & 0xfffffffc);
            esi14 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx13) - reinterpret_cast<unsigned char>(ebx4));
            if (reinterpret_cast<uint32_t>(esi14) >= 16) {
                *reinterpret_cast<void***>(eax9) = ebx4;
                ecx15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi14) - 4);
                edx16 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(ebx4) & 0xfffffffc) + reinterpret_cast<unsigned char>(eax9) + 4);
                *reinterpret_cast<void***>(edx16) = ecx15 + 1;
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx16) + reinterpret_cast<unsigned char>(ecx15)) = ecx15 + 4;
                cf17 = reinterpret_cast<unsigned char>(ecx15) < reinterpret_cast<unsigned char>(g40a228);
                if (!cf17) {
                    ecx18 = *reinterpret_cast<void***>(eax9 + 8);
                    *reinterpret_cast<void***>(ecx18 + 4) = edx16;
                    *reinterpret_cast<void***>(edx16 + 8) = ecx18;
                    ecx19 = *reinterpret_cast<void***>(eax9 + 4);
                    *reinterpret_cast<void***>(ecx19 + 8) = edx16;
                    *reinterpret_cast<void***>(edx16 + 4) = ecx19;
                    image_base_ = edx16;
                } else {
                    tmp32_20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx15) + reinterpret_cast<unsigned char>(ecx15) + reinterpret_cast<unsigned char>(g40a23c));
                    ecx21 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(tmp32_20) + 0xfffffff4);
                    *reinterpret_cast<void***>(edx16 + 4) = *reinterpret_cast<void***>(ecx21 + 4);
                    *reinterpret_cast<void***>(edx16 + 8) = ecx21;
                    *reinterpret_cast<void***>(*reinterpret_cast<void***>(edx16 + 4) + 8) = edx16;
                    *reinterpret_cast<void***>(ecx21 + 4) = edx16;
                    zf22 = eax9 == image_base_;
                    if (zf22) {
                        image_base_ = *reinterpret_cast<void***>(eax9 + 4);
                    }
                    edx23 = *reinterpret_cast<void***>(eax9 + 4);
                    *reinterpret_cast<void***>(edx23 + 8) = *reinterpret_cast<void***>(eax9 + 8);
                    *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax9 + 8) + 4) = edx23;
                }
                eax7 = eax9 + 4;
            } else {
                *reinterpret_cast<void***>(eax9) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9)) & 0xfffffffe);
                edx24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9)) & 0xfffffffc);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(eax9) + reinterpret_cast<uint32_t>(edx24) + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(eax9) + reinterpret_cast<uint32_t>(edx24) + 4) & 0xfffffffd;
                cf25 = reinterpret_cast<unsigned char>(ecx13) < reinterpret_cast<unsigned char>(g40a228);
                if (!cf25) {
                    image_base_ = *reinterpret_cast<void***>(eax9 + 4);
                }
                edx26 = *reinterpret_cast<void***>(eax9 + 4);
                *reinterpret_cast<void***>(edx26 + 8) = *reinterpret_cast<void***>(eax9 + 8);
                eax7 = eax9 + 4;
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax9 + 8) + 4) = edx26;
            }
        }
    } else {
        *reinterpret_cast<void***>(ecx8) = reinterpret_cast<void**>(0xfffffffd);
        eax9 = *reinterpret_cast<void***>(eax9 + 4);
        while (reinterpret_cast<unsigned char>(ebx4) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9))) {
            eax9 = *reinterpret_cast<void***>(eax9 + 4);
        }
        ecx27 = image_base_;
        *reinterpret_cast<void***>(ecx27) = edx10;
        zf28 = eax9 == image_base_;
        if (!zf28) 
            goto addr_401d39_12; else 
            goto addr_401d34_30;
    }
    addr_401e22_10:
    return eax7;
    addr_401d34_30:
    eax9 = reinterpret_cast<void**>(0x40a240);
    goto addr_401d39_12;
    addr_401c8e_8:
    ecx29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx4) + reinterpret_cast<unsigned char>(ebx4));
    tmp32_30 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx29) + reinterpret_cast<unsigned char>(g40a23c));
    eax31 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(tmp32_30) + 0xfffffff4);
    if (eax31 == *reinterpret_cast<void***>(eax31 + 4)) {
        edx32 = image_base_;
        eax9 = edx32;
        if (!reinterpret_cast<int1_t>(edx32 == 0x40a240)) 
            goto addr_401d39_12;
        tmp32_33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx29) + 8 + reinterpret_cast<unsigned char>(g40a23c));
        eax34 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(tmp32_33) + 0xfffffff4);
        while (eax34 == *reinterpret_cast<void***>(eax34 + 4)) {
            eax34 = eax34 + 8;
        }
        if (*reinterpret_cast<void***>(eax34 + 4)) 
            goto addr_401cf9_36;
    } else {
        eax35 = *reinterpret_cast<void***>(eax31 + 4);
        *reinterpret_cast<void***>(eax35) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax35)) & 0xfffffffe);
        edx36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax35)) & 0xfffffffc);
        *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(eax35) + reinterpret_cast<uint32_t>(edx36) + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(eax35) + reinterpret_cast<uint32_t>(edx36) + 4) & 0xfffffffd;
        edx37 = *reinterpret_cast<void***>(eax35 + 4);
        *reinterpret_cast<void***>(edx37 + 8) = *reinterpret_cast<void***>(eax35 + 8);
        eax7 = eax35 + 4;
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax35 + 8) + 4) = edx37;
        goto addr_401e22_10;
    }
    eax9 = image_base_;
    goto addr_401d39_12;
    addr_401cf9_36:
    eax9 = *reinterpret_cast<void***>(eax34 + 4);
    goto addr_401d39_12;
}

void** fun_401ea0(void** ecx, void** a2, void** a3) {
    void*** edx4;
    void** eax5;
    void* ecx6;
    void* ebx7;
    uint32_t esi8;
    void** eax9;
    void** v10;
    int1_t cf11;
    int1_t zf12;
    void* esi13;
    void* eax14;
    void** ebx15;
    void** eax16;
    void** edx17;
    void* edx18;
    int1_t cf19;
    void** ecx20;
    void** edx21;
    void* tmp32_22;

    edx4 = reinterpret_cast<void***>(a2 + 0xfffffffc);
    eax5 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(*edx4) & 0xfffffffc) + reinterpret_cast<uint32_t>(edx4) + 4);
    if (reinterpret_cast<unsigned char>(a3) >= reinterpret_cast<unsigned char>(12)) {
        ecx6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a3 + 3) & 0xfffffffc);
    } else {
        ecx6 = reinterpret_cast<void*>(12);
    }
    ebx7 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*edx4) & 0xfffffffc);
    if (ecx6 != ebx7) {
        esi8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5)) & 1;
        if (esi8) {
            ebx7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx7) + ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5)) & 0xfffffffc) + 4));
        }
        if (reinterpret_cast<uint32_t>(ecx6) > reinterpret_cast<uint32_t>(ebx7)) {
            eax9 = reinterpret_cast<void**>(0);
        } else {
            v10 = reinterpret_cast<void**>(0);
            if (esi8) {
                cf11 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5)) & 0xfffffffc) < reinterpret_cast<unsigned char>(g40a228);
                if (!cf11) {
                    v10 = *reinterpret_cast<void***>(eax5 + 8);
                }
                zf12 = eax5 == image_base_;
                if (zf12) {
                    image_base_ = *reinterpret_cast<void***>(eax5 + 4);
                }
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax5 + 4) + 8) = *reinterpret_cast<void***>(eax5 + 8);
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax5 + 8) + 4) = *reinterpret_cast<void***>(eax5 + 4);
                esi13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5)) & 0xfffffffc);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(eax5) + reinterpret_cast<uint32_t>(esi13) + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(eax5) + reinterpret_cast<uint32_t>(esi13) + 4) & 0xfffffffd;
                *edx4 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(*edx4) & 2) + reinterpret_cast<uint32_t>(ebx7));
            }
            eax14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx7) - reinterpret_cast<uint32_t>(ecx6));
            if (reinterpret_cast<uint32_t>(eax14) >= 16) {
                ebx15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax14) - 4);
                eax16 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(*edx4) & 2) + reinterpret_cast<uint32_t>(ecx6));
                *edx4 = eax16;
                edx17 = ebx15 + 1;
                *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx4) + (reinterpret_cast<unsigned char>(eax16) & 0xfffffffc) + 4) = edx17;
                edx18 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx17) & 0xfffffffc);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(edx4) + (reinterpret_cast<unsigned char>(eax16) & 0xfffffffc) + 4) + reinterpret_cast<uint32_t>(edx18) + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(edx4) + (reinterpret_cast<unsigned char>(eax16) & 0xfffffffc) + 4) + reinterpret_cast<uint32_t>(edx18) + 4) | 2;
                cf19 = reinterpret_cast<unsigned char>(ebx15) < reinterpret_cast<unsigned char>(g40a228);
                if (!cf19) {
                    if (!v10) {
                        ecx20 = image_base_;
                        edx21 = *reinterpret_cast<void***>(ecx20 + 4);
                    } else {
                        edx21 = v10;
                    }
                } else {
                    tmp32_22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx15) + reinterpret_cast<unsigned char>(ebx15) + reinterpret_cast<unsigned char>(g40a23c));
                    edx21 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(tmp32_22) + 0xfffffff4);
                }
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(edx4) + (reinterpret_cast<unsigned char>(eax16) & 0xfffffffc) + 4) + 4) = *reinterpret_cast<void***>(edx21 + 4);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(edx4) + (reinterpret_cast<unsigned char>(eax16) & 0xfffffffc) + 4) + 8) = edx21;
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(edx4) + (reinterpret_cast<unsigned char>(eax16) & 0xfffffffc) + 4) + 4) + 8) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx4) + (reinterpret_cast<unsigned char>(eax16) & 0xfffffffc) + 4);
                *reinterpret_cast<void***>(edx21 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx4) + (reinterpret_cast<unsigned char>(eax16) & 0xfffffffc) + 4);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(edx4) + (reinterpret_cast<unsigned char>(eax16) & 0xfffffffc) + 4) + reinterpret_cast<unsigned char>(ebx15)) = ebx15 + 4;
            }
            eax9 = a2;
        }
    } else {
        eax9 = a2;
    }
    return eax9;
}

void** fun_401c28(void** ecx, void** a2) {
    void** eax3;
    void** eax4;

    if (a2) {
        if (reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(0x100000)) {
            eax3 = fun_401c50(ecx, a2);
            return eax3;
        } else {
            eax4 = fun_401bec(ecx, a2);
            return eax4;
        }
    } else {
        return 0;
    }
}

void** fun_40213c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** edi8;
    void** eax9;
    void** esi10;
    void** edx11;
    uint32_t ecx12;
    uint32_t ecx13;

    edi8 = a2;
    eax9 = edi8;
    esi10 = a3;
    edx11 = a4;
    ecx12 = reinterpret_cast<unsigned char>(a4) >> 1 >> 1;
    while (ecx12) {
        --ecx12;
        *reinterpret_cast<void***>(edi8) = *reinterpret_cast<void***>(esi10);
        edi8 = edi8 + 4;
        esi10 = esi10 + 4;
    }
    ecx13 = reinterpret_cast<unsigned char>(edx11) & 3;
    while (ecx13) {
        --ecx13;
        *reinterpret_cast<void***>(edi8) = *reinterpret_cast<void***>(esi10);
        ++edi8;
        ++esi10;
    }
    return eax9;
}

void** fun_401ab8(void** ecx, void** a2) {
    void** eax3;
    void** eax4;

    eax3 = a2;
    if (eax3) {
        if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 0xfffffffc)) & 0xfffffffc) < 0x100000) {
            eax3 = fun_401ae4(eax3);
        } else {
            eax4 = fun_401324();
            return eax4;
        }
    }
    return eax3;
}

void** fun_401fc8(void** a1, void** a2) {
    void* ebx3;
    void** edi4;
    void** edi5;
    void** esi6;
    void** ebx7;
    int32_t ebp8;
    void** eax9;
    void** eax10;
    void** eax11;

    ebx3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a2 + 0x1003) & 0xfffff000);
    edi4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 0xfffffffc)) & 0xfffffffc);
    if (!reinterpret_cast<int1_t>(edi4 == reinterpret_cast<uint32_t>(ebx3) - 4)) {
        if (reinterpret_cast<unsigned char>(edi4) >= reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(ebx3) - 4)) {
            if (reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(ebx3) - 4) >= reinterpret_cast<unsigned char>(0x100000)) {
                fun_40130c(edi5, esi6, ebx7, ebp8);
                eax9 = a1;
                *reinterpret_cast<void***>(a1 + 0xfffffffc) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx3) - 4);
            } else {
                eax10 = fun_401c28(a2, a2);
                if (eax10) {
                    fun_40213c(a2, eax10, a1, a2, edi5, esi6, ebx7);
                    fun_401ab8(a2, a1);
                }
                eax9 = eax10;
            }
        } else {
            eax11 = fun_401c28(a2, a2);
            if (eax11) {
                fun_40213c(a2, eax11, a1, edi4, edi5, esi6, ebx7);
                fun_401ab8(a2, a1);
            }
            eax9 = eax11;
        }
    } else {
        eax9 = a1;
    }
    return eax9;
}

void** fun_402160(void** a1, void** a2, void** a3) {
    void** edi4;
    void** esi5;
    void** edx6;
    uint32_t ecx7;
    uint32_t ecx8;
    signed char* esi9;
    signed char* edi10;
    uint32_t ecx11;
    uint32_t ecx12;
    int32_t* esi13;
    int32_t* edi14;

    edi4 = a1;
    esi5 = a2;
    edx6 = a3;
    if (reinterpret_cast<unsigned char>(edi4) < reinterpret_cast<unsigned char>(esi5)) {
        ecx7 = reinterpret_cast<unsigned char>(a3) >> 1 >> 1;
        while (ecx7) {
            --ecx7;
            *reinterpret_cast<void***>(edi4) = *reinterpret_cast<void***>(esi5);
            edi4 = edi4 + 4;
            esi5 = esi5 + 4;
        }
        ecx8 = reinterpret_cast<unsigned char>(edx6) & 3;
        while (ecx8) {
            --ecx8;
            *reinterpret_cast<void***>(edi4) = *reinterpret_cast<void***>(esi5);
            ++edi4;
            ++esi5;
        }
    } else {
        if (edi4 != esi5) {
            esi9 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi5) + reinterpret_cast<unsigned char>(a3) + 0xffffffff);
            edi10 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edi4) + reinterpret_cast<unsigned char>(a3) + 0xffffffff);
            ecx11 = reinterpret_cast<unsigned char>(a3) & 3;
            while (ecx11) {
                --ecx11;
                *edi10 = *esi9;
                --edi10;
                --esi9;
            }
            ecx12 = reinterpret_cast<unsigned char>(edx6) >> 1 >> 1;
            esi13 = reinterpret_cast<int32_t*>(esi9 - 3);
            edi14 = reinterpret_cast<int32_t*>(edi10 - 3);
            while (ecx12) {
                --ecx12;
                *edi14 = *esi13;
                --edi14;
                --esi13;
            }
        }
    }
    return a1;
}

void** fun_402250(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22) {
    void** eax23;
    uint32_t edx24;
    uint32_t edx25;

    eax23 = a2;
    if (*reinterpret_cast<unsigned char*>(&eax23) & 3) {
        eax23 = eax23 + 4;
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax23 + 0xfffffffc)) & 0xff)) 
            goto addr_40229f_3;
        if (*reinterpret_cast<unsigned char*>(eax23 + 0xfffffffd) & 0xff) 
            goto addr_402294_5;
    } else {
        addr_402258_6:
        eax23 = eax23 + 4;
        edx24 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(eax23) - 0x1010101) & 0x80808080;
        if (!edx24) 
            goto addr_402258_6;
        edx25 = edx24 & ~reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax23));
        if (!edx25) 
            goto addr_402258_6; else 
            goto addr_402273_8;
    }
    addr_4022a0_9:
    --eax23;
    goto addr_4022a1_10;
    addr_402294_5:
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax23 + 0xfffffffe)) & 0xff)) 
        goto addr_4022a1_10;
    --eax23;
    *reinterpret_cast<unsigned char*>(&eax23) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax23) & 0xfc);
    goto addr_402258_6;
    addr_402273_8:
    if (*reinterpret_cast<signed char*>(&edx25)) {
        addr_40229f_3:
        --eax23;
        goto addr_4022a0_9;
    } else {
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx25) + 1)) {
            if (edx25 & 0xff0000) {
                addr_4022a1_10:
                --eax23;
            }
            return reinterpret_cast<unsigned char>(eax23 - 1) - reinterpret_cast<unsigned char>(a2);
        }
    }
}

void** fun_4023bc(void** a1);

void** fun_4023d4(void** a1, void** a2) {
    void** eax3;
    void** ebx4;
    void** ecx5;
    void** edx6;
    void** eax7;

    eax3 = fun_4023bc(a2);
    ebx4 = eax3;
    ecx5 = reinterpret_cast<void**>(0);
    edx6 = a1;
    eax7 = a2;
    if (reinterpret_cast<unsigned char>(ebx4) > reinterpret_cast<unsigned char>(0)) {
        do {
            *reinterpret_cast<void***>(edx6) = *reinterpret_cast<void***>(eax7);
            ++ecx5;
            edx6 = edx6 + 2;
            eax7 = eax7 + 2;
        } while (reinterpret_cast<unsigned char>(ebx4) > reinterpret_cast<unsigned char>(ecx5));
    }
    *reinterpret_cast<void***>(a1 + reinterpret_cast<unsigned char>(ebx4) * 2) = reinterpret_cast<void**>(0);
    return a1;
}

void* fun_405010(void** ecx);

void** fun_406b6c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19);

int32_t g40ccec;

int32_t fun_402faf(void** ecx);

void** fun_408b17(void** ecx, void** a2, void** a3);

void** g40cce4;

void** fun_408021(void** ecx, int32_t a2, int32_t a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17);

void fun_40847c(void** a1, void** a2);

void** fun_40897d(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** fun_4086a9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** fun_402938(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void** fun_408009(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void fun_407db7(void** ecx);

int32_t fun_407e35(void** ecx, void** a2, void** a3, void** a4, unsigned char a5, int32_t a6);

void** fun_402d18(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

int32_t fun_408b5c(void** a1, void** a2, void** a3, int32_t a4, int32_t a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void*** ebp9;
    void** v10;
    void** ebx11;
    void** v12;
    void** esi13;
    void** v14;
    void** edi15;
    void** v16;
    void** edi17;
    void** v18;
    void** ecx19;
    void** v20;
    void** ebx21;
    int32_t eax22;
    void** v23;
    void** esi24;
    void** v25;
    void** esi26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    int32_t eax32;
    void** ecx33;
    void** esi34;
    void** eax35;
    void** eax36;
    void** edx37;
    void** eax38;
    void** eax39;
    void** ecx40;
    void** esi41;
    void** eax42;
    void** ecx43;
    void** v44;
    void** eax45;
    void** ecx46;
    void** edx47;
    void** eax48;
    void** v49;
    void** v50;
    void** ecx51;
    void** ebx52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    int32_t eax57;
    void** ebx58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebp8;
    ebp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v10 = ebx11;
    v12 = esi13;
    v14 = edi15;
    v16 = *reinterpret_cast<void***>(a1 + 28);
    edi17 = *reinterpret_cast<void***>(a2 + 8);
    v18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi17 + 4)));
    ecx19 = *reinterpret_cast<void***>(a2 + 12);
    v20 = ecx19;
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a1) == 0xeedfae6)) {
        fun_405010(ecx19);
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) & 6)) {
            ebx21 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a2 + 16))));
            if (!ebx21) {
                addr_408ead_4:
                eax22 = 1;
            } else {
                while (1) {
                    v23 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(edi17) + reinterpret_cast<unsigned char>(ebx21))));
                    esi24 = ebx21 + 2;
                    v25 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(edi17) + reinterpret_cast<unsigned char>(esi24))));
                    esi26 = esi24 + 2;
                    if (reinterpret_cast<unsigned char>(v25) > reinterpret_cast<unsigned char>(5)) {
                        if (!0) {
                            fun_406b6c(v25, "!\"bogus context in _ExceptionHandler()\"", "xx.cpp", 0xc00, v14, v12, v10, v27, v28, v29, v30, v31, v25, v20, v18, v23, v16, v7, v6);
                            goto addr_408ea2_8;
                        }
                    }
                    switch (v25) {
                    case 1:
                        if (*reinterpret_cast<void***>(a1) == 0xeefface) 
                            goto addr_408ea2_8;
                        v27 = a1;
                        v28 = a3;
                        *reinterpret_cast<void***>(a2 + 20) = *reinterpret_cast<void***>(a1);
                        *reinterpret_cast<void***>(a2 + 24) = reinterpret_cast<void**>(ebp9 + 0xffffffd8);
                        g40ccec = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi17) + reinterpret_cast<unsigned char>(esi26));
                        eax32 = fun_402faf(v18);
                        edi17 = edi17;
                        esi26 = esi26;
                        ebp9 = ebp9;
                        break;
                    case 2:
                        if (*reinterpret_cast<void***>(a1) == 0xeefface) 
                            goto addr_408ea2_8;
                        *reinterpret_cast<void***>(a2 + 20) = *reinterpret_cast<void***>(a1);
                        eax32 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi17) + reinterpret_cast<unsigned char>(esi26));
                        break;
                    case 3:
                        if (!(*reinterpret_cast<void***>(a1) - 0xeefface)) {
                            ecx33 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi17) + reinterpret_cast<unsigned char>(esi26));
                            v30 = ecx33;
                            esi34 = esi26 + 4;
                            eax35 = fun_408b17(ecx33, v30, v16);
                            v31 = eax35;
                            if (!v31) 
                                goto addr_408ea2_8;
                            eax36 = g40cce4;
                            if ((*reinterpret_cast<void***>(eax36) == 1 || (edx37 = g40cce4, reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx37) == 2))) && ((ecx33 = a1, reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx33)) < reinterpret_cast<unsigned char>(0xeedface)) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) > reinterpret_cast<unsigned char>(0xeefface))) {
                                fun_408021(ecx33, 2, 3, a2, a1, a3, v14, v12, v10, v27, v28, v29, v30, v31, v25, v20, v18);
                            }
                            eax38 = fun_401140(ecx33, v14, v12, v10, v27, v28);
                            *reinterpret_cast<void***>(v16) = *reinterpret_cast<void***>(eax38);
                            eax39 = fun_401140(v16, v14, v12, v10, v27, v28);
                            *reinterpret_cast<void***>(eax39) = v16;
                            *reinterpret_cast<void***>(v16 + 40) = a2;
                            *reinterpret_cast<void***>(v16 + 44) = v31;
                            ecx40 = v16;
                            *reinterpret_cast<void***>(ecx40 + 48) = esi34;
                            v29 = esi34;
                            esi41 = *reinterpret_cast<void***>(v31);
                            goto addr_408d1a_19;
                        } else {
                            goto addr_408ea2_8;
                        }
                    case 0:
                    case 4:
                    case 5:
                        goto 0x408ea2;
                    }
                    if (eax32 < 0) 
                        goto addr_408e4b_22;
                    if (!eax32) {
                        addr_408ea2_8:
                        ebx21 = v23;
                        if (ebx21) 
                            continue; else 
                            goto addr_408ead_4;
                    } else {
                        ecx40 = reinterpret_cast<void**>(0);
                        *reinterpret_cast<void***>(a2 + 24) = reinterpret_cast<void**>(0);
                        v29 = v23;
                        ebx21 = v23;
                        esi41 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi17) + reinterpret_cast<unsigned char>(esi26 + 4));
                    }
                    addr_408d1a_19:
                    fun_40847c(a2, a1);
                    fun_40897d(a2, ebx21, v14, v12, v10, v27, v28);
                    *reinterpret_cast<void***>(a2 + 16) = v29;
                    if (reinterpret_cast<int1_t>(v25 == 3)) {
                        fun_4086a9(ecx40, v31, a2, v16, v30, v18, v14);
                    }
                    eax42 = fun_401140(ecx40, v14, v12, v10, v27, v28);
                    *reinterpret_cast<void***>(eax42 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax42 + 4)) & 0xfffffffd);
                    ecx43 = g40cce4;
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx43) == 2) && reinterpret_cast<int1_t>(v25 == 3)) {
                        v44 = *reinterpret_cast<void***>(v16 + 4);
                        eax45 = fun_402938(ecx43, v44, v14, v12, v10, v27, v28, v29, v30, v31, v25, v20, v18);
                        ecx46 = v44;
                        if (!*reinterpret_cast<signed char*>(v16 + 68)) {
                            ecx46 = v16;
                            edx47 = *reinterpret_cast<void***>(ecx46 + 64);
                        } else {
                            edx47 = v16 + 82;
                        }
                        eax48 = fun_408009(ecx46, eax45, edx47, v14, v12, v10, v27, v28, v29, v30, v31, v25, v20);
                        fun_408021(eax45, 3, 5, esi41, eax45, eax48, edx47, v14, v12, v10, v27, v28, v29, v30, v31, v25, v20);
                    }
                    fun_407db7(v18);
                    goto addr_408ea2_8;
                }
            }
        } else {
            fun_40897d(a2, 0, v14, v12, v10, v49, v50);
            ecx51 = a1;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx51) == 0xeefface) || (ebx52 = *reinterpret_cast<void***>(edi17), ebx52 == 0)) {
                addr_408c0c_33:
                eax22 = 1;
            } else {
                while (*reinterpret_cast<void***>(ebx52)) {
                    v53 = *reinterpret_cast<void***>(v16 + 12);
                    v54 = *reinterpret_cast<void***>(ebx52);
                    v55 = *reinterpret_cast<void***>(v16 + 8);
                    ecx51 = v16;
                    v56 = *reinterpret_cast<void***>(ecx51 + 4);
                    eax57 = fun_407e35(ecx51, v56, v55, v54, *reinterpret_cast<unsigned char*>(&v53), 1);
                    if (eax57) 
                        goto addr_408c0c_33;
                    ebx52 = ebx52 + 4;
                }
                goto addr_408bf0_38;
            }
        }
    } else {
        eax22 = 0;
    }
    addr_408eb2_40:
    return eax22;
    addr_408e4b_22:
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) & 1) {
        *reinterpret_cast<void***>(a2 + 16) = v23;
    }
    eax22 = 0;
    goto addr_408eb2_40;
    addr_408bf0_38:
    ebx58 = g0;
    g0 = *reinterpret_cast<void***>(a2);
    fun_402d18(ecx51, v14, v12, v10, v59, v60, v61, v62, v63, v64, v20, v18, v65);
    g0 = ebx58;
    goto addr_408c0c_33;
}

struct s7 {
    void** f0;
    signed char[7] pad8;
    unsigned char f8;
};

int32_t fun_402970(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

struct s8 {
    void** f0;
    signed char[7] pad8;
    uint32_t f8;
};

int32_t fun_402484(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;
    void** v11;
    void** ebp12;
    void** v13;
    void** ebx14;
    void** v15;
    void** esi16;
    void** v17;
    void** edi18;
    void** edi19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** ecx26;
    struct s7* ebx27;
    void** esi28;
    void** edx29;
    void** v30;
    void** v31;
    int32_t eax32;
    void** v33;
    int32_t eax34;
    struct s8* ebx35;
    void** esi36;
    void** edx37;
    int32_t eax38;
    int32_t eax39;
    int32_t eax40;

    v10 = reinterpret_cast<void**>(__return_address());
    v11 = ebp12;
    v13 = ebx14;
    v15 = esi16;
    v17 = edi18;
    edi19 = a3;
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi19 + 4)) & 1)) {
        fun_406b6c(ecx, "IS_STRUC(base->tpMask)", "xxtype.cpp", 0x13b, v17, v15, v13, v20, v21, v11, v10, a2, a3, a4, a5, a6, a7, a8, a9);
    }
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) & 1)) {
        fun_406b6c(ecx, "IS_STRUC(derv->tpMask)", "xxtype.cpp", 0x13c, v17, v15, v13, v22, v23, v11, v10, a2, a3, a4, a5, a6, a7, a8, a9);
    }
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 4)) {
        fun_406b6c(ecx, "derv->tpClass.tpcFlags & CF_HAS_BASES", "xxtype.cpp", 0x13e, v17, v15, v13, v24, v25, v11, v10, a2, a3, a4, a5, a6, a7, a8, a9);
    }
    ecx26 = a2;
    ebx27 = reinterpret_cast<struct s7*>(reinterpret_cast<uint16_t>(*reinterpret_cast<unsigned char*>(ecx26 + 18)) + reinterpret_cast<unsigned char>(a2));
    while (esi28 = ebx27->f0, !!esi28) {
        if (!(ebx27->f8 & 8)) {
            if (!a5 || (ebx27->f8 & 3) != 3) {
                edx29 = reinterpret_cast<void**>(0);
            } else {
                edx29 = reinterpret_cast<void**>(1);
            }
            v30 = edx29;
            eax32 = fun_402970(ecx26, edi19, esi28, v17, v15, v13, v31, v30, v11, v10, a2);
            if (!eax32) 
                goto addr_40253e_15;
            if (v30) 
                goto addr_402534_17;
            addr_40253e_15:
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi28 + 12)) & 4)) 
                goto addr_40255f_18;
            eax34 = fun_402484(ecx26, esi28, edi19, a4, v30, v17, v15, v13, v33);
            if (eax34) 
                goto addr_402558_20;
        }
        addr_40255f_18:
        ebx27 = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(ebx27) + 12);
    }
    ebx35 = reinterpret_cast<struct s8*>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a2 + 16)) + reinterpret_cast<unsigned char>(a2));
    while (esi36 = ebx35->f0, !!esi36) {
        if (!a5 || (ebx35->f8 & 3) != 3) {
            edx37 = reinterpret_cast<void**>(0);
        } else {
            edx37 = reinterpret_cast<void**>(1);
        }
        eax38 = fun_402970(ecx26, edi19, esi36, v17, v15, v13, edx37, v30, v11, v10, a2);
        if (!eax38) 
            goto addr_4025ac_27;
        if (edx37) 
            goto addr_4025a5_29;
        addr_4025ac_27:
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi36 + 12)) & 4)) 
            goto addr_4025cd_30;
        eax39 = fun_402484(ecx26, esi36, edi19, a4, edx37, v17, v15, v13, edx37);
        if (eax39) 
            goto addr_4025c6_32;
        addr_4025cd_30:
        ++ebx35;
    }
    eax40 = 0;
    addr_4025d4_34:
    return eax40;
    addr_4025a5_29:
    eax40 = 1;
    goto addr_4025d4_34;
    addr_4025c6_32:
    eax40 = 1;
    goto addr_4025d4_34;
    addr_402534_17:
    eax40 = 1;
    goto addr_4025d4_34;
    addr_402558_20:
    eax40 = 1;
    goto addr_4025d4_34;
}

void** fun_406b24(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15);

signed char* fun_4052d0(void** a1, signed char* a2);

void** fun_406ec0(void** ecx);

void** fun_406b6c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19) {
    void** ebp20;
    void** eax21;
    void** eax22;

    fun_406b24(ecx, 0x40cb5c, 0xf6, "Assertion failed: ", a2, ", file ", a3, ", line ", 0, ebp20, __return_address(), a2, a3, a4, a5);
    eax21 = fun_402250(ecx, 0x40cb5c, ebp20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
    fun_4052d0(a4, eax21 + 0x40cb5c);
    fun_406cdc(a4, 0x40cb5c, ebp20, __return_address());
    eax22 = fun_406ec0(0x40cb5c);
    return eax22;
}

struct s9 {
    void** f0;
    signed char[3] pad4;
    void* f4;
    unsigned char f8;
};

void** fun_40262e(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void*** a7, void** a8, void** a9) {
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
    int32_t eax34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    int32_t eax40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    int32_t eax46;
    void** v47;
    void** ecx48;
    struct s9* ebx49;
    void** edi50;
    void** edx51;
    void** v52;
    void** esi53;
    void** v54;
    int32_t eax55;
    void** eax56;
    void** eax57;
    void** eax58;

    v10 = reinterpret_cast<void**>(__return_address());
    v11 = ebp12;
    ecx13 = reinterpret_cast<void**>(0);
    v14 = ebx15;
    v16 = esi17;
    v18 = edi19;
    v20 = reinterpret_cast<void**>(0);
    v21 = reinterpret_cast<void**>(0);
    v22 = reinterpret_cast<void**>(0);
    if (!a2 || !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) & 1)) {
        fun_406b6c(0, "topTypPtr != 0 && IS_STRUC(topTypPtr->tpMask)", "xxtype.cpp", 0x34f, v18, v16, v14, v23, v24, 0, 0, 0, v25, v11, v10, a1, a2, a3, a4);
    }
    if (!a4 || !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4 + 4)) & 1)) {
        fun_406b6c(0, "tgtTypPtr != 0 && IS_STRUC(tgtTypPtr->tpMask)", "xxtype.cpp", 0x350, v18, v16, v14, v26, v27, 0, 0, 0, v28, v11, v10, a1, a2, a3, a4);
    }
    if (a6 && (ecx13 = a6, !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx13 + 4)) & 1))) {
        fun_406b6c(ecx13, "srcTypPtr == 0 || IS_STRUC(srcTypPtr->tpMask)", "xxtype.cpp", 0x351, v18, v16, v14, v29, v30, 0, 0, 0, v31, v11, v10, a1, a2, a3, a4);
    }
    if (!a6) {
        addr_402700_8:
        if (!a4 || (eax34 = fun_402970(ecx13, a2, a4, v18, v16, v14, v32, v33, 0, 0, 0), !!eax34)) {
            fun_406b6c(ecx13, "tgtTypPtr != 0 && __isSameTypeID(topTypPtr, tgtTypPtr) == 0", "xxtype.cpp", 0x35b, v18, v16, v14, v35, v36, 0, 0, 0, v37, v11, v10, a1, a2, a3, a4);
        }
    } else {
        eax40 = fun_402970(ecx13, a6, a4, v18, v16, v14, v38, v39, 0, 0, 0);
        if (eax40) {
            fun_406b6c(ecx13, "__isSameTypeID(srcTypPtr, tgtTypPtr) == 0", "xxtype.cpp", 0x355, v18, v16, v14, v41, v42, 0, 0, 0, v43, v11, v10, a1, a2, a3, a4);
        }
        eax46 = fun_402970(ecx13, a6, a2, v18, v16, v14, v44, v45, 0, 0, 0);
        if (!eax46) 
            goto addr_402700_8; else 
            goto addr_4026f9_13;
    }
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 4) {
        v47 = reinterpret_cast<void**>(0);
        ecx48 = a2;
        ebx49 = reinterpret_cast<struct s9*>(reinterpret_cast<uint16_t>(*reinterpret_cast<unsigned char*>(ecx48 + 18)) + reinterpret_cast<unsigned char>(a2));
        while (1) {
            edi50 = ebx49->f0;
            if (!edi50) {
                if (v47) 
                    break;
                ++v47;
                ebx49 = reinterpret_cast<struct s9*>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a2 + 16)) + reinterpret_cast<unsigned char>(a2));
                continue;
            }
            if (ebx49->f8 & 8) {
                addr_402858_20:
                ebx49 = reinterpret_cast<struct s9*>(reinterpret_cast<uint32_t>(ebx49) + 12);
                continue;
            } else {
                if (!a8 || (ebx49->f8 & 3) != 3) {
                    edx51 = reinterpret_cast<void**>(0);
                } else {
                    edx51 = reinterpret_cast<void**>(1);
                }
                v52 = edx51;
                esi53 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<uint32_t>(ebx49->f4));
                v54 = a9;
                if (ebx49->f8 & 4) {
                    esi53 = *reinterpret_cast<void***>(esi53);
                    v54 = edi50;
                }
                eax55 = fun_402970(ecx48, a4, edi50, v18, v16, v14, v54, v52, v22, v21, v20);
                if (!eax55) 
                    goto addr_4027a6_27;
            }
            if (!a3) {
                if (!a5) {
                    addr_402839_30:
                    if (!v22 || esi53 != v21) {
                        ++v22;
                        v21 = esi53;
                        ecx48 = v52;
                        v20 = ecx48;
                        goto addr_402858_20;
                    } else {
                        v20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v20) | reinterpret_cast<unsigned char>(v52));
                        goto addr_402858_20;
                    }
                } else {
                    if (!a6) {
                        fun_406b6c(ecx48, "srcTypPtr", "xxtype.cpp", 0x3d0, v18, v16, v14, v54, v52, v22, v21, v20, v47, v11, v10, a1, a2, a3, a4);
                    }
                    eax56 = fun_40262e(esi53, edi50, a5, a6, 0, 0, a7, 0, 0);
                    if (!eax56) 
                        goto addr_402858_20; else 
                        goto addr_402839_30;
                }
            } else {
                if (esi53 != a3) 
                    goto addr_402858_20; else 
                    goto addr_4027f0_37;
            }
            addr_4027a6_27:
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi50 + 12)) & 4 && (eax57 = fun_40262e(esi53, edi50, a3, a4, a5, a6, a7, v52, v54), !!eax57)) {
                esi53 = eax57;
                v52 = *a7;
                goto addr_402839_30;
            }
        }
    } else {
        eax58 = reinterpret_cast<void**>(0);
        goto addr_40288e_40;
    }
    *a7 = v20;
    if (v22 != 1) {
        v21 = reinterpret_cast<void**>(0);
    }
    eax58 = v21;
    addr_40288e_40:
    return eax58;
    addr_4027f0_37:
    eax58 = esi53;
    goto addr_40288e_40;
    addr_4026f9_13:
    eax58 = reinterpret_cast<void**>(0);
    goto addr_40288e_40;
}

int32_t fun_402970(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** edi12;
    void** esi13;
    void** ebx14;
    void** ebp15;
    void** ecx16;
    int32_t eax17;
    uint16_t dx18;
    signed char* edi19;
    signed char* ebx20;
    int32_t eax21;

    if (!a2) {
        fun_406b6c(ecx, "tp1", "xxtype.cpp", 0x105, edi12, esi13, ebx14, ebp15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    if (!a3) {
        fun_406b6c(ecx, "tp2", "xxtype.cpp", 0x106, edi12, esi13, ebx14, ebp15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    if (a3 != a2) {
        if (*reinterpret_cast<void***>(a2 + 4) != *reinterpret_cast<void***>(a3 + 4) || (ecx16 = *reinterpret_cast<void***>(a2), ecx16 != *reinterpret_cast<void***>(a3))) {
            eax17 = 0;
        } else {
            dx18 = reinterpret_cast<uint16_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)));
            if (!(*reinterpret_cast<unsigned char*>(&dx18) & 0x80)) {
                edi19 = reinterpret_cast<signed char*>(*reinterpret_cast<uint16_t*>(a2 + 6) + reinterpret_cast<unsigned char>(a2));
                if (!*reinterpret_cast<uint16_t*>(a2 + 6)) {
                    fun_406b6c(ecx16, "tp1->tpName", "xxtype.cpp", 0x11e, edi12, esi13, ebx14, ebp15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
                }
                ebx20 = reinterpret_cast<signed char*>(*reinterpret_cast<uint16_t*>(a3 + 6) + reinterpret_cast<unsigned char>(a3));
                if (!*reinterpret_cast<uint16_t*>(a3 + 6)) {
                    fun_406b6c(ecx16, "tp2->tpName", "xxtype.cpp", 0x11f, edi12, esi13, ebx14, ebp15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
                }
                do {
                    eax21 = *edi19;
                    ++ebx20;
                    ++edi19;
                    if (static_cast<int32_t>(*ebx20) != eax21) 
                        goto addr_402a39_14;
                } while (eax21);
                goto addr_402a41_16;
            } else {
                eax17 = 0;
            }
        }
    } else {
        eax17 = 1;
    }
    addr_402a46_19:
    return eax17;
    addr_402a39_14:
    eax17 = 0;
    goto addr_402a46_19;
    addr_402a41_16:
    eax17 = 1;
    goto addr_402a46_19;
}

int32_t fun_402895(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** ebp13;
    void*** ebp14;
    void** v15;
    void** ebx16;
    void** v17;
    void** esi18;
    void** v19;
    void** edi20;
    void** edi21;
    void** esi22;
    void** ebx23;
    void** v24;
    int32_t eax25;
    void** eax26;
    int32_t eax27;
    int32_t eax28;

    v11 = reinterpret_cast<void**>(__return_address());
    v12 = ebp13;
    ebp14 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v15 = ebx16;
    v17 = esi18;
    v19 = edi20;
    edi21 = a5;
    esi22 = a2;
    if (!*reinterpret_cast<void***>(edi21)) {
        fun_406b6c(ecx, "addr", "xxtype.cpp", 0x515, v19, v17, v15, ecx, v12, v11, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }
    while (ebx23 = *reinterpret_cast<void***>(esi22), !!ebx23) {
        v24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi21)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi22 + 4)));
        if (a3) {
            ecx = v24;
            v24 = *reinterpret_cast<void***>(ecx);
        }
        eax25 = fun_402970(ecx, ebx23, a4, v19, v17, v15, v24, v12, v11, a2, a3);
        if (eax25) 
            goto addr_4028ee_7;
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx23 + 4)) & 2)) 
            goto addr_40292c_9;
        eax26 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(ebx23 + 16)) + reinterpret_cast<unsigned char>(ebx23));
        if (!eax26) 
            goto addr_40292c_9;
        eax27 = fun_402895(ecx, eax26, 0, a4, ebp14 + 0xfffffffc, v19, v17, v15, v24, v12);
        if (eax27) 
            goto addr_402920_12;
        addr_40292c_9:
        esi22 = esi22 + 12;
    }
    eax28 = 0;
    addr_402931_14:
    return eax28;
    addr_4028ee_7:
    eax28 = 1;
    *reinterpret_cast<void***>(edi21) = v24;
    goto addr_402931_14;
    addr_402920_12:
    eax28 = 1;
    *reinterpret_cast<void***>(edi21) = v24;
    goto addr_402931_14;
}

void fun_402414(void** a1, void** a2, void** a3);

void** g40c8b4;

void** g40a57c = reinterpret_cast<void**>(0);

int32_t fun_4031a8();

void** fun_402ca4(void** ecx, void** a2) {
    void** edi3;
    void** esi4;
    void** ebx5;
    void** v6;
    void** v7;
    void** eax8;
    void** edx9;
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
    void** ebp20;
    void** eax21;
    void** eax22;
    void** v23;

    fun_402414(edi3, esi4, ebx5);
    eax8 = fun_401140(ecx, edi3, esi4, ebx5, v6, v7);
    *reinterpret_cast<void***>(eax8 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax8 + 4)) & 0xfffffffd);
    edx9 = g40c8b4;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx9) == 2)) {
        v10 = g40a57c;
        fun_408021(ecx, 4, 1, v10, edi3, esi4, ebx5, v11, v12, v13, v14, v15, v16, v17, v18, v19, ebp20);
    }
    fun_4031a8();
    eax21 = g40a57c;
    eax21();
    eax22 = fun_406ec0(ecx);
    g0 = v23;
    return eax22;
}

void fun_4099cc();

void** fun_408021(void** ecx, int32_t a2, int32_t a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    fun_4099cc();
    goto a3 + 1 + 1;
}

void** g40ab68 = reinterpret_cast<void**>(50);

uint32_t fun_4032c4(void** ecx, void** a2);

int32_t fun_4031a8() {
    int32_t edi1;
    void** esi2;
    void** ebx3;
    void** eax4;
    void** ecx5;

    edi1 = 0;
    esi2 = g40ab68;
    ebx3 = reinterpret_cast<void**>(0x40a6b8);
    while (eax4 = esi2, --esi2, !!eax4) {
        if (*reinterpret_cast<unsigned char*>(ebx3 + 18) & 3 && *reinterpret_cast<void***>(ebx3 + 8)) {
            fun_4032c4(ecx5, ebx3);
            ecx5 = ebx3;
            ++edi1;
        }
        ebx3 = ebx3 + 24;
    }
    return edi1;
}

int32_t fun_4079d0(void** a1);

void** fun_406eac(void** ecx, void** a2);

void** fun_406ec0(void** ecx) {
    void** eax2;

    fun_4079d0(22);
    eax2 = fun_406eac(22, __return_address());
    return eax2;
}

void*** g40a5cc = reinterpret_cast<void***>(0);

void fun_402d9c(void** ecx, void** a2, void** a3) {
    void** ebx4;
    void** ebp5;
    void** eax6;

    eax6 = fun_401140(ecx, ebx4, ebp5, __return_address(), a2, a3);
    g40a5cc = reinterpret_cast<void***>(eax6 + 28);
    *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0x82727349);
    *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0x40a5b8);
    return;
}

void fun_4099d2();

void fun_402f9a(void** a1) {
    fun_4099d2();
    goto 0;
}

void fun_402f61(void** a1);

void fun_402edc(void** a1) {
    fun_402f61(a1);
    return;
}

int32_t fun_402dd0(void** ecx, void** a2, void** a3, void** a4, void** a5);

void fun_402f4c(void** a1);

void fun_402ec0(void** a1) {
    *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(fun_402dd0);
    fun_402f4c(a1);
    return;
}

int32_t g40ae2c = 49;

uint32_t g40ca50;

int32_t g40b9fc = 0;

void** fun_40375c(uint32_t a1) {
    uint32_t eax2;
    int32_t eax3;
    int1_t less4;

    eax2 = a1;
    if (reinterpret_cast<int32_t>(eax2) < reinterpret_cast<int32_t>(0)) {
        eax3 = reinterpret_cast<int32_t>(-eax2);
        less4 = eax3 < g40ae2c;
        if (!less4) {
            addr_40376d_3:
            eax2 = 1;
        } else {
            g40ca50 = 0xffffffff;
            goto addr_403796_5;
        }
    } else {
        if (reinterpret_cast<int32_t>(eax2) > reinterpret_cast<int32_t>(0x12a)) 
            goto addr_40376d_3;
    }
    g40ca50 = eax2;
    eax3 = *reinterpret_cast<signed char*>(eax2 + 0x40ac3c);
    addr_403796_5:
    g40b9fc = eax3;
    return 0xffffffff;
}

void** fun_409966(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_4037c0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** eax8;
    void** eax9;

    eax8 = fun_409966(__return_address(), a1, a2, a3, a4, a5, a6, a7);
    eax9 = fun_40375c(reinterpret_cast<unsigned char>(eax8) & 0xffff);
    return eax9;
}

void** fun_4099de(void** a1, void** a2, void** a3, void** a4);

void** fun_403000(void** a1, void** a2, uint32_t a3) {
    int1_t cf4;
    uint32_t eax5;
    void** edi6;
    void** eax7;
    void** v8;
    void** eax9;
    void** edi10;
    void** esi11;
    void** ebx12;

    cf4 = reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(g40ab68);
    if (cf4) {
        eax5 = a3 - 1;
        if (a3 < 1) {
            edi6 = reinterpret_cast<void**>(0);
        } else {
            if (!eax5) {
                edi6 = reinterpret_cast<void**>(1);
            } else {
                if (!(eax5 - 1)) {
                    edi6 = reinterpret_cast<void**>(2);
                } else {
                    eax7 = fun_40375c(1);
                    goto addr_403071_10;
                }
            }
        }
    } else {
        eax7 = fun_40375c(6);
        goto addr_403071_10;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(a1) * 4 + 0x40ab6c) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(a1) * 4 + 0x40ab6c) & 0xfffffdff;
    v8 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a1) * 4 + 0x40c988);
    eax9 = fun_4099de(v8, a2, 0, edi6);
    if (!(eax9 + 1)) {
        fun_4037c0(v8, a2, 0, edi6, edi10, esi11, ebx12);
    }
    eax7 = eax9;
    addr_403071_10:
    return eax7;
}

void** fun_409a1a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24);

void** fun_4031e0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    int1_t cf17;
    void** v18;
    void** v19;
    void** ebp20;
    void** eax21;
    void** eax22;

    cf17 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g40ab68);
    if (cf17) {
        v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffffc);
        v19 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a2) * 4 + 0x40c988);
        eax21 = fun_409a1a(a4, v19, a3, a4, v18, 0, ecx, ebp20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
        if (!(eax21 - 1)) {
            goto a4;
        } else {
            fun_4037c0(v19, a3, a4, v18, 0, ecx, ebp20);
            goto a4;
        }
    } else {
        eax22 = fun_40375c(6);
        return eax22;
    }
}

void** fun_403078(void** ecx, void** a2, void** a3, void** a4);

int32_t fun_403344();

uint32_t fun_4032c4(void** ecx, void** a2) {
    void** ebx3;
    void** esi4;
    void** eax5;
    void** v6;
    void** eax7;
    uint32_t eax8;

    ebx3 = a2;
    if (ebx3) {
        if (*reinterpret_cast<signed char*>(&ebx3) == *reinterpret_cast<signed char*>(ebx3 + 23)) {
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx3 + 8)) < reinterpret_cast<signed char>(0)) {
                esi4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx3 + 12)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx3 + 8)) + 1);
                *reinterpret_cast<void***>(ebx3 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx3 + 8)) - reinterpret_cast<unsigned char>(esi4));
                eax5 = *reinterpret_cast<void***>(ebx3 + 4);
                *reinterpret_cast<void***>(ebx3) = eax5;
                v6 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(ebx3 + 22)));
                eax7 = fun_403078(ecx, v6, eax5, esi4);
                if (esi4 == eax7 || *reinterpret_cast<unsigned char*>(ebx3 + 19) & 2) {
                    eax8 = 0;
                } else {
                    *reinterpret_cast<unsigned char*>(ebx3 + 18) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx3 + 18) | 16);
                    eax8 = 0xffffffff;
                }
            } else {
                if ((*reinterpret_cast<unsigned char*>(ebx3 + 18) & 8 || ebx3 + 20 == *reinterpret_cast<void***>(ebx3)) && (*reinterpret_cast<void***>(ebx3 + 8) = reinterpret_cast<void**>(0), ebx3 + 20 == *reinterpret_cast<void***>(ebx3))) {
                    *reinterpret_cast<void***>(ebx3) = *reinterpret_cast<void***>(ebx3 + 4);
                }
                eax8 = 0;
            }
        } else {
            eax8 = 0xffffffff;
        }
    } else {
        fun_403344();
        eax8 = 0;
    }
    return eax8;
}

/* (image base) */
int32_t image_base_ = 0x401460;

void fun_4013f0(void** ecx, void** a2) {
    image_base_();
    return;
}

/* (image base) */
int32_t image_base_ = 0x401478;

void** fun_4013e0(void** ecx, void** a2, void** a3, void** a4) {
    void** eax5;

    eax5 = reinterpret_cast<void**>(image_base_());
    return eax5;
}

struct s10 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void* f8;
    void* fc;
    signed char[2] pad18;
    uint16_t f12;
    unsigned char f13;
    signed char[1] pad22;
    signed char f16;
};

int32_t fun_403344() {
    int32_t ebp1;
    void** edi2;
    struct s10* ebx3;
    void** ecx4;
    void** esi5;
    void** eax6;
    void** v7;
    void** eax8;

    ebp1 = 0;
    edi2 = g40ab68;
    ebx3 = reinterpret_cast<struct s10*>(0x40a6b8);
    while (ecx4 = edi2, --edi2, !!ecx4) {
        if (reinterpret_cast<int32_t>(ebx3->f8) < reinterpret_cast<int32_t>(0)) {
            esi5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx3->fc) + reinterpret_cast<uint32_t>(ebx3->f8) + 1);
            ebx3->f8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx3->f8) - reinterpret_cast<unsigned char>(esi5));
            eax6 = ebx3->f4;
            ebx3->f0 = eax6;
            v7 = reinterpret_cast<void**>(static_cast<int32_t>(ebx3->f16));
            eax8 = fun_403078(ecx4, v7, eax6, esi5);
            if (esi5 != eax8 && !(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebx3) + 19) & 2)) {
                ebx3->f12 = reinterpret_cast<uint16_t>(ebx3->f12 | 16);
            }
            ++ebp1;
        }
        ebx3 = reinterpret_cast<struct s10*>(reinterpret_cast<int32_t>(ebx3) + 24);
    }
    return ebp1;
}

void** fun_403078(void** ecx, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** v6;
    void** ebx7;
    void** v8;
    void** esi9;
    void** v10;
    void** edi11;
    void** edi12;
    int1_t cf13;
    void** eax14;
    void** esi15;
    uint32_t v16;
    void* v17;
    void* ebx18;
    void** ecx19;
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
    void** edx30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v6 = ebx7;
    v8 = esi9;
    v10 = edi11;
    edi12 = a3;
    cf13 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g40ab68);
    if (cf13) {
        if (reinterpret_cast<unsigned char>(a4 + 1) >= reinterpret_cast<unsigned char>(2)) {
            if (*reinterpret_cast<unsigned char*>("`" + reinterpret_cast<unsigned char>(a2) * 4) & 8) {
                fun_403000(a2, 0, 2);
            }
            if (!(*reinterpret_cast<unsigned char*>("`" + reinterpret_cast<unsigned char>(a2) * 4) & 64)) 
                goto addr_4030d9_6;
        } else {
            eax14 = reinterpret_cast<void**>(0);
            goto addr_40318d_8;
        }
    } else {
        eax14 = fun_40375c(0xfa);
        goto addr_40318d_8;
    }
    esi15 = edi12;
    v16 = 0;
    v17 = reinterpret_cast<void*>(0);
    while (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(esi15) - reinterpret_cast<unsigned char>(edi12)) < reinterpret_cast<unsigned char>(a4)) {
        ebx18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp5) - 0x208);
        while (reinterpret_cast<int32_t>(ebx18) - (reinterpret_cast<int32_t>(ebp5) - 0x208) < 0x1ff && reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(esi15) - reinterpret_cast<unsigned char>(edi12)) < reinterpret_cast<unsigned char>(a4)) {
            ++esi15;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi15) == 10)) {
                ebx18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx18) + 1);
            } else {
                ++v16;
                ebx18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx18) + 1 + 1);
            }
        }
        ecx19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx18) - (reinterpret_cast<int32_t>(ebp5) + 0xfffffdf8));
        eax29 = fun_4031e0(ecx19, a2, reinterpret_cast<int32_t>(ebp5) + 0xfffffdf8, ecx19, v10, v8, v6, v20, v21, v22, v23, v24, v25, v26, v27, v28);
        if (eax29 != reinterpret_cast<int32_t>(ebx18) - (reinterpret_cast<int32_t>(ebp5) + 0xfffffdf8)) 
            goto addr_403161_18;
        v17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v17) + reinterpret_cast<unsigned char>(eax29));
    }
    eax14 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v17) - v16);
    addr_40318d_8:
    return eax14;
    addr_403161_18:
    if (!reinterpret_cast<int1_t>(eax29 == 0xffffffff)) {
        edx30 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v17) - v16 + reinterpret_cast<unsigned char>(eax29));
    } else {
        edx30 = reinterpret_cast<void**>(0xffffffff);
    }
    eax14 = edx30;
    goto addr_40318d_8;
    addr_4030d9_6:
    eax14 = fun_4031e0(a2, a2, edi12, a4, v10, v8, v6, v31, v32, v33, v34, v35, v36, v37, v38, v39);
    goto addr_40318d_8;
}

uint32_t fun_4037d4(void** ecx, signed char a2, void** a3) {
    void* ebp4;
    void** eax5;
    uint32_t eax6;
    void** ecx7;
    void** eax8;
    uint32_t eax9;
    void** ecx10;
    void** v11;
    void** edi12;
    void** esi13;
    void** ebx14;
    uint32_t eax15;
    void** ecx16;
    uint32_t eax17;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (reinterpret_cast<signed char>(-1) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(a3 + 8))) {
        *reinterpret_cast<unsigned char*>(&eax5) = *reinterpret_cast<unsigned char*>(a3 + 18);
        if (*reinterpret_cast<unsigned char*>(&eax5) & 0x90 || !(*reinterpret_cast<unsigned char*>(&eax5) & 2)) {
            *reinterpret_cast<unsigned char*>(a3 + 18) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(a3 + 18) | 16);
            eax6 = 0xffffffff;
        } else {
            *reinterpret_cast<unsigned char*>(a3 + 18) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(a3 + 18) | 0x100);
            if (!*reinterpret_cast<void***>(a3 + 12)) {
                ecx7 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(a3 + 22)));
                eax8 = fun_403078(ecx7, ecx7, reinterpret_cast<int32_t>(ebp4) + 0xfffffffe, 1);
                if (1 == eax8 || *reinterpret_cast<unsigned char*>(a3 + 19) & 2) {
                    eax6 = 0;
                    *reinterpret_cast<signed char*>(&eax6) = a2;
                } else {
                    *reinterpret_cast<unsigned char*>(a3 + 18) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(a3 + 18) | 16);
                    eax6 = 0xffffffff;
                }
            } else {
                if (!*reinterpret_cast<void***>(a3 + 8) || (eax9 = fun_4032c4(ecx, a3), eax9 == 0)) {
                    ecx10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xfffffffe);
                    *reinterpret_cast<void***>(a3 + 8) = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)));
                    v11 = *reinterpret_cast<void***>(a3);
                    fun_40213c(ecx10, v11, ecx10, 1, edi12, esi13, ebx14);
                    *reinterpret_cast<void***>(a3 + 8) = *reinterpret_cast<void***>(a3 + 8);
                    *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<unsigned char>(1));
                    if (!(*reinterpret_cast<unsigned char*>(a3 + 18) & 8) || (a2 != 10 && a2 != 13 || (eax15 = fun_4032c4(ecx10, a3), eax15 == 0))) {
                        eax6 = 0;
                        *reinterpret_cast<signed char*>(&eax6) = a2;
                    } else {
                        eax6 = 0xffffffff;
                    }
                } else {
                    eax6 = 0xffffffff;
                }
            }
        }
    } else {
        ecx16 = *reinterpret_cast<void***>(a3);
        fun_40213c(ecx16, ecx16, reinterpret_cast<int32_t>(ebp4) + 0xfffffffe, 1, edi12, esi13, ebx14);
        *reinterpret_cast<void***>(a3 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 8)) + reinterpret_cast<unsigned char>(1));
        *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<unsigned char>(1));
        if (!(*reinterpret_cast<unsigned char*>(a3 + 18) & 8) || (a2 != 10 && a2 != 13 || (eax17 = fun_4032c4(ecx16, a3), eax17 == 0))) {
            eax6 = 0;
            *reinterpret_cast<signed char*>(&eax6) = a2;
        } else {
            eax6 = 0xffffffff;
        }
    }
    return eax6;
}

int32_t GetStartupInfoA = 0xf2c4;

void fun_409990(void** a1) {
    goto GetStartupInfoA;
}

int32_t GetStdHandle = 0xf2d6;

void** fun_409996(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    goto GetStdHandle;
}

int32_t fun_409960();

int32_t fun_402fb8(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int1_t cf7;
    int32_t ebp8;

    cf7 = reinterpret_cast<unsigned char>(a2) < reinterpret_cast<unsigned char>(g40ab68);
    if (cf7) {
        fun_409960();
        goto ebp8;
    } else {
        return 0;
    }
}

struct s11 {
    signed char[80] pad80;
    void* f50;
    int32_t f54;
    int32_t f58;
    uint32_t f5c;
    int32_t f60;
    uint32_t* f64;
};

void* fun_403a20(struct s11* a1) {
    void* eax2;
    int32_t v3;
    void* v4;
    int32_t eax5;

    eax2 = reinterpret_cast<void*>(1);
    if (a1->f50) {
        if (a1->f64 && *a1->f64 <= a1->f5c) {
            eax2 = reinterpret_cast<void*>(0);
        }
        v3 = a1->f58;
        v4 = a1->f50;
        eax5 = reinterpret_cast<int32_t>(a1->f54(a1, v4, v3, eax2));
        if (!eax5) {
            a1->f60 = 1;
        }
        eax2 = reinterpret_cast<void*>(0);
        a1->f50 = reinterpret_cast<void*>(0);
    }
    return eax2;
}

void fun_403a68(signed char a1, struct s11* a2);

void** fun_405090(void** a1, void** a2, void** a3, uint32_t a4, signed char a5, void* a6);

int32_t fun_40487c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void fun_403a9c(void** a1, void** a2);

void fun_404fc8(void* a1, void** a2, void** a3, void* a4, uint32_t a5, int32_t a6);

void* fun_404fce(void* a1, void** a2);

uint32_t fun_403ad0(int32_t a1, int32_t a2, struct s0* a3, int32_t a4, int32_t a5, void* a6) {
    void* ebp7;
    void** v8;
    void** ebx9;
    void** v10;
    void** esi11;
    void** v12;
    void** edi13;
    struct s0* esi14;
    int32_t ebx15;
    int32_t eax16;
    int32_t v17;
    int32_t eax18;
    signed char* v19;
    void* v20;
    signed char v21;
    void** v22;
    void** v23;
    uint32_t edi24;
    int32_t v25;
    void* ebx26;
    void* ecx27;
    void** edx28;
    void** ecx29;
    void** v30;
    signed char bl31;
    void* ecx32;
    void* ecx33;
    int32_t v34;
    uint32_t v35;
    void** edx36;
    void** v37;
    void** v38;
    void** edx39;
    void** eax40;
    void** v41;
    signed char v42;
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
    void** eax62;
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
    void** eax81;
    void** v82;
    void** v83;
    void** ecx84;
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
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** eax102;
    void** v103;
    void* v104;
    void* ecx105;
    void** edx106;
    void** v107;
    void** v108;
    void** v109;
    void** eax110;
    void** eax111;
    void** ecx112;
    int32_t eax113;
    int32_t v114;
    int32_t ecx115;
    void** edx116;
    void** eax117;
    void** v118;
    int32_t eax119;
    uint32_t edx120;
    void** ecx121;
    void** eax122;
    void* eax123;
    void** eax124;
    void** edx125;
    void** eax126;
    void** edx127;
    void** v128;
    uint32_t eax129;
    signed char* eax130;
    signed char* v131;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v8 = ebx9;
    v10 = esi11;
    v12 = edi13;
    esi14 = a3;
    if (!a4) {
    }
    while (*reinterpret_cast<signed char*>(&ebx15) = esi14->f0, esi14 = reinterpret_cast<struct s0*>(&esi14->f1), !!*reinterpret_cast<signed char*>(&ebx15)) {
        if (*reinterpret_cast<signed char*>(&ebx15) != 37) {
            addr_403b30_7:
            eax16 = 0;
            *reinterpret_cast<signed char*>(&eax16) = *reinterpret_cast<signed char*>(&ebx15);
            if (*reinterpret_cast<unsigned char*>(eax16 + 0x40ca55) & 4 && esi14->f0) {
                v17 = ebx15;
                fun_403a68(*reinterpret_cast<signed char*>(&v17), reinterpret_cast<int32_t>(ebp7) - 0x520);
                *reinterpret_cast<signed char*>(&ebx15) = esi14->f0;
                esi14 = reinterpret_cast<struct s0*>(&esi14->f1);
            }
        } else {
            *reinterpret_cast<signed char*>(&ebx15) = esi14->f0;
            if (*reinterpret_cast<signed char*>(&ebx15) != 37) {
                eax18 = 0;
                v19 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi14) - 1);
                v20 = reinterpret_cast<void*>(0);
                v21 = 0;
                v22 = reinterpret_cast<void**>(0xffffffff);
                v23 = reinterpret_cast<void**>(0xffffffff);
                edi24 = 32;
                v25 = 0;
                while ((*reinterpret_cast<signed char*>(&ebx26) = esi14->f0, esi14 = reinterpret_cast<struct s0*>(&esi14->f1), *reinterpret_cast<signed char*>(&ebx26) >= 32) && static_cast<int32_t>(*reinterpret_cast<signed char*>(&ebx26)) <= 0x7f) {
                    ecx27 = ebx26;
                    edx28 = reinterpret_cast<void**>(0);
                    *reinterpret_cast<signed char*>(&edx28) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx27) - 32);
                    ecx29 = reinterpret_cast<void**>(0);
                    *reinterpret_cast<signed char*>(&ecx29) = *reinterpret_cast<signed char*>(edx28 + 0x40b1fa);
                    if (reinterpret_cast<unsigned char>(ecx29) > reinterpret_cast<unsigned char>(26)) 
                        continue;
                    switch (ecx29) {
                    case 0:
                        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax18 < 0) | reinterpret_cast<uint1_t>(eax18 == 0))) 
                            goto addr_4043d8_15;
                        if (v21 == 43) 
                            break;
                        v21 = *reinterpret_cast<signed char*>(&ebx26);
                        break;
                    case 1:
                        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax18 < 0) | reinterpret_cast<uint1_t>(eax18 == 0))) 
                            goto addr_4043d8_15;
                        edi24 = edi24 | 1;
                        break;
                    case 2:
                        a6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a6) + 4);
                        v30 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(a6) - 4);
                        if (eax18 >= 2) {
                            if (eax18 != 4) 
                                goto addr_4043d8_15;
                            ++eax18;
                            v22 = v30;
                            break;
                        } else {
                            if (reinterpret_cast<signed char>(v30) >= reinterpret_cast<signed char>(0)) {
                                v23 = v30;
                            } else {
                                v23 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v30));
                                edi24 = edi24 | 2;
                            }
                            eax18 = 3;
                            break;
                        }
                    case 3:
                        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax18 < 0) | reinterpret_cast<uint1_t>(eax18 == 0))) 
                            goto addr_4043d8_15;
                        edi24 = edi24 | 2;
                        break;
                    case 4:
                        if (eax18 >= 4) 
                            goto addr_4043d8_15;
                        eax18 = 4;
                        ++v22;
                        break;
                    case 5:
                        bl31 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ebx26) - 48);
                        if (eax18 > 2) {
                            if (eax18 != 4) 
                                goto addr_4043d8_15;
                            ecx32 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v22) + reinterpret_cast<unsigned char>(v22));
                            v22 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx32) + reinterpret_cast<uint32_t>(ecx32) * 4 + static_cast<int32_t>(bl31));
                            break;
                        } else {
                            eax18 = 2;
                            if (!reinterpret_cast<int1_t>(v23 == 0xffffffff)) {
                                ecx33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<unsigned char>(v23));
                                v23 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx33) + reinterpret_cast<uint32_t>(ecx33) * 4 + static_cast<int32_t>(bl31));
                                break;
                            } else {
                                v23 = reinterpret_cast<void**>(static_cast<int32_t>(bl31));
                                break;
                            }
                        }
                    case 6:
                        edi24 = edi24 | 16;
                        eax18 = 5;
                        break;
                    case 7:
                        eax18 = 5;
                        edi24 = (edi24 | 0x100) & 0xffffffef;
                        break;
                    case 8:
                        eax18 = 5;
                        edi24 = (edi24 | 0x200) & 0xffffffef;
                        break;
                    case 9:
                        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax18 < 0) | reinterpret_cast<uint1_t>(eax18 == 0))) {
                            if (edi24 & 2) 
                                break;
                            edi24 = edi24 | 8;
                            eax18 = 1;
                            break;
                        }
                    case 24:
                        edi24 = edi24 & 0xffffffdf;
                        eax18 = 5;
                        break;
                    case 25:
                        edi24 = edi24 | 32;
                        eax18 = 5;
                        break;
                    case 26:
                        if (esi14->f0 != 54 || esi14->f1 != 52) {
                            if (esi14->f0 != 51 || esi14->f1 != 50) {
                                if (esi14->f0 != 49 || esi14->f1 != 54) {
                                    if (esi14->f0 != 56) 
                                        break;
                                    esi14 = reinterpret_cast<struct s0*>(&esi14->f1);
                                    edi24 = edi24 & 0xfffffcef;
                                    eax18 = 5;
                                } else {
                                    ++esi14;
                                    edi24 = (edi24 | 0x200) & 0xfffffeef;
                                    eax18 = 5;
                                }
                            } else {
                                ++esi14;
                                edi24 = (edi24 | 16) & 0xfffffcff;
                                eax18 = 5;
                            }
                        } else {
                            ++esi14;
                            edi24 = (edi24 | 0x100) & 0xfffffdef;
                            eax18 = 5;
                        }
                    case 19:
                        goto 0x40402d;
                    case 21:
                    case 22:
                    case 23:
                        goto 0x4043d8;
                    case 17:
                        goto 0x404038;
                    case 16:
                        goto 0x403fbd;
                    case 15:
                        goto 0x4040ed;
                    case 14:
                        goto 0x403f7a;
                    case 11:
                        goto 0x403e04;
                    case 13:
                        goto 0x403e16;
                    case 20:
                        goto 0x404379;
                    case 10:
                        goto 0x403e2b;
                    case 12:
                        goto 0x403e0d;
                    case 18:
                        goto 0x403fb2;
                    }
                }
                goto addr_4043d8_15;
            } else {
                esi14 = reinterpret_cast<struct s0*>(&esi14->f1);
                goto addr_403b30_7;
            }
        }
        v34 = ebx15;
        fun_403a68(*reinterpret_cast<signed char*>(&v34), reinterpret_cast<int32_t>(ebp7) - 0x520);
        continue;
        v35 = 10;
        *reinterpret_cast<signed char*>(&ecx29) = 1;
        addr_403e34_56:
        if (!(edi24 & 0x100)) {
            if (!(edi24 & 16)) {
                if (!(edi24 & 0x200)) {
                    a6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a6) + 4);
                    edx36 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(a6) - 4);
                    if (!*reinterpret_cast<signed char*>(&ecx29)) {
                        v37 = edx36;
                        v38 = reinterpret_cast<void**>(0);
                    } else {
                        __asm__("cdq ");
                        v37 = edx36;
                        v38 = edx36;
                    }
                } else {
                    a6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a6) + 4);
                    edx28 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(a6) - 4);
                    if (!*reinterpret_cast<signed char*>(&ecx29)) {
                        v37 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(edx28)));
                        v38 = reinterpret_cast<void**>(0);
                    } else {
                        __asm__("cdq ");
                        v37 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(edx28)));
                        v38 = edx28;
                    }
                }
            } else {
                a6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a6) + 4);
                edx39 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(a6) - 4);
                if (!*reinterpret_cast<signed char*>(&ecx29)) {
                    v37 = edx39;
                    v38 = reinterpret_cast<void**>(0);
                } else {
                    __asm__("cdq ");
                    v37 = edx39;
                    v38 = edx39;
                }
            }
        } else {
            a6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a6) + 8);
            v37 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(a6) - 8);
            v38 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(a6) - 4);
        }
        eax40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffff49);
        v41 = eax40;
        if (v38 || v37) {
            edi24 = edi24 | 4;
            goto addr_403f0a_71;
        }
        if (v22) {
            addr_403f0a_71:
            *reinterpret_cast<signed char*>(&eax40) = v42;
            v43 = eax40;
            v44 = ecx29;
            ecx29 = v41;
            fun_405090(v37, v38, ecx29, v35, *reinterpret_cast<signed char*>(&v44), *reinterpret_cast<void**>(&v43));
        }
        if (reinterpret_cast<signed char>(v22) < reinterpret_cast<signed char>(0)) {
            addr_404148_75:
            if (edi24 & 8 && reinterpret_cast<signed char>(v23) > reinterpret_cast<signed char>(0)) {
                eax62 = fun_402250(ecx29, v41, v12, v10, v8, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61);
                v63 = eax62;
                if (!1) {
                    --v63;
                }
                if (reinterpret_cast<signed char>(v23) > reinterpret_cast<signed char>(v63)) {
                    v20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v23) - reinterpret_cast<unsigned char>(v63));
                }
            }
        } else {
            eax81 = fun_402250(ecx29, v41, v12, v10, v8, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80);
            v82 = eax81;
            v83 = eax81;
            if (1) {
                if (v21) {
                    ++v83;
                    --v41;
                }
            } else {
                --v82;
            }
            if (reinterpret_cast<signed char>(v22) > reinterpret_cast<signed char>(v82)) {
                v20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v22) - reinterpret_cast<unsigned char>(v82));
                goto addr_4041b6_86;
            }
        }
        ecx84 = v41;
        if (static_cast<int1_t>(!!v21)) {
            if (!0) {
                --v41;
                *reinterpret_cast<signed char*>(&ecx84) = v21;
            }
            if (reinterpret_cast<int32_t>(v20) > reinterpret_cast<int32_t>(0)) {
                v20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v20) - 1);
            }
        }
        eax102 = fun_402250(ecx84, v41, v12, v10, v8, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101);
        v83 = eax102;
        addr_4041b6_86:
        if (edi24 & 1) {
            if (*reinterpret_cast<signed char*>(&ebx26) != 0x6f) {
                if ((*reinterpret_cast<signed char*>(&ebx26) == 0x78 || *reinterpret_cast<signed char*>(&ebx26) == 88) && (edi24 = edi24 | 64, v23 = v23 - 2, v20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v20) - 2), reinterpret_cast<int32_t>(v20) < reinterpret_cast<int32_t>(0))) {
                    v20 = reinterpret_cast<void*>(0);
                }
            } else {
                if (reinterpret_cast<int32_t>(v20) <= reinterpret_cast<int32_t>(0)) {
                    v20 = reinterpret_cast<void*>(1);
                }
            }
        }
        v103 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v83) + reinterpret_cast<uint32_t>(v20));
        if (!(edi24 & 2) && reinterpret_cast<signed char>(v23) > reinterpret_cast<signed char>(v103)) {
            do {
                fun_403a68(32, reinterpret_cast<int32_t>(ebp7) - 0x520);
                --v23;
            } while (reinterpret_cast<signed char>(v23) > reinterpret_cast<signed char>(v103));
        }
        if (edi24 & 64) {
            fun_403a68(48, reinterpret_cast<int32_t>(ebp7) - 0x520);
            v104 = ebx26;
            fun_403a68(*reinterpret_cast<signed char*>(&v104), reinterpret_cast<int32_t>(ebp7) - 0x520);
        }
        if (reinterpret_cast<int32_t>(v20) > reinterpret_cast<int32_t>(0)) {
            v103 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v103) - reinterpret_cast<uint32_t>(v20));
            v23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) - reinterpret_cast<uint32_t>(v20));
            if (static_cast<int1_t>(!1)) {
                ++v41;
                fun_403a68(0, reinterpret_cast<int32_t>(ebp7) - 0x520);
                --v103;
                --v23;
            }
            while (ecx105 = v20, v20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v20) + 0xffffffff), !!ecx105) {
                fun_403a68(48, reinterpret_cast<int32_t>(ebp7) - 0x520);
            }
        }
        if (v25) {
            edx106 = reinterpret_cast<void**>(0);
            v107 = v41;
            v108 = reinterpret_cast<void**>(0);
            v109 = v103;
            while ((eax110 = v109, --v109, !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax110) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax110 == 0))) && (eax111 = v107, v107 = v107 + 2, edx106 = *reinterpret_cast<void***>(eax111), ecx112 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffaa), eax113 = fun_40487c(ecx112, ecx112, edx106, v12, v10, v8), v114 = eax113, v114 > 0)) {
                ecx115 = 0;
                edx106 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + reinterpret_cast<unsigned char>(v108) + 0xfffffb48);
                if (0 >= v114) 
                    continue;
                do {
                    *reinterpret_cast<void***>(edx106) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v114) + 2);
                    ++edx106;
                    ++v108;
                    ++ecx115;
                } while (ecx115 < v114);
            }
            v103 = v108;
        }
        if (v103) {
            v23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) - reinterpret_cast<unsigned char>(v103));
            while (edx116 = v103, --v103, !!edx116) {
                fun_403a68(0, reinterpret_cast<int32_t>(ebp7) - 0x520);
            }
        }
        while (eax117 = v23, --v23, !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax117) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax117 == 0))) {
            fun_403a68(32, reinterpret_cast<int32_t>(ebp7) - 0x520);
        }
        continue;
        v35 = 8;
        addr_403e23_122:
        v21 = 0;
        ecx29 = reinterpret_cast<void**>(0);
        goto addr_403e34_56;
        v35 = 10;
        goto addr_403e23_122;
        v35 = 16;
        edx28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx26) + 0xffffffe9);
        v42 = *reinterpret_cast<signed char*>(&edx28);
        goto addr_403e23_122;
        a6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a6) + 4);
        ecx29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffff48);
        v118 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(a6) - 4);
        fun_403a9c(v118, ecx29);
        edi24 = edi24 & 0xfffffffb;
        v41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffff48);
        goto addr_404148_75;
        if (!(edi24 & 0x100)) {
            eax119 = 6;
        } else {
            eax119 = 8;
        }
        edx120 = edi24;
        *reinterpret_cast<unsigned char*>(&edx120) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx120) & 1);
        ecx121 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffff49);
        v41 = ecx121;
        if (reinterpret_cast<signed char>(v22) >= reinterpret_cast<signed char>(0)) {
            eax122 = v22;
        } else {
            eax122 = reinterpret_cast<void**>(6);
        }
        fun_404fc8(a6, eax122, ecx121, ebx26, edx120, eax119);
        ecx29 = reinterpret_cast<void**>(edi24 & 0x100);
        eax123 = fun_404fce(a6, ecx29);
        a6 = eax123;
        goto addr_404148_75;
        addr_403fbd_133:
        if (!(edi24 & 16)) {
            a6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a6) + 4);
            v41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffff48);
            v25 = 0;
            v83 = reinterpret_cast<void**>(1);
            goto addr_4041b6_86;
        } else {
            a6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a6) + 4);
            v25 = 1;
            v41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffff48);
            v83 = reinterpret_cast<void**>(1);
            goto addr_4041b6_86;
        }
        addr_404038_136:
        if (!(edi24 & 16)) {
            a6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a6) + 4);
            v41 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(a6) - 4);
            v25 = 0;
            if (!v41) {
                v41 = reinterpret_cast<void**>("(null)");
            }
        } else {
            a6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a6) + 4);
            v41 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(a6) - 4);
            v25 = 1;
            if (!v41) {
                v41 = reinterpret_cast<void**>("(");
            }
        }
        if (!v25) {
            if (reinterpret_cast<signed char>(v22) < reinterpret_cast<signed char>(0)) {
                eax124 = reinterpret_cast<void**>(0x7fffffff);
            } else {
                eax124 = v22;
            }
            edx125 = v41;
            v83 = reinterpret_cast<void**>(0);
            while (eax124) {
                if (!*reinterpret_cast<void***>(edx125)) 
                    goto addr_4040e8_148;
                --eax124;
                ++v83;
                ++edx125;
            }
            goto addr_4041b6_86;
        } else {
            if (reinterpret_cast<signed char>(v22) < reinterpret_cast<signed char>(0)) {
                eax126 = reinterpret_cast<void**>(0x7fffffff);
            } else {
                eax126 = v22;
            }
            edx127 = v41;
            v83 = reinterpret_cast<void**>(0);
            while (eax126) {
                if (!*reinterpret_cast<void***>(edx127)) 
                    goto addr_4040b7_156;
                --eax126;
                ++v83;
                edx127 = edx127 + 2;
            }
            goto addr_4041b6_86;
        }
        addr_4040e8_148:
        goto addr_4041b6_86;
        addr_4040b7_156:
        goto addr_4041b6_86;
        if (!(edi24 & 0x210)) {
            edi24 = edi24 | 16;
            goto addr_403fbd_133;
        }
        if (!(edi24 & 0x210)) {
            edi24 = edi24 | 16;
            goto addr_404038_136;
        }
        a6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a6) + 4);
        v128 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(a6) - 4);
        if (!(edi24 & 16)) {
            if (!(edi24 & 0x200)) {
                *reinterpret_cast<void***>(v128) = reinterpret_cast<void**>(0);
            } else {
                *reinterpret_cast<void***>(v128) = reinterpret_cast<void**>(0);
            }
        } else {
            *reinterpret_cast<void***>(v128) = reinterpret_cast<void**>(0);
        }
    }
    addr_4043e4_167:
    fun_403a20(reinterpret_cast<int32_t>(ebp7) - 0x520);
    if (1) {
        eax129 = 0;
    } else {
        eax129 = 0xffffffff;
    }
    return eax129;
    addr_4043d8_15:
    while (eax130 = v19, ++v19, *reinterpret_cast<signed char*>(&eax130) = *eax130, !!*reinterpret_cast<signed char*>(&eax130)) {
        v131 = eax130;
        fun_403a68(*reinterpret_cast<signed char*>(&v131), reinterpret_cast<int32_t>(ebp7) - 0x520);
    }
    goto addr_4043e4_167;
}

void fun_403a68(signed char a1, struct s11* a2) {
    if (reinterpret_cast<int32_t>(a2->f50) >= reinterpret_cast<int32_t>(80)) {
        fun_403a20(a2);
    }
    if (!a2->f64 || *a2->f64 > a2->f5c) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(a2) + reinterpret_cast<uint32_t>(a2->f50)) = a1;
        a2->f50 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a2->f50) + 1);
    }
    a2->f5c = a2->f5c + 1;
    return;
}

int32_t MultiByteToWideChar = 0xf354;

void** fun_4099c6(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    goto MultiByteToWideChar;
}

int32_t GetLastError = 0xf24a;

void** fun_409966(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto GetLastError;
}

int32_t WideCharToMultiByte = 0xf430;

void** fun_409a14(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    goto WideCharToMultiByte;
}

void** fun_4023bc(void** a1) {
    void** edx2;
    void** eax3;

    edx2 = reinterpret_cast<void**>(0);
    eax3 = a1;
    while (*reinterpret_cast<void***>(eax3)) {
        ++edx2;
        eax3 = eax3 + 2;
    }
    return edx2;
}

void* g40b850 = reinterpret_cast<void*>(0x1332);

void* fun_404f98(void* a1, uint32_t a2) {
    uint16_t v3;

    __asm__("wait ");
    __asm__("fnstcw word [ebp-0x4]");
    if (!a2) {
        g40b850 = a1;
    }
    __asm__("wait ");
    __asm__("fldcw word [ebp-0x4]");
    return reinterpret_cast<uint32_t>(a1) & a2 | static_cast<uint32_t>(v3) & ~a2;
}

void*** fun_404434(void* a1);

void** fun_4053b8(void** a1, void** a2, void** a3) {
    void** edi4;
    void** esi5;
    void** ebx6;
    void*** eax7;
    void** eax8;

    edi4 = a3;
    esi5 = a2;
    ebx6 = a1;
    eax7 = fun_404434(14);
    if (*reinterpret_cast<signed char*>(&ebx6) == 71) {
        do {
            addr_4053e4_2:
            if (*reinterpret_cast<void***>(edi4 + 0xffffffff) != 48) 
                goto addr_4053ea_3;
            --edi4;
        } while (reinterpret_cast<unsigned char>(esi5) < reinterpret_cast<unsigned char>(edi4));
    } else {
        if (*reinterpret_cast<signed char*>(&ebx6) != 0x67) {
            addr_4053ea_3:
            if (*eax7 == *reinterpret_cast<void***>(edi4 + 0xffffffff)) {
                --edi4;
                goto addr_4053f2_7;
            }
        } else {
            goto addr_4053e4_2;
        }
    }
    eax8 = esi5;
    addr_4053f4_10:
    return eax8;
    addr_4053f2_7:
    eax8 = edi4;
    goto addr_4053f4_10;
}

void** fun_4056b4(void** a1, void** a2, void** a3) {
    void** ebx4;
    void** esi5;
    void** edi6;
    void*** eax7;
    void** eax8;

    ebx4 = a3;
    esi5 = a2;
    edi6 = a1;
    eax7 = fun_404434(14);
    if (*reinterpret_cast<int16_t*>(&edi6) == 71) {
        do {
            addr_4056e4_2:
            if (*reinterpret_cast<void***>(ebx4 + 0xfffffffe) != 48) 
                goto addr_4056eb_3;
            ebx4 = ebx4 - 2;
        } while (reinterpret_cast<unsigned char>(esi5) < reinterpret_cast<unsigned char>(ebx4));
    } else {
        if (*reinterpret_cast<int16_t*>(&edi6) != 0x67) {
            addr_4056eb_3:
            if (*eax7 == *reinterpret_cast<void***>(ebx4 + 0xfffffffe)) {
                ebx4 = ebx4 - 2;
                goto addr_4056f7_7;
            }
        } else {
            goto addr_4056e4_2;
        }
    }
    eax8 = esi5;
    addr_4056f9_10:
    return eax8;
    addr_4056f7_7:
    eax8 = ebx4;
    goto addr_4056f9_10;
}

uint32_t fun_40454c(void* a1);

uint32_t fun_406ab0(void* ecx, void* a2) {
    uint32_t eax3;

    if (reinterpret_cast<uint32_t>(a2) <= 0xff) {
        eax3 = fun_40454c(a2);
        return eax3;
    } else {
        return 0;
    }
}

struct s12 {
    void* f0;
    uint32_t f4;
};

uint32_t fun_405388(struct s12* a1, void* a2) {
    void* eax3;
    void* tmp32_4;
    uint32_t eax5;
    uint32_t tmp32_6;

    eax3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a1->f0) * 10);
    tmp32_4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax3) + reinterpret_cast<uint32_t>(a2));
    a1->f0 = tmp32_4;
    eax5 = a1->f4 * 10;
    tmp32_6 = eax5 + (__intrinsic() + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_4) < reinterpret_cast<uint32_t>(eax3)));
    a1->f4 = tmp32_6;
    return __intrinsic() + reinterpret_cast<uint1_t>(tmp32_6 < eax5);
}

void* fun_405144(int32_t a1, int32_t a2, int32_t a3, uint16_t a4, int32_t a5, void* a6) {
    uint16_t cx7;
    uint16_t bx8;
    void* eax9;
    int32_t edx10;
    int32_t edi11;
    uint16_t dx12;
    void* eax13;

    if (a1) {
        cx7 = 0x43fe;
        bx8 = 0x3bcd;
    } else {
        cx7 = 0x407e;
        bx8 = 0x3f6a;
    }
    eax9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 12);
    *reinterpret_cast<uint16_t*>(&edx10) = a4;
    edi11 = edx10;
    dx12 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edx10) & 0x7fff);
    if (dx12 != 0x7fff) {
        if (cx7 >= dx12) {
            if (cx7 != dx12) {
                if (1) {
                    if (bx8 <= dx12) {
                        __asm__("fld tword [ebp+0xc]");
                        __asm__("fstp qword [ebp-0x1c]");
                        __asm__("wait ");
                        __asm__("fld qword [ebp-0x1c]");
                    } else {
                        eax9 = reinterpret_cast<void*>(0);
                        goto addr_40522d_11;
                    }
                } else {
                    __asm__("fld tword [ebp+0xc]");
                    __asm__("fstp qword [ebp-0x1c]");
                    __asm__("wait ");
                    __asm__("fld qword [ebp-0x1c]");
                }
            } else {
                eax13 = fun_404f98(0, 0);
                fun_404f98(0xc00, 0xc00);
                if (a1) {
                    __asm__("fld tword [ebp+0xc]");
                    __asm__("fstp qword [ebp-0x10]");
                    __asm__("wait ");
                } else {
                    __asm__("fld tword [ebp+0xc]");
                    __asm__("fstp dword [ebp-0x14]");
                    __asm__("wait ");
                    __asm__("fld dword [ebp-0x14]");
                    __asm__("fstp qword [ebp-0x10]");
                    __asm__("wait ");
                }
                eax9 = fun_404f98(eax13, 0xc00);
                __asm__("fld qword [ebp-0x10]");
            }
        } else {
            eax9 = a6;
            goto addr_40522d_11;
        }
    } else {
        __asm__("fld tword [ebp+0xc]");
        __asm__("fstp qword [ebp-0x1c]");
        __asm__("wait ");
        __asm__("fld qword [ebp-0x1c]");
    }
    addr_405254_19:
    return eax9;
    addr_40522d_11:
    g40b9fc = 34;
    if (!(*reinterpret_cast<uint16_t*>(&edi11) & 0x8000)) {
        __asm__("fld qword [ebp-0x10]");
        goto addr_405254_19;
    } else {
        __asm__("fld qword [ebp-0x10]");
        __asm__("fchs ");
        goto addr_405254_19;
    }
}

int32_t fun_404dfc(void** ecx, void** a2) {
    void** eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;

    if (reinterpret_cast<signed char>(a2) >= reinterpret_cast<signed char>(0xffffecbc)) {
        if (reinterpret_cast<signed char>(a2) <= reinterpret_cast<signed char>(0x1344)) {
            if (a2) {
                eax3 = a2;
                if (reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0)) {
                    eax3 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(a2));
                }
                eax4 = reinterpret_cast<signed char>(eax3) >> 3;
                if (*reinterpret_cast<unsigned char*>(&eax4) & 1) {
                    __asm__("fld tword [0x40b710]");
                    __asm__("fld tword [ebp-0xc]");
                    __asm__("fmulp st1, st0");
                    __asm__("fstp tword [ebp-0xc]");
                    __asm__("wait ");
                }
                eax5 = eax4 >> 1;
                if (eax5) {
                    if (*reinterpret_cast<unsigned char*>(&eax5) & 1) {
                        __asm__("fld tword [0x40b71c]");
                        __asm__("fld tword [ebp-0xc]");
                        __asm__("fmulp st1, st0");
                        __asm__("fstp tword [ebp-0xc]");
                        __asm__("wait ");
                    }
                    eax6 = eax5 >> 1;
                    if (*reinterpret_cast<unsigned char*>(&eax6) & 1) {
                        __asm__("fld tword [ecx]");
                        __asm__("fld tword [ebp-0xc]");
                        __asm__("fmulp st1, st0");
                        __asm__("fstp tword [ebp-0xc]");
                        __asm__("wait ");
                    }
                    eax7 = eax6 >> 1;
                    if (*reinterpret_cast<unsigned char*>(&eax7) & 1) {
                        __asm__("fld tword [ecx]");
                        __asm__("fld tword [ebp-0xc]");
                        __asm__("fmulp st1, st0");
                        __asm__("fstp tword [ebp-0xc]");
                        __asm__("wait ");
                    }
                    eax8 = eax7 >> 1;
                    if (*reinterpret_cast<unsigned char*>(&eax8) & 1) {
                        __asm__("fld tword [ecx]");
                        __asm__("fld tword [ebp-0xc]");
                        __asm__("fmulp st1, st0");
                        __asm__("fstp tword [ebp-0xc]");
                        __asm__("wait ");
                    }
                    eax9 = eax8 >> 1;
                    if (*reinterpret_cast<unsigned char*>(&eax9) & 1) {
                        __asm__("fld tword [ecx]");
                        __asm__("fld tword [ebp-0xc]");
                        __asm__("fmulp st1, st0");
                        __asm__("fstp tword [ebp-0xc]");
                        __asm__("wait ");
                    }
                    eax10 = eax9 >> 1;
                    if (*reinterpret_cast<unsigned char*>(&eax10) & 1) {
                        __asm__("fld tword [ecx]");
                        __asm__("fld tword [ebp-0xc]");
                        __asm__("fmulp st1, st0");
                        __asm__("fstp tword [ebp-0xc]");
                        __asm__("wait ");
                    }
                    eax11 = eax10 >> 1;
                    if (*reinterpret_cast<unsigned char*>(&eax11) & 1) {
                        __asm__("fld tword [ecx]");
                        __asm__("fld tword [ebp-0xc]");
                        __asm__("fmulp st1, st0");
                        __asm__("fstp tword [ebp-0xc]");
                        __asm__("wait ");
                    }
                    eax12 = eax11 >> 1;
                    if (*reinterpret_cast<unsigned char*>(&eax12) & 1) {
                        __asm__("fld tword [ecx]");
                        __asm__("fld tword [ebp-0xc]");
                        __asm__("fmulp st1, st0");
                        __asm__("fstp tword [ebp-0xc]");
                        __asm__("wait ");
                    }
                    eax5 = eax12 >> 1;
                    if (*reinterpret_cast<unsigned char*>(&eax5) & 1) {
                        eax5 = 0x40b76c;
                        __asm__("fld tword [eax]");
                        __asm__("fld tword [ebp-0xc]");
                        __asm__("fmulp st1, st0");
                        __asm__("fstp tword [ebp-0xc]");
                        __asm__("wait ");
                    }
                }
                if (reinterpret_cast<signed char>(a2) >= reinterpret_cast<signed char>(0)) {
                    __asm__("fld tword [ebp-0xc]");
                } else {
                    __asm__("fld tword [ebp-0xc]");
                    __asm__("fdivr dword [0x404f80]");
                }
            } else {
                __asm__("fld tword [0x404f74]");
            }
        } else {
            eax5 = 0x40b776;
            __asm__("fld tword [eax]");
        }
    } else {
        __asm__("fld tword [0x404f68]");
    }
    return eax5;
}

struct s13 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void fun_405058(struct s13* a1, void** a2) {
    if (*reinterpret_cast<void***>(a2 + 8) == 0x403e) {
        a1->f0 = *reinterpret_cast<void***>(a2);
        a1->f4 = *reinterpret_cast<void***>(a2 + 4);
        return;
    } else {
        __asm__("fld tword [edx]");
        __asm__("fistp qword [eax]");
        __asm__("wait ");
        return;
    }
}

void** fun_402238(void** ecx, void** a2, void** a3, void** a4) {
    void** edi5;
    void** ax6;
    void** ecx7;

    edi5 = a2;
    ax6 = a3;
    ecx7 = a4;
    while (*reinterpret_cast<int16_t*>(&ecx7)) {
        *reinterpret_cast<int16_t*>(&ecx7) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx7) - 1);
        *reinterpret_cast<void***>(edi5) = ax6;
        edi5 = edi5 + 2;
    }
    return a2;
}

int32_t GetOEMCP = 0xf294;

void** fun_40997e() {
    goto GetOEMCP;
}

int32_t GetACP = 0xf1e6;

void** fun_409942() {
    goto GetACP;
}

int32_t GetCPInfo = 0xf1f0;

int32_t fun_409948(void** a1, void** a2) {
    goto GetCPInfo;
}

void** g40ba04 = reinterpret_cast<void**>(0);

int32_t g40ba00 = 0;

void** fun_406c1c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

uint32_t g40bbf4 = 1;

void fun_409972(void** ecx, int32_t a2, void** a3, int32_t a4, void** a5, void** a6);

struct s14 {
    signed char f0;
    unsigned char f1;
};

struct s14* fun_406acc(struct s14* a1, uint32_t a2, int32_t a3, void** a4, int32_t a5);

uint32_t fun_406c98(void** ecx, int32_t a2, void** a3, int32_t a4);

void** fun_409a26(int32_t a1, void** a2, unsigned char* a3, uint32_t a4, int32_t a5, void** a6, int32_t a7);

void** fun_406cdc(void** ecx, void** a2, void** a3, void** a4) {
    void* ebp5;
    int1_t zf6;
    int1_t zf7;
    int1_t zf8;
    int1_t zf9;
    void** eax10;
    int1_t zf11;
    void** esi12;
    void** ebx13;
    void** v14;
    int1_t zf15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
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
    void** eax47;
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
    void** ecx58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    struct s14* eax65;
    struct s14* ebx66;
    struct s14* eax67;
    unsigned char* ebx68;
    uint32_t eax69;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    zf6 = g40ba04 == 0;
    if (!zf6 || (zf7 = g40ba00 == 0, !zf7)) {
        zf8 = g40ba00 == 0;
        if (!zf8) {
            zf9 = g40ba00 == -1;
            if (zf9) {
                addr_406df1_4:
                return eax10;
            } else {
                g40ba00();
                ecx = a2;
            }
        }
        eax10 = g40ba04;
        if (eax10 && ((zf11 = reinterpret_cast<int1_t>(g40ba04 == 0xffffffff), !zf11) && *reinterpret_cast<void***>(eax10))) {
            eax10 = fun_406c1c(ecx, eax10, a2, esi12, ebx13, v14);
            goto addr_406df1_4;
        }
    } else {
        zf15 = g40bbf4 == 0;
        if (zf15) {
            eax19 = fun_409996(0xf4, esi12, ebx13, v16, v17, v18);
            v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffffc);
            fun_409a1a(ecx, eax19, "\r\n", 2, v20, 0, 0xf4, esi12, ebx13, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35);
            v36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffffc);
            eax47 = fun_402250(ecx, a2, v36, 0, eax19, "\r\n", 2, v20, 0, 0xf4, esi12, ebx13, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46);
            fun_409a1a(a2, eax19, a2, eax47, v36, 0, eax19, "\r\n", 2, v20, 0, 0xf4, esi12, ebx13, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57);
            ecx58 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffffc);
            eax10 = fun_409a1a(ecx58, eax19, "\r\n", 2, ecx58, 0, eax19, a2, eax47, v36, 0, eax19, "\r\n", 2, v20, 0, 0xf4, esi12, ebx13, v59, v60, v61, v62, v63);
            goto addr_406df1_4;
        } else {
            v64 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffff7c);
            fun_409972(ecx, 0, v64, 0x80, esi12, ebx13);
            eax65 = fun_406acc(reinterpret_cast<int32_t>(ebp5) - 0x84, 92, 0, v64, 0x80);
            ebx66 = eax65;
            if (eax65 || (eax67 = fun_406acc(reinterpret_cast<int32_t>(ebp5) - 0x84, 58, 0, v64, 0x80), ebx66 = eax67, !!eax67)) {
                ebx68 = &ebx66->f1;
            } else {
                ebx68 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp5) - 0x84);
            }
            eax69 = fun_406c98(ecx, 0, v64, 0x80);
            eax10 = fun_409a26(0, a2, ebx68, eax69 | 0x10010, 0, v64, 0x80);
            goto addr_406df1_4;
        }
    }
}

void** fun_4022ac(void** ecx, void** a2, void** a3, uint32_t a4) {
    void** edi5;
    int32_t ecx6;
    void** ebx7;
    uint32_t ecx8;
    void** edx9;
    uint32_t ecx10;
    void** al11;
    void** al12;
    void** al13;
    signed char al14;
    void** al15;

    edi5 = a2;
    ecx6 = -1;
    do {
        if (!ecx6) 
            break;
        --ecx6;
        ++edi5;
    } while (*reinterpret_cast<void***>(edi5));
    ebx7 = edi5 + 0xffffffff;
    ecx8 = a4 & 3;
    edx9 = a3;
    if (ecx8) {
        addr_4022d9_5:
        ecx10 = a4 >> 2;
        if (ecx10) {
            addr_402310_6:
            *reinterpret_cast<void***>(ebx7) = reinterpret_cast<void**>(0);
        } else {
            do {
                al11 = *reinterpret_cast<void***>(edx9);
                *reinterpret_cast<void***>(ebx7) = al11;
                if (!al11) 
                    break;
                al12 = *reinterpret_cast<void***>(edx9 + 1);
                *reinterpret_cast<void***>(ebx7 + 1) = al12;
                if (!al12) 
                    break;
                al13 = *reinterpret_cast<void***>(edx9 + 2);
                *reinterpret_cast<void***>(ebx7 + 2) = al13;
                if (!al13) 
                    break;
                al14 = *reinterpret_cast<signed char*>(edx9 + 3);
                edx9 = edx9 + 4;
                *reinterpret_cast<signed char*>(ebx7 + 3) = al14;
                ebx7 = ebx7 + 4;
                if (!al14) 
                    break;
                --ecx10;
            } while (ecx10);
            goto addr_402310_6;
        }
    } else {
        do {
            al15 = *reinterpret_cast<void***>(edx9);
            *reinterpret_cast<void***>(ebx7) = al15;
            if (!al15) 
                break;
            ++edx9;
            ++ebx7;
            --ecx8;
        } while (ecx8);
        goto addr_4022d9_5;
    }
    return a2;
}

void fun_40996c();

void fun_409a2c(int32_t a1, int32_t a2, void* a3, uint32_t a4, void* a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9);

void** fun_406bcc() {
    void** v1;
    uint16_t v2;
    uint16_t v3;
    uint16_t v4;
    uint16_t v5;
    uint16_t v6;
    int32_t v7;

    v1 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 4);
    fun_40996c();
    fun_409a2c(0x40cc5c, "%02d/%02d/%04d %02d:%02d:%02d.%03d ", static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&v1) + 2))), static_cast<uint32_t>(v2), static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void**>(&v1))), static_cast<uint32_t>(v3), static_cast<uint32_t>(v4), static_cast<uint32_t>(v5), static_cast<uint32_t>(v6));
    goto v7;
}

int32_t WriteFile = 0xf446;

void** fun_409a1a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24) {
    goto WriteFile;
}

int32_t CloseHandle = 0xf1bc;

void fun_409930(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    goto CloseHandle;
}

int32_t GetModuleFileNameA = 0xf26a;

void fun_409972(void** ecx, int32_t a2, void** a3, int32_t a4, void** a5, void** a6) {
    goto GetModuleFileNameA;
}

struct s14* fun_406acc(struct s14* a1, uint32_t a2, int32_t a3, void** a4, int32_t a5) {
    uint32_t ecx6;
    struct s14* eax7;
    struct s14* edx8;
    int32_t ebx9;
    uint32_t ebx10;
    uint32_t ebx11;

    ecx6 = a2;
    eax7 = a1;
    edx8 = reinterpret_cast<struct s14*>(0);
    do {
        ebx9 = 0;
        *reinterpret_cast<signed char*>(&ebx9) = eax7->f0;
        if (!(*reinterpret_cast<unsigned char*>(ebx9 + 0x40ca55) & 4)) {
            ebx10 = 0;
            *reinterpret_cast<signed char*>(&ebx10) = eax7->f0;
            if (ecx6 == ebx10) {
                edx8 = eax7;
                continue;
            }
        } else {
            if (!eax7->f1) 
                goto addr_406aec_6;
            ebx11 = 0;
            *reinterpret_cast<signed char*>(&ebx11) = eax7->f0;
            if (ecx6 == (ebx11 << 8 | static_cast<uint32_t>(eax7->f1))) 
                goto addr_406b06_8;
        }
        addr_406b08_9:
        eax7 = reinterpret_cast<struct s14*>(&eax7->f1);
        continue;
        addr_406b06_8:
        edx8 = eax7;
        goto addr_406b08_9;
        eax7 = reinterpret_cast<struct s14*>(&eax7->f1);
    } while (eax7->f0);
    addr_406b1c_11:
    return edx8;
    addr_406aec_6:
    if (!ecx6) {
        edx8 = reinterpret_cast<struct s14*>(&eax7->f1);
        goto addr_406b1c_11;
    }
}

void** fun_409936();

void** fun_406c1c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void*** ebp7;
    void** eax8;
    void** eax9;
    void** v10;
    void** edi11;
    void** esi12;
    void** ebx13;
    void** ebp14;
    void** eax15;
    void** v16;
    void** eax17;

    ebp7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax8 = fun_409936();
    if (eax8) {
        eax9 = fun_406bcc();
        v10 = reinterpret_cast<void**>(ebp7 + 0xfffffffc);
        eax15 = fun_402250(ecx, eax9, v10, 0, a2, 0xc0000000, 0, 0, 2, 0x80, 0, edi11, esi12, ebx13, ecx, ebp14, __return_address(), a2, a3, a4, a5, a6);
        fun_409a1a(eax9, eax8, eax9, eax15, v10, 0, a2, 0xc0000000, 0, 0, 2, 0x80, 0, edi11, esi12, ebx13, ecx, ebp14, __return_address(), a2, a3, a4, a5, a6);
        v16 = reinterpret_cast<void**>(ebp7 + 0xfffffffc);
        eax17 = fun_402250(eax9, a3, v16, 0, eax8, eax9, eax15, v10, 0, a2, 0xc0000000, 0, 0, 2, 0x80, 0, edi11, esi12, ebx13, ecx, ebp14, __return_address());
        fun_409a1a(a3, eax8, a3, eax17, v16, 0, eax8, eax9, eax15, v10, 0, a2, 0xc0000000, 0, 0, 2, 0x80, 0, edi11, esi12, ebx13, ecx, ebp14, __return_address());
        fun_409930(a3, eax8, eax8, a3, eax17, v16, 0, eax8, eax9, eax15, v10, 0);
    }
    goto 0x80;
}

void** fun_402388(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    void** edi17;
    void** esi18;
    void** ebx19;
    void** ebp20;
    void** eax21;
    void** esi22;
    void** eax23;

    eax21 = fun_402250(ecx, a2, edi17, esi18, ebx19, ebp20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    esi22 = eax21 + 1;
    eax23 = fun_4013e0(a2, esi22, edi17, esi18);
    if (eax23) {
        fun_40213c(esi22, eax23, a2, esi22, edi17, esi18, ebx19);
    }
    return eax23;
}

int32_t g40ccb4;

int32_t g40cc80;

void** g40cc7c;

void** fun_401400(void** a1, int32_t a2);

void fun_4070a0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    int32_t eax17;
    int1_t zf18;
    int32_t tmp32_19;
    int32_t edx20;
    void** eax21;
    void** edi22;
    void** esi23;
    void** ebx24;
    void** ebx25;
    void** ebp26;
    void** eax27;
    void** v28;
    void** eax29;
    void** edi30;
    uint32_t ecx31;
    uint32_t ecx32;
    void** edi33;
    void*** esi34;
    uint32_t edx35;
    uint32_t ecx36;
    uint32_t ecx37;
    void** eax38;
    int32_t edx39;

    eax17 = g40ccb4;
    zf18 = eax17 == g40cc80;
    if (zf18 && (tmp32_19 = g40cc80 + 16, g40cc80 = tmp32_19, edx20 = g40cc80, ecx = g40cc7c, eax21 = fun_401400(ecx, edx20 << 2), g40cc7c = eax21, !eax21)) {
        fun_406e08(ecx, "No space for command line argument vector", edi22, esi23);
        ecx = reinterpret_cast<void**>("No space for command line argument vector");
    }
    if (!a3) {
        ebx24 = a2;
    } else {
        eax27 = fun_402250(ecx, a2, edi22, esi23, ebx25, ebp26, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
        v28 = eax27 + 1;
        eax29 = fun_4013e0(a2, v28, edi22, esi23);
        ebx24 = eax29;
        if (!eax29) {
            fun_406e08(v28, "No space for command line argument", edi22, esi23);
        }
        edi30 = a2;
        ecx31 = 0xffffffff;
        do {
            if (!ecx31) 
                break;
            --ecx31;
            ++edi30;
        } while (*reinterpret_cast<void***>(edi30));
        ecx32 = ~ecx31;
        edi33 = ebx24;
        esi34 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi30) - ecx32);
        edx35 = ecx32;
        ecx36 = ecx32 >> 2;
        while (ecx36) {
            --ecx36;
            *reinterpret_cast<void***>(edi33) = *esi34;
            edi33 = edi33 + 4;
            esi34 = esi34 + 4;
        }
        ecx37 = edx35 & 3;
        while (ecx37) {
            --ecx37;
            *reinterpret_cast<void***>(edi33) = *esi34;
            ++edi33;
            ++esi34;
        }
    }
    eax38 = g40cc7c;
    edx39 = g40ccb4;
    *reinterpret_cast<void***>(eax38 + edx39 * 4) = ebx24;
    ++g40ccb4;
    return;
}

/* (image base) */
int32_t image_base_ = 0x401490;

void** fun_401400(void** a1, int32_t a2) {
    void** eax3;

    eax3 = reinterpret_cast<void**>(image_base_(a1, a2));
    return eax3;
}

int32_t GetEnvironmentStrings = 0xf224;

void** fun_40995a() {
    goto GetEnvironmentStrings;
}

void** fun_4011e0(void** ecx, int32_t a2, uint32_t a3) {
    void** esi4;
    void** esi5;
    void** ebx6;
    void** eax7;

    esi4 = reinterpret_cast<void**>(a2 * a3);
    eax7 = fun_4013e0(ecx, esi4, esi5, ebx6);
    if (eax7) {
        fun_4021ac(esi4, eax7, 0, esi4);
    }
    return eax7;
}

void fun_404f84(int32_t a1) {
    __asm__("fclex ");
    goto a1;
}

int32_t SetConsoleCtrlHandler = 0xf388;

void fun_4099d8(int32_t a1, int32_t a2) {
    goto SetConsoleCtrlHandler;
}

uint32_t fun_407748(void** a1) {
    uint32_t eax2;
    void*** edx3;
    void** ecx4;

    eax2 = 0;
    edx3 = reinterpret_cast<void***>(0x40bbc0);
    ecx4 = a1;
    do {
        if (ecx4 == *edx3) 
            break;
        ++eax2;
        edx3 = edx3 + 4;
    } while (reinterpret_cast<int32_t>(eax2) < reinterpret_cast<int32_t>(10));
    goto addr_407762_4;
    addr_407765_5:
    return eax2;
    addr_407762_4:
    eax2 = 0xffffffff;
    goto addr_407765_5;
}

struct s17 {
    signed char[1] pad1;
    signed char f1;
    int32_t f2;
};

struct s16 {
    struct s17* f0;
    struct s17* f4;
    struct s17* f8;
    struct s17* fc;
    signed char[4] pad20;
    int32_t f14;
    int32_t f18;
};

struct s15 {
    void** f0;
    signed char[3] pad4;
    struct s16* f4;
};

void fun_407a58(struct s15* a1, int32_t a2) {
    int32_t v3;
    int32_t v4;
    int32_t eax5;
    int32_t esi6;
    void** v7;
    struct s16** v8;
    struct s17* edi9;
    struct s17* edx10;
    struct s17* v11;
    struct s17* ebx12;
    int32_t eax13;
    struct s17* ebx14;
    int32_t eax15;

    if (!a2) {
        v3 = 0x100;
        v4 = 1;
        eax5 = 0;
    } else {
        v3 = -1;
        v4 = -1;
        eax5 = 0xff;
    }
    esi6 = eax5;
    if (!0) {
        do {
            v7 = reinterpret_cast<void**>(0);
            v8 = &a1->f4;
            while (reinterpret_cast<signed char>(a1->f0) > reinterpret_cast<signed char>(v7)) {
                if (!a2) {
                    edi9 = (*v8)->f0;
                } else {
                    edi9 = (*v8)->f8;
                }
                if (!a2) {
                    edx10 = (*v8)->f4;
                } else {
                    edx10 = (*v8)->fc;
                }
                v11 = edx10;
                if (a2) {
                    ebx12 = v11 - 1;
                    if (reinterpret_cast<uint32_t>(edi9) <= reinterpret_cast<uint32_t>(ebx12)) {
                        do {
                            eax13 = esi6;
                            if (*reinterpret_cast<signed char*>(&eax13) == ebx12->f1) {
                                ebx12->f2();
                            }
                            --ebx12;
                        } while (reinterpret_cast<uint32_t>(edi9) <= reinterpret_cast<uint32_t>(ebx12));
                    }
                } else {
                    ebx14 = edi9;
                    if (reinterpret_cast<uint32_t>(ebx14) < reinterpret_cast<uint32_t>(v11)) {
                        do {
                            eax15 = esi6;
                            if (*reinterpret_cast<signed char*>(&eax15) == ebx14->f1) {
                                ebx14->f2();
                            }
                            ++ebx14;
                        } while (reinterpret_cast<uint32_t>(ebx14) < reinterpret_cast<uint32_t>(v11));
                    }
                }
                ++v7;
                ++v8;
            }
            esi6 = esi6 + v4;
        } while (esi6 != v3);
    }
    return;
}

struct s15* fun_407a54() {
    return 0;
}

signed char* fun_407d1c() {
    unsigned char v1;
    int32_t v2;

    fun_409990(reinterpret_cast<int32_t>(__zero_stack_offset()) - 68 - 4);
    if (!(v1 & 1)) {
    }
    goto v2;
}

int32_t GetModuleHandleA = 0xf280;

signed char* fun_409978(void** ecx, signed char* a2, signed char* a3, signed char* a4, signed char* a5) {
    goto GetModuleHandleA;
}

void** fun_406ed4(int32_t a1, int32_t a2, int32_t a3);

void** fun_406f28(int32_t a1, signed char* a2) {
    void** eax3;

    eax3 = fun_406ed4(0, 0, a1);
    return eax3;
}

void fun_407db7(void** ecx) {
    int32_t eax2;

    goto eax2;
}

int32_t fun_402a4c(void** ecx, void** a2, void** a3, int32_t a4, void** a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void** v9;
    void** ebx10;
    void** v11;
    void** esi12;
    void** v13;
    void** edi14;
    int32_t eax15;
    void** esi16;
    void** ebx17;
    uint32_t edi18;
    void** v19;
    void** ecx20;
    uint32_t edx21;
    void** edi22;
    uint32_t eax23;
    int32_t eax24;
    int32_t eax25;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebp8;
    v9 = ebx10;
    v11 = esi12;
    v13 = edi14;
    eax15 = a4;
    esi16 = a3;
    ebx17 = a2;
    while (esi16 != ebx17) {
        edi18 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(ebx17 + 4));
        v19 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(esi16 + 4))));
        ecx20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) & edi18);
        if (!(*reinterpret_cast<unsigned char*>(&ecx20) & 16)) {
            edx21 = reinterpret_cast<unsigned char>(v19) & edi18;
            if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx21) + 1) & 4)) 
                goto addr_402b19_5;
            if (*reinterpret_cast<void***>(ebx17 + 12) == *reinterpret_cast<void***>(esi16 + 12)) 
                goto addr_402b09_7;
            if (eax15) 
                goto addr_402b05_9;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx17 + 12)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi16 + 12))) 
                goto addr_402b05_9;
            addr_402b09_7:
            eax15 = 1;
            ebx17 = *reinterpret_cast<void***>(ebx17 + 8);
            esi16 = *reinterpret_cast<void***>(esi16 + 8);
        } else {
            edi22 = reinterpret_cast<void**>(edi18 & 0x300);
            v19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) & 0x300);
            if (edi22 != v19) {
                if (eax15) 
                    goto addr_402ad3_13;
                if ((reinterpret_cast<unsigned char>(edi22) & 0x300) == (reinterpret_cast<unsigned char>(v19) & 0x300)) 
                    goto addr_402ad3_13;
                eax23 = ~(reinterpret_cast<unsigned char>(v19) & 0x300) & reinterpret_cast<unsigned char>(edi22);
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) & 3) 
                    goto addr_402aba_16;
                if (!1) 
                    goto addr_402ad3_13;
            }
            eax15 = 1;
            ebx17 = *reinterpret_cast<void***>(ebx17 + 8);
            esi16 = *reinterpret_cast<void***>(esi16 + 8);
        }
    }
    eax24 = 1;
    addr_402b55_20:
    return eax24;
    addr_402b19_5:
    eax25 = fun_402970(ecx20, ebx17, esi16, v13, v11, v9, v19, v7, v6, a2, a3);
    if (!eax25) {
        if (!(edi18 & 2) || (!(*reinterpret_cast<unsigned char*>(&v19) & 1) || !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx17 + 12)) & 4))) {
            eax24 = 0;
            goto addr_402b55_20;
        } else {
            eax24 = fun_402484(ecx20, ebx17, esi16, a5, 1, v13, v11, v9, v19);
            goto addr_402b55_20;
        }
    } else {
        eax24 = 1;
        goto addr_402b55_20;
    }
    addr_402b05_9:
    eax24 = 0;
    goto addr_402b55_20;
    addr_402ad3_13:
    eax24 = 0;
    goto addr_402b55_20;
    addr_402aba_16:
    eax24 = 0;
    goto addr_402b55_20;
}

void** fun_402938(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** ebx14;
    void** ebp15;

    if (a2) {
        if (!*reinterpret_cast<uint16_t*>(a2 + 6)) {
            fun_406b6c(ecx, "id->tpName", "xxtype.cpp", 34, ebx14, ebp15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        }
        return *reinterpret_cast<uint16_t*>(a2 + 6) + reinterpret_cast<unsigned char>(a2);
    } else {
        return "<notype>";
    }
}

void** fun_408009(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** edx14;
    void** eax15;

    edx14 = a2;
    eax15 = reinterpret_cast<void**>(0);
    if (edx14) {
        while (++edx14, !!*reinterpret_cast<void***>(edx14)) {
            ++eax15;
        }
    }
    return eax15;
}

void** fun_40810e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** ebx14;
    void** ebx15;
    void** ebp16;
    void** eax17;
    uint32_t ebx18;
    void** eax19;
    uint32_t ebx20;
    uint32_t ebx21;
    void** eax22;

    ebx14 = a4;
    if (*reinterpret_cast<unsigned char*>(&ebx14) & 0x80) {
        eax17 = fun_406b6c(ecx, "(mfnMask & 0x0080) == 0", "xx.cpp", 0x2fc, ebx15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }
    ebx18 = (reinterpret_cast<unsigned char>(ebx14) & 7) - 1;
    if (!ebx18) {
        eax19 = reinterpret_cast<void**>(a3());
        return eax19;
    }
    ebx20 = ebx18 - 1;
    if (!ebx20) {
        a3();
        goto ebp16;
    }
    ebx21 = ebx20 - 1;
    if (!ebx21) {
        eax22 = reinterpret_cast<void**>(a3());
        return eax22;
    }
    if (!(ebx21 - 2)) {
        a3();
        goto ebp16;
    }
    if (!0) 
        goto addr_408172_13;
    addr_408189_14:
    return eax17;
    addr_408172_13:
    eax17 = fun_406b6c(ecx, "!\"what?\"", "xx.cpp", 0x323, ebx15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    goto addr_408189_14;
}

void** fun_407dbe(void** ecx, void** a2, void** a3, void** a4, void** a5);

void fun_407e08(void** ecx, void** a2, void** a3);

void** g40cce0;

void** fun_407efb(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

void fun_40818c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void* a10, int32_t a11, int32_t a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, int32_t a19, void** a20, void* a21, void** a22, void** a23) {
    void** edi24;
    void** esi25;
    void** ebx26;
    void** v27;
    void** v28;
    void** eax29;
    void** v30;
    void** v31;
    void** eax32;
    void** edx33;
    void** v34;
    void** v35;
    void** eax36;
    void** ecx37;
    void** v38;
    void** v39;
    void** eax40;
    void** v41;
    uint32_t edi42;
    void** esi43;
    void** eax44;
    void** v45;
    void** eax46;
    void** ecx47;
    void** eax48;
    void** edx49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** eax55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** ecx62;
    void** v63;
    void** edx64;
    void** eax65;
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

    fun_402414(edi24, esi25, ebx26);
    eax29 = fun_401140(ecx, edi24, esi25, ebx26, v27, v28);
    *reinterpret_cast<void***>(eax29 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax29 + 4)) | 2);
    eax32 = fun_401140(ecx, edi24, esi25, ebx26, v30, v31);
    if (!a2) {
        edx33 = reinterpret_cast<void**>(0);
    } else {
        edx33 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(a2 + 6) + reinterpret_cast<unsigned char>(a2));
    }
    *reinterpret_cast<void***>(eax32 + 16) = edx33;
    eax36 = fun_401140(ecx, edi24, esi25, ebx26, v34, v35);
    ecx37 = a8;
    *reinterpret_cast<void***>(eax36 + 12) = ecx37;
    eax40 = fun_401140(ecx37, edi24, esi25, ebx26, v38, v39);
    *reinterpret_cast<void***>(eax40 + 8) = a9;
    v41 = a2;
    edi42 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a2 + 4));
    esi43 = *reinterpret_cast<void***>(a2);
    if (!(edi42 & 2)) {
        eax44 = reinterpret_cast<void**>(0);
    } else {
        eax44 = *reinterpret_cast<void***>(a2 + 12);
    }
    v45 = eax44;
    if (edi42 & 48) {
        ecx37 = *reinterpret_cast<void***>(v41 + 8);
        v41 = ecx37;
    }
    eax46 = fun_407dbe(ecx37, esi43 + 82, edi24, esi25, ebx26);
    *reinterpret_cast<void***>(eax46) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax46 + 4) = a2;
    *reinterpret_cast<void***>(eax46 + 12) = a7;
    *reinterpret_cast<void***>(eax46 + 16) = esi43;
    *reinterpret_cast<void***>(eax46 + 24) = *reinterpret_cast<void***>(&edi42);
    *reinterpret_cast<unsigned char*>(eax46 + 26) = *reinterpret_cast<unsigned char*>(&v45);
    *reinterpret_cast<void***>(eax46 + 20) = v41;
    *reinterpret_cast<void***>(eax46 + 8) = a4;
    *reinterpret_cast<void***>(eax46 + 40) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax46 + 44) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax46 + 28) = reinterpret_cast<void**>(fun_407e08);
    *reinterpret_cast<void***>(eax46 + 52) = a8;
    *reinterpret_cast<void***>(eax46 + 56) = a9;
    *reinterpret_cast<void***>(eax46 + 32) = a5;
    *reinterpret_cast<void***>(eax46 + 36) = a6;
    *reinterpret_cast<signed char*>(eax46 + 69) = 0;
    *reinterpret_cast<signed char*>(eax46 + 68) = 1;
    ecx47 = eax46 + 82;
    fun_40213c(ecx47, ecx47, a3, esi43, edi24, esi25, ebx26);
    eax48 = g40cce4;
    if (*reinterpret_cast<void***>(eax48) == 1 || (edx49 = g40cce4, reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx49) == 2))) {
        eax55 = fun_402938(ecx47, a2, edi24, esi25, ebx26, v50, v51, v52, v53, eax46, v45, v41, v54);
        v56 = *reinterpret_cast<void***>(a13 + 24);
        v57 = *reinterpret_cast<void***>(a13 + 20);
        v58 = *reinterpret_cast<void***>(a13 + 16);
        v59 = *reinterpret_cast<void***>(a13 + 12);
        v60 = *reinterpret_cast<void***>(a13 + 8);
        v61 = *reinterpret_cast<void***>(a13 + 4);
        ecx62 = a13;
        v63 = *reinterpret_cast<void***>(ecx62);
        if (!*reinterpret_cast<signed char*>(eax46 + 68)) {
            ecx62 = eax46;
            edx64 = *reinterpret_cast<void***>(ecx62 + 64);
        } else {
            edx64 = eax46 + 82;
        }
        eax65 = fun_408009(ecx62, eax55, edx64, v63, v61, v60, v59, v58, v57, v56, edi24, esi25, ebx26);
        ecx47 = eax55;
        fun_408021(ecx47, 1, 11, reinterpret_cast<int32_t>(a10) - 5, eax55, eax65, edx64, v63, v61, v60, v59, v58, v57, v56, edi24, esi25, ebx26);
    }
    if (*reinterpret_cast<unsigned char*>(&v45) & 1) {
        if (!a5) {
            fun_406b6c(ecx47, "cctrAddr", "xx.cpp", 0x445, edi24, esi25, ebx26, v66, v67, v68, v69, eax46, v45, v41, v70, v71, v72, v73, v74);
        }
        ecx47 = g40cce0;
        fun_407efb(ecx47, eax46 + 82, a3, a5, a6, edi24, esi25, ebx26, v75, v76, v77);
        g40cce0 = ecx47;
    }
    fun_401140(ecx47, edi24, esi25, ebx26, v78, v79);
    fun_4099cc();
    g0 = v80;
    return;
}

void** fun_407dbe(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** ebx6;
    void** ebp7;
    void** eax8;
    void** eax9;
    void** eax10;
    void** eax11;

    eax8 = fun_4013e0(ecx, a2, ebx6, ebp7);
    if (eax8) {
        return eax8;
    } else {
        if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(0x80) || (eax9 = fun_401140(a2, ebx6, ebp7, __return_address(), a2, a3), !!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax9 + 4)) & 1))) {
            fun_406ec0(a2);
        }
        eax10 = fun_401140(a2, ebx6, ebp7, __return_address(), a2, a3);
        *reinterpret_cast<void***>(eax10 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax10 + 4)) | 1);
        eax11 = fun_401140(a2, ebx6, ebp7, __return_address(), a2, a3);
        return *reinterpret_cast<void***>(eax11 + 20);
    }
}

void** fun_40803e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

void** fun_4084bb(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** edi6;
    void** esi7;
    void** ebx8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** ebp18;
    void** v19;
    void** eax20;
    void** v21;

    fun_402414(edi6, esi7, ebx8);
    if (!a4) {
        fun_406b6c(ecx, "dtorAddr", "xx.cpp", 0x5b9, edi6, esi7, ebx8, v9, v10, v11, v12, v13, v14, v15, v16, v17, ebp18, __return_address(), a2);
    }
    eax20 = fun_40803e(ecx, a2, a3, 0, a4, a5, 1, edi6, esi7, ebx8, v19);
    g0 = v21;
    return eax20;
}

void** fun_40803e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    uint32_t ebx12;
    void** eax13;
    void** edi14;
    void** esi15;
    void** ebx16;
    void** ebp17;
    void** eax18;
    void** eax19;
    uint32_t esi20;
    uint32_t esi21;
    uint32_t esi22;

    if (!a7) {
        ebx12 = 0;
    } else {
        ebx12 = 2;
    }
    if (*reinterpret_cast<unsigned char*>(&a4) & 2) {
        ebx12 = ebx12 | 0x80;
    }
    eax13 = g40cce4;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax13) == 2)) {
        eax18 = fun_402938(ecx, a3, edi14, esi15, ebx16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7);
        eax19 = fun_408009(a3, eax18, edi14, esi15, ebx16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7);
        ecx = eax18;
        eax13 = fun_408021(ecx, 0, 3, a5, eax18, eax19, edi14, esi15, ebx16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7);
    }
    if (reinterpret_cast<unsigned char>(a6) & 0x80) {
        eax13 = fun_406b6c(ecx, "(dtorMask & 0x0080) == 0", "xx.cpp", 0x2cd, edi14, esi15, ebx16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    esi20 = (reinterpret_cast<unsigned char>(a6) & 7) - 1;
    if (!esi20) {
        eax13 = reinterpret_cast<void**>(a5(ecx, a2, ebx12));
    } else {
        esi21 = esi20 - 1;
        if (!esi21) {
            eax13 = reinterpret_cast<void**>(a5(ecx, a2, ebx12));
        } else {
            esi22 = esi21 - 1;
            if (!esi22) {
                eax13 = reinterpret_cast<void**>(a5(ecx));
            } else {
                if (!(esi22 - 2)) {
                    eax13 = reinterpret_cast<void**>(a5(ecx, a2, ebx12));
                } else {
                    if (!0) 
                        goto addr_4080f2_20;
                }
            }
        }
    }
    addr_408109_21:
    return eax13;
    addr_4080f2_20:
    eax13 = fun_406b6c("what?", "!\"what?\"", "xx.cpp", 0x2f4, edi14, esi15, ebx16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    goto addr_408109_21;
}

void** fun_408530(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** eax12;
    void** esi13;
    void** ecx14;
    void** v15;
    void** eax16;
    void** esi17;
    void** esi18;
    void** ebx19;
    void** ebp20;
    void** v21;
    void** v22;
    void** v23;

    if (*reinterpret_cast<signed char*>(a1 + 68)) {
        if (*reinterpret_cast<unsigned char*>(a1 + 26) & 2) {
            eax12 = *reinterpret_cast<void***>(a1 + 20);
            esi13 = g40cce0;
            ecx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(eax12 + 44))));
            v15 = *reinterpret_cast<void***>(eax12 + 40);
            eax16 = fun_4084bb(ecx14, a1 + 82, eax12, v15, ecx14);
            g40cce0 = esi13;
        }
        *reinterpret_cast<signed char*>(a1 + 68) = 0;
    }
    if (*reinterpret_cast<signed char*>(a1 + 69)) {
        esi17 = *reinterpret_cast<void***>(a1 + 60);
        if (!esi17) {
            eax16 = fun_406b6c(ecx14, "argType", "xx.cpp", 0x5fe, esi18, ebx19, ebp20, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        }
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi17 + 4)) & 2 && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi17 + 12)) & 2) {
            v21 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(esi17 + 44))));
            v22 = *reinterpret_cast<void***>(esi17 + 40);
            v23 = *reinterpret_cast<void***>(a1 + 64);
            eax16 = fun_4084bb(ecx14, v23, esi17, v22, v21);
        }
        *reinterpret_cast<signed char*>(a1 + 69) = 0;
    }
    return eax16;
}

void** fun_402b5c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void*** ebp13;
    void** eax14;
    void** esi15;
    void** ebx16;
    void** ebp17;
    int32_t eax18;
    void** eax19;
    int32_t eax20;
    void** eax21;

    ebp13 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (a2) {
        eax14 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a3 + 16)) + reinterpret_cast<unsigned char>(a3));
        eax18 = fun_402895(ecx, eax14, 0, a4, ebp13 + 8, esi15, ebx16, ebp17, __return_address(), a2);
        if (!eax18) {
            eax19 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<unsigned char*>(a3 + 18)) + reinterpret_cast<unsigned char>(a3));
            eax20 = fun_402895(ecx, eax19, 1, a4, ebp13 + 8, esi15, ebx16, ebp17, __return_address(), a2);
            if (!eax20) {
                if (!0) {
                    fun_406b6c(ecx, "!\"Can't adjust class address (no base class entry found)\"", "xxtype.cpp", 0x57e, esi15, ebx16, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                }
                eax21 = reinterpret_cast<void**>(0);
            } else {
                eax21 = a2;
            }
        } else {
            eax21 = a2;
        }
    } else {
        eax21 = a2;
    }
    return eax21;
}

int32_t g40cce8;

void** fun_409456(void** a1, void** a2, void** a3, void** a4);

void** fun_40897d(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** ebp10;
    void** v11;
    void** ebx12;
    void** v13;
    void** esi14;
    void** v15;
    void** edi16;
    void** v17;
    void** v18;
    void** eax19;
    void** v20;
    void** ebx21;
    void** edi22;
    void** eax23;
    uint32_t edx24;
    uint32_t edx25;
    uint32_t edx26;
    void** v27;
    void** eax28;
    void** esi29;
    void* edx30;
    void** eax31;

    v8 = reinterpret_cast<void**>(__return_address());
    v9 = ebp10;
    v11 = ebx12;
    v13 = esi14;
    v15 = edi16;
    v17 = reinterpret_cast<void**>(0);
    v18 = *reinterpret_cast<void***>(a1 + 8);
    eax19 = v18;
    v20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax19 + 4)));
    ebx21 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a1 + 16))));
    while (ebx21 && ebx21 != a2) {
        edi22 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(ebx21))));
        eax23 = ebx21 + 2;
        edx24 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(eax23));
        *reinterpret_cast<void***>(a1 + 16) = edi22;
        eax19 = eax23 + 2;
        edx25 = edx24 - 1;
        if (edx24 < 1) {
            g40cce8 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(eax19) + 4);
            *reinterpret_cast<unsigned char*>(a1 + 18) = reinterpret_cast<unsigned char>(1);
            fun_402faf(v20);
            edi22 = edi22;
            eax19 = a1;
            *reinterpret_cast<unsigned char*>(eax19 + 18) = reinterpret_cast<unsigned char>(0);
            goto addr_408ad2_5;
        }
        edx26 = edx25 - 3;
        if (edx25 < 3) {
            addr_408ad2_5:
            ebx21 = edi22;
            continue;
        } else {
            if (!edx26) {
                eax28 = fun_401140(a1, v15, v13, v11, v27, v17);
                v27 = eax28;
                while ((esi29 = *reinterpret_cast<void***>(v27), !!esi29) && (*reinterpret_cast<void***>(esi29 + 40) != a1 || ebx21 != *reinterpret_cast<void***>(esi29 + 48))) {
                    v27 = esi29;
                }
                if (!esi29) 
                    goto addr_408a5f_12;
                if (esi29 == *reinterpret_cast<void***>(v27)) 
                    goto addr_408a76_14;
            } else {
                if (!(edx26 - 1)) {
                    edx30 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(eax19));
                    eax31 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(eax19 + 4));
                    eax19 = fun_409456(eax31, reinterpret_cast<int32_t>(edx30) + reinterpret_cast<unsigned char>(v17), a1, v20);
                    v17 = eax19;
                    goto addr_408ad2_5;
                } else {
                    eax19 = reinterpret_cast<void**>("bogus context in Local_unwind()");
                    if (0) 
                        goto addr_408ad2_5; else 
                        goto addr_408abb_19;
                }
            }
        }
        addr_408a5f_12:
        fun_406b6c(v27, "xdrPtr && xdrPtr == *xdrLPP", "xx.cpp", 0x8ba, v15, v13, v11, v27, v17, v20, v18, v9, v8, a1, a2, a3, a4, a5, a6);
        addr_408a76_14:
        *reinterpret_cast<void***>(v27) = *reinterpret_cast<void***>(esi29);
        fun_408530(esi29, v15, v13, v11, v27, v17, v20, v18, v9, v8, a1);
        eax19 = reinterpret_cast<void**>(*reinterpret_cast<void***>(esi29 + 28)(esi29));
        goto addr_408ad2_5;
        addr_408abb_19:
        eax19 = fun_406b6c(a1, "!\"bogus context in Local_unwind()\"", "xx.cpp", 0x8e9, v15, v13, v11, v27, v17, v20, v18, v9, v8, a1, a2, a3, a4, a5, a6);
        goto addr_408ad2_5;
    }
    return eax19;
}

void** g40a580 = reinterpret_cast<void**>(0);

void** fun_402d18(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** eax14;
    void** eax15;
    void** v16;
    void** eax17;
    void** eax18;

    eax14 = fun_401140(ecx, __return_address(), a2, a3, a4, a5);
    *reinterpret_cast<void***>(eax14 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax14 + 4)) & 0xfffffffd);
    eax15 = g40c8b4;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax15) == 2)) {
        v16 = g40a580;
        fun_408021(ecx, 5, 1, v16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }
    eax17 = g40a580;
    eax17();
    eax18 = fun_406ec0(ecx);
    return eax18;
}

void** fun_4086a9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void*** ebp8;
    void** edi9;
    void** esi10;
    void** ebx11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** ebp16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void** edx26;
    void** esi27;
    void** v28;
    void** v29;
    void** ecx30;
    void** eax31;
    void** edi32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    int32_t eax40;
    void** v41;
    void** v42;
    void** eax43;
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
    int32_t eax55;
    void** v56;
    void** v57;
    void** eax58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;

    ebp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (*reinterpret_cast<void***>(a4 + 40) != a3) {
        fun_406b6c(ecx, "dscPtr->xdERRaddr == errPtr", "xx.cpp", 0x722, edi9, esi10, ebx11, v12, v13, v14, v15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7);
    }
    if (*reinterpret_cast<void***>(a4 + 44) != a2) {
        fun_406b6c(ecx, "dscPtr->xdHtabAdr == hdtPtr", "xx.cpp", 0x723, edi9, esi10, ebx11, v17, v18, v19, v20, ebp16, __return_address(), a2, a3, a4, a5, a6, a7);
    }
    if (*reinterpret_cast<signed char*>(a4 + 69)) {
        fun_406b6c(ecx, "dscPtr->xdArgCopy == 0", "xx.cpp", 0x725, edi9, esi10, ebx11, v21, v22, v23, v24, ebp16, __return_address(), a2, a3, a4, a5, a6, a7);
    }
    eax25 = *reinterpret_cast<void***>(a2 + 4);
    *reinterpret_cast<void***>(a4 + 60) = eax25;
    if (eax25 && (edx26 = a2, !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx26 + 8)) & 0x80))) {
        esi27 = eax25;
        *reinterpret_cast<unsigned char*>(&edx26) = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 8)) & 1) == 0);
        v28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx26) & 1);
        v29 = a4 + 82;
        *reinterpret_cast<signed char*>(a4 + 69) = 1;
        ecx30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a5)) + reinterpret_cast<unsigned char>(a6));
        *reinterpret_cast<void***>(a4 + 64) = ecx30;
        eax31 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(esi27 + 4))));
        edi32 = *reinterpret_cast<void***>(esi27);
        v33 = eax31;
        if (*reinterpret_cast<unsigned char*>(&eax31) & 48) {
            esi27 = *reinterpret_cast<void***>(esi27 + 8);
            v33 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(esi27 + 4))));
        }
        if (!(*reinterpret_cast<unsigned char*>(&eax31) & 16) || !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4 + 12)) & 1)) {
            if (!(*reinterpret_cast<unsigned char*>(&v33) & 1) || !(*reinterpret_cast<unsigned char*>(&eax31) & 48)) {
                if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4 + 24)) & 1)) {
                    if (!(*reinterpret_cast<unsigned char*>(&eax31) & 32)) {
                        if (edi32 != *reinterpret_cast<void***>(a4 + 16)) {
                            fun_406b6c(ecx30, "dscPtr->xdSize == size", "xx.cpp", 0x7f8, edi9, esi10, ebx11, v34, v28, v29, v33, ebp16, __return_address(), a2, a3, a4, a5, a6, a7);
                        }
                        v35 = *reinterpret_cast<void***>(a4 + 64);
                        eax25 = fun_40213c(ecx30, v35, v29, edi32, edi9, esi10, ebx11);
                    } else {
                        ecx30 = reinterpret_cast<void**>(ebp8 + 0xfffffff8);
                        v36 = *reinterpret_cast<void***>(a4 + 64);
                        eax25 = fun_40213c(ecx30, v36, ecx30, edi32, edi9, esi10, ebx11);
                        v28 = reinterpret_cast<void**>(1);
                    }
                } else {
                    if (*reinterpret_cast<void***>(a4 + 4) != *reinterpret_cast<void***>(a4 + 20)) {
                        fun_406b6c(ecx30, "dscPtr->xdTypeID == dscPtr->xdBase", "xx.cpp", 0x7b6, edi9, esi10, ebx11, v37, v28, v29, v33, ebp16, __return_address(), a2, a3, a4, a5, a6, a7);
                    }
                    v38 = *reinterpret_cast<void***>(a4 + 20);
                    eax40 = fun_402970(ecx30, v38, esi27, edi9, esi10, ebx11, v39, v28, v29, v33, ebp16);
                    if (!eax40) {
                        v41 = *reinterpret_cast<void***>(a4 + 20);
                        eax43 = fun_402b5c(ecx30, v29, v41, esi27, edi9, esi10, ebx11, v42, v28, v29, v33, ebp16);
                        v29 = eax43;
                        v28 = reinterpret_cast<void**>(1);
                    }
                    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi27 + 12)) & 1)) {
                        v44 = *reinterpret_cast<void***>(a4 + 64);
                        eax25 = fun_40213c(ecx30, v44, v29, edi32, edi9, esi10, ebx11);
                    } else {
                        ecx30 = a2;
                        if (!*reinterpret_cast<void***>(ecx30 + 12)) {
                            fun_406b6c(ecx30, "hdtPtr->HDcctrAddr", "xx.cpp", 0x7d0, edi9, esi10, ebx11, v45, v28, v29, v33, ebp16, __return_address(), a2, a3, a4, a5, a6, a7);
                        }
                        v46 = *reinterpret_cast<void***>(a2 + 16);
                        v47 = *reinterpret_cast<void***>(a2 + 12);
                        v48 = *reinterpret_cast<void***>(a4 + 64);
                        eax25 = fun_407efb(ecx30, v48, v29, v47, v46, edi9, esi10, ebx11, v49, v28, v29);
                        v28 = reinterpret_cast<void**>(1);
                    }
                }
            } else {
                if (!(*reinterpret_cast<unsigned char*>(&eax31) & 32)) {
                    if (!(*reinterpret_cast<unsigned char*>(&eax31) & 16)) {
                        fun_406b6c(ecx30, "mask & TM_IS_PTR", "xx.cpp", 0x795, edi9, esi10, ebx11, v50, v28, v29, v33, ebp16, __return_address(), a2, a3, a4, a5, a6, a7);
                    }
                    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4 + 24)) & 16)) {
                        fun_406b6c(ecx30, "dscPtr->xdMask & TM_IS_PTR", "xx.cpp", 0x796, edi9, esi10, ebx11, v51, v28, v29, v33, ebp16, __return_address(), a2, a3, a4, a5, a6, a7);
                    }
                    ecx30 = v29;
                    v29 = *reinterpret_cast<void***>(ecx30);
                } else {
                    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4 + 24)) & 16) {
                        fun_406b6c(ecx30, "(dscPtr->xdMask & TM_IS_PTR) == 0", "xx.cpp", 0x782, edi9, esi10, ebx11, v52, v28, v29, v33, ebp16, __return_address(), a2, a3, a4, a5, a6, a7);
                    }
                    v28 = reinterpret_cast<void**>(1);
                }
                v53 = *reinterpret_cast<void***>(a4 + 20);
                eax55 = fun_402970(ecx30, v53, esi27, edi9, esi10, ebx11, v54, v28, v29, v33, ebp16);
                if (!eax55 && (v56 = v29, v57 = *reinterpret_cast<void***>(a4 + 20), eax58 = fun_402b5c(ecx30, v29, v57, esi27, edi9, esi10, ebx11, v56, v28, v29, v33, ebp16), v29 = eax58, ecx30 = v29, ecx30 != v56)) {
                    v28 = reinterpret_cast<void**>(1);
                }
                v59 = *reinterpret_cast<void***>(a4 + 64);
                eax25 = fun_40213c(ecx30, v59, ebp8 + 0xfffffff8, edi32, edi9, esi10, ebx11);
            }
        } else {
            v60 = *reinterpret_cast<void***>(a4 + 64);
            eax25 = fun_4021ac(ecx30, v60, 0, edi32);
            v28 = reinterpret_cast<void**>(1);
        }
        if (!v28 && *reinterpret_cast<unsigned char*>(&v33) & 3) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi27 + 12)) & 2) {
                v61 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(esi27 + 44))));
                v62 = *reinterpret_cast<void***>(esi27 + 40);
                eax25 = fun_4084bb(ecx30, v29, esi27, v62, v61);
            }
            *reinterpret_cast<signed char*>(a4 + 68) = 0;
        }
    }
    return eax25;
}

int32_t fun_402faf(void** ecx) {
    int32_t* ebx2;
    int32_t eax3;

    eax3 = reinterpret_cast<int32_t>(*ebx2());
    return eax3;
}

void** fun_408eb9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_4092ab(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void** fun_408fb0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, int32_t a7, void** a8, void** a9);

void** fun_408ffb(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** ebp11;
    void** v12;
    void** ebx13;
    void** v14;
    void** esi15;
    void** v16;
    void** edi17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** ebx24;
    void** eax25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** ebx32;
    void** edx33;
    void** v34;
    void** v35;
    void** ecx36;
    void** eax37;
    void** v38;
    void** v39;
    void** esi40;
    void** v41;
    void** v42;
    void** ecx43;
    void** edi44;
    void** v45;
    void** esi46;
    void** v47;
    void** eax48;
    void** edx49;
    void** eax50;
    void** v51;
    void** v52;
    void** esi53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;

    v9 = reinterpret_cast<void**>(__return_address());
    v10 = ebp11;
    v12 = ebx13;
    v14 = esi15;
    v16 = edi17;
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 2)) {
        fun_406b6c(ecx, "varType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xcb3, v16, v14, v12, v18, v19, v20, v21, v22, v23, v10, v9, a2, a3, a4, a5);
    }
    if (!a6) {
        ebx24 = *reinterpret_cast<void***>(a3 + 36);
    } else {
        ebx24 = *reinterpret_cast<void***>(a3 + 32);
    }
    if (!a5 || reinterpret_cast<unsigned char>(ebx24) <= reinterpret_cast<unsigned char>(a5)) {
        eax25 = fun_408eb9(ecx, a2, a3, a4, a6, a8);
    } else {
        if (reinterpret_cast<unsigned char>(ebx24) <= reinterpret_cast<unsigned char>(a5)) {
            fun_406b6c(ecx, "dtorCnt < varCount", "xx.cpp", 0xced, v16, v14, v12, v26, v27, v28, v29, v30, v31, v10, v9, a2, a3, a4, a5);
        }
        ebx32 = a5;
        edx33 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<unsigned char*>(a3 + 18)) + reinterpret_cast<unsigned char>(a3));
        v34 = edx33;
        v35 = edx33;
        if (!a6) 
            goto addr_4090f3_11; else 
            goto addr_409092_12;
    }
    addr_4092a4_13:
    return eax25;
    addr_4090f3_11:
    ecx36 = a3;
    eax37 = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(ecx36 + 16)) + reinterpret_cast<unsigned char>(a3));
    v38 = eax37;
    v39 = eax37;
    while (esi40 = *reinterpret_cast<void***>(v38), !!esi40) {
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi40 + 4)) & 1)) {
            fun_406b6c(ecx36, "IS_STRUC(blType->tpMask)", "xx.cpp", 0xd3f, v16, v14, v12, v41, v42, v34, v35, v38, v39, v10, v9, a2, a3, a4, a5);
        }
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi40 + 12)) & 2) {
            if (reinterpret_cast<unsigned char>(ebx32) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi40 + 36))) 
                goto addr_40913a_19;
            ebx32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx32) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi40 + 36)));
        }
        v38 = v38 + 12;
    }
    ecx43 = a3;
    edi44 = reinterpret_cast<void**>(*reinterpret_cast<uint16_t*>(ecx43 + 46) + reinterpret_cast<unsigned char>(a3));
    v45 = edi44;
    while (1) {
        esi46 = *reinterpret_cast<void***>(edi44);
        if (!esi46) {
            fun_406b6c(ecx43, "memType", "xx.cpp", 0xd65, v16, v14, v12, v47, v45, v34, v35, v38, v39, v10, v9, a2, a3, a4, a5);
        }
        v47 = reinterpret_cast<void**>(1);
        if (*reinterpret_cast<unsigned char*>(esi46 + 5) & 4) {
            v47 = *reinterpret_cast<void***>(esi46 + 12);
            esi46 = *reinterpret_cast<void***>(esi46 + 8);
        }
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi46 + 12)) & 2)) {
            fun_406b6c(ecx43, "memType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xd73, v16, v14, v12, v47, v45, v34, v35, v38, v39, v10, v9, a2, a3, a4, a5);
        }
        eax48 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v47) * reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi46 + 32)));
        if (reinterpret_cast<unsigned char>(ebx32) <= reinterpret_cast<unsigned char>(eax48)) 
            break;
        ebx32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx32) - reinterpret_cast<unsigned char>(eax48));
        edi44 = edi44 + 8;
    }
    do {
        edx49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi44 + 4)) + reinterpret_cast<unsigned char>(a2));
        eax50 = *reinterpret_cast<void***>(edi44);
        v51 = reinterpret_cast<void**>(1);
        if (*reinterpret_cast<unsigned char*>(eax50 + 5) & 4) {
            ecx43 = *reinterpret_cast<void***>(eax50 + 12);
            v51 = ecx43;
            eax50 = *reinterpret_cast<void***>(eax50 + 8);
        }
        if (reinterpret_cast<unsigned char>(v51) <= reinterpret_cast<unsigned char>(1)) {
            fun_408ffb(ecx43, edx49, eax50, 0, ebx32, 1, a7, a8);
        } else {
            v52 = *reinterpret_cast<void***>(edi44);
            fun_4092ab(ecx43, edx49, v52, ebx32, a7, a8, v16, v14, v12);
        }
        ebx32 = reinterpret_cast<void**>(0);
        edi44 = edi44 - 8;
    } while (reinterpret_cast<unsigned char>(edi44) >= reinterpret_cast<unsigned char>(v45));
    eax25 = fun_408fb0(ecx43, a2, a4, v38, v39, 0, 0, a7, a8);
    if (a6) {
        eax25 = fun_408fb0(ecx43, a2, a4, v34, v35, 0, 1, a7, a8);
        goto addr_4092a4_13;
    }
    addr_40913a_19:
    eax25 = fun_408fb0(ecx36, a2, a4, v38 + 12, v39, ebx32, 0, a7, a8);
    if (a6) {
        eax25 = fun_408fb0(ecx36, a2, a4, v34, v35, 0, 1, a7, a8);
        goto addr_4092a4_13;
    }
    addr_409092_12:
    while (esi53 = *reinterpret_cast<void***>(v34), !!esi53) {
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi53 + 4)) & 1)) {
            fun_406b6c(ecx, "IS_STRUC(blType->tpMask)", "xx.cpp", 0xd18, v16, v14, v12, v54, v55, v34, v35, v56, v57, v10, v9, a2, a3, a4, a5);
        }
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi53 + 12)) & 2) {
            if (reinterpret_cast<unsigned char>(ebx32) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi53 + 36))) 
                goto addr_4090c5_45;
            ebx32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx32) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi53 + 36)));
        }
        v34 = v34 + 12;
    }
    goto addr_4090f3_11;
    addr_4090c5_45:
    eax25 = fun_408fb0(ecx, a2, a4, v34 + 12, v35, ebx32, 1, a7, a8);
    goto addr_4092a4_13;
}

void** fun_408eb9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** edi7;
    void** esi8;
    void** ebx9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** ebp19;
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
    void** ecx30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** eax39;
    void** ecx40;
    void** v41;
    void** v42;
    void** v43;

    fun_402414(edi7, esi8, ebx9);
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 12)) & 2)) {
        fun_406b6c(ecx, "varType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xc1c, edi7, esi8, ebx9, v10, v11, v12, v13, v14, v15, v16, v17, v18, ebp19, __return_address(), a2);
    }
    if (!*reinterpret_cast<void***>(a3 + 40)) {
        fun_406b6c(ecx, "varType->tpClass.tpcDtorAddr", "xx.cpp", 0xc1d, edi7, esi8, ebx9, v20, v21, v22, v23, v24, v25, v26, v27, v28, ebp19, __return_address(), a2);
    }
    *reinterpret_cast<int16_t*>(&v29) = 20;
    ecx30 = *reinterpret_cast<void***>(a6 + 28);
    if (reinterpret_cast<unsigned char>(ecx30) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 32)) && !a4) {
        fun_406b6c(ecx30, "(errPtr->ERRcInitDtc >= varType->tpClass.tpcDtorCount) || flags", "xx.cpp", 0xc28, edi7, esi8, ebx9, v31, v32, v33, v34, v29, v35, v36, v37, v38, ebp19, __return_address(), a2);
    }
    if (!(reinterpret_cast<unsigned char>(a4) & 2)) {
        if (!a5) {
            eax39 = *reinterpret_cast<void***>(a3 + 36);
        } else {
            eax39 = *reinterpret_cast<void***>(a3 + 32);
        }
        *reinterpret_cast<void***>(a6 + 28) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a6 + 28)) - reinterpret_cast<unsigned char>(eax39));
    }
    ecx40 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a3 + 44))));
    v41 = *reinterpret_cast<void***>(a3 + 40);
    fun_40803e(ecx40, a2, a3, a4, v41, ecx40, a5, edi7, esi8, ebx9, v42);
    g0 = v43;
    return v43;
}

void** fun_408fb0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, int32_t a7, void** a8, void** a9) {
    void** esi10;
    void** ebx11;
    void** edi12;
    void** eax13;
    void** edx14;

    esi10 = a6;
    ebx11 = a4;
    edi12 = a2;
    while (ebx11 = ebx11 - 12, reinterpret_cast<unsigned char>(ebx11) >= reinterpret_cast<unsigned char>(a5)) {
        eax13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx11 + 4)) + reinterpret_cast<unsigned char>(edi12));
        if (a7) {
            eax13 = *reinterpret_cast<void***>(eax13);
        }
        edx14 = *reinterpret_cast<void***>(ebx11);
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx14 + 12)) & 2)) 
            continue;
        eax13 = fun_408ffb(ecx, eax13, edx14, a3, esi10, 0, a8, a9);
        esi10 = reinterpret_cast<void**>(0);
    }
    return eax13;
}

void** fun_4092ab(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** edi10;
    void** esi11;
    void** ebx12;
    void** v13;
    void** v14;
    void** ebp15;
    void** v16;
    void** v17;
    void** v18;
    void** ebx19;
    void** edi20;
    void** v21;
    void** v22;
    void** eax23;
    void** v24;
    void** esi25;
    void** ecx26;

    if (!(*reinterpret_cast<unsigned char*>(a3 + 5) & 4)) {
        fun_406b6c(ecx, "varType->tpMask & TM_IS_ARRAY", "xx.cpp", 0xdcc, edi10, esi11, ebx12, v13, v14, ebp15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    }
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a3 + 8) + 12)) & 2)) {
        fun_406b6c(ecx, "varType->tpArr.tpaElemType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xdcd, edi10, esi11, ebx12, v16, v17, ebp15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    }
    v18 = *reinterpret_cast<void***>(a3 + 12);
    ebx19 = *reinterpret_cast<void***>(a3 + 8);
    edi20 = *reinterpret_cast<void***>(ebx19 + 32);
    if (!edi20) {
        fun_406b6c(ecx, "vdtCount", "xx.cpp", 0xdd6, edi10, esi11, ebx12, v21, v18, ebp15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    }
    if (!a4) {
        a4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi20) * reinterpret_cast<unsigned char>(v18));
    }
    v22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) / reinterpret_cast<unsigned char>(edi20));
    if (reinterpret_cast<unsigned char>(v22) > reinterpret_cast<unsigned char>(v18) && v18) {
        fun_406b6c(v22, "etdCount <= elemCount || elemCount == 0", "xx.cpp", 0xddf, edi10, esi11, ebx12, v22, v18, ebp15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    }
    eax23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v22) * reinterpret_cast<unsigned char>(edi20));
    v24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) - reinterpret_cast<unsigned char>(eax23));
    if (reinterpret_cast<unsigned char>(edi20) < reinterpret_cast<unsigned char>(v24)) {
        eax23 = fun_406b6c(v22, "dtrCount <= vdtCount", "xx.cpp", 0xde0, edi10, esi11, ebx12, v22, v18, ebp15, __return_address(), a2, a3, v24, a5, a6, a7, a8, a9);
    }
    esi25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(v22) * reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx19)));
    if (v24) {
        eax23 = fun_408ffb(v22, esi25, ebx19, 0, v24, 1, a5, a6);
    }
    while (ecx26 = v22, --v22, !!ecx26) {
        esi25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi25) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx19)));
        eax23 = fun_408ffb(ecx26, esi25, ebx19, 0, edi20, 1, a5, a6);
    }
    return eax23;
}

void** fun_4093cf(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** ebx12;
    void** edi13;
    void** esi14;
    void** ebx15;
    void** ebp16;
    void** ebx17;
    void** esi18;
    void* ebx19;
    void** eax20;

    ebx12 = *reinterpret_cast<void***>(a3);
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx12 + 4)) & 2)) {
        fun_406b6c(ecx, "IS_CLASS(varType->tpMask)", "xx.cpp", 0xe13, edi13, esi14, ebx15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx12 + 12)) & 80) == 80) {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx12 + 8) == 0xffffffff)) {
            if (a4) {
                ebx17 = a4;
            } else {
                ebx17 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx12 + 8)) + reinterpret_cast<unsigned char>(a2));
            }
            esi18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) - *reinterpret_cast<uint32_t*>(ebx17 + 0xfffffff8));
            ebx19 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx17) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx17 + 0xfffffffc)));
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx19) + 0xfffffffc)) {
                fun_406b6c(ecx, "((unsigned __far *)vftAddr)[-1] == 0", "xx.cpp", 0xe39, edi13, esi14, ebx15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            }
            *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebx19) + 0xfffffff4);
            eax20 = esi18;
        } else {
            eax20 = a2;
        }
    } else {
        eax20 = a2;
    }
    return eax20;
}

void fun_402134() {
    return;
}

void fun_402138(signed char* a1, signed char* a2) {
    return;
}

void fun_402bd8(void** ecx);

void fun_402d50(void** ecx, void** a2, signed char* a3, signed char* a4) {
    void** ebx5;
    void** v6;
    void** ebx7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;

    ebx5 = a2;
    if (!ebx5 && !ebx5) {
        v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff8);
        fun_402d9c(ecx, v6, ebx7);
        ecx = v6;
        ebx5 = v8;
    }
    eax11 = fun_401140(ecx, ebx5, 0x9c, ebx7, v9, v10);
    fun_40213c(ecx, eax11, ebx5, 0x9c, ebx7, v12, v13);
    fun_402bd8(ecx);
    return;
}

int32_t HeapAlloc = 0xf32c;

uint32_t fun_4099b4(int32_t a1, int32_t a2, int32_t a3) {
    goto HeapAlloc;
}

int32_t TlsSetValue = 0xf3e8;

void fun_4099fc() {
    goto TlsSetValue;
}

int32_t TlsAlloc = 0xf3c4;

uint32_t fun_4099ea() {
    goto TlsAlloc;
}

int32_t TlsGetValue = 0xf3da;

void fun_4099f6() {
    goto TlsGetValue;
}

int32_t LoadLibraryA = 0xf344;

int32_t fun_4099c0() {
    goto LoadLibraryA;
}

int32_t TlsFree = 0xf3d0;

void fun_4099f0() {
    goto TlsFree;
}

int32_t VirtualFree = 0xf422;

int32_t fun_409a0e() {
    goto VirtualFree;
}

void** fun_406f40(void** ecx, int32_t a2) {
    void** eax3;

    eax3 = fun_406ed4(1, 0, a2);
    return eax3;
}

int32_t fun_4013dc() {
    return 0;
}

int32_t GetProcAddress = 0xf2a0;

void** fun_409984(signed char* a1, signed char* a2, signed char* a3, signed char* a4, signed char* a5, signed char* a6, signed char* a7) {
    goto GetProcAddress;
}

void** fun_402080(void** ecx, void** a2, void** a3);

/* (image base) */
int32_t image_base_ = 0x4014b0;

void** fun_401e40(int32_t ecx);

int32_t g40a204 = 0;

int32_t g40a200 = 0;

void fun_401418(int32_t a1) {
    int32_t eax2;

    eax2 = fun_4013dc();
    if (!eax2) {
        image_base_ = reinterpret_cast<int32_t>(fun_401ab8);
        image_base_ = reinterpret_cast<int32_t>(fun_401c28);
        image_base_ = reinterpret_cast<int32_t>(fun_402080);
        image_base_ = reinterpret_cast<int32_t>(fun_401e40);
        g40a204 = 1;
    }
    g40a200 = a1;
    return;
}

int32_t GlobalMemoryStatus = 0xf316;

void fun_4099ae(void** a1, int32_t a2) {
    goto GlobalMemoryStatus;
}

int32_t g40a15c = 0;

int32_t g40cc78;

uint32_t fun_40122c(void*** ecx) {
    int1_t zf2;
    int32_t edx3;
    int32_t edx4;
    void** ebx5;
    int32_t eax6;
    int32_t edi7;
    int32_t esi8;
    int32_t ebx9;
    void** eax10;
    void*** edx11;

    zf2 = g40a15c == 0;
    if (zf2) {
        edx3 = g40cc78;
        if (edx3 == 2 || edx3 == 1) {
            g40a15c = 0x100000;
        } else {
            g40a15c = 0x400000;
        }
    }
    edx4 = g40a15c;
    ebx5 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx4 + eax6 - 1) & reinterpret_cast<uint32_t>(~(edx4 - 1)));
    eax10 = fun_409a08(0, ebx5, 0x2000, 1, edi7, esi8, ebx9, __return_address());
    *edx11 = eax10;
    if (eax10) {
        *ecx = ebx5;
    }
    goto 1;
}

void** fun_401ae4(void** a1) {
    void** eax2;
    void** ecx3;
    void** edx4;
    void** edx5;
    void** edx6;
    void** edx7;
    int1_t zf8;
    void** ecx9;
    void* edx10;
    void** ecx11;
    int1_t cf12;
    void** edx13;
    void** edx14;
    void* tmp32_15;
    uint32_t ecx16;
    int1_t below_or_equal17;
    void** ecx18;

    eax2 = a1;
    if (eax2) {
        eax2 = eax2 + 0xfffffffc;
        ecx3 = *reinterpret_cast<void***>(eax2);
        if (!(*reinterpret_cast<unsigned char*>(&ecx3) & 2)) {
            *reinterpret_cast<void***>(eax2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2)) | 1);
        } else {
            edx4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax2) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0xfffffffc)));
            *reinterpret_cast<void***>(edx4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx4)) + ((reinterpret_cast<unsigned char>(ecx3) & 0xfffffffc) + 4));
            eax2 = edx4;
            edx5 = image_base_;
            if (eax2 == edx5) {
                image_base_ = *reinterpret_cast<void***>(edx5 + 4);
            }
            edx6 = *reinterpret_cast<void***>(eax2 + 4);
            *reinterpret_cast<void***>(edx6 + 8) = *reinterpret_cast<void***>(eax2 + 8);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2 + 8) + 4) = edx6;
        }
        edx7 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2)) & 0xfffffffc) + reinterpret_cast<unsigned char>(eax2) + 4);
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx7)) & 1) {
            *reinterpret_cast<void***>(eax2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2)) + ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx7)) & 0xfffffffc) + 4));
            zf8 = edx7 == image_base_;
            if (zf8) {
                image_base_ = *reinterpret_cast<void***>(edx7 + 4);
            }
            ecx9 = *reinterpret_cast<void***>(edx7 + 4);
            *reinterpret_cast<void***>(ecx9 + 8) = *reinterpret_cast<void***>(edx7 + 8);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(edx7 + 8) + 4) = ecx9;
        }
        edx10 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2)) & 0xfffffffc);
        *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(eax2) + reinterpret_cast<uint32_t>(edx10) + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(eax2) + reinterpret_cast<uint32_t>(edx10) + 4) | 2;
        ecx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2)) & 0xfffffffc);
        cf12 = reinterpret_cast<unsigned char>(ecx11) < reinterpret_cast<unsigned char>(g40a228);
        if (!cf12) {
            edx13 = image_base_;
            edx14 = *reinterpret_cast<void***>(edx13 + 4);
        } else {
            tmp32_15 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx11) + reinterpret_cast<unsigned char>(ecx11) + reinterpret_cast<unsigned char>(g40a23c));
            edx14 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(tmp32_15) + 0xfffffff4);
        }
        *reinterpret_cast<void***>(eax2 + 4) = *reinterpret_cast<void***>(edx14 + 4);
        *reinterpret_cast<void***>(eax2 + 8) = edx14;
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2 + 4) + 8) = eax2;
        *reinterpret_cast<void***>(edx14 + 4) = eax2;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax2) + reinterpret_cast<unsigned char>(ecx11)) = ecx11 + 4;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax2) + (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2)) & 0xfffffffc) + 4) == 2) {
            ecx16 = g40a250;
            below_or_equal17 = ecx16 <= g40a254;
            if (below_or_equal17) {
                ecx18 = g40a230;
            } else {
                ecx18 = g40a22c;
            }
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2)) > reinterpret_cast<unsigned char>(ecx18)) {
                eax2 = fun_4019c4(eax2);
            }
        }
    }
    return eax2;
}

int32_t fun_401298() {
    void** v1;
    void*** eax2;
    void** edx3;
    int32_t edi4;
    int32_t esi5;
    int32_t ebx6;
    void** eax7;

    v1 = *eax2;
    eax7 = fun_409a08(v1, edx3, 0x1000, 4, edi4, esi5, ebx6, __return_address());
    *eax2 = eax7;
    goto 4;
}

void** fun_406b24(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** v16;
    void** v17;
    void** ebp18;
    void** v19;
    void** ebx20;
    void** v21;
    void** esi22;
    void** v23;
    void** edi24;
    void** ebx25;
    void** v26;
    void** eax27;
    uint32_t edi28;

    v16 = reinterpret_cast<void**>(__return_address());
    v17 = ebp18;
    v19 = ebx20;
    v21 = esi22;
    v23 = edi24;
    ebx25 = a2;
    *reinterpret_cast<void***>(ebx25) = reinterpret_cast<void**>(0);
    v26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 16);
    while ((v26 = v26 + 4, eax27 = v26, !!a8) && (eax27 = fun_402250(ecx, ebx25, v23, v21, v19, v26, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15), ecx = ebx25, edi28 = reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(eax27) - 1, !(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edi28) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edi28 == 0)))) {
        fun_4022ac(ecx, ebx25, a8, edi28);
    }
    return eax27;
}

signed char* fun_40525c(void** a1, signed char* a2, uint32_t a3, signed char a4, signed char a5);

signed char* fun_4052d0(void** a1, signed char* a2) {
    signed char* eax3;

    eax3 = fun_40525c(a1, a2, 10, 0, 97);
    return eax3;
}

void fun_4085b8(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** edi8;
    void** esi9;
    void** ebx10;
    void** esi11;
    void** edi12;
    void** eax13;
    void** ebx14;
    void** v15;
    void** ebp16;
    void** eax17;
    void** ebx18;
    void** eax19;
    void** v20;
    void** esi21;
    void** eax22;
    void*** esp23;

    eax13 = fun_401140(ecx, edi8, esi9, ebx10, esi11, edi12);
    if (!*reinterpret_cast<void***>(eax13)) {
        fun_406b6c(ecx, "__CPPexceptionList", "xx.cpp", 0x629, edi8, esi9, ebx10, esi11, edi12, ebx14, v15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7);
    }
    eax17 = fun_401140(ecx, edi8, esi9, ebx10, esi11, edi12);
    ebx18 = *reinterpret_cast<void***>(eax17);
    eax19 = fun_401140(ecx, edi8, esi9, ebx10, esi11, edi12);
    *reinterpret_cast<void***>(eax19) = *reinterpret_cast<void***>(ebx18);
    v20 = *reinterpret_cast<void***>(ebx18 + 40);
    esi21 = g0;
    if (!esi21) {
        fun_406b6c(ecx, "xl", "xx.cpp", 0x637, edi8, esi9, ebx10, esi11, edi12, ebx14, v20, ebp16, __return_address(), a2, a3, a4, a5, a6, a7);
    }
    if (esi21 != *reinterpret_cast<void***>(ebx18 + 40)) {
        fun_406b6c(ecx, "xdrPtr->xdERRaddr == xl", "xx.cpp", 0x638, edi8, esi9, ebx10, esi11, edi12, ebx14, v20, ebp16, __return_address(), a2, a3, a4, a5, a6, a7);
    }
    *reinterpret_cast<void***>(v20 + 16) = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v20 + 8)) + reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v20 + 16)));
    fun_408530(ebx18, edi8, esi9, ebx10, esi11, edi12, ebx14, v20, ebp16, __return_address(), a2);
    *reinterpret_cast<void***>(ebx18 + 28)(ebx18);
    eax22 = g40cce4;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax22) == 2)) {
        fun_408021(ebx18, 6, 1, __return_address(), edi8, esi9, ebx10, esi11, edi12, ebx14, v20, ebp16, __return_address(), a2, a3, a4, a5);
    }
    esp23 = reinterpret_cast<void***>(*reinterpret_cast<void***>(v20 + 12) - 4);
    *esp23 = reinterpret_cast<void**>(__return_address());
    goto *esp23;
}

struct s18 {
    signed char[4] pad4;
    void* f4;
};

void fun_402414(void** a1, void** a2, void** a3) {
    void** ebx4;
    void* ebp5;
    struct s18* eax6;
    void** eax7;
    void** eax8;

    ebx4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + reinterpret_cast<uint32_t>(eax6->f4));
    *reinterpret_cast<void***>(ebx4 + 8) = eax7;
    *reinterpret_cast<void***>(ebx4 + 12) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    *reinterpret_cast<void***>(ebx4 + 4) = reinterpret_cast<void**>(0x40245b);
    *reinterpret_cast<void***>(ebx4 + 16) = reinterpret_cast<void**>(0);
    *reinterpret_cast<unsigned char*>(ebx4 + 18) = reinterpret_cast<unsigned char>(0);
    *reinterpret_cast<void***>(ebx4 + 28) = reinterpret_cast<void**>(0);
    eax8 = g0;
    *reinterpret_cast<void***>(ebx4) = eax8;
    g0 = ebx4;
    return;
}

int32_t RaiseException = 0xf36a;

void fun_4099cc() {
    goto RaiseException;
}

int32_t fun_4079d0(void** a1) {
    uint32_t eax2;
    int32_t eax3;
    int32_t edx4;
    uint32_t esi5;
    uint32_t esi6;
    void** esi7;
    int32_t eax8;

    eax2 = fun_407748(a1);
    if (eax2 + 1) {
        eax3 = *reinterpret_cast<int32_t*>(eax2 * 4 + 0x40bb98);
        if (eax3 != 1) {
            if (eax3) {
                *reinterpret_cast<int32_t*>(eax2 * 4 + 0x40bb98) = 0;
                edx4 = 0;
                *reinterpret_cast<signed char*>(&edx4) = *reinterpret_cast<signed char*>(eax2 + 0x40bbe8);
                eax3(a1, a1, edx4, 0);
            } else {
                esi5 = reinterpret_cast<uint32_t>(a1 + 0xfffffff0);
                if (esi5 >= 2 && (esi6 = esi5 - 2 - 2, !!esi6)) {
                    if (!(esi6 - 2)) {
                        fun_406eac(a1, esi7);
                    } else {
                        fun_406f40(a1, 3);
                    }
                }
            }
        }
        eax8 = 0;
    } else {
        eax8 = 1;
    }
    return eax8;
}

void** fun_406eac(void** ecx, void** a2) {
    void** eax3;

    fun_406cdc(ecx, "Abnormal program termination", __return_address(), a2);
    eax3 = fun_406f40("Abnormal program termination", 3);
    return eax3;
}

void fun_402c00();

void** fun_402c50(void** ecx, void** a2, void** a3, void** a4, void** a5);

void fun_402bd8(void** ecx) {
    int1_t zf2;
    int1_t zf3;

    zf2 = g40a57c == 0;
    if (zf2) {
        g40a57c = reinterpret_cast<void**>(fun_402c00);
    }
    zf3 = g40a580 == 0;
    if (zf3) {
        g40a580 = reinterpret_cast<void**>(fun_402c50);
    }
    return;
}

int32_t RtlUnwind = 0xf37c;

void fun_4099d2() {
    goto RtlUnwind;
}

int32_t UnhandledExceptionFilter = 0xf3f6;

int32_t fun_409a02(void** ecx, void* a2) {
    goto UnhandledExceptionFilter;
}

void fun_402f61(void** a1) {
    void** eax2;
    void** ecx3;

    eax2 = a1;
    ecx3 = g0;
    if (eax2 != ecx3) {
        while (ecx3 != 0xffffffff) {
            if (*reinterpret_cast<void***>(ecx3) == eax2) 
                goto addr_402f87_4;
            ecx3 = *reinterpret_cast<void***>(ecx3);
        }
    } else {
        g0 = *reinterpret_cast<void***>(eax2);
    }
    addr_402f78_7:
    return;
    addr_402f87_4:
    *reinterpret_cast<void***>(ecx3) = *reinterpret_cast<void***>(eax2);
    goto addr_402f78_7;
}

void fun_402f4c(void** a1) {
    void** ecx2;

    ecx2 = g0;
    *reinterpret_cast<void***>(a1) = ecx2;
    g0 = a1;
    return;
}

int32_t GetFileType = 0xf23c;

int32_t fun_409960() {
    goto GetFileType;
}

int32_t GetStringTypeW = 0xf2e6;

void fun_40999c(int32_t a1, void* a2, int32_t a3, void* a4) {
    goto GetStringTypeW;
}

struct s19 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[7] pad12;
    void** fc;
    signed char[5] pad18;
    unsigned char f12;
    signed char[1] pad20;
    void** f14;
};

/* (image base) */
int32_t image_base_ = 0x406ed0;

uint32_t fun_40440c();

uint32_t fun_403244(void** ecx, struct s19* a2, void** a3, void** a4, void** a5) {
    void** esi6;
    void** v7;
    void** ecx8;
    uint32_t eax9;
    void** edi10;
    void** esi11;
    void** eax12;

    esi6 = a3;
    if (a2->f12 & 4) {
        v7 = a2->f4;
        fun_4013f0(ecx, v7);
    }
    a2->f12 = reinterpret_cast<unsigned char>(a2->f12 & 0xfff3);
    a2->fc = reinterpret_cast<void**>(0);
    ecx8 = reinterpret_cast<void**>(&a2->f14);
    a2->f4 = ecx8;
    a2->f0 = ecx8;
    if (a4 == 2 || !a5) {
        addr_4032ba_4:
        eax9 = 0;
    } else {
        image_base_ = reinterpret_cast<int32_t>(fun_40440c);
        if (esi6) {
            addr_4032a7_6:
            a2->f0 = esi6;
            a2->f4 = esi6;
            a2->fc = a5;
            if (reinterpret_cast<int1_t>(a4 == 1)) {
                a2->f12 = reinterpret_cast<unsigned char>(a2->f12 | 8);
                goto addr_4032ba_4;
            }
        } else {
            eax12 = fun_4013e0(ecx8, a5, edi10, esi11);
            esi6 = eax12;
            if (!eax12) {
                eax9 = 0xffffffff;
            } else {
                a2->f12 = reinterpret_cast<unsigned char>(a2->f12 | 4);
                goto addr_4032a7_6;
            }
        }
    }
    return eax9;
}

void fun_403a9c(void** a1, void** a2) {
    int32_t ecx3;
    void** esi4;
    unsigned char* eax5;
    uint32_t edx6;

    ecx3 = 7;
    esi4 = a1;
    eax5 = reinterpret_cast<unsigned char*>(a2 + 7);
    do {
        edx6 = reinterpret_cast<unsigned char>(esi4) & 15;
        if (reinterpret_cast<int32_t>(edx6) >= reinterpret_cast<int32_t>(10)) {
            *eax5 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&edx6) + 55);
        } else {
            *eax5 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&edx6) + 48);
        }
        esi4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi4) >> 4);
        --ecx3;
        --eax5;
    } while (ecx3 >= 0);
    return;
}

void** fun_404d5a(uint32_t a1, void** a2);

uint32_t fun_404c97(uint32_t a1, void** a2);

void** fun_405090(void** a1, void** a2, void** a3, uint32_t a4, signed char a5, void* a6) {
    void* ebp7;
    uint32_t edi8;
    void** esi9;
    void*** ebx10;
    void* edx11;
    void** edx12;
    void** al13;
    void** v14;
    uint32_t eax15;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edi8 = a4;
    esi9 = a3;
    if (reinterpret_cast<int32_t>(edi8) >= reinterpret_cast<int32_t>(2) && reinterpret_cast<int32_t>(edi8) <= reinterpret_cast<int32_t>(36)) {
        if (a2) {
            if (reinterpret_cast<signed char>(a2) >= reinterpret_cast<signed char>(0)) {
                addr_4050de_4:
                ebx10 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp7) - 68);
            } else {
                addr_4050c1_5:
                if (a5) {
                    *reinterpret_cast<void***>(esi9) = reinterpret_cast<void**>(45);
                    ++esi9;
                    edx11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a2) + reinterpret_cast<uint1_t>(!!a1));
                    edx12 = reinterpret_cast<void**>(-reinterpret_cast<uint32_t>(edx11));
                    a2 = edx12;
                    goto addr_4050de_4;
                }
            }
            addr_4050e1_7:
            __asm__("cdq ");
            al13 = fun_404d5a(edi8, edx12);
            v14 = al13;
            __asm__("cdq ");
            edx12 = a2;
            ++ebx10;
            eax15 = fun_404c97(edi8, a2);
            a2 = edx12;
            if (edx12) 
                goto addr_4050e1_7;
            if (eax15) 
                goto addr_4050e1_7;
            while (!reinterpret_cast<int1_t>(ebx10 == reinterpret_cast<int32_t>(ebp7) - 68)) {
                --ebx10;
                *reinterpret_cast<void***>(&eax15) = v14;
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&eax15)) >= reinterpret_cast<signed char>(10)) {
                    *reinterpret_cast<void***>(esi9) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&eax15)) + reinterpret_cast<unsigned char>(a6)) + 0xf6);
                    ++esi9;
                } else {
                    eax15 = eax15 + 48;
                    *reinterpret_cast<void***>(esi9) = *reinterpret_cast<void***>(&eax15);
                    ++esi9;
                }
            }
        } else {
            if (reinterpret_cast<unsigned char>(a1) >= reinterpret_cast<unsigned char>(0)) 
                goto addr_4050de_4;
            goto addr_4050c1_5;
        }
    }
    *reinterpret_cast<void***>(esi9) = reinterpret_cast<void**>(0);
    return a3;
}

/* (image base) */
int32_t image_base_ = 0x404fe0;

void fun_404fc8(void* a1, void** a2, void** a3, void* a4, uint32_t a5, int32_t a6) {
    goto image_base_;
}

/* (image base) */
int32_t image_base_ = 0x404fe0;

void* fun_404fce(void* a1, void** a2) {
    goto image_base_;
}

struct s21 {
    void*** f0;
    void*** f4;
    void*** f8;
    void*** fc;
    void*** f10;
};

struct s20 {
    void** f0;
    signed char[7] pad8;
    int32_t f8;
    signed char[4] pad16;
    void* f10;
    signed char[4] pad24;
    struct s21* f18;
};

/* (image base) */
struct s20* image_base_ = reinterpret_cast<struct s20*>(0x40b570);

int32_t fun_40487c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void*** ebp7;
    struct s20* edx8;
    struct s20* edx9;
    void** v10;
    void** v11;
    void** ebp12;
    void** eax13;

    ebp7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (a2) {
        edx8 = image_base_;
        if (!edx8->f8) {
            edx9 = image_base_;
            v10 = reinterpret_cast<void**>(ebp7 + 12);
            v11 = edx9->f0;
            eax13 = fun_409a14(v11, 0x220, v10, 1, a2, 2, 0, ebp7 + 0xfffffffc, 0, ebp12, __return_address(), a2, a3, a4, a5, a6);
            if (!eax13 || !1) {
                goto v10;
            } else {
                goto v10;
            }
        } else {
            if (*reinterpret_cast<uint16_t*>(&a3) <= 0xff) {
                *reinterpret_cast<void***>(a2) = a3;
                return 1;
            } else {
                return -1;
            }
        }
    } else {
        return 0;
    }
}

int32_t GetLocalTime = 0xf25a;

void fun_40996c() {
    goto GetLocalTime;
}

uint32_t fun_404c97(uint32_t a1, void** a2) {
    uint32_t ebx3;
    int32_t edx4;
    void** ebp5;
    int32_t ecx6;
    void** edi7;
    uint32_t esi8;
    uint32_t eax9;
    uint1_t cf10;
    int32_t eax11;

    ebx3 = a1;
    if (a2 || edx4 && ebx3) {
        ebp5 = a2;
        ecx6 = 64;
        edi7 = reinterpret_cast<void**>(0);
        esi8 = 0;
        do {
            eax9 = eax9 << 1;
            __asm__("rcl edx, 1");
            __asm__("rcl esi, 1");
            __asm__("rcl edi, 1");
            if (reinterpret_cast<unsigned char>(edi7) >= reinterpret_cast<unsigned char>(ebp5) && (reinterpret_cast<unsigned char>(edi7) > reinterpret_cast<unsigned char>(ebp5) || esi8 >= ebx3)) {
                cf10 = reinterpret_cast<uint1_t>(esi8 < ebx3);
                esi8 = esi8 - ebx3;
                edi7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi7) - (reinterpret_cast<unsigned char>(ebp5) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(edi7) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ebp5) + cf10))));
                ++eax9;
            }
            --ecx6;
        } while (ecx6);
    } else {
        eax9 = eax11 / ebx3;
    }
    return eax9;
}

void** fun_404d5a(uint32_t a1, void** a2) {
    uint32_t ebx3;
    int32_t edx4;
    void** ebp5;
    int32_t ecx6;
    void** edi7;
    uint32_t esi8;
    uint1_t cf9;
    uint32_t eax10;
    int32_t eax11;

    ebx3 = a1;
    if (a2 || edx4 && ebx3) {
        ebp5 = a2;
        ecx6 = 64;
        edi7 = reinterpret_cast<void**>(0);
        esi8 = 0;
        do {
            __asm__("rcl edx, 1");
            __asm__("rcl esi, 1");
            __asm__("rcl edi, 1");
            if (reinterpret_cast<unsigned char>(edi7) >= reinterpret_cast<unsigned char>(ebp5) && (reinterpret_cast<unsigned char>(edi7) > reinterpret_cast<unsigned char>(ebp5) || esi8 >= ebx3)) {
                cf9 = reinterpret_cast<uint1_t>(esi8 < ebx3);
                esi8 = esi8 - ebx3;
                edi7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi7) - (reinterpret_cast<unsigned char>(ebp5) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(edi7) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ebp5) + cf9))));
            }
            --ecx6;
        } while (ecx6);
        eax10 = esi8;
    } else {
        eax10 = eax11 % ebx3;
    }
    return *reinterpret_cast<void***>(&eax10);
}

struct s22 {
    int32_t f0;
    int32_t f4;
    uint16_t f8;
};

uint16_t fun_40507c(void** a1);

uint32_t fun_405360(void** ecx, void** a2);

void** fun_4063ac(struct s22* a1, void** a2, void** a3, void** a4, int32_t a5) {
    void* ebp6;
    int32_t eax7;
    int32_t eax8;
    int32_t v9;
    int32_t v10;
    uint16_t v11;
    void* eax12;
    int32_t ebx13;
    void** v14;
    uint16_t ax15;
    uint16_t ax16;
    void** ecx17;
    int32_t edx18;
    uint32_t edx19;
    uint32_t edx20;
    uint32_t eax21;
    void** v22;
    void** edi23;
    void** esi24;
    void** ebx25;
    int16_t ax26;
    int16_t fpu_status_word27;
    void** ecx28;
    int16_t ax29;
    int16_t fpu_status_word30;
    void** edx31;
    uint32_t esi32;
    void** v33;
    void** ebx34;
    void** eax35;
    void** v36;
    uint32_t eax37;
    uint32_t eax38;
    void** ebx39;
    void** ebx40;
    void** ebx41;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = a5 - 2;
    if (!eax7) {
        __asm__("fld dword [edx]");
        __asm__("fstp tword [ebp-0xc]");
        __asm__("wait ");
    } else {
        eax8 = eax7 - 4;
        if (!eax8) {
            __asm__("fld qword [ecx]");
            __asm__("fstp tword [ebp-0xc]");
            __asm__("wait ");
        } else {
            if (!(eax8 - 2)) {
                v9 = a1->f0;
                v10 = a1->f4;
                v11 = a1->f8;
            }
        }
    }
    eax12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffff4);
    *reinterpret_cast<uint16_t*>(&ebx13) = v11;
    *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<uint1_t>(!!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx13) + 1) & 0x80));
    *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax12) & 1);
    v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffff4);
    ax15 = fun_40507c(v14);
    ax16 = reinterpret_cast<uint16_t>(ax15 & 0x4700);
    ecx17 = v14;
    if (ax16 == 0x4000) 
        goto addr_406435_9;
    if (ax16 != 0x500) {
        if (ax16 != 0x100) {
            edx18 = 0;
            *reinterpret_cast<signed char*>(&edx18) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v10) + 3);
            edx19 = reinterpret_cast<uint32_t>(edx18 + edx18) & 0xff;
            edx20 = edx19 + (edx19 + (edx19 + edx19 * 8) * 2) * 4;
            eax21 = ((static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ebx13)) & 0x7fff) + 0xffffc001) * 0x4d10 + (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&edx20))) & 0xffff);
            ecx17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax21) >> 16);
            v22 = ecx17;
            if (eax21 & 0xffff) {
                ++v22;
            }
            edi23 = a2;
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi23) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi23 == 0))) 
                goto addr_4064eb_15;
            edi23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v22) - reinterpret_cast<unsigned char>(a2));
            if (reinterpret_cast<signed char>(edi23) < reinterpret_cast<signed char>(0)) 
                goto addr_406435_9;
            addr_4064eb_15:
            if (reinterpret_cast<signed char>(edi23) > reinterpret_cast<signed char>(19)) {
                edi23 = reinterpret_cast<void**>(19);
            }
            esi24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi23) - reinterpret_cast<unsigned char>(v22));
            if (esi24) {
                do {
                    ebx25 = esi24;
                    if (reinterpret_cast<signed char>(esi24) < reinterpret_cast<signed char>(0)) {
                        ebx25 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(esi24));
                    }
                    if (reinterpret_cast<signed char>(ebx25) > reinterpret_cast<signed char>(0x1344)) {
                        ebx25 = reinterpret_cast<void**>(0x1344);
                    }
                    fun_404dfc(ecx17, ebx25);
                    ecx17 = ebx25;
                    __asm__("fstp tword [ebp-0x20]");
                    __asm__("wait ");
                    if (reinterpret_cast<signed char>(esi24) >= reinterpret_cast<signed char>(0)) {
                        __asm__("fld tword [ebp-0x20]");
                        __asm__("fld tword [ebp-0xc]");
                        __asm__("fmulp st1, st0");
                        __asm__("fstp tword [ebp-0xc]");
                        __asm__("wait ");
                        esi24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi24) - reinterpret_cast<unsigned char>(ebx25));
                    } else {
                        __asm__("fld tword [ebp-0x20]");
                        __asm__("fld tword [ebp-0xc]");
                        __asm__("fdivrp st1, st0");
                        __asm__("fstp tword [ebp-0xc]");
                        __asm__("wait ");
                        esi24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi24) + reinterpret_cast<unsigned char>(ebx25));
                    }
                } while (esi24);
            }
            fun_404dfc(ecx17, edi23);
            ecx17 = edi23;
            __asm__("fstp tword [ebp-0x20]");
            __asm__("wait ");
            __asm__("fld tword [ebp-0xc]");
            __asm__("fld tword [ebp-0x20]");
            __asm__("fcompp ");
            ax26 = fpu_status_word27;
            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax26) + 1)) {
                ecx28 = edi23 + 0xffffffff;
                fun_404dfc(ecx28, ecx28);
                ecx17 = ecx28;
                __asm__("fstp tword [ebp-0x20]");
                __asm__("wait ");
                __asm__("fld tword [ebp-0xc]");
                __asm__("fld tword [ebp-0x20]");
                __asm__("fcompp ");
                ax29 = fpu_status_word30;
                if (!(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax29) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax29) + 1)) && (--v22, --edi23, reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(0))) {
                    __asm__("fild dword [ebp-0x28]");
                    __asm__("fld tword [ebp-0xc]");
                    __asm__("fmulp st1, st0");
                    __asm__("fstp tword [ebp-0xc]");
                    __asm__("wait ");
                    ++edi23;
                }
            } else {
                ++v22;
                ++edi23;
                if (reinterpret_cast<signed char>(edi23) <= reinterpret_cast<signed char>(19) && reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(0)) {
                    __asm__("fild dword [ebp-0x28]");
                    __asm__("fld tword [ebp-0xc]");
                    __asm__("fdivrp st1, st0");
                    __asm__("fstp tword [ebp-0xc]");
                    __asm__("wait ");
                    --edi23;
                }
            }
            if (reinterpret_cast<signed char>(edi23) < reinterpret_cast<signed char>(0)) 
                goto addr_406435_9;
            ecx17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffff4);
            fun_405058(reinterpret_cast<int32_t>(ebp6) - 12, ecx17);
            edx31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(edi23));
            esi32 = 0;
            v33 = edx31;
            *reinterpret_cast<void***>(edx31) = reinterpret_cast<void**>(0);
            ebx34 = edx31 - 1;
            if (!edi23) 
                goto addr_4065e8_34;
        } else {
            eax35 = reinterpret_cast<void**>(0x7ffe);
            goto addr_406677_36;
        }
    } else {
        eax35 = reinterpret_cast<void**>(0x7fff);
        goto addr_406677_36;
    }
    while (v36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffff4), eax37 = fun_405360(ecx17, v36), ecx17 = v36, esi32 = esi32 | reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax37))), eax38 = eax37 + 48, *reinterpret_cast<void***>(ebx34) = *reinterpret_cast<void***>(&eax38), --ebx34, --edi23, !!edi23) {
    }
    addr_40661b_40:
    if (!esi32) {
        ++v22;
        if (reinterpret_cast<signed char>(a2) <= reinterpret_cast<signed char>(0)) {
            *reinterpret_cast<void***>(v33) = reinterpret_cast<void**>(48);
        }
        ++v33;
        *reinterpret_cast<void***>(ebx34 + 1) = reinterpret_cast<void**>(49);
    }
    ebx39 = a2;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx39) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx39 == 0))) {
        ebx39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v22) - reinterpret_cast<unsigned char>(a2));
    }
    if (reinterpret_cast<signed char>(ebx39) > reinterpret_cast<signed char>(40)) {
        ebx39 = reinterpret_cast<void**>(40);
    }
    *reinterpret_cast<void***>(v33) = reinterpret_cast<void**>(0);
    ebx40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx39) - (reinterpret_cast<unsigned char>(v33) - reinterpret_cast<unsigned char>(a4)));
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx40) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx40 == 0))) {
        fun_4021ac(v33, v33, 48, ebx40);
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v33) + reinterpret_cast<unsigned char>(ebx40)) = 0;
    }
    eax35 = v22;
    addr_406677_36:
    return eax35;
    addr_4065e8_34:
    esi32 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v9)) & 0xff ^ 1;
    if (esi32) {
        addr_406435_9:
        ebx41 = a2;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx41) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx41 == 0))) {
            ebx41 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(ebx41) + 1);
        }
    } else {
        goto addr_40661b_40;
    }
    if (reinterpret_cast<signed char>(ebx41) > reinterpret_cast<signed char>(40)) {
        ebx41 = reinterpret_cast<void**>(40);
    }
    fun_4021ac(ecx17, a4, 48, ebx41);
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(ebx41)) = 0;
    eax35 = reinterpret_cast<void**>(1);
    goto addr_406677_36;
}

void*** fun_404434(void* a1) {
    struct s20* eax2;
    uint32_t edx3;
    uint32_t edx4;

    eax2 = image_base_;
    if (reinterpret_cast<int32_t>(a1) > reinterpret_cast<int32_t>(16)) {
        edx3 = reinterpret_cast<uint32_t>(a1) - 80;
        if (!edx3) {
            return eax2->f18->fc;
        } else {
            if (!(edx3 - 1)) {
                return eax2->f18->f10;
            }
        }
    } else {
        if (a1 == 16) {
            return eax2->f18->f8;
        } else {
            edx4 = reinterpret_cast<uint32_t>(a1) - 14;
            if (!edx4) {
                return eax2->f18->f4;
            } else {
                if (!(edx4 - 1)) {
                    return eax2->f18->f0;
                }
            }
        }
    }
    return 0;
}

struct s23 {
    int32_t f0;
    int32_t f4;
    uint16_t f8;
};

struct s24 {
    void** f0;
    signed char[1] pad2;
    int16_t f2;
};

void** fun_406680(struct s23* a1, void** a2, void** a3, void** a4, int32_t a5) {
    void* ebp6;
    int32_t eax7;
    int32_t eax8;
    int32_t v9;
    int32_t v10;
    uint16_t v11;
    void* eax12;
    int32_t ebx13;
    void** v14;
    uint16_t ax15;
    uint16_t ax16;
    void** ecx17;
    int32_t edx18;
    uint32_t edx19;
    uint32_t edx20;
    uint32_t eax21;
    void** v22;
    void** edi23;
    void** esi24;
    void** ebx25;
    int16_t ax26;
    int16_t fpu_status_word27;
    void** ecx28;
    int16_t ax29;
    int16_t fpu_status_word30;
    uint32_t esi31;
    void** edx32;
    void** v33;
    struct s24* ebx34;
    void** eax35;
    uint32_t eax36;
    void** ebx37;
    uint32_t edx38;
    void** ebx39;
    void** ebx40;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax7 = a5 - 2;
    if (!eax7) {
        __asm__("fld dword [edx]");
        __asm__("fstp tword [ebp-0xc]");
        __asm__("wait ");
    } else {
        eax8 = eax7 - 4;
        if (!eax8) {
            __asm__("fld qword [ecx]");
            __asm__("fstp tword [ebp-0xc]");
            __asm__("wait ");
        } else {
            if (!(eax8 - 2)) {
                v9 = a1->f0;
                v10 = a1->f4;
                v11 = a1->f8;
            }
        }
    }
    eax12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp6) + 0xfffffff4);
    *reinterpret_cast<uint16_t*>(&ebx13) = v11;
    *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<uint1_t>(!!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx13) + 1) & 0x80));
    *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax12) & 1);
    v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffff4);
    ax15 = fun_40507c(v14);
    ax16 = reinterpret_cast<uint16_t>(ax15 & 0x4700);
    ecx17 = v14;
    if (ax16 == 0x4000) 
        goto addr_406709_9;
    if (ax16 != 0x500) {
        if (ax16 != 0x100) {
            edx18 = 0;
            *reinterpret_cast<signed char*>(&edx18) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v10) + 3);
            edx19 = reinterpret_cast<uint32_t>(edx18 + edx18) & 0xff;
            edx20 = edx19 + (edx19 + (edx19 + edx19 * 8) * 2) * 4;
            eax21 = ((static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ebx13)) & 0x7fff) + 0xffffc001) * 0x4d10 + (reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&edx20))) & 0xffff);
            ecx17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax21) >> 16);
            v22 = ecx17;
            if (eax21 & 0xffff) {
                ++v22;
            }
            edi23 = a2;
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi23) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi23 == 0))) 
                goto addr_4067c1_15;
            edi23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v22) - reinterpret_cast<unsigned char>(a2));
            if (reinterpret_cast<signed char>(edi23) < reinterpret_cast<signed char>(0)) 
                goto addr_406709_9;
            addr_4067c1_15:
            if (reinterpret_cast<signed char>(edi23) > reinterpret_cast<signed char>(19)) {
                edi23 = reinterpret_cast<void**>(19);
            }
            esi24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi23) - reinterpret_cast<unsigned char>(v22));
            if (esi24) {
                do {
                    ebx25 = esi24;
                    if (reinterpret_cast<signed char>(esi24) < reinterpret_cast<signed char>(0)) {
                        ebx25 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(esi24));
                    }
                    if (reinterpret_cast<signed char>(ebx25) > reinterpret_cast<signed char>(0x1344)) {
                        ebx25 = reinterpret_cast<void**>(0x1344);
                    }
                    fun_404dfc(ecx17, ebx25);
                    ecx17 = ebx25;
                    __asm__("fstp tword [ebp-0x20]");
                    __asm__("wait ");
                    if (reinterpret_cast<signed char>(esi24) >= reinterpret_cast<signed char>(0)) {
                        __asm__("fld tword [ebp-0x20]");
                        __asm__("fld tword [ebp-0xc]");
                        __asm__("fmulp st1, st0");
                        __asm__("fstp tword [ebp-0xc]");
                        __asm__("wait ");
                        esi24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi24) - reinterpret_cast<unsigned char>(ebx25));
                    } else {
                        __asm__("fld tword [ebp-0x20]");
                        __asm__("fld tword [ebp-0xc]");
                        __asm__("fdivrp st1, st0");
                        __asm__("fstp tword [ebp-0xc]");
                        __asm__("wait ");
                        esi24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi24) + reinterpret_cast<unsigned char>(ebx25));
                    }
                } while (esi24);
            }
            fun_404dfc(ecx17, edi23);
            ecx17 = edi23;
            __asm__("fstp tword [ebp-0x20]");
            __asm__("wait ");
            __asm__("fld tword [ebp-0xc]");
            __asm__("fld tword [ebp-0x20]");
            __asm__("fcompp ");
            ax26 = fpu_status_word27;
            if (!*reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&ax26) + 1)) {
                ecx28 = edi23 + 0xffffffff;
                fun_404dfc(ecx28, ecx28);
                ecx17 = ecx28;
                __asm__("fstp tword [ebp-0x20]");
                __asm__("wait ");
                __asm__("fld tword [ebp-0xc]");
                __asm__("fld tword [ebp-0x20]");
                __asm__("fcompp ");
                ax29 = fpu_status_word30;
                if (!(*reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax29) + 1) | *reinterpret_cast<uint1_t*>(reinterpret_cast<int32_t>(&ax29) + 1)) && (--v22, --edi23, reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(0))) {
                    __asm__("fild dword [ebp-0x28]");
                    __asm__("fld tword [ebp-0xc]");
                    __asm__("fmulp st1, st0");
                    __asm__("fstp tword [ebp-0xc]");
                    __asm__("wait ");
                    ++edi23;
                }
            } else {
                ++v22;
                ++edi23;
                if (reinterpret_cast<signed char>(edi23) <= reinterpret_cast<signed char>(19) && reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(0)) {
                    __asm__("fild dword [ebp-0x28]");
                    __asm__("fld tword [ebp-0xc]");
                    __asm__("fdivrp st1, st0");
                    __asm__("fstp tword [ebp-0xc]");
                    __asm__("wait ");
                    --edi23;
                }
            }
            if (reinterpret_cast<signed char>(edi23) < reinterpret_cast<signed char>(0)) 
                goto addr_406709_9;
            ecx17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp6) + 0xfffffff4);
            fun_405058(reinterpret_cast<int32_t>(ebp6) - 12, ecx17);
            esi31 = 0;
            edx32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi23) + reinterpret_cast<unsigned char>(edi23) + reinterpret_cast<unsigned char>(a4));
            v33 = edx32;
            *reinterpret_cast<void***>(edx32) = reinterpret_cast<void**>(0);
            ebx34 = reinterpret_cast<struct s24*>(edx32 - 2);
            if (!edi23) 
                goto addr_4068c4_34;
        } else {
            eax35 = reinterpret_cast<void**>(0x7ffe);
            goto addr_40696a_36;
        }
    } else {
        eax35 = reinterpret_cast<void**>(0x7fff);
        goto addr_40696a_36;
    }
    while (eax36 = fun_405360(ecx17, reinterpret_cast<int32_t>(ebp6) + 0xfffffff4), esi31 = esi31 | reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax36))), ecx17 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax36))), ecx17 = ecx17 + 48, ebx34->f0 = ecx17, ebx34 = reinterpret_cast<struct s24*>(reinterpret_cast<uint32_t>(ebx34) - 2), --edi23, !!edi23) {
    }
    addr_4068fe_40:
    if (!esi31) {
        ++v22;
        if (reinterpret_cast<signed char>(a2) <= reinterpret_cast<signed char>(0)) {
            *reinterpret_cast<void***>(v33) = reinterpret_cast<void**>(48);
        }
        v33 = v33 + 2;
        ebx34->f2 = 49;
    }
    ebx37 = a2;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx37) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx37 == 0))) {
        ebx37 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v22) - reinterpret_cast<unsigned char>(a2));
    }
    if (reinterpret_cast<signed char>(ebx37) > reinterpret_cast<signed char>(40)) {
        ebx37 = reinterpret_cast<void**>(40);
    }
    *reinterpret_cast<void***>(v33) = reinterpret_cast<void**>(0);
    edx38 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v33) - reinterpret_cast<unsigned char>(a4)) >> 1);
    if (__undefined()) {
        edx38 = edx38 + __intrinsic();
    }
    ebx39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx37) - edx38);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx39) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx39 == 0))) {
        fun_402238(v33, v33, 48, ebx39);
        *reinterpret_cast<void***>(v33 + reinterpret_cast<unsigned char>(ebx39) * 2) = reinterpret_cast<void**>(0);
    }
    eax35 = v22;
    addr_40696a_36:
    return eax35;
    addr_4068c4_34:
    esi31 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v9)) & 0xff ^ 1;
    if (esi31) {
        addr_406709_9:
        ebx40 = a2;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx40) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx40 == 0))) {
            ebx40 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(ebx40) + 1);
        }
    } else {
        goto addr_4068fe_40;
    }
    if (reinterpret_cast<signed char>(ebx40) > reinterpret_cast<signed char>(40)) {
        ebx40 = reinterpret_cast<void**>(40);
    }
    fun_402238(ecx17, a4, 48, ebx40);
    eax35 = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(a4 + reinterpret_cast<unsigned char>(ebx40) * 2) = reinterpret_cast<void**>(0);
    goto addr_40696a_36;
}

void fun_405028(void** a1) {
    if (*reinterpret_cast<unsigned char*>(a1 + 7) & 0x80) {
        __asm__("fld tword [ebp-0xa]");
        return;
    } else {
        __asm__("fild qword [eax]");
        return;
    }
}

int32_t fun_4046d4(void* ecx, uint32_t a2, int32_t a3);

int32_t fun_404650(void* ecx, uint16_t a2) {
    int32_t eax3;

    eax3 = fun_4046d4(ecx, static_cast<uint32_t>(a2), 8);
    return eax3;
}

uint16_t fun_40507c(void** a1) {
    uint16_t fpu_status_word2;

    __asm__("fld tword [eax]");
    __asm__("fxam ");
    __asm__("wait ");
    __asm__("fstp st0");
    __asm__("wait ");
    return fpu_status_word2;
}

uint32_t fun_405360(void** ecx, void** a2) {
    uint32_t edx3;

    if (*reinterpret_cast<void***>(a2 + 4)) {
        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) / 10);
    }
    edx3 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) % 10;
    *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) / 10);
    return edx3;
}

int32_t GetCommandLineA = 0xf1fc;

signed char* fun_40994e() {
    goto GetCommandLineA;
}

uint32_t fun_404690(void* a1, uint32_t a2);

uint32_t fun_40454c(void* a1) {
    uint32_t eax2;

    eax2 = fun_404690(a1, 8);
    return eax2;
}

int32_t wsprintfA = 0xf474;

void fun_409a2c(int32_t a1, int32_t a2, void* a3, uint32_t a4, void* a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9) {
    goto wsprintfA;
}

int32_t EnumThreadWindows = 0xf452;

void fun_409a20() {
    goto EnumThreadWindows;
}

int32_t CreateFileA = 0xf1ca;

void** fun_409936() {
    goto CreateFileA;
}

int32_t GetCurrentThreadId = 0xf20e;

int32_t fun_409954() {
    goto GetCurrentThreadId;
}

uint32_t fun_4099a2();

int32_t fun_406c84();

uint32_t fun_406c98(void** ecx, int32_t a2, void** a3, int32_t a4) {
    uint32_t eax5;
    uint32_t eax6;
    uint32_t edx7;
    int32_t eax8;

    eax5 = fun_4099a2();
    eax6 = eax5 >> 16;
    edx7 = *reinterpret_cast<uint16_t*>(&eax6);
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx7) + 1) & 0x80) {
        eax8 = fun_409954();
        fun_409a20();
        if (!eax8) {
        }
        goto fun_406c84;
    } else {
        return 0x2000;
    }
}

int32_t MessageBoxA = 0xf466;

void** fun_409a26(int32_t a1, void** a2, unsigned char* a3, uint32_t a4, int32_t a5, void** a6, int32_t a7) {
    goto MessageBoxA;
}

int32_t GetVersionExA = 0xf306;

void fun_4099a8(void** a1, int32_t a2, int32_t a3, signed char* a4) {
    goto GetVersionExA;
}

int32_t g40bbf8 = 0;

void fun_407b2c() {
    int1_t zf1;
    struct s15* eax2;
    struct s15* edi3;
    void** esi4;
    struct s16** ebx5;
    struct s16* eax6;
    int32_t v7;

    zf1 = g40bbf8 == 0;
    if (zf1 && (g40bbf8 = 1, fun_407a58(0x40ccd4, 1), fun_407a58(0x40ccb8, 1), eax2 = fun_407a54(), edi3 = eax2, !!eax2)) {
        fun_407a58(edi3, 1);
        esi4 = reinterpret_cast<void**>(0);
        ebx5 = &edi3->f4;
        while (reinterpret_cast<signed char>(esi4) < reinterpret_cast<signed char>(edi3->f0)) {
            eax6 = *ebx5;
            v7 = eax6->f14;
            eax6->f18(1, v7);
            ++esi4;
            ++ebx5;
        }
    }
    return;
}

void fun_40993c();

void** fun_407a40(int32_t a1) {
    int32_t ebp2;

    fun_40993c();
    goto ebp2;
}

int32_t g40bacc = 0;

void fun_4072c4(void*** a1, void*** a2) {
    int1_t zf3;
    int32_t ebx4;

    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*a2) == 92) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*a2 + 1) == 34)) {
        zf3 = g40bacc == 0;
        if (zf3 || (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*a2) == 92) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*a2 + 1) == 92))) {
            ebx4 = 0;
            *reinterpret_cast<void***>(&ebx4) = *reinterpret_cast<void***>(*a2);
            if (*reinterpret_cast<unsigned char*>(ebx4 + 0x40ca55) & 4 && *reinterpret_cast<void***>(*a2 + 1)) {
                *reinterpret_cast<void***>(*a1) = *reinterpret_cast<void***>(*a2);
                *a2 = *a2 + 1;
                *a1 = *a1 + 1;
            }
            *reinterpret_cast<void***>(*a1) = *reinterpret_cast<void***>(*a2);
            *a2 = *a2 + 1;
        } else {
            *reinterpret_cast<void***>(*a1) = reinterpret_cast<void**>(92);
            *a2 = *a2 + 2;
        }
    } else {
        *reinterpret_cast<void***>(*a1) = reinterpret_cast<void**>(34);
        *a2 = *a2 + 2;
    }
    *a1 = *a1 + 1;
    return;
}

void fun_4074e8(void*** a1, void*** a2) {
    int1_t zf3;

    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*a2) == 92) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*a2 + 2) == 34)) {
        zf3 = g40bacc == 0;
        if (zf3 || (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*a2) == 92) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*a2 + 2) == 92))) {
            *reinterpret_cast<void***>(*a1) = *reinterpret_cast<void***>(*a2);
            *a2 = *a2 + 2;
        } else {
            *reinterpret_cast<void***>(*a1) = reinterpret_cast<void**>(92);
            *a2 = *a2 + 4;
        }
    } else {
        *reinterpret_cast<void***>(*a1) = reinterpret_cast<void**>(34);
        *a2 = *a2 + 4;
    }
    *a1 = *a1 + 2;
    return;
}

int32_t SetFilePointer = 0xf3a0;

void** fun_4099de(void** a1, void** a2, void** a3, void** a4) {
    goto SetFilePointer;
}

void** g40ba58 = reinterpret_cast<void**>(0);

/* (image base) */
int32_t image_base_ = 0x406ed0;

/* (image base) */
int32_t image_base_ = 0x406ed0;

void** fun_406ed4(int32_t a1, int32_t a2, int32_t a3) {
    void** eax4;
    int1_t zf5;

    if (a1) {
        eax4 = reinterpret_cast<void**>(0);
        g40ba58 = reinterpret_cast<void**>(0);
    } else {
        zf5 = g40ba58 == 0;
        if (!zf5) {
            g40ba58();
        }
        fun_407b2c();
        eax4 = reinterpret_cast<void**>(image_base_());
    }
    if (!a2) {
        if (!a1) {
            image_base_();
            image_base_();
        }
        eax4 = fun_407a40(a3);
    }
    return eax4;
}

int32_t fun_407e35(void** ecx, void** a2, void** a3, void** a4, unsigned char a5, int32_t a6) {
    int32_t eax7;
    uint32_t v8;
    uint32_t ebx9;
    void** v10;
    int32_t eax11;
    int32_t eax12;
    void** esi13;
    int32_t eax14;

    eax7 = fun_402a4c(ecx, a2, a4, 0, a3);
    if (!eax7) {
        v8 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a2 + 4));
        ebx9 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a4 + 4));
        if (!(*reinterpret_cast<unsigned char*>(&ebx9) & 32)) 
            goto addr_407eb5_3;
        v10 = *reinterpret_cast<void***>(a4 + 8);
        eax11 = fun_402a4c(ecx, a2, v10, 1, a3);
        if (eax11) 
            goto addr_407e84_5;
    } else {
        eax12 = 1;
        goto addr_407ef5_7;
    }
    esi13 = *reinterpret_cast<void***>(a4 + 8);
    ebx9 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(esi13 + 4));
    if (*reinterpret_cast<unsigned char*>(&ebx9) & 16) {
        eax14 = fun_402a4c(ecx, a2, esi13, 0, a3);
        if (!eax14) {
            addr_407eb5_3:
            if (!(*reinterpret_cast<unsigned char*>(&ebx9) & 16)) 
                goto addr_407ef3_10;
        } else {
            eax12 = 1;
            goto addr_407ef5_7;
        }
    } else {
        eax12 = 0;
        goto addr_407ef5_7;
    }
    if (!(a5 & 1)) {
        if (*reinterpret_cast<unsigned char*>(&v8) & 16) {
            if (!(*reinterpret_cast<unsigned char*>(&ebx9) & 64) || (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx9) + 1) & 1) && *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v8) + 1) & 1 || !(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx9) + 1) & 2) && *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v8) + 1) & 2)) {
                addr_407ef3_10:
                eax12 = 0;
            } else {
                eax12 = 1;
            }
        } else {
            eax12 = 0;
        }
    } else {
        eax12 = 1;
    }
    addr_407ef5_7:
    return eax12;
    addr_407e84_5:
    eax12 = 1;
    goto addr_407ef5_7;
}

void** fun_407efb(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** ebx12;
    void** edi13;
    void** esi14;
    void** ebx15;
    void** ebp16;
    void** eax17;
    uint32_t ebx18;
    uint32_t ebx19;
    uint32_t ebx20;
    uint32_t ebx21;
    uint32_t ebx22;
    uint32_t ebx23;

    ebx12 = a5;
    if (!(*reinterpret_cast<unsigned char*>(&ebx12 + 1) & 1) && *reinterpret_cast<unsigned char*>(&ebx12) & 32) {
        eax17 = fun_406b6c(ecx, "(ctorMask & 0x0100) != 0 || (ctorMask & 0x0020) == 0", "xx.cpp", 0x205, edi13, esi14, ebx15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    if (*reinterpret_cast<unsigned char*>(&ebx12) & 0x80) {
        eax17 = fun_406b6c(ecx, "(ctorMask & 0x0080) == 0", "xx.cpp", 0x207, edi13, esi14, ebx15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    if (!(*reinterpret_cast<unsigned char*>(&ebx12 + 1) & 16)) {
        ebx18 = (reinterpret_cast<unsigned char>(ebx12) & 7) - 1;
        if (!ebx18) {
            eax17 = reinterpret_cast<void**>(a4(a2, a3));
        } else {
            ebx19 = ebx18 - 1;
            if (!ebx19) {
                eax17 = reinterpret_cast<void**>(a4(a3, a2));
            } else {
                ebx20 = ebx19 - 1;
                if (!ebx20) {
                    eax17 = reinterpret_cast<void**>(a4());
                } else {
                    if (!(ebx20 - 2)) {
                        eax17 = reinterpret_cast<void**>(a4(a2, a3));
                    } else {
                        if (!0) 
                            goto addr_407fed_16;
                    }
                }
            }
        }
    } else {
        ebx21 = (reinterpret_cast<unsigned char>(ebx12) & 7) - 1;
        if (!ebx21) {
            eax17 = reinterpret_cast<void**>(a4(a2, 0, a3));
        } else {
            ebx22 = ebx21 - 1;
            if (!ebx22) {
                eax17 = reinterpret_cast<void**>(a4(a2, a3, 0));
            } else {
                ebx23 = ebx22 - 1;
                if (!ebx23) {
                    eax17 = reinterpret_cast<void**>(a4(a3));
                } else {
                    if (!(ebx23 - 2)) {
                        eax17 = reinterpret_cast<void**>(a4(a2, 0, a3));
                    } else {
                        eax17 = reinterpret_cast<void**>("what?");
                        if (!0) 
                            goto addr_407f97_27;
                    }
                }
            }
        }
    }
    addr_408004_28:
    return eax17;
    addr_407fed_16:
    eax17 = fun_406b6c(ecx, "!\"what?\"", "xx.cpp", 0x25e, edi13, esi14, ebx15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    goto addr_408004_28;
    addr_407f97_27:
    eax17 = fun_406b6c(ecx, "!\"what?\"", "xx.cpp", 0x232, edi13, esi14, ebx15, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    goto addr_408004_28;
}

void fun_40847c(void** a1, void** a2) {
    void** ecx3;

    ecx3 = a2;
    if (!ecx3) {
        ecx3 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffb0);
    }
    *reinterpret_cast<void***>(ecx3 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx3 + 4)) | 2);
    fun_402f9a(38);
    return;
}

struct s25 {
    signed char[32] pad32;
    void** f20;
};

void fun_40120c(void** ecx, void** a2);

void fun_40121c(void** ecx, void** a2);

void** fun_409456(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** ebp7;
    void*** ebp8;
    void** v9;
    void** ebx10;
    void** v11;
    void** esi12;
    void** v13;
    void** edi14;
    void** v15;
    void** v16;
    void** v17;
    void** ecx18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** ecx24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** ecx30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** eax36;
    void** ebx37;
    void** esi38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** edi44;
    void** esi45;
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
    void** edi58;
    void** v59;
    void** esi60;
    void** v61;
    void** v62;
    void** edi63;
    void** eax64;
    void** eax65;
    void** eax66;
    void** eax67;
    struct s25** edi68;
    uint32_t edi69;
    void** ecx70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** ecx75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = ebp7;
    ebp8 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v9 = ebx10;
    v11 = esi12;
    v13 = edi14;
    v15 = reinterpret_cast<void**>(0);
    if (a1) {
        v16 = *reinterpret_cast<void***>(a3 + 28);
        v17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) - reinterpret_cast<unsigned char>(a2));
        ecx18 = a1;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx18 + 4)) & 32) {
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 4)) & 17)) {
                fun_406b6c(ecx18, "dttPtr->dttFlags & (DTCVF_PTRVAL|DTCVF_RETVAL)", "xx.cpp", 0xe78, v13, v11, v9, v19, v20, v21, v22, v23, 0, v17, v6, v5, a1, a2, a3);
            }
            ecx24 = *reinterpret_cast<void***>(a1);
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx24 + 4)) & 16)) {
                fun_406b6c(ecx24, "dttPtr->dttType->tpMask & TM_IS_PTR", "xx.cpp", 0xe7c, v13, v11, v9, v25, v26, v27, v28, v29, 0, v17, v6, v5, a1, a2, a3);
            }
            ecx30 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a1) + 8);
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx30 + 12)) & 2)) {
                fun_406b6c(ecx30, "dttPtr->dttType->tpPtr.tppBaseType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xe7d, v13, v11, v9, v31, v32, v33, v34, v35, 0, v17, v6, v5, a1, a2, a3);
            }
            ecx18 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a1) + 8);
            v17 = *reinterpret_cast<void***>(ecx18 + 32);
        }
        if (*reinterpret_cast<unsigned char*>(a1 + 5) & 1) 
            goto addr_409507_11;
    } else {
        eax36 = reinterpret_cast<void**>(0);
        goto addr_4098d3_13;
    }
    if (reinterpret_cast<signed char>(v17) > reinterpret_cast<signed char>(0) || *reinterpret_cast<unsigned char*>(a1 + 5) & 4) {
        ebx37 = a1;
        while (*reinterpret_cast<void***>(ebx37)) {
            if (!(*reinterpret_cast<unsigned char*>(ebx37 + 5) & 16)) {
                esi38 = *reinterpret_cast<void***>(ebx37);
                v39 = esi38;
            } else {
                if (!(*reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(ebx37) + 5) & 4)) {
                    fun_406b6c(ecx18, "dtvtPtr->dttType->tpMask & TM_IS_ARRAY", "xx.cpp", 0xed7, v13, v11, v9, v40, v41, v42, v43, v39, 0, v17, v6, v5, a1, a2, a3);
                }
                esi38 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx37) + 8);
                v39 = esi38;
            }
            edi44 = reinterpret_cast<void**>(1);
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v39 + 4)) & 16 && ((esi38 = *reinterpret_cast<void***>(v39 + 8), v39 = esi38, ecx18 = v39, !!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx18 + 4)) & 2)) && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v39 + 12)) & 32 && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx37 + 4)) & 8))) {
                esi45 = reinterpret_cast<void**>(0);
                if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v39 + 12)) & 2)) {
                    fun_406b6c(ecx18, "varType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xef7, v13, v11, v9, v46, v47, v48, v43, v39, 0, v17, v6, v5, a1, a2, a3);
                }
                if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx37 + 4)) & 4)) {
                    ecx18 = *reinterpret_cast<void***>(ebx37 + 8);
                    v49 = ecx18;
                } else {
                    v49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx37 + 8)));
                }
                v50 = *reinterpret_cast<void***>(v49);
                if (*reinterpret_cast<unsigned char*>(ebx37 + 5) & 16) {
                    esi45 = *reinterpret_cast<void***>(v49 + 4);
                }
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx37 + 4)) & 64) {
                    v50 = v50 + 4;
                }
                eax54 = fun_4093cf(ecx18, v50, ebp8 + 0xfffffff4, esi45, v13, v11, v9, v51, v52, v53, v50);
                v43 = eax54;
                esi38 = v39;
            }
            if (*reinterpret_cast<unsigned char*>(v39 + 5) & 4) {
                edi44 = *reinterpret_cast<void***>(esi38 + 12);
                esi38 = *reinterpret_cast<void***>(esi38 + 8);
            }
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi38 + 12)) & 2)) {
                fun_406b6c(ecx18, "elemType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xf22, v13, v11, v9, v55, v56, v57, v43, v39, 0, v17, v6, v5, a1, a2, a3);
            }
            edi58 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi44) * reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi38 + 32)));
            if (reinterpret_cast<unsigned char>(edi58) >= reinterpret_cast<unsigned char>(v17)) 
                goto addr_409691_38;
            v17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v17) - reinterpret_cast<unsigned char>(edi58));
            ebx37 = ebx37 + 12;
        }
    } else {
        ecx18 = a1;
        if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx18 + 4)) & 3) != 3) {
            eax36 = reinterpret_cast<void**>(0);
            goto addr_4098d3_13;
        } else {
            ebx37 = a1;
            v15 = reinterpret_cast<void**>(1);
            goto addr_409691_38;
        }
    }
    ebx37 = ebx37 - 12;
    do {
        addr_409691_38:
        v59 = *reinterpret_cast<void***>(ebx37);
        esi60 = *reinterpret_cast<void***>(ebx37 + 4);
        if (!(reinterpret_cast<unsigned char>(esi60) & 4)) {
            v61 = *reinterpret_cast<void***>(ebx37 + 8);
        } else {
            v61 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx37 + 8)));
        }
        if (reinterpret_cast<unsigned char>(esi60) & 0x1000) {
            ecx18 = v59;
            if (!(*reinterpret_cast<unsigned char*>(ecx18 + 5) & 4)) {
                fun_406b6c(ecx18, "varType->tpMask & TM_IS_ARRAY", "xx.cpp", 0xf52, v13, v11, v9, v62, v61, v59, v43, v39, v15, v17, v6, v5, a1, a2, a3);
            }
            v59 = *reinterpret_cast<void***>(v59 + 8);
        }
        if (reinterpret_cast<unsigned char>(esi60) & 17) {
            edi63 = reinterpret_cast<void**>(0);
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v59 + 4)) & 16)) {
                fun_406b6c(ecx18, "varType->tpMask & TM_IS_PTR", "xx.cpp", 0xf5c, v13, v11, v9, v62, v61, v59, v43, v39, v15, v17, v6, v5, a1, a2, a3);
            }
            v59 = *reinterpret_cast<void***>(v59 + 8);
            eax64 = v61;
            v61 = *reinterpret_cast<void***>(eax64);
            if (reinterpret_cast<unsigned char>(esi60) & 0x1000) {
                edi63 = *reinterpret_cast<void***>(eax64 + 4);
            }
            v62 = v61;
            if ((reinterpret_cast<unsigned char>(esi60) & 72) == 64) {
                v61 = v61 + 4;
            }
            ecx18 = v59;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx18 + 4)) & 2 && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v59 + 12)) & 32 && reinterpret_cast<unsigned char>(esi60) & 8)) {
                eax65 = fun_4093cf(ecx18, v61, ebp8 + 0xffffffec, edi63, v13, v11, v9, v62, v61, v59, v43);
                v61 = eax65;
                ecx18 = v61;
                v62 = ecx18;
            }
        }
        if (!v15) {
            if (!(reinterpret_cast<unsigned char>(esi60) & 0x400)) {
                eax66 = reinterpret_cast<void**>(0);
            } else {
                if (!*reinterpret_cast<void***>(v59 + 16)) {
                    eax67 = reinterpret_cast<void**>(0);
                } else {
                    edi68 = reinterpret_cast<struct s25**>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v59 + 16)) + reinterpret_cast<unsigned char>(v59));
                    if (!edi68) {
                        fun_406b6c(ecx18, "bl", "xx.cpp", 0xf92, v13, v11, v9, v62, v61, v59, v43, v39, v15, v17, v6, v5, a1, a2, a3);
                    }
                    eax67 = (*edi68)->f20;
                }
                if (reinterpret_cast<unsigned char>(v17) < reinterpret_cast<unsigned char>(eax67)) {
                    eax66 = reinterpret_cast<void**>(2);
                } else {
                    eax66 = reinterpret_cast<void**>(1);
                }
            }
            if (!(*reinterpret_cast<unsigned char*>(v59 + 5) & 4)) {
                fun_408ffb(ecx18, v61, v59, eax66, v17, 1, a4, a3);
            } else {
                fun_4092ab(ecx18, v61, v59, v17, a4, a3, v13, v11, v9);
            }
            if (reinterpret_cast<unsigned char>(esi60) & 0x400 && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 32)) & 1 && *reinterpret_cast<void***>(a3 + 32) != 0xff)) {
                edi69 = *reinterpret_cast<uint32_t*>(*reinterpret_cast<void***>(v61) + 0xfffffff8);
                edi69();
            }
        }
        if ((reinterpret_cast<unsigned char>(esi60) & 3) == 3) {
            if ((reinterpret_cast<unsigned char>(esi60) & 72) == 72) {
                v62 = v62 - 4;
            }
            if (!(*reinterpret_cast<unsigned char*>(v59 + 5) & 4)) {
                if (!*reinterpret_cast<void***>(v59 + 20)) {
                    fun_40120c(v59, v62);
                } else {
                    ecx70 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v59 + 24))));
                    v71 = *reinterpret_cast<void***>(v59 + 20);
                    fun_40810e(ecx70, v62, v71, ecx70, v13, v11, v9, v62, v61, v59, v43, v39, v15);
                }
            } else {
                v72 = *reinterpret_cast<void***>(v59 + 8);
                if (!*reinterpret_cast<void***>(v72 + 28)) {
                    fun_40121c(v72, v62);
                } else {
                    v73 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<unsigned char*>(v72 + 26))));
                    v74 = *reinterpret_cast<void***>(v72 + 28);
                    fun_40810e(v72, v62, v74, v73, v13, v11, v9, v62, v61, v72, v43, v39, v15);
                }
            }
        }
        v17 = reinterpret_cast<void**>(0);
        ecx18 = ebx37;
        ebx37 = ebx37 + 0xfffffff4;
    } while (reinterpret_cast<unsigned char>(ecx18) > reinterpret_cast<unsigned char>(a1));
    eax36 = reinterpret_cast<void**>(0);
    addr_4098d3_13:
    return eax36;
    addr_409507_11:
    ecx75 = a1;
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx75) + 4)) & 2) || (ecx75 = *reinterpret_cast<void***>(a1), !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx75 + 12)) & 2))) {
        fun_406b6c(ecx75, "IS_CLASS(dttPtr->dttType->tpMask) && (dttPtr->dttType->tpClass.tpcFlags & CF_HAS_DTOR)", "xx.cpp", 0xe8b, v13, v11, v9, v76, v77, v78, v79, v80, 0, v17, v6, v5, a1, a2, a3);
    }
    eax36 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a1) + 36);
    goto addr_4098d3_13;
}

void* fun_405010(void** ecx) {
    void* v2;
    void* eax3;

    __asm__("fninit ");
    v2 = g40b850;
    eax3 = fun_404f98(v2, 0x1fff);
    return eax3;
}

void** fun_408b17(void** ecx, void** a2, void** a3) {
    void** esi4;
    void** ebx5;
    void** eax6;
    void** v7;
    void** v8;
    void** v9;
    int32_t eax10;
    void** eax11;

    esi4 = a3;
    ebx5 = a2 + 8;
    while (*reinterpret_cast<void***>(ebx5)) {
        eax6 = *reinterpret_cast<void***>(ebx5 + 4);
        if (!eax6) 
            goto addr_408b2e_4;
        v7 = *reinterpret_cast<void***>(esi4 + 12);
        v8 = *reinterpret_cast<void***>(esi4 + 8);
        v9 = *reinterpret_cast<void***>(esi4 + 4);
        eax10 = fun_407e35(ecx, v9, v8, eax6, *reinterpret_cast<unsigned char*>(&v7), 0);
        if (eax10) 
            goto addr_408b4a_6;
        ebx5 = ebx5 + 20;
    }
    eax11 = reinterpret_cast<void**>(0);
    addr_408b58_9:
    return eax11;
    addr_408b2e_4:
    eax11 = ebx5;
    goto addr_408b58_9;
    addr_408b4a_6:
    eax11 = ebx5;
    goto addr_408b58_9;
}

void fun_40121c(void** ecx, void** a2) {
    fun_40120c(ecx, a2);
    return;
}

void fun_40120c(void** ecx, void** a2) {
    fun_4013f0(ecx, a2);
    return;
}

struct s26 {
    signed char f0;
    signed char f1;
    signed char f2;
    signed char f3;
};

struct s27 {
    signed char f0;
    signed char f1;
    signed char f2;
    signed char f3;
};

int32_t fun_40231c(struct s26* a1, struct s27* a2, int32_t a3) {
    int32_t edi4;
    struct s26* ecx5;
    struct s27* esi6;
    int32_t ecx7;
    int32_t eax8;
    int32_t eax9;

    edi4 = a3;
    ecx5 = a1;
    esi6 = a2;
    do {
        if (edi4 < 4) 
            break;
    } while (esi6->f0 == ecx5->f0 && (esi6->f1 == ecx5->f1 && (esi6->f2 == ecx5->f2 && (esi6->f3 == ecx5->f3 && (edi4 = edi4 - 4, ++ecx5, ++esi6, edi4 >= 4)))));
    if (edi4) {
        do {
            if (esi6->f0 != ecx5->f0) 
                break;
            ecx5 = reinterpret_cast<struct s26*>(&ecx5->f1);
            esi6 = reinterpret_cast<struct s27*>(&esi6->f1);
            --edi4;
        } while (edi4);
        ecx7 = 0;
        *reinterpret_cast<signed char*>(&ecx7) = ecx5->f0;
        eax8 = 0;
        *reinterpret_cast<signed char*>(&eax8) = esi6->f0;
        eax9 = ecx7 - eax8;
    } else {
        eax9 = 0;
    }
    return eax9;
}

/* (image base) */
int32_t image_base_ = 0x4052ec;

/* (image base) */
int32_t image_base_ = 0x405318;

void fun_405348(int32_t a1, int32_t a2) {
    image_base_ = a1;
    image_base_ = a2;
    return;
}

/* (image base) */
int32_t image_base_ = 0x40ac34;

void fun_4033a0(int32_t a1) {
    image_base_ = a1;
    return;
}

int32_t g40a6b4 = 0;

void fun_4033b0(int32_t ecx, int32_t* a2) {
    if (a2) {
        g40a6b4 = *a2;
    }
    return;
}

void** g40ccc0;

void fun_402f38() {
    void** eax1;

    eax1 = g40ccc0;
    if (eax1) {
        fun_402ec0(eax1);
    }
    return;
}

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0x94);

/* (image base) */
int32_t image_base_ = 0x406fa8;

void fun_406f78(void*** a1, int32_t* a2) {
    image_base_ = *a1;
    image_base_ = *a2;
    return;
}

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(80);

/* (image base) */
int32_t image_base_ = 0x4072a8;

/* (image base) */
int32_t image_base_ = 0x407338;

/* (image base) */
int32_t image_base_ = 0x4074cc;

void fun_406fbc(void** a1, int32_t a2, int32_t a3, int32_t a4) {
    image_base_ = a1;
    image_base_ = a2;
    image_base_ = a3;
    image_base_ = a4;
    return;
}

struct s15* fun_407a50() {
    return 0;
}

signed char* fun_40525c(void** a1, signed char* a2, uint32_t a3, signed char a4, signed char a5) {
    void* ebp6;
    uint32_t edi7;
    void** esi8;
    signed char* ebx9;
    signed char* ecx10;
    uint32_t edx11;
    signed char v12;
    void** eax13;

    ebp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edi7 = a3;
    esi8 = a1;
    ebx9 = a2;
    if (reinterpret_cast<int32_t>(edi7) >= reinterpret_cast<int32_t>(2) && reinterpret_cast<int32_t>(edi7) <= reinterpret_cast<int32_t>(36)) {
        if (reinterpret_cast<signed char>(esi8) < reinterpret_cast<signed char>(0) && a4) {
            *ebx9 = 45;
            ++ebx9;
            esi8 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(esi8));
        }
        ecx10 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp6) - 36);
        do {
            edx11 = reinterpret_cast<unsigned char>(esi8) % edi7;
            v12 = *reinterpret_cast<signed char*>(&edx11);
            ++ecx10;
            eax13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi8) / edi7);
            esi8 = eax13;
        } while (eax13);
        while (!reinterpret_cast<int1_t>(ecx10 == reinterpret_cast<int32_t>(ebp6) - 36)) {
            --ecx10;
            *reinterpret_cast<signed char*>(&eax13) = v12;
            if (*reinterpret_cast<signed char*>(&eax13) >= 10) {
                *ebx9 = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax13) + a5) - 10);
                ++ebx9;
            } else {
                eax13 = eax13 + 48;
                *ebx9 = *reinterpret_cast<signed char*>(&eax13);
                ++ebx9;
            }
        }
    }
    *ebx9 = 0;
    return a2;
}

int32_t SetHandleCount = 0xf3b2;

void** fun_4099e4() {
    goto SetHandleCount;
}

int32_t GetVersion = 0xf2f8;

uint32_t fun_4099a2() {
    goto GetVersion;
}

uint32_t fun_404690(void* a1, uint32_t a2) {
    void* edx3;
    struct s20* eax4;

    edx3 = a1;
    if (reinterpret_cast<uint32_t>(edx3) <= 0xff) {
        eax4 = image_base_;
        if (eax4->f8 || !eax4->f10) {
            return static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(" " + *reinterpret_cast<int16_t*>(&edx3) * 2)) & a2;
        } else {
            return a2 & static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(eax4->f10) + reinterpret_cast<uint32_t>(edx3) * 2 + 2));
        }
    } else {
        return 0;
    }
}

int32_t fun_4046d4(void* ecx, uint32_t a2, int32_t a3) {
    void* ebp4;
    struct s20* edx5;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (a2 != 0xffff) {
        edx5 = image_base_;
        if (!edx5->f8 || reinterpret_cast<int32_t>(a2) >= reinterpret_cast<int32_t>(0x100)) {
            fun_40999c(1, reinterpret_cast<int32_t>(ebp4) + 8, 1, reinterpret_cast<int32_t>(ebp4) - 2);
        }
    }
    goto __return_address();
}

int32_t ExitProcess = 0xf1d8;

void fun_40993c() {
    goto ExitProcess;
}

void** g40cc90;

void** g40ccb0;

struct s28 {
    signed char[1] pad1;
    void** f1;
};

void** g40cc94;

int32_t g40cc98;

int32_t fun_4075dc(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** v16;
    void** v17;
    void** ebx18;
    void** v19;
    void** esi20;
    void** v21;
    void** edi22;
    void** v23;
    void** ebp24;
    void** v25;
    int1_t zf26;
    int32_t esi27;
    void** ebx28;
    void** v29;
    void** eax30;
    int1_t zf31;
    void** eax32;
    struct s28* ebp33;
    void** ebx34;
    void** eax35;
    void** eax36;
    void** edi37;
    void** eax38;
    int32_t ebx39;
    void** eax40;
    int1_t zf41;
    void** ebx42;
    void** edi43;
    void** v44;
    void** eax45;
    void** ebx46;
    void** ebp47;
    void** eax48;
    void** eax49;
    int32_t eax50;
    void** edx51;

    v16 = reinterpret_cast<void**>(__return_address());
    v17 = ebx18;
    v19 = esi20;
    v21 = edi22;
    v23 = ebp24;
    v25 = ecx;
    zf26 = g40cc90 == 0;
    if (!zf26) {
        esi27 = 0;
        ebx28 = g40cc90;
        while (*reinterpret_cast<void***>(ebx28)) {
            v29 = *reinterpret_cast<void***>(ebx28);
            eax30 = fun_402250(ecx, v29, v25, v23, v21, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
            ecx = v29;
            if (!eax30) {
                --esi27;
            }
            ++esi27;
            ebx28 = ebx28 + 4;
        }
    } else {
        zf31 = g40ccb0 == 0;
        if (zf31 && (eax32 = fun_40995a(), g40ccb0 = eax32, !eax32)) {
            fun_406e08(ecx, "GetEnvironmentStrings failed", v25, v23);
            ecx = reinterpret_cast<void**>("GetEnvironmentStrings failed");
        }
        ebp33 = reinterpret_cast<struct s28*>(0);
        esi27 = 0;
        ebx34 = g40ccb0;
        while (eax35 = fun_402250(ecx, ebx34, v25, v23, v21, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15), ecx = ebx34, !!eax35) {
            eax36 = eax35 + 1;
            ++esi27;
            ebp33 = reinterpret_cast<struct s28*>(reinterpret_cast<uint32_t>(ebp33) + reinterpret_cast<unsigned char>(eax36));
            ebx34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx34) + reinterpret_cast<unsigned char>(eax36));
        }
        edi37 = reinterpret_cast<void**>(&ebp33->f1);
        eax38 = fun_4013e0(ecx, edi37, v25, v23);
        ecx = edi37;
        g40cc94 = eax38;
        if (eax38) 
            goto addr_40764a_13; else 
            goto addr_407643_14;
    }
    addr_40767d_15:
    ebx39 = esi27 + 4;
    g40cc98 = ebx39;
    eax40 = fun_4011e0(ecx, ebx39 + 1, 4);
    v25 = eax40;
    if (eax40) {
        zf41 = g40cc90 == 0;
        if (!zf41) {
            ebx42 = g40cc90;
            edi43 = v25;
            while (*reinterpret_cast<void***>(ebx42)) {
                v44 = *reinterpret_cast<void***>(ebx42);
                eax45 = fun_402250(ecx, v44, v25, v23, v21, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                ecx = v44;
                if (!eax45) {
                    edi43 = edi43 + 0xfffffffc;
                } else {
                    *reinterpret_cast<void***>(edi43) = *reinterpret_cast<void***>(ebx42);
                }
                edi43 = edi43 + 4;
                ebx42 = ebx42 + 4;
            }
        } else {
            ebx46 = g40cc94;
            ebp47 = v25;
            while (eax48 = fun_402250(ecx, ebx46, v25, v23, v21, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15), ecx = ebx46, !!eax48) {
                *reinterpret_cast<void***>(ebp47) = ebx46;
                ebp47 = ebp47 + 4;
                ebx46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx46) + reinterpret_cast<unsigned char>(eax48 + 1));
            }
        }
        eax49 = g40cc90;
        if (eax49) {
            fun_4013f0(ecx, eax49);
        }
        eax50 = 1;
        g40cc90 = v25;
    } else {
        eax50 = 0;
    }
    addr_407720_31:
    return eax50;
    addr_40764a_13:
    edx51 = g40ccb0;
    fun_40213c(ecx, eax38, edx51, edi37, v25, v23, v21);
    goto addr_40767d_15;
    addr_407643_14:
    eax50 = 0;
    goto addr_407720_31;
}

void** g40cb58;

signed char g40b96c = -90;

signed char g40b96d = -33;

signed char g40b96e = -95;

signed char g40b96f = -91;

uint32_t fun_406974(void** ecx, void** a2) {
    void** esi3;
    struct s20* eax4;
    void** eax5;
    void** eax6;
    void** v7;
    int32_t eax8;
    uint32_t eax9;
    signed char* edx10;
    uint32_t v11;
    uint32_t eax12;
    signed char v13;
    signed char v14;
    signed char* edx15;
    uint32_t ebx16;
    signed char v17;
    int32_t eax18;
    unsigned char* edx19;
    int32_t eax20;
    unsigned char* edx21;
    int32_t ecx22;
    int32_t eax23;
    unsigned char* edx24;
    int32_t ecx25;

    esi3 = a2;
    if (!reinterpret_cast<int1_t>(esi3 == 0xfffffffe)) {
        if (!reinterpret_cast<int1_t>(esi3 == 0xfffffffd)) {
            if (reinterpret_cast<int1_t>(esi3 == 0xfffffffc)) {
                eax4 = image_base_;
                esi3 = eax4->f0;
            }
        } else {
            eax5 = fun_409942();
            esi3 = eax5;
        }
    } else {
        eax6 = fun_40997e();
        esi3 = eax6;
    }
    if (!esi3 || (v7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffec), eax8 = fun_409948(esi3, v7), !!eax8)) {
        eax9 = 0;
        edx10 = reinterpret_cast<signed char*>(0x40ca54);
        do {
            *edx10 = 0;
            ++eax9;
            ++edx10;
        } while (reinterpret_cast<int32_t>(eax9) < reinterpret_cast<int32_t>(0x101));
        if (!esi3) 
            goto addr_406a86_11;
        if (v11 > 1) 
            goto addr_4069f1_13;
    } else {
        fun_406cdc(ecx, "Error: system code page access failure; MBCS table not initialized", esi3, v7);
        eax12 = 0xffffffff;
        goto addr_406a8f_15;
    }
    addr_406a86_11:
    g40cb58 = reinterpret_cast<void**>(0);
    addr_406a8d_16:
    eax12 = 0;
    addr_406a8f_15:
    return eax12;
    addr_4069f1_13:
    while ((*reinterpret_cast<signed char*>(&eax9) = v13, !!*reinterpret_cast<signed char*>(&eax9)) && v14) {
        eax9 = eax9 & 0xff;
        edx15 = reinterpret_cast<signed char*>(eax9 + 0x40ca55);
        while (ebx16 = 0, *reinterpret_cast<signed char*>(&ebx16) = v17, reinterpret_cast<int32_t>(eax9) <= reinterpret_cast<int32_t>(ebx16)) {
            *edx15 = 4;
            ++eax9;
            ++edx15;
        }
    }
    eax18 = 1;
    edx19 = reinterpret_cast<unsigned char*>(0x40ca56);
    do {
        *edx19 = reinterpret_cast<unsigned char>(*edx19 | 8);
        ++eax18;
        ++edx19;
    } while (eax18 < 0xff);
    if (reinterpret_cast<int1_t>(esi3 == 0x3a4)) 
        goto addr_406a3e_25;
    addr_406a7e_26:
    g40cb58 = esi3;
    goto addr_406a8d_16;
    addr_406a3e_25:
    eax20 = 0;
    *reinterpret_cast<signed char*>(&eax20) = g40b96c;
    edx21 = reinterpret_cast<unsigned char*>(eax20 + 0x40ca55);
    while (ecx22 = 0, *reinterpret_cast<signed char*>(&ecx22) = g40b96d, eax20 <= ecx22) {
        *edx21 = reinterpret_cast<unsigned char>(*edx21 | 1);
        ++eax20;
        ++edx21;
    }
    eax23 = 0;
    *reinterpret_cast<signed char*>(&eax23) = g40b96e;
    edx24 = reinterpret_cast<unsigned char*>(eax23 + 0x40ca55);
    while (ecx25 = 0, *reinterpret_cast<signed char*>(&ecx25) = g40b96f, eax23 <= ecx25) {
        *edx24 = reinterpret_cast<unsigned char>(*edx24 | 2);
        ++eax23;
        ++edx24;
    }
    goto addr_406a7e_26;
}

uint32_t g40a113 = 0;

signed char* g40a117 = reinterpret_cast<signed char*>(0);

uint32_t g10;

int32_t g20;

int32_t g1c;

int32_t g28;

int32_t* g44;

int32_t g40ccd4;

int32_t g40ccd8;

signed char* g40ccac;

int32_t* g30;

int32_t g40;

int32_t g3c;

int32_t g38;

void** g34;

void** g40cca8;

void** g40cca4;

int32_t g40cca0;

int32_t g18;

void fun_401000(void** ecx, signed char* a2) {
    uint32_t eax3;
    signed char* edx4;
    signed char* eax5;
    signed char* v6;
    signed char* edi7;
    uint32_t eax8;
    int32_t edx9;
    int32_t ecx10;
    int32_t eax11;
    int32_t* edx12;
    void** eax13;
    signed char* eax14;
    int32_t* eax15;
    void*** edx16;
    int32_t ecx17;
    int32_t eax18;
    int32_t edx19;
    void** ecx20;
    struct s15* eax21;
    struct s15* edi22;
    void** v23;
    struct s16** ebx24;
    struct s16* eax25;
    int32_t v26;
    int1_t zf27;
    void** edx28;
    void** ecx29;
    int32_t eax30;
    int32_t eax31;
    signed char* ebx32;
    signed char dl33;
    signed char* eax34;
    signed char* eax35;
    int32_t eax36;

    eax3 = g40a10f;
    g40a113 = eax3 << 2;
    fun_409978(ecx, 0, edx4, __return_address(), a2);
    fun_402134();
    fun_4014d0(edx4, __return_address());
    fun_402138(edx4, __return_address());
    fun_402d50(ecx, 0, edx4, __return_address());
    eax5 = fun_409978(0, 0, 0x40a0b8, edx4, __return_address());
    g40a117 = eax5;
    v6 = edi7;
    eax8 = g10;
    g40bbf4 = eax8 & 1;
    fun_405010(0);
    edx9 = g20;
    ecx10 = g1c;
    fun_405348(ecx10, edx9);
    eax11 = g28;
    fun_4033a0(eax11);
    edx12 = g44;
    fun_4033b0(eax11, edx12);
    g40ccd4 = 1;
    g40ccd8 = 0;
    g40ccc0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 4 - 4 + 4 + 4 - 4 + 4 - 4 + 4 - 4 - 4 + 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 + 0xfffffff8);
    fun_402f38();
    eax13 = fun_40995a();
    g40ccb0 = eax13;
    eax14 = fun_40994e();
    g40ccac = eax14;
    eax15 = g30;
    edx16 = g2c;
    fun_406f78(edx16, eax15);
    ecx17 = g40;
    eax18 = g3c;
    edx19 = g38;
    ecx20 = g34;
    fun_406fbc(ecx20, edx19, eax18, ecx17);
    eax21 = fun_407a50();
    edi22 = eax21;
    if (eax21) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi22) + reinterpret_cast<unsigned char>(edi22->f0) * 4 + 4) = -1;
        fun_407a58(edi22, 0);
        v23 = reinterpret_cast<void**>(0);
        ebx24 = &edi22->f4;
        while (ecx20 = edi22->f0, reinterpret_cast<signed char>(ecx20) > reinterpret_cast<signed char>(v23)) {
            eax25 = *ebx24;
            v26 = eax25->f14;
            eax25->f18(0, v26);
            ++v23;
            ++ebx24;
        }
    }
    fun_407a58(0x40ccd4, 0);
    zf27 = (*reinterpret_cast<unsigned char*>(&g10) & 1) == 0;
    if (zf27) {
        edx28 = g40cca8;
        ecx29 = g40cca4;
        eax30 = g40cca0;
        eax31 = reinterpret_cast<int32_t>(g18(eax30, ecx29, edx28));
        fun_406f28(eax31, v6);
    } else {
        ebx32 = g40ccac;
        while (*ebx32 == 32 || *ebx32 == 9) {
            ++ebx32;
        }
        if (*ebx32 != 34) 
            goto addr_407ca9_13; else 
            goto addr_407ca4_14;
    }
    addr_407d14_15:
    goto 0;
    addr_407ca9_13:
    dl33 = 32;
    addr_407cae_16:
    while (*ebx32 && (dl33 != *ebx32 && *ebx32 != 9)) {
        ++ebx32;
    }
    if (*ebx32 == 34) {
        ++ebx32;
    }
    while (*ebx32 && *ebx32 == 32 || *ebx32 == 9) {
        ++ebx32;
    }
    eax34 = fun_407d1c();
    eax35 = fun_409978(ecx20, 0, 0, ebx32, eax34);
    eax36 = reinterpret_cast<int32_t>(g18(eax35, 0, 0, ebx32, eax34));
    fun_406f28(eax36, eax34);
    goto addr_407d14_15;
    addr_407ca4_14:
    dl33 = 34;
    ++ebx32;
    goto addr_407cae_16;
}

void fun_401005() {
}

uint32_t fun_4010d0(int32_t a1, int32_t a2) {
    uint32_t eax3;
    int1_t cf4;
    int32_t eax5;
    uint32_t eax6;
    uint32_t v7;
    uint32_t v8;
    uint32_t eax9;

    if (!0) {
        eax3 = fun_407d3c();
        g40a10f = eax3;
        if (eax3 >= 0) {
            if (!0) {
                cf4 = g40a10f < 0;
                if (cf4) {
                    fun_40106c(__return_address(), a1, a2);
                }
                eax5 = fun_40998a(8, 0x9c);
                eax6 = fun_4099b4(eax5, 8, 0x9c);
                if (!eax6) {
                    eax6 = fun_40106c(eax5, 8, 0x9c);
                }
                v7 = g40a10f;
                fun_407d64(v7, eax6);
                v8 = g40a10f;
                eax3 = fun_407d78(v8);
            }
            return eax3;
        } else {
            eax9 = fun_40106c(__return_address(), a1, a2);
        }
    }
    return eax9;
}

int32_t fun_401360(void** ecx, void*** a2, void*** a3, void*** a4) {
    int32_t eax5;
    signed char* edi6;
    signed char* esi7;
    signed char* ebx8;
    signed char* eax9;
    signed char* ebp10;
    void** eax11;
    void** eax12;
    void** eax13;

    if (!a2 || (!a3 || !a4)) {
        eax5 = 0;
    } else {
        eax9 = fun_409978(ecx, "borlndmm", edi6, esi7, ebx8);
        if (eax9) {
            eax11 = fun_409984(eax9, "@Borlndmm@SysGetMem$qqri", "borlndmm", edi6, esi7, ebx8, ebp10);
            *a2 = eax11;
            eax12 = fun_409984(eax9, "@Borlndmm@SysFreeMem$qqrpv", eax9, "@Borlndmm@SysGetMem$qqri", "borlndmm", edi6, esi7);
            *a3 = eax12;
            eax13 = fun_409984(eax9, "@Borlndmm@SysReallocMem$qqrpvi", eax9, "@Borlndmm@SysFreeMem$qqrpv", eax9, "@Borlndmm@SysGetMem$qqri", "borlndmm");
            *a4 = eax13;
            if (!*a2 || (!*a3 || !*a4)) {
                eax5 = 0;
            } else {
                eax5 = 1;
            }
        } else {
            eax5 = 0;
        }
    }
    return eax5;
}

void fun_401460(int32_t a1) {
    fun_401418(1);
    image_base_(1);
    return;
}

void fun_4027e3() {
    goto 0x402858;
}

struct s29 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_402c34(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t ebp7;
    struct s29* ebp8;

    fun_4085b8(ecx, __return_address(), a2, a3, a4, a5, a6);
    fun_406ec0(ecx);
    g0 = *reinterpret_cast<void***>(ebp7 - 36);
    goto ebp8->f4;
}

void fun_402c78(void** ecx, signed char* a2, signed char* a3, signed char* a4) {
    signed char* eax5;
    void** eax6;
    int1_t zf7;

    eax5 = fun_409978(ecx, 0, "___CPPdebugHook", __return_address(), a2);
    eax6 = fun_409984(eax5, 0, "___CPPdebugHook", __return_address(), a2, a3, a4);
    g40c8b4 = eax6;
    zf7 = g40c8b4 == 0;
    if (zf7) {
        g40c8b4 = reinterpret_cast<void**>(0x40a11c);
    }
    goto eax5;
}

void fun_402cfa(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    fun_4085b8(ecx, __return_address(), a2, a3, a4, a5, a6);
}

void** fun_4033c4(void** ecx, void** a2, void** a3, void** a4) {
    void** ebx5;
    void** esi6;
    void** edi7;
    uint32_t eax8;
    void** v9;
    void** eax10;
    void** eax11;
    void** ecx12;
    void** v13;
    int32_t v14;
    uint32_t eax15;
    uint32_t eax16;
    void** ecx17;
    void** edi18;
    void** esi19;
    void** ebx20;

    ebx5 = a4;
    esi6 = a3;
    edi7 = a2;
    if (!(*reinterpret_cast<unsigned char*>(ebx5 + 18) & 8)) {
        if (!*reinterpret_cast<void***>(ebx5 + 12) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx5 + 12)) < reinterpret_cast<unsigned char>(esi6)) {
            if (!*reinterpret_cast<void***>(ebx5 + 12) || (!*reinterpret_cast<void***>(ebx5 + 8) || (eax8 = fun_4032c4(ecx, ebx5), ecx = ebx5, eax8 == 0))) {
                v9 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<signed char*>(ebx5 + 22)));
                eax10 = fun_403078(ecx, v9, edi7, esi6);
                if (eax10 == 0xffffffff || reinterpret_cast<unsigned char>(esi6) > reinterpret_cast<unsigned char>(eax10)) {
                    eax11 = reinterpret_cast<void**>(0);
                } else {
                    eax11 = esi6;
                }
            } else {
                eax11 = reinterpret_cast<void**>(0);
            }
        } else {
            ecx12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx5 + 8)) + reinterpret_cast<unsigned char>(esi6));
            if (reinterpret_cast<signed char>(ecx12) < reinterpret_cast<signed char>(0)) 
                goto addr_403443_9;
            if (*reinterpret_cast<void***>(ebx5 + 8)) 
                goto addr_403434_11; else 
                goto addr_40342a_12;
        }
    } else {
        v13 = esi6;
        if (!v13) {
            addr_403404_14:
            eax11 = esi6;
        } else {
            do {
                v14 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi7));
                eax15 = fun_4037d4(ecx, *reinterpret_cast<signed char*>(&v14), ebx5);
                if (!(eax15 + 1)) 
                    goto addr_4033f3_16;
                --v13;
                ++edi7;
            } while (v13);
            goto addr_403404_14;
        }
    }
    addr_403497_18:
    return eax11;
    addr_403434_11:
    eax16 = fun_4032c4(ecx12, ebx5);
    if (!eax16) {
        addr_403443_9:
        ecx17 = *reinterpret_cast<void***>(ebx5);
        fun_40213c(ecx17, ecx17, edi7, esi6, edi18, esi19, ebx20);
        *reinterpret_cast<void***>(ebx5 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx5 + 8)) + reinterpret_cast<unsigned char>(esi6));
        eax11 = esi6;
        *reinterpret_cast<void***>(ebx5) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx5)) + reinterpret_cast<unsigned char>(esi6));
        goto addr_403497_18;
    } else {
        eax11 = reinterpret_cast<void**>(0);
        goto addr_403497_18;
    }
    addr_40342a_12:
    *reinterpret_cast<void***>(ebx5 + 8) = reinterpret_cast<void**>(-1 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx5 + 12)));
    goto addr_403443_9;
    addr_4033f3_16:
    eax11 = reinterpret_cast<void**>(0);
    goto addr_403497_18;
}

void fun_40340b() {
    goto 0x403497;
}

struct s30 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

uint32_t fun_403564(struct s30* a1) {
    void** eax2;
    void** v3;
    void** esi4;
    struct s30* esi5;
    int32_t* edx6;
    void** ecx7;
    void** v8;
    void** esi9;
    void** v10;
    void** edx11;
    uint32_t eax12;

    eax2 = g40ab68;
    v3 = esi4;
    esi5 = a1;
    edx6 = reinterpret_cast<int32_t*>("2" + reinterpret_cast<unsigned char>(eax2) * 4);
    if (eax2) {
        do {
            if (*edx6) 
                break;
            --eax2;
            --edx6;
        } while (eax2);
    }
    if (esi5) {
        esi5->f0 = eax2;
        ecx7 = reinterpret_cast<void**>(0);
        v8 = reinterpret_cast<void**>(0);
        esi9 = reinterpret_cast<void**>(&esi5->f4);
        v10 = reinterpret_cast<void**>(0x40ab6c);
        if (reinterpret_cast<signed char>(eax2) > reinterpret_cast<signed char>(0)) {
            do {
                ecx7 = reinterpret_cast<void**>(1);
                edx11 = *reinterpret_cast<void***>(v10);
                if (*reinterpret_cast<unsigned char*>(&edx11 + 1) & 8) {
                    ecx7 = reinterpret_cast<void**>(33);
                }
                if (!(*reinterpret_cast<unsigned char*>(&edx11 + 1) & 0x80)) {
                    ecx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx7) | 0x80);
                }
                if (*reinterpret_cast<unsigned char*>(&edx11 + 1) & 32) {
                    ecx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx7) | 64);
                }
                *reinterpret_cast<void***>(esi9) = ecx7;
                ++esi9;
                ++v8;
                v10 = v10 + 4;
            } while (reinterpret_cast<signed char>(eax2) > reinterpret_cast<signed char>(v8));
        }
        fun_40213c(ecx7, esi9, 0x40c988, reinterpret_cast<unsigned char>(eax2) << 2, v3, v10, v8);
        eax12 = 0;
    } else {
        if (eax2) {
            eax12 = reinterpret_cast<uint32_t>(eax2 + reinterpret_cast<unsigned char>(eax2) * 4) + 4;
        } else {
            eax12 = 0;
        }
    }
    return eax12;
}

uint32_t fun_4037a0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** ebx7;
    void** eax8;
    uint32_t ebx9;

    eax8 = fun_409966(ebx7, __return_address(), a1, a2, a3, a4, a5, a6);
    ebx9 = reinterpret_cast<unsigned char>(eax8) & 0xffff;
    fun_40375c(ebx9 & 0xffff);
    return ebx9;
}

int32_t fun_405684(int32_t a1, int32_t a2) {
    int32_t eax3;

    if (!a2) {
        eax3 = a1 + 8;
    } else {
        eax3 = a1 + 12;
    }
    return eax3;
}

int32_t fun_4059b8(int32_t a1, int32_t a2) {
    int32_t eax3;

    if (!a2) {
        eax3 = a1 + 8;
    } else {
        eax3 = a1 + 12;
    }
    return eax3;
}

int32_t fun_406c84() {
    int32_t* v1;

    *v1 = 1;
    return 0;
}

void** g40cc88;

void fun_4072a8(void** ecx) {
    void** eax2;

    eax2 = g40cc88;
    if (eax2) {
        fun_4013f0(ecx, eax2);
        g40cc88 = reinterpret_cast<void**>(0);
    }
    return;
}

void** g40cc8c;

void fun_4074cc(void** ecx) {
    void** eax2;

    eax2 = g40cc8c;
    if (eax2) {
        fun_4013f0(ecx, eax2);
        g40cc8c = reinterpret_cast<void**>(0);
    }
    return;
}

void fun_407531() {
    goto 0x40754c;
}

void** g40bb20 = reinterpret_cast<void**>(0);

void fun_407598(void** ecx) {
    void** eax2;

    eax2 = g40bb20;
    fun_4013f0(ecx, eax2);
    return;
}

struct s31 {
    signed char[32] pad32;
    uint32_t f20;
};

int32_t fun_407768(int32_t* a1) {
    void* ebp2;
    int32_t edi3;
    int32_t eax4;
    int32_t ebx5;
    int32_t v6;
    int32_t eax7;
    int32_t eax8;
    int32_t esi9;
    int32_t edi10;
    void* ecx11;
    int32_t v12;
    struct s31* v13;
    int32_t v14;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edi3 = 0;
    if (*a1 > 0xc0000090) {
        switch (*a1 + 0x3fffff6f) {
            addr_4078b5_4:
        default:
            eax4 = 1;
            goto addr_407940_5;
        case 0:
            ebx5 = 2;
            v6 = 0x84;
            edi3 = 8;
            break;
        case 1:
            ebx5 = 2;
            v6 = 0x87;
            edi3 = 73;
            break;
        case 2:
            ebx5 = 2;
            v6 = 0x85;
            edi3 = 16;
            break;
        case 3:
            v6 = 0x7f;
            ebx5 = 2;
            break;
        case 5:
            v6 = 22;
            ebx5 = 1;
        }
    } else {
        if (*a1 == 0xc0000090) {
            ebx5 = 2;
            v6 = 0x81;
            edi3 = 1;
        } else {
            if (*a1 > 0xc0000005) {
                eax7 = *a1 + 0x3fffffe3;
                if (!eax7) {
                    v6 = 20;
                    ebx5 = 1;
                } else {
                    if (!(eax7 - 0x71)) {
                        ebx5 = 2;
                        v6 = 0x83;
                        edi3 = 4;
                    } else {
                        goto addr_4078b5_4;
                    }
                }
            } else {
                if (*a1 == 0xc0000005) {
                    v6 = 12;
                    ebx5 = 3;
                } else {
                    eax8 = *a1 + 0x7ffffffd;
                    if (!eax8) {
                        v6 = 23;
                        ebx5 = 1;
                    } else {
                        if (!(eax8 - 1)) {
                            v6 = 24;
                            ebx5 = 1;
                        } else {
                            goto addr_4078b5_4;
                        }
                    }
                }
            }
        }
    }
    esi9 = *reinterpret_cast<int32_t*>(ebx5 * 4 + 0x40bb98);
    if (esi9 != 1) {
        if (esi9) {
            *reinterpret_cast<int32_t*>(ebx5 * 4 + 0x40bb98) = 0;
            if (ebx5 == 1 || (ebx5 == 3 || ebx5 == 2)) {
                fun_404f84(edi10);
                ecx11 = g40b850;
                fun_404f98(ecx11, 0x1f3f);
                v12 = *reinterpret_cast<int32_t*>(ebx5 * 4 + 0x40bbc0);
                esi9(v12, v6, reinterpret_cast<int32_t>(ebp2) - 16);
                v13->f20 = v13->f20 & reinterpret_cast<uint32_t>(~edi3);
            } else {
                v14 = *reinterpret_cast<int32_t*>(ebx5 * 4 + 0x40bbc0);
                esi9(v14, 0, reinterpret_cast<int32_t>(ebp2) - 16);
            }
            eax4 = 0;
        } else {
            eax4 = 1;
        }
    } else {
        eax4 = 0;
    }
    addr_407940_5:
    return eax4;
}

void fun_408510(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t ebp7;

    fun_402ca4(ecx, __return_address());
    *reinterpret_cast<int16_t*>(ebp7 - 20) = 16;
    fun_4085b8(ecx, __return_address(), a2, a3, a4, a5, a6);
}

void fun_4089e5() {
    goto 0x408ad2;
}

void** fun_408ae8(void** a1, void** a2, void** a3) {
    void** ebp4;
    void** eax5;

    eax5 = fun_40897d(a1, a2, ebp4, __return_address(), a1, a2, a3);
    return eax5;
}

void __GetExceptDLLinfo() {
    goto fun_402d9c;
}

void fun_401125() {
    return;
}

int32_t fun_407d88() {
    return 0;
}

int32_t fun_401150(int32_t a1) {
    switch (a1) {
    default:
        fun_4038e4("Other!\n");
        break;
    case 2:
        fun_4038e4("Two!\n");
        break;
    case 3:
        fun_4038e4("Three!\n");
        break;
    case 4:
        fun_4038e4("Four!\n");
        break;
    case 5:
        fun_4038e4("Five!\n");
        break;
    case 6:
        fun_4038e4("Six!\n");
        break;
    case 7:
        fun_4038e4("Seven!\n");
    }
    return 0;
}

struct s32 {
    signed char f0;
    signed char f1;
};

signed char g40a6ce = 0;

uint16_t g40a6ca = 0x209;

signed char g40a6e6 = 1;

uint16_t g40a6e2 = 0x20a;

uint32_t fun_403908() {
    int32_t eax1;
    signed char* edx2;
    int32_t ecx3;
    void* ecx4;
    void** ecx5;
    void** eax6;
    struct s32* edx7;
    int1_t cf8;
    void* ecx9;
    int32_t eax10;
    int1_t zf11;
    void** edx12;
    int32_t ecx13;
    int1_t zf14;
    void** ecx15;
    uint32_t eax16;

    eax1 = 0;
    edx2 = reinterpret_cast<signed char*>(0x40a6cf);
    do {
        ecx3 = eax1;
        ++eax1;
        ecx4 = reinterpret_cast<void*>(ecx3 << 3);
        ecx5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx4) + reinterpret_cast<int32_t>(ecx4) * 2 + 0x40a6b8);
        *edx2 = *reinterpret_cast<signed char*>(&ecx5);
        edx2 = edx2 + 24;
    } while (eax1 < 3);
    eax6 = reinterpret_cast<void**>(3);
    edx7 = reinterpret_cast<struct s32*>(0x40a716);
    while (cf8 = reinterpret_cast<unsigned char>(eax6) < reinterpret_cast<unsigned char>(g40ab68), cf8) {
        edx7->f0 = -1;
        ecx9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax6) << 3);
        ++eax6;
        ecx5 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx9) + reinterpret_cast<uint32_t>(ecx9) * 2 + 0x40a6b8);
        edx7->f1 = *reinterpret_cast<signed char*>(&ecx5);
        edx7 = edx7 + 12;
    }
    eax10 = g40a6ce;
    if (!(*reinterpret_cast<unsigned char*>("`" + eax10 * 4) & 32)) {
        g40a6ca = reinterpret_cast<uint16_t>(g40a6ca & 0xfdff);
    }
    zf11 = (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g40a6ca) + 1) & 2) == 0;
    if (zf11) {
        edx12 = reinterpret_cast<void**>(0);
    } else {
        edx12 = reinterpret_cast<void**>(1);
    }
    fun_403244(ecx5, 0x40a6b8, 0, edx12, 0x200);
    ecx13 = g40a6e6;
    if (!(*reinterpret_cast<unsigned char*>("`" + ecx13 * 4) & 32)) {
        g40a6e2 = reinterpret_cast<uint16_t>(g40a6e2 & 0xfdff);
    }
    zf14 = (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g40a6e2) + 1) & 2) == 0;
    if (zf14) {
        ecx15 = reinterpret_cast<void**>(0);
    } else {
        ecx15 = reinterpret_cast<void**>(2);
    }
    eax16 = fun_403244(ecx15, 0x40a6d0, 0, ecx15, 0x200);
    return eax16;
}

int32_t g40c49c = 0;

void fun_401340(void** ecx) {
    int32_t eax2;
    int1_t zf3;

    eax2 = fun_4099c0();
    zf3 = eax2 == g40c49c;
    if (!zf3) {
        fun_406e08(ecx, "hrdir_b.c: LoadLibrary != mmdll borlndmm failed", "borlndmm", __return_address());
    }
    goto "borlndmm";
}

void fun_406e20(void** ecx) {
    signed char* v2;
    signed char* v3;
    signed char* v4;
    signed char* eax5;
    signed char* v6;
    signed char* v7;
    signed char* v8;
    signed char* v9;
    void** eax10;
    int32_t eax11;
    int32_t v12;

    eax5 = fun_409978(ecx, "kernel32.dll", v2, v3, v4);
    eax10 = fun_409984(eax5, "GetProcAddress", "kernel32.dll", v6, v7, v8, v9);
    eax11 = reinterpret_cast<int32_t>(eax10(eax5, "Borland32", eax5));
    if (!eax11) {
        fun_4099a8(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x94 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4, 0x94, "Borland32", eax5);
        if (0) {
            g40cc78 = 2;
        } else {
            if (0) {
                g40cc78 = 8;
            } else {
                if (0) {
                    g40cc78 = 4;
                } else {
                    g40cc78 = 2;
                }
            }
        }
    } else {
        g40cc78 = 1;
    }
    goto v12;
}

void fun_401478(int32_t a1) {
    fun_401418(1);
    image_base_(1);
    return;
}

void** fun_401e40(int32_t ecx) {
    int32_t v2;
    int32_t esi3;
    void** v4;
    void** edi5;
    void** v6;
    void** ebp7;
    void** esi8;
    void** eax9;
    void** v10;
    void** ebp11;
    void** ebx12;
    void** eax13;

    v2 = esi3;
    v4 = edi5;
    v6 = ebp7;
    esi8 = g40a234;
    if (esi8) {
        do {
            eax9 = *reinterpret_cast<void***>(esi8 + 0x8c);
            v10 = eax9;
            *reinterpret_cast<void***>(esi8 + 8) = *reinterpret_cast<void***>(esi8 + 8) - 1;
            ebp11 = *reinterpret_cast<void***>(esi8 + 8);
            ebx12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi8 + reinterpret_cast<unsigned char>(ebp11) * 4) + 12);
            if (reinterpret_cast<signed char>(ebp11) >= reinterpret_cast<signed char>(0)) {
                do {
                    eax13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*ebx12) - reinterpret_cast<unsigned char>(esi8));
                    *reinterpret_cast<void***>(esi8 + 4) = eax13;
                    *reinterpret_cast<void***>(esi8) = eax13;
                    fun_40130c(v10, v6, v4, v2);
                    eax9 = fun_401324();
                    --ebp11;
                    --ebx12;
                } while (reinterpret_cast<signed char>(ebp11) >= reinterpret_cast<signed char>(0));
            }
            esi8 = v10;
        } while (esi8);
    }
    return eax9;
}

void** fun_402080(void** ecx, void** a2, void** a3) {
    void** esi4;
    void** eax5;
    void*** v6;
    void** eax7;
    void** ecx8;
    void** eax9;

    esi4 = a3;
    if (esi4) {
        if (a2) {
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 0xfffffffc)) & 0xfffffffc) < 0x100000) {
                eax5 = fun_401ea0(ecx, a2, esi4);
                if (!eax5) {
                    v6 = reinterpret_cast<void***>(a2 + 0xfffffffc);
                    eax7 = fun_401c28(ecx, esi4);
                    if (eax7) {
                        ecx8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*v6) & 0xfffffffc);
                        if (reinterpret_cast<unsigned char>(esi4) >= reinterpret_cast<unsigned char>(ecx8)) {
                            esi4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*v6) & 0xfffffffc);
                        }
                        fun_402160(eax7, a2, esi4);
                        fun_401ab8(ecx8, a2);
                    }
                    eax9 = eax7;
                } else {
                    eax9 = a2;
                }
            } else {
                eax9 = fun_401fc8(a2, esi4);
            }
        } else {
            eax9 = fun_401c28(ecx, esi4);
        }
    } else {
        fun_401ab8(ecx, a2);
        eax9 = reinterpret_cast<void**>(0);
    }
    return eax9;
}

void fun_402025() {
    goto 0x402078;
}

void fun_40205d() {
    goto 0x402078;
}

uint32_t fun_402118(int32_t a1) {
    if (a1) {
        return *reinterpret_cast<uint32_t*>(a1 - 4) & 0xfffffffc;
    } else {
        return 0;
    }
}

void fun_40244d() {
    void** eax1;

    g0 = eax1;
    return;
}

struct s33 {
    int32_t* f0;
    signed char[8] pad12;
    struct s33* fc;
};

void fun_4025db() {
    void** esi1;
    void** ebx2;
    void** v3;
    int32_t esi4;
    struct s33* eax5;
    struct s33* ebx6;
    int32_t* eax7;
    void** v8;

    fun_402414(esi1, ebx2, v3);
    esi4 = 0;
    do {
        eax5 = *reinterpret_cast<struct s33**>(esi4 * 4 + 0x40c4a8);
        if (eax5 && eax5) {
            do {
                ebx6 = eax5->fc;
                if (eax5) {
                    eax7 = eax5->f0;
                    *eax7(eax5, 3);
                }
                eax5 = ebx6;
            } while (eax5);
        }
        ++esi4;
    } while (esi4 < 0x100);
    g0 = v8;
    return;
}

void fun_402c00() {
    void** edi1;
    void** esi2;
    void** ebx3;
    int1_t zf4;

    fun_402414(edi1, esi2, ebx3);
    zf4 = reinterpret_cast<int1_t>(fun_402c00 == g40a57c);
    if (zf4) 
        goto 0x402c39;
    g40a57c(edi1, esi2, ebx3);
    goto 0x402c39;
}

void** fun_402c50(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    int1_t zf7;
    void** eax8;

    eax6 = fun_401140(ecx, __return_address(), a2, a3, a4, a5);
    *reinterpret_cast<void***>(eax6 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax6 + 4)) & 0xfffffffd);
    zf7 = reinterpret_cast<int1_t>(fun_402c50 == g40a580);
    if (!zf7) {
        g40a580();
    }
    eax8 = fun_402ca4(ecx, __return_address());
    return eax8;
}

void fun_406ed0() {
    return;
}

int32_t fun_402dc4() {
    return 1;
}

int32_t g40c8bc;

int32_t fun_402eec(int32_t a1) {
    int32_t eax2;

    eax2 = g40c8bc;
    g40c8bc = a1;
    return eax2;
}

void fun_402f8d() {
    goto fun_4099d2;
}

void fun_402fe8(int32_t a1) {
    int32_t ebp2;

    fun_409960();
    goto ebp2;
}

int32_t fun_403194(signed char* a1) {
    if (a1) {
        *a1 = 0;
    }
    return 0;
}

void** fun_403228(void** a1, void** a2, void** a3) {
    void** eax4;

    eax4 = fun_403078(a1, a1, a2, a3);
    return eax4;
}

void** fun_4034a0(int32_t a1, int32_t a2) {
    void** eax3;
    int32_t* edx4;
    int1_t less5;
    int1_t zf6;

    eax3 = reinterpret_cast<void**>(0);
    edx4 = reinterpret_cast<int32_t*>(0x40ab6c);
    while ((less5 = reinterpret_cast<signed char>(eax3) < reinterpret_cast<signed char>(g40ab68), less5) && *edx4) {
        ++eax3;
        ++edx4;
    }
    zf6 = eax3 == g40ab68;
    if (!zf6) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax3) * 4 + 0x40ab6c) = a2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax3) * 4 + 0x40c988) = a1;
        return eax3;
    } else {
        return 0xffffffff;
    }
}

void** fun_4034e0(void** a1, void** a2, int32_t a3) {
    void** eax4;
    void** ecx5;
    int32_t* edx6;
    int1_t less7;
    void** edx8;

    eax4 = a2;
    ecx5 = a1;
    if (reinterpret_cast<int1_t>(eax4 == 0xffffffff)) {
        eax4 = reinterpret_cast<void**>(0);
        edx6 = reinterpret_cast<int32_t*>(0x40ab6c);
        while ((less7 = reinterpret_cast<signed char>(eax4) < reinterpret_cast<signed char>(g40ab68), less7) && *edx6) {
            ++eax4;
            ++edx6;
        }
    }
    edx8 = g40ab68;
    if (reinterpret_cast<unsigned char>(edx8) <= reinterpret_cast<unsigned char>(ecx5) || reinterpret_cast<unsigned char>(edx8) <= reinterpret_cast<unsigned char>(eax4)) {
        return 0xffffffff;
    } else {
        if (!*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx5) * 4 + 0x40ab6c) || *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax4) * 4 + 0x40ab6c)) {
            return 0xffffffff;
        } else {
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax4) * 4 + 0x40ab6c) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx5) * 4 + 0x40ab6c);
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax4) * 4 + 0x40c988) = a3;
            return eax4;
        }
    }
}

void fun_403548(void** a1) {
    int1_t cf2;

    cf2 = reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(g40ab68);
    if (cf2) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a1) * 4 + 0x40ab6c) = 0;
    }
    return;
}

/* (image base) */
int32_t image_base_ = 0x403194;

struct s34 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** g40c988;

void** g40c98c;

void** g40c990;

void fun_403600() {
    int32_t v1;
    int32_t esi2;
    void** eax3;
    void** v4;
    void** eax5;
    int1_t cf6;
    void** ecx7;
    void** v8;
    void** eax9;
    uint16_t v10;
    struct s34* v11;
    void** esi12;
    void** ebx13;
    uint32_t* edi14;
    uint32_t eax15;
    uint32_t eax16;
    void** ebx17;
    int32_t* eax18;
    int1_t cf19;
    void** v20;
    void** v21;
    void** eax22;
    void** v23;
    void** eax24;
    void** eax25;
    void** ebx26;
    uint32_t* esi27;
    int32_t eax28;
    int1_t zf29;
    int1_t zf30;

    v1 = esi2;
    eax3 = g40ab68;
    v4 = eax3;
    eax5 = fun_4099e4();
    cf6 = reinterpret_cast<unsigned char>(eax5) < reinterpret_cast<unsigned char>(g40ab68);
    if (cf6) {
        g40ab68 = eax5;
    }
    image_base_ = reinterpret_cast<int32_t>(fun_403564);
    ecx7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 76 - 4 - 4 + 4 + 8);
    v8 = ecx7;
    fun_409990(v8);
    eax9 = reinterpret_cast<void**>(static_cast<uint32_t>(v10));
    if (eax9 && (v8 = v11->f0, esi12 = reinterpret_cast<void**>(&v11->f4), ecx7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v8 + reinterpret_cast<unsigned char>(v8) * 4) + 4), ecx7 == eax9)) {
        v4 = reinterpret_cast<void**>(1);
        ebx13 = reinterpret_cast<void**>(0);
        edi14 = reinterpret_cast<uint32_t*>(0x40ab6c);
        if (reinterpret_cast<signed char>(0) < reinterpret_cast<signed char>(v8)) {
            do {
                ++esi12;
                eax15 = 0;
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi12)) & 32) {
                    eax15 = 0x800;
                }
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi12)) & 64) {
                    eax15 = eax15 | 0x2000;
                }
                if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi12)) & 0x80)) {
                    eax16 = eax15 | 0x8000;
                } else {
                    eax16 = eax15 | 0x4000;
                }
                ++ebx13;
                *edi14 = *edi14 & 3 | eax16;
                ++edi14;
            } while (reinterpret_cast<signed char>(ebx13) < reinterpret_cast<signed char>(v8));
        }
        ebx17 = v8;
        eax18 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx17) * 4 + 0x40ab6c);
        while (cf19 = reinterpret_cast<unsigned char>(ebx17) < reinterpret_cast<unsigned char>(g40ab68), cf19) {
            ++ebx17;
            *eax18 = 0;
            ++eax18;
        }
        ecx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v8) << 2);
        fun_402160(0x40c988, esi12, ecx7);
    }
    if (!v4) {
        eax22 = fun_409996(0xf6, v8, v4, 0, v20, v21);
        g40c988 = eax22;
        eax24 = fun_409996(0xf5, 0xf6, v8, v4, 0, v23);
        g40c98c = eax24;
        eax25 = fun_409996(0xf4, 0xf5, 0xf6, v8, v4, 0);
        g40c990 = eax25;
        ebx26 = reinterpret_cast<void**>(0);
        esi27 = reinterpret_cast<uint32_t*>(0x40ab6c);
        do {
            eax28 = fun_402fb8(ecx7, ebx26, 0xf4, 0xf5, 0xf6, v8);
            ecx7 = ebx26;
            if (eax28 || (zf29 = g40bbf4 == 0, !zf29)) {
                *esi27 = *esi27 | 0x2000;
                zf30 = g40bbf4 == 0;
                if (!zf30) {
                    *esi27 = *esi27 | 0x10000;
                }
            } else {
                *esi27 = *esi27 & 0xffffdfff;
            }
            ++ebx26;
            ++esi27;
        } while (reinterpret_cast<signed char>(ebx26) <= reinterpret_cast<signed char>(2));
    }
    goto v1;
}

void** g40a6bc = reinterpret_cast<void**>(0);

int32_t g40a6c4 = 0;

void** g40a6c0 = reinterpret_cast<void**>(0);

void** g40a6d4 = reinterpret_cast<void**>(0);

int32_t g40a6dc = 0;

int32_t g40a6d8 = 0;

int32_t fun_4039c4(void** ecx) {
    int1_t zf2;
    void** eax3;
    int1_t zf4;
    void** eax5;

    zf2 = (*reinterpret_cast<unsigned char*>(&g40a6ca) & 4) == 0;
    if (!zf2) {
        fun_4032c4(ecx, 0x40a6b8);
        eax3 = g40a6bc;
        fun_4013f0(0x40a6b8, eax3);
        g40a6c4 = 0;
        ecx = reinterpret_cast<void**>(0);
        g40a6c0 = reinterpret_cast<void**>(0);
    }
    zf4 = (*reinterpret_cast<unsigned char*>(&g40a6e2) & 4) == 0;
    if (!zf4) {
        fun_4032c4(ecx, 0x40a6d0);
        eax5 = g40a6d4;
        fun_4013f0(0x40a6d0, eax5);
        g40a6dc = 0;
        g40a6d8 = 0;
    }
    return 0x40a6d0;
}

uint32_t fun_40440c() {
    void** esi1;
    void** ebx2;
    int1_t cf3;
    void** ecx4;
    uint32_t eax5;

    esi1 = reinterpret_cast<void**>(0);
    ebx2 = reinterpret_cast<void**>(0x40a6b8);
    while (cf3 = reinterpret_cast<unsigned char>(esi1) < reinterpret_cast<unsigned char>(g40ab68), cf3) {
        if (*reinterpret_cast<unsigned char*>(ebx2 + 18) & 3) {
            eax5 = fun_4032c4(ecx4, ebx2);
            ecx4 = ebx2;
        }
        ++esi1;
        ebx2 = ebx2 + 24;
    }
    return eax5;
}

uint32_t fun_404488(void* a1) {
    uint32_t eax2;

    eax2 = fun_404690(a1, 0x104);
    return eax2;
}

int32_t fun_40472c(void** a1, void** a2, void** a3, void** a4) {
    int32_t ecx5;
    struct s20* edx6;
    void** v7;
    void** ebp8;
    void** eax9;
    struct s20* edx10;
    void** v11;
    void** eax12;

    if (!a1 || (!*reinterpret_cast<void***>(a1) || !a2)) {
        return 0;
    } else {
        ecx5 = 0;
        *reinterpret_cast<void***>(&ecx5) = *reinterpret_cast<void***>(a1);
        if (!(*reinterpret_cast<unsigned char*>(ecx5 + 0x40ca55) & 4)) {
            edx6 = image_base_;
            v7 = edx6->f0;
            eax9 = fun_4099c6(v7, 9, a1, 1, 0, 0, ebp8, __return_address(), a1, a2, a3, a4);
            if (eax9) {
                goto 9;
            } else {
                goto 9;
            }
        } else {
            if (reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(2) || (edx10 = image_base_, v11 = edx10->f0, eax12 = fun_4099c6(v11, 9, a1, 2, 0, 0, ebp8, __return_address(), a1, a2, a3, a4), !eax12)) {
                return -1;
            } else {
                goto 9;
            }
        }
    }
}

uint32_t fun_4047a8(void** a1, void** a2, int32_t a3) {
    uint32_t eax4;
    struct s20* edx5;
    int32_t edx6;
    void** edx7;
    struct s20* eax8;
    void** v9;
    void** esi10;
    void** ebx11;
    void** ebp12;
    void** eax13;
    void** ecx14;
    struct s20* eax15;
    void** v16;
    void** eax17;
    int32_t ecx18;

    if (!a2 || !a3) {
        eax4 = 0;
    } else {
        if (*reinterpret_cast<void***>(a2)) {
            edx5 = image_base_;
            if (!edx5->f8) {
                edx6 = 0;
                *reinterpret_cast<void***>(&edx6) = *reinterpret_cast<void***>(a2);
                if (!(*reinterpret_cast<unsigned char*>(edx6 + 0x40ca55) & 4)) {
                    if (!a1) {
                        edx7 = reinterpret_cast<void**>(0);
                    } else {
                        edx7 = reinterpret_cast<void**>(1);
                    }
                    eax8 = image_base_;
                    v9 = eax8->f0;
                    eax13 = fun_4099c6(v9, 9, a2, 1, a1, edx7, esi10, ebx11, ebp12, __return_address(), a1, a2);
                    if (eax13) {
                        eax4 = 1;
                    } else {
                        eax4 = 0xffffffff;
                    }
                } else {
                    if (a3 >= 2) {
                        if (!a1) {
                            ecx14 = reinterpret_cast<void**>(0);
                        } else {
                            ecx14 = reinterpret_cast<void**>(1);
                        }
                        eax15 = image_base_;
                        v16 = eax15->f0;
                        eax17 = fun_4099c6(v16, 9, a2, 2, a1, ecx14, esi10, ebx11, ebp12, __return_address(), a1, a2);
                        if (eax17) 
                            goto addr_40483f_17;
                    }
                    if (a3 < 2 || !*reinterpret_cast<void***>(a2 + 1)) {
                        eax4 = 0xffffffff;
                    } else {
                        addr_40483f_17:
                        eax4 = 2;
                    }
                }
            } else {
                if (a1) {
                    ecx18 = 0;
                    *reinterpret_cast<void***>(&ecx18) = *reinterpret_cast<void***>(a2);
                    *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(&ecx18);
                }
                eax4 = 1;
            }
        } else {
            if (a1) {
                *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
            }
            eax4 = 0;
        }
    }
    return eax4;
}

void fun_4048f0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** v16;
    void** esi17;
    void** edi18;
    void** ebx19;
    struct s20* edx20;
    struct s20* ecx21;
    void** v22;
    void** edi23;
    void** esi24;
    void** ebx25;
    void** ebp26;
    void** eax27;
    struct s20* edx28;
    struct s20* ecx29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
    void** eax35;
    void** edx36;
    void** eax37;
    void** ecx38;
    int32_t ecx39;
    struct s20* eax40;
    void** v41;
    void** eax42;
    int32_t ecx43;

    v16 = reinterpret_cast<void**>(__return_address());
    esi17 = a3;
    edi18 = a2;
    ebx19 = reinterpret_cast<void**>(0);
    if (!edi18 || a4) {
        if (!edi18) {
            edx20 = image_base_;
            if (!edx20->f8) {
                ecx21 = image_base_;
                v22 = ecx21->f0;
                eax27 = fun_4099c6(v22, 9, esi17, 0xff, 0, 0, edi23, esi24, ebx25, ecx, ebp26, v16);
                if (eax27) {
                }
            } else {
                fun_402250(ecx, esi17, edi23, esi24, ebx25, ecx, ebp26, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
            }
        } else {
            edx28 = image_base_;
            if (!edx28->f8) {
                ecx29 = image_base_;
                v30 = a4;
                v31 = edi18;
                v32 = esi17;
                v33 = ecx29->f0;
                eax34 = fun_4099c6(v33, 9, v32, 0xff, v31, v30, edi23, esi24, ebx25, ecx, ebp26, v16);
                if (!eax34) {
                    eax35 = fun_409966(v33, 9, v32, 0xff, v31, v30, edi23, esi24);
                    if (eax35 == 0x7a) {
                        edx36 = a4;
                        eax37 = esi17;
                        while ((ecx38 = edx36, --edx36, !!ecx38) && *reinterpret_cast<void***>(eax37)) {
                            ecx39 = 0;
                            *reinterpret_cast<void***>(&ecx39) = *reinterpret_cast<void***>(eax37);
                            if (*reinterpret_cast<unsigned char*>(ecx39 + 0x40ca55) & 4) {
                                ++eax37;
                            }
                            ++eax37;
                        }
                        eax40 = image_base_;
                        v41 = eax40->f0;
                        eax42 = fun_4099c6(v41, 1, esi17, reinterpret_cast<unsigned char>(eax37) - reinterpret_cast<unsigned char>(esi17), edi18, a4, v33, 9, v32, 0xff, v31, v30);
                        if (eax42) 
                            goto addr_4049d3_17; else 
                            goto addr_4049ce_18;
                    }
                }
            } else {
                if (reinterpret_cast<unsigned char>(0) >= reinterpret_cast<unsigned char>(a4)) {
                    addr_404947_22:
                } else {
                    do {
                        ecx43 = 0;
                        *reinterpret_cast<signed char*>(&ecx43) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi17) + reinterpret_cast<unsigned char>(ebx19));
                        *reinterpret_cast<void***>(edi18) = *reinterpret_cast<void***>(&ecx43);
                        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi17) + reinterpret_cast<unsigned char>(ebx19))) 
                            goto addr_404937_24;
                        ++ebx19;
                        edi18 = edi18 + 2;
                    } while (reinterpret_cast<unsigned char>(ebx19) < reinterpret_cast<unsigned char>(a4));
                    goto addr_404947_22;
                }
            }
        }
    }
    addr_404a13_27:
    goto v16;
    addr_4049d3_17:
    goto addr_404a13_27;
    addr_4049ce_18:
    goto addr_404a13_27;
    addr_404937_24:
    goto addr_404a13_27;
}

uint32_t fun_404a1c(int16_t* a1, uint32_t a2) {
    uint32_t ecx3;
    int16_t* ebx4;
    uint32_t edx5;
    int16_t* eax6;
    uint32_t eax7;

    ecx3 = a2;
    ebx4 = a1;
    edx5 = ecx3 + 1;
    eax6 = ebx4;
    while ((--edx5, !!edx5) && *eax6) {
        ++eax6;
    }
    if (!edx5 || *eax6) {
        return ecx3;
    } else {
        eax7 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax6) - reinterpret_cast<int32_t>(ebx4) >> 1);
        if (__undefined()) {
            eax7 = eax7 + __intrinsic();
        }
        return eax7 + 1;
    }
}

void fun_4049d7() {
    goto 0x404a13;
}

void** fun_404a58(void** a1, void** a2, void** a3) {
    void*** ebp4;
    void** ebx5;
    struct s20* edx6;
    struct s20* ecx7;
    void** v8;
    void** esi9;
    void** ebx10;
    void** v11;
    void** v12;
    void** ebp13;
    void** eax14;
    void** eax15;
    struct s20* edx16;
    void** v17;
    void** v18;
    struct s20* ecx19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void** ebx26;
    struct s20* edx27;
    void** v28;
    void** eax29;
    void** v30;
    void** esi31;
    signed char* edx32;
    void** edx33;

    ebp4 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebx5 = reinterpret_cast<void**>(0);
    if (!a1 || a3) {
        if (!a1) {
            edx6 = image_base_;
            if (!edx6->f8) {
                ecx7 = image_base_;
                v8 = ecx7->f0;
                eax14 = fun_409a14(v8, 0x220, a2, 0xff, 0, 0, 0, ebp4 + 0xfffffff4, esi9, ebx10, 0, v11, v12, ebp13, __return_address(), a1);
                if (!eax14 || !1) {
                    eax15 = reinterpret_cast<void**>(0xffffffff);
                } else {
                    eax15 = eax14 - 1;
                }
            } else {
                eax15 = fun_4023bc(a2);
            }
        } else {
            edx16 = image_base_;
            if (!edx16->f8) {
                v17 = reinterpret_cast<void**>(ebp4 + 0xfffffff4);
                v18 = a3;
                ecx19 = image_base_;
                v20 = a1;
                v21 = a2;
                v22 = ecx19->f0;
                eax25 = fun_409a14(v22, 0x220, v21, 0xff, v20, v18, 0, v17, esi9, ebx10, 0, v23, v24, ebp13, __return_address(), a1);
                ebx26 = eax25;
                if (!ebx26) {
                    if (eax25 = fun_409966(v22, 0x220, v21, 0xff, v20, v18, 0, v17), eax25 != 0x7a) {
                        eax15 = reinterpret_cast<void**>(0xffffffff);
                    } else {
                        if (reinterpret_cast<unsigned char>(ebx26) >= reinterpret_cast<unsigned char>(a3)) {
                            addr_404ba3_13:
                            eax15 = ebx26;
                        } else {
                            do {
                                edx27 = image_base_;
                                v28 = edx27->f0;
                                eax29 = fun_409a14(v28, 0, a2, 1, ebp4 + 0xfffffffa, 2, 0, ebp4 + 0xfffffff4, v22, 0x220, v21, 0xff, v20, v18, 0, v17);
                                v30 = eax29;
                                if (!v30) 
                                    goto addr_404b5c_15;
                                if (!1) 
                                    goto addr_404b5c_15;
                                if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(ebx26)) > reinterpret_cast<unsigned char>(a3)) 
                                    goto addr_404b6e_18;
                                esi31 = reinterpret_cast<void**>(0);
                                edx32 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(ebx26));
                                if (reinterpret_cast<signed char>(0) < reinterpret_cast<signed char>(v30)) {
                                    do {
                                        *edx32 = *reinterpret_cast<signed char*>(&v30 + 3);
                                        if (!*reinterpret_cast<signed char*>(&v30 + 3)) 
                                            goto addr_404b8d_21;
                                        ++esi31;
                                        ++edx32;
                                        ++ebx26;
                                    } while (reinterpret_cast<signed char>(esi31) < reinterpret_cast<signed char>(v30));
                                }
                                a2 = a2 + 2;
                            } while (reinterpret_cast<unsigned char>(ebx26) < reinterpret_cast<unsigned char>(a3));
                            goto addr_404ba3_13;
                        }
                    }
                } else {
                    eax15 = ebx26 - 1;
                }
            } else {
                if (reinterpret_cast<unsigned char>(0) >= reinterpret_cast<unsigned char>(a3)) {
                    addr_404acc_26:
                    eax15 = ebx5;
                } else {
                    do {
                        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) > reinterpret_cast<unsigned char>(0xff)) 
                            goto addr_404a9f_28;
                        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a1) + reinterpret_cast<unsigned char>(ebx5)) = *reinterpret_cast<void***>(a2);
                        edx33 = a2;
                        a2 = a2 + 2;
                        if (!*reinterpret_cast<void***>(edx33)) 
                            goto addr_404abf_30;
                        ++ebx5;
                    } while (reinterpret_cast<unsigned char>(ebx5) < reinterpret_cast<unsigned char>(a3));
                    goto addr_404acc_26;
                }
            }
        }
    } else {
        eax15 = reinterpret_cast<void**>(0);
    }
    addr_404bf6_33:
    return eax15;
    addr_404b5c_15:
    eax15 = reinterpret_cast<void**>(0xffffffff);
    goto addr_404bf6_33;
    addr_404b6e_18:
    eax15 = ebx26;
    goto addr_404bf6_33;
    addr_404b8d_21:
    eax15 = ebx26;
    goto addr_404bf6_33;
    addr_404a9f_28:
    eax15 = reinterpret_cast<void**>(0xffffffff);
    goto addr_404bf6_33;
    addr_404abf_30:
    eax15 = ebx5;
    goto addr_404bf6_33;
}

int32_t fun_404bfc(int32_t a1, int32_t a2) {
    int32_t eax3;

    return eax3 * a1;
}

uint32_t fun_404ce0(uint32_t a1, uint32_t a2) {
    uint32_t edi3;
    uint32_t ebx4;
    uint32_t ecx5;
    int32_t edx6;
    uint32_t ecx7;
    uint1_t cf8;
    uint32_t ebp9;
    int32_t ecx10;
    uint32_t v11;
    uint32_t edi12;
    uint32_t esi13;
    uint1_t cf14;
    uint32_t eax15;
    int32_t eax16;

    edi3 = 0;
    ebx4 = a1;
    ecx5 = a2;
    if (ecx5 || edx6 && ebx4) {
        if (__intrinsic()) {
            edi3 = 1;
        }
        if (__intrinsic()) {
            ecx7 = -ecx5;
            cf8 = reinterpret_cast<uint1_t>(!!ebx4);
            ebx4 = -ebx4;
            ecx5 = ecx7 - reinterpret_cast<uint1_t>(ecx7 < static_cast<uint32_t>(cf8));
        }
        ebp9 = ecx5;
        ecx10 = 64;
        v11 = edi3;
        edi12 = 0;
        esi13 = 0;
        do {
            __asm__("rcl edx, 1");
            __asm__("rcl esi, 1");
            __asm__("rcl edi, 1");
            if (edi12 >= ebp9 && (edi12 > ebp9 || esi13 >= ebx4)) {
                cf14 = reinterpret_cast<uint1_t>(esi13 < ebx4);
                esi13 = esi13 - ebx4;
                edi12 = edi12 - (ebp9 + reinterpret_cast<uint1_t>(edi12 < ebp9 + cf14));
            }
            --ecx10;
        } while (ecx10);
        eax15 = esi13;
        if (v11 & 1) {
            eax15 = -eax15;
        }
    } else {
        eax15 = eax16 % ebx4;
    }
    return eax15;
}

int32_t fun_404da8(unsigned char cl) {
    int32_t eax2;

    if (reinterpret_cast<signed char>(cl) < reinterpret_cast<signed char>(32)) {
        __asm__("shld edx, eax, cl");
        return eax2 << cl;
    } else {
        if (reinterpret_cast<signed char>(cl) < reinterpret_cast<signed char>(64)) {
            return 0;
        } else {
            return 0;
        }
    }
}

void fun_404f68() {
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
    int32_t eax28;
    int32_t eax29;
    signed char al30;
    signed char* eax31;
    signed char* eax32;
    signed char al33;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
    *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
    *reinterpret_cast<signed char*>(eax28 + 0x3fff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax29 + 0x3fff) + al30);
    *eax31 = reinterpret_cast<signed char>(*eax32 + al33);
}

struct s35 {
    int32_t f0;
    signed char[24] pad28;
    int32_t f1c;
    int32_t f20;
    int16_t f24;
};

int32_t fun_405318(struct s35* a1) {
    if (a1->f0 != 4) {
        if (a1->f0 != 5) {
            return 0;
        } else {
            return 1;
        }
    } else {
        a1->f1c = 0;
        a1->f20 = 0;
        a1->f24 = 0;
        return 1;
    }
}

struct s36 {
    signed char[48] pad48;
    void** f30;
};

void** fun_4053fc(struct s22* a1, void** a2, void** a3, unsigned char a4, signed char a5, int32_t a6) {
    void* ebp7;
    void*** eax8;
    void** v9;
    void** v10;
    unsigned char cl11;
    void** edi12;
    void** edx13;
    void** ecx14;
    void** eax15;
    void** esi16;
    void** ebx17;
    int32_t v18;
    int32_t v19;
    signed char* eax20;
    signed char* edi21;
    uint32_t ecx22;
    void** esi23;
    uint32_t ecx24;
    uint32_t edx25;
    void** edi26;
    void*** esi27;
    uint32_t ecx28;
    void** eax29;
    uint32_t ecx30;
    int32_t v31;
    signed char* eax32;
    signed char* edi33;
    uint32_t ecx34;
    void** esi35;
    uint32_t ecx36;
    uint32_t edx37;
    void** edi38;
    void*** esi39;
    uint32_t ecx40;
    uint32_t ecx41;
    void** v42;
    void** ebx43;
    void** dl44;
    void** v45;
    void** v46;
    void** eax47;
    void** ebx48;
    void* edi49;
    void** v50;
    void** edi51;
    void** ecx52;
    void** ebx53;
    void** esi54;
    void** ebx55;
    void* edi56;
    void** ebx57;
    int32_t edx58;
    void** eax59;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax8 = fun_404434(14);
    v9 = *eax8;
    if (reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(40)) {
        a2 = reinterpret_cast<void**>(40);
    }
    v10 = a2;
    cl11 = reinterpret_cast<unsigned char>(a4 & 0xdf);
    if (cl11 != 70) {
        edi12 = v10;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi12) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi12 == 0))) {
            if (cl11 == 69) {
                ++edi12;
                ++a2;
            }
        } else {
            edi12 = reinterpret_cast<void**>(1);
        }
    } else {
        edi12 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v10));
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi12) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi12 == 0))) {
            edi12 = reinterpret_cast<void**>(0);
            a2 = reinterpret_cast<void**>(0);
        }
    }
    edx13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffc8);
    ecx14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffffffc);
    eax15 = fun_4063ac(a1, edi12, ecx14, edx13, a6);
    esi16 = eax15;
    ebx17 = a3;
    if (!reinterpret_cast<int1_t>(esi16 == 0x7fff)) {
        if (!reinterpret_cast<int1_t>(esi16 == 0x7ffe)) {
            if (v18) {
                *reinterpret_cast<void***>(ebx17) = reinterpret_cast<void**>(45);
                ++ebx17;
            }
            if (cl11 != 70) 
                goto addr_40550b_15;
        } else {
            if (!v19) {
                eax20 = "+NAN";
            } else {
                eax20 = "-NAN";
            }
            edi21 = eax20;
            ecx22 = 0xffffffff;
            esi23 = ebx17;
            do {
                if (!ecx22) 
                    break;
                --ecx22;
                ++edi21;
                ++esi23;
            } while (*edi21);
            ecx24 = ~ecx22;
            edx25 = ecx24;
            edi26 = esi23;
            esi27 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi21) - ecx24);
            ecx28 = ecx24 >> 2;
            eax29 = edi26;
            while (ecx28) {
                --ecx28;
                *reinterpret_cast<void***>(edi26) = *esi27;
                edi26 = edi26 + 4;
                esi27 = esi27 + 4;
            }
            ecx30 = edx25 & 3;
            while (ecx30) {
                --ecx30;
                *reinterpret_cast<void***>(edi26) = *esi27;
                ++edi26;
                ++esi27;
            }
            goto addr_40567a_29;
        }
    } else {
        if (!v31) {
            eax32 = "+INF";
        } else {
            eax32 = "-INF";
        }
        edi33 = eax32;
        ecx34 = 0xffffffff;
        esi35 = ebx17;
        do {
            if (!ecx34) 
                break;
            --ecx34;
            ++edi33;
            ++esi35;
        } while (*edi33);
        ecx36 = ~ecx34;
        edx37 = ecx36;
        edi38 = esi35;
        esi39 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi33) - ecx36);
        ecx40 = ecx36 >> 2;
        eax29 = edi38;
        while (ecx40) {
            --ecx40;
            *reinterpret_cast<void***>(edi38) = *esi39;
            edi38 = edi38 + 4;
            esi39 = esi39 + 4;
        }
        ecx41 = edx37 & 3;
        while (ecx41) {
            --ecx41;
            *reinterpret_cast<void***>(edi38) = *esi39;
            ++edi38;
            ++esi39;
        }
        goto addr_40567a_29;
    }
    addr_405536_43:
    if (reinterpret_cast<signed char>(esi16) > reinterpret_cast<signed char>(40)) {
        addr_4055c6_44:
        *reinterpret_cast<void***>(ebx17) = v42;
        ebx43 = ebx17 + 1;
        dl44 = v45;
        if (!dl44) {
            if (a5) {
                *reinterpret_cast<void***>(ebx43) = v9;
                ++ebx43;
            }
        } else {
            *reinterpret_cast<void***>(ebx43) = v9;
            ++ebx43;
            if (dl44) {
                do {
                    *reinterpret_cast<void***>(ebx43) = dl44;
                    ++ebx43;
                    dl44 = v46;
                } while (dl44);
            }
            if (!a5) {
                *reinterpret_cast<unsigned char*>(&ecx14) = a4;
                eax47 = fun_4053b8(ecx14, a3, ebx43);
                ebx43 = eax47;
            }
        }
    } else {
        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi16) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi16 == 0)) && (*reinterpret_cast<void***>(ebx17) = reinterpret_cast<void**>(48), ebx48 = ebx17 + 1, *reinterpret_cast<void***>(ebx48) = v9, ebx17 = ebx48 + 1, !!esi16)) {
            do {
                *reinterpret_cast<void***>(ebx17) = reinterpret_cast<void**>(48);
                ++ebx17;
                ++esi16;
            } while (esi16);
        }
        edi49 = reinterpret_cast<void*>(0);
        eax29 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffffc8);
        while (v50) {
            *reinterpret_cast<void***>(ebx17) = v50;
            ++ebx17;
            --esi16;
            if (!esi16) {
                *reinterpret_cast<void***>(ebx17) = v9;
                ++ebx17;
                edi49 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi49) + 1);
            }
            ++eax29;
        }
        edi51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edi49) + reinterpret_cast<unsigned char>(v10));
        if (reinterpret_cast<signed char>(edi51) >= reinterpret_cast<signed char>(a2)) {
            if (esi16 - 1 && !a5) {
                *reinterpret_cast<unsigned char*>(&edx13) = a4;
                eax29 = fun_4053b8(edx13, a3, ebx17);
                ebx17 = eax29;
            }
        } else {
            ecx52 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(edi51));
            eax29 = fun_4021ac(ecx52, ebx17, 48, ecx52);
            ebx17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx17) + reinterpret_cast<unsigned char>(ecx52));
            if (reinterpret_cast<unsigned char>(esi16) + reinterpret_cast<unsigned char>(ecx52) - 1) {
            }
        }
        if (ebx17 == a3) {
            *reinterpret_cast<void***>(ebx17) = reinterpret_cast<void**>(48);
            ++ebx17;
        }
        *reinterpret_cast<void***>(ebx17) = reinterpret_cast<void**>(0);
        goto addr_40567a_29;
    }
    *reinterpret_cast<void***>(ebx43) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4 & 32) | 69);
    ebx53 = ebx43 + 1;
    esi54 = esi16 - 1;
    if (reinterpret_cast<signed char>(esi54) >= reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<void***>(ebx53) = reinterpret_cast<void**>(43);
        ebx55 = ebx53 + 1;
    } else {
        esi54 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(esi54));
        *reinterpret_cast<void***>(ebx53) = reinterpret_cast<void**>(45);
        ebx55 = ebx53 + 1;
    }
    if (reinterpret_cast<signed char>(esi54) < reinterpret_cast<signed char>(0x3e8)) {
        if (reinterpret_cast<signed char>(esi54) < reinterpret_cast<signed char>(100)) {
            edi56 = reinterpret_cast<void*>(2);
        } else {
            edi56 = reinterpret_cast<void*>(3);
        }
    } else {
        edi56 = reinterpret_cast<void*>(4);
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx55) + reinterpret_cast<uint32_t>(edi56)) = 0;
    eax29 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx55) + reinterpret_cast<uint32_t>(edi56));
    ebx57 = eax29;
    if (edi56) {
        do {
            __asm__("cdq ");
            edx58 = reinterpret_cast<signed char>(esi54) % 10;
            --ebx57;
            *reinterpret_cast<void***>(ebx57) = reinterpret_cast<void**>(&(*reinterpret_cast<struct s36**>(&edx58))->f30);
            edi56 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi56) - 1);
            __asm__("cdq ");
            eax29 = reinterpret_cast<void**>(reinterpret_cast<signed char>(esi54) / 10);
            esi54 = eax29;
        } while (edi56);
    }
    addr_40567a_29:
    return eax29;
    addr_40550b_15:
    if (cl11 != 71) 
        goto addr_4055c6_44;
    if (reinterpret_cast<signed char>(esi16) < reinterpret_cast<signed char>(0xfffffffd)) 
        goto addr_4055c6_44;
    if (a2) {
        eax59 = a2;
    } else {
        eax59 = reinterpret_cast<void**>(1);
    }
    if (reinterpret_cast<signed char>(esi16) > reinterpret_cast<signed char>(eax59)) 
        goto addr_4055c6_44; else 
        goto addr_405536_43;
}

void fun_40569c() {
    image_base_ = reinterpret_cast<int32_t>(fun_4053fc);
    image_base_ = reinterpret_cast<int32_t>(fun_405684);
    return;
}

struct s37 {
    signed char[48] pad48;
    void** f30;
};

void** fun_405700(struct s23* a1, void** a2, void** a3, uint16_t a4, int16_t a5, int32_t a6) {
    void* ebp7;
    void*** eax8;
    void** v9;
    void** v10;
    uint16_t cx11;
    void** edi12;
    void** edx13;
    void** ecx14;
    void** eax15;
    void** esi16;
    void** ebx17;
    int32_t v18;
    int32_t v19;
    void** edx20;
    void** eax21;
    int32_t v22;
    void** eax23;
    void** v24;
    void** ebx25;
    void** dx26;
    void** v27;
    void** v28;
    void** eax29;
    void** ebx30;
    void* edi31;
    void** v32;
    void** edi33;
    void** ecx34;
    void** ebx35;
    void** esi36;
    void** ebx37;
    int32_t edi38;
    void** ebx39;
    int32_t edx40;
    void** eax41;

    ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax8 = fun_404434(14);
    v9 = *eax8;
    if (reinterpret_cast<signed char>(a2) > reinterpret_cast<signed char>(40)) {
        a2 = reinterpret_cast<void**>(40);
    }
    v10 = a2;
    cx11 = reinterpret_cast<uint16_t>(a4 & 0xdf);
    if (cx11 != 70) {
        edi12 = v10;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi12) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi12 == 0))) {
            if (cx11 == 69) {
                ++edi12;
                ++a2;
            }
        } else {
            edi12 = reinterpret_cast<void**>(1);
        }
    } else {
        edi12 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v10));
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi12) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi12 == 0))) {
            edi12 = reinterpret_cast<void**>(0);
            a2 = reinterpret_cast<void**>(0);
        }
    }
    edx13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffff9c);
    ecx14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xfffffffc);
    eax15 = fun_406680(a1, edi12, ecx14, edx13, a6);
    esi16 = eax15;
    ebx17 = a3;
    if (!reinterpret_cast<int1_t>(esi16 == 0x7fff)) {
        if (!reinterpret_cast<int1_t>(esi16 == 0x7ffe)) {
            if (v18) {
                *reinterpret_cast<void***>(ebx17) = reinterpret_cast<void**>(45);
                ebx17 = ebx17 + 2;
            }
            if (cx11 != 70) 
                goto addr_4057ee_15;
        } else {
            if (!v19) {
                edx20 = reinterpret_cast<void**>("+");
            } else {
                edx20 = reinterpret_cast<void**>("-");
            }
            eax21 = fun_4023d4(ebx17, edx20);
            goto addr_4059b0_20;
        }
    } else {
        if (!v22) {
            eax23 = reinterpret_cast<void**>("+");
        } else {
            eax23 = reinterpret_cast<void**>("-");
        }
        eax21 = fun_4023d4(ebx17, eax23);
        goto addr_4059b0_20;
    }
    addr_40581a_25:
    if (reinterpret_cast<signed char>(esi16) > reinterpret_cast<signed char>(40)) {
        addr_4058cb_26:
        *reinterpret_cast<void***>(ebx17) = v24;
        ebx25 = ebx17 + 2;
        dx26 = v27;
        if (!dx26) {
            if (a5) {
                *reinterpret_cast<void***>(ebx25) = v9;
                ebx25 = ebx25 + 2;
            }
        } else {
            *reinterpret_cast<void***>(ebx25) = v9;
            ebx25 = ebx25 + 2;
            if (dx26) {
                do {
                    *reinterpret_cast<void***>(ebx25) = dx26;
                    ebx25 = ebx25 + 2;
                    dx26 = v28;
                } while (dx26);
            }
            if (!a5) {
                *reinterpret_cast<uint16_t*>(&ecx14) = a4;
                eax29 = fun_4056b4(ecx14, a3, ebx25);
                ebx25 = eax29;
            }
        }
    } else {
        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi16) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi16 == 0)) && (*reinterpret_cast<void***>(ebx17) = reinterpret_cast<void**>(48), ebx30 = ebx17 + 2, *reinterpret_cast<void***>(ebx30) = v9, ebx17 = ebx30 + 2, !!esi16)) {
            do {
                *reinterpret_cast<void***>(ebx17) = reinterpret_cast<void**>(48);
                ebx17 = ebx17 + 2;
                ++esi16;
            } while (esi16);
        }
        edi31 = reinterpret_cast<void*>(0);
        eax21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp7) + 0xffffff9c);
        while (v32) {
            *reinterpret_cast<void***>(ebx17) = v32;
            ebx17 = ebx17 + 2;
            --esi16;
            if (!esi16) {
                *reinterpret_cast<void***>(ebx17) = v9;
                ebx17 = ebx17 + 2;
                edi31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi31) + 1);
            }
            eax21 = eax21 + 2;
        }
        edi33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edi31) + reinterpret_cast<unsigned char>(v10));
        if (reinterpret_cast<signed char>(edi33) >= reinterpret_cast<signed char>(a2)) {
            if (esi16 - 1 && !a5) {
                *reinterpret_cast<uint16_t*>(&edx13) = a4;
                eax21 = fun_4056b4(edx13, a3, ebx17);
                ebx17 = eax21;
            }
        } else {
            ecx34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(edi33));
            eax21 = fun_4021ac(ecx34, ebx17, 48, ecx34);
            ebx17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx17) + (reinterpret_cast<unsigned char>(ecx34) + reinterpret_cast<unsigned char>(ecx34)));
            if (reinterpret_cast<unsigned char>(esi16) + reinterpret_cast<unsigned char>(ecx34) - 1) {
            }
        }
        if (ebx17 == a3) {
            *reinterpret_cast<void***>(ebx17) = reinterpret_cast<void**>(48);
            ebx17 = ebx17 + 2;
        }
        *reinterpret_cast<void***>(ebx17) = reinterpret_cast<void**>(0);
        goto addr_4059b0_20;
    }
    *reinterpret_cast<void***>(ebx25) = reinterpret_cast<void**>(reinterpret_cast<uint16_t>(a4 & 32) | 69);
    ebx35 = ebx25 + 2;
    esi36 = esi16 - 1;
    if (reinterpret_cast<signed char>(esi36) >= reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<void***>(ebx35) = reinterpret_cast<void**>(43);
        ebx37 = ebx35 + 2;
    } else {
        esi36 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(esi36));
        *reinterpret_cast<void***>(ebx35) = reinterpret_cast<void**>(45);
        ebx37 = ebx35 + 2;
    }
    if (reinterpret_cast<signed char>(esi36) < reinterpret_cast<signed char>(0x3e8)) {
        if (reinterpret_cast<signed char>(esi36) < reinterpret_cast<signed char>(100)) {
            edi38 = 2;
        } else {
            edi38 = 3;
        }
    } else {
        edi38 = 4;
    }
    *reinterpret_cast<void***>(ebx37 + edi38 * 2) = reinterpret_cast<void**>(0);
    eax21 = ebx37 + edi38 * 2;
    ebx39 = eax21;
    if (edi38) {
        do {
            __asm__("cdq ");
            edx40 = reinterpret_cast<signed char>(esi36) % 10;
            ebx39 = ebx39 + 0xfffffffe;
            *reinterpret_cast<void***>(ebx39) = reinterpret_cast<void**>(&(*reinterpret_cast<struct s37**>(&edx40))->f30);
            --edi38;
            __asm__("cdq ");
            eax21 = reinterpret_cast<void**>(reinterpret_cast<signed char>(esi36) / 10);
            esi36 = eax21;
        } while (edi38);
    }
    addr_4059b0_20:
    return eax21;
    addr_4057ee_15:
    if (cx11 != 71) 
        goto addr_4058cb_26;
    if (reinterpret_cast<signed char>(esi16) < reinterpret_cast<signed char>(0xfffffffd)) 
        goto addr_4058cb_26;
    if (a2) {
        eax41 = a2;
    } else {
        eax41 = reinterpret_cast<void**>(1);
    }
    if (reinterpret_cast<signed char>(esi16) > reinterpret_cast<signed char>(eax41)) 
        goto addr_4058cb_26; else 
        goto addr_40581a_25;
}

/* (image base) */
int32_t image_base_ = 0x404ff8;

/* (image base) */
int32_t image_base_ = 0x404ff8;

void fun_4059d0() {
    image_base_ = reinterpret_cast<int32_t>(fun_405700);
    image_base_ = reinterpret_cast<int32_t>(fun_4059b8);
    return;
}

struct s38 {
    int32_t f0;
    int32_t f4;
    int16_t f8;
};

struct s39 {
    int32_t f0;
    int32_t f4;
    int16_t f8;
};

void* g40b85c = reinterpret_cast<void*>(0x7ff00000);

int32_t g40b858 = 0;

void* fun_405e34(struct s38* a1, struct s39* a2, void* a3) {
    void* eax4;
    int32_t ecx5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    void* v10;
    void* v11;
    int32_t v12;
    int32_t edx13;
    int32_t v14;
    int32_t v15;
    int32_t v16;

    eax4 = a3;
    if (!(*reinterpret_cast<unsigned char*>(&eax4) & 4)) {
        if (!(*reinterpret_cast<unsigned char*>(&eax4) & 8)) {
            __asm__("fld tword [eax]");
            __asm__("fstp qword [ebp-0x8]");
            __asm__("wait ");
            *reinterpret_cast<int16_t*>(&ecx5) = a1->f8;
            v6 = ecx5;
            v7 = a1->f4;
            v8 = a1->f0;
            eax4 = fun_405144(0, v8, v7, *reinterpret_cast<uint16_t*>(&v6), v9, v10);
            __asm__("fstp dword [esi]");
            __asm__("wait ");
        } else {
            a2->f0 = a1->f0;
            a2->f4 = a1->f4;
            a2->f8 = a1->f8;
        }
    } else {
        v11 = g40b85c;
        v12 = g40b858;
        *reinterpret_cast<int16_t*>(&edx13) = a1->f8;
        v14 = edx13;
        v15 = a1->f4;
        v16 = a1->f0;
        eax4 = fun_405144(1, v16, v15, *reinterpret_cast<uint16_t*>(&v14), v12, v11);
        __asm__("fstp qword [esi]");
        __asm__("wait ");
    }
    return eax4;
}

/* (image base) */
int32_t image_base_ = 0x404fec;

struct s40 {
    void* f0;
    void* f4;
    int16_t f8;
};

void fun_4059e8(struct s40* a1, int32_t a2, int32_t a3, void* a4, int32_t a5, int32_t* a6, int32_t* a7);

/* (image base) */
int32_t image_base_ = 0x404fec;

void fun_405eb4() {
    image_base_ = reinterpret_cast<int32_t>(fun_4059e8);
    image_base_ = reinterpret_cast<int32_t>(fun_405e34);
    return;
}

struct s41 {
    int32_t f0;
    int32_t f4;
    int16_t f8;
};

struct s42 {
    int32_t f0;
    int32_t f4;
    int16_t f8;
};

void* fun_406314(struct s41* a1, struct s42* a2, void* a3) {
    void* eax4;
    int32_t ecx5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    void* v10;
    void* v11;
    int32_t v12;
    int32_t edx13;
    int32_t v14;
    int32_t v15;
    int32_t v16;

    eax4 = a3;
    if (!(*reinterpret_cast<unsigned char*>(&eax4) & 4)) {
        if (!(*reinterpret_cast<unsigned char*>(&eax4) & 8)) {
            __asm__("fld tword [eax]");
            __asm__("fstp qword [ebp-0x8]");
            __asm__("wait ");
            *reinterpret_cast<int16_t*>(&ecx5) = a1->f8;
            v6 = ecx5;
            v7 = a1->f4;
            v8 = a1->f0;
            eax4 = fun_405144(0, v8, v7, *reinterpret_cast<uint16_t*>(&v6), v9, v10);
            __asm__("fstp dword [esi]");
            __asm__("wait ");
        } else {
            a2->f0 = a1->f0;
            a2->f4 = a1->f4;
            a2->f8 = a1->f8;
        }
    } else {
        v11 = g40b85c;
        v12 = g40b858;
        *reinterpret_cast<int16_t*>(&edx13) = a1->f8;
        v14 = edx13;
        v15 = a1->f4;
        v16 = a1->f0;
        eax4 = fun_405144(1, v16, v15, *reinterpret_cast<uint16_t*>(&v14), v12, v11);
        __asm__("fstp qword [esi]");
        __asm__("wait ");
    }
    return eax4;
}

/* (image base) */
int32_t image_base_ = 0x405004;

struct s43 {
    void* f0;
    void* f4;
    int16_t f8;
};

void fun_405ecc(struct s43* a1, int32_t a2, int32_t a3, void* a4, int32_t a5, int32_t* a6, int32_t* a7);

/* (image base) */
int32_t image_base_ = 0x405004;

void fun_406394() {
    image_base_ = reinterpret_cast<int32_t>(fun_405ecc);
    image_base_ = reinterpret_cast<int32_t>(fun_406314);
    return;
}

void** fun_406a98() {
    void** eax1;

    eax1 = g40cb58;
    return eax1;
}

void** fun_406df8(void** ecx, void** a2) {
    void** ebp3;
    void** eax4;

    eax4 = fun_406cdc(ecx, a2, ebp3, __return_address());
    return eax4;
}

void** g40cc84;

void fun_40706c(void** ecx) {
    int1_t zf2;
    void** eax3;
    void** edx4;

    image_base_();
    zf2 = g40cc7c == 0;
    if (!zf2) {
        eax3 = g40cc84;
        fun_4013f0(ecx, eax3);
        edx4 = g40cc7c;
        fun_4013f0(eax3, edx4);
        g40cc7c = reinterpret_cast<void**>(0);
    }
    return;
}

int32_t fun_407150(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void** v14;
    void** ebp15;
    void*** ebp16;
    void** v17;
    void** ebx18;
    void** v19;
    void** esi20;
    void** v21;
    void** edi22;
    void*** ebx23;
    void*** esi24;
    void** v25;
    void** ecx26;
    void** v27;
    void** v28;
    void** eax29;
    void** v30;
    void** eax31;
    void** v32;
    int32_t edi33;
    void** v34;

    v13 = reinterpret_cast<void**>(__return_address());
    v14 = ebp15;
    ebp16 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v17 = ebx18;
    v19 = esi20;
    v21 = edi22;
    ebx23 = ebp16 - 4;
    esi24 = ebp16 - 8;
    v25 = a2;
    a3(a1, 0);
    while (*reinterpret_cast<void***>(v25) == 32 || *reinterpret_cast<void***>(v25) == 9) {
        ++v25;
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v25) == 34)) {
        while ((ecx26 = v25, *reinterpret_cast<void***>(ecx26) != 32) && (*reinterpret_cast<void***>(ecx26) != 9 && *reinterpret_cast<void***>(ecx26))) {
            ++v25;
        }
    } else {
        ++v25;
        while ((ecx26 = v25, *reinterpret_cast<void***>(ecx26) != 34) && *reinterpret_cast<void***>(ecx26)) {
            ++v25;
        }
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v25) == 34)) 
            goto addr_4071a0_11;
    }
    addr_4071b6_12:
    eax29 = fun_402250(ecx26, v25, v21, v19, v17, v27, v28, v25, v14, v13, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    v30 = eax29 + 1;
    eax31 = fun_4013e0(v25, v30, v21, v19);
    v32 = eax31;
    g40cc88 = eax31;
    if (!eax31) {
        fun_406e08(v30, "No space for copy of command line", v21, v19);
    }
    while (*reinterpret_cast<void***>(v25)) {
        edi33 = 0;
        while (*reinterpret_cast<void***>(v25) == 32 || *reinterpret_cast<void***>(v25) == 9) {
            ++v25;
        }
        if (!*reinterpret_cast<void***>(v25)) 
            break;
        v34 = v32;
        while (*reinterpret_cast<void***>(v25) != 32 && (*reinterpret_cast<void***>(v25) != 9 && *reinterpret_cast<void***>(v25))) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v25) == 34)) {
                if (*reinterpret_cast<void***>(v25) == 42 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v25) == 63)) {
                    edi33 = 1;
                }
                fun_4072c4(esi24, ebx23);
            } else {
                ++v25;
                while (*reinterpret_cast<void***>(v25) != 34 && *reinterpret_cast<void***>(v25)) {
                    fun_4072c4(esi24, ebx23);
                }
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v25) == 34)) 
                    continue;
                ++v25;
            }
        }
        *reinterpret_cast<void***>(v32) = reinterpret_cast<void**>(0);
        ++v32;
        if (!edi33) {
            a3(v34, 0);
        } else {
            image_base_(v34, a3);
        }
        if (!*reinterpret_cast<void***>(v25)) 
            break;
        ++v25;
    }
    return 1;
    addr_4071a0_11:
    ++v25;
    goto addr_4071b6_12;
}

int32_t fun_407338(int32_t a1, void** a2, int32_t a3) {
    void* ebp4;
    void** v5;
    void** esi6;
    void** v7;
    void** edi8;
    void*** ebx9;
    void*** esi10;
    void** v11;
    void** eax12;
    void** eax13;
    void** v14;
    int32_t edi15;
    void** v16;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v5 = esi6;
    v7 = edi8;
    ebx9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp4) - 4);
    esi10 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp4) - 8);
    v11 = a2;
    a3(a1, 0);
    while (*reinterpret_cast<void***>(v11) == 32 || *reinterpret_cast<void***>(v11) == 9) {
        v11 = v11 + 2;
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v11) == 34)) {
        while (*reinterpret_cast<void***>(v11) != 32 && (*reinterpret_cast<void***>(v11) != 9 && *reinterpret_cast<void***>(v11))) {
            v11 = v11 + 2;
        }
    } else {
        v11 = v11 + 2;
        while (*reinterpret_cast<void***>(v11) != 34 && *reinterpret_cast<void***>(v11)) {
            v11 = v11 + 2;
        }
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v11) == 34)) 
            goto addr_407396_11;
    }
    addr_4073b4_12:
    eax12 = fun_4023bc(v11);
    eax13 = fun_4013e0(v11, reinterpret_cast<unsigned char>(eax12) + reinterpret_cast<unsigned char>(eax12) + 2, v7, v5);
    v14 = eax13;
    g40cc8c = eax13;
    if (!eax13) {
        fun_406e08(reinterpret_cast<unsigned char>(eax12) + reinterpret_cast<unsigned char>(eax12) + 2, "No space for copy of command line", v7, v5);
    }
    while (*reinterpret_cast<void***>(v11)) {
        edi15 = 0;
        while (*reinterpret_cast<void***>(v11) == 32 || *reinterpret_cast<void***>(v11) == 9) {
            v11 = v11 + 2;
        }
        if (!*reinterpret_cast<void***>(v11)) 
            break;
        v16 = v14;
        while (*reinterpret_cast<void***>(v11) != 32 && (*reinterpret_cast<void***>(v11) != 9 && *reinterpret_cast<void***>(v11))) {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v11) == 34)) {
                if (*reinterpret_cast<void***>(v11) == 42 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v11) == 63)) {
                    edi15 = 1;
                }
                fun_4074e8(esi10, ebx9);
            } else {
                v11 = v11 + 2;
                while (*reinterpret_cast<void***>(v11) != 34 && *reinterpret_cast<void***>(v11)) {
                    fun_4074e8(esi10, ebx9);
                }
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v11) == 34)) 
                    continue;
                v11 = v11 + 2;
            }
        }
        *reinterpret_cast<void***>(v14) = reinterpret_cast<void**>(0);
        v14 = v14 + 2;
        if (!edi15) {
            a3(v16, 0);
        } else {
            image_base_(v16, a3);
        }
        if (!*reinterpret_cast<void***>(v11)) 
            break;
        v11 = v11 + 2;
    }
    return 1;
    addr_407396_11:
    v11 = v11 + 2;
    goto addr_4073b4_12;
}

void fun_407560(void** ecx) {
    void** ebx2;
    void** eax3;
    void** ecx4;
    void** eax5;

    eax3 = fun_4013e0(ecx, 0x100, ebx2, __return_address());
    ecx4 = reinterpret_cast<void**>(0x100);
    g40bb20 = eax3;
    if (!eax3) {
        fun_406e08(0x100, "Out of memory in _setargv0", ebx2, __return_address());
        ecx4 = reinterpret_cast<void**>("Out of memory in _setargv0");
    }
    eax5 = g40bb20;
    fun_409972(ecx4, 0, eax5, 0xff, ebx2, __return_address());
    goto eax5;
}

struct s44 {
    signed char[2] pad2;
    int16_t f2;
};

void fun_407533() {
    struct s44** eax1;
    int16_t** edx2;
    int16_t** eax3;
    int32_t* eax4;
    int32_t* eax5;
    int32_t* edx6;
    int32_t* edx7;

    if (!(*eax1)->f2) 
        goto 0x40754c;
    **edx2 = **eax3;
    *eax4 = *eax5 + 2;
    *edx6 = *edx7 + 2;
}

void fun_4075a8(void** ecx) {
    void** eax2;
    void** eax3;

    eax2 = g40cc94;
    if (eax2) {
        fun_4013f0(ecx, eax2);
        ecx = eax2;
    }
    eax3 = g40cc90;
    if (eax3) {
        fun_4013f0(ecx, eax3);
    }
    g40cc94 = reinterpret_cast<void**>(0);
    g40cc90 = reinterpret_cast<void**>(0);
    return;
}

void** fun_407728(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    int32_t eax15;
    void** eax16;
    void** eax17;

    eax15 = fun_4075dc(ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    if (eax15) {
        eax16 = g40cc90;
        g40cca8 = eax16;
        return eax16;
    } else {
        eax17 = fun_406e08(ecx, "Could not allocate memory for environment block", __return_address(), a2);
        return eax17;
    }
}

int32_t fun_407948(int32_t a1) {
    void** eax2;

    if (a1) {
        eax2 = reinterpret_cast<void**>(21);
    } else {
        eax2 = reinterpret_cast<void**>(2);
    }
    fun_4079d0(eax2);
    return 1;
}

signed char g40bb94 = 0;

int32_t g40c8b8;

int32_t fun_407970(void** a1, int32_t a2) {
    int1_t zf3;
    uint32_t eax4;
    int32_t eax5;

    zf3 = g40bb94 == 0;
    if (zf3) {
        g40c8b8 = reinterpret_cast<int32_t>(fun_407768);
        fun_4099d8(fun_407948, 1);
        g40bb94 = 1;
    }
    eax4 = fun_407748(a1);
    if (eax4 + 1) {
        eax5 = *reinterpret_cast<int32_t*>(eax4 * 4 + 0x40bb98);
        *reinterpret_cast<int32_t*>(eax4 * 4 + 0x40bb98) = a2;
        return eax5;
    } else {
        g40b9fc = 19;
        return -1;
    }
}

void fun_407dbd() {
    return;
}

void fun_408388(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t ebp7;

    fun_402ca4(ecx, __return_address());
    *reinterpret_cast<int16_t*>(ebp7 - 20) = 16;
    fun_4085b8(ecx, __return_address(), a2, a3, a4, a5, a6);
}

struct s45 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_4086a2(int32_t a1, int32_t a2) {
    struct s45* ebp3;

    goto ebp3->f4;
}

void fun_408afb(void** a1, void** a2) {
    void** ebx3;
    void** ebp4;

    fun_40897d(a1, 0, ebx3, ebp4, __return_address(), a1, a2);
    g0 = *reinterpret_cast<void***>(a1);
    return;
}

struct s47 {
    int16_t f0;
    void** f2;
};

struct s46 {
    signed char[4] pad4;
    struct s47* f4;
    signed char[8] pad16;
    uint16_t f10;
};

uint32_t fun_4098da(struct s46* a1) {
    struct s26* eax2;
    int32_t eax3;

    if (!reinterpret_cast<int1_t>(a1 == -1)) {
        if (a1->f4->f0 != 0x25ff) {
            eax2 = reinterpret_cast<struct s26*>(reinterpret_cast<int32_t>(a1->f4) - 8);
        } else {
            eax2 = reinterpret_cast<struct s26*>(reinterpret_cast<int32_t>(*a1->f4->f2) - 8);
        }
        eax3 = fun_40231c(eax2, "**BCCxh1", 8);
        if (!eax3) {
            return static_cast<uint32_t>(a1->f10);
        } else {
            return 0xffffffff;
        }
    } else {
        return 0xffffffff;
    }
}

signed char g40a101 = 0;

int32_t fun_40105e() {
    int32_t eax1;

    eax1 = 0;
    *reinterpret_cast<signed char*>(&eax1) = g40a101;
    return eax1;
}

void fun_401126() {
    int1_t cf1;
    uint32_t v2;

    cf1 = g40a10f < 0;
    if (!cf1) {
        fun_4010f3();
        v2 = g40a10f;
        fun_407d44(v2);
    }
    return;
}

void fun_407d8c(void** ecx, signed char* a2, signed char* a3, signed char* a4) {
    signed char* eax5;
    void** eax6;
    int1_t zf7;

    eax5 = fun_409978(ecx, 0, "___CPPdebugHook", __return_address(), a2);
    eax6 = fun_409984(eax5, 0, "___CPPdebugHook", __return_address(), a2, a3, a4);
    g40cce4 = eax6;
    zf7 = g40cce4 == 0;
    if (zf7) {
        g40cce4 = reinterpret_cast<void**>(0x40a11c);
    }
    goto eax5;
}

void** fun_406f58() {
    void** eax1;

    eax1 = fun_406ed4(0, 1, 0);
    return eax1;
}

void fun_401490(int32_t a1, int32_t a2) {
    fun_401418(1);
    image_base_(1, a1, a2);
    return;
}

void fun_401e07() {
    goto 0x401e22;
}

signed char g57530040;

struct s48 {
    signed char[20] pad20;
    int32_t f14;
};

struct s49 {
    signed char[16] pad16;
    void** f10;
};

struct s50 {
    signed char[12] pad12;
    void** fc;
};

struct s51 {
    signed char[8] pad8;
    void** f8;
};

void fun_402453(int32_t a1) {
    uint32_t ecx2;
    signed char ch3;
    signed char* edx4;
    int32_t ebx5;
    int32_t ebx6;
    signed char al7;
    int32_t v8;
    struct s48* ebp9;
    void** v10;
    struct s49* ebp11;
    void** v12;
    struct s50* ebp13;
    void** v14;
    struct s51* ebp15;
    int32_t eax16;
    int32_t v17;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<signed char>(ch3 - *edx4);
    ebx5 = ebx6 + 1 + 1;
    if (ebx5 < 0) 
        goto 0x4024c2;
    *reinterpret_cast<uint32_t*>(ebx5 + 0x5835ffc4) = *reinterpret_cast<uint32_t*>(ebx5 + 0x5835ffc4) ^ ecx2;
    g57530040 = al7;
    v8 = ebp9->f14;
    v10 = ebp11->f10;
    v12 = ebp13->fc;
    v14 = ebp15->f8;
    fun_408b5c(v14, v12, v10, v8, eax16);
    goto v17;
}

struct s52 {
    int32_t f0;
    signed char[20] pad24;
    int32_t f18;
    int32_t f1c;
};

int32_t fun_4052ec(struct s52* a1) {
    if (a1->f0 != 4) {
        if (a1->f0 != 5) {
            return 0;
        } else {
            return 1;
        }
    } else {
        a1->f18 = 0;
        a1->f1c = 0;
        return 1;
    }
}

int32_t g40a69c = 0;

int32_t fun_402dd0(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** edi6;
    int1_t zf7;
    void** esi8;
    int1_t zf9;
    int32_t eax10;
    int1_t zf11;
    int32_t eax12;
    int1_t zf13;
    void** edx14;
    void** ebx15;
    void** v16;
    void** v17;
    void** ebp18;
    int32_t eax19;

    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a2) == 0xeedfae6)) {
        if (*reinterpret_cast<void***>(a2) == 0xeefface || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a2) == 0xeedface)) {
            fun_402f9a(edi6);
            fun_402ca4(ecx, edi6);
        }
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a2) == 0xc00000fd) && (zf7 = g40a69c == 0, !zf7)) {
            fun_406e08(ecx, "Stack Overflow!", edi6, esi8);
            ecx = reinterpret_cast<void**>("Stack Overflow!");
        }
        zf9 = g40c8bc == 0;
        if (zf9 || (eax10 = reinterpret_cast<int32_t>(g40c8bc(ecx, a2, a3, a4, a5)), !!eax10)) {
            zf11 = g40c8b8 == 0;
            if (zf11 || (eax12 = reinterpret_cast<int32_t>(g40c8b8(ecx, a2, a3, a4, a5)), !!eax12)) {
                zf13 = g40cce4 == 0;
                if (!zf13 && (((edx14 = g40cce4, *reinterpret_cast<void***>(edx14) == 1) || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx14) == 2)) && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) < reinterpret_cast<unsigned char>(0xeedface) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) > reinterpret_cast<unsigned char>(0xeefface)))) {
                    fun_408021(ecx, 2, 3, a3, a2, a4, edi6, esi8, ebx15, v16, v17, ebp18, __return_address(), a2, a3, a4, a5);
                }
                eax19 = fun_409a02(ecx, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8);
            } else {
                eax19 = 0;
            }
        } else {
            eax19 = 0;
        }
    } else {
        eax19 = 0;
    }
    return eax19;
}

void fun_402f00() {
    g40c8bc = reinterpret_cast<int32_t>(fun_402dc4);
    return;
}

void fun_402f94(int32_t ecx) {
    int32_t eax2;

    goto eax2;
}

void fun_404fd4() {
    goto image_base_;
}

uint32_t fun_4044a0(uint32_t a1) {
    uint32_t eax2;

    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<uint1_t>(a1 < 0x80);
    return eax2 & 1;
}

uint32_t fun_404c1f(uint32_t a1, uint32_t a2) {
    uint32_t edi3;
    uint32_t ebx4;
    uint32_t ecx5;
    int32_t edx6;
    uint32_t eax7;
    int32_t eax8;
    uint32_t ecx9;
    uint1_t cf10;
    uint32_t ebp11;
    int32_t ecx12;
    uint32_t v13;
    uint32_t edi14;
    uint32_t esi15;
    uint1_t cf16;
    int32_t eax17;

    edi3 = 0;
    ebx4 = a1;
    ecx5 = a2;
    if (ecx5 || edx6 && ebx4) {
        if (__intrinsic()) {
            eax7 = reinterpret_cast<uint32_t>(-eax8);
            edi3 = 1;
        }
        if (__intrinsic()) {
            ecx9 = -ecx5;
            cf10 = reinterpret_cast<uint1_t>(!!ebx4);
            ebx4 = -ebx4;
            ecx5 = ecx9 - reinterpret_cast<uint1_t>(ecx9 < static_cast<uint32_t>(cf10));
            edi3 = edi3 ^ 1;
        }
        ebp11 = ecx5;
        ecx12 = 64;
        v13 = edi3;
        edi14 = 0;
        esi15 = 0;
        do {
            eax7 = eax7 << 1;
            __asm__("rcl edx, 1");
            __asm__("rcl esi, 1");
            __asm__("rcl edi, 1");
            if (edi14 >= ebp11 && (edi14 > ebp11 || esi15 >= ebx4)) {
                cf16 = reinterpret_cast<uint1_t>(esi15 < ebx4);
                esi15 = esi15 - ebx4;
                edi14 = edi14 - (ebp11 + reinterpret_cast<uint1_t>(edi14 < ebp11 + cf16));
                ++eax7;
            }
            --ecx12;
        } while (ecx12);
        if (v13 & 1) {
            eax7 = -eax7;
        }
    } else {
        eax7 = eax17 / ebx4;
    }
    return eax7;
}

int32_t fun_404dc4(signed char cl) {
    int32_t eax2;
    int32_t edx3;
    int32_t edx4;

    if (cl < 32) {
        __asm__("shrd eax, edx, cl");
        return eax2;
    } else {
        if (cl < 64) {
            __asm__("cdq ");
            return edx3 >> cl;
        } else {
            return edx4 >> 31;
        }
    }
}

uint32_t fun_404de0(signed char cl) {
    uint32_t eax2;
    uint32_t edx3;

    if (cl < 32) {
        __asm__("shrd eax, edx, cl");
        return eax2;
    } else {
        if (cl < 64) {
            return edx3 >> cl;
        } else {
            return 0;
        }
    }
}

void* g40b91c = reinterpret_cast<void*>(0);

void* g40b920 = reinterpret_cast<void*>(0x80000000);

int16_t g40b924 = 0x7fff;

void* g40b926 = reinterpret_cast<void*>(0);

void* g40b92a = reinterpret_cast<void*>(0x80000000);

int16_t g40b92e = -1;

void* g40b930 = reinterpret_cast<void*>(1);

void* g40b934 = reinterpret_cast<void*>(0xc0000000);

int16_t g40b938 = 0x7fff;

void* g40b93a = reinterpret_cast<void*>(1);

void* g40b93e = reinterpret_cast<void*>(0xc0000000);

int16_t g40b942 = -1;

void fun_4059e8(struct s40* a1, int32_t a2, int32_t a3, void* a4, int32_t a5, int32_t* a6, int32_t* a7) {
    void* ebp8;
    void* v9;
    void* v10;
    signed char v11;
    signed char v12;
    signed char v13;
    signed char v14;
    signed char v15;
    int32_t v16;
    void* esi17;
    int32_t v18;
    void* v19;
    void* v20;
    int16_t v21;
    void*** eax22;
    void* ecx23;
    void** v24;
    void* eax25;
    void* ebx26;
    uint32_t eax27;
    void* ebx28;
    uint32_t eax29;
    void* eax30;
    void* eax31;
    void* edx32;
    void* edi33;
    int32_t v34;
    void* eax35;
    void* edx36;
    void* ebx37;
    void* edx38;
    void** v39;
    void** edi40;
    void** eax41;
    void* eax42;
    void* eax43;
    void* eax44;
    void* eax45;
    int16_t ax46;
    void* edx47;
    void* edx48;
    int16_t dx49;
    void* eax50;
    void* eax51;
    void* eax52;
    void* eax53;
    int16_t ax54;
    void* edx55;
    void* edx56;
    int16_t dx57;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v9 = reinterpret_cast<void*>(0x8000);
    v10 = reinterpret_cast<void*>(19);
    v11 = 0;
    v12 = 1;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    esi17 = reinterpret_cast<void*>(0xfffffffe);
    v18 = 1;
    v19 = reinterpret_cast<void*>(0);
    v20 = reinterpret_cast<void*>(0);
    v21 = 0;
    eax22 = fun_404434(14);
    ecx23 = reinterpret_cast<void*>(14);
    v24 = *eax22;
    do {
        ++v16;
        eax25 = reinterpret_cast<void*>(a2(ecx23));
        ecx23 = a4;
        ebx26 = eax25;
        if (!(reinterpret_cast<uint32_t>(eax25) + 1)) 
            break;
    } while (!(*reinterpret_cast<unsigned char*>(&ebx26) & 0x80) && (eax27 = fun_406ab0(ecx23, ebx26), ecx23 = ebx26, !!eax27));
    goto addr_405a72_4;
    v18 = -1;
    addr_405d1c_6:
    if (a5 >= 0) {
        a3(ebx26, a4);
        --v16;
    }
    v19 = reinterpret_cast<void*>(0);
    v20 = reinterpret_cast<void*>(0);
    v21 = 0;
    addr_405cdd_9:
    if (v11) {
        __asm__("fld tword [ebp-0x24]");
        __asm__("fchs ");
        __asm__("fstp tword [ebp-0x24]");
        __asm__("wait ");
    }
    addr_405cec_11:
    *a6 = *a6 + v16;
    *a7 = v18;
    a1->f0 = v19;
    a1->f4 = v20;
    a1->f8 = v21;
    return;
    addr_405a72_4:
    --a5;
    if (a5 < 0) {
        addr_405b8a_13:
        ebx26 = reinterpret_cast<void*>(0x65);
    } else {
        if (reinterpret_cast<int1_t>(ebx26 == 43)) {
            v13 = 1;
            goto addr_405a93_16;
        }
        if (reinterpret_cast<int1_t>(ebx26 == 45)) {
            v13 = 1;
            v11 = 1;
            goto addr_405a93_16;
        }
        while (1) {
            if (v12 == 1 && v13) {
                if (ebx26 == 73) 
                    goto addr_405d3e_21;
                if (ebx26 == 78) 
                    goto addr_405dac_23;
            }
            v12 = 0;
            if (!reinterpret_cast<int1_t>(ebx26 == static_cast<int32_t>(reinterpret_cast<signed char>(v24)))) {
                if (reinterpret_cast<int32_t>(ebx26) < reinterpret_cast<int32_t>(48)) 
                    break;
                if (reinterpret_cast<int32_t>(ebx26) > reinterpret_cast<int32_t>(57)) 
                    break;
                ebx28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx26) - 48);
                esi17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi17) + 1);
                if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi17) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi17 == 0))) 
                    goto addr_405b09_28;
            } else {
                if (!reinterpret_cast<int1_t>(v9 == 0x8000)) 
                    break;
                if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi17) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi17 == 0)) 
                    goto addr_405ae8_31; else 
                    goto addr_405ae4_32;
            }
            if (reinterpret_cast<int32_t>(esi17) > reinterpret_cast<int32_t>(9)) {
                if (reinterpret_cast<int32_t>(esi17) <= reinterpret_cast<int32_t>(v10)) {
                    ecx23 = reinterpret_cast<void*>(0);
                    eax29 = fun_405388(reinterpret_cast<int32_t>(ebp8) - 60, ebx28);
                    if (!eax29) {
                        ecx23 = v19;
                        v19 = ecx23;
                        v20 = reinterpret_cast<void*>(0);
                    } else {
                        v10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi17) + 0xffffffff);
                    }
                }
            } else {
                eax30 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v19) + reinterpret_cast<uint32_t>(v19));
                v19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax30) + reinterpret_cast<uint32_t>(eax30) * 4 + reinterpret_cast<uint32_t>(ebx28));
            }
            addr_405a93_16:
            --a5;
            if (a5 < 0) 
                goto addr_405b8a_13;
            ++v16;
            eax31 = reinterpret_cast<void*>(a2(ecx23));
            ecx23 = a4;
            ebx26 = eax31;
            continue;
            addr_405b09_28:
            *reinterpret_cast<int16_t*>(&v19) = *reinterpret_cast<int16_t*>(&ebx28);
            if (!ebx28) {
                esi17 = reinterpret_cast<void*>(0xffffffff);
                if (v9 != 0x8000) {
                    v9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v9) - 1);
                    goto addr_405a93_16;
                }
            } else {
                esi17 = reinterpret_cast<void*>(1);
                goto addr_405a93_16;
            }
            addr_405ae8_31:
            edx32 = reinterpret_cast<void*>(0);
            addr_405aea_43:
            v9 = edx32;
            goto addr_405a93_16;
            addr_405ae4_32:
            edx32 = esi17;
            goto addr_405aea_43;
        }
    }
    if (esi17 == 0xfffffffe) {
        addr_405d17_45:
        v18 = 0;
        goto addr_405d1c_6;
    } else {
        if (reinterpret_cast<int1_t>(v9 == 0x8000)) {
            v9 = esi17;
        }
        edi33 = reinterpret_cast<void*>(0);
        if (ebx26 == 0x65) 
            goto addr_405bb0_49;
        if (!reinterpret_cast<int1_t>(ebx26 == 69)) 
            goto addr_405c0a_51;
    }
    addr_405bb0_49:
    v34 = 1;
    while (--a5, a5 >= 0) {
        ++v16;
        eax35 = reinterpret_cast<void*>(a2(ecx23));
        ecx23 = a4;
        ebx26 = eax35;
        if (v34) {
            v34 = 0;
            if (!reinterpret_cast<int1_t>(ebx26 == 45)) {
                if (ebx26 == 43) 
                    continue;
            } else {
                v14 = 1;
                continue;
            }
        }
        if (reinterpret_cast<int32_t>(ebx26) < reinterpret_cast<int32_t>(48)) 
            goto addr_405c0a_51;
        if (reinterpret_cast<int32_t>(ebx26) > reinterpret_cast<int32_t>(57)) 
            goto addr_405c0a_51;
        edx36 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi33) + reinterpret_cast<uint32_t>(edi33));
        ebx37 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx26) + (reinterpret_cast<uint32_t>(edx36) + reinterpret_cast<uint32_t>(edx36) * 4) + 0xffffffd0);
        edi33 = ebx37;
        if (reinterpret_cast<int32_t>(ebx37) <= reinterpret_cast<int32_t>(0x1344)) 
            continue;
        v15 = 1;
    }
    addr_405c18_61:
    if (v14) {
        edi33 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(edi33));
        v15 = -v15;
    }
    if (reinterpret_cast<int32_t>(esi17) >= reinterpret_cast<int32_t>(0)) {
        if (!v15) {
            if (reinterpret_cast<int32_t>(esi17) <= reinterpret_cast<int32_t>(v10)) {
                edx38 = esi17;
            } else {
                edx38 = v10;
            }
            v39 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xffffffdc);
            edi40 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi33) + (reinterpret_cast<uint32_t>(v9) - reinterpret_cast<uint32_t>(edx38)));
            fun_405028(v39);
            __asm__("fstp tword [ebp-0x24]");
            __asm__("wait ");
            if (edi40) {
                if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi40) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi40 == 0)) {
                    eax41 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(edi40));
                } else {
                    eax41 = edi40;
                }
                fun_404dfc(v39, eax41);
                __asm__("fstp tword [ebp-0x30]");
                __asm__("wait ");
                if (reinterpret_cast<signed char>(edi40) >= reinterpret_cast<signed char>(0)) {
                    __asm__("fld tword [ebp-0x24]");
                    __asm__("fld tword [ebp-0x30]");
                    __asm__("fmulp st1, st0");
                    __asm__("fstp tword [ebp-0x24]");
                    __asm__("wait ");
                    goto addr_405cdd_9;
                } else {
                    __asm__("fld tword [ebp-0x24]");
                    __asm__("fld tword [ebp-0x30]");
                    __asm__("fdivp st1, st0");
                    __asm__("fstp tword [ebp-0x24]");
                    __asm__("wait ");
                    goto addr_405cdd_9;
                }
            }
        } else {
            if (v15 != 1) {
                v19 = reinterpret_cast<void*>(0);
                v20 = reinterpret_cast<void*>(0);
                v21 = 0;
            } else {
                *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v20) + 2) = -1;
                *reinterpret_cast<int16_t*>(&v20) = -1;
                *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v19) + 2) = -1;
                *reinterpret_cast<int16_t*>(&v19) = -1;
                v21 = 0x7ffe;
            }
            v18 = 2;
            goto addr_405cdd_9;
        }
    } else {
        v19 = reinterpret_cast<void*>(0);
        v20 = reinterpret_cast<void*>(0);
        v21 = 0;
        goto addr_405cdd_9;
    }
    addr_405c0a_51:
    a3(ecx23, ebx26, a4);
    --v16;
    goto addr_405c18_61;
    addr_405d3e_21:
    ++v16;
    eax42 = reinterpret_cast<void*>(a2(ecx23));
    ebx26 = eax42;
    --a5;
    if (a5 < 0) 
        goto addr_405d17_45;
    if (!reinterpret_cast<int1_t>(ebx26 == 78)) 
        goto addr_405d17_45;
    ++v16;
    eax43 = reinterpret_cast<void*>(a2(a4));
    ebx26 = eax43;
    --a5;
    if (a5 < 0) 
        goto addr_405d17_45;
    if (!reinterpret_cast<int1_t>(ebx26 == 70)) 
        goto addr_405d17_45;
    if (!v11) {
        eax44 = g40b91c;
        v19 = eax44;
        eax45 = g40b920;
        v20 = eax45;
        ax46 = g40b924;
        v21 = ax46;
        goto addr_405cec_11;
    } else {
        edx47 = g40b926;
        v19 = edx47;
        edx48 = g40b92a;
        v20 = edx48;
        dx49 = g40b92e;
        v21 = dx49;
        goto addr_405cec_11;
    }
    addr_405dac_23:
    ++v16;
    eax50 = reinterpret_cast<void*>(a2(ecx23));
    ebx26 = eax50;
    --a5;
    if (a5 < 0) 
        goto addr_405d17_45;
    if (!reinterpret_cast<int1_t>(ebx26 == 65)) 
        goto addr_405d17_45;
    ++v16;
    eax51 = reinterpret_cast<void*>(a2(a4));
    ebx26 = eax51;
    --a5;
    if (a5 < 0) 
        goto addr_405d17_45;
    if (!reinterpret_cast<int1_t>(ebx26 == 78)) 
        goto addr_405d17_45;
    if (!v11) {
        eax52 = g40b930;
        v19 = eax52;
        eax53 = g40b934;
        v20 = eax53;
        ax54 = g40b938;
        v21 = ax54;
        goto addr_405cec_11;
    } else {
        edx55 = g40b93a;
        v19 = edx55;
        edx56 = g40b93e;
        v20 = edx56;
        dx57 = g40b942;
        v21 = dx57;
        goto addr_405cec_11;
    }
}

void* g40b944 = reinterpret_cast<void*>(0);

void* g40b948 = reinterpret_cast<void*>(0x80000000);

int16_t g40b94c = 0x7fff;

void* g40b94e = reinterpret_cast<void*>(0);

void* g40b952 = reinterpret_cast<void*>(0x80000000);

int16_t g40b956 = -1;

void* g40b958 = reinterpret_cast<void*>(1);

void* g40b95c = reinterpret_cast<void*>(0xc0000000);

int16_t g40b960 = 0x7fff;

void* g40b962 = reinterpret_cast<void*>(1);

void* g40b966 = reinterpret_cast<void*>(0xc0000000);

int16_t g40b96a = -1;

void fun_405ecc(struct s43* a1, int32_t a2, int32_t a3, void* a4, int32_t a5, int32_t* a6, int32_t* a7) {
    void* ebp8;
    void* v9;
    void* v10;
    signed char v11;
    signed char v12;
    signed char v13;
    signed char v14;
    signed char v15;
    int32_t v16;
    void* esi17;
    int32_t v18;
    void* v19;
    void* v20;
    int16_t v21;
    void*** eax22;
    void* ecx23;
    void** v24;
    void* eax25;
    void* ebx26;
    void* v27;
    int32_t eax28;
    void* ebx29;
    uint32_t eax30;
    void* eax31;
    void* eax32;
    void* edx33;
    void* edi34;
    int32_t v35;
    void* eax36;
    void* edx37;
    void* ebx38;
    void* edx39;
    void** v40;
    void** edi41;
    void** eax42;
    void* eax43;
    void* eax44;
    void* eax45;
    void* eax46;
    int16_t ax47;
    void* edx48;
    void* edx49;
    int16_t dx50;
    void* eax51;
    void* eax52;
    void* eax53;
    void* eax54;
    int16_t ax55;
    void* edx56;
    void* edx57;
    int16_t dx58;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v9 = reinterpret_cast<void*>(0x8000);
    v10 = reinterpret_cast<void*>(19);
    v11 = 0;
    v12 = 1;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    esi17 = reinterpret_cast<void*>(0xfffffffe);
    v18 = 1;
    v19 = reinterpret_cast<void*>(0);
    v20 = reinterpret_cast<void*>(0);
    v21 = 0;
    eax22 = fun_404434(14);
    ecx23 = reinterpret_cast<void*>(14);
    v24 = *eax22;
    do {
        ++v16;
        eax25 = reinterpret_cast<void*>(a2(ecx23));
        ebx26 = eax25;
        if (!(reinterpret_cast<uint32_t>(eax25) + 1)) 
            break;
        v27 = ebx26;
        eax28 = fun_404650(a4, *reinterpret_cast<uint16_t*>(&v27));
        ecx23 = v27;
    } while (eax28);
    goto addr_405f53_4;
    v18 = -1;
    addr_4061fd_6:
    if (a5 >= 0) {
        a3(ebx26, a4);
        --v16;
    }
    v19 = reinterpret_cast<void*>(0);
    v20 = reinterpret_cast<void*>(0);
    v21 = 0;
    addr_4061be_9:
    if (v11) {
        __asm__("fld tword [ebp-0x24]");
        __asm__("fchs ");
        __asm__("fstp tword [ebp-0x24]");
        __asm__("wait ");
    }
    addr_4061cd_11:
    *a6 = *a6 + v16;
    *a7 = v18;
    a1->f0 = v19;
    a1->f4 = v20;
    a1->f8 = v21;
    return;
    addr_405f53_4:
    --a5;
    if (a5 < 0) {
        addr_40606b_13:
        ebx26 = reinterpret_cast<void*>(0x65);
    } else {
        if (reinterpret_cast<int1_t>(ebx26 == 43)) {
            v13 = 1;
            goto addr_405f74_16;
        }
        if (reinterpret_cast<int1_t>(ebx26 == 45)) {
            v13 = 1;
            v11 = 1;
            goto addr_405f74_16;
        }
        while (1) {
            if (v12 == 1 && v13) {
                if (ebx26 == 73) 
                    goto addr_40621f_21;
                if (ebx26 == 78) 
                    goto addr_40628d_23;
            }
            v12 = 0;
            if (!reinterpret_cast<int1_t>(ebx26 == static_cast<uint32_t>(reinterpret_cast<uint16_t>(v24)))) {
                if (reinterpret_cast<int32_t>(ebx26) < reinterpret_cast<int32_t>(48)) 
                    break;
                if (reinterpret_cast<int32_t>(ebx26) > reinterpret_cast<int32_t>(57)) 
                    break;
                ebx29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx26) - 48);
                esi17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi17) + 1);
                if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi17) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi17 == 0))) 
                    goto addr_405fea_28;
            } else {
                if (!reinterpret_cast<int1_t>(v9 == 0x8000)) 
                    break;
                if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi17) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi17 == 0)) 
                    goto addr_405fc9_31; else 
                    goto addr_405fc5_32;
            }
            if (reinterpret_cast<int32_t>(esi17) > reinterpret_cast<int32_t>(9)) {
                if (reinterpret_cast<int32_t>(esi17) <= reinterpret_cast<int32_t>(v10)) {
                    ecx23 = reinterpret_cast<void*>(0);
                    eax30 = fun_405388(reinterpret_cast<int32_t>(ebp8) - 60, ebx29);
                    if (!eax30) {
                        ecx23 = v19;
                        v19 = ecx23;
                        v20 = reinterpret_cast<void*>(0);
                    } else {
                        v10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi17) + 0xffffffff);
                    }
                }
            } else {
                eax31 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v19) + reinterpret_cast<uint32_t>(v19));
                v19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax31) + reinterpret_cast<uint32_t>(eax31) * 4 + reinterpret_cast<uint32_t>(ebx29));
            }
            addr_405f74_16:
            --a5;
            if (a5 < 0) 
                goto addr_40606b_13;
            ++v16;
            eax32 = reinterpret_cast<void*>(a2(ecx23));
            ecx23 = a4;
            ebx26 = eax32;
            continue;
            addr_405fea_28:
            *reinterpret_cast<int16_t*>(&v19) = *reinterpret_cast<int16_t*>(&ebx29);
            if (!ebx29) {
                esi17 = reinterpret_cast<void*>(0xffffffff);
                if (v9 != 0x8000) {
                    v9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v9) - 1);
                    goto addr_405f74_16;
                }
            } else {
                esi17 = reinterpret_cast<void*>(1);
                goto addr_405f74_16;
            }
            addr_405fc9_31:
            edx33 = reinterpret_cast<void*>(0);
            addr_405fcb_43:
            v9 = edx33;
            goto addr_405f74_16;
            addr_405fc5_32:
            edx33 = esi17;
            goto addr_405fcb_43;
        }
    }
    if (esi17 == 0xfffffffe) {
        addr_4061f8_45:
        v18 = 0;
        goto addr_4061fd_6;
    } else {
        if (reinterpret_cast<int1_t>(v9 == 0x8000)) {
            v9 = esi17;
        }
        edi34 = reinterpret_cast<void*>(0);
        if (ebx26 == 0x65) 
            goto addr_406091_49;
        if (!reinterpret_cast<int1_t>(ebx26 == 69)) 
            goto addr_4060eb_51;
    }
    addr_406091_49:
    v35 = 1;
    while (--a5, a5 >= 0) {
        ++v16;
        eax36 = reinterpret_cast<void*>(a2(ecx23));
        ecx23 = a4;
        ebx26 = eax36;
        if (v35) {
            v35 = 0;
            if (!reinterpret_cast<int1_t>(ebx26 == 45)) {
                if (ebx26 == 43) 
                    continue;
            } else {
                v14 = 1;
                continue;
            }
        }
        if (reinterpret_cast<int32_t>(ebx26) < reinterpret_cast<int32_t>(48)) 
            goto addr_4060eb_51;
        if (reinterpret_cast<int32_t>(ebx26) > reinterpret_cast<int32_t>(57)) 
            goto addr_4060eb_51;
        edx37 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi34) + reinterpret_cast<uint32_t>(edi34));
        ebx38 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx26) + (reinterpret_cast<uint32_t>(edx37) + reinterpret_cast<uint32_t>(edx37) * 4) + 0xffffffd0);
        edi34 = ebx38;
        if (reinterpret_cast<int32_t>(ebx38) <= reinterpret_cast<int32_t>(0x1344)) 
            continue;
        v15 = 1;
    }
    addr_4060f9_61:
    if (v14) {
        edi34 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(edi34));
        v15 = -v15;
    }
    if (reinterpret_cast<int32_t>(esi17) >= reinterpret_cast<int32_t>(0)) {
        if (!v15) {
            if (reinterpret_cast<int32_t>(esi17) <= reinterpret_cast<int32_t>(v10)) {
                edx39 = esi17;
            } else {
                edx39 = v10;
            }
            v40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xffffffdc);
            edi41 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi34) + (reinterpret_cast<uint32_t>(v9) - reinterpret_cast<uint32_t>(edx39)));
            fun_405028(v40);
            __asm__("fstp tword [ebp-0x24]");
            __asm__("wait ");
            if (edi41) {
                if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi41) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi41 == 0)) {
                    eax42 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(edi41));
                } else {
                    eax42 = edi41;
                }
                fun_404dfc(v40, eax42);
                __asm__("fstp tword [ebp-0x30]");
                __asm__("wait ");
                if (reinterpret_cast<signed char>(edi41) >= reinterpret_cast<signed char>(0)) {
                    __asm__("fld tword [ebp-0x24]");
                    __asm__("fld tword [ebp-0x30]");
                    __asm__("fmulp st1, st0");
                    __asm__("fstp tword [ebp-0x24]");
                    __asm__("wait ");
                    goto addr_4061be_9;
                } else {
                    __asm__("fld tword [ebp-0x24]");
                    __asm__("fld tword [ebp-0x30]");
                    __asm__("fdivp st1, st0");
                    __asm__("fstp tword [ebp-0x24]");
                    __asm__("wait ");
                    goto addr_4061be_9;
                }
            }
        } else {
            if (v15 != 1) {
                v19 = reinterpret_cast<void*>(0);
                v20 = reinterpret_cast<void*>(0);
                v21 = 0;
            } else {
                *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v20) + 2) = -1;
                *reinterpret_cast<int16_t*>(&v20) = -1;
                *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v19) + 2) = -1;
                *reinterpret_cast<int16_t*>(&v19) = -1;
                v21 = 0x7ffe;
            }
            v18 = 2;
            goto addr_4061be_9;
        }
    } else {
        v19 = reinterpret_cast<void*>(0);
        v20 = reinterpret_cast<void*>(0);
        v21 = 0;
        goto addr_4061be_9;
    }
    addr_4060eb_51:
    a3(ecx23, ebx26, a4);
    --v16;
    goto addr_4060f9_61;
    addr_40621f_21:
    ++v16;
    eax43 = reinterpret_cast<void*>(a2(ecx23));
    ebx26 = eax43;
    --a5;
    if (a5 < 0) 
        goto addr_4061f8_45;
    if (!reinterpret_cast<int1_t>(ebx26 == 78)) 
        goto addr_4061f8_45;
    ++v16;
    eax44 = reinterpret_cast<void*>(a2(a4));
    ebx26 = eax44;
    --a5;
    if (a5 < 0) 
        goto addr_4061f8_45;
    if (!reinterpret_cast<int1_t>(ebx26 == 70)) 
        goto addr_4061f8_45;
    if (!v11) {
        eax45 = g40b944;
        v19 = eax45;
        eax46 = g40b948;
        v20 = eax46;
        ax47 = g40b94c;
        v21 = ax47;
        goto addr_4061cd_11;
    } else {
        edx48 = g40b94e;
        v19 = edx48;
        edx49 = g40b952;
        v20 = edx49;
        dx50 = g40b956;
        v21 = dx50;
        goto addr_4061cd_11;
    }
    addr_40628d_23:
    ++v16;
    eax51 = reinterpret_cast<void*>(a2(ecx23));
    ebx26 = eax51;
    --a5;
    if (a5 < 0) 
        goto addr_4061f8_45;
    if (!reinterpret_cast<int1_t>(ebx26 == 65)) 
        goto addr_4061f8_45;
    ++v16;
    eax52 = reinterpret_cast<void*>(a2(a4));
    ebx26 = eax52;
    --a5;
    if (a5 < 0) 
        goto addr_4061f8_45;
    if (!reinterpret_cast<int1_t>(ebx26 == 78)) 
        goto addr_4061f8_45;
    if (!v11) {
        eax53 = g40b958;
        v19 = eax53;
        eax54 = g40b95c;
        v20 = eax54;
        ax55 = g40b960;
        v21 = ax55;
        goto addr_4061cd_11;
    } else {
        edx56 = g40b962;
        v19 = edx56;
        edx57 = g40b966;
        v20 = edx57;
        dx58 = g40b96a;
        v21 = dx58;
        goto addr_4061cd_11;
    }
}

int32_t fun_404664(void* ecx, uint16_t a2) {
    int32_t eax3;

    eax3 = fun_4046d4(ecx, static_cast<uint32_t>(a2), 1);
    return eax3;
}

uint32_t fun_406aa0(void** ecx) {
    void** eax2;
    uint32_t eax3;

    eax2 = fun_409942();
    eax3 = fun_406974(ecx, eax2);
    return eax3;
}

uint32_t fun_404560(void* a1) {
    uint32_t eax2;

    eax2 = fun_404690(a1, 1);
    return eax2;
}

void fun_409a34() {
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
    signed char* eax331;
    signed char* eax332;
    signed char al333;
    signed char* eax334;
    signed char* eax335;
    signed char al336;
    signed char* eax337;
    signed char* eax338;
    signed char al339;
    signed char* eax340;
    signed char* eax341;
    signed char al342;
    signed char* eax343;
    signed char* eax344;
    signed char al345;
    signed char* eax346;
    signed char* eax347;
    signed char al348;
    signed char* eax349;
    signed char* eax350;
    signed char al351;
    signed char* eax352;
    signed char* eax353;
    signed char al354;
    signed char* eax355;
    signed char* eax356;
    signed char al357;
    signed char* eax358;
    signed char* eax359;
    signed char al360;
    signed char* eax361;
    signed char* eax362;
    signed char al363;
    signed char* eax364;
    signed char* eax365;
    signed char al366;
    signed char* eax367;
    signed char* eax368;
    signed char al369;
    signed char* eax370;
    signed char* eax371;
    signed char al372;
    signed char* eax373;
    signed char* eax374;
    signed char al375;
    signed char* eax376;
    signed char* eax377;
    signed char al378;
    signed char* eax379;
    signed char* eax380;
    signed char al381;
    signed char* eax382;
    signed char* eax383;
    signed char al384;
    signed char* eax385;
    signed char* eax386;
    signed char al387;
    signed char* eax388;
    signed char* eax389;
    signed char al390;
    signed char* eax391;
    signed char* eax392;
    signed char al393;
    signed char* eax394;
    signed char* eax395;
    signed char al396;
    signed char* eax397;
    signed char* eax398;
    signed char al399;
    signed char* eax400;
    signed char* eax401;
    signed char al402;
    signed char* eax403;
    signed char* eax404;
    signed char al405;
    signed char* eax406;
    signed char* eax407;
    signed char al408;
    signed char* eax409;
    signed char* eax410;
    signed char al411;
    signed char* eax412;
    signed char* eax413;
    signed char al414;
    signed char* eax415;
    signed char* eax416;
    signed char al417;
    signed char* eax418;
    signed char* eax419;
    signed char al420;
    signed char* eax421;
    signed char* eax422;
    signed char al423;
    signed char* eax424;
    signed char* eax425;
    signed char al426;
    signed char* eax427;
    signed char* eax428;
    signed char al429;
    signed char* eax430;
    signed char* eax431;
    signed char al432;
    signed char* eax433;
    signed char* eax434;
    signed char al435;
    signed char* eax436;
    signed char* eax437;
    signed char al438;
    signed char* eax439;
    signed char* eax440;
    signed char al441;
    signed char* eax442;
    signed char* eax443;
    signed char al444;
    signed char* eax445;
    signed char* eax446;
    signed char al447;
    signed char* eax448;
    signed char* eax449;
    signed char al450;
    signed char* eax451;
    signed char* eax452;
    signed char al453;
    signed char* eax454;
    signed char* eax455;
    signed char al456;
    signed char* eax457;
    signed char* eax458;
    signed char al459;
    signed char* eax460;
    signed char* eax461;
    signed char al462;
    signed char* eax463;
    signed char* eax464;
    signed char al465;
    signed char* eax466;
    signed char* eax467;
    signed char al468;
    signed char* eax469;
    signed char* eax470;
    signed char al471;
    signed char* eax472;
    signed char* eax473;
    signed char al474;
    signed char* eax475;
    signed char* eax476;
    signed char al477;
    signed char* eax478;
    signed char* eax479;
    signed char al480;
    signed char* eax481;
    signed char* eax482;
    signed char al483;
    signed char* eax484;
    signed char* eax485;
    signed char al486;
    signed char* eax487;
    signed char* eax488;
    signed char al489;
    signed char* eax490;
    signed char* eax491;
    signed char al492;
    signed char* eax493;
    signed char* eax494;
    signed char al495;
    signed char* eax496;
    signed char* eax497;
    signed char al498;
    signed char* eax499;
    signed char* eax500;
    signed char al501;
    signed char* eax502;
    signed char* eax503;
    signed char al504;
    signed char* eax505;
    signed char* eax506;
    signed char al507;
    signed char* eax508;
    signed char* eax509;
    signed char al510;
    signed char* eax511;
    signed char* eax512;
    signed char al513;
    signed char* eax514;
    signed char* eax515;
    signed char al516;
    signed char* eax517;
    signed char* eax518;
    signed char al519;
    signed char* eax520;
    signed char* eax521;
    signed char al522;
    signed char* eax523;
    signed char* eax524;
    signed char al525;
    signed char* eax526;
    signed char* eax527;
    signed char al528;
    signed char* eax529;
    signed char* eax530;
    signed char al531;
    signed char* eax532;
    signed char* eax533;
    signed char al534;
    signed char* eax535;
    signed char* eax536;
    signed char al537;
    signed char* eax538;
    signed char* eax539;
    signed char al540;
    signed char* eax541;
    signed char* eax542;
    signed char al543;
    signed char* eax544;
    signed char* eax545;
    signed char al546;
    signed char* eax547;
    signed char* eax548;
    signed char al549;
    signed char* eax550;
    signed char* eax551;
    signed char al552;
    signed char* eax553;
    signed char* eax554;
    signed char al555;
    signed char* eax556;
    signed char* eax557;
    signed char al558;
    signed char* eax559;
    signed char* eax560;
    signed char al561;
    signed char* eax562;
    signed char* eax563;
    signed char al564;
    signed char* eax565;
    signed char* eax566;
    signed char al567;
    signed char* eax568;
    signed char* eax569;
    signed char al570;
    signed char* eax571;
    signed char* eax572;
    signed char al573;
    signed char* eax574;
    signed char* eax575;
    signed char al576;
    signed char* eax577;
    signed char* eax578;
    signed char al579;
    signed char* eax580;
    signed char* eax581;
    signed char al582;
    signed char* eax583;
    signed char* eax584;
    signed char al585;
    signed char* eax586;
    signed char* eax587;
    signed char al588;
    signed char* eax589;
    signed char* eax590;
    signed char al591;
    signed char* eax592;
    signed char* eax593;
    signed char al594;
    signed char* eax595;
    signed char* eax596;
    signed char al597;
    signed char* eax598;
    signed char* eax599;
    signed char al600;
    signed char* eax601;
    signed char* eax602;
    signed char al603;
    signed char* eax604;
    signed char* eax605;
    signed char al606;
    signed char* eax607;
    signed char* eax608;
    signed char al609;
    signed char* eax610;
    signed char* eax611;
    signed char al612;
    signed char* eax613;
    signed char* eax614;
    signed char al615;
    signed char* eax616;
    signed char* eax617;
    signed char al618;
    signed char* eax619;
    signed char* eax620;
    signed char al621;
    signed char* eax622;
    signed char* eax623;
    signed char al624;
    signed char* eax625;
    signed char* eax626;
    signed char al627;
    signed char* eax628;
    signed char* eax629;
    signed char al630;
    signed char* eax631;
    signed char* eax632;
    signed char al633;
    signed char* eax634;
    signed char* eax635;
    signed char al636;
    signed char* eax637;
    signed char* eax638;
    signed char al639;
    signed char* eax640;
    signed char* eax641;
    signed char al642;
    signed char* eax643;
    signed char* eax644;
    signed char al645;
    signed char* eax646;
    signed char* eax647;
    signed char al648;
    signed char* eax649;
    signed char* eax650;
    signed char al651;
    signed char* eax652;
    signed char* eax653;
    signed char al654;
    signed char* eax655;
    signed char* eax656;
    signed char al657;
    signed char* eax658;
    signed char* eax659;
    signed char al660;
    signed char* eax661;
    signed char* eax662;
    signed char al663;
    signed char* eax664;
    signed char* eax665;
    signed char al666;
    signed char* eax667;
    signed char* eax668;
    signed char al669;
    signed char* eax670;
    signed char* eax671;
    signed char al672;
    signed char* eax673;
    signed char* eax674;
    signed char al675;
    signed char* eax676;
    signed char* eax677;
    signed char al678;
    signed char* eax679;
    signed char* eax680;
    signed char al681;
    signed char* eax682;
    signed char* eax683;
    signed char al684;
    signed char* eax685;
    signed char* eax686;
    signed char al687;
    signed char* eax688;
    signed char* eax689;
    signed char al690;

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
    *eax331 = reinterpret_cast<signed char>(*eax332 + al333);
    *eax334 = reinterpret_cast<signed char>(*eax335 + al336);
    *eax337 = reinterpret_cast<signed char>(*eax338 + al339);
    *eax340 = reinterpret_cast<signed char>(*eax341 + al342);
    *eax343 = reinterpret_cast<signed char>(*eax344 + al345);
    *eax346 = reinterpret_cast<signed char>(*eax347 + al348);
    *eax349 = reinterpret_cast<signed char>(*eax350 + al351);
    *eax352 = reinterpret_cast<signed char>(*eax353 + al354);
    *eax355 = reinterpret_cast<signed char>(*eax356 + al357);
    *eax358 = reinterpret_cast<signed char>(*eax359 + al360);
    *eax361 = reinterpret_cast<signed char>(*eax362 + al363);
    *eax364 = reinterpret_cast<signed char>(*eax365 + al366);
    *eax367 = reinterpret_cast<signed char>(*eax368 + al369);
    *eax370 = reinterpret_cast<signed char>(*eax371 + al372);
    *eax373 = reinterpret_cast<signed char>(*eax374 + al375);
    *eax376 = reinterpret_cast<signed char>(*eax377 + al378);
    *eax379 = reinterpret_cast<signed char>(*eax380 + al381);
    *eax382 = reinterpret_cast<signed char>(*eax383 + al384);
    *eax385 = reinterpret_cast<signed char>(*eax386 + al387);
    *eax388 = reinterpret_cast<signed char>(*eax389 + al390);
    *eax391 = reinterpret_cast<signed char>(*eax392 + al393);
    *eax394 = reinterpret_cast<signed char>(*eax395 + al396);
    *eax397 = reinterpret_cast<signed char>(*eax398 + al399);
    *eax400 = reinterpret_cast<signed char>(*eax401 + al402);
    *eax403 = reinterpret_cast<signed char>(*eax404 + al405);
    *eax406 = reinterpret_cast<signed char>(*eax407 + al408);
    *eax409 = reinterpret_cast<signed char>(*eax410 + al411);
    *eax412 = reinterpret_cast<signed char>(*eax413 + al414);
    *eax415 = reinterpret_cast<signed char>(*eax416 + al417);
    *eax418 = reinterpret_cast<signed char>(*eax419 + al420);
    *eax421 = reinterpret_cast<signed char>(*eax422 + al423);
    *eax424 = reinterpret_cast<signed char>(*eax425 + al426);
    *eax427 = reinterpret_cast<signed char>(*eax428 + al429);
    *eax430 = reinterpret_cast<signed char>(*eax431 + al432);
    *eax433 = reinterpret_cast<signed char>(*eax434 + al435);
    *eax436 = reinterpret_cast<signed char>(*eax437 + al438);
    *eax439 = reinterpret_cast<signed char>(*eax440 + al441);
    *eax442 = reinterpret_cast<signed char>(*eax443 + al444);
    *eax445 = reinterpret_cast<signed char>(*eax446 + al447);
    *eax448 = reinterpret_cast<signed char>(*eax449 + al450);
    *eax451 = reinterpret_cast<signed char>(*eax452 + al453);
    *eax454 = reinterpret_cast<signed char>(*eax455 + al456);
    *eax457 = reinterpret_cast<signed char>(*eax458 + al459);
    *eax460 = reinterpret_cast<signed char>(*eax461 + al462);
    *eax463 = reinterpret_cast<signed char>(*eax464 + al465);
    *eax466 = reinterpret_cast<signed char>(*eax467 + al468);
    *eax469 = reinterpret_cast<signed char>(*eax470 + al471);
    *eax472 = reinterpret_cast<signed char>(*eax473 + al474);
    *eax475 = reinterpret_cast<signed char>(*eax476 + al477);
    *eax478 = reinterpret_cast<signed char>(*eax479 + al480);
    *eax481 = reinterpret_cast<signed char>(*eax482 + al483);
    *eax484 = reinterpret_cast<signed char>(*eax485 + al486);
    *eax487 = reinterpret_cast<signed char>(*eax488 + al489);
    *eax490 = reinterpret_cast<signed char>(*eax491 + al492);
    *eax493 = reinterpret_cast<signed char>(*eax494 + al495);
    *eax496 = reinterpret_cast<signed char>(*eax497 + al498);
    *eax499 = reinterpret_cast<signed char>(*eax500 + al501);
    *eax502 = reinterpret_cast<signed char>(*eax503 + al504);
    *eax505 = reinterpret_cast<signed char>(*eax506 + al507);
    *eax508 = reinterpret_cast<signed char>(*eax509 + al510);
    *eax511 = reinterpret_cast<signed char>(*eax512 + al513);
    *eax514 = reinterpret_cast<signed char>(*eax515 + al516);
    *eax517 = reinterpret_cast<signed char>(*eax518 + al519);
    *eax520 = reinterpret_cast<signed char>(*eax521 + al522);
    *eax523 = reinterpret_cast<signed char>(*eax524 + al525);
    *eax526 = reinterpret_cast<signed char>(*eax527 + al528);
    *eax529 = reinterpret_cast<signed char>(*eax530 + al531);
    *eax532 = reinterpret_cast<signed char>(*eax533 + al534);
    *eax535 = reinterpret_cast<signed char>(*eax536 + al537);
    *eax538 = reinterpret_cast<signed char>(*eax539 + al540);
    *eax541 = reinterpret_cast<signed char>(*eax542 + al543);
    *eax544 = reinterpret_cast<signed char>(*eax545 + al546);
    *eax547 = reinterpret_cast<signed char>(*eax548 + al549);
    *eax550 = reinterpret_cast<signed char>(*eax551 + al552);
    *eax553 = reinterpret_cast<signed char>(*eax554 + al555);
    *eax556 = reinterpret_cast<signed char>(*eax557 + al558);
    *eax559 = reinterpret_cast<signed char>(*eax560 + al561);
    *eax562 = reinterpret_cast<signed char>(*eax563 + al564);
    *eax565 = reinterpret_cast<signed char>(*eax566 + al567);
    *eax568 = reinterpret_cast<signed char>(*eax569 + al570);
    *eax571 = reinterpret_cast<signed char>(*eax572 + al573);
    *eax574 = reinterpret_cast<signed char>(*eax575 + al576);
    *eax577 = reinterpret_cast<signed char>(*eax578 + al579);
    *eax580 = reinterpret_cast<signed char>(*eax581 + al582);
    *eax583 = reinterpret_cast<signed char>(*eax584 + al585);
    *eax586 = reinterpret_cast<signed char>(*eax587 + al588);
    *eax589 = reinterpret_cast<signed char>(*eax590 + al591);
    *eax592 = reinterpret_cast<signed char>(*eax593 + al594);
    *eax595 = reinterpret_cast<signed char>(*eax596 + al597);
    *eax598 = reinterpret_cast<signed char>(*eax599 + al600);
    *eax601 = reinterpret_cast<signed char>(*eax602 + al603);
    *eax604 = reinterpret_cast<signed char>(*eax605 + al606);
    *eax607 = reinterpret_cast<signed char>(*eax608 + al609);
    *eax610 = reinterpret_cast<signed char>(*eax611 + al612);
    *eax613 = reinterpret_cast<signed char>(*eax614 + al615);
    *eax616 = reinterpret_cast<signed char>(*eax617 + al618);
    *eax619 = reinterpret_cast<signed char>(*eax620 + al621);
    *eax622 = reinterpret_cast<signed char>(*eax623 + al624);
    *eax625 = reinterpret_cast<signed char>(*eax626 + al627);
    *eax628 = reinterpret_cast<signed char>(*eax629 + al630);
    *eax631 = reinterpret_cast<signed char>(*eax632 + al633);
    *eax634 = reinterpret_cast<signed char>(*eax635 + al636);
    *eax637 = reinterpret_cast<signed char>(*eax638 + al639);
    *eax640 = reinterpret_cast<signed char>(*eax641 + al642);
    *eax643 = reinterpret_cast<signed char>(*eax644 + al645);
    *eax646 = reinterpret_cast<signed char>(*eax647 + al648);
    *eax649 = reinterpret_cast<signed char>(*eax650 + al651);
    *eax652 = reinterpret_cast<signed char>(*eax653 + al654);
    *eax655 = reinterpret_cast<signed char>(*eax656 + al657);
    *eax658 = reinterpret_cast<signed char>(*eax659 + al660);
    *eax661 = reinterpret_cast<signed char>(*eax662 + al663);
    *eax664 = reinterpret_cast<signed char>(*eax665 + al666);
    *eax667 = reinterpret_cast<signed char>(*eax668 + al669);
    *eax670 = reinterpret_cast<signed char>(*eax671 + al672);
    *eax673 = reinterpret_cast<signed char>(*eax674 + al675);
    *eax676 = reinterpret_cast<signed char>(*eax677 + al678);
    *eax679 = reinterpret_cast<signed char>(*eax680 + al681);
    *eax682 = reinterpret_cast<signed char>(*eax683 + al684);
    *eax685 = reinterpret_cast<signed char>(*eax686 + al687);
    *eax688 = reinterpret_cast<signed char>(*eax689 + al690);
}

void fun_407e08(void** ecx, void** a2, void** a3) {
    void** ebx4;
    void** ebp5;
    void** eax6;
    void** eax7;

    eax6 = fun_401140(ecx, ebx4, ebp5, __return_address(), a2, a3);
    if (a2 != *reinterpret_cast<void***>(eax6 + 20)) {
        fun_4013f0(ecx, a2);
        return;
    } else {
        eax7 = fun_401140(ecx, ebx4, ebp5, __return_address(), a2, a3);
        *reinterpret_cast<void***>(eax7 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax7 + 4)) & 0xfffffffe);
        return;
    }
}

void fun_4083dc(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, int32_t a9) {
    void** ecx10;
    void** eax11;
    void** ebx12;
    void** edx13;
    void** edi14;
    void** esi15;
    int32_t ebp16;

    ecx10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    fun_40818c(ecx10, a1, a2, a3, a4, a5, a6, a7, a8, __return_address(), 0, a9, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4, eax11, ebx12, edx13, edi14, esi15, ebp16, ecx10, __return_address(), a1, a2);
    return;
}

void fun_408f79(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t ebp7;

    fun_402ca4(ecx, __return_address());
    *reinterpret_cast<int16_t*>(ebp7 - 20) = 28;
    fun_4085b8(ecx, __return_address(), a2, a3, a4, a5, a6);
}

void fun_406f94(int32_t a1, int32_t a2) {
    a2(a1, 0);
    return;
}

void fun_406fe4(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    int1_t zf13;
    void** ecx14;
    void** ebx15;
    void** eax16;
    signed char* eax17;
    int32_t eax18;
    int32_t eax19;
    void** edx20;

    zf13 = g40ccac == 0;
    if (!zf13) {
        g40cc80 = 0;
        g40ccb4 = 0;
        g40cc7c = reinterpret_cast<void**>(0);
        ecx14 = g40bb20;
        eax16 = fun_402388(ecx14, ecx14, ebx15, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        g40cc84 = eax16;
        eax17 = g40ccac;
        eax18 = reinterpret_cast<int32_t>(image_base_(ecx14, eax16, eax17, fun_4070a0));
        if (!eax18) {
            g40cc7c = reinterpret_cast<void**>(0);
            g40ccb4 = 0;
        } else {
            fun_4070a0(ecx14, 0, 0, ebx15, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            --g40ccb4;
        }
        eax19 = g40ccb4;
        g40cca0 = eax19;
        edx20 = g40cc7c;
        g40cca4 = edx20;
    }
    return;
}

signed char* fun_401066() {
    signed char* eax1;

    eax1 = g40a117;
    return eax1;
}

void** fun_406f68() {
    void** eax1;

    eax1 = fun_406ed4(1, 1, 0);
    return eax1;
}

void fun_4014b0() {
    return;
}

void fun_402f0c() {
    g40c8b8 = reinterpret_cast<int32_t>(fun_402dc4);
    g40c8bc = reinterpret_cast<int32_t>(fun_402dc4);
    return;
}

void fun_404fda() {
    goto image_base_;
}

uint32_t fun_4044b4(void* a1) {
    uint32_t eax2;

    eax2 = fun_404690(a1, 0x100);
    return eax2;
}

int32_t fun_404678(void* ecx, uint16_t a2) {
    int32_t eax3;

    eax3 = fun_4046d4(ecx, static_cast<uint32_t>(a2), 0x80);
    return eax3;
}

uint32_t fun_404574(void* a1) {
    uint32_t eax2;

    eax2 = fun_404690(a1, 0x80);
    return eax2;
}

void fun_408411(int32_t ecx, void** a2, void** a3) {
    int32_t* esp4;
    void** ecx5;
    void** eax6;
    void** ebx7;
    void** edx8;
    void** edi9;
    void** esi10;
    void** eax11;
    void** ebx12;
    void** eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    int32_t ebp19;
    void* edi20;
    void** esi21;
    void** ebx22;

    esp4 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ecx5 = reinterpret_cast<void**>(esp4 + 2);
    eax11 = fun_401140(ecx5, eax6, ebx7, edx8, edi9, esi10);
    ebx12 = *reinterpret_cast<void***>(eax11);
    if (!ebx12) {
        fun_402ca4(ecx5, eax6);
    }
    if (!*reinterpret_cast<signed char*>(ebx12 + 68)) {
        eax13 = *reinterpret_cast<void***>(ebx12 + 64);
    } else {
        eax13 = ebx12 + 82;
    }
    v14 = *reinterpret_cast<void***>(ebx12 + 12);
    v15 = *reinterpret_cast<void***>(ebx12 + 36);
    v16 = *reinterpret_cast<void***>(ebx12 + 32);
    v17 = *reinterpret_cast<void***>(ebx12 + 8);
    v18 = *reinterpret_cast<void***>(ebx12 + 4);
    fun_40818c(ecx5, v18, eax13, v17, v16, v15, v14, a2, a3, __return_address(), 1, 0, esp4 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1, eax6, ebx7, edx8, edi9, esi10, ebp19, ecx5, edi20, esi21, ebx22);
    goto ebp19;
}

void fun_408f91(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t ebp7;

    fun_402ca4(ecx, __return_address());
    *reinterpret_cast<int16_t*>(ebp7 - 20) = 16;
    fun_4085b8(ecx, __return_address(), a2, a3, a4, a5, a6);
}

void fun_406fa8(int32_t a1, int32_t a2) {
    a2(a1, 0);
    return;
}

int32_t g40a1f8 = 0;

void fun_4014b4() {
    g40a1f8 = 1;
    return;
}

void fun_402f24() {
    void** eax1;

    eax1 = g40ccc0;
    if (eax1) {
        fun_402edc(eax1);
    }
    return;
}

void** fun_404fe0(void** ecx, void** a2) {
    void** eax3;

    eax3 = fun_406e08(ecx, "printf : floating point formats not linked", __return_address(), a2);
    return eax3;
}

uint32_t fun_4044cc(void* a1) {
    uint32_t eax2;

    eax2 = fun_404690(a1, 32);
    return eax2;
}

int32_t fun_40458c(void* ecx, uint16_t a2) {
    int32_t eax3;

    eax3 = fun_4046d4(ecx, static_cast<uint32_t>(a2), 0x104);
    return eax3;
}

void fun_4014c0() {
    int1_t zf1;

    zf1 = g40a1f8 == 0;
    if (!zf1) {
        image_base_();
    }
    return;
}

void** fun_404fec(void** ecx, void** a2) {
    void** eax3;

    eax3 = fun_406e08(ecx, "scanf : floating point formats not linked", __return_address(), a2);
    return eax3;
}

uint32_t fun_4044e0(void* a1) {
    uint32_t eax2;

    eax2 = fun_404690(a1, 4);
    return eax2;
}

uint32_t fun_4045a4(uint16_t a1) {
    uint32_t eax2;

    eax2 = a1;
    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<uint1_t>(eax2 < 0x80);
    return eax2 & 1;
}

void** fun_404ff8(void** ecx, void** a2) {
    void** eax3;

    eax3 = fun_406e08(ecx, "printf : floating point formats not linked", __return_address(), a2);
    return eax3;
}

uint32_t fun_4044f4(void* a1) {
    uint32_t eax2;

    eax2 = fun_404690(a1, 0x194);
    return eax2;
}

int32_t fun_4045b8(void* ecx, uint16_t a2) {
    int32_t eax3;

    eax3 = fun_4046d4(ecx, static_cast<uint32_t>(a2), 0x100);
    return eax3;
}

void** fun_405004(void** ecx, void** a2) {
    void** eax3;

    eax3 = fun_406e08(ecx, "scanf : floating point formats not linked", __return_address(), a2);
    return eax3;
}

uint32_t fun_40450c(void* a1) {
    uint32_t eax2;

    eax2 = fun_404690(a1, 2);
    return eax2;
}

int32_t fun_4045d0(void* ecx, uint16_t a2) {
    int32_t eax3;

    eax3 = fun_4046d4(ecx, static_cast<uint32_t>(a2), 32);
    return eax3;
}

uint32_t fun_404520(void* a1) {
    uint32_t eax2;

    eax2 = fun_404690(a1, 0x1d4);
    return eax2;
}

int32_t fun_4045e4(void* ecx, uint16_t a2) {
    int32_t eax3;

    eax3 = fun_4046d4(ecx, static_cast<uint32_t>(a2), 4);
    return eax3;
}

uint32_t fun_404538(void* a1) {
    uint32_t eax2;

    eax2 = fun_404690(a1, 16);
    return eax2;
}

int32_t fun_4045f8(void* ecx, uint16_t a2) {
    int32_t eax3;

    eax3 = fun_4046d4(ecx, static_cast<uint32_t>(a2), 0x194);
    return eax3;
}

int32_t fun_404610(void* ecx, uint16_t a2) {
    int32_t eax3;

    eax3 = fun_4046d4(ecx, static_cast<uint32_t>(a2), 2);
    return eax3;
}

int32_t fun_404624(void* ecx, uint16_t a2) {
    int32_t eax3;

    eax3 = fun_4046d4(ecx, static_cast<uint32_t>(a2), 0x1d4);
    return eax3;
}

int32_t fun_40463c(void* ecx, uint16_t a2) {
    int32_t eax3;

    eax3 = fun_4046d4(ecx, static_cast<uint32_t>(a2), 16);
    return eax3;
}
