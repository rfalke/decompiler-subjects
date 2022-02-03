
struct s0 {
    unsigned char f0;
    signed char[3] pad4;
    signed char f4;
    signed char[20575] pad20580;
    int32_t f5064;
    int32_t f5068;
};

struct s1 {
    signed char f0;
    signed char[3] pad4;
    void* f4;
};

void fun_407006(int32_t a1) {
    void* ebp2;
    unsigned char ebx3;
    struct s0* edi4;
    struct s0* v5;
    unsigned char* esi6;
    unsigned char tmp32_7;
    int1_t cf8;
    uint1_t cf9;
    unsigned char tmp32_10;
    uint32_t eax11;
    unsigned char tmp32_12;
    uint1_t cf13;
    unsigned char ebx14;
    uint1_t cf15;
    unsigned char tmp32_16;
    unsigned char tmp32_17;
    uint1_t zf18;
    uint1_t cf19;
    unsigned char tmp32_20;
    void* eax21;
    unsigned char tmp32_22;
    uint1_t cf23;
    unsigned char ebx24;
    uint1_t cf25;
    unsigned char tmp32_26;
    void* ecx27;
    unsigned char tmp32_28;
    uint1_t cf29;
    uint1_t cf30;
    unsigned char tmp32_31;
    void* ecx32;
    void* ecx33;
    unsigned char tmp32_34;
    uint1_t cf35;
    unsigned char ebx36;
    uint1_t cf37;
    unsigned char tmp32_38;
    unsigned char tmp32_39;
    uint1_t zf40;
    uint1_t cf41;
    unsigned char tmp32_42;
    void* ecx43;
    unsigned char* edx44;
    int1_t below_or_equal45;
    uint32_t eax46;
    struct s0* esi47;
    struct s1* v48;
    struct s0* edi49;
    struct s1* ecx50;
    unsigned char eax51;
    unsigned char eax52;
    uint16_t ax53;
    struct s1* edi54;
    int32_t* ebx55;
    uint32_t v56;
    int32_t eax57;
    void** ebx58;
    void** edi59;
    void* eax60;
    void* eax61;
    signed char tmp8_62;

    ebp2 = reinterpret_cast<void*>(0xffffffff);
    ebx3 = reinterpret_cast<unsigned char>(0);
    edi4 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__return_address()) - 0x6006);
    v5 = edi4;
    edi4->f0 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(edi4->f0));
    esi6 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(__return_address()) + 0x1b3);
    while (1) {
        tmp32_7 = reinterpret_cast<unsigned char>(ebx3 + ebx3);
        cf8 = tmp32_7 < ebx3;
        ebx3 = tmp32_7;
        if (!ebx3) {
            cf9 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esi6) < 0xfffffffc);
            esi6 = esi6 + 4;
            tmp32_10 = reinterpret_cast<unsigned char>(*esi6 + *esi6 + cf9);
            cf8 = tmp32_10 < *esi6;
            ebx3 = tmp32_10;
        }
        if (cf8) {
            ++esi6;
            edi4->f0 = *esi6;
            edi4 = reinterpret_cast<struct s0*>(&edi4->pad4);
            continue;
        }
        eax11 = 1;
        do {
            tmp32_12 = reinterpret_cast<unsigned char>(ebx3 + ebx3);
            cf13 = reinterpret_cast<uint1_t>(tmp32_12 < ebx3);
            ebx14 = tmp32_12;
            if (!ebx14) {
                cf15 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esi6) < 0xfffffffc);
                esi6 = esi6 + 4;
                tmp32_16 = reinterpret_cast<unsigned char>(*esi6 + *esi6 + cf15);
                cf13 = reinterpret_cast<uint1_t>(tmp32_16 < *esi6);
                ebx14 = tmp32_16;
            }
            eax11 = eax11 + eax11 + cf13;
            tmp32_17 = reinterpret_cast<unsigned char>(ebx14 + ebx14);
            ebx3 = tmp32_17;
            zf18 = reinterpret_cast<uint1_t>(ebx3 == 0);
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp32_17 < ebx14) | zf18) || zf18 && (cf19 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esi6) < 0xfffffffc), esi6 = esi6 + 4, tmp32_20 = reinterpret_cast<unsigned char>(*esi6 + *esi6 + cf19), ebx3 = tmp32_20, tmp32_20 >= *esi6));
        if (eax11 >= 3) 
            goto addr_407063_11;
        eax21 = ebp2;
        addr_407070_13:
        tmp32_22 = reinterpret_cast<unsigned char>(ebx3 + ebx3);
        cf23 = reinterpret_cast<uint1_t>(tmp32_22 < ebx3);
        ebx24 = tmp32_22;
        if (!ebx24) {
            cf25 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esi6) < 0xfffffffc);
            esi6 = esi6 + 4;
            tmp32_26 = reinterpret_cast<unsigned char>(*esi6 + *esi6 + cf25);
            cf23 = reinterpret_cast<uint1_t>(tmp32_26 < *esi6);
            ebx24 = tmp32_26;
        }
        ecx27 = reinterpret_cast<void*>(static_cast<uint32_t>(cf23));
        tmp32_28 = reinterpret_cast<unsigned char>(ebx24 + ebx24);
        cf29 = reinterpret_cast<uint1_t>(tmp32_28 < ebx24);
        ebx3 = tmp32_28;
        if (!ebx3) {
            cf30 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esi6) < 0xfffffffc);
            esi6 = esi6 + 4;
            tmp32_31 = reinterpret_cast<unsigned char>(*esi6 + *esi6 + cf30);
            cf29 = reinterpret_cast<uint1_t>(tmp32_31 < *esi6);
            ebx3 = tmp32_31;
        }
        ecx32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx27) + reinterpret_cast<uint32_t>(ecx27) + cf29);
        if (!ecx32) {
            ecx33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx32) + 1);
            do {
                tmp32_34 = reinterpret_cast<unsigned char>(ebx3 + ebx3);
                cf35 = reinterpret_cast<uint1_t>(tmp32_34 < ebx3);
                ebx36 = tmp32_34;
                if (!ebx36) {
                    cf37 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esi6) < 0xfffffffc);
                    esi6 = esi6 + 4;
                    tmp32_38 = reinterpret_cast<unsigned char>(*esi6 + *esi6 + cf37);
                    cf35 = reinterpret_cast<uint1_t>(tmp32_38 < *esi6);
                    ebx36 = tmp32_38;
                }
                ecx33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx33) + reinterpret_cast<uint32_t>(ecx33) + cf35);
                tmp32_39 = reinterpret_cast<unsigned char>(ebx36 + ebx36);
                ebx3 = tmp32_39;
                zf40 = reinterpret_cast<uint1_t>(ebx3 == 0);
            } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp32_39 < ebx36) | zf40) || zf40 && (cf41 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esi6) < 0xfffffffc), esi6 = esi6 + 4, tmp32_42 = reinterpret_cast<unsigned char>(*esi6 + *esi6 + cf41), ebx3 = tmp32_42, tmp32_42 >= *esi6));
            ecx32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx33) + 2);
        }
        ecx43 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx32) + 1 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax21) < 0xfffff300));
        edx44 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi4) + reinterpret_cast<uint32_t>(eax21));
        if (reinterpret_cast<int32_t>(eax21) <= reinterpret_cast<int32_t>(0xfffffffc)) {
            do {
                edx44 = edx44 + 4;
                edi4->f0 = *edx44;
                edi4 = reinterpret_cast<struct s0*>(&edi4->f4);
                below_or_equal45 = reinterpret_cast<uint32_t>(ecx43) <= 4;
                ecx43 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx43) - 4);
            } while (!below_or_equal45);
            edi4 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(edi4) + reinterpret_cast<uint32_t>(ecx43));
            continue;
        } else {
            do {
                ++edx44;
                edi4->f0 = *edx44;
                edi4 = reinterpret_cast<struct s0*>(&edi4->pad4);
                ecx43 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx43) - 1);
            } while (ecx43);
            continue;
        }
        addr_407063_11:
        eax46 = eax11 - 3 << 8;
        *reinterpret_cast<unsigned char*>(&eax46) = *esi6;
        ++esi6;
        eax21 = reinterpret_cast<void*>(eax46 ^ 0xffffffff);
        if (!eax21) 
            break;
        ebp2 = eax21;
        goto addr_407070_13;
    }
    esi47 = v5;
    v48 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(edi4) - reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi4) - 4)));
    edi49 = esi47;
    ecx50 = reinterpret_cast<struct s1*>(41);
    while (1) {
        edi49 = reinterpret_cast<struct s0*>(&edi49->pad4);
        eax51 = reinterpret_cast<unsigned char>(edi49->f0 + 24);
        do {
            if (eax51 > 1) 
                break;
            if (edi49->f0 != 1) 
                break;
            eax52 = edi49->f0;
            ax53 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax52) >> 8);
            __asm__("rol eax, 0x10");
            *reinterpret_cast<signed char*>(&eax52 + 1) = *reinterpret_cast<signed char*>(&ax53);
            *reinterpret_cast<signed char*>(&eax52) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax53) + 1);
            *reinterpret_cast<signed char*>(&ebx3) = reinterpret_cast<signed char>(edi49->f4 + 24);
            edi49->f0 = reinterpret_cast<unsigned char>(eax52 - reinterpret_cast<uint32_t>(edi49) + reinterpret_cast<uint32_t>(esi47));
            edi49 = reinterpret_cast<struct s0*>(&edi49->pad20580);
            eax51 = ebx3;
            ecx50 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(ecx50) - 1);
        } while (ecx50);
        break;
    }
    edi54 = v48;
    while (edi54->f0) {
        ebx55 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edi54->f4) + reinterpret_cast<uint32_t>(esi47));
        v56 = edi54->f0 + reinterpret_cast<uint32_t>(esi47) + 0x5000;
        edi54 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(edi54) + 8);
        esi47->f5064(ecx50, v56);
        while (edi54 = reinterpret_cast<struct s1*>(&edi54->pad4), !!edi54->f0) {
            ecx50 = edi54;
            if (__intrinsic()) {
                edi54 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(&edi54->pad4) + 1);
                ecx50 = reinterpret_cast<struct s1*>(0xaef24857);
            }
            eax57 = reinterpret_cast<int32_t>(esi47->f5068(ecx50));
            *ebx55 = eax57;
            ++ebx55;
        }
    }
    ebx58 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi47) - 4);
    edi59 = &edi54->f4;
    while (eax60 = reinterpret_cast<void*>(0), *reinterpret_cast<void**>(&eax60) = *edi59, ++edi59, !!eax60) {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)) > 0xef) {
            *reinterpret_cast<void**>(&eax60) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax60)) & 15);
            eax60 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax60) << 16);
            *reinterpret_cast<void**>(&eax60) = *edi59;
            edi59 = edi59 + 2;
        }
        ebx58 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx58) + reinterpret_cast<int32_t>(eax60));
        eax61 = *ebx58;
        __asm__("rol eax, 0x10");
        tmp8_62 = *reinterpret_cast<signed char*>(&eax61);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax61) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax61) + 1);
        *reinterpret_cast<signed char*>(&eax61) = tmp8_62;
        *ebx58 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax61) + reinterpret_cast<uint32_t>(esi47));
    }
    __asm__("popad ");
}

void fun_407000() {
    __asm__("pushad ");
    fun_407006(__return_address());
}

struct s2 {
    uint32_t f0;
    signed char[10] pad14;
    signed char fe;
};

struct s3 {
    uint32_t f0;
    signed char[36] pad40;
    unsigned char f28;
};

signed char g27eb1251;

struct s4 {
    unsigned char f0;
    signed char[16] pad17;
    unsigned char f11;
    signed char[33] pad51;
    uint32_t f33;
    signed char[27] pad82;
    int32_t f52;
};

uint32_t g3e001a24;

int32_t* fun_d08cbb6f(int32_t a1);

void fun_40728d(struct s2* ecx, int32_t a2, int32_t a3) {
    unsigned char** esp4;
    int1_t below_or_equal5;
    void* edi6;
    void* edi7;
    int32_t eax8;
    signed char al9;
    signed char tmp8_10;
    int32_t edi11;
    int32_t edi12;
    unsigned char* v13;
    int32_t edi14;
    unsigned char* eax15;
    unsigned char** esp16;
    struct s2* eax17;
    unsigned char tmp8_18;
    uint1_t cf19;
    uint1_t zf20;
    int32_t edx21;
    int32_t edx22;
    struct s2* tmp32_23;
    int1_t pf24;
    uint1_t below_or_equal25;
    uint32_t* ecx26;
    uint32_t ebx27;
    int32_t* edi28;
    int32_t* edi29;
    struct s3* edx30;
    signed char dl31;
    unsigned char* esi32;
    struct s4* eax33;
    int32_t* esp34;
    unsigned char* edi35;
    signed char* edi36;
    uint1_t cf37;
    int1_t zf38;
    int32_t ecx39;
    struct s4* edi40;
    void* edi41;
    void* esi42;
    uint48_t v43;
    struct s4* cs44;
    uint32_t* esp45;
    uint1_t cf46;
    unsigned char bl47;
    uint32_t tmp32_48;
    uint32_t v49;
    int32_t ebx50;
    signed char bh51;
    int32_t ebp52;
    int32_t v53;
    int32_t* eax54;
    int32_t ecx55;
    unsigned char tmp8_56;
    uint1_t cf57;
    uint1_t cf58;
    unsigned char al59;

    esp4 = reinterpret_cast<unsigned char**>(__zero_stack_offset());
    if (below_or_equal5) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi6) + reinterpret_cast<uint32_t>(ecx) * 4 + 5) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi7) + reinterpret_cast<uint32_t>(ecx) * 4 + 5) << 1;
        goto a3;
    }
    *reinterpret_cast<signed char*>(&eax8) = reinterpret_cast<signed char>(al9 - 41);
    tmp8_10 = *reinterpret_cast<signed char*>(edi11 - 0x45b2a1a2);
    *reinterpret_cast<signed char*>(edi12 - 0x45b2a1a2) = *reinterpret_cast<signed char*>(&ecx);
    *reinterpret_cast<signed char*>(&ecx) = tmp8_10;
    __asm__("insd ");
    __asm__("xlatb ");
    if (0) {
        --esp4;
        v13 = reinterpret_cast<unsigned char*>(0xff);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1) - *reinterpret_cast<signed char*>(edi14 - 41));
        goto addr_4072d7_8;
    }
    if (__intrinsic()) {
        addr_4072d7_8:
        eax15 = reinterpret_cast<unsigned char*>(eax8 - 0x71f485f8);
        esp16 = esp4 - 1;
        v13 = reinterpret_cast<unsigned char*>(11);
        ecx->fe = reinterpret_cast<signed char>(ecx->fe >> -69);
    } else {
        eax17 = ecx;
        tmp8_18 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) + 29);
        cf19 = reinterpret_cast<uint1_t>(tmp8_18 < *reinterpret_cast<unsigned char*>(&eax17));
        *reinterpret_cast<unsigned char*>(&eax17) = tmp8_18;
        zf20 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) == 0);
        do {
            if (zf20) 
                goto addr_4072b1_12;
            eax17->f0 = eax17->f0 - (edx21 + reinterpret_cast<uint1_t>(eax17->f0 < edx22 + cf19));
            tmp32_23 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(eax17) - 0x4e95c04);
            cf19 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_23) < reinterpret_cast<uint32_t>(eax17));
            eax17 = tmp32_23;
            pf24 = __intrinsic();
            zf20 = reinterpret_cast<uint1_t>(eax17 == 0);
            below_or_equal25 = reinterpret_cast<uint1_t>(cf19 | zf20);
            do {
            } while (!below_or_equal25);
            __asm__("in eax, dx");
        } while (!cf19);
        goto addr_407282_17;
    }
    ecx26 = reinterpret_cast<uint32_t*>(0x755f4088);
    do {
        *ecx26 = *ecx26 & ebx27;
        *eax15 = reinterpret_cast<unsigned char>(*eax15 | *reinterpret_cast<unsigned char*>(&ecx26));
        ecx26 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx26) - 1);
    } while (reinterpret_cast<uint1_t>(!!ecx26) & reinterpret_cast<uint1_t>(*eax15 == 0));
    __asm__("out dx, al");
    *edi28 = *edi29 + reinterpret_cast<int32_t>(eax15);
    *reinterpret_cast<unsigned char*>(&edx30) = reinterpret_cast<unsigned char>(dl31 - g27eb1251);
    __asm__("fsub qword [ebp-0x3d]");
    esi32 = v13;
    eax33 = reinterpret_cast<struct s4*>(0xf7fb9670);
    esp34 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp16 + 1) & reinterpret_cast<uint16_t>(0xf7fb9670));
    *edi35 = reinterpret_cast<unsigned char>(*edi36 - *reinterpret_cast<unsigned char*>(&ecx26));
    cf37 = reinterpret_cast<uint1_t>(g3e001a24 < 0xfffffff0);
    zf38 = g3e001a24 == 0xfffffff0;
    __asm__("fstp dword [ebp+0xea1e87b]");
    if (cf37) {
    }
    ecx39 = reinterpret_cast<int32_t>(ecx26) - 1;
    if (reinterpret_cast<uint1_t>(!!ecx39) & reinterpret_cast<uint1_t>(!zf38)) {
        while (1) {
            *reinterpret_cast<unsigned char*>(&edi40->f0) = *esi32;
            edi41 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(edi40) - 1);
            esi42 = reinterpret_cast<void*>(esi32 - 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v43) + 2) = ecx39;
            __asm__("retf 0xec14");
            *reinterpret_cast<unsigned char*>(&eax33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax33) | 28);
            __asm__("in eax, dx");
            *reinterpret_cast<struct s4**>(&v43) = cs44;
            esp45 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esp34 - 1) - 2 + 4);
            __asm__("lodsb ");
            edx30->f0 = edx30->f0 | reinterpret_cast<uint32_t>(edi41);
            __asm__("rcr byte [edi-0xb], 1");
            __asm__("fild word [eax+0x49]");
            esp45[ecx39] = 0xf7fa5a5a;
            *reinterpret_cast<int16_t*>(&edx30) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax33) % *reinterpret_cast<signed char*>(&eax33->f0));
            eax33 = *reinterpret_cast<struct s4**>(&v43);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi42) - 8) = reinterpret_cast<signed char>(~*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi42) - 8));
            __asm__("fdivr qword [esp+0x38]");
            cf46 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax33) < 0xe9);
            *reinterpret_cast<unsigned char*>(&eax33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax33) - reinterpret_cast<unsigned char>(23 - cf46));
            do {
                *reinterpret_cast<unsigned char*>(&eax33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax33) - reinterpret_cast<unsigned char>(0x68 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax33) < reinterpret_cast<unsigned char>(0x68 + cf46))));
                __asm__("insb ");
                edi40 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(edi41) - 1);
                if (!__intrinsic()) 
                    break;
                ++esp45;
                *reinterpret_cast<unsigned char*>(&eax33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax33) + 74);
                cf46 = 0;
                edi41 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(eax33) & 0xb3a505bc);
                eax33 = edi40;
            } while (__intrinsic());
            break;
            edi40->f11 = reinterpret_cast<unsigned char>(edi40->f11 | *reinterpret_cast<unsigned char*>(&edx30));
            esi32 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi42) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint16_t>(eax33) - 0x5bf83877)));
            esp34 = reinterpret_cast<int32_t*>(esp45 - 1);
        }
        *reinterpret_cast<unsigned char*>(&eax33) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax33) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax33) + 1)) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax33->f0) < bl47));
        tmp32_48 = v49 + eax33->f52;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(eax33) + reinterpret_cast<int32_t>(edx30)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint16_t>(eax33) + reinterpret_cast<int32_t>(edx30)) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax33) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint16_t>(eax33) + reinterpret_cast<int32_t>(edx30)) < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax33) + reinterpret_cast<uint1_t>(tmp32_48 < v49)))));
        *reinterpret_cast<unsigned char*>(&eax33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax33) + 16);
        eax33->f33 = eax33->f33 & tmp32_48;
        __asm__("out 0x33, eax");
    } else {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx50) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(bh51 + *reinterpret_cast<unsigned char*>(&edx30)) + cf37);
        ebp52 = v53;
        eax54 = fun_d08cbb6f(ebp52);
        ecx55 = ecx39 - 1;
        tmp8_56 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx55 - 0x2897179b) + *reinterpret_cast<signed char*>(&ecx55))));
        cf57 = reinterpret_cast<uint1_t>(tmp8_56 < *reinterpret_cast<unsigned char*>(ecx55 - 0x2897179b));
        *reinterpret_cast<unsigned char*>(ecx55 - 0x2897179b) = tmp8_56;
        __asm__("sti ");
        cf58 = reinterpret_cast<uint1_t>(edx30->f28 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx55) + 1) + cf57));
        edx30->f28 = reinterpret_cast<unsigned char>(edx30->f28 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx55) + 1) + cf58));
        if (edx30->f28 == static_cast<uint32_t>(cf58)) {
            *reinterpret_cast<signed char*>(&ebx50) = -19;
            ++ebp52;
            al59 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax54) - reinterpret_cast<unsigned char>(22 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax54) < reinterpret_cast<unsigned char>(22 + cf58)))) ^ 12);
            *reinterpret_cast<unsigned char*>(&eax54) = reinterpret_cast<unsigned char>(al59 - reinterpret_cast<unsigned char>(53 + reinterpret_cast<uint1_t>(al59 < 53)));
            __asm__("fild dword [edx]");
            __asm__("insb ");
            *eax54 = ebx50;
            ecx55 = 0;
        }
        *reinterpret_cast<int32_t*>(ebp52 - 4) = ecx55;
        goto eax54;
    }
    addr_4072b1_12:
    addr_407282_17:
    if (!pf24) {
    }
}

struct s5 {
    signed char[12] pad12;
    unsigned char* fc;
};

void fun_4072b3(int32_t ecx) {
    unsigned char* esi2;
    unsigned char* esi3;
    unsigned char dh4;
    struct s5* ebx5;

    *esi2 = reinterpret_cast<unsigned char>(*esi3 | dh4);
    *ebx5->fc = reinterpret_cast<unsigned char>(*ebx5->fc ^ *reinterpret_cast<unsigned char*>(&ecx));
    goto 0x407275;
}

struct s6 {
    signed char[120] pad120;
    unsigned char f78;
};

struct s7 {
    signed char[120] pad120;
    unsigned char f78;
};

struct s8 {
    signed char[42] pad42;
    unsigned char f2a;
};

struct s9 {
    signed char[42] pad42;
    signed char f2a;
};

struct s10 {
    unsigned char f0;
    signed char[96] pad97;
    void* f61;
};

struct s11 {
    signed char[51] pad51;
    signed char f33;
};

struct s12 {
    signed char[51] pad51;
    signed char f33;
};

struct s13 {
    signed char[112] pad112;
    int32_t f70;
};

unsigned char g301332ff;

void fun_407459(int32_t ecx) {
    uint32_t eflags2;
    int32_t ebx3;
    int1_t zf4;
    struct s6* ebp5;
    struct s7* ebp6;
    unsigned char ah7;
    void* eax8;
    signed char al9;
    uint1_t cf10;
    struct s8* edx11;
    struct s9* edx12;
    struct s10* esi13;
    int32_t esi14;
    int32_t edx15;
    unsigned char* eax16;
    struct s11* ebp17;
    struct s12* ebp18;
    uint32_t* esp19;
    uint32_t tmp32_20;
    int32_t edi21;
    uint1_t cf22;
    int32_t edi23;
    int32_t edi24;
    uint1_t zf25;
    int32_t edi26;
    uint1_t below_or_equal27;
    int32_t ecx28;
    struct s13* ebp29;
    void* ebp30;
    uint1_t cf31;
    uint1_t less_or_equal32;
    uint1_t below_or_equal33;
    int32_t edx34;
    uint1_t zf35;
    unsigned char* tmp32_36;
    unsigned char* edi37;
    int1_t zf38;
    int1_t of39;
    unsigned char* tmp32_40;
    uint1_t zf41;
    unsigned char* tmp32_42;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags2) + 1) = 1;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx3) + 1) = -1;
    if (!zf4) {
        ebp5->f78 = reinterpret_cast<unsigned char>(ebp6->f78 & ah7);
        __asm__("arpl [gs:ebp+0x74], si");
        __asm__("outsb ");
        __asm__("arpl [ebp+0x6e], bp");
    }
    *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(al9 + 21) + cf10);
    edx11->f2a = reinterpret_cast<unsigned char>(edx12->f2a - *reinterpret_cast<unsigned char*>(&eax8));
    esi13 = reinterpret_cast<struct s10*>(esi14 + edx15);
    __asm__("lsl edi, bp");
    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags2) + 1) = 0;
    *reinterpret_cast<int1_t*>(&eflags2) = __undefined();
    eax16 = reinterpret_cast<unsigned char*>(__zero_stack_offset());
    ebp17->f33 = 0;
    *reinterpret_cast<int1_t*>(&eflags2) = __intrinsic();
    *reinterpret_cast<int1_t*>(&eflags2) = __undefined();
    *reinterpret_cast<int1_t*>(&eflags2) = ebp18->f33 == 0;
    *reinterpret_cast<int1_t*>(&eflags2) = __intrinsic();
    esp19 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(eax8) - 4);
    *esp19 = eflags2 & 0xfcffff;
    *reinterpret_cast<void**>(&eax16) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax16)) | 49);
    tmp32_20 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(edi21 - 5) + ebx3);
    cf22 = reinterpret_cast<uint1_t>(tmp32_20 < *reinterpret_cast<uint32_t*>(edi23 - 5));
    *reinterpret_cast<uint32_t*>(edi24 - 5) = tmp32_20;
    zf25 = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(edi26 - 5) == 0);
    below_or_equal27 = reinterpret_cast<uint1_t>(cf22 | zf25);
    ecx28 = ecx - 1;
    if (!(reinterpret_cast<uint1_t>(!!ecx28) & reinterpret_cast<uint1_t>(!zf25))) {
        if (zf25) 
            goto addr_407535_5;
        ebp29 = reinterpret_cast<struct s13*>(reinterpret_cast<int32_t>(ebp30) - 1);
        if (!cf22) 
            goto addr_407568_8; else 
            goto addr_4074f5_9;
    }
    while (zf25) {
        while (!below_or_equal27) {
            *reinterpret_cast<void**>(&eax16) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax16)) ^ 24);
            esp19 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp19) - 1);
            __asm__("popad ");
            if (!1) 
                goto addr_407502_13;
            cf31 = reinterpret_cast<uint1_t>(esi13->f0 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax16) + 1));
            less_or_equal32 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi13->f0) <= *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax16) + 1));
            if (0) 
                goto addr_4075a1_15;
            less_or_equal32 = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax16) <= reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(esi13->f61) + cf31));
            cf22 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax16) < reinterpret_cast<int32_t>(esi13->f61) + cf31);
            below_or_equal33 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax16) <= reinterpret_cast<int32_t>(esi13->f61) + cf22);
            eax16 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax16) - (reinterpret_cast<int32_t>(esi13->f61) + cf22));
            do {
                if (cf22) 
                    goto addr_40759b_19;
                ++edx34;
                zf35 = reinterpret_cast<uint1_t>(edx34 == 0);
                less_or_equal32 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(edx34 < 0 != __intrinsic()) | zf35);
                below_or_equal33 = reinterpret_cast<uint1_t>(cf22 | zf35);
                __asm__("popad ");
                __asm__("arpl [ebx+0x67], bp");
            } while (cf22);
            do {
                *reinterpret_cast<unsigned char*>(&edx34) = 0x6d;
                tmp32_36 = edi37;
                edi37 = eax16;
                eax16 = tmp32_36;
                ecx28 = 0x63302250;
                addr_407535_5:
                ebp29 = reinterpret_cast<struct s13*>(reinterpret_cast<int32_t>(ebp29) + 1);
                if (cf22) 
                    goto addr_407539_23;
                __asm__("fdivr qword [edx+0x847b76f]");
                do {
                    addr_407568_8:
                    ebp29 = reinterpret_cast<struct s13*>(reinterpret_cast<int32_t>(ebp29) - 1);
                    __asm__("popad ");
                    esp19 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp19) + 2);
                    ++ecx28;
                    zf38 = ecx28 == 0;
                    of39 = __intrinsic();
                    if (cf22) 
                        goto addr_4075d7_26;
                    if (!cf22) 
                        goto addr_407580_28;
                    if (!cf22) 
                        goto addr_4074f5_9;
                } while (of39);
            } while (ecx28 < 0);
            goto addr_40757d_32;
            addr_4074f5_9:
            __asm__("popad ");
            *reinterpret_cast<void**>(&eax16) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax16)) | 0xec);
            cf22 = 0;
            below_or_equal27 = 0;
        }
        goto addr_40753c_33;
        addr_407539_23:
        cf22 = 0;
        zf25 = 1;
        below_or_equal27 = 1;
    }
    addr_40753d_34:
    *eax16 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax16 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax16))) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(esi13) + ebp29->f70 + cf22 < reinterpret_cast<uint32_t>(esi13)));
    *reinterpret_cast<void**>(&eax16) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax16)) ^ 82);
    if (*reinterpret_cast<void**>(&eax16)) {
        *reinterpret_cast<struct s13**>(esp19 - 1) = ebp29;
        __asm__("outsb ");
        __asm__("salc ");
        __asm__("insd ");
    }
    addr_40753c_33:
    goto addr_40753d_34;
    addr_407502_13:
    g301332ff = reinterpret_cast<unsigned char>(g301332ff ^ 0x6d);
    addr_4075a1_15:
    __asm__("popad ");
    __asm__("insb ");
    if (less_or_equal32) {
    }
    addr_4075a5_38:
    *eax16 = reinterpret_cast<unsigned char>(*eax16 + reinterpret_cast<uint32_t>(eax16));
    *eax16 = reinterpret_cast<unsigned char>(*eax16 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax16)));
    *eax16 = reinterpret_cast<unsigned char>(*eax16 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax16)));
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax16) + reinterpret_cast<uint32_t>(eax16)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax16) + reinterpret_cast<uint32_t>(eax16)) - 1);
    addr_40759b_19:
    if (below_or_equal33) {
        goto addr_4075a5_38;
    } else {
        if (cf22) {
            __asm__("a16 outsb ");
            goto addr_4075a1_15;
        }
    }
    addr_4075d7_26:
    addr_407580_28:
    if (of39) {
    }
    __asm__("outsb ");
    if (!of39) 
        goto addr_40758c_46;
    addr_40758c_46:
    if (!zf38) {
        if (!cf22) {
            tmp32_40 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax16 + 0x60e56572) + cf22);
            cf22 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_40) < reinterpret_cast<uint32_t>(eax16));
            eax16 = tmp32_40;
            zf41 = reinterpret_cast<uint1_t>(eax16 == 0);
            less_or_equal32 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax16) < reinterpret_cast<int32_t>(0) != __intrinsic()) | zf41);
            below_or_equal33 = reinterpret_cast<uint1_t>(cf22 | zf41);
            __asm__("out dx, al");
            __asm__("insd ");
            __asm__("outsd ");
            goto addr_40759b_19;
        }
    }
    addr_40757d_32:
    tmp32_42 = eax16 + 0x6f076566;
    cf22 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_42) < reinterpret_cast<uint32_t>(eax16));
    eax16 = tmp32_42;
    zf38 = eax16 == 0;
    of39 = __intrinsic();
    goto addr_407580_28;
}

void fun_40746f() {
    unsigned char* eax1;
    unsigned char al2;
    unsigned char* eax3;

    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(al2 | *eax3);
    *eax1 = reinterpret_cast<unsigned char>(*eax1 & *reinterpret_cast<unsigned char*>(&eax1));
    __asm__("arpl [ecx+0x64], sp");
    __asm__("insd ");
}

struct s14 {
    signed char[110] pad110;
    int32_t f6e;
};

void fun_407485(struct s14* ecx) {
    int32_t ebx2;

    ebx2(__return_address());
    goto ecx->f6e;
}

void fun_40755f() {
}

void fun_407251() {
    int32_t ebx1;
    int32_t ebx2;
    unsigned char al3;
    uint32_t eax4;
    unsigned char al5;
    int32_t ebx6;
    int32_t ebx7;
    unsigned char ah8;
    uint32_t eax9;
    signed char* edi10;

    *reinterpret_cast<unsigned char*>(ebx1 - 0x74dcf714) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx2 - 0x74dcf714) & al3);
    *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<unsigned char>(al5 | 0x8b);
    *reinterpret_cast<unsigned char*>(ebx6 - 0x76dacfd8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx7 - 0x76dacfd8) | ah8);
    __asm__("aas ");
    eax9 = eax4 - (0x6dbb052c + reinterpret_cast<uint1_t>(eax4 < 0x6dbb052c)) + 1;
    if (*edi10 != *reinterpret_cast<signed char*>(&eax9)) 
        goto 0x4072df;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(__return_address()) + 1 - 8) = eax9;
}

void fun_4072c9() {
    if (!__intrinsic()) 
        goto 0x407314; else 
        goto "???";
}

struct s15 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_4073ea() {
    int32_t* esp1;
    struct s15* ebp2;
    int1_t less3;
    int32_t esi4;
    int32_t esi5;

    esp1 = &ebp2->f4;
    __asm__("sti ");
    if (less3) {
        esp1 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp1) - 1);
        __asm__("retf 0x16a");
        __asm__("aam 0x20");
        esi4 = esi5 - 1 + 1;
        __asm__("insb ");
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp1 + esi4 * 2) + 66) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp1 + esi4 * 2) + 66) + 52);
    }
    __asm__("retf ");
    goto *esp1;
}

void fun_40740c(int32_t ecx) {
    int1_t cf2;
    uint32_t* edx3;
    uint32_t* edx4;
    uint32_t esi5;
    unsigned char* ebx6;
    unsigned char* ebx7;
    unsigned char al8;
    int32_t* edx9;
    uint32_t edx10;
    uint32_t* eax11;
    unsigned char al12;
    signed char al13;
    int32_t esi14;
    int32_t esi15;
    unsigned char* ebx16;
    unsigned char* ebx17;
    unsigned char* eax18;
    int32_t esi19;
    unsigned char* eax20;
    unsigned char* ebx21;
    unsigned char* ebx22;
    unsigned char* ebx23;
    unsigned char bh24;
    void* eax25;
    int32_t esi26;
    void** eax27;
    int32_t esi28;
    int32_t* esp29;
    void* edx30;
    void** edi31;
    int32_t esi32;
    int32_t ebp33;

    if (!cf2) {
    }
    *edx3 = *edx4 | esi5;
    *ebx6 = reinterpret_cast<unsigned char>(*ebx7 & al8);
    edx9 = reinterpret_cast<int32_t*>(edx10 | *eax11);
    al12 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(al13 + 24)));
    esi14 = esi15 + *edx9;
    *ebx16 = reinterpret_cast<unsigned char>(*ebx17 & al12);
    *reinterpret_cast<unsigned char*>(&eax18) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al12 - reinterpret_cast<unsigned char>(32 + reinterpret_cast<uint1_t>(al12 < 32))) & 32);
    esi19 = esi14 + *edx9;
    *eax18 = 0;
    *reinterpret_cast<unsigned char*>(&eax20) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax18) ^ 50);
    *ebx21 = reinterpret_cast<unsigned char>(*ebx22 & *reinterpret_cast<unsigned char*>(&eax20));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx23) + 1) = reinterpret_cast<unsigned char>(bh24 ^ *eax20);
    eax25 = reinterpret_cast<void*>(eax20 - 1);
    esi26 = esi19 + *edx9;
    *ebx23 = reinterpret_cast<unsigned char>(*ebx23 & *reinterpret_cast<unsigned char*>(&eax25));
    *ebx23 = reinterpret_cast<unsigned char>(*ebx23 & *reinterpret_cast<unsigned char*>(&eax25));
    eax27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 1 - 1 - 4 - 4);
    esi28 = esi26 + *edx9;
    __asm__("pushad ");
    esp29 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax25) + 4 - 4);
    *esp29 = 0x6c8a2883;
    __asm__("daa ");
    edx30 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx9) + 1);
    *edi31 = *reinterpret_cast<void**>(&eax27);
    esi32 = esi28 + 1;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx30) + esi32 * 2 + 98) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx30) + esi32 * 2 + 98)));
    *(esp29 - 1) = ebp33;
    __asm__("outsb ");
    __asm__("popad ");
}

struct s16 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s17 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s18 {
    signed char[111] pad111;
    signed char f6f;
};

struct s19 {
    signed char[1] pad1;
    signed char f1;
};

void fun_40748a(int32_t ecx) {
    struct s16* ebx2;
    struct s17* ebx3;
    unsigned char dh4;
    struct s18* ebx5;
    uint32_t eax6;
    uint32_t eax7;
    int1_t sf8;
    int1_t of9;
    unsigned char bl10;
    uint32_t tmp32_11;
    int32_t eax12;
    uint32_t eax13;
    struct s19* edx14;
    signed char* edx15;
    uint32_t eax16;
    void* ebp17;

    ebx2->f6f = reinterpret_cast<unsigned char>(ebx3->f6f & dh4);
    if (ebx5->f6f) {
        eax6 = eax7 | 0x64616f6c;
        __asm__("outsd ");
        sf8 = __intrinsic();
        of9 = 0;
        __asm__("in al, dx");
        if (bl10 ^ *reinterpret_cast<unsigned char*>(&eax6)) 
            goto 0x407584;
    } else {
        tmp32_11 = reinterpret_cast<uint32_t>(eax12 - 0x236c1387);
        eax13 = tmp32_11;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx14) + 1) = 0x73;
        __asm__("insd ");
        edx15 = &edx14->f1;
        sf8 = reinterpret_cast<int32_t>(edx15) < 0;
        of9 = __intrinsic();
        __asm__("arpl [edx], di");
        __asm__("insd ");
        if (tmp32_11 >= eax16) {
            *edx15 = reinterpret_cast<signed char>(*edx15 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax13) + 1));
            goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp17) - 1 - 1 + 0x72);
        }
    }
    __asm__("aaa ");
    if (of9) 
        goto 0x407587;
    __asm__("popad ");
    if (!sf8) 
        goto 0x407531; else 
        goto "???";
}

unsigned char g81e0a73;

void fun_4074b4(int32_t ecx) {
    int1_t cf2;
    int1_t cf3;
    unsigned char ah4;
    unsigned char* esi5;
    unsigned char* esi6;
    int32_t edx7;
    int32_t edx8;
    signed char dl9;

    if (cf2) 
        goto 0x407525;
    if (cf3) 
        goto 0x4074f2;
    g81e0a73 = reinterpret_cast<unsigned char>(g81e0a73 & ah4);
    __asm__("salc ");
    *esi5 = reinterpret_cast<unsigned char>(*esi6 | 64);
    *reinterpret_cast<signed char*>(ecx + edx7) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx + edx8) + dl9);
}

void fun_40722f() {
    void*** esp1;
    void* ebp2;
    int32_t* esp3;
    int32_t* esp4;
    int32_t* eax5;
    unsigned char al6;
    unsigned char ch7;

    esp1 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp2) + 4 - 4);
    *esp1 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esp3 = reinterpret_cast<int32_t*>(esp1 - 1);
    *esp3 = 0;
    esp4 = esp3 - 1;
    *esp4 = 0x75ff5a92;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<unsigned char>(al6 | ch7);
    *eax5 = *eax5 + reinterpret_cast<int32_t>(eax5);
    __asm__("in al, dx");
    goto (esp4 + 1)[1];
}

int32_t gedbbd8cd;

void fun_407360(int32_t ecx) {
    int32_t eax2;

    gedbbd8cd = eax2;
}

struct s20 {
    signed char[2] pad2;
    signed char* f2;
};

signed char gf6000041;

struct s21 {
    uint32_t f0;
    signed char[4] pad8;
    int32_t f8;
    signed char[4] pad16;
    int32_t* f10;
};

struct s22 {
    struct s22* f0;
    uint32_t f2;
    signed char[208678736] pad208678744;
    unsigned char fc702f58;
};

uint32_t gdddbff15;

void fun_40719d(uint32_t* ecx) {
    uint32_t* edx2;
    uint32_t* edx3;
    signed char* eax4;
    signed char** esp5;
    struct s20* edi6;
    signed char* esi7;
    void* edi8;
    void* esi9;
    void* esi10;
    signed char* eax11;
    int32_t edx12;
    signed char dh13;
    signed char bh14;
    int32_t* esp15;
    struct s21* esp16;
    int32_t eax17;
    struct s22* ebx18;
    struct s22* esp19;
    void** esp20;
    void** esp21;
    int32_t* esp22;
    int32_t* esp23;
    int32_t* esp24;
    struct s22* esp25;
    unsigned char tmp8_26;
    uint1_t cf27;
    uint1_t zf28;

    *ecx = *ecx & reinterpret_cast<uint32_t>(ecx);
    *edx2 = *edx3 | reinterpret_cast<uint32_t>(eax4);
    esp5 = &edi6->f2;
    *eax4 = *esi7;
    edi8 = reinterpret_cast<void*>(eax4 + 1);
    esi9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi10) + 1);
    eax11 = *esp5;
    gf6000041 = reinterpret_cast<signed char>(gf6000041 - 3);
    *eax11 = reinterpret_cast<signed char>(*eax11 + *reinterpret_cast<signed char*>(&eax11));
    __asm__("aas ");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx12) + 1) = reinterpret_cast<signed char>(dh13 + bh14);
    esp15 = reinterpret_cast<int32_t*>(esp5 + 1 - 1);
    *esp15 = edx12;
    esp16 = reinterpret_cast<struct s21*>(esp15 - 1);
    esp16->f0 = *ecx;
    __asm__("rol byte [eax-0x75], 0x4c");
    while (1) {
        *esp16->f10 = esp16->f8;
        eax17 = 0x77ffb903;
        __asm__("out dx, eax");
        *reinterpret_cast<unsigned char*>(&ebx18) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx18) + 3)));
        esp19 = reinterpret_cast<struct s22*>(reinterpret_cast<int32_t>(esp16) - 4);
        esp19->f0 = ebx18;
        esp20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp19) - 4);
        *esp20 = esi9;
        esp21 = esp20 - 1;
        *esp21 = edi8;
        esp22 = reinterpret_cast<int32_t*>(esp21 - 1);
        *esp22 = 0x77ffb903;
        esp23 = esp22 - 1;
        *esp23 = 0xfe;
        esp24 = esp23 - 1;
        *esp24 = 0x401000;
        esp16 = reinterpret_cast<struct s21*>(esp24 - 1);
        esp16->f0 = gdddbff15;
        do {
            ebx18->fc702f58 = reinterpret_cast<unsigned char>(ebx18->fc702f58 & 6);
            if (esi9 == -1) 
                goto 0x407221;
            __asm__("fdiv st7, st0");
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) & 36);
            if (!*reinterpret_cast<unsigned char*>(&eax17)) 
                goto 0x407225;
            esi9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi9) + reinterpret_cast<int32_t>(esi9) * 2);
            esp25 = reinterpret_cast<struct s22*>(reinterpret_cast<int32_t>(esp16) - 4);
            esp25->f0 = esp25;
            esp16 = reinterpret_cast<struct s21*>(reinterpret_cast<int32_t>(esp25) + 2);
            --eax17;
            if (eax17 < 0 != __intrinsic()) 
                break;
            tmp8_26 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax17)));
            cf27 = reinterpret_cast<uint1_t>(tmp8_26 < *reinterpret_cast<unsigned char*>(&eax17));
            *reinterpret_cast<unsigned char*>(&eax17) = tmp8_26;
            zf28 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) == 0);
        } while (!zf28);
        break;
    }
    if (!reinterpret_cast<uint1_t>(cf27 | zf28)) {
    }
}

void fun_40724c() {
    int1_t pf1;
    int32_t esi2;

    if (!pf1) 
        goto 0x40724a;
    goto esi2;
}
