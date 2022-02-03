
int32_t g80495dc;

int32_t fun_8048156(int32_t ecx) {
    int32_t ebx2;
    signed char al3;
    int32_t ebx4;
    int32_t eax5;

    ebx2 = g80495dc;
    *reinterpret_cast<signed char*>(ebx2 + 0x80481dc) = al3;
    ebx4 = ebx2 + 1;
    if (ebx4 == 0x400) {
        __asm__("int 0x80");
        g80495dc = 0;
        return 4;
    } else {
        g80495dc = ebx4;
        return eax5;
    }
}

int32_t fun_8048172(int32_t ecx) {
    __asm__("int 0x80");
    g80495dc = 0;
    return 4;
}

struct s0 {
    signed char[77] pad77;
    signed char f4d;
};

struct s1 {
    signed char[77] pad77;
    signed char f4d;
};

struct s2 {
    signed char[77] pad77;
    signed char f4d;
};

signed char g80495e5;

int32_t g80495e0;

signed char g80495e4;

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
    void* tmp8_24;
    uint1_t cf25;
    struct s0* ebp26;
    struct s1* ebp27;
    signed char bl28;
    struct s2* ebp29;
    int32_t esi30;
    signed char* v31;
    int32_t ebp32;
    signed char* v33;
    int32_t ebp34;
    int32_t ecx35;
    signed char al36;
    int1_t zf37;

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
        __asm__("fadd qword [ecx]");
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        __asm__("out 0x15, al");
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf25 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_24) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_24;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf25);
    ebp26->f4d = reinterpret_cast<signed char>(ebp27->f4d + bl28);
    if (!ebp29->f4d) {
        addr_804808f_4:
        __asm__("int 0x80");
    } else {
        esi30 = 0;
        g80495e5 = 9;
        do {
            if (*v31 == 0x642d) {
                --ebp32;
                if (!ebp32) 
                    goto addr_804808f_4;
                g80495e5 = *v33;
            } else {
                __asm__("int 0x80");
                if (0) 
                    goto addr_80480ae_10;
                *reinterpret_cast<int32_t*>(esi30 + 0x80485dc) = 5;
                esi30 = esi30 + 4;
            }
            --ebp32;
        } while (ebp32);
        goto addr_804807b_13;
    }
    while (1) {
        __asm__("int 0x80");
        addr_80480ae_10:
        __asm__("int 0x80");
    }
    addr_804807b_13:
    if (esi30) {
        g80495e0 = esi30;
        g80495dc = 0;
        ebp34 = 0;
        while (1) {
            ecx35 = *reinterpret_cast<int32_t*>(ebp34 + 0x80485dc);
            if (!ecx35) {
                addr_804811e_18:
                ebp34 = ebp34 + 4;
                if (ebp34 == esi30) {
                    fun_8048156(ecx35);
                    fun_8048172(ecx35);
                    ebp34 = 0;
                    continue;
                } else {
                    fun_8048156(ecx35);
                    continue;
                }
            } else {
                while (1) {
                    ecx35 = 0x80495e4;
                    __asm__("int 0x80");
                    if (0) 
                        goto addr_80480ae_10;
                    if (0) 
                        break;
                    al36 = g80495e4;
                    if (al36 == 10) 
                        goto addr_804811e_18;
                    fun_8048156(0x80495e4);
                }
            }
            g80495e0 = g80495e0 - 4;
            zf37 = g80495e0 == 0;
            if (zf37) 
                break;
            *reinterpret_cast<int32_t*>(ebp34 + 0x80485dc) = 3;
            goto addr_804811e_18;
        }
        __asm__("int 0x80");
    }
}

struct s3 {
    signed char[110] pad110;
    unsigned char f6e;
};

struct s4 {
    signed char[45] pad45;
    unsigned char f2d;
};

struct s5 {
    signed char[45] pad45;
    unsigned char f2d;
};

struct s6 {
    signed char[108] pad108;
    unsigned char f6c;
};

struct s7 {
    signed char[108] pad108;
    unsigned char f6c;
};

struct s8 {
    signed char[93] pad93;
    int32_t f5d;
};

struct s9 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s10 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s11 {
    signed char[102] pad102;
    unsigned char f66;
};

struct s12 {
    signed char[102] pad102;
    unsigned char f66;
};

struct s13 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s14 {
    signed char[101] pad101;
    unsigned char f65;
};

void fun_8048192(struct s3* ecx) {
    int1_t of2;
    int1_t cf3;
    struct s4* ebx4;
    struct s5* ebx5;
    unsigned char bl6;
    struct s6* ebp7;
    struct s7* ebp8;
    unsigned char ah9;
    int32_t ebp10;
    struct s8* ebp11;
    struct s9* esi12;
    struct s10* esi13;
    unsigned char ah14;
    struct s11* ebx15;
    struct s12* ebx16;
    unsigned char bl17;
    int32_t ebp18;
    unsigned char* eax19;
    unsigned char al20;
    unsigned char* eax21;
    signed char dl22;
    struct s13* edx23;
    struct s14* edx24;
    unsigned char dh25;

    if (!of2) {
        if (cf3) {
            ebx4->f2d = reinterpret_cast<unsigned char>(ebx5->f2d & bl6);
            ebp7->f6c = reinterpret_cast<unsigned char>(ebp8->f6c & ah9);
            ebp10 = ebp11->f5d * 0x6c696620;
            esi12->f69 = reinterpret_cast<unsigned char>(esi13->f69 & ah14);
            __asm__("insb ");
            ebx15->f66 = reinterpret_cast<unsigned char>(ebx16->f66 & bl17);
            ebp18 = *reinterpret_cast<int32_t*>(ebp10 + 32) * 0x5d2e2e2e;
            *reinterpret_cast<unsigned char*>(&eax19) = reinterpret_cast<unsigned char>(al20 | *eax21);
            *eax19 = reinterpret_cast<unsigned char>(*eax19 + *reinterpret_cast<unsigned char*>(&eax19));
            *reinterpret_cast<signed char*>(ebp18 + 0x6e) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp18 + 0x6e) + dl22);
            __asm__("popad ");
            if (*reinterpret_cast<signed char*>(ebp18 + 0x6e)) {
                edx23->f65 = reinterpret_cast<unsigned char>(edx24->f65 & dh25);
                __asm__("popad ");
                ecx->f6e = 0;
                if (!0) {
                    if (ecx->f6e) {
                        *eax19 = reinterpret_cast<unsigned char>(*eax19 + *reinterpret_cast<unsigned char*>(&eax19));
                    }
                }
            }
        }
    }
}
