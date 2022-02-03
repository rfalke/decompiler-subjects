
struct s0 {
    signed char[1] pad1;
    signed char f1;
};

struct s1 {
    signed char[1] pad1;
    signed char f1;
};

struct s2 {
    signed char[1] pad1;
    signed char f1;
};

void fun_8048000(signed char* ecx, int32_t a2, int32_t a3, signed char* a4) {
    int1_t less_or_equal5;
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
    void** tmp32_27;
    uint1_t cf28;
    void** eax29;
    struct s0* edx30;
    struct s1* edx31;
    int32_t edi32;
    signed char* eax33;
    struct s2* edx34;
    signed char* edx35;
    signed char* eax36;
    signed char* v37;
    signed char* v38;
    struct s2* v39;
    signed char* ecx40;
    signed char* ebx41;
    struct s2* eax42;
    signed char* eax43;
    signed char* v44;
    signed char* eax45;
    signed char* ebx46;

    if (less_or_equal5) {
        *ecx = reinterpret_cast<signed char>(*ecx + eax6);
        *ebx7 = *ebx8 + eax9;
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(al23 + *eax24);
        eax25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(*eax22));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<uint32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) + 44);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(eax25)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(eax25)) + dh26);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<uint32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
        __asm__("fld dword [eax]");
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        __asm__("fld dword [eax]");
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        tmp32_27 = eax25;
        cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_27) < reinterpret_cast<uint32_t>(eax25));
        eax29 = tmp32_27;
    }
    *eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax29) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax29))) + cf28);
    edx30->f1 = reinterpret_cast<signed char>(edx31->f1 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    edi32 = a2 - 1;
    if (!edi32 || edi32 > 2) {
        while (1) {
            eax33 = reinterpret_cast<signed char*>(1);
            __asm__("int 0x80");
            addr_80480a1_5:
            ++eax33;
            addr_80480a2_6:
            ecx = eax33;
            edx34 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(edx35) - reinterpret_cast<uint32_t>(eax33));
            --edi32;
            if (!edi32) {
                addr_804808d_7:
                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edx34)) = 10;
                edx35 = &edx34->f1;
                __asm__("int 0x80");
                continue;
            } else {
                eax36 = v37;
                v38 = ecx;
                v39 = edx34;
                ecx40 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(edx34));
                ebx41 = eax36;
                if (!*eax36) {
                    addr_804808b_9:
                    edx34 = v39;
                    ecx = v38;
                    goto addr_804808d_7;
                } else {
                    do {
                        ++eax36;
                    } while (*eax36);
                    eax42 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(eax36) - reinterpret_cast<uint32_t>(ebx41));
                    if (reinterpret_cast<int32_t>(eax42) >= reinterpret_cast<int32_t>(edx34)) 
                        goto addr_804808b_9;
                }
            }
            eax43 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax42) + reinterpret_cast<uint32_t>(ebx41));
            v44 = eax43;
            do {
                --eax43;
                --ecx40;
                if (*ecx40 != *eax43) 
                    break;
            } while (eax43 != ebx41);
            goto addr_80480d0_15;
            goto addr_804808b_9;
            addr_80480d0_15:
            ecx = v38;
            edx34 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(v39) - (reinterpret_cast<uint32_t>(v44) - reinterpret_cast<uint32_t>(ebx41)));
            goto addr_804808d_7;
        }
    }
    eax45 = a4;
    ebx46 = eax45;
    edx34 = reinterpret_cast<struct s2*>(0);
    if (!*eax45) 
        goto addr_804808d_7;
    do {
        ++eax45;
    } while (*eax45);
    do {
        --eax45;
        if (reinterpret_cast<int32_t>(eax45) < reinterpret_cast<int32_t>(ebx46)) 
            break;
    } while (*eax45 == 47);
    goto addr_804807b_22;
    edx34 = reinterpret_cast<struct s2*>(0);
    goto addr_804808d_7;
    addr_804807b_22:
    eax33 = eax45 + 1;
    edx35 = eax33;
    while (1) {
        --eax33;
        if (*eax33 == 47) 
            goto addr_80480a1_5;
        if (eax33 == ebx46) 
            goto addr_80480a2_6;
    }
}
