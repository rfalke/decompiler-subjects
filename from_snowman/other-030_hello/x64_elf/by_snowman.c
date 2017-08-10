
int64_t __set_app_type = 0x86be;

void __set_app_type(int64_t rcx) {
    goto __set_app_type;
}

int64_t _encode_pointer(int64_t rcx, ...) {
    return rcx;
}

/* .text */
int64_t text(int64_t rcx) {
    return 0;
}

struct s0 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
};

struct s1 {
    struct s1* f0;
    signed char[7] pad8;
    int64_t f8;
};

/* .bss */
int32_t bss;

uint32_t __mingw_GetSectionCount(struct s1* rcx, struct s1* rdx, struct s1* r8, struct s1* r9);

int64_t ___chkstk_ms(struct s1* rcx, struct s1* rdx, struct s1* r8, struct s1* r9);

struct s2 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

int32_t maxSections;

struct s3 {
    int64_t f0;
    signed char[24] pad32;
    int32_t f32;
};

struct s5 {
    signed char[8] pad8;
    int32_t f8;
};

struct s4 {
    int32_t f0;
    signed char[4] pad8;
    struct s1* f8;
    signed char[7] pad16;
    struct s5* f16;
};

struct s4* the_secs;

int32_t __RUNTIME_PSEUDO_RELOC_LIST__ = 0;

int32_t g40428c = 0;

int32_t g404290 = 1;

struct s6 {
    signed char[4194304] pad4194304;
    struct s1* f4194304;
};

struct s7 {
    int64_t f0;
    int64_t f8;
};

struct s0* __write_memory(struct s1* rcx, void* rdx, struct s1* r8, struct s1* r9);

int64_t VirtualQuery = 0x864e;

int64_t VirtualProtect = 0x863c;

struct s9 {
    signed char[8] pad8;
    int32_t f8;
};

struct s8 {
    signed char[8] pad8;
    struct s1* f8;
    signed char[7] pad16;
    struct s9* f16;
};

/* .text */
struct s0* text(struct s1* rcx, struct s1* rdx, struct s1* r8, struct s1* r9);

struct s1* g4041f8 = reinterpret_cast<struct s1*>(32);

struct s10 {
    signed char[4211192] pad4211192;
    int32_t f4211192;
};

int32_t g404234 = 0x776f6e6b;

struct s11 {
    signed char[4194304] pad4194304;
    struct s1* f4194304;
};

struct s12 {
    signed char[4194304] pad4194304;
    struct s1* f4194304;
};

struct s0* _pei386_runtime_relocator(struct s1* rcx, struct s1* rdx, struct s1* r8, struct s1* r9) {
    void* rsp5;
    void* rbp6;
    int32_t r12d7;
    int64_t rax8;
    struct s2* rbx9;
    struct s3* rsp10;
    struct s0* rax11;
    int32_t edi12;
    int32_t r11d13;
    int32_t r10d14;
    struct s1* rdx15;
    struct s2* rbx16;
    struct s6* rcx17;
    struct s7* rsp18;
    int32_t ecx19;
    void* rbx20;
    int32_t esi21;
    int64_t r12_22;
    int64_t rdi23;
    struct s0* tmp64_24;
    int64_t rcx25;
    struct s7* rsp26;
    int64_t rax27;
    struct s3* rsp28;
    struct s4* rax29;
    int64_t r8_30;
    struct s7* rsp31;
    int64_t v32;
    int64_t v33;
    int1_t less34;
    struct s8* tmp64_35;
    struct s7* rsp36;
    struct s7* rsp37;
    struct s3* rsp38;
    int1_t zf39;
    struct s10* rdx40;
    void* r8_41;
    struct s1* rcx42;
    struct s7* rsp43;
    struct s11* rcx44;
    struct s12* rdx45;
    struct s1* r8_46;
    struct s1* rdx47;
    struct s7* rsp48;
    struct s7* rsp49;
    struct s7* rsp50;
    struct s7* rsp51;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rbp6 = rsp5;
    r12d7 = bss;
    if (r12d7) 
        goto addr_401f79_2;
    bss = 1;
    __mingw_GetSectionCount(rcx, rdx, r8, r9);
    rax8 = ___chkstk_ms(rcx, rdx, r8, r9);
    rbx9 = reinterpret_cast<struct s2*>(0x404288);
    maxSections = 0;
    rsp10 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rsp5) - 8 - 8 - 8 - 8 - 96 - 8 + 8 - 8 + 8 - rax8);
    the_secs = reinterpret_cast<struct s4*>(&rsp10->f32);
    rax11 = reinterpret_cast<struct s0*>(24);
    if (0) 
        goto addr_401f79_2;
    if (!0) {
        edi12 = __RUNTIME_PSEUDO_RELOC_LIST__;
        if (edi12) 
            goto addr_402001_6;
        r11d13 = g40428c;
        if (r11d13) 
            goto addr_402001_6;
        r10d14 = g404290;
        if (r10d14) 
            goto addr_4020e9_9;
        rbx9 = reinterpret_cast<struct s2*>(0x404294);
    }
    *reinterpret_cast<int32_t*>(&r9) = rbx9->f0;
    *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r9) || (*reinterpret_cast<int32_t*>(&r8) = rbx9->f4, *reinterpret_cast<int32_t*>(&r8 + 4) = 0, !!*reinterpret_cast<int32_t*>(&r8))) {
        addr_402001_6:
        if (reinterpret_cast<uint64_t>(rbx9) >= 0x4042a0) 
            goto addr_401f79_2;
    } else {
        addr_4020e9_9:
        *reinterpret_cast<int32_t*>(&rdx15) = rbx9->f8;
        *reinterpret_cast<int32_t*>(&rdx15 + 4) = 0;
        if (*reinterpret_cast<int32_t*>(&rdx15) == 1) {
            rbx16 = rbx9 + 1;
            if (reinterpret_cast<uint64_t>(rbx16) < 0x4042a0) {
                goto addr_402113_14;
            }
        }
    }
    do {
        *reinterpret_cast<int32_t*>(&rcx17) = rbx9->f4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = 0;
        rbx9 = reinterpret_cast<struct s2*>(&rbx9->f8);
        rsp18 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsp10) - 8);
        rsp18->f0 = 0x402031;
        rax11 = __write_memory(&rcx17->f4194304, reinterpret_cast<int64_t>(rbp6) - 36, 4, r9);
        rsp10 = reinterpret_cast<struct s3*>(&rsp18->f8);
    } while (reinterpret_cast<uint64_t>(rbx9) < 0x4042a0);
    addr_402036_17:
    ecx19 = maxSections;
    if (reinterpret_cast<uint1_t>(ecx19 < 0) | reinterpret_cast<uint1_t>(ecx19 == 0)) {
        addr_401f79_2:
        return rax11;
    } else {
        *reinterpret_cast<int32_t*>(&rbx20) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx20) + 4) = 0;
        esi21 = 0;
        r12_22 = VirtualQuery;
        rdi23 = VirtualProtect;
        do {
            tmp64_24 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx20) + reinterpret_cast<int64_t>(the_secs));
            rax11 = tmp64_24;
            if (rax11->f0) {
                rcx25 = rax11->f8;
                rsp26 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsp10) - 8);
                rsp26->f0 = 0x402094;
                rax27 = reinterpret_cast<int64_t>(r12_22(rcx25, reinterpret_cast<int64_t>(rbp6) - 96, 48, r9));
                rsp28 = reinterpret_cast<struct s3*>(&rsp26->f8);
                if (!rax27) 
                    break;
                rax29 = the_secs;
                r9 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbp6) + 0xffffffffffffffdc);
                *reinterpret_cast<int32_t*>(&r8_30) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax29) + reinterpret_cast<int64_t>(rbx20));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_30) + 4) = 0;
                rsp31 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsp28) - 8);
                rsp31->f0 = 0x4020b6;
                rax11 = reinterpret_cast<struct s0*>(rdi23(v32, v33, r8_30, r9));
                rsp10 = reinterpret_cast<struct s3*>(&rsp31->f8);
            }
            ++esi21;
            rbx20 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx20) + 24);
            less34 = esi21 < maxSections;
        } while (less34);
        goto addr_401f79_2;
    }
    tmp64_35 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(rbx20) + reinterpret_cast<int64_t>(the_secs));
    r8 = tmp64_35->f8;
    *reinterpret_cast<int32_t*>(&rdx15) = tmp64_35->f16->f8;
    *reinterpret_cast<int32_t*>(&rdx15 + 4) = 0;
    rsp36 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsp28) - 8);
    rsp36->f0 = 0x402257;
    text(0x4041c0, rdx15, r8, r9);
    rsp10 = reinterpret_cast<struct s3*>(&rsp36->f8);
    rsp37 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsp10) - 8);
    rsp37->f0 = 0x402263;
    text(0x4041f8, rdx15, r8, r9);
    rsp38 = reinterpret_cast<struct s3*>(&rsp37->f8);
    zf39 = reinterpret_cast<int1_t>(g4041f8 == 0x5a4d);
    if (!zf39 || (rdx40 = reinterpret_cast<struct s10*>(static_cast<int64_t>(g404234)), *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(0x4041f8) + reinterpret_cast<uint64_t>(rdx40)) != 0x4550)) {
        goto rsp38->f0;
    } else {
        goto rsp38->f0;
    }
    addr_402181_28:
    goto addr_402036_17;
    while (1) {
        addr_402151_29:
        if (*reinterpret_cast<uint32_t*>(&rax11) == 32) {
            *reinterpret_cast<struct s1**>(&r8_41) = *reinterpret_cast<struct s1**>(&rcx42->f0);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_41) + 4) = 0;
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&r8_41)) & 0x80000000)) 
                goto addr_4021b5_31;
            while (1) {
                rsp43 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsp10) - 8);
                rsp43->f0 = 0x402204;
                rax11 = __write_memory(rcx42, reinterpret_cast<int64_t>(rbp6) - 48, 4, r9);
                rsp10 = reinterpret_cast<struct s3*>(&rsp43->f8);
                while (1) {
                    while (1) {
                        ++rbx16;
                        if (reinterpret_cast<uint64_t>(rbx16) >= 0x4042a0) 
                            goto addr_402181_28;
                        addr_402113_14:
                        *reinterpret_cast<int32_t*>(&rcx44) = rbx16->f4;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx44) + 4) = 0;
                        *reinterpret_cast<int32_t*>(&rdx45) = rbx16->f0;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = 0;
                        *reinterpret_cast<int32_t*>(&r8_46) = rbx16->f8;
                        *reinterpret_cast<int32_t*>(&r8_46 + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&rax11) = *reinterpret_cast<unsigned char*>(&r8_46);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
                        rdx47 = reinterpret_cast<struct s1*>(&rdx45->f4194304);
                        rcx42 = reinterpret_cast<struct s1*>(&rcx44->f4194304);
                        r9 = *reinterpret_cast<struct s1**>(&rdx47->f0);
                        if (*reinterpret_cast<uint32_t*>(&rax11) == 16) {
                            *reinterpret_cast<struct s1**>(&r8_41) = reinterpret_cast<struct s1*>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<struct s1**>(&rcx42->f0))));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_41) + 4) = 0;
                            if (reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&r8_41)) & 0x8000) 
                                break;
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rax11) > 16) 
                                goto addr_402151_29;
                            if (*reinterpret_cast<uint32_t*>(&rax11) != 8) 
                                goto addr_402139_38;
                            *reinterpret_cast<struct s1**>(&r8_41) = reinterpret_cast<struct s1*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&rcx42->f0))));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_41) + 4) = 0;
                            if (*reinterpret_cast<unsigned char*>(&r8_41) & 0x80) 
                                goto addr_402213_40;
                        }
                        addr_4021b5_31:
                        r9 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(r9) + reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r8_41) - reinterpret_cast<unsigned char>(rdx47)));
                        if (*reinterpret_cast<uint32_t*>(&rax11) == 16) 
                            goto addr_4021a4_41;
                        if (*reinterpret_cast<uint32_t*>(&rax11) > 16) 
                            goto addr_402226_43;
                        if (*reinterpret_cast<uint32_t*>(&rax11) != 8) 
                            continue;
                        addr_4021cb_45:
                        rsp48 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsp10) - 8);
                        rsp48->f0 = 0x4021da;
                        rax11 = __write_memory(rcx42, reinterpret_cast<int64_t>(rbp6) - 48, 1, r9);
                        rsp10 = reinterpret_cast<struct s3*>(&rsp48->f8);
                        continue;
                        addr_402213_40:
                        goto addr_4021cb_45;
                    }
                    addr_4021a4_41:
                    rsp49 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsp10) - 8);
                    rsp49->f0 = 0x4021b3;
                    rax11 = __write_memory(rcx42, reinterpret_cast<int64_t>(rbp6) - 48, 2, r9);
                    rsp10 = reinterpret_cast<struct s3*>(&rsp49->f8);
                    continue;
                    addr_402226_43:
                    if (*reinterpret_cast<uint32_t*>(&rax11) == 32) 
                        break;
                    if (*reinterpret_cast<uint32_t*>(&rax11) != 64) 
                        continue;
                    addr_402169_49:
                    rsp50 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsp10) - 8);
                    rsp50->f0 = 0x402178;
                    rax11 = __write_memory(rcx42, reinterpret_cast<int64_t>(rbp6) - 48, 8, r9);
                    rsp10 = reinterpret_cast<struct s3*>(&rsp50->f8);
                }
            }
        } else {
            if (*reinterpret_cast<uint32_t*>(&rax11) == 64) {
                r9 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r9) - reinterpret_cast<unsigned char>(rdx47)) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&rcx42->f0)));
                goto addr_402169_49;
            }
        }
        addr_402139_38:
        rcx42 = reinterpret_cast<struct s1*>(0x404230);
        *reinterpret_cast<uint32_t*>(&rdx47) = *reinterpret_cast<unsigned char*>(&r8_46);
        *reinterpret_cast<int32_t*>(&rdx47 + 4) = 0;
        rsp51 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsp10) - 8);
        rsp51->f0 = 0x402151;
        rax11 = text(0x404230, rdx47, r8_46, r9);
        rsp10 = reinterpret_cast<struct s3*>(&rsp51->f8);
    }
}

int64_t _GetPEImageBase(struct s1* rcx);

/* was_here.61446 */
int32_t was_here_61446;

signed char _FindPESectionByName(struct s1* rcx, struct s1* rdx, struct s1* r8);

struct s13 {
    signed char f0;
    signed char[3] pad4;
    int32_t f4;
    int32_t f8;
};

/* .text */
void text(uint32_t* rcx);

struct s14 {
    signed char[8] pad8;
    int32_t f8;
    signed char f12;
    signed char[26] pad39;
    unsigned char f39;
};

struct s14* _FindPESectionExec(int64_t rcx);

int64_t RtlAddFunctionTable = 0x8580;

int64_t __mingw_init_ehandler(struct s1* rcx, struct s1* rdx, struct s1* r8) {
    int64_t rax4;
    int64_t rbx5;
    int64_t rax6;
    signed char rax7;
    signed char rax8;
    int64_t rcx9;
    signed char* rsi10;
    struct s13* rdi11;
    struct s13* rbp12;
    signed char* rdi13;
    int64_t r12_14;
    int64_t rdi15;
    struct s14* rax16;
    signed char edx17;
    int32_t edx18;
    signed char* rax19;
    int64_t rax20;
    int64_t rdx21;

    rax4 = _GetPEImageBase(rcx);
    rbx5 = rax4;
    *reinterpret_cast<int32_t*>(&rax6) = was_here_61446;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    if (!rbx5 || (*reinterpret_cast<int32_t*>(&rax6) || (was_here_61446 = 1, rax7 = _FindPESectionByName(0x404030, rdx, r8), *reinterpret_cast<int32_t*>(&rax6) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0, !!rax7))) {
        addr_40193d_2:
        return rax6;
    } else {
        rax8 = rax7;
        *reinterpret_cast<int32_t*>(&rcx9) = 48;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        rsi10 = reinterpret_cast<signed char*>(0x407240);
        rdi11 = reinterpret_cast<struct s13*>(0x4070c0);
        rbp12 = reinterpret_cast<struct s13*>(0x4070c0);
        while (rcx9) {
            --rcx9;
            rdi11->f0 = rax8;
            rdi11 = reinterpret_cast<struct s13*>(&rdi11->f8);
            rsi10 = rsi10 + 8;
        }
        rdi13 = rsi10;
        r12_14 = reinterpret_cast<int64_t>(text) - rbx5;
        *reinterpret_cast<signed char*>(&rcx9) = 32;
        while (rcx9) {
            --rcx9;
            *rdi13 = rax8;
            rdi13 = rdi13 + 8;
            rsi10 = rsi10 + 8;
        }
        *reinterpret_cast<int32_t*>(&rdi15) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = 0;
        do {
            rax16 = _FindPESectionExec(rdi15);
            if (!rax16) 
                break;
            rsi10[rdi15 * 8] = 9;
            *reinterpret_cast<int32_t*>(0x407244 + rdi15 * 8) = *reinterpret_cast<int32_t*>(&r12_14);
            edx17 = rax16->f12;
            rbp12->f0 = edx17;
            edx18 = edx17 + rax16->f8;
            rax19 = rsi10 + rdi15 * 8;
            ++rdi15;
            rax20 = reinterpret_cast<int64_t>(rax19) - rbx5;
            rbp12->f8 = *reinterpret_cast<int32_t*>(&rax20);
            rbp12->f4 = edx18;
            ++rbp12;
        } while (rdi15 != 32);
        goto addr_401a00_12;
    }
    if (rdi15) {
        *reinterpret_cast<int32_t*>(&rdx21) = *reinterpret_cast<int32_t*>(&rdi15);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&rax6) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
        goto addr_40193d_2;
    }
    addr_401a05_16:
    RtlAddFunctionTable(0x4070c0, rdx21, rbx5);
    *reinterpret_cast<int32_t*>(&rax6) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    goto addr_40193d_2;
    addr_401a00_12:
    *reinterpret_cast<int32_t*>(&rdx21) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = 0;
    goto addr_401a05_16;
}

/* .bss */
int64_t bss;

struct s15 {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
    unsigned char f4;
    unsigned char f5;
};

struct s15* __mingw_enum_import_library_names(int32_t ecx);

int64_t LoadLibraryW = 0x8556;

int64_t GetModuleHandleA = 0x84c0;

int64_t __mingw_get_msvcrt_handle(struct s1* rcx, struct s1* rdx) {
    int64_t rax3;
    int64_t rcx4;
    struct s15* rax5;
    uint32_t edx6;
    uint32_t edx7;
    uint32_t edx8;
    uint32_t edx9;
    uint32_t edx10;
    uint32_t edx11;
    uint32_t edx12;

    rax3 = bss;
    if (rax3) 
        goto addr_4025a1_2;
    *reinterpret_cast<int32_t*>(&rcx4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
    while (rax5 = __mingw_enum_import_library_names(*reinterpret_cast<int32_t*>(&rcx4)), !!rax5) {
        edx6 = rax5->f0;
        if ((*reinterpret_cast<signed char*>(&edx6) == 77 || *reinterpret_cast<signed char*>(&edx6) == 0x6d) && (((edx7 = rax5->f1, *reinterpret_cast<signed char*>(&edx7) == 83) || *reinterpret_cast<signed char*>(&edx7) == 0x73) && (((edx8 = rax5->f2, *reinterpret_cast<signed char*>(&edx8) == 86) || *reinterpret_cast<signed char*>(&edx8) == 0x76) && (((edx9 = rax5->f3, *reinterpret_cast<signed char*>(&edx9) == 67) || *reinterpret_cast<signed char*>(&edx9) == 99) && ((edx10 = rax5->f4, *reinterpret_cast<signed char*>(&edx10) == 82) || *reinterpret_cast<signed char*>(&edx10) == 0x72))))) {
            edx11 = rax5->f5;
            if (*reinterpret_cast<signed char*>(&edx11) == 84) 
                goto addr_402624_7;
            if (*reinterpret_cast<signed char*>(&edx11) == 0x74) 
                goto addr_402624_7;
            edx12 = edx11 - 48;
            if (*reinterpret_cast<unsigned char*>(&edx12) <= 9) 
                goto addr_402624_7;
        }
        *reinterpret_cast<int32_t*>(&rcx4) = static_cast<int32_t>(rcx4 + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
    }
    addr_402640_12:
    rax3 = reinterpret_cast<int64_t>(LoadLibraryW("m"));
    bss = rax3;
    goto addr_4025a1_2;
    addr_402624_7:
    rax3 = reinterpret_cast<int64_t>(GetModuleHandleA(rax5));
    bss = rax3;
    if (rax3) {
        addr_4025a1_2:
        return rax3;
    } else {
        goto addr_402640_12;
    }
}

int64_t malloc = 0x876e;

struct s1* malloc(struct s1* rcx, struct s1* rdx, ...) {
    goto malloc;
}

int64_t strlen = 0x878c;

uint64_t strlen(struct s1* rcx, struct s1* rdx, struct s1* r8) {
    goto strlen;
}

int64_t memcpy = 0x8778;

void memcpy(struct s1* rcx, struct s1* rdx, struct s1* r8) {
    goto memcpy;
}

int64_t _cexit = 0x86fc;

void _cexit(struct s1* rcx, struct s1* rdx) {
    goto _cexit;
}

int64_t _amsg_exit = 0x86ee;

void _amsg_exit(struct s1* rcx) {
    goto _amsg_exit;
}

/* std::ios_base::Init::Init() */
int64_t _ZNSt8ios_base4InitC1Ev = 0x87c0;

/* std::ios_base::Init::Init() */
void _ZNSt8ios_base4InitC1Ev(int64_t rcx) {
    goto _ZNSt8ios_base4InitC1Ev;
}

/* .text */
uint64_t text(int64_t rcx);

int64_t atexit(int64_t rcx) {
    uint64_t rax2;
    int64_t rax3;

    rax2 = text(rcx);
    *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rax2) - (*reinterpret_cast<uint32_t*>(&rax2) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax2) < *reinterpret_cast<uint32_t*>(&rax2) + reinterpret_cast<uint1_t>(rax2 < 1)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    return rax3;
}

int64_t _lock = 0x871c;

void _lock(int64_t rcx) {
    goto _lock;
}

/* .text */
int64_t text(int64_t rcx) {
    return rcx;
}

int64_t __dllonexit = 0x8676;

uint64_t __dllonexit(int64_t rcx, void* rdx, void* r8) {
    goto __dllonexit;
}

int64_t _unlock = 0x872e;

void _unlock(int64_t rcx, void* rdx, void* r8) {
    goto _unlock;
}

int64_t signal = 0x8782;

struct s1* signal(int64_t rcx, ...) {
    goto signal;
}

/* .text */
void text(int64_t rcx, struct s1* rdx) {
    __asm__("fninit ");
    return;
}

struct s16 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

/* .text */
int32_t text(struct s16* rcx);

int32_t g40003c;

struct s17 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

int32_t strncmp(signed char rcx, struct s1* rdx, int64_t r8);

signed char _FindPESectionByName(struct s1* rcx, struct s1* rdx, struct s1* r8) {
    signed char rbx4;
    struct s1* rsi5;
    uint64_t rax6;
    int32_t eax7;
    int64_t rdx8;
    struct s17* rax9;
    uint32_t edx10;
    uint32_t ecx11;
    int64_t rcx12;
    int64_t rdx13;
    signed char rdi14;
    int32_t eax15;

    *reinterpret_cast<int32_t*>(&rbx4) = 0;
    *reinterpret_cast<int32_t*>(&rbx4 + 4) = 0;
    rsi5 = rcx;
    rax6 = strlen(rcx, rdx, r8);
    if (rax6 > 8 || ((eax7 = text(0x400000), eax7 == 0) || (rdx8 = g40003c, rax9 = reinterpret_cast<struct s17*>(0x400000 + rdx8), edx10 = rax9->f6, ecx11 = rax9->f20, edx10 == 0))) {
        addr_40236e_2:
        return rbx4;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx12) = *reinterpret_cast<uint16_t*>(&ecx11);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rdx13) = edx10 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
        rbx4 = reinterpret_cast<signed char>(reinterpret_cast<int64_t>(rax9) + rcx12 + 24);
        rdi14 = reinterpret_cast<signed char>(rbx4 + (rdx13 + rdx13 * 4) * 8 + 40);
        do {
            eax15 = strncmp(rbx4, rsi5, 8);
            if (!eax15) 
                goto addr_40236e_2;
            rbx4 = reinterpret_cast<signed char>(rbx4 + 40);
        } while (rbx4 != rdi14);
    }
    return 0;
}

struct s18 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s14* _FindPESectionExec(int64_t rcx) {
    int64_t rbx2;
    int32_t eax3;
    struct s14* rdx4;
    int64_t rcx5;
    struct s18* rax6;
    uint32_t ecx7;
    uint32_t r8d8;
    int64_t r8_9;
    int64_t rcx10;
    struct s14* rax11;

    rbx2 = rcx;
    eax3 = text(0x400000);
    *reinterpret_cast<int32_t*>(&rdx4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
    if (!eax3 || (rcx5 = g40003c, rax6 = reinterpret_cast<struct s18*>(0x400000 + rcx5), ecx7 = rax6->f6, r8d8 = rax6->f20, ecx7 == 0)) {
        addr_40246a_2:
        return rdx4;
    } else {
        *reinterpret_cast<uint32_t*>(&r8_9) = *reinterpret_cast<uint16_t*>(&r8d8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rcx10) = ecx7 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
        rdx4 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rax6) + r8_9 + 24);
        rax11 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rdx4) + (rcx10 + rcx10 * 4) * 8 + 40);
        do {
            if (rdx4->f39 & 32) {
                if (!rbx2) 
                    goto addr_40246a_2;
                --rbx2;
            }
            ++rdx4;
        } while (rdx4 != rax11);
    }
    *reinterpret_cast<int32_t*>(&rdx4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
    goto addr_40246a_2;
}

struct s19 {
    signed char[96] pad96;
    struct s1* f96;
};

int64_t __iob_func = 0x86a0;

struct s19* __iob_func(struct s1* rcx, struct s1* rdx, struct s1* r8, struct s1* r9, int64_t a5) {
    goto __iob_func;
}

int64_t fprintf = 0x8752;

void fprintf(struct s1* rcx, int64_t rdx, int64_t r8, int64_t r9, int64_t a5) {
    goto fprintf;
}

struct s20 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
};

struct s21 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s20* __mingw_GetSectionForAddress(struct s1* rcx) {
    int32_t eax2;
    uint64_t rdx3;
    uint64_t rax4;
    struct s21* rcx5;
    struct s20* rax6;
    uint32_t r8d7;
    uint32_t r9d8;
    int64_t r9_9;
    int64_t r8_10;
    struct s20* r9_11;
    uint64_t r8_12;
    uint64_t rcx13;

    eax2 = text(0x400000);
    if (!eax2) {
        return 0;
    }
    rdx3 = reinterpret_cast<uint64_t>(rcx - 0x40000);
    rax4 = reinterpret_cast<uint64_t>(static_cast<int64_t>(g40003c));
    rcx5 = reinterpret_cast<struct s21*>(0x400000 + rax4);
    *reinterpret_cast<int32_t*>(&rax6) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    r8d7 = rcx5->f6;
    r9d8 = rcx5->f20;
    if (r8d7) 
        goto addr_4022b8_5;
    addr_4022ee_6:
    return rax6;
    addr_4022b8_5:
    *reinterpret_cast<uint32_t*>(&r9_9) = *reinterpret_cast<uint16_t*>(&r9d8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_9) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r8_10) = r8d7 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_10) + 4) = 0;
    rax6 = reinterpret_cast<struct s20*>(reinterpret_cast<uint64_t>(rcx5) + r9_9 + 24);
    r9_11 = reinterpret_cast<struct s20*>(reinterpret_cast<uint64_t>(rax6) + (r8_10 + r8_10 * 4) * 8 + 40);
    do {
        *reinterpret_cast<int32_t*>(&r8_12) = rax6->f12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = 0;
        if (r8_12 > rdx3) 
            continue;
        *reinterpret_cast<int32_t*>(&rcx13) = rax6->f12 + rax6->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
        if (rdx3 < rcx13) 
            goto addr_4022ee_6;
        rax6 = reinterpret_cast<struct s20*>(reinterpret_cast<uint64_t>(rax6) + 40);
    } while (rax6 != r9_11);
    *reinterpret_cast<int32_t*>(&rax6) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    goto addr_4022ee_6;
}

int64_t _GetPEImageBase(struct s1* rcx) {
    int32_t eax2;
    int64_t rdx3;

    eax2 = text(0x400000);
    *reinterpret_cast<int32_t*>(&rdx3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx3) + 4) = 0;
    if (eax2) {
        rdx3 = 0x400000;
    }
    return rdx3;
}

struct s22 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    struct s20* f16;
};

struct s23 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s24 {
    int64_t f0;
    signed char[24] pad32;
    int32_t f32;
};

struct s25 {
    signed char[4194304] pad4194304;
    struct s1* f4194304;
};

struct s26 {
    int64_t f0;
    int64_t f8;
};

struct s27 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
};

struct s29 {
    signed char[8] pad8;
    int32_t f8;
};

struct s28 {
    signed char[8] pad8;
    struct s1* f8;
    signed char[7] pad16;
    struct s29* f16;
};

struct s30 {
    signed char[4211192] pad4211192;
    int32_t f4211192;
};

struct s31 {
    signed char[4194304] pad4194304;
    struct s1* f4194304;
};

struct s32 {
    signed char[4194304] pad4194304;
    struct s1* f4194304;
};

struct s0* __write_memory(struct s1* rcx, void* rdx, struct s1* r8, struct s1* r9) {
    void* rsp5;
    struct s1* rbx6;
    struct s0* rax7;
    int32_t ecx8;
    void* r12_9;
    struct s4* rax10;
    struct s20* rax11;
    void* rsp12;
    int64_t r12_13;
    struct s22* tmp64_14;
    int64_t rax15;
    void* rsp16;
    int64_t rdx17;
    struct s4* rax18;
    int64_t rcx19;
    int64_t rax20;
    struct s4* rax21;
    struct s1* rdx22;
    struct s1* r8_23;
    int32_t v24;
    int64_t v25;
    int64_t v26;
    int32_t tmp32_27;
    void* rsp28;
    void* rbp29;
    int32_t r12d30;
    int64_t rax31;
    struct s23* rbx32;
    struct s24* rsp33;
    int32_t edi34;
    int32_t r11d35;
    int32_t r10d36;
    struct s1* rdx37;
    struct s23* rbx38;
    struct s25* rcx39;
    struct s26* rsp40;
    int32_t ecx41;
    int64_t v42;
    void* rbx43;
    int32_t esi44;
    int64_t r12_45;
    int64_t rdi46;
    struct s27* tmp64_47;
    int64_t rcx48;
    struct s26* rsp49;
    int64_t rax50;
    struct s24* rsp51;
    struct s4* rax52;
    int64_t r8_53;
    struct s26* rsp54;
    int64_t v55;
    int64_t v56;
    int1_t less57;
    struct s28* tmp64_58;
    struct s26* rsp59;
    struct s26* rsp60;
    struct s24* rsp61;
    int1_t zf62;
    struct s30* rdx63;
    struct s0* rax64;
    void* r8_65;
    struct s1* rcx66;
    struct s26* rsp67;
    struct s31* rcx68;
    struct s32* rdx69;
    struct s1* r8_70;
    struct s1* rdx71;
    struct s26* rsp72;
    struct s26* rsp73;
    struct s26* rsp74;
    struct s26* rsp75;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 88);
    rbx6 = rcx;
    if (!r8) {
        return rax7;
    }
    ecx8 = maxSections;
    if (reinterpret_cast<uint1_t>(ecx8 < 0) | reinterpret_cast<uint1_t>(ecx8 == 0)) {
        *reinterpret_cast<int32_t*>(&r12_9) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_9) + 4) = 0;
    } else {
        rax10 = the_secs;
        *reinterpret_cast<int32_t*>(&r12_9) = 0;
        do {
            if (reinterpret_cast<unsigned char>(rbx6) < reinterpret_cast<unsigned char>(rax10->f8)) 
                continue;
            *reinterpret_cast<int32_t*>(&r8) = rax10->f16->f8;
            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
            if (reinterpret_cast<unsigned char>(rbx6) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rax10->f8) + reinterpret_cast<unsigned char>(r8))) 
                goto addr_401ee0_8;
            *reinterpret_cast<int32_t*>(&r12_9) = *reinterpret_cast<int32_t*>(&r12_9) + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_9) + 4) = 0;
            ++rax10;
        } while (*reinterpret_cast<int32_t*>(&r12_9) != ecx8);
    }
    rax11 = __mingw_GetSectionForAddress(rbx6);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    if (!rax11) {
        text(0x4041a0, rbx6, r8, r9);
        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
        goto addr_401f3e_12;
    }
    r12_13 = *reinterpret_cast<int32_t*>(&r12_9);
    r12_9 = reinterpret_cast<void*>(r12_13 + r12_13 * 2 << 3);
    tmp64_14 = reinterpret_cast<struct s22*>(reinterpret_cast<int64_t>(r12_9) + reinterpret_cast<int64_t>(the_secs));
    tmp64_14->f16 = rax11;
    tmp64_14->f0 = 0;
    rax15 = _GetPEImageBase(rbx6);
    rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx17) = rax11->f12;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = 0;
    tmp64_14->f8 = rax15 + rdx17;
    rax18 = the_secs;
    rcx19 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rax18) + reinterpret_cast<int64_t>(r12_9) + 8);
    rax20 = reinterpret_cast<int64_t>(VirtualQuery(rcx19, reinterpret_cast<int64_t>(rsp16) + 32, 48, r9));
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
    if (!rax20) {
        addr_401f3e_12:
        rax21 = the_secs;
        *reinterpret_cast<int32_t*>(&rdx22) = rax11->f8;
        *reinterpret_cast<int32_t*>(&rdx22 + 4) = 0;
        r8_23 = *reinterpret_cast<struct s1**>(reinterpret_cast<int64_t>(rax21) + reinterpret_cast<int64_t>(r12_9) + 8);
        text(0x4041c0, rdx22, r8_23, r9);
    } else {
        if (v24 != 4 && v24 != 64) {
            VirtualProtect(v25, v26, 64);
        }
        tmp32_27 = maxSections + 1;
        maxSections = tmp32_27;
        goto addr_401ee0_8;
    }
    rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8);
    rbp29 = rsp28;
    r12d30 = bss;
    if (r12d30) 
        goto addr_401f79_18;
    bss = 1;
    __mingw_GetSectionCount(0x4041c0, rdx22, r8_23, r9);
    rax31 = ___chkstk_ms(0x4041c0, rdx22, r8_23, r9);
    rbx32 = reinterpret_cast<struct s23*>(0x404288);
    maxSections = 0;
    rsp33 = reinterpret_cast<struct s24*>(reinterpret_cast<int64_t>(rsp28) - 8 - 8 - 8 - 8 - 96 - 8 + 8 - 8 + 8 - rax31);
    the_secs = reinterpret_cast<struct s4*>(&rsp33->f32);
    if (0) 
        goto addr_401f79_18;
    if (!0) {
        edi34 = __RUNTIME_PSEUDO_RELOC_LIST__;
        if (edi34) 
            goto addr_402001_22;
        r11d35 = g40428c;
        if (r11d35) 
            goto addr_402001_22;
        r10d36 = g404290;
        if (r10d36) 
            goto addr_4020e9_25;
        rbx32 = reinterpret_cast<struct s23*>(0x404294);
    }
    *reinterpret_cast<int32_t*>(&r9) = rbx32->f0;
    *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r9) || (*reinterpret_cast<int32_t*>(&r8_23) = rbx32->f4, *reinterpret_cast<int32_t*>(&r8_23 + 4) = 0, !!*reinterpret_cast<int32_t*>(&r8_23))) {
        addr_402001_22:
        if (reinterpret_cast<uint64_t>(rbx32) >= 0x4042a0) 
            goto addr_401f79_18;
    } else {
        addr_4020e9_25:
        *reinterpret_cast<int32_t*>(&rdx37) = rbx32->f8;
        *reinterpret_cast<int32_t*>(&rdx37 + 4) = 0;
        if (*reinterpret_cast<int32_t*>(&rdx37) == 1) {
            rbx38 = rbx32 + 1;
            if (reinterpret_cast<uint64_t>(rbx38) < 0x4042a0) {
                goto addr_402113_30;
            }
        }
    }
    do {
        *reinterpret_cast<int32_t*>(&rcx39) = rbx32->f4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx39) + 4) = 0;
        rbx32 = reinterpret_cast<struct s23*>(&rbx32->f8);
        rsp40 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rsp33) - 8);
        rsp40->f0 = 0x402031;
        __write_memory(&rcx39->f4194304, reinterpret_cast<int64_t>(rbp29) - 36, 4, r9);
        rsp33 = reinterpret_cast<struct s24*>(&rsp40->f8);
    } while (reinterpret_cast<uint64_t>(rbx32) < 0x4042a0);
    addr_402036_33:
    ecx41 = maxSections;
    if (reinterpret_cast<uint1_t>(ecx41 < 0) | reinterpret_cast<uint1_t>(ecx41 == 0)) {
        addr_401f79_18:
        goto v42;
    } else {
        *reinterpret_cast<int32_t*>(&rbx43) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx43) + 4) = 0;
        esi44 = 0;
        r12_45 = VirtualQuery;
        rdi46 = VirtualProtect;
        do {
            tmp64_47 = reinterpret_cast<struct s27*>(reinterpret_cast<int64_t>(rbx43) + reinterpret_cast<int64_t>(the_secs));
            if (tmp64_47->f0) {
                rcx48 = tmp64_47->f8;
                rsp49 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rsp33) - 8);
                rsp49->f0 = 0x402094;
                rax50 = reinterpret_cast<int64_t>(r12_45(rcx48, reinterpret_cast<int64_t>(rbp29) - 96, 48, r9));
                rsp51 = reinterpret_cast<struct s24*>(&rsp49->f8);
                if (!rax50) 
                    break;
                rax52 = the_secs;
                r9 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbp29) + 0xffffffffffffffdc);
                *reinterpret_cast<int32_t*>(&r8_53) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax52) + reinterpret_cast<int64_t>(rbx43));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_53) + 4) = 0;
                rsp54 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rsp51) - 8);
                rsp54->f0 = 0x4020b6;
                rdi46(v55, v56, r8_53, r9);
                rsp33 = reinterpret_cast<struct s24*>(&rsp54->f8);
            }
            ++esi44;
            rbx43 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx43) + 24);
            less57 = esi44 < maxSections;
        } while (less57);
        goto addr_401f79_18;
    }
    tmp64_58 = reinterpret_cast<struct s28*>(reinterpret_cast<int64_t>(rbx43) + reinterpret_cast<int64_t>(the_secs));
    r8_23 = tmp64_58->f8;
    *reinterpret_cast<int32_t*>(&rdx37) = tmp64_58->f16->f8;
    *reinterpret_cast<int32_t*>(&rdx37 + 4) = 0;
    rsp59 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rsp51) - 8);
    rsp59->f0 = 0x402257;
    text(0x4041c0, rdx37, r8_23, r9);
    rsp33 = reinterpret_cast<struct s24*>(&rsp59->f8);
    rsp60 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rsp33) - 8);
    rsp60->f0 = 0x402263;
    text(0x4041f8, rdx37, r8_23, r9);
    rsp61 = reinterpret_cast<struct s24*>(&rsp60->f8);
    zf62 = reinterpret_cast<int1_t>(g4041f8 == 0x5a4d);
    if (!zf62 || (rdx63 = reinterpret_cast<struct s30*>(static_cast<int64_t>(g404234)), *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(0x4041f8) + reinterpret_cast<uint64_t>(rdx63)) != 0x4550)) {
        goto rsp61->f0;
    } else {
        goto rsp61->f0;
    }
    addr_401ee0_8:
    goto memcpy;
    addr_402181_45:
    goto addr_402036_33;
    while (1) {
        addr_402151_46:
        if (*reinterpret_cast<uint32_t*>(&rax64) == 32) {
            *reinterpret_cast<struct s1**>(&r8_65) = *reinterpret_cast<struct s1**>(&rcx66->f0);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_65) + 4) = 0;
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&r8_65)) & 0x80000000)) 
                goto addr_4021b5_48;
            while (1) {
                rsp67 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rsp33) - 8);
                rsp67->f0 = 0x402204;
                __write_memory(rcx66, reinterpret_cast<int64_t>(rbp29) - 48, 4, r9);
                rsp33 = reinterpret_cast<struct s24*>(&rsp67->f8);
                while (1) {
                    while (1) {
                        ++rbx38;
                        if (reinterpret_cast<uint64_t>(rbx38) >= 0x4042a0) 
                            goto addr_402181_45;
                        addr_402113_30:
                        *reinterpret_cast<int32_t*>(&rcx68) = rbx38->f4;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx68) + 4) = 0;
                        *reinterpret_cast<int32_t*>(&rdx69) = rbx38->f0;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx69) + 4) = 0;
                        *reinterpret_cast<int32_t*>(&r8_70) = rbx38->f8;
                        *reinterpret_cast<int32_t*>(&r8_70 + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&rax64) = *reinterpret_cast<unsigned char*>(&r8_70);
                        rdx71 = reinterpret_cast<struct s1*>(&rdx69->f4194304);
                        rcx66 = reinterpret_cast<struct s1*>(&rcx68->f4194304);
                        r9 = *reinterpret_cast<struct s1**>(&rdx71->f0);
                        if (*reinterpret_cast<uint32_t*>(&rax64) == 16) {
                            *reinterpret_cast<struct s1**>(&r8_65) = reinterpret_cast<struct s1*>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<struct s1**>(&rcx66->f0))));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_65) + 4) = 0;
                            if (reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&r8_65)) & 0x8000) 
                                break;
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rax64) > 16) 
                                goto addr_402151_46;
                            if (*reinterpret_cast<uint32_t*>(&rax64) != 8) 
                                goto addr_402139_55;
                            *reinterpret_cast<struct s1**>(&r8_65) = reinterpret_cast<struct s1*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&rcx66->f0))));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_65) + 4) = 0;
                            if (*reinterpret_cast<unsigned char*>(&r8_65) & 0x80) 
                                goto addr_402213_57;
                        }
                        addr_4021b5_48:
                        r9 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(r9) + reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r8_65) - reinterpret_cast<unsigned char>(rdx71)));
                        if (*reinterpret_cast<uint32_t*>(&rax64) == 16) 
                            goto addr_4021a4_58;
                        if (*reinterpret_cast<uint32_t*>(&rax64) > 16) 
                            goto addr_402226_60;
                        if (*reinterpret_cast<uint32_t*>(&rax64) != 8) 
                            continue;
                        addr_4021cb_62:
                        rsp72 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rsp33) - 8);
                        rsp72->f0 = 0x4021da;
                        __write_memory(rcx66, reinterpret_cast<int64_t>(rbp29) - 48, 1, r9);
                        rsp33 = reinterpret_cast<struct s24*>(&rsp72->f8);
                        continue;
                        addr_402213_57:
                        goto addr_4021cb_62;
                    }
                    addr_4021a4_58:
                    rsp73 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rsp33) - 8);
                    rsp73->f0 = 0x4021b3;
                    __write_memory(rcx66, reinterpret_cast<int64_t>(rbp29) - 48, 2, r9);
                    rsp33 = reinterpret_cast<struct s24*>(&rsp73->f8);
                    continue;
                    addr_402226_60:
                    if (*reinterpret_cast<uint32_t*>(&rax64) == 32) 
                        break;
                    if (*reinterpret_cast<uint32_t*>(&rax64) != 64) 
                        continue;
                    addr_402169_66:
                    rsp74 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rsp33) - 8);
                    rsp74->f0 = 0x402178;
                    __write_memory(rcx66, reinterpret_cast<int64_t>(rbp29) - 48, 8, r9);
                    rsp33 = reinterpret_cast<struct s24*>(&rsp74->f8);
                }
            }
        } else {
            if (*reinterpret_cast<uint32_t*>(&rax64) == 64) {
                r9 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r9) - reinterpret_cast<unsigned char>(rdx71)) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&rcx66->f0)));
                goto addr_402169_66;
            }
        }
        addr_402139_55:
        rcx66 = reinterpret_cast<struct s1*>(0x404230);
        *reinterpret_cast<uint32_t*>(&rdx71) = *reinterpret_cast<unsigned char*>(&r8_70);
        *reinterpret_cast<int32_t*>(&rdx71 + 4) = 0;
        rsp75 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rsp33) - 8);
        rsp75->f0 = 0x402151;
        rax64 = text(0x404230, rdx71, r8_70, r9);
        rsp33 = reinterpret_cast<struct s24*>(&rsp75->f8);
    }
}

void fwrite(struct s1* rcx, struct s1* rdx, struct s1* r8, struct s1* r9);

void vfprintf();

void abort(struct s1* rcx, struct s1* rdx, struct s1* r8, struct s1* r9);

struct s33 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    struct s20* f16;
};

struct s34 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s35 {
    int64_t f0;
    signed char[24] pad32;
    int32_t f32;
};

struct s36 {
    signed char[4194304] pad4194304;
    struct s1* f4194304;
};

struct s37 {
    int64_t f0;
    int64_t f8;
};

struct s38 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
};

struct s40 {
    signed char[8] pad8;
    int32_t f8;
};

struct s39 {
    signed char[8] pad8;
    struct s1* f8;
    signed char[7] pad16;
    struct s40* f16;
};

struct s41 {
    signed char[4211192] pad4211192;
    int32_t f4211192;
};

struct s42 {
    signed char[4194304] pad4194304;
    struct s1* f4194304;
};

struct s43 {
    signed char[4194304] pad4194304;
    struct s1* f4194304;
};

/* .text */
struct s0* text(struct s1* rcx, struct s1* rdx, struct s1* r8, struct s1* r9) {
    void* rsp5;
    int64_t v6;
    struct s19* rax7;
    struct s1* r9_8;
    int64_t v9;
    struct s19* rax10;
    struct s1* rcx11;
    struct s1* r8_12;
    void* rsp13;
    struct s1* rbx14;
    int64_t v15;
    int32_t ecx16;
    void* r12_17;
    struct s4* rax18;
    struct s20* rax19;
    void* rsp20;
    int64_t r12_21;
    struct s33* tmp64_22;
    int64_t rax23;
    void* rsp24;
    int64_t rdx25;
    struct s4* rax26;
    int64_t rcx27;
    int64_t rax28;
    struct s4* rax29;
    struct s1* rdx30;
    struct s1* r8_31;
    int32_t v32;
    int64_t v33;
    int64_t v34;
    int32_t tmp32_35;
    void* rsp36;
    void* rbp37;
    int32_t r12d38;
    int64_t rax39;
    struct s34* rbx40;
    struct s35* rsp41;
    int32_t edi42;
    int32_t r11d43;
    int32_t r10d44;
    struct s1* rdx45;
    struct s34* rbx46;
    struct s36* rcx47;
    struct s37* rsp48;
    int32_t ecx49;
    int64_t v50;
    void* rbx51;
    int32_t esi52;
    int64_t r12_53;
    int64_t rdi54;
    struct s38* tmp64_55;
    int64_t rcx56;
    struct s37* rsp57;
    int64_t rax58;
    struct s35* rsp59;
    struct s4* rax60;
    int64_t r8_61;
    struct s37* rsp62;
    int64_t v63;
    int64_t v64;
    int1_t less65;
    struct s39* tmp64_66;
    struct s37* rsp67;
    struct s37* rsp68;
    struct s35* rsp69;
    int1_t zf70;
    struct s41* rdx71;
    struct s0* rax72;
    void* r8_73;
    struct s1* rcx74;
    struct s37* rsp75;
    struct s42* rcx76;
    struct s43* rdx77;
    struct s1* r8_78;
    struct s1* rdx79;
    struct s37* rsp80;
    struct s37* rsp81;
    struct s37* rsp82;
    struct s37* rsp83;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 56);
    rax7 = __iob_func(rcx, rdx, r8, r9, v6);
    r9_8 = reinterpret_cast<struct s1*>(&rax7->f96);
    fwrite(0x404180, 1, 27, r9_8);
    rax10 = __iob_func(0x404180, 1, 27, r9_8, v9);
    rcx11 = reinterpret_cast<struct s1*>(&rax10->f96);
    r8_12 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rsp5) + 88);
    vfprintf();
    abort(rcx11, rcx, r8_12, r9_8);
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 88);
    rbx14 = rcx11;
    if (!r8_12) {
        goto v15;
    }
    ecx16 = maxSections;
    if (reinterpret_cast<uint1_t>(ecx16 < 0) | reinterpret_cast<uint1_t>(ecx16 == 0)) {
        *reinterpret_cast<int32_t*>(&r12_17) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_17) + 4) = 0;
    } else {
        rax18 = the_secs;
        *reinterpret_cast<int32_t*>(&r12_17) = 0;
        do {
            if (reinterpret_cast<unsigned char>(rbx14) < reinterpret_cast<unsigned char>(rax18->f8)) 
                continue;
            *reinterpret_cast<int32_t*>(&r8_12) = rax18->f16->f8;
            *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
            if (reinterpret_cast<unsigned char>(rbx14) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rax18->f8) + reinterpret_cast<unsigned char>(r8_12))) 
                goto addr_401ee0_9;
            *reinterpret_cast<int32_t*>(&r12_17) = *reinterpret_cast<int32_t*>(&r12_17) + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_17) + 4) = 0;
            ++rax18;
        } while (*reinterpret_cast<int32_t*>(&r12_17) != ecx16);
    }
    rax19 = __mingw_GetSectionForAddress(rbx14);
    rsp20 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
    if (!rax19) {
        text(0x4041a0, rbx14, r8_12, r9_8);
        rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp20) - 8 + 8);
        goto addr_401f3e_13;
    }
    r12_21 = *reinterpret_cast<int32_t*>(&r12_17);
    r12_17 = reinterpret_cast<void*>(r12_21 + r12_21 * 2 << 3);
    tmp64_22 = reinterpret_cast<struct s33*>(reinterpret_cast<int64_t>(r12_17) + reinterpret_cast<int64_t>(the_secs));
    tmp64_22->f16 = rax19;
    tmp64_22->f0 = 0;
    rax23 = _GetPEImageBase(rbx14);
    rsp24 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp20) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx25) = rax19->f12;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
    tmp64_22->f8 = rax23 + rdx25;
    rax26 = the_secs;
    rcx27 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rax26) + reinterpret_cast<int64_t>(r12_17) + 8);
    rax28 = reinterpret_cast<int64_t>(VirtualQuery(rcx27, reinterpret_cast<int64_t>(rsp24) + 32, 48, r9_8));
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp24) - 8 + 8);
    if (!rax28) {
        addr_401f3e_13:
        rax29 = the_secs;
        *reinterpret_cast<int32_t*>(&rdx30) = rax19->f8;
        *reinterpret_cast<int32_t*>(&rdx30 + 4) = 0;
        r8_31 = *reinterpret_cast<struct s1**>(reinterpret_cast<int64_t>(rax29) + reinterpret_cast<int64_t>(r12_17) + 8);
        text(0x4041c0, rdx30, r8_31, r9_8);
    } else {
        if (v32 != 4 && v32 != 64) {
            VirtualProtect(v33, v34, 64);
        }
        tmp32_35 = maxSections + 1;
        maxSections = tmp32_35;
        goto addr_401ee0_9;
    }
    rsp36 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8 - 8);
    rbp37 = rsp36;
    r12d38 = bss;
    if (r12d38) 
        goto addr_401f79_19;
    bss = 1;
    __mingw_GetSectionCount(0x4041c0, rdx30, r8_31, r9_8);
    rax39 = ___chkstk_ms(0x4041c0, rdx30, r8_31, r9_8);
    rbx40 = reinterpret_cast<struct s34*>(0x404288);
    maxSections = 0;
    rsp41 = reinterpret_cast<struct s35*>(reinterpret_cast<int64_t>(rsp36) - 8 - 8 - 8 - 8 - 96 - 8 + 8 - 8 + 8 - rax39);
    the_secs = reinterpret_cast<struct s4*>(&rsp41->f32);
    if (0) 
        goto addr_401f79_19;
    if (!0) {
        edi42 = __RUNTIME_PSEUDO_RELOC_LIST__;
        if (edi42) 
            goto addr_402001_23;
        r11d43 = g40428c;
        if (r11d43) 
            goto addr_402001_23;
        r10d44 = g404290;
        if (r10d44) 
            goto addr_4020e9_26;
        rbx40 = reinterpret_cast<struct s34*>(0x404294);
    }
    *reinterpret_cast<int32_t*>(&r9_8) = rbx40->f0;
    *reinterpret_cast<int32_t*>(&r9_8 + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&r9_8) || (*reinterpret_cast<int32_t*>(&r8_31) = rbx40->f4, *reinterpret_cast<int32_t*>(&r8_31 + 4) = 0, !!*reinterpret_cast<int32_t*>(&r8_31))) {
        addr_402001_23:
        if (reinterpret_cast<uint64_t>(rbx40) >= 0x4042a0) 
            goto addr_401f79_19;
    } else {
        addr_4020e9_26:
        *reinterpret_cast<int32_t*>(&rdx45) = rbx40->f8;
        *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
        if (*reinterpret_cast<int32_t*>(&rdx45) == 1) {
            rbx46 = rbx40 + 1;
            if (reinterpret_cast<uint64_t>(rbx46) < 0x4042a0) {
                goto addr_402113_31;
            }
        }
    }
    do {
        *reinterpret_cast<int32_t*>(&rcx47) = rbx40->f4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx47) + 4) = 0;
        rbx40 = reinterpret_cast<struct s34*>(&rbx40->f8);
        rsp48 = reinterpret_cast<struct s37*>(reinterpret_cast<int64_t>(rsp41) - 8);
        rsp48->f0 = 0x402031;
        __write_memory(&rcx47->f4194304, reinterpret_cast<int64_t>(rbp37) - 36, 4, r9_8);
        rsp41 = reinterpret_cast<struct s35*>(&rsp48->f8);
    } while (reinterpret_cast<uint64_t>(rbx40) < 0x4042a0);
    addr_402036_34:
    ecx49 = maxSections;
    if (reinterpret_cast<uint1_t>(ecx49 < 0) | reinterpret_cast<uint1_t>(ecx49 == 0)) {
        addr_401f79_19:
        goto v50;
    } else {
        *reinterpret_cast<int32_t*>(&rbx51) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx51) + 4) = 0;
        esi52 = 0;
        r12_53 = VirtualQuery;
        rdi54 = VirtualProtect;
        do {
            tmp64_55 = reinterpret_cast<struct s38*>(reinterpret_cast<int64_t>(rbx51) + reinterpret_cast<int64_t>(the_secs));
            if (tmp64_55->f0) {
                rcx56 = tmp64_55->f8;
                rsp57 = reinterpret_cast<struct s37*>(reinterpret_cast<int64_t>(rsp41) - 8);
                rsp57->f0 = 0x402094;
                rax58 = reinterpret_cast<int64_t>(r12_53(rcx56, reinterpret_cast<int64_t>(rbp37) - 96, 48, r9_8));
                rsp59 = reinterpret_cast<struct s35*>(&rsp57->f8);
                if (!rax58) 
                    break;
                rax60 = the_secs;
                r9_8 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbp37) + 0xffffffffffffffdc);
                *reinterpret_cast<int32_t*>(&r8_61) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax60) + reinterpret_cast<int64_t>(rbx51));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_61) + 4) = 0;
                rsp62 = reinterpret_cast<struct s37*>(reinterpret_cast<int64_t>(rsp59) - 8);
                rsp62->f0 = 0x4020b6;
                rdi54(v63, v64, r8_61, r9_8);
                rsp41 = reinterpret_cast<struct s35*>(&rsp62->f8);
            }
            ++esi52;
            rbx51 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx51) + 24);
            less65 = esi52 < maxSections;
        } while (less65);
        goto addr_401f79_19;
    }
    tmp64_66 = reinterpret_cast<struct s39*>(reinterpret_cast<int64_t>(rbx51) + reinterpret_cast<int64_t>(the_secs));
    r8_31 = tmp64_66->f8;
    *reinterpret_cast<int32_t*>(&rdx45) = tmp64_66->f16->f8;
    *reinterpret_cast<int32_t*>(&rdx45 + 4) = 0;
    rsp67 = reinterpret_cast<struct s37*>(reinterpret_cast<int64_t>(rsp59) - 8);
    rsp67->f0 = 0x402257;
    text(0x4041c0, rdx45, r8_31, r9_8);
    rsp41 = reinterpret_cast<struct s35*>(&rsp67->f8);
    rsp68 = reinterpret_cast<struct s37*>(reinterpret_cast<int64_t>(rsp41) - 8);
    rsp68->f0 = 0x402263;
    text(0x4041f8, rdx45, r8_31, r9_8);
    rsp69 = reinterpret_cast<struct s35*>(&rsp68->f8);
    zf70 = reinterpret_cast<int1_t>(g4041f8 == 0x5a4d);
    if (!zf70 || (rdx71 = reinterpret_cast<struct s41*>(static_cast<int64_t>(g404234)), *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(0x4041f8) + reinterpret_cast<uint64_t>(rdx71)) != 0x4550)) {
        goto rsp69->f0;
    } else {
        goto rsp69->f0;
    }
    addr_401ee0_9:
    goto memcpy;
    addr_402181_46:
    goto addr_402036_34;
    while (1) {
        addr_402151_47:
        if (*reinterpret_cast<uint32_t*>(&rax72) == 32) {
            *reinterpret_cast<struct s1**>(&r8_73) = *reinterpret_cast<struct s1**>(&rcx74->f0);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_73) + 4) = 0;
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&r8_73)) & 0x80000000)) 
                goto addr_4021b5_49;
            while (1) {
                rsp75 = reinterpret_cast<struct s37*>(reinterpret_cast<int64_t>(rsp41) - 8);
                rsp75->f0 = 0x402204;
                __write_memory(rcx74, reinterpret_cast<int64_t>(rbp37) - 48, 4, r9_8);
                rsp41 = reinterpret_cast<struct s35*>(&rsp75->f8);
                while (1) {
                    while (1) {
                        ++rbx46;
                        if (reinterpret_cast<uint64_t>(rbx46) >= 0x4042a0) 
                            goto addr_402181_46;
                        addr_402113_31:
                        *reinterpret_cast<int32_t*>(&rcx76) = rbx46->f4;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx76) + 4) = 0;
                        *reinterpret_cast<int32_t*>(&rdx77) = rbx46->f0;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx77) + 4) = 0;
                        *reinterpret_cast<int32_t*>(&r8_78) = rbx46->f8;
                        *reinterpret_cast<int32_t*>(&r8_78 + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&rax72) = *reinterpret_cast<unsigned char*>(&r8_78);
                        rdx79 = reinterpret_cast<struct s1*>(&rdx77->f4194304);
                        rcx74 = reinterpret_cast<struct s1*>(&rcx76->f4194304);
                        r9_8 = *reinterpret_cast<struct s1**>(&rdx79->f0);
                        if (*reinterpret_cast<uint32_t*>(&rax72) == 16) {
                            *reinterpret_cast<struct s1**>(&r8_73) = reinterpret_cast<struct s1*>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<struct s1**>(&rcx74->f0))));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_73) + 4) = 0;
                            if (reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&r8_73)) & 0x8000) 
                                break;
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rax72) > 16) 
                                goto addr_402151_47;
                            if (*reinterpret_cast<uint32_t*>(&rax72) != 8) 
                                goto addr_402139_56;
                            *reinterpret_cast<struct s1**>(&r8_73) = reinterpret_cast<struct s1*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&rcx74->f0))));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_73) + 4) = 0;
                            if (*reinterpret_cast<unsigned char*>(&r8_73) & 0x80) 
                                goto addr_402213_58;
                        }
                        addr_4021b5_49:
                        r9_8 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(r9_8) + reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r8_73) - reinterpret_cast<unsigned char>(rdx79)));
                        if (*reinterpret_cast<uint32_t*>(&rax72) == 16) 
                            goto addr_4021a4_59;
                        if (*reinterpret_cast<uint32_t*>(&rax72) > 16) 
                            goto addr_402226_61;
                        if (*reinterpret_cast<uint32_t*>(&rax72) != 8) 
                            continue;
                        addr_4021cb_63:
                        rsp80 = reinterpret_cast<struct s37*>(reinterpret_cast<int64_t>(rsp41) - 8);
                        rsp80->f0 = 0x4021da;
                        __write_memory(rcx74, reinterpret_cast<int64_t>(rbp37) - 48, 1, r9_8);
                        rsp41 = reinterpret_cast<struct s35*>(&rsp80->f8);
                        continue;
                        addr_402213_58:
                        goto addr_4021cb_63;
                    }
                    addr_4021a4_59:
                    rsp81 = reinterpret_cast<struct s37*>(reinterpret_cast<int64_t>(rsp41) - 8);
                    rsp81->f0 = 0x4021b3;
                    __write_memory(rcx74, reinterpret_cast<int64_t>(rbp37) - 48, 2, r9_8);
                    rsp41 = reinterpret_cast<struct s35*>(&rsp81->f8);
                    continue;
                    addr_402226_61:
                    if (*reinterpret_cast<uint32_t*>(&rax72) == 32) 
                        break;
                    if (*reinterpret_cast<uint32_t*>(&rax72) != 64) 
                        continue;
                    addr_402169_67:
                    rsp82 = reinterpret_cast<struct s37*>(reinterpret_cast<int64_t>(rsp41) - 8);
                    rsp82->f0 = 0x402178;
                    __write_memory(rcx74, reinterpret_cast<int64_t>(rbp37) - 48, 8, r9_8);
                    rsp41 = reinterpret_cast<struct s35*>(&rsp82->f8);
                }
            }
        } else {
            if (*reinterpret_cast<uint32_t*>(&rax72) == 64) {
                r9_8 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r9_8) - reinterpret_cast<unsigned char>(rdx79)) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&rcx74->f0)));
                goto addr_402169_67;
            }
        }
        addr_402139_56:
        rcx74 = reinterpret_cast<struct s1*>(0x404230);
        *reinterpret_cast<uint32_t*>(&rdx79) = *reinterpret_cast<unsigned char*>(&r8_78);
        *reinterpret_cast<int32_t*>(&rdx79 + 4) = 0;
        rsp83 = reinterpret_cast<struct s37*>(reinterpret_cast<int64_t>(rsp41) - 8);
        rsp83->f0 = 0x402151;
        rax72 = text(0x404230, rdx79, r8_78, r9_8);
        rsp41 = reinterpret_cast<struct s35*>(&rsp83->f8);
    }
}

struct s44 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f24;
};

/* .text */
int32_t text(struct s16* rcx) {
    struct s44* rcx2;
    int32_t eax3;

    if (rcx->f0 != 0x5a4d || (rcx2 = reinterpret_cast<struct s44*>(reinterpret_cast<int64_t>(rcx) + rcx->f60), rcx2->f0 != 0x4550)) {
        return 0;
    } else {
        eax3 = 0;
        *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<uint1_t>(rcx2->f24 == 0x20b);
        return eax3;
    }
}

int64_t strncmp = 0x8796;

int32_t strncmp(signed char rcx, struct s1* rdx, int64_t r8) {
    goto strncmp;
}

struct s45 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
    signed char[20] pad36;
    int32_t f36;
};

struct s46 {
    signed char[60] pad60;
    int32_t f60;
};

struct s47 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s45* _FindPESection(struct s46* rcx, uint64_t rdx) {
    struct s47* rcx3;
    struct s45* rax4;
    uint32_t r8d5;
    uint32_t r9d6;
    int64_t r9_7;
    int64_t r8_8;
    struct s45* r9_9;
    uint64_t r8_10;
    uint64_t rcx11;

    rcx3 = reinterpret_cast<struct s47*>(reinterpret_cast<int64_t>(rcx) + rcx->f60);
    *reinterpret_cast<int32_t*>(&rax4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    r8d5 = rcx3->f6;
    r9d6 = rcx3->f20;
    if (!r8d5) {
        addr_4022ee_2:
        return rax4;
    } else {
        *reinterpret_cast<uint32_t*>(&r9_7) = *reinterpret_cast<uint16_t*>(&r9d6);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_7) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&r8_8) = r8d5 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_8) + 4) = 0;
        rax4 = reinterpret_cast<struct s45*>(reinterpret_cast<int64_t>(rcx3) + r9_7 + 24);
        r9_9 = reinterpret_cast<struct s45*>(reinterpret_cast<int64_t>(rax4) + (r8_8 + r8_8 * 4) * 8 + 40);
        do {
            *reinterpret_cast<int32_t*>(&r8_10) = rax4->f12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_10) + 4) = 0;
            if (r8_10 > rdx) 
                continue;
            *reinterpret_cast<int32_t*>(&rcx11) = rax4->f12 + rax4->f8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
            if (rdx < rcx11) 
                goto addr_4022ee_2;
            ++rax4;
        } while (rax4 != r9_9);
    }
    *reinterpret_cast<int32_t*>(&rax4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    goto addr_4022ee_2;
}

/* .bss */
int32_t bss;

int64_t ___CTOR_LIST__ = -1;

/* .text */
void text();

int64_t __main(struct s1* rcx, struct s1* rdx, struct s1* r8) {
    int64_t rax4;
    int64_t rax5;
    int64_t rbx6;
    int32_t eax7;
    int64_t rdx8;
    int64_t rax9;
    uint64_t rax10;
    int64_t rax11;

    *reinterpret_cast<int32_t*>(&rax4) = bss;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax4)) {
        return rax4;
    }
    bss = 1;
    rax5 = ___CTOR_LIST__;
    *reinterpret_cast<int32_t*>(&rbx6) = *reinterpret_cast<int32_t*>(&rax5);
    if (*reinterpret_cast<int32_t*>(&rax5) != -1) 
        goto addr_4026c4_5;
    *reinterpret_cast<int32_t*>(&rbx6) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx6) + 4) = 0;
    while (eax7 = static_cast<int32_t>(rbx6 + 1), *reinterpret_cast<int32_t*>(&rdx8) = eax7, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0, !!*reinterpret_cast<int64_t*>(0x402d10 + rdx8 * 8)) {
        *reinterpret_cast<int32_t*>(&rbx6) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx6) + 4) = 0;
    }
    addr_4026c4_5:
    if (*reinterpret_cast<int32_t*>(&rbx6)) {
        do {
            *reinterpret_cast<int32_t*>(&rax9) = *reinterpret_cast<int32_t*>(&rbx6);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x402d10 + rax9 * 8)();
            *reinterpret_cast<int32_t*>(&rbx6) = *reinterpret_cast<int32_t*>(&rbx6) - 1;
        } while (*reinterpret_cast<int32_t*>(&rbx6));
    }
    rax10 = text(text);
    *reinterpret_cast<uint32_t*>(&rax11) = *reinterpret_cast<uint32_t*>(&rax10) - (*reinterpret_cast<uint32_t*>(&rax10) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax10) < *reinterpret_cast<uint32_t*>(&rax10) + reinterpret_cast<uint1_t>(rax10 < 1)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    return rax11;
}

int64_t abort = 0x8738;

void abort(struct s1* rcx, struct s1* rdx, struct s1* r8, struct s1* r9) {
    goto abort;
}

int64_t EnterCriticalSection = 0x8458;

struct s48 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    struct s48* f16;
};

struct s48* key_dtor_list;

int64_t TlsGetValue = 0x8612;

int64_t GetLastError = 0x84b0;

int64_t LeaveCriticalSection = 0x853e;

/* .text */
void text() {
    struct s48* rbx1;
    int64_t rdi2;
    int64_t rsi3;
    int64_t rcx4;
    int64_t rax5;
    int32_t eax6;
    int64_t rax7;
    int64_t rax8;

    EnterCriticalSection(0x407940);
    rbx1 = key_dtor_list;
    if (rbx1) {
        rdi2 = TlsGetValue;
        rsi3 = GetLastError;
        do {
            *reinterpret_cast<int32_t*>(&rcx4) = rbx1->f0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
            rax5 = reinterpret_cast<int64_t>(rdi2(rcx4));
            eax6 = reinterpret_cast<int32_t>(rsi3(rcx4));
            if (!eax6 && rax5) {
                rax7 = rbx1->f8;
                rax7(rax5);
            }
            rbx1 = rbx1->f16;
        } while (rbx1);
    }
    rax8 = LeaveCriticalSection;
    goto rax8;
}

int64_t __getmainargs = 0x8684;

int32_t __getmainargs(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
    goto __getmainargs;
}

/* .bss */
int64_t bss;

int64_t __setusermatherr = 0x86d0;

void __mingw_setusermatherr(int64_t rcx) {
    bss = rcx;
    goto __setusermatherr;
}

int64_t _initterm = 0x8710;

void _initterm(struct s1* rcx, struct s1* rdx) {
    goto _initterm;
}

/* std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*) */
int64_t _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(int64_t rcx, int64_t rdx);

/* std::ostream::operator<<(std::ostream& (*)(std::ostream&)) */
void _ZNSolsEPFRSoS_E(int64_t rcx, int64_t rdx);

/* std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&) */
void _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_();

/* .text */
int64_t text(struct s1* rcx, struct s1* rdx, struct s1* r8) {
    int64_t rax4;

    __main(rcx, rdx, r8);
    rax4 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(0x408420, "Hello, World!");
    _ZNSolsEPFRSoS_E(rax4, _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_);
    return 0;
}

int64_t __onexitbegin;

int64_t _onexit = 0x8724;

int64_t __onexitend;

/* .text */
uint64_t text(int64_t rcx) {
    int64_t rcx2;
    int64_t rax3;
    uint64_t rax4;
    int64_t rcx5;
    int64_t rax6;
    int64_t rcx7;
    int64_t rax8;
    void* rsp9;
    void* r8_10;
    void* rdx11;
    uint64_t rax12;
    int64_t rax13;
    int64_t rax14;

    rcx2 = __onexitbegin;
    rax3 = text(rcx2);
    if (rax3 == -1) {
        rax4 = reinterpret_cast<uint64_t>(_onexit(rcx));
        return rax4;
    } else {
        _lock(8);
        rcx5 = __onexitbegin;
        rax6 = text(rcx5);
        rcx7 = __onexitend;
        rax8 = text(rcx7);
        rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 48 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
        r8_10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) + 40);
        rdx11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) + 32);
        rax12 = __dllonexit(rcx, rdx11, r8_10);
        rax13 = _encode_pointer(rax6, rax6);
        __onexitbegin = rax13;
        rax14 = _encode_pointer(rax8, rax8);
        __onexitend = rax14;
        _unlock(8, rdx11, r8_10);
        return rax12;
    }
}

/* .bss */
int32_t bss;

int64_t InitializeCriticalSection = 0x8522;

int64_t DeleteCriticalSection = 0x8440;

int64_t __mingw_TLScallback() {
    int32_t edx1;
    int32_t eax2;
    uint32_t edx3;
    int32_t eax4;
    int32_t eax5;
    int32_t edx6;
    int32_t eax7;

    if (edx1 == 1) {
        eax2 = bss;
        if (!eax2) {
            InitializeCriticalSection(0x407940);
        }
        bss = 1;
        return 1;
    } else {
        if (edx3 < 1) {
            eax4 = bss;
            if (eax4) {
                text();
            }
            eax5 = bss;
            if (eax5 == 1) {
                bss = 0;
                DeleteCriticalSection(0x407940);
            }
        } else {
            if (edx6 == 3 && (eax7 = bss, !!eax7)) {
                text();
            }
        }
        return 1;
    }
}

uint32_t __mingw_GetSectionCount(struct s1* rcx, struct s1* rdx, struct s1* r8, struct s1* r9) {
    int32_t eax5;
    uint32_t edx6;
    int64_t rax7;

    eax5 = text(0x400000);
    edx6 = 0;
    if (eax5) {
        rax7 = g40003c;
        edx6 = *reinterpret_cast<uint16_t*>(0x400000 + rax7 + 6);
    }
    return edx6;
}

int64_t ___chkstk_ms(struct s1* rcx, struct s1* rdx, struct s1* r8, struct s1* r9) {
    int64_t v5;
    int64_t rax6;
    void* rcx7;
    uint64_t rax8;
    uint64_t rax9;
    uint64_t* rcx10;

    v5 = rax6;
    rcx7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 + 24);
    if (rax8 >= 0x1000) {
        do {
            rcx7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rcx7) - 0x1000);
            rax9 = rax9 - 0x1000;
        } while (rax9 > 0x1000);
    }
    rcx10 = reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rcx7) - rax9);
    *rcx10 = *rcx10;
    return v5;
}

int64_t fwrite = 0x8764;

void fwrite(struct s1* rcx, struct s1* rdx, struct s1* r8, struct s1* r9) {
    goto fwrite;
}

int64_t vfprintf = 0x87a0;

void vfprintf() {
    goto vfprintf;
}

int64_t calloc = 0x8740;

struct s48* calloc(int64_t rcx, int64_t rdx) {
    goto calloc;
}

int64_t exit = 0x874a;

void exit(int64_t rcx, struct s1* rdx, struct s1* r8) {
    goto exit;
}

uint64_t __security_cookie = 0x2b992ddfa232;

int64_t GetSystemTimeAsFileTime = 0x84f8;

int64_t GetCurrentProcessId = 0x8484;

int64_t GetCurrentThreadId = 0x849a;

int64_t GetTickCount = 0x8512;

int64_t QueryPerformanceCounter = 0x8566;

int64_t __security_cookie_complement = 0xffffd466d2205dcd;

/* .text */
void text(int64_t rcx, struct s1* rdx, struct s1* r8) {
    void* rsp4;
    uint64_t rbx5;
    void* rcx6;
    int32_t eax7;
    uint64_t rbp8;
    int32_t eax9;
    uint64_t rdi10;
    int32_t eax11;
    uint64_t rsi12;
    uint64_t r12_13;
    uint64_t v14;
    int64_t rax15;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 64);
    rbx5 = __security_cookie;
    if (rbx5 == 0x2b992ddfa232) {
        rcx6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) + 32);
        GetSystemTimeAsFileTime(rcx6);
        eax7 = reinterpret_cast<int32_t>(GetCurrentProcessId(rcx6));
        *reinterpret_cast<int32_t*>(&rbp8) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = 0;
        eax9 = reinterpret_cast<int32_t>(GetCurrentThreadId(rcx6));
        *reinterpret_cast<int32_t*>(&rdi10) = eax9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = 0;
        eax11 = reinterpret_cast<int32_t>(GetTickCount(rcx6));
        *reinterpret_cast<int32_t*>(&rsi12) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = 0;
        QueryPerformanceCounter(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 + 48);
        r12_13 = (v14 ^ rbp8 ^ rdi10 ^ rsi12) & 0xffffffffffff;
        rax15 = reinterpret_cast<int64_t>(~r12_13);
        if (r12_13 == rbx5) {
            rax15 = 0xffffd466d2205dcc;
            r12_13 = 0x2b992ddfa233;
        }
        __security_cookie = r12_13;
        __security_cookie_complement = rax15;
        return;
    } else {
        __security_cookie_complement = reinterpret_cast<int64_t>(~rbx5);
        return;
    }
}

int32_t mingw_app_type;

int64_t GetStartupInfoA = 0x84e6;

struct s49 {
    signed char[8] pad8;
    int64_t f8;
};

struct s49* g30;

int64_t __native_startup_lock;

int32_t __native_startup_state;

int32_t __bss_start__;

int64_t Sleep = 0x85f6;

int64_t __dyn_tls_init_callback = 0x401600;

int64_t SetUnhandledExceptionFilter = 0x85d8;

void _gnu_exception_handler(uint32_t** rcx);

int64_t __mingw_oldexcpt_handler;

int64_t GetProcAddress = 0x84d4;

/* .text */
void text();

int32_t argc;

struct s1* argv;

unsigned char** _acmdln = reinterpret_cast<unsigned char**>(0x86e4);

struct s1* envp;

struct s1** __initenv = reinterpret_cast<struct s1**>(0x8694);

int32_t managedapp;

int32_t mainret;

unsigned char* __mingw_winmain_lpCmdLine;

struct s1* __mingw_winmain_hInstance;

uint32_t __mingw_winmain_nShowCmd;

int64_t __tmainCRTStartup(int64_t rcx, struct s1* rdx, struct s1* r8, struct s1* r9) {
    int32_t r11d5;
    struct s1* rcx6;
    struct s1* rdx7;
    int1_t zf8;
    struct s49* rax9;
    int64_t rbx10;
    int1_t zf11;
    int64_t tmp64_12;
    int32_t esi13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int64_t rdi17;
    int1_t zf18;
    int64_t tmp64_19;
    int64_t rax20;
    int64_t rax21;
    int64_t rax22;
    struct s1* rdx23;
    int64_t rcx24;
    int64_t rax25;
    int32_t r10d26;
    int64_t rdi27;
    struct s1* rcx28;
    struct s1* rax29;
    struct s1* rbp30;
    void* rax31;
    struct s1* rsi32;
    int64_t rbx33;
    struct s1* rcx34;
    uint64_t rax35;
    struct s1* r12_36;
    struct s1* rax37;
    unsigned char** rax38;
    uint32_t ecx39;
    unsigned char* rax40;
    uint32_t edx41;
    struct s1* rdx42;
    struct s1** rax43;
    struct s1* rcx44;
    struct s1* r8_45;
    struct s1* rdx46;
    int64_t rax47;
    struct s1* r9_48;
    int64_t rcx49;
    int64_t v50;
    int32_t r8d51;
    uint32_t eax52;
    unsigned char v53;
    uint16_t v54;
    uint32_t edx55;
    int32_t eax56;
    int32_t eax57;

    r11d5 = mingw_app_type;
    *reinterpret_cast<int32_t*>(&rcx6) = 13;
    *reinterpret_cast<int32_t*>(&rcx6 + 4) = 0;
    rdx7 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 0x90 + 32);
    zf8 = r11d5 == 0;
    while (rcx6) {
        rcx6 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(rcx6) - 1);
    }
    if (!zf8) {
        rcx6 = rdx7;
        GetStartupInfoA(rcx6);
    }
    rax9 = g30;
    rbx10 = rax9->f8;
    zf11 = __native_startup_lock == rbx10;
    if (zf11) {
        tmp64_12 = __native_startup_lock;
        __native_startup_lock = rbx10;
        rbx10 = tmp64_12;
    }
    esi13 = 0;
    if (1 || (*reinterpret_cast<signed char*>(&esi13) = 1, rbx10 == 0)) {
        addr_401204_9:
        eax14 = __native_startup_state;
        if (eax14 == 1) {
            addr_401434_10:
            *reinterpret_cast<int32_t*>(&rcx6) = 31;
            *reinterpret_cast<int32_t*>(&rcx6 + 4) = 0;
            _amsg_exit(31);
            eax15 = __native_startup_state;
            if (eax15 != 1) {
                addr_40123a_11:
                if (!esi13) {
                    __native_startup_lock = 0;
                }
            } else {
                goto addr_401450_14;
            }
        } else {
            addr_401213_15:
            eax16 = __native_startup_state;
            if (!eax16) {
                rdx7 = reinterpret_cast<struct s1*>(0x409030);
                rcx6 = reinterpret_cast<struct s1*>(0x409018);
                __native_startup_state = 1;
                _initterm(0x409018, 0x409030);
                goto addr_40122b_17;
            } else {
                __bss_start__ = 1;
                goto addr_40122b_17;
            }
        }
    } else {
        rdi17 = Sleep;
        do {
            *reinterpret_cast<int32_t*>(&rcx6) = 0x3e8;
            *reinterpret_cast<int32_t*>(&rcx6 + 4) = 0;
            rdi17(0x3e8);
            zf18 = __native_startup_lock == rbx10;
            if (zf18) {
                tmp64_19 = __native_startup_lock;
                __native_startup_lock = rbx10;
                rbx10 = tmp64_19;
            }
            if (!0) 
                goto addr_401202_23;
        } while (rbx10);
        goto addr_401420_25;
    }
    rax20 = __dyn_tls_init_callback;
    if (rax20) {
        *reinterpret_cast<uint32_t*>(&r8) = 0;
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx7) = 2;
        *reinterpret_cast<int32_t*>(&rdx7 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx6) = 0;
        *reinterpret_cast<int32_t*>(&rcx6 + 4) = 0;
        rax20();
    }
    _pei386_runtime_relocator(rcx6, rdx7, r8, r9);
    rax21 = reinterpret_cast<int64_t>(SetUnhandledExceptionFilter(_gnu_exception_handler, rdx7));
    __mingw_oldexcpt_handler = rax21;
    __mingw_init_ehandler(_gnu_exception_handler, rdx7, r8);
    rax22 = __mingw_get_msvcrt_handle(_gnu_exception_handler, rdx7);
    rdx23 = reinterpret_cast<struct s1*>(0x404000);
    rcx24 = rax22;
    rax25 = reinterpret_cast<int64_t>(GetProcAddress(rcx24, 0x404000));
    if (rax25) {
        rcx24 = reinterpret_cast<int64_t>(text);
        rax25(text, 0x404000);
    }
    text(rcx24, 0x404000);
    r10d26 = mingw_app_type;
    if (!r10d26) {
        addr_40131f_31:
        *reinterpret_cast<int32_t*>(&rdi27) = argc;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = 0;
        rcx28 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(rdi27 + 1))) << 3);
        rax29 = malloc(rcx28, rdx23);
        rbp30 = rax29;
        *reinterpret_cast<int32_t*>(&rax31) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax31) + 4) = 0;
        rsi32 = argv;
        if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi27) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi27) == 0))) {
            *reinterpret_cast<int32_t*>(&rbx33) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx33) + 4) = 0;
            do {
                rcx34 = *reinterpret_cast<struct s1**>(reinterpret_cast<unsigned char>(rsi32) + reinterpret_cast<uint64_t>(rbx33 * 8));
                rax35 = strlen(rcx34, rdx23, r8);
                r12_36 = reinterpret_cast<struct s1*>(static_cast<int64_t>(static_cast<int32_t>(rax35 + 1)));
                rax37 = malloc(r12_36, rdx23, r12_36, rdx23);
                *reinterpret_cast<struct s1**>(reinterpret_cast<unsigned char>(rbp30) + reinterpret_cast<uint64_t>(rbx33 * 8)) = rax37;
                rdx23 = *reinterpret_cast<struct s1**>(reinterpret_cast<unsigned char>(rsi32) + reinterpret_cast<uint64_t>(rbx33 * 8));
                r8 = r12_36;
                rcx28 = rax37;
                ++rbx33;
                memcpy(rcx28, rdx23, r8);
            } while (*reinterpret_cast<int32_t*>(&rdi27) > *reinterpret_cast<int32_t*>(&rbx33));
            rax31 = reinterpret_cast<void*>(*reinterpret_cast<int32_t*>(&rdi27) * 8);
        }
    } else {
        rax38 = _acmdln;
        ecx39 = 0;
        rax40 = *rax38;
        while (1) {
            edx41 = *rax40;
            if (*reinterpret_cast<signed char*>(&edx41) <= 32) {
                if (!*reinterpret_cast<signed char*>(&edx41)) 
                    goto addr_4012f4_38;
                if (!*reinterpret_cast<signed char*>(&ecx39)) 
                    goto addr_4012e8_40;
            } else {
                *reinterpret_cast<uint32_t*>(&r8) = ecx39 ^ 1;
                *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                if (*reinterpret_cast<signed char*>(&edx41) == 34) {
                    ecx39 = *reinterpret_cast<uint32_t*>(&r8);
                }
            }
            ++rax40;
        }
    }
    *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rbp30) + reinterpret_cast<uint64_t>(rax31)) = 0;
    argv = rbp30;
    __main(rcx28, rdx23, r8);
    rdx42 = envp;
    rax43 = __initenv;
    *reinterpret_cast<int32_t*>(&rcx44) = argc;
    *reinterpret_cast<int32_t*>(&rcx44 + 4) = 0;
    *rax43 = rdx42;
    r8_45 = envp;
    rdx46 = argv;
    rax47 = text(rcx44, rdx46, r8_45);
    *reinterpret_cast<int32_t*>(&r9_48) = managedapp;
    *reinterpret_cast<int32_t*>(&r9_48 + 4) = 0;
    mainret = *reinterpret_cast<int32_t*>(&rax47);
    if (!*reinterpret_cast<int32_t*>(&r9_48)) {
        *reinterpret_cast<int32_t*>(&rcx49) = *reinterpret_cast<int32_t*>(&rax47);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx49) + 4) = 0;
        exit(rcx49, rdx46, r8_45);
        mingw_app_type = 1;
        text(rcx49, rdx46, r8_45);
        __tmainCRTStartup(rcx49, rdx46, r8_45, r9_48);
        goto v50;
    } else {
        r8d51 = __bss_start__;
        if (!r8d51) {
            _cexit(rcx44, rdx46);
            *reinterpret_cast<int32_t*>(&rax47) = mainret;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax47) + 4) = 0;
        }
        return rax47;
    }
    addr_4012f4_38:
    rdx23 = reinterpret_cast<struct s1*>(0x400000);
    __mingw_winmain_lpCmdLine = rax40;
    eax52 = 10;
    __mingw_winmain_hInstance = reinterpret_cast<struct s1*>(0x400000);
    if (v53 & 1) {
        eax52 = v54;
    }
    __mingw_winmain_nShowCmd = eax52;
    goto addr_40131f_31;
    do {
        addr_4012e8_40:
        ++rax40;
        edx55 = *rax40;
        if (*reinterpret_cast<signed char*>(&edx55) > 32) 
            goto addr_4012f4_38;
    } while (*reinterpret_cast<signed char*>(&edx55));
    goto addr_4012f4_38;
    addr_401450_14:
    rdx7 = reinterpret_cast<struct s1*>(0x409010);
    rcx6 = reinterpret_cast<struct s1*>(0x409000);
    _initterm(0x409000, 0x409010);
    __native_startup_state = 2;
    goto addr_40123a_11;
    addr_40122b_17:
    eax56 = __native_startup_state;
    if (eax56 == 1) 
        goto addr_401450_14; else 
        goto addr_40123a_11;
    addr_401202_23:
    esi13 = 0;
    goto addr_401204_9;
    addr_401420_25:
    eax57 = __native_startup_state;
    esi13 = 1;
    if (eax57 != 1) 
        goto addr_401213_15; else 
        goto addr_401434_10;
}

/* std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*) */
int64_t _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc = 0x8844;

/* std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*) */
int64_t _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(int64_t rcx, int64_t rdx) {
    goto _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;
}

/* std::ostream::operator<<(std::ostream& (*)(std::ostream&)) */
int64_t _ZNSolsEPFRSoS_E = 0x87ac;

/* std::ostream::operator<<(std::ostream& (*)(std::ostream&)) */
void _ZNSolsEPFRSoS_E(int64_t rcx, int64_t rdx) {
    goto _ZNSolsEPFRSoS_E;
}

void __tcf_0();

/* __static_initialization_and_destruction_0(int, int) */
int64_t _Z41__static_initialization_and_destruction_0ii(int32_t ecx, int32_t edx) {
    int64_t rax3;

    if (ecx == 1 && edx == 0xffff) {
        _ZNSt8ios_base4InitC1Ev(0x407030);
        rax3 = atexit(__tcf_0);
    }
    return rax3;
}

struct s50 {
    signed char[4] pad4;
    int32_t f4;
    signed char[4] pad12;
    int32_t f12;
};

struct s15* __mingw_enum_import_library_names(int32_t ecx) {
    struct s15* rbp2;
    int32_t ebx3;
    int32_t eax4;
    int64_t rax5;
    uint64_t rdi6;
    struct s45* rax7;
    struct s50* rdi8;
    int64_t rbp9;

    *reinterpret_cast<int32_t*>(&rbp2) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp2) + 4) = 0;
    ebx3 = ecx;
    eax4 = text(0x400000);
    if (!eax4 || ((rax5 = g40003c, *reinterpret_cast<int32_t*>(&rdi6) = *reinterpret_cast<int32_t*>(0x400000 + rax5 + 0x90), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0, *reinterpret_cast<int32_t*>(&rdi6) == 0) || (rax7 = _FindPESection(0x400000, rdi6), rax7 == 0))) {
        addr_40256f_2:
        return rbp2;
    } else {
        rdi8 = reinterpret_cast<struct s50*>(rdi6 + 0x400000);
        if (rdi8) {
            while (rdi8->f4 || rdi8->f12) {
                if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(ebx3 < 0) | reinterpret_cast<uint1_t>(ebx3 == 0))) 
                    goto addr_402569_6;
                --ebx3;
                rdi8 = reinterpret_cast<struct s50*>(reinterpret_cast<uint64_t>(rdi8) + 20);
            }
        } else {
            goto addr_40256f_2;
        }
    }
    return 0;
    addr_402569_6:
    *reinterpret_cast<int32_t*>(&rbp9) = rdi8->f12;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = 0;
    rbp2 = reinterpret_cast<struct s15*>(rbp9 + 0x400000);
    goto addr_40256f_2;
}

int64_t free = 0x875c;

void free(struct s48* rcx) {
    goto free;
}

/* std::ios_base::Init::~Init() */
int64_t _ZNSt8ios_base4InitD1Ev = 0x87dc;

/* std::ios_base::Init::~Init() */
void _ZNSt8ios_base4InitD1Ev(int64_t rcx) {
    goto _ZNSt8ios_base4InitD1Ev;
}

/* .text */
void text() {
    return;
}

void fun_402d17(int64_t rcx) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char* rax5;
    signed char* rax6;
    signed char al7;
    signed char* rax8;
    signed char* rax9;
    signed char al10;
    signed char* rax11;
    signed char* rax12;
    signed char al13;
    signed char* rax14;
    signed char* rax15;
    signed char al16;

    *reinterpret_cast<int32_t*>(rcx + 0x4015) = *reinterpret_cast<int32_t*>(rcx + 0x4015) + 1;
    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *rax5 = reinterpret_cast<signed char>(*rax6 + al7);
    *rax8 = reinterpret_cast<signed char>(*rax9 + al10);
    *rax11 = reinterpret_cast<signed char>(*rax12 + al13);
    *rax14 = reinterpret_cast<signed char>(*rax15 + al16);
}

void fun_402d2f() {
    int32_t* rax1;
    int32_t* rax2;
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    signed char* rax6;
    signed char* rax7;
    signed char al8;
    signed char* rax9;
    signed char* rax10;
    signed char al11;
    signed char* rax12;
    signed char* rax13;
    signed char al14;
    signed char* rax15;
    signed char* rax16;
    signed char al17;
    signed char* rax18;
    signed char* rax19;
    signed char al20;
    signed char* rax21;
    signed char* rax22;
    signed char al23;
    signed char* rax24;
    signed char* rax25;
    signed char al26;
    signed char* rax27;
    signed char* rax28;
    signed char al29;
    signed char* rax30;
    signed char* rax31;
    signed char al32;
    signed char* rax33;
    signed char* rax34;
    signed char al35;
    signed char* rax36;
    signed char* rax37;
    signed char al38;
    signed char* rax39;
    signed char* rax40;
    signed char al41;
    signed char* rax42;
    signed char* rax43;
    signed char al44;
    signed char* rax45;
    signed char* rax46;
    signed char al47;
    signed char* rax48;
    signed char* rax49;
    signed char al50;
    signed char* rax51;
    signed char* rax52;
    signed char al53;
    signed char* rax54;
    signed char* rax55;
    signed char al56;
    signed char* rax57;
    signed char* rax58;
    signed char al59;
    signed char* rax60;
    signed char* rax61;
    signed char al62;
    signed char* rax63;
    signed char* rax64;
    signed char al65;
    signed char* rax66;
    signed char* rax67;
    signed char al68;
    signed char* rax69;
    signed char* rax70;
    signed char al71;
    signed char* rax72;
    signed char* rax73;
    signed char al74;
    signed char* rax75;
    signed char* rax76;
    signed char al77;
    signed char* rax78;
    signed char* rax79;
    signed char al80;
    signed char* rax81;
    signed char* rax82;
    signed char al83;
    signed char* rax84;
    signed char* rax85;
    signed char al86;
    signed char* rax87;
    signed char* rax88;
    signed char al89;
    signed char* rax90;
    signed char* rax91;
    signed char al92;
    signed char* rax93;
    signed char* rax94;
    signed char al95;
    signed char* rax96;
    signed char* rax97;
    signed char al98;
    signed char* rax99;
    signed char* rax100;
    signed char al101;
    signed char* rax102;
    signed char* rax103;
    signed char al104;
    signed char* rax105;
    signed char* rax106;
    signed char al107;
    signed char* rax108;
    signed char* rax109;
    signed char al110;
    signed char* rax111;
    signed char* rax112;
    signed char al113;
    signed char* rax114;
    signed char* rax115;
    signed char al116;
    signed char* rax117;
    signed char* rax118;
    signed char al119;
    signed char* rax120;
    signed char* rax121;
    signed char al122;
    signed char* rax123;
    signed char* rax124;
    signed char al125;
    signed char* rax126;
    signed char* rax127;
    signed char al128;
    signed char* rax129;
    signed char* rax130;
    signed char al131;
    signed char* rax132;
    signed char* rax133;
    signed char al134;
    signed char* rax135;
    signed char* rax136;
    signed char al137;
    signed char* rax138;
    signed char* rax139;
    signed char al140;
    signed char* rax141;
    signed char* rax142;
    signed char al143;
    signed char* rax144;
    signed char* rax145;
    signed char al146;
    signed char* rax147;
    signed char* rax148;
    signed char al149;
    signed char* rax150;
    signed char* rax151;
    signed char al152;
    signed char* rax153;
    signed char* rax154;
    signed char al155;
    signed char* rax156;
    signed char* rax157;
    signed char al158;
    signed char* rax159;
    signed char* rax160;
    signed char al161;
    signed char* rax162;
    signed char* rax163;
    signed char al164;
    signed char* rax165;
    signed char* rax166;
    signed char al167;
    signed char* rax168;
    signed char* rax169;
    signed char al170;
    signed char* rax171;
    signed char* rax172;
    signed char al173;
    signed char* rax174;
    signed char* rax175;
    signed char al176;
    signed char* rax177;
    signed char* rax178;
    signed char al179;
    signed char* rax180;
    signed char* rax181;
    signed char al182;
    signed char* rax183;
    signed char* rax184;
    signed char al185;
    signed char* rax186;
    signed char* rax187;
    signed char al188;
    signed char* rax189;
    signed char* rax190;
    signed char al191;
    signed char* rax192;
    signed char* rax193;
    signed char al194;
    signed char* rax195;
    signed char* rax196;
    signed char al197;
    signed char* rax198;
    signed char* rax199;
    signed char al200;
    signed char* rax201;
    signed char* rax202;
    signed char al203;
    signed char* rax204;
    signed char* rax205;
    signed char al206;
    signed char* rax207;
    signed char* rax208;
    signed char al209;
    signed char* rax210;
    signed char* rax211;
    signed char al212;
    signed char* rax213;
    signed char* rax214;
    signed char al215;
    signed char* rax216;
    signed char* rax217;
    signed char al218;
    signed char* rax219;
    signed char* rax220;
    signed char al221;
    signed char* rax222;
    signed char* rax223;
    signed char al224;
    signed char* rax225;
    signed char* rax226;
    signed char al227;
    signed char* rax228;
    signed char* rax229;
    signed char al230;
    signed char* rax231;
    signed char* rax232;
    signed char al233;
    signed char* rax234;
    signed char* rax235;
    signed char al236;
    signed char* rax237;
    signed char* rax238;
    signed char al239;
    signed char* rax240;
    signed char* rax241;
    signed char al242;
    signed char* rax243;
    signed char* rax244;
    signed char al245;
    signed char* rax246;
    signed char* rax247;
    signed char al248;
    signed char* rax249;
    signed char* rax250;
    signed char al251;
    signed char* rax252;
    signed char* rax253;
    signed char al254;
    signed char* rax255;
    signed char* rax256;
    signed char al257;
    signed char* rax258;
    signed char* rax259;
    signed char al260;
    signed char* rax261;
    signed char* rax262;
    signed char al263;
    signed char* rax264;
    signed char* rax265;
    signed char al266;
    signed char* rax267;
    signed char* rax268;
    signed char al269;
    signed char* rax270;
    signed char* rax271;
    signed char al272;
    signed char* rax273;
    signed char* rax274;
    signed char al275;
    signed char* rax276;
    signed char* rax277;
    signed char al278;
    signed char* rax279;
    signed char* rax280;
    signed char al281;
    signed char* rax282;
    signed char* rax283;
    signed char al284;
    signed char* rax285;
    signed char* rax286;
    signed char al287;
    signed char* rax288;
    signed char* rax289;
    signed char al290;
    signed char* rax291;
    signed char* rax292;
    signed char al293;
    signed char* rax294;
    signed char* rax295;
    signed char al296;
    signed char* rax297;
    signed char* rax298;
    signed char al299;
    signed char* rax300;
    signed char* rax301;
    signed char al302;
    signed char* rax303;
    signed char* rax304;
    signed char al305;
    signed char* rax306;
    signed char* rax307;
    signed char al308;
    signed char* rax309;
    signed char* rax310;
    signed char al311;

    *rax1 = *rax2 + 1;
    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *rax6 = reinterpret_cast<signed char>(*rax7 + al8);
    *rax9 = reinterpret_cast<signed char>(*rax10 + al11);
    *rax12 = reinterpret_cast<signed char>(*rax13 + al14);
    *rax15 = reinterpret_cast<signed char>(*rax16 + al17);
    *rax18 = reinterpret_cast<signed char>(*rax19 + al20);
    *rax21 = reinterpret_cast<signed char>(*rax22 + al23);
    *rax24 = reinterpret_cast<signed char>(*rax25 + al26);
    *rax27 = reinterpret_cast<signed char>(*rax28 + al29);
    *rax30 = reinterpret_cast<signed char>(*rax31 + al32);
    *rax33 = reinterpret_cast<signed char>(*rax34 + al35);
    *rax36 = reinterpret_cast<signed char>(*rax37 + al38);
    *rax39 = reinterpret_cast<signed char>(*rax40 + al41);
    *rax42 = reinterpret_cast<signed char>(*rax43 + al44);
    *rax45 = reinterpret_cast<signed char>(*rax46 + al47);
    *rax48 = reinterpret_cast<signed char>(*rax49 + al50);
    *rax51 = reinterpret_cast<signed char>(*rax52 + al53);
    *rax54 = reinterpret_cast<signed char>(*rax55 + al56);
    *rax57 = reinterpret_cast<signed char>(*rax58 + al59);
    *rax60 = reinterpret_cast<signed char>(*rax61 + al62);
    *rax63 = reinterpret_cast<signed char>(*rax64 + al65);
    *rax66 = reinterpret_cast<signed char>(*rax67 + al68);
    *rax69 = reinterpret_cast<signed char>(*rax70 + al71);
    *rax72 = reinterpret_cast<signed char>(*rax73 + al74);
    *rax75 = reinterpret_cast<signed char>(*rax76 + al77);
    *rax78 = reinterpret_cast<signed char>(*rax79 + al80);
    *rax81 = reinterpret_cast<signed char>(*rax82 + al83);
    *rax84 = reinterpret_cast<signed char>(*rax85 + al86);
    *rax87 = reinterpret_cast<signed char>(*rax88 + al89);
    *rax90 = reinterpret_cast<signed char>(*rax91 + al92);
    *rax93 = reinterpret_cast<signed char>(*rax94 + al95);
    *rax96 = reinterpret_cast<signed char>(*rax97 + al98);
    *rax99 = reinterpret_cast<signed char>(*rax100 + al101);
    *rax102 = reinterpret_cast<signed char>(*rax103 + al104);
    *rax105 = reinterpret_cast<signed char>(*rax106 + al107);
    *rax108 = reinterpret_cast<signed char>(*rax109 + al110);
    *rax111 = reinterpret_cast<signed char>(*rax112 + al113);
    *rax114 = reinterpret_cast<signed char>(*rax115 + al116);
    *rax117 = reinterpret_cast<signed char>(*rax118 + al119);
    *rax120 = reinterpret_cast<signed char>(*rax121 + al122);
    *rax123 = reinterpret_cast<signed char>(*rax124 + al125);
    *rax126 = reinterpret_cast<signed char>(*rax127 + al128);
    *rax129 = reinterpret_cast<signed char>(*rax130 + al131);
    *rax132 = reinterpret_cast<signed char>(*rax133 + al134);
    *rax135 = reinterpret_cast<signed char>(*rax136 + al137);
    *rax138 = reinterpret_cast<signed char>(*rax139 + al140);
    *rax141 = reinterpret_cast<signed char>(*rax142 + al143);
    *rax144 = reinterpret_cast<signed char>(*rax145 + al146);
    *rax147 = reinterpret_cast<signed char>(*rax148 + al149);
    *rax150 = reinterpret_cast<signed char>(*rax151 + al152);
    *rax153 = reinterpret_cast<signed char>(*rax154 + al155);
    *rax156 = reinterpret_cast<signed char>(*rax157 + al158);
    *rax159 = reinterpret_cast<signed char>(*rax160 + al161);
    *rax162 = reinterpret_cast<signed char>(*rax163 + al164);
    *rax165 = reinterpret_cast<signed char>(*rax166 + al167);
    *rax168 = reinterpret_cast<signed char>(*rax169 + al170);
    *rax171 = reinterpret_cast<signed char>(*rax172 + al173);
    *rax174 = reinterpret_cast<signed char>(*rax175 + al176);
    *rax177 = reinterpret_cast<signed char>(*rax178 + al179);
    *rax180 = reinterpret_cast<signed char>(*rax181 + al182);
    *rax183 = reinterpret_cast<signed char>(*rax184 + al185);
    *rax186 = reinterpret_cast<signed char>(*rax187 + al188);
    *rax189 = reinterpret_cast<signed char>(*rax190 + al191);
    *rax192 = reinterpret_cast<signed char>(*rax193 + al194);
    *rax195 = reinterpret_cast<signed char>(*rax196 + al197);
    *rax198 = reinterpret_cast<signed char>(*rax199 + al200);
    *rax201 = reinterpret_cast<signed char>(*rax202 + al203);
    *rax204 = reinterpret_cast<signed char>(*rax205 + al206);
    *rax207 = reinterpret_cast<signed char>(*rax208 + al209);
    *rax210 = reinterpret_cast<signed char>(*rax211 + al212);
    *rax213 = reinterpret_cast<signed char>(*rax214 + al215);
    *rax216 = reinterpret_cast<signed char>(*rax217 + al218);
    *rax219 = reinterpret_cast<signed char>(*rax220 + al221);
    *rax222 = reinterpret_cast<signed char>(*rax223 + al224);
    *rax225 = reinterpret_cast<signed char>(*rax226 + al227);
    *rax228 = reinterpret_cast<signed char>(*rax229 + al230);
    *rax231 = reinterpret_cast<signed char>(*rax232 + al233);
    *rax234 = reinterpret_cast<signed char>(*rax235 + al236);
    *rax237 = reinterpret_cast<signed char>(*rax238 + al239);
    *rax240 = reinterpret_cast<signed char>(*rax241 + al242);
    *rax243 = reinterpret_cast<signed char>(*rax244 + al245);
    *rax246 = reinterpret_cast<signed char>(*rax247 + al248);
    *rax249 = reinterpret_cast<signed char>(*rax250 + al251);
    *rax252 = reinterpret_cast<signed char>(*rax253 + al254);
    *rax255 = reinterpret_cast<signed char>(*rax256 + al257);
    *rax258 = reinterpret_cast<signed char>(*rax259 + al260);
    *rax261 = reinterpret_cast<signed char>(*rax262 + al263);
    *rax264 = reinterpret_cast<signed char>(*rax265 + al266);
    *rax267 = reinterpret_cast<signed char>(*rax268 + al269);
    *rax270 = reinterpret_cast<signed char>(*rax271 + al272);
    *rax273 = reinterpret_cast<signed char>(*rax274 + al275);
    *rax276 = reinterpret_cast<signed char>(*rax277 + al278);
    *rax279 = reinterpret_cast<signed char>(*rax280 + al281);
    *rax282 = reinterpret_cast<signed char>(*rax283 + al284);
    *rax285 = reinterpret_cast<signed char>(*rax286 + al287);
    *rax288 = reinterpret_cast<signed char>(*rax289 + al290);
    *rax291 = reinterpret_cast<signed char>(*rax292 + al293);
    *rax294 = reinterpret_cast<signed char>(*rax295 + al296);
    *rax297 = reinterpret_cast<signed char>(*rax298 + al299);
    *rax300 = reinterpret_cast<signed char>(*rax301 + al302);
    *rax303 = reinterpret_cast<signed char>(*rax304 + al305);
    *rax306 = reinterpret_cast<signed char>(*rax307 + al308);
    *rax309 = reinterpret_cast<signed char>(*rax310 + al311);
}

int32_t _newmode;

int32_t _dowildcard;

int32_t startinfo;

int32_t argret;

void pre_cpp_init() {
    int32_t eax1;
    int64_t r9_2;
    int32_t eax3;

    eax1 = _newmode;
    *reinterpret_cast<int32_t*>(&r9_2) = _dowildcard;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_2) + 4) = 0;
    startinfo = eax1;
    eax3 = __getmainargs(0x407004, 0x407008, 0x407010, r9_2);
    argret = eax3;
    return;
}

void _matherr(uint32_t* rcx);

void fun_40114e() {
    int64_t v1;

    __mingw_setusermatherr(_matherr);
    goto v1;
}

void fun_4015e7() {
    int64_t v1;

    __mingw_TLScallback();
    goto v1;
}

void fun_40162f() {
    int64_t* rbx1;
    int64_t v2;
    int64_t rax3;
    int64_t v4;

    rbx1 = reinterpret_cast<int64_t*>(0x409060);
    if (1) {
        goto v2;
    } else {
        do {
            rax3 = *rbx1;
            if (rax3) {
                rax3();
            }
            ++rbx1;
        } while (!reinterpret_cast<int1_t>(0x409060 == rbx1));
        goto v4;
    }
}

void fun_4017fa() {
    int32_t eax1;
    uint32_t eax2;
    int32_t eax3;
    struct s1* rax4;
    int32_t eax5;
    int64_t v6;
    int64_t v7;
    int32_t eax8;
    int32_t eax9;
    struct s1* rax10;
    int64_t v11;

    if (eax1 == 0xc0000008) 
        goto addr_4018c2_3;
    if (eax2 > 0xc0000008) {
        if (eax3 == 0xc000001d) {
            rax4 = signal(4);
            if (rax4 == 1) {
                signal(4);
            } else {
                if (rax4) {
                    rax4(4);
                }
            }
        } else {
            if (eax5 != 0xc000008c) {
                addr_4017ef_11:
                goto v6;
            } else {
                addr_4018c2_3:
                goto v7;
            }
        }
    } else {
        if (eax8 == 0x80000002) 
            goto addr_4018c2_3;
        if (eax9 != 0xc0000005) 
            goto addr_4017ef_11;
        rax10 = signal(11);
        if (rax10 == 1) {
            signal(11);
        } else {
            if (rax10) {
                rax10(11);
            }
        }
    }
    goto v11;
}

void fun_401897() {
    struct s1* rax1;

    rax1 = signal(8);
    if (rax1 == 1) {
        signal(8);
        if (1) 
            goto 0x4017c6;
        text(8, rax1);
        goto 0x4017c6;
    } else {
        if (!rax1) 
            goto 0x4017c6;
        rax1(8);
    }
}

void fun_401a9c() {
    uint32_t eax1;
    int32_t eax2;
    uint32_t eax3;
    struct s1* rax4;
    int32_t eax5;
    struct s1* rax6;
    int64_t v7;
    int32_t eax8;
    int64_t rax9;
    int64_t v10;
    int32_t eax11;
    int64_t v12;
    int32_t eax13;
    struct s1* rax14;
    int64_t v15;

    if (eax1 < 0xc000008d) {
        if (eax2 == 0xc0000008) 
            goto addr_401af0_4;
        if (eax3 <= 0xc0000008) 
            goto addr_401b0d_6;
    } else {
        rax4 = signal(8);
        if (rax4 == 1) 
            goto addr_401bd0_9; else 
            goto addr_401ac2_10;
    }
    if (eax5 == 0xc000001d) {
        rax6 = signal(4);
        if (rax6 == 1) {
            signal(4, 4);
        } else {
            if (rax6) {
                rax6(4);
                goto v7;
            }
        }
    } else {
        if (eax8 != 0xc000008c) {
            addr_401a80_17:
            rax9 = __mingw_oldexcpt_handler;
            if (rax9) {
                goto rax9;
            }
        } else {
            goto addr_401af0_4;
        }
    }
    addr_401ad3_21:
    goto v10;
    addr_401b0d_6:
    if (eax11 == 0x80000002) {
        addr_401af0_4:
        goto v12;
    } else {
        if (eax13 != 0xc0000005) 
            goto addr_401a80_17;
        rax14 = signal(11);
        if (rax14 != 1) 
            goto addr_401b35_24;
    }
    signal(11, 11);
    goto addr_401ad3_21;
    addr_401b35_24:
    if (rax14) {
        rax14(11);
        goto v15;
    }
    addr_401bd0_9:
    signal(8, 8);
    if (!0) {
        text(8, 1);
        goto addr_401ad3_21;
    }
    addr_401ac2_10:
    if (!rax4) 
        goto addr_401a80_17;
    rax4(8);
    goto addr_401ad3_21;
}

struct s51 {
    signed char[4] pad4;
    unsigned char f4;
};

void fun_401ada() {
    struct s51* rdx1;
    uint32_t eax2;
    int32_t eax3;
    uint32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;

    if (!(rdx1->f4 & 1)) {
    }
    if (eax2 <= 0xc0000091) 
        goto 0x401aa0;
    if (eax3 != 0xc0000094) 
        goto addr_401a64_6;
    goto 0x401aac;
    addr_401a64_6:
    if (eax4 > 0xc0000094) {
        if (eax5 == 0xc0000095) 
            goto 0x401af0;
        if (eax6 != 0xc0000096) 
            goto 0x401a80; else 
            goto "???";
    } else {
        if (eax7 == 0xc0000092) 
            goto 0x401af0;
        if (eax8 == 0xc0000093) 
            goto 0x401aa7;
    }
}

void fun_401cf7(int32_t* rcx) {
    int64_t rdx2;

    *reinterpret_cast<int32_t*>(&rdx2) = *rcx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx2) + 4) = 0;
    goto 0x404164 + *reinterpret_cast<int32_t*>(0x404164 + rdx2 * 4);
}

int64_t _IsNonwritableInCurrentImage(int64_t rcx) {
    int32_t eax2;
    struct s45* rax3;
    int64_t rax4;

    eax2 = text(0x400000);
    if (!eax2 || (rax3 = _FindPESection(0x400000, rcx - 0x400000), rax3 == 0)) {
        return 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rax4) = reinterpret_cast<uint32_t>(~rax3->f36) >> 31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        return rax4;
    }
}

int64_t ___w64_mingwthr_add_key_dtor(int32_t ecx, int64_t rdx) {
    int32_t eax3;
    int32_t ebx4;
    struct s48* rax5;
    struct s48* rax6;
    int64_t rax7;

    eax3 = bss;
    ebx4 = 0;
    if (eax3) {
        rax5 = calloc(1, 24);
        if (!rax5) {
            ebx4 = -1;
        } else {
            rax5->f0 = ecx;
            rax5->f8 = rdx;
            EnterCriticalSection(0x407940, 24);
            rax6 = key_dtor_list;
            key_dtor_list = rax5;
            rax5->f16 = rax6;
            LeaveCriticalSection(0x407940, 24);
            return 0;
        }
    }
    *reinterpret_cast<int32_t*>(&rax7) = ebx4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    return rax7;
}

void fun_402a09() {
    struct s48* rax1;
    int32_t ebx2;
    struct s48* rcx3;
    int32_t ebx4;
    int64_t v5;

    EnterCriticalSection(0x407940);
    rax1 = key_dtor_list;
    if (!rax1) {
        addr_402a43_3:
        LeaveCriticalSection(0x407940);
    } else {
        if (rax1->f0 != ebx2) {
            while (rcx3 = rax1->f16, !!rcx3) {
                if (rcx3->f0 == ebx4) 
                    goto addr_402a60_7;
                rax1 = rcx3;
            }
            goto addr_402a43_3;
        } else {
            rcx3 = rax1;
            key_dtor_list = rax1->f16;
            goto addr_402a68_11;
        }
    }
    addr_402a50_12:
    goto v5;
    addr_402a60_7:
    rax1->f16 = rcx3->f16;
    addr_402a68_11:
    free(rcx3);
    LeaveCriticalSection(0x407940);
    goto addr_402a50_12;
}

int64_t __C_specific_handler = 0x865e;

void __C_specific_handler() {
    goto __C_specific_handler;
}

int16_t __image_base__;

int32_t mingw_initltsdrot_force;

int32_t mingw_initltsdyn_force;

int32_t mingw_initltssuo_force;

int32_t mingw_initcharmax;

struct s52 {
    int32_t f0;
    signed char[20] pad24;
    uint16_t f24;
    signed char[90] pad116;
    uint32_t f116;
    signed char[12] pad132;
    uint32_t f132;
    signed char[96] pad232;
    int32_t f232;
    signed char[12] pad248;
    int32_t f248;
};

int32_t _fmode;

int32_t* _fmode = reinterpret_cast<int32_t*>(0x8706);

int32_t _MINGW_INSTALL_DEBUG_MATHERR = -1;

int64_t pre_c_init() {
    int32_t eax1;
    int1_t zf2;
    int64_t rcx3;
    struct s52* rdx4;
    uint32_t ecx5;
    int32_t eax6;
    int64_t rax7;
    int32_t edx8;
    int32_t* rax9;
    int1_t zf10;

    eax1 = 0;
    zf2 = __image_base__ == 0x5a4d;
    mingw_initltsdrot_force = 1;
    mingw_initltsdyn_force = 1;
    mingw_initltssuo_force = 1;
    mingw_initcharmax = 1;
    if (zf2 && (rcx3 = g40003c, rdx4 = reinterpret_cast<struct s52*>(0x400000 + rcx3), rdx4->f0 == 0x4550)) {
        ecx5 = rdx4->f24;
        if (*reinterpret_cast<int16_t*>(&ecx5) == 0x10b) {
            if (rdx4->f116 > 14) {
                eax1 = 0;
                *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>(!!rdx4->f232);
            }
        } else {
            if (*reinterpret_cast<int16_t*>(&ecx5) == 0x20b && rdx4->f132 > 14) {
                eax1 = 0;
                *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>(!!rdx4->f248);
            }
        }
    }
    managedapp = eax1;
    eax6 = mingw_app_type;
    if (!eax6) {
        __set_app_type(1);
    } else {
        __set_app_type(2);
    }
    rax7 = _encode_pointer(-1);
    edx8 = _fmode;
    __onexitend = rax7;
    __onexitbegin = rax7;
    rax9 = _fmode;
    *rax9 = edx8;
    text(-1);
    zf10 = _MINGW_INSTALL_DEBUG_MATHERR == 1;
    if (zf10) 
        goto 0x401150;
    return 0;
}

int64_t _GLOBAL__sub_I_main() {
    int64_t rax1;

    rax1 = _Z41__static_initialization_and_destruction_0ii(1, 0xffff);
    return rax1;
}

int64_t fun_4015c8() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    signed char* rax10;
    signed char* rax11;
    signed char al12;
    int32_t edx13;
    int32_t edx14;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    if (!edx13) 
        goto 0x4015f0;
    if (edx14 == 3) 
        goto 0x4015f0;
    return 1;
}

/* .text */
void text(uint32_t* rcx) {
    if (*rcx > 0xc0000091) {
        if (*rcx == 0xc0000094) 
            goto 0x4018a0;
        if (*rcx <= 0xc0000094) 
            goto addr_4017dd_4;
    } else {
        if (*rcx < 0xc000008d) 
            goto 0x401800; else 
            goto addr_401795_6;
    }
    if (*rcx == 0xc0000095) 
        goto 0x4018c2;
    if (*rcx != 0xc0000096) 
        goto 0x4017ef; else 
        goto "???";
    addr_4017dd_4:
    if (*rcx == 0xc0000092) 
        goto 0x4018c2;
    if (*rcx != 0xc0000093) 
        goto "???";
    addr_401795_6:
}

int32_t _CRT_MT = 2;

void __dyn_tls_init() {
    int1_t zf1;
    int32_t edx2;
    int32_t edx3;

    zf1 = _CRT_MT == 2;
    if (!zf1) {
        _CRT_MT = 2;
    }
    if (edx2 == 2) 
        goto 0x401630;
    if (edx3 != 1) 
        goto "???";
    __mingw_TLScallback();
    goto 0x401623;
}

int64_t __tlregdtor() {
    return 0;
}

struct s53 {
    int64_t f0;
    int64_t f8;
};

/* .data */
struct s53* data = reinterpret_cast<struct s53*>(0x402d30);

/* .text */
void text() {
    struct s53* rax1;
    int64_t rax2;
    struct s53* rax3;

    rax1 = data;
    rax2 = rax1->f0;
    if (rax2) {
        do {
            rax2();
            rax3 = data;
            rax2 = rax3->f8;
            data = reinterpret_cast<struct s53*>(&rax3->f8);
        } while (rax2);
    }
    return;
}

void _gnu_exception_handler(uint32_t** rcx) {
    if ((**rcx & 0x20ffffff) == 0x20474343) 
        goto 0x401ae0; else 
        goto "???";
}

struct s54 {
    signed char[4] pad4;
    int32_t f4;
};

struct s55 {
    signed char[4] pad4;
    int32_t f4;
};

/* .text */
void text(int32_t ecx, int64_t rdx) {
    int64_t rax3;
    int32_t* rdi4;
    int32_t* rsi5;
    struct s54* rdi6;
    struct s55* rsi7;

    rax3 = bss;
    if (rax3) {
        *rdi4 = *rsi5;
        rdi6->f4 = rsi7->f4;
        rax3(reinterpret_cast<int64_t>(__zero_stack_offset()) - 88 + 32);
    }
    return;
}

void fun_401d12(struct s1* rcx, struct s1* rdx, struct s1* r8, struct s1* r9) {
    int64_t rsi5;
    struct s19* rax6;
    int64_t v7;

    rsi5 = rcx->f8;
    rax6 = __iob_func(rcx, rdx, r8, r9, __return_address());
    fprintf(&rax6->f96, "_matherr(): %s in %s(%g, %g)  (retval=%g)\n", "Partial loss of significance (PLOSS)", rsi5, __return_address());
    goto v7;
}

int64_t RtlCaptureContext = 0x8596;

struct s1* g407498;

int64_t RtlLookupFunctionEntry = 0x85aa;

void* g407438;

int64_t g407420;

int32_t GS_ExceptionRecord;

int32_t g407884;

struct s1* g407890;

int64_t UnhandledExceptionFilter = 0x8620;

int64_t GetCurrentProcess = 0x8470;

int64_t TerminateProcess = 0x85fe;

int64_t RtlVirtualUnwind = 0x85c4;

void __report_gsfailure(int64_t rcx) {
    struct s1* v2;
    void* rbp3;
    int64_t rsi4;
    struct s1* rbx5;
    struct s1* r8_6;
    struct s1* rdx7;
    struct s1* rax8;
    struct s1* r9_9;
    struct s1* rax10;
    struct s1* rax11;
    struct s1* v12;

    v2 = reinterpret_cast<struct s1*>(__return_address());
    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rsi4 = rcx;
    RtlCaptureContext(0x4073a0);
    rbx5 = g407498;
    *reinterpret_cast<int32_t*>(&r8_6) = 0;
    *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
    rdx7 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbp3) + 0xffffffffffffffd8);
    rax8 = reinterpret_cast<struct s1*>(RtlLookupFunctionEntry(rbx5, rdx7));
    r9_9 = rax8;
    if (!rax8) {
        while (1) {
            g407498 = v2;
            g407438 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp3) + 8);
            addr_402873_3:
            rax10 = g407498;
            g407420 = rsi4;
            GS_ExceptionRecord = 0xc0000409;
            g407884 = 1;
            g407890 = rax10;
            SetUnhandledExceptionFilter();
            UnhandledExceptionFilter(0x403040, rdx7, r8_6, r9_9);
            rax11 = reinterpret_cast<struct s1*>(GetCurrentProcess(0x403040, rdx7, r8_6, r9_9));
            *reinterpret_cast<int32_t*>(&rdx7) = 0xc0000409;
            *reinterpret_cast<int32_t*>(&rdx7 + 4) = 0;
            TerminateProcess(rax11, 0xc0000409, r8_6, r9_9);
            abort(rax11, 0xc0000409, r8_6, r9_9);
        }
    } else {
        r8_6 = rbx5;
        rdx7 = v12;
        RtlVirtualUnwind();
        goto addr_402873_3;
    }
}

int64_t ___w64_mingwthr_remove_key_dtor(int32_t ecx) {
    int32_t eax2;

    eax2 = bss;
    if (eax2) 
        goto 0x402a10;
    return 0;
}

void _matherr(uint32_t* rcx) {
    if (*rcx <= 6) 
        goto 0x401d00;
}

int64_t mainCRTStartup(int64_t rcx, struct s1* rdx, struct s1* r8, struct s1* r9) {
    int64_t rax5;

    mingw_app_type = 0;
    text(rcx, rdx, r8);
    rax5 = __tmainCRTStartup(rcx, rdx, r8, r9);
    return rax5;
}

void __tcf_0() {
    _ZNSt8ios_base4InitD1Ev(0x407030);
    return;
}

/* std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&) */
int64_t _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ = 0x8804;

/* std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&) */
void _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_() {
    goto _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
}

int64_t __lconv_init = 0x86ae;

/* .text */
void text() {
    int64_t rax1;

    rax1 = __lconv_init;
    goto rax1;
}

void fun_401d20() {
    goto 0x401cb0;
}

void __lconv_init() {
    goto __lconv_init;
}

void fun_401d30() {
    goto 0x401cb0;
}

void fun_402c38() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    signed char* rax10;
    signed char* rax11;
    signed char al12;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    goto Sleep;
}

void _onexit() {
    goto _onexit;
}

void fun_401d40() {
    goto 0x401cb0;
}

void SetUnhandledExceptionFilter() {
    goto SetUnhandledExceptionFilter;
}

void fun_401d50() {
    goto 0x401cb0;
}

void GetProcAddress() {
    goto GetProcAddress;
}

void fun_401d60() {
    goto 0x401cb0;
}

void GetStartupInfoA() {
    goto GetStartupInfoA;
}

void RtlAddFunctionTable() {
    goto RtlAddFunctionTable;
}

void VirtualQuery() {
    goto VirtualQuery;
}

void VirtualProtect() {
    goto VirtualProtect;
}

void GetModuleHandleA() {
    goto GetModuleHandleA;
}

void LoadLibraryW() {
    goto LoadLibraryW;
}

void GetSystemTimeAsFileTime() {
    goto GetSystemTimeAsFileTime;
}

void GetCurrentProcessId() {
    goto GetCurrentProcessId;
}

void GetCurrentThreadId() {
    goto GetCurrentThreadId;
}

void GetTickCount() {
    goto GetTickCount;
}

void QueryPerformanceCounter() {
    goto QueryPerformanceCounter;
}

void RtlCaptureContext() {
    goto RtlCaptureContext;
}

void RtlLookupFunctionEntry() {
    goto RtlLookupFunctionEntry;
}

void RtlVirtualUnwind() {
    goto RtlVirtualUnwind;
}

void UnhandledExceptionFilter() {
    goto UnhandledExceptionFilter;
}

void GetCurrentProcess() {
    goto GetCurrentProcess;
}

void TerminateProcess() {
    goto TerminateProcess;
}

void EnterCriticalSection() {
    goto EnterCriticalSection;
}

void TlsGetValue() {
    goto TlsGetValue;
}

void GetLastError() {
    goto GetLastError;
}

void LeaveCriticalSection() {
    goto LeaveCriticalSection;
}

void DeleteCriticalSection() {
    goto DeleteCriticalSection;
}

void InitializeCriticalSection() {
    goto InitializeCriticalSection;
}
