
signed char g8048273;

int32_t g8048267;

int32_t g804826b;

int32_t fun_80481d7() {
    int32_t v1;
    int32_t eax2;
    signed char* esi3;

    __asm__("pushad ");
    g8048273 = 1;
    v1 = g8048267;
    g804826b = v1;
    do {
        eax2 = 3;
        __asm__("int 0x80");
        if (1) 
            break;
        ++g8048267;
        *reinterpret_cast<signed char*>(&eax2) = g8048273;
        *esi3 = *reinterpret_cast<signed char*>(&eax2);
        ++esi3;
    } while (*reinterpret_cast<signed char*>(&eax2) != 10);
    goto addr_8048210_4;
    addr_804821a_5:
    __asm__("popad ");
    return eax2;
    addr_8048210_4:
    *esi3 = 0;
    g8048273 = 0;
    goto addr_804821a_5;
}

int32_t g804825b;

int16_t* g804825f;

struct s0 {
    signed char f0;
    unsigned char f1;
};

struct s0* fun_804824a();

void fun_804813b() {
    int1_t below_or_equal1;
    int16_t* esi2;
    struct s0* eax3;

    below_or_equal1 = *reinterpret_cast<unsigned char*>(&g804825b) <= 1;
    if (!below_or_equal1) {
        __asm__("pushad ");
        esi2 = g804825f;
        eax3 = fun_804824a();
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi2) + reinterpret_cast<int32_t>(eax3)) = 58;
        __asm__("int 0x80");
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi2 + 2) - 1) = 0;
        __asm__("popad ");
    }
    return;
}

void fun_80481af();

int32_t fun_8048190() {
    signed char* edi1;

    __asm__("pushad ");
    fun_80481af();
    *edi1 = 10;
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

struct s0* g8048274;

int32_t fun_8048168() {
    int1_t zf1;
    signed char* edi2;

    zf1 = (*reinterpret_cast<unsigned char*>(&g8048274) & 0x80) == 0;
    if (!zf1) {
        __asm__("pushad ");
        fun_80481af();
        *edi2 = 58;
        __asm__("int 0x80");
        __asm__("popad ");
    }
    return 4;
}

struct s0* fun_804824a() {
    int32_t eax1;
    int32_t esi2;
    signed char* edi3;
    void* esi4;

    eax1 = esi2;
    edi3 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi4) - 1);
    do {
        ++edi3;
    } while (*edi3);
    return reinterpret_cast<int32_t>(edi3) - eax1;
}

void fun_80481b9(int32_t ecx);

void fun_80481af() {
    uint32_t edx1;
    int32_t eax2;
    int32_t eax3;
    signed char dl4;

    edx1 = eax2 % reinterpret_cast<uint32_t>(10);
    if (eax3 / reinterpret_cast<uint32_t>(10)) {
        fun_80481b9(10);
        edx1 = edx1;
    }
    dl4 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx1) + 48);
    if (dl4 > 57) {
        dl4 = reinterpret_cast<signed char>(dl4 + 39);
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g8048274) + 1) = dl4;
    return;
}

void fun_80481b9(int32_t ecx) {
    uint32_t edx2;
    int32_t eax3;
    int32_t eax4;
    signed char dl5;
    signed char* edi6;

    edx2 = eax3 % reinterpret_cast<uint32_t>(ecx);
    if (eax4 / reinterpret_cast<uint32_t>(ecx)) {
        fun_80481b9(ecx);
        edx2 = edx2;
    }
    dl5 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx2) + 48);
    if (dl5 > 57) {
        dl5 = reinterpret_cast<signed char>(dl5 + 39);
    }
    *edi6 = dl5;
    return;
}

struct s0* fun_804821c() {
    signed char* esi1;
    struct s0* eax2;
    struct s0* esi3;
    struct s0* ecx4;
    struct s0* esi5;
    int1_t zf6;
    struct s0* v7;
    signed char* v8;
    signed char* edi9;

    if (!*esi1) {
        addr_8048245_2:
        eax2 = esi3;
        goto addr_8048247_3;
    } else {
        eax2 = fun_804824a();
        ecx4 = eax2;
        esi3 = esi5;
        if (!ecx4) {
            addr_8048247_3:
            return eax2;
        } else {
            do {
                eax2 = reinterpret_cast<struct s0*>(0);
                zf6 = 1;
                v7 = ecx4;
                v8 = edi9;
                do {
                    if (!ecx4) 
                        break;
                    ecx4 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ecx4) - 1);
                    zf6 = esi3->f0 == *edi9;
                    ++edi9;
                    esi3 = reinterpret_cast<struct s0*>(&esi3->f1);
                } while (zf6);
                edi9 = v8;
                ecx4 = v7;
                if (zf6) 
                    goto addr_8048245_2;
            } while (esi3->f0);
        }
    }
    goto addr_8048247_3;
}

signed char g804826f;

int32_t g8048263;

void fun_8048000(int32_t* ecx) {
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
    void** eax19;
    signed char al20;
    signed char* eax21;
    void** eax22;
    signed char dh23;
    int32_t ebx24;
    int32_t edi25;
    int32_t ebp26;
    int32_t ebp27;
    void* tmp8_28;
    uint1_t cf29;
    int1_t zf30;
    struct s0* eax31;
    struct s0* edx32;
    struct s0* eax33;
    int1_t zf34;
    int16_t* v35;
    int32_t eax36;
    int32_t v37;
    int32_t ebx38;
    int32_t v39;
    int16_t* v40;
    int32_t ebx41;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) + dh23);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        ebx24 = edi25;
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + reinterpret_cast<unsigned char>(*eax22));
        *reinterpret_cast<unsigned char*>(ebp26 + 0x7000042) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(ebp27 + 0x7000042) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf29 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_28) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_28;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf29);
    *reinterpret_cast<signed char*>(ebx24 + 0x4826f1d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx24 + 0x4826f1d) + *reinterpret_cast<signed char*>(&ecx));
    goto addr_804804c_4;
    while (1) {
        fun_80481d7();
        zf30 = g8048273 == 0;
        if (zf30) {
            eax31 = fun_804821c();
            edx32 = g8048274;
            if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(&edx32) & 2) == 0)) ^ static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax31 == 0)))) 
                continue;
            g804826f = 0;
            if (*reinterpret_cast<unsigned char*>(&edx32) & 1) 
                continue;
            ++g8048263;
            if (*reinterpret_cast<unsigned char*>(&edx32) & 4) 
                continue;
            fun_804813b();
            fun_8048168();
            eax33 = fun_804824a();
            edx32 = eax33;
            __asm__("int 0x80");
        } else {
            zf34 = (*reinterpret_cast<unsigned char*>(&g8048274) & 4) == 0;
            if (!zf34) {
                fun_804813b();
                fun_8048190();
            }
            while (1) {
                do {
                    if (!v35) 
                        break;
                    g8048263 = 0;
                    g8048267 = 0;
                    g804825f = v35;
                    __asm__("int 0x80");
                } while (0);
                break;
                do {
                    addr_804804c_4:
                    edx32->f1 = 0xff;
                    eax36 = v37;
                    __asm__("int 0x80");
                    g804826f = 1;
                    ebx38 = v39 - 1;
                } while (!ebx38);
                while (1) {
                    if (*v40 != 0x712d) {
                        if (*v40 != 0x632d) {
                            if (*v40 != 0x622d) {
                                if (*v40 != 0x762d) 
                                    break;
                                *reinterpret_cast<unsigned char*>(&eax36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax36) | 2);
                            } else {
                                *reinterpret_cast<unsigned char*>(&eax36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax36) | 0x80);
                            }
                        } else {
                            *reinterpret_cast<unsigned char*>(&eax36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax36) | 4);
                        }
                    } else {
                        *reinterpret_cast<unsigned char*>(&eax36) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax36) | 1);
                    }
                    --ebx38;
                }
                *reinterpret_cast<unsigned char*>(&g8048274) = *reinterpret_cast<unsigned char*>(&eax36);
                ebx41 = ebx38 - 1;
                if (!ebx41) 
                    break;
                g804825b = ebx41;
            }
        }
    }
}
