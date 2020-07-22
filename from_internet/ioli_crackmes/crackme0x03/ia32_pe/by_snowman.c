
/* .text */
void text(int32_t a1, int32_t a2) {
    __asm__("fninit ");
    return;
}

int32_t __p__fmode = 0x622c;

int32_t* ___p__fmode(int32_t a1, int32_t a2) {
    goto __p__fmode;
}

struct s0 {
    int32_t 0x0;
    int32_t 0x4;
};

/* .text */
void text(int32_t a1, int32_t a2) {
    struct s0* ecx3;

    ecx3 = reinterpret_cast<struct s0*>(0x404300);
    while (reinterpret_cast<uint32_t>(ecx3) < 0x404300) {
        ++ecx3;
        *reinterpret_cast<int32_t*>(ecx3->0x4 + 0x400000) = *reinterpret_cast<int32_t*>(ecx3->0x4 + 0x400000) + ecx3->0x0;
    }
    return;
}

int32_t __alloca(int32_t ecx);

void ___main();

void _printf(int32_t a1, void* a2);

void _scanf(int32_t a1, void* a2);

void _test(int32_t a1, int32_t a2);

int32_t _main(int32_t ecx, int32_t a2, int32_t a3, int32_t a4) {
    void* v5;
    void* v6;
    int32_t v7;

    __alloca(ecx);
    ___main();
    _printf("IOLI Crackme Level 0x03\n", v5);
    _printf("Password: ", v6);
    _scanf("%d", reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    _test(v7, 0x52b24);
    return 0;
}

int32_t ExitProcess = 0x615c;

/* _ExitProcess@4 */
int32_t _ExitProcess_4(int32_t a1, int32_t a2, int32_t a3) {
    goto ExitProcess;
}

void* _strlen(void** a1);

/* .text */
void text(void** a1) {
    void* ebp2;
    void* v3;
    void* eax4;
    uint32_t eax5;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v3 = reinterpret_cast<void*>(0);
    while (eax4 = _strlen(a1), reinterpret_cast<uint32_t>(v3) < reinterpret_cast<uint32_t>(eax4)) {
        eax5 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v3) + reinterpret_cast<unsigned char>(a1));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp2) - 0x78 + reinterpret_cast<uint32_t>(v3)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax5) - 3);
        v3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v3) + 1);
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp2) - 0x78 + reinterpret_cast<uint32_t>(v3)) = 0;
    _printf("%s\n", reinterpret_cast<int32_t>(ebp2) - 0x78);
    return;
}

int32_t atexit = 0x6290;

void _atexit() {
    int32_t ecx1;

    ecx1 = atexit;
    goto ecx1;
}

int32_t abort = 0x6288;

uint32_t _abort(void** a1, void*** a2, void** a3) {
    goto abort;
}

int32_t Sleep = 0x61ec;

/* _Sleep@4 */
void _Sleep_4(int32_t a1) {
    goto Sleep;
}

int32_t InterlockedDecrement = 0x6188;

/* _InterlockedDecrement@4 */
int32_t _InterlockedDecrement_4(void** a1, void*** a2, void** a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    goto InterlockedDecrement;
}

int32_t ReleaseSemaphore = 0x61b8;

/* _ReleaseSemaphore@12 */
void _ReleaseSemaphore_12(void** a1, void*** a2, void** a3) {
    goto ReleaseSemaphore;
}

int32_t WaitForSingleObject = 0x61f4;

/* _WaitForSingleObject@8 */
int32_t _WaitForSingleObject_8(void** a1, void*** a2, void** a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    goto WaitForSingleObject;
}

struct s1 {
    signed char[9] pad9;
    signed char 0x9;
    unsigned char 0xa;
};

struct s2 {
    signed char[9] pad9;
    void** 0x9;
};

void** _read_uleb128(void** a1);

void** _read_sleb128(void** a1);

void** _read_encoded_value_with_base(void** a1, void*** a2, void** a3);

uint32_t _get_cie_encoding(void** a1, void*** a2, void** a3) {
    void* ebp4;
    uint32_t eax5;
    struct s1* eax6;
    void** v7;
    struct s2* eax8;
    unsigned char* ebx9;
    void** eax10;
    void** ecx11;
    uint32_t eax12;
    void** v13;
    void** eax14;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = 0;
    if (eax6->0x9 == 0x7a) {
        v7 = reinterpret_cast<void**>(&eax8->0x9);
        _strlen(v7);
        _read_uleb128(v7);
        ebx9 = &eax6->0xa;
        _read_sleb128(v7);
        eax10 = _read_uleb128(v7);
        ecx11 = eax10;
        while (eax12 = *ebx9, *reinterpret_cast<signed char*>(&eax12) != 82) {
            if (*reinterpret_cast<signed char*>(&eax12) == 80) {
                ++ebx9;
                eax14 = _read_encoded_value_with_base(ecx11 + 1, reinterpret_cast<int32_t>(ebp4) - 20, v13);
                ecx11 = eax14;
            } else {
                if (*reinterpret_cast<signed char*>(&eax12) != 76) 
                    goto addr_401d57_7;
                ++ecx11;
                ++ebx9;
            }
        }
    } else {
        addr_401ce5_9:
        return eax5;
    }
    eax5 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx11));
    goto addr_401ce5_9;
    addr_401d57_7:
    eax5 = 0;
    goto addr_401ce5_9;
}

struct s3 {
    signed char[4] pad4;
    void** 0x4;
};

struct s4 {
    signed char[8] pad8;
    void** 0x8;
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
        addr_401cb0_2:
        return ecx4;
    } else {
        eax6 = eax7 & 0x70;
        if (eax6 == 32) {
            return edx8->0x4;
        }
        if (reinterpret_cast<int32_t>(eax6) <= reinterpret_cast<int32_t>(32)) 
            goto addr_401c86_6;
    }
    if (eax6 == 48) {
        addr_401c9f_8:
        ecx4 = edx9->0x8;
        goto addr_401cb0_2;
    } else {
        zf10 = eax6 == 80;
    }
    addr_401c98_10:
    if (zf10) {
        addr_401cc0_11:
        return 0;
    } else {
        _abort(v11, v12, ebp13);
        goto addr_401c9f_8;
    }
    addr_401c86_6:
    if (!eax6) 
        goto addr_401cc0_11;
    zf10 = eax6 == 16;
    goto addr_401c98_10;
}

struct s5 {
    void** 0x0;
    signed char[3] pad4;
    void** 0x4;
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
        *a2 = eax7->0x0;
        return &eax7->0x4;
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
    uint32_t 0x0;
    signed char[12] pad16;
    unsigned char 0x10;
};

struct s7 {
    void* 0x0;
    int32_t 0x4;
    void** 0x8;
};

/* .text */
uint32_t text(void** a1, void*** a2);

struct s8 {
    signed char[4] pad4;
    void* 0x4;
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
        if (esi4->0x4) {
            eax11 = reinterpret_cast<int32_t>(esi4) - esi4->0x4 + 4;
            if (eax11 != v8) {
                v8 = eax11;
                eax14 = _get_cie_encoding(v12, v13, v10);
                v15 = eax14;
                eax16 = _base_from_object(v12, v13, v10);
                ecx17 = edi2->0x10;
                v10 = eax16;
                eax18 = ecx17 >> 3 & 0xff;
                if (eax18 == 0xff) {
                    eax19 = ecx17 & 0xfffff807 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v15)) << 3;
                    edi2->0x10 = *reinterpret_cast<unsigned char*>(&eax19);
                } else {
                    if (eax18 != v15) {
                        edi2->0x10 = reinterpret_cast<unsigned char>(edi2->0x10 | 4);
                        esi4 = esi4;
                    }
                }
            }
            v13 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp1) - 16);
            v12 = reinterpret_cast<void**>(&esi4->0x8);
            _read_encoded_value_with_base(v12, v13, v10);
            eax20 = text(v12, v13);
            if (eax20 > 3) {
                eax21 = 0xffffffff;
            } else {
                ecx22 = eax20 * 8;
                eax21 = reinterpret_cast<uint32_t>((1 << *reinterpret_cast<unsigned char*>(&ecx22)) - 1);
            }
            if (eax21 & v23 && (++v9, edi2->0x0 > v23)) {
                edi2->0x0 = v23;
            }
        }
        eax24 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(esi4->0x0) + reinterpret_cast<int32_t>(esi4));
        esi4 = reinterpret_cast<struct s7*>(&eax24->0x4);
        zf6 = eax24->0x4 == 0;
    }
    return v9;
}

int32_t malloc = 0x62a4;

void** _malloc(void** a1) {
    goto malloc;
}

struct s9 {
    signed char[16] pad16;
    unsigned char 0x10;
};

struct s10 {
    signed char[16] pad16;
    uint16_t 0x10;
};

struct s11 {
    signed char[4] pad4;
    int32_t 0x4;
};

struct s12 {
    signed char[4] pad4;
    void** 0x4;
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
    eax6 = eax7->0x10;
    v8 = edx9;
    v10 = 0;
    eax11 = eax6 >> 3;
    edi12 = *reinterpret_cast<unsigned char*>(&eax11);
    eax16 = _base_from_object(v13, v14, v15);
    zf17 = *reinterpret_cast<void***>(esi3) == 0;
    v18 = eax16;
    while (!zf17) {
        if (*reinterpret_cast<void***>(esi3 + 4)) {
            if (v4->0x10 & 4 && (eax19 = reinterpret_cast<unsigned char>(esi3) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3 + 4)) + 4, eax19 != v10)) {
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
                eax30 = edx29->0x4;
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(edx29) + eax30 * 4 + 8) = esi3;
                edx29->0x4 = eax30 + 1;
            }
        }
        eax31 = reinterpret_cast<struct s12*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3)) + reinterpret_cast<unsigned char>(esi3));
        esi3 = reinterpret_cast<void**>(&eax31->0x4);
        eax16 = *reinterpret_cast<void***>(&eax31->0x4);
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
    void* 0x0;
    int32_t 0x4;
    void** 0x8;
    signed char[3] pad12;
    void* 0xc;
};

struct s14 {
    signed char[16] pad16;
    unsigned char 0x10;
};

struct s13* _linear_search_fdes(void** a1, void*** a2, void** a3);

struct s15 {
    signed char[16] pad16;
    uint32_t 0x10;
};

struct s16 {
    signed char[12] pad12;
    int32_t* 0xc;
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
    edx5 = eax6->0x10;
    v7 = eax8;
    if (*reinterpret_cast<unsigned char*>(&edx5) & 1) {
        addr_402318_2:
        if (!(*reinterpret_cast<unsigned char*>(&edx5) & 1)) {
            if (!(*reinterpret_cast<unsigned char*>(&edx5) & 2)) {
                eax11 = _linear_search_fdes(v3, v9, v10);
                return eax11;
            }
            ebx12 = *reinterpret_cast<void***>(v7 + 12);
            while (*reinterpret_cast<void***>(ebx12)) {
                eax13 = _linear_search_fdes(v3, v9, v10);
                if (eax13) 
                    goto addr_4023c2_8;
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
                        addr_4023c0_13:
                        eax13 = reinterpret_cast<struct s13*>(0);
                        goto addr_4023c2_8;
                    } else {
                        do {
                            ebx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v17) + reinterpret_cast<unsigned char>(esi18) >> 1);
                            edi20 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(v15 + reinterpret_cast<unsigned char>(ebx19) * 4) + 8);
                            eax21 = _read_encoded_value_with_base(&edi20->0x8, reinterpret_cast<int32_t>(ebp2) - 36, v10);
                            _read_encoded_value_with_base(eax21, reinterpret_cast<int32_t>(ebp2) - 40, v10);
                            if (reinterpret_cast<unsigned char>(v3) < reinterpret_cast<unsigned char>(v22)) {
                                esi18 = ebx19;
                            } else {
                                if (reinterpret_cast<unsigned char>(v3) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v22) + reinterpret_cast<uint32_t>(v23))) 
                                    goto addr_402814_18;
                                v17 = ebx19 + 1;
                            }
                        } while (reinterpret_cast<unsigned char>(v17) < reinterpret_cast<unsigned char>(esi18));
                        goto addr_4023c0_13;
                    }
                } else {
                    edx24 = reinterpret_cast<void**>(0);
                    edi25 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v7 + 12) + 4);
                    v26 = *reinterpret_cast<void***>(v7 + 12);
                    cf27 = reinterpret_cast<unsigned char>(eax14) < reinterpret_cast<unsigned char>(edi25);
                    while (cf27) {
                        ecx28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx24) + reinterpret_cast<unsigned char>(edi25) >> 1);
                        if (reinterpret_cast<unsigned char>(v3) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&(*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(v26 + reinterpret_cast<unsigned char>(ecx28) * 4) + 8))->0x8))) {
                            if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&(*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(v26 + reinterpret_cast<unsigned char>(ecx28) * 4) + 8))->0x8)) + reinterpret_cast<uint32_t>((*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(v26 + reinterpret_cast<unsigned char>(ecx28) * 4) + 8))->0xc)) > reinterpret_cast<unsigned char>(v3)) 
                                goto addr_402846_25;
                            edx24 = ecx28 + 1;
                            cf27 = reinterpret_cast<unsigned char>(edx24) < reinterpret_cast<unsigned char>(edi25);
                        } else {
                            edi25 = ecx28;
                            cf27 = reinterpret_cast<unsigned char>(edx24) < reinterpret_cast<unsigned char>(edi25);
                        }
                    }
                    goto addr_4023c0_13;
                    addr_402846_25:
                    eax13 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(v26 + reinterpret_cast<unsigned char>(ecx28) * 4) + 8);
                    goto addr_4023c2_8;
                }
            } else {
                ecx29 = *reinterpret_cast<void***>(v7 + 12);
                v30 = reinterpret_cast<void**>(0);
                esi31 = *reinterpret_cast<void***>(ecx29 + 4);
                v32 = ecx29;
                v33 = esi31;
                if (reinterpret_cast<unsigned char>(0) >= reinterpret_cast<unsigned char>(esi31)) 
                    goto addr_4023c0_13;
                do {
                    esi34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v30) + reinterpret_cast<unsigned char>(v33) >> 1);
                    edi20 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(v32 + reinterpret_cast<unsigned char>(esi34) * 4) + 8);
                    _get_cie_encoding(v16, v9, v10);
                    _base_from_object(v16, v9, v10);
                    eax35 = _read_encoded_value_with_base(&edi20->0x8, reinterpret_cast<int32_t>(ebp2) - 28, v10);
                    v16 = eax35;
                    v9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebp2) - 32);
                    _read_encoded_value_with_base(v16, v9, v10);
                    if (reinterpret_cast<unsigned char>(v3) >= reinterpret_cast<unsigned char>(v36)) {
                        if (reinterpret_cast<unsigned char>(v3) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v36) + reinterpret_cast<uint32_t>(v37))) 
                            goto addr_402814_18;
                        v30 = esi34 + 1;
                        esi38 = v33;
                    } else {
                        v33 = esi34;
                        esi38 = v33;
                    }
                } while (reinterpret_cast<unsigned char>(v30) < reinterpret_cast<unsigned char>(esi38));
                goto addr_4023c0_13;
            }
        }
    } else {
        eax39 = reinterpret_cast<void**>(eax40->0x10 >> 11);
        v41 = eax39;
        if (!eax39) {
            if (!(*reinterpret_cast<unsigned char*>(&edx5) & 2)) {
                eax42 = _classify_object_over_fdes();
                v41 = eax42;
            } else {
                ebx43 = eax44->0xc;
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
                goto addr_4026de_42; else 
                goto addr_402458_43;
        } else {
            addr_4022f9_44:
            if (v41) 
                goto addr_40246c_45; else 
                goto addr_402304_46;
        }
    }
    goto addr_4023c0_13;
    addr_402814_18:
    eax13 = edi20;
    goto addr_4023c2_8;
    addr_4026de_42:
    *reinterpret_cast<void***>(v7 + 16) = edx46;
    goto addr_4022f9_44;
    addr_402458_43:
    *reinterpret_cast<void***>(v7 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx46) & 0x7ff);
    if (!v41) 
        goto addr_402304_46;
    addr_40246c_45:
    ebx47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v41) * 4 + 8);
    v16 = ebx47;
    eax48 = _malloc(v16);
    v49 = eax48;
    if (!eax48) {
        addr_402304_46:
        eax13 = reinterpret_cast<struct s13*>(0);
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7)) > reinterpret_cast<unsigned char>(v3)) {
            addr_4023c2_8:
            return eax13;
        } else {
            edx5 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 16));
            goto addr_402318_2;
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
            goto addr_4024de_56;
        if (*reinterpret_cast<void***>(v49 + 4) != v41) 
            goto addr_4026f5_58;
        addr_4024de_56:
        v55 = 0x401e00;
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 16)) & 4) && (eax56 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v7 + 16)), v55 = 0x401d60, eax57 = eax56 >> 3, !!*reinterpret_cast<signed char*>(&eax57))) {
            v55 = 0x401d80;
        }
        v58 = v52;
        v59 = v52;
        if (v52) 
            goto addr_402518_61;
    }
    v16 = v49;
    _frame_heapsort(v16, v60, v61);
    addr_4027e5_63:
    *reinterpret_cast<void***>(v49) = *reinterpret_cast<void***>(v7 + 12);
    *reinterpret_cast<void***>(v7 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v7 + 16)) | 1);
    *reinterpret_cast<void***>(v7 + 12) = v49;
    goto addr_402304_46;
    addr_402518_61:
    ebx62 = reinterpret_cast<void**>(0);
    eax63 = ___w32_sharedptr;
    v64 = v49;
    edx65 = *reinterpret_cast<void***>(v49 + 4);
    edi66 = v49;
    v67 = v49;
    esi68 = reinterpret_cast<void***>(eax63 + 36);
    v69 = edx65;
    if (reinterpret_cast<unsigned char>(0) >= reinterpret_cast<unsigned char>(edx65)) {
        goto addr_40270c_65;
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
        addr_40270c_65:
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
        addr_4026f5_58:
        _abort(v50, v9, v10);
    }
    _frame_heapsort(v58, v9, v10);
    esi76 = v49;
    edi66 = *reinterpret_cast<void***>(v52 + 4);
    v77 = v52;
    if (edi66) 
        goto addr_402781_78;
    addr_4027da_79:
    v16 = v77;
    _free(v16, v9, v10);
    goto addr_4027e5_63;
    addr_402781_78:
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
    goto addr_4027da_79;
}

int32_t AddAtomA = 0x613c;

/* _AddAtomA@4 */
uint16_t _AddAtomA_4(void* a1) {
    goto AddAtomA;
}

int32_t free = 0x629c;

void _free(void** a1, void*** a2, void** a3) {
    goto free;
}

int32_t FindAtomA = 0x616c;

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

int32_t g405064;

/* .data */
int32_t data = 0;

int32_t g403034 = -1;

/* eh_globals_static.2 */
int32_t eh_globals_static_2;

int32_t g405074;

/* eh_globals_key.3 */
int32_t eh_globals_key_3;

int32_t g40303c = -1;

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
            goto addr_402a8f_6;
    } else {
        goto addr_402ab4_8;
    }
    __assert("w32_sharedptr->size == sizeof(W32_EH_SHARED)", "../../gcc-3.4.5-20060117-1/gcc/config/i386/w32-shared-ptr.c", 0xf7);
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 + 4);
    addr_402ab4_8:
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
        addr_402cbf_13:
        eax17 = ___w32_sharedptr_get(v14);
        ebx18 = eax17;
        goto addr_402cc6_14;
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
        edx30 = g405064;
        *reinterpret_cast<void***>(ebx18 + 20) = eax29;
        eax31 = data;
        *reinterpret_cast<int32_t*>(ebx18 + 24) = edx30;
        edx32 = g403034;
        *reinterpret_cast<int32_t*>(ebx18 + 28) = eax31;
        eax33 = eh_globals_static_2;
        *reinterpret_cast<int32_t*>(ebx18 + 32) = edx32;
        edx34 = g405074;
        *reinterpret_cast<int32_t*>(ebx18 + 40) = eax33;
        eax35 = eh_globals_key_3;
        *reinterpret_cast<int32_t*>(ebx18 + 48) = -1;
        *reinterpret_cast<int32_t*>(ebx18 + 44) = edx34;
        *reinterpret_cast<int32_t*>(ebx18 + 52) = eax35;
        edx36 = g40303c;
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
            goto addr_402ca3_27;
        eax45 = ___w32_sharedptr_get(v42);
        edx46 = edi44;
        if (eax45 == ebx18) 
            goto addr_402cf1_29;
    }
    addr_402ca3_27:
    edx46 = 0;
    addr_402ca5_30:
    if (edx46) {
        addr_402cc6_14:
        ___w32_sharedptr = ebx18;
        ___w32_sharedptr_terminate = reinterpret_cast<void***>(ebx18 + 4);
        ___w32_sharedptr_unexpected = reinterpret_cast<void***>(ebx18 + 8);
        goto "GetAtomNameA (atom, s, sizeof(s)) != 0";
    } else {
        _free(ebx18, v47, v48);
        v14 = esi39;
        _FindAtomA_4(v14);
        goto addr_402cbf_13;
    }
    addr_402cf1_29:
    goto addr_402ca5_30;
    addr_402a8f_6:
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
int32_t ctors = 0x402ec0;

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
        goto addr_4014b1_5;
    eax2 = 0;
    zf3 = ctors == 0;
    while (!zf3) {
        ++eax2;
        zf3 = *reinterpret_cast<int32_t*>(eax2 * 4 + 0x402ee4) == 0;
    }
    addr_4014b1_5:
    ebx4 = eax2;
    if (eax2) {
        do {
            *reinterpret_cast<int32_t*>(ebx4 * 4 + 0x402ee0)();
            --ebx4;
        } while (ebx4);
    }
    _atexit();
    return;
}

int32_t printf = 0x62b0;

void _printf(int32_t a1, void* a2) {
    goto printf;
}

int32_t scanf = 0x62bc;

void _scanf(int32_t a1, void* a2) {
    goto scanf;
}

void _test(int32_t a1, int32_t a2) {
    if (a1 == a2) {
        text("Sdvvzrug#RN$$$#=,");
    } else {
        text("Lqydolg#Sdvvzrug$");
    }
    return;
}

int32_t strlen = 0x62d0;

void* _strlen(void** a1) {
    goto strlen;
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

int32_t InterlockedIncrement = 0x61a0;

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
            goto addr_4019a3_5;
        goto addr_4019e0_7;
    } else {
        *reinterpret_cast<void***>(a2 + 20) = *reinterpret_cast<void***>(edx7 + 12);
        *reinterpret_cast<void***>(edx7 + 12) = a2;
        ebx21 = edx7 + 20;
        if (ecx6) {
            addr_4019e0_7:
            eax24 = _InterlockedDecrement_4(ebx21, -1, v22, v23, ebx13, esi14, ebp15, __return_address());
            if (eax24 >= 0) {
                v25 = *reinterpret_cast<void***>(ebx21 + 4);
                _ReleaseSemaphore_12(v25, 1, 0);
                return;
            }
        } else {
            addr_4019a3_5:
            return;
        }
    }
}

struct s17 {
    void** 0x0;
    signed char[3] pad4;
    int32_t 0x4;
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
            goto addr_401ad7_5;
        v15 = edi14;
        eax16 = _InterlockedIncrement_4(v15);
        if (eax16) 
            goto addr_401bf4_7; else 
            goto addr_401b56_8;
    }
    addr_401b91_9:
    ebx17 = ecx18->0x0;
    ecx18->0x0 = *reinterpret_cast<void***>(ecx18->0x0 + 20);
    v19 = *reinterpret_cast<void***>(ebx17 + 12);
    _free(v19, -1, 0);
    esi13 = ___w32_sharedptr;
    addr_401b2d_10:
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
    addr_401b26_14:
    ebx17 = ecx18->0x0;
    addr_401b28_15:
    ecx18->0x0 = *reinterpret_cast<void***>(ebx17 + 20);
    goto addr_401b2d_10;
    addr_401bab_16:
    ebx17 = ecx18->0x0;
    goto addr_401b28_15;
    while (1) {
        v15 = ebx11;
        eax25 = _InterlockedDecrement_4(v15, -1, 0, v9, v7, v5, v3, v2);
        if (eax25 < 0) {
            addr_401bbe_18:
            _abort(v15, -1, 0);
            continue;
        } else {
            v26 = *reinterpret_cast<void***>(ebx11 + 4);
            _ReleaseSemaphore_12(v26, 1, 0);
            _abort(v26, 1, 0);
            addr_401bf4_7:
            v15 = *reinterpret_cast<void***>(edi14 + 4);
            eax27 = _WaitForSingleObject_8(v15, -1, 0, v9, v7, v5, v3, v2);
            if (eax27) 
                goto addr_401c13_20;
        }
        addr_401b56_8:
        esi13 = ___w32_sharedptr;
        addr_401ad7_5:
        ecx18 = reinterpret_cast<struct s17*>(esi13 + 12);
        if (*reinterpret_cast<void***>(esi13 + 12)) {
            do {
                if (*reinterpret_cast<void***>(ecx18->0x0 + 12) == ebx11) 
                    goto addr_401bab_16;
                ecx18 = reinterpret_cast<struct s17*>(ecx18->0x0 + 20);
            } while (*reinterpret_cast<void***>(ecx18->0x0 + 20));
        }
        zf28 = *reinterpret_cast<void***>(esi13 + 16) == 0;
        ecx18 = reinterpret_cast<struct s17*>(esi13 + 16);
        while (!zf28) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx18->0x0 + 16)) & 1) {
                if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx18->0x0 + 12)) == ebx11) 
                    goto addr_401b91_9;
            } else {
                if (*reinterpret_cast<void***>(ecx18->0x0 + 12) == ebx11) 
                    goto addr_401b26_14;
            }
            ecx18 = reinterpret_cast<struct s17*>(ecx18->0x0 + 20);
            zf28 = *reinterpret_cast<void***>(ecx18->0x0 + 20) == 0;
        }
        eax29 = __CRT_MT;
        ebx11 = esi13 + 20;
        if (eax29) 
            continue; else 
            goto addr_401bbe_18;
        addr_401c13_20:
        v15 = edi14;
        _InterlockedDecrement_4(v15, -1, 0, v9, v7, v5, v3, v2);
        goto addr_401b56_8;
    }
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
                addr_40154a_4:
                eax7 = _abort(v9, v10, v3);
            }
            edx5 = 4;
        } else {
            edx5 = 4;
            if (eax7 != 3) {
                if (eax7 != 4) 
                    goto addr_40154a_4;
                return 8;
            }
        }
    }
    return edx5;
}

struct s18 {
    signed char[16] pad16;
    unsigned char 0x10;
};

struct s19 {
    signed char[16] pad16;
    uint16_t 0x10;
};

struct s20 {
    signed char[4] pad4;
    void* 0x4;
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
    eax9 = eax10->0x10;
    v11 = 0;
    eax12 = eax9 >> 3;
    edi13 = *reinterpret_cast<unsigned char*>(&eax12);
    eax17 = _base_from_object(v14, v15, v16);
    zf18 = esi5->0x0 == 0;
    v19 = eax17;
    while (!zf18) {
        if (!esi5->0x4) 
            goto addr_4021e4_4;
        if (v7->0x10 & 4 && (eax20 = reinterpret_cast<int32_t>(esi5) - esi5->0x4 + 4, eax20 != v11)) {
            v11 = eax20;
            eax23 = _get_cie_encoding(v21, v22, v19);
            edi13 = eax23;
            eax24 = _base_from_object(v21, v22, v19);
            v19 = eax24;
            esi5 = esi5;
        }
        if (!edi13) 
            goto addr_402234_8;
        eax25 = _read_encoded_value_with_base(&esi5->0x8, reinterpret_cast<int32_t>(ebp4) - 16, v19);
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
            goto addr_4021e4_4;
        ecx31 = v32;
        goto addr_402244_14;
        addr_402234_8:
        edx29 = *reinterpret_cast<void***>(&esi5->0x8);
        v30 = edx29;
        ecx31 = esi5->0xc;
        v32 = ecx31;
        if (!edx29) {
            addr_4021e4_4:
            eax33 = reinterpret_cast<struct s20*>(reinterpret_cast<int32_t>(esi5->0x0) + reinterpret_cast<int32_t>(esi5));
            esi5 = reinterpret_cast<struct s13*>(&eax33->0x4);
            zf18 = eax33->0x4 == 0;
        } else {
            addr_402244_14:
            if (reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(edx29) >= reinterpret_cast<uint32_t>(ecx31)) 
                goto addr_4021e4_4; else 
                goto addr_40224d_15;
        }
    }
    eax34 = reinterpret_cast<struct s13*>(0);
    addr_4022b2_17:
    return eax34;
    addr_40224d_15:
    eax34 = esi5;
    goto addr_4022b2_17;
}

int32_t _assert = 0x6250;

void __assert(int32_t a1, int32_t a2, int32_t a3) {
    goto _assert;
}

int32_t GetAtomNameA = 0x6178;

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

int32_t __p__environ = 0x621c;

int32_t __argv;

int32_t __argc;

int32_t _cexit = 0x625c;

struct s21 {
    signed char[16] pad16;
    int32_t 0x10;
    signed char[28] pad48;
    int32_t 0x30;
    signed char[28] pad80;
    int32_t 0x50;
};

struct s21* _iob = reinterpret_cast<struct s21*>(0x6268);

int32_t _setmode = 0x627c;

void ___mingw_CRTStartup(int32_t ecx, int32_t a2) {
    void* ebp3;
    int32_t v4;
    int32_t eax5;
    int32_t eax6;
    int32_t v7;
    int32_t v8;
    int32_t* eax9;
    int32_t edx10;
    int32_t* eax11;
    int32_t v12;
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
    ___getmainargs(0x405004, 0x405000, reinterpret_cast<int32_t>(ebp3) - 12, eax5, reinterpret_cast<int32_t>(ebp3) - 8);
    eax6 = __CRT_fmode;
    if (!eax6) {
        while (1) {
            eax9 = ___p__fmode(v7, v8);
            edx10 = __fmode;
            *eax9 = edx10;
            text(v7, v8);
            eax11 = reinterpret_cast<int32_t*>(__p__environ(0x401202, v7, v8));
            v12 = *eax11;
            eax13 = __argv;
            eax14 = __argc;
            eax15 = _main(ecx, eax14, eax13, v12);
            _cexit(eax14, eax13, v12);
            eax6 = _ExitProcess_4(eax15, eax13, v12);
            addr_401237_3:
            v8 = eax6;
            eax16 = _iob;
            v7 = eax16->0x10;
            _setmode(v7, v8);
            edx17 = _iob;
            addr_4011aa_4:
            if (edx17 != -32) {
                eax18 = __CRT_fmode;
                v8 = eax18;
                eax19 = _iob;
                v7 = eax19->0x30;
                _setmode(v7, v8);
                edx17 = _iob;
            }
            if (edx17 == -64) 
                continue;
            eax20 = __CRT_fmode;
            v8 = eax20;
            eax21 = _iob;
            v7 = eax21->0x50;
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

int32_t CreateSemaphoreA = 0x6148;

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

int32_t SetUnhandledExceptionFilter = 0x61cc;

/* _SetUnhandledExceptionFilter@4 */
void _SetUnhandledExceptionFilter_4(int32_t a1) {
    goto SetUnhandledExceptionFilter;
}

int32_t __getmainargs = 0x620c;

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
        addr_402cbf_4:
        eax8 = ___w32_sharedptr_get(v5);
        ebx9 = eax8;
        goto addr_402cc6_5;
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
        edx21 = g405064;
        *reinterpret_cast<void***>(ebx9 + 20) = eax20;
        eax22 = data;
        *reinterpret_cast<int32_t*>(ebx9 + 24) = edx21;
        edx23 = g403034;
        *reinterpret_cast<int32_t*>(ebx9 + 28) = eax22;
        eax24 = eh_globals_static_2;
        *reinterpret_cast<int32_t*>(ebx9 + 32) = edx23;
        edx25 = g405074;
        *reinterpret_cast<int32_t*>(ebx9 + 40) = eax24;
        eax26 = eh_globals_key_3;
        *reinterpret_cast<int32_t*>(ebx9 + 48) = -1;
        *reinterpret_cast<int32_t*>(ebx9 + 44) = edx25;
        *reinterpret_cast<int32_t*>(ebx9 + 52) = eax26;
        edx27 = g40303c;
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
            goto addr_402ca3_18;
        eax36 = ___w32_sharedptr_get(v33);
        edx37 = edi35;
        if (eax36 == ebx9) 
            goto addr_402cf1_20;
    }
    addr_402ca3_18:
    edx37 = 0;
    addr_402ca5_21:
    if (edx37) {
        addr_402cc6_5:
        ___w32_sharedptr = ebx9;
        ___w32_sharedptr_terminate = reinterpret_cast<void***>(ebx9 + 4);
        ___w32_sharedptr_unexpected = reinterpret_cast<void***>(ebx9 + 8);
        return;
    } else {
        _free(ebx9, v38, v39);
        v5 = esi30;
        _FindAtomA_4(v5);
        goto addr_402cbf_4;
    }
    addr_402cf1_20:
    goto addr_402ca5_21;
}

int32_t signal = 0x62c4;

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

void fun_402ee3() {
    signed char* eax1;
    void* eax2;

    eax1 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax2) + 1 + 1);
    *eax1 = reinterpret_cast<signed char>(*eax1 + *reinterpret_cast<signed char*>(&eax1));
    *eax1 = reinterpret_cast<signed char>(*eax1 + *reinterpret_cast<signed char*>(&eax1));
}

struct s22 {
    signed char[1] pad1;
    signed char 0x1;
};

void fun_402eef() {
    int32_t eax1;
    struct s22* eax2;
    signed char* eax3;

    eax2 = reinterpret_cast<struct s22*>(eax1(__return_address()));
    eax3 = &eax2->0x1;
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    *eax3 = reinterpret_cast<signed char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
}

void fun_401499() {
}

void fun_4014f3() {
}

void fun_40150e() {
}

void fun_4015b7() {
}

void fun_40165d() {
}

void fun_40168d() {
}

void fun_4018cd() {
}

void fun_4019aa() {
}

void fun_401a3c() {
}

void fun_401afe() {
}

void fun_401c23() {
}

struct s23 {
    signed char[8] pad8;
    void** 0x8;
};

struct s24 {
    signed char[8] pad8;
    void** 0x8;
};

uint32_t fun_401d7c(int32_t a1, struct s23* a2, struct s24* a3) {
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
    _read_encoded_value_with_base(&a2->0x8, reinterpret_cast<int32_t>(ebp4) - 12, v8);
    _read_encoded_value_with_base(&a3->0x8, reinterpret_cast<int32_t>(ebp4) - 16, v9);
    edx10 = 1;
    if (v11 <= v12) {
        edx10 = 1 - (1 + reinterpret_cast<uint1_t>(1 < 1 + reinterpret_cast<uint1_t>(v13 < v12)));
    }
    return edx10;
}

struct s25 {
    signed char[8] pad8;
    void** 0x8;
};

struct s26 {
    signed char[8] pad8;
    void** 0x8;
};

uint32_t fun_401df9(int32_t a1, struct s25* a2, struct s26* a3) {
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
    _read_encoded_value_with_base(&a2->0x8, v11, v12);
    _get_cie_encoding(&a2->0x8, v11, v13);
    _base_from_object(&a2->0x8, v11, v14);
    _read_encoded_value_with_base(&a3->0x8, reinterpret_cast<int32_t>(ebp4) - 20, v15);
    edx16 = 1;
    if (v17 <= v18) {
        edx16 = 1 - (1 + reinterpret_cast<uint1_t>(1 < 1 + reinterpret_cast<uint1_t>(v19 < v18)));
    }
    return edx16;
}

void fun_401e8e() {
}

void fun_401f19() {
}

void fun_401f5e() {
}

void fun_40253c() {
}

void fun_4026a9() {
}

struct s27 {
    signed char[8] pad8;
    void** 0x8;
};

struct s28 {
    void** 0x0;
    signed char[3] pad4;
    void** 0x4;
};

struct s29 {
    signed char[12] pad12;
    struct s28* 0xc;
};

struct s31 {
    signed char[8] pad8;
    void** 0x8;
};

struct s30 {
    signed char[12] pad12;
    struct s31* 0xc;
};

void fun_40287c(void*** a1, void** a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    void** v8;
    void** esi9;
    void** esi10;
    struct s27* ebp11;
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
    struct s28* edx22;
    struct s29* ebp23;
    void*** v24;
    struct s30* ebp25;
    int32_t ebp26;
    int32_t eax27;
    struct s13* edi28;

    v8 = reinterpret_cast<void**>(__return_address());
    esi9 = esi10;
    do {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi9)) <= reinterpret_cast<unsigned char>(ebp11->0x8)) 
            break;
        esi9 = *reinterpret_cast<void***>(esi9 + 20);
    } while (esi9);
    goto addr_402892_5;
    eax12 = _search_object(v8);
    edi13 = eax12;
    if (!eax12) {
        ebx14 = ___w32_sharedptr;
    } else {
        ebx14 = ___w32_sharedptr;
        goto addr_4028ef_9;
    }
    do {
        addr_4028a0_10:
        esi9 = *reinterpret_cast<void***>(ebx14 + 12);
        if (!esi9) 
            break;
        *reinterpret_cast<void***>(ebx14 + 12) = *reinterpret_cast<void***>(esi9 + 20);
        eax15 = _search_object(v8);
        ebx14 = ___w32_sharedptr;
        edi13 = eax15;
        edx16 = reinterpret_cast<struct s17*>(ebx14 + 16);
        if (!*reinterpret_cast<void***>(ebx14 + 16)) {
            eax17 = edx16->0x0;
            continue;
        } else {
            ecx18 = *reinterpret_cast<void***>(esi9);
            do {
                eax17 = edx16->0x0;
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax17)) < reinterpret_cast<unsigned char>(ecx18)) 
                    goto addr_402976_15;
                edx16 = reinterpret_cast<struct s17*>(eax17 + 20);
            } while (*reinterpret_cast<void***>(eax17 + 20));
        }
        *reinterpret_cast<void***>(esi9 + 20) = reinterpret_cast<void**>(0);
        edx16->0x0 = esi9;
        if (!edi13) 
            goto addr_4028a0_10; else 
            break;
        addr_402976_15:
        *reinterpret_cast<void***>(esi9 + 20) = eax17;
        edx16->0x0 = esi9;
    } while (!edi13);
    goto addr_402983_18;
    addr_4028ef_9:
    eax19 = __CRT_MT;
    ebx20 = ebx14 + 20;
    if (eax19) {
        addr_402993_19:
        v8 = ebx20;
        eax21 = _InterlockedDecrement_4(v8, a1, a2, a3, a4, a5, a6, a7);
        if (eax21 >= 0) {
            a2 = reinterpret_cast<void**>(0);
            a1 = reinterpret_cast<void***>(1);
            v8 = *reinterpret_cast<void***>(ebx20 + 4);
            _ReleaseSemaphore_12(v8, 1, 0);
            goto addr_4028ff_21;
        }
    } else {
        addr_4028ff_21:
        if (edi13) {
            edx22 = ebp23->0xc;
            edx22->0x0 = *reinterpret_cast<void***>(esi9 + 4);
            edx22->0x4 = *reinterpret_cast<void***>(esi9 + 8);
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi9 + 16)) & 4) {
                _get_cie_encoding(v8, a1, a2);
            }
            _base_from_object(v8, a1, a2);
            v24 = &ebp25->0xc->0x8;
            _read_encoded_value_with_base(&edi13->0x8, v24, a2);
        }
    }
    goto *reinterpret_cast<int32_t*>(ebp26 - 12 + 4 + 4 + 4 + 4);
    addr_402983_18:
    eax27 = __CRT_MT;
    ebx20 = ebx14 + 20;
    if (!eax27) 
        goto addr_4028ff_21; else 
        goto addr_402993_19;
    addr_402892_5:
    edi13 = edi28;
    goto addr_4028a0_10;
}

/* .text */
void text() {
    void** eax1;

    eax1 = ___w32_sharedptr;
    goto *reinterpret_cast<void***>(eax1 + 4);
}

struct s32 {
    int32_t 0x0;
    int32_t 0x4;
};

/* .data */
struct s32* data = reinterpret_cast<struct s32*>(0x402ef0);

/* .text */
void text() {
    struct s32* eax1;
    struct s32* edx2;
    int32_t edx3;

    eax1 = data;
    if (eax1->0x0) {
        do {
            eax1->0x0();
            edx2 = data;
            eax1 = reinterpret_cast<struct s32*>(&edx2->0x4);
            edx3 = edx2->0x4;
            data = eax1;
        } while (edx3);
    }
    return;
}

int32_t __set_app_type = 0x623c;

void fun_401257(int32_t ecx) {
    __set_app_type(1);
    ___mingw_CRTStartup(ecx, 1);
    __set_app_type(2);
    ___mingw_CRTStartup(ecx, 2);
}

void fun_402d88() {
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

void fun_40143a() {
}

void fun_402e18() {
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

int32_t _onexit = 0x6270;

void fun_4012ac() {
    int32_t ecx1;

    ecx1 = _onexit;
    goto ecx1;
}

void fun_40156d() {
}

void fun_402df8() {
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

void fun_4016f9() {
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
}

void fun_4017d5() {
}

void fun_402e48() {
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

void fun_402e38() {
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

void fun_4018f6(void** a1) {
    void** eax2;

    if (*reinterpret_cast<void***>(a1)) {
        eax2 = _malloc(24);
        ___register_frame_info(a1, eax2);
        return;
    } else {
        return;
    }
}

void fun_401934() {
}

void fun_401a66(void** a1) {
    void** eax2;

    eax2 = _malloc(24);
    ___register_frame_info_table(a1, eax2);
    return;
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
}

void fun_401c39(void** a1) {
    if (*reinterpret_cast<void***>(a1)) {
        ___deregister_frame_info(a1);
        goto _free;
    } else {
        return;
    }
}

void fun_401c62() {
}

void fun_401cbc() {
}

void fun_401cc6() {
}

struct s33 {
    signed char[8] pad8;
    uint32_t 0x8;
};

struct s34 {
    signed char[8] pad8;
    uint32_t 0x8;
};

uint32_t fun_401d5c() {
    uint32_t ecx1;
    struct s33* v2;
    struct s34* v3;

    ecx1 = 1;
    if (v2->0x8 <= v3->0x8) {
        ecx1 = 1 - (1 + reinterpret_cast<uint1_t>(1 < 1 + reinterpret_cast<uint1_t>(v2->0x8 < v3->0x8)));
    }
    return ecx1;
}

void fun_4020a4() {
}

void fun_40207a() {
}

void fun_402159() {
}

void fun_4021a6() {
}

void fun_4023ca() {
}

void fun_401fbe() {
}

void fun_402de8() {
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

void fun_402a3e() {
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

void fun_402dd8() {
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
    ___w32_sharedptr_initialize();
    ___register_frame_info(0x404150, 0x405010);
    return;
}

void _signal() {
    goto signal;
}

void fun_402d98() {
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

void fun_402db8() {
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

void fun_402da8() {
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

void fun_402e28() {
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

void fun_402dc8() {
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
}

void fun_401742() {
}

void fun_401a93() {
}

void fun_4022c1() {
    goto _search_object;
}

void fun_40284d() {
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
    goto 0x40288e;
}

void fun_402e08() {
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

void** fun_402ec9() {
    void** eax1;

    eax1 = ___deregister_frame_info(0x404150);
    return eax1;
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

void fun_402d38() {
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
}

void fun_4012e2() {
}

void fun_402d48() {
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

void fun_402d58() {
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

void fun_402d68() {
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

void fun_402d78() {
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
