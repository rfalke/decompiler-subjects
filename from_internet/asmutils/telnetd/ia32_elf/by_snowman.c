
struct s0 {
    signed char[94] pad94;
    unsigned char f5e;
};

struct s1 {
    signed char[112] pad112;
    unsigned char f70;
};

struct s2 {
    signed char[112] pad112;
    unsigned char f70;
};

int32_t g804826e;

int32_t g8048272;

signed char g804879d;

unsigned char* g804825a;

int16_t g804825e;

int16_t g8048266;

int32_t g8048286;

int32_t g8048262;

uint16_t g8048260;

uint16_t g8048268;

signed char gffffff82;

signed char g9;

void fun_8048000(int32_t* ecx) {
    uint40_t v2;
    int1_t less_or_equal3;
    struct s0* esi4;
    void* esi5;
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
    int32_t edx27;
    signed char bl28;
    void* tmp8_29;
    int1_t cf30;
    unsigned char* v31;
    unsigned char* ebp32;
    int1_t zf33;
    int16_t bx34;
    struct s1* ebx35;
    struct s2* ebx36;
    unsigned char bl37;
    unsigned char bl38;
    unsigned char bl39;
    signed char* edi40;
    int32_t eax41;
    int32_t ebx42;
    int1_t cf43;
    signed char tmp8_44;
    int32_t ebx45;
    int32_t eax46;
    int1_t zf47;
    int1_t zf48;
    signed char tmp8_49;
    signed char tmp8_50;
    signed char tmp8_51;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 1) = reinterpret_cast<int32_t>(__return_address());
    if (less_or_equal3) {
        esi4 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esi5) + 1);
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
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(ecx)) + 44);
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
        edx27 = *reinterpret_cast<int32_t*>(&v2);
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + reinterpret_cast<unsigned char>(*eax25));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(ecx) + 0x70000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(ecx) + 0x70000) + bl28);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    }
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&edx27)));
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<int32_t>(eax25));
    tmp8_29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    cf30 = reinterpret_cast<unsigned char>(tmp8_29) < reinterpret_cast<unsigned char>(*eax25);
    *eax25 = tmp8_29;
    v31 = ebp32;
    if (!cf30) {
        addr_80480b4_4:
        goto addr_80480be_5;
    } else {
        zf33 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax25) + 1) == *reinterpret_cast<signed char*>(bx34 + *reinterpret_cast<int16_t*>(&esi4));
        if (zf33) {
            addr_80480be_5:
            goto addr_80480c2_7;
        } else {
            __asm__("insb ");
            __asm__("outsb ");
            if (zf33) {
                addr_80480c2_7:
                __asm__("int 0x80");
                if (v31) 
                    goto addr_80480cd_9;
            } else {
                ebx35->f70 = reinterpret_cast<unsigned char>(ebx36->f70 & bl37);
                __asm__("outsd ");
                if (0) 
                    goto addr_80480d8_11;
                bl38 = reinterpret_cast<unsigned char>(bl39 | *(v31 - 0x7d));
                *v31 = reinterpret_cast<unsigned char>(*v31 - reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*v31 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) + *edi40) < *reinterpret_cast<unsigned char*>(&ecx))))))));
                esi4->f5e = reinterpret_cast<unsigned char>(esi4->f5e + bl38);
                eax41 = 0;
                ebx42 = 0;
                while (cf43 = *reinterpret_cast<unsigned char*>(&eax41) < 48, *reinterpret_cast<unsigned char*>(&eax41) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax41) - 48), !cf43) {
                    ebx42 = ebx42 * 10 + eax41;
                }
                tmp8_44 = *reinterpret_cast<signed char*>(&ebx42);
                *reinterpret_cast<signed char*>(&ebx42) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx42) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx42) + 1) = tmp8_44;
                ebx45 = ebx42 << 16;
                *reinterpret_cast<signed char*>(&ebx45) = 2;
                g804826e = ebx45;
                g8048272 = 0;
                __asm__("int 0x80");
                if (0) 
                    goto addr_80480cd_9;
                v31 = reinterpret_cast<unsigned char*>(4);
                goto addr_80480b4_4;
            }
        }
    }
    while (1) {
        addr_80480d8_11:
        __asm__("int 0x80");
        if (1 || 1) {
            addr_80480cd_9:
        } else {
            __asm__("int 0x80");
            if (0) {
                while (1) {
                    g804879d = 16;
                    __asm__("int 0x80");
                    if (0) 
                        continue;
                    __asm__("int 0x80");
                    if (0) 
                        break;
                }
                __asm__("int 0x80");
                __asm__("int 0x80");
                __asm__("int 0x80");
                if (0) 
                    break;
                while (1) {
                    g804825a = reinterpret_cast<unsigned char*>(0x66);
                    g804825e = 3;
                    g8048266 = 3;
                    eax46 = g8048286;
                    g8048262 = eax46;
                    __asm__("int 0x80");
                    zf47 = (g8048260 & 3) == 0;
                    if (!zf47) {
                        __asm__("int 0x80");
                        if (0) 
                            break;
                        __asm__("int 0x80");
                    } else {
                        zf48 = (g8048268 & 3) == 0;
                        if (!zf48) {
                            __asm__("int 0x80");
                            if (0) 
                                break;
                            __asm__("int 0x80");
                        }
                    }
                }
            }
        }
        __asm__("int 0x80");
    }
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("das ");
    __asm__("das ");
    if (!1) {
        tmp8_49 = reinterpret_cast<signed char>(gffffff82 + 82);
        gffffff82 = tmp8_49;
        tmp8_50 = reinterpret_cast<signed char>(g9 + 9);
        g9 = tmp8_50;
        tmp8_51 = reinterpret_cast<signed char>(g9 + 9);
        g9 = tmp8_51;
    }
}
