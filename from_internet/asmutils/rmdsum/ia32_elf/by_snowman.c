
void* fun_80482f3();

uint32_t g80484f8;

uint32_t g80484fc;

void fun_8048440(uint32_t ecx) {
    uint32_t edx2;
    uint32_t ecx3;
    uint32_t eax4;
    uint32_t eax5;

    __asm__("pushad ");
    edx2 = ecx;
    ecx3 = ecx >> 6;
    if (ecx3) {
        do {
            fun_80482f3();
            --ecx3;
        } while (ecx3);
    }
    eax4 = g80484f8;
    eax5 = eax4 + edx2;
    if (reinterpret_cast<int32_t>(eax5) < reinterpret_cast<int32_t>(eax4)) {
        ++g80484fc;
    }
    g80484f8 = eax5;
    __asm__("popad ");
    return;
}

int32_t g80484e4;

int32_t g80484e8;

int32_t g80484ec;

int32_t g80484f0;

int32_t g80484f4;

struct s0 {
    uint32_t f0;
    int32_t f4;
    int16_t f8;
};

struct s1 {
    uint32_t f0;
    int32_t f4;
};

signed char fun_80483e9() {
    struct s0* edi1;
    int32_t ecx2;
    struct s1* esi3;
    int32_t ecx4;
    int32_t v5;
    uint32_t ebx6;
    int32_t edx7;
    int32_t ecx8;

    __asm__("pushad ");
    g80484e4 = 0x67452301;
    g80484e8 = 0xefcdab89;
    g80484ec = 0x98badcfe;
    g80484f0 = 0x10325476;
    g80484f4 = 0xc3d2e1f0;
    g80484f8 = 0;
    g80484fc = 0;
    edi1 = reinterpret_cast<struct s0*>(0x8048500);
    ecx2 = 16;
    while (ecx2) {
        --ecx2;
        edi1->f0 = 0;
        edi1 = reinterpret_cast<struct s0*>(&edi1->f4);
    }
    esi3 = reinterpret_cast<struct s1*>(0x8048126);
    ecx4 = 10;
    do {
        v5 = ecx4;
        ebx6 = esi3->f0;
        edx7 = esi3->f4;
        ++esi3;
        ecx8 = 16;
        do {
            __asm__("lodsw ");
            edi1->f0 = ebx6;
            edi1->f4 = edx7;
            edi1->f8 = 0;
            ++edi1;
            --ecx8;
        } while (ecx8);
        ecx4 = v5 - 1;
    } while (ecx4);
    __asm__("popad ");
    return 0;
}

struct s2 {
    signed char[72] pad72;
    int32_t f48;
};

void* fun_80482f3() {
    int32_t v1;
    int32_t ecx2;
    int32_t ecx3;
    struct s2* esi4;
    int32_t* esi5;
    int32_t ecx6;
    int32_t v7;
    int32_t ecx8;
    int32_t v9;
    int32_t eax10;
    int32_t v11;
    int32_t eax12;
    int32_t v13;
    int32_t eax14;
    int32_t v15;
    int32_t eax16;
    int32_t v17;
    int32_t eax18;
    int32_t tmp32_19;
    int32_t tmp32_20;
    int32_t tmp32_21;
    int32_t v22;
    int32_t tmp32_23;
    int32_t v24;
    int32_t tmp32_25;
    int32_t v26;
    int32_t v27;

    v1 = reinterpret_cast<int32_t>(__return_address());
    __asm__("pushad ");
    ecx2 = 5;
    while (ecx2) {
        --ecx2;
    }
    ecx3 = 5;
    esi4 = reinterpret_cast<struct s2*>(0x80484e4);
    while (ecx3) {
        --ecx3;
        esi4 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(esi4) + 4);
    }
    esi5 = &esi4->f48;
    ecx6 = 2;
    do {
        v7 = ecx6;
        ecx8 = 16;
        do {
            eax10 = reinterpret_cast<int32_t>(*esi5(v9));
            __asm__("rol dword [ebp-0x20], 0xa");
            eax12 = reinterpret_cast<int32_t>(*esi5(v11));
            __asm__("rol dword [ebp-0x24], 0xa");
            eax14 = reinterpret_cast<int32_t>(*esi5(eax10 + v13));
            __asm__("rol dword [ebp-0x28], 0xa");
            eax16 = reinterpret_cast<int32_t>(*esi5(eax12 + v15));
            __asm__("rol dword [ebp-0x18], 0xa");
            eax18 = reinterpret_cast<int32_t>(*esi5(eax14 + v17));
            __asm__("rol dword [ebp-0x1c], 0xa");
            --ecx8;
        } while (ecx8);
        ecx6 = v7 - 1;
    } while (ecx6);
    tmp32_19 = eax14 + v17 + 0x8048388 + g80484e8;
    tmp32_20 = eax12 + v15 + 16 + g80484ec;
    g80484e8 = tmp32_20;
    tmp32_21 = eax10 + v13 + v22 + g80484f0;
    g80484ec = tmp32_21;
    tmp32_23 = eax18 + (eax10 + v13) + v24 + g80484f4;
    g80484f0 = tmp32_23;
    tmp32_25 = eax16 + v26 + v27 + g80484e4;
    g80484f4 = tmp32_25;
    g80484e4 = tmp32_19;
    __asm__("popad ");
    goto v1;
}

uint32_t g8048538;

uint32_t g804853c;

void* fun_804846a() {
    int32_t* v1;
    int32_t* edi2;
    uint32_t eax3;
    uint32_t v4;
    uint32_t edx5;
    signed char* esi6;
    uint32_t ecx7;
    signed char* edi8;
    uint32_t edx9;
    uint32_t ecx10;
    uint32_t* edi11;
    int32_t ecx12;
    uint32_t eax13;
    void* al14;
    int32_t* edi15;
    int32_t ecx16;
    int32_t* esi17;

    __asm__("pushad ");
    v1 = edi2;
    eax3 = g80484f8;
    v4 = eax3;
    edx5 = eax3;
    esi6 = reinterpret_cast<signed char*>(0x8048b80 + (eax3 & 0x1fc0));
    ecx7 = eax3 & 63;
    edi8 = reinterpret_cast<signed char*>(0x8048500);
    while (ecx7) {
        --ecx7;
        *edi8 = *esi6;
        ++edi8;
        ++esi6;
    }
    edx9 = edx5 >> 2 & 15;
    ecx10 = (edx5 & 3) * 8 + 7;
    edi11 = reinterpret_cast<uint32_t*>(0x8048500);
    *reinterpret_cast<uint32_t*>(0x8048500 + edx9 * 4) = *reinterpret_cast<uint32_t*>(0x8048500 + edx9 * 4) ^ 1 << *reinterpret_cast<unsigned char*>(&ecx10);
    if (reinterpret_cast<int32_t>(edx5 & 63) > reinterpret_cast<int32_t>(55)) {
        fun_80482f3();
        ecx12 = 16;
        while (ecx12) {
            --ecx12;
            *edi11 = 0;
            ++edi11;
        }
    }
    g8048538 = v4 << 3;
    eax13 = g80484fc;
    g804853c = eax13 >> 29;
    al14 = fun_80482f3();
    edi15 = v1;
    ecx16 = 5;
    esi17 = reinterpret_cast<int32_t*>(0x80484e4);
    while (ecx16) {
        --ecx16;
        *edi15 = *esi17;
        ++edi15;
        ++esi17;
    }
    __asm__("popad ");
    return al14;
}

struct s3 {
    signed char[1] pad1;
    void* f1;
};

void** g8050bc0;

struct s4 {
    unsigned char f0;
    signed char[6] pad7;
    unsigned char f7;
    signed char[1010579508] pad1010579516;
    unsigned char f3c3c383c;
};

signed char g9;

uint32_t g706080e;

uint32_t g82d80c08;

uint32_t g36ed9eb;

unsigned char ge020f01;

int16_t gb018f19;

void** gb018f15;

void* gb018f13;

void* g50e0c0a;

void* gb018f11;

signed char ge080550;

struct s5 {
    uint32_t f0;
    signed char[184651531] pad184651535;
    void* fb018f0f;
};

void* gb018f0d;

struct s6 {
    signed char[168363272] pad168363272;
    signed char fa090508;
};

struct s7 {
    void* f0;
    int16_t f2;
};

struct s8 {
    int16_t f0;
    int16_t f2;
};

uint32_t g82d80b02;

struct s9 {
    signed char[135139082] pad135139082;
    unsigned char f80e0f0a;
};

void fun_8048000(int32_t* ecx, int32_t a2) {
    int1_t less_or_equal3;
    void** esi4;
    struct s3* esi5;
    int32_t eax6;
    int32_t* ebx7;
    int32_t* ebx8;
    int32_t eax9;
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
    void** eax22;
    signed char al23;
    signed char* eax24;
    void** eax25;
    signed char dh26;
    void* dl27;
    void** edi28;
    int16_t* esp29;
    void** v30;
    struct s4* edx31;
    void* al32;
    int32_t ecx33;
    int32_t edx34;
    void* ah35;
    signed char al36;
    void** v37;
    signed char tmp8_38;
    signed char tmp8_39;
    uint32_t* ecx40;
    void* v41;
    void* ecx42;
    uint32_t eax43;
    void* ecx44;
    uint32_t ecx45;
    uint32_t eax46;
    uint32_t ecx47;
    unsigned char* eax48;
    void* eax49;
    uint32_t* ecx50;
    int16_t cs51;
    void* eax52;
    void* eax53;
    void* v54;
    void* tmp8_55;
    uint32_t* eax56;
    struct s5* ecx57;
    uint32_t eax58;
    unsigned char* eax59;
    uint32_t eax60;
    int16_t cs61;
    struct s6* ecx62;
    void* esp63;
    struct s7* esp64;
    void* eax65;
    void* ecx66;
    struct s8* esp67;
    int16_t es68;
    uint32_t tmp32_69;
    void* eax70;
    int16_t* esp71;
    int16_t* esp72;
    void* ecx73;
    uint32_t* ecx74;
    struct s9* eax75;
    unsigned char* eax76;
    uint32_t eax77;

    if (less_or_equal3) {
        esi4 = &esi5->f1;
        *ecx = *ecx + eax6;
        *ebx7 = *ebx8 + eax9;
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(al23 + *eax24);
        eax25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(*eax22));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<int32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) + 44);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(eax25)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(eax25)) + dh26);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<int32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
        __asm__("in al, 0x4");
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        __asm__("les ecx, [ebx+0x70000]");
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    }
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<signed char>(dl27));
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    fun_80483e9();
    edi28 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<int32_t>(__return_address()) - 1)) 
        goto addr_8048079_4; else 
        goto addr_804805a_5;
    addr_80482e1_6:
    __asm__("rol eax, cl");
    goto *esp29;
    while (1) {
        addr_8048076_7:
        ++edi28;
        while (1) {
            addr_804805a_5:
            if (!v30) 
                goto addr_8048121_8;
            g8050bc0 = v30;
            ecx = reinterpret_cast<int32_t*>(0);
            __asm__("int 0x80");
            if (!1) 
                break;
            while (1) {
                addr_8048079_4:
                ecx = reinterpret_cast<int32_t*>(0x8048b80);
                edx31 = reinterpret_cast<struct s4*>(0x2000);
                __asm__("int 0x80");
                if (0) 
                    goto addr_8048076_7;
                if (0) 
                    break;
                esi4 = reinterpret_cast<void**>(0x8048b80);
                fun_8048440(3);
            }
            __asm__("pushad ");
            al32 = fun_804846a();
            ecx33 = 20;
            edi28 = reinterpret_cast<void**>(0x8050b94);
            do {
                __asm__("lodsb ");
                edx34 = 2;
                ah35 = al32;
                do {
                    __asm__("rol ah, 0x4");
                    al32 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ah35) & 15) + 48);
                    if (reinterpret_cast<signed char>(al32) > reinterpret_cast<signed char>(57)) {
                        al32 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(al32) + 39);
                    }
                    *edi28 = al32;
                    ++edi28;
                    --edx34;
                } while (edx34);
                --ecx33;
            } while (ecx33);
            *edi28 = reinterpret_cast<void*>(0xa2d2020);
            __asm__("int 0x80");
            al36 = fun_80483e9();
            esi4 = g8050bc0;
            ecx = reinterpret_cast<int32_t*>(0x8050bbe);
            edx31 = reinterpret_cast<struct s4*>(2);
            if (esi4) {
                v37 = esi4;
                do {
                    __asm__("lodsb ");
                } while (al36);
                edi28 = v37;
                esi4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi4) - reinterpret_cast<int32_t>(edi28) - 1);
                __asm__("int 0x80");
                ecx = reinterpret_cast<int32_t*>(0x8050bbf);
                edx31 = reinterpret_cast<struct s4*>(1);
            }
            __asm__("int 0x80");
            __asm__("popad ");
        }
    }
    addr_8048121_8:
    __asm__("int 0x80");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx31) + 1) = 0x82;
    tmp8_38 = reinterpret_cast<signed char>(g9 + 9);
    g9 = tmp8_38;
    tmp8_39 = reinterpret_cast<signed char>(g9 + 9);
    g9 = tmp8_39;
    *v30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*v30) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)));
    *esi4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*esi4) + reinterpret_cast<uint32_t>(ecx));
    *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) + reinterpret_cast<unsigned char>(*edi28));
    ecx40 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(v41));
    g706080e = g706080e | reinterpret_cast<uint32_t>(ecx40);
    ecx42 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx40) | *ecx40);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx31) + 0x3c3c383c + 0x79990804) = 0xff;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx31) + 7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx31) + 7) - reinterpret_cast<unsigned char>(7 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx31) + 7) < 7)));
    eax43 = 0xf0f0f1d | reinterpret_cast<unsigned char>(*esi4);
    *edi28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*edi28) | reinterpret_cast<uint32_t>(ecx42));
    ecx44 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx42) + reinterpret_cast<unsigned char>(*edi28));
    *reinterpret_cast<unsigned char*>(&eax43) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax43) | 7);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx44) + reinterpret_cast<uint32_t>(ecx44)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx44) + reinterpret_cast<uint32_t>(ecx44)) + *reinterpret_cast<signed char*>(&ecx44));
    __asm__("syscall ");
    *reinterpret_cast<unsigned char*>(edx31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx31) | eax43);
    ecx45 = reinterpret_cast<uint32_t>(ecx44) | reinterpret_cast<unsigned char>(*esi4) | g82d80c08;
    eax46 = g36ed9eb;
    ecx47 = ecx45 | *reinterpret_cast<unsigned char*>(edx31);
    eax48 = reinterpret_cast<unsigned char*>(eax46 | 0x704060e);
    *esi4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*esi4) | ecx47);
    __asm__("wbinvd ");
    ge020f01 = reinterpret_cast<unsigned char>(ge020f01 | *reinterpret_cast<unsigned char*>(&ecx47));
    *eax48 = reinterpret_cast<unsigned char>(*eax48 | *reinterpret_cast<unsigned char*>(&eax48));
    eax49 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax48) | 0x50d0606);
    ecx50 = reinterpret_cast<uint32_t*>(ecx47 | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax49) - 0x39faf3f9));
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax49) + reinterpret_cast<uint32_t>(ecx50)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax49) + reinterpret_cast<uint32_t>(ecx50)) - 36);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(v30) + reinterpret_cast<uint32_t>(ecx50)) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(v30) + reinterpret_cast<uint32_t>(ecx50)) | reinterpret_cast<uint32_t>(ecx50);
    gb018f19 = cs51;
    *reinterpret_cast<void**>(&ecx50) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx50)) | reinterpret_cast<unsigned char>(*edi28));
    *esi4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*esi4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx50)));
    *edi28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*edi28) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx50)));
    *reinterpret_cast<unsigned char*>(&eax49) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax49) | 9) + 8);
    eax52 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(eax49) | 0x70e0309) + 0x80e060f + 0x2050606);
    *reinterpret_cast<unsigned char*>(&eax52) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax52) | 0xd0);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax52) + reinterpret_cast<uint32_t>(ecx50)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax52) + reinterpret_cast<uint32_t>(ecx50)) + 78);
    gb018f15 = v30;
    eax53 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax52) + 0x70b0905);
    gb018f13 = v54;
    *reinterpret_cast<unsigned char*>(&eax53) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax53) | 8);
    tmp8_55 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx50)) + reinterpret_cast<unsigned char>(g50e0c0a));
    *reinterpret_cast<void**>(&ecx50) = tmp8_55;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(v30) + reinterpret_cast<uint32_t>(eax53)) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(v30) + reinterpret_cast<uint32_t>(eax53)) + reinterpret_cast<uint32_t>(ecx50);
    gb018f11 = v54;
    *edi28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*edi28) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx50)));
    eax56 = reinterpret_cast<uint32_t*>((reinterpret_cast<uint32_t>(eax53) | 0xb0b0e08) - 0x7d2ff9f3);
    *reinterpret_cast<signed char*>(&eax56) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax56) + 8);
    __asm__("out 0x8b, al");
    ge080550 = *reinterpret_cast<signed char*>(&eax56);
    *edi28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*edi28) | reinterpret_cast<uint32_t>(eax56));
    *eax56 = *eax56 | reinterpret_cast<uint32_t>(eax56);
    ecx57 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(ecx50) | *ecx50);
    eax58 = reinterpret_cast<uint32_t>(eax56) | 0xf0b0f02;
    *reinterpret_cast<signed char*>(&eax58) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax58) + 5);
    eax59 = reinterpret_cast<unsigned char*>(eax58 | 0xf070607);
    *eax59 = reinterpret_cast<unsigned char>(*eax59 | *reinterpret_cast<unsigned char*>(&ecx57));
    eax60 = reinterpret_cast<uint32_t>(eax59) | ecx57->f0;
    *reinterpret_cast<int16_t*>(&gb018f0d + 1) = cs61;
    *reinterpret_cast<unsigned char*>(&ecx57) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx57) | reinterpret_cast<unsigned char>(*esi4));
    ecx62 = reinterpret_cast<struct s6*>(reinterpret_cast<uint32_t>(ecx57) + reinterpret_cast<int32_t>(ecx57->fb018f0f));
    gb018f0d = v54;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx31) - 0x2edbf7fc) = 77;
    esp63 = gb018f0d;
    esp64 = reinterpret_cast<struct s7*>(reinterpret_cast<int16_t>(esp63) + 4 - 2);
    esp64->f0 = v54;
    *v30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*v30) | reinterpret_cast<uint32_t>(ecx62));
    eax65 = reinterpret_cast<void*>(eax60 | 0x7070f03);
    ecx62->fa090508 = reinterpret_cast<signed char>(ecx62->fa090508 + *reinterpret_cast<signed char*>(&ecx62));
    ecx66 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx62) | reinterpret_cast<unsigned char>(*esi4));
    esp67 = reinterpret_cast<struct s8*>(&esp64->f2);
    __asm__("sysret ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp67) + reinterpret_cast<uint32_t>(ecx66)) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp67) + reinterpret_cast<uint32_t>(ecx66)) | *reinterpret_cast<unsigned char*>(&ecx66));
    es68 = esp67->f0;
    esp29 = &esp67->f2;
    *edi28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*edi28) | reinterpret_cast<uint32_t>(ecx66));
    tmp32_69 = g82d80b02 + reinterpret_cast<uint32_t>(ecx66);
    g82d80b02 = tmp32_69;
    *reinterpret_cast<signed char*>(&eax65) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax65) + 6) + 8);
    if (__intrinsic()) {
        addr_80482b3_26:
        goto addr_80482e1_6;
    } else {
        __asm__("wbinvd ");
        eax70 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax65) + 0x30f0107 | reinterpret_cast<unsigned char>(*edi28));
        *esi4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*esi4) | *reinterpret_cast<unsigned char*>(&ecx66));
        esp71 = esp29 - 1;
        *esp71 = es68;
        esp72 = esp71 - 1;
        *esp72 = es68;
        esp29 = esp72 - 1;
        *esp29 = es68;
        *esi4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*esi4) | reinterpret_cast<uint32_t>(ecx66));
        ecx73 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx66) | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax70) + reinterpret_cast<uint32_t>(ecx66)));
        eax65 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax70) | 0xe02050c | 0x482bc05);
        *reinterpret_cast<unsigned char*>(&ecx73) = 0xff;
        if (0) {
            goto addr_80482e1_6;
        } else {
            if (!__intrinsic()) {
                __asm__("clts ");
                eax65 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax65) + 0xb010804);
                ecx73 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx73) + reinterpret_cast<unsigned char>(*esi4));
            }
            ecx74 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx73) | reinterpret_cast<unsigned char>(*esi4));
            __asm__("clts ");
            *esi4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*esi4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx74)));
            eax75 = reinterpret_cast<struct s9*>(reinterpret_cast<uint32_t>(eax65) + 0x2090c06);
            *ecx74 = *ecx74 | reinterpret_cast<uint32_t>(ecx74);
            *reinterpret_cast<unsigned char*>(&eax75) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax75) | 13) | 7);
            eax76 = &eax75->f80e0f0a;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx31) + 1) = 0x82;
            *reinterpret_cast<unsigned char*>(&eax76) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax76) + 8);
            *eax76 = reinterpret_cast<unsigned char>(*eax76 + *reinterpret_cast<unsigned char*>(&eax76));
            *eax76 = reinterpret_cast<unsigned char>(*eax76 + *reinterpret_cast<unsigned char*>(&eax76));
            *reinterpret_cast<unsigned char*>(&eax76) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax76) | 8);
            __asm__("syscall ");
            *reinterpret_cast<void**>(&ecx74) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx74)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp29) + reinterpret_cast<uint32_t>(eax76)));
            *ecx74 = *ecx74 | reinterpret_cast<uint32_t>(eax76);
            *reinterpret_cast<unsigned char*>(&eax76) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax76) | 5);
            eax77 = reinterpret_cast<uint32_t>(eax76 + 0x6070e08);
            --esp29;
            *esp29 = es68;
            *reinterpret_cast<unsigned char*>(edx31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx31) | *reinterpret_cast<unsigned char*>(&eax77));
            *edi28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*edi28) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx74)));
            goto addr_80482b3_26;
        }
    }
}

void fun_80482bc(int32_t ecx) {
    goto 0x80482de;
}

void fun_80482c6(int32_t ecx) {
    goto 0x80482de;
}

void fun_80482d0(int32_t ecx) {
    goto 0x80482de;
}

void fun_80482d8(int32_t ecx) {
}
