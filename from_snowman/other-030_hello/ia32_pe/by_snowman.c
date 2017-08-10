
int32_t ___dyn_tls_init_callback = 0x40148c;

/* _SetUnhandledExceptionFilter@4 */
int32_t _SetUnhandledExceptionFilter_4(int32_t a1, int32_t a2, int32_t a3);

/* __gnu_exception_handler@4 */
uint32_t __gnu_exception_handler_4(uint32_t** a1);

/* .text */
uint32_t text(int32_t a1, int32_t a2, int32_t a3);

/* .text */
uint32_t text(int32_t a1, int32_t a2, int32_t a3);

int32_t __CRT_glob = -1;

void ___getmainargs(int32_t a1, int32_t a2, void* a3, int32_t a4, void* a5);

int32_t __CRT_fmode;

int32_t __fmode = 0x4000;

struct s0 {
    signed char[16] pad16;
    int32_t f16;
    signed char[28] pad48;
    int32_t f48;
    signed char[28] pad80;
    int32_t f80;
};

struct s0* _iob = reinterpret_cast<struct s0*>(0x62dc);

void __setmode(int32_t a1, int32_t a2);

int32_t* ___p__fmode(int32_t a1, int32_t a2);

struct s1 {
    int32_t f0;
    int32_t f4;
    uint32_t f8;
};

struct s1* __pei386_runtime_relocator(int32_t a1, int32_t a2);

void ___main(int32_t a1, int32_t a2, int32_t a3);

int32_t* ___p__environ(int32_t a1, int32_t a2, int32_t a3);

int32_t __argv;

int32_t __argc;

/* .text */
int32_t text(int32_t a1, int32_t a2, int32_t a3);

void __cexit(int32_t a1, int32_t a2, int32_t a3);

/* _ExitProcess@4 */
int32_t _ExitProcess_4(int32_t a1, int32_t a2, int32_t a3);

/* .text */
void text(int32_t a1) {
    void* ebp2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    struct s0* ebx7;
    int32_t v8;
    int32_t eax9;
    int32_t v10;
    int32_t eax11;
    int32_t v12;
    int32_t v13;
    int32_t* eax14;
    int32_t edx15;
    int32_t* eax16;
    int32_t v17;
    int32_t eax18;
    int32_t eax19;
    int32_t eax20;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = ___dyn_tls_init_callback;
    if (eax3) {
        eax3(0, 2, 0);
    }
    eax4 = _SetUnhandledExceptionFilter_4(__gnu_exception_handler_4, 2, 0);
    text(eax4, 2, 0);
    text(eax4, 2, 0);
    eax5 = __CRT_glob;
    ___getmainargs(0x405000, 0x405004, reinterpret_cast<int32_t>(ebp2) - 12, eax5, reinterpret_cast<int32_t>(ebp2) - 16);
    eax6 = __CRT_fmode;
    if (!eax6) 
        goto addr_40107e_4;
    while (1) {
        __fmode = eax6;
        ebx7 = _iob;
        v8 = ebx7->f16;
        __setmode(v8, eax6);
        eax9 = __CRT_fmode;
        v10 = ebx7->f48;
        __setmode(v10, eax9);
        eax11 = __CRT_fmode;
        v12 = eax11;
        v13 = ebx7->f80;
        __setmode(v13, v12);
        addr_40107e_4:
        eax14 = ___p__fmode(v13, v12);
        edx15 = __fmode;
        *eax14 = edx15;
        __pei386_runtime_relocator(v13, v12);
        ___main(0x401090, v13, v12);
        eax16 = ___p__environ(0x401090, v13, v12);
        v17 = *eax16;
        eax18 = __argv;
        eax19 = __argc;
        eax20 = text(eax19, eax18, v17);
        __cexit(eax19, eax18, v17);
        eax6 = _ExitProcess_4(eax20, eax18, v17);
    }
}

int32_t __p__fmode = 0x62b2;

int32_t* ___p__fmode(int32_t a1, int32_t a2) {
    goto __p__fmode;
}

/* .bss */
struct s1* bss;

struct s2 {
    int32_t f0;
    struct s1* f4;
    struct s1* f8;
    int32_t f12;
};

struct s1* ___write_memory(int32_t ecx, int32_t a2, struct s1* a3);

/* .text */
unsigned char* text(int32_t ecx, int32_t a2, struct s1* a3, signed char* a4);

struct s3 {
    int32_t f0;
    int32_t f4;
};

/* .data */
struct s3* data = reinterpret_cast<struct s3*>(0x401c74);

int32_t __RUNTIME_PSEUDO_RELOC_LIST__ = 0;

signed char* g40312c = reinterpret_cast<signed char*>(0);

int32_t g403130 = 1;

struct s1* __pei386_runtime_relocator(int32_t a1, int32_t a2) {
    struct s1* eax3;
    struct s2* ebx4;
    int32_t v5;
    struct s1* v6;
    struct s1* eax7;
    int32_t ecx8;
    signed char* v9;
    struct s3* eax10;
    int32_t eax11;
    struct s3* eax12;
    struct s1* ebx13;
    unsigned char* eax14;
    int32_t ecx15;
    struct s1* edx16;
    struct s1* v17;
    signed char* v18;
    int32_t edi19;
    signed char* esi20;

    eax3 = bss;
    if (eax3 || (bss = reinterpret_cast<struct s1*>(1), eax3 = reinterpret_cast<struct s1*>(24), 0)) {
        addr_40173e_2:
        return eax3;
    } else {
        ebx4 = reinterpret_cast<struct s2*>(0x403128);
        if (0) {
            addr_4017cc_4:
            if (ebx4->f0 || (eax3 = ebx4->f4, !!eax3)) {
                addr_401780_5:
                if (reinterpret_cast<uint32_t>(ebx4) < 0x403140) {
                    do {
                        eax7 = ___write_memory(4, v5, v6);
                        ebx4 = reinterpret_cast<struct s2*>(&ebx4->f8);
                    } while (reinterpret_cast<uint32_t>(ebx4) < 0x403140);
                    return eax7;
                }
            } else {
                addr_4017d9_9:
                eax3 = ebx4->f8;
                if (!reinterpret_cast<int1_t>(eax3 == 1)) {
                    text(ecx8, "  Unknown pseudo relocation protocol version %d.\n", eax3, v9);
                    eax10 = data;
                    eax11 = eax10->f0;
                    if (eax11) {
                        do {
                            eax11();
                            eax12 = data;
                            data = reinterpret_cast<struct s3*>(&eax12->f4);
                            eax11 = eax12->f4;
                        } while (eax11);
                    }
                    goto "  Unknown pseudo relocation protocol version %d.\n";
                } else {
                    ebx13 = reinterpret_cast<struct s1*>(&ebx4->f12);
                    if (reinterpret_cast<uint32_t>(ebx13) < 0x403140) {
                        while (1) {
                            eax14 = reinterpret_cast<unsigned char*>(0x400000 + ebx13->f4);
                            ecx15 = ebx13->f0;
                            edx16 = reinterpret_cast<struct s1*>(ebx13->f8 & 0xff);
                            if (edx16 == 16) {
                                if (static_cast<uint32_t>(reinterpret_cast<uint16_t>(*eax14)) & 0x8000) {
                                    goto addr_4018d8_18;
                                }
                            } else {
                                if (edx16 == 32) {
                                    goto addr_40189f_21;
                                } else {
                                    if (edx16 != 8) {
                                        v17 = edx16;
                                        eax14 = text(ecx15, "  Unknown pseudo relocation bit size %d.\n", v17, v18);
                                    }
                                    if (static_cast<uint32_t>(*eax14) & 0x80) 
                                        goto addr_40183f_25;
                                }
                            }
                            if (edx16 == 16) {
                                addr_4018d8_18:
                                ___write_memory(2, "  Unknown pseudo relocation bit size %d.\n", v17);
                                goto addr_4018ac_27;
                            } else {
                                if (edx16 != 32) {
                                    if (!reinterpret_cast<int1_t>(edx16 == 8)) {
                                        addr_4018ac_27:
                                        ++ebx13;
                                        eax3 = reinterpret_cast<struct s1*>(0x403140);
                                        if (0x403140 > reinterpret_cast<uint32_t>(ebx13)) 
                                            continue; else 
                                            break;
                                    } else {
                                        addr_401881_30:
                                        ___write_memory(1, "  Unknown pseudo relocation bit size %d.\n", v17);
                                        goto addr_4018ac_27;
                                    }
                                }
                            }
                            addr_40189f_21:
                            ___write_memory(4, "  Unknown pseudo relocation bit size %d.\n", v17);
                            goto addr_4018ac_27;
                            addr_40183f_25:
                            goto addr_401881_30;
                        }
                        goto addr_40173e_2;
                    }
                }
            }
        } else {
            edi19 = __RUNTIME_PSEUDO_RELOC_LIST__;
            if (edi19) 
                goto addr_401780_5;
            esi20 = g40312c;
            if (esi20) 
                goto addr_40177f_34;
        }
    }
    ecx8 = g403130;
    if (ecx8) 
        goto addr_4017d9_9;
    ebx4 = reinterpret_cast<struct s2*>(0x403134);
    goto addr_4017cc_4;
    addr_40177f_34:
    goto addr_401780_5;
}

/* .bss */
int32_t bss;

int32_t ___CTOR_LIST__ = -1;

void _atexit(int32_t ecx, int32_t a2);

void ___main(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ecx4;
    int32_t ebx5;
    int32_t eax6;

    ecx4 = bss;
    if (ecx4) {
        return;
    }
    bss = 1;
    ebx5 = ___CTOR_LIST__;
    if (ebx5 != -1) 
        goto addr_40193a_5;
    ebx5 = 0;
    while (eax6 = ebx5 + 1, !!*reinterpret_cast<int32_t*>(eax6 * 4 + 0x401c60)) {
        ebx5 = eax6;
    }
    addr_40193a_5:
    if (ebx5) {
        do {
            *reinterpret_cast<int32_t*>(ebx5 * 4 + 0x401c60)();
            --ebx5;
        } while (ebx5);
    }
    _atexit(ecx4, 0x4018f8);
    return;
}

int32_t __p__environ = 0x62a2;

int32_t* ___p__environ(int32_t a1, int32_t a2, int32_t a3) {
    goto __p__environ;
}

/* std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*) */
int32_t __ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(int32_t a1, int32_t a2);

/* std::ostream::operator<<(std::ostream& (*)(std::ostream&)) */
void __ZNSolsEPFRSoS_E(int32_t ecx, int32_t a2, int32_t a3);

/* std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&) */
void __ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_();

/* .text */
int32_t text(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t eax7;

    ___main(v4, v5, v6);
    eax7 = __ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(0x40618c, "Hello, World!");
    __ZNSolsEPFRSoS_E(eax7, __ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, "Hello, World!");
    return 0;
}

int32_t _cexit = 0x62d2;

void __cexit(int32_t a1, int32_t a2, int32_t a3) {
    goto _cexit;
}

int32_t ExitProcess = 0x61cc;

/* _ExitProcess@4 */
int32_t _ExitProcess_4(int32_t a1, int32_t a2, int32_t a3) {
    goto ExitProcess;
}

int32_t _setmode = 0x62ee;

void __setmode(int32_t a1, int32_t a2) {
    goto _setmode;
}

int32_t signal = 0x6328;

uint32_t _signal(int32_t a1, int32_t a2) {
    goto signal;
}

int32_t GetProcAddress = 0x61fe;

/* _GetProcAddress@8 */
int32_t _GetProcAddress_8(int32_t a1, int32_t a2) {
    goto GetProcAddress;
}

int32_t GetModuleHandleA = 0x61ea;

/* _GetModuleHandleA@4 */
int32_t _GetModuleHandleA_4(int32_t a1, int32_t a2) {
    goto GetModuleHandleA;
}

/* std::ios_base::Init::Init() */
int32_t _ZNSt8ios_base4InitC1Ev = 0x6388;

/* std::ios_base::Init::Init() */
void __ZNSt8ios_base4InitC1Ev(int32_t ecx) {
    goto _ZNSt8ios_base4InitC1Ev;
}

int32_t atexit = 0x6302;

void _atexit(int32_t ecx, int32_t a2) {
    int32_t eax3;

    eax3 = atexit;
    goto eax3;
}

/* .bss */
int32_t bss;

/* _InitializeCriticalSection@4 */
void _InitializeCriticalSection_4(int32_t a1);

/* .text */
int32_t text(int32_t ecx);

/* _DeleteCriticalSection@4 */
int32_t _DeleteCriticalSection_4(int32_t a1);

int32_t ___mingw_TLScallback(int32_t ecx, int32_t a2, uint32_t a3, int32_t a4) {
    int32_t eax5;
    int32_t eax6;

    if (a3 == 1) {
        eax5 = bss;
        if (!eax5) {
            _InitializeCriticalSection_4(0x40504c);
        }
        bss = 1;
        return 1;
    } else {
        if (a3 < 1) {
            text(ecx);
            eax6 = bss;
            if (!(eax6 - 1)) {
                bss = 0;
                _DeleteCriticalSection_4(0x40504c);
            }
        } else {
            if (a3 == 3) {
                text(ecx);
            }
        }
        return 1;
    }
}

int32_t VirtualProtect = 0x6270;

/* _VirtualProtect@16 */
struct s1* _VirtualProtect_16(int32_t a1, int32_t a2, int32_t a3, void* a4) {
    goto VirtualProtect;
}

/* _VirtualQuery@12 */
int32_t _VirtualQuery_12(signed char* a1, void* a2, int32_t a3);

struct s4 {
    int32_t f0;
    int32_t f4;
    struct s1* f8;
    int32_t f12;
};

struct s5 {
    int32_t f0;
    int32_t f4;
    uint32_t f8;
};

struct s1* ___write_memory(int32_t ecx, int32_t a2, struct s1* a3) {
    void* ebp4;
    signed char* esi5;
    signed char* edx6;
    signed char* eax7;
    int32_t eax8;
    int32_t ecx9;
    struct s1* eax10;
    struct s1* eax11;
    struct s1* v12;
    signed char* edi13;
    void* edx14;
    void* v15;
    int32_t v16;
    int32_t v17;
    struct s1* eax18;
    struct s1* v19;
    int32_t ecx20;
    signed char* edi21;
    struct s4* ebx22;
    int32_t v23;
    struct s1* v24;
    struct s1* v25;
    signed char* v26;
    struct s3* eax27;
    int32_t eax28;
    struct s3* eax29;
    struct s5* ebx30;
    unsigned char* eax31;
    int32_t ecx32;
    struct s1* edx33;
    struct s1* v34;
    signed char* v35;
    int32_t edi36;
    int32_t v37;
    int32_t v38;
    int32_t v39;
    struct s1* eax40;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esi5 = edx6;
    if (ecx) {
        eax8 = _VirtualQuery_12(eax7, reinterpret_cast<int32_t>(ebp4) - 56, 28);
        ecx9 = ecx;
        if (!eax8) {
            text(ecx9, "  VirtualQuery failed for %d bytes at address %p", 28, eax7);
            eax10 = bss;
            if (eax10) 
                goto addr_40173e_5;
            bss = reinterpret_cast<struct s1*>(1);
            if (!0) 
                goto addr_401761_7;
        } else {
            eax11 = v12;
            if (eax11 == 64 || eax11 == 4) {
                edi13 = eax7;
                while (ecx9) {
                    --ecx9;
                    *edi13 = *esi5;
                    ++edi13;
                    ++esi5;
                }
                return eax11;
            }
            edx14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp4) - 28);
            v15 = edx14;
            _VirtualProtect_16(v16, v17, 64, edx14);
            eax18 = v19;
            ecx20 = ecx9;
            edi21 = eax7;
            while (ecx20) {
                --ecx20;
                *edi21 = *esi5;
                ++edi21;
                ++esi5;
            }
            if (eax18 == 64) 
                goto addr_401659_17;
            if (eax18 == 4) 
                goto addr_401659_17; else 
                goto addr_4016de_19;
        }
    } else {
        addr_401659_17:
        return eax18;
    }
    addr_40173e_5:
    goto "  VirtualQuery failed for %d bytes at address %p";
    addr_401761_7:
    ebx22 = reinterpret_cast<struct s4*>(0x403128);
    if (0) {
        addr_4017cc_20:
        if (ebx22->f0 || ebx22->f4) {
            addr_401780_21:
            if (reinterpret_cast<uint32_t>(ebx22) < 0x403140) {
                do {
                    ___write_memory(4, v23, v24);
                    ebx22 = reinterpret_cast<struct s4*>(&ebx22->f8);
                } while (reinterpret_cast<uint32_t>(ebx22) < 0x403140);
                goto "  VirtualQuery failed for %d bytes at address %p";
            }
        } else {
            addr_4017d9_25:
            if (!reinterpret_cast<int1_t>(ebx22->f8 == 1)) {
                v25 = ebx22->f8;
                text(ecx9, "  Unknown pseudo relocation protocol version %d.\n", v25, v26);
                eax27 = data;
                eax28 = eax27->f0;
                if (eax28) {
                    do {
                        eax28();
                        eax29 = data;
                        data = reinterpret_cast<struct s3*>(&eax29->f4);
                        eax28 = eax29->f4;
                    } while (eax28);
                }
                goto "  Unknown pseudo relocation protocol version %d.\n";
            } else {
                ebx30 = reinterpret_cast<struct s5*>(&ebx22->f12);
                if (reinterpret_cast<uint32_t>(ebx30) < 0x403140) {
                    while (1) {
                        eax31 = reinterpret_cast<unsigned char*>(0x400000 + ebx30->f4);
                        ecx32 = ebx30->f0;
                        edx33 = reinterpret_cast<struct s1*>(ebx30->f8 & 0xff);
                        if (edx33 == 16) {
                            if (static_cast<uint32_t>(reinterpret_cast<uint16_t>(*eax31)) & 0x8000) {
                                goto addr_4018d8_34;
                            }
                        } else {
                            if (edx33 == 32) {
                                goto addr_40189f_37;
                            } else {
                                if (edx33 != 8) {
                                    v34 = edx33;
                                    eax31 = text(ecx32, "  Unknown pseudo relocation bit size %d.\n", v34, v35);
                                }
                                if (static_cast<uint32_t>(*eax31) & 0x80) 
                                    goto addr_40183f_41;
                            }
                        }
                        if (edx33 == 16) {
                            addr_4018d8_34:
                            ___write_memory(2, "  Unknown pseudo relocation bit size %d.\n", v34);
                            goto addr_4018ac_43;
                        } else {
                            if (edx33 != 32) {
                                if (!reinterpret_cast<int1_t>(edx33 == 8)) {
                                    addr_4018ac_43:
                                    ++ebx30;
                                    if (0x403140 > reinterpret_cast<uint32_t>(ebx30)) 
                                        continue; else 
                                        break;
                                } else {
                                    addr_401881_46:
                                    ___write_memory(1, "  Unknown pseudo relocation bit size %d.\n", v34);
                                    goto addr_4018ac_43;
                                }
                            }
                        }
                        addr_40189f_37:
                        ___write_memory(4, "  Unknown pseudo relocation bit size %d.\n", v34);
                        goto addr_4018ac_43;
                        addr_40183f_41:
                        goto addr_401881_46;
                    }
                    goto addr_40173e_5;
                }
            }
        }
    } else {
        edi36 = __RUNTIME_PSEUDO_RELOC_LIST__;
        if (edi36) 
            goto addr_401780_21;
        esi5 = g40312c;
        if (esi5) 
            goto addr_40177f_50;
    }
    ecx9 = g403130;
    if (ecx9) 
        goto addr_4017d9_25;
    ebx22 = reinterpret_cast<struct s4*>(0x403134);
    goto addr_4017cc_20;
    addr_40177f_50:
    goto addr_401780_21;
    addr_4016de_19:
    eax40 = _VirtualProtect_16(v37, v38, v39, v15);
    return eax40;
}

void _fwrite(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);

void _vfprintf();

signed char* _abort();

struct s6 {
    int32_t f0;
    int32_t f4;
    struct s1* f8;
    int32_t f12;
};

struct s7 {
    int32_t f0;
    int32_t f4;
    uint32_t f8;
};

/* .text */
unsigned char* text(int32_t ecx, int32_t a2, struct s1* a3, signed char* a4) {
    struct s0* ebx5;
    int32_t ebx6;
    int32_t ebx7;
    int32_t esi8;
    int32_t ebp9;
    int32_t v10;
    signed char* eax11;
    void* ebp12;
    signed char* esi13;
    signed char* edx14;
    int32_t eax15;
    int32_t ecx16;
    struct s1* eax17;
    int32_t v18;
    signed char* edi19;
    void* edx20;
    void* v21;
    int32_t v22;
    int32_t v23;
    int32_t eax24;
    int32_t v25;
    int32_t ecx26;
    signed char* edi27;
    struct s6* ebx28;
    int32_t v29;
    struct s1* v30;
    struct s1* v31;
    signed char* v32;
    struct s3* eax33;
    int32_t eax34;
    struct s3* eax35;
    struct s7* ebx36;
    unsigned char* eax37;
    int32_t ecx38;
    struct s1* edx39;
    struct s1* v40;
    signed char* v41;
    int32_t edi42;
    int32_t v43;
    int32_t v44;
    int32_t v45;

    ebx5 = _iob;
    ebx6 = reinterpret_cast<int32_t>(ebx5) + 64;
    _fwrite("Mingw runtime failure:\n", 1, 23, ebx6, ebx7, esi8, ebp9, __return_address());
    v10 = ebx6;
    _vfprintf();
    eax11 = _abort();
    ebp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 16 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
    esi13 = edx14;
    if (ecx) {
        eax15 = _VirtualQuery_12(eax11, reinterpret_cast<int32_t>(ebp12) - 56, 28);
        ecx16 = ecx;
        if (!eax15) {
            text(ecx16, "  VirtualQuery failed for %d bytes at address %p", 28, eax11);
            eax17 = bss;
            if (eax17) 
                goto addr_40173e_6;
            bss = reinterpret_cast<struct s1*>(1);
            if (!0) 
                goto addr_401761_8;
        } else {
            if (v18 == 64 || v18 == 4) {
                edi19 = eax11;
                while (ecx16) {
                    --ecx16;
                    *edi19 = *esi13;
                    ++edi19;
                    ++esi13;
                }
                goto v10;
            }
            edx20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp12) - 28);
            v21 = edx20;
            _VirtualProtect_16(v22, v23, 64, edx20);
            eax24 = v25;
            ecx26 = ecx16;
            edi27 = eax11;
            while (ecx26) {
                --ecx26;
                *edi27 = *esi13;
                ++edi27;
                ++esi13;
            }
            if (eax24 == 64) 
                goto addr_401659_18;
            if (eax24 == 4) 
                goto addr_401659_18; else 
                goto addr_4016de_20;
        }
    } else {
        addr_401659_18:
        goto v10;
    }
    addr_40173e_6:
    goto "  VirtualQuery failed for %d bytes at address %p";
    addr_401761_8:
    ebx28 = reinterpret_cast<struct s6*>(0x403128);
    if (0) {
        addr_4017cc_21:
        if (ebx28->f0 || ebx28->f4) {
            addr_401780_22:
            if (reinterpret_cast<uint32_t>(ebx28) < 0x403140) {
                do {
                    ___write_memory(4, v29, v30);
                    ebx28 = reinterpret_cast<struct s6*>(&ebx28->f8);
                } while (reinterpret_cast<uint32_t>(ebx28) < 0x403140);
                goto "  VirtualQuery failed for %d bytes at address %p";
            }
        } else {
            addr_4017d9_26:
            if (!reinterpret_cast<int1_t>(ebx28->f8 == 1)) {
                v31 = ebx28->f8;
                text(ecx16, "  Unknown pseudo relocation protocol version %d.\n", v31, v32);
                eax33 = data;
                eax34 = eax33->f0;
                if (eax34) {
                    do {
                        eax34();
                        eax35 = data;
                        data = reinterpret_cast<struct s3*>(&eax35->f4);
                        eax34 = eax35->f4;
                    } while (eax34);
                }
                goto "  Unknown pseudo relocation protocol version %d.\n";
            } else {
                ebx36 = reinterpret_cast<struct s7*>(&ebx28->f12);
                if (reinterpret_cast<uint32_t>(ebx36) < 0x403140) {
                    while (1) {
                        eax37 = reinterpret_cast<unsigned char*>(0x400000 + ebx36->f4);
                        ecx38 = ebx36->f0;
                        edx39 = reinterpret_cast<struct s1*>(ebx36->f8 & 0xff);
                        if (edx39 == 16) {
                            if (static_cast<uint32_t>(reinterpret_cast<uint16_t>(*eax37)) & 0x8000) {
                                goto addr_4018d8_35;
                            }
                        } else {
                            if (edx39 == 32) {
                                goto addr_40189f_38;
                            } else {
                                if (edx39 != 8) {
                                    v40 = edx39;
                                    eax37 = text(ecx38, "  Unknown pseudo relocation bit size %d.\n", v40, v41);
                                }
                                if (static_cast<uint32_t>(*eax37) & 0x80) 
                                    goto addr_40183f_42;
                            }
                        }
                        if (edx39 == 16) {
                            addr_4018d8_35:
                            ___write_memory(2, "  Unknown pseudo relocation bit size %d.\n", v40);
                            goto addr_4018ac_44;
                        } else {
                            if (edx39 != 32) {
                                if (!reinterpret_cast<int1_t>(edx39 == 8)) {
                                    addr_4018ac_44:
                                    ++ebx36;
                                    if (0x403140 > reinterpret_cast<uint32_t>(ebx36)) 
                                        continue; else 
                                        break;
                                } else {
                                    addr_401881_47:
                                    ___write_memory(1, "  Unknown pseudo relocation bit size %d.\n", v40);
                                    goto addr_4018ac_44;
                                }
                            }
                        }
                        addr_40189f_38:
                        ___write_memory(4, "  Unknown pseudo relocation bit size %d.\n", v40);
                        goto addr_4018ac_44;
                        addr_40183f_42:
                        goto addr_401881_47;
                    }
                    goto addr_40173e_6;
                }
            }
        }
    } else {
        edi42 = __RUNTIME_PSEUDO_RELOC_LIST__;
        if (edi42) 
            goto addr_401780_22;
        esi13 = g40312c;
        if (esi13) 
            goto addr_40177f_51;
    }
    ecx16 = g403130;
    if (ecx16) 
        goto addr_4017d9_26;
    ebx28 = reinterpret_cast<struct s6*>(0x403134);
    goto addr_4017cc_21;
    addr_40177f_51:
    goto addr_401780_22;
    addr_4016de_20:
    _VirtualProtect_16(v43, v44, v45, v21);
    goto v10;
}

int32_t TlsGetValue = 0x6262;

/* _TlsGetValue@4 */
int32_t _TlsGetValue_4(int32_t a1) {
    goto TlsGetValue;
}

int32_t GetLastError = 0x61da;

/* _GetLastError@0 */
int32_t _GetLastError_0(int32_t a1) {
    goto GetLastError;
}

int32_t LeaveCriticalSection = 0x622c;

/* _LeaveCriticalSection@4 */
int32_t _LeaveCriticalSection_4(int32_t a1, int32_t a2) {
    goto LeaveCriticalSection;
}

int32_t EnterCriticalSection = 0x61b4;

/* _EnterCriticalSection@4 */
int32_t _EnterCriticalSection_4(int32_t a1, int32_t a2) {
    goto EnterCriticalSection;
}

struct s8 {
    int32_t f0;
    int32_t f4;
    struct s8* f8;
};

struct s8* _key_dtor_list;

/* .text */
int32_t text(int32_t ecx) {
    int32_t eax2;
    int32_t v3;
    struct s8* ebx4;
    int32_t v5;
    int32_t eax6;
    int32_t edx7;
    int32_t eax8;
    int32_t eax9;
    int32_t v10;
    int32_t eax11;

    eax2 = bss;
    if (eax2) {
        _EnterCriticalSection_4(0x40504c, v3);
        ebx4 = _key_dtor_list;
        if (ebx4) {
            do {
                v5 = ebx4->f0;
                eax6 = _TlsGetValue_4(v5);
                eax8 = _GetLastError_0(edx7);
                if (!eax8 && eax6) {
                    eax9 = ebx4->f4;
                    eax9(eax6);
                }
                ebx4 = ebx4->f8;
            } while (ebx4);
        }
        eax11 = _LeaveCriticalSection_4(0x40504c, v10);
        return eax11;
    } else {
        return eax2;
    }
}

int32_t DeleteCriticalSection = 0x619c;

/* _DeleteCriticalSection@4 */
int32_t _DeleteCriticalSection_4(int32_t a1) {
    goto DeleteCriticalSection;
}

int32_t SetUnhandledExceptionFilter = 0x6244;

/* _SetUnhandledExceptionFilter@4 */
int32_t _SetUnhandledExceptionFilter_4(int32_t a1, int32_t a2, int32_t a3) {
    goto SetUnhandledExceptionFilter;
}

uint32_t ___cpu_features;

/* .text */
uint32_t text(int32_t a1, int32_t a2, int32_t a3) {
    uint32_t eflags4;
    uint32_t eax5;
    uint32_t eax6;
    int32_t ecx7;
    uint32_t edx8;

    *reinterpret_cast<int1_t*>(reinterpret_cast<int32_t>(&eflags4) + 1) = 0;
    eax5 = eflags4 & 0xfcffff;
    eax6 = (eax5 ^ 0x200000) & 0xfcffff ^ eax5;
    if (eax6 & 0x200000 && (eax6 = __intrinsic(), !!eax6)) {
        ecx7 = __intrinsic();
        edx8 = __intrinsic();
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx8) + 1) & 1) {
            ___cpu_features = ___cpu_features | 1;
        }
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx8) + 1) & 0x80) {
            ___cpu_features = ___cpu_features | 2;
        }
        if (edx8 & 0x800000) {
            ___cpu_features = ___cpu_features | 4;
        }
        if (edx8 & 0x1000000) {
            ___cpu_features = ___cpu_features | 8;
        }
        if (edx8 & 0x2000000) {
            ___cpu_features = ___cpu_features | 16;
        }
        if (edx8 & 0x4000000) {
            ___cpu_features = ___cpu_features | 32;
        }
        if (*reinterpret_cast<unsigned char*>(&ecx7) & 1) {
            ___cpu_features = ___cpu_features | 64;
        }
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx7) + 1) & 32) {
            ___cpu_features = ___cpu_features | 0x80;
        }
        eax6 = __intrinsic();
        if (eax6 > 0x80000000) {
            eax6 = __intrinsic();
            if (reinterpret_cast<int32_t>(__intrinsic()) < reinterpret_cast<int32_t>(0)) {
                ___cpu_features = ___cpu_features | 0x100;
            }
            if (__intrinsic() & 0x40000000) {
                ___cpu_features = ___cpu_features | 0x200;
            }
        }
    }
    return eax6;
}

/* .text */
uint32_t text(int32_t a1, int32_t a2, int32_t a3) {
    uint32_t eax4;

    __asm__("fninit ");
    return eax4;
}

int32_t __getmainargs = 0x6292;

void ___getmainargs(int32_t a1, int32_t a2, void* a3, int32_t a4, void* a5) {
    goto __getmainargs;
}

/* std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*) */
int32_t _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc = 0x640c;

/* std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*) */
int32_t __ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(int32_t a1, int32_t a2) {
    goto _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;
}

/* std::ostream::operator<<(std::ostream& (*)(std::ostream&)) */
int32_t _ZNSolsEPFRSoS_E = 0x6374;

/* std::ostream::operator<<(std::ostream& (*)(std::ostream&)) */
void __ZNSolsEPFRSoS_E(int32_t ecx, int32_t a2, int32_t a3) {
    goto _ZNSolsEPFRSoS_E;
}

int32_t VirtualQuery = 0x6282;

/* _VirtualQuery@12 */
int32_t _VirtualQuery_12(signed char* a1, void* a2, int32_t a3) {
    goto VirtualQuery;
}

int32_t fwrite = 0x631e;

void _fwrite(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    goto fwrite;
}

int32_t vfprintf = 0x6332;

void _vfprintf() {
    goto vfprintf;
}

int32_t abort = 0x62fa;

signed char* _abort() {
    goto abort;
}

int32_t InitializeCriticalSection = 0x6210;

/* _InitializeCriticalSection@4 */
void _InitializeCriticalSection_4(int32_t a1) {
    goto InitializeCriticalSection;
}

/* std::ios_base::Init::~Init() */
int32_t _ZNSt8ios_base4InitD1Ev = 0x63a4;

/* std::ios_base::Init::~Init() */
void __ZNSt8ios_base4InitD1Ev(int32_t ecx) {
    goto _ZNSt8ios_base4InitD1Ev;
}

void ___tcf_0();

/* __static_initialization_and_destruction_0(int, int) */
void __Z41__static_initialization_and_destruction_0ii(int32_t a1, int32_t a2) {
    if (a1 == 1 && a2 == 0xffff) {
        __ZNSt8ios_base4InitC1Ev(0x405020);
        _atexit(0x405020, ___tcf_0);
    }
    return;
}

int32_t calloc = 0x630c;

struct s8* _calloc(int32_t a1, int32_t a2) {
    goto calloc;
}

int32_t free = 0x6316;

void _free(struct s8* a1) {
    goto free;
}

void ___register_frame_info();

/* .data */
int32_t data = 0;

/* .text */
void text() {
    int32_t v1;
    int32_t eax2;
    int32_t eax3;
    int32_t v4;
    int32_t ecx5;
    int32_t eax6;
    int32_t eax7;

    eax2 = _GetModuleHandleA_4("libgcc_s_dw2-1.dll", v1);
    if (!eax2) {
        eax3 = reinterpret_cast<int32_t>(___register_frame_info);
    } else {
        v4 = reinterpret_cast<int32_t>("__register_frame_info");
        eax3 = _GetProcAddress_8(eax2, "__register_frame_info");
    }
    if (eax3) {
        v4 = 0x405008;
        eax3(0x404000, 0x405008);
    }
    ecx5 = data;
    if (ecx5) {
        eax6 = _GetModuleHandleA_4("libgcj-13.dll", v4);
        if (!eax6) {
            eax7 = 0;
        } else {
            v4 = reinterpret_cast<int32_t>("_Jv_RegisterClasses");
            eax7 = _GetProcAddress_8(eax6, "_Jv_RegisterClasses");
        }
        if (eax7) {
            eax7(0x40200c, v4);
        }
    }
    return;
}

void fun_401c63() {
    int32_t* ebx1;
    unsigned char* eax2;
    void* esp3;
    uint1_t cf4;
    int32_t ebx5;
    int32_t ebx6;

    eax2 = reinterpret_cast<unsigned char*>(*ebx1(__return_address()));
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4);
    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) + 64) + cf4);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp3) + ebx5 + 64) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp3) + ebx6 + 64) + *reinterpret_cast<unsigned char*>(&eax2));
    *eax2 = reinterpret_cast<unsigned char>(*eax2 + *reinterpret_cast<unsigned char*>(&eax2));
    *eax2 = reinterpret_cast<unsigned char>(*eax2 + *reinterpret_cast<unsigned char*>(&eax2));
}

void fun_401c73() {
    int32_t* eax1;
    int32_t* eax2;
    signed char* eax3;
    signed char* eax4;
    signed char al5;
    signed char* eax6;
    signed char* eax7;
    signed char al8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    signed char* eax21;
    signed char* eax22;
    signed char al23;
    signed char* eax24;
    signed char* eax25;
    signed char al26;
    signed char* eax27;
    signed char* eax28;
    signed char al29;
    signed char* eax30;
    signed char* eax31;
    signed char al32;
    signed char* eax33;
    signed char* eax34;
    signed char al35;
    signed char* eax36;
    signed char* eax37;
    signed char al38;
    signed char* eax39;
    signed char* eax40;
    signed char al41;
    signed char* eax42;
    signed char* eax43;
    signed char al44;
    signed char* eax45;
    signed char* eax46;
    signed char al47;
    signed char* eax48;
    signed char* eax49;
    signed char al50;
    signed char* eax51;
    signed char* eax52;
    signed char al53;
    signed char* eax54;
    signed char* eax55;
    signed char al56;
    signed char* eax57;
    signed char* eax58;
    signed char al59;
    signed char* eax60;
    signed char* eax61;
    signed char al62;
    signed char* eax63;
    signed char* eax64;
    signed char al65;
    signed char* eax66;
    signed char* eax67;
    signed char al68;
    signed char* eax69;
    signed char* eax70;
    signed char al71;
    signed char* eax72;
    signed char* eax73;
    signed char al74;
    signed char* eax75;
    signed char* eax76;
    signed char al77;
    signed char* eax78;
    signed char* eax79;
    signed char al80;
    signed char* eax81;
    signed char* eax82;
    signed char al83;
    signed char* eax84;
    signed char* eax85;
    signed char al86;
    signed char* eax87;
    signed char* eax88;
    signed char al89;
    signed char* eax90;
    signed char* eax91;
    signed char al92;
    signed char* eax93;
    signed char* eax94;
    signed char al95;
    signed char* eax96;
    signed char* eax97;
    signed char al98;
    signed char* eax99;
    signed char* eax100;
    signed char al101;
    signed char* eax102;
    signed char* eax103;
    signed char al104;
    signed char* eax105;
    signed char* eax106;
    signed char al107;
    signed char* eax108;
    signed char* eax109;
    signed char al110;
    signed char* eax111;
    signed char* eax112;
    signed char al113;
    signed char* eax114;
    signed char* eax115;
    signed char al116;
    signed char* eax117;
    signed char* eax118;
    signed char al119;
    signed char* eax120;
    signed char* eax121;
    signed char al122;
    signed char* eax123;
    signed char* eax124;
    signed char al125;
    signed char* eax126;
    signed char* eax127;
    signed char al128;
    signed char* eax129;
    signed char* eax130;
    signed char al131;
    signed char* eax132;
    signed char* eax133;
    signed char al134;
    signed char* eax135;
    signed char* eax136;
    signed char al137;
    signed char* eax138;
    signed char* eax139;
    signed char al140;
    signed char* eax141;
    signed char* eax142;
    signed char al143;
    signed char* eax144;
    signed char* eax145;
    signed char al146;
    signed char* eax147;
    signed char* eax148;
    signed char al149;
    signed char* eax150;
    signed char* eax151;
    signed char al152;
    signed char* eax153;
    signed char* eax154;
    signed char al155;
    signed char* eax156;
    signed char* eax157;
    signed char al158;
    signed char* eax159;
    signed char* eax160;
    signed char al161;
    signed char* eax162;
    signed char* eax163;
    signed char al164;
    signed char* eax165;
    signed char* eax166;
    signed char al167;
    signed char* eax168;
    signed char* eax169;
    signed char al170;
    signed char* eax171;
    signed char* eax172;
    signed char al173;
    signed char* eax174;
    signed char* eax175;
    signed char al176;
    signed char* eax177;
    signed char* eax178;
    signed char al179;
    signed char* eax180;
    signed char* eax181;
    signed char al182;
    signed char* eax183;
    signed char* eax184;
    signed char al185;
    signed char* eax186;
    signed char* eax187;
    signed char al188;
    signed char* eax189;
    signed char* eax190;
    signed char al191;
    signed char* eax192;
    signed char* eax193;
    signed char al194;
    signed char* eax195;
    signed char* eax196;
    signed char al197;
    signed char* eax198;
    signed char* eax199;
    signed char al200;
    signed char* eax201;
    signed char* eax202;
    signed char al203;
    signed char* eax204;
    signed char* eax205;
    signed char al206;
    signed char* eax207;
    signed char* eax208;
    signed char al209;
    signed char* eax210;
    signed char* eax211;
    signed char al212;
    signed char* eax213;
    signed char* eax214;
    signed char al215;
    signed char* eax216;
    signed char* eax217;
    signed char al218;
    signed char* eax219;
    signed char* eax220;
    signed char al221;
    signed char* eax222;
    signed char* eax223;
    signed char al224;
    signed char* eax225;
    signed char* eax226;
    signed char al227;
    signed char* eax228;
    signed char* eax229;
    signed char al230;
    signed char* eax231;
    signed char* eax232;
    signed char al233;
    signed char* eax234;
    signed char* eax235;
    signed char al236;
    signed char* eax237;
    signed char* eax238;
    signed char al239;
    signed char* eax240;
    signed char* eax241;
    signed char al242;
    signed char* eax243;
    signed char* eax244;
    signed char al245;
    signed char* eax246;
    signed char* eax247;
    signed char al248;
    signed char* eax249;
    signed char* eax250;
    signed char al251;
    signed char* eax252;
    signed char* eax253;
    signed char al254;
    signed char* eax255;
    signed char* eax256;
    signed char al257;
    signed char* eax258;
    signed char* eax259;
    signed char al260;
    signed char* eax261;
    signed char* eax262;
    signed char al263;
    signed char* eax264;
    signed char* eax265;
    signed char al266;
    signed char* eax267;
    signed char* eax268;
    signed char al269;
    signed char* eax270;
    signed char* eax271;
    signed char al272;
    signed char* eax273;
    signed char* eax274;
    signed char al275;
    signed char* eax276;
    signed char* eax277;
    signed char al278;
    signed char* eax279;
    signed char* eax280;
    signed char al281;
    signed char* eax282;
    signed char* eax283;
    signed char al284;
    signed char* eax285;
    signed char* eax286;
    signed char al287;
    signed char* eax288;
    signed char* eax289;
    signed char al290;
    signed char* eax291;
    signed char* eax292;
    signed char al293;
    signed char* eax294;
    signed char* eax295;
    signed char al296;
    signed char* eax297;
    signed char* eax298;
    signed char al299;
    signed char* eax300;
    signed char* eax301;
    signed char al302;
    signed char* eax303;
    signed char* eax304;
    signed char al305;
    signed char* eax306;
    signed char* eax307;
    signed char al308;
    signed char* eax309;
    signed char* eax310;
    signed char al311;
    signed char* eax312;
    signed char* eax313;
    signed char al314;
    signed char* eax315;
    signed char* eax316;
    signed char al317;
    signed char* eax318;
    signed char* eax319;
    signed char al320;
    signed char* eax321;
    signed char* eax322;
    signed char al323;
    signed char* eax324;
    signed char* eax325;
    signed char al326;
    signed char* eax327;
    signed char* eax328;
    signed char al329;
    signed char* eax330;
    signed char* eax331;
    signed char al332;
    signed char* eax333;
    signed char* eax334;
    signed char al335;
    signed char* eax336;
    signed char* eax337;
    signed char al338;
    signed char* eax339;
    signed char* eax340;
    signed char al341;
    signed char* eax342;
    signed char* eax343;
    signed char al344;
    signed char* eax345;
    signed char* eax346;
    signed char al347;
    signed char* eax348;
    signed char* eax349;
    signed char al350;
    signed char* eax351;
    signed char* eax352;
    signed char al353;
    signed char* eax354;
    signed char* eax355;
    signed char al356;
    signed char* eax357;
    signed char* eax358;
    signed char al359;
    signed char* eax360;
    signed char* eax361;
    signed char al362;
    signed char* eax363;
    signed char* eax364;
    signed char al365;
    signed char* eax366;
    signed char* eax367;
    signed char al368;
    signed char* eax369;
    signed char* eax370;
    signed char al371;
    signed char* eax372;
    signed char* eax373;
    signed char al374;
    signed char* eax375;
    signed char* eax376;
    signed char al377;
    signed char* eax378;
    signed char* eax379;
    signed char al380;
    signed char* eax381;
    signed char* eax382;
    signed char al383;
    signed char* eax384;
    signed char* eax385;
    signed char al386;
    signed char* eax387;
    signed char* eax388;
    signed char al389;
    signed char* eax390;
    signed char* eax391;
    signed char al392;
    signed char* eax393;
    signed char* eax394;
    signed char al395;
    signed char* eax396;
    signed char* eax397;
    signed char al398;
    signed char* eax399;
    signed char* eax400;
    signed char al401;
    signed char* eax402;
    signed char* eax403;
    signed char al404;
    signed char* eax405;
    signed char* eax406;
    signed char al407;
    signed char* eax408;
    signed char* eax409;
    signed char al410;
    signed char* eax411;
    signed char* eax412;
    signed char al413;
    signed char* eax414;
    signed char* eax415;
    signed char al416;
    signed char* eax417;
    signed char* eax418;
    signed char al419;
    signed char* eax420;
    signed char* eax421;
    signed char al422;
    signed char* eax423;
    signed char* eax424;
    signed char al425;
    signed char* eax426;
    signed char* eax427;
    signed char al428;
    signed char* eax429;
    signed char* eax430;
    signed char al431;
    signed char* eax432;
    signed char* eax433;
    signed char al434;
    signed char* eax435;
    signed char* eax436;
    signed char al437;
    signed char* eax438;
    signed char* eax439;
    signed char al440;
    signed char* eax441;
    signed char* eax442;
    signed char al443;
    signed char* eax444;
    signed char* eax445;
    signed char al446;
    signed char* eax447;
    signed char* eax448;
    signed char al449;
    signed char* eax450;
    signed char* eax451;
    signed char al452;
    signed char* eax453;
    signed char* eax454;
    signed char al455;
    signed char* eax456;
    signed char* eax457;
    signed char al458;
    signed char* eax459;
    signed char* eax460;
    signed char al461;
    signed char* eax462;
    signed char* eax463;
    signed char al464;
    signed char* eax465;
    signed char* eax466;
    signed char al467;
    signed char* eax468;
    signed char* eax469;
    signed char al470;
    signed char* eax471;
    signed char* eax472;
    signed char al473;
    signed char* eax474;
    signed char* eax475;
    signed char al476;
    signed char* eax477;
    signed char* eax478;
    signed char al479;
    signed char* eax480;
    signed char* eax481;
    signed char al482;
    signed char* eax483;
    signed char* eax484;
    signed char al485;
    signed char* eax486;
    signed char* eax487;
    signed char al488;
    signed char* eax489;
    signed char* eax490;
    signed char al491;
    signed char* eax492;
    signed char* eax493;
    signed char al494;
    signed char* eax495;
    signed char* eax496;
    signed char al497;
    signed char* eax498;
    signed char* eax499;
    signed char al500;
    signed char* eax501;
    signed char* eax502;
    signed char al503;
    signed char* eax504;
    signed char* eax505;
    signed char al506;
    signed char* eax507;
    signed char* eax508;
    signed char al509;
    signed char* eax510;
    signed char* eax511;
    signed char al512;
    signed char* eax513;
    signed char* eax514;
    signed char al515;
    signed char* eax516;
    signed char* eax517;
    signed char al518;
    signed char* eax519;
    signed char* eax520;
    signed char al521;
    signed char* eax522;
    signed char* eax523;
    signed char al524;
    signed char* eax525;
    signed char* eax526;
    signed char al527;
    signed char* eax528;
    signed char* eax529;
    signed char al530;
    signed char* eax531;
    signed char* eax532;
    signed char al533;
    signed char* eax534;
    signed char* eax535;
    signed char al536;
    signed char* eax537;
    signed char* eax538;
    signed char al539;
    signed char* eax540;
    signed char* eax541;
    signed char al542;
    signed char* eax543;
    signed char* eax544;
    signed char al545;
    signed char* eax546;
    signed char* eax547;
    signed char al548;
    signed char* eax549;
    signed char* eax550;
    signed char al551;
    signed char* eax552;
    signed char* eax553;
    signed char al554;
    signed char* eax555;
    signed char* eax556;
    signed char al557;
    signed char* eax558;
    signed char* eax559;
    signed char al560;
    signed char* eax561;
    signed char* eax562;
    signed char al563;
    signed char* eax564;
    signed char* eax565;
    signed char al566;
    signed char* eax567;
    signed char* eax568;
    signed char al569;
    signed char* eax570;
    signed char* eax571;
    signed char al572;
    signed char* eax573;
    signed char* eax574;
    signed char al575;
    signed char* eax576;
    signed char* eax577;
    signed char al578;
    signed char* eax579;
    signed char* eax580;
    signed char al581;
    signed char* eax582;
    signed char* eax583;
    signed char al584;
    signed char* eax585;
    signed char* eax586;
    signed char al587;
    signed char* eax588;
    signed char* eax589;
    signed char al590;
    signed char* eax591;
    signed char* eax592;
    signed char al593;

    *eax1 = *eax2 + 1;
    *eax3 = reinterpret_cast<signed char>(*eax4 + al5);
    *eax6 = reinterpret_cast<signed char>(*eax7 + al8);
    *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
    *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
    *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
    *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
    *eax21 = reinterpret_cast<signed char>(*eax22 + al23);
    *eax24 = reinterpret_cast<signed char>(*eax25 + al26);
    *eax27 = reinterpret_cast<signed char>(*eax28 + al29);
    *eax30 = reinterpret_cast<signed char>(*eax31 + al32);
    *eax33 = reinterpret_cast<signed char>(*eax34 + al35);
    *eax36 = reinterpret_cast<signed char>(*eax37 + al38);
    *eax39 = reinterpret_cast<signed char>(*eax40 + al41);
    *eax42 = reinterpret_cast<signed char>(*eax43 + al44);
    *eax45 = reinterpret_cast<signed char>(*eax46 + al47);
    *eax48 = reinterpret_cast<signed char>(*eax49 + al50);
    *eax51 = reinterpret_cast<signed char>(*eax52 + al53);
    *eax54 = reinterpret_cast<signed char>(*eax55 + al56);
    *eax57 = reinterpret_cast<signed char>(*eax58 + al59);
    *eax60 = reinterpret_cast<signed char>(*eax61 + al62);
    *eax63 = reinterpret_cast<signed char>(*eax64 + al65);
    *eax66 = reinterpret_cast<signed char>(*eax67 + al68);
    *eax69 = reinterpret_cast<signed char>(*eax70 + al71);
    *eax72 = reinterpret_cast<signed char>(*eax73 + al74);
    *eax75 = reinterpret_cast<signed char>(*eax76 + al77);
    *eax78 = reinterpret_cast<signed char>(*eax79 + al80);
    *eax81 = reinterpret_cast<signed char>(*eax82 + al83);
    *eax84 = reinterpret_cast<signed char>(*eax85 + al86);
    *eax87 = reinterpret_cast<signed char>(*eax88 + al89);
    *eax90 = reinterpret_cast<signed char>(*eax91 + al92);
    *eax93 = reinterpret_cast<signed char>(*eax94 + al95);
    *eax96 = reinterpret_cast<signed char>(*eax97 + al98);
    *eax99 = reinterpret_cast<signed char>(*eax100 + al101);
    *eax102 = reinterpret_cast<signed char>(*eax103 + al104);
    *eax105 = reinterpret_cast<signed char>(*eax106 + al107);
    *eax108 = reinterpret_cast<signed char>(*eax109 + al110);
    *eax111 = reinterpret_cast<signed char>(*eax112 + al113);
    *eax114 = reinterpret_cast<signed char>(*eax115 + al116);
    *eax117 = reinterpret_cast<signed char>(*eax118 + al119);
    *eax120 = reinterpret_cast<signed char>(*eax121 + al122);
    *eax123 = reinterpret_cast<signed char>(*eax124 + al125);
    *eax126 = reinterpret_cast<signed char>(*eax127 + al128);
    *eax129 = reinterpret_cast<signed char>(*eax130 + al131);
    *eax132 = reinterpret_cast<signed char>(*eax133 + al134);
    *eax135 = reinterpret_cast<signed char>(*eax136 + al137);
    *eax138 = reinterpret_cast<signed char>(*eax139 + al140);
    *eax141 = reinterpret_cast<signed char>(*eax142 + al143);
    *eax144 = reinterpret_cast<signed char>(*eax145 + al146);
    *eax147 = reinterpret_cast<signed char>(*eax148 + al149);
    *eax150 = reinterpret_cast<signed char>(*eax151 + al152);
    *eax153 = reinterpret_cast<signed char>(*eax154 + al155);
    *eax156 = reinterpret_cast<signed char>(*eax157 + al158);
    *eax159 = reinterpret_cast<signed char>(*eax160 + al161);
    *eax162 = reinterpret_cast<signed char>(*eax163 + al164);
    *eax165 = reinterpret_cast<signed char>(*eax166 + al167);
    *eax168 = reinterpret_cast<signed char>(*eax169 + al170);
    *eax171 = reinterpret_cast<signed char>(*eax172 + al173);
    *eax174 = reinterpret_cast<signed char>(*eax175 + al176);
    *eax177 = reinterpret_cast<signed char>(*eax178 + al179);
    *eax180 = reinterpret_cast<signed char>(*eax181 + al182);
    *eax183 = reinterpret_cast<signed char>(*eax184 + al185);
    *eax186 = reinterpret_cast<signed char>(*eax187 + al188);
    *eax189 = reinterpret_cast<signed char>(*eax190 + al191);
    *eax192 = reinterpret_cast<signed char>(*eax193 + al194);
    *eax195 = reinterpret_cast<signed char>(*eax196 + al197);
    *eax198 = reinterpret_cast<signed char>(*eax199 + al200);
    *eax201 = reinterpret_cast<signed char>(*eax202 + al203);
    *eax204 = reinterpret_cast<signed char>(*eax205 + al206);
    *eax207 = reinterpret_cast<signed char>(*eax208 + al209);
    *eax210 = reinterpret_cast<signed char>(*eax211 + al212);
    *eax213 = reinterpret_cast<signed char>(*eax214 + al215);
    *eax216 = reinterpret_cast<signed char>(*eax217 + al218);
    *eax219 = reinterpret_cast<signed char>(*eax220 + al221);
    *eax222 = reinterpret_cast<signed char>(*eax223 + al224);
    *eax225 = reinterpret_cast<signed char>(*eax226 + al227);
    *eax228 = reinterpret_cast<signed char>(*eax229 + al230);
    *eax231 = reinterpret_cast<signed char>(*eax232 + al233);
    *eax234 = reinterpret_cast<signed char>(*eax235 + al236);
    *eax237 = reinterpret_cast<signed char>(*eax238 + al239);
    *eax240 = reinterpret_cast<signed char>(*eax241 + al242);
    *eax243 = reinterpret_cast<signed char>(*eax244 + al245);
    *eax246 = reinterpret_cast<signed char>(*eax247 + al248);
    *eax249 = reinterpret_cast<signed char>(*eax250 + al251);
    *eax252 = reinterpret_cast<signed char>(*eax253 + al254);
    *eax255 = reinterpret_cast<signed char>(*eax256 + al257);
    *eax258 = reinterpret_cast<signed char>(*eax259 + al260);
    *eax261 = reinterpret_cast<signed char>(*eax262 + al263);
    *eax264 = reinterpret_cast<signed char>(*eax265 + al266);
    *eax267 = reinterpret_cast<signed char>(*eax268 + al269);
    *eax270 = reinterpret_cast<signed char>(*eax271 + al272);
    *eax273 = reinterpret_cast<signed char>(*eax274 + al275);
    *eax276 = reinterpret_cast<signed char>(*eax277 + al278);
    *eax279 = reinterpret_cast<signed char>(*eax280 + al281);
    *eax282 = reinterpret_cast<signed char>(*eax283 + al284);
    *eax285 = reinterpret_cast<signed char>(*eax286 + al287);
    *eax288 = reinterpret_cast<signed char>(*eax289 + al290);
    *eax291 = reinterpret_cast<signed char>(*eax292 + al293);
    *eax294 = reinterpret_cast<signed char>(*eax295 + al296);
    *eax297 = reinterpret_cast<signed char>(*eax298 + al299);
    *eax300 = reinterpret_cast<signed char>(*eax301 + al302);
    *eax303 = reinterpret_cast<signed char>(*eax304 + al305);
    *eax306 = reinterpret_cast<signed char>(*eax307 + al308);
    *eax309 = reinterpret_cast<signed char>(*eax310 + al311);
    *eax312 = reinterpret_cast<signed char>(*eax313 + al314);
    *eax315 = reinterpret_cast<signed char>(*eax316 + al317);
    *eax318 = reinterpret_cast<signed char>(*eax319 + al320);
    *eax321 = reinterpret_cast<signed char>(*eax322 + al323);
    *eax324 = reinterpret_cast<signed char>(*eax325 + al326);
    *eax327 = reinterpret_cast<signed char>(*eax328 + al329);
    *eax330 = reinterpret_cast<signed char>(*eax331 + al332);
    *eax333 = reinterpret_cast<signed char>(*eax334 + al335);
    *eax336 = reinterpret_cast<signed char>(*eax337 + al338);
    *eax339 = reinterpret_cast<signed char>(*eax340 + al341);
    *eax342 = reinterpret_cast<signed char>(*eax343 + al344);
    *eax345 = reinterpret_cast<signed char>(*eax346 + al347);
    *eax348 = reinterpret_cast<signed char>(*eax349 + al350);
    *eax351 = reinterpret_cast<signed char>(*eax352 + al353);
    *eax354 = reinterpret_cast<signed char>(*eax355 + al356);
    *eax357 = reinterpret_cast<signed char>(*eax358 + al359);
    *eax360 = reinterpret_cast<signed char>(*eax361 + al362);
    *eax363 = reinterpret_cast<signed char>(*eax364 + al365);
    *eax366 = reinterpret_cast<signed char>(*eax367 + al368);
    *eax369 = reinterpret_cast<signed char>(*eax370 + al371);
    *eax372 = reinterpret_cast<signed char>(*eax373 + al374);
    *eax375 = reinterpret_cast<signed char>(*eax376 + al377);
    *eax378 = reinterpret_cast<signed char>(*eax379 + al380);
    *eax381 = reinterpret_cast<signed char>(*eax382 + al383);
    *eax384 = reinterpret_cast<signed char>(*eax385 + al386);
    *eax387 = reinterpret_cast<signed char>(*eax388 + al389);
    *eax390 = reinterpret_cast<signed char>(*eax391 + al392);
    *eax393 = reinterpret_cast<signed char>(*eax394 + al395);
    *eax396 = reinterpret_cast<signed char>(*eax397 + al398);
    *eax399 = reinterpret_cast<signed char>(*eax400 + al401);
    *eax402 = reinterpret_cast<signed char>(*eax403 + al404);
    *eax405 = reinterpret_cast<signed char>(*eax406 + al407);
    *eax408 = reinterpret_cast<signed char>(*eax409 + al410);
    *eax411 = reinterpret_cast<signed char>(*eax412 + al413);
    *eax414 = reinterpret_cast<signed char>(*eax415 + al416);
    *eax417 = reinterpret_cast<signed char>(*eax418 + al419);
    *eax420 = reinterpret_cast<signed char>(*eax421 + al422);
    *eax423 = reinterpret_cast<signed char>(*eax424 + al425);
    *eax426 = reinterpret_cast<signed char>(*eax427 + al428);
    *eax429 = reinterpret_cast<signed char>(*eax430 + al431);
    *eax432 = reinterpret_cast<signed char>(*eax433 + al434);
    *eax435 = reinterpret_cast<signed char>(*eax436 + al437);
    *eax438 = reinterpret_cast<signed char>(*eax439 + al440);
    *eax441 = reinterpret_cast<signed char>(*eax442 + al443);
    *eax444 = reinterpret_cast<signed char>(*eax445 + al446);
    *eax447 = reinterpret_cast<signed char>(*eax448 + al449);
    *eax450 = reinterpret_cast<signed char>(*eax451 + al452);
    *eax453 = reinterpret_cast<signed char>(*eax454 + al455);
    *eax456 = reinterpret_cast<signed char>(*eax457 + al458);
    *eax459 = reinterpret_cast<signed char>(*eax460 + al461);
    *eax462 = reinterpret_cast<signed char>(*eax463 + al464);
    *eax465 = reinterpret_cast<signed char>(*eax466 + al467);
    *eax468 = reinterpret_cast<signed char>(*eax469 + al470);
    *eax471 = reinterpret_cast<signed char>(*eax472 + al473);
    *eax474 = reinterpret_cast<signed char>(*eax475 + al476);
    *eax477 = reinterpret_cast<signed char>(*eax478 + al479);
    *eax480 = reinterpret_cast<signed char>(*eax481 + al482);
    *eax483 = reinterpret_cast<signed char>(*eax484 + al485);
    *eax486 = reinterpret_cast<signed char>(*eax487 + al488);
    *eax489 = reinterpret_cast<signed char>(*eax490 + al491);
    *eax492 = reinterpret_cast<signed char>(*eax493 + al494);
    *eax495 = reinterpret_cast<signed char>(*eax496 + al497);
    *eax498 = reinterpret_cast<signed char>(*eax499 + al500);
    *eax501 = reinterpret_cast<signed char>(*eax502 + al503);
    *eax504 = reinterpret_cast<signed char>(*eax505 + al506);
    *eax507 = reinterpret_cast<signed char>(*eax508 + al509);
    *eax510 = reinterpret_cast<signed char>(*eax511 + al512);
    *eax513 = reinterpret_cast<signed char>(*eax514 + al515);
    *eax516 = reinterpret_cast<signed char>(*eax517 + al518);
    *eax519 = reinterpret_cast<signed char>(*eax520 + al521);
    *eax522 = reinterpret_cast<signed char>(*eax523 + al524);
    *eax525 = reinterpret_cast<signed char>(*eax526 + al527);
    *eax528 = reinterpret_cast<signed char>(*eax529 + al530);
    *eax531 = reinterpret_cast<signed char>(*eax532 + al533);
    *eax534 = reinterpret_cast<signed char>(*eax535 + al536);
    *eax537 = reinterpret_cast<signed char>(*eax538 + al539);
    *eax540 = reinterpret_cast<signed char>(*eax541 + al542);
    *eax543 = reinterpret_cast<signed char>(*eax544 + al545);
    *eax546 = reinterpret_cast<signed char>(*eax547 + al548);
    *eax549 = reinterpret_cast<signed char>(*eax550 + al551);
    *eax552 = reinterpret_cast<signed char>(*eax553 + al554);
    *eax555 = reinterpret_cast<signed char>(*eax556 + al557);
    *eax558 = reinterpret_cast<signed char>(*eax559 + al560);
    *eax561 = reinterpret_cast<signed char>(*eax562 + al563);
    *eax564 = reinterpret_cast<signed char>(*eax565 + al566);
    *eax567 = reinterpret_cast<signed char>(*eax568 + al569);
    *eax570 = reinterpret_cast<signed char>(*eax571 + al572);
    *eax573 = reinterpret_cast<signed char>(*eax574 + al575);
    *eax576 = reinterpret_cast<signed char>(*eax577 + al578);
    *eax579 = reinterpret_cast<signed char>(*eax580 + al581);
    *eax582 = reinterpret_cast<signed char>(*eax583 + al584);
    *eax585 = reinterpret_cast<signed char>(*eax586 + al587);
    *eax588 = reinterpret_cast<signed char>(*eax589 + al590);
    *eax591 = reinterpret_cast<signed char>(*eax592 + al593);
}

/* __gnu_exception_handler@4 */
uint32_t __gnu_exception_handler_4(uint32_t** a1) {
    int32_t ebx2;
    uint32_t eax3;
    uint32_t eax4;
    uint32_t eax5;
    uint32_t eax6;
    int32_t v7;

    if (**a1 > 0xc0000091) {
        if (**a1 == 0xc0000094) {
            ebx2 = 0;
        } else {
            if (**a1 == 0xc0000096) {
                addr_401186_5:
                eax3 = _signal(4, 0);
                if (eax3 == 1) {
                    _signal(4, 1);
                    eax4 = 0xffffffff;
                    goto addr_401158_7;
                } else {
                    if (!eax3) 
                        goto addr_401156_9;
                    eax3(4, 0);
                    eax4 = 0xffffffff;
                    goto addr_401158_7;
                }
            } else {
                if (**a1 != 0xc0000093) 
                    goto addr_401156_9;
                goto addr_40112c_13;
            }
        }
    } else {
        if (**a1 < 0xc000008d) {
            if (**a1 == 0xc0000005) {
                eax5 = _signal(11, 0);
                if (eax5 == 1) {
                    _signal(11, 1);
                    eax4 = 0xffffffff;
                    goto addr_401158_7;
                } else {
                    if (!eax5) 
                        goto addr_401156_9;
                    eax5(11, 0);
                    eax4 = 0xffffffff;
                    goto addr_401158_7;
                }
            } else {
                if (**a1 != 0xc000001d) 
                    goto addr_401156_9; else 
                    goto addr_401186_5;
            }
        } else {
            addr_40112c_13:
            ebx2 = 1;
        }
    }
    eax6 = _signal(8, 0);
    if (eax6 == 1) {
        _signal(8, 1);
        if (ebx2) {
            text(8, 1, v7);
            eax4 = 0xffffffff;
        } else {
            eax4 = 0xffffffff;
        }
    } else {
        if (eax6) {
            eax6(8, 0);
            eax4 = 0xffffffff;
        } else {
            addr_401156_9:
            eax4 = 0;
        }
    }
    addr_401158_7:
    return eax4;
}

struct s9 {
    signed char[4] pad4;
    int32_t f4;
};

struct s10 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_4014be() {
    int32_t v1;
    int32_t* ebx2;
    struct s9* ebp3;
    int32_t eax4;
    struct s10* ebp5;

    v1 = reinterpret_cast<int32_t>(__return_address());
    ebx2 = reinterpret_cast<int32_t*>(0x407014);
    if (1) {
        goto ebp3->f4;
    } else {
        do {
            eax4 = *ebx2;
            if (eax4) {
                eax4(v1);
            }
            ++ebx2;
        } while (!reinterpret_cast<int1_t>(ebx2 == 0x407014));
        goto ebp5->f4;
    }
}

void fun_401661() {
}

void fun_401855() {
}

void fun_4018c1() {
}

void fun_401925() {
}

int32_t fun_401a05(int32_t a1, int32_t a2) {
    int32_t eax3;
    struct s8* eax4;
    int32_t eax5;
    struct s8* eax6;

    eax3 = bss;
    if (eax3) {
        eax4 = _calloc(1, 12);
        if (!eax4) {
            eax5 = -1;
        } else {
            eax4->f0 = a1;
            eax4->f4 = a2;
            _EnterCriticalSection_4(0x40504c, 12);
            eax6 = _key_dtor_list;
            eax4->f8 = eax6;
            _key_dtor_list = eax4;
            _LeaveCriticalSection_4(0x40504c, 12);
            eax5 = 0;
        }
    } else {
        eax5 = 0;
    }
    return eax5;
}

struct s11 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_401a92(int32_t ecx, int32_t a2) {
    struct s8* edx3;
    int32_t ebx4;
    struct s8* eax5;
    int32_t ebx6;
    struct s11* ebp7;

    _EnterCriticalSection_4(0x40504c, a2);
    edx3 = _key_dtor_list;
    if (!edx3) {
        addr_401ac3_3:
        _LeaveCriticalSection_4(0x40504c, a2);
    } else {
        if (edx3->f0 != ebx4) {
            while (eax5 = edx3->f8, !!eax5) {
                if (eax5->f0 == ebx6) 
                    goto addr_401ad8_7;
                edx3 = eax5;
            }
            goto addr_401ac3_3;
        } else {
            _key_dtor_list = edx3->f8;
            eax5 = edx3;
            goto addr_401ade_11;
        }
    }
    addr_401ad0_12:
    goto ebp7->f4;
    addr_401ad8_7:
    edx3->f8 = eax5->f8;
    addr_401ade_11:
    _free(eax5);
    _LeaveCriticalSection_4(0x40504c, a2);
    goto addr_401ad0_12;
}

void ___tcf_0() {
    __ZNSt8ios_base4InitD1Ev(0x405020);
    return;
}

int32_t __set_app_type = 0x62c0;

void _mainCRTStartup() {
    __set_app_type(1);
    text(1);
    __set_app_type(2);
    text(2);
}

void ___deregister_frame_info();

void ___gcc_deregister_frame(int32_t ecx) {
    int32_t v2;
    int32_t eax3;
    int32_t eax4;

    eax3 = _GetModuleHandleA_4("libgcc_s_dw2-1.dll", v2);
    if (!eax3) {
        eax4 = reinterpret_cast<int32_t>(___deregister_frame_info);
    } else {
        eax4 = _GetProcAddress_8(eax3, "__deregister_frame_info");
    }
    if (eax4) {
        eax4(0x404000, "__deregister_frame_info");
    }
    return;
}

void fun_401381() {
}

void __GLOBAL__sub_I_main() {
    __Z41__static_initialization_and_destruction_0ii(1, 0xffff);
    return;
}

/* .text */
int32_t text(int32_t ecx, int32_t a2, uint32_t a3, int32_t a4) {
    if (a3 == 3 || !a3) {
        ___mingw_TLScallback(ecx, a2, a3, a4);
    }
    return 1;
}

int32_t _onexit = 0x62e4;

void __onexit() {
    int32_t eax1;

    eax1 = _onexit;
    goto eax1;
}

int32_t __CRT_MT;

void fun_401489(int32_t ecx, int32_t a2, int32_t a3, int32_t a4) {
    int1_t zf5;

    zf5 = __CRT_MT == 2;
    if (!zf5) {
        __CRT_MT = 2;
    }
    if (a3 == 2) 
        goto 0x4014c0;
    if (a3 - 1) 
        goto "???";
    ___mingw_TLScallback(ecx, a2, 1, a4);
    goto 0x4014b1;
}

int32_t ___tlregdtor() {
    return 0;
}

int32_t ____w64_mingwthr_remove_key_dtor(int32_t a1) {
    int32_t eax2;

    eax2 = bss;
    if (eax2) 
        goto 0x401a94;
    return 0;
}

void fun_401b01() {
}

void fun_401b25() {
}

int32_t __deregister_frame_info = 0x6340;

void ___deregister_frame_info() {
    goto __deregister_frame_info;
}

/* std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&) */
int32_t _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ = 0x63cc;

/* std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&) */
void __ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_() {
    goto _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
}

/* .text.startup */
void text_startup(int32_t ecx) {
    text();
    _atexit(ecx, ___gcc_deregister_frame);
    return;
}

int32_t __register_frame_info = 0x635c;

void ___register_frame_info() {
    goto __register_frame_info;
}
