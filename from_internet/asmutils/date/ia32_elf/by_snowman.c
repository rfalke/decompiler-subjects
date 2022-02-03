
void fun_80482c2() {
    signed char al1;
    int1_t zf2;
    signed char* esi3;
    signed char* v4;
    signed char* edi5;
    signed char* edi6;
    signed char* ebp7;
    int32_t ecx8;
    int32_t ebp9;
    void* ebp10;

    while (al1) {
        if (al1 != 37 || (zf2 = *esi3 == 0, zf2)) {
            addr_80482c1_3:
        } else {
            __asm__("lodsb ");
            v4 = edi5;
            edi6 = ebp7;
            ecx8 = 37;
            do {
                if (!ecx8) 
                    break;
                --ecx8;
                zf2 = *edi6 == al1;
                ++edi6;
                ++esi3;
            } while (!zf2);
            edi5 = v4;
            if (!zf2) 
                goto addr_80482bd_8; else 
                goto addr_80482dc_9;
        }
        *edi5 = al1;
        ++edi5;
        ++esi3;
        continue;
        addr_80482bd_8:
        *edi5 = 37;
        ++edi5;
        goto addr_80482c1_3;
        addr_80482dc_9:
        *reinterpret_cast<signed char*>(&ecx8) = *reinterpret_cast<signed char*>(ebp9 + ecx8 - 0x74);
        al1 = reinterpret_cast<signed char>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp10) + ecx8 + 0x69)());
        esi3 = esi3;
    }
    return;
}

struct s0 {
    uint32_t f0;
    signed char[28] pad32;
    uint32_t f20;
    uint32_t f24;
    signed char[4] pad44;
    uint32_t f2c;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    signed char[24] pad28;
    int32_t f1c;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s0* fun_804804c() {
    struct s1* esp1;
    void* ebp2;
    struct s2* esp3;
    int32_t* esp4;
    int32_t* esp5;
    struct s3* esp6;

    esp1 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(ebp2) + 4 - 4);
    esp1->f0 = 5;
    esp3 = reinterpret_cast<struct s2*>(&esp1->f4);
    __asm__("int 0x80");
    if (!__intrinsic()) {
        __asm__("pushad ");
        esp4 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp3) - 4);
        *esp4 = 0x6c;
        __asm__("int 0x80");
        esp5 = esp4 + 1 - 1;
        *esp5 = 1;
        esp6 = reinterpret_cast<struct s3*>(esp5 + 1 - 1);
        esp6->f0 = 1;
        esp3 = reinterpret_cast<struct s2*>(&esp6->f4);
        __asm__("int 0x80");
        esp3->f1c = 0xc0;
        __asm__("popad ");
    }
    goto esp3->f0;
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
    void** eax19;
    signed char al20;
    signed char* eax21;
    void** eax22;
    void* tmp8_23;
    uint1_t cf24;
    signed char dh25;

    if (less_or_equal2) {
        *ecx = reinterpret_cast<signed char>(*ecx + eax3);
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<uint32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*eax22) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(*eax22 == 0))) {
            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *reinterpret_cast<unsigned char*>(eax22 + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 + 0x80000804) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
            __asm__("aam 0x5");
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        }
    }
    tmp8_23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf24 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_23) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_23;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf24);
    *ecx = reinterpret_cast<signed char>(*ecx + dh25);
}

void fun_80484e3() {
}

struct s4 {
    signed char[77] pad77;
    signed char f4d;
    signed char[39] pad117;
    signed char f75;
};

struct s5 {
    signed char[117] pad117;
    int32_t f75;
};

struct s6 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s7 {
    signed char[111] pad111;
    signed char f6f;
};

struct s8 {
    signed char[101] pad101;
    signed char f65;
};

struct s9 {
    signed char[101] pad101;
    signed char f65;
};

struct s10 {
    signed char[114] pad114;
    signed char f72;
};

struct s11 {
    signed char[114] pad114;
    signed char f72;
};

struct s12 {
    signed char[77] pad77;
    signed char f4d;
};

struct s13 {
    signed char[97] pad97;
    unsigned char f61;
    signed char[1] pad99;
    signed char f63;
};

struct s14 {
    signed char[101] pad101;
    unsigned char f65;
    signed char[9] pad111;
    unsigned char f6f;
};

struct s15 {
    signed char[99] pad99;
    unsigned char f63;
};

struct s16 {
    signed char[117] pad117;
    unsigned char f75;
};

unsigned char g62252061;

unsigned char g54252065;

void fun_80484e7(struct s4* ecx) {
    struct s5* ebx2;
    int32_t* eax3;
    struct s6* ebp4;
    struct s7* ebp5;
    void* ebp6;
    int32_t esi7;
    void* ebp8;
    int32_t esi9;
    signed char dl10;
    struct s8* edi11;
    struct s9* edi12;
    signed char dl13;
    int32_t ebp14;
    int32_t ebp15;
    signed char dl16;
    struct s10* esi17;
    struct s11* esi18;
    struct s12* eax19;
    uint1_t cf20;
    struct s13* ebp21;
    void* ebp22;
    int1_t sf23;
    unsigned char tmp8_24;
    int1_t cf25;
    void* edx26;
    void* edx27;
    uint1_t zf28;
    int1_t of29;
    struct s14* esi30;
    void* esi31;
    int1_t sf32;
    uint1_t below_or_equal33;
    struct s15* edi34;
    unsigned char tmp8_35;
    uint1_t cf36;
    void* edx37;
    unsigned char tmp8_38;
    int1_t cf39;
    struct s16* edx40;
    unsigned char tmp8_41;
    unsigned char tmp8_42;
    int16_t di43;
    uint1_t cf44;
    int16_t di45;
    int16_t di46;
    void* edi47;
    unsigned char tmp8_48;

    eax3 = reinterpret_cast<int32_t*>(ebx2->f75(__return_address()));
    __asm__("outsb ");
    ebp4->f6f = reinterpret_cast<unsigned char>(ebp5->f6f + *reinterpret_cast<unsigned char*>(&ecx));
    __asm__("outsb ");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp6) + esi7 * 2 + 0x65) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp8) + esi9 * 2 + 0x65) + dl10);
    edi11->f65 = reinterpret_cast<signed char>(edi12->f65 + dl13);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax3) + ebp14 * 2 + 0x75) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax3) + ebp15 * 2 + 0x75) + dl16);
    esi17->f72 = reinterpret_cast<signed char>(esi18->f72 + *reinterpret_cast<signed char*>(&eax3));
    eax19 = reinterpret_cast<struct s12*>(*eax3 * 0x746153);
    cf20 = __intrinsic();
    if (!__undefined()) {
        addr_8048575_2:
        goto addr_804857a_3;
    } else {
        __asm__("popad ");
    }
    ebp21 = reinterpret_cast<struct s13*>(reinterpret_cast<int32_t>(ebp22) - 1);
    sf23 = reinterpret_cast<int32_t>(ebp21) < 0;
    __asm__("outsd ");
    __asm__("outsb ");
    __asm__("popad ");
    if (ebp21) {
        addr_804857a_3:
        __asm__("popad ");
        goto addr_804857b_7;
    } else {
        if (!cf20) {
            addr_804857b_7:
            if (!cf20) {
                tmp8_24 = reinterpret_cast<unsigned char>(ebp21->f61 + *reinterpret_cast<unsigned char*>(&ecx));
                cf25 = tmp8_24 < ebp21->f61;
                ebp21->f61 = tmp8_24;
                if (!cf25) {
                    goto addr_8048585_13;
                }
            }
        } else {
            __asm__("popad ");
            __asm__("outsb ");
            if (!cf20) {
                addr_8048585_13:
                ebp21 = reinterpret_cast<struct s13*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(eax19) + 74) * 0x656e75);
                edx26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx27) - 1);
                if (edx26) 
                    goto addr_80485fe_16;
            } else {
                __asm__("popad ");
                if (!sf23) 
                    goto addr_8048524_18; else 
                    goto addr_8048524_18;
            }
        }
    }
    ecx = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(ecx) + 1);
    zf28 = reinterpret_cast<uint1_t>(ecx == 0);
    of29 = __intrinsic();
    if (!zf28) {
        addr_80485fe_16:
    } else {
        if (!zf28) {
        }
    }
    addr_8048524_18:
    __asm__("popad ");
    esi30 = reinterpret_cast<struct s14*>(reinterpret_cast<int32_t>(esi31) + 1);
    zf28 = reinterpret_cast<uint1_t>(esi30 == 0);
    sf32 = reinterpret_cast<int32_t>(esi30) < 0;
    of29 = __intrinsic();
    below_or_equal33 = reinterpret_cast<uint1_t>(cf20 | zf28);
    if (!cf20) {
        __asm__("popad ");
        __asm__("popad ");
        if (zf28) {
            addr_80485ad_27:
            if (!below_or_equal33) {
                __asm__("insd ");
                ebp21->f63 = reinterpret_cast<signed char>(ebp21->f63 + *reinterpret_cast<signed char*>(&eax19));
                __asm__("insd ");
                goto addr_80485be_30;
            }
        } else {
            if (cf20) {
                goto addr_804859f_33;
            } else {
                __asm__("popad ");
                if (!sf32) 
                    goto addr_804853d_35; else 
                    goto addr_804853d_35;
            }
        }
    }
    if (of29) {
    }
    addr_804859f_33:
    __asm__("insd ");
    edi34->f63 = reinterpret_cast<unsigned char>(edi34->f63 + *reinterpret_cast<unsigned char*>(&ecx));
    if (edi34->f63) {
        tmp8_35 = reinterpret_cast<unsigned char>(esi30->f6f + *reinterpret_cast<unsigned char*>(&ecx));
        cf36 = reinterpret_cast<uint1_t>(tmp8_35 < esi30->f6f);
        esi30->f6f = tmp8_35;
        below_or_equal33 = reinterpret_cast<uint1_t>(cf36 | reinterpret_cast<uint1_t>(esi30->f6f == 0));
        goto addr_80485ad_27;
    }
    addr_804853d_35:
    edx26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx37) - 1);
    __asm__("popad ");
    __asm__("outsb ");
    tmp8_38 = reinterpret_cast<unsigned char>(esi30->f65 + *reinterpret_cast<signed char*>(&eax19));
    cf39 = tmp8_38 < esi30->f65;
    esi30->f65 = tmp8_38;
    ebp21 = reinterpret_cast<struct s13*>(reinterpret_cast<int32_t>(ebp21) - 1);
    __asm__("popad ");
    ecx = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(ecx) + 1);
    if (__intrinsic()) {
        addr_80485be_30:
        ecx->f4d = reinterpret_cast<signed char>(ecx->f4d + *reinterpret_cast<signed char*>(&eax19));
        eax19->f4d = reinterpret_cast<signed char>(eax19->f4d + *reinterpret_cast<signed char*>(&edx26));
        goto addr_80485c2_41;
    } else {
        ebp21->f61 = reinterpret_cast<unsigned char>(ebp21->f61 + *reinterpret_cast<unsigned char*>(&ecx));
        edx40 = reinterpret_cast<struct s16*>(reinterpret_cast<int32_t>(edx26) - 1);
        if (edx40) {
            addr_80485c2_41:
            tmp8_41 = reinterpret_cast<unsigned char>(g62252061 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax19) + 1));
            g62252061 = tmp8_41;
            g54252065 = 0;
        } else {
            edx40->f75 = reinterpret_cast<unsigned char>(edx40->f75 + *reinterpret_cast<unsigned char*>(&ecx));
            __asm__("insb ");
            ecx->f75 = reinterpret_cast<signed char>(ecx->f75 + *reinterpret_cast<signed char*>(&eax19));
            tmp8_42 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp21) + di43) + 0x65) + *reinterpret_cast<signed char*>(&edx40));
            cf44 = reinterpret_cast<uint1_t>(tmp8_42 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp21) + di45) + 0x65));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp21) + di46) + 0x65) = tmp8_42;
        }
        edi34 = reinterpret_cast<struct s15*>(reinterpret_cast<int32_t>(edi47) - 1);
        __asm__("arpl [eax+eax+0x4e], si");
        __asm__("outsd ");
        __asm__("arpl [gs:eax], ax");
        edx27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx40) - 1);
        __asm__("popad ");
        __asm__("outsb ");
        if (!edx27) {
            if (!cf44) {
                tmp8_48 = reinterpret_cast<unsigned char>(esi30->f65 + *reinterpret_cast<signed char*>(&eax19));
                cf20 = reinterpret_cast<uint1_t>(tmp8_48 < esi30->f65);
                esi30->f65 = tmp8_48;
                goto addr_8048575_2;
            }
        }
    }
}

void fun_80485d2() {
}

void* g8048632;

uint32_t* g80485e0;

int32_t g804863c;

struct s0* g8048640;

void* g8048628;

unsigned char g804862c;

uint32_t g804862d;

uint32_t g80485e4;

uint32_t g80485e8;

uint32_t g80485ec;

unsigned char g80485f8;

uint32_t g80485f4;

uint32_t g80485fc;

uint32_t g8048600;

int32_t g80485f0;

unsigned char g8048624;

signed char g8048620;

uint32_t g8048604;

int32_t g8048608;

uint32_t g804860c;

uint32_t g8048610;

uint32_t g8048614;

int32_t g8048618;

uint32_t g804861c;

signed char g8048654;

struct s17 {
    int32_t f0;
    int32_t f4;
};

int32_t g80483ef = 0x5f434c2f;

struct s18 {
    int32_t f0;
    unsigned char f4;
};

int32_t g80483f3 = 0x454d4954;

void fun_804807e(int32_t a1) {
    struct s0* eax2;
    int32_t ecx3;
    int32_t v4;
    uint32_t* edx5;
    int1_t cf6;
    unsigned char* edi7;
    unsigned char* esi8;
    int32_t ecx9;
    int32_t v10;
    void* edx11;
    int1_t zf12;
    int1_t sf13;
    void* ebx14;
    uint32_t esi15;
    uint32_t esi16;
    void* ecx17;
    uint32_t* eax18;
    int1_t less_or_equal19;
    uint32_t* eax20;
    uint32_t ecx21;
    uint32_t* eax22;
    void* ebx23;
    uint32_t eax24;
    uint32_t edx25;
    uint32_t eax26;
    int32_t ecx27;
    uint32_t esi28;
    uint32_t* eax29;
    void* tmp32_30;
    void* eax31;
    uint32_t v32;
    uint32_t ebx33;
    uint32_t eax34;
    uint32_t eax35;
    uint32_t edx36;
    uint32_t eax37;
    uint32_t edx38;
    uint32_t v39;
    uint32_t edx40;
    uint32_t tmp32_41;
    uint32_t eax42;
    int1_t less43;
    uint32_t eax44;
    signed char ch45;
    unsigned char cl46;
    uint32_t esi47;
    int32_t ecx48;
    int1_t less49;
    uint32_t esi50;
    uint32_t ebx51;
    uint32_t eax52;
    uint32_t ecx53;
    uint32_t tmp32_54;
    uint32_t esi55;
    uint32_t ecx56;
    uint32_t eax57;
    uint32_t edx58;
    uint32_t eax59;
    uint32_t esi60;
    int32_t ebx61;
    uint32_t ecx62;
    uint32_t edx63;
    int1_t less_or_equal64;
    struct s17* edi65;
    struct s18* edi66;

    eax2 = reinterpret_cast<struct s0*>(78);
    __asm__("int 0x80");
    ecx3 = reinterpret_cast<int32_t>("%a %b %d %T %Z %Y");
    while (v4) {
        __asm__("lodsb ");
        if (*reinterpret_cast<unsigned char*>(&eax2) != 43) {
            if (*reinterpret_cast<unsigned char*>(&eax2) != 61) {
                if (*reinterpret_cast<unsigned char*>(&eax2) != 45) 
                    continue;
                while (*reinterpret_cast<unsigned char*>(&eax2)) {
                    if (*reinterpret_cast<unsigned char*>(&eax2) != 0x75) 
                        continue;
                    g8048632 = reinterpret_cast<void*>(0x435455);
                }
            } else {
                eax2 = reinterpret_cast<struct s0*>(0);
                __asm__("cdq ");
                do {
                    edx5 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax2) + reinterpret_cast<uint32_t>(edx5 + static_cast<uint32_t>(edx5)) * 2);
                    __asm__("lodsb ");
                    cf6 = *reinterpret_cast<unsigned char*>(&eax2) < 48;
                    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) - 48);
                    if (cf6) 
                        break;
                } while (*reinterpret_cast<unsigned char*>(&eax2) < 10);
                g80485e0 = edx5;
            }
        } else {
            ecx3 = v4;
        }
    }
    g804863c = ecx3;
    g8048640 = reinterpret_cast<struct s0*>(0x8048434);
    edi7 = reinterpret_cast<unsigned char*>(0x8048654);
    esi8 = reinterpret_cast<unsigned char*>("/usr/lib/locale/LC_TIME%m/%d/%y");
    ecx9 = 16;
    while (ecx9) {
        --ecx9;
        *edi7 = *esi8;
        ++edi7;
        ++esi8;
    }
    do {
        if (!v10) 
            break;
        __asm__("lodsd ");
    } while (1 || *reinterpret_cast<unsigned char*>(&eax2) != 61);
    goto addr_80480fc_19;
    addr_8048118_20:
    edx11 = reinterpret_cast<void*>(0);
    zf12 = 0 == g8048632;
    sf13 = reinterpret_cast<int32_t>(0) < reinterpret_cast<int32_t>(g8048632);
    if (zf12 && (eax2 = fun_804804c(), !sf13)) {
        ebx14 = reinterpret_cast<void*>(eax2->f20 >> 24 | eax2->f20 >> 8 & 0xff00 | eax2->f20 << 8 & 0xff0000 | eax2->f20 << 24);
        esi15 = eax2->f24 >> 24 | eax2->f24 >> 8 & 0xff00 | eax2->f24 << 8 & 0xff0000 | eax2->f24 << 24;
        esi16 = esi15 + esi15 * 2;
        ecx17 = ebx14;
        eax18 = &eax2->f2c;
        do {
            ecx17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx17) - 1);
            if (!ecx17) 
                break;
            less_or_equal19 = reinterpret_cast<int32_t>(eax18[static_cast<uint32_t>(ecx17)] >> 24 | eax18[static_cast<uint32_t>(ecx17)] >> 8 & 0xff00 | eax18[static_cast<uint32_t>(ecx17)] << 8 & 0xff0000 | eax18[static_cast<uint32_t>(ecx17)] << 24) <= reinterpret_cast<int32_t>(g80485e0);
        } while (!less_or_equal19);
        eax20 = eax18 + static_cast<uint32_t>(ebx14);
        ecx21 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax20) + reinterpret_cast<uint32_t>(ecx17));
        eax22 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax20) + reinterpret_cast<uint32_t>(ebx14));
        edx11 = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax22) + (ecx21 + ecx21 * 2) * 2) >> 24 | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax22) + (ecx21 + ecx21 * 2) * 2) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax22) + (ecx21 + ecx21 * 2) * 2) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax22) + (ecx21 + ecx21 * 2) * 2) << 24);
        g8048628 = edx11;
        eax2 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(eax22) + esi16 * 2);
        __asm__("fild qword [eax+ecx]");
        __asm__("fistp qword [edi+0x52]");
    }
    *reinterpret_cast<unsigned char*>(&eax2) = 43;
    if (__intrinsic()) {
        *reinterpret_cast<unsigned char*>(&eax2) = 45;
        edx11 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(edx11));
    }
    g804862c = *reinterpret_cast<unsigned char*>(&eax2);
    __asm__("cdq ");
    ebx23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax2) + 60);
    eax24 = reinterpret_cast<uint32_t>(edx11) / reinterpret_cast<uint32_t>(ebx23);
    __asm__("cdq ");
    __asm__("aam 0xa");
    __asm__("aam 0xa");
    edx25 = eax24 / reinterpret_cast<uint32_t>(ebx23) << 16;
    eax26 = edx25 + eax24 % reinterpret_cast<uint32_t>(ebx23) + 0x30303030;
    g804862d = eax26 >> 24 | eax26 >> 8 & 0xff00 | eax26 << 8 & 0xff0000 | eax26 << 24;
    ecx27 = 0x7b1;
    esi28 = 4;
    eax29 = g80485e0;
    tmp32_30 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(g8048628));
    eax31 = tmp32_30;
    if (reinterpret_cast<int32_t>(eax31) < reinterpret_cast<int32_t>(0) != __intrinsic()) {
        eax31 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax31) + 0x1e13380);
        ecx27 = 0x7b0;
        esi28 = 3;
    }
    v32 = esi28;
    __asm__("cdq ");
    ebx33 = edx25 + 60;
    eax34 = reinterpret_cast<uint32_t>(eax31) / ebx33;
    g80485e4 = reinterpret_cast<uint32_t>(eax31) % ebx33;
    __asm__("cdq ");
    eax35 = eax34 / ebx33;
    g80485e8 = eax34 % ebx33;
    *reinterpret_cast<signed char*>(&ebx33) = 24;
    __asm__("cdq ");
    edx36 = eax35 % ebx33;
    eax37 = eax35 / ebx33;
    g80485ec = edx36;
    edx38 = edx36 - 12;
    g80485f8 = reinterpret_cast<uint1_t>(edx36 >= 12);
    if (edx36 <= 12) {
        do {
            edx38 = edx38 + 12;
        } while (!edx38);
    }
    g80485f4 = edx38;
    v39 = eax37;
    *reinterpret_cast<signed char*>(&ebx33) = 7;
    __asm__("cdq ");
    edx40 = (eax37 + esi28) % ebx33;
    g80485fc = edx40;
    if (edx40 == ebx33) {
        tmp32_41 = edx40;
        edx40 = ebx33;
        ebx33 = tmp32_41;
    }
    g8048600 = edx40;
    eax42 = v39;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx33) + 1) = 1;
    do {
        *reinterpret_cast<signed char*>(&ebx33) = 0x6e;
        ++ecx27;
        if (*reinterpret_cast<unsigned char*>(&ecx27) & 3) {
            --ebx33;
        }
        less43 = reinterpret_cast<int32_t>(eax42) < reinterpret_cast<int32_t>(ebx33);
        eax42 = eax42 - ebx33;
    } while (!less43);
    eax44 = eax42 + ebx33;
    g80485f0 = ecx27;
    ch45 = 20;
    cl46 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx27) + 48);
    if (*reinterpret_cast<unsigned char*>(&ecx27) < 0xd0) {
        ch45 = 19;
        cl46 = reinterpret_cast<unsigned char>(cl46 + 100);
    }
    g8048624 = cl46;
    g8048620 = ch45;
    esi47 = eax44;
    ecx48 = 0;
    __asm__("cdq ");
    do {
        *reinterpret_cast<signed char*>(&edx40) = 7;
        __asm__("shld edx, ebx, 0x2");
        __asm__("ror ebx, 0x2");
        ++ecx48;
        less49 = reinterpret_cast<int32_t>(eax44) < reinterpret_cast<int32_t>(edx40);
        eax44 = eax44 - edx40;
    } while (!less49);
    g8048604 = eax44 + edx40 + 1;
    g8048608 = ecx48;
    esi50 = esi47 + 4 + 4;
    ebx51 = v32;
    eax52 = v39 - esi50 + ebx51;
    *reinterpret_cast<signed char*>(&ebx51) = 7;
    __asm__("cdq ");
    ecx53 = eax52 % 7;
    if (ecx53 == 7) {
        tmp32_54 = ecx53;
        ecx53 = 7;
        ebx51 = tmp32_54;
    }
    __asm__("cdq ");
    g804860c = (esi50 + ecx53) / ebx51;
    esi55 = esi50 + 4;
    ecx56 = ecx53 - 1;
    if (!ecx56) {
        *reinterpret_cast<signed char*>(&ecx56) = *reinterpret_cast<signed char*>(&ebx51);
    }
    eax57 = esi55 + ecx56;
    __asm__("cdq ");
    edx58 = eax57 % ebx51;
    eax59 = eax57 / ebx51;
    g8048610 = eax59;
    esi60 = esi55 + 4;
    ebx61 = g80485f0;
    *reinterpret_cast<unsigned char*>(&edx58) = reinterpret_cast<unsigned char>(3 & *reinterpret_cast<unsigned char*>(&ebx61));
    ecx62 = ecx56 - 4;
    *reinterpret_cast<unsigned char*>(&eax59) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax59))) + reinterpret_cast<uint1_t>(ecx56 < 4));
    if (*reinterpret_cast<unsigned char*>(&eax59)) {
        addr_8048274_58:
        if (*reinterpret_cast<unsigned char*>(&eax59) == 53 && (edx63 = esi60, less_or_equal64 = reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(&edx63) - reinterpret_cast<unsigned char>(0x68 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx63) < reinterpret_cast<unsigned char>(0x68 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx58) < 1))))) <= *reinterpret_cast<signed char*>(&g80485fc), !less_or_equal64)) {
            *reinterpret_cast<unsigned char*>(&eax59) = 1;
            ++ebx61;
            goto addr_8048288_60;
        }
    } else {
        --ebx61;
        *reinterpret_cast<unsigned char*>(&eax59) = 52;
        if (!ecx62 || !(ecx62 - 1) && (--edx58, !edx58)) {
            ++eax59;
            goto addr_8048274_58;
        } else {
            addr_8048288_60:
        }
    }
    g8048614 = eax59;
    g8048618 = ebx61;
    g804861c = esi60 + 4 + 4 + 1;
    fun_80482c2();
    g8048654 = 10;
    __asm__("int 0x80");
    if (!__intrinsic()) {
    }
    __asm__("int 0x80");
    goto fun_80482c2;
    do {
        addr_80480fc_19:
        __asm__("lodsb ");
        *edi7 = *reinterpret_cast<unsigned char*>(&eax2);
        ++edi7;
    } while (*reinterpret_cast<unsigned char*>(&eax2));
    edi65 = reinterpret_cast<struct s17*>(edi7 - 1);
    edi65->f0 = g80483ef;
    edi66 = reinterpret_cast<struct s18*>(&edi65->f4);
    edi66->f0 = g80483f3;
    edi66->f4 = *reinterpret_cast<unsigned char*>(&eax2);
    eax2 = fun_804804c();
    if (reinterpret_cast<int32_t>(edi65) >= 0) {
        g8048640 = eax2;
        goto addr_8048118_20;
    }
}

void fun_80482f7() {
    goto fun_80482c2;
}

void fun_804832a() {
    signed char* edi1;
    signed char al2;
    signed char al3;

    do {
        __asm__("lodsb ");
        *edi1 = al2;
        ++edi1;
    } while (al3);
    return;
}

void fun_804833a() {
    signed char* edi1;
    signed char al2;
    signed char al3;

    do {
        __asm__("lodsb ");
        *edi1 = al2;
        ++edi1;
    } while (al3);
    return;
}

void fun_8048344() {
    int32_t eax1;
    int32_t edx2;
    signed char* edi3;

    eax1 = edx2;
    *edi3 = *reinterpret_cast<signed char*>(&eax1);
    return;
}

struct s19 {
    unsigned char f0;
    unsigned char f1;
};

struct s20 {
    unsigned char f0;
    signed char f1;
};

unsigned char g54252064;

unsigned char g5925205a;

struct s21 {
    uint32_t f0;
    signed char[43] pad47;
    int32_t f2f;
};

signed char g4eb0aca8;

struct s22 {
    unsigned char f0;
    signed char f1;
    signed char[75] pad77;
    int32_t f4d;
};

struct s23 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s24 {
    signed char f0;
    unsigned char f1;
};

struct s25 {
    signed char[1] pad1;
    signed char f1;
};

unsigned char g11000001;

signed char g19000001;

unsigned char g21000001;

unsigned char g4d253a49;

unsigned char g29000001;

signed char g31000001;

unsigned char g39000001;

void fun_8048347(struct s19* ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
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
    signed char* eax20;
    signed char* eax21;
    signed char al22;
    signed char* eax23;
    signed char* eax24;
    signed char al25;
    signed char* eax26;
    signed char* eax27;
    signed char al28;
    signed char* eax29;
    signed char* eax30;
    signed char al31;
    unsigned char* eax32;
    signed char al33;
    unsigned char tmp8_34;
    void* edx35;
    signed char dl36;
    uint1_t cf37;
    void* edx38;
    void* edx39;
    struct s20* eax40;
    uint1_t cf41;
    unsigned char dl42;
    signed char dl43;
    signed char* eax44;
    void* ebp45;
    void* ebp46;
    unsigned char bl47;
    void* edi48;
    void* edi49;
    unsigned char dh50;
    signed char bl51;
    signed char* eax52;
    signed char* edx53;
    signed char* edx54;
    signed char dh55;
    unsigned char* edx56;
    unsigned char dh57;
    unsigned char* edx58;
    unsigned char* edx59;
    unsigned char* edx60;
    struct s21* edx61;
    uint32_t esi62;
    uint32_t esi63;
    void* edi64;
    struct s22* eax65;
    void** esp66;
    int1_t zf67;
    int1_t sf68;
    struct s23* ebx69;
    struct s24* edi70;
    struct s25* edi71;
    void* ebx72;
    unsigned char dl73;
    unsigned char dl74;
    unsigned char tmp8_75;
    signed char tmp8_76;
    signed char dl77;
    unsigned char tmp8_78;
    struct s24** esp79;
    unsigned char tmp8_80;
    unsigned char tmp8_81;
    signed char tmp8_82;
    unsigned char tmp8_83;
    int32_t edx84;
    unsigned char tmp8_85;
    uint1_t cf86;
    int1_t sf87;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
    *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
    *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
    *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
    *eax23 = reinterpret_cast<signed char>(*eax24 + al25);
    *eax26 = reinterpret_cast<signed char>(*eax27 + al28);
    *eax29 = reinterpret_cast<signed char>(*eax30 + al31);
    *reinterpret_cast<unsigned char*>(&eax32) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(al33 + 4) + 4) + 4);
    *eax32 = reinterpret_cast<unsigned char>(*eax32 | *reinterpret_cast<unsigned char*>(&ecx));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<uint32_t>(ecx)) | *reinterpret_cast<unsigned char*>(&ecx));
    tmp8_34 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<int32_t>(edx35)) + dl36)));
    cf37 = reinterpret_cast<uint1_t>(tmp8_34 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<int32_t>(edx38)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<int32_t>(edx39)) = tmp8_34;
    *reinterpret_cast<unsigned char*>(&eax40) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax32) | 16))) + cf37) + 8) | 12) & 36);
    cf41 = reinterpret_cast<uint1_t>(eax40->f0 < dl42);
    eax40->f0 = reinterpret_cast<unsigned char>(eax40->f0 - dl43);
    eax44 = &eax40->f1;
    *reinterpret_cast<unsigned char*>(&eax44) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax44) + 20) + cf41);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<int32_t>(ebp45)) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<int32_t>(ebp46)) & bl47);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax44) + reinterpret_cast<int32_t>(edi48)) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax44) + reinterpret_cast<int32_t>(edi49)) ^ dh50);
    *reinterpret_cast<unsigned char*>(&eax44) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax44) - reinterpret_cast<unsigned char>(28 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax44) < reinterpret_cast<unsigned char>(28 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax44) < 68)))));
    *eax44 = reinterpret_cast<signed char>(*eax44 - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    *eax44 = reinterpret_cast<signed char>(*eax44 - bl51);
    eax52 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax44) & 0x62252061);
    g54252064 = 0;
    g5925205a = 0;
    *edx53 = reinterpret_cast<signed char>(*edx54 + dh55);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx56) + 1) = reinterpret_cast<unsigned char>(dh57 ^ *edx58);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx59) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx56) + 1) & *edx56);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx60) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx59) + 1) & *edx59);
    *eax52 = reinterpret_cast<signed char>(*eax52 + *reinterpret_cast<signed char*>(&eax52));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax52) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax52) + 1) ^ *edx60);
    *eax52 = reinterpret_cast<signed char>(*eax52 + *reinterpret_cast<signed char*>(&eax52));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx61) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx60) + 1) ^ *edx60);
    esi62 = esi63 ^ edx61->f0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<int32_t>(edi64)) = 0xff;
    *reinterpret_cast<signed char*>(&eax52) = g4eb0aca8;
    edx61->f0 = edx61->f0 | reinterpret_cast<uint32_t>(ecx);
    eax65 = reinterpret_cast<struct s22*>(reinterpret_cast<uint32_t>(eax52) & 0x7a5a746e);
    esp66 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 1 - 4 - 4 + 1);
    zf67 = esp66 == 0;
    sf68 = reinterpret_cast<int32_t>(esp66) < 0;
    if (!0) {
        if (sf68) {
            addr_8048429_3:
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(ecx)) - 9;
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(ecx)) - 71);
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(ecx)) + 58);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(ecx)) + 68;
            goto addr_8048438_4;
        } else {
            if (__intrinsic()) {
                addr_804840a_6:
                goto addr_8048410_7;
            } else {
                __asm__("popad ");
                if (!sf68) {
                    addr_8048438_4:
                    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(ecx)) - 76;
                    eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax65) + 0xbc000000) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax65) + 0xbc000000) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx69) + 1));
                    eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
                    *reinterpret_cast<unsigned char*>(&eax65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax65) + *reinterpret_cast<unsigned char*>(&eax65));
                    goto addr_8048449_9;
                } else {
                    edi70 = reinterpret_cast<struct s24*>(&edi71->f1);
                    esp66 = esp66 - 1 - 1 - 1;
                    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(edi70 == 0)))) {
                        addr_8048449_9:
                        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax65) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax65) + 1) + *reinterpret_cast<unsigned char*>(&eax65));
                        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
                        *reinterpret_cast<unsigned char*>(&eax65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax65) + *reinterpret_cast<unsigned char*>(&ecx));
                        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax65) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax65) + 1) + *reinterpret_cast<unsigned char*>(&ecx));
                        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
                        goto addr_8048456_11;
                    } else {
                        __asm__("insb ");
                        ebx69 = reinterpret_cast<struct s23*>(reinterpret_cast<int32_t>(ebx72) + 1);
                        ++esp66;
                        __asm__("insd ");
                        ecx = reinterpret_cast<struct s19*>(eax65->f4d * 83);
                        if (!__intrinsic()) {
                            addr_8048410_7:
                            goto addr_8048414_13;
                        } else {
                            if (!__undefined()) {
                                addr_8048456_11:
                                *reinterpret_cast<unsigned char*>(&eax65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax65) + dl73);
                                eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx69) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx69) + 1) + dl74);
                                eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
                                eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx61) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx61) + 1) + *reinterpret_cast<unsigned char*>(&ebx69)) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax65) + 1));
                                eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
                                *reinterpret_cast<unsigned char*>(&eax65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax65) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx61) + 1));
                                eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
                                *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx69) + 1));
                                eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
                                eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
                                eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + reinterpret_cast<uint32_t>(eax65));
                                ecx->f0 = reinterpret_cast<unsigned char>(ecx->f0 + *reinterpret_cast<unsigned char*>(&ecx));
                                eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + reinterpret_cast<uint32_t>(eax65));
                                tmp8_75 = reinterpret_cast<unsigned char>(g11000001 + *reinterpret_cast<unsigned char*>(&ecx));
                                g11000001 = tmp8_75;
                                goto addr_804847c_15;
                            } else {
                                if (__intrinsic()) {
                                    addr_8048414_13:
                                    edi70->f0 = reinterpret_cast<signed char>(edi70->f0 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
                                    zf67 = edi70->f0 == 0;
                                    if (zf67) {
                                        addr_804847c_15:
                                        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + reinterpret_cast<uint32_t>(eax65));
                                        tmp8_76 = reinterpret_cast<signed char>(g19000001 + dl77);
                                        g19000001 = tmp8_76;
                                        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + reinterpret_cast<uint32_t>(eax65));
                                        tmp8_78 = reinterpret_cast<unsigned char>(g21000001 + *reinterpret_cast<unsigned char*>(&ebx69));
                                        g21000001 = tmp8_78;
                                        goto addr_804848a_17;
                                    } else {
                                        __asm__("das ");
                                        __asm__("insb ");
                                        __asm__("outsd ");
                                    }
                                } else {
                                    __asm__("insb ");
                                    __asm__("insb ");
                                    __asm__("das ");
                                    esp79 = reinterpret_cast<struct s24**>(edx61->f2f * 0x61636f6c - 1);
                                    ebx69 = reinterpret_cast<struct s23*>(&ebx69->f1);
                                    edi70 = *esp79;
                                    esp66 = reinterpret_cast<void**>(esp79 + 1 - 1);
                                    *reinterpret_cast<void***>(esp66) = esp66;
                                    ecx = reinterpret_cast<struct s19*>(reinterpret_cast<uint32_t>(ecx) - 1);
                                    __asm__("das ");
                                    eax65 = reinterpret_cast<struct s22*>(reinterpret_cast<uint32_t>(eax65) & 0x64252f6d & 0x48250079);
                                    tmp8_80 = reinterpret_cast<unsigned char>(g4d253a49 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax65) + 1));
                                    g4d253a49 = tmp8_80;
                                    goto addr_804840a_6;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __asm__("arpl [ecx+0x6c], sp");
    if (zf67) {
        addr_804848a_17:
        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + reinterpret_cast<uint32_t>(eax65));
        tmp8_81 = reinterpret_cast<unsigned char>(g29000001 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax65) + 1));
        g29000001 = tmp8_81;
        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + reinterpret_cast<uint32_t>(eax65));
        tmp8_82 = reinterpret_cast<signed char>(g31000001 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        g31000001 = tmp8_82;
        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + reinterpret_cast<uint32_t>(eax65));
        tmp8_83 = reinterpret_cast<unsigned char>(g39000001 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx61) + 1));
        g39000001 = tmp8_83;
        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + reinterpret_cast<uint32_t>(eax65));
        ecx->f1 = reinterpret_cast<unsigned char>(ecx->f1 + *reinterpret_cast<unsigned char*>(&eax65));
        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
        edx84 = reinterpret_cast<int32_t>(edx61) - 1;
        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + reinterpret_cast<uint32_t>(eax65));
        eax65->f1 = reinterpret_cast<signed char>(eax65->f1 + *reinterpret_cast<signed char*>(&edx84));
        tmp8_85 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
        cf86 = reinterpret_cast<uint1_t>(tmp8_85 < eax65->f0);
        eax65->f0 = tmp8_85;
        ecx->f0 = reinterpret_cast<unsigned char>(ecx->f0 - (reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint1_t>(ecx->f0 < reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(eax65) + cf86))));
        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
        *reinterpret_cast<uint32_t*>(esp66 - 1) = esi62;
        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + reinterpret_cast<uint32_t>(eax65));
        ebx69->f1 = reinterpret_cast<unsigned char>(ebx69->f1 + *reinterpret_cast<unsigned char*>(&ebx69));
        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
        __asm__("pushad ");
        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + reinterpret_cast<uint32_t>(eax65));
        edi70->f1 = reinterpret_cast<unsigned char>(edi70->f1 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax65) + 1));
        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
        sf87 = reinterpret_cast<signed char>(eax65->f0) < reinterpret_cast<signed char>(0);
        if (__intrinsic()) {
            eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
            sf87 = reinterpret_cast<signed char>(eax65->f0) < reinterpret_cast<signed char>(0);
        }
    } else {
        __asm__("insd ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx69) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx69) + 1) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx69) + 1));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax65) + reinterpret_cast<uint32_t>(ecx)) + 42);
        goto addr_8048429_3;
    }
    if (sf87) {
        eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + *reinterpret_cast<unsigned char*>(&eax65));
    }
    ecx->f0 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(ecx->f0));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebx69) - 0x71ffffff) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebx69) - 0x71ffffff) + *reinterpret_cast<unsigned char*>(&ecx));
    eax65->f0 = reinterpret_cast<unsigned char>(eax65->f0 + reinterpret_cast<uint32_t>(eax65));
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) - 0x3cffffff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) - 0x3cffffff) + *reinterpret_cast<signed char*>(&edx84));
}

struct s26 {
    signed char[116] pad116;
    unsigned char f74;
};

void fun_80482ff() {
    unsigned char* esi1;
    struct s26* ebx2;
    unsigned char* v3;
    int32_t v4;
    int32_t edx5;
    int32_t ecx6;
    uint32_t edx7;
    uint32_t eax8;
    int32_t eax9;
    unsigned char* ecx10;
    int32_t ecx11;
    unsigned char al12;
    unsigned char* edi13;
    int32_t ecx14;

    esi1 = &ebx2->f74;
    v3 = esi1;
    v4 = edx5;
    ecx6 = 10;
    do {
        __asm__("cdq ");
        edx7 = eax8 % 10;
        eax8 = eax8 / 10;
        --esi1;
        *esi1 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&edx7) + 48);
    } while (eax8);
    eax9 = v4;
    *reinterpret_cast<unsigned char*>(&ecx6) = reinterpret_cast<unsigned char>(15 & *reinterpret_cast<unsigned char*>(&eax9));
    ecx10 = reinterpret_cast<unsigned char*>(ecx6 + reinterpret_cast<int32_t>(esi1));
    ecx11 = reinterpret_cast<int32_t>(ecx10) - reinterpret_cast<int32_t>(v3);
    if (reinterpret_cast<int32_t>(ecx10) > reinterpret_cast<int32_t>(v3)) {
        al12 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax9) & 0xf0);
        while (ecx11) {
            --ecx11;
            *edi13 = al12;
            ++edi13;
            ++esi1;
        }
    }
    ecx14 = reinterpret_cast<int32_t>(v3) - reinterpret_cast<int32_t>(esi1);
    while (1) {
        if (!ecx14) 
            goto "???";
        --ecx14;
        *edi13 = *esi1;
        ++edi13;
        ++esi1;
    }
}
