
uint32_t g804830f;

uint32_t fun_804829f();

int32_t fun_804819a();

void fun_8048283();

uint32_t fun_8048290();

uint32_t fun_80482b3() {
    uint32_t tmp32_1;
    int32_t eax2;
    int32_t eax3;
    uint32_t eax4;
    int32_t eax5;

    tmp32_1 = g804830f + eax2;
    g804830f = tmp32_1;
    *reinterpret_cast<signed char*>(0x8048367 + eax3) = 0x80;
    while (eax4 = fun_804829f(), eax4 >= 64) {
        eax5 = fun_804819a();
        if (!(eax5 - 64)) 
            goto addr_80482e7_4;
    }
    if (eax4 < 56) {
        addr_80482f1_7:
        return eax4;
    } else {
        fun_804819a();
    }
    addr_80482e7_4:
    fun_8048283();
    eax4 = fun_8048290();
    goto addr_80482f1_7;
}

uint32_t g8048363;

int32_t fun_804812a(int32_t ecx) {
    uint32_t edx2;

    g8048363 = edx2;
    __asm__("int 0x80");
    return 4;
}

int32_t g80482f7;

int32_t g80482fb;

int32_t g80482ff;

int32_t g8048303;

int32_t g8048307;

uint32_t g804830b;

signed char fun_8048172() {
    g80482f7 = 0x67452301;
    g80482fb = 0xefcdab89;
    g80482ff = 0x98badcfe;
    g8048303 = 0x10325476;
    g8048307 = 0xc3d2e1f0;
    g804830b = 0;
    g804830f = 0;
    return 0;
}

int32_t fun_804810f(int32_t ecx);

int32_t fun_8048109() {
    uint32_t edx1;
    int32_t eax2;

    if (!0) {
        fun_804810f(16);
    }
    edx1 = eax2 % reinterpret_cast<uint32_t>(16) + 48;
    if (edx1 > 57) {
        edx1 = edx1 + 39;
    }
    g8048363 = edx1;
    __asm__("int 0x80");
    return 4;
}

int32_t fun_804810f(int32_t ecx) {
    int32_t ebx2;
    uint32_t edx3;
    int32_t eax4;

    if (ebx2 - 1) {
        fun_804810f(ecx);
    }
    edx3 = eax4 % reinterpret_cast<uint32_t>(ecx) + 48;
    if (edx3 > 57) {
        edx3 = edx3 + 39;
    }
    g8048363 = edx3;
    __asm__("int 0x80");
    return 4;
}

int32_t fun_804814b(uint32_t ecx);

int32_t fun_8048157(uint32_t ecx);

int32_t fun_8048161(uint32_t ecx);

int32_t g804831f;

int32_t g8048323;

int32_t g804831b;

int32_t g8048317;

int32_t g8048313;

int32_t fun_804819a() {
    int32_t* edi1;
    int32_t* esi2;
    int32_t ecx3;
    uint32_t ebx4;
    uint32_t ecx5;
    uint32_t v6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    int32_t edx12;
    int32_t eax13;
    int32_t tmp32_14;
    int32_t eax15;
    int32_t tmp32_16;
    int32_t eax17;
    int32_t tmp32_18;
    int32_t eax19;
    int32_t tmp32_20;
    int32_t eax21;
    int32_t tmp32_22;

    __asm__("pushad ");
    edi1 = reinterpret_cast<int32_t*>(0x8048313);
    esi2 = reinterpret_cast<int32_t*>(0x80482f7);
    ecx3 = 5;
    while (ecx3) {
        --ecx3;
        *edi1 = *esi2;
        ++edi1;
        ++esi2;
    }
    ebx4 = 0;
    do {
        ecx5 = ebx4 & 15;
        if (ebx4 >= 16) {
            __asm__("rol eax, 1");
            *reinterpret_cast<uint32_t*>(0x8048327 + ecx5 * 4) = *reinterpret_cast<uint32_t*>(0x8048327 + (ecx5 + 13 & 15) * 4) ^ *reinterpret_cast<uint32_t*>(0x8048327 + (ecx5 + 8 & 15) * 4) ^ *reinterpret_cast<uint32_t*>(0x8048327 + (ecx5 + 1 + 1 & 15) * 4) ^ *reinterpret_cast<uint32_t*>(0x8048327 + ecx5 * 4);
        }
        __asm__("rol eax, 0x5");
        if (ebx4 < 60) {
            if (ebx4 < 40) {
                if (ebx4 < 20) {
                    v6 = ebx4;
                    eax7 = fun_804814b(ecx5);
                } else {
                    v6 = ebx4;
                    eax7 = fun_8048157(ecx5);
                }
            } else {
                v6 = ebx4;
                eax7 = fun_8048161(ecx5);
            }
        } else {
            v6 = ebx4;
            eax7 = fun_8048157(ecx5);
        }
        eax8 = g804831f;
        g8048323 = eax8;
        eax9 = g804831b;
        g804831f = eax9;
        eax10 = g8048317;
        __asm__("rol eax, 0x1e");
        g804831b = eax10;
        eax11 = g8048313;
        g8048317 = eax11;
        g8048313 = eax7 + edx12;
        ebx4 = v6 + 1;
    } while (ebx4 < 80);
    eax13 = g8048313;
    tmp32_14 = g80482f7 + eax13;
    g80482f7 = tmp32_14;
    eax15 = g8048317;
    tmp32_16 = g80482fb + eax15;
    g80482fb = tmp32_16;
    eax17 = g804831b;
    tmp32_18 = g80482ff + eax17;
    g80482ff = tmp32_18;
    eax19 = g804831f;
    tmp32_20 = g8048303 + eax19;
    g8048303 = tmp32_20;
    eax21 = g8048323;
    tmp32_22 = g8048307 + eax21;
    g8048307 = tmp32_22;
    __asm__("popad ");
    return eax21;
}

int32_t fun_8048141();

int32_t fun_8048157(uint32_t ecx) {
    int32_t eax2;

    eax2 = fun_8048141();
    return eax2;
}

int32_t fun_8048161(uint32_t ecx) {
    int32_t eax2;

    eax2 = fun_8048141();
    return eax2;
}

void fun_8048283() {
    int32_t* edi1;
    int32_t ecx2;

    edi1 = reinterpret_cast<int32_t*>(0x8048367);
    ecx2 = 16;
    while (ecx2) {
        --ecx2;
        *edi1 = 0;
        ++edi1;
    }
    return;
}

uint32_t fun_8048290() {
    int32_t* edi1;
    uint32_t v2;
    uint32_t eax3;
    int32_t ecx4;

    edi1 = reinterpret_cast<int32_t*>(0x8048327);
    v2 = eax3;
    ecx4 = 16;
    while (ecx4) {
        --ecx4;
        *edi1 = 0;
        ++edi1;
    }
    return v2;
}

uint32_t fun_804829f() {
    uint32_t eax1;
    uint32_t* edi2;
    void* edi3;
    int32_t ecx4;
    uint32_t v5;

    eax1 = fun_8048290();
    edi2 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(edi3) - 64);
    ecx4 = 16;
    v5 = eax1;
    do {
        __asm__("lodsd ");
        eax1 = eax1 >> 24 | eax1 >> 8 & 0xff00 | eax1 << 8 & 0xff0000 | eax1 << 24;
        *edi2 = eax1;
        ++edi2;
        --ecx4;
    } while (ecx4);
    return v5;
}

int32_t fun_8048141() {
    int32_t eax1;

    return eax1;
}

int32_t fun_804814b(uint32_t ecx) {
    int32_t eax2;

    eax2 = fun_8048141();
    return eax2;
}

int32_t g80482f3;

uint32_t g804835f;

void fun_8048000(uint32_t* ecx, int32_t a2) {
    int1_t less_or_equal3;
    int32_t eax4;
    int32_t* ebx5;
    int32_t* ebx6;
    int32_t eax7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    void** eax20;
    signed char al21;
    signed char* eax22;
    void** eax23;
    signed char dh24;
    int32_t edi25;
    int32_t edi26;
    void* tmp8_27;
    uint1_t cf28;
    int32_t v29;
    uint32_t edx30;
    uint32_t ecx31;
    int32_t ecx32;
    signed char al33;
    int32_t esi34;
    int32_t v35;

    if (less_or_equal3) {
        *ecx = *ecx + eax4;
        *ebx5 = *ebx6 + eax7;
        *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *reinterpret_cast<signed char*>(&eax20) = reinterpret_cast<signed char>(al21 + *eax22);
        eax23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax20) + reinterpret_cast<int32_t>(*eax20));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<uint32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<uint32_t>(eax23)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<uint32_t>(eax23)) + dh24);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<uint32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 8);
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + reinterpret_cast<unsigned char>(*eax23));
        *reinterpret_cast<signed char*>(edi25 + 0x7000003) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi26 + 0x7000003) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax23) + 1));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    }
    tmp8_27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(*eax23));
    *eax23 = tmp8_27;
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23))) + cf28);
    *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&ecx) + 1)));
    *ecx = *ecx & reinterpret_cast<uint32_t>(eax23);
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    while (1) {
        if (!v29) {
            __asm__("int 0x80");
        }
        g80482f3 = v29;
        __asm__("int 0x80");
        if (1) {
            while (fun_8048283(), !0) {
                fun_80482b3();
                if (0) 
                    goto addr_804809c_9;
                fun_80482b3();
            }
            continue;
            addr_804809c_9:
            edx30 = g804830f;
            ecx31 = g804830b;
            __asm__("shld ecx, edx, 0x3");
            g804835f = ecx31;
            g8048363 = edx30 << 3;
            fun_804819a();
            ecx32 = 5;
            do {
                __asm__("lodsd ");
                fun_8048109();
                --ecx32;
            } while (ecx32);
            fun_804812a(ecx32);
            fun_804812a(ecx32);
            al33 = fun_8048172();
            esi34 = g80482f3;
            v35 = esi34;
            do {
                __asm__("lodsb ");
            } while (al33);
            __asm__("int 0x80");
            fun_804812a(v35);
        }
    }
}
