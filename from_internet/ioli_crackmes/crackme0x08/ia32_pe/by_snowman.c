
/* .text */
void text(int32_t a1, int32_t a2) {
    __asm__("fninit ");
    return;
}

int32_t __p__fmode = 0x7244;

int32_t* ___p__fmode(int32_t a1, int32_t a2) {
    goto __p__fmode;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

/* .text */
void text(int32_t a1, int32_t a2) {
    struct s0* ecx3;

    ecx3 = reinterpret_cast<struct s0*>(0x405310);
    while (reinterpret_cast<uint32_t>(ecx3) < 0x405310) {
        ++ecx3;
        *reinterpret_cast<int32_t*>(ecx3->f4 + 0x400000) = *reinterpret_cast<int32_t*>(ecx3->f4 + 0x400000) + ecx3->f0;
    }
    return;
}

int32_t __alloca(int32_t ecx);

void ___main();

void _printf(int32_t a1, int32_t* a2, int32_t* a3, int32_t a4);

void _scanf(int32_t a1, void* a2);

int32_t* _check(void** a1, int32_t* a2);

int32_t _main(int32_t ecx, int32_t a2, int32_t a3, int32_t* a4) {
    void* ebp5;
    int32_t* v6;
    int32_t* v7;
    int32_t v8;
    int32_t* v9;
    int32_t* v10;
    int32_t v11;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __alloca(ecx);
    ___main();
    _printf("IOLI Crackme Level 0x08\n", v6, v7, v8);
    _printf("Password: ", v9, v10, v11);
    _scanf("%s", reinterpret_cast<int32_t>(ebp5) - 0x78);
    _check(reinterpret_cast<int32_t>(ebp5) + 0xffffff88, a4);
    return 0;
}

int32_t ExitProcess = 0x7174;

/* _ExitProcess@4 */
int32_t _ExitProcess_4(int32_t a1, int32_t a2, int32_t* a3) {
    goto ExitProcess;
}

int32_t strncmp = 0x7308;

int32_t _strncmp(int32_t a1, int32_t a2, int32_t a3) {
    goto strncmp;
}

int32_t printf = 0x72d0;

void _printf(int32_t a1, int32_t* a2, int32_t* a3, int32_t a4) {
    goto printf;
}

int32_t sscanf = 0x72f0;

void _sscanf(void** a1, int32_t* a2, int32_t* a3) {
    goto sscanf;
}

/* .text */
int32_t* text(int32_t a1, int32_t* a2, int32_t* a3);

int32_t _LOL;

void _exit(int32_t a1, int32_t* a2, int32_t* a3, int32_t a4);

int32_t* _parell(void** a1, int32_t* a2, int32_t* a3) {
    void* ebp4;
    int32_t* v5;
    int32_t* v6;
    int32_t v7;
    int32_t* eax8;
    int32_t v9;
    uint32_t v10;
    int1_t zf11;
    int32_t v12;
    int32_t v13;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v5 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp4) - 4);
    _sscanf(a1, "%d", v5);
    v6 = a2;
    eax8 = text(v7, v6, v5);
    if (eax8) {
        v9 = 0;
        while (v9 <= 9) {
            if (!(v10 & 1)) {
                zf11 = _LOL == 1;
                if (zf11) {
                    _printf("Password OK!\n", v6, v5, v12);
                }
                _exit(0, v6, v5, v13);
            }
            eax8 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp4) - 8);
            ++v9;
        }
    }
    return eax8;
}

int32_t exit = 0x72b4;

void _exit(int32_t a1, int32_t* a2, int32_t* a3, int32_t a4) {
    goto exit;
}

int32_t atexit = 0x72a8;

void _atexit() {
    int32_t ecx1;

    ecx1 = atexit;
    goto ecx1;
}

int32_t abort = 0x72a0;

uint32_t _abort(void** a1, void*** a2, void** a3) {
    goto abort;
}

int32_t Sleep = 0x7204;

/* _Sleep@4 */
void _Sleep_4(int32_t a1) {
    goto Sleep;
}

int32_t InterlockedDecrement = 0x71a0;

/* _InterlockedDecrement@4 */
int32_t _InterlockedDecrement_4(void** a1, void*** a2, void** a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    goto InterlockedDecrement;
}

int32_t ReleaseSemaphore = 0x71d0;

/* _ReleaseSemaphore@12 */
void _ReleaseSemaphore_12(void** a1, void*** a2, void** a3) {
    goto ReleaseSemaphore;
}

int32_t WaitForSingleObject = 0x720c;

/* _WaitForSingleObject@8 */
int32_t _WaitForSingleObject_8(void** a1, void*** a2, void** a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    goto WaitForSingleObject;
}

struct s1 {
    signed char[9] pad9;
    signed char f9;
    unsigned char fa;
};

struct s2 {
    signed char[9] pad9;
    void** f9;
};

uint32_t _strlen(void** a1, int32_t* a2, int32_t* a3);

void** _read_uleb128(void** a1);

void** _read_sleb128(void** a1);

void** _read_encoded_value_with_base(void** a1, void*** a2, void** a3);

uint32_t _get_cie_encoding(void** a1, void*** a2, void** a3) {
    void* ebp4;
    uint32_t eax5;
    struct s1* eax6;
    void** v7;
    struct s2* eax8;
    int32_t* v9;
    int32_t* v10;
    unsigned char* ebx11;
    void** eax12;
    void** ecx13;
    uint32_t eax14;
    void** v15;
    void** eax16;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = 0;
    if (eax6->f9 == 0x7a) {
        v7 = reinterpret_cast<void**>(&eax8->f9);
        _strlen(v7, v9, v10);
        _read_uleb128(v7);
        ebx11 = &eax6->fa;
        _read_sleb128(v7);
        eax12 = _read_uleb128(v7);
        ecx13 = eax12;
        while (eax14 = *ebx11, *reinterpret_cast<signed char*>(&eax14) != 82) {
            if (*reinterpret_cast<signed char*>(&eax14) == 80) {
                ++ebx11;
                eax16 = _read_encoded_value_with_base(ecx13 + 1, reinterpret_cast<int32_t>(ebp4) - 20, v15);
                ecx13 = eax16;
            } else {
                if (*reinterpret_cast<signed char*>(&eax14) != 76) 
                    goto addr_401e77_7;
                ++ecx13;
                ++ebx11;
            }
        }
    } else {
        addr_401e05_9:
        return eax5;
    }
    eax5 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx13));
    goto addr_401e05_9;
    addr_401e77_7:
    eax5 = 0;
    goto addr_401e05_9;
}

struct s3 {
    signed char[4] pad4;
    void** f4;
};

struct s4 {
    signed char[8] pad8;
    void** f8;
};

void** _base_from_object(void** a1, void*** a2, void** a3) {
    void** ecx4;
    signed char al5;
    uint32_t eax6;
    uint32_t eax7;
    struct s3* edx8;
    struct s4* edx9;
    int1_t zf10;
    void** v11;
    void*** v12;
    void** ebp13;

    ecx4 = reinterpret_cast<void**>(0);
    if (al5 == -1) {
        addr_401dd0_2:
        return ecx4;
    } else {
        eax6 = eax7 & 0x70;
        if (eax6 == 32) {
            return edx8->f4;
        }
        if (reinterpret_cast<int32_t>(eax6) <= reinterpret_cast<int32_t>(32)) 
            goto addr_401da6_6;
    }
    if (eax6 == 48) {
        addr_401dbf_8:
        ecx4 = edx9->f8;
        goto addr_401dd0_2;
    } else {
        zf10 = eax6 == 80;
    }
    addr_401db8_10:
    if (zf10) {
        addr_401de0_11:
        return 0;
    } else {
        _abort(v11, v12, ebp13);
        goto addr_401dbf_8;
    }
    addr_401da6_6:
    if (!eax6) 
        goto addr_401de0_11;
    zf10 = eax6 == 16;
    goto addr_401db8_10;
}

struct s5 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** _read_encoded_value_with_base(void** a1, void*** a2, void** a3) {
    uint32_t ebx4;
    signed char al5;
    signed char al6;
    struct s5* eax7;
    void** v8;
    void*** v9;
    void** v10;
    void** edx11;
    void** ecx12;
    void** v13;
    void** eax14;
    void** v15;
    void** v16;
    void** eax17;
    void** v18;
    void* edx19;

    *reinterpret_cast<signed char*>(&ebx4) = al5;
    if (al6 == 80) {
        eax7 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(a1 + 3) & 0xfffffffc);
        *a2 = eax7->f0;
        return &eax7->f4;
    }
    switch (ebx4 & 15) {
    default:
        _abort(v8, v9, v10);
    case 10:
        edx11 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(a1))));
        ecx12 = a1 + 2;
        break;
    case 0:
    case 3:
    case 11:
        edx11 = *reinterpret_cast<void***>(a1);
        ecx12 = a1 + 4;
        break;
    case 1:
        eax14 = _read_uleb128(v13);
        edx11 = v15;
        ecx12 = eax14;
        break;
    case 2:
        edx11 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a1))));
        ecx12 = a1 + 2;
        break;
    case 4:
    case 12:
        edx11 = *reinterpret_cast<void***>(a1);
        ecx12 = a1 + 8;
        break;
    case 9:
        eax17 = _read_sleb128(v16);
        edx11 = v18;
        ecx12 = eax17;
    }
    if (edx11) {
        if ((ebx4 & 0x70) == 16) {
            edx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx11) + reinterpret_cast<unsigned char>(a1));
        } else {
            edx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx11) + reinterpret_cast<uint32_t>(edx19));
        }
        if (*reinterpret_cast<signed char*>(&ebx4) < 0) {
            edx11 = *reinterpret_cast<void***>(edx11);
        }
    }
    *a2 = edx11;
    return ecx12;
}

struct s6 {
    uint32_t f0;
    signed char[12] pad16;
    unsigned char f10;
};

struct s7 {
    void* f0;
    int32_t f4;
    void** f8;
};

/* .text */
uint32_t text(void** a1, void*** a2);

struct s8 {
    signed char[4] pad4;
    void* f4;
};

void** _classify_object_over_fdes() {
    void* ebp1;
    struct s6* edi2;
    struct s6* eax3;
    struct s7* esi4;
    struct s7* edx5;
    int1_t zf6;
    int32_t* edx7;
    int32_t v8;
    void** v9;
    void** v10;
    int32_t eax11;
    void** v12;
    void*** v13;
    uint32_t eax14;
    uint32_t v15;
    void** eax16;
    uint32_t ecx17;
    uint32_t eax18;
    uint32_t eax19;
    uint32_t eax20;
    uint32_t eax21;
    uint32_t ecx22;
    uint32_t v23;
    struct s8* eax24;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edi2 = eax3;
    esi4 = edx5;
    zf6 = *edx7 == 0;
    v8 = 0;
    v9 = reinterpret_cast<void**>(0);
    v10 = reinterpret_cast<void**>(0);
    while (!zf6) {
        if (esi4->f4) {
            eax11 = reinterpret_cast<int32_t>(esi4) - esi4->f4 + 4;
            if (eax11 != v8) {
                v8 = eax11;
                eax14 = _get_cie_encoding(v12, v13, v10);
                v15 = eax14;
                eax16 = _base_from_object(v12, v13, v10);
                ecx17 = edi2->f10;
                v10 = eax16;
                eax18 = ecx17 >> 3 & 0xff;
                if (eax18 == 0xff) {
                    eax19 = ecx17 & 0xfffff807 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v15)) << 3;
                    edi2->f10 = *reinterpret_cast<unsigned char*>(&eax19);
                } else {
                    if (eax18 != v15) {
                        edi2->f10 = reinterpret_cast<unsigned char>(edi2->f10 | 4);
                        esi4 = esi4;
                    }
                }
            }
            v13 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp1) - 16);
            v12 = reinterpret_cast<void**>(&esi4->f8);
            _read_encoded_value_with_base(v12, v13, v10);
            eax20 = text(v12, v13);
            if (eax20 > 3) {
                eax21 = 0xffffffff;
            } else {
                ecx22 = eax20 * 8;
                eax21 = reinterpret_cast<uint32_t>((1 << *reinterpret_cast<unsigned char*>(&ecx22)) - 1);
            }
            if (eax21 & v23 && (++v9, edi2->f0 > v23)) {
                edi2->f0 = v23;
            }
        }
        eax24 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(esi4->f0) + reinterpret_cast<int32_t>(esi4));
        esi4 = reinterpret_cast<struct s7*>(&eax24->f4);
        zf6 = eax24->f4 == 0;
    }
    return v9;
}

int32_t malloc = 0x72c4;

void** _malloc(void** a1) {
    goto malloc;
}

struct s9 {
    signed char[16] pad16;
    unsigned char f10;
};

struct s10 {
    signed char[16] pad16;
    uint16_t f10;
};

struct s11 {
    signed char[4] pad4;
    int32_t f4;
};

struct s12 {
    signed char[4] pad4;
    void** f4;
};

void** _add_fdes(void** a1) {
    void* ebp2;
    void** esi3;
    struct s9* v4;
    struct s9* eax5;
    uint32_t eax6;
    struct s10* eax7;
    struct s11** v8;
    struct s11** edx9;
    uint32_t v10;
    uint32_t eax11;
    uint32_t edi12;
    void** v13;
    void*** v14;
    void** v15;
    void** eax16;
    int1_t zf17;
    void** v18;
    uint32_t eax19;
    void** v20;
    void*** v21;
    uint32_t eax22;
    void** eax23;
    uint32_t eax24;
    int1_t zf25;
    uint32_t v26;
    uint32_t ecx27;
    uint32_t v28;
    struct s11* edx29;
    int32_t eax30;
    struct s12* eax31;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esi3 = a1;
    v4 = eax5;
    eax6 = eax7->f10;
    v8 = edx9;
    v10 = 0;
    eax11 = eax6 >> 3;
    edi12 = *reinterpret_cast<unsigned char*>(&eax11);
    eax16 = _base_from_object(v13, v14, v15);
    zf17 = *reinterpret_cast<void***>(esi3) == 0;
    v18 = eax16;
    while (!zf17) {
        if (*reinterpret_cast<void***>(esi3 + 4)) {
            if (v4->f10 & 4 && (eax19 = reinterpret_cast<unsigned char>(esi3) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3 + 4)) + 4, eax19 != v10)) {
                v10 = eax19;
                eax22 = _get_cie_encoding(v20, v21, v18);
                edi12 = eax22;
                eax23 = _base_from_object(v20, v21, v18);
                v18 = eax23;
                esi3 = esi3;
            }
            if (edi12) {
                v21 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp2) - 16);
                v20 = esi3 + 8;
                _read_encoded_value_with_base(v20, v21, v18);
                eax24 = text(v20, v21);
                if (eax24 > 3) {
                    zf25 = (v26 & 0xffffffff) == 0;
                } else {
                    ecx27 = eax24 * 8;
                    zf25 = (v28 & reinterpret_cast<uint32_t>((1 << *reinterpret_cast<unsigned char*>(&ecx27)) - 1)) == 0;
                }
            } else {
                zf25 = *reinterpret_cast<void***>(esi3 + 8) == 0;
            }
            if (!zf25 && (edx29 = *v8, !!edx29)) {
                eax30 = edx29->f4;
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(edx29) + eax30 * 4 + 8) = esi3;
                edx29->f4 = eax30 + 1;
            }
        }
        eax31 = reinterpret_cast<struct s12*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3)) + reinterpret_cast<unsigned char>(esi3));
        esi3 = reinterpret_cast<void**>(&eax31->f4);
        eax16 = *reinterpret_cast<void***>(&eax31->f4);
        zf17 = eax16 == 0;
    }
    return eax16;
}

void _frame_downheap(void*** a1, void** a2, void** a3);

void _frame_heapsort(void** a1, void*** a2, void** a3) {
    void** edi4;
    void*** esi5;
    void** ebx6;
    void** ebx7;
    void** edx8;
    void** v9;

    edi4 = *reinterpret_cast<void***>(a1 + 4);
    esi5 = reinterpret_cast<void***>(a1 + 8);
    ebx6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi4) >> 1);
    while (--ebx6, reinterpret_cast<signed char>(ebx6) >= reinterpret_cast<signed char>(0)) {
        _frame_downheap(esi5, ebx6, edi4);
    }
    ebx7 = edi4 + 0xffffffff;
    while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx7 == 0))) {
        edx8 = *esi5;
        *esi5 = esi5[reinterpret_cast<unsigned char>(ebx7) * 4];
        esi5[reinterpret_cast<unsigned char>(ebx7) * 4] = edx8;
        v9 = ebx7;
        --ebx7;
        _frame_downheap(esi5, 0, v9);
    }
    return;
}

struct s13 {
    void* f0;
    int32_t f4;
    void** f8;
    signed char[3] pad12;
    void* fc;
};

struct s14 {
    signed char[16] pad16;
    unsigned char f10;
};

struct s13* _linear_search_fdes(void** a1, void*** a2, void** a3);

struct s15 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s16 {
    signed char[12] pad12;
    int32_t* fc;
};

void** ___w32_sharedptr;

void _free(void** a1, void*** a2, void** a3);

struct s13* _search_object(void** a1) {
    void* ebp2;
    void** v3;
    void** edx4;
    uint32_t edx5;
    struct s14* eax6;
    void** v7;
    void** eax8;
    void*** v9;
    void** v10;
    struct s13* eax11;
    void** ebx12;
    struct s13* eax13;
    void** eax14;
    void** v15;
    void** v16;
    void** v17;
    void** esi18;
    void** ebx19;
    struct s13* edi20;
    void** eax21;
    void** v22;
    void* v23;
    void** edx24;
    void** edi25;
    void** v26;
    int1_t cf27;
    void** ecx28;
    void** ecx29;
    void** v30;
    void** esi31;
    void** v32;
    void** v33;
    void** esi34;
    void** eax35;
    void** v36;
    void* v37;
    void** esi38;
    void** eax39;
    struct s15* eax40;
    void** v41;
    void** eax42;
    int32_t* ebx43;
    struct s16* eax44;
    void** eax45;
    void** edx46;
    void** ebx47;
    void** eax48;
    void** v49;
    void** v50;
    void** eax51;
    void** v52;
    void** ebx53;
    void** eax54;
    int32_t v55;
    uint32_t eax56;
    uint32_t eax57;
    void** v58;
    void** v59;
    void*** v60;
    void** v61;
    void** ebx62;
    void** eax63;
    void** v64;
    void** edx65;
    void** edi66;
    void** v67;
    void*** esi68;
    void** v69;
    int32_t eax70;
    void* eax71;
    void** ecx72;
    void** edx73;
    void** ebx74;
    int1_t cf75;
    void** esi76;
    void** v77;
    void** ebx78;
    void** v79;
    int32_t eax80;
    void* edx81;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v3 = edx4;
    edx5 = eax6->f10;
    v7 = eax8;
    if (*reinterpret_cast<unsigned char*>(&edx5) & 1) {
        addr_402438_2:
        if (!(*reinterpret_cast<unsigned char*>(&edx5) & 1)) {
            if (!(*reinterpret_cast<unsigned char*>(&edx5) & 2)) {
                eax11 = _linear_search_fdes(v3, v9, v10);
                return eax11;
            }
            ebx12 = *reinterpret_cast<void***>(v7 + 12);
            while (*reinterpret_cast<void***>(ebx12)) {
                eax13 = _linear_search_fdes(v3, v9, v10);
                if (eax13) 
                    goto addr_4024e2_8;
                ebx12 = ebx12 + 4;
            }
        } else {
            if (!(*reinterpret_cast<unsigned char*>(&edx5) & 4)) {
                eax14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 16))) >> 3 & 0xff);
                if (eax14) {
                    v15 = *reinterpret_cast<void***>(v7 + 12);
                    _base_from_object(v16, v9, v10);
                    v17 = reinterpret_cast<void**>(0);
                    esi18 = *reinterpret_cast<void***>(v15 + 4);
                    if (reinterpret_cast<unsigned char>(0) >= reinterpret_cast<unsigned char>(esi18)) {
                        addr_4024e0_13:
                        eax13 = reinterpret_cast<struct s13*>(0);
                        goto addr_4024e2_8;
                    } else {
                        do {
                            ebx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v17) + reinterpret_cast<unsigned char>(esi18) >> 1);
                            edi20 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(v15 + reinterpret_cast<unsigned char>(ebx19) * 4) + 8);
                            eax21 = _read_encoded_value_with_base(&edi20->f8, reinterpret_cast<int32_t>(ebp2) - 36, v10);
                            _read_encoded_value_with_base(eax21, reinterpret_cast<int32_t>(ebp2) - 40, v10);
                            if (reinterpret_cast<unsigned char>(v3) < reinterpret_cast<unsigned char>(v22)) {
                                esi18 = ebx19;
                            } else {
                                if (reinterpret_cast<unsigned char>(v3) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v22) + reinterpret_cast<uint32_t>(v23))) 
                                    goto addr_402934_18;
                                v17 = ebx19 + 1;
                            }
                        } while (reinterpret_cast<unsigned char>(v17) < reinterpret_cast<unsigned char>(esi18));
                        goto addr_4024e0_13;
                    }
                } else {
                    edx24 = reinterpret_cast<void**>(0);
                    edi25 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v7 + 12) + 4);
                    v26 = *reinterpret_cast<void***>(v7 + 12);
                    cf27 = reinterpret_cast<unsigned char>(eax14) < reinterpret_cast<unsigned char>(edi25);
                    while (cf27) {
                        ecx28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx24) + reinterpret_cast<unsigned char>(edi25) >> 1);
                        if (reinterpret_cast<unsigned char>(v3) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&(*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(v26 + reinterpret_cast<unsigned char>(ecx28) * 4) + 8))->f8))) {
                            if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&(*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(v26 + reinterpret_cast<unsigned char>(ecx28) * 4) + 8))->f8)) + reinterpret_cast<uint32_t>((*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(v26 + reinterpret_cast<unsigned char>(ecx28) * 4) + 8))->fc)) > reinterpret_cast<unsigned char>(v3)) 
                                goto addr_402966_25;
                            edx24 = ecx28 + 1;
                            cf27 = reinterpret_cast<unsigned char>(edx24) < reinterpret_cast<unsigned char>(edi25);
                        } else {
                            edi25 = ecx28;
                            cf27 = reinterpret_cast<unsigned char>(edx24) < reinterpret_cast<unsigned char>(edi25);
                        }
                    }
                    goto addr_4024e0_13;
                    addr_402966_25:
                    eax13 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(v26 + reinterpret_cast<unsigned char>(ecx28) * 4) + 8);
                    goto addr_4024e2_8;
                }
            } else {
                ecx29 = *reinterpret_cast<void***>(v7 + 12);
                v30 = reinterpret_cast<void**>(0);
                esi31 = *reinterpret_cast<void***>(ecx29 + 4);
                v32 = ecx29;
                v33 = esi31;
                if (reinterpret_cast<unsigned char>(0) >= reinterpret_cast<unsigned char>(esi31)) 
                    goto addr_4024e0_13;
                do {
                    esi34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(v33) >> 1);
                    edi20 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(v32 + reinterpret_cast<unsigned char>(esi34) * 4) + 8);
                    _get_cie_encoding(v16, v9, v10);
                    _base_from_object(v16, v9, v10);
                    eax35 = _read_encoded_value_with_base(&edi20->f8, reinterpret_cast<int32_t>(ebp2) - 28, v10);
                    v16 = eax35;
                    v9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp2) - 32);
                    _read_encoded_value_with_base(v16, v9, v10);
                    if (reinterpret_cast<unsigned char>(v3) >= reinterpret_cast<unsigned char>(v36)) {
                        if (reinterpret_cast<unsigned char>(v3) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v36) + reinterpret_cast<uint32_t>(v37))) 
                            goto addr_402934_18;
                        v30 = esi34 + 1;
                        esi38 = v33;
                    } else {
                        v33 = esi34;
                        esi38 = v33;
                    }
                } while (reinterpret_cast<unsigned char>(v30) < reinterpret_cast<unsigned char>(esi38));
                goto addr_4024e0_13;
            }
        }
    } else {
        eax39 = reinterpret_cast<void**>(eax40->f10 >> 11);
        v41 = eax39;
        if (!eax39) {
            if (!(*reinterpret_cast<unsigned char*>(&edx5) & 2)) {
                eax42 = _classify_object_over_fdes();
                v41 = eax42;
            } else {
                ebx43 = eax44->fc;
                if (*ebx43) {
                    do {
                        ++ebx43;
                        eax45 = _classify_object_over_fdes();
                        v41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v41) + reinterpret_cast<unsigned char>(eax45));
                    } while (*ebx43);
                }
            }
            edx46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 16)) & 0x7ff | reinterpret_cast<unsigned char>(v41) << 11);
            if (reinterpret_cast<unsigned char>(edx46) >> 11 == v41) 
                goto addr_4027fe_42; else 
                goto addr_402578_43;
        } else {
            addr_402419_44:
            if (v41) 
                goto addr_40258c_45; else 
                goto addr_402424_46;
        }
    }
    goto addr_4024e0_13;
    addr_402934_18:
    eax13 = edi20;
    goto addr_4024e2_8;
    addr_4027fe_42:
    *reinterpret_cast<void***>(v7 + 16) = edx46;
    goto addr_402419_44;
    addr_402578_43:
    *reinterpret_cast<void***>(v7 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx46) & 0x7ff);
    if (!v41) 
        goto addr_402424_46;
    addr_40258c_45:
    ebx47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v41) * 4 + 8);
    v16 = ebx47;
    eax48 = _malloc(v16);
    v49 = eax48;
    if (!eax48) {
        addr_402424_46:
        eax13 = reinterpret_cast<struct s13*>(0);
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7)) > reinterpret_cast<unsigned char>(v3)) {
            addr_4024e2_8:
            return eax13;
        } else {
            edx5 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 16));
            goto addr_402438_2;
        }
    } else {
        *reinterpret_cast<void***>(eax48 + 4) = reinterpret_cast<void**>(0);
        v50 = ebx47;
        eax51 = _malloc(v50);
        v52 = eax51;
        if (eax51) {
            *reinterpret_cast<void***>(eax51 + 4) = reinterpret_cast<void**>(0);
        }
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 16)) & 2)) {
            v50 = *reinterpret_cast<void***>(v7 + 12);
            _add_fdes(v50);
        } else {
            ebx53 = *reinterpret_cast<void***>(v7 + 12);
            eax54 = *reinterpret_cast<void***>(ebx53);
            if (eax54) {
                do {
                    v50 = eax54;
                    ebx53 = ebx53 + 4;
                    _add_fdes(v50);
                    eax54 = *reinterpret_cast<void***>(ebx53);
                } while (eax54);
            }
        }
        if (!v49) 
            goto addr_4025fe_56;
        if (*reinterpret_cast<void***>(v49 + 4) != v41) 
            goto addr_402815_58;
        addr_4025fe_56:
        v55 = 0x401f20;
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 16)) & 4) && (eax56 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 16)), v55 = 0x401e80, eax57 = eax56 >> 3, !!*reinterpret_cast<signed char*>(&eax57))) {
            v55 = 0x401ea0;
        }
        v58 = v52;
        v59 = v52;
        if (v52) 
            goto addr_402638_61;
    }
    v16 = v49;
    _frame_heapsort(v16, v60, v61);
    addr_402905_63:
    *reinterpret_cast<void***>(v49) = *reinterpret_cast<void***>(v7 + 12);
    *reinterpret_cast<void***>(v7 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 16)) | 1);
    *reinterpret_cast<void***>(v7 + 12) = v49;
    goto addr_402424_46;
    addr_402638_61:
    ebx62 = reinterpret_cast<void**>(0);
    eax63 = ___w32_sharedptr;
    v64 = v49;
    edx65 = *reinterpret_cast<void***>(v49 + 4);
    edi66 = v49;
    v67 = v49;
    esi68 = reinterpret_cast<void***>(eax63 + 36);
    v69 = edx65;
    if (reinterpret_cast<unsigned char>(0) >= reinterpret_cast<unsigned char>(edx65)) {
        goto addr_40282c_65;
    }
    while (1) {
        if (eax63 + 36 == esi68 || (v10 = *esi68, v9 = *reinterpret_cast<void****>(reinterpret_cast<uint32_t>(v64 + reinterpret_cast<unsigned char>(ebx62) * 4) + 8), v50 = v7, eax70 = reinterpret_cast<int32_t>(v55(v50, v9, v10)), eax70 >= 0)) {
            *reinterpret_cast<void****>(reinterpret_cast<uint32_t>(v58 + reinterpret_cast<unsigned char>(ebx62) * 4) + 8) = esi68;
            ++ebx62;
            esi68 = reinterpret_cast<void***>(edi66 + 8);
            edi66 = edi66 + 4;
            if (reinterpret_cast<unsigned char>(ebx62) >= reinterpret_cast<unsigned char>(v69)) 
                break;
        } else {
            eax71 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi68) - reinterpret_cast<unsigned char>(v64));
            esi68 = *reinterpret_cast<void****>(reinterpret_cast<unsigned char>(v58) + reinterpret_cast<uint32_t>(eax71));
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(v58) + reinterpret_cast<uint32_t>(eax71)) = 0;
        }
        eax63 = ___w32_sharedptr;
    }
    while (1) {
        v58 = v52;
        v64 = v49;
        addr_40282c_65:
        ecx72 = reinterpret_cast<void**>(0);
        edx73 = reinterpret_cast<void**>(0);
        ebx74 = reinterpret_cast<void**>(0);
        if (reinterpret_cast<unsigned char>(0) < reinterpret_cast<unsigned char>(v69)) {
            do {
                if (!*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(v59 + reinterpret_cast<unsigned char>(ebx74) * 4) + 8)) {
                    ++ebx74;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(v59 + reinterpret_cast<unsigned char>(ecx72) * 4) + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(v67 + reinterpret_cast<unsigned char>(ebx74) * 4) + 8);
                    ++ecx72;
                    cf75 = reinterpret_cast<unsigned char>(ebx74) < reinterpret_cast<unsigned char>(v69);
                } else {
                    ++ebx74;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(v67 + reinterpret_cast<unsigned char>(edx73) * 4) + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(v67 + reinterpret_cast<unsigned char>(ebx74) * 4) + 8);
                    ++edx73;
                    cf75 = reinterpret_cast<unsigned char>(ebx74) < reinterpret_cast<unsigned char>(v69);
                }
            } while (cf75);
        }
        *reinterpret_cast<void***>(v67 + 4) = edx73;
        *reinterpret_cast<void***>(v59 + 4) = ecx72;
        if (reinterpret_cast<int1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v58 + 4)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v64 + 4)) == v41)) 
            break;
        addr_402815_58:
        _abort(v50, v9, v10);
    }
    _frame_heapsort(v58, v9, v10);
    esi76 = v49;
    edi66 = *reinterpret_cast<void***>(v52 + 4);
    v77 = v52;
    if (edi66) 
        goto addr_4028a1_78;
    addr_4028fa_79:
    v16 = v77;
    _free(v16, v9, v10);
    goto addr_402905_63;
    addr_4028a1_78:
    ebx78 = *reinterpret_cast<void***>(esi76 + 4);
    do {
        --edi66;
        v79 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v77 + reinterpret_cast<unsigned char>(edi66) * 4) + 8);
        while (ebx78 && (v10 = v79, v9 = *reinterpret_cast<void****>(reinterpret_cast<uint32_t>(esi76 + reinterpret_cast<unsigned char>(ebx78) * 4) + 4), eax80 = reinterpret_cast<int32_t>(v55(v7, v9, v10)), !(reinterpret_cast<uint1_t>(eax80 < 0) | reinterpret_cast<uint1_t>(eax80 == 0)))) {
            edx81 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx78) + reinterpret_cast<unsigned char>(edi66));
            --ebx78;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi76 + reinterpret_cast<uint32_t>(edx81) * 4) + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi76 + reinterpret_cast<unsigned char>(ebx78) * 4) + 4);
        }
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esi76 + (reinterpret_cast<unsigned char>(ebx78) + reinterpret_cast<unsigned char>(edi66)) * 4) + 8) = v79;
    } while (edi66);
    *reinterpret_cast<void***>(esi76 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi76 + 4)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v77 + 4)));
    v77 = v52;
    goto addr_4028fa_79;
}

int32_t AddAtomA = 0x7154;

/* _AddAtomA@4 */
uint16_t _AddAtomA_4(void* a1) {
    goto AddAtomA;
}

int32_t free = 0x72bc;

void _free(void** a1, void*** a2, void** a3) {
    goto free;
}

int32_t FindAtomA = 0x7184;

/* _FindAtomA@4 */
uint16_t _FindAtomA_4(void* a1) {
    goto FindAtomA;
}

/* _GetAtomNameA@12 */
int32_t _GetAtomNameA_12(uint32_t a1, void* a2, int32_t a3);

void __assert(int32_t a1, int32_t a2, int32_t a3);

/* .text */
void text();

/* .bss */
void** bss;

int32_t g406074;

/* .data */
int32_t data = 0;

int32_t g404034 = -1;

/* eh_globals_static.2 */
int32_t eh_globals_static_2;

int32_t g406084;

/* eh_globals_key.3 */
int32_t eh_globals_key_3;

int32_t g40403c = -1;

/* eh_globals_once.4 */
int32_t eh_globals_once_4 = 0;

void*** ___w32_sharedptr_terminate;

void*** ___w32_sharedptr_unexpected;

void** ___w32_sharedptr_get(void* a1) {
    void* esp2;
    void* ebp3;
    void** ebx4;
    uint16_t ax5;
    int32_t eax6;
    void* esp7;
    void* edx8;
    uint32_t ecx9;
    void* esp10;
    void* ebp11;
    void** ecx12;
    void* esi13;
    void* v14;
    uint16_t ax15;
    void** eax16;
    void** eax17;
    void** ebx18;
    void** eax19;
    void*** v20;
    void** v21;
    uint32_t eax22;
    void* ecx23;
    uint32_t* ecx24;
    void** edi25;
    void** eax26;
    int32_t ecx27;
    uint32_t ecx28;
    void** eax29;
    int32_t edx30;
    int32_t eax31;
    int32_t edx32;
    int32_t eax33;
    int32_t edx34;
    int32_t eax35;
    int32_t edx36;
    int32_t eax37;
    void* edx38;
    void* esi39;
    uint32_t eax40;
    uint32_t eax41;
    void* v42;
    uint16_t ax43;
    uint32_t edi44;
    void** eax45;
    uint32_t edx46;
    void*** v47;
    void** v48;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp3 = esp2;
    ebx4 = reinterpret_cast<void**>(0);
    eax6 = _GetAtomNameA_12(static_cast<uint32_t>(ax5), reinterpret_cast<int32_t>(ebp3) - 72, 61);
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 84 - 4 + 12 + 4 - 12);
    edx8 = reinterpret_cast<void*>(31);
    ecx9 = 1;
    if (eax6) {
        while (1) {
            if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp3) + reinterpret_cast<int32_t>(edx8) - 72) != 65) {
                ecx9 = ecx9 + ecx9;
                edx8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx8) - 1);
                if (reinterpret_cast<int32_t>(edx8) < 0) 
                    break;
            } else {
                ebx4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx4) | ecx9);
                ecx9 = ecx9 + ecx9;
                edx8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx8) - 1);
                if (reinterpret_cast<int32_t>(edx8) < 0) 
                    break;
            }
        }
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4) == 64)) 
            goto addr_402baf_6;
    } else {
        goto addr_402bd4_8;
    }
    __assert("w32_sharedptr->size == sizeof(W32_EH_SHARED)", "../../gcc-3.4.5-20060117-1/gcc/config/i386/w32-shared-ptr.c", 0xf7);
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 + 4);
    addr_402bd4_8:
    __assert("GetAtomNameA (atom, s, sizeof(s)) != 0", "../../gcc-3.4.5-20060117-1/gcc/config/i386/w32-shared-ptr.c", 0xf1);
    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 + 4 - 4);
    ebp11 = esp10;
    ecx12 = ___w32_sharedptr;
    if (ecx12) {
        goto "GetAtomNameA (atom, s, sizeof(s)) != 0";
    }
    esi13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp11) - 88);
    v14 = esi13;
    ax15 = _FindAtomA_4(v14);
    eax16 = reinterpret_cast<void**>(static_cast<uint32_t>(ax15));
    if (eax16) {
        addr_402ddf_13:
        eax17 = ___w32_sharedptr_get(v14);
        ebx18 = eax17;
        goto addr_402de6_14;
    } else {
        eax19 = _malloc(64);
        ebx18 = eax19;
        if (!eax19) {
            eax22 = _abort(64, v20, v21);
            ecx23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4 - 4 - 0xac - 4 + 4 + 4 - 4 - 4 + 4 - 4 + 4 - 4 + 8);
            while (eax22 >= 0x1000) {
                ecx23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx23) - 0x1000);
                eax22 = eax22 - 0x1000;
            }
            ecx24 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx23) - eax22);
            *ecx24 = *ecx24;
            goto 64;
        }
        edi25 = eax19;
        eax26 = eax16;
        ecx27 = 16;
        while (ecx27) {
            --ecx27;
            *reinterpret_cast<void***>(edi25) = eax26;
            edi25 = edi25 + 4;
            esi13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi13) + 4);
        }
        *reinterpret_cast<void***>(ebx18 + 4) = reinterpret_cast<void**>(_abort);
        ecx28 = 1;
        *reinterpret_cast<void***>(ebx18 + 8) = reinterpret_cast<void**>(text);
        eax29 = bss;
        *reinterpret_cast<void***>(ebx18) = reinterpret_cast<void**>(64);
        edx30 = g406074;
        *reinterpret_cast<void***>(ebx18 + 20) = eax29;
        eax31 = data;
        *reinterpret_cast<int32_t*>(ebx18 + 24) = edx30;
        edx32 = g404034;
        *reinterpret_cast<int32_t*>(ebx18 + 28) = eax31;
        eax33 = eh_globals_static_2;
        *reinterpret_cast<int32_t*>(ebx18 + 32) = edx32;
        edx34 = g406084;
        *reinterpret_cast<int32_t*>(ebx18 + 40) = eax33;
        eax35 = eh_globals_key_3;
        *reinterpret_cast<int32_t*>(ebx18 + 48) = -1;
        *reinterpret_cast<int32_t*>(ebx18 + 44) = edx34;
        *reinterpret_cast<int32_t*>(ebx18 + 52) = eax35;
        edx36 = g40403c;
        eax37 = eh_globals_once_4;
        *reinterpret_cast<int32_t*>(ebx18 + 60) = edx36;
        edx38 = reinterpret_cast<void*>(31);
        *reinterpret_cast<int32_t*>(ebx18 + 56) = eax37;
        esi39 = esi13;
        do {
            eax40 = reinterpret_cast<unsigned char>(ebx18) & ecx28;
            eax41 = eax40 - (eax40 + reinterpret_cast<uint1_t>(eax40 < eax40 + reinterpret_cast<uint1_t>(eax40 < 1)));
            ecx28 = ecx28 + ecx28;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp11) + reinterpret_cast<int32_t>(edx38) - 0x98) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax41) & 32) + 65);
            edx38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx38) - 1);
        } while (reinterpret_cast<int32_t>(edx38) >= 0);
        v42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp11) - 0x98);
        ax43 = _AddAtomA_4(v42);
        edi44 = ax43;
        if (!edi44) 
            goto addr_402dc3_27;
        eax45 = ___w32_sharedptr_get(v42);
        edx46 = edi44;
        if (eax45 == ebx18) 
            goto addr_402e11_29;
    }
    addr_402dc3_27:
    edx46 = 0;
    addr_402dc5_30:
    if (edx46) {
        addr_402de6_14:
        ___w32_sharedptr = ebx18;
        ___w32_sharedptr_terminate = reinterpret_cast<void***>(ebx18 + 4);
        ___w32_sharedptr_unexpected = reinterpret_cast<void***>(ebx18 + 8);
        goto "GetAtomNameA (atom, s, sizeof(s)) != 0";
    } else {
        _free(ebx18, v47, v48);
        v14 = esi39;
        _FindAtomA_4(v14);
        goto addr_402ddf_13;
    }
    addr_402e11_29:
    goto addr_402dc5_30;
    addr_402baf_6:
    return ebx4;
}

int32_t __alloca(int32_t ecx) {
    int32_t v2;
    void* ecx3;
    uint32_t eax4;
    uint32_t* ecx5;

    v2 = reinterpret_cast<int32_t>(__return_address());
    ecx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    while (eax4 >= 0x1000) {
        ecx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx3) - 0x1000);
        eax4 = eax4 - 0x1000;
    }
    ecx5 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx3) - eax4);
    *ecx5 = *ecx5;
    return v2;
}

/* .bss */
int32_t bss;

int32_t ___CTOR_LIST__ = -1;

/* .ctors */
int32_t ctors = 0x403010;

void ___main() {
    int32_t eax1;
    int32_t eax2;
    int1_t zf3;
    int32_t ebx4;

    eax1 = bss;
    if (eax1) {
        return;
    }
    bss = 1;
    eax2 = ___CTOR_LIST__;
    if (eax2 != -1) 
        goto addr_4015d1_5;
    eax2 = 0;
    zf3 = ctors == 0;
    while (!zf3) {
        ++eax2;
        zf3 = *reinterpret_cast<int32_t*>(eax2 * 4 + 0x403034) == 0;
    }
    addr_4015d1_5:
    ebx4 = eax2;
    if (eax2) {
        do {
            *reinterpret_cast<int32_t*>(ebx4 * 4 + 0x403030)();
            --ebx4;
        } while (ebx4);
    }
    _atexit();
    return;
}

int32_t scanf = 0x72dc;

void _scanf(int32_t a1, void* a2) {
    goto scanf;
}

void _che(void** a1, int32_t* a2, int32_t* a3);

int32_t* _check(void** a1, int32_t* a2) {
    void* ebp3;
    int32_t v4;
    uint32_t v5;
    int32_t* v6;
    int32_t* v7;
    uint32_t eax8;
    int32_t v9;
    int32_t* v10;
    int32_t v11;
    int32_t* eax12;
    int32_t v13;
    uint32_t v14;
    int32_t v15;
    int32_t v16;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v4 = 0;
    v5 = 0;
    while (eax8 = _strlen(a1, v6, v7), v5 < eax8) {
        v7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp3) - 4);
        v6 = reinterpret_cast<int32_t*>("%d");
        _sscanf(reinterpret_cast<int32_t>(ebp3) + 0xfffffff3, "%d", v7);
        v4 = v4 + v9;
        if (v4 == 16) {
            v6 = a2;
            _parell(a1, v6, v7);
        }
        ++v5;
    }
    _che(a1, v6, v7);
    v10 = a2;
    eax12 = text(v11, v10, v7);
    if (eax12) {
        v13 = 0;
        while (v13 <= 9) {
            if (!(v14 & 1)) {
                _printf("wtf?\n", v10, v7, v15);
                _exit(0, v10, v7, v16);
            }
            eax12 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp3) - 12);
            ++v13;
        }
    }
    return eax12;
}

void _che(void** a1, int32_t* a2, int32_t* a3) {
    int32_t* v4;
    int32_t* ebp5;
    int32_t* v6;
    int32_t* v7;
    void** v8;
    int32_t* v9;
    int32_t v10;
    int32_t* eax11;
    int32_t v12;
    uint32_t v13;
    int1_t zf14;
    int32_t v15;
    int32_t v16;

    _printf("Password Incorrect!\n", v4, ebp5, __return_address());
    _exit(0, v6, ebp5, __return_address());
    v7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8 - 4 + 4 - 4 + 4 - 4 - 4);
    _sscanf(v8, "%d", v7);
    v9 = ebp5;
    eax11 = text(v10, v9, v7);
    if (eax11) {
        v12 = 0;
        while (v12 <= 9) {
            if (!(v13 & 1)) {
                zf14 = _LOL == 1;
                if (zf14) {
                    _printf("Password OK!\n", v9, v7, v15);
                }
                _exit(0, v9, v7, v16);
            }
            ++v12;
        }
    }
    goto 0;
}

/* .text */
int32_t* text(int32_t a1, int32_t* a2, int32_t* a3) {
    int32_t v4;
    void* ecx5;
    int32_t v6;
    int32_t eax7;
    int32_t* v8;

    v4 = 0;
    do {
        if (!a2[v4]) 
            break;
        ecx5 = reinterpret_cast<void*>(v4 * 4);
        ++v4;
        v6 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx5) + reinterpret_cast<int32_t>(a2));
        eax7 = _strncmp(v6, "LOLO", 3);
    } while (eax7);
    goto addr_401361_4;
    v8 = reinterpret_cast<int32_t*>(0);
    addr_40137b_6:
    return v8;
    addr_401361_4:
    _LOL = 1;
    v8 = reinterpret_cast<int32_t*>(1);
    goto addr_40137b_6;
}

void** _read_uleb128(void** a1) {
    int32_t ebx2;
    void** v3;
    void** eax4;
    uint32_t esi5;
    uint32_t* edi6;
    uint32_t* edx7;
    unsigned char cl8;
    uint32_t edx9;

    ebx2 = 0;
    v3 = eax4;
    esi5 = 0;
    edi6 = edx7;
    do {
        cl8 = *reinterpret_cast<unsigned char*>(&ebx2);
        ebx2 = ebx2 + 7;
        edx9 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v3));
        ++v3;
        esi5 = esi5 | (edx9 & 0x7f) << cl8;
    } while (*reinterpret_cast<signed char*>(&edx9) < 0);
    *edi6 = esi5;
    return v3;
}

void** _read_sleb128(void** a1) {
    void** v2;
    void** eax3;
    uint32_t* v4;
    uint32_t* edx5;
    uint32_t esi6;
    uint32_t edi7;
    uint32_t ecx8;
    uint32_t edx9;
    uint32_t ebx10;
    uint32_t ecx11;

    v2 = eax3;
    v4 = edx5;
    esi6 = 0;
    edi7 = 0;
    do {
        ecx8 = esi6;
        esi6 = esi6 + 7;
        edx9 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v2));
        ++v2;
        ebx10 = *reinterpret_cast<unsigned char*>(&edx9);
        edi7 = edi7 | (ebx10 & 0x7f) << *reinterpret_cast<unsigned char*>(&ecx8);
    } while (*reinterpret_cast<signed char*>(&edx9) < reinterpret_cast<signed char>(0));
    if (esi6 <= 31 && *reinterpret_cast<unsigned char*>(&ebx10) & 64) {
        ecx11 = esi6;
        edi7 = edi7 | 0xffffffff << *reinterpret_cast<unsigned char*>(&ecx11);
    }
    *v4 = edi7;
    return v2;
}

int32_t InterlockedIncrement = 0x71b8;

/* _InterlockedIncrement@4 */
int32_t _InterlockedIncrement_4(void** a1) {
    goto InterlockedIncrement;
}

/* _CreateSemaphoreA@16 */
int32_t _CreateSemaphoreA_16(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

void _init_object_mutex(void** a1) {
    void** eax2;
    int32_t eax3;

    eax2 = ___w32_sharedptr;
    *reinterpret_cast<void***>(eax2 + 20) = reinterpret_cast<void**>(0xffffffff);
    eax3 = _CreateSemaphoreA_16(0, 0, 0xffff, 0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2 + 20) + 4) = eax3;
    return;
}

int32_t __CRT_MT;

void _init_object_mutex_once() {
    int32_t eax1;
    void** ebx2;
    int32_t* esi3;
    void** v4;
    int32_t eax5;
    int32_t* esi6;

    eax1 = __CRT_MT;
    ebx2 = ___w32_sharedptr;
    esi3 = reinterpret_cast<int32_t*>(ebx2 + 28);
    if (eax1 && esi3) {
        if (!*reinterpret_cast<int32_t*>(ebx2 + 28)) {
            v4 = ebx2 + 32;
            eax5 = _InterlockedIncrement_4(v4);
            if (!eax5) {
                _init_object_mutex(v4);
                *reinterpret_cast<int32_t*>(ebx2 + 28) = 1;
            } else {
                if (!*reinterpret_cast<int32_t*>(ebx2 + 28)) {
                    esi6 = esi3;
                    do {
                        _Sleep_4(0);
                    } while (!*esi6);
                }
            }
        }
    }
    return;
}

void ___register_frame_info_bases(void** a1, void** a2, void** a3, void** a4) {
    uint32_t eax5;
    int32_t ecx6;
    void** edx7;
    void** esi8;
    int32_t eax9;
    void** v10;
    void** v11;
    int32_t v12;
    int32_t ebx13;
    int32_t esi14;
    int32_t ebp15;
    int32_t eax16;
    void** v17;
    int32_t v18;
    void** ebx19;
    void** v20;
    int32_t v21;
    int32_t eax22;
    void** v23;

    if (a1 && *reinterpret_cast<void***>(a1)) {
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<void***>(a2 + 4) = a3;
        *reinterpret_cast<void***>(a2 + 16) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a2 + 12) = a1;
        *reinterpret_cast<void***>(a2 + 8) = a4;
        eax5 = static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a2 + 16))) | 0x7f8;
        *reinterpret_cast<void***>(a2 + 16) = *reinterpret_cast<void***>(&eax5);
        _init_object_mutex_once();
        ecx6 = __CRT_MT;
        edx7 = ___w32_sharedptr;
        esi8 = edx7 + 20;
        if (ecx6) {
            eax9 = _InterlockedIncrement_4(esi8);
            if (eax9 && (v10 = *reinterpret_cast<void***>(esi8 + 4), eax16 = _WaitForSingleObject_8(v10, -1, v11, v12, ebx13, esi14, ebp15, __return_address()), !!eax16)) {
                _InterlockedDecrement_4(esi8, -1, v17, v18, ebx13, esi14, ebp15, __return_address());
            }
            edx7 = ___w32_sharedptr;
            ecx6 = __CRT_MT;
        }
        *reinterpret_cast<void***>(a2 + 20) = *reinterpret_cast<void***>(edx7 + 12);
        *reinterpret_cast<void***>(edx7 + 12) = a2;
        ebx19 = edx7 + 20;
        if (ecx6 && (eax22 = _InterlockedDecrement_4(ebx19, -1, v20, v21, ebx13, esi14, ebp15, __return_address()), eax22 >= 0)) {
            v23 = *reinterpret_cast<void***>(ebx19 + 4);
            _ReleaseSemaphore_12(v23, 1, 0);
        }
    }
    return;
}

void ___register_frame_info(void** a1, void** a2) {
    ___register_frame_info_bases(a1, a2, 0, 0);
    return;
}

void ___register_frame_info_table_bases(void** a1, void** a2, void** a3, void** a4) {
    uint32_t eax5;
    int32_t ecx6;
    void** edx7;
    void** esi8;
    int32_t eax9;
    void** v10;
    void** v11;
    int32_t v12;
    int32_t ebx13;
    int32_t esi14;
    int32_t ebp15;
    int32_t eax16;
    void** v17;
    int32_t v18;
    void** edx19;
    int32_t ecx20;
    void** ebx21;
    void** v22;
    int32_t v23;
    int32_t eax24;
    void** v25;

    *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<void***>(a2 + 4) = a3;
    *reinterpret_cast<void***>(a2 + 8) = a4;
    *reinterpret_cast<void***>(a2 + 16) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(a2 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 16)) | 2);
    *reinterpret_cast<void***>(a2 + 12) = a1;
    eax5 = static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(a2 + 16))) | 0x7f8;
    *reinterpret_cast<void***>(a2 + 16) = *reinterpret_cast<void***>(&eax5);
    _init_object_mutex_once();
    ecx6 = __CRT_MT;
    edx7 = ___w32_sharedptr;
    esi8 = edx7 + 20;
    if (ecx6) {
        eax9 = _InterlockedIncrement_4(esi8);
        if (eax9 && (v10 = *reinterpret_cast<void***>(esi8 + 4), eax16 = _WaitForSingleObject_8(v10, -1, v11, v12, ebx13, esi14, ebp15, __return_address()), !!eax16)) {
            _InterlockedDecrement_4(esi8, -1, v17, v18, ebx13, esi14, ebp15, __return_address());
        }
        edx19 = ___w32_sharedptr;
        ecx20 = __CRT_MT;
        *reinterpret_cast<void***>(a2 + 20) = *reinterpret_cast<void***>(edx19 + 12);
        *reinterpret_cast<void***>(edx19 + 12) = a2;
        ebx21 = edx19 + 20;
        if (!ecx20) 
            goto addr_401ac3_5;
        goto addr_401b00_7;
    } else {
        *reinterpret_cast<void***>(a2 + 20) = *reinterpret_cast<void***>(edx7 + 12);
        *reinterpret_cast<void***>(edx7 + 12) = a2;
        ebx21 = edx7 + 20;
        if (ecx6) {
            addr_401b00_7:
            eax24 = _InterlockedDecrement_4(ebx21, -1, v22, v23, ebx13, esi14, ebp15, __return_address());
            if (eax24 >= 0) {
                v25 = *reinterpret_cast<void***>(ebx21 + 4);
                _ReleaseSemaphore_12(v25, 1, 0);
                return;
            }
        } else {
            addr_401ac3_5:
            return;
        }
    }
}

struct s17 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

void** ___deregister_frame_info(void** a1) {
    int32_t v2;
    int32_t v3;
    int32_t ebp4;
    int32_t v5;
    int32_t edi6;
    int32_t v7;
    int32_t esi8;
    int32_t v9;
    int32_t ebx10;
    void** ebx11;
    int32_t eax12;
    void** esi13;
    void** edi14;
    void** v15;
    int32_t eax16;
    void** ebx17;
    struct s17* ecx18;
    void** v19;
    int32_t eax20;
    void** esi21;
    int32_t eax22;
    void** eax23;
    void** v24;
    int32_t eax25;
    void** v26;
    int32_t eax27;
    int1_t zf28;
    int32_t eax29;

    v2 = reinterpret_cast<int32_t>(__return_address());
    v3 = ebp4;
    v5 = edi6;
    v7 = esi8;
    v9 = ebx10;
    ebx11 = a1;
    if (!ebx11 || !*reinterpret_cast<void***>(ebx11)) {
        return 0;
    } else {
        _init_object_mutex_once();
        eax12 = __CRT_MT;
        esi13 = ___w32_sharedptr;
        edi14 = esi13 + 20;
        if (!eax12) 
            goto addr_401bf7_5;
        v15 = edi14;
        eax16 = _InterlockedIncrement_4(v15);
        if (eax16) 
            goto addr_401d14_7; else 
            goto addr_401c76_8;
    }
    addr_401cb1_9:
    ebx17 = ecx18->f0;
    ecx18->f0 = *reinterpret_cast<void***>(ecx18->f0 + 20);
    v19 = *reinterpret_cast<void***>(ebx17 + 12);
    _free(v19, -1, 0);
    esi13 = ___w32_sharedptr;
    addr_401c4d_10:
    eax20 = __CRT_MT;
    esi21 = esi13 + 20;
    if (!eax20 || (eax22 = _InterlockedDecrement_4(esi21, -1, 0, v9, v7, v5, v3, v2), eax22 < 0)) {
        eax23 = ebx17;
    } else {
        v24 = *reinterpret_cast<void***>(esi21 + 4);
        _ReleaseSemaphore_12(v24, 1, 0);
        eax23 = ebx17;
    }
    return eax23;
    addr_401c46_14:
    ebx17 = ecx18->f0;
    addr_401c48_15:
    ecx18->f0 = *reinterpret_cast<void***>(ebx17 + 20);
    goto addr_401c4d_10;
    addr_401ccb_16:
    ebx17 = ecx18->f0;
    goto addr_401c48_15;
    while (1) {
        v15 = ebx11;
        eax25 = _InterlockedDecrement_4(v15, -1, 0, v9, v7, v5, v3, v2);
        if (eax25 < 0) {
            addr_401cde_18:
            _abort(v15, -1, 0);
            continue;
        } else {
            v26 = *reinterpret_cast<void***>(ebx11 + 4);
            _ReleaseSemaphore_12(v26, 1, 0);
            _abort(v26, 1, 0);
            addr_401d14_7:
            v15 = *reinterpret_cast<void***>(edi14 + 4);
            eax27 = _WaitForSingleObject_8(v15, -1, 0, v9, v7, v5, v3, v2);
            if (eax27) 
                goto addr_401d33_20;
        }
        addr_401c76_8:
        esi13 = ___w32_sharedptr;
        addr_401bf7_5:
        ecx18 = reinterpret_cast<struct s17*>(esi13 + 12);
        if (*reinterpret_cast<void***>(esi13 + 12)) {
            do {
                if (*reinterpret_cast<void***>(ecx18->f0 + 12) == ebx11) 
                    goto addr_401ccb_16;
                ecx18 = reinterpret_cast<struct s17*>(ecx18->f0 + 20);
            } while (*reinterpret_cast<void***>(ecx18->f0 + 20));
        }
        zf28 = *reinterpret_cast<void***>(esi13 + 16) == 0;
        ecx18 = reinterpret_cast<struct s17*>(esi13 + 16);
        while (!zf28) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx18->f0 + 16)) & 1) {
                if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx18->f0 + 12)) == ebx11) 
                    goto addr_401cb1_9;
            } else {
                if (*reinterpret_cast<void***>(ecx18->f0 + 12) == ebx11) 
                    goto addr_401c46_14;
            }
            ecx18 = reinterpret_cast<struct s17*>(ecx18->f0 + 20);
            zf28 = *reinterpret_cast<void***>(ecx18->f0 + 20) == 0;
        }
        eax29 = __CRT_MT;
        ebx11 = esi13 + 20;
        if (eax29) 
            continue; else 
            goto addr_401cde_18;
        addr_401d33_20:
        v15 = edi14;
        _InterlockedDecrement_4(v15, -1, 0, v9, v7, v5, v3, v2);
        goto addr_401c76_8;
    }
}

int32_t strlen = 0x72fc;

uint32_t _strlen(void** a1, int32_t* a2, int32_t* a3) {
    goto strlen;
}

/* .text */
uint32_t text(void** a1, void*** a2) {
    void** v3;
    void** ebp4;
    uint32_t edx5;
    signed char al6;
    uint32_t eax7;
    uint32_t eax8;
    void** v9;
    void*** v10;

    v3 = ebp4;
    edx5 = 0;
    if (al6 != -1 && (eax7 = eax8 & 7, edx5 = 2, eax7 != 2)) {
        if (reinterpret_cast<int32_t>(eax7) <= reinterpret_cast<int32_t>(2)) {
            while (eax7) {
                addr_40166a_4:
                eax7 = _abort(v9, v10, v3);
            }
            edx5 = 4;
        } else {
            edx5 = 4;
            if (eax7 != 3) {
                if (eax7 != 4) 
                    goto addr_40166a_4;
                return 8;
            }
        }
    }
    return edx5;
}

struct s18 {
    signed char[16] pad16;
    unsigned char f10;
};

struct s19 {
    signed char[16] pad16;
    uint16_t f10;
};

struct s20 {
    signed char[4] pad4;
    void* f4;
};

struct s13* _linear_search_fdes(void** a1, void*** a2, void** a3) {
    void* ebp4;
    struct s13* esi5;
    struct s13* edx6;
    struct s18* v7;
    struct s18* eax8;
    uint32_t eax9;
    struct s19* eax10;
    int32_t v11;
    uint32_t eax12;
    uint32_t edi13;
    void** v14;
    void*** v15;
    void** v16;
    void** eax17;
    int1_t zf18;
    void** v19;
    int32_t eax20;
    void** v21;
    void*** v22;
    uint32_t eax23;
    void** eax24;
    void** eax25;
    uint32_t eax26;
    uint32_t eax27;
    uint32_t ecx28;
    void** edx29;
    void** v30;
    void* ecx31;
    void* v32;
    struct s20* eax33;
    struct s13* eax34;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esi5 = edx6;
    v7 = eax8;
    eax9 = eax10->f10;
    v11 = 0;
    eax12 = eax9 >> 3;
    edi13 = *reinterpret_cast<unsigned char*>(&eax12);
    eax17 = _base_from_object(v14, v15, v16);
    zf18 = esi5->f0 == 0;
    v19 = eax17;
    while (!zf18) {
        if (!esi5->f4) 
            goto addr_402304_4;
        if (v7->f10 & 4 && (eax20 = reinterpret_cast<int32_t>(esi5) - esi5->f4 + 4, eax20 != v11)) {
            v11 = eax20;
            eax23 = _get_cie_encoding(v21, v22, v19);
            edi13 = eax23;
            eax24 = _base_from_object(v21, v22, v19);
            v19 = eax24;
            esi5 = esi5;
        }
        if (!edi13) 
            goto addr_402354_8;
        eax25 = _read_encoded_value_with_base(&esi5->f8, reinterpret_cast<int32_t>(ebp4) - 16, v19);
        v21 = eax25;
        v22 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp4) - 20);
        _read_encoded_value_with_base(v21, v22, v19);
        eax26 = text(v21, v22);
        if (eax26 > 3) {
            eax27 = 0xffffffff;
        } else {
            ecx28 = eax26 * 8;
            eax27 = reinterpret_cast<uint32_t>((1 << *reinterpret_cast<unsigned char*>(&ecx28)) - 1);
        }
        edx29 = v30;
        if (!(eax27 & reinterpret_cast<unsigned char>(edx29))) 
            goto addr_402304_4;
        ecx31 = v32;
        goto addr_402364_14;
        addr_402354_8:
        edx29 = *reinterpret_cast<void***>(&esi5->f8);
        v30 = edx29;
        ecx31 = esi5->fc;
        v32 = ecx31;
        if (!edx29) {
            addr_402304_4:
            eax33 = reinterpret_cast<struct s20*>(reinterpret_cast<int32_t>(esi5->f0) + reinterpret_cast<int32_t>(esi5));
            esi5 = reinterpret_cast<struct s13*>(&eax33->f4);
            zf18 = eax33->f4 == 0;
        } else {
            addr_402364_14:
            if (reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(edx29) >= reinterpret_cast<uint32_t>(ecx31)) 
                goto addr_402304_4; else 
                goto addr_40236d_15;
        }
    }
    eax34 = reinterpret_cast<struct s13*>(0);
    addr_4023d2_17:
    return eax34;
    addr_40236d_15:
    eax34 = esi5;
    goto addr_4023d2_17;
}

int32_t _assert = 0x7268;

void __assert(int32_t a1, int32_t a2, int32_t a3) {
    goto _assert;
}

int32_t GetAtomNameA = 0x7190;

/* _GetAtomNameA@12 */
int32_t _GetAtomNameA_12(uint32_t a1, void* a2, int32_t a3) {
    goto GetAtomNameA;
}

/* _SetUnhandledExceptionFilter@4 */
void _SetUnhandledExceptionFilter_4(int32_t a1);

/* .text */
int32_t text(uint32_t** a1);

int32_t __CRT_glob = -1;

void ___getmainargs(int32_t a1, int32_t a2, void* a3, int32_t a4, void* a5);

int32_t __CRT_fmode;

int32_t __fmode = 0x4000;

int32_t __p__environ = 0x7234;

int32_t __argv;

int32_t __argc;

int32_t _cexit = 0x7274;

struct s21 {
    signed char[16] pad16;
    int32_t f10;
    signed char[28] pad48;
    int32_t f30;
    signed char[28] pad80;
    int32_t f50;
};

struct s21* _iob = reinterpret_cast<struct s21*>(0x7280);

int32_t _setmode = 0x7294;

void ___mingw_CRTStartup(int32_t ecx, int32_t a2) {
    void* ebp3;
    int32_t v4;
    int32_t eax5;
    int32_t eax6;
    int32_t v7;
    int32_t v8;
    int32_t* eax9;
    int32_t edx10;
    int32_t** eax11;
    int32_t* v12;
    int32_t eax13;
    int32_t eax14;
    int32_t eax15;
    struct s21* eax16;
    struct s21* edx17;
    int32_t eax18;
    struct s21* eax19;
    int32_t eax20;
    struct s21* eax21;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    _SetUnhandledExceptionFilter_4(text);
    text(text, v4);
    eax5 = __CRT_glob;
    ___getmainargs(0x406004, 0x406000, reinterpret_cast<int32_t>(ebp3) - 12, eax5, reinterpret_cast<int32_t>(ebp3) - 8);
    eax6 = __CRT_fmode;
    if (!eax6) {
        while (1) {
            eax9 = ___p__fmode(v7, v8);
            edx10 = __fmode;
            *eax9 = edx10;
            text(v7, v8);
            eax11 = reinterpret_cast<int32_t**>(__p__environ(0x401202, v7, v8));
            v12 = *eax11;
            eax13 = __argv;
            eax14 = __argc;
            eax15 = _main(ecx, eax14, eax13, v12);
            _cexit(eax14, eax13, v12);
            eax6 = _ExitProcess_4(eax15, eax13, v12);
            addr_401237_3:
            v8 = eax6;
            eax16 = _iob;
            v7 = eax16->f10;
            _setmode(v7, v8);
            edx17 = _iob;
            addr_4011aa_4:
            if (edx17 != -32) {
                eax18 = __CRT_fmode;
                v8 = eax18;
                eax19 = _iob;
                v7 = eax19->f30;
                _setmode(v7, v8);
                edx17 = _iob;
            }
            if (edx17 == -64) 
                continue;
            eax20 = __CRT_fmode;
            v8 = eax20;
            eax21 = _iob;
            v7 = eax21->f50;
            _setmode(v7, v8);
        }
    } else {
        __fmode = eax6;
        edx17 = _iob;
        if (edx17) 
            goto addr_401237_3; else 
            goto addr_4011aa_4;
    }
}

int32_t CreateSemaphoreA = 0x7160;

/* _CreateSemaphoreA@16 */
int32_t _CreateSemaphoreA_16(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto CreateSemaphoreA;
}

void ___register_frame_info_table(void** a1, void** a2) {
    ___register_frame_info_table_bases(a1, a2, 0, 0);
    return;
}

void _frame_downheap(void*** a1, void** a2, void** a3) {
    void** edi4;
    int32_t v5;
    int32_t eax6;
    int32_t v7;
    int32_t edx8;
    void** ebx9;
    void*** esi10;
    void** v11;
    int32_t v12;
    void** v13;
    int32_t eax14;
    void** v15;
    void** v16;
    int32_t eax17;
    void** edx18;

    edi4 = a2;
    v5 = eax6;
    v7 = edx8;
    ebx9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi4) + reinterpret_cast<unsigned char>(edi4) + 1);
    if (reinterpret_cast<signed char>(ebx9) < reinterpret_cast<signed char>(a3)) {
        esi10 = a1;
        do {
            v11 = ebx9 + 1;
            if (reinterpret_cast<signed char>(v11) < reinterpret_cast<signed char>(a3) && (v12 = *reinterpret_cast<int32_t*>(esi10 + reinterpret_cast<unsigned char>(ebx9) * 4 + 4), v13 = esi10[reinterpret_cast<unsigned char>(ebx9) * 4], eax14 = reinterpret_cast<int32_t>(v7(v5, v13, v12)), eax14 < 0)) {
                ebx9 = v11;
            }
            v15 = esi10[reinterpret_cast<unsigned char>(ebx9) * 4];
            v16 = esi10[reinterpret_cast<unsigned char>(edi4) * 4];
            eax17 = reinterpret_cast<int32_t>(v7(v5, v16, v15));
        } while (eax17 < 0 && (edx18 = esi10[reinterpret_cast<unsigned char>(edi4) * 4], esi10[reinterpret_cast<unsigned char>(edi4) * 4] = esi10[reinterpret_cast<unsigned char>(ebx9) * 4], edi4 = ebx9, esi10[reinterpret_cast<unsigned char>(ebx9) * 4] = edx18, ebx9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<unsigned char>(ebx9) + 1), reinterpret_cast<signed char>(ebx9) < reinterpret_cast<signed char>(a3)));
    }
    return;
}

int32_t SetUnhandledExceptionFilter = 0x71e4;

/* _SetUnhandledExceptionFilter@4 */
void _SetUnhandledExceptionFilter_4(int32_t a1) {
    goto SetUnhandledExceptionFilter;
}

int32_t __getmainargs = 0x7224;

void ___getmainargs(int32_t a1, int32_t a2, void* a3, int32_t a4, void* a5) {
    goto __getmainargs;
}

void ___w32_sharedptr_initialize() {
    void* esp1;
    void* ebp2;
    void** ecx3;
    void* esi4;
    void* v5;
    uint16_t ax6;
    void** eax7;
    void** eax8;
    void** ebx9;
    void** eax10;
    void*** v11;
    void** v12;
    uint32_t eax13;
    void* ecx14;
    uint32_t* ecx15;
    void** edi16;
    void** eax17;
    int32_t ecx18;
    uint32_t ecx19;
    void** eax20;
    int32_t edx21;
    int32_t eax22;
    int32_t edx23;
    int32_t eax24;
    int32_t edx25;
    int32_t eax26;
    int32_t edx27;
    int32_t eax28;
    void* edx29;
    void* esi30;
    uint32_t eax31;
    uint32_t eax32;
    void* v33;
    uint16_t ax34;
    uint32_t edi35;
    void** eax36;
    uint32_t edx37;
    void*** v38;
    void** v39;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp2 = esp1;
    ecx3 = ___w32_sharedptr;
    if (ecx3) {
        return;
    }
    esi4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 88);
    v5 = esi4;
    ax6 = _FindAtomA_4(v5);
    eax7 = reinterpret_cast<void**>(static_cast<uint32_t>(ax6));
    if (eax7) {
        addr_402ddf_4:
        eax8 = ___w32_sharedptr_get(v5);
        ebx9 = eax8;
        goto addr_402de6_5;
    } else {
        eax10 = _malloc(64);
        ebx9 = eax10;
        if (!eax10) {
            eax13 = _abort(64, v11, v12);
            ecx14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 4 - 4 - 4 - 0xac - 4 + 4 + 4 - 4 - 4 + 4 - 4 + 4 - 4 + 8);
            while (eax13 >= 0x1000) {
                ecx14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx14) - 0x1000);
                eax13 = eax13 - 0x1000;
            }
            ecx15 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx14) - eax13);
            *ecx15 = *ecx15;
            goto 64;
        }
        edi16 = eax10;
        eax17 = eax7;
        ecx18 = 16;
        while (ecx18) {
            --ecx18;
            *reinterpret_cast<void***>(edi16) = eax17;
            edi16 = edi16 + 4;
            esi4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi4) + 4);
        }
        *reinterpret_cast<void***>(ebx9 + 4) = reinterpret_cast<void**>(_abort);
        ecx19 = 1;
        *reinterpret_cast<void***>(ebx9 + 8) = reinterpret_cast<void**>(text);
        eax20 = bss;
        *reinterpret_cast<void***>(ebx9) = reinterpret_cast<void**>(64);
        edx21 = g406074;
        *reinterpret_cast<void***>(ebx9 + 20) = eax20;
        eax22 = data;
        *reinterpret_cast<int32_t*>(ebx9 + 24) = edx21;
        edx23 = g404034;
        *reinterpret_cast<int32_t*>(ebx9 + 28) = eax22;
        eax24 = eh_globals_static_2;
        *reinterpret_cast<int32_t*>(ebx9 + 32) = edx23;
        edx25 = g406084;
        *reinterpret_cast<int32_t*>(ebx9 + 40) = eax24;
        eax26 = eh_globals_key_3;
        *reinterpret_cast<int32_t*>(ebx9 + 48) = -1;
        *reinterpret_cast<int32_t*>(ebx9 + 44) = edx25;
        *reinterpret_cast<int32_t*>(ebx9 + 52) = eax26;
        edx27 = g40403c;
        eax28 = eh_globals_once_4;
        *reinterpret_cast<int32_t*>(ebx9 + 60) = edx27;
        edx29 = reinterpret_cast<void*>(31);
        *reinterpret_cast<int32_t*>(ebx9 + 56) = eax28;
        esi30 = esi4;
        do {
            eax31 = reinterpret_cast<unsigned char>(ebx9) & ecx19;
            eax32 = eax31 - (eax31 + reinterpret_cast<uint1_t>(eax31 < eax31 + reinterpret_cast<uint1_t>(eax31 < 1)));
            ecx19 = ecx19 + ecx19;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp2) + reinterpret_cast<int32_t>(edx29) - 0x98) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax32) & 32) + 65);
            edx29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx29) - 1);
        } while (reinterpret_cast<int32_t>(edx29) >= 0);
        v33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 0x98);
        ax34 = _AddAtomA_4(v33);
        edi35 = ax34;
        if (!edi35) 
            goto addr_402dc3_18;
        eax36 = ___w32_sharedptr_get(v33);
        edx37 = edi35;
        if (eax36 == ebx9) 
            goto addr_402e11_20;
    }
    addr_402dc3_18:
    edx37 = 0;
    addr_402dc5_21:
    if (edx37) {
        addr_402de6_5:
        ___w32_sharedptr = ebx9;
        ___w32_sharedptr_terminate = reinterpret_cast<void***>(ebx9 + 4);
        ___w32_sharedptr_unexpected = reinterpret_cast<void***>(ebx9 + 8);
        return;
    } else {
        _free(ebx9, v38, v39);
        v5 = esi30;
        _FindAtomA_4(v5);
        goto addr_402ddf_4;
    }
    addr_402e11_20:
    goto addr_402dc5_21;
}

int32_t signal = 0x72e4;

/* .text */
int32_t text(uint32_t** a1) {
    int32_t ebx2;
    int32_t esi3;
    int32_t eax4;
    int1_t zf5;
    int32_t eax6;
    int32_t v7;
    int32_t eax8;

    ebx2 = 0;
    esi3 = 0;
    if (**a1 > 0xc0000091) {
        if (**a1 == 0xc0000094) {
            addr_40102a_3:
            eax4 = reinterpret_cast<int32_t>(signal(8, 0));
            if (eax4 == 1) {
                signal(8, 1);
                if (esi3) {
                    text(8, 1);
                }
            } else {
                if (!eax4) {
                    addr_401054_7:
                    return ebx2;
                } else {
                    eax4(8, 0);
                }
            }
        } else {
            if (**a1 > 0xc0000094) {
                zf5 = **a1 == 0xc0000096;
                goto addr_40108c_11;
            } else {
                if (**a1 != 0xc0000093) {
                    return 0;
                }
            }
        }
    } else {
        if (**a1 < 0xc000008d) {
            if (**a1 == 0xc0000005) {
                eax6 = reinterpret_cast<int32_t>(signal(11, 0));
                if (eax6 == 1) {
                    v7 = 11;
                    goto addr_401122_18;
                } else {
                    if (!eax6) 
                        goto addr_401054_7;
                    eax6(11, 0);
                }
            } else {
                zf5 = **a1 == 0xc000001d;
                goto addr_40108c_11;
            }
        } else {
            esi3 = 1;
            goto addr_40102a_3;
        }
    }
    addr_40104f_23:
    ebx2 = -1;
    goto addr_401054_7;
    addr_40108c_11:
    if (!zf5) 
        goto addr_401054_7;
    eax8 = reinterpret_cast<int32_t>(signal(4, 0));
    if (eax8 == 1) {
        v7 = 4;
    } else {
        if (!eax8) 
            goto addr_401054_7;
        eax8(4, 0);
        goto addr_40104f_23;
    }
    addr_401122_18:
    signal(v7, 1);
    goto addr_40104f_23;
}

void fun_403033() {
    int32_t* eax1;
    unsigned char* eax2;

    eax2 = reinterpret_cast<unsigned char*>(*eax1(__return_address()));
    *eax2 = reinterpret_cast<unsigned char>(*eax2 ^ *reinterpret_cast<unsigned char*>(&eax2));
    *eax2 = reinterpret_cast<unsigned char>(*eax2 + *reinterpret_cast<unsigned char*>(&eax2));
    *eax2 = reinterpret_cast<unsigned char>(*eax2 + *reinterpret_cast<unsigned char*>(&eax2));
}

void fun_40303f() {
    int32_t* eax1;

    goto *eax1;
}

void fun_4015b9() {
}

void fun_401613() {
}

void fun_40162e() {
}

void fun_4016d7() {
}

void fun_40177d() {
}

void fun_4017ad() {
}

void fun_4019ed() {
}

void fun_401aca() {
}

void fun_401b5c() {
}

void fun_401c1e() {
}

void fun_401d43() {
}

struct s22 {
    signed char[8] pad8;
    void** f8;
};

struct s23 {
    signed char[8] pad8;
    void** f8;
};

uint32_t fun_401e9c(int32_t a1, struct s22* a2, struct s23* a3) {
    void* ebp4;
    void** v5;
    void*** v6;
    void** v7;
    void** v8;
    void** v9;
    uint32_t edx10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    _base_from_object(v5, v6, v7);
    _read_encoded_value_with_base(&a2->f8, reinterpret_cast<int32_t>(ebp4) - 12, v8);
    _read_encoded_value_with_base(&a3->f8, reinterpret_cast<int32_t>(ebp4) - 16, v9);
    edx10 = 1;
    if (v11 <= v12) {
        edx10 = 1 - (1 + reinterpret_cast<uint1_t>(1 < 1 + reinterpret_cast<uint1_t>(v13 < v12)));
    }
    return edx10;
}

struct s24 {
    signed char[8] pad8;
    void** f8;
};

struct s25 {
    signed char[8] pad8;
    void** f8;
};

uint32_t fun_401f19(int32_t a1, struct s24* a2, struct s25* a3) {
    void* ebp4;
    void** v5;
    void*** v6;
    void** v7;
    void** v8;
    void*** v9;
    void** v10;
    void*** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    uint32_t edx16;
    uint32_t v17;
    uint32_t v18;
    uint32_t v19;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    _get_cie_encoding(v5, v6, v7);
    _base_from_object(v8, v9, v10);
    v11 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp4) - 16);
    _read_encoded_value_with_base(&a2->f8, v11, v12);
    _get_cie_encoding(&a2->f8, v11, v13);
    _base_from_object(&a2->f8, v11, v14);
    _read_encoded_value_with_base(&a3->f8, reinterpret_cast<int32_t>(ebp4) - 20, v15);
    edx16 = 1;
    if (v17 <= v18) {
        edx16 = 1 - (1 + reinterpret_cast<uint1_t>(1 < 1 + reinterpret_cast<uint1_t>(v19 < v18)));
    }
    return edx16;
}

void fun_401fae() {
}

void fun_402039() {
}

void fun_40207e() {
}

void fun_40265c() {
}

void fun_4027c9() {
}

struct s26 {
    signed char[8] pad8;
    void** f8;
};

struct s27 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s28 {
    signed char[12] pad12;
    struct s27* fc;
};

struct s30 {
    signed char[8] pad8;
    void** f8;
};

struct s29 {
    signed char[12] pad12;
    struct s30* fc;
};

void fun_40299c(void*** a1, void** a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    void** v8;
    void** esi9;
    void** esi10;
    struct s26* ebp11;
    struct s13* eax12;
    struct s13* edi13;
    void** ebx14;
    struct s13* eax15;
    struct s17* edx16;
    void** eax17;
    void** ecx18;
    int32_t eax19;
    void** ebx20;
    int32_t eax21;
    struct s27* edx22;
    struct s28* ebp23;
    void*** v24;
    struct s29* ebp25;
    int32_t ebp26;
    int32_t eax27;
    struct s13* edi28;

    v8 = reinterpret_cast<void**>(__return_address());
    esi9 = esi10;
    do {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi9)) <= reinterpret_cast<unsigned char>(ebp11->f8)) 
            break;
        esi9 = *reinterpret_cast<void***>(esi9 + 20);
    } while (esi9);
    goto addr_4029b2_5;
    eax12 = _search_object(v8);
    edi13 = eax12;
    if (!eax12) {
        ebx14 = ___w32_sharedptr;
    } else {
        ebx14 = ___w32_sharedptr;
        goto addr_402a0f_9;
    }
    do {
        addr_4029c0_10:
        esi9 = *reinterpret_cast<void***>(ebx14 + 12);
        if (!esi9) 
            break;
        *reinterpret_cast<void***>(ebx14 + 12) = *reinterpret_cast<void***>(esi9 + 20);
        eax15 = _search_object(v8);
        ebx14 = ___w32_sharedptr;
        edi13 = eax15;
        edx16 = reinterpret_cast<struct s17*>(ebx14 + 16);
        if (!*reinterpret_cast<void***>(ebx14 + 16)) {
            eax17 = edx16->f0;
            continue;
        } else {
            ecx18 = *reinterpret_cast<void***>(esi9);
            do {
                eax17 = edx16->f0;
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax17)) < reinterpret_cast<unsigned char>(ecx18)) 
                    goto addr_402a96_15;
                edx16 = reinterpret_cast<struct s17*>(eax17 + 20);
            } while (*reinterpret_cast<void***>(eax17 + 20));
        }
        *reinterpret_cast<void***>(esi9 + 20) = reinterpret_cast<void**>(0);
        edx16->f0 = esi9;
        if (!edi13) 
            goto addr_4029c0_10; else 
            break;
        addr_402a96_15:
        *reinterpret_cast<void***>(esi9 + 20) = eax17;
        edx16->f0 = esi9;
    } while (!edi13);
    goto addr_402aa3_18;
    addr_402a0f_9:
    eax19 = __CRT_MT;
    ebx20 = ebx14 + 20;
    if (eax19) {
        addr_402ab3_19:
        v8 = ebx20;
        eax21 = _InterlockedDecrement_4(v8, a1, a2, a3, a4, a5, a6, a7);
        if (eax21 >= 0) {
            a2 = reinterpret_cast<void**>(0);
            a1 = reinterpret_cast<void***>(1);
            v8 = *reinterpret_cast<void***>(ebx20 + 4);
            _ReleaseSemaphore_12(v8, 1, 0);
            goto addr_402a1f_21;
        }
    } else {
        addr_402a1f_21:
        if (edi13) {
            edx22 = ebp23->fc;
            edx22->f0 = *reinterpret_cast<void***>(esi9 + 4);
            edx22->f4 = *reinterpret_cast<void***>(esi9 + 8);
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi9 + 16)) & 4) {
                _get_cie_encoding(v8, a1, a2);
            }
            _base_from_object(v8, a1, a2);
            v24 = &ebp25->fc->f8;
            _read_encoded_value_with_base(&edi13->f8, v24, a2);
        }
    }
    goto *reinterpret_cast<int32_t*>(ebp26 - 12 + 4 + 4 + 4 + 4);
    addr_402aa3_18:
    eax27 = __CRT_MT;
    ebx20 = ebx14 + 20;
    if (!eax27) 
        goto addr_402a1f_21; else 
        goto addr_402ab3_19;
    addr_4029b2_5:
    edi13 = edi28;
    goto addr_4029c0_10;
}

/* .text */
void text() {
    void** eax1;

    eax1 = ___w32_sharedptr;
    goto *reinterpret_cast<void***>(eax1 + 4);
}

void fun_403041() {
    unsigned char* eax1;
    unsigned char* eax2;
    unsigned char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
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
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    signed char* eax25;
    signed char* eax26;
    signed char al27;
    signed char* eax28;
    signed char* eax29;
    signed char al30;
    signed char* eax31;
    signed char* eax32;
    signed char al33;
    signed char* eax34;
    signed char* eax35;
    signed char al36;
    signed char* eax37;
    signed char* eax38;
    signed char al39;
    signed char* eax40;
    signed char* eax41;
    signed char al42;
    signed char* eax43;
    signed char* eax44;
    signed char al45;
    signed char* eax46;
    signed char* eax47;
    signed char al48;
    signed char* eax49;
    signed char* eax50;
    signed char al51;
    signed char* eax52;
    signed char* eax53;
    signed char al54;
    signed char* eax55;
    signed char* eax56;
    signed char al57;
    signed char* eax58;
    signed char* eax59;
    signed char al60;
    signed char* eax61;
    signed char* eax62;
    signed char al63;
    signed char* eax64;
    signed char* eax65;
    signed char al66;
    signed char* eax67;
    signed char* eax68;
    signed char al69;
    signed char* eax70;
    signed char* eax71;
    signed char al72;
    signed char* eax73;
    signed char* eax74;
    signed char al75;
    signed char* eax76;
    signed char* eax77;
    signed char al78;
    signed char* eax79;
    signed char* eax80;
    signed char al81;
    signed char* eax82;
    signed char* eax83;
    signed char al84;
    signed char* eax85;
    signed char* eax86;
    signed char al87;
    signed char* eax88;
    signed char* eax89;
    signed char al90;
    signed char* eax91;
    signed char* eax92;
    signed char al93;
    signed char* eax94;
    signed char* eax95;
    signed char al96;
    signed char* eax97;
    signed char* eax98;
    signed char al99;
    signed char* eax100;
    signed char* eax101;
    signed char al102;
    signed char* eax103;
    signed char* eax104;
    signed char al105;
    signed char* eax106;
    signed char* eax107;
    signed char al108;
    signed char* eax109;
    signed char* eax110;
    signed char al111;
    signed char* eax112;
    signed char* eax113;
    signed char al114;
    signed char* eax115;
    signed char* eax116;
    signed char al117;
    signed char* eax118;
    signed char* eax119;
    signed char al120;
    signed char* eax121;
    signed char* eax122;
    signed char al123;
    signed char* eax124;
    signed char* eax125;
    signed char al126;
    signed char* eax127;
    signed char* eax128;
    signed char al129;
    signed char* eax130;
    signed char* eax131;
    signed char al132;
    signed char* eax133;
    signed char* eax134;
    signed char al135;
    signed char* eax136;
    signed char* eax137;
    signed char al138;
    signed char* eax139;
    signed char* eax140;
    signed char al141;
    signed char* eax142;
    signed char* eax143;
    signed char al144;
    signed char* eax145;
    signed char* eax146;
    signed char al147;
    signed char* eax148;
    signed char* eax149;
    signed char al150;
    signed char* eax151;
    signed char* eax152;
    signed char al153;
    signed char* eax154;
    signed char* eax155;
    signed char al156;
    signed char* eax157;
    signed char* eax158;
    signed char al159;
    signed char* eax160;
    signed char* eax161;
    signed char al162;
    signed char* eax163;
    signed char* eax164;
    signed char al165;
    signed char* eax166;
    signed char* eax167;
    signed char al168;
    signed char* eax169;
    signed char* eax170;
    signed char al171;
    signed char* eax172;
    signed char* eax173;
    signed char al174;
    signed char* eax175;
    signed char* eax176;
    signed char al177;
    signed char* eax178;
    signed char* eax179;
    signed char al180;
    signed char* eax181;
    signed char* eax182;
    signed char al183;
    signed char* eax184;
    signed char* eax185;
    signed char al186;
    signed char* eax187;
    signed char* eax188;
    signed char al189;
    signed char* eax190;
    signed char* eax191;
    signed char al192;
    signed char* eax193;
    signed char* eax194;
    signed char al195;
    signed char* eax196;
    signed char* eax197;
    signed char al198;
    signed char* eax199;
    signed char* eax200;
    signed char al201;
    signed char* eax202;
    signed char* eax203;
    signed char al204;
    signed char* eax205;
    signed char* eax206;
    signed char al207;
    signed char* eax208;
    signed char* eax209;
    signed char al210;
    signed char* eax211;
    signed char* eax212;
    signed char al213;
    signed char* eax214;
    signed char* eax215;
    signed char al216;
    signed char* eax217;
    signed char* eax218;
    signed char al219;
    signed char* eax220;
    signed char* eax221;
    signed char al222;
    signed char* eax223;
    signed char* eax224;
    signed char al225;
    signed char* eax226;
    signed char* eax227;
    signed char al228;
    signed char* eax229;
    signed char* eax230;
    signed char al231;
    signed char* eax232;
    signed char* eax233;
    signed char al234;
    signed char* eax235;
    signed char* eax236;
    signed char al237;
    signed char* eax238;
    signed char* eax239;
    signed char al240;
    signed char* eax241;
    signed char* eax242;
    signed char al243;
    signed char* eax244;
    signed char* eax245;
    signed char al246;
    signed char* eax247;
    signed char* eax248;
    signed char al249;
    signed char* eax250;
    signed char* eax251;
    signed char al252;
    signed char* eax253;
    signed char* eax254;
    signed char al255;
    signed char* eax256;
    signed char* eax257;
    signed char al258;
    signed char* eax259;
    signed char* eax260;
    signed char al261;
    signed char* eax262;
    signed char* eax263;
    signed char al264;
    signed char* eax265;
    signed char* eax266;
    signed char al267;
    signed char* eax268;
    signed char* eax269;
    signed char al270;
    signed char* eax271;
    signed char* eax272;
    signed char al273;
    signed char* eax274;
    signed char* eax275;
    signed char al276;
    signed char* eax277;
    signed char* eax278;
    signed char al279;
    signed char* eax280;
    signed char* eax281;
    signed char al282;
    signed char* eax283;
    signed char* eax284;
    signed char al285;
    signed char* eax286;
    signed char* eax287;
    signed char al288;
    signed char* eax289;
    signed char* eax290;
    signed char al291;
    signed char* eax292;
    signed char* eax293;
    signed char al294;
    signed char* eax295;
    signed char* eax296;
    signed char al297;
    signed char* eax298;
    signed char* eax299;
    signed char al300;
    signed char* eax301;
    signed char* eax302;
    signed char al303;
    signed char* eax304;
    signed char* eax305;
    signed char al306;
    signed char* eax307;
    signed char* eax308;
    signed char al309;
    signed char* eax310;
    signed char* eax311;
    signed char al312;
    signed char* eax313;
    signed char* eax314;
    signed char al315;
    signed char* eax316;
    signed char* eax317;
    signed char al318;
    signed char* eax319;
    signed char* eax320;
    signed char al321;
    signed char* eax322;
    signed char* eax323;
    signed char al324;
    signed char* eax325;
    signed char* eax326;
    signed char al327;
    signed char* eax328;
    signed char* eax329;
    signed char al330;
    signed char* eax331;
    signed char* eax332;
    signed char al333;
    signed char* eax334;
    signed char* eax335;
    signed char al336;
    signed char* eax337;
    signed char* eax338;
    signed char al339;
    signed char* eax340;
    signed char* eax341;
    signed char al342;
    signed char* eax343;
    signed char* eax344;
    signed char al345;
    signed char* eax346;
    signed char* eax347;
    signed char al348;
    signed char* eax349;
    signed char* eax350;
    signed char al351;
    signed char* eax352;
    signed char* eax353;
    signed char al354;
    signed char* eax355;
    signed char* eax356;
    signed char al357;
    signed char* eax358;
    signed char* eax359;
    signed char al360;
    signed char* eax361;
    signed char* eax362;
    signed char al363;
    signed char* eax364;
    signed char* eax365;
    signed char al366;
    signed char* eax367;
    signed char* eax368;
    signed char al369;
    signed char* eax370;
    signed char* eax371;
    signed char al372;
    signed char* eax373;
    signed char* eax374;
    signed char al375;
    signed char* eax376;
    signed char* eax377;
    signed char al378;
    signed char* eax379;
    signed char* eax380;
    signed char al381;
    signed char* eax382;
    signed char* eax383;
    signed char al384;
    signed char* eax385;
    signed char* eax386;
    signed char al387;
    signed char* eax388;
    signed char* eax389;
    signed char al390;
    signed char* eax391;
    signed char* eax392;
    signed char al393;
    signed char* eax394;
    signed char* eax395;
    signed char al396;
    signed char* eax397;
    signed char* eax398;
    signed char al399;
    signed char* eax400;
    signed char* eax401;
    signed char al402;
    signed char* eax403;
    signed char* eax404;
    signed char al405;
    signed char* eax406;
    signed char* eax407;
    signed char al408;
    signed char* eax409;
    signed char* eax410;
    signed char al411;
    signed char* eax412;
    signed char* eax413;
    signed char al414;
    signed char* eax415;
    signed char* eax416;
    signed char al417;
    signed char* eax418;
    signed char* eax419;
    signed char al420;
    signed char* eax421;
    signed char* eax422;
    signed char al423;
    signed char* eax424;
    signed char* eax425;
    signed char al426;
    signed char* eax427;
    signed char* eax428;
    signed char al429;
    signed char* eax430;
    signed char* eax431;
    signed char al432;
    signed char* eax433;
    signed char* eax434;
    signed char al435;
    signed char* eax436;
    signed char* eax437;
    signed char al438;
    signed char* eax439;
    signed char* eax440;
    signed char al441;
    signed char* eax442;
    signed char* eax443;
    signed char al444;
    signed char* eax445;
    signed char* eax446;
    signed char al447;
    signed char* eax448;
    signed char* eax449;
    signed char al450;
    signed char* eax451;
    signed char* eax452;
    signed char al453;
    signed char* eax454;
    signed char* eax455;
    signed char al456;
    signed char* eax457;
    signed char* eax458;
    signed char al459;
    signed char* eax460;
    signed char* eax461;
    signed char al462;
    signed char* eax463;
    signed char* eax464;
    signed char al465;
    signed char* eax466;
    signed char* eax467;
    signed char al468;
    signed char* eax469;
    signed char* eax470;
    signed char al471;
    signed char* eax472;
    signed char* eax473;
    signed char al474;
    signed char* eax475;
    signed char* eax476;
    signed char al477;
    signed char* eax478;
    signed char* eax479;
    signed char al480;
    signed char* eax481;
    signed char* eax482;
    signed char al483;
    signed char* eax484;
    signed char* eax485;
    signed char al486;
    signed char* eax487;
    signed char* eax488;
    signed char al489;
    signed char* eax490;
    signed char* eax491;
    signed char al492;
    signed char* eax493;
    signed char* eax494;
    signed char al495;
    signed char* eax496;
    signed char* eax497;
    signed char al498;
    signed char* eax499;
    signed char* eax500;
    signed char al501;
    signed char* eax502;
    signed char* eax503;
    signed char al504;
    signed char* eax505;
    signed char* eax506;
    signed char al507;
    signed char* eax508;
    signed char* eax509;
    signed char al510;
    signed char* eax511;
    signed char* eax512;
    signed char al513;
    signed char* eax514;
    signed char* eax515;
    signed char al516;
    signed char* eax517;
    signed char* eax518;
    signed char al519;
    signed char* eax520;
    signed char* eax521;
    signed char al522;
    signed char* eax523;
    signed char* eax524;
    signed char al525;
    signed char* eax526;
    signed char* eax527;
    signed char al528;
    signed char* eax529;
    signed char* eax530;
    signed char al531;
    signed char* eax532;
    signed char* eax533;
    signed char al534;
    signed char* eax535;
    signed char* eax536;
    signed char al537;
    signed char* eax538;
    signed char* eax539;
    signed char al540;
    signed char* eax541;
    signed char* eax542;
    signed char al543;
    signed char* eax544;
    signed char* eax545;
    signed char al546;
    signed char* eax547;
    signed char* eax548;
    signed char al549;
    signed char* eax550;
    signed char* eax551;
    signed char al552;
    signed char* eax553;
    signed char* eax554;
    signed char al555;
    signed char* eax556;
    signed char* eax557;
    signed char al558;
    signed char* eax559;
    signed char* eax560;
    signed char al561;
    signed char* eax562;
    signed char* eax563;
    signed char al564;
    signed char* eax565;
    signed char* eax566;
    signed char al567;
    signed char* eax568;
    signed char* eax569;
    signed char al570;
    signed char* eax571;
    signed char* eax572;
    signed char al573;
    signed char* eax574;
    signed char* eax575;
    signed char al576;
    signed char* eax577;
    signed char* eax578;
    signed char al579;
    signed char* eax580;
    signed char* eax581;
    signed char al582;
    signed char* eax583;
    signed char* eax584;
    signed char al585;
    signed char* eax586;
    signed char* eax587;
    signed char al588;
    signed char* eax589;
    signed char* eax590;
    signed char al591;
    signed char* eax592;
    signed char* eax593;
    signed char al594;
    signed char* eax595;
    signed char* eax596;
    signed char al597;
    signed char* eax598;
    signed char* eax599;
    signed char al600;
    signed char* eax601;
    signed char* eax602;
    signed char al603;
    signed char* eax604;
    signed char* eax605;
    signed char al606;
    signed char* eax607;
    signed char* eax608;
    signed char al609;
    signed char* eax610;
    signed char* eax611;
    signed char al612;
    signed char* eax613;
    signed char* eax614;
    signed char al615;
    signed char* eax616;
    signed char* eax617;
    signed char al618;
    signed char* eax619;
    signed char* eax620;
    signed char al621;
    signed char* eax622;
    signed char* eax623;
    signed char al624;
    signed char* eax625;
    signed char* eax626;
    signed char al627;
    signed char* eax628;
    signed char* eax629;
    signed char al630;
    signed char* eax631;
    signed char* eax632;
    signed char al633;
    signed char* eax634;
    signed char* eax635;
    signed char al636;
    signed char* eax637;
    signed char* eax638;
    signed char al639;
    signed char* eax640;
    signed char* eax641;
    signed char al642;
    signed char* eax643;
    signed char* eax644;
    signed char al645;
    signed char* eax646;
    signed char* eax647;
    signed char al648;
    signed char* eax649;
    signed char* eax650;
    signed char al651;
    signed char* eax652;
    signed char* eax653;
    signed char al654;
    signed char* eax655;
    signed char* eax656;
    signed char al657;
    signed char* eax658;
    signed char* eax659;
    signed char al660;
    signed char* eax661;
    signed char* eax662;
    signed char al663;
    signed char* eax664;
    signed char* eax665;
    signed char al666;
    signed char* eax667;
    signed char* eax668;
    signed char al669;

    *eax1 = reinterpret_cast<unsigned char>(*eax2 ^ al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
    *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
    *eax28 = reinterpret_cast<signed char>(*eax29 + al30);
    *eax31 = reinterpret_cast<signed char>(*eax32 + al33);
    *eax34 = reinterpret_cast<signed char>(*eax35 + al36);
    *eax37 = reinterpret_cast<signed char>(*eax38 + al39);
    *eax40 = reinterpret_cast<signed char>(*eax41 + al42);
    *eax43 = reinterpret_cast<signed char>(*eax44 + al45);
    *eax46 = reinterpret_cast<signed char>(*eax47 + al48);
    *eax49 = reinterpret_cast<signed char>(*eax50 + al51);
    *eax52 = reinterpret_cast<signed char>(*eax53 + al54);
    *eax55 = reinterpret_cast<signed char>(*eax56 + al57);
    *eax58 = reinterpret_cast<signed char>(*eax59 + al60);
    *eax61 = reinterpret_cast<signed char>(*eax62 + al63);
    *eax64 = reinterpret_cast<signed char>(*eax65 + al66);
    *eax67 = reinterpret_cast<signed char>(*eax68 + al69);
    *eax70 = reinterpret_cast<signed char>(*eax71 + al72);
    *eax73 = reinterpret_cast<signed char>(*eax74 + al75);
    *eax76 = reinterpret_cast<signed char>(*eax77 + al78);
    *eax79 = reinterpret_cast<signed char>(*eax80 + al81);
    *eax82 = reinterpret_cast<signed char>(*eax83 + al84);
    *eax85 = reinterpret_cast<signed char>(*eax86 + al87);
    *eax88 = reinterpret_cast<signed char>(*eax89 + al90);
    *eax91 = reinterpret_cast<signed char>(*eax92 + al93);
    *eax94 = reinterpret_cast<signed char>(*eax95 + al96);
    *eax97 = reinterpret_cast<signed char>(*eax98 + al99);
    *eax100 = reinterpret_cast<signed char>(*eax101 + al102);
    *eax103 = reinterpret_cast<signed char>(*eax104 + al105);
    *eax106 = reinterpret_cast<signed char>(*eax107 + al108);
    *eax109 = reinterpret_cast<signed char>(*eax110 + al111);
    *eax112 = reinterpret_cast<signed char>(*eax113 + al114);
    *eax115 = reinterpret_cast<signed char>(*eax116 + al117);
    *eax118 = reinterpret_cast<signed char>(*eax119 + al120);
    *eax121 = reinterpret_cast<signed char>(*eax122 + al123);
    *eax124 = reinterpret_cast<signed char>(*eax125 + al126);
    *eax127 = reinterpret_cast<signed char>(*eax128 + al129);
    *eax130 = reinterpret_cast<signed char>(*eax131 + al132);
    *eax133 = reinterpret_cast<signed char>(*eax134 + al135);
    *eax136 = reinterpret_cast<signed char>(*eax137 + al138);
    *eax139 = reinterpret_cast<signed char>(*eax140 + al141);
    *eax142 = reinterpret_cast<signed char>(*eax143 + al144);
    *eax145 = reinterpret_cast<signed char>(*eax146 + al147);
    *eax148 = reinterpret_cast<signed char>(*eax149 + al150);
    *eax151 = reinterpret_cast<signed char>(*eax152 + al153);
    *eax154 = reinterpret_cast<signed char>(*eax155 + al156);
    *eax157 = reinterpret_cast<signed char>(*eax158 + al159);
    *eax160 = reinterpret_cast<signed char>(*eax161 + al162);
    *eax163 = reinterpret_cast<signed char>(*eax164 + al165);
    *eax166 = reinterpret_cast<signed char>(*eax167 + al168);
    *eax169 = reinterpret_cast<signed char>(*eax170 + al171);
    *eax172 = reinterpret_cast<signed char>(*eax173 + al174);
    *eax175 = reinterpret_cast<signed char>(*eax176 + al177);
    *eax178 = reinterpret_cast<signed char>(*eax179 + al180);
    *eax181 = reinterpret_cast<signed char>(*eax182 + al183);
    *eax184 = reinterpret_cast<signed char>(*eax185 + al186);
    *eax187 = reinterpret_cast<signed char>(*eax188 + al189);
    *eax190 = reinterpret_cast<signed char>(*eax191 + al192);
    *eax193 = reinterpret_cast<signed char>(*eax194 + al195);
    *eax196 = reinterpret_cast<signed char>(*eax197 + al198);
    *eax199 = reinterpret_cast<signed char>(*eax200 + al201);
    *eax202 = reinterpret_cast<signed char>(*eax203 + al204);
    *eax205 = reinterpret_cast<signed char>(*eax206 + al207);
    *eax208 = reinterpret_cast<signed char>(*eax209 + al210);
    *eax211 = reinterpret_cast<signed char>(*eax212 + al213);
    *eax214 = reinterpret_cast<signed char>(*eax215 + al216);
    *eax217 = reinterpret_cast<signed char>(*eax218 + al219);
    *eax220 = reinterpret_cast<signed char>(*eax221 + al222);
    *eax223 = reinterpret_cast<signed char>(*eax224 + al225);
    *eax226 = reinterpret_cast<signed char>(*eax227 + al228);
    *eax229 = reinterpret_cast<signed char>(*eax230 + al231);
    *eax232 = reinterpret_cast<signed char>(*eax233 + al234);
    *eax235 = reinterpret_cast<signed char>(*eax236 + al237);
    *eax238 = reinterpret_cast<signed char>(*eax239 + al240);
    *eax241 = reinterpret_cast<signed char>(*eax242 + al243);
    *eax244 = reinterpret_cast<signed char>(*eax245 + al246);
    *eax247 = reinterpret_cast<signed char>(*eax248 + al249);
    *eax250 = reinterpret_cast<signed char>(*eax251 + al252);
    *eax253 = reinterpret_cast<signed char>(*eax254 + al255);
    *eax256 = reinterpret_cast<signed char>(*eax257 + al258);
    *eax259 = reinterpret_cast<signed char>(*eax260 + al261);
    *eax262 = reinterpret_cast<signed char>(*eax263 + al264);
    *eax265 = reinterpret_cast<signed char>(*eax266 + al267);
    *eax268 = reinterpret_cast<signed char>(*eax269 + al270);
    *eax271 = reinterpret_cast<signed char>(*eax272 + al273);
    *eax274 = reinterpret_cast<signed char>(*eax275 + al276);
    *eax277 = reinterpret_cast<signed char>(*eax278 + al279);
    *eax280 = reinterpret_cast<signed char>(*eax281 + al282);
    *eax283 = reinterpret_cast<signed char>(*eax284 + al285);
    *eax286 = reinterpret_cast<signed char>(*eax287 + al288);
    *eax289 = reinterpret_cast<signed char>(*eax290 + al291);
    *eax292 = reinterpret_cast<signed char>(*eax293 + al294);
    *eax295 = reinterpret_cast<signed char>(*eax296 + al297);
    *eax298 = reinterpret_cast<signed char>(*eax299 + al300);
    *eax301 = reinterpret_cast<signed char>(*eax302 + al303);
    *eax304 = reinterpret_cast<signed char>(*eax305 + al306);
    *eax307 = reinterpret_cast<signed char>(*eax308 + al309);
    *eax310 = reinterpret_cast<signed char>(*eax311 + al312);
    *eax313 = reinterpret_cast<signed char>(*eax314 + al315);
    *eax316 = reinterpret_cast<signed char>(*eax317 + al318);
    *eax319 = reinterpret_cast<signed char>(*eax320 + al321);
    *eax322 = reinterpret_cast<signed char>(*eax323 + al324);
    *eax325 = reinterpret_cast<signed char>(*eax326 + al327);
    *eax328 = reinterpret_cast<signed char>(*eax329 + al330);
    *eax331 = reinterpret_cast<signed char>(*eax332 + al333);
    *eax334 = reinterpret_cast<signed char>(*eax335 + al336);
    *eax337 = reinterpret_cast<signed char>(*eax338 + al339);
    *eax340 = reinterpret_cast<signed char>(*eax341 + al342);
    *eax343 = reinterpret_cast<signed char>(*eax344 + al345);
    *eax346 = reinterpret_cast<signed char>(*eax347 + al348);
    *eax349 = reinterpret_cast<signed char>(*eax350 + al351);
    *eax352 = reinterpret_cast<signed char>(*eax353 + al354);
    *eax355 = reinterpret_cast<signed char>(*eax356 + al357);
    *eax358 = reinterpret_cast<signed char>(*eax359 + al360);
    *eax361 = reinterpret_cast<signed char>(*eax362 + al363);
    *eax364 = reinterpret_cast<signed char>(*eax365 + al366);
    *eax367 = reinterpret_cast<signed char>(*eax368 + al369);
    *eax370 = reinterpret_cast<signed char>(*eax371 + al372);
    *eax373 = reinterpret_cast<signed char>(*eax374 + al375);
    *eax376 = reinterpret_cast<signed char>(*eax377 + al378);
    *eax379 = reinterpret_cast<signed char>(*eax380 + al381);
    *eax382 = reinterpret_cast<signed char>(*eax383 + al384);
    *eax385 = reinterpret_cast<signed char>(*eax386 + al387);
    *eax388 = reinterpret_cast<signed char>(*eax389 + al390);
    *eax391 = reinterpret_cast<signed char>(*eax392 + al393);
    *eax394 = reinterpret_cast<signed char>(*eax395 + al396);
    *eax397 = reinterpret_cast<signed char>(*eax398 + al399);
    *eax400 = reinterpret_cast<signed char>(*eax401 + al402);
    *eax403 = reinterpret_cast<signed char>(*eax404 + al405);
    *eax406 = reinterpret_cast<signed char>(*eax407 + al408);
    *eax409 = reinterpret_cast<signed char>(*eax410 + al411);
    *eax412 = reinterpret_cast<signed char>(*eax413 + al414);
    *eax415 = reinterpret_cast<signed char>(*eax416 + al417);
    *eax418 = reinterpret_cast<signed char>(*eax419 + al420);
    *eax421 = reinterpret_cast<signed char>(*eax422 + al423);
    *eax424 = reinterpret_cast<signed char>(*eax425 + al426);
    *eax427 = reinterpret_cast<signed char>(*eax428 + al429);
    *eax430 = reinterpret_cast<signed char>(*eax431 + al432);
    *eax433 = reinterpret_cast<signed char>(*eax434 + al435);
    *eax436 = reinterpret_cast<signed char>(*eax437 + al438);
    *eax439 = reinterpret_cast<signed char>(*eax440 + al441);
    *eax442 = reinterpret_cast<signed char>(*eax443 + al444);
    *eax445 = reinterpret_cast<signed char>(*eax446 + al447);
    *eax448 = reinterpret_cast<signed char>(*eax449 + al450);
    *eax451 = reinterpret_cast<signed char>(*eax452 + al453);
    *eax454 = reinterpret_cast<signed char>(*eax455 + al456);
    *eax457 = reinterpret_cast<signed char>(*eax458 + al459);
    *eax460 = reinterpret_cast<signed char>(*eax461 + al462);
    *eax463 = reinterpret_cast<signed char>(*eax464 + al465);
    *eax466 = reinterpret_cast<signed char>(*eax467 + al468);
    *eax469 = reinterpret_cast<signed char>(*eax470 + al471);
    *eax472 = reinterpret_cast<signed char>(*eax473 + al474);
    *eax475 = reinterpret_cast<signed char>(*eax476 + al477);
    *eax478 = reinterpret_cast<signed char>(*eax479 + al480);
    *eax481 = reinterpret_cast<signed char>(*eax482 + al483);
    *eax484 = reinterpret_cast<signed char>(*eax485 + al486);
    *eax487 = reinterpret_cast<signed char>(*eax488 + al489);
    *eax490 = reinterpret_cast<signed char>(*eax491 + al492);
    *eax493 = reinterpret_cast<signed char>(*eax494 + al495);
    *eax496 = reinterpret_cast<signed char>(*eax497 + al498);
    *eax499 = reinterpret_cast<signed char>(*eax500 + al501);
    *eax502 = reinterpret_cast<signed char>(*eax503 + al504);
    *eax505 = reinterpret_cast<signed char>(*eax506 + al507);
    *eax508 = reinterpret_cast<signed char>(*eax509 + al510);
    *eax511 = reinterpret_cast<signed char>(*eax512 + al513);
    *eax514 = reinterpret_cast<signed char>(*eax515 + al516);
    *eax517 = reinterpret_cast<signed char>(*eax518 + al519);
    *eax520 = reinterpret_cast<signed char>(*eax521 + al522);
    *eax523 = reinterpret_cast<signed char>(*eax524 + al525);
    *eax526 = reinterpret_cast<signed char>(*eax527 + al528);
    *eax529 = reinterpret_cast<signed char>(*eax530 + al531);
    *eax532 = reinterpret_cast<signed char>(*eax533 + al534);
    *eax535 = reinterpret_cast<signed char>(*eax536 + al537);
    *eax538 = reinterpret_cast<signed char>(*eax539 + al540);
    *eax541 = reinterpret_cast<signed char>(*eax542 + al543);
    *eax544 = reinterpret_cast<signed char>(*eax545 + al546);
    *eax547 = reinterpret_cast<signed char>(*eax548 + al549);
    *eax550 = reinterpret_cast<signed char>(*eax551 + al552);
    *eax553 = reinterpret_cast<signed char>(*eax554 + al555);
    *eax556 = reinterpret_cast<signed char>(*eax557 + al558);
    *eax559 = reinterpret_cast<signed char>(*eax560 + al561);
    *eax562 = reinterpret_cast<signed char>(*eax563 + al564);
    *eax565 = reinterpret_cast<signed char>(*eax566 + al567);
    *eax568 = reinterpret_cast<signed char>(*eax569 + al570);
    *eax571 = reinterpret_cast<signed char>(*eax572 + al573);
    *eax574 = reinterpret_cast<signed char>(*eax575 + al576);
    *eax577 = reinterpret_cast<signed char>(*eax578 + al579);
    *eax580 = reinterpret_cast<signed char>(*eax581 + al582);
    *eax583 = reinterpret_cast<signed char>(*eax584 + al585);
    *eax586 = reinterpret_cast<signed char>(*eax587 + al588);
    *eax589 = reinterpret_cast<signed char>(*eax590 + al591);
    *eax592 = reinterpret_cast<signed char>(*eax593 + al594);
    *eax595 = reinterpret_cast<signed char>(*eax596 + al597);
    *eax598 = reinterpret_cast<signed char>(*eax599 + al600);
    *eax601 = reinterpret_cast<signed char>(*eax602 + al603);
    *eax604 = reinterpret_cast<signed char>(*eax605 + al606);
    *eax607 = reinterpret_cast<signed char>(*eax608 + al609);
    *eax610 = reinterpret_cast<signed char>(*eax611 + al612);
    *eax613 = reinterpret_cast<signed char>(*eax614 + al615);
    *eax616 = reinterpret_cast<signed char>(*eax617 + al618);
    *eax619 = reinterpret_cast<signed char>(*eax620 + al621);
    *eax622 = reinterpret_cast<signed char>(*eax623 + al624);
    *eax625 = reinterpret_cast<signed char>(*eax626 + al627);
    *eax628 = reinterpret_cast<signed char>(*eax629 + al630);
    *eax631 = reinterpret_cast<signed char>(*eax632 + al633);
    *eax634 = reinterpret_cast<signed char>(*eax635 + al636);
    *eax637 = reinterpret_cast<signed char>(*eax638 + al639);
    *eax640 = reinterpret_cast<signed char>(*eax641 + al642);
    *eax643 = reinterpret_cast<signed char>(*eax644 + al645);
    *eax646 = reinterpret_cast<signed char>(*eax647 + al648);
    *eax649 = reinterpret_cast<signed char>(*eax650 + al651);
    *eax652 = reinterpret_cast<signed char>(*eax653 + al654);
    *eax655 = reinterpret_cast<signed char>(*eax656 + al657);
    *eax658 = reinterpret_cast<signed char>(*eax659 + al660);
    *eax661 = reinterpret_cast<signed char>(*eax662 + al663);
    *eax664 = reinterpret_cast<signed char>(*eax665 + al666);
    *eax667 = reinterpret_cast<signed char>(*eax668 + al669);
}

struct s31 {
    int32_t f0;
    int32_t f4;
};

/* .data */
struct s31* data = reinterpret_cast<struct s31*>(0x403040);

/* .text */
void text() {
    struct s31* eax1;
    struct s31* edx2;
    int32_t edx3;

    eax1 = data;
    if (eax1->f0) {
        do {
            eax1->f0();
            edx2 = data;
            eax1 = reinterpret_cast<struct s31*>(&edx2->f4);
            edx3 = edx2->f4;
            data = eax1;
        } while (edx3);
    }
    return;
}

int32_t __set_app_type = 0x7254;

void fun_401257(int32_t ecx) {
    __set_app_type(1);
    ___mingw_CRTStartup(ecx, 1);
    __set_app_type(2);
    ___mingw_CRTStartup(ecx, 2);
}

void fun_402ea8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_40155a() {
}

void fun_402f68() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_402f18() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_402f08() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_402ee8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_402ef8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

int32_t _onexit = 0x7288;

void fun_4012ac() {
    int32_t ecx1;

    ecx1 = _onexit;
    goto ecx1;
}

void fun_40168d() {
}

void fun_402f48() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_401819() {
}

void fun_402fc8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_4018f5() {
}

void fun_402f98() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_402f88() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_401a16(void** a1) {
    void** eax2;

    if (*reinterpret_cast<void***>(a1)) {
        eax2 = _malloc(24);
        ___register_frame_info(a1, eax2);
        return;
    } else {
        return;
    }
}

void fun_401a54() {
}

void fun_401b86(void** a1) {
    void** eax2;

    eax2 = _malloc(24);
    ___register_frame_info_table(a1, eax2);
    return;
}

void fun_402fa8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_401d59(void** a1) {
    if (*reinterpret_cast<void***>(a1)) {
        ___deregister_frame_info(a1);
        goto _free;
    } else {
        return;
    }
}

void fun_401d82() {
}

void fun_401ddc() {
}

void fun_401de6() {
}

struct s32 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s33 {
    signed char[8] pad8;
    uint32_t f8;
};

uint32_t fun_401e7c() {
    uint32_t ecx1;
    struct s32* v2;
    struct s33* v3;

    ecx1 = 1;
    if (v2->f8 <= v3->f8) {
        ecx1 = 1 - (1 + reinterpret_cast<uint1_t>(1 < 1 + reinterpret_cast<uint1_t>(v2->f8 < v3->f8)));
    }
    return ecx1;
}

void fun_4021c4() {
}

void fun_40219a() {
}

void fun_402279() {
}

void fun_4022c6() {
}

void fun_4024ea() {
}

void fun_4020de() {
}

void fun_402f38() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_402b5e() {
}

void fun_402ff8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_402f28() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_403008() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    ___w32_sharedptr_initialize();
    ___register_frame_info(0x405160, 0x406010);
    return;
}

void _signal() {
    goto signal;
}

void fun_402eb8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_402ec8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_402f78() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_402fd8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_401862() {
}

void fun_401bb3() {
}

void fun_402ed8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_4023e1() {
    goto _search_object;
}

void fun_40296d() {
    int32_t eax1;
    void** ebx2;
    void** esi3;
    int32_t eax4;
    void** v5;
    void** v6;
    int32_t ebx7;
    int32_t esi8;
    int32_t edi9;
    int32_t ebp10;
    int32_t eax11;
    void** v12;

    _init_object_mutex_once();
    eax1 = __CRT_MT;
    ebx2 = ___w32_sharedptr;
    esi3 = ebx2 + 20;
    if (eax1) {
        eax4 = _InterlockedIncrement_4(esi3);
        if (eax4 && (v5 = *reinterpret_cast<void***>(esi3 + 4), eax11 = _WaitForSingleObject_8(v5, -1, v6, ebx7, esi8, edi9, ebp10, __return_address()), !!eax11)) {
            _InterlockedDecrement_4(esi3, -1, v12, ebx7, esi8, edi9, ebp10, __return_address());
        }
    }
    goto 0x4029ae;
}

void fun_402f58() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void** fun_403019() {
    void** eax1;

    eax1 = ___deregister_frame_info(0x405160);
    return eax1;
}

void fun_402fe8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_402e58() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    goto _setmode;
}

void fun_402fb8() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_4012e2() {
}

void fun_402e68() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    goto __p__environ;
}

void fun_402e78() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    goto _cexit;
}

void fun_402e88() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    goto __set_app_type;
}

void fun_402e98() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}
