
void alloc_group_entry() {
    // Decompilation error
}

void alloc_host_entry() {
    // Decompilation error
}

long* alloc_inet6_addr(long* param0) {
    long* ptr0;
    long* result = (long*)caml_alloc_string(16L);
    *result = *ptr0;
    *(result + 1) = *(ptr0 + 1);
    return result;
}

int* alloc_inet_addr(int* param0) {
    int* ptr0;
    int* result = (int*)caml_alloc_string(4L);
    *result = *ptr0;
    return result;
}

void alloc_one_addr() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long* alloc_passwd_entry(unsigned long* param0) {
    void* ptr0;
    void* ptr1;
    void* ptr2;
    void* ptr3;
    void* ptr4;
    unsigned long v0 = caml_local_roots;
    caml_local_roots = &v0;
    long v1 = 1L;
    long v2 = 5L;
    long* ptr5 = &ptr0;
    long* ptr6 = &ptr1;
    long* ptr7 = &ptr2;
    long* ptr8 = &ptr4;
    long* ptr9 = &ptr3;
    ptr0 = caml_copy_string(*param0);
    ptr1 = caml_copy_string(*(char**)(param0 + 1));
    ptr2 = caml_copy_string(*(char**)(param0 + 3));
    ptr4 = caml_copy_string(*(char**)(param0 + 4));
    ptr3 = caml_copy_string(*(char**)(param0 + 5));
    long* result = caml_alloc_small(7L, 0L);
    result[0] = (long)ptr0;
    result[1] = (long)ptr1;
    result[2] = (unsigned long)*(int*)(param0 + 2) * 2L + 1L;
    result[3] = (unsigned long)*(int*)((char*)param0 + 20L) * 2L + 1L;
    result[4] = (long)ptr2;
    result[5] = (long)ptr4;
    result[6] = (long)ptr3;
    caml_local_roots = v0;
    return result;
}

void alloc_process_status() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void alloc_proto_entry() {
}

void alloc_service_entry() {
    // Decompilation error
}

void alloc_sockaddr() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long* alloc_tm(int* param0) {
    int* ptr0;
    long* result = caml_alloc_small(9L, 0L);
    result[0] = (long)*ptr0 * 2L + 1L;
    result[1] = (long)*(ptr0 + 1) * 2L + 1L;
    result[2] = (long)*(ptr0 + 2) * 2L + 1L;
    result[3] = (long)*(ptr0 + 3) * 2L + 1L;
    result[4] = (long)*(ptr0 + 4) * 2L + 1L;
    result[5] = (long)*(ptr0 + 5) * 2L + 1L;
    result[6] = (long)*(ptr0 + 6) * 2L + 1L;
    result[7] = (long)*(ptr0 + 7) * 2L + 1L;
    result[8] = *(unsigned int*)(ptr0 + 8) < 1 ? 1L: 3L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlArray__append_82(long param0, unsigned long param1, long param2, long param3, long param4, long param5) {
    unsigned long* ptr0;
    unsigned long i;
    unsigned long* ptr1;
    unsigned long* ptr2;
    unsigned long v0;
    unsigned long v1;
    unsigned long* ptr3;
    unsigned long v2;
    unsigned long* ptr4;
    unsigned long v3 = (unsigned long)((*(long*)(ptr3 - 1) >>> 9) | 0x1L);
    unsigned long v4 = (unsigned long)((*(long*)(ptr4 - 1) >>> 9) | 0x1L);
    if(v3 != 1L) {
        v1 = v4;
        v0 = v3;
        ptr2 = ptr4;
        ptr1 = ptr3;
    }
    else if(v4 == 1L) {
        return &camlArray__30;
    }
    else {
        v1 = v4;
        v0 = 1L;
        ptr2 = ptr4;
        ptr1 = ptr3;
    }
    if((long)v3 > 1L) {
        ptr4 = ptr3;
    }
    if(*(char*)(ptr4 - 1) != 254) {
        param1 = *ptr4;
    }
    else {
        for(i = i - 16L; i < caml_young_limit; i -= 16L) {
            caml_call_gc(254L, (long)param1, (long)v4, (long)v3, param4, param5);
        }
        param1 = i + 8L;
        *(long*)(param1 - 8L) = 1277L;
        *(long*)param1 = *ptr4;
    }
    long result = caml_c_call();
    unsigned long v5 = 1L;
    unsigned long v6 = v0 - 2L;
    if((long)v6 >= 1L) {
        do {
            ptr0 = ptr1;
            if(*(char*)(ptr0 - 1) != 254) {
                param1 = *(unsigned long*)((char*)(v5 * 4L + (long)ptr0) - 4L);
            }
            else {
                i -= 16L;
                while(caml_young_limit > i) {
                    caml_call_gc((long)ptr0, (long)param1, (long)v4, (long)v3, param4, param5);
                    i -= 16L;
                }
                param1 = i + 8L;
                *(long*)(param1 - 8L) = 1277L;
                *(long*)param1 = *(long*)((char*)(v5 * 4L + (long)ptr0) - 4L);
            }
            if(*(char*)(result - 8L) != 254) {
                caml_modify(v5 * 4L + result - 4L, param1);
            }
            else {
                *(long*)(v5 * 4L + result - 4L) = *(long*)param1;
            }
            v2 = v5;
            v5 += 2L;
        }
        while(v2 != v6);
    }
    ptr4 = (unsigned long*)0x1;
    unsigned long v7 = v1 - 2L;
    if((long)v7 >= 1L) {
        v1 = v7;
        do {
            unsigned long* ptr5 = ptr2;
            if(*(char*)(ptr5 - 1) != 254) {
                param1 = *(unsigned long*)((char*)((long)(long*)((long)ptr4 * 4L) + (long)ptr5) - 4L);
            }
            else {
                i -= 16L;
                while(caml_young_limit > i) {
                    caml_call_gc((long)ptr5, (long)param1, (long)v4, (long)v3, param4, param5);
                    i -= 16L;
                }
                param1 = i + 8L;
                *(long*)(param1 - 8L) = 1277L;
                *(long*)param1 = *(long*)((char*)((long)(long*)((long)ptr4 * 4L) + (long)ptr5) - 4L);
            }
            long* ptr6 = (long*)((char*)((long)ptr4 + v0) - 1L);
            if(*(char*)(result - 8L) != 254) {
                caml_modify((long)((char*)((long)(long*)((long)ptr6 * 4L) + result) - 4L), param1);
            }
            else {
                *(long*)((char*)((long)(long*)((long)ptr6 * 4L) + result) - 4L) = *(long*)param1;
            }
            ptr0 = ptr4;
            ptr4 = (unsigned long*)((char*)ptr4 + 2L);
        }
        while(ptr0 != v1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long camlArray__blit_120(long param0, unsigned long param1, long param2, long param3, long param4, long param5) {
    unsigned long i;
    unsigned long v0;
    void* ptr0;
    unsigned long v1;
    unsigned long v2;
    unsigned long v3;
    long* ptr1 = &ptr0;
    char v4 = &ptr0 == 40L;
    char v5 = (long)&v2 < 0L;
    char v6 = __parity__((unsigned char)&ptr0 - 40);
    char v7 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x28L) ^ (long)&v2) >>> 4L) & 0x1L);
    char v8 = (unsigned long)&ptr0 < 40L;
    char v9 = (long)(long*)((long)(long*)((long)&v2 ^ (long)&ptr0) & (long)(long*)((long)&ptr0 ^ 0x28L)) < 0L;
    unsigned long v10 = v1;
    long v11 = param0;
    unsigned long v12 = param1;
    char v13 = param2 == 1L;
    char v14 = param2 < 1L;
    char v15 = __parity__((unsigned char)param2 - 1);
    char v16 = (unsigned long)param2 < 1L;
    char v17 = (((param2 - 1L) ^ param2) & (param2 ^ 0x1L)) < 0L;
    char v18 = (((param2 - 1L) ^ (param2 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v14 == v17) {
        char v19 = v3 == 1L;
        char v20 = (long)v3 < 1L;
        char v21 = __parity__((unsigned char)v3 - 1);
        char v22 = v3 < 1L;
        char v23 = (((v3 - 1L) ^ v3) & (v3 ^ 0x1L)) < 0L;
        char v24 = (((v3 - 1L) ^ (v3 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v20 == v23) {
            long v25 = *(long*)(v10 - 8L);
            long v26 = *(long*)(v10 - 8L);
            long v27 = v25 >>> 9;
            char v28 = (v26 >>> 8L) & 0x1L;
            char v29 = v23;
            char v30 = v27 ? 0: 1;
            char v31 = v27 < 0L;
            char v32 = __parity__((unsigned char)v27);
            unsigned long v33 = (unsigned long)(v27 | 0x1L);
            unsigned long v34 = (unsigned long)(v27 | 0x1L);
            long v35 = (long)(v33 - param2);
            char v36 = v35 ? 0: 1;
            char v37 = v35 < 0L;
            char v38 = __parity__((unsigned char)v35);
            char v39 = (((param2 ^ v34) ^ v35) >>> 4L) & 0x1L;
            char v40 = (unsigned long)param2 > v34;
            char v41 = ((v35 ^ v34) & (param2 ^ v34)) < 0L;
            unsigned long v42 = (unsigned long)(v35 + 1L);
            char v43 = v42 == v3;
            char v44 = (long)v42 > (long)v3;
            char v45 = __parity__((unsigned char)v3 - (unsigned char)v42);
            char v46 = v42 > v3;
            char v47 = (long)(((v3 - v42) ^ v3) & (v42 ^ v3)) < 0L;
            char v48 = (((v3 - v42) ^ (v42 ^ v3)) >>> 4L) & 0x1L;
            if((v43 || v44 != v47)) {
                char v49 = v12 == 1L;
                char v50 = (long)v12 < 1L;
                char v51 = __parity__((unsigned char)v12 - 1);
                char v52 = v12 < 1L;
                char v53 = (((v12 - 1L) ^ v12) & (v12 ^ 0x1L)) < 0L;
                char v54 = (((v12 - 1L) ^ (v12 ^ 0x1L)) >>> 4L) & 0x1L;
                if(v50 == v53) {
                    long v55 = *(long*)(v11 - 8L);
                    long v56 = *(long*)(v11 - 8L);
                    long v57 = v55 >>> 9;
                    char v58 = (v56 >>> 8L) & 0x1L;
                    char v59 = v53;
                    char v60 = v57 ? 0: 1;
                    char v61 = v57 < 0L;
                    char v62 = __parity__((unsigned char)v57);
                    unsigned long v63 = (unsigned long)(v57 | 0x1L);
                    unsigned long v64 = (unsigned long)(v57 | 0x1L);
                    long v65 = (long)(v63 - param2);
                    char v66 = v65 ? 0: 1;
                    char v67 = v65 < 0L;
                    char v68 = __parity__((unsigned char)v65);
                    char v69 = (((param2 ^ v64) ^ v65) >>> 4L) & 0x1L;
                    char v70 = (unsigned long)param2 > v64;
                    char v71 = ((v65 ^ v64) & (param2 ^ v64)) < 0L;
                    unsigned long v72 = (unsigned long)(v65 + 1L);
                    char v73 = v72 == v12;
                    char v74 = (long)v72 > (long)v12;
                    char v75 = __parity__((unsigned char)v12 - (unsigned char)v72);
                    char v76 = v72 > v12;
                    char v77 = (long)(((v12 - v72) ^ v12) & (v72 ^ v12)) < 0L;
                    char v78 = (((v12 - v72) ^ (v72 ^ v12)) >>> 4L) & 0x1L;
                    if((v73 || v74 != v77)) {
                        if((long)v3 < (long)v12) {
                            v2 = (unsigned long)(param2 - 2L);
                            if((long)v2 >= 1L) {
                                v0 = v3;
                                do {
                                    long v79 = v2 + v0 - 1L;
                                    if(*(char*)(v10 - 8L) != 254) {
                                        param1 = *(unsigned long*)(v79 * 4L + v10 - 4L);
                                    }
                                    else {
                                        for(i = i - 16L; i < caml_young_limit; i -= 16L) {
                                            caml_call_gc(param0, (long)param1, param2, param3, param4, param5);
                                        }
                                        unsigned long v80 = i + 8L;
                                        *(long*)(v80 - 8L) = 1277L;
                                        *(long*)v80 = *(long*)(v79 * 4L + v10 - 4L);
                                        param1 = v80;
                                    }
                                    long v81 = v12 + v2 - 1L;
                                    if(*(char*)(v11 - 8L) != 254) {
                                        caml_modify(v81 * 4L + v11 - 4L, param1);
                                    }
                                    else {
                                        *(long*)(v81 * 4L + v11 - 4L) = *(long*)param1;
                                    }
                                    v3 = v2;
                                    v2 -= 2L;
                                }
                                while(v3 != 1L);
                            }
                        }
                        else {
                            unsigned long v82 = 1L;
                            unsigned long v83 = (unsigned long)(param2 - 2L);
                            if((long)v83 >= 1L) {
                                v0 = v3;
                                v2 = v10;
                                do {
                                    param0 = (long)(v0 + v82 - 1L);
                                    unsigned long v84 = v2;
                                    if(*(char*)(v84 - 8L) != 254) {
                                        param1 = *(unsigned long*)(param0 * 4L + v84 - 4L);
                                    }
                                    else {
                                        i -= 16L;
                                        while(caml_young_limit > i) {
                                            caml_call_gc(param0, (long)param1, param2, param3, param4, param5);
                                            i -= 16L;
                                        }
                                        unsigned long v85 = i + 8L;
                                        *(long*)(v85 - 8L) = 1277L;
                                        *(long*)v85 = *(long*)(param0 * 4L + v84 - 4L);
                                        param1 = v85;
                                    }
                                    long v86 = v12 + v82 - 1L;
                                    if(*(char*)(v11 - 8L) != 254) {
                                        caml_modify(v86 * 4L + v11 - 4L, param1);
                                    }
                                    else {
                                        *(long*)(v86 * 4L + v11 - 4L) = *(long*)param1;
                                    }
                                    v3 = v82;
                                    v82 += 2L;
                                }
                                while(v3 != v83);
                            }
                        }
                        return 1L;
                    }
                }
            }
        }
    }
    long v87 = "Array.blit";
    void* ptr2 = &v2;
    long* ptr3 = &ptr0;
    char v88 = &ptr0 ? 0: 1;
    char v89 = (long)&ptr0 < 0L;
    char v90 = __parity__((unsigned char)&ptr0);
    char v91 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v2 ^ 0x28L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v92 = (unsigned long)&v2 >= 18446744073709551576L;
    char v93 = (long)(long*)((long)(long*)((long)&v2 ^ (long)&ptr0) & (long*)~(long)(long*)((long)&v2 ^ 0x28L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, (long)param1, param2, param3, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlArray__concat_103() {
}

void camlArray__concat_aux_90() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlArray__copy_77(long param0, unsigned long param1, long param2, long param3, long param4, long param5) {
    unsigned long i;
    unsigned long* ptr0;
    unsigned long* ptr1;
    unsigned long* ptr2 = (unsigned long*)((*(long*)(ptr1 - 1) >>> 9) | 0x1L);
    if(ptr2 == 1L) {
        return &camlArray__31;
    }
    unsigned long* ptr3 = ptr2;
    unsigned long* ptr4 = ptr1;
    if(*(char*)(ptr1 - 1) != 254) {
        param1 = *ptr1;
    }
    else {
        for(i = i - 16L; i < caml_young_limit; i -= 16L) {
            caml_call_gc((long)ptr2, (long)param1, param2, param3, param4, param5);
        }
        param1 = i + 8L;
        *(long*)(param1 - 8L) = 1277L;
        *(long*)param1 = *ptr1;
    }
    long result = caml_c_call();
    unsigned long* ptr5 = (unsigned long*)0x3;
    long* ptr6 = (long*)((char*)ptr3 - 2L);
    if((long)ptr6 >= 3L) {
        do {
            ptr2 = ptr4;
            if(*(char*)(ptr2 - 1) != 254) {
                param1 = *(unsigned long*)((char*)((long)(long*)((long)ptr5 * 4L) + (long)ptr2) - 4L);
            }
            else {
                i -= 16L;
                while(caml_young_limit > i) {
                    caml_call_gc((long)ptr2, (long)param1, param2, param3, param4, param5);
                    i -= 16L;
                }
                param1 = i + 8L;
                *(long*)(param1 - 8L) = 1277L;
                *(long*)param1 = *(long*)((char*)((long)(long*)((long)ptr5 * 4L) + (long)ptr2) - 4L);
            }
            if(*(char*)(result - 8L) != 254) {
                caml_modify((long)((char*)((long)(long*)((long)ptr5 * 4L) + result) - 4L), param1);
            }
            else {
                *(long*)((char*)((long)(long*)((long)ptr5 * 4L) + result) - 4L) = *(long*)param1;
            }
            ptr0 = ptr5;
            ptr5 = (unsigned long*)((char*)ptr5 + 2L);
        }
        while(ptr0 != ptr6);
    }
    return result;
}

void camlArray__entry() {
    // Decompilation error
}

long camlArray__fill_114(long param0, long param1, long param2, long param3, long param4, long param5) {
    void* ptr0;
    long v0;
    long v1;
    char v2;
    long* ptr1 = &ptr0;
    char v3 = &ptr0 == 8L;
    char v4 = (long)&v2 < 0L;
    char v5 = __parity__((unsigned char)&ptr0 - 8);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v2) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&ptr0 < 8L;
    char v8 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v2) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v9 = v0;
    long v10 = param1;
    char v11 = v1 == 1L;
    char v12 = v1 < 1L;
    char v13 = __parity__((unsigned char)v1 - 1);
    char v14 = (unsigned long)v1 < 1L;
    char v15 = (((v1 - 1L) ^ v1) & (v1 ^ 0x1L)) < 0L;
    char v16 = (((v1 - 1L) ^ (v1 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v12 == v15) {
        char v17 = param0 == 1L;
        char v18 = param0 < 1L;
        char v19 = __parity__((unsigned char)param0 - 1);
        char v20 = (unsigned long)param0 < 1L;
        char v21 = (((param0 - 1L) ^ param0) & (param0 ^ 0x1L)) < 0L;
        char v22 = (((param0 - 1L) ^ (param0 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v18 == v21) {
            long v23 = *(long*)(v9 - 8L);
            long v24 = *(long*)(v9 - 8L);
            long v25 = v23 >>> 9;
            char v26 = (v24 >>> 8L) & 0x1L;
            char v27 = v21;
            char v28 = v25 ? 0: 1;
            char v29 = v25 < 0L;
            char v30 = __parity__((unsigned char)v25);
            unsigned long v31 = (unsigned long)(v25 | 0x1L);
            unsigned long v32 = (unsigned long)(v25 | 0x1L);
            long v33 = (long)(v31 - param0);
            char v34 = v33 ? 0: 1;
            char v35 = v33 < 0L;
            char v36 = __parity__((unsigned char)v33);
            char v37 = (((param0 ^ v32) ^ v33) >>> 4L) & 0x1L;
            char v38 = (unsigned long)param0 > v32;
            char v39 = ((v33 ^ v32) & (param0 ^ v32)) < 0L;
            unsigned long v40 = (unsigned long)(v33 + 1L);
            char v41 = v40 == v1;
            char v42 = (long)v40 > v1;
            char v43 = __parity__((unsigned char)v1 - (unsigned char)v40);
            char v44 = v40 > (unsigned long)v1;
            char v45 = (long)(((unsigned long)(v1 - v40) ^ v1) & (v40 ^ v1)) < 0L;
            char v46 = (((unsigned long)(v1 - v40) ^ (v40 ^ v1)) >>> 4L) & 0x1L;
            if((v41 || v42 != v45)) {
                long v47 = v1;
                v1 = v1 + param0 - 3L;
                if(v1 >= v47) {
                    do {
                        if(*(char*)(v9 - 8L) != 254) {
                            caml_modify(v47 * 4L + v9 - 4L, (unsigned long)v10);
                        }
                        else {
                            *(long*)(v47 * 4L + v9 - 4L) = *(long*)v10;
                        }
                        param0 = v47;
                        v47 += 2L;
                    }
                    while(v1 != param0);
                }
                return 1L;
            }
        }
    }
    long v48 = "Array.fill";
    void* ptr2 = &v2;
    long* ptr3 = &ptr0;
    char v49 = &ptr0 ? 0: 1;
    char v50 = (long)&ptr0 < 0L;
    char v51 = __parity__((unsigned char)&ptr0);
    char v52 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v2 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v53 = (unsigned long)&v2 >= 18446744073709551608L;
    char v54 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v2) & (long*)~(long)(long*)((long)&v2 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, param3, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlArray__fold_left_166(long param0, long param1, long param2, long param3, long param4, long param5) {
    unsigned long v0;
    unsigned long v1;
    long* i;
    for(i = i - 2; caml_young_limit > (unsigned long)i; i -= 2) {
        caml_call_gc(param0, param1, (long)v0, param3, param4, param5);
    }
    long v2 = (long)(i + 1);
    *(long*)(v2 - 8L) = 0x400L;
    *(unsigned long*)v2 = v1;
    unsigned long v3 = 1L;
    unsigned long v4 = (unsigned long)(((*(long*)(param0 - 8L) >>> 9) | 0x1L) - 2L);
    if((long)v4 >= 1L) {
        unsigned long v5 = v4;
        unsigned long v6 = 1L;
        long v7 = v2;
        long v8 = param0;
        long* ptr0 = (long*)v0;
        do {
            long v9 = v8;
            if(*(char*)(v9 - 8L) == 254) {
                i -= 2;
                while(caml_young_limit > (unsigned long)i) {
                    caml_call_gc(v9, (long)v3, (long)v0, param3, param4, param5);
                    i -= 2;
                }
                *i = 1277L;
                *(i + 1) = *(long*)(v3 * 4L + v9 - 4L);
            }
            caml_apply2(ptr0);
            v2 = v7;
            caml_modify(v2, v0);
            v1 = v6;
            v3 = v6 + 2L;
            v6 += 2L;
        }
        while(v1 != v5);
    }
    return *(long*)v2;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlArray__fold_right_172(long param0, long param1, long param2, long param3, long param4, long param5) {
    unsigned long v0;
    long v1;
    unsigned long v2;
    long* i;
    for(i = i - 2; caml_young_limit > (unsigned long)i; i -= 2) {
        caml_call_gc(param0, (long)v0, param2, param3, param4, param5);
    }
    long v3 = (long)(i + 1);
    *(long*)(v3 - 8L) = 0x400L;
    *(long*)v3 = param0;
    unsigned long v4 = (unsigned long)(((*(long*)(v1 - 8L) >>> 9) | 0x1L) - 2L);
    if((long)v4 >= 1L) {
        unsigned long v5 = v4;
        long v6 = v3;
        long v7 = v1;
        long* ptr0 = (long*)v0;
        do {
            long v8 = v7;
            if(*(char*)(v8 - 8L) == 254) {
                i -= 2;
                while(caml_young_limit > (unsigned long)i) {
                    caml_call_gc((long)v4, (long)v0, param2, param3, param4, param5);
                    i -= 2;
                }
                *i = 1277L;
                *(i + 1) = *(long*)(v4 * 4L + v8 - 4L);
            }
            caml_apply2(ptr0);
            v3 = v6;
            caml_modify(v3, v0);
            v2 = v5;
            v4 = v5 - 2L;
            v5 -= 2L;
        }
        while(v2 != 1L);
    }
    return *(long*)v3;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlArray__init_65() {
    long v0;
    long v1;
    long result;
    if(v1 == 1L) {
        return &camlArray__33;
    }
    long v2 = result;
    long v3 = v1;
    long v4 = *(long*)result();
    result = caml_c_call();
    if((long)(unsigned long)(v1 - 2L) >= 3L) {
        unsigned long v5 = (unsigned long)(v1 - 2L);
        long v6 = 3L;
        v3 = result;
        do {
            unsigned long v7 = (unsigned long)*(long*)v2();
            result = v3;
            if(*(char*)(result - 8L) != 254) {
                v0 = v6;
                caml_modify(v0 * 4L + result - 4L, v7);
            }
            else {
                v0 = v6;
                *(long*)(v0 * 4L + result - 4L) = *(long*)v7;
            }
            v6 = v0 + 2L;
        }
        while(v5 + 2L != v6);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlArray__iter_128(long param0, long param1, long param2, long param3) {
    long* ptr0;
    unsigned long v0;
    unsigned long v1 = 1L;
    unsigned long v2 = (unsigned long)(((*(long*)(v0 - 8L) >>> 9) | 0x1L) - 2L);
    if((long)v2 >= 1L) {
        unsigned long v3 = v2;
        unsigned long v4 = 1L;
        unsigned long v5 = v0;
        long* ptr1 = ptr0;
        do {
            unsigned long v6 = v5;
            if(*(char*)(v6 - 8L) == 254) {
                long* i;
                for(i = i - 2; caml_young_limit > (unsigned long)i; i -= 2) {
                    caml_call_gc((long)v1, (long)v2, param1, param0, param2, param3);
                }
                *i = 1277L;
                *(i + 1) = *(long*)(v1 * 4L + v6 - 4L);
            }
            *ptr1();
            v0 = v4;
            v1 = v4 + 2L;
            v4 += 2L;
        }
        while(v0 != v3);
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlArray__iteri_138(long param0, long param1, long param2, long param3) {
    long* ptr0;
    unsigned long v0;
    unsigned long v1 = 1L;
    unsigned long v2 = (unsigned long)(((*(long*)(v0 - 8L) >>> 9) | 0x1L) - 2L);
    if((long)v2 >= 1L) {
        unsigned long v3 = v2;
        unsigned long v4 = 1L;
        unsigned long v5 = v0;
        long* ptr1 = ptr0;
        do {
            unsigned long v6 = v5;
            if(*(char*)(v6 - 8L) == 254) {
                long* i;
                for(i = i - 2; caml_young_limit > (unsigned long)i; i -= 2) {
                    caml_call_gc((long)v1, (long)v6, param1, param0, param2, param3);
                }
                *i = 1277L;
                *(i + 1) = *(long*)(v1 * 4L + v6 - 4L);
            }
            caml_apply2(ptr1);
            v0 = v4;
            v1 = v4 + 2L;
            v4 += 2L;
        }
        while(v0 != v3);
    }
    return 1L;
}

long camlArray__list_length_153() {
    long result;
    unsigned long v0;
    while(v0 != 1L) {
        v0 = *(unsigned long*)(v0 + 8L);
        result = result + 2L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlArray__make_matrix_70(long param0) {
    unsigned long v0;
    long result = caml_c_call();
    if((long)(v0 - 2L) >= 1L) {
        unsigned long v1 = 1L;
        long v2 = result;
        do {
            long v3 = caml_c_call();
            result = v2;
            caml_modify(v1 * 4L + result - 4L, (unsigned long)v3);
            v1 += 2L;
        }
        while(v0 != v1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlArray__map_132(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long* i;
    long* ptr0;
    long v1;
    long v2 = (*(long*)(v1 - 8L) >>> 9) | 0x1L;
    if(v2 == 1L) {
        return &camlArray__24;
    }
    long v3 = v2;
    long v4 = v1;
    long* ptr1 = ptr0;
    if(*(char*)(v1 - 8L) == 254) {
        for(i = i - 2; caml_young_limit > (unsigned long)i; i -= 2) {
            caml_call_gc(param0, (long)ptr0, param2, param3, param4, param5);
        }
        *i = 1277L;
        *(i + 1) = *(long*)v1;
    }
    long* ptr2 = (long*)*ptr0();
    long result = caml_c_call();
    v1 = 3L;
    if((long)(unsigned long)(v3 - 2L) >= 3L) {
        unsigned long v5 = (unsigned long)(v3 - 2L);
        long v6 = 3L;
        v3 = result;
        do {
            long v7 = v4;
            if(*(char*)(v7 - 8L) == 254) {
                i -= 2;
                while(caml_young_limit > (unsigned long)i) {
                    caml_call_gc(v7, (long)ptr2, param2, param3, param4, param5);
                    i -= 2;
                }
                *i = 1277L;
                *(i + 1) = *(long*)((char*)((long)(long*)(v1 * 4L) + v7) - 4L);
            }
            unsigned long v8 = (unsigned long)*ptr1();
            result = v3;
            if(*(char*)(result - 8L) != 254) {
                v0 = v6;
                caml_modify((long)((char*)((long)(long*)(v0 * 4L) + result) - 4L), v8);
            }
            else {
                v0 = v6;
                *(long*)((char*)((long)(long*)(v0 * 4L) + result) - 4L) = *(long*)v8;
            }
            v1 = v0 + 2L;
            v6 = v0 + 2L;
        }
        while(v5 + 2L != v6);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlArray__mapi_142(long param0, long* param1, long param2, long param3, long param4, long param5) {
    long* ptr0;
    long* i;
    long* ptr1;
    long result;
    long* ptr2 = (long*)((*(long*)(result - 8L) >>> 9) | 0x1L);
    if(ptr2 == 1L) {
        return &camlArray__23;
    }
    long* ptr3 = ptr2;
    long v0 = result;
    long* ptr4 = ptr1;
    if(*(char*)(result - 8L) == 254) {
        for(i = i - 2; caml_young_limit > (unsigned long)i; i -= 2) {
            caml_call_gc((long)ptr1, (long)param1, param2, param3, param4, param5);
        }
        *i = 1277L;
        *(i + 1) = *(long*)result;
    }
    caml_apply2(ptr1);
    result = caml_c_call();
    long* ptr5 = (long*)0x3;
    if((long)(long*)((char*)ptr3 - 2L) >= 3L) {
        long* ptr6 = (long*)((char*)ptr3 - 2L);
        long* ptr7 = (long*)0x3;
        ptr3 = (long*)result;
        do {
            long v1 = v0;
            if(*(char*)(v1 - 8L) == 254) {
                i -= 2;
                while(caml_young_limit > (unsigned long)i) {
                    caml_call_gc(v1, (long)ptr1, param2, param3, param4, param5);
                    i -= 2;
                }
                *i = 1277L;
                *(i + 1) = *(long*)((char*)((long)(long*)((long)ptr5 * 4L) + v1) - 4L);
            }
            caml_apply2(ptr4);
            result = (long)ptr3;
            if(*(char*)(result - 8L) != 254) {
                ptr0 = ptr7;
                caml_modify((long)((char*)((long)(long*)((long)ptr0 * 4L) + result) - 4L), (unsigned long)ptr1);
            }
            else {
                ptr0 = ptr7;
                *(long*)((char*)((long)(long*)((long)ptr0 * 4L) + result) - 4L) = ptr1[0];
            }
            ptr5 = (long*)((char*)ptr0 + 2L);
            ptr7 = (long*)((char*)ptr0 + 2L);
        }
        while((long*)((char*)ptr6 + 2L) != ptr7);
    }
    return result;
}

void camlArray__of_list_157() {
    // Decompilation error
}

long camlArray__size_93() {
    long result;
    long* ptr0;
    while(ptr0 != 1L) {
        result = ((*(long*)(*ptr0 - 8L) >>> 9) | 0x1L) + result - 1L;
        ptr0 = *(unsigned long*)(ptr0 + 1);
    }
    return result;
}

void camlArray__sort_179() {
    // Decompilation error
}

void camlArray__stable_sort_215() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long camlArray__sub_108(long param0, long param1, long param2, long param3, long param4, long param5) {
    long* i;
    void* ptr0;
    long v0;
    long v1;
    unsigned long v2;
    long* ptr1 = &ptr0;
    char v3 = &ptr0 == 24L;
    char v4 = (long)&v1 < 0L;
    char v5 = __parity__((unsigned char)&ptr0 - 24);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x18L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&ptr0 < 24L;
    char v8 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x18L)) < 0L;
    unsigned long v9 = v2;
    char v10 = v0 == 1L;
    char v11 = v0 < 1L;
    char v12 = __parity__((unsigned char)v0 - 1);
    char v13 = (unsigned long)v0 < 1L;
    char v14 = (((v0 - 1L) ^ v0) & (v0 ^ 0x1L)) < 0L;
    char v15 = (((v0 - 1L) ^ (v0 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v11 == v14) {
        char v16 = param0 == 1L;
        char v17 = param0 < 1L;
        char v18 = __parity__((unsigned char)param0 - 1);
        char v19 = (unsigned long)param0 < 1L;
        char v20 = (((param0 - 1L) ^ param0) & (param0 ^ 0x1L)) < 0L;
        char v21 = (((param0 - 1L) ^ (param0 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v17 == v20) {
            long v22 = *(long*)(v9 - 8L);
            long v23 = *(long*)(v9 - 8L);
            long v24 = v22 >>> 9;
            char v25 = (v23 >>> 8L) & 0x1L;
            char v26 = v20;
            char v27 = v24 ? 0: 1;
            char v28 = v24 < 0L;
            char v29 = __parity__((unsigned char)v24);
            unsigned long v30 = (unsigned long)(v24 | 0x1L);
            unsigned long v31 = (unsigned long)(v24 | 0x1L);
            long v32 = (long)(v30 - param0);
            char v33 = v32 ? 0: 1;
            char v34 = v32 < 0L;
            char v35 = __parity__((unsigned char)v32);
            char v36 = (((param0 ^ v31) ^ v32) >>> 4L) & 0x1L;
            char v37 = (unsigned long)param0 > v31;
            char v38 = ((v32 ^ v31) & (param0 ^ v31)) < 0L;
            unsigned long v39 = (unsigned long)(v32 + 1L);
            char v40 = v39 == v0;
            char v41 = (long)v39 > v0;
            char v42 = __parity__((unsigned char)v0 - (unsigned char)v39);
            char v43 = v39 > (unsigned long)v0;
            char v44 = (long)(((unsigned long)(v0 - v39) ^ v0) & (v39 ^ v0)) < 0L;
            char v45 = (((unsigned long)(v0 - v39) ^ (v39 ^ v0)) >>> 4L) & 0x1L;
            if((v40 || v41 != v44)) {
                if(param0 == 1L) {
                    return &camlArray__28;
                }
                v1 = param0;
                long v46 = v0;
                unsigned long v47 = v9;
                if(*(char*)(v9 - 8L) == 254) {
                    for(i = i - 2; caml_young_limit > (unsigned long)i; i -= 2) {
                        caml_call_gc(param0, (long)v9, param2, param3, param4, param5);
                    }
                    *i = 1277L;
                    *(long*)(unsigned long)(i + 1) = *(long*)(v0 * 4L + v9 - 4L);
                }
                long v48 = caml_c_call();
                v0 = 3L;
                if(v1 - 2L >= 3L) {
                    v1 -= 2L;
                    do {
                        long v49 = (unsigned long)(v0 + v46) - 1L;
                        unsigned long v50 = v47;
                        if(*(char*)(v50 - 8L) != 254) {
                            v9 = *(unsigned long*)(v49 * 4L + v50 - 4L);
                        }
                        else {
                            i -= 2;
                            while(caml_young_limit > (unsigned long)i) {
                                caml_call_gc((long)v50, v49, param2, param3, param4, param5);
                                i -= 2;
                            }
                            *i = 1277L;
                            *(long*)(unsigned long)(i + 1) = *(long*)(v49 * 4L + v50 - 4L);
                            v9 = (unsigned long)(i + 1);
                        }
                        if(*(char*)(v48 - 8L) != 254) {
                            caml_modify(v0 * 4L + v48 - 4L, v9);
                        }
                        else {
                            *(long*)(v0 * 4L + v48 - 4L) = *(long*)v9;
                        }
                        param0 = v0;
                        v0 += 2L;
                    }
                    while(param0 != v1);
                }
                return (unsigned long)v48;
            }
        }
    }
    long v51 = "Array.sub";
    void* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v52 = &ptr0 ? 0: 1;
    char v53 = (long)&ptr0 < 0L;
    char v54 = __parity__((unsigned char)&ptr0);
    char v55 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x18L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v56 = (unsigned long)&v1 >= 18446744073709551592L;
    char v57 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x18L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, (long)v9, param2, param3, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlArray__to_list_148() {
}

void camlBuffer__add_buffer_115() {
    // Decompilation error
}

void camlBuffer__add_channel_118() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlBuffer__add_char_100() {
}

void camlBuffer__add_string_110() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlBuffer__add_substitute_150() {
}

void camlBuffer__add_substring_104() {
    // Decompilation error
}

void camlBuffer__advance_to_closing_126() {
    // Decompilation error
}

void camlBuffer__advance_to_non_alpha_136() {
    // Decompilation error
}

long camlBuffer__blit_79(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    unsigned long v1;
    char v2 = param2 == 1L;
    char v3 = param2 < 1L;
    char v4 = __parity__((unsigned char)param2 - 1);
    char v5 = (unsigned long)param2 < 1L;
    char v6 = (((param2 - 1L) ^ param2) & (param2 ^ 0x1L)) < 0L;
    char v7 = (((param2 - 1L) ^ (param2 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v3 == v6) {
        v2 = v1 == 1L;
        v3 = (long)v1 < 1L;
        v4 = __parity__((unsigned char)v1 - 1);
        v5 = v1 < 1L;
        v6 = (((v1 - 1L) ^ v1) & (v1 ^ 0x1L)) < 0L;
        v7 = (((v1 - 1L) ^ (v1 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v3 == v6) {
            unsigned long v8 = *(unsigned long*)(v0 + 8L);
            unsigned long v9 = *(unsigned long*)(v0 + 8L);
            long v10 = (long)(v8 - param2);
            char v11 = v10 ? 0: 1;
            char v12 = v10 < 0L;
            char v13 = __parity__((unsigned char)v10);
            char v14 = (((param2 ^ v9) ^ v10) >>> 4L) & 0x1L;
            char v15 = (unsigned long)param2 > v9;
            char v16 = ((v10 ^ v9) & (param2 ^ v9)) < 0L;
            param3 = v10 + 1L;
            v2 = param3 == v1;
            v3 = param3 > (long)v1;
            v4 = __parity__((unsigned char)v1 - (unsigned char)param3);
            v5 = (unsigned long)param3 > v1;
            v6 = (((v1 - param3) ^ v1) & (param3 ^ v1)) < 0L;
            v7 = (((v1 - param3) ^ (param3 ^ v1)) >>> 4L) & 0x1L;
            if((v2 || v3 != v6)) {
                v2 = param1 == 1L;
                v3 = param1 < 1L;
                v4 = __parity__((unsigned char)param1 - 1);
                v5 = (unsigned long)param1 < 1L;
                v6 = (((param1 - 1L) ^ param1) & (param1 ^ 0x1L)) < 0L;
                v7 = (((param1 - 1L) ^ (param1 ^ 0x1L)) >>> 4L) & 0x1L;
                if(v3 == v6) {
                    long v17 = *(long*)(param0 - 8L);
                    long v18 = *(long*)(param0 - 8L);
                    long v19 = v17 >>> 10;
                    char v20 = (v18 >>> 9L) & 0x1L;
                    char v21 = v6;
                    char v22 = v19 ? 0: 1;
                    char v23 = v19 < 0L;
                    char v24 = __parity__((unsigned char)v19);
                    unsigned long v25 = (unsigned long)(v19 * 8L - 1L);
                    param4 = (long)*(char*)(v25 + param0);
                    unsigned long v26 = v25;
                    unsigned long v27 = v25 - param4;
                    char v28 = v27 ? 0: 1;
                    char v29 = v27 >= 0x8000000000000000L;
                    char v30 = __parity__((unsigned char)v27);
                    char v31 = (((param4 ^ v26) ^ v27) >>> 4L) & 0x1L;
                    char v32 = (unsigned long)param4 > v26;
                    char v33 = (long)((v27 ^ v26) & (param4 ^ v26)) < 0L;
                    v9 = v27;
                    long v34 = (long)(v27 * 2L);
                    char v35 = v9 >= 0x8000000000000000L;
                    char v36 = v9 >= 0x8000000000000000L ^ ((v9 >>> 62L) & 0x1L);
                    char v37 = v34 ? 0: 1;
                    char v38 = v34 < 0L;
                    char v39 = __parity__((unsigned char)v34);
                    long v40 = v34 - param2;
                    param3 = v40 + 2L;
                    v2 = param3 == param1;
                    v3 = param3 > param1;
                    v4 = __parity__((unsigned char)param1 - (unsigned char)param3);
                    v5 = (unsigned long)param3 > (unsigned long)param1;
                    v6 = (((param1 - param3) ^ param1) & (param3 ^ param1)) < 0L;
                    v7 = (((param1 - param3) ^ (param3 ^ param1)) >>> 4L) & 0x1L;
                    if((v2 || v3 != v6)) {
                        return camlString__blit_84(param0, param1, param2);
                    }
                }
            }
        }
    }
    long v41 = "Buffer.blit";
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, param3, param4, param5);
}

long camlBuffer__clear_90() {
    long v0;
    *(long*)(v0 + 8L) = 1L;
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlBuffer__closing_125(long param0, long param1, long param2, long param3, long param4, long param5) {
    unsigned long v0;
    if(v0 != 81L) {
        if(v0 != 247L) {
            long* i;
            for(i = i - 3; caml_young_limit > (unsigned long)i; i -= 3) {
                caml_call_gc(param0, param1, param2, param3, param4, param5);
            }
            *i = 0x800L;
            *(i + 1) = &caml_exn_Assert_failure;
            *(i + 2) = &camlBuffer__21;
            caml_raise_exn();
        }
        return 251L;
    }
    return 83L;
}

long camlBuffer__contents_72(long param0, long param1, long param2, long param3, long param4, long param5) {
    long* ptr0;
    return camlString__sub_74(*(ptr0 + 1), param1, param2, param3, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlBuffer__create_67() {
}

long camlBuffer__entry() {
    camlBuffer = &camlBuffer__20;
    gvar_6533B8 = &camlBuffer__19;
    gvar_6533C0 = &camlBuffer__18;
    gvar_6533C8 = &camlBuffer__17;
    gvar_6533D0 = &camlBuffer__16;
    gvar_6533D8 = &camlBuffer__15;
    gvar_6533E0 = &camlBuffer__14;
    gvar_6533E8 = &camlBuffer__13;
    gvar_653428 = &camlBuffer__12;
    gvar_6533F0 = &camlBuffer__11;
    gvar_653400 = &camlBuffer__10;
    gvar_6533F8 = &camlBuffer__9;
    gvar_653410 = &camlBuffer__8;
    gvar_653418 = &camlBuffer__7;
    gvar_653420 = &camlBuffer__6;
    gvar_653430 = &camlBuffer__5;
    gvar_653438 = &camlBuffer__4;
    gvar_653440 = &camlBuffer__3;
    gvar_653448 = &camlBuffer__2;
    gvar_653408 = &camlBuffer__1;
    return 1L;
}

void camlBuffer__find_ident_142() {
    // Decompilation error
}

long camlBuffer__length_88() {
    long v0;
    return *(long*)(v0 + 8L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlBuffer__nth_85(long param0, long param1, long param2, long param3, long param4, long param5) {
    long* ptr0;
    unsigned long v0;
    char v1 = v0 == 1L;
    char v2 = (long)v0 < 1L;
    char v3 = __parity__((unsigned char)v0 - 1);
    char v4 = v0 < 1L;
    char v5 = (((v0 - 1L) ^ v0) & (v0 ^ 0x1L)) < 0L;
    char v6 = (((v0 - 1L) ^ (v0 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v2 == v5) {
        param0 = *(ptr0 + 1);
        v1 = v0 == param0;
        v2 = (long)v0 < param0;
        v3 = __parity__((unsigned char)v0 - (unsigned char)param0);
        v4 = v0 < (unsigned long)param0;
        v5 = (((v0 - param0) ^ v0) & (v0 ^ param0)) < 0L;
        v6 = (((v0 - param0) ^ (v0 ^ param0)) >>> 4L) & 0x1L;
        if(v2 != v5) {
            param1 = *ptr0;
            v0 >>= 1;
            long v7 = (*(long*)(param1 - 8L) >>> 10) * 8L - 1L;
            if((unsigned long)(v7 - (unsigned long)*(char*)(v7 + param1)) > v0) {
                return (long*)((unsigned long)*(char*)(v0 + param1) * 2L + 1L);
            }
            long v8 = caml_ml_array_bound_error();
            return *(unsigned long*)(v8 + 8L);
        }
    }
    long v9 = "Buffer.nth";
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, param3, param4, param5);
}

long camlBuffer__output_buffer_122(long param0, long param1, long param2, long param3) {
    long* ptr0;
    return camlPervasives__output_218(1L, *(ptr0 + 1), param1, param0, param2, param3);
}

long camlBuffer__reset_92() {
    long v0;
    *(long*)(v0 + 8L) = 1L;
    caml_modify(v0, *(unsigned long*)(v0 + 24L));
    long v1 = *(long*)v0;
    unsigned long v2 = (unsigned long)((*(long*)(v1 - 8L) >>> 10) * 8L - 1L);
    *(long*)(v0 + 16L) = (v2 - (unsigned long)*(char*)(v2 + v1)) * 2L + 1L;
    return 1L;
}

void camlBuffer__resize_94() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlBuffer__sub_74(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    void* ptr0;
    long v1;
    unsigned long v2;
    char v3 = v2 == 1L;
    char v4 = (long)v2 < 1L;
    char v5 = __parity__((unsigned char)v2 - 1);
    char v6 = v2 < 1L;
    char v7 = (((v2 - 1L) ^ v2) & (v2 ^ 0x1L)) < 0L;
    char v8 = (((v2 - 1L) ^ (v2 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v4 == v7) {
        char v9 = param0 == 1L;
        char v10 = param0 < 1L;
        char v11 = __parity__((unsigned char)param0 - 1);
        char v12 = (unsigned long)param0 < 1L;
        char v13 = (((param0 - 1L) ^ param0) & (param0 ^ 0x1L)) < 0L;
        char v14 = (((param0 - 1L) ^ (param0 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v10 == v13) {
            unsigned long v15 = *(unsigned long*)(v1 + 8L);
            unsigned long v16 = *(unsigned long*)(v1 + 8L);
            long v17 = (long)(v15 - param0);
            char v18 = v17 ? 0: 1;
            char v19 = v17 < 0L;
            char v20 = __parity__((unsigned char)v17);
            char v21 = (((param0 ^ v16) ^ v17) >>> 4L) & 0x1L;
            char v22 = (unsigned long)param0 > v16;
            char v23 = ((v17 ^ v16) & (param0 ^ v16)) < 0L;
            param1 = v17 + 1L;
            char v24 = v2 == param1;
            char v25 = (long)v2 < param1;
            char v26 = __parity__((unsigned char)v2 - (unsigned char)param1);
            char v27 = v2 < (unsigned long)param1;
            char v28 = (((v2 - param1) ^ v2) & (v2 ^ param1)) < 0L;
            char v29 = (((v2 - param1) ^ (v2 ^ param1)) >>> 4L) & 0x1L;
            if((v24 || v25 != v28)) {
                long result = caml_c_call();
                camlString__blit_84(result, 1L, param0);
                return result;
            }
        }
    }
    long v30 = "Buffer.sub";
    void* ptr1 = &v0;
    long* ptr2 = &ptr0;
    char v31 = &ptr0 ? 0: 1;
    char v32 = (long)&ptr0 < 0L;
    char v33 = __parity__((unsigned char)&ptr0);
    char v34 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x28L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v35 = (unsigned long)&v0 >= 18446744073709551576L;
    char v36 = (long)(long*)((long)(long*)((long)&v0 ^ (long)&ptr0) & (long*)~(long)(long*)((long)&v0 ^ 0x28L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, param3, param4, param5);
}

long camlCallback__entry() {
    camlCallback = &camlCallback__2;
    gvar_655D08 = &camlCallback__1;
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlCallback__register_59() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlCallback__register_exception_62(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    unsigned long* ptr0;
    if(*(char*)(ptr0 - 1) == 254) {
        long* i;
        for(i = i - 2; caml_young_limit > (unsigned long)i; i -= 2) {
            caml_call_gc(v0, param1, param2, param3, param4, param5);
        }
        *i = 1277L;
        *(i + 1) = *ptr0;
    }
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlCamlinternalOO__add_initializer_282(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 3; caml_young_limit > (unsigned long)i; i -= 3) {
        caml_call_gc(v0, param1, param2, param3, param4, param5);
    }
    *i = 0x800L;
    *(long*)(unsigned long)(i + 1) = v1;
    *(i + 2) = *(long*)(v0 + 56L);
    caml_modify(v0 + 56L, (unsigned long)(i + 1));
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__app_const_400(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 5; caml_young_limit > (unsigned long)i; i -= 5) {
        caml_call_gc(param0, v0, param2, param3, param4, param5);
    }
    *i = 4343L;
    *(i + 1) = &camlCamlinternalOO__fun_804;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__app_const_const_417(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 6; caml_young_limit > (unsigned long)i; i -= 6) {
        caml_call_gc(param0, param1, v0, param3, param4, param5);
    }
    *i = 5367L;
    *(i + 1) = &camlCamlinternalOO__fun_820;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    *(i + 5) = param0;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__app_const_env_442(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 7; caml_young_limit > (unsigned long)i; i -= 7) {
        caml_call_gc(param0, param1, param2, v0, param4, param5);
    }
    *i = 6391L;
    *(i + 1) = &camlCamlinternalOO__fun_840;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    *(i + 5) = param0;
    *(i + 6) = param1;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__app_const_meth_427(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 6; caml_young_limit > (unsigned long)i; i -= 6) {
        caml_call_gc(param0, param1, v0, param3, param4, param5);
    }
    *i = 5367L;
    *(i + 1) = &camlCamlinternalOO__fun_828;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    *(i + 5) = param0;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__app_const_var_422(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 6; caml_young_limit > (unsigned long)i; i -= 6) {
        caml_call_gc(param0, param1, v0, param3, param4, param5);
    }
    *i = 5367L;
    *(i + 1) = &camlCamlinternalOO__fun_824;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    *(i + 5) = param0;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__app_env_408(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 6; caml_young_limit > (unsigned long)i; i -= 6) {
        caml_call_gc(param0, param1, v0, param3, param4, param5);
    }
    *i = 5367L;
    *(i + 1) = &camlCamlinternalOO__fun_812;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    *(i + 5) = param0;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__app_env_const_448(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 7; caml_young_limit > (unsigned long)i; i -= 7) {
        caml_call_gc(param0, param1, param2, v0, param4, param5);
    }
    *i = 6391L;
    *(i + 1) = &camlCamlinternalOO__fun_844;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    *(i + 5) = param0;
    *(i + 6) = param1;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__app_meth_413(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 5; caml_young_limit > (unsigned long)i; i -= 5) {
        caml_call_gc(param0, v0, param2, param3, param4, param5);
    }
    *i = 4343L;
    *(i + 1) = &camlCamlinternalOO__fun_816;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__app_meth_const_437(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 6; caml_young_limit > (unsigned long)i; i -= 6) {
        caml_call_gc(param0, param1, v0, param3, param4, param5);
    }
    *i = 5367L;
    *(i + 1) = &camlCamlinternalOO__fun_836;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    *(i + 5) = param0;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__app_var_404(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 5; caml_young_limit > (unsigned long)i; i -= 5) {
        caml_call_gc(param0, v0, param2, param3, param4, param5);
    }
    *i = 4343L;
    *(i + 1) = &camlCamlinternalOO__fun_808;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__app_var_const_432(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 6; caml_young_limit > (unsigned long)i; i -= 6) {
        caml_call_gc(param0, param1, v0, param3, param4, param5);
    }
    *i = 5367L;
    *(i + 1) = &camlCamlinternalOO__fun_832;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    *(i + 5) = param0;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlCamlinternalOO__compare_139() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlCamlinternalOO__compare_157() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlCamlinternalOO__compare_161() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlCamlinternalOO__copy_65() {
    long result = caml_c_call();
    camlCamlinternalOO__set_id_61();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlCamlinternalOO__create_object_323() {
    long* ptr0;
    long* ptr1 = ptr0;
    long v0 = caml_c_call();
    long result = v0;
    unsigned long v1 = *(unsigned long*)(ptr0 + 1);
    if(*(char*)(v0 - 8L) != 254) {
        caml_modify(v0, v1);
    }
    else {
        *(long*)v0 = *(long*)v1;
    }
    camlCamlinternalOO__set_id_61();
    return result;
}

long camlCamlinternalOO__create_object_and_run_initializers_343() {
    long result;
    if(result != 1L) {
        return result;
    }
    long result1 = camlCamlinternalOO__create_object_323();
    camlCamlinternalOO__run_initializers_334();
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlCamlinternalOO__create_object_opt_326() {
    long result;
    long* ptr0;
    if(result != 1L) {
        return result;
    }
    long* ptr1 = ptr0;
    long v0 = caml_c_call();
    long result1 = v0;
    unsigned long v1 = *(unsigned long*)(ptr0 + 1);
    if(*(char*)(v0 - 8L) != 254) {
        caml_modify(v0, v1);
    }
    else {
        *(long*)v0 = *(long*)v1;
    }
    camlCamlinternalOO__set_id_61();
    return result1;
}

void camlCamlinternalOO__create_table_285() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long* camlCamlinternalOO__dummy_class_320(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long* i;
    for(i = i - 9; caml_young_limit > (unsigned long)i; i -= 9) {
        caml_call_gc(v0, param1, param2, param3, param4, param5);
    }
    *i = 3319L;
    *(i + 1) = &camlCamlinternalOO__undef_322;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = 0x1000L;
    *(unsigned long*)(i + 5) = i + 1;
    *(unsigned long*)(i + 6) = i + 1;
    *(unsigned long*)(i + 7) = i + 1;
    *(i + 8) = 1L;
    return (unsigned long*)(i + 5);
}

void camlCamlinternalOO__entry() {
    // Decompilation error
}

void camlCamlinternalOO__fit_size_184() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__get_const_383(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long* i;
    for(i = i - 4; caml_young_limit > (unsigned long)i; i -= 4) {
        caml_call_gc(v0, param1, param2, param3, param4, param5);
    }
    *i = 3319L;
    *(i + 1) = &camlCamlinternalOO__fun_784;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__get_env_389(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 5; caml_young_limit > (unsigned long)i; i -= 5) {
        caml_call_gc(param0, v0, param2, param3, param4, param5);
    }
    *i = 4343L;
    *(i + 1) = &camlCamlinternalOO__fun_792;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__get_meth_393(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long* i;
    for(i = i - 4; caml_young_limit > (unsigned long)i; i -= 4) {
        caml_call_gc(v0, param1, param2, param3, param4, param5);
    }
    *i = 3319L;
    *(i + 1) = &camlCamlinternalOO__fun_796;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlCamlinternalOO__get_method_217() {
}

void camlCamlinternalOO__get_method_label_206() {
    // Decompilation error
}

void camlCamlinternalOO__get_method_labels_210() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__get_var_386(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long* i;
    for(i = i - 4; caml_young_limit > (unsigned long)i; i -= 4) {
        caml_call_gc(v0, param1, param2, param3, param4, param5);
    }
    *i = 3319L;
    *(i + 1) = &camlCamlinternalOO__fun_788;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlCamlinternalOO__get_variable_276() {
}

void camlCamlinternalOO__get_variables_279() {
    // Decompilation error
}

void camlCamlinternalOO__inherits_294() {
    // Decompilation error
}

void camlCamlinternalOO__init_class_292() {
    // Decompilation error
}

long camlCamlinternalOO__iter_f_330() {
    unsigned long* ptr0;
    long v0;
    while(ptr0 != 1L) {
        long v1 = v0;
        unsigned long* ptr1 = *(ptr0 + 1);
        **ptr0();
        ptr0 = ptr1;
    }
    return 1L;
}

void camlCamlinternalOO__lookup_tables_379() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlCamlinternalOO__make_class_304() {
}

void camlCamlinternalOO__make_class_store_314() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__meth_app_const_454(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 5; caml_young_limit > (unsigned long)i; i -= 5) {
        caml_call_gc(param0, v0, param2, param3, param4, param5);
    }
    *i = 4343L;
    *(i + 1) = &camlCamlinternalOO__fun_848;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__meth_app_env_462(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 6; caml_young_limit > (unsigned long)i; i -= 6) {
        caml_call_gc(param0, param1, v0, param3, param4, param5);
    }
    *i = 5367L;
    *(i + 1) = &camlCamlinternalOO__fun_856;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    *(i + 5) = param0;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__meth_app_meth_467(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 5; caml_young_limit > (unsigned long)i; i -= 5) {
        caml_call_gc(param0, v0, param2, param3, param4, param5);
    }
    *i = 4343L;
    *(i + 1) = &camlCamlinternalOO__fun_860;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__meth_app_var_458(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 5; caml_young_limit > (unsigned long)i; i -= 5) {
        caml_call_gc(param0, v0, param2, param3, param4, param5);
    }
    *i = 4343L;
    *(i + 1) = &camlCamlinternalOO__fun_852;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlCamlinternalOO__method_impl_547() {
}

void camlCamlinternalOO__narrow_222() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlCamlinternalOO__new_cache_492() {
}

long camlCamlinternalOO__new_id_59() {
    long result = *gvar_655EA8;
    long* ptr0 = gvar_655EA8;
    *ptr0 = *ptr0 + 2L;
    return result;
}

void camlCamlinternalOO__new_method_203() {
    // Decompilation error
}

void camlCamlinternalOO__new_methods_variables_266() {
    // Decompilation error
}

long camlCamlinternalOO__new_slot_257() {
    long* ptr0;
    long result = *ptr0;
    *ptr0 = result + 2L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlCamlinternalOO__new_table_186() {
}

void camlCamlinternalOO__new_variable_260() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlCamlinternalOO__public_method_label_102(long param0, long param1, unsigned long param2, long param3, unsigned long param4, long param5) {
    char v0;
    long v1;
    char v2;
    long v3;
    void* ptr0;
    unsigned long v4;
    long* ptr1 = &v1;
    char v5 = &v1 == 8L;
    char v6 = (long)&v2 < 0L;
    char v7 = __parity__((unsigned char)&v1 - 8);
    char v8 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&v2) >>> 4L) & 0x1L);
    char v9 = (unsigned long)&v1 < 8L;
    char v10 = (long)(long*)((long)(long*)((long)&v1 ^ (long)&v2) & (long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    long v11 = v3;
    while(1) {
        unsigned long v12 = v4;
        v4 -= 16L;
        char v13 = v4 ? 0: 1;
        char v14 = v4 >= 0x8000000000000000L;
        char v15 = __parity__((unsigned char)v4);
        char v16 = (((v12 ^ 0x10L) ^ v4) >>> 4L) & 0x1L;
        char v17 = v12 < 16L;
        char v18 = (long)((v4 ^ v12) & (v12 ^ 0x10L)) < 0L;
        long v19 = &caml_young_limit;
        char v20 = caml_young_limit == v4;
        char v21 = (long)caml_young_limit > (long)v4;
        char v22 = __parity__((unsigned char)v4 - (unsigned char)caml_young_limit);
        char v23 = caml_young_limit > v4;
        v0 = (long)(((v4 - caml_young_limit) ^ v4) & (caml_young_limit ^ v4)) < 0L;
        char v24 = (((v4 - caml_young_limit) ^ (caml_young_limit ^ v4)) >>> 4L) & 0x1L;
        if(!v23) {
            break;
        }
        else {
            long v25 = caml_call_gc(param0, param1, (long)param2, param3, (long)param4, param5);
        }
    }
    long* ptr2 = (long*)(v4 + 8L);
    *(ptr2 - 1) = 0x400L;
    *ptr2 = 1L;
    unsigned long v26 = 1L;
    long v27 = *(long*)(v11 - 8L);
    long v28 = *(long*)(v11 - 8L);
    long v29 = v27 >>> 10;
    char v30 = (v28 >>> 9L) & 0x1L;
    char v31 = v0;
    char v32 = v29 ? 0: 1;
    char v33 = v29 < 0L;
    char v34 = __parity__((unsigned char)v29);
    unsigned long v35 = (unsigned long)(v29 * 8L - 1L);
    param2 = (unsigned long)*(char*)(v11 + v35);
    unsigned long v36 = v35;
    unsigned long v37 = v35 - param2;
    char v38 = v37 ? 0: 1;
    char v39 = v37 >= 0x8000000000000000L;
    char v40 = __parity__((unsigned char)v37);
    char v41 = (((param2 ^ v36) ^ v37) >>> 4L) & 0x1L;
    char v42 = param2 > v36;
    char v43 = (long)((param2 ^ v36) & (v37 ^ v36)) < 0L;
    unsigned long v44 = (unsigned long)(v37 * 2L - 1L);
    char v45 = v44 == 1L;
    char v46 = (long)v44 > 1L;
    char v47 = __parity__(1 - (unsigned char)v44);
    char v48 = v44 > 1L;
    char v49 = (((1L - v44) ^ 0x1L) & (v44 ^ 0x1L)) < 0L;
    char v50 = (((1L - v44) ^ (v44 ^ 0x1L)) >>> 4L) & 0x1L;
    if((v45 || v46 != v49)) {
        do {
            unsigned long v51 = v26;
            unsigned long v52 = v26;
            param4 = v51 >> 1;
            char v53 = v52 & 0x1L;
            char v54 = 0;
            char v55 = param4 ? 0: 1;
            char v56 = param4 >= 0x8000000000000000L;
            char v57 = __parity__((unsigned char)param4);
            long v58 = *(long*)(v11 - 8L);
            long v59 = *(long*)(v11 - 8L);
            long v60 = v58 >>> 10;
            char v61 = (v59 >>> 9L) & 0x1L;
            char v62 = 0;
            char v63 = v60 ? 0: 1;
            char v64 = v60 < 0L;
            char v65 = __parity__((unsigned char)v60);
            long v66 = v60 * 8L - 1L;
            long v67 = (unsigned long)*(char*)(v66 + v11);
            unsigned long v68 = (unsigned long)(v66 - v67);
            char v69 = v68 == param4;
            char v70 = (long)v68 < (long)param4;
            char v71 = __parity__((unsigned char)v68 - (unsigned char)param4);
            char v72 = v68 < param4;
            char v73 = (long)(((v68 - param4) ^ v68) & (v68 ^ param4)) < 0L;
            char v74 = (((v68 - param4) ^ (v68 ^ param4)) >>> 4L) & 0x1L;
            if((v72 || v69)) {
                goto loc_422B52;
            }
            else {
                long v75 = *ptr2;
                long v76 = *ptr2;
                long v77 = v75 >> 1;
                char v78 = v76 & 0x1L;
                char v79 = 0;
                char v80 = v77 ? 0: 1;
                char v81 = v77 < 0L;
                char v82 = __parity__((unsigned char)v77);
                long v83 = v77;
                long v84 = v77 * 446L;
                char v85 = (__int128)v83 * 0x1BEX != (__int128)v84;
                char v86 = (__int128)v83 * 0x1BEX != (__int128)v84;
                long v87 = (unsigned long)*(char*)(v11 + param4) * 2L + v84 + 1L;
                *ptr2 = (unsigned long)*(char*)(v11 + param4) * 2L + v84 + 1L;
                param2 = v26;
                v26 += 2L;
                v45 = param2 == v44;
                v46 = (long)param2 < (long)v44;
                v47 = __parity__((unsigned char)param2 - (unsigned char)v44);
                v48 = param2 < v44;
                v49 = (long)(((param2 - v44) ^ param2) & (param2 ^ v44)) < 0L;
                char v88 = (((param2 - v44) ^ (param2 ^ v44)) >>> 4L) & 0x1L;
            }
            if(v45) {
                break;
            loc_422B52:
                long* ptr3 = &ptr0;
                long v89 = /*BAD_CALL!*/ caml_ml_array_bound_error();
            }
        }
        while(1);
    }
    *ptr2 = *ptr2 & 0xffffffffL;
    return (long)*ptr2 > 0x7fffffffL ? *ptr2 - 0x100000000L: *ptr2;
}

void camlCamlinternalOO__put_196() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlCamlinternalOO__resize_191() {
}

long camlCamlinternalOO__run_initializers_334() {
    long v0;
    if(*(unsigned long*)(v0 + 56L) != 1L) {
        return camlCamlinternalOO__iter_f_330();
    }
    return 1L;
}

unsigned long camlCamlinternalOO__run_initializers_opt_338(unsigned long param0) {
    unsigned long v0;
    unsigned long result;
    if(v0 == 1L) {
        unsigned long v1 = result;
        if(*(unsigned long*)(param0 + 56L) != 1L) {
            camlCamlinternalOO__iter_f_330();
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__send_const_471(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 6; caml_young_limit > (unsigned long)i; i -= 6) {
        caml_call_gc(param0, param1, v0, param3, param4, param5);
    }
    *i = 5367L;
    *(i + 1) = &camlCamlinternalOO__fun_864;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    *(i + 5) = param0;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__send_env_481(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 7; caml_young_limit > (unsigned long)i; i -= 7) {
        caml_call_gc(param0, param1, param2, v0, param4, param5);
    }
    *i = 6391L;
    *(i + 1) = &camlCamlinternalOO__fun_872;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    *(i + 5) = param0;
    *(i + 6) = param1;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__send_meth_487(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 6; caml_young_limit > (unsigned long)i; i -= 6) {
        caml_call_gc(param0, param1, v0, param3, param4, param5);
    }
    *i = 5367L;
    *(i + 1) = &camlCamlinternalOO__fun_876;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    *(i + 5) = param0;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__send_var_476(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 6; caml_young_limit > (unsigned long)i; i -= 6) {
        caml_call_gc(param0, param1, v0, param3, param4, param5);
    }
    *i = 5367L;
    *(i + 1) = &camlCamlinternalOO__fun_868;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    *(i + 5) = param0;
    return i + 1;
}

long camlCamlinternalOO__set_id_61() {
    long v0;
    long* ptr0;
    long v1 = *ptr0;
    *(long*)(v0 + 8L) = *ptr0;
    *ptr0 = v1 + 2L;
    return 1L;
}

void camlCamlinternalOO__set_method_213() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlCamlinternalOO__set_methods_609() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlCamlinternalOO__set_var_396(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long* i;
    for(i = i - 5; caml_young_limit > (unsigned long)i; i -= 5) {
        caml_call_gc(v0, param1, param2, param3, param4, param5);
    }
    *i = 4343L;
    *(i + 1) = &caml_curry2;
    *(i + 2) = 5L;
    *(i + 3) = &camlCamlinternalOO__fun_800;
    *(i + 4) = v0;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlCamlinternalOO__stats_623() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlCamlinternalOO__to_array_264() {
    long v0;
    long v1 = caml_c_call();
    return v1 == 1L ? v0: &camlCamlinternalOO__72;
}

void camlCamlinternalOO__to_list_220() {
    // Decompilation error
}

void camlCamlinternalOO__widen_244() {
    // Decompilation error
}

unsigned long camlChar__chr_60(long param0, long param1, long param2, long param3, long param4, long param5) {
    unsigned long result;
    char v0 = result == 1L;
    char v1 = (long)result < 1L;
    char v2 = __parity__((unsigned char)result - 1);
    char v3 = result < 1L;
    char v4 = (((result - 1L) ^ result) & (result ^ 0x1L)) < 0L;
    char v5 = (((result - 1L) ^ (result ^ 0x1L)) >>> 4L) & 0x1L;
    if(v1 == v4) {
        v0 = result == 0x1ffL;
        v1 = (long)result < 0x1ffL;
        v2 = __parity__((unsigned char)result - 0xff);
        v3 = result < 0x1ffL;
        v4 = (((result - 0x1ffL) ^ result) & (result ^ 0x1ffL)) < 0L;
        v5 = (((result - 0x1ffL) ^ (result ^ 0x1ffL)) >>> 4L) & 0x1L;
        if((v0 || v1 != v4)) {
            return result;
        }
    }
    long v6 = "Char.chr";
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, param3, param4, param5);
}

long camlChar__compare_76() {
    unsigned long v0;
    unsigned long v1;
    return v1 - v0 + 1L;
}

long camlChar__entry() {
    camlChar = &camlChar__5;
    gvar_650D18 = &camlChar__4;
    gvar_650D20 = &camlChar__3;
    gvar_650D28 = &camlChar__2;
    gvar_650D30 = &camlChar__1;
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlChar__escaped_66() {
    long result;
    long v0;
    unsigned long v1;
    unsigned long v2;
    long* ptr0 = &v0;
    long* ptr1 = &v2;
    char v3 = &v0 == 8L;
    char v4 = (long)&v2 < 0L;
    char v5 = __parity__((unsigned char)&v0 - 8);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x8L) ^ (long)&v2) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&v0 < 8L;
    char v8 = (long)(long*)((long)(long*)((long)&v2 ^ (long)&v0) & (long)(long*)((long)&v0 ^ 0x8L)) < 0L;
    unsigned long v9 = v1;
    char v10 = v9 == 79L;
    char v11 = (long)v9 < 79L;
    char v12 = __parity__((unsigned char)v9 - 79);
    char v13 = v9 < 79L;
    char v14 = (((v9 - 79L) ^ v9) & (v9 ^ 0x4fL)) < 0L;
    char v15 = (((v9 - 79L) ^ (v9 ^ 0x4fL)) >>> 4L) & 0x1L;
    if(!v10) {
        char v16 = v9 == 185L;
        char v17 = (long)v9 < 185L;
        char v18 = __parity__((unsigned char)v9 - 185);
        char v19 = v9 < 185L;
        char v20 = (((v9 - 185L) ^ v9) & (v9 ^ 0xb9L)) < 0L;
        char v21 = (((v9 - 185L) ^ (v9 ^ 0xb9L)) >>> 4L) & 0x1L;
        if(!v16) {
            v2 = v9;
            char v22 = v9 == 29L;
            char v23 = (long)v9 < 29L;
            char v24 = __parity__((unsigned char)v9 - 29);
            char v25 = v9 < 29L;
            char v26 = (((v9 - 29L) ^ v9) & (v9 ^ 0x1dL)) < 0L;
            char v27 = (((v9 - 29L) ^ (v9 ^ 0x1dL)) >>> 4L) & 0x1L;
            if(v23 != v26) {
                unsigned long v28 = v9;
                unsigned long v29 = v9;
                long v30 = (long)(v28 >> 1);
                char v31 = v29 & 0x1L;
                char v32 = 0;
                char v33 = v30 ? 0: 1;
                char v34 = v30 < 0L;
                char v35 = __parity__((unsigned char)v30);
                long v36 = &gvar_43C510;
                result = (long)*(int*)(v30 * 4L + (long)&gvar_43C510);
                long v37 = &gvar_43C510;
                long v38 = result + &gvar_43C510;
                char v39 = v38 ? 0: 1;
                char v40 = v38 < 0L;
                char v41 = __parity__((unsigned char)v38);
                char v42 = (((result ^ &gvar_43C510) ^ v38) >>> 4L) & 0x1L;
                char v43 = (unsigned long)result >= 18446744073705110256L;
                char v44 = ((v38 ^ &gvar_43C510) & ~(result ^ &gvar_43C510)) < 0L;
                jump v38;
            }
            long v45 = caml_c_call();
            if(v45 != 1L) {
                result = caml_c_call();
                *(char*)result = (unsigned char)(v2 >>> 1L);
                return result;
            }
            long result1 = caml_c_call();
            *(char*)result1 = 92;
            v9 = v2;
            *(char*)(result1 + 1L) = (unsigned char)(((long)(v9 >> 1) / 100L * 2L + 97L) >>> 1L);
            *(char*)(result1 + 2L) = (unsigned char)(((long)(v9 >> 1) / 10L % 10L * 2L + 97L) >>> 1L);
            *(char*)(result1 + 3L) = (unsigned char)(((long)(v9 >> 1) % 10L * 2L + 97L) >>> 1L);
            return result1;
        }
        return &camlChar__7;
    }
    return &camlChar__6;
}

unsigned long camlChar__lowercase_71() {
    unsigned long v0;
    return ((long)v0 >= 131L && (long)v0 <= 181L) || ((long)v0 >= 0x181L && (long)v0 <= 429L) || ((long)v0 >= 433L && (long)v0 <= 445L) ? v0 + 64L: v0;
}

unsigned long camlChar__uppercase_73() {
    unsigned long v0;
    return ((long)v0 >= 195L && (long)v0 <= 245L) || ((long)v0 >= 0x1c1L && (long)v0 <= 493L) || ((long)v0 >= 0x1f1L && (long)v0 <= 509L) ? v0 - 64L: v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long* camlHashtbl__Make_279(long param0, long param1, long param2, long* param3, long param4, long* param5) {
    long v0;
    unsigned long v1 = camlHashtbl;
    unsigned long v2 = gvar_651848;
    unsigned long v3 = gvar_651858;
    long* i;
    for(i = i - 27; caml_young_limit > (unsigned long)i; i -= 27) {
        caml_call_gc(param0, param1, param2, (long)param3, v0, (long)param5);
    }
    long* ptr0 = i + 1;
    *(ptr0 - 1) = 3319L;
    *ptr0 = &camlHashtbl__safehash_205;
    *(ptr0 + 1) = 3L;
    *(ptr0 + 2) = v0;
    *(ptr0 + 3) = 4343L;
    *(ptr0 + 4) = &caml_curry3;
    *(ptr0 + 5) = 7L;
    *(ptr0 + 6) = &camlHashtbl__add_207;
    *(unsigned long*)(ptr0 + 7) = ptr0;
    *(ptr0 + 8) = 5367L;
    *(ptr0 + 9) = &caml_curry2;
    *(ptr0 + 10) = 5L;
    *(ptr0 + 11) = &camlHashtbl__remove_213;
    *(ptr0 + 12) = v0;
    *(unsigned long*)(ptr0 + 13) = ptr0;
    *(ptr0 + 14) = 4343L;
    *(ptr0 + 15) = &caml_curry2;
    *(ptr0 + 16) = 5L;
    *(ptr0 + 17) = &camlHashtbl__find_rec_221;
    *(ptr0 + 18) = v0;
    *(ptr0 + 19) = 6391L;
    *(ptr0 + 20) = &caml_curry2;
    *(ptr0 + 21) = 5L;
    *(ptr0 + 22) = &camlHashtbl__find_226;
    *(ptr0 + 23) = v0;
    *(unsigned long*)(ptr0 + 24) = ptr0;
    *(unsigned long*)(ptr0 + 25) = ptr0 + 15;
    i -= 31;
    while(caml_young_limit > (unsigned long)i) {
        caml_call_gc((long)(ptr0 + 15), param1, param2, (long)(ptr0 + 20), v0, (long)(ptr0 + 9));
        i -= 31;
    }
    *i = 5367L;
    *(i + 1) = &caml_curry2;
    *(i + 2) = 5L;
    *(i + 3) = &camlHashtbl__find_all_238;
    *(i + 4) = v0;
    *(unsigned long*)(i + 5) = ptr0;
    *(i + 6) = 5367L;
    *(i + 7) = &caml_curry3;
    *(i + 8) = 7L;
    *(i + 9) = &camlHashtbl__replace_245;
    *(i + 10) = v0;
    *(unsigned long*)(i + 11) = ptr0;
    *(i + 12) = 5367L;
    *(i + 13) = &caml_curry2;
    *(i + 14) = 5L;
    *(i + 15) = &camlHashtbl__mem_255;
    *(i + 16) = v0;
    *(unsigned long*)(i + 17) = ptr0;
    unsigned long v4 = gvar_651888;
    unsigned long v5 = gvar_651890;
    unsigned long v6 = gvar_651898;
    *(i + 18) = 0x3000L;
    *(unsigned long*)(i + 19) = v1;
    *(unsigned long*)(i + 20) = v2;
    *(unsigned long*)(i + 21) = v3;
    *(unsigned long*)(i + 22) = ptr0 + 4;
    *(unsigned long*)(i + 23) = ptr0 + 9;
    *(unsigned long*)(i + 24) = ptr0 + 20;
    *(unsigned long*)(i + 25) = i + 1;
    *(unsigned long*)(i + 26) = i + 7;
    *(unsigned long*)(i + 27) = i + 13;
    *(unsigned long*)(i + 28) = v4;
    *(unsigned long*)(i + 29) = v5;
    *(unsigned long*)(i + 30) = v6;
    return (unsigned long*)(i + 19);
}

void camlHashtbl__add_102() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlHashtbl__clear_82() {
    long v0;
    void* ptr0;
    char v1;
    long* ptr1;
    long* ptr2 = &v0;
    char v2 = &v0 == 8L;
    char v3 = (long)&v1 < 0L;
    char v4 = __parity__((unsigned char)&v0 - 8);
    char v5 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v6 = (unsigned long)&v0 < 8L;
    char v7 = (long)(long*)((long)(long*)((long)&v0 ^ (long)&v1) & (long)(long*)((long)&v0 ^ 0x8L)) < 0L;
    long* ptr3 = ptr1;
    unsigned long v8 = 1L;
    long v9 = *(ptr3 + 1);
    long v10 = *(long*)(v9 - 8L);
    long v11 = *(long*)(v9 - 8L);
    long v12 = v10 >>> 9;
    char v13 = (v11 >>> 8L) & 0x1L;
    char v14 = v7;
    char v15 = v12 ? 0: 1;
    char v16 = v12 < 0L;
    char v17 = __parity__((unsigned char)v12);
    long v18 = v12 | 0x1L;
    unsigned long v19 = (unsigned long)(v18 - 2L);
    char v20 = v19 == 1L;
    char v21 = (long)v19 > 1L;
    char v22 = __parity__(1 - (unsigned char)v19);
    char v23 = v19 > 1L;
    char v24 = (((1L - v19) ^ 0x1L) & (v19 ^ 0x1L)) < 0L;
    char v25 = (((1L - v19) ^ (v19 ^ 0x1L)) >>> 4L) & 0x1L;
    if((v20 || v21 != v24)) {
        do {
            long v26 = *(ptr3 + 1);
            long v27 = *(long*)(v26 - 8L);
            long v28 = *(long*)(v26 - 8L);
            unsigned long v29 = (unsigned long)(v27 >>> 9);
            char v30 = (v28 >>> 8L) & 0x1L;
            char v31 = v24;
            char v32 = v29 ? 0: 1;
            char v33 = v29 >= 0x8000000000000000L;
            char v34 = __parity__((unsigned char)v29);
            char v35 = v29 == v8;
            char v36 = (long)v29 < (long)v8;
            char v37 = __parity__((unsigned char)v29 - (unsigned char)v8);
            char v38 = v29 < v8;
            char v39 = (long)(((v29 - v8) ^ v29) & (v29 ^ v8)) < 0L;
            char v40 = (((v29 - v8) ^ (v29 ^ v8)) >>> 4L) & 0x1L;
            if((v38 || v35)) {
                goto loc_41A9BB;
            }
            else {
                long v41 = 1L;
                long v42 = v8 * 4L + v26 - 4L;
                long v43 = caml_modify(v42, 1L);
                unsigned long v44 = v8;
                v8 += 2L;
                v20 = v44 == v19;
                v21 = (long)v44 < (long)v19;
                v22 = __parity__((unsigned char)v44 - (unsigned char)v19);
                v23 = v44 < v19;
                v24 = (long)(((v44 - v19) ^ v44) & (v44 ^ v19)) < 0L;
                char v45 = (((v44 - v19) ^ (v44 ^ v19)) >>> 4L) & 0x1L;
            }
            if(v20) {
                break;
            loc_41A9BB:
                long* ptr4 = &ptr0;
                long v46 = /*BAD_CALL!*/ caml_ml_array_bound_error();
            }
        }
        while(1);
    }
    *ptr3 = 1L;
    return 1L;
}

void camlHashtbl__copy_85() {
    // Decompilation error
}

void camlHashtbl__create_79() {
    // Decompilation error
}

long camlHashtbl__entry() {
    gvar_6518A8 = &camlHashtbl__16;
    camlHashtbl = &camlHashtbl__15;
    gvar_651848 = &camlHashtbl__14;
    gvar_651858 = &camlHashtbl__13;
    gvar_651898 = &camlHashtbl__12;
    gvar_6518B0 = &camlHashtbl__11;
    gvar_651850 = &camlHashtbl__10;
    gvar_651878 = &camlHashtbl__9;
    gvar_6518B8 = &camlHashtbl__8;
    gvar_651860 = &camlHashtbl__7;
    gvar_651868 = &camlHashtbl__6;
    gvar_651880 = &camlHashtbl__5;
    gvar_651870 = &camlHashtbl__4;
    gvar_651888 = &camlHashtbl__3;
    gvar_651890 = &camlHashtbl__2;
    gvar_6518A0 = &camlHashtbl__1;
    return 1L;
}

void camlHashtbl__find_121() {
    // Decompilation error
}

void camlHashtbl__find_all_133() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlHashtbl__find_rec_116(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long* ptr0;
    while(ptr0 != 1L) {
        long v1 = v0;
        long* ptr1 = *(unsigned long*)(ptr0 + 2);
        long result = *(ptr0 + 1);
        param1 = *ptr0;
        param0 = v0;
        long v2 = caml_c_call();
        if(v2 == 1L) {
            return result;
        }
        v0 = v1;
        ptr0 = ptr1;
    }
    while(1) {
        long* ptr2 = ptr2 - 2;
        if(caml_young_limit <= (unsigned long)ptr2) {
            *ptr2 = 0x400L;
            *(ptr2 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        caml_call_gc(param0, param1, param2, param3, param4, param5);
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlHashtbl__fold_166() {
}

void camlHashtbl__hash_59() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlHashtbl__iter_157() {
}

long camlHashtbl__length_87() {
    long* ptr0;
    return *ptr0;
}

void camlHashtbl__mem_150() {
    // Decompilation error
}

void camlHashtbl__remove_108() {
    // Decompilation error
}

void camlHashtbl__replace_140() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlList__assoc_197(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    unsigned long* ptr0;
    while(ptr0 != 1L) {
        long v1 = v0;
        unsigned long* ptr1 = *(ptr0 + 1);
        long* ptr2 = *ptr0;
        long result = *(ptr2 + 1);
        param0 = *ptr2;
        param1 = v0;
        long v2 = caml_c_call();
        if(v2 == 1L) {
            return result;
        }
        v0 = v1;
        ptr0 = ptr1;
    }
    while(1) {
        long* ptr3 = ptr3 - 2;
        if(caml_young_limit <= (unsigned long)ptr3) {
            *ptr3 = 0x400L;
            *(ptr3 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        caml_call_gc(param0, param1, param2, param3, param4, param5);
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlList__assq_202(unsigned long param0, long param1, unsigned long* param2, long param3, long param4, long param5) {
    unsigned long v0;
    unsigned long* ptr0;
    while(ptr0 != 1L) {
        param2 = *(ptr0 + 1);
        unsigned long* ptr1 = *ptr0;
        param1 = *(long*)(ptr1 + 1);
        param0 = *ptr1;
        if(v0 == param0) {
            return param1;
        }
        ptr0 = param2;
    }
    while(1) {
        long* ptr2 = ptr2 - 2;
        if(caml_young_limit <= (unsigned long)ptr2) {
            *ptr2 = 0x400L;
            *(ptr2 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        caml_call_gc((long)param0, param1, (long)param2, param3, param4, param5);
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long camlList__chop_271(long param0, long param1, long param2, long param3, long param4, long param5) {
    unsigned long result;
    unsigned long v0;
    while(v0 != 1L) {
        if(result == 1L) {
            while(1) {
                long* ptr0 = ptr0 - 3;
                if(caml_young_limit <= (unsigned long)ptr0) {
                    *ptr0 = 0x800L;
                    *(ptr0 + 1) = &caml_exn_Assert_failure;
                    *(ptr0 + 2) = &camlList__39;
                    caml_raise_exn();
                }
                caml_call_gc(param0, param1, param2, param3, param4, param5);
            }
            return;
        }
        result = *(unsigned long*)(result + 8L);
        v0 -= 2L;
    }
    return result;
}

void camlList__combine_254() {
    // Decompilation error
}

long camlList__entry() {
    gvar_64FD00 = &camlList__38;
    camlList = &camlList__37;
    gvar_64FBC0 = &camlList__36;
    gvar_64FBC8 = &camlList__35;
    gvar_64FBD0 = &camlList__34;
    gvar_64FBE0 = gvar_64CE30;
    gvar_64FBE8 = &camlList__33;
    gvar_64FBD8 = &camlList__32;
    gvar_64FBF8 = &camlList__31;
    gvar_64FBF0 = &camlList__31;
    gvar_64FC08 = &camlList__30;
    gvar_64FC10 = &camlList__29;
    gvar_64FC00 = &camlList__28;
    gvar_64FC18 = &camlList__27;
    gvar_64FC20 = &camlList__26;
    gvar_64FC30 = &camlList__25;
    gvar_64FC38 = &camlList__24;
    gvar_64FC28 = &camlList__23;
    gvar_64FC40 = &camlList__22;
    gvar_64FC48 = &camlList__21;
    gvar_64FC50 = &camlList__20;
    gvar_64FC58 = &camlList__19;
    gvar_64FC60 = &camlList__18;
    gvar_64FC68 = &camlList__17;
    gvar_64FC70 = &camlList__16;
    gvar_64FC78 = &camlList__15;
    gvar_64FCA0 = &camlList__14;
    gvar_64FCA8 = &camlList__13;
    gvar_64FCB0 = &camlList__12;
    gvar_64FCB8 = &camlList__11;
    gvar_64FCC0 = &camlList__10;
    gvar_64FCC8 = &camlList__9;
    gvar_64FC80 = &camlList__8;
    gvar_64FC90 = &camlList__7;
    gvar_64FC88 = &camlList__7;
    gvar_64FC98 = &camlList__6;
    gvar_64FCD0 = &camlList__5;
    gvar_64FCD8 = &camlList__4;
    gvar_64FCF8 = &camlList__3;
    gvar_64FD08 = &camlList__2;
    gvar_64FCE8 = &camlList__1;
    gvar_64FCE0 = &camlList__1;
    gvar_64FCF0 = gvar_64FCE8;
    return 1L;
}

unsigned long camlList__exists2_181(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    void* ptr0;
    long* ptr1;
    long v1;
    long v2;
    unsigned long v3;
    char v4;
    long* ptr2 = &ptr0;
    char v5 = &ptr0 == 24L;
    char v6 = (long)&v1 < 0L;
    char v7 = __parity__((unsigned char)&ptr0 - 24);
    char v8 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x18L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v9 = (unsigned long)&ptr0 < 24L;
    char v10 = (long)(long*)((long)(long*)((long)&v1 ^ (long)&ptr0) & (long)(long*)((long)&ptr0 ^ 0x18L)) < 0L;
    while(1) {
        v0 = v2;
        char v11 = ptr1 == 1L;
        char v12 = (long)ptr1 < 1L;
        char v13 = __parity__((unsigned char)ptr1 - 1);
        char v14 = (unsigned long)ptr1 < 1L;
        char v15 = (long)(long*)((long)(long*)((long)(long*)((char*)ptr1 - 1L) ^ (long)ptr1) & (long)(long*)((long)ptr1 ^ 0x1L)) < 0L;
        char v16 = (long*)((long)(long*)((long)(long*)((long)(long*)((char*)ptr1 - 1L) ^ (long)(long*)((long)ptr1 ^ 0x1L)) >>> 4L) & 0x1L);
        if(v11) {
            break;
        }
        else {
            char v17 = param0 == 1L;
            char v18 = param0 < 1L;
            char v19 = __parity__((unsigned char)param0 - 1);
            char v20 = (unsigned long)param0 < 1L;
            char v21 = (((param0 - 1L) ^ param0) & (param0 ^ 0x1L)) < 0L;
            char v22 = (((param0 - 1L) ^ (param0 ^ 0x1L)) >>> 4L) & 0x1L;
            if(v17) {
                goto loc_4175B0;
            }
            else {
                v1 = v0;
                long v23 = *(long*)(param0 + 8L);
                long v24 = *(long*)(param0 + 8L);
                long* ptr3 = *(long**)param0;
                long* ptr4 = *(unsigned long*)(ptr1 + 1);
                long* ptr5 = *(unsigned long*)(ptr1 + 1);
                long v25 = *ptr1;
                long* ptr6 = (long*)v0;
                caml_apply2(ptr6);
                char v26 = v3 == 1L;
                char v27 = (long)v3 < 1L;
                char v28 = __parity__(v4 - 1);
                char v29 = v3 < 1L;
                char v30 = (((v3 - 1L) ^ v3) & (v3 ^ 0x1L)) < 0L;
                char v31 = (((v3 - 1L) ^ (v3 ^ 0x1L)) >>> 4L) & 0x1L;
                if(!v26) {
                    return 3L;
                }
                v2 = v1;
                ptr1 = ptr5;
                param0 = v24;
            }
        }
    }
    char v32 = param0 == 1L;
    char v33 = param0 < 1L;
    char v34 = __parity__((unsigned char)param0 - 1);
    char v35 = (unsigned long)param0 < 1L;
    char v36 = (((param0 - 1L) ^ param0) & (param0 ^ 0x1L)) < 0L;
    char v37 = (((param0 - 1L) ^ (param0 ^ 0x1L)) >>> 4L) & 0x1L;
    if(!v32) {
    loc_4175B0:
        long v38 = "List.exists2";
        void* ptr7 = &v1;
        long* ptr8 = &ptr0;
        char v39 = &ptr0 ? 0: 1;
        char v40 = (long)&ptr0 < 0L;
        char v41 = __parity__((unsigned char)&ptr0);
        char v42 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x18L) ^ (long)&ptr0) >>> 4L) & 0x1L);
        char v43 = (unsigned long)&v1 >= 18446744073709551592L;
        char v44 = (long)(long*)((long)(long*)((long)&v1 ^ (long)&ptr0) & (long*)~(long)(long*)((long)&v1 ^ 0x18L)) < 0L;
        /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, v0, param2, param3, param4, param5);
    }
    return 1L;
}

long camlList__exists_169() {
    long* ptr0;
    long* ptr1;
    while(ptr1 != 1L) {
        long* ptr2 = ptr0;
        long* ptr3 = *(unsigned long*)(ptr1 + 1);
        unsigned long v0 = (unsigned long)*ptr0();
        if(v0 != 1L) {
            return 3L;
        }
        ptr1 = ptr3;
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlList__find_229(long param0, long param1, long param2, long param3, long param4, long param5) {
    long* ptr0;
    long* ptr1;
    while(ptr1 != 1L) {
        long* ptr2 = ptr0;
        long* ptr3 = *(unsigned long*)(ptr1 + 1);
        long result = *ptr1;
        unsigned long v0 = (unsigned long)*ptr0();
        if(v0 != 1L) {
            return result;
        }
        ptr0 = ptr2;
        ptr1 = ptr3;
    }
    while(1) {
        long* ptr4 = ptr4 - 2;
        if(caml_young_limit <= (unsigned long)ptr4) {
            *ptr4 = 0x400L;
            *(ptr4 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        caml_call_gc(param0, (long)ptr0, param2, param3, param4, param5);
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlList__find_all_233(long param0, long param1, long param2, long param3, long param4, long param5) {
    char v0;
    char v1;
    long v2;
    unsigned long v3;
    long* ptr0 = &v0;
    char v4 = &v0 == 8L;
    char v5 = (long)&v1 < 0L;
    char v6 = __parity__((unsigned char)&v0 - 8);
    char v7 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v8 = (unsigned long)&v0 < 8L;
    char v9 = (long)(long*)((long)(long*)((long)&v0 ^ (long)&v1) & (long)(long*)((long)&v0 ^ 0x8L)) < 0L;
    long v10 = v2;
    while(1) {
        unsigned long v11 = v3;
        v3 -= 40L;
        char v12 = v3 ? 0: 1;
        char v13 = v3 >= 0x8000000000000000L;
        char v14 = __parity__((unsigned char)v3);
        char v15 = (((v11 ^ 0x28L) ^ v3) >>> 4L) & 0x1L;
        char v16 = v11 < 40L;
        char v17 = (long)((v3 ^ v11) & (v11 ^ 0x28L)) < 0L;
        long v18 = &caml_young_limit;
        char v19 = caml_young_limit == v3;
        char v20 = (long)caml_young_limit > (long)v3;
        char v21 = __parity__((unsigned char)v3 - (unsigned char)caml_young_limit);
        char v22 = caml_young_limit > v3;
        char v23 = (long)(((v3 - caml_young_limit) ^ v3) & (caml_young_limit ^ v3)) < 0L;
        char v24 = (((v3 - caml_young_limit) ^ (caml_young_limit ^ v3)) >>> 4L) & 0x1L;
        if(!v22) {
            break;
        }
        else {
            long v25 = caml_call_gc(v10, param1, param2, param3, param4, param5);
        }
    }
    long* ptr1 = (long*)(v3 + 8L);
    *(ptr1 - 1) = 4343L;
    long v26 = &caml_curry2;
    *ptr1 = &caml_curry2;
    *(ptr1 + 1) = 5L;
    long v27 = &camlList__find_235;
    *(ptr1 + 2) = &camlList__find_235;
    *(ptr1 + 3) = v10;
    long v28 = 1L;
    long v29 = *ptr1;
    long* ptr2 = &v1;
    long* ptr3 = &v0;
    char v30 = &v0 ? 0: 1;
    char v31 = (long)&v0 < 0L;
    char v32 = __parity__((unsigned char)&v0);
    char v33 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&v0) >>> 4L) & 0x1L);
    char v34 = (unsigned long)&v1 >= 18446744073709551608L;
    char v35 = (long)(long*)((long)(long*)((long)&v0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    jump v29;
}

void camlList__flatten_86() {
    // Decompilation error
}

long camlList__fold_left2_147(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    void* ptr0;
    long v1;
    long v2;
    long v3;
    long result;
    long* ptr1 = &ptr0;
    char v4 = &ptr0 == 24L;
    char v5 = (long)&v3 < 0L;
    char v6 = __parity__((unsigned char)&ptr0 - 24);
    char v7 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x18L) ^ (long)&v3) >>> 4L) & 0x1L);
    char v8 = (unsigned long)&ptr0 < 24L;
    char v9 = (long)(long*)((long)(long*)((long)&v3 ^ (long)&ptr0) & (long)(long*)((long)&ptr0 ^ 0x18L)) < 0L;
    while(1) {
        v0 = v1;
        char v10 = param0 == 1L;
        char v11 = param0 < 1L;
        char v12 = __parity__((unsigned char)param0 - 1);
        char v13 = (unsigned long)param0 < 1L;
        char v14 = (((param0 - 1L) ^ param0) & (param0 ^ 0x1L)) < 0L;
        char v15 = (((param0 - 1L) ^ (param0 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v10) {
            break;
        }
        else {
            char v16 = param1 == 1L;
            char v17 = param1 < 1L;
            char v18 = __parity__((unsigned char)param1 - 1);
            char v19 = (unsigned long)param1 < 1L;
            char v20 = (((param1 - 1L) ^ param1) & (param1 ^ 0x1L)) < 0L;
            char v21 = (((param1 - 1L) ^ (param1 ^ 0x1L)) >>> 4L) & 0x1L;
            if(v16) {
                goto loc_417384;
            }
            else {
                v3 = v0;
                long v22 = *(long*)(param1 + 8L);
                long v23 = *(long*)(param1 + 8L);
                long v24 = *(long*)param1;
                long v25 = *(long*)(param0 + 8L);
                long v26 = *(long*)(param0 + 8L);
                long v27 = *(long*)param0;
                long v28 = result;
                long v29 = v27;
                long v30 = v24;
                long* ptr2 = (long*)v0;
                caml_apply3(v30, ptr2);
                result = v2;
                v1 = v3;
                param0 = v26;
                param1 = v23;
            }
        }
    }
    char v31 = param1 == 1L;
    char v32 = param1 < 1L;
    char v33 = __parity__((unsigned char)param1 - 1);
    char v34 = (unsigned long)param1 < 1L;
    char v35 = (((param1 - 1L) ^ param1) & (param1 ^ 0x1L)) < 0L;
    char v36 = (((param1 - 1L) ^ (param1 ^ 0x1L)) >>> 4L) & 0x1L;
    if(!v31) {
    loc_417384:
        long v37 = "List.fold_left2";
        void* ptr3 = &v3;
        long* ptr4 = &ptr0;
        char v38 = &ptr0 ? 0: 1;
        char v39 = (long)&ptr0 < 0L;
        char v40 = __parity__((unsigned char)&ptr0);
        char v41 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v3 ^ 0x18L) ^ (long)&ptr0) >>> 4L) & 0x1L);
        char v42 = (unsigned long)&v3 >= 18446744073709551592L;
        char v43 = (long)(long*)((long)(long*)((long)&v3 ^ (long)&ptr0) & (long*)~(long)(long*)((long)&v3 ^ 0x18L)) < 0L;
        /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, v0, param3, param4, param5);
    }
    return result;
}

long camlList__fold_left_106(long* param0) {
    long result;
    long v0;
    long* ptr0;
    while(param0 != 1L) {
        long* ptr1 = ptr0;
        long* ptr2 = *(unsigned long*)(param0 + 1);
        caml_apply2(ptr0);
        result = v0;
        ptr0 = ptr1;
        param0 = ptr2;
    }
    return result;
}

void camlList__fold_right2_156() {
    // Decompilation error
}

void camlList__fold_right_112() {
    // Decompilation error
}

unsigned long camlList__for_all2_173(long param0, long param1, long param2, long param3, long param4, long param5) {
    char v0;
    long v1;
    void* ptr0;
    long* ptr1;
    long v2;
    long v3;
    unsigned long v4;
    char v5;
    long* ptr2 = &ptr0;
    char v6 = &ptr0 == 24L;
    char v7 = (long)&v2 < 0L;
    char v8 = __parity__((unsigned char)&ptr0 - 24);
    char v9 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x18L) ^ (long)&v2) >>> 4L) & 0x1L);
    char v10 = (unsigned long)&ptr0 < 24L;
    char v11 = (long)(long*)((long)(long*)((long)&v2 ^ (long)&ptr0) & (long)(long*)((long)&ptr0 ^ 0x18L)) < 0L;
loc_4174C4:
    do {
        v1 = v3;
        v0 = ptr1 == 1L;
        char v12 = (long)ptr1 < 1L;
        char v13 = __parity__((unsigned char)ptr1 - 1);
        char v14 = (unsigned long)ptr1 < 1L;
        char v15 = (long)(long*)((long)(long*)((long)(long*)((char*)ptr1 - 1L) ^ (long)ptr1) & (long)(long*)((long)ptr1 ^ 0x1L)) < 0L;
        char v16 = (long*)((long)(long*)((long)(long*)((long)(long*)((char*)ptr1 - 1L) ^ (long)(long*)((long)ptr1 ^ 0x1L)) >>> 4L) & 0x1L);
        if(!v0) {
            char v17 = param0 == 1L;
            char v18 = param0 < 1L;
            char v19 = __parity__((unsigned char)param0 - 1);
            char v20 = (unsigned long)param0 < 1L;
            char v21 = (((param0 - 1L) ^ param0) & (param0 ^ 0x1L)) < 0L;
            char v22 = (((param0 - 1L) ^ (param0 ^ 0x1L)) >>> 4L) & 0x1L;
            if(v17) {
                goto loc_417530;
            }
            else {
                v2 = v1;
                long v23 = *(long*)(param0 + 8L);
                long v24 = *(long*)(param0 + 8L);
                long* ptr3 = *(long**)param0;
                long* ptr4 = *(unsigned long*)(ptr1 + 1);
                long* ptr5 = *(unsigned long*)(ptr1 + 1);
                long v25 = *ptr1;
                long* ptr6 = (long*)v1;
                caml_apply2(ptr6);
                char v26 = v4 == 1L;
                char v27 = (long)v4 < 1L;
                char v28 = __parity__(v5 - 1);
                char v29 = v4 < 1L;
                char v30 = (((v4 - 1L) ^ v4) & (v4 ^ 0x1L)) < 0L;
                char v31 = (((v4 - 1L) ^ (v4 ^ 0x1L)) >>> 4L) & 0x1L;
                if(!v26) {
                    v3 = v2;
                    ptr1 = ptr5;
                    param0 = v24;
                    goto loc_4174C4;
                }
                else {
                    return 1L;
                }
            }
        }
    }
    while(!v0);
    char v32 = param0 == 1L;
    char v33 = param0 < 1L;
    char v34 = __parity__((unsigned char)param0 - 1);
    char v35 = (unsigned long)param0 < 1L;
    char v36 = (((param0 - 1L) ^ param0) & (param0 ^ 0x1L)) < 0L;
    char v37 = (((param0 - 1L) ^ (param0 ^ 0x1L)) >>> 4L) & 0x1L;
    if(!v32) {
    loc_417530:
        long v38 = "List.for_all2";
        void* ptr7 = &v2;
        long* ptr8 = &ptr0;
        char v39 = &ptr0 ? 0: 1;
        char v40 = (long)&ptr0 < 0L;
        char v41 = __parity__((unsigned char)&ptr0);
        char v42 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v2 ^ 0x18L) ^ (long)&ptr0) >>> 4L) & 0x1L);
        char v43 = (unsigned long)&v2 >= 18446744073709551592L;
        char v44 = (long)(long*)((long)(long*)((long)&v2 ^ (long)&ptr0) & (long*)~(long)(long*)((long)&v2 ^ 0x18L)) < 0L;
        /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, v1, param2, param3, param4, param5);
    }
    return 3L;
}

long camlList__for_all_165() {
    long* ptr0;
    long* ptr1;
    while(ptr1 != 1L) {
        long* ptr2 = ptr0;
        long* ptr3 = *(unsigned long*)(ptr1 + 1);
        unsigned long v0 = (unsigned long)*ptr0();
        if(v0 != 1L) {
            ptr1 = ptr3;
        }
        else {
            return 1L;
        }
    }
    return 3L;
}

void camlList__hd_64() {
    // Decompilation error
}

long camlList__iter2_139(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    void* ptr0;
    long* ptr1;
    long v1;
    long v2;
    long* ptr2 = &ptr0;
    char v3 = &ptr0 == 24L;
    char v4 = (long)&v1 < 0L;
    char v5 = __parity__((unsigned char)&ptr0 - 24);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x18L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&ptr0 < 24L;
    char v8 = (long)(long*)((long)(long*)((long)&v1 ^ (long)&ptr0) & (long)(long*)((long)&ptr0 ^ 0x18L)) < 0L;
    while(1) {
        v0 = v2;
        char v9 = ptr1 == 1L;
        char v10 = (long)ptr1 < 1L;
        char v11 = __parity__((unsigned char)ptr1 - 1);
        char v12 = (unsigned long)ptr1 < 1L;
        char v13 = (long)(long*)((long)(long*)((long)(long*)((char*)ptr1 - 1L) ^ (long)ptr1) & (long)(long*)((long)ptr1 ^ 0x1L)) < 0L;
        char v14 = (long*)((long)(long*)((long)(long*)((long)(long*)((char*)ptr1 - 1L) ^ (long)(long*)((long)ptr1 ^ 0x1L)) >>> 4L) & 0x1L);
        if(v9) {
            break;
        }
        else {
            char v15 = param0 == 1L;
            char v16 = param0 < 1L;
            char v17 = __parity__((unsigned char)param0 - 1);
            char v18 = (unsigned long)param0 < 1L;
            char v19 = (((param0 - 1L) ^ param0) & (param0 ^ 0x1L)) < 0L;
            char v20 = (((param0 - 1L) ^ (param0 ^ 0x1L)) >>> 4L) & 0x1L;
            if(v15) {
                goto loc_417310;
            }
            else {
                v1 = v0;
                long v21 = *(long*)(param0 + 8L);
                long v22 = *(long*)(param0 + 8L);
                long v23 = *(long*)param0;
                long* ptr3 = *(unsigned long*)(ptr1 + 1);
                long* ptr4 = *(unsigned long*)(ptr1 + 1);
                long v24 = *ptr1;
                long v25 = v23;
                long* ptr5 = (long*)v0;
                caml_apply2(ptr5);
                v2 = v1;
                ptr1 = ptr4;
                param0 = v22;
            }
        }
    }
    char v26 = param0 == 1L;
    char v27 = param0 < 1L;
    char v28 = __parity__((unsigned char)param0 - 1);
    char v29 = (unsigned long)param0 < 1L;
    char v30 = (((param0 - 1L) ^ param0) & (param0 ^ 0x1L)) < 0L;
    char v31 = (((param0 - 1L) ^ (param0 ^ 0x1L)) >>> 4L) & 0x1L;
    if(!v26) {
    loc_417310:
        long v32 = "List.iter2";
        void* ptr6 = &v1;
        long* ptr7 = &ptr0;
        char v33 = &ptr0 ? 0: 1;
        char v34 = (long)&ptr0 < 0L;
        char v35 = __parity__((unsigned char)&ptr0);
        char v36 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x18L) ^ (long)&ptr0) >>> 4L) & 0x1L);
        char v37 = (unsigned long)&v1 >= 18446744073709551592L;
        char v38 = (long)(long*)((long)(long*)((long)&v1 ^ (long)&ptr0) & (long*)~(long)(long*)((long)&v1 ^ 0x18L)) < 0L;
        /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, v0, param2, param3, param4, param5);
    }
    return 1L;
}

long camlList__iter_102() {
    long* ptr0;
    long* ptr1;
    while(ptr0 != 1L) {
        long* ptr2 = ptr1;
        long* ptr3 = *(unsigned long*)(ptr0 + 1);
        *ptr1();
        ptr0 = ptr3;
    }
    return 1L;
}

void camlList__length_62() {
    // Decompilation error
}

long camlList__length_aux_58() {
    long result;
    unsigned long v0;
    while(v0 != 1L) {
        v0 = *(unsigned long*)(v0 + 8L);
        result = result + 2L;
    }
    return result;
}

void camlList__map2_118() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlList__map_90() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlList__mem_189() {
    long v0;
    long* ptr0;
    while(ptr0 != 1L) {
        long v1 = v0;
        long* ptr1 = *(unsigned long*)(ptr0 + 1);
        long v2 = caml_c_call();
        if(v2 == 1L) {
            return 3L;
        }
        ptr0 = ptr1;
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlList__mem_assoc_207() {
    long v0;
    unsigned long* ptr0;
    while(ptr0 != 1L) {
        long v1 = v0;
        unsigned long* ptr1 = *(ptr0 + 1);
        long v2 = caml_c_call();
        if(v2 == 1L) {
            return 3L;
        }
        ptr0 = ptr1;
    }
    return 1L;
}

long camlList__mem_assq_212() {
    unsigned long* ptr0;
    unsigned long v0;
    while(ptr0 != 1L) {
        unsigned long* ptr1 = *(ptr0 + 1);
        if(**ptr0 == v0) {
            return 3L;
        }
        ptr0 = ptr1;
    }
    return 1L;
}

long camlList__memq_193() {
    unsigned long* ptr0;
    unsigned long v0;
    while(ptr0 != 1L) {
        unsigned long* ptr1 = *(ptr0 + 1);
        if(*ptr0 == v0) {
            return 3L;
        }
        ptr0 = ptr1;
    }
    return 1L;
}

void camlList__merge_261() {
    // Decompilation error
}

void camlList__nth_70() {
    // Decompilation error
}

void camlList__nth_aux_73() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlList__partition_240() {
}

void camlList__remove_assoc_217() {
    // Decompilation error
}

void camlList__remove_assq_223() {
    // Decompilation error
}

void camlList__rev_84() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlList__rev_append_79(long* param0, long param1, long param2, long param3, long param4, long param5) {
    long* result;
    long* ptr0;
    while(ptr0 != 1L) {
        long* ptr1 = *(unsigned long*)(ptr0 + 1);
        long v0 = *ptr0;
        unsigned long i;
        for(i = i - 24L; i < caml_young_limit; i -= 24L) {
            caml_call_gc((long)param0, v0, (long)ptr1, param3, param4, param5);
        }
        param0 = (long*)(i + 8L);
        *(param0 - 1) = 0x800L;
        *param0 = v0;
        *(unsigned long*)(param0 + 1) = result;
        ptr0 = ptr1;
        result = param0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlList__rev_map2_127() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlList__rev_map_95() {
}

void camlList__split_248() {
    // Decompilation error
}

void camlList__stable_sort_276() {
    // Decompilation error
}

void camlList__tl_67() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlMap__Make_249(long param0, long* param1, long* param2, long param3, long* param4) {
    long v0;
    long v1 = &camlMap__9;
    long* i;
    for(i = i - 31; caml_young_limit > (unsigned long)i; i -= 31) {
        caml_call_gc(&camlMap__9, (long)param1, (long)param2, param3, (long)param4, v0);
    }
    long* ptr0 = i + 1;
    *i = 4343L;
    *(i + 1) = &caml_curry4;
    *(i + 2) = 9L;
    *(i + 3) = &camlMap__create_87;
    *(i + 4) = &camlMap__9;
    long* ptr1 = i + 6;
    *(ptr1 - 1) = 5367L;
    *ptr1 = &caml_curry4;
    *(ptr1 + 1) = 9L;
    *(ptr1 + 2) = &camlMap__bal_94;
    *(ptr1 + 3) = &camlMap__9;
    *(unsigned long*)(ptr1 + 4) = i + 1;
    long v2 = &camlMap__8;
    long* ptr2 = i + 12;
    *(i + 11) = 5367L;
    *(i + 12) = &caml_curry3;
    *(i + 13) = 7L;
    *(i + 14) = &camlMap__add_121;
    *(i + 15) = v0;
    *(unsigned long*)(i + 16) = ptr1;
    long* ptr3 = i + 18;
    *(i + 17) = 4343L;
    *(i + 18) = &caml_curry2;
    *(i + 19) = 5L;
    *(i + 20) = &camlMap__find_130;
    *(i + 21) = v0;
    long* ptr4 = i + 23;
    *(i + 22) = 4343L;
    *(i + 23) = &caml_curry2;
    *(i + 24) = 5L;
    *(i + 25) = &camlMap__mem_137;
    *(i + 26) = v0;
    long v3 = &camlMap__7;
    param4 = i + 28;
    *(param4 - 1) = 3319L;
    *param4 = &camlMap__remove_min_binding_152;
    *(param4 + 1) = 3L;
    *(unsigned long*)(param4 + 2) = ptr1;
    i -= 26;
    while(caml_young_limit > (unsigned long)i) {
        caml_call_gc(&camlMap__7, (long)param1, (long)param2, (long)ptr1, (long)param4, v0);
        i -= 26;
    }
    long* ptr5 = i + 1;
    *(ptr5 - 1) = 6391L;
    *ptr5 = &caml_curry2;
    *(ptr5 + 1) = 5L;
    *(ptr5 + 2) = &camlMap__merge_160;
    *(unsigned long*)(ptr5 + 3) = ptr1;
    *(ptr5 + 4) = &camlMap__7;
    *(unsigned long*)(ptr5 + 5) = param4;
    *(ptr5 + 6) = 6391L;
    *(ptr5 + 7) = &caml_curry2;
    *(ptr5 + 8) = 5L;
    *(ptr5 + 9) = &camlMap__remove_167;
    *(ptr5 + 10) = v0;
    *(unsigned long*)(ptr5 + 11) = ptr1;
    *(unsigned long*)(ptr5 + 12) = ptr5;
    *(ptr5 + 13) = 5367L;
    *(ptr5 + 14) = &caml_curry3;
    *(ptr5 + 15) = 7L;
    *(ptr5 + 16) = &camlMap__compare_217;
    *(ptr5 + 17) = v0;
    *(ptr5 + 18) = &camlMap__2;
    *(ptr5 + 19) = 5367L;
    *(ptr5 + 20) = &caml_curry3;
    *(ptr5 + 21) = 7L;
    *(ptr5 + 22) = &camlMap__equal_234;
    *(ptr5 + 23) = v0;
    *(ptr5 + 24) = &camlMap__2;
    i -= 20;
    while(caml_young_limit > (unsigned long)i) {
        caml_call_gc((long)(ptr5 + 20), (long)(ptr5 + 7), (long)(ptr5 + 14), (long)ptr1, (long)param4, v0);
        i -= 20;
    }
    *i = 19456L;
    *(i + 1) = v1;
    *(unsigned long*)(i + 2) = ptr0;
    *(unsigned long*)(i + 3) = ptr1;
    *(i + 4) = 1L;
    *(i + 5) = v2;
    *(unsigned long*)(i + 6) = ptr2;
    *(unsigned long*)(i + 7) = ptr3;
    *(unsigned long*)(i + 8) = ptr4;
    *(i + 9) = v3;
    *(unsigned long*)(i + 10) = param4;
    *(unsigned long*)(i + 11) = ptr5;
    *(unsigned long*)(i + 12) = ptr5 + 7;
    *(i + 13) = &camlMap__6;
    *(i + 14) = &camlMap__5;
    *(i + 15) = &camlMap__4;
    *(i + 16) = &camlMap__3;
    *(i + 17) = &camlMap__2;
    *(unsigned long*)(i + 18) = ptr5 + 14;
    *(unsigned long*)(i + 19) = ptr5 + 20;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlMap__cons_enum_210(long* param0, long param1, long param2, long param3, long param4, long param5) {
    long* result;
    unsigned long* ptr0;
    while(ptr0 != 1L) {
        long v0 = *(long*)(ptr0 + 3);
        long v1 = *(long*)(ptr0 + 2);
        long v2 = *(long*)(ptr0 + 1);
        unsigned long* ptr1 = *ptr0;
        unsigned long i;
        for(i = i - 40L; i < caml_young_limit; i -= 40L) {
            caml_call_gc((long)param0, (long)ptr1, v2, v1, v0, param5);
        }
        param0 = (long*)(i + 8L);
        *(param0 - 1) = 0x1000L;
        *param0 = v2;
        *(param0 + 1) = v1;
        *(param0 + 2) = v0;
        *(unsigned long*)(param0 + 3) = result;
        ptr0 = ptr1;
        result = param0;
    }
    return result;
}

void camlMap__entry() {
    // Decompilation error
}

void camlMap__fold_195() {
    // Decompilation error
}

long camlMap__height_85() {
    unsigned long v0;
    return v0 != 1L ? *(long*)(v0 + 32L): 1L;
}

long camlMap__is_empty_120() {
    unsigned long v0;
    return v0 != 1L ? 1L: 3L;
}

void camlMap__iter_175() {
    // Decompilation error
}

void camlMap__map_181() {
    // Decompilation error
}

void camlMap__mapi_188() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long* camlMap__min_binding_144(long param0, long param1, long param2, long param3, long param4, long param5) {
    long* i;
    unsigned long* ptr0;
    while(ptr0 != 1L) {
        unsigned long* ptr1 = *ptr0;
        if(ptr1 != 1L) {
            ptr0 = ptr1;
        }
        else {
            param0 = *(long*)(ptr0 + 2);
            long v0 = *(long*)(ptr0 + 1);
            for(i = i - 3; caml_young_limit > (unsigned long)i; i -= 3) {
                caml_call_gc(param0, param1, param2, param3, param4, param5);
            }
            *i = 0x800L;
            *(i + 1) = v0;
            *(i + 2) = param0;
            return i + 1;
        }
    }
    while(1) {
        i -= 2;
        if(caml_young_limit <= (unsigned long)i) {
            *i = 0x400L;
            *(i + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        caml_call_gc(param0, param1, param2, param3, param4, param5);
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlMarshal__data_size_76(long param0, long param1, long param2, long param3, long param4, long param5) {
    char v0;
    void* ptr0;
    long v1;
    long v2;
    char v3 = v2 == 1L;
    char v4 = v2 < 1L;
    char v5 = __parity__((unsigned char)v2 - 1);
    char v6 = (unsigned long)v2 < 1L;
    char v7 = (((v2 - 1L) ^ v2) & (v2 ^ 0x1L)) < 0L;
    char v8 = (((v2 - 1L) ^ (v2 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v4 == v7) {
        long v9 = *(long*)(v1 - 8L);
        long v10 = *(long*)(v1 - 8L);
        long v11 = v9 >>> 10;
        char v12 = (v10 >>> 9L) & 0x1L;
        char v13 = v7;
        char v14 = v11 ? 0: 1;
        char v15 = v11 < 0L;
        char v16 = __parity__((unsigned char)v11);
        unsigned long v17 = (unsigned long)(v11 * 8L - 1L);
        param3 = (long)*(char*)(v1 + v17);
        unsigned long v18 = v17;
        long v19 = (long)(v17 - param3);
        char v20 = v19 ? 0: 1;
        char v21 = v19 < 0L;
        char v22 = __parity__((unsigned char)v19);
        char v23 = (((param3 ^ v18) ^ v19) >>> 4L) & 0x1L;
        char v24 = (unsigned long)param3 > v18;
        char v25 = ((param3 ^ v18) & (v19 ^ v18)) < 0L;
        param2 = v19 * 2L - 39L;
        char v26 = param2 == v2;
        char v27 = param2 > v2;
        char v28 = __parity__((unsigned char)v2 - (unsigned char)param2);
        char v29 = (unsigned long)param2 > (unsigned long)v2;
        char v30 = (((v2 - param2) ^ v2) & (param2 ^ v2)) < 0L;
        char v31 = (((v2 - param2) ^ (param2 ^ v2)) >>> 4L) & 0x1L;
        if((v26 || v27 != v30)) {
            return caml_c_call();
        }
    }
    long v32 = "Marshal.data_size";
    void* ptr1 = &v0;
    long* ptr2 = &ptr0;
    char v33 = &ptr0 ? 0: 1;
    char v34 = (long)&ptr0 < 0L;
    char v35 = __parity__((unsigned char)&ptr0);
    char v36 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v37 = (unsigned long)&v0 >= 18446744073709551608L;
    char v38 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v0) & (long*)~(long)(long*)((long)&v0 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, param3, param4, param5);
}

long camlMarshal__entry() {
    gvar_652738 = &camlMarshal__6;
    camlMarshal = &camlMarshal__5;
    gvar_652730 = &camlMarshal__4;
    gvar_652748 = 41L;
    gvar_652750 = &camlMarshal__3;
    gvar_652758 = &camlMarshal__2;
    gvar_652740 = &camlMarshal__1;
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlMarshal__from_string_82(long param0, long param1, long param2, long param3, long param4, long param5) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    long* ptr0;
    void* ptr1;
    long v6;
    void* ptr2;
    long v7;
    long v8;
    long v9;
    long v10;
    char v11 = v7 == 1L;
    char v12 = v7 < 1L;
    char v13 = __parity__((unsigned char)v7 - 1);
    char v14 = (unsigned long)v7 < 1L;
    char v15 = (((v7 - 1L) ^ v7) & (v7 ^ 0x1L)) < 0L;
    char v16 = (((v7 - 1L) ^ (v7 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v12 == v15) {
        long v17 = *(long*)(v8 - 8L);
        long v18 = *(long*)(v8 - 8L);
        long v19 = v17 >>> 10;
        char v20 = (v18 >>> 9L) & 0x1L;
        char v21 = v15;
        char v22 = v19 ? 0: 1;
        char v23 = v19 < 0L;
        char v24 = __parity__((unsigned char)v19);
        unsigned long v25 = (unsigned long)(v19 * 8L - 1L);
        param3 = (long)*(char*)(v8 + v25);
        unsigned long v26 = v25;
        long v27 = (long)(v25 - param3);
        char v28 = v27 ? 0: 1;
        char v29 = v27 < 0L;
        char v30 = __parity__((unsigned char)v27);
        char v31 = (((param3 ^ v26) ^ v27) >>> 4L) & 0x1L;
        char v32 = (unsigned long)param3 > v26;
        char v33 = ((param3 ^ v26) & (v27 ^ v26)) < 0L;
        param2 = v27 * 2L - 39L;
        char v34 = param2 == v7;
        char v35 = param2 > v7;
        char v36 = __parity__((unsigned char)v7 - (unsigned char)param2);
        char v37 = (unsigned long)param2 > (unsigned long)v7;
        char v38 = (((v7 - param2) ^ v7) & (param2 ^ v7)) < 0L;
        char v39 = (((v7 - param2) ^ (param2 ^ v7)) >>> 4L) & 0x1L;
        if((v34 || v35 != v38)) {
            long v40 = v7;
            v6 = v8;
            long v41 = v8;
            long v42 = v7;
            long v43 = &caml_marshal_data_size;
            long v44 = caml_c_call();
            long v45 = v44;
            param0 = v6;
            long v46 = *(long*)(param0 - 8L);
            long v47 = *(long*)(param0 - 8L);
            long v48 = v46 >>> 10;
            char v49 = (v47 >>> 9L) & 0x1L;
            char v50 = v38;
            char v51 = v48 ? 0: 1;
            char v52 = v48 < 0L;
            char v53 = __parity__((unsigned char)v48);
            unsigned long v54 = (unsigned long)(v48 * 8L - 1L);
            v7 = (long)*(char*)(v54 + param0);
            unsigned long v55 = v54;
            long v56 = (long)(v54 - v7);
            char v57 = v56 ? 0: 1;
            char v58 = v56 < 0L;
            char v59 = __parity__((unsigned char)v56);
            char v60 = (((v7 ^ v55) ^ v56) >>> 4L) & 0x1L;
            char v61 = (unsigned long)v7 > v55;
            char v62 = ((v56 ^ v55) & (unsigned long)(v7 ^ v55)) < 0L;
            long v63 = v56;
            long v64 = v56 * 2L;
            char v65 = v63 < 0L;
            char v66 = v63 < 0L ^ ((v63 >>> 62L) & 0x1L);
            char v67 = v64 ? 0: 1;
            char v68 = v64 < 0L;
            char v69 = __parity__((unsigned char)v64);
            long v70 = v64 - v45;
            long v71 = v64 - v45;
            unsigned long v72 = (unsigned long)(v70 - 38L);
            char v73 = v72 ? 0: 1;
            char v74 = v72 >= 0x8000000000000000L;
            char v75 = __parity__((unsigned char)v72);
            char v76 = (((v71 ^ 0xffffffffffffffdaL) ^ v72) >>> 4L) & 0x1L;
            char v77 = (unsigned long)v71 >= 38L;
            char v78 = ((v72 ^ v71) & ~(v71 ^ 0xffffffffffffffdaL)) < 0L;
            param1 = v40;
            char v79 = v72 == param1;
            char v80 = (long)v72 > param1;
            char v81 = __parity__((unsigned char)param1 - (unsigned char)v72);
            char v82 = v72 > (unsigned long)param1;
            char v83 = (((param1 - v72) ^ param1) & (v72 ^ param1)) < 0L;
            char v84 = (((param1 - v72) ^ (v72 ^ param1)) >>> 4L) & 0x1L;
            if(!v79 && v80 == v83) {
                long v85 = "Marshal.from_string";
                ptr1 = &v6;
                ptr0 = &ptr2;
                v5 = &ptr2 ? 0: 1;
                v4 = (long)&ptr2 < 0L;
                v3 = __parity__((unsigned char)&ptr2);
                v2 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v6 ^ 0x18L) ^ (long)&ptr2) >>> 4L) & 0x1L);
                v1 = (unsigned long)&v6 >= 18446744073709551592L;
                v0 = (long)(long*)((long)(long*)((long)&v6 ^ (long)&ptr2) & (long*)~(long)(long*)((long)&v6 ^ 0x18L)) < 0L;
                /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, v10, v9, param4, param5);
            }
            return caml_c_call();
        }
    }
    long v86 = "Marshal.from_size";
    ptr1 = &v6;
    ptr0 = &ptr2;
    v5 = &ptr2 ? 0: 1;
    v4 = (long)&ptr2 < 0L;
    v3 = __parity__((unsigned char)&ptr2);
    v2 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v6 ^ 0x18L) ^ (long)&ptr2) >>> 4L) & 0x1L);
    v1 = (unsigned long)&v6 >= 18446744073709551592L;
    v0 = (long)(long*)((long)(long*)((long)&v6 ^ (long)&ptr2) & (long*)~(long)(long*)((long)&v6 ^ 0x18L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, param3, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlMarshal__fun_92() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlMarshal__fun_94(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlMarshal__to_buffer_66(long param0, long param1, long param2) {
    void* ptr0;
    unsigned long v0;
    char v1;
    long v2;
    long* ptr1 = &ptr0;
    char v3 = &ptr0 == 8L;
    char v4 = (long)&v1 < 0L;
    char v5 = __parity__((unsigned char)&ptr0 - 8);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&ptr0 < 8L;
    char v8 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v9 = param0;
    long v10 = param1;
    long v11 = param2;
    char v12 = v0 == 1L;
    char v13 = (long)v0 < 1L;
    char v14 = __parity__((unsigned char)v0 - 1);
    char v15 = v0 < 1L;
    char v16 = (((v0 - 1L) ^ v0) & (v0 ^ 0x1L)) < 0L;
    char v17 = (((v0 - 1L) ^ (v0 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v13 == v16) {
        char v18 = v9 == 1L;
        char v19 = v9 < 1L;
        char v20 = __parity__((unsigned char)v9 - 1);
        char v21 = (unsigned long)v9 < 1L;
        char v22 = (((v9 - 1L) ^ v9) & (v9 ^ 0x1L)) < 0L;
        char v23 = (((v9 - 1L) ^ (v9 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v19 == v22) {
            long v24 = *(long*)(v2 - 8L);
            long v25 = *(long*)(v2 - 8L);
            long v26 = v24 >>> 10;
            char v27 = (v25 >>> 9L) & 0x1L;
            char v28 = v22;
            char v29 = v26 ? 0: 1;
            char v30 = v26 < 0L;
            char v31 = __parity__((unsigned char)v26);
            unsigned long v32 = (unsigned long)(v26 * 8L - 1L);
            param1 = (long)*(char*)(v2 + v32);
            unsigned long v33 = v32;
            long v34 = (long)(v32 - param1);
            char v35 = v34 ? 0: 1;
            char v36 = v34 < 0L;
            char v37 = __parity__((unsigned char)v34);
            char v38 = (((param1 ^ v33) ^ v34) >>> 4L) & 0x1L;
            char v39 = (unsigned long)param1 > v33;
            char v40 = ((param1 ^ v33) & (v34 ^ v33)) < 0L;
            long v41 = v34;
            long v42 = v34 * 2L;
            char v43 = v41 < 0L;
            char v44 = v41 < 0L ^ ((v41 >>> 62L) & 0x1L);
            char v45 = v42 ? 0: 1;
            char v46 = v42 < 0L;
            char v47 = __parity__((unsigned char)v42);
            long v48 = v42 - v9;
            param0 = v48 + 2L;
            char v49 = v0 == param0;
            char v50 = (long)v0 < param0;
            char v51 = __parity__((unsigned char)v0 - (unsigned char)param0);
            char v52 = v0 < (unsigned long)param0;
            char v53 = (((v0 - param0) ^ v0) & (v0 ^ param0)) < 0L;
            char v54 = (((v0 - param0) ^ (v0 ^ param0)) >>> 4L) & 0x1L;
            if((v49 || v50 != v53)) {
                return caml_c_call();
            }
        }
    }
    long v55 = "Marshal.to_buffer: substring out of bounds";
    void* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v56 = &ptr0 ? 0: 1;
    char v57 = (long)&ptr0 < 0L;
    char v58 = __parity__((unsigned char)&ptr0);
    char v59 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v60 = (unsigned long)&v1 >= 18446744073709551608L;
    char v61 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, v9, v10, v11);
}

long camlMarshal__total_size_79(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0 = camlMarshal__data_size_76(param0, param1, param2, param3, param4, param5);
    return v0 + 40L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlObj__double_field_69(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    void* ptr0;
    long v1;
    unsigned long v2;
    long* ptr1;
    char v3;
    long* ptr2 = &v0;
    char v4 = &v0 == 8L;
    char v5 = (long)&v3 < 0L;
    char v6 = __parity__((unsigned char)&v0 - 8);
    char v7 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x8L) ^ (long)&v3) >>> 4L) & 0x1L);
    char v8 = (unsigned long)&v0 < 8L;
    char v9 = (long)(long*)((long)(long*)((long)&v0 ^ (long)&v3) & (long)(long*)((long)&v0 ^ 0x8L)) < 0L;
    long v10 = v1;
    while(1) {
        long* ptr3 = ptr1;
        ptr1 -= 2;
        char v11 = ptr1 ? 0: 1;
        char v12 = (unsigned long)ptr1 >= 0x8000000000000000L;
        char v13 = __parity__((unsigned char)ptr1);
        char v14 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr3 ^ 0x10L) ^ (long)ptr1) >>> 4L) & 0x1L);
        char v15 = (unsigned long)ptr3 < 16L;
        char v16 = (long)(long*)((long)(long*)((long)ptr1 ^ (long)ptr3) & (long)(long*)((long)ptr3 ^ 0x10L)) < 0L;
        long v17 = &caml_young_limit;
        char v18 = caml_young_limit == ptr1;
        char v19 = (long)caml_young_limit > (long)ptr1;
        char v20 = __parity__((unsigned char)ptr1 - (unsigned char)caml_young_limit);
        char v21 = caml_young_limit > (unsigned long)ptr1;
        char v22 = (long)(long*)((long)(long*)((long)(long*)((long)ptr1 - caml_young_limit) ^ (long)ptr1) & (long)(long*)(caml_young_limit ^ (long)ptr1)) < 0L;
        char v23 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr1 - caml_young_limit) ^ (long)(long*)(caml_young_limit ^ (long)ptr1)) >>> 4L) & 0x1L);
        if(!v21) {
            break;
        }
        else {
            long v24 = caml_call_gc(param0, v10, param2, param3, param4, param5);
        }
    }
    *ptr1 = 1277L;
    long v25 = *(long*)(v10 - 8L);
    unsigned long v26 = (unsigned long)(v25 >>> 9);
    char v27 = v2 == v26;
    char v28 = v2 > v26;
    if(!v28 && !v27) {
        *(long*)(long)(ptr1 + 1) = *(long*)(v2 * 4L + v10 - 4L);
        return (long)(ptr1 + 1);
    }
    long* ptr4 = &ptr0;
    long v29 = /*BAD_CALL!*/ caml_ml_array_bound_error();
}

long camlObj__entry() {
    camlObj = &camlObj__4;
    gvar_6529A0 = &camlObj__3;
    gvar_652A20 = &camlObj__2;
    gvar_652A28 = &camlObj__1;
    gvar_6529A8 = 493L;
    gvar_6529B0 = 495L;
    gvar_6529B8 = 0x1f1L;
    gvar_6529C0 = 499L;
    gvar_6529C8 = 501L;
    gvar_6529D0 = 503L;
    gvar_6529D8 = 503L;
    gvar_6529E0 = 505L;
    gvar_6529E8 = 507L;
    gvar_6529F0 = 509L;
    gvar_6529F8 = 0x1ffL;
    gvar_652A00 = 0x1ffL;
    gvar_652A08 = 2001L;
    gvar_652A10 = 2003L;
    gvar_652A18 = 2005L;
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlObj__marshal_80() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlObj__set_double_field_72(long* param0) {
    void* ptr0;
    long v0;
    unsigned long v1;
    long v2 = *(long*)(v0 - 8L);
    unsigned long v3 = (unsigned long)(v2 >>> 9);
    char v4 = v1 == v3;
    char v5 = v1 > v3;
    if(!v5 && !v4) {
        *(long*)(v1 * 4L + v0 - 4L) = *param0;
        return 1L;
    }
    long* ptr1 = &ptr0;
    long v6 = /*BAD_CALL!*/ caml_ml_array_bound_error();
}

void camlObj__unmarshal_82() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPervasives__$40_167() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__$5e$5e_336() {
    camlPervasives__$5e_136();
    return camlPervasives__$5e_136();
}

unsigned long camlPervasives__abs_71() {
    unsigned long v0;
    return (long)v0 < 1L ? (unsigned long)(2L - v0): v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__at_exit_346(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1 = *gvar_64D018;
    long* i;
    for(i = i - 5; caml_young_limit > (unsigned long)i; i -= 5) {
        caml_call_gc(v0, param1, param2, param3, param4, param5);
    }
    *i = 4343L;
    *(long*)(unsigned long)(i + 1) = &camlPervasives__fun_524;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    caml_modify(gvar_64D018, (unsigned long)(i + 1));
    return 1L;
}

void camlPervasives__bool_of_string_153() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__build_result_267(long* param0) {
    long result;
    unsigned long v0;
    while(param0 != 1L) {
        long* ptr0 = *(unsigned long*)(param0 + 1);
        long v1 = *param0;
        unsigned long v2 = (unsigned long)((*(long*)(v1 - 8L) >>> 10) * 8L - 1L);
        long v3 = (v2 - (unsigned long)*(char*)(v2 + v1)) * 2L + 1L;
        caml_blit_string(v1, 1L, result, v0 - v3 + 1L, v3);
        v0 = (unsigned long)(v0 - v3 + 1L);
        param0 = ptr0;
    }
    return result;
}

unsigned long camlPervasives__char_of_int_144(long param0, long param1, long param2, long param3, long param4, long param5) {
    unsigned long result;
    char v0 = result == 1L;
    char v1 = (long)result < 1L;
    char v2 = __parity__((unsigned char)result - 1);
    char v3 = result < 1L;
    char v4 = (((result - 1L) ^ result) & (result ^ 0x1L)) < 0L;
    char v5 = (((result - 1L) ^ (result ^ 0x1L)) >>> 4L) & 0x1L;
    if(v1 == v4) {
        v0 = result == 0x1ffL;
        v1 = (long)result < 0x1ffL;
        v2 = __parity__((unsigned char)result - 0xff);
        v3 = result < 0x1ffL;
        v4 = (((result - 0x1ffL) ^ result) & (result ^ 0x1ffL)) < 0L;
        v5 = (((result - 0x1ffL) ^ (result ^ 0x1ffL)) >>> 4L) & 0x1L;
        if((v0 || v1 != v4)) {
            return result;
        }
    }
    long v6 = "char_of_int";
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, param3, param4, param5);
}

long camlPervasives__close_in_noerr_287() {
    sub_411FC8();
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__close_out_233() {
    caml_c_call();
    return caml_c_call();
}

long camlPervasives__close_out_noerr_235() {
    sub_411D20();
    sub_411D4C();
    return 1L;
}

long camlPervasives__do_at_exit_349() {
    long v0 = &camlPervasives;
    unsigned long* ptr0 = gvar_64D018;
    long* ptr1 = *ptr0;
    long v1 = 1L;
    long v2 = *ptr1;
    jump v2;
}

void camlPervasives__entry() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__exit_350() {
    **gvar_64D018();
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPervasives__failwith_38(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    while(1) {
        long* ptr0 = ptr0 - 3;
        if(caml_young_limit <= (unsigned long)ptr0) {
            *ptr0 = 0x800L;
            *(ptr0 + 1) = &caml_exn_Failure;
            *(ptr0 + 2) = v0;
            caml_raise_exn();
        }
        caml_call_gc(v0, param1, param2, param3, param4, param5);
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPervasives__flush_all_209() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_416() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_418() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_420() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_422() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_424() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_426() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_428() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_430() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_432() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_434() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_436() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_438() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_440() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_442() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_444() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_446() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_448() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_509() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_511() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_513() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_515() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_517() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__fun_519() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__input_248(long param0, long param1, long param2, long param3, long param4, long param5) {
    void* ptr0;
    long v0;
    char v1;
    long* ptr1 = &ptr0;
    char v2 = &ptr0 == 8L;
    char v3 = (long)&v1 < 0L;
    char v4 = __parity__((unsigned char)&ptr0 - 8);
    char v5 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v6 = (unsigned long)&ptr0 < 8L;
    char v7 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v8 = param0;
    long v9 = param1;
    char v10 = v8 == 1L;
    char v11 = v8 < 1L;
    char v12 = __parity__((unsigned char)v8 - 1);
    char v13 = (unsigned long)v8 < 1L;
    char v14 = (((v8 - 1L) ^ v8) & (v8 ^ 0x1L)) < 0L;
    char v15 = (((v8 - 1L) ^ (v8 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v11 == v14) {
        char v16 = v9 == 1L;
        char v17 = v9 < 1L;
        char v18 = __parity__((unsigned char)v9 - 1);
        char v19 = (unsigned long)v9 < 1L;
        char v20 = (((v9 - 1L) ^ v9) & (v9 ^ 0x1L)) < 0L;
        char v21 = (((v9 - 1L) ^ (v9 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v17 == v20) {
            long v22 = *(long*)(v0 - 8L);
            long v23 = *(long*)(v0 - 8L);
            long v24 = v22 >>> 10;
            char v25 = (v23 >>> 9L) & 0x1L;
            char v26 = v20;
            char v27 = v24 ? 0: 1;
            char v28 = v24 < 0L;
            char v29 = __parity__((unsigned char)v24);
            unsigned long v30 = (unsigned long)(v24 * 8L - 1L);
            param1 = (long)*(char*)(v0 + v30);
            unsigned long v31 = v30;
            long v32 = (long)(v30 - param1);
            char v33 = v32 ? 0: 1;
            char v34 = v32 < 0L;
            char v35 = __parity__((unsigned char)v32);
            char v36 = (((param1 ^ v31) ^ v32) >>> 4L) & 0x1L;
            char v37 = (unsigned long)param1 > v31;
            char v38 = ((param1 ^ v31) & (v32 ^ v31)) < 0L;
            long v39 = v32;
            long v40 = v32 * 2L;
            char v41 = v39 < 0L;
            char v42 = v39 < 0L ^ ((v39 >>> 62L) & 0x1L);
            char v43 = v40 ? 0: 1;
            char v44 = v40 < 0L;
            char v45 = __parity__((unsigned char)v40);
            long v46 = v40 - v9;
            param0 = v46 + 2L;
            char v47 = v8 == param0;
            char v48 = v8 < param0;
            char v49 = __parity__((unsigned char)v8 - (unsigned char)param0);
            char v50 = (unsigned long)v8 < (unsigned long)param0;
            char v51 = (((v8 - param0) ^ v8) & (v8 ^ param0)) < 0L;
            char v52 = (((v8 - param0) ^ (v8 ^ param0)) >>> 4L) & 0x1L;
            if((v47 || v48 != v51)) {
                return caml_c_call();
            }
        }
    }
    long v53 = "input";
    void* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v54 = &ptr0 ? 0: 1;
    char v55 = (long)&ptr0 < 0L;
    char v56 = __parity__((unsigned char)&ptr0);
    char v57 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v58 = (unsigned long)&v1 >= 18446744073709551608L;
    char v59 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, v8, v9, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPervasives__input_line_265() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPervasives__invalid_arg_40(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    while(1) {
        long* ptr0 = ptr0 - 3;
        if(caml_young_limit <= (unsigned long)ptr0) {
            *ptr0 = 0x800L;
            *(ptr0 + 1) = &caml_exn_Invalid_argument;
            *(ptr0 + 2) = v0;
            caml_raise_exn();
        }
        caml_call_gc(v0, param1, param2, param3, param4, param5);
    }
}

void camlPervasives__iter_210() {
    // Decompilation error
}

long camlPervasives__lnot_76() {
    long v0;
    return ~v0 | 0x1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__max_53() {
    long v0;
    long v1;
    long v2 = caml_c_call();
    return v2 != 1L ? v0: v1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__min_50() {
    long v0;
    long v1;
    long v2 = caml_c_call();
    return v2 != 1L ? v0: v1;
}

long camlPervasives__open_in_242() {
    return camlPervasives__open_in_gen_238();
}

long camlPervasives__open_in_bin_244() {
    return camlPervasives__open_in_gen_238();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__open_in_gen_238() {
    caml_c_call();
    return caml_c_call();
}

long camlPervasives__open_out_203() {
    return camlPervasives__open_out_gen_199();
}

long camlPervasives__open_out_bin_205() {
    return camlPervasives__open_out_gen_199();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__open_out_gen_199() {
    caml_c_call();
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__output_218(long param0, long param1, long param2, long param3, long param4, long param5) {
    void* ptr0;
    long v0;
    char v1;
    long* ptr1 = &ptr0;
    char v2 = &ptr0 == 8L;
    char v3 = (long)&v1 < 0L;
    char v4 = __parity__((unsigned char)&ptr0 - 8);
    char v5 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v6 = (unsigned long)&ptr0 < 8L;
    char v7 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v8 = param0;
    long v9 = param1;
    char v10 = v8 == 1L;
    char v11 = v8 < 1L;
    char v12 = __parity__((unsigned char)v8 - 1);
    char v13 = (unsigned long)v8 < 1L;
    char v14 = (((v8 - 1L) ^ v8) & (v8 ^ 0x1L)) < 0L;
    char v15 = (((v8 - 1L) ^ (v8 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v11 == v14) {
        char v16 = v9 == 1L;
        char v17 = v9 < 1L;
        char v18 = __parity__((unsigned char)v9 - 1);
        char v19 = (unsigned long)v9 < 1L;
        char v20 = (((v9 - 1L) ^ v9) & (v9 ^ 0x1L)) < 0L;
        char v21 = (((v9 - 1L) ^ (v9 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v17 == v20) {
            long v22 = *(long*)(v0 - 8L);
            long v23 = *(long*)(v0 - 8L);
            long v24 = v22 >>> 10;
            char v25 = (v23 >>> 9L) & 0x1L;
            char v26 = v20;
            char v27 = v24 ? 0: 1;
            char v28 = v24 < 0L;
            char v29 = __parity__((unsigned char)v24);
            unsigned long v30 = (unsigned long)(v24 * 8L - 1L);
            param1 = (long)*(char*)(v0 + v30);
            unsigned long v31 = v30;
            long v32 = (long)(v30 - param1);
            char v33 = v32 ? 0: 1;
            char v34 = v32 < 0L;
            char v35 = __parity__((unsigned char)v32);
            char v36 = (((param1 ^ v31) ^ v32) >>> 4L) & 0x1L;
            char v37 = (unsigned long)param1 > v31;
            char v38 = ((param1 ^ v31) & (v32 ^ v31)) < 0L;
            long v39 = v32;
            long v40 = v32 * 2L;
            char v41 = v39 < 0L;
            char v42 = v39 < 0L ^ ((v39 >>> 62L) & 0x1L);
            char v43 = v40 ? 0: 1;
            char v44 = v40 < 0L;
            char v45 = __parity__((unsigned char)v40);
            long v46 = v40 - v9;
            param0 = v46 + 2L;
            char v47 = v8 == param0;
            char v48 = v8 < param0;
            char v49 = __parity__((unsigned char)v8 - (unsigned char)param0);
            char v50 = (unsigned long)v8 < (unsigned long)param0;
            char v51 = (((v8 - param0) ^ v8) & (v8 ^ param0)) < 0L;
            char v52 = (((v8 - param0) ^ (v8 ^ param0)) >>> 4L) & 0x1L;
            if((v47 || v48 != v51)) {
                return caml_c_call();
            }
        }
    }
    long v53 = "output";
    void* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v54 = &ptr0 ? 0: 1;
    char v55 = (long)&ptr0 < 0L;
    char v56 = __parity__((unsigned char)&ptr0);
    char v57 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v58 = (unsigned long)&v1 >= 18446744073709551608L;
    char v59 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, v8, v9, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__output_string_215() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__output_value_226() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__prerr_char_301() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__prerr_endline_309() {
    camlPervasives__output_string_215();
    caml_c_call();
    return caml_c_call();
}

void camlPervasives__prerr_float_307() {
    // Decompilation error
}

long camlPervasives__prerr_int_305() {
    camlPervasives__string_of_int_154();
    return camlPervasives__output_string_215();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__prerr_newline_311() {
    caml_c_call();
    return caml_c_call();
}

long camlPervasives__prerr_string_303() {
    return camlPervasives__output_string_215();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__print_char_290() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__print_endline_298() {
    camlPervasives__output_string_215();
    caml_c_call();
    return caml_c_call();
}

void camlPervasives__print_float_296() {
    // Decompilation error
}

long camlPervasives__print_int_294() {
    camlPervasives__string_of_int_154();
    return camlPervasives__output_string_215();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__print_newline_300() {
    caml_c_call();
    return caml_c_call();
}

long camlPervasives__print_string_292() {
    return camlPervasives__output_string_215();
}

void camlPervasives__read_float_314() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPervasives__read_int_313() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPervasives__read_line_312() {
}

void camlPervasives__really_input_259() {
    // Decompilation error
}

long camlPervasives__string_of_bool_151() {
    unsigned long v0;
    return v0 == 1L ? "false": "true";
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPervasives__string_of_float_164() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__string_of_format_339() {
    long v0;
    long v1 = v0;
    unsigned long v2 = (unsigned long)((*(long*)(v0 - 8L) >>> 10) * 8L - 1L);
    long v3 = (v2 - (unsigned long)*(char*)(v2 + v0)) * 2L + 1L;
    long result = caml_c_call();
    caml_blit_string(v0, 1L, result, 1L, v3);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__string_of_int_154() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPervasives__unsafe_really_input_253(long param0, unsigned long param1) {
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    while((long)param1 > 1L) {
        unsigned long v6 = param1;
        long v7 = param0;
        long v8 = v1;
        long v9 = v0;
        long v10 = caml_c_call();
        if(v10 == 1L) {
            long* i;
            for(i = i - 2; caml_young_limit > (unsigned long)i; i -= 2) {
                caml_call_gc(v0, v1, v2, v3, v4, v5);
            }
            *i = 0x400L;
            *(i + 1) = &caml_exn_End_of_file;
            caml_raise_exn();
        }
        param1 = (unsigned long)(v6 - v10 + 1L);
        param0 = v10 + v7 - 1L;
        v0 = v9;
        v1 = v8;
    }
    return 1L;
}

void camlPervasives__valid_float_lexem_159() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__ac_of_format_212() {
}

long camlPrintf__add_char_220() {
    long v0;
    return v0 + 2L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPrintf__add_dot_302() {
    return camlPervasives__$5e_136();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPrintf__bad_conversion_85(long param0, long param1) {
    void* ptr0;
    long v0;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    long* ptr1 = &ptr0;
    char v6 = &ptr0 == 24L;
    char v7 = (long)&v0 < 0L;
    char v8 = __parity__((unsigned char)&ptr0 - 24);
    char v9 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x18L) ^ (long)&v0) >>> 4L) & 0x1L);
    char v10 = (unsigned long)&ptr0 < 24L;
    char v11 = (long)(long*)((long)(long*)((long)&v0 ^ (long)&ptr0) & (long)(long*)((long)&ptr0 ^ 0x18L)) < 0L;
    long v12 = param0;
    long v13 = &camlPrintf__54;
    long v14 = camlPervasives__$5e_136();
    long v15 = v14;
    long v16 = " in format string ``";
    long v17 = camlPervasives__$5e_136();
    long v18 = v17;
    long v19 = v1;
    long v20 = camlPervasives__string_of_int_154();
    long v21 = v18;
    long v22 = camlPervasives__$5e_136();
    long v23 = v22;
    long v24 = ", at char number ";
    long v25 = camlPervasives__$5e_136();
    v0 = v25;
    long v26 = 3L;
    long v27 = v12;
    long v28 = camlString__make_66();
    long v29 = v0;
    long v30 = camlPervasives__$5e_136();
    long v31 = v30;
    long v32 = "Printf: bad conversion %";
    long v33 = camlPervasives__$5e_136();
    long* ptr2 = &v0;
    long* ptr3 = &ptr0;
    char v34 = &ptr0 ? 0: 1;
    char v35 = (long)&ptr0 < 0L;
    char v36 = __parity__((unsigned char)&ptr0);
    char v37 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x18L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v38 = (unsigned long)&v0 >= 18446744073709551592L;
    char v39 = (long)(long*)((long)(long*)((long)&v0 ^ (long)&ptr0) & (long*)~(long)(long*)((long)&v0 ^ 0x18L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, v2, v3, v4, v5);
}

long camlPrintf__bad_conversion_format_89(long param0, long param1, long param2, long param3, long param4, long param5) {
    void* ptr0;
    long v0;
    long v1;
    long v2;
    char v3 = (long)(long*)((long)(long*)((long)&v0 ^ (long)&ptr0) & (long)(long*)((long)&ptr0 ^ 0x18L)) < 0L;
    v0 = v1;
    long v4 = param0;
    long v5 = *(long*)(v2 - 8L);
    long v6 = *(long*)(v2 - 8L);
    long v7 = v5 >>> 10;
    unsigned long v8 = (unsigned long)(v7 * 8L - 1L);
    unsigned long v9 = (unsigned long)*(char*)(v2 + v8);
    unsigned long v10 = v8;
    unsigned long v11 = v8 - v9;
    long v12 = v11 * 2L + 1L;
    camlString__sub_74(v12, param1, param2, param3, param4, param5);
    long v13 = v4;
    /*NO_RETURN*/ camlPrintf__bad_conversion_85(v13, param1);
}

void camlPrintf__bprintf_432() {
    // Decompilation error
}

void camlPrintf__count_arguments_of_format_226() {
    // Decompilation error
}

void camlPrintf__entry() {
    // Decompilation error
}

void camlPrintf__eprintf_427() {
    // Decompilation error
}

void camlPrintf__extract_format_113() {
    // Decompilation error
}

void camlPrintf__extract_format_float_138() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__extract_format_int_131() {
}

void camlPrintf__format_string_108() {
    // Decompilation error
}

void camlPrintf__fprintf_423() {
    // Decompilation error
}

long camlPrintf__fun_714() {
    return &camlPrintf__56;
}

long camlPrintf__fun_716() {
    return 1L;
}

long camlPrintf__fun_719() {
    return 1L;
}

long camlPrintf__fun_727() {
    return 1L;
}

long camlPrintf__fun_730() {
    return 1L;
}

long camlPrintf__fun_737() {
    return 1L;
}

void camlPrintf__fun_740() {
}

void camlPrintf__get_buff_434() {
    // Decompilation error
}

long camlPrintf__get_cont_440(long param0, long param1, long param2, long param3, long param4, long param5) {
    char v0;
    long* ptr0;
    long* ptr1;
    long* ptr2;
    long* ptr3 = &v0;
    char v1 = &v0 == 24L;
    char v2 = (long)&ptr0 < 0L;
    char v3 = __parity__((unsigned char)&v0 - 24);
    char v4 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x18L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v5 = (unsigned long)&v0 < 24L;
    char v6 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v0) & (long)(long*)((long)&v0 ^ 0x18L)) < 0L;
    long* ptr4 = ptr1;
    long* ptr5 = ptr2;
    ptr0 = ptr2;
    long v7 = *(ptr5 + 1);
    long v8 = 1L;
    long v9 = *ptr5;
    long v10 = camlString__sub_74(v7, param1, param2, param3, param4, param5);
    long* ptr6 = ptr0;
    *(ptr6 + 1) = 1L;
    long* ptr7 = ptr4;
    long v11 = *ptr7;
    long* ptr8 = &ptr0;
    long* ptr9 = &v0;
    char v12 = &v0 ? 0: 1;
    char v13 = (long)&v0 < 0L;
    char v14 = __parity__((unsigned char)&v0);
    char v15 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x18L) ^ (long)&v0) >>> 4L) & 0x1L);
    char v16 = (unsigned long)&ptr0 >= 18446744073709551592L;
    char v17 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v0) & (long*)~(long)(long*)((long)&ptr0 ^ 0x18L)) < 0L;
    jump v11;
}

long camlPrintf__get_contents_437(long param0, long param1, long param2, long param3, long param4, long param5) {
    long* ptr0;
    long* ptr1 = ptr0;
    long result = camlString__sub_74(*(ptr0 + 1), param1, param2, param3, param4, param5);
    *(ptr1 + 1) = 1L;
    return result;
}

long camlPrintf__get_index_293() {
    long v0;
    long* ptr0;
    return ptr0 != 1L ? *ptr0: v0;
}

long camlPrintf__ifprintf_421() {
    long v0 = &camlPrintf;
    long* ptr0 = gvar_653CB0;
    long v1 = &camlPrintf__44;
    long v2 = *ptr0;
    jump v2;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPrintf__incomplete_format_93(long param0, long param1, long param2, long param3, long param4, long param5) {
    void* ptr0;
    long v0;
    char v1;
    long v2;
    long* ptr1 = &ptr0;
    char v3 = &ptr0 == 8L;
    char v4 = (long)&v1 < 0L;
    char v5 = __parity__((unsigned char)&ptr0 - 8);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&ptr0 < 8L;
    char v8 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v9 = *(long*)(v2 - 8L);
    long v10 = *(long*)(v2 - 8L);
    long v11 = v9 >>> 10;
    char v12 = (v10 >>> 9L) & 0x1L;
    char v13 = v8;
    char v14 = v11 ? 0: 1;
    char v15 = v11 < 0L;
    char v16 = __parity__((unsigned char)v11);
    unsigned long v17 = (unsigned long)(v11 * 8L - 1L);
    unsigned long v18 = (unsigned long)*(char*)(v2 + v17);
    unsigned long v19 = v17;
    unsigned long v20 = v17 - v18;
    char v21 = v20 ? 0: 1;
    char v22 = v20 >= 0x8000000000000000L;
    char v23 = __parity__((unsigned char)v20);
    char v24 = (((v18 ^ v19) ^ v20) >>> 4L) & 0x1L;
    char v25 = v18 > v19;
    char v26 = (long)((v20 ^ v19) & (v18 ^ v19)) < 0L;
    long v27 = v20 * 2L + 1L;
    long v28 = 1L;
    long v29 = camlString__sub_74(v27, param1, param2, param3, param4, param5);
    long v30 = &camlPrintf__50;
    long v31 = camlPervasives__$5e_136();
    long v32 = v31;
    long v33 = "Printf: premature end of format string ``";
    long v34 = camlPervasives__$5e_136();
    long* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v35 = &ptr0 ? 0: 1;
    char v36 = (long)&ptr0 < 0L;
    char v37 = __parity__((unsigned char)&ptr0);
    char v38 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v39 = (unsigned long)&v1 >= 18446744073709551608L;
    char v40 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(v0, param1, param2, param3, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__index_of_int_65() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__iter_on_format_args_165() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__kapr_237() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlPrintf__kbprintf_429(long param0, long param1, long param2, long param3, long param4, long param5) {
    long result;
    long v0;
    long* i;
    for(i = i - 4; caml_young_limit > (unsigned long)i; i -= 4) {
        caml_call_gc(v0, param1, param2, result, param4, param5);
    }
    *i = 3319L;
    *(i + 1) = &camlPrintf__fun_724;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    caml_apply6(gvar_6533F0, gvar_6533F8, &camlPrintf__42, result, gvar_653CE0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__kfprintf_418() {
}

long camlPrintf__ksprintf_443() {
    long result;
    long v0 = *gvar_653CF8();
    caml_apply6(gvar_6533F0, gvar_6533F8, &camlPrintf__40, v0, gvar_653CE0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__list_iter_i_229() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__mkprintf_377() {
}

long* camlPrintf__next_index_290() {
    unsigned long v0;
    long* result;
    char v1 = v0 == 1L;
    char v2 = (long)v0 < 1L;
    char v3 = __parity__((unsigned char)v0 - 1);
    char v4 = v0 < 1L;
    char v5 = (((v0 - 1L) ^ v0) & (v0 ^ 0x1L)) < 0L;
    char v6 = (((v0 - 1L) ^ (v0 ^ 0x1L)) >>> 4L) & 0x1L;
    if(!v1) {
        return result;
    }
    long v7 = &camlPrintf;
    unsigned long v8 = gvar_653C20;
    long* ptr0 = *(unsigned long*)(v8 + 16L);
    long v9 = *ptr0;
    long* ptr1 = result;
    result = ptr0;
    jump v9;
}

long camlPrintf__pad_string_100(unsigned long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    if(param3 == v1 && param2 == 1L) {
        return param1;
    }
    else if(param3 >= v1) {
        return camlString__sub_74(param3, param1, param2, param3, v0, param5);
    }
    long result = camlString__make_66();
    if(param0 != 1L) {
        camlString__blit_84(result, 1L, param3);
    }
    else {
        camlString__blit_84(result, v1 - param3 + 1L, param3);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__parse_string_conversion_95() {
}

void camlPrintf__printf_425() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__scan_format_310() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__scan_positional_spec_280() {
}

long camlPrintf__sprintf_446() {
    char v0;
    long v1;
    long v2;
    long* ptr0 = &v0;
    char v3 = &v0 == 8L;
    char v4 = (long)&v1 < 0L;
    char v5 = __parity__((unsigned char)&v0 - 8);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&v0 < 8L;
    char v8 = (long)(long*)((long)(long*)((long)&v1 ^ (long)&v0) & (long)(long*)((long)&v0 ^ 0x8L)) < 0L;
    v1 = v2;
    long v9 = &camlPrintf__39;
    long v10 = camlPrintf__ksprintf_443();
    long v11 = v10;
    long v12 = *(long*)v11;
    long v13 = v1;
    long* ptr1 = &v1;
    long* ptr2 = &v0;
    char v14 = &v0 ? 0: 1;
    char v15 = (long)&v0 < 0L;
    char v16 = __parity__((unsigned char)&v0);
    char v17 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&v0) >>> 4L) & 0x1L);
    char v18 = (unsigned long)&v1 >= 18446744073709551608L;
    char v19 = (long)(long*)((long)(long*)((long)&v1 ^ (long)&v0) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    jump v12;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__sub_format_145() {
}

long camlPrintf__sub_format_for_printf_163() {
    long result;
    caml_apply3(result, gvar_653C70);
    return result;
}

void camlPrintf__summarize_format_type_190() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__valid_float_lexeme_298() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlSource__entry() {
}

long camlStd_exit__entry() {
    **gvar_64D018();
    return 1L;
}

long camlString__apply1_128() {
    long* ptr0;
    long result;
    unsigned long v0 = (unsigned long)((*(long*)(result - 8L) >>> 10) * 8L - 1L);
    if((v0 - (unsigned long)*(char*)(result + v0)) * 2L == 0L) {
        return result;
    }
    long v1 = result;
    long* ptr1 = ptr0;
    long v2 = camlString__copy_70();
    long v3 = *ptr0();
    long result1 = v2;
    *(char*)result1 = (unsigned char)(v3 >>> 1L);
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlString__blit_84(long param0, long param1, long param2) {
    void* ptr0;
    long v0;
    char v1;
    long v2;
    long* ptr1 = &ptr0;
    char v3 = &ptr0 == 8L;
    char v4 = (long)&v1 < 0L;
    char v5 = __parity__((unsigned char)&ptr0 - 8);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&ptr0 < 8L;
    char v8 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v9 = param0;
    long v10 = param1;
    long v11 = param2;
    char v12 = v11 == 1L;
    char v13 = v11 < 1L;
    char v14 = __parity__((unsigned char)v11 - 1);
    char v15 = (unsigned long)v11 < 1L;
    char v16 = (((v11 - 1L) ^ v11) & (v11 ^ 0x1L)) < 0L;
    char v17 = (((v11 - 1L) ^ (v11 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v13 == v16) {
        char v18 = v2 == 1L;
        char v19 = v2 < 1L;
        char v20 = __parity__((unsigned char)v2 - 1);
        char v21 = (unsigned long)v2 < 1L;
        char v22 = (((v2 - 1L) ^ v2) & (v2 ^ 0x1L)) < 0L;
        char v23 = (((v2 - 1L) ^ (v2 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v19 == v22) {
            long v24 = *(long*)(v0 - 8L);
            long v25 = *(long*)(v0 - 8L);
            long v26 = v24 >>> 10;
            char v27 = (v25 >>> 9L) & 0x1L;
            char v28 = v22;
            char v29 = v26 ? 0: 1;
            char v30 = v26 < 0L;
            char v31 = __parity__((unsigned char)v26);
            unsigned long v32 = (unsigned long)(v26 * 8L - 1L);
            param1 = (long)*(char*)(v0 + v32);
            unsigned long v33 = v32;
            long v34 = (long)(v32 - param1);
            char v35 = v34 ? 0: 1;
            char v36 = v34 < 0L;
            char v37 = __parity__((unsigned char)v34);
            char v38 = (((param1 ^ v33) ^ v34) >>> 4L) & 0x1L;
            char v39 = (unsigned long)param1 > v33;
            char v40 = ((param1 ^ v33) & (v34 ^ v33)) < 0L;
            long v41 = v34;
            long v42 = v34 * 2L;
            char v43 = v41 < 0L;
            char v44 = v41 < 0L ^ ((v41 >>> 62L) & 0x1L);
            char v45 = v42 ? 0: 1;
            char v46 = v42 < 0L;
            char v47 = __parity__((unsigned char)v42);
            long v48 = v42 - v11;
            param0 = v48 + 2L;
            char v49 = v2 == param0;
            char v50 = v2 < param0;
            char v51 = __parity__((unsigned char)v2 - (unsigned char)param0);
            char v52 = (unsigned long)v2 < (unsigned long)param0;
            char v53 = (((v2 - param0) ^ v2) & (v2 ^ param0)) < 0L;
            char v54 = (((v2 - param0) ^ (v2 ^ param0)) >>> 4L) & 0x1L;
            if((v49 || v50 != v53)) {
                char v55 = v10 == 1L;
                char v56 = v10 < 1L;
                char v57 = __parity__((unsigned char)v10 - 1);
                char v58 = (unsigned long)v10 < 1L;
                char v59 = (((v10 - 1L) ^ v10) & (v10 ^ 0x1L)) < 0L;
                char v60 = (((v10 - 1L) ^ (v10 ^ 0x1L)) >>> 4L) & 0x1L;
                if(v56 == v59) {
                    long v61 = *(long*)(v9 - 8L);
                    long v62 = *(long*)(v9 - 8L);
                    long v63 = v61 >>> 10;
                    char v64 = (v62 >>> 9L) & 0x1L;
                    char v65 = v59;
                    char v66 = v63 ? 0: 1;
                    char v67 = v63 < 0L;
                    char v68 = __parity__((unsigned char)v63);
                    unsigned long v69 = (unsigned long)(v63 * 8L - 1L);
                    param1 = (long)*(char*)(v69 + v9);
                    unsigned long v70 = v69;
                    long v71 = (long)(v69 - param1);
                    char v72 = v71 ? 0: 1;
                    char v73 = v71 < 0L;
                    char v74 = __parity__((unsigned char)v71);
                    char v75 = (((param1 ^ v70) ^ v71) >>> 4L) & 0x1L;
                    char v76 = (unsigned long)param1 > v70;
                    char v77 = ((param1 ^ v70) & (v71 ^ v70)) < 0L;
                    long v78 = v71;
                    long v79 = v71 * 2L;
                    char v80 = v78 < 0L;
                    char v81 = v78 < 0L ^ ((v78 >>> 62L) & 0x1L);
                    char v82 = v79 ? 0: 1;
                    char v83 = v79 < 0L;
                    char v84 = __parity__((unsigned char)v79);
                    long v85 = v79 - v11;
                    param0 = v85 + 2L;
                    char v86 = v10 == param0;
                    char v87 = v10 < param0;
                    char v88 = __parity__((unsigned char)v10 - (unsigned char)param0);
                    char v89 = (unsigned long)v10 < (unsigned long)param0;
                    char v90 = (((v10 - param0) ^ v10) & (v10 ^ param0)) < 0L;
                    char v91 = (((v10 - param0) ^ (v10 ^ param0)) >>> 4L) & 0x1L;
                    if((v86 || v87 != v90)) {
                        return caml_blit_string(v0, v2, v9, v10, v11);
                    }
                }
            }
        }
    }
    long v92 = "String.blit";
    void* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v93 = &ptr0 ? 0: 1;
    char v94 = (long)&ptr0 < 0L;
    char v95 = __parity__((unsigned char)&ptr0);
    char v96 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v97 = (unsigned long)&v1 >= 18446744073709551608L;
    char v98 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, v10, v11, v9);
}

long camlString__capitalize_132() {
    return camlString__apply1_128();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlString__compare_173() {
    return caml_c_call();
}

void camlString__concat_94() {
    // Decompilation error
}

void camlString__contains_165() {
    // Decompilation error
}

void camlString__contains_from_160() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlString__copy_70() {
    long v0;
    long v1 = v0;
    unsigned long v2 = (unsigned long)((*(long*)(v0 - 8L) >>> 10) * 8L - 1L);
    long v3 = (v2 - (unsigned long)*(char*)(v2 + v0)) * 2L + 1L;
    long result = caml_c_call();
    caml_blit_string(v0, 1L, result, 1L, v3);
    return result;
}

long camlString__entry() {
    camlString = &camlString__24;
    gvar_650EB0 = &camlString__23;
    gvar_650EB8 = &camlString__22;
    gvar_650EC0 = &camlString__21;
    gvar_650EC8 = &camlString__20;
    gvar_650ED8 = &camlString__19;
    gvar_650ED0 = &camlString__18;
    gvar_650EE0 = &camlString__17;
    gvar_650F48 = &camlString__16;
    gvar_650F20 = &camlString__15;
    gvar_650F28 = &camlString__14;
    gvar_650F50 = &camlString__13;
    gvar_650F30 = &camlString__12;
    gvar_650F38 = &camlString__11;
    gvar_650F58 = &camlString__10;
    gvar_650EE8 = &camlString__9;
    gvar_650EF8 = &camlString__8;
    gvar_650F60 = &camlString__7;
    gvar_650EF0 = &camlString__6;
    gvar_650F00 = &camlString__5;
    gvar_650F10 = &camlString__4;
    gvar_650F08 = &camlString__3;
    gvar_650F18 = &camlString__2;
    gvar_650F40 = &camlString__1;
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlString__escaped_108() {
}

long camlString__fill_79(long param0, long param1, long param2, long param3, long param4, long param5) {
    void* ptr0;
    long v0;
    char v1;
    long v2;
    long* ptr1 = &ptr0;
    char v3 = &ptr0 == 8L;
    char v4 = (long)&v1 < 0L;
    char v5 = __parity__((unsigned char)&ptr0 - 8);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&ptr0 < 8L;
    char v8 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v9 = param0;
    long v10 = param1;
    char v11 = v0 == 1L;
    char v12 = v0 < 1L;
    char v13 = __parity__((unsigned char)v0 - 1);
    char v14 = (unsigned long)v0 < 1L;
    char v15 = (((v0 - 1L) ^ v0) & (v0 ^ 0x1L)) < 0L;
    char v16 = (((v0 - 1L) ^ (v0 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v12 == v15) {
        char v17 = v9 == 1L;
        char v18 = v9 < 1L;
        char v19 = __parity__((unsigned char)v9 - 1);
        char v20 = (unsigned long)v9 < 1L;
        char v21 = (((v9 - 1L) ^ v9) & (v9 ^ 0x1L)) < 0L;
        char v22 = (((v9 - 1L) ^ (v9 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v18 == v21) {
            long v23 = *(long*)(v2 - 8L);
            long v24 = *(long*)(v2 - 8L);
            long v25 = v23 >>> 10;
            char v26 = (v24 >>> 9L) & 0x1L;
            char v27 = v21;
            char v28 = v25 ? 0: 1;
            char v29 = v25 < 0L;
            char v30 = __parity__((unsigned char)v25);
            unsigned long v31 = (unsigned long)(v25 * 8L - 1L);
            param1 = (long)*(char*)(v2 + v31);
            unsigned long v32 = v31;
            long v33 = (long)(v31 - param1);
            char v34 = v33 ? 0: 1;
            char v35 = v33 < 0L;
            char v36 = __parity__((unsigned char)v33);
            char v37 = (((param1 ^ v32) ^ v33) >>> 4L) & 0x1L;
            char v38 = (unsigned long)param1 > v32;
            char v39 = ((param1 ^ v32) & (v33 ^ v32)) < 0L;
            long v40 = v33;
            long v41 = v33 * 2L;
            char v42 = v40 < 0L;
            char v43 = v40 < 0L ^ ((v40 >>> 62L) & 0x1L);
            char v44 = v41 ? 0: 1;
            char v45 = v41 < 0L;
            char v46 = __parity__((unsigned char)v41);
            long v47 = v41 - v9;
            param0 = v47 + 2L;
            char v48 = v0 == param0;
            char v49 = v0 < param0;
            char v50 = __parity__((unsigned char)v0 - (unsigned char)param0);
            char v51 = (unsigned long)v0 < (unsigned long)param0;
            char v52 = (((v0 - param0) ^ v0) & (v0 ^ param0)) < 0L;
            char v53 = (((v0 - param0) ^ (v0 ^ param0)) >>> 4L) & 0x1L;
            if((v48 || v49 != v52)) {
                return caml_fill_string(v2, v0, v9, v10);
            }
        }
    }
    long v54 = "String.fill";
    void* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v55 = &ptr0 ? 0: 1;
    char v56 = (long)&ptr0 < 0L;
    char v57 = __parity__((unsigned char)&ptr0);
    char v58 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v59 = (unsigned long)&v1 >= 18446744073709551608L;
    char v60 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, v9, v10, param4, param5);
}

void camlString__index_141() {
    // Decompilation error
}

void camlString__index_from_144() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long camlString__index_rec_136(unsigned long param0, unsigned long param1, unsigned long param2, long param3, long param4, long param5) {
    unsigned long v0;
    long v1;
    while(1) {
        if((long)v0 <= (long)param0) {
            long* i;
            for(i = i - 2; caml_young_limit > (unsigned long)i; i -= 2) {
                caml_call_gc((long)param0, (long)param1, (long)param2, param3, param4, param5);
            }
            *i = 0x400L;
            v0 = &caml_exn_Not_found;
            *(i + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        param2 = (unsigned long)((unsigned long)*(char*)((param0 >> 1) + v1) * 2L + 1L);
        if(param2 == param1) {
            return param0;
        }
        param0 += 2L;
    }
}

long camlString__iter_90() {
    long v0;
    long* ptr0;
    unsigned long v1 = (unsigned long)((*(long*)(v0 - 8L) >>> 10) * 8L - 1L);
    unsigned long v2 = (unsigned long)((v1 - (unsigned long)*(char*)(v0 + v1)) * 2L - 1L);
    if((long)v2 >= 1L) {
        unsigned long v3 = v2;
        unsigned long v4 = 1L;
        long v5 = v0;
        long* ptr1 = ptr0;
        do {
            *ptr0();
            v2 = v4;
            v4 += 2L;
        }
        while(v2 != v3);
    }
    return 1L;
}

long camlString__lowercase_126() {
    return camlString__map_118();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlString__make_66() {
    long v0;
    long v1;
    long result = caml_c_call();
    caml_fill_string(result, 1L, v1, v0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlString__map_118() {
    long* ptr0;
    long result;
    unsigned long v0 = (unsigned long)((*(long*)(result - 8L) >>> 10) * 8L - 1L);
    unsigned long v1 = (unsigned long)((v0 - (unsigned long)*(char*)(result + v0)) * 2L + 1L);
    if(v1 == 1L) {
        return result;
    }
    long v2 = result;
    long* ptr1 = ptr0;
    long result1 = caml_c_call();
    if((long)(v1 - 2L) >= 1L) {
        long v3 = (long)(v1 - 2L);
        unsigned long v4 = 1L;
        long v5 = result1;
        do {
            long v6 = *ptr1();
            unsigned long v7 = v4;
            result1 = v5;
            *(char*)((v7 >> 1) + result1) = (unsigned char)(v6 >>> 1L);
            v4 = v7 + 2L;
        }
        while(v3 + 2L != v4);
    }
    return result1;
}

void camlString__rcontains_from_168() {
    // Decompilation error
}

void camlString__rindex_153() {
    // Decompilation error
}

void camlString__rindex_from_156() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long camlString__rindex_rec_149(unsigned long param0, unsigned long param1, long param2, long param3, long param4, long param5) {
    unsigned long result;
    long v0;
    while(1) {
        if((long)result < 1L) {
            long* i;
            for(i = i - 2; caml_young_limit > (unsigned long)i; i -= 2) {
                caml_call_gc((long)param0, (long)param1, param2, param3, param4, param5);
            }
            *i = 0x400L;
            result = &caml_exn_Not_found;
            *(i + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        param1 = (unsigned long)((unsigned long)*(char*)((result >> 1) + v0) * 2L + 1L);
        if(param1 == param0) {
            return result;
        }
        result -= 2L;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlString__sub_74(long param0, long param1, long param2, long param3, long param4, long param5) {
    void* ptr0;
    long result;
    long v0;
    long v1;
    char v2 = result == 1L;
    char v3 = result < 1L;
    char v4 = __parity__((unsigned char)result - 1);
    char v5 = (unsigned long)result < 1L;
    char v6 = (((result - 1L) ^ result) & (result ^ 0x1L)) < 0L;
    char v7 = (((result - 1L) ^ (result ^ 0x1L)) >>> 4L) & 0x1L;
    if(v3 == v6) {
        char v8 = param0 == 1L;
        char v9 = param0 < 1L;
        char v10 = __parity__((unsigned char)param0 - 1);
        char v11 = (unsigned long)param0 < 1L;
        char v12 = (((param0 - 1L) ^ param0) & (param0 ^ 0x1L)) < 0L;
        char v13 = (((param0 - 1L) ^ (param0 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v9 == v12) {
            long v14 = *(long*)(v1 - 8L);
            long v15 = *(long*)(v1 - 8L);
            long v16 = v14 >>> 10;
            char v17 = (v15 >>> 9L) & 0x1L;
            char v18 = v12;
            char v19 = v16 ? 0: 1;
            char v20 = v16 < 0L;
            char v21 = __parity__((unsigned char)v16);
            unsigned long v22 = (unsigned long)(v16 * 8L - 1L);
            param2 = (long)*(char*)(v1 + v22);
            unsigned long v23 = v22;
            long v24 = (long)(v22 - param2);
            char v25 = v24 ? 0: 1;
            char v26 = v24 < 0L;
            char v27 = __parity__((unsigned char)v24);
            char v28 = (((param2 ^ v23) ^ v24) >>> 4L) & 0x1L;
            char v29 = (unsigned long)param2 > v23;
            char v30 = ((param2 ^ v23) & (v24 ^ v23)) < 0L;
            long v31 = v24;
            long v32 = v24 * 2L;
            char v33 = v31 < 0L;
            char v34 = v31 < 0L ^ ((v31 >>> 62L) & 0x1L);
            char v35 = v32 ? 0: 1;
            char v36 = v32 < 0L;
            char v37 = __parity__((unsigned char)v32);
            long v38 = v32 - param0;
            param1 = v38 + 2L;
            char v39 = result == param1;
            char v40 = result < param1;
            char v41 = __parity__((unsigned char)result - (unsigned char)param1);
            char v42 = (unsigned long)result < (unsigned long)param1;
            char v43 = (((result - param1) ^ result) & (result ^ param1)) < 0L;
            char v44 = (((result - param1) ^ (result ^ param1)) >>> 4L) & 0x1L;
            if((v39 || v40 != v43)) {
                long v45 = result;
                result = caml_c_call();
                caml_blit_string(v1, v45, result, 1L, param0);
                return result;
            }
        }
    }
    long v46 = "String.sub";
    void* ptr1 = &v0;
    long* ptr2 = &ptr0;
    char v47 = &ptr0 ? 0: 1;
    char v48 = (long)&ptr0 < 0L;
    char v49 = __parity__((unsigned char)&ptr0);
    char v50 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x18L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v51 = (unsigned long)&v0 >= 18446744073709551592L;
    char v52 = (long)(long*)((long)(long*)((long)&v0 ^ (long)&ptr0) & (long*)~(long)(long*)((long)&v0 ^ 0x18L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, param3, param4, param5);
}

long camlString__uncapitalize_134() {
    return camlString__apply1_128();
}

long camlString__uppercase_124() {
    return camlString__map_118();
}

void camlSys__catch_break_110() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlSys__entry() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlSys__fun_121() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlSys__set_signal_85() {
    caml_c_call();
    return 1L;
}

long camlUnixLabels__entry() {
    camlUnixLabels = camlUnix;
    gvar_64C8B0 = gvar_648B38;
    gvar_64C8B8 = gvar_648B40;
    gvar_64C8C0 = gvar_648B48;
    gvar_64C8C8 = gvar_648B50;
    gvar_64C8D0 = gvar_648B58;
    gvar_64C8D8 = gvar_648B60;
    gvar_64C8E0 = gvar_648B68;
    gvar_64C8E8 = gvar_648B70;
    gvar_64C8F0 = gvar_648B78;
    gvar_64C8F8 = gvar_648B80;
    gvar_64C900 = gvar_648B88;
    gvar_64C908 = gvar_648B90;
    gvar_64C910 = gvar_648B98;
    gvar_64C918 = gvar_648BA0;
    gvar_64C920 = gvar_648BA8;
    gvar_64C928 = gvar_648BB0;
    gvar_64C930 = 1L;
    gvar_64C938 = 3L;
    gvar_64C940 = 5L;
    gvar_64C948 = gvar_648BD0;
    gvar_64C950 = gvar_648BD8;
    gvar_64C958 = gvar_648BE0;
    gvar_64C960 = gvar_648BE8;
    gvar_64C968 = gvar_648BF0;
    gvar_64C970 = gvar_648BF8;
    gvar_64C978 = gvar_648C00;
    gvar_64C980 = gvar_648C08;
    gvar_64C988 = gvar_648C10;
    gvar_64C990 = gvar_648C18;
    gvar_64C998 = gvar_648C20;
    gvar_64C9A0 = gvar_648C28;
    gvar_64C9A8 = gvar_648C30;
    gvar_64C9B0 = gvar_648C38;
    gvar_64C9B8 = gvar_648C40;
    gvar_64C9C0 = gvar_648C48;
    gvar_64C9C8 = gvar_648C50;
    gvar_64C9D0 = gvar_648C58;
    gvar_64C9D8 = gvar_648C60;
    gvar_64C9E0 = gvar_648C68;
    gvar_64C9E8 = gvar_648C70;
    gvar_64C9F0 = gvar_648C78;
    gvar_64C9F8 = gvar_648C80;
    gvar_64CA00 = gvar_648C88;
    gvar_64CA08 = gvar_648C90;
    gvar_64CA10 = gvar_648C98;
    gvar_64CA18 = gvar_648CA0;
    gvar_64CA20 = gvar_648CA8;
    gvar_64CA28 = gvar_648CB0;
    gvar_64CA30 = gvar_648CB8;
    gvar_64CA38 = gvar_648CC0;
    gvar_64CA40 = gvar_648CC8;
    gvar_64CA48 = gvar_648CD0;
    gvar_64CA50 = gvar_648CD8;
    gvar_64CA58 = gvar_648CE0;
    gvar_64CA60 = gvar_648CE8;
    gvar_64CA68 = gvar_648CF0;
    gvar_64CA70 = gvar_648CF8;
    gvar_64CA78 = gvar_648D00;
    gvar_64CA80 = gvar_648D08;
    gvar_64CA88 = gvar_648D10;
    gvar_64CA90 = gvar_648D18;
    gvar_64CA98 = gvar_648D20;
    gvar_64CAA0 = gvar_648D28;
    gvar_64CAA8 = gvar_648D30;
    gvar_64CAB0 = gvar_648D38;
    gvar_64CAB8 = gvar_648D40;
    gvar_64CAC0 = gvar_648D48;
    gvar_64CAC8 = gvar_648D50;
    gvar_64CAD0 = gvar_648D58;
    gvar_64CAD8 = gvar_648D60;
    gvar_64CAE0 = gvar_648D68;
    gvar_64CAE8 = gvar_648D70;
    gvar_64CAF0 = gvar_648D78;
    gvar_64CAF8 = gvar_648D80;
    gvar_64CB00 = gvar_648D88;
    gvar_64CB08 = gvar_648D90;
    gvar_64CB10 = gvar_648D98;
    gvar_64CB18 = gvar_648DA0;
    gvar_64CB20 = gvar_648DA8;
    gvar_64CB28 = gvar_648DB0;
    gvar_64CB30 = gvar_648DB8;
    gvar_64CB38 = gvar_648DC0;
    gvar_64CB40 = gvar_648DC8;
    gvar_64CB48 = gvar_648DD0;
    gvar_64CB50 = gvar_648DD8;
    gvar_64CB58 = gvar_648DE0;
    gvar_64CB60 = gvar_648DE8;
    gvar_64CB68 = gvar_648DF0;
    gvar_64CB70 = gvar_648DF8;
    gvar_64CB78 = gvar_648E00;
    gvar_64CB80 = gvar_648E08;
    gvar_64CB88 = gvar_648E10;
    gvar_64CB90 = gvar_648E18;
    gvar_64CB98 = gvar_648E20;
    gvar_64CBA0 = gvar_648E28;
    gvar_64CBA8 = gvar_648E30;
    gvar_64CBB0 = gvar_648E38;
    gvar_64CBB8 = gvar_648E40;
    gvar_64CBC0 = gvar_648E48;
    gvar_64CBC8 = gvar_648E50;
    gvar_64CBD0 = gvar_648E58;
    gvar_64CBD8 = gvar_648E60;
    gvar_64CBE0 = gvar_648E68;
    gvar_64CBE8 = gvar_648E70;
    gvar_64CBF0 = gvar_648E78;
    gvar_64CBF8 = gvar_648E80;
    gvar_64CC00 = gvar_648E88;
    gvar_64CC08 = gvar_648E90;
    gvar_64CC10 = gvar_648E98;
    gvar_64CC18 = gvar_648EA0;
    gvar_64CC20 = gvar_648EA8;
    gvar_64CC28 = gvar_648EB0;
    gvar_64CC30 = gvar_648EB8;
    gvar_64CC38 = gvar_648EC0;
    gvar_64CC40 = gvar_648EC8;
    gvar_64CC48 = gvar_648ED0;
    gvar_64CC50 = gvar_648ED8;
    gvar_64CC58 = gvar_648EE0;
    gvar_64CC60 = gvar_648EE8;
    gvar_64CC68 = gvar_648EF0;
    gvar_64CC70 = gvar_648EF8;
    gvar_64CC78 = gvar_648F00;
    gvar_64CC80 = gvar_648F08;
    gvar_64CC88 = gvar_648F10;
    gvar_64CC90 = gvar_648F18;
    gvar_64CC98 = gvar_648F20;
    gvar_64CCA0 = gvar_648F28;
    gvar_64CCA8 = gvar_648F30;
    gvar_64CCB0 = gvar_648F38;
    gvar_64CCB8 = gvar_648F40;
    gvar_64CCC0 = gvar_648F48;
    gvar_64CCC8 = gvar_648F50;
    gvar_64CCD0 = gvar_648F58;
    gvar_64CCD8 = gvar_648F60;
    gvar_64CCE0 = gvar_648F68;
    gvar_64CCE8 = gvar_648F70;
    gvar_64CCF0 = gvar_648F78;
    gvar_64CCF8 = gvar_648F80;
    gvar_64CD00 = gvar_648F88;
    gvar_64CD08 = gvar_648F90;
    gvar_64CD10 = gvar_648F98;
    gvar_64CD18 = gvar_648FA0;
    gvar_64CD20 = gvar_648FA8;
    gvar_64CD28 = gvar_648FB0;
    gvar_64CD30 = gvar_648FB8;
    gvar_64CD38 = gvar_648FC0;
    gvar_64CD40 = gvar_648FC8;
    gvar_64CD48 = gvar_648FD0;
    gvar_64CD50 = gvar_648FD8;
    gvar_64CD58 = gvar_648FE0;
    gvar_64CD60 = gvar_648FE8;
    gvar_64CD68 = gvar_648FF0;
    return 1L;
}

long camlUnix__accept_non_intr_1050() {
    char v0;
    long v1;
    void* ptr0;
    long v2;
    long* ptr1 = &v0;
    char v3 = &v0 == 8L;
    char v4 = (long)&v1 < 0L;
    char v5 = __parity__((unsigned char)&v0 - 8);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&v0 < 8L;
    char v8 = (long)(long*)((long)(long*)((long)&v1 ^ (long)&v0) & (long)(long*)((long)&v0 ^ 0x8L)) < 0L;
    while(1) {
        v1 = v2;
        long v9 = sub_40F50C();
        long v10 = &camlUnix;
        unsigned long v11 = camlUnix;
        unsigned long v12 = *(unsigned long*)v9;
        char v13 = v12 == v11;
        char v14 = (long)v12 < (long)v11;
        char v15 = __parity__((unsigned char)v12 - (unsigned char)v11);
        char v16 = v12 < v11;
        char v17 = (long)(((v12 - v11) ^ v12) & (v12 ^ v11)) < 0L;
        char v18 = (((v12 - v11) ^ (v12 ^ v11)) >>> 4L) & 0x1L;
        if(!v13) {
            break;
        }
        else {
            v12 = *(unsigned long*)(v9 + 8L);
            v13 = (unsigned char)v12 & 0x1 ? 0: 1;
            v14 = ((unsigned char)v12 & 0x1) < 0;
            v15 = __parity__((unsigned char)v12 & 0x1);
            v17 = 0;
            v16 = 0;
            if(v13) {
                break;
            }
            else {
                v13 = v12 == 23L;
                v14 = (long)v12 < 23L;
                v15 = __parity__((unsigned char)v12 - 23);
                v16 = v12 < 23L;
                v17 = (((v12 - 23L) ^ v12) & (v12 ^ 0x17L)) < 0L;
                v18 = (((v12 - 23L) ^ (v12 ^ 0x17L)) >>> 4L) & 0x1L;
                if(!v13) {
                    break;
                }
                else {
                    v2 = v1;
                }
            }
        }
    }
    long* ptr2 = &ptr0;
    /*BAD_CALL!*/ caml_raise_exn();
}

void camlUnix__close_process_1035() {
    // Decompilation error
}

void camlUnix__close_process_full_1039() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlUnix__close_process_in_1029() {
}

void camlUnix__close_process_out_1032() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlUnix__create_process_933() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlUnix__create_process_env_940() {
}

long camlUnix__domain_of_sockaddr_555() {
    long* ptr0;
    if(*(char*)(ptr0 - 1)) {
        long v0 = *ptr0;
        unsigned long v1 = (unsigned long)((*(long*)(v0 - 8L) >>> 10) * 8L - 1L);
        return (v1 - (unsigned long)*(char*)(v1 + v0)) * 2L != 32L ? 3L: 5L;
    }
    return 1L;
}

void camlUnix__entry() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlUnix__establish_server_1052() {
    long* ptr0;
    long* ptr1 = ptr0;
    camlUnix__domain_of_sockaddr_555();
    long v0 = caml_c_call();
    camlUnix__setsockopt_672(3L);
    caml_c_call();
    caml_c_call();
    while(1) {
        long v1 = camlUnix__accept_non_intr_1050();
        long v2 = *(long*)v1;
        long v3 = caml_c_call();
        if(v3 != 1L) {
            caml_c_call();
            camlUnix__waitpid_non_intr_1027();
        }
        else {
            long v4 = caml_c_call();
            if(v4 != 1L) {
                camlPervasives__exit_350();
            }
            caml_c_call();
            camlUnix__try_set_close_on_exec_394();
            caml_c_call();
            caml_c_call();
            caml_apply2(ptr1);
            camlPervasives__exit_350();
        }
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlUnix__find_proc_id_1023() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1585() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1587() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1589() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1591() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1593() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1595(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1597() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1599() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1601() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1603() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1605() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1607() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1609() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1611() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1613() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1615() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1617() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1619() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1621() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1623() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1625() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1627(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1629(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1631() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1633() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1635() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1637() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1639() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1641() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1643() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1645() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1647() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1649() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1651() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1653() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1655() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1657() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1659() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1661() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1663(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1665() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1667() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1669() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1671() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1673() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1675() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1677() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1679() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1681() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1683() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1685() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1687() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1689(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1691(long param0, long param1) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1693() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1695() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1697() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1699() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1701() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1703() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1705() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1707() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1709() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1711() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1713() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1715() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1717() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1719() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1721() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1723() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1725() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1727() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1729() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1731() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1733() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1735(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1737(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1739() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1741() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1743() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1745() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1747() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1749() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1751() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1753() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1755() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1757() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1759() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1761(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1763() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1765() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1767() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1769() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1771() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1773(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1775() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1777() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1779() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1781() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1783() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1785() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1787(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1789() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1791(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1793() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1795() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1797() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1799() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1801() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1813(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1815() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1817() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1819() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1821() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1823() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1833(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1835(long param0, long param1) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1876() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__fun_1882() {
    return caml_c_call();
}

void camlUnix__getaddrinfo_777() {
    // Decompilation error
}

void camlUnix__getaddrinfo_emulation_756() {
    // Decompilation error
}

void camlUnix__getnameinfo_807() {
    // Decompilation error
}

void camlUnix__getnameinfo_emulation_798() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__getsockopt_669() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__getsockopt_error_697() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__getsockopt_float_690() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__getsockopt_int_676() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__getsockopt_optint_683() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__handle_unix_error_199(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long v2;
    long v3;
    long* ptr0;
    long v4;
    long* ptr1 = &v0;
    char v5 = &v0 == 24L;
    char v6 = (long)&v1 < 0L;
    char v7 = __parity__((unsigned char)&v0 - 24);
    char v8 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x18L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v9 = (unsigned long)&v0 < 24L;
    char v10 = (long)(long*)((long)(long*)((long)&v1 ^ (long)&v0) & (long)(long*)((long)&v0 ^ 0x18L)) < 0L;
    long* ptr2 = ptr0;
    long v11 = v4;
    long v12 = sub_40D5C0(param0, ptr2, param2, param3, param4, param5, v1, v2, v3, v0);
    long v13 = &camlUnix;
    long v14 = camlUnix;
    long* ptr3 = *(long**)v12;
    char v15 = ptr3 == v14;
    char v16 = (long)ptr3 < v14;
    char v17 = __parity__((unsigned char)ptr3 - (unsigned char)v14);
    char v18 = (unsigned long)ptr3 < (unsigned long)v14;
    char v19 = (long)(long*)((long)(long*)((long)(long*)((long)ptr3 - v14) ^ (long)ptr3) & (long)(long*)((long)ptr3 ^ v14)) < 0L;
    char v20 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr3 - v14) ^ (long)(long*)((long)ptr3 ^ v14)) >>> 4L) & 0x1L);
    if(v15) {
        long v21 = *(long*)(v12 + 24L);
        v3 = *(long*)(v12 + 24L);
        long v22 = *(long*)(v12 + 16L);
        v1 = *(long*)(v12 + 16L);
        long v23 = *(long*)(v12 + 8L);
        v2 = *(long*)(v12 + 8L);
        long v24 = &camlSys;
        ptr3 = camlSys;
        long* ptr4 = *(unsigned long*)(ptr3 - 1);
        ptr1 = *(unsigned long*)(ptr3 - 1);
        long* ptr5 = (long*)((long)ptr4 >>> 9);
        char v25 = (long*)((long)(long*)((long)ptr1 >>> 8L) & 0x1L);
        char v26 = v19;
        char v27 = ptr5 ? 0: 1;
        char v28 = (long)ptr5 < 0L;
        char v29 = __parity__((unsigned char)ptr5);
        v15 = ptr5 == 1L;
        v16 = (long)ptr5 < 1L;
        v17 = __parity__((unsigned char)ptr5 - 1);
        v18 = (unsigned long)ptr5 < 1L;
        v19 = (long)(long*)((long)(long*)((long)(long*)((char*)ptr5 - 1L) ^ (long)ptr5) & (long)(long*)((long)ptr5 ^ 0x1L)) < 0L;
        v20 = (long*)((long)(long*)((long)(long*)((long)(long*)((char*)ptr5 - 1L) ^ (long)(long*)((long)ptr5 ^ 0x1L)) >>> 4L) & 0x1L);
        if(!v18 && !v15) {
            camlPervasives__output_string_215();
            camlPervasives__output_string_215();
            camlPervasives__output_string_215();
            camlPervasives__output_string_215();
            unsigned long v30 = (unsigned long)((*(long*)(v3 - 8L) >>> 10) * 8L - 1L);
            if((long)(unsigned long)((v30 - (unsigned long)*(char*)(v30 + v3)) * 2L + 1L) > 1L) {
                camlPervasives__output_string_215();
                camlPervasives__output_string_215();
                camlPervasives__output_string_215();
            }
            camlPervasives__output_string_215();
            caml_c_call();
            camlPervasives__prerr_endline_309();
            return camlPervasives__exit_350();
        }
    }
    else {
        caml_raise_exn();
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error();
}

long camlUnix__is_inet6_addr_526() {
    long v0;
    unsigned long v1 = (unsigned long)((*(long*)(v0 - 8L) >>> 10) * 8L - 1L);
    return (v1 - (unsigned long)*(char*)(v1 + v0)) * 2L != 32L ? 1L: 3L;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlUnix__open_connection_1044() {
}

void camlUnix__open_proc_975() {
    // Decompilation error
}

void camlUnix__open_proc_full_1001() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlUnix__open_process_993() {
}

void camlUnix__open_process_full_1011() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlUnix__open_process_in_983() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlUnix__open_process_out_988() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__pause_436() {
    caml_c_call();
    return caml_c_call();
}

void camlUnix__perform_redirections_926() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__read_265(long param0, long param1, long param2, long param3, long param4, long param5) {
    void* ptr0;
    long v0;
    char v1;
    long* ptr1 = &ptr0;
    char v2 = &ptr0 == 8L;
    char v3 = (long)&v1 < 0L;
    char v4 = __parity__((unsigned char)&ptr0 - 8);
    char v5 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v6 = (unsigned long)&ptr0 < 8L;
    char v7 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v8 = param0;
    long v9 = param1;
    char v10 = v8 == 1L;
    char v11 = v8 < 1L;
    char v12 = __parity__((unsigned char)v8 - 1);
    char v13 = (unsigned long)v8 < 1L;
    char v14 = (((v8 - 1L) ^ v8) & (v8 ^ 0x1L)) < 0L;
    char v15 = (((v8 - 1L) ^ (v8 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v11 == v14) {
        char v16 = v9 == 1L;
        char v17 = v9 < 1L;
        char v18 = __parity__((unsigned char)v9 - 1);
        char v19 = (unsigned long)v9 < 1L;
        char v20 = (((v9 - 1L) ^ v9) & (v9 ^ 0x1L)) < 0L;
        char v21 = (((v9 - 1L) ^ (v9 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v17 == v20) {
            long v22 = *(long*)(v0 - 8L);
            long v23 = *(long*)(v0 - 8L);
            long v24 = v22 >>> 10;
            char v25 = (v23 >>> 9L) & 0x1L;
            char v26 = v20;
            char v27 = v24 ? 0: 1;
            char v28 = v24 < 0L;
            char v29 = __parity__((unsigned char)v24);
            unsigned long v30 = (unsigned long)(v24 * 8L - 1L);
            param1 = (long)*(char*)(v0 + v30);
            unsigned long v31 = v30;
            long v32 = (long)(v30 - param1);
            char v33 = v32 ? 0: 1;
            char v34 = v32 < 0L;
            char v35 = __parity__((unsigned char)v32);
            char v36 = (((param1 ^ v31) ^ v32) >>> 4L) & 0x1L;
            char v37 = (unsigned long)param1 > v31;
            char v38 = ((param1 ^ v31) & (v32 ^ v31)) < 0L;
            long v39 = v32;
            long v40 = v32 * 2L;
            char v41 = v39 < 0L;
            char v42 = v39 < 0L ^ ((v39 >>> 62L) & 0x1L);
            char v43 = v40 ? 0: 1;
            char v44 = v40 < 0L;
            char v45 = __parity__((unsigned char)v40);
            long v46 = v40 - v9;
            param0 = v46 + 2L;
            char v47 = v8 == param0;
            char v48 = v8 < param0;
            char v49 = __parity__((unsigned char)v8 - (unsigned char)param0);
            char v50 = (unsigned long)v8 < (unsigned long)param0;
            char v51 = (((v8 - param0) ^ v8) & (v8 ^ param0)) < 0L;
            char v52 = (((v8 - param0) ^ (v8 ^ param0)) >>> 4L) & 0x1L;
            if((v47 || v48 != v51)) {
                return caml_c_call();
            }
        }
    }
    long v53 = "Unix.read";
    void* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v54 = &ptr0 ? 0: 1;
    char v55 = (long)&ptr0 < 0L;
    char v56 = __parity__((unsigned char)&ptr0);
    char v57 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v58 = (unsigned long)&v1 >= 18446744073709551608L;
    char v59 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, v8, v9, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__recv_584(long param0, long param1, long param2) {
    void* ptr0;
    long v0;
    char v1;
    long* ptr1 = &ptr0;
    char v2 = &ptr0 == 8L;
    char v3 = (long)&v1 < 0L;
    char v4 = __parity__((unsigned char)&ptr0 - 8);
    char v5 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v6 = (unsigned long)&ptr0 < 8L;
    char v7 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v8 = param0;
    long v9 = param1;
    long v10 = param2;
    char v11 = v8 == 1L;
    char v12 = v8 < 1L;
    char v13 = __parity__((unsigned char)v8 - 1);
    char v14 = (unsigned long)v8 < 1L;
    char v15 = (((v8 - 1L) ^ v8) & (v8 ^ 0x1L)) < 0L;
    char v16 = (((v8 - 1L) ^ (v8 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v12 == v15) {
        char v17 = v9 == 1L;
        char v18 = v9 < 1L;
        char v19 = __parity__((unsigned char)v9 - 1);
        char v20 = (unsigned long)v9 < 1L;
        char v21 = (((v9 - 1L) ^ v9) & (v9 ^ 0x1L)) < 0L;
        char v22 = (((v9 - 1L) ^ (v9 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v18 == v21) {
            long v23 = *(long*)(v0 - 8L);
            long v24 = *(long*)(v0 - 8L);
            long v25 = v23 >>> 10;
            char v26 = (v24 >>> 9L) & 0x1L;
            char v27 = v21;
            char v28 = v25 ? 0: 1;
            char v29 = v25 < 0L;
            char v30 = __parity__((unsigned char)v25);
            unsigned long v31 = (unsigned long)(v25 * 8L - 1L);
            param1 = (long)*(char*)(v0 + v31);
            unsigned long v32 = v31;
            long v33 = (long)(v31 - param1);
            char v34 = v33 ? 0: 1;
            char v35 = v33 < 0L;
            char v36 = __parity__((unsigned char)v33);
            char v37 = (((param1 ^ v32) ^ v33) >>> 4L) & 0x1L;
            char v38 = (unsigned long)param1 > v32;
            char v39 = ((param1 ^ v32) & (v33 ^ v32)) < 0L;
            long v40 = v33;
            long v41 = v33 * 2L;
            char v42 = v40 < 0L;
            char v43 = v40 < 0L ^ ((v40 >>> 62L) & 0x1L);
            char v44 = v41 ? 0: 1;
            char v45 = v41 < 0L;
            char v46 = __parity__((unsigned char)v41);
            long v47 = v41 - v9;
            param0 = v47 + 2L;
            char v48 = v8 == param0;
            char v49 = v8 < param0;
            char v50 = __parity__((unsigned char)v8 - (unsigned char)param0);
            char v51 = (unsigned long)v8 < (unsigned long)param0;
            char v52 = (((v8 - param0) ^ v8) & (v8 ^ param0)) < 0L;
            char v53 = (((v8 - param0) ^ (v8 ^ param0)) >>> 4L) & 0x1L;
            if((v48 || v49 != v52)) {
                return caml_c_call();
            }
        }
    }
    long v54 = "Unix.recv";
    void* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v55 = &ptr0 ? 0: 1;
    char v56 = (long)&ptr0 < 0L;
    char v57 = __parity__((unsigned char)&ptr0);
    char v58 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v59 = (unsigned long)&v1 >= 18446744073709551608L;
    char v60 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, v8, v9, v10);
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__recvfrom_590(long param0, long param1, long param2) {
    void* ptr0;
    long v0;
    char v1;
    long* ptr1 = &ptr0;
    char v2 = &ptr0 == 8L;
    char v3 = (long)&v1 < 0L;
    char v4 = __parity__((unsigned char)&ptr0 - 8);
    char v5 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v6 = (unsigned long)&ptr0 < 8L;
    char v7 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v8 = param0;
    long v9 = param1;
    long v10 = param2;
    char v11 = v8 == 1L;
    char v12 = v8 < 1L;
    char v13 = __parity__((unsigned char)v8 - 1);
    char v14 = (unsigned long)v8 < 1L;
    char v15 = (((v8 - 1L) ^ v8) & (v8 ^ 0x1L)) < 0L;
    char v16 = (((v8 - 1L) ^ (v8 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v12 == v15) {
        char v17 = v9 == 1L;
        char v18 = v9 < 1L;
        char v19 = __parity__((unsigned char)v9 - 1);
        char v20 = (unsigned long)v9 < 1L;
        char v21 = (((v9 - 1L) ^ v9) & (v9 ^ 0x1L)) < 0L;
        char v22 = (((v9 - 1L) ^ (v9 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v18 == v21) {
            long v23 = *(long*)(v0 - 8L);
            long v24 = *(long*)(v0 - 8L);
            long v25 = v23 >>> 10;
            char v26 = (v24 >>> 9L) & 0x1L;
            char v27 = v21;
            char v28 = v25 ? 0: 1;
            char v29 = v25 < 0L;
            char v30 = __parity__((unsigned char)v25);
            unsigned long v31 = (unsigned long)(v25 * 8L - 1L);
            param1 = (long)*(char*)(v0 + v31);
            unsigned long v32 = v31;
            long v33 = (long)(v31 - param1);
            char v34 = v33 ? 0: 1;
            char v35 = v33 < 0L;
            char v36 = __parity__((unsigned char)v33);
            char v37 = (((param1 ^ v32) ^ v33) >>> 4L) & 0x1L;
            char v38 = (unsigned long)param1 > v32;
            char v39 = ((param1 ^ v32) & (v33 ^ v32)) < 0L;
            long v40 = v33;
            long v41 = v33 * 2L;
            char v42 = v40 < 0L;
            char v43 = v40 < 0L ^ ((v40 >>> 62L) & 0x1L);
            char v44 = v41 ? 0: 1;
            char v45 = v41 < 0L;
            char v46 = __parity__((unsigned char)v41);
            long v47 = v41 - v9;
            param0 = v47 + 2L;
            char v48 = v8 == param0;
            char v49 = v8 < param0;
            char v50 = __parity__((unsigned char)v8 - (unsigned char)param0);
            char v51 = (unsigned long)v8 < (unsigned long)param0;
            char v52 = (((v8 - param0) ^ v8) & (v8 ^ param0)) < 0L;
            char v53 = (((v8 - param0) ^ (v8 ^ param0)) >>> 4L) & 0x1L;
            if((v48 || v49 != v52)) {
                return caml_c_call();
            }
        }
    }
    long v54 = "Unix.recvfrom";
    void* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v55 = &ptr0 ? 0: 1;
    char v56 = (long)&ptr0 < 0L;
    char v57 = __parity__((unsigned char)&ptr0);
    char v58 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v59 = (unsigned long)&v1 >= 18446744073709551608L;
    char v60 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, v8, v9, v10);
}

long camlUnix__safe_close_924() {
    long* ptr0;
    char v0;
    void* ptr1;
    long* ptr2 = &ptr0;
    char v1 = &ptr0 == 8L;
    char v2 = (long)&v0 < 0L;
    char v3 = __parity__((unsigned char)&ptr0 - 8);
    char v4 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v0) >>> 4L) & 0x1L);
    char v5 = (unsigned long)&ptr0 < 8L;
    char v6 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v0) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v7 = sub_40E620();
    long v8 = &camlUnix;
    unsigned long v9 = camlUnix;
    unsigned long v10 = *(unsigned long*)v7;
    char v11 = v10 == v9;
    char v12 = (long)v10 < (long)v9;
    char v13 = __parity__((unsigned char)v10 - (unsigned char)v9);
    char v14 = v10 < v9;
    char v15 = (long)(((v10 - v9) ^ v10) & (v10 ^ v9)) < 0L;
    char v16 = (((v10 - v9) ^ (v10 ^ v9)) >>> 4L) & 0x1L;
    if(v11) {
        return 1L;
    }
    long* ptr3 = &ptr1;
    /*BAD_CALL!*/ caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlUnix__safe_dup_920() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__send_596(long param0, long param1, long param2) {
    void* ptr0;
    long v0;
    char v1;
    long* ptr1 = &ptr0;
    char v2 = &ptr0 == 8L;
    char v3 = (long)&v1 < 0L;
    char v4 = __parity__((unsigned char)&ptr0 - 8);
    char v5 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v6 = (unsigned long)&ptr0 < 8L;
    char v7 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v8 = param0;
    long v9 = param1;
    long v10 = param2;
    char v11 = v8 == 1L;
    char v12 = v8 < 1L;
    char v13 = __parity__((unsigned char)v8 - 1);
    char v14 = (unsigned long)v8 < 1L;
    char v15 = (((v8 - 1L) ^ v8) & (v8 ^ 0x1L)) < 0L;
    char v16 = (((v8 - 1L) ^ (v8 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v12 == v15) {
        char v17 = v9 == 1L;
        char v18 = v9 < 1L;
        char v19 = __parity__((unsigned char)v9 - 1);
        char v20 = (unsigned long)v9 < 1L;
        char v21 = (((v9 - 1L) ^ v9) & (v9 ^ 0x1L)) < 0L;
        char v22 = (((v9 - 1L) ^ (v9 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v18 == v21) {
            long v23 = *(long*)(v0 - 8L);
            long v24 = *(long*)(v0 - 8L);
            long v25 = v23 >>> 10;
            char v26 = (v24 >>> 9L) & 0x1L;
            char v27 = v21;
            char v28 = v25 ? 0: 1;
            char v29 = v25 < 0L;
            char v30 = __parity__((unsigned char)v25);
            unsigned long v31 = (unsigned long)(v25 * 8L - 1L);
            param1 = (long)*(char*)(v0 + v31);
            unsigned long v32 = v31;
            long v33 = (long)(v31 - param1);
            char v34 = v33 ? 0: 1;
            char v35 = v33 < 0L;
            char v36 = __parity__((unsigned char)v33);
            char v37 = (((param1 ^ v32) ^ v33) >>> 4L) & 0x1L;
            char v38 = (unsigned long)param1 > v32;
            char v39 = ((param1 ^ v32) & (v33 ^ v32)) < 0L;
            long v40 = v33;
            long v41 = v33 * 2L;
            char v42 = v40 < 0L;
            char v43 = v40 < 0L ^ ((v40 >>> 62L) & 0x1L);
            char v44 = v41 ? 0: 1;
            char v45 = v41 < 0L;
            char v46 = __parity__((unsigned char)v41);
            long v47 = v41 - v9;
            param0 = v47 + 2L;
            char v48 = v8 == param0;
            char v49 = v8 < param0;
            char v50 = __parity__((unsigned char)v8 - (unsigned char)param0);
            char v51 = (unsigned long)v8 < (unsigned long)param0;
            char v52 = (((v8 - param0) ^ v8) & (v8 ^ param0)) < 0L;
            char v53 = (((v8 - param0) ^ (v8 ^ param0)) >>> 4L) & 0x1L;
            if((v48 || v49 != v52)) {
                return caml_c_call();
            }
        }
    }
    long v54 = "Unix.send";
    void* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v55 = &ptr0 ? 0: 1;
    char v56 = (long)&ptr0 < 0L;
    char v57 = __parity__((unsigned char)&ptr0);
    char v58 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v59 = (unsigned long)&v1 >= 18446744073709551608L;
    char v60 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, v8, v9, v10);
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__sendto_602(long param0, long param1, long param2, long param3) {
    void* ptr0;
    long v0;
    char v1;
    long* ptr1 = &ptr0;
    char v2 = &ptr0 == 8L;
    char v3 = (long)&v1 < 0L;
    char v4 = __parity__((unsigned char)&ptr0 - 8);
    char v5 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v6 = (unsigned long)&ptr0 < 8L;
    char v7 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v8 = param0;
    long v9 = param1;
    long v10 = param2;
    long v11 = param3;
    char v12 = v8 == 1L;
    char v13 = v8 < 1L;
    char v14 = __parity__((unsigned char)v8 - 1);
    char v15 = (unsigned long)v8 < 1L;
    char v16 = (((v8 - 1L) ^ v8) & (v8 ^ 0x1L)) < 0L;
    char v17 = (((v8 - 1L) ^ (v8 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v13 == v16) {
        char v18 = v9 == 1L;
        char v19 = v9 < 1L;
        char v20 = __parity__((unsigned char)v9 - 1);
        char v21 = (unsigned long)v9 < 1L;
        char v22 = (((v9 - 1L) ^ v9) & (v9 ^ 0x1L)) < 0L;
        char v23 = (((v9 - 1L) ^ (v9 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v19 == v22) {
            long v24 = *(long*)(v0 - 8L);
            long v25 = *(long*)(v0 - 8L);
            long v26 = v24 >>> 10;
            char v27 = (v25 >>> 9L) & 0x1L;
            char v28 = v22;
            char v29 = v26 ? 0: 1;
            char v30 = v26 < 0L;
            char v31 = __parity__((unsigned char)v26);
            unsigned long v32 = (unsigned long)(v26 * 8L - 1L);
            param1 = (long)*(char*)(v0 + v32);
            unsigned long v33 = v32;
            long v34 = (long)(v32 - param1);
            char v35 = v34 ? 0: 1;
            char v36 = v34 < 0L;
            char v37 = __parity__((unsigned char)v34);
            char v38 = (((param1 ^ v33) ^ v34) >>> 4L) & 0x1L;
            char v39 = (unsigned long)param1 > v33;
            char v40 = ((param1 ^ v33) & (v34 ^ v33)) < 0L;
            long v41 = v34;
            long v42 = v34 * 2L;
            char v43 = v41 < 0L;
            char v44 = v41 < 0L ^ ((v41 >>> 62L) & 0x1L);
            char v45 = v42 ? 0: 1;
            char v46 = v42 < 0L;
            char v47 = __parity__((unsigned char)v42);
            long v48 = v42 - v9;
            param0 = v48 + 2L;
            char v49 = param0 == v8;
            char v50 = param0 > v8;
            char v51 = __parity__((unsigned char)v8 - (unsigned char)param0);
            char v52 = (unsigned long)param0 > (unsigned long)v8;
            char v53 = (((v8 - param0) ^ v8) & (param0 ^ v8)) < 0L;
            char v54 = (((v8 - param0) ^ (param0 ^ v8)) >>> 4L) & 0x1L;
            if((v49 || v50 != v53)) {
                return caml_c_call();
            }
        }
    }
    long v55 = "Unix.sendto";
    void* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v56 = &ptr0 ? 0: 1;
    char v57 = (long)&ptr0 < 0L;
    char v58 = __parity__((unsigned char)&ptr0);
    char v59 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v60 = (unsigned long)&v1 >= 18446744073709551608L;
    char v61 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, param2, param3, v8, v9);
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__setsockopt_672(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__setsockopt_float_693(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__setsockopt_int_679(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__setsockopt_optint_686(long param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__shutdown_connection_1048() {
    caml_c_call();
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__single_write_275(long param0, long param1, long param2, long param3, long param4, long param5) {
    void* ptr0;
    long v0;
    char v1;
    long* ptr1 = &ptr0;
    char v2 = &ptr0 == 8L;
    char v3 = (long)&v1 < 0L;
    char v4 = __parity__((unsigned char)&ptr0 - 8);
    char v5 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v6 = (unsigned long)&ptr0 < 8L;
    char v7 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v8 = param0;
    long v9 = param1;
    char v10 = v8 == 1L;
    char v11 = v8 < 1L;
    char v12 = __parity__((unsigned char)v8 - 1);
    char v13 = (unsigned long)v8 < 1L;
    char v14 = (((v8 - 1L) ^ v8) & (v8 ^ 0x1L)) < 0L;
    char v15 = (((v8 - 1L) ^ (v8 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v11 == v14) {
        char v16 = v9 == 1L;
        char v17 = v9 < 1L;
        char v18 = __parity__((unsigned char)v9 - 1);
        char v19 = (unsigned long)v9 < 1L;
        char v20 = (((v9 - 1L) ^ v9) & (v9 ^ 0x1L)) < 0L;
        char v21 = (((v9 - 1L) ^ (v9 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v17 == v20) {
            long v22 = *(long*)(v0 - 8L);
            long v23 = *(long*)(v0 - 8L);
            long v24 = v22 >>> 10;
            char v25 = (v23 >>> 9L) & 0x1L;
            char v26 = v20;
            char v27 = v24 ? 0: 1;
            char v28 = v24 < 0L;
            char v29 = __parity__((unsigned char)v24);
            unsigned long v30 = (unsigned long)(v24 * 8L - 1L);
            param1 = (long)*(char*)(v0 + v30);
            unsigned long v31 = v30;
            long v32 = (long)(v30 - param1);
            char v33 = v32 ? 0: 1;
            char v34 = v32 < 0L;
            char v35 = __parity__((unsigned char)v32);
            char v36 = (((param1 ^ v31) ^ v32) >>> 4L) & 0x1L;
            char v37 = (unsigned long)param1 > v31;
            char v38 = ((param1 ^ v31) & (v32 ^ v31)) < 0L;
            long v39 = v32;
            long v40 = v32 * 2L;
            char v41 = v39 < 0L;
            char v42 = v39 < 0L ^ ((v39 >>> 62L) & 0x1L);
            char v43 = v40 ? 0: 1;
            char v44 = v40 < 0L;
            char v45 = __parity__((unsigned char)v40);
            long v46 = v40 - v9;
            param0 = v46 + 2L;
            char v47 = v8 == param0;
            char v48 = v8 < param0;
            char v49 = __parity__((unsigned char)v8 - (unsigned char)param0);
            char v50 = (unsigned long)v8 < (unsigned long)param0;
            char v51 = (((v8 - param0) ^ v8) & (v8 ^ param0)) < 0L;
            char v52 = (((v8 - param0) ^ (v8 ^ param0)) >>> 4L) & 0x1L;
            if((v47 || v48 != v51)) {
                return caml_c_call();
            }
        }
    }
    long v53 = "Unix.single_write";
    void* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v54 = &ptr0 ? 0: 1;
    char v55 = (long)&ptr0 < 0L;
    char v56 = __parity__((unsigned char)&ptr0);
    char v57 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v58 = (unsigned long)&v1 >= 18446744073709551608L;
    char v59 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, v8, v9, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlUnix__system_917() {
}

long camlUnix__try_set_close_on_exec_394() {
    long* ptr0;
    char v0;
    void* ptr1;
    long* ptr2 = &ptr0;
    char v1 = &ptr0 == 8L;
    char v2 = (long)&v0 < 0L;
    char v3 = __parity__((unsigned char)&ptr0 - 8);
    char v4 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v0) >>> 4L) & 0x1L);
    char v5 = (unsigned long)&ptr0 < 8L;
    char v6 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v0) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v7 = sub_40D81C();
    long v8 = &caml_exn_Invalid_argument;
    unsigned long v9 = *(unsigned long*)v7;
    char v10 = v9 == &caml_exn_Invalid_argument;
    char v11 = (long)v9 < &caml_exn_Invalid_argument;
    char v12 = __parity__((unsigned char)v9 - 144);
    char v13 = v9 < &caml_exn_Invalid_argument;
    char v14 = (((v9 - &caml_exn_Invalid_argument) ^ v9) & (v9 ^ &caml_exn_Invalid_argument)) < 0L;
    char v15 = (((v9 - &caml_exn_Invalid_argument) ^ (v9 ^ &caml_exn_Invalid_argument)) >>> 4L) & 0x1L;
    if(v10) {
        return 1L;
    }
    long* ptr3 = &ptr1;
    /*BAD_CALL!*/ caml_raise_exn();
}

long camlUnix__waitpid_non_intr_1027() {
    char v0;
    long v1;
    void* ptr0;
    long v2;
    long* ptr1 = &v0;
    char v3 = &v0 == 8L;
    char v4 = (long)&v1 < 0L;
    char v5 = __parity__((unsigned char)&v0 - 8);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&v0 < 8L;
    char v8 = (long)(long*)((long)(long*)((long)&v1 ^ (long)&v0) & (long)(long*)((long)&v0 ^ 0x8L)) < 0L;
    while(1) {
        v1 = v2;
        long v9 = sub_40F12C();
        long v10 = &camlUnix;
        unsigned long v11 = camlUnix;
        unsigned long v12 = *(unsigned long*)v9;
        char v13 = v12 == v11;
        char v14 = (long)v12 < (long)v11;
        char v15 = __parity__((unsigned char)v12 - (unsigned char)v11);
        char v16 = v12 < v11;
        char v17 = (long)(((v12 - v11) ^ v12) & (v12 ^ v11)) < 0L;
        char v18 = (((v12 - v11) ^ (v12 ^ v11)) >>> 4L) & 0x1L;
        if(!v13) {
            break;
        }
        else {
            v12 = *(unsigned long*)(v9 + 8L);
            v13 = (unsigned char)v12 & 0x1 ? 0: 1;
            v14 = ((unsigned char)v12 & 0x1) < 0;
            v15 = __parity__((unsigned char)v12 & 0x1);
            v17 = 0;
            v16 = 0;
            if(v13) {
                break;
            }
            else {
                v13 = v12 == 23L;
                v14 = (long)v12 < 23L;
                v15 = __parity__((unsigned char)v12 - 23);
                v16 = v12 < 23L;
                v17 = (((v12 - 23L) ^ v12) & (v12 ^ 0x17L)) < 0L;
                v18 = (((v12 - 23L) ^ (v12 ^ 0x17L)) >>> 4L) & 0x1L;
                if(!v13) {
                    break;
                }
                else {
                    v2 = v1;
                }
            }
        }
    }
    long* ptr2 = &ptr0;
    /*BAD_CALL!*/ caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
long camlUnix__write_270(long param0, long param1, long param2, long param3, long param4, long param5) {
    void* ptr0;
    long v0;
    char v1;
    long* ptr1 = &ptr0;
    char v2 = &ptr0 == 8L;
    char v3 = (long)&v1 < 0L;
    char v4 = __parity__((unsigned char)&ptr0 - 8);
    char v5 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v6 = (unsigned long)&ptr0 < 8L;
    char v7 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v8 = param0;
    long v9 = param1;
    char v10 = v8 == 1L;
    char v11 = v8 < 1L;
    char v12 = __parity__((unsigned char)v8 - 1);
    char v13 = (unsigned long)v8 < 1L;
    char v14 = (((v8 - 1L) ^ v8) & (v8 ^ 0x1L)) < 0L;
    char v15 = (((v8 - 1L) ^ (v8 ^ 0x1L)) >>> 4L) & 0x1L;
    if(v11 == v14) {
        char v16 = v9 == 1L;
        char v17 = v9 < 1L;
        char v18 = __parity__((unsigned char)v9 - 1);
        char v19 = (unsigned long)v9 < 1L;
        char v20 = (((v9 - 1L) ^ v9) & (v9 ^ 0x1L)) < 0L;
        char v21 = (((v9 - 1L) ^ (v9 ^ 0x1L)) >>> 4L) & 0x1L;
        if(v17 == v20) {
            long v22 = *(long*)(v0 - 8L);
            long v23 = *(long*)(v0 - 8L);
            long v24 = v22 >>> 10;
            char v25 = (v23 >>> 9L) & 0x1L;
            char v26 = v20;
            char v27 = v24 ? 0: 1;
            char v28 = v24 < 0L;
            char v29 = __parity__((unsigned char)v24);
            unsigned long v30 = (unsigned long)(v24 * 8L - 1L);
            param1 = (long)*(char*)(v0 + v30);
            unsigned long v31 = v30;
            long v32 = (long)(v30 - param1);
            char v33 = v32 ? 0: 1;
            char v34 = v32 < 0L;
            char v35 = __parity__((unsigned char)v32);
            char v36 = (((param1 ^ v31) ^ v32) >>> 4L) & 0x1L;
            char v37 = (unsigned long)param1 > v31;
            char v38 = ((param1 ^ v31) & (v32 ^ v31)) < 0L;
            long v39 = v32;
            long v40 = v32 * 2L;
            char v41 = v39 < 0L;
            char v42 = v39 < 0L ^ ((v39 >>> 62L) & 0x1L);
            char v43 = v40 ? 0: 1;
            char v44 = v40 < 0L;
            char v45 = __parity__((unsigned char)v40);
            long v46 = v40 - v9;
            param0 = v46 + 2L;
            char v47 = v8 == param0;
            char v48 = v8 < param0;
            char v49 = __parity__((unsigned char)v8 - (unsigned char)param0);
            char v50 = (unsigned long)v8 < (unsigned long)param0;
            char v51 = (((v8 - param0) ^ v8) & (v8 ^ param0)) < 0L;
            char v52 = (((v8 - param0) ^ (v8 ^ param0)) >>> 4L) & 0x1L;
            if((v47 || v48 != v51)) {
                return caml_c_call();
            }
        }
    }
    long v53 = "Unix.write";
    void* ptr2 = &v1;
    long* ptr3 = &ptr0;
    char v54 = &ptr0 ? 0: 1;
    char v55 = (long)&ptr0 < 0L;
    char v56 = __parity__((unsigned char)&ptr0);
    char v57 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v1 ^ 0x8L) ^ (long)&ptr0) >>> 4L) & 0x1L);
    char v58 = (unsigned long)&v1 >= 18446744073709551608L;
    char v59 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v1) & (long*)~(long)(long*)((long)&v1 ^ 0x8L)) < 0L;
    /*NO_RETURN*/ camlPervasives__invalid_arg_40(param0, param1, v8, v9, param4, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_MD5Final(long* param0, long* param1) {
    long* ptr0;
    long v0;
    long* ptr1;
    long v1 = v0;
    int v2 = (*(int*)(param1 + 2) >>> 3) & 0x3f;
    *(char*)((long*)((unsigned long)v2 + (long)param1) + 3) = 128;
    void* __s = (void*)((char*)((unsigned long)v2 + (long)param1) + 25L);
    if((unsigned int)(63 - v2) >= 7 && v2 != 56) {
        ptr0 = param1 + 3;
        →memset(__s, 0L, (size_t)(55 - v2));
    }
    else {
        ptr0 = param1 + 3;
        →memset(__s, 0L, (size_t)(unsigned int)(63 - v2));
        caml_MD5Transform((long)param1, (long)ptr0);
        long* ptr2 = ptr0;
        int v3 = 56;
        if((unsigned char)ptr0 & 0x1) {
            *(char*)(param1 + 3) = 0;
            ptr2 = (long*)((char*)param1 + 25L);
            v3 = 55;
        }
        if((unsigned char)ptr2 & 0x2) {
            *(short*)ptr2 = 0;
            v3 -= 2;
            ptr2 = (long*)((char*)ptr2 + 2L);
        }
        if((unsigned char)ptr2 & 0x4) {
            *(int*)ptr2 = 0;
            v3 -= 4;
            ptr2 = (long*)((char*)ptr2 + 4L);
        }
        for(long i = (unsigned long)(v3 >>> 3); i != 0L; --i) {
            *ptr2 = 0L;
            ++ptr2;
        }
        if(((unsigned char)v3 & 0x4)) {
            *(int*)ptr2 = 0;
            ptr2 = (long*)((char*)ptr2 + 4L);
            if(((unsigned char)v3 & 0x2)) {
            loc_438C50:
                *(short*)ptr2 = 0;
                ptr2 = (long*)((char*)ptr2 + 2L);
                if(!(v3 & 0x1)) {
                    goto loc_438BB1;
                }
                else {
                    goto loc_438C45;
                }
            }
        loc_438C3F:
            if((v3 & 0x1)) {
            loc_438C45:
                *(char*)ptr2 = 0;
            }
        }
        else if((unsigned char)v3 & 0x2) {
            goto loc_438C50;
        }
        else {
            goto loc_438C3F;
        }
    }
loc_438BB1:
    *(int*)(ptr0 + 7) = *(int*)(param1 + 2);
    *(int*)((char*)ptr0 + 60L) = *(int*)((char*)param1 + 20L);
    caml_MD5Transform((long)param1, (long)ptr0);
    *ptr1 = *param1;
    int result = *(param1 + 1);
    *(ptr1 + 1) = *(param1 + 1);
    *param1 = 0L;
    return result;
}

void caml_MD5Init(int* param0) {
    *param0 = 1732584193;
    *(param0 + 1) = -271733879;
    *(param0 + 2) = -1732584194;
    *(param0 + 3) = 271733878;
    *(param0 + 4) = 0;
    *(param0 + 5) = 0;
}

void caml_MD5Transform() {
    // Decompilation error
}

int caml_MD5Update(long param0, void* param1, size_t param2) {
    void* __dest;
    void* __src1;
    size_t __n;
    int v0;
    int result;
    long v1;
    long v2;
    void* ptr0 = param1;
    long v3 = v1;
    size_t v4 = param2;
    long v5 = v2;
    long v6 = (unsigned long)*(int*)(param0 + 16L);
    *(unsigned int*)(param0 + 16L) = (unsigned int)((unsigned int)param2 * 8 + (unsigned int)v6);
    if((unsigned int)((unsigned int)param2 * 8 + (unsigned int)v6) >= (unsigned int)v6) {
        v0 = *(int*)(param0 + 20L);
    }
    else {
        v0 = *(int*)(param0 + 20L) + 1;
        *(int*)(param0 + 20L) = *(int*)(param0 + 20L) + 1;
    }
    *(int*)(param0 + 20L) = (unsigned int)(v4 >>> 29L) + v0;
    if((((unsigned int)v6 >>> 3) & 0x3f)) {
        __n = v4;
        __src1 = ptr0;
        __dest = (void*)((unsigned long)(((unsigned int)v6 >>> 3) & 0x3f) + param0 + 24L);
        if((size_t)(64 - (((unsigned int)v6 >>> 3) & 0x3f)) <= v4) {
            void* __src = ptr0;
            ptr0 = (void*)((size_t)(64 - (((unsigned int)v6 >>> 3) & 0x3f)) + (long)ptr0);
            →memcpy(__dest, __src, (size_t)(64 - (((unsigned int)v6 >>> 3) & 0x3f)));
            v4 -= (size_t)(64 - (((unsigned int)v6 >>> 3) & 0x3f));
            caml_MD5Transform(param0, (long)(void*)(param0 + 24L));
            goto loc_438AB7;
        }
    }
    else {
    loc_438AB7:
        if(v4 > 63L) {
            long v7 = 0L;
            do {
                long* ptr1 = (long*)((long)ptr0 + v7);
                v7 += 64L;
                *(long*)(param0 + 24L) = *ptr1;
                *(long*)(param0 + 32L) = *(ptr1 + 1);
                *(long*)(param0 + 40L) = *(ptr1 + 2);
                *(long*)(param0 + 48L) = *(ptr1 + 3);
                *(long*)(param0 + 56L) = *(ptr1 + 4);
                *(long*)(param0 + 64L) = *(ptr1 + 5);
                *(long*)(param0 + 72L) = *(ptr1 + 6);
                *(long*)(param0 + 80L) = *(ptr1 + 7);
                caml_MD5Transform(param0, (long)(void*)(param0 + 24L));
            }
            while((unsigned long)(v4 - v7) > 63L);
            long v8 = v4 - 64L;
            v4 = (size_t)((unsigned int)v8 & 0x3f);
            ptr0 = (void*)((long*)((v8 & 0xffffffffffffffc0L) + (long)ptr0) + 8);
        }
        __n = v4;
        __src1 = ptr0;
        __dest = (void*)(param0 + 24L);
    }
    →memcpy(__dest, __src1, __n);
    return result;
}

long* caml_abs_float(long param0) {
    return caml_copy_double(param0);
}

long* caml_acos_float(long param0) {
    →acos(*(double*)param0);
    return caml_copy_double(param0);
}

long* caml_add_float(long param0, double* param1) {
    return caml_copy_double(param0);
}

void caml_alloc() {
    // Decompilation error
}

void caml_alloc1() {
    // Decompilation error
}

void caml_alloc2() {
    // Decompilation error
}

void caml_alloc3() {
    // Decompilation error
}

void caml_allocN() {
    // Decompilation error
}

void caml_alloc_array() {
    // Decompilation error
}

void caml_alloc_channel() {
    // Decompilation error
}

long caml_alloc_custom(long par0, long par1, long par2, long par3) {
    // Decompilation error
}

void caml_alloc_dependent_memory(long param0) {
    caml_dependent_size = (unsigned long)((param0 >>> 3) + caml_dependent_size);
    caml_dependent_allocated = (unsigned long)((param0 >>> 3) + caml_dependent_allocated);
}

void caml_alloc_dummy() {
    // Decompilation error
}

void caml_alloc_dummy_float() {
    // Decompilation error
}

void caml_alloc_final() {
    // Decompilation error
}

long caml_alloc_string(long par0) {
    // Decompilation error
}

void caml_alloc_tuple() {
    // Decompilation error
}

int caml_allocation_color() {
    unsigned int v0 = caml_gc_phase;
    int v1 = 0;
    char v2 = caml_gc_phase ? 0: 1;
    char v3 = v0 >= 0x80000000;
    char v4 = __parity__((unsigned char)v0);
    char v5 = 0;
    char v6 = 0;
    jump v2 ? &sub_42E301: &sub_42E2EA;
}

void caml_apply2(long* param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    long* ptr0;
    long* ptr1;
    char v6;
    unsigned long* ptr2;
    unsigned long* ptr3;
    long* ptr4 = &v6;
    char v7 = &v6 == 8L;
    char v8 = (long)&ptr2 < 0L;
    char v9 = __parity__((unsigned char)&v6 - 8);
    char v10 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v6 ^ 0x8L) ^ (long)&ptr2) >>> 4L) & 0x1L);
    char v11 = (unsigned long)&v6 < 8L;
    char v12 = (long)(long*)((long)(long*)((long)&ptr2 ^ (long)&v6) & (long)(long*)((long)&v6 ^ 0x8L)) < 0L;
    unsigned long v13 = *(unsigned long*)(param0 + 1);
    char v14 = v13 == 5L;
    char v15 = (long)v13 < 5L;
    char v16 = __parity__((unsigned char)v13 - 5);
    char v17 = v13 < 5L;
    char v18 = (((v13 - 5L) ^ v13) & (v13 ^ 0x5L)) < 0L;
    char v19 = (((v13 - 5L) ^ (v13 ^ 0x5L)) >>> 4L) & 0x1L;
    if(v14) {
        long v20 = *(param0 + 2);
        ptr1 = &ptr2;
        ptr0 = &v6;
        v5 = &v6 ? 0: 1;
        v4 = (long)&v6 < 0L;
        v3 = __parity__((unsigned char)&v6);
        v2 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr2 ^ 0x8L) ^ (long)&v6) >>> 4L) & 0x1L);
        v1 = (unsigned long)&ptr2 >= 18446744073709551608L;
        v0 = (long)(long*)((long)(long*)((long)&ptr2 ^ (long)&v6) & (long*)~(long)(long*)((long)&ptr2 ^ 0x8L)) < 0L;
        jump v20;
    }
    ptr2 = ptr3;
    long v21 = *param0;
    long* ptr5 = param0;
    unsigned long* ptr6 = (unsigned long*)v21((long)param0);
    ptr3 = ptr6;
    param0 = *ptr3;
    unsigned long* ptr7 = ptr2;
    ptr1 = &ptr2;
    ptr0 = &v6;
    v5 = &v6 ? 0: 1;
    v4 = (long)&v6 < 0L;
    v3 = __parity__((unsigned char)&v6);
    v2 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr2 ^ 0x8L) ^ (long)&v6) >>> 4L) & 0x1L);
    v1 = (unsigned long)&ptr2 >= 18446744073709551608L;
    v0 = (long)(long*)((long)(long*)((long)&ptr2 ^ (long)&v6) & (long*)~(long)(long*)((long)&ptr2 ^ 0x8L)) < 0L;
    jump param0;
}

void caml_apply3(long param0, long* param1) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    long* ptr0;
    long* ptr1;
    char v6;
    long* ptr2;
    long* ptr3;
    long* ptr4 = &v6;
    char v7 = &v6 == 24L;
    char v8 = (long)&ptr2 < 0L;
    char v9 = __parity__((unsigned char)&v6 - 24);
    char v10 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v6 ^ 0x18L) ^ (long)&ptr2) >>> 4L) & 0x1L);
    char v11 = (unsigned long)&v6 < 24L;
    char v12 = (long)(long*)((long)(long*)((long)&ptr2 ^ (long)&v6) & (long)(long*)((long)&v6 ^ 0x18L)) < 0L;
    unsigned long v13 = *(unsigned long*)(param1 + 1);
    char v14 = v13 == 7L;
    char v15 = (long)v13 < 7L;
    char v16 = __parity__((unsigned char)v13 - 7);
    char v17 = v13 < 7L;
    char v18 = (((v13 - 7L) ^ v13) & (v13 ^ 0x7L)) < 0L;
    char v19 = (((v13 - 7L) ^ (v13 ^ 0x7L)) >>> 4L) & 0x1L;
    if(v14) {
        long v20 = *(param1 + 2);
        ptr1 = &ptr2;
        ptr0 = &v6;
        v5 = &v6 ? 0: 1;
        v4 = (long)&v6 < 0L;
        v3 = __parity__((unsigned char)&v6);
        v2 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr2 ^ 0x18L) ^ (long)&v6) >>> 4L) & 0x1L);
        v1 = (unsigned long)&ptr2 >= 18446744073709551592L;
        v0 = (long)(long*)((long)(long*)((long)&ptr2 ^ (long)&v6) & (long*)~(long)(long*)((long)&ptr2 ^ 0x18L)) < 0L;
        jump v20;
    }
    long v21 = param0;
    ptr2 = ptr3;
    long v22 = *param1;
    long* ptr5 = param1;
    long* ptr6 = (long*)v22();
    long* ptr7 = ptr6;
    long v23 = *ptr7;
    long* ptr8 = ptr2;
    long* ptr9 = (long*)v23();
    ptr3 = ptr9;
    param0 = *ptr3;
    long v24 = v21;
    ptr1 = &ptr2;
    ptr0 = &v6;
    v5 = &v6 ? 0: 1;
    v4 = (long)&v6 < 0L;
    v3 = __parity__((unsigned char)&v6);
    v2 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr2 ^ 0x18L) ^ (long)&v6) >>> 4L) & 0x1L);
    v1 = (unsigned long)&ptr2 >= 18446744073709551592L;
    v0 = (long)(long*)((long)(long*)((long)&ptr2 ^ (long)&v6) & (long*)~(long)(long*)((long)&ptr2 ^ 0x18L)) < 0L;
    jump param0;
}

void caml_apply4(long param0, long param1, long* param2) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    long* ptr0;
    long* ptr1;
    char v6;
    long* ptr2;
    long* ptr3;
    long* ptr4 = &v6;
    char v7 = &v6 == 24L;
    char v8 = (long)&ptr2 < 0L;
    char v9 = __parity__((unsigned char)&v6 - 24);
    char v10 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v6 ^ 0x18L) ^ (long)&ptr2) >>> 4L) & 0x1L);
    char v11 = (unsigned long)&v6 < 24L;
    char v12 = (long)(long*)((long)(long*)((long)&ptr2 ^ (long)&v6) & (long)(long*)((long)&v6 ^ 0x18L)) < 0L;
    unsigned long v13 = *(unsigned long*)(param2 + 1);
    char v14 = v13 == 9L;
    char v15 = (long)v13 < 9L;
    char v16 = __parity__((unsigned char)v13 - 9);
    char v17 = v13 < 9L;
    char v18 = (((v13 - 9L) ^ v13) & (v13 ^ 0x9L)) < 0L;
    char v19 = (((v13 - 9L) ^ (v13 ^ 0x9L)) >>> 4L) & 0x1L;
    if(v14) {
        long v20 = *(param2 + 2);
        ptr1 = &ptr2;
        ptr0 = &v6;
        v5 = &v6 ? 0: 1;
        v4 = (long)&v6 < 0L;
        v3 = __parity__((unsigned char)&v6);
        v2 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr2 ^ 0x18L) ^ (long)&v6) >>> 4L) & 0x1L);
        v1 = (unsigned long)&ptr2 >= 18446744073709551592L;
        v0 = (long)(long*)((long)(long*)((long)&ptr2 ^ (long)&v6) & (long*)~(long)(long*)((long)&ptr2 ^ 0x18L)) < 0L;
        jump v20;
    }
    long v21 = param1;
    long v22 = param0;
    ptr2 = ptr3;
    long v23 = *param2;
    long* ptr5 = param2;
    long* ptr6 = (long*)v23();
    long* ptr7 = ptr6;
    long v24 = *ptr7;
    long* ptr8 = ptr2;
    long* ptr9 = (long*)v24();
    long* ptr10 = ptr9;
    long v25 = *ptr10;
    long v26 = v22;
    long* ptr11 = (long*)v25();
    ptr3 = ptr11;
    param0 = *ptr3;
    long v27 = v21;
    ptr1 = &ptr2;
    ptr0 = &v6;
    v5 = &v6 ? 0: 1;
    v4 = (long)&v6 < 0L;
    v3 = __parity__((unsigned char)&v6);
    v2 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr2 ^ 0x18L) ^ (long)&v6) >>> 4L) & 0x1L);
    v1 = (unsigned long)&ptr2 >= 18446744073709551592L;
    v0 = (long)(long*)((long)(long*)((long)&ptr2 ^ (long)&v6) & (long*)~(long)(long*)((long)&ptr2 ^ 0x18L)) < 0L;
    jump param0;
}

void caml_apply6(long param0, long param1, long param2, long param3, long* param4) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    long* ptr0;
    long* ptr1;
    char v6;
    long* ptr2;
    long* ptr3;
    long* ptr4 = &v6;
    char v7 = &v6 == 40L;
    char v8 = (long)&ptr2 < 0L;
    char v9 = __parity__((unsigned char)&v6 - 40);
    char v10 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v6 ^ 0x28L) ^ (long)&ptr2) >>> 4L) & 0x1L);
    char v11 = (unsigned long)&v6 < 40L;
    char v12 = (long)(long*)((long)(long*)((long)&ptr2 ^ (long)&v6) & (long)(long*)((long)&v6 ^ 0x28L)) < 0L;
    unsigned long v13 = *(unsigned long*)(param4 + 1);
    char v14 = v13 == 13L;
    char v15 = (long)v13 < 13L;
    char v16 = __parity__((unsigned char)v13 - 13);
    char v17 = v13 < 13L;
    char v18 = (((v13 - 13L) ^ v13) & (v13 ^ 0xdL)) < 0L;
    char v19 = (((v13 - 13L) ^ (v13 ^ 0xdL)) >>> 4L) & 0x1L;
    if(v14) {
        long v20 = *(param4 + 2);
        ptr1 = &ptr2;
        ptr0 = &v6;
        v5 = &v6 ? 0: 1;
        v4 = (long)&v6 < 0L;
        v3 = __parity__((unsigned char)&v6);
        v2 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr2 ^ 0x28L) ^ (long)&v6) >>> 4L) & 0x1L);
        v1 = (unsigned long)&ptr2 >= 18446744073709551576L;
        v0 = (long)(long*)((long)(long*)((long)&ptr2 ^ (long)&v6) & (long*)~(long)(long*)((long)&ptr2 ^ 0x28L)) < 0L;
        jump v20;
    }
    long v21 = param3;
    long v22 = param2;
    long v23 = param1;
    long v24 = param0;
    ptr2 = ptr3;
    long v25 = *param4;
    long* ptr5 = param4;
    long* ptr6 = (long*)v25();
    long* ptr7 = ptr6;
    long v26 = *ptr7;
    long* ptr8 = ptr2;
    long* ptr9 = (long*)v26();
    long* ptr10 = ptr9;
    long v27 = *ptr10;
    long v28 = v24;
    long* ptr11 = (long*)v27();
    long* ptr12 = ptr11;
    long v29 = *ptr12;
    long v30 = v23;
    long* ptr13 = (long*)v29();
    long* ptr14 = ptr13;
    long v31 = *ptr14;
    long v32 = v22;
    long* ptr15 = (long*)v31();
    ptr3 = ptr15;
    param0 = *ptr3;
    long v33 = v21;
    ptr1 = &ptr2;
    ptr0 = &v6;
    v5 = &v6 ? 0: 1;
    v4 = (long)&v6 < 0L;
    v3 = __parity__((unsigned char)&v6);
    v2 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr2 ^ 0x28L) ^ (long)&v6) >>> 4L) & 0x1L);
    v1 = (unsigned long)&ptr2 >= 18446744073709551576L;
    v0 = (long)(long*)((long)(long*)((long)&ptr2 ^ (long)&v6) & (long*)~(long)(long*)((long)&ptr2 ^ 0x28L)) < 0L;
    jump param0;
}

// Stale decompilation - Refresh this view to re-decompile this code
void caml_array_bound_error() {
}

void caml_array_get() {
    // Decompilation error
}

void caml_array_get_addr() {
    // Decompilation error
}

void caml_array_get_float() {
    // Decompilation error
}

void caml_array_set() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void caml_array_set_addr() {
}

void caml_array_set_float() {
    // Decompilation error
}

void caml_array_unsafe_get() {
    // Decompilation error
}

void caml_array_unsafe_get_float() {
    // Decompilation error
}

char caml_array_unsafe_set(long param0, long param1, unsigned long param2) {
    if(*(char*)(param0 - 8L) != 254) {
        return caml_array_unsafe_set_addr(param0, param1, param2);
    }
    *(long*)((param1 >> 1) * 8L + param0) = *(long*)param2;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
char caml_array_unsafe_set_addr(long param0, long param1, unsigned long param2) {
    long v0;
    long v1;
    long v2 = v0;
    long* ptr0 = (long*)((param1 >> 1) * 8L + param0);
    long v3 = v1;
    unsigned long v4 = param2;
    long v5 = *ptr0;
    *ptr0 = param2;
    long v6 = /*BAD_CALL!*/ caml_page_table_lookup((long)ptr0);
    if(((unsigned char)v6 & 0x1)) {
        if(!caml_gc_phase) {
            caml_darken(v5);
            if(!((unsigned char)v4 & 0x1)) {
            loc_431DEF:
                unsigned long v7 = caml_young_end;
                if(v7 > v4) {
                    param2 = caml_young_start;
                    if(param2 < v4 && (((unsigned char)v5 & 0x1) || v7 <= (unsigned long)v5 || param2 >= (unsigned long)v5)) {
                        unsigned long* ptr1 = gvar_65CCF8;
                        if(gvar_65CD00 <= (unsigned long)ptr1) {
                            caml_realloc_ref_table((unsigned long*)&caml_ref_table);
                            ptr1 = gvar_65CCF8;
                        }
                        *ptr1 = ptr0;
                        gvar_65CCF8 = (long*)(ptr1 + 1);
                    }
                }
            }
        }
        else if(!((unsigned char)v4 & 0x1)) {
            goto loc_431DEF;
        }
    }
    return 1;
}

long caml_array_unsafe_set_float(long param0, long param1, long* param2) {
    *(long*)((param1 >> 1) * 8L + param0) = *param2;
    return 1L;
}

long* caml_asin_float(long param0) {
    →asin(*(double*)param0);
    return caml_copy_double(param0);
}

long* caml_atan2_float(long param0, double* param1) {
    →atan2(*(double*)param0, *param1);
    return caml_copy_double(param0);
}

long* caml_atan_float(long param0) {
    →atan(*(double*)param0);
    return caml_copy_double(param0);
}

long caml_backtrace_status() {
    return caml_backtrace_active < 1 ? 1L: 3L;
}

long caml_bitvect_test(long param0, long param1) {
    return (unsigned long)((unsigned char)(1 << ((unsigned long)((unsigned int)(param1 >>> 1L) & 0x7) & 0x1fL)) & *(char*)((long)((unsigned int)(param1 >>> 1L) >> 3) + param0)) * 2L + 1L;
}

void caml_callback2() {
    // Decompilation error
}

void caml_callback2_exn() {
    // Decompilation error
}

void caml_callback3() {
    // Decompilation error
}

void caml_callback3_exn() {
    // Decompilation error
}

void caml_callbackN() {
    // Decompilation error
}

void caml_callbackN_exn() {
    // Decompilation error
}

long* caml_ceil_float(long param0) {
    →ceil(*(double*)param0);
    return caml_copy_double(param0);
}

long caml_channel_binary_mode() {
    return 1L;
}

void caml_channel_size() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_close_channel(void* __ptr) {
    →close((long)*(int*)__ptr);
    long result = (unsigned long)*(int*)((long)__ptr + 72L);
    if(((*(int*)((long)__ptr + 72L) ? 0: 1) || *(int*)((long)__ptr + 72L) < 0)) {
        unsigned long v0 = caml_channel_mutex_free;
        if(v0) {
            v0((long)__ptr);
        }
        long v1 = *(long*)((long)__ptr + 56L);
        if(v1) {
            *(long*)(v1 + 48L) = *(long*)((long)__ptr + 48L);
            long v2 = *(long*)((long)__ptr + 48L);
            if(v2) {
                *(long*)(v2 + 56L) = v1;
            }
        }
        else {
            unsigned long v3 = *(unsigned long*)(caml_all_opened_channels + 48L);
            caml_all_opened_channels = *(unsigned long*)(caml_all_opened_channels + 48L);
            if(v3) {
                *(long*)(v3 + 56L) = 0L;
            }
        }
        →→free(__ptr);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_code_checksum() {
    long* ptr0;
    char v0;
    void* ptr1;
    long v1;
    long v2 = v1;
    long* ptr2 = &v2;
    char v3 = &ptr0 == 104L;
    char v4 = (long)&v0 < 0L;
    char v5 = __parity__((unsigned char)&ptr0 - 104);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v2 ^ 0x60L) ^ (long)&v0) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&v2 < 96L;
    char v8 = (long)(long*)((long)(long*)((long)&v2 ^ (long)&v0) & (long)(long*)((long)&v2 ^ 0x60L)) < 0L;
    unsigned int v9 = checksum_computed.4045;
    int v10 = 0;
    long v11 = *(long*)(__FS_BASE + (long)(long*)0x28);
    long v12 = *(long*)(__FS_BASE + (long)(long*)0x28);
    long v13 = 0L;
    char v14 = v9 ? 0: 1;
    char v15 = v9 >= 0x80000000;
    char v16 = __parity__((unsigned char)v9);
    char v17 = 0;
    char v18 = 0;
    if(v14) {
        int* ptr3 = &v0;
        caml_MD5Init(&v0);
        void* ptr4 = caml_code_area_start;
        long* ptr5 = caml_code_area_end;
        int* ptr6 = &v0;
        ptr2 = ptr5;
        size_t v19 = (size_t)((long)ptr5 - (long)ptr4);
        char v20 = v19 ? 0: 1;
        char v21 = v19 >= 0x8000000000000000L;
        char v22 = __parity__((unsigned char)v19);
        v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr4 ^ (long)ptr2) ^ v19) >>> 4L) & 0x1L);
        char v23 = (unsigned long)ptr4 > (unsigned long)ptr2;
        char v24 = (long)(long*)((long)(long*)(v19 ^ (long)ptr2) & (long)(long*)((long)ptr4 ^ (long)ptr2)) < 0L;
        int v25 = caml_MD5Update((long)&v0, ptr4, v19);
        int* ptr7 = &v0;
        long v26 = &checksum.4044;
        int v27 = caml_MD5Final((long*)&checksum.4044, (long*)&v0);
        checksum_computed.4045 = 1;
    }
    long v28 = v12;
    long v29 = *(long*)(__FS_BASE + (long)(long*)0x28) ^ v28;
    char v30 = v29 ? 0: 1;
    char v31 = v29 < 0L;
    char v32 = __parity__((unsigned char)v29);
    char v33 = 0;
    char v34 = 0;
    if(!v30) {
        long* ptr8 = &ptr1;
        /*NO_RETURN*/ →__stack_chk_fail();
    }
    return &checksum.4044;
}

int caml_convert_flag_list(long* param0, long param1) {
    long v0;
    int i;
    for(i = 0; param0 != 1L; i |= *(int*)(((unsigned long)(unsigned int)(v0 >>> 1L) | ((unsigned long)((v0 >>> 32L) & 0x1L ? -1: 0) << 32)) * 4L + param1)) {
        v0 = *param0;
        param0 = *(unsigned long*)(param0 + 1);
    }
    return i;
}

unsigned int caml_convert_signal_number(unsigned int param0) {
    return param0 > 0xffffffea ? *(unsigned int*)((long)~param0 * 4L + (long)&posix_signals): param0;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* caml_copy_double(long param0) {
    long v0;
    unsigned long v1 = caml_young_ptr;
    long* ptr0 = (long*)(v1 - 16L);
    char v2 = caml_young_limit > (unsigned long)ptr0;
    caml_young_ptr = ptr0;
    if(v2) {
        long v3 = v0;
        caml_young_ptr = v1;
        caml_minor_collection(param0);
        v0 = v3;
        ptr0 = (long*)(caml_young_ptr - 16L);
        caml_young_ptr = (long*)(caml_young_ptr - 16L);
    }
    *ptr0 = 2045L;
    *(ptr0 + 1) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_copy_int32(int param0) {
    long result = caml_alloc_custom(&caml_int32_ops, 4L, 0L, 1L);
    *(int*)(result + 8L) = param0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_copy_int64(long param0) {
    long v0;
    long result = caml_alloc_custom(&caml_int64_ops, 8L, 0L, 1L);
    *(long*)(result + 8L) = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_copy_nativeint(long param0) {
    long v0;
    long result = caml_alloc_custom(&caml_nativeint_ops, 8L, 0L, 1L);
    *(long*)(result + 8L) = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void* caml_copy_string(char* __s) {
    int v0;
    long v1;
    long v2 = v1;
    →strlen(__s);
    void* __dest = (void*)caml_alloc_string((long)(size_t)v0);
    →memmove(__dest, __s, (size_t)v0);
    return __dest;
}

void caml_copy_string_array() {
    // Decompilation error
}

long* caml_cos_float(long param0) {
    →cos(*(double*)param0);
    return caml_copy_double(param0);
}

long* caml_cosh_float(long param0) {
    →cosh(*(double*)param0);
    return caml_copy_double(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long* caml_curry9(long param0, long param1, long param2, long param3, long param4, long param5) {
    long v0;
    long v1;
    long* i;
    for(i = i - 5; caml_young_limit > (unsigned long)i; i -= 5) {
        caml_call_gc(param0, v0, param2, param3, param4, param5);
    }
    *i = 4343L;
    *(i + 1) = &caml_curry9_1;
    *(i + 2) = 3L;
    *(i + 3) = v0;
    *(i + 4) = v1;
    return i + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
void caml_decompose_path() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void* caml_delete_global_root(void* __ptr, unsigned long param1) {
    void* result;
    long v0;
    void* ptr0 = __ptr;
    void* ptr1 = __ptr;
    unsigned int v1 = *(unsigned int*)((long)__ptr + 144L);
    if((int)v1 >= 0) {
        unsigned int v2 = v1;
        long v3 = (long)v1;
        while(1) {
            result = *(void**)((long*)(v3 * 8L + (long)ptr0) + 1);
            if(!result || *(unsigned long*)result >= param1) {
                --v2;
                *(void**)(v3 * 8L + (long)&v0) = ptr0;
                if(v2 == -1) {
                    break;
                }
                else {
                    v3 = (long)v2;
                }
            }
            else {
                ptr0 = result;
            }
        }
    }
    __ptr = *(void**)((long)ptr0 + 8L);
    if(__ptr && *(long*)__ptr == param1) {
        if((int)v1 >= 0) {
            long v4 = 0L;
            unsigned int v5 = 0;
        loc_42B544:
            do {
                long v6 = *(long*)(v4 + (long)&v0);
                long v7 = (long)v5;
                if(*(long*)(v7 * 8L + v6 + 8L) == __ptr) {
                    long v8 = *((long*)(v4 + (long)__ptr) + 1);
                    ++v5;
                    v4 += 8L;
                    *(long*)(v7 * 8L + v6 + 8L) = v8;
                    if((int)v5 <= (int)v1) {
                        goto loc_42B544;
                    }
                }
                else {
                    ++v5;
                    v4 += 8L;
                }
                break;
            }
            while((int)v5 > (int)v1);
        }
        →free(__ptr);
        result = (void*)*(int*)((long)ptr1 + 144L);
        if((!(*(int*)((long)ptr1 + 144L) ? 0: 1) && *(int*)((long)ptr1 + 144L) >= 0 && !*((long*)((long)(long*)((long)((unsigned long)*(int*)((long)ptr1 + 144L) | ((unsigned long)((long*)((long)(long*)((long)result >>> 31L) & 0x1L) ? -1: 0) << 32)) * 8L) + (long)ptr1) + 1))) {
            do {
                result = (void*)((unsigned int)result - 1);
                if(!(unsigned int)result) {
                    *(int*)((long)ptr1 + 144L) = 0;
                    return result;
                }
            }
            while(*((long*)((long)(long*)((long)(void*)(unsigned int)result * 8L) + (long)ptr1) + 1));
            *(int*)((long)ptr1 + 144L) = (unsigned int)result;
            return result;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_deserialize_block_1(void* __dest, size_t __n) {
    long result;
    →memmove(__dest, intern_src, __n);
    intern_src += __n;
    return result;
}

long caml_deserialize_block_2(long param0, unsigned long param1) {
    long result;
    unsigned long v0 = intern_src;
    if((long)param1 > 0L) {
        unsigned long counter = param1;
        result = 0L;
        do {
            char v1 = *(char*)(result + v0 + 1L);
            *(char*)(result + param0 + 1L) = *(char*)(result + v0);
            *(char*)(result + param0) = v1;
            result += 2L;
            --counter;
        }
        while(counter);
        v0 = (unsigned long)(param1 * 2L + v0);
    }
    intern_src = v0;
    return result;
}

long caml_deserialize_block_4(long param0, unsigned long param1) {
    long result;
    unsigned long v0 = intern_src;
    if((long)param1 > 0L) {
        unsigned long counter = param1;
        result = 0L;
        do {
            char v1 = *(char*)(result + v0);
            char v2 = *(char*)(result + v0 + 1L);
            *(char*)(result + param0) = *(char*)(result + v0 + 3L);
            char v3 = *(char*)(result + v0 + 2L);
            *(char*)(result + param0 + 3L) = v1;
            *(char*)(result + param0 + 2L) = v2;
            *(char*)(result + param0 + 1L) = v3;
            result += 4L;
            --counter;
        }
        while(counter);
        v0 = (unsigned long)(param1 * 4L + v0);
    }
    intern_src = v0;
    return result;
}

char* caml_deserialize_block_8(char* param0, unsigned long param1) {
    char* result;
    char* ptr0 = intern_src;
    if((long)param1 > 0L) {
        result = ptr0;
        unsigned long counter = param1;
        do {
            char v0 = *result;
            char v1 = *(result + 1L);
            *param0 = *(result + 7L);
            char v2 = *(result + 6L);
            *(param0 + 7L) = v0;
            *(param0 + 6L) = v1;
            *(param0 + 1L) = v2;
            char v3 = *(result + 2L);
            char v4 = *(result + 3L);
            *(param0 + 2L) = *(result + 5L);
            char v5 = *(result + 4L);
            result += 8L;
            *(param0 + 5L) = v3;
            *(param0 + 4L) = v4;
            *(param0 + 3L) = v5;
            param0 += 8L;
            --counter;
        }
        while(counter);
        ptr0 = (char*)(param1 * 8L + (long)ptr0);
    }
    intern_src = ptr0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_deserialize_block_float_8(void* __dest, long param1) {
    long result;
    →memmove(__dest, intern_src, (size_t)(param1 * 8L));
    intern_src = (unsigned long)((size_t)(param1 * 8L) + intern_src);
    return result;
}

long caml_deserialize_error(long param0) {
    long v0;
    long v1 = v0;
    long v2 = param0;
    intern_cleanup();
    long v3 = v2;
    /*NO_RETURN*/ caml_failwith(v3);
}

long caml_deserialize_float_4() {
    int v0;
    return caml_deserialize_block_4(&v0, 1L);
}

long caml_deserialize_float_8() {
    long v0;
    return caml_deserialize_block_float_8(&v0, 1L);
}

long caml_deserialize_sint_1() {
    char* ptr0 = intern_src;
    long result = (long)*ptr0;
    intern_src = (long*)(ptr0 + 1L);
    return result;
}

long caml_deserialize_sint_2() {
    char* ptr0 = intern_src;
    intern_src = (long*)(ptr0 + 2L);
    return (long)*ptr0 * 0x100L + (unsigned long)*(ptr0 + 1L);
}

long caml_deserialize_sint_4() {
    char* ptr0 = intern_src;
    intern_src = (long*)(ptr0 + 4L);
    return (long)*ptr0 * 0x1000000L + (unsigned long)*(ptr0 + 3L) + ((long)((unsigned int)*(ptr0 + 1L) * 0x10000) + (long)((unsigned int)*(ptr0 + 2L) * 0x100));
}

long caml_deserialize_sint_8() {
    long result;
    caml_deserialize_block_8(&result, 1L);
    return result;
}

long caml_deserialize_uint_1() {
    char* ptr0 = intern_src;
    long result = (unsigned long)*ptr0;
    intern_src = (long*)(ptr0 + 1L);
    return result;
}

long caml_deserialize_uint_2() {
    char* ptr0 = intern_src;
    intern_src = (long*)(ptr0 + 2L);
    return (unsigned long)((unsigned int)*ptr0 * 0x100 + (unsigned int)*(ptr0 + 1L));
}

long caml_deserialize_uint_4() {
    char* ptr0 = intern_src;
    intern_src = (long*)(ptr0 + 4L);
    return (unsigned long)*ptr0 * 0x1000000L + (unsigned long)*(ptr0 + 3L) + ((long)((unsigned int)*(ptr0 + 1L) * 0x10000) + (long)((unsigned int)*(ptr0 + 2L) * 0x100));
}

long caml_deserialize_uint_8() {
    long result;
    caml_deserialize_block_8(&result, 1L);
    return result;
}

long* caml_div_float(long param0, double* param1) {
    return caml_copy_double(param0);
}

long caml_dlopen(char* __file, long param1, unsigned int param2) {
    long result;
    →dlopen(__file, param2 < 1 ? 0x1002L: 0x1102L);
    return result;
}

void caml_do_read() {
    // Decompilation error
}

void caml_enter_blocking_section() {
    // Decompilation error
}

void caml_enter_blocking_section_default() {
    caml_async_signal_mode = 1L;
}

long caml_eq_float(double* param0, double* param1, long param2) {
    char v0;
    char v1;
    long v2;
    double v3 = *param0;
    if(*param0 == *param1) {
        v1 = 1;
        v0 = 0;
    }
    else if(v3 > *param1) {
        v1 = 0;
        v0 = 0;
    }
    else if(v3 < *param1) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = 1;
        v0 = 1;
    }
    return (unsigned long)(unsigned char)((unsigned int)((unsigned long)(v0 ? 0: 1) | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8)) & (unsigned int)((unsigned long)(v1 ? 1: 0) | ((unsigned long)((v2 >>> 8L) & 0xffffffffffffffL) << 8))) * 2L + 1L;
}

long caml_executable_name(char* __buf, unsigned int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int v4;
    →readlink("/proc/self/exe", __buf, (size_t)param1);
    if((((v1 - param1) ^ v1) & (v1 ^ param1)) < 0 != v2 < (int)param1 && v3 != -1) {
        __buf[(long)v4] = 0;
        →__xstat64(1L, __buf, &v0);
    }
    return 0xffffffffL;
}

void caml_execute_signal() {
    // Decompilation error
}

long* caml_exp_float(long param0) {
    →exp(*(double*)param0);
    return caml_copy_double(param0);
}

void caml_ext_table_add() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_ext_table_free(unsigned int* param0, int param1) {
    long v0;
    long result;
    long v1 = v0;
    if(param1 && !(*param0 ? 0: 1) && *param0 >= 0) {
        long v2 = 0L;
        unsigned int v3 = 0;
        do {
            ++v3;
            void* __ptr = *(void**)(*(long*)(param0 + 2) + v2);
            v2 += 8L;
            →free(__ptr);
        }
        while(*param0 > (int)v3);
    }
    →→free(*(void**)(param0 + 2));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_ext_table_init(int* param0, int param1) {
    *(param0 + 1) = param1;
    *param0 = 0;
    long result = caml_stat_alloc((size_t)((long)param1 * 8L));
    *(long*)(param0 + 2) = result;
    return result;
}

long caml_failwith(long param0) {
    long v0 = param0;
    /*NO_RETURN*/ caml_raise_with_string(&caml_exn_Failure, v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_fatal_error_arg(long param0, long param1) {
    char v0;
    char v1;
    void* ptr0;
    long* ptr1 = &v0;
    char v2 = &v0 == 8L;
    char v3 = (long)&v1 < 0L;
    char v4 = __parity__((unsigned char)&v0 - 8);
    char v5 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x8L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v6 = (unsigned long)&v0 < 8L;
    char v7 = (long)(long*)((long)(long*)((long)&v0 ^ (long)&v1) & (long)(long*)((long)&v0 ^ 0x8L)) < 0L;
    long v8 = param0;
    unsigned long v9 = stderr;
    long v10 = param1;
    long v11 = 0L;
    char v12 = 1;
    char v13 = 0;
    char v14 = 1;
    char v15 = 0;
    char v16 = 0;
    long v17 = 1L;
    →__fprintf_chk();
    long v18 = 2L;
    long* ptr2 = &ptr0;
    /*NO_RETURN*/ →exit(2L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_fatal_error_arg2(long param0, long param1, long param2, long param3) {
    char v0;
    char v1;
    void* ptr0;
    long v2;
    long v3 = v2;
    long v4 = param2;
    long* ptr1 = &v0;
    char v5 = &v0 == 24L;
    char v6 = (long)&v1 < 0L;
    char v7 = __parity__((unsigned char)&v0 - 24);
    char v8 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x18L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v9 = (unsigned long)&v0 < 24L;
    char v10 = (long)(long*)((long)(long*)((long)&v0 ^ (long)&v1) & (long)(long*)((long)&v0 ^ 0x18L)) < 0L;
    long v11 = param0;
    unsigned long v12 = stderr;
    long v13 = param3;
    long v14 = 0L;
    char v15 = 1;
    char v16 = 0;
    char v17 = 1;
    char v18 = 0;
    char v19 = 0;
    long v20 = param1;
    long v21 = 1L;
    →__fprintf_chk();
    unsigned long v22 = stderr;
    long v23 = v13;
    long v24 = v4;
    long v25 = 1L;
    long v26 = 0L;
    char v27 = 1;
    char v28 = 0;
    char v29 = 1;
    char v30 = 0;
    char v31 = 0;
    →__fprintf_chk();
    long v32 = 2L;
    long* ptr2 = &ptr0;
    /*NO_RETURN*/ →exit(2L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_fill_string(long param0, long param1, long param2, long param3) {
    →memset((void*)((param1 >> 1) + param0), (long)(unsigned int)(param3 >>> 1L), (size_t)(param2 >> 1));
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* caml_final_custom_operations(unsigned long param0) {
    long v0;
    long v1 = v0;
    unsigned long* ptr0 = custom_ops_final_table;
    if(ptr0) {
    loc_43B429:
        do {
            long* result = *ptr0;
            if(*(result + 1) == param0) {
                return result;
            }
            ptr0 = *(ptr0 + 1);
            if(ptr0) {
                goto loc_43B429;
            }
        }
        while(ptr0);
    }
    long* result1 = (long*)caml_stat_alloc(48L);
    *(unsigned long*)(result1 + 1) = param0;
    *result1 = &gvar_43E25E;
    *(result1 + 2) = 0L;
    *(result1 + 3) = 0L;
    *(result1 + 4) = 0L;
    *(result1 + 5) = 0L;
    unsigned long* ptr1 = (unsigned long*)caml_stat_alloc(16L);
    unsigned long v2 = custom_ops_final_table;
    *ptr1 = result1;
    *(ptr1 + 1) = v2;
    custom_ops_final_table = ptr1;
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
void caml_final_register() {
}

long caml_final_release() {
    running_finalisation_function = 0;
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_finalize_channel(long param0) {
    void* __ptr = *(void**)(param0 + 8L);
    long result = (unsigned long)(*(int*)((long)__ptr + 72L) - 1);
    char v0 = *(int*)((long)__ptr + 72L) == 1;
    *(int*)((long)__ptr + 72L) = (unsigned int)result;
    if((v0 || (unsigned int)result < 0)) {
        unsigned long v1 = caml_channel_mutex_free;
        if(v1) {
            v1((long)__ptr);
        }
        long v2 = *(long*)((long)__ptr + 56L);
        if(v2) {
            *(long*)(v2 + 48L) = *(long*)((long)__ptr + 48L);
            long v3 = *(long*)((long)__ptr + 48L);
            if(v3) {
                *(long*)(v3 + 56L) = v2;
            }
        }
        else {
            unsigned long v4 = *(unsigned long*)(caml_all_opened_channels + 48L);
            caml_all_opened_channels = *(unsigned long*)(caml_all_opened_channels + 48L);
            if(v4) {
                *(long*)(v4 + 56L) = 0L;
            }
        }
        →→free(__ptr);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long* caml_find_custom_operations(char* __s2) {
    int v0;
    long v1;
    long v2 = v1;
    unsigned long* ptr0 = custom_ops_table;
    if(ptr0) {
    loc_43B531:
        do {
            unsigned long* result = *ptr0;
            →strcmp(*result, __s2);
            if(!v0) {
                return result;
            }
            ptr0 = *(ptr0 + 1);
            if(ptr0) {
                goto loc_43B531;
            }
        }
        while(ptr0);
    }
    return NULL;
}

void caml_fl_add_blocks() {
    // Decompilation error
}

void caml_float_compare(double* param0, double* param1) {
    char v0;
    char v1;
    char v2;
    long v3 = *param0;
    double v4 = *param0;
    long v5 = 0L;
    long v6 = *param1;
    double v7 = *param1;
    long v8 = 0L;
    if(v4 == *param1) {
        v2 = 1;
        v1 = 0;
        v0 = 0;
    }
    else if(v4 > v7) {
        v2 = 0;
        v1 = 0;
        v0 = 0;
    }
    else {
        if(v4 < v7) {
            v2 = 0;
            v1 = 0;
        }
        else {
            v2 = 1;
            v1 = 1;
        }
        v0 = 1;
    }
    char v9 = 0;
    char v10 = 0;
    char v11 = 0;
    jump v1 ? &sub_430C60: &sub_430C4E;
}

long* caml_float_of_int(long param0) {
    return caml_copy_double(param0 >> 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long* caml_float_of_substring(long param0, long param1, long* param2) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    long v5;
    char v6;
    char* ptr0;
    char* ptr1;
    long* ptr2;
    long* ptr3;
    char* ptr4;
    long v7;
    long v8;
    char v9;
    long* ptr5;
    unsigned char* ptr6;
    unsigned long v10;
    void* ptr7;
    char* ptr8;
    long* ptr9;
    char* ptr10;
    char* ptr11 = ptr8;
    char* ptr12 = ptr10;
    char* ptr13 = ptr4;
    long* ptr14 = ptr5;
    long v11 = param1;
    long v12 = param1;
    unsigned long v13 = (unsigned long)(v11 >> 1);
    char v14 = v12 & 0x1L;
    char v15 = 0;
    char v16 = v13 ? 0: 1;
    char v17 = v13 >= 0x8000000000000000L;
    char v18 = __parity__((unsigned char)v13);
    unsigned char* ptr15 = ptr6;
    long v19 = param0;
    long* ptr16 = &ptr15;
    char v20 = &ptr3 == 168L;
    char v21 = (long)&v8 < 0L;
    char v22 = __parity__((unsigned char)&ptr3 - 168);
    char v23 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr15 ^ 0x78L) ^ (long)&v8) >>> 4L) & 0x1L);
    char v24 = (unsigned long)&ptr15 < 120L;
    char v25 = (long)(long*)((long)(long*)((long)&ptr15 ^ (long)&v8) & (long)(long*)((long)&ptr15 ^ 0x78L)) < 0L;
    long v26 = *(long*)(__FS_BASE + (long)(long*)0x28);
    long v27 = *(long*)(__FS_BASE + (long)(long*)0x28);
    long v28 = 0L;
    char v29 = 1;
    char v30 = 0;
    char v31 = 1;
    char v32 = 0;
    char v33 = 0;
    unsigned long v34 = caml_string_length(param0);
    char v35 = v34 == v13;
    char v36 = (long)v34 < (long)v13;
    char v37 = __parity__((unsigned char)v34 - (unsigned char)v13);
    char v38 = v34 < v13;
    char v39 = (long)(((v34 - v13) ^ v34) & (v34 ^ v13)) < 0L;
    char v40 = (((v34 - v13) ^ (v34 ^ v13)) >>> 4L) & 0x1L;
    if(!v38 && !v35) {
        char v41 = v13 ? 0: 1;
        char v42 = v13 >= 0x8000000000000000L;
        char v43 = __parity__((unsigned char)v13);
        char v44 = 0;
        char v45 = 0;
        if(v42) {
            goto loc_431560;
        }
        else {
            ptr16 = ptr9;
            ptr2 = (long*)((long)ptr9 >> 1);
            char v46 = (long*)((long)ptr16 & 0x1L);
            char v47 = 0;
            char v48 = ptr2 ? 0: 1;
            char v49 = (long)ptr2 < 0L;
            char v50 = __parity__((unsigned char)ptr2);
            char v51 = ptr2 ? 0: 1;
            char v52 = (long)ptr2 < 0L;
            char v53 = __parity__((unsigned char)ptr2);
            char v54 = 0;
            char v55 = 0;
            if(v51 || v52 != 0) {
                goto loc_431560;
            }
            else {
                unsigned long v56 = v34 - v13;
                char v57 = v56 == ptr2;
                char v58 = (long)v56 > (long)ptr2;
                char v59 = __parity__((unsigned char)ptr2 - (unsigned char)v56);
                char v60 = v56 > (unsigned long)ptr2;
                char v61 = (long)(long*)((long)(long*)((long)(long*)((long)ptr2 - v56) ^ (long)ptr2) & (long)(long*)(v56 ^ (long)ptr2)) < 0L;
                char v62 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr2 - v56) ^ (long)(long*)(v56 ^ (long)ptr2)) >>> 4L) & 0x1L);
                if(!v60 && !v57) {
                    goto loc_431560;
                }
                else {
                    char v63 = ptr2 == 63L;
                    char v64 = (long)ptr2 < 63L;
                    char v65 = __parity__((unsigned char)ptr2 - 63);
                    char v66 = (unsigned long)ptr2 < 63L;
                    char v67 = (long)(long*)((long)(long*)((long)(long*)((char*)ptr2 - 63L) ^ (long)ptr2) & (long)(long*)((long)ptr2 ^ 0x3fL)) < 0L;
                    char v68 = (long*)((long)(long*)((long)(long*)((long)(long*)((char*)ptr2 - 63L) ^ (long)(long*)((long)ptr2 ^ 0x3fL)) >>> 4L) & 0x1L);
                    if(v66 || v63) {
                        goto loc_431563;
                    }
                    else {
                        long* ptr17 = (long*)((char*)ptr2 + 1L);
                        ptr1 = &v9;
                        char* ptr18 = (char*)caml_stat_alloc((long)ptr17);
                        ptr0 = ptr18;
                    }
                }
            }
        }
    }
    else {
    loc_431560:
        ptr2 = NULL;
        char v69 = 1;
        char v70 = 0;
        char v71 = 1;
        char v72 = 0;
        char v73 = 0;
    loc_431563:
        ptr1 = &v9;
        ptr0 = &v9;
    }
    unsigned char* ptr19 = (unsigned char*)(v19 + v13);
    char* ptr20 = ptr0;
    while(1) {
        char v74 = ptr2 ? 0: 1;
        char v75 = (long)ptr2 < 0L;
        char v76 = __parity__((unsigned char)ptr2);
        char v77 = 0;
        char v78 = 0;
        if(v74) {
            break;
        }
        else {
            unsigned char v79 = *ptr19;
            long v80 = 0L;
            char v81 = *ptr19 == 95;
            char v82 = (char)v79 < 95;
            char v83 = __parity__(v79 - 95);
            char v84 = v79 < 95;
            char v85 = (((v79 - 95) ^ v79) & (v79 ^ 0x5f)) < 0;
            char v86 = (((v79 - 95) ^ (v79 ^ 0x5f)) >>> 4) & 0x1;
            if(!v81) {
                ptr20[0] = v79;
                char* ptr21 = ptr20;
                ++ptr20;
                char v87 = ptr20 ? 0: 1;
                char v88 = (long)ptr20 < 0L;
                char v89 = __parity__((unsigned char)ptr20);
                char v90 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr21 ^ 0x1L) ^ (long)ptr20) >>> 4L) & 0x1L);
                char v91 = (unsigned long)ptr21 >= 18446744073709551615L;
                char v92 = (long)(long*)((long)(long*)((long)ptr20 ^ (long)ptr21) & (long*)~(long)(long*)((long)ptr21 ^ 0x1L)) < 0L;
            }
            ++ptr19;
            ptr16 = ptr2;
            ptr2 = (long*)((char*)ptr2 - 1L);
            char v93 = ptr2 ? 0: 1;
            char v94 = (long)ptr2 < 0L;
            char v95 = __parity__((unsigned char)ptr2);
            char v96 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr16 ^ 0x1L) ^ (long)ptr2) >>> 4L) & 0x1L);
            char v97 = (unsigned long)ptr16 < 1L;
            char v98 = (long)(long*)((long)(long*)((long)ptr2 ^ (long)ptr16) & (long)(long*)((long)ptr16 ^ 0x1L)) < 0L;
        }
    }
    char v99 = ptr20 == ptr0;
    char v100 = (long)ptr20 < (long)ptr0;
    char v101 = __parity__((unsigned char)ptr20 - (unsigned char)ptr0);
    char v102 = ptr20 < ptr0;
    char v103 = (long)(long*)((long)(long*)((long)(long*)((long)ptr20 - (long)ptr0) ^ (long)ptr20) & (long)(long*)((long)ptr20 ^ (long)ptr0)) < 0L;
    char v104 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr20 - (long)ptr0) ^ (long)(long*)((long)ptr20 ^ (long)ptr0)) >>> 4L) & 0x1L);
    ptr20[0] = 0;
    if(!v99) {
        char** ptr22 = &v10;
        char* __nptr = ptr0;
        →strtod(__nptr, &v10);
        char v105 = ptr20 == v10;
        char v106 = (long)ptr20 > (long)v10;
        char v107 = __parity__((unsigned char)v10 - (unsigned char)ptr20);
        char v108 = (unsigned long)ptr20 > v10;
        char v109 = (long)(long*)((long)(long*)((long)(long*)(v10 - (long)ptr20) ^ v10) & (long)(long*)((long)ptr20 ^ v10)) < 0L;
        char v110 = (long*)((long)(long*)((long)(long*)((long)(long*)(v10 - (long)ptr20) ^ (long)(long*)((long)ptr20 ^ v10)) >>> 4L) & 0x1L);
        if(!v105) {
            goto loc_431611;
        }
        else {
            char v111 = ptr0 == &v9;
            char v112 = (long)ptr0 < (long)&v9;
            char v113 = __parity__((unsigned char)ptr0 - (unsigned char)&v9);
            char v114 = ptr0 < &v9;
            char v115 = (long)(long*)((long)(long*)((long)(long*)((long)ptr0 - (long)&v9) ^ (long)ptr0) & (long)(long*)((long)ptr0 ^ (long)&v9)) < 0L;
            v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr0 - (long)&v9) ^ (long)(long*)((long)ptr0 ^ (long)&v9)) >>> 4L) & 0x1L);
            if(!v111) {
                v5 = (long)ptr0;
                v8 = v7;
                →free();
                long v116 = v8;
                __int128 v117 = (unsigned __int128)v8;
            }
            long* result = caml_copy_double(v5);
            long v118 = v27;
            ptr9 = (long*)(*(long*)(__FS_BASE + (long)(long*)0x28) ^ v118);
            v4 = ptr9 ? 0: 1;
            v3 = (long)ptr9 < 0L;
            v2 = __parity__((unsigned char)ptr9);
            v1 = 0;
            v0 = 0;
            if(v4) {
                return result;
            }
        }
    }
    else {
    loc_431611:
        v4 = ptr0 == &v9;
        v3 = (long)ptr0 < (long)&v9;
        v2 = __parity__((unsigned char)ptr0 - (unsigned char)&v9);
        v0 = ptr0 < &v9;
        v1 = (long)(long*)((long)(long*)((long)(long*)((long)ptr0 - (long)&v9) ^ (long)ptr0) & (long)(long*)((long)ptr0 ^ (long)&v9)) < 0L;
        v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr0 - (long)&v9) ^ (long)(long*)((long)ptr0 ^ (long)&v9)) >>> 4L) & 0x1L);
        if(!v4) {
            char* ptr23 = ptr0;
            →free();
        }
        long v119 = "float_of_string";
        long v120 = /*NO_RETURN*/ caml_failwith("float_of_string");
    }
    long* ptr24 = &ptr7;
    /*NO_RETURN*/ →__stack_chk_fail();
}

long* caml_floor_float(long param0) {
    →floor(*(double*)param0);
    return caml_copy_double(param0);
}

void caml_flush() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void caml_flush_partial() {
}

long* caml_fmod_float(long param0, double* param1) {
    long* result;
    char v0;
    char v1;
    short v2;
    __SyntheticTypeUnknownF __x;
    __SyntheticTypeUnknownF __y;
    __int128 v3 = *param1;
    __SyntheticTypeUnknownF v4 = *(double*)param0;
    do {
        v5[v6] = fprem(v4, v3);
        fnstsw(v2);
    }
    while((unsigned char)(v2 >>> 8) & 0x4);
    if(!(float)(v4 != v4)) {
        v1 = 1;
        v0 = 0;
    }
    else if(!(float)(v4 <= v4)) {
        v1 = 0;
        v0 = 0;
    }
    else if(!(float)(v4 >= v4)) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = 1;
        v0 = 1;
    }
    if(!v0 && v1) {
        result = caml_copy_double(param0);
    }
    else {
        →fmod(__x, __y);
        result = caml_copy_double(param0);
    }
    return result;
}

unsigned long caml_free_dependent_memory(long param0) {
    unsigned long result = caml_dependent_size;
    if((unsigned long)(param0 >>> 3) <= result) {
        result -= (unsigned long)(param0 >>> 3);
        caml_dependent_size = result;
    }
    else {
        caml_dependent_size = 0L;
    }
    return result;
}

void caml_frexp_float() {
    // Decompilation error
}

void caml_garbage_collection() {
    // Decompilation error
}

void caml_gc_compaction() {
    // Decompilation error
}

void caml_gc_counters() {
    // Decompilation error
}

void caml_gc_full_major() {
    // Decompilation error
}

void caml_gc_get() {
    // Decompilation error
}

void caml_gc_major() {
    // Decompilation error
}

void caml_gc_major_slice() {
    // Decompilation error
}

void caml_gc_minor() {
    // Decompilation error
}

void caml_gc_quick_stat() {
    // Decompilation error
}

void caml_gc_set() {
    // Decompilation error
}

void caml_gc_stat() {
    // Decompilation error
}

long caml_ge_float(double* param0, double* param1) {
    return *param0 != *param1 ? *param0 <= *param1: 0 ? 1L: 3L;
}

void caml_get_exception_backtrace() {
    // Decompilation error
}

int caml_get_public_method(unsigned long* param0, unsigned long param1) {
    unsigned long* ptr0;
    unsigned int v0;
    int* ptr1 = *param0;
    long v1 = 3L;
    long v2 = (unsigned long)*ptr1;
    if(*ptr1 > 3) {
        do {
            v0 = (unsigned int)((((unsigned int)v2 + (unsigned int)v1) >> 1) | 0x1);
            while(*(long*)((long)v0 * 8L + (long)ptr1) <= (long)param1) {
                v1 = (unsigned long)v0;
                if((unsigned int)v2 <= (int)v0) {
                    ptr0 = (unsigned long*)((long)v0 * 8L + (long)ptr1);
                    return *ptr0 == param1 ? (unsigned int)*(long*)(ptr0 - 1): 0;
                }
                v0 = (unsigned int)((((unsigned int)v2 + v0) >> 1) | 0x1);
            }
            v2 = (unsigned long)(v0 - 2);
        }
        while((int)(v0 - 2) > (unsigned int)v1);
    }
    ptr0 = (unsigned long*)((long)(unsigned int)v1 * 8L + (long)ptr1);
    return *ptr0 == param1 ? (unsigned int)*(long*)(ptr0 - 1): 0;
}

void caml_getblock() {
    // Decompilation error
}

void caml_getword() {
    // Decompilation error
}

long caml_globalsym(char* __name) {
    long result;
    →→dlsym(NULL, __name);
    return result;
}

void caml_greaterthan() {
    // Decompilation error
}

long caml_gt_float(double* param0, double* param1) {
    char v0;
    char v1;
    double v2 = *param0;
    if(v2 == *param1) {
        v1 = 1;
        v0 = 0;
    }
    else if(v2 > *param1) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = v2 < *param1 ? 0: 1;
        v0 = 1;
    }
    return v0 || v1 ? 1L: 3L;
}

void caml_hash_univ_param() {
    // Decompilation error
}

long caml_hash_variant(unsigned char* param0) {
    long v0 = 1L;
    long result = 1L;
    if(*param0) {
        do {
            long v1 = (unsigned long)*param0;
            ++param0;
            v0 = (long)((unsigned int)(v0 >>> 1L) * 223 + (unsigned int)v1) * 2L + 1L;
        }
        while(*param0);
        result = (long)(unsigned int)v0;
    }
    return result;
}

long caml_init_custom_operations() {
    caml_register_custom_operations(&caml_int32_ops);
    caml_register_custom_operations(&caml_nativeint_ops);
    return caml_register_custom_operations(&caml_int64_ops);
}

void caml_init_gc() {
    // Decompilation error
}

void caml_init_ieee_floats() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_init_major_heap(unsigned long param0) {
    unsigned long v0;
    char v1;
    char v2;
    unsigned long v3;
    unsigned long v4 = param0;
    unsigned long v5 = &v0;
    char v6 = &v0 == 8L;
    char v7 = (long)&v2 < 0L;
    char v8 = __parity__((unsigned char)&v0 - 8);
    char v9 = (long*)((long)(long*)((long)(long*)((long)(long*)(&v0 ^ 0x8L) ^ (long)&v2) >>> 4L) & 0x1L);
    char v10 = &v0 < 8L;
    char v11 = (long)(long*)((long)(long*)(&v0 ^ (long)&v2) & (long)(long*)(&v0 ^ 0x8L)) < 0L;
    long v12 = 0x2000L;
    char v13 = v4 == 0x1fffL;
    char v14 = (long)v4 < 0x1fffL;
    char v15 = __parity__((unsigned char)v4 - 0xff);
    char v16 = v4 < 0x1fffL;
    char v17 = (((v4 - 0x1fffL) ^ v4) & (v4 ^ 0x1fffL)) < 0L;
    char v18 = (((v4 - 0x1fffL) ^ (v4 ^ 0x1fffL)) >>> 4L) & 0x1L;
    long v19 = 0x2000L;
    if(!v16 && !v13) {
        long v20 = v4 + 0xfffL;
        v12 = v20 & 0xfffffffffffff000L;
        char v21 = v12 ? 0: 1;
        char v22 = v12 < 0L;
        char v23 = __parity__((unsigned char)v12);
        char v24 = 0;
        char v25 = 0;
        v19 = v12;
    }
    caml_stat_heap_size = v19;
    caml_stat_top_heap_size = v19;
    unsigned long v26 = caml_alloc_for_heap(v12);
    char v27 = v26 ? 0: 1;
    char v28 = v26 >= 0x8000000000000000L;
    char v29 = __parity__((unsigned char)v26);
    char v30 = 0;
    char v31 = 0;
    caml_heap_start = v26;
    if(!v27) {
        unsigned long v32 = v26;
        v5 = v26;
        long v33 = (long)(caml_stat_heap_size + v32);
        char v34 = v33 ? 0: 1;
        char v35 = v33 < 0L;
        char v36 = __parity__((unsigned char)v33);
        v18 = (((caml_stat_heap_size ^ v5) ^ v33) >>> 4L) & 0x1L;
        char v37 = __carry__(caml_stat_heap_size, v5);
        char v38 = ((v33 ^ v5) & ~(caml_stat_heap_size ^ v5)) < 0L;
        *(long*)(v26 - 8L) = 0L;
        unsigned long v39 = v26;
        long v40 = 1L;
        caml_stat_heap_chunks = 1L;
        long v41 = /*BAD_CALL!*/ caml_page_table_add(1L, v39, v33);
        int v42 = (unsigned int)v41;
        int v43 = (unsigned int)(v41 >>> 32L);
        v27 = v42 ? 0: 1;
        v28 = v42 < 0;
        v29 = __parity__((unsigned char)v42);
        v30 = 0;
        v31 = 0;
        if(v27) {
            caml_fl_init_merge();
            unsigned long v44 = caml_stat_heap_size;
            unsigned long* ptr0 = caml_heap_start;
            long v45 = 1L;
            v5 = v44;
            unsigned long v46 = v44 >>> 3;
            char v47 = (v5 >>> 2L) & 0x1L;
            char v48 = 0;
            char v49 = v46 ? 0: 1;
            char v50 = v46 >= 0x8000000000000000L;
            char v51 = __parity__((unsigned char)v46);
            long* ptr1 = caml_make_free_blocks(ptr0, v46, 1L);
            long v52 = 0x4000L;
            caml_gc_phase = 2;
            gray_vals_size = 0x800L;
            →malloc(0x4000L);
            v27 = v3 ? 0: 1;
            v28 = v3 >= 0x8000000000000000L;
            v29 = __parity__(v1);
            v30 = 0;
            v31 = 0;
            gray_vals = v3;
            if(!v27) {
                unsigned long v53 = gray_vals_size;
                gray_vals_cur = v3;
                heap_is_pure = 1;
                caml_allocated_words = 0L;
                caml_extra_heap_resources = 0L;
                gray_vals_end = v53 * 8L + v3;
                return v53 * 8L + v3;
            }
            goto loc_42CD84;
        }
    }
    else {
        long v54 = "Fatal error: not enough memory for the initial heap.\n";
        long v55 = /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial heap.\n");
    loc_42CD84:
        long v56 = "Fatal error: not enough memory for the gray cache.\n";
        long v57 = /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the gray cache.\n");
    }
    /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table.\n");
}

long caml_init_signals() {
    char v0;
    int v1;
    long result;
    long v2 = &sig_alt_stack;
    long v3 = 0x2000L;
    int v4 = 0;
    long v5 = &segv_handler;
    int v6 = 0x48000004;
    →sigemptyset(&v0);
    system_stack_top = &v5;
    →sigaltstack(&v2, NULL);
    if(!v1) {
        →sigaction(11L, &v5, NULL);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* caml_initialize(unsigned long* param0, unsigned long param1) {
    long* result;
    long v0;
    long v1 = v0;
    *param0 = param1;
    if(!((unsigned char)param1 & 0x1) && caml_young_end > param1 && caml_young_start < param1) {
        result = (long*)caml_page_table_lookup((long)param0);
        if(((unsigned char)result & 0x1)) {
            unsigned long* ptr0 = gvar_65CCF8;
            if(gvar_65CD00 <= (unsigned long)ptr0) {
                caml_realloc_ref_table((unsigned long*)&caml_ref_table);
                ptr0 = gvar_65CCF8;
            }
            *ptr0 = param0;
            result = (long*)(ptr0 + 1);
            gvar_65CCF8 = (long*)(ptr0 + 1);
        }
    }
    return result;
}

void caml_input_scan_line() {
    // Decompilation error
}

void caml_input_val() {
    // Decompilation error
}

void caml_input_val_from_string() {
    // Decompilation error
}

void caml_input_value_from_block() {
    // Decompilation error
}

void caml_input_value_from_malloc() {
    // Decompilation error
}

long caml_int32_add(long param0, long param1) {
    return caml_copy_int32((long)(*(int*)(param1 + 8L) + *(int*)(param0 + 8L)));
}

long caml_int32_and(long param0, long param1) {
    return caml_copy_int32((long)(*(int*)(param1 + 8L) & *(int*)(param0 + 8L)));
}

long caml_int32_bits_of_float(double* param0) {
    return caml_copy_int32((long)*param0);
}

int caml_int32_compare(long param0, long param1) {
    int v0 = *(int*)(param1 + 8L);
    unsigned int v1 = *(unsigned int*)(param0 + 8L);
    return (int)((long)((*(int*)(param0 + 8L) == v0 || (int)v1 < v0 ? 0: 1) - ((int)v1 >= v0 ? 0: 1)) * 2L + 1L);
}

void caml_int32_div() {
    // Decompilation error
}

long* caml_int32_float_of_bits(long param0) {
    return caml_copy_double(param0);
}

void caml_int32_mod() {
    // Decompilation error
}

long caml_int32_mul(long param0, long param1) {
    return caml_copy_int32((long)(*(int*)(param1 + 8L) * *(int*)(param0 + 8L)));
}

long caml_int32_neg(long param0) {
    return caml_copy_int32((long)(0 - *(int*)(param0 + 8L)));
}

long caml_int32_of_float(long param0) {
    return caml_copy_int32((unsigned long)(int)*(double*)param0 | ((unsigned long)(unsigned int)(param0 >>> 32L) << 32));
}

long caml_int32_of_int(long param0) {
    return caml_copy_int32(param0 >> 1);
}

long caml_int32_of_string(long param0, long param1, long param2, long param3) {
    unsigned long v0 = parse_intnat(param0, 32, param2, param3);
    return caml_copy_int32((long)(unsigned int)v0);
}

long caml_int32_or(long param0, long param1) {
    return caml_copy_int32((long)(*(int*)(param1 + 8L) | *(int*)(param0 + 8L)));
}

long caml_int32_shift_left(long param0, long param1) {
    return caml_copy_int32((long)(*(int*)(param0 + 8L) << ((param1 >>> 1) & 0x1fL)));
}

long caml_int32_shift_right(long param0, long param1) {
    return caml_copy_int32((long)(*(int*)(param0 + 8L) >> ((param1 >>> 1) & 0x1fL)));
}

long caml_int32_shift_right_unsigned(long param0, long param1) {
    return caml_copy_int32((long)(*(int*)(param0 + 8L) >>> ((param1 >>> 1) & 0x1fL)));
}

long caml_int32_sub(long param0, long param1) {
    return caml_copy_int32((long)(*(int*)(param0 + 8L) - *(int*)(param1 + 8L)));
}

long* caml_int32_to_float(long param0) {
    return caml_copy_double(param0);
}

long caml_int32_to_int(long param0) {
    return (long)*(int*)(param0 + 8L) * 2L + 1L;
}

long caml_int32_xor(long param0, long param1) {
    return caml_copy_int32((long)(*(int*)(param1 + 8L) ^ *(int*)(param0 + 8L)));
}

long caml_int64_add(long param0, long param1) {
    return caml_copy_int64(*(long*)(param1 + 8L) + *(long*)(param0 + 8L));
}

long caml_int64_and(long param0, long param1) {
    return caml_copy_int64(*(long*)(param1 + 8L) & *(long*)(param0 + 8L));
}

long caml_int64_bits_of_float(long* param0) {
    return caml_copy_int64(*param0);
}

int caml_int64_compare(long param0, long param1) {
    unsigned long v0 = *(unsigned long*)(param1 + 8L);
    unsigned long v1 = *(unsigned long*)(param0 + 8L);
    return (int)((long)(((long)v1 <= (long)v0 ? 0: 1) - ((long)v1 >= (long)v0 ? 0: 1)) * 2L + 1L);
}

void caml_int64_div() {
    // Decompilation error
}

void caml_int64_mod() {
    // Decompilation error
}

long caml_int64_mul(long param0, long param1) {
    return caml_copy_int64(*(long*)(param1 + 8L) * *(long*)(param0 + 8L));
}

long caml_int64_neg(long param0) {
    return caml_copy_int64(0L - *(unsigned long*)(param0 + 8L));
}

long caml_int64_of_float(long param0) {
    return caml_copy_int64((unsigned long)(int)*(double*)param0 | ((unsigned long)(unsigned int)(param0 >>> 32L) << 32));
}

long caml_int64_of_int(long param0) {
    return caml_copy_int64(param0 >> 1);
}

long caml_int64_of_int32(long param0) {
    return caml_copy_int64((long)*(int*)(param0 + 8L));
}

long caml_int64_of_nativeint(long param0) {
    return caml_copy_int64(*(long*)(param0 + 8L));
}

long caml_int64_of_string(long param0, long param1, long param2, long param3) {
    unsigned int v0;
    long v1;
    long v2;
    long v3;
    long v4 = param0;
    unsigned int v5 = 1;
    long v6 = v3;
    char v7 = *(char*)param0;
    long v8 = param0;
    if(v7 == 45) {
        v4 = param0 + 1L;
        v7 = *(char*)(param0 + 1L);
        v5 = 0xffffffff;
    }
    unsigned long v9 = 0x1999999999999999L;
    long v10 = 10L;
    unsigned int v11 = 10;
    if(v7 == 48) {
        long v12 = (unsigned long)((unsigned int)*(char*)(v4 + 1L) - 66);
        if((unsigned char)v12 > 54) {
            v9 = 0x1999999999999999L;
            v11 = 10;
            v10 = 10L;
            v2 = 48L;
            v2 = (long)((unsigned int)v2 - 48);
            goto loc_43064F;
        }
        else {
            long v13 = 1L << (v12 & 0x3fL);
            if((v13 & 0x40000000400000L)) {
                v4 += 2L;
                v9 = 0xfffffffffffffffL;
                v10 = 16L;
                v7 = *(char*)v4;
                v11 = 16;
            }
            else if((v13 & 0x200000002000L)) {
                v4 += 2L;
                v9 = 0x1fffffffffffffffL;
                v10 = 8L;
                v7 = *(char*)v4;
                v11 = 8;
            }
            else if(!(v13 & 0x100000001L)) {
                v9 = 0x1999999999999999L;
                v11 = 10;
                v10 = 10L;
                v2 = 48L;
                v2 = (long)((unsigned int)v2 - 48);
                goto loc_43064F;
            }
            else {
                v4 += 2L;
                v9 = 0x7fffffffffffffffL;
                v10 = 2L;
                v7 = *(char*)v4;
                v11 = 2;
            }
        }
    }
    v2 = (long)(int)v7;
    if((unsigned char)(v7 + 208) <= 9) {
        v2 = (long)((unsigned int)v2 - 48);
        goto loc_43064F;
    }
    else if((unsigned char)(v7 + 191) > 5) {
        if((unsigned char)(v7 - 97) <= 5) {
            v2 = (long)((unsigned int)v2 - 87);
        loc_43064F:
            if((unsigned int)v2 >= 0 && (unsigned int)v2 < (int)v11) {
                v2 = (long)(unsigned int)v2;
            loc_430660:
                do {
                    ++v4;
                    v1 = (long)*(char*)v4;
                }
                while(*(char*)v4 == 95);
                param3 = (unsigned long)(int)(unsigned char)v1;
                if((unsigned char)((unsigned char)v1 + 208) > 9) {
                loc_4306A6:
                    if((unsigned char)((unsigned char)v1 + 191) <= 5) {
                        v0 = (unsigned int)((unsigned int)param3 - 55);
                    }
                    else if((unsigned char)((unsigned char)v1 - 97) > 5) {
                        goto loc_4306BA;
                    }
                    else {
                        v0 = (unsigned int)((unsigned int)param3 - 87);
                    }
                loc_43067D:
                    if((v0 >= 0x80000000 || (int)v0 >= (int)v11)) {
                    loc_4306BA:
                        unsigned long v14 = caml_string_length(v8);
                        v8 = (long)(v14 + v8);
                        if(v8 == v4 && (v11 != 10 || v2 >= 0L || v2 == 0x8000000000000000L)) {
                            return caml_copy_int64(v5 == -1 ? 0L - v2: v2);
                        }
                    }
                    else if(v9 >= (unsigned long)v2) {
                        long v15 = v10 * v2;
                        long v16 = (long)v0;
                        v2 = v16 + v15;
                        if(!__carry__(v16, v15)) {
                            goto loc_430660;
                        }
                    }
                }
                else {
                    v0 = (unsigned int)((unsigned int)param3 - 48);
                    goto loc_43067D;
                }
            }
        }
        v1 = /*NO_RETURN*/ caml_failwith("int_of_string");
        goto loc_4306A6;
    }
    else {
        v2 = (long)((unsigned int)v2 - 55);
        goto loc_43064F;
    }
}

long caml_int64_or(long param0, long param1) {
    return caml_copy_int64(*(long*)(param1 + 8L) | *(long*)(param0 + 8L));
}

long caml_int64_shift_left(long param0, long param1) {
    return caml_copy_int64(*(long*)(param0 + 8L) << ((param1 >>> 1) & 0x3fL));
}

long caml_int64_shift_right(long param0, long param1) {
    return caml_copy_int64(*(long*)(param0 + 8L) >> ((param1 >>> 1) & 0x3fL));
}

long caml_int64_shift_right_unsigned(long param0, long param1) {
    return caml_copy_int64(*(long*)(param0 + 8L) >>> ((param1 >>> 1) & 0x3fL));
}

long caml_int64_sub(long param0, long param1) {
    return caml_copy_int64((long)(*(unsigned long*)(param0 + 8L) - *(long*)(param1 + 8L)));
}

long* caml_int64_to_float(long param0) {
    return caml_copy_double(param0);
}

long caml_int64_to_int(long param0) {
    return *(long*)(param0 + 8L) * 2L + 1L;
}

long caml_int64_to_int32(long param0) {
    return caml_copy_int32(*(long*)(param0 + 8L));
}

long caml_int64_to_nativeint(long param0) {
    return caml_copy_nativeint(*(long*)(param0 + 8L));
}

long caml_int64_xor(long param0, long param1) {
    return caml_copy_int64(*(long*)(param1 + 8L) ^ *(long*)(param0 + 8L));
}

int caml_int_compare(unsigned long param0, unsigned long param1) {
    return (int)((long)(((long)param1 >= (long)param0 ? 0: 1) - ((long)param1 <= (long)param0 ? 0: 1)) * 2L + 1L);
}

long caml_int_of_float(double* param0) {
    long v0;
    return ((unsigned long)(int)*param0 | ((unsigned long)(unsigned int)(v0 >>> 32L) << 32)) * 2L + 1L;
}

long caml_invalid_argument(long param0) {
    long v0 = param0;
    /*NO_RETURN*/ caml_raise_with_string(&caml_exn_Invalid_argument, v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_lazy_follow_forward(long param0) {
    long v0;
    long v1 = v0;
    long result = param0;
    if(!((unsigned char)param0 & 0x1)) {
        long v2 = /*BAD_CALL!*/ caml_page_table_lookup(param0);
        if(((unsigned char)v2 & 0x7) && *(char*)(result - 8L) == 250) {
            result = *(long*)result;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* caml_lazy_make_forward(long param0) {
    long* result;
    long v0;
    long* ptr0;
    unsigned long v1 = caml_local_roots;
    long v2 = param0;
    long v3 = 1L;
    long v4 = 1L;
    long* ptr1 = &v2;
    unsigned long v5 = v1;
    long v6 = 1L;
    long* ptr2 = &v5;
    long v7 = 1L;
    caml_local_roots = &ptr2;
    long* ptr3 = &ptr0;
    long* ptr4 = caml_alloc_small(1L, 250L);
    ptr0 = ptr4;
    long v8 = ptr4[0];
    ptr4[0] = v2;
    long v9 = /*BAD_CALL!*/ caml_page_table_lookup((long)ptr0);
    if(((unsigned char)v9 & 0x1)) {
        if(caml_gc_phase) {
            v0 = v2;
            if((unsigned char)v0 & 0x1) {
                result = ptr0;
                caml_local_roots = v1;
                return result;
            }
        }
        else {
            caml_darken(v8);
            v0 = v2;
            if(((unsigned char)v0 & 0x1)) {
                result = ptr0;
                caml_local_roots = v1;
                return result;
            }
        }
        long* ptr5 = caml_young_end;
        if((unsigned long)v0 >= (unsigned long)ptr5) {
            result = ptr0;
            caml_local_roots = v1;
            return result;
        }
        unsigned long v10 = caml_young_start;
        if((unsigned long)v0 <= v10) {
            result = ptr0;
            caml_local_roots = v1;
            return result;
        }
        else if(!((unsigned char)v8 & 0x1) && (unsigned long)ptr5 > (unsigned long)v8 && v10 < (unsigned long)v8) {
            result = ptr0;
            caml_local_roots = v1;
            return result;
        }
        unsigned long* ptr6 = gvar_65CCF8;
        if(gvar_65CD00 <= (unsigned long)ptr6) {
            caml_realloc_ref_table((unsigned long*)&caml_ref_table);
            ptr6 = gvar_65CCF8;
        }
        result = ptr0;
        *ptr6 = ptr0;
        gvar_65CCF8 = (long*)(ptr6 + 1);
    }
    else {
        result = ptr0;
    }
    caml_local_roots = v1;
    return result;
}

long* caml_ldexp_float(long param0, long param1) {
    long v0;
    →ldexp((long)(unsigned int)(param1 >>> 1L), param1 >> 1);
    return caml_copy_double(v0);
}

long caml_le_float(double* param0, double* param1) {
    return *param1 != *param0 ? *param1 <= *param0: 0 ? 1L: 3L;
}

void caml_leave_blocking_section() {
    // Decompilation error
}

void caml_leave_blocking_section_default() {
    caml_async_signal_mode = 0L;
}

void caml_lessthan() {
    // Decompilation error
}

long* caml_log10_float(long param0) {
    →log10(*(double*)param0);
    return caml_copy_double(param0);
}

long* caml_log_float(long param0) {
    →log(*(double*)param0);
    return caml_copy_double(param0);
}

long caml_lt_float(double* param0, double* param1) {
    char v0;
    char v1;
    double v2 = *param1;
    if(v2 == *param0) {
        v1 = 1;
        v0 = 0;
    }
    else if(v2 > *param0) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = v2 < *param0 ? 0: 1;
        v0 = 1;
    }
    return v0 || v1 ? 1L: 3L;
}

void caml_main() {
    // Decompilation error
}

void caml_md5_chan() {
    // Decompilation error
}

void caml_md5_string() {
    // Decompilation error
}

long caml_minor_collection(long par0) {
    // Decompilation error
}

void caml_ml_flush_partial() {
    // Decompilation error
}

void caml_ml_output_partial() {
    // Decompilation error
}

long caml_ml_string_length(long param0) {
    long v0 = (*(long*)(param0 - 8L) >>> 10) * 8L;
    return ((unsigned long)(v0 - 1L) - (unsigned long)*(char*)(v0 + param0 - 1L)) * 2L + 1L;
}

void caml_modf_float() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_modify(long param0, unsigned long param1) {
    long v0;
    long v1 = v0;
    long v2 = *(long*)param0;
    *(unsigned long*)param0 = param1;
    long result = caml_page_table_lookup(param0);
    if(((unsigned char)result & 0x1)) {
        result = (long)caml_gc_phase;
        if(!caml_gc_phase) {
            result = caml_darken(v2);
            if(!((unsigned char)param1 & 0x1)) {
            loc_42E3F8:
                result = caml_young_end;
                if((unsigned long)result > param1) {
                    unsigned long v3 = caml_young_start;
                    if(v3 < param1 && (((unsigned char)v2 & 0x1) || (unsigned long)result <= (unsigned long)v2 || v3 >= (unsigned long)v2)) {
                        long* ptr0 = gvar_65CCF8;
                        if(gvar_65CD00 <= (unsigned long)ptr0) {
                            caml_realloc_ref_table(&caml_ref_table, (long)param1, (long)v3);
                            ptr0 = gvar_65CCF8;
                        }
                        *ptr0 = param0;
                        result = (long)(ptr0 + 1);
                        gvar_65CCF8 = (long)(ptr0 + 1);
                    }
                }
            }
        }
        else if(!((unsigned char)param1 & 0x1)) {
            goto loc_42E3F8;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_modify_generational_global_root(unsigned long param0, unsigned long param1) {
    long v0;
    long v1 = v0;
    long result = (long)((unsigned int)param1 & 0x1);
    unsigned long v2 = param0;
    param0 = *(unsigned long*)param0;
    if((((unsigned int)param1 & 0x1) || caml_young_end <= param1 || caml_young_start >= param1)) {
        if((unsigned char)param0 & 0x1) {
            if(!result) {
                if(caml_young_end > param1) {
                loc_42B612:
                    if(caml_young_start < param1) {
                        result = caml_insert_global_root((unsigned long*)&caml_global_roots_young, v2);
                        *(unsigned long*)v2 = param1;
                        return result;
                    }
                }
                result = caml_page_table_lookup((long)param1);
                if(((unsigned char)result & 0x1)) {
                    result = caml_insert_global_root((unsigned long*)&caml_global_roots_old, v2);
                }
            }
        }
        else if(result) {
            if(caml_young_end > param0 && caml_young_start < param0) {
                result = (long)caml_delete_global_root((void*)&caml_global_roots_young, v2);
            }
            else {
                result = caml_page_table_lookup((long)param0);
                if(((unsigned char)result & 0x1)) {
                    result = (long)caml_delete_global_root((void*)&caml_global_roots_old, v2);
                }
            }
        }
    }
    else if(((unsigned char)param0 & 0x1)) {
        goto loc_42B612;
    }
    else {
        result = caml_page_table_lookup((long)param0);
        if(((unsigned char)result & 0x1)) {
            caml_delete_global_root((void*)&caml_global_roots_old, v2);
            result = caml_insert_global_root((unsigned long*)&caml_global_roots_young, v2);
        }
    }
    *(unsigned long*)v2 = param1;
    return result;
}

long* caml_mul_float(long param0, double* param1) {
    return caml_copy_double(param0);
}

long caml_nativeint_add(long param0, long param1) {
    return caml_copy_nativeint(*(long*)(param1 + 8L) + *(long*)(param0 + 8L));
}

long caml_nativeint_and(long param0, long param1) {
    return caml_copy_nativeint(*(long*)(param1 + 8L) & *(long*)(param0 + 8L));
}

int caml_nativeint_compare(long param0, long param1) {
    unsigned long v0 = *(unsigned long*)(param1 + 8L);
    unsigned long v1 = *(unsigned long*)(param0 + 8L);
    return (int)((long)(((long)v1 <= (long)v0 ? 0: 1) - ((long)v1 >= (long)v0 ? 0: 1)) * 2L + 1L);
}

void caml_nativeint_div() {
    // Decompilation error
}

void caml_nativeint_mod() {
    // Decompilation error
}

long caml_nativeint_mul(long param0, long param1) {
    return caml_copy_nativeint(*(long*)(param1 + 8L) * *(long*)(param0 + 8L));
}

long caml_nativeint_neg(long param0) {
    return caml_copy_nativeint(0L - *(unsigned long*)(param0 + 8L));
}

long caml_nativeint_of_float(long param0) {
    return caml_copy_nativeint((unsigned long)(int)*(double*)param0 | ((unsigned long)(unsigned int)(param0 >>> 32L) << 32));
}

long caml_nativeint_of_int(long param0) {
    return caml_copy_nativeint(param0 >> 1);
}

long caml_nativeint_of_int32(long param0) {
    return caml_copy_nativeint((long)*(int*)(param0 + 8L));
}

long caml_nativeint_of_string(long param0, long param1, long param2, long param3) {
    unsigned long v0 = parse_intnat(param0, 64, param2, param3);
    return caml_copy_nativeint((long)v0);
}

long caml_nativeint_or(long param0, long param1) {
    return caml_copy_nativeint(*(long*)(param1 + 8L) | *(long*)(param0 + 8L));
}

long caml_nativeint_shift_left(long param0, long param1) {
    return caml_copy_nativeint(*(long*)(param0 + 8L) << ((param1 >>> 1) & 0x3fL));
}

long caml_nativeint_shift_right(long param0, long param1) {
    return caml_copy_nativeint(*(long*)(param0 + 8L) >> ((param1 >>> 1) & 0x3fL));
}

long caml_nativeint_shift_right_unsigned(long param0, long param1) {
    return caml_copy_nativeint(*(long*)(param0 + 8L) >>> ((param1 >>> 1) & 0x3fL));
}

long caml_nativeint_sub(long param0, long param1) {
    return caml_copy_nativeint((long)(*(unsigned long*)(param0 + 8L) - *(long*)(param1 + 8L)));
}

long* caml_nativeint_to_float(long param0) {
    return caml_copy_double(param0);
}

long caml_nativeint_to_int(long param0) {
    return *(long*)(param0 + 8L) * 2L + 1L;
}

long caml_nativeint_to_int32(long param0) {
    return caml_copy_int32(*(long*)(param0 + 8L));
}

long caml_nativeint_xor(long param0, long param1) {
    return caml_copy_nativeint(*(long*)(param1 + 8L) ^ *(long*)(param0 + 8L));
}

long* caml_neg_float(long param0) {
    return caml_copy_double(param0);
}

long caml_neq_float(double* param0, double* param1, long param2) {
    char v0;
    char v1;
    long v2;
    double v3 = *param0;
    if(*param0 == *param1) {
        v1 = 1;
        v0 = 0;
    }
    else if(v3 > *param1) {
        v1 = 0;
        v0 = 0;
    }
    else if(v3 < *param1) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = 1;
        v0 = 1;
    }
    return (unsigned long)(unsigned char)((unsigned int)((unsigned long)(v0 ? 1: 0) | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8)) | (unsigned int)((unsigned long)(v1 ? 0: 1) | ((unsigned long)((v2 >>> 8L) & 0xffffffffffffffL) << 8))) * 2L + 1L;
}

void caml_notequal() {
    // Decompilation error
}

long caml_obj_add_offset(long param0, long param1) {
    return (long)*(int*)(param1 + 8L) + param0;
}

long caml_obj_is_block(int param0) {
    return (unsigned int)(param0 & 0x1) >= 1 ? 1L: 3L;
}

long caml_obj_set_tag(long param0, long param1) {
    *(char*)(param0 - 8L) = (unsigned char)(param1 >>> 1L);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_obj_tag(long param0) {
    long v0;
    long v1 = v0;
    long result = 2001L;
    if(!((unsigned char)param0 & 0x1)) {
        result = 2005L;
        if(!((unsigned char)param0 & 0x7)) {
            long v2 = caml_page_table_lookup(param0);
            return (unsigned int)v2 & 0x7 ? (unsigned long)*(char*)(param0 - 8L) * 2L + 1L: 2003L;
        }
    }
    return result;
}

long caml_obj_truncate(long param0, long param1) {
    long v0;
    long v1;
    long v2;
    long v3 = v0;
    long v4 = v1;
    long v5 = v2;
    int v6 = (unsigned int)*(long*)(param0 - 8L);
    unsigned long v7 = (unsigned long)(unsigned int)((v6 >>> 10) & 0x3fffff) | ((unsigned long)(unsigned int)(*(long*)(param0 - 8L) >>> 32L) << 22) | ((unsigned long)0 << 54);
    if((unsigned long)(param1 >> 1) > v7) {
    loc_439230:
        /*NO_RETURN*/ caml_invalid_argument(&gvar_43E0C8);
    }
    if(!(unsigned long)(param1 >> 1)) {
        goto loc_439230;
    }
    else {
        if((unsigned long)(param1 >> 1) != v7) {
            if((unsigned int)(unsigned char)v6 <= 250 && (unsigned long)(param1 >> 1) < v7) {
                long v8 = (unsigned long)(param1 >> 1) * 8L + param0;
                unsigned long v9 = (unsigned long)(param1 >> 1);
                do {
                    ++v9;
                    caml_modify(v8, 1L);
                    v8 += 8L;
                }
                while(v9 < v7);
            }
            *(long*)((unsigned long)(param1 >> 1) * 8L + param0) = (~(unsigned long)(param1 >> 1) + v7) * 0x400L + 1L;
            *(long*)(param0 - 8L) = (unsigned long)(param1 >> 1) * 0x400L + (unsigned long)(v6 & 0x300) + (unsigned long)(unsigned char)v6;
        }
        return 1L;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_open_descriptor_in(int param0) {
    long v0;
    long result = caml_stat_alloc(0x1050L);
    *(int*)result = param0;
    →lseek64((long)param0, 0L, 1L);
    *(long*)(result + 8L) = v0;
    *(long*)(result + 40L) = 0L;
    *(int*)(result + 64L) = 0;
    *(int*)(result + 68L) = 0;
    *(long*)(result + 32L) = result + 80L;
    *(long*)(result + 24L) = result + 80L;
    *(int*)(result + 72L) = 0;
    *(int*)(result + 76L) = 0;
    *(long*)(result + 16L) = result + 0x1050L;
    unsigned long v1 = caml_all_opened_channels;
    *(long*)(result + 56L) = 0L;
    *(unsigned long*)(result + 48L) = v1;
    if(v1) {
        *(long*)(v1 + 56L) = result;
    }
    caml_all_opened_channels = result;
    return result;
}

long caml_open_descriptor_out(long param0) {
    long result = caml_open_descriptor_in(param0);
    *(long*)(result + 32L) = 0L;
    return result;
}

void caml_output_val() {
    // Decompilation error
}

void caml_output_value_to_block() {
    // Decompilation error
}

void caml_output_value_to_malloc() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_page_table_initialize(long param0) {
    unsigned long v0;
    unsigned long v1 = 0L;
    *(long*)&caml_page_table = 1;
    gvar_65CD88 = 64;
    unsigned int v2 = 64;
    unsigned long v3 = 1L;
    if((unsigned long)((param0 >>> 12) * 2L) > 1L) {
        do {
            v3 *= 2L;
            --v2;
        }
        while((unsigned long)((param0 >>> 12) * 2L) > v3);
        v1 = v3 - 1L;
        *(long*)&caml_page_table = v3;
        gvar_65CD88 = v2;
    }
    size_t __nmemb = *(long*)&caml_page_table;
    gvar_65CD90 = v1;
    gvar_65CD98 = 0L;
    →calloc(__nmemb, 8L);
    gvar_65CDA0 = v0;
    return v0 >= 1L ? 0L: 0xffffffffL;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_parse_engine(unsigned long param0, long* param1, long param2, unsigned long param3) {
    long result;
    unsigned int v0;
    long v1;
    char* __s1;
    char v2;
    char* ptr0;
    long v3;
    unsigned long v4;
    long v5;
    long result;
    long result;
    char* ptr1;
    long v6;
    unsigned long v7;
    long v8;
    long v9;
    unsigned int v10;
    long v11;
    long v12;
    long v13;
    long v14;
    long v15;
    long v16;
    param2 >>= 1;
    long v17 = v11;
    long v18 = v13;
    long v19 = v15;
    unsigned long v20 = param0;
    long v21 = v12;
    long v22 = v14;
    char v23 = (unsigned int)param2 == 5;
    char v24 = (unsigned int)param2 < 5;
    long* ptr2 = param1;
    unsigned long v25 = param3;
    if(v24 || v23) {
        switch(param2) {
            case 0: {
                param3 = 0L;
                v3 = 0L;
                v5 = 0L;
                v4 = (unsigned long)(unsigned int)(*(param1 + 13) >> 1);
            loc_436C0D:
                v9 = (unsigned long)(int)*(short*)(*(long*)(v20 + 40L) + param3);
                if(!(unsigned int)v9) {
                loc_436C1F:
                    param2 = *(ptr2 + 6) >>> 1;
                    if((unsigned int)param2 >= 0) {
                        goto loc_436C2E;
                    }
                    else {
                        *(ptr2 + 13) = v4 * 2L + 1L;
                        *(ptr2 + 14) = (long)(unsigned int)v5 * 2L + 1L;
                        *(ptr2 + 15) = (long)(unsigned int)v3 * 2L + 1L;
                        return 1L;
                    }
                }
                else {
                loc_436D37:
                    if(caml_parser_trace) {
                        →__fprintf_chk();
                    }
                    long v26 = *(long*)(v20 + 32L);
                    *(ptr2 + 10) = v4 * 2L + 1L;
                    long v27 = (unsigned long)(int)*(short*)((long)(unsigned int)v9 * 2L + v26);
                    *(ptr2 + 12) = (long)(unsigned int)v9 * 2L + 1L;
                    unsigned long v28 = (unsigned long)(unsigned int)v27;
                    v7 = v4 + 1L - v28;
                    long v29 = *ptr2;
                    *(ptr2 + 11) = v28 * 2L + 1L;
                    long v30 = *(long*)(v20 + 72L);
                    long v31 = *(long*)(v7 * 8L + v29 - 8L) >>> 1;
                    param3 = (unsigned long)*(short*)((long)(unsigned int)v9 * 2L + *(long*)(v20 + 24L));
                    param1 = (long*)((unsigned int)v31 + (int)*(short*)(param3 * 2L + v30));
                    if(!(long*)((long)(long*)((long)param1 >>> 31L) & 0x1L) && (int)*(short*)(param3 * 2L + v30) && (int)((unsigned int)v31 + (int)*(short*)(param3 * 2L + v30)) <= (unsigned int)(*(long*)(v20 + 80L) >>> 1L)) {
                        param1 = (long*)(unsigned int)param1;
                        if((unsigned int)v31 != (int)*(short*)((long)(long*)((long)param1 * 2L) + *(long*)(v20 + 96L))) {
                            goto loc_436DA9;
                        }
                        else {
                            v8 = (unsigned long)(int)*(short*)((long)(long*)((long)param1 * 2L) + *(long*)(v20 + 88L));
                        }
                    }
                    else {
                    loc_436DA9:
                        v8 = (unsigned long)(int)*(short*)(param3 * 2L + *(long*)(v20 + 48L));
                    }
                    if((unsigned long)(*(ptr2 + 4) >> 1) > v7) {
                        *(ptr2 + 13) = v7 * 2L + 1L;
                        *(ptr2 + 14) = (long)(unsigned int)v8 * 2L + 1L;
                        *(ptr2 + 15) = (long)(unsigned int)v3 * 2L + 1L;
                        result = 9L;
                    }
                    else {
                        *(ptr2 + 13) = v7 * 2L + 1L;
                        *(ptr2 + 14) = (long)(unsigned int)v8 * 2L + 1L;
                        *(ptr2 + 15) = (long)(unsigned int)v3 * 2L + 1L;
                        result = 7L;
                    }
                    return result;
                }
            }
            case 1: {
                goto loc_436ED0;
            }
            case 2: {
                v5 = *(param1 + 14) >>> 1;
                v4 = (unsigned long)(unsigned int)(*(param1 + 13) >> 1);
                v3 = *(param1 + 15) >>> 1;
            loc_436E2B:
                long v32 = *ptr2;
                long v33 = v4 * 8L;
                ptr0 = (char*)((long)(unsigned int)v5 * 2L);
                *(unsigned long*)(v4 * 8L + v32) = (long*)((char*)((long)(unsigned int)v5 * 2L) + 1L);
                /*BAD_CALL!*/ caml_modify(*(ptr2 + 1) + v33, *(unsigned long*)(ptr2 + 7));
                /*BAD_CALL!*/ caml_modify(*(ptr2 + 2) + v33, *(unsigned long*)(ptr2 + 8));
                caml_modify(*(ptr2 + 3) + v33, *(unsigned long*)(ptr2 + 9));
                param3 = (unsigned long)ptr0;
                goto loc_436C0D;
            }
            case 3: {
                v8 = *(param1 + 14) >>> 1;
                v7 = (unsigned long)(unsigned int)(*(param1 + 13) >> 1);
                v3 = *(param1 + 15) >>> 1;
                *(ptr2 + 13) = v7 * 2L + 1L;
                *(ptr2 + 14) = (long)(unsigned int)v8 * 2L + 1L;
                *(ptr2 + 15) = (long)(unsigned int)v3 * 2L + 1L;
                return 9L;
            }
            case 4: {
                break;
            }
            case 5: {
                v5 = *(param1 + 14) >>> 1;
                v4 = (unsigned long)(unsigned int)(*(param1 + 13) >> 1);
                v3 = *(param1 + 15) >>> 1;
            loc_436CEC:
                if((unsigned int)v3 <= 2) {
                    param1 = (long*)caml_parser_trace;
                    unsigned long v34 = v4 * 8L;
                    while(1) {
                        param2 = (unsigned long)(int)*(short*)((unsigned long)(unsigned int)(*(long*)(*ptr2 + v34) >> 1) * 2L + *(long*)(v20 + 56L));
                        unsigned int v35 = (unsigned int)((unsigned int)param2 + 0x100);
                        if(v35 < 0x80000000 && (unsigned int)param2 && (unsigned int)(*(long*)(v20 + 80L) >>> 1L) >= (int)v35) {
                            v6 = (long)v35;
                            ptr1 = (char*)(v6 * 2L);
                            if(*(short*)(v6 * 2L + *(long*)(v20 + 96L)) != 0x100) {
                                goto loc_436FA7;
                            }
                            else {
                                v3 = 3L;
                                if(!(unsigned int)param1) {
                                loc_437079:
                                    ++v4;
                                    v5 = (unsigned long)(int)*(short*)(*(long*)(v20 + 88L) + (long)ptr1);
                                    if((unsigned long)(*(ptr2 + 4) >> 1) > v4) {
                                        goto loc_436E2B;
                                    }
                                    else {
                                        *(ptr2 + 13) = v4 * 2L + 1L;
                                        *(ptr2 + 14) = (long)(unsigned int)v5 * 2L + 1L;
                                        *(ptr2 + 15) = (long)(unsigned int)v3 * 2L + 1L;
                                        return 5L;
                                    }
                                }
                                else {
                                    ptr0 = ptr1;
                                    →__fprintf_chk();
                                    ptr1 = ptr0;
                                loc_43706B:
                                    if(!caml_parser_trace) {
                                        ptr1 = (char*)(v6 * 2L);
                                    }
                                    else {
                                        ptr0 = ptr1;
                                        →__fprintf_chk();
                                        ptr1 = ptr0;
                                    }
                                    goto loc_437079;
                                }
                            }
                        }
                        else {
                        loc_436FA7:
                            if((unsigned int)param1) {
                                →__fprintf_chk();
                                param1 = (long*)caml_parser_trace;
                            }
                            v34 -= 8L;
                            if((unsigned long)(unsigned int)(*(ptr2 + 5) >> 1) >= v4) {
                            loc_437002:
                                if(!(unsigned int)param1) {
                                    result = 3L;
                                }
                                else {
                                    →__fprintf_chk();
                                    result = 3L;
                                }
                                return result;
                            }
                            --v4;
                        }
                    }
                    goto loc_437002;
                }
                else if(!(unsigned int)(*(ptr2 + 6) >>> 1L)) {
                    return 3L;
                }
                else if(caml_parser_trace) {
                    →__fprintf_chk();
                }
                long v36 = *(long*)(v20 + 40L);
                *(ptr2 + 6) = -1L;
                param3 = (unsigned long)((long)(unsigned int)v5 * 2L);
                v9 = (unsigned long)(int)*(short*)(v36 + param3);
                if(!(unsigned int)v9) {
                    goto loc_436C1F;
                }
                else {
                    goto loc_436D37;
                }
            }
            default: {
                throw 0;
            }
        }
        long v37 = *param1;
        v5 = *(param1 + 14) >>> 1;
        v4 = (unsigned long)(unsigned int)(*(param1 + 13) >> 1);
        v3 = *(param1 + 15) >>> 1;
        *(long*)&v10 = v4 * 8L;
        long v38 = *(long*)&v10;
        ptr0 = (char*)((long)(unsigned int)v5 * 2L);
        *(unsigned long*)(v4 * 8L + v37) = (long*)((char*)((long)(unsigned int)v5 * 2L) + 1L);
        /*BAD_CALL!*/ caml_modify(*(param1 + 1) + v38, v25);
        long v39 = *(ptr2 + 3);
        unsigned long v40 = (unsigned long)(unsigned int)(*(ptr2 + 10) >> 1);
        /*BAD_CALL!*/ caml_modify(*(long*)&v10 + v39, *(unsigned long*)(v40 * 8L + v39));
        param3 = (unsigned long)ptr0;
        if(v40 < v4) {
            caml_modify(*(ptr2 + 2) + *(long*)&v10, *(unsigned long*)(v40 * 8L + *(ptr2 + 3)));
            param3 = (unsigned long)ptr0;
            goto loc_436C0D;
        }
        else {
            goto loc_436C0D;
        loc_436ED0:
            long v41 = *(param1 + 13);
            long v42 = *(param1 + 14);
            long v43 = *(param1 + 15);
            long v44 = v41 >> 1;
            v5 = v42 >>> 1;
            v3 = v43 >>> 1;
            v2 = (unsigned char)param3 & 0x1 ? 0: 1;
            v4 = (unsigned long)(unsigned int)v44;
        }
        if(v2) {
            long v45 = (unsigned long)*(char*)(param3 - 8L);
            long v46 = *(long*)(param0 + 16L);
            long v47 = (long)(param1 + 7);
            *(param1 + 6) = *(long*)(v45 * 8L + v46);
            caml_modify(v47, *(unsigned long*)param3);
        }
        else {
            long v48 = *(long*)(param0 + 8L);
            unsigned long v49 = param3;
            long v50 = (long)(param1 + 7);
            long v51 = (long)(unsigned int)(long*)(v49 >> 1);
            *(param1 + 6) = *(long*)(v51 * 8L + v48);
            caml_modify(v50, 1L);
        }
        if(caml_parser_trace) {
            if(!((unsigned char)v25 & 0x1)) {
                char v52 = *(char*)(v25 - 8L);
                char* ptr3 = *(char**)(v20 + 120L);
                if(v52 && ptr3[0]) {
                    long v53 = (unsigned long)v52;
                    long v54 = 0L;
                    v10 = (unsigned int)((unsigned int)v53 - 1);
                    do {
                        char* __s = ptr3;
                        v0 = (unsigned int)v54;
                        ptr0 = ptr3;
                        →strlen(__s);
                        unsigned int v55 = v0;
                        char v56 = v0 == v10;
                        ptr3 = (char*)(v16 + (long)ptr0) + 1L;
                        if(v56) {
                            break;
                        }
                        else {
                            v54 = (unsigned long)(v55 + 1);
                        }
                    }
                    while(!ptr3[0]);
                }
                goto loc_437278;
            }
            else {
                __s1 = *(char**)(v20 + 112L);
                v1 = v25 >> 1;
            }
            if(!((unsigned int)v1 ? 0: 1) && (unsigned int)v1 >= 0 && __s1[0]) {
                long v57 = 0L;
                v10 = (unsigned int)((unsigned int)v1 - 1);
                do {
                    v0 = (unsigned int)v57;
                    →strlen(__s1);
                    unsigned int v58 = v0;
                    __s1 = (char*)(v16 + (long)__s1) + 1L;
                    if((int)v58 >= (int)v10) {
                        goto loc_437176;
                    }
                    else {
                        v57 = (unsigned long)(v58 + 1);
                    }
                }
                while(!__s1[0]);
            }
            else {
            loc_437176:
                /*BAD_CALL!*/ →__fprintf_chk();
                param3 = (unsigned long)((long)(unsigned int)v5 * 2L);
                param2 = *(ptr2 + 6) >>> 1;
            loc_436C2E:
                long v59 = (unsigned long)(int)*(short*)(*(long*)(v20 + 56L) + param3);
                unsigned int v60 = (unsigned int)((unsigned int)v59 + (unsigned int)param2);
                if(v60 < 0x80000000 && (unsigned int)v59 && (unsigned int)(*(long*)(v20 + 80L) >> 1) >= (int)v60) {
                    v6 = (long)v60;
                    ptr1 = (char*)(v6 * 2L);
                    if((unsigned int)param2 == (int)*(short*)(v6 * 2L + *(long*)(v20 + 96L))) {
                        *(ptr2 + 6) = -1L;
                        v3 = (unsigned long)((unsigned int)v3 - (((unsigned int)v3 ? 0: 1) || (unsigned int)v3 < 0 ? 0: 1));
                        goto loc_43706B;
                    }
                }
                long v61 = (unsigned long)(int)*(short*)(*(long*)(v20 + 64L) + param3);
                param3 = (unsigned long)((unsigned int)v61 + (unsigned int)param2);
                if(!((param3 >>> 31L) & 0x1L) && (unsigned int)v61 && (unsigned int)(*(long*)(v20 + 80L) >> 1) >= (unsigned int)param3) {
                    param3 = (unsigned long)(unsigned int)param3;
                    if((unsigned int)param2 == (int)*(short*)(param3 * 2L + *(long*)(v20 + 96L))) {
                        v9 = (unsigned long)(int)*(short*)((long)(long*)(param3 * 2L) + *(long*)(v20 + 88L));
                        goto loc_436D37;
                    }
                }
                if(!((unsigned int)v3 ? 0: 1) && (unsigned int)v3 >= 0) {
                    goto loc_436CEC;
                }
                else {
                    *(ptr2 + 13) = v4 * 2L + 1L;
                    *(ptr2 + 14) = (long)(unsigned int)v5 * 2L + 1L;
                    *(ptr2 + 15) = (long)(unsigned int)v3 * 2L + 1L;
                    return 11L;
                }
            }
        loc_437278:
            →__fprintf_chk();
            long* ptr4 = *(long**)v25;
            char v62 = (unsigned char)ptr4 & 0x1 ? 0: 1;
            if(v62) {
                unsigned char v63 = *(unsigned char*)(ptr4 - 1);
            }
            →__fprintf_chk();
            →__fprintf_chk();
        }
        param3 = (unsigned long)((long)(unsigned int)v5 * 2L);
        param2 = *(ptr2 + 6) >>> 1;
        goto loc_436C2E;
    }
    else {
        return 3L;
    }
}

long caml_pos_in(long param0) {
    return (unsigned long)(*(long*)(param0 + 8L) + *(long*)(param0 + 24L)) - *(long*)(param0 + 32L);
}

unsigned long caml_pos_out(long param0) {
    return (unsigned long)(*(long*)(param0 + 8L) + *(long*)(param0 + 24L)) - (unsigned long)(param0 + 80L);
}

long* caml_power_float(long param0, double* param1) {
    →pow(*(double*)param0, *param1);
    return caml_copy_double(param0);
}

void caml_process_pending_signals() {
    // Decompilation error
}

void caml_program() {
    // Decompilation error
}

void caml_putblock() {
    // Decompilation error
}

void caml_putword() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_raise_constant(long param0) {
    long* ptr0;
    unsigned long v0 = caml_local_roots;
    long v1 = param0;
    long v2 = 1L;
    long v3 = 1L;
    unsigned long v4 = v0;
    long v5 = 1L;
    long v6 = 1L;
    long* ptr1 = &v1;
    long* ptr2 = &v4;
    caml_local_roots = &ptr2;
    long* ptr3 = &ptr0;
    long* ptr4 = caml_alloc_small(1L, 0L);
    long v7 = v1;
    ptr0 = ptr4;
    ptr4[0] = v7;
    long v8 = (long)ptr0;
    /*NO_RETURN*/ caml_raise(v8);
}

long caml_raise_end_of_file() {
    /*NO_RETURN*/ caml_raise_constant(&caml_exn_End_of_file);
}

void caml_raise_exn() {
    char v0 = caml_backtrace_active & 0x1 ? 0: 1;
    char v1 = (int)(caml_backtrace_active & 0x1) < 0;
    char v2 = __parity__((unsigned char)caml_backtrace_active & 0x1);
    char v3 = 0;
    char v4 = 0;
    jump v0 ? &sub_43C204: &sub_43C20A;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_raise_not_found(long param0, long param1) {
    /*NO_RETURN*/ caml_raise_constant(&caml_exn_Not_found, param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_raise_stack_overflow() {
    /*NO_RETURN*/ caml_raise(&caml_bucket_Stack_overflow);
}

long caml_raise_sys_blocked_io() {
    /*NO_RETURN*/ caml_raise_constant(&caml_exn_Sys_blocked_io);
}

void caml_raise_sys_error() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_raise_with_arg(long param0, long param1) {
    long* ptr0;
    long v0;
    unsigned long v1 = caml_local_roots;
    long v2 = param0;
    v0 = param1;
    long v3 = 1L;
    long v4 = 2L;
    unsigned long v5 = v1;
    long* ptr1 = &v0;
    long v6 = 1L;
    long* ptr2 = &v2;
    long v7 = 1L;
    long* ptr3 = &v5;
    caml_local_roots = &ptr3;
    long* ptr4 = &ptr0;
    long* ptr5 = caml_alloc_small(2L, 0L);
    long v8 = v2;
    ptr0 = ptr5;
    ptr5[0] = v8;
    long v9 = v0;
    long* ptr6 = ptr0;
    ptr6[1] = v9;
    long v10 = (long)ptr0;
    /*NO_RETURN*/ caml_raise(v10);
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_raise_with_args(long param0, long param1, long param2) {
    char v0;
    long v1;
    char v2;
    long v3 = param2;
    long v4 = v1;
    unsigned long v5 = (unsigned long)(unsigned int)param1;
    long* ptr0 = &v4;
    char v6 = &v0 == 168L;
    char v7 = (long)&v2 < 0L;
    char v8 = __parity__((unsigned char)&v0 - 168);
    char v9 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v4 ^ 0x98L) ^ (long)&v2) >>> 4L) & 0x1L);
    char v10 = (unsigned long)&v4 < 152L;
    char v11 = (long)(long*)((long)(long*)((long)&v4 ^ (long)&v2) & (long)(long*)((long)&v4 ^ 0x98L)) < 0L;
    unsigned long v12 = caml_local_roots;
    long v13 = param0;
    int v14 = (unsigned int)v5 + 1;
    int v15 = 0;
    long v16 = param2;
    long v17 = 1L;
    long v18 = 1L;
    unsigned long v19 = v12;
    long* ptr1 = &v13;
    long v20 = (long)v14;
    long v21 = 1L;
    long* ptr2 = &v13;
    long* ptr3 = &v19;
    long* ptr4 = &v19;
    long* ptr5 = &ptr4;
    caml_local_roots = &ptr4;
    long v22 = (long)(unsigned int)param1;
    long v23 = 0L;
    char v24 = 1;
    char v25 = 0;
    char v26 = 1;
    char v27 = 0;
    char v28 = 0;
    long v29 = v22;
    long* ptr6 = caml_alloc_small(v20, 0L);
    long v30 = v13;
    char v31 = (unsigned int)v5 ? 0: 1;
    char v32 = (unsigned int)v5 < 0;
    char v33 = __parity__((unsigned char)v5);
    char v34 = 0;
    char v35 = 0;
    ptr6[0] = v30;
    if(!v31 && v32 == 0) {
        long v36 = (unsigned long)((unsigned int)v5 - 1);
        unsigned long v37 = 0L;
        char v38 = 1;
        char v39 = 0;
        char v40 = 1;
        char v41 = 0;
        char v42 = 0;
        v5 = (unsigned long)(v36 * 8L + 8L);
        do {
            long v43 = *(long*)(v37 + v3);
            *((long*)((long)ptr6 + v37) + 1) = *(long*)(v37 + v3);
            v37 += 8L;
            v31 = v37 == v5;
            v32 = (long)v37 < (long)v5;
            v33 = __parity__((unsigned char)v37 - (unsigned char)v5);
            v35 = v37 < v5;
            v34 = (long)(((v37 - v5) ^ v37) & (v37 ^ v5)) < 0L;
            v9 = (((v37 - v5) ^ (v37 ^ v5)) >>> 4L) & 0x1L;
        }
        while(!v31);
    }
    long v44 = (long)ptr6;
    /*NO_RETURN*/ caml_raise(v44);
}

long caml_raise_with_string(long par0, long par1) {
    // Decompilation error
}

long caml_raise_zero_divide() {
    /*NO_RETURN*/ caml_raise_constant(&caml_exn_Division_by_zero);
}

void caml_read_directory() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_realloc_ref_table(unsigned long* param0) {
    void* ptr0;
    void* ptr1;
    char v0;
    long v1;
    long result;
    unsigned long* ptr2;
    void* ptr3;
    unsigned long* ptr4 = ptr2;
    unsigned long* ptr5 = param0;
    long v2 = v1;
    void* ptr6 = ptr3;
    long* ptr7 = &ptr0;
    char v3 = &ptr0 == 40L;
    char v4 = (long)&v0 < 0L;
    char v5 = __parity__((unsigned char)&ptr0 - 40);
    char v6 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x28L) ^ (long)&v0) >>> 4L) & 0x1L);
    char v7 = (unsigned long)&ptr0 < 40L;
    char v8 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v0) & (long)(long*)((long)&ptr0 ^ 0x28L)) < 0L;
    long v9 = *param0;
    char v10 = v9 ? 0: 1;
    char v11 = v9 < 0L;
    char v12 = __parity__((unsigned char)v9);
    char v13 = 0;
    char v14 = 0;
    if(!v10) {
        unsigned long v15 = *(param0 + 2);
        char v16 = *(long*)(param0 + 4) == v15;
        char v17 = *(long*)(param0 + 4) < (long)v15;
        char v18 = __parity__((unsigned char)*(long*)(param0 + 4) - (unsigned char)v15);
        char v19 = *(param0 + 4) < v15;
        char v20 = (((*(long*)(param0 + 4) - v15) ^ *(long*)(param0 + 4)) & (*(long*)(param0 + 4) ^ v15)) < 0L;
        char v21 = (((*(long*)(param0 + 4) - v15) ^ (*(long*)(param0 + 4) ^ v15)) >>> 4L) & 0x1L;
        if(!v16) {
            long v22 = *(long*)(param0 + 5);
            long v23 = *(long*)(param0 + 3);
            long v24 = "Growing ref_table to %ldk bytes\n";
            long v25 = v22;
            long v26 = v22 * 2L;
            char v27 = v26 ? 0: 1;
            char v28 = v26 < 0L;
            char v29 = __parity__((unsigned char)v26);
            char v30 = (v26 >>> 4L) & 0x1L;
            char v31 = __carry__(v25, v25);
            char v32 = (v26 ^ v25) < 0L;
            *(long*)(param0 + 5) = v26;
            long v33 = v26;
            long v34 = *(long*)(param0 + 6) + v26;
            char v35 = v34 ? 0: 1;
            char v36 = v34 < 0L;
            char v37 = __parity__((unsigned char)v34);
            char v38 = (((*(long*)(param0 + 6) ^ v33) ^ v34) >>> 4L) & 0x1L;
            char v39 = __carry__(*(long*)(param0 + 6), v33);
            char v40 = ((v34 ^ v33) & ~(*(long*)(param0 + 6) ^ v33)) < 0L;
            long v41 = 8L;
            long v42 = v34;
            void* ptr8 = (void*)(v34 * 8L);
            char v43 = (v42 >>> 61L) & 0x1L;
            char v44 = v40;
            char v45 = ptr8 ? 0: 1;
            char v46 = (long)ptr8 < 0L;
            char v47 = __parity__((unsigned char)ptr8);
            void* ptr9 = (void*)((long)ptr8 + 0x3ffL);
            char v48 = ptr8 ? 0: 1;
            char v49 = (long)ptr8 < 0L;
            char v50 = __parity__((unsigned char)ptr8);
            char v51 = 0;
            char v52 = 0;
            void* ptr10 = v49 ? ptr9: ptr8;
            void* ptr11 = v49 ? ptr9: ptr8;
            long* ptr12 = (long*)((long)ptr10 >> 10);
            char v53 = (long*)((long)(long*)((long)ptr11 >>> 9L) & 0x1L);
            char v54 = 0;
            char v55 = ptr12 ? 0: 1;
            char v56 = (long)ptr12 < 0L;
            char v57 = __parity__((unsigned char)ptr12);
            long v58 = caml_gc_message(8L, "Growing ref_table to %ldk bytes\n", ptr12);
            →realloc();
            char v59 = result ? 0: 1;
            char v60 = result < 0L;
            char v61 = __parity__((unsigned char)result);
            char v62 = 0;
            char v63 = 0;
            *ptr5 = result;
            if(!v59) {
                long v64 = *(long*)(ptr5 + 5);
                long v65 = (*(long*)(ptr5 + 6) + v64) * 8L + result;
                *(long*)(ptr5 + 3) = ((v23 - v9) & 0xfffffffffffffff8L) + result;
                *(long*)(ptr5 + 2) = v64 * 8L + result;
                *(long*)(ptr5 + 1) = v65;
                *(long*)(ptr5 + 4) = v65;
                return result;
            }
            long v66 = "Fatal error: ref_table overflow\n";
            long* ptr13 = &ptr1;
            result = /*NO_RETURN*/ caml_fatal_error("Fatal error: ref_table overflow\n");
        }
        caml_gc_message(8L, "ref_table threshold crossed\n");
        *(long*)(ptr5 + 4) = *(long*)(ptr5 + 1);
        result = caml_urge_major_slice();
    }
    else {
        result = caml_alloc_table((long)param0, (long)(long*)((long)caml_minor_heap_size >>> 6), 0x100L);
    }
    return result;
}

void caml_really_getblock() {
    // Decompilation error
}

void caml_really_putblock() {
    // Decompilation error
}

long caml_record_backtrace(long param0) {
    param0 >>= 1;
    if((unsigned int)param0 != caml_backtrace_active) {
        caml_backtrace_active = (unsigned int)param0;
        caml_backtrace_pos = 0;
        if(!(unsigned int)param0) {
            caml_remove_global_root(&caml_backtrace_last_exn);
        }
        else {
            caml_register_global_root(&caml_backtrace_last_exn);
        }
    }
    return 1L;
}

unsigned long caml_record_signal(int param0) {
    unsigned long result = caml_young_end;
    *(long*)((long)param0 * 8L + (long)&caml_pending_signals) = 1L;
    caml_signals_are_pending = 1L;
    caml_young_limit = result;
    return result;
}

void caml_refill() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_register_custom_operations(long param0) {
    long v0;
    long result = caml_stat_alloc(16L);
    unsigned long v1 = custom_ops_table;
    *(long*)result = v0;
    *(unsigned long*)(result + 8L) = v1;
    custom_ops_table = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* caml_register_dyn_global(long param0) {
    long v0;
    unsigned long v1 = caml_dyn_globals;
    long* result = (long*)caml_stat_alloc(16L);
    *result = v0;
    *(unsigned long*)(result + 1) = v1;
    caml_dyn_globals = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_register_generational_global_root(unsigned long param0) {
    long result;
    unsigned long v0 = param0;
    param0 = *(unsigned long*)param0;
    if(!((unsigned char)param0 & 0x1)) {
        if(caml_young_end > param0 && caml_young_start < param0) {
            return caml_insert_global_root((unsigned long*)&caml_global_roots_young, v0);
        }
        result = caml_page_table_lookup((long)param0);
        if((unsigned char)result & 0x1) {
            return caml_insert_global_root((unsigned long*)&caml_global_roots_old, v0);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_register_global_root(unsigned long param0) {
    return caml_insert_global_root((unsigned long*)&caml_global_roots, param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
void* caml_remove_generational_global_root(long param0) {
    void* result;
    long v0 = param0;
    param0 = *(long*)param0;
    if(!((unsigned char)param0 & 0x1)) {
        if(caml_young_end > (unsigned long)param0 && caml_young_start < (unsigned long)param0) {
            return caml_delete_global_root((void*)&caml_global_roots_young, (unsigned long)v0);
        }
        result = (void*)caml_page_table_lookup(param0);
        if((unsigned char)result & 0x1) {
            return caml_delete_global_root((void*)&caml_global_roots_old, (unsigned long)v0);
        }
    }
    return result;
}

void* caml_remove_global_root(unsigned long param0) {
    return caml_delete_global_root((void*)&caml_global_roots, param0);
}

long caml_rev_convert_signal_number(unsigned int param0) {
    if(param0 != 6) {
        while(param0 != 14) {
        }
        return 0xfffffffeL;
    }
    return 0xffffffffL;
}

// Stale decompilation - Refresh this view to re-decompile this code
char* caml_search_dll_in_path(unsigned int* param0, char* param1) {
    long v0;
    long v1;
    char* __src;
    unsigned int* ptr0;
    long v2 = v1;
    →strlen();
    char* __dest = (char*)caml_stat_alloc(v0 + 4L);
    →strcpy(__dest, __src);
    →strlen();
    *(int*)&__dest[v0] = 7303982;
    char* result = caml_search_in_path(ptr0, __dest);
    →free();
    return result;
}

void caml_search_exe_in_path() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
char* caml_search_in_path(unsigned int* param0, char* __s) {
    char* __dest;
    char v0;
    int v1;
    unsigned char v2;
    int v3;
    long v4;
    long v5;
    long v6;
    long v7;
    long v8 = v5;
    long v9 = v6;
    long v10 = v7;
    char v11 = __s[0];
    if(__s[0]) {
        char* ptr0 = __s;
        if(v11 == 47) {
            →strlen(__s);
            long v12 = caml_stat_alloc((size_t)(v4 + 1L));
            __dest = (char*)v12;
            →strcpy((char*)v12, __s);
            return __dest;
        }
        do {
            ++ptr0;
            v2 = ptr0[0];
            if(!ptr0[0]) {
                goto loc_43B8AA;
            }
        }
        while(v2 == 47);
    }
    else {
    loc_43B8AA:
        if(!(*param0 ? 0: 1) && *param0 >= 0) {
            long v13 = 0L;
            unsigned int v14 = 0;
            do {
                →strlen(*(char**)(*(long*)(param0 + 2) + v13));
                →strlen(__s);
                __dest = (char*)caml_stat_alloc((size_t)(v4 * 2L + 2L));
                →strcpy(__dest, *(char**)(*(long*)(param0 + 2) + v13));
                if(__dest[0]) {
                    →strlen(__dest);
                    *(short*)&__dest[v4] = 47;
                }
                →strcat(__dest, __s);
                →__xstat64(1L, __dest, &v0);
                if(!v3 && (v1 & 0xf000) == 0x8000) {
                    return __dest;
                }
                ++v14;
                v13 += 8L;
                →free(__dest);
            }
            while(*param0 <= (int)v14);
        }
        →strlen(__s);
        long v12 = caml_stat_alloc((size_t)(v4 + 1L));
        __dest = (char*)v12;
        →strcpy((char*)v12, __s);
    }
    return __dest;
}

void caml_seek_in() {
    // Decompilation error
}

void caml_seek_out() {
    // Decompilation error
}

long caml_send0(long* param0) {
    unsigned long v0;
    unsigned long* ptr0;
    unsigned long* ptr1 = *ptr0;
    long v1 = *(long*)(ptr1 + 1);
    long v2 = *param0;
    long v3 = v1 & v2;
    char v4 = v3 ? 0: 1;
    char v5 = v3 < 0L;
    char v6 = __parity__((unsigned char)v3);
    char v7 = 0;
    char v8 = 0;
    unsigned long v9 = *(unsigned long*)((char*)(v3 + (long)ptr1) + 23L);
    char v10 = v9 == v0;
    char v11 = (long)v9 < (long)v0;
    char v12 = __parity__((unsigned char)v9 - (unsigned char)v0);
    char v13 = v9 < v0;
    char v14 = (long)(((v9 - v0) ^ v9) & (v9 ^ v0)) < 0L;
    char v15 = (((v9 - v0) ^ (v9 ^ v0)) >>> 4L) & 0x1L;
    if(!v10) {
        unsigned long v16 = 3L;
        unsigned long v17 = *ptr1;
        do {
            unsigned long v18 = v16;
            unsigned long v19 = v16;
            unsigned long v20 = v18 + v17;
            char v21 = v20 ? 0: 1;
            char v22 = v20 >= 0x8000000000000000L;
            char v23 = __parity__((unsigned char)v20);
            char v24 = (((v17 ^ v19) ^ v20) >>> 4L) & 0x1L;
            char v25 = __carry__(v17, v19);
            char v26 = (long)((v20 ^ v19) & ~(v17 ^ v19)) < 0L;
            unsigned long v27 = v20;
            long v28 = (long)(v20 >>> 1);
            char v29 = v27 & 0x1L;
            char v30 = v27 >= 0x8000000000000000L;
            char v31 = v28 ? 0: 1;
            char v32 = v28 < 0L;
            char v33 = __parity__((unsigned char)v28);
            unsigned long v34 = (unsigned long)(v28 | 0x1L);
            char v35 = v34 ? 0: 1;
            char v36 = v34 >= 0x8000000000000000L;
            char v37 = __parity__((unsigned char)v34);
            char v38 = 0;
            char v39 = 0;
            v9 = *(unsigned long*)(v34 * 8L + (long)ptr1);
            char v40 = v9 == v0;
            char v41 = (long)v9 > (long)v0;
            char v42 = __parity__((unsigned char)v0 - (unsigned char)v9);
            char v43 = v9 > v0;
            char v44 = (long)(((v0 - v9) ^ v0) & (v9 ^ v0)) < 0L;
            char v45 = (((v0 - v9) ^ (v9 ^ v0)) >>> 4L) & 0x1L;
            if(v41 != v44) {
                v27 = v34;
                unsigned long v46 = v34 - 2L;
                char v47 = v46 ? 0: 1;
                char v48 = v46 >= 0x8000000000000000L;
                char v49 = __parity__((unsigned char)v46);
                char v50 = (((v27 ^ 0x2L) ^ v46) >>> 4L) & 0x1L;
                char v51 = v27 < 2L;
                char v52 = (long)((v46 ^ v27) & (v27 ^ 0x2L)) < 0L;
                v17 = v46;
            }
            else {
                v16 = v34;
            }
            v10 = v17 == v16;
            v11 = (long)v17 > (long)v16;
            v12 = __parity__((unsigned char)v16 - (unsigned char)v17);
            v13 = v17 > v16;
            v14 = (long)(((v16 - v17) ^ v16) & (v17 ^ v16)) < 0L;
            v15 = (((v16 - v17) ^ (v17 ^ v16)) >>> 4L) & 0x1L;
        }
        while(v11 != v14);
        v3 = v16 * 8L - 23L;
        *param0 = v16 * 8L - 23L;
    }
    long* ptr2 = *(unsigned long*)((char*)(v3 + (long)ptr1) + 15L);
    long v53 = *ptr2;
    jump v53;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_serialize_block_1(long param0, unsigned long param1) {
    long result;
    if(extern_ptr + param1 > extern_limit) {
        grow_extern_output(param1);
    }
    →memmove();
    extern_ptr += param1;
    return result;
}

long caml_serialize_block_2(unsigned long param0, unsigned long param1) {
    unsigned long v0 = extern_ptr;
    long result = (long)(param1 * 2L + v0);
    if(extern_limit < (unsigned long)result) {
        unsigned long v1 = param1;
        result = grow_extern_output(param1 * 2L);
        v0 = extern_ptr;
        param1 = v1;
    }
    if((long)param1 > 0L) {
        unsigned long counter = param1;
        result = 0L;
        do {
            char v2 = *(char*)(result + param0 + 1L);
            *(char*)(result + v0 + 1L) = *(char*)(result + param0);
            *(char*)(result + v0) = v2;
            result += 2L;
            --counter;
        }
        while(counter);
        v0 = (unsigned long)(param1 * 2L + v0);
    }
    extern_ptr = v0;
    return result;
}

long caml_serialize_block_4(unsigned long param0, unsigned long param1) {
    unsigned long v0 = param0;
    unsigned long v1 = extern_ptr;
    long result = (long)(param1 * 4L + v1);
    if(extern_limit < (unsigned long)result) {
        unsigned long v2 = param1;
        result = grow_extern_output(param1 * 4L);
        v1 = extern_ptr;
        param1 = v2;
    }
    if((long)param1 > 0L) {
        unsigned long counter = param1;
        result = 0L;
        do {
            char v3 = *(char*)(result + v0);
            param0 = (unsigned long)*(char*)(result + v0 + 1L);
            *(char*)(result + v1) = *(char*)(result + v0 + 3L);
            char v4 = *(char*)(result + v0 + 2L);
            *(char*)(result + v1 + 3L) = v3;
            *(char*)(result + v1 + 2L) = (unsigned char)param0;
            *(char*)(result + v1 + 1L) = v4;
            result += 4L;
            --counter;
        }
        while(counter);
        v1 = (unsigned long)(param1 * 4L + v1);
    }
    extern_ptr = v1;
    return result;
}

long caml_serialize_block_8(unsigned long param0, unsigned long param1) {
    unsigned long v0 = param0;
    long v1 = extern_ptr;
    long result = (long)(param1 * 8L + v1);
    if(extern_limit < (unsigned long)result) {
        unsigned long v2 = param1;
        result = grow_extern_output(param1 * 8L);
        v1 = extern_ptr;
        param1 = v2;
    }
    if((long)param1 > 0L) {
        result = v1;
        unsigned long counter = param1;
        do {
            char v3 = *(char*)v0;
            char v4 = *(char*)(v0 + 1L);
            *(char*)result = *(char*)(v0 + 7L);
            char v5 = *(char*)(v0 + 6L);
            *(char*)(result + 7L) = v3;
            *(char*)(result + 6L) = v4;
            *(char*)(result + 1L) = v5;
            param0 = (unsigned long)*(char*)(v0 + 2L);
            char v6 = *(char*)(v0 + 3L);
            *(char*)(result + 2L) = *(char*)(v0 + 5L);
            char v7 = *(char*)(v0 + 4L);
            v0 += 8L;
            *(char*)(result + 5L) = (unsigned char)param0;
            *(char*)(result + 4L) = v6;
            *(char*)(result + 3L) = v7;
            result += 8L;
            --counter;
        }
        while(counter);
        v1 += param1 * 8L;
    }
    extern_ptr = v1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_serialize_block_float_8(long param0, long param1) {
    long result;
    if((unsigned long)(param1 * 8L) + extern_ptr > extern_limit) {
        grow_extern_output((unsigned long)(param1 * 8L));
    }
    →memmove();
    extern_ptr += (unsigned long)(param1 * 8L);
    return result;
}

long caml_serialize_float_4() {
    int v0;
    int v1 = v0;
    return caml_serialize_block_4(&v1, 1L);
}

long caml_serialize_float_8() {
    long v0;
    long v1 = v0;
    return caml_serialize_block_float_8(&v1, 1L);
}

char* caml_serialize_int_1(long param0) {
    char* result = extern_ptr;
    long* ptr0 = (long*)(result + 1L);
    if(extern_limit < (unsigned long)ptr0) {
        grow_extern_output(1L);
        result = extern_ptr;
        ptr0 = (long*)(result + 1L);
    }
    *result = (unsigned char)param0;
    extern_ptr = ptr0;
    return result;
}

char* caml_serialize_int_2(long param0) {
    char* result = extern_ptr;
    long* ptr0 = (long*)(result + 2L);
    if(extern_limit < (unsigned long)ptr0) {
        grow_extern_output(2L);
        result = extern_ptr;
        ptr0 = (long*)(result + 2L);
    }
    *(result + 1L) = (unsigned char)param0;
    *result = (unsigned char)((unsigned int)param0 >>> 8);
    extern_ptr = ptr0;
    return result;
}

char* caml_serialize_int_4(long param0) {
    char* result = extern_ptr;
    long* ptr0 = (long*)(result + 4L);
    if(extern_limit < (unsigned long)ptr0) {
        grow_extern_output(4L);
        result = extern_ptr;
        ptr0 = (long*)(result + 4L);
    }
    *(result + 3L) = (unsigned char)param0;
    *result = (unsigned char)((unsigned int)param0 >>> 24);
    *(result + 1L) = (unsigned char)((unsigned int)param0 >>> 16);
    *(result + 2L) = (unsigned char)((unsigned int)param0 >>> 8);
    extern_ptr = ptr0;
    return result;
}

long caml_serialize_int_8(long param0) {
    long v0;
    return caml_serialize_block_8(&v0, 1L);
}

void caml_set_allocation_policy(unsigned long param0) {
    if(!param0) {
        fl_prev = &gvar_6586F0;
    }
    else if(param0 == 1L) {
        flp_size = 0;
        beyond = 0L;
        caml_allocation_policy = 1L;
        return;
    }
    caml_allocation_policy = param0;
}

void caml_set_minor_heap_size() {
    // Decompilation error
}

long caml_set_parser_trace(long param0) {
    long v0 = caml_parser_trace < 1 ? -2L: 0L;
    caml_parser_trace = (unsigned int)(param0 >>> 1L);
    return v0 + 3L;
}

long caml_set_signal_action(int param0, unsigned int param1) {
    long result;
    int v0;
    long v1;
    char v2;
    unsigned long v3;
    int v4;
    if(!param1) {
        v1 = 0L;
        v0 = 0;
    }
    else if(param1 != 1) {
        v1 = &handle_signal;
        v0 = 4;
    }
    else {
        v1 = 1L;
        v0 = 0;
    }
    →sigemptyset(&v2);
    →sigaction((long)param0, &v1, &v3);
    if(v4 != -1) {
        result = 2L;
        if(v3 != &handle_signal) {
            result = v3 != 1L ? 0L: 1L;
        }
    }
    return result;
}

long* caml_sin_float(long param0) {
    →sin(*(double*)param0);
    return caml_copy_double(param0);
}

long* caml_sinh_float(long param0) {
    →sinh(*(double*)param0);
    return caml_copy_double(param0);
}

long* caml_sqrt_float(long param0) {
    char v0;
    char v1;
    __int128 v2;
    double __x = *(double*)param0;
    __int128 v2 = sqrtsd(*(long*)param0);
    if((double)v2 == (double)v2) {
        v1 = 1;
        v0 = 0;
    }
    else if((double)v2 > (double)v2) {
        v1 = 0;
        v0 = 0;
    }
    else if((double)v2 < (double)v2) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = 1;
        v0 = 1;
    }
    if(v0 || !v1) {
        →sqrt(__x);
    }
    return caml_copy_double(param0);
}

void caml_start_program() {
    // Decompilation error
}

void caml_stat_resize() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_static_alloc(long param0) {
    return caml_stat_alloc(param0 >> 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_static_free(void* __ptr) {
    →free(__ptr);
    return 1L;
}

long caml_static_release_bytecode() {
    /*NO_RETURN*/ caml_failwith("Meta.static_release_bytecode impossible with native code");
}

void caml_static_resize() {
    // Decompilation error
}

long caml_string_compare(unsigned char* param0, unsigned char* param1) {
    char v0;
    unsigned char* ptr0 = param1;
    if(param1 != param0) {
        long v1 = (*(long*)(param0 - 8L) >>> 10) * 8L;
        unsigned long v2 = (unsigned long)(v1 - 1L) - (unsigned long)*(char*)((char*)(v1 + (long)param0) - 1L);
        long v3 = (*(long*)(param1 - 8L) >>> 10) * 8L;
        unsigned long v4 = (unsigned long)*(char*)((char*)(v3 + (long)param1) - 1L);
        param1 = param0;
        unsigned long v5 = (unsigned long)(v3 - 1L) - v4;
        unsigned long v6 = v5 <= v2 ? v5: v2;
        char v7 = 1;
        char v8 = v6 < v6;
        while(v6 != 0L) {
            v7 = *param1 == *ptr0;
            v8 = *param1 < *ptr0;
            ++param1;
            ++ptr0;
            --v6;
            if(!v7) {
                break;
            }
        }
        long v9 = (unsigned long)(int)((v8 || v7 ? 0: 1) - (v8 ? 1: 0));
        if((unsigned int)v9 >= 0) {
            if((unsigned int)v9) {
                return 3L;
            }
            v0 = v5 == v2;
            if(v5 <= v2) {
                if(v0 != 0) {
                    return 1L;
                }
                return 3L;
            }
        }
        return -1L;
    }
    return 1L;
}

long caml_string_equal(unsigned long* param0, unsigned long* param1) {
    if(param1 != param0) {
        unsigned long v0 = (unsigned long)(*(long*)(param0 - 1) >>> 10);
        if((unsigned long)(*(long*)(param1 - 1) >>> 10) == v0) {
            if(!v0) {
                return 3L;
            }
            while(*param1 == *param0) {
                --v0;
                if(!v0) {
                    return 3L;
                }
                ++param0;
                ++param1;
            }
        }
        return 1L;
    }
    return 3L;
}

void caml_string_get() {
    // Decompilation error
}

void caml_string_greaterequal() {
    // Decompilation error
}

void caml_string_greaterthan() {
    // Decompilation error
}

unsigned long caml_string_length(long param0) {
    long v0 = (*(long*)(param0 - 8L) >>> 10) * 8L;
    return (unsigned long)(v0 - 1L) - (unsigned long)*(char*)(v0 + param0 - 1L);
}

void caml_string_lessequal() {
    // Decompilation error
}

void caml_string_lessthan() {
    // Decompilation error
}

void caml_string_notequal() {
    // Decompilation error
}

void caml_string_set() {
    // Decompilation error
}

long* caml_sub_float(long param0, double* param1) {
    return caml_copy_double(param0);
}

void caml_sys_chdir() {
    // Decompilation error
}

long caml_sys_close(long param0) {
    →close(param0 >> 1);
    return 1L;
}

void caml_sys_error() {
    // Decompilation error
}

long caml_sys_file_exists(char* __filename) {
    char v0;
    unsigned int v1;
    →__xstat64(1L, __filename, &v0);
    return v1 >= 1 ? 1L: 3L;
}

void caml_sys_getcwd() {
    // Decompilation error
}

void caml_sys_init(unsigned long param0, unsigned long param1) {
    caml_exe_name = param0;
    caml_main_argv = param1;
}

void caml_sys_io_error() {
    // Decompilation error
}

void caml_sys_is_directory() {
    // Decompilation error
}

long caml_sys_random_seed() {
    long v0;
    long v1;
    int v2;
    int v3;
    /*BAD_CALL!*/ →gettimeofday(&v0, NULL);
    →getppid();
    /*BAD_CALL!*/ →getpid();
    return ((v0 ^ v1) ^ (long)((v3 * 0x10000) ^ v2)) * 2L + 1L;
}

void caml_sys_read_directory() {
    // Decompilation error
}

void caml_sys_remove() {
    // Decompilation error
}

void caml_sys_rename() {
    // Decompilation error
}

void caml_sys_system_command() {
    // Decompilation error
}

long* caml_sys_time() {
    long v0;
    long v1;
    →getrusage(0L, &v0);
    return caml_copy_double(v1);
}

long* caml_tan_float(long param0) {
    →tan(*(double*)param0);
    return caml_copy_double(param0);
}

long* caml_tanh_float(long param0) {
    →tanh(*(double*)param0);
    return caml_copy_double(param0);
}

unsigned long caml_try_leave_blocking_section_default() {
    unsigned long result = caml_async_signal_mode;
    caml_async_signal_mode = 0L;
    return result;
}

long caml_tuplify3() {
    long* ptr0;
    long v0;
    long v1 = v0;
    long v2 = *(ptr0 + 2);
    long v3 = *(ptr0 + 1);
    long v4 = *ptr0;
    long v5 = *(long*)(v1 + 16L);
    jump v5;
}

char caml_update_dummy(long param0, long param1) {
    long v0;
    long v1 = param0;
    long v2 = v0;
    unsigned char v3 = *(unsigned char*)(param1 - 8L);
    long v4 = *(long*)(param1 - 8L);
    *(unsigned char*)(param0 - 8L) = v3;
    if(v3 != 254) {
        unsigned long v5 = 0L;
        if((unsigned long)(v4 >>> 10)) {
            do {
                unsigned long v6 = *(unsigned long*)(v5 * 8L + param1);
                long v7 = v1;
                ++v5;
                v1 += 8L;
                caml_modify(v7, v6);
            }
            while((unsigned long)(v4 >>> 10) > v5);
        }
    }
    else {
        unsigned long v8 = (unsigned long)(*(long*)(param1 - 8L) >>> 10);
        if(v8) {
            unsigned long v9 = 0L;
            do {
                *(long*)(v9 * 8L + param0) = *(long*)(v9 * 8L + param1);
                ++v9;
            }
            while(v9 < v8);
            return 1;
        }
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_weak_blit(long param0, unsigned long param1, long param2, unsigned long param3, unsigned long* param4) {
    unsigned long v0;
    unsigned long v1;
    long v2;
    long* ptr0;
    unsigned long v3;
    unsigned long v4 = v1;
    unsigned long v5 = param1;
    param1 >>= 1;
    char v6 = v5 & 0x1L;
    char v7 = 0;
    char v8 = param1 ? 0: 1;
    char v9 = param1 >= 0x8000000000000000L;
    char v10 = __parity__((unsigned char)param1);
    unsigned long v11 = v0;
    unsigned long v12 = v3;
    unsigned long v13 = param1;
    long* ptr1 = ptr0;
    long v14 = param0;
    long v15 = v2;
    long v16 = param2;
    unsigned long v17 = v13;
    unsigned long v18 = v13 + 1L;
    char v19 = v18 ? 0: 1;
    char v20 = v18 >= 0x8000000000000000L;
    char v21 = __parity__((unsigned char)v18);
    char v22 = (((v17 ^ 0x1L) ^ v18) >>> 4L) & 0x1L;
    char v23 = v17 >= 18446744073709551615L;
    char v24 = (long)((v18 ^ v17) & ~(v17 ^ 0x1L)) < 0L;
    if(!v19) {
        unsigned long* ptr2 = param4;
        unsigned long v25 = *(unsigned long*)(param0 - 8L);
        unsigned long* ptr3 = ptr2;
        ptr0 = (long*)((long)ptr2 >> 1);
        char v26 = (unsigned long*)((long)ptr3 & 0x1L);
        char v27 = 0;
        char v28 = ptr0 ? 0: 1;
        char v29 = (long)ptr0 < 0L;
        char v30 = __parity__((unsigned char)ptr0);
        long* ptr4 = (long*)((long)ptr0 + v18);
        v17 = v25;
        unsigned long v31 = v25 >>> 10;
        char v32 = (v17 >>> 9L) & 0x1L;
        char v33 = 0;
        char v34 = v31 ? 0: 1;
        char v35 = v31 >= 0x8000000000000000L;
        char v36 = __parity__((unsigned char)v31);
        v19 = v31 == ptr4;
        v20 = (long)v31 > (long)ptr4;
        v21 = __parity__((unsigned char)ptr4 - (unsigned char)v31);
        v23 = v31 > (unsigned long)ptr4;
        v24 = (long)(long*)((long)(long*)((long)(long*)((long)ptr4 - v31) ^ (long)ptr4) & (long)(long*)(v31 ^ (long)ptr4)) < 0L;
        v22 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)ptr4 - v31) ^ (long)(long*)(v31 ^ (long)ptr4)) >>> 4L) & 0x1L);
        if((v23 || v19)) {
            unsigned long v37 = param3;
            param3 >>= 1;
            char v38 = v37 & 0x1L;
            char v39 = 0;
            char v40 = param3 ? 0: 1;
            char v41 = param3 >= 0x8000000000000000L;
            char v42 = __parity__((unsigned char)param3);
            unsigned long v43 = param3;
            v17 = param3;
            v0 = v43 + 1L;
            v19 = v0 ? 0: 1;
            v20 = v0 >= 0x8000000000000000L;
            v21 = __parity__((unsigned char)v0);
            v22 = (((v17 ^ 0x1L) ^ v0) >>> 4L) & 0x1L;
            v23 = v17 >= 18446744073709551615L;
            v24 = (long)((v0 ^ v17) & ~(v17 ^ 0x1L)) < 0L;
            if(!v19) {
                unsigned long v44 = *(unsigned long*)(v16 - 8L);
                param2 = (long)((long)ptr0 + v0);
                v17 = v44;
                unsigned long v45 = v44 >>> 10;
                char v46 = (v17 >>> 9L) & 0x1L;
                char v47 = v24;
                char v48 = v45 ? 0: 1;
                char v49 = v45 >= 0x8000000000000000L;
                char v50 = __parity__((unsigned char)v45);
                v19 = v45 == param2;
                v20 = (long)v45 > param2;
                v21 = __parity__((unsigned char)param2 - (unsigned char)v45);
                v23 = v45 > (unsigned long)param2;
                v24 = (long)(((unsigned long)(param2 - v45) ^ param2) & (v45 ^ param2)) < 0L;
                v22 = (((unsigned long)(param2 - v45) ^ (v45 ^ param2)) >>> 4L) & 0x1L;
                if((v23 || v19)) {
                    if(!caml_gc_phase && caml_gc_subphase == 11 && ptr0) {
                        unsigned long v51 = 0L;
                        v1 = 0L;
                        do {
                            param4 = (unsigned long*)((v51 + v18) * 8L + v14);
                            param2 = *param4;
                            if(caml_weak_none != param2 && !((unsigned char)param2 & 0x1)) {
                                long v52 = param2;
                                unsigned long v53 = param3;
                                unsigned long v54 = param1;
                                unsigned long* ptr5 = param4;
                                long v55 = /*BAD_CALL!*/ caml_page_table_lookup(param2);
                                param3 = v53;
                                param1 = v54;
                                if(((unsigned char)v55 & 0x1) && !(*(long*)(v52 - 8L) & 0x300L)) {
                                    *ptr5 = caml_weak_none;
                                }
                            }
                            ++v1;
                            v51 = v1;
                        }
                        while((unsigned long)ptr0 <= v1);
                    }
                    if(v18 <= v0) {
                        long* ptr6 = (long*)((char*)ptr0 - 1L);
                        if((long)ptr6 >= 0L) {
                            unsigned long v56 = param3 + (long)ptr0;
                            unsigned long* ptr7 = (unsigned long*)((long)(long*)((long)(long*)(param1 + (long)ptr0) * 8L) + v14);
                            do {
                                unsigned long v57 = *ptr7;
                                unsigned long v58 = v56;
                                --ptr7;
                                --v56;
                                do_set(v16, v58, v57);
                                ptr6 = (long*)((char*)ptr6 - 1L);
                            }
                            while((long)ptr6 >= 0L);
                        }
                    }
                    else if(ptr0) {
                        param1 = 0L;
                        unsigned long v59 = 0L;
                        do {
                            ++v59;
                            do_set(v16, param1 + v0, *(unsigned long*)((param1 + v18) * 8L + v14));
                            param1 = v59;
                        }
                        while((unsigned long)ptr0 > v59);
                    }
                    return 1L;
                }
            }
        }
    }
    /*NO_RETURN*/ caml_invalid_argument("Weak.blit");
}

long caml_weak_check(long param0, unsigned long param1) {
    unsigned long v0 = param1;
    long v1 = (long)(param1 >> 1);
    long v2 = v1;
    param1 = (unsigned long)(v1 + 1L);
    char v3 = param1 ? 0: 1;
    char v4 = (unsigned long)v2 >= 18446744073709551615L;
    char v5 = ((param1 ^ v2) & ~(v2 ^ 0x1L)) < 0L;
    if(!v3) {
        long v6 = *(long*)(param0 - 8L);
        v2 = *(long*)(param0 - 8L);
        unsigned long v7 = (unsigned long)(v6 >>> 10);
        char v8 = (v2 >>> 9L) & 0x1L;
        char v9 = v5;
        char v10 = v7 ? 0: 1;
        char v11 = v7 >= 0x8000000000000000L;
        char v12 = __parity__((unsigned char)v7);
        v3 = v7 == param1;
        v16 = (long)v7 > (long)param1;
        v14 = __parity__((unsigned char)param1 - (unsigned char)v7);
        v4 = v7 > param1;
        v5 = (long)(((param1 - v7) ^ param1) & (v7 ^ param1)) < 0L;
        v15 = (((param1 - v7) ^ (v7 ^ param1)) >>> 4L) & 0x1L;
        if(v4) {
            return *(long*)(param1 * 8L + param0) == caml_weak_none ? 1L: 3L;
        }
    }
    /*NO_RETURN*/ caml_invalid_argument("Weak.get");
}

void caml_weak_create() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long caml_weak_get(long param0, long param1) {
    long v0;
    long v1;
    unsigned long v2;
    long v3;
    unsigned long v4;
    unsigned long v5 = v2;
    long v6 = param1;
    long v7 = param1;
    long v8 = v6 >> 1;
    char v9 = v7 & 0x1L;
    char v10 = 0;
    char v11 = v8 ? 0: 1;
    char v12 = v8 < 0L;
    char v13 = __parity__((unsigned char)v8);
    long* ptr0 = &v5;
    char v14 = &v1 == 168L;
    char v15 = (long)&v3 < 0L;
    char v16 = __parity__((unsigned char)&v1 - 168);
    char v17 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v5 ^ 0xa0L) ^ (long)&v3) >>> 4L) & 0x1L);
    char v18 = (unsigned long)&v5 < 160L;
    char v19 = (long)(long*)((long)(long*)((long)&v5 ^ (long)&v3) & (long)(long*)((long)&v5 ^ 0xa0L)) < 0L;
    unsigned long v20 = caml_local_roots;
    long v21 = v8;
    unsigned long v22 = (unsigned long)(v8 + 1L);
    char v23 = v22 ? 0: 1;
    char v24 = v22 >= 0x8000000000000000L;
    char v25 = __parity__((unsigned char)v22);
    char v26 = (((v21 ^ 0x1L) ^ v22) >>> 4L) & 0x1L;
    char v27 = (unsigned long)v21 >= 18446744073709551615L;
    char v28 = ((v22 ^ v21) & ~(v21 ^ 0x1L)) < 0L;
    long* ptr1 = &v0;
    long v29 = 1L;
    long v30 = 2L;
    long* ptr2 = &v0;
    long* ptr3 = &v4;
    v4 = v20;
    long* ptr4 = &v3;
    long* ptr5 = NULL;
    long* ptr6 = &v4;
    long* ptr7 = &ptr6;
    long v31 = 0L;
    long v32 = 1L;
    long v33 = 2L;
    caml_local_roots = &ptr6;
    long* ptr8 = &ptr5;
    long* ptr9 = &ptr5;
    long* ptr10 = &v31;
    long* ptr11 = &v31;
    if(!v23) {
        long v34 = *(long*)(param0 - 8L);
        v21 = *(long*)(param0 - 8L);
        long v35 = v34 >>> 10;
        char v36 = (v21 >>> 9L) & 0x1L;
        char v37 = v28;
        char v38 = v35 ? 0: 1;
        char v39 = v35 < 0L;
        char v40 = __parity__((unsigned char)v35);
        v23 = v22 == v35;
        v24 = (long)v22 < v35;
        v25 = __parity__((unsigned char)v22 - (unsigned char)v35);
        v27 = v22 < (unsigned long)v35;
        v28 = (long)(((v22 - v35) ^ v22) & (v22 ^ v35)) < 0L;
        v26 = (((v22 - v35) ^ (v22 ^ v35)) >>> 4L) & 0x1L;
        if(v27) {
            param0 = *(long*)(v22 * 8L + param0);
            long result = 1L;
            if(caml_weak_none != param0) {
                if(!caml_gc_phase && !((unsigned char)param0 & 0x1)) {
                    long v41 = /*BAD_CALL!*/ caml_page_table_lookup(param0);
                    if(((unsigned char)v41 & 0x1)) {
                        caml_darken(param0);
                    }
                }
                long* ptr12 = caml_alloc_small(1L, 0L);
                ptr5 = ptr12;
                ptr12[0] = param0;
                result = (long)ptr5;
            }
            caml_local_roots = v20;
            return result;
        }
    }
    /*NO_RETURN*/ caml_invalid_argument("Weak.get");
}

void caml_weak_get_copy() {
    // Decompilation error
}

long caml_weak_set(long param0, unsigned long param1, unsigned long* param2) {
    unsigned long v0 = param1;
    long v1 = (long)(param1 >> 1);
    char v2 = v0 & 0x1L;
    char v3 = 0;
    char v4 = v1 ? 0: 1;
    char v5 = v1 < 0L;
    char v6 = __parity__((unsigned char)v1);
    long v7 = v1;
    param1 = (unsigned long)(v1 + 1L);
    char v8 = param1 ? 0: 1;
    char v9 = param1 >= 0x8000000000000000L;
    char v10 = __parity__((unsigned char)param1);
    char v11 = (((v7 ^ 0x1L) ^ param1) >>> 4L) & 0x1L;
    char v12 = (unsigned long)v7 >= 18446744073709551615L;
    char v13 = ((param1 ^ v7) & ~(v7 ^ 0x1L)) < 0L;
    if(!v8) {
        long v14 = *(long*)(param0 - 8L);
        v7 = *(long*)(param0 - 8L);
        unsigned long v15 = (unsigned long)(v14 >>> 10);
        char v16 = (v7 >>> 9L) & 0x1L;
        char v17 = v13;
        char v18 = v15 ? 0: 1;
        char v19 = v15 >= 0x8000000000000000L;
        char v20 = __parity__((unsigned char)v15);
        v8 = v15 == param1;
        v9 = (long)v15 > (long)param1;
        v10 = __parity__((unsigned char)param1 - (unsigned char)v15);
        v12 = v15 > param1;
        v13 = (long)(((param1 - v15) ^ param1) & (v15 ^ param1)) < 0L;
        v11 = (((param1 - v15) ^ (v15 ^ param1)) >>> 4L) & 0x1L;
        if(v12) {
            if(param2 == 1L || ((unsigned char)param2 & 0x1)) {
                *(unsigned long*)(param1 * 8L + param0) = caml_weak_none;
            }
            else {
                do_set(param0, param1, *param2);
            }
            return 1L;
        }
    }
    /*NO_RETURN*/ caml_invalid_argument("Weak.set");
}

long compare_channel(long param0, long param1) {
    long result = 0L;
    unsigned long v0 = *(unsigned long*)(param1 + 8L);
    char v1 = *(unsigned long*)(param0 + 8L) < v0;
    if(*(long*)(param0 + 8L) != v0) {
        result = v1 ? 0xffffffffL: 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long compare_free_stack() {
    long result;
    void* __ptr = compare_stack;
    if(__ptr != &compare_stack_init) {
        →free(__ptr);
        compare_stack = &compare_stack_init;
        compare_stack_limit = &locale_is_set.3458;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void compare_stack_overflow() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void compare_val() {
}

long cst_to_constr(long param0, unsigned int* param1, long param2, long param3) {
    if(!((unsigned int)param2 ? 0: 1) && (unsigned int)param2 >= 0) {
        unsigned int* ptr0 = param1;
        unsigned int v0 = 0;
        if((unsigned int)param0 != *param1) {
            do {
                ++v0;
                if((unsigned int)param2 <= (int)v0) {
                    return (long)(unsigned int)param3 * 2L + 1L;
                }
                param1 = (unsigned int*)*(int*)(ptr0 + 1);
                ++ptr0;
            }
            while((unsigned int)param1 != (unsigned int)param0);
        }
        return (long)v0 * 2L + 1L;
    }
    return (long)(unsigned int)param3 * 2L + 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long cstringvect(long param0) {
    unsigned long v0 = (unsigned long)(*(long*)(param0 - 8L) >>> 10);
    long result = caml_stat_alloc((size_t)(v0 * 8L + 8L));
    if(v0) {
        unsigned long v1 = 0L;
        do {
            *(long*)(v1 * 8L + result) = *(long*)(v1 * 8L + param0);
            ++v1;
        }
        while(v1 < v0);
    }
    *(long*)(v0 * 8L + result) = 0L;
    return result;
}

long decode_sigset(long* param0, sigset_t* __set) {
    long result;
    long* ptr0 = param0;
    →sigemptyset(__set);
    while(ptr0 != 1L) {
        unsigned int v0 = caml_convert_signal_number((unsigned int)(*ptr0 >>> 1L));
        →sigaddset(__set, (long)(unsigned int)v0);
        ptr0 = *(unsigned long*)(ptr0 + 1);
    }
    return result;
}

long* do_set(long param0, unsigned long param1, unsigned long param2) {
    long* result;
    long v0;
    long v1 = v0;
    if(!((unsigned char)param2 & 0x1)) {
        result = caml_young_end;
        if((unsigned long)result > param2) {
            unsigned long v2 = caml_young_start;
            if(v2 < param2) {
                unsigned long* ptr0 = (unsigned long*)(param1 * 8L + param0);
                param1 = *ptr0;
                *ptr0 = param2;
                if(((unsigned char)param1 & 0x1) || (unsigned long)result <= param1 || v2 >= param1) {
                    unsigned long* ptr1 = gvar_65CD38;
                    if(gvar_65CD40 <= (unsigned long)ptr1) {
                        caml_realloc_ref_table((unsigned long*)&caml_weak_ref_table);
                        ptr1 = gvar_65CD38;
                    }
                    *ptr1 = ptr0;
                    result = (long*)(ptr1 + 1);
                    gvar_65CD38 = (long*)(ptr1 + 1);
                }
                return result;
            }
        }
    }
    *(unsigned long*)(param1 * 8L + param0) = param2;
    return result;
}

void do_write() {
    // Decompilation error
}

void encode_sigset() {
    // Decompilation error
}

long extern_invalid_argument(long param0) {
    long v0;
    long v1 = v0;
    long v2 = param0;
    long v3 = extern_replay_trail();
    free_extern_output();
    long v4 = v2;
    /*NO_RETURN*/ caml_invalid_argument(v4);
}

long extern_out_of_memory() {
    // Decompilation error
}

void extern_rec() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void extern_record_location() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long extern_replay_trail() {
    long result;
    long v0;
    void* __ptr = extern_trail_block;
    long* ptr0 = extern_trail_cur;
    long v1 = v0;
    while(1) {
        long* ptr1 = (long*)((long)__ptr + 8L);
        while(ptr1 < ptr0) {
            long v2 = *ptr1;
            long v3 = *((long*)(v2 & 0xfffffffffffffffcL) - 1);
            *((long*)(v2 & 0xfffffffffffffffcL) - 1) = ((unsigned long)((unsigned int)v2 & 0x3) * 0x100L) | (unsigned long)(unsigned char)v3 | ((unsigned long)((unsigned char)(v3 >>> 8L) & 0xfc) << 8) | ((unsigned long)((v3 >>> 16L) & 0xffffffffffffL) << 16);
            result = *(ptr1 + 1);
            ptr1 += 2;
            *(long*)(v2 & 0xfffffffffffffffcL) = result;
        }
        if(__ptr == &extern_trail_first) {
            break;
        }
        else {
            void* ptr2 = *(void**)__ptr;
            →free(__ptr);
            ptr0 = (long*)((long)ptr2 + 16408L);
            __ptr = ptr2;
        }
    }
    extern_trail_block = &extern_trail_first;
    extern_trail_cur = 6678056L;
    return result;
}

void extern_value() {
    // Decompilation error
}

long fdlist_to_fdset(long* param0, long* param1, unsigned int* param2) {
    long* ptr0 = param0;
    long v0 = 16L;
    long result = 0L;
    long* ptr1 = param1;
    while(v0 != 0L) {
        *ptr1 = 0L;
        ++ptr1;
        --v0;
    }
    while(ptr0 != 1L) {
        result = *ptr0 >>> 1;
        int v1 = ((unsigned int)result < 0 ? (unsigned int)result + 63: (unsigned int)result) >> 6;
        *(long*)((long)(long*)((long)(long*)v1 * 8L) + (long)param1) = (1L << ((unsigned long)((((((unsigned int)result >> 31) >>> 26) + (unsigned int)result) & 0x3f) - (((unsigned int)result >> 31) >>> 26)) & 0x3fL)) | *(long*)((long)(long*)((long)(long*)v1 * 8L) + (long)param1);
        if((unsigned int)result > *param2) {
            *param2 = (unsigned int)result;
        }
        ptr0 = *(unsigned long*)(ptr0 + 1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long* fdset_to_fdlist(long* param0, long param1) {
    long* ptr0;
    long* result = (long*)0x1;
    unsigned long v0 = caml_local_roots;
    caml_local_roots = &v0;
    long v1 = 1L;
    long v2 = 2L;
    long* ptr1 = &ptr0;
    long* ptr2 = &result;
    if(param0 != 1L) {
        ptr0 = param0;
        while(1) {
            long v3 = *param0 >>> 1;
            if(((*(long*)((long)(((unsigned int)v3 < 0 ? (unsigned int)v3 + 63: (unsigned int)v3) >> 6) * 8L + param1) >>> ((unsigned long)((((((unsigned int)v3 >> 31) >>> 26) + (unsigned int)v3) & 0x3f) - (((unsigned int)v3 >> 31) >>> 26)) % 64L)) & 0x1L)) {
                long* ptr3 = caml_alloc_small(2L, 0L);
                ptr3[0] = (long)(unsigned int)v3 * 2L + 1L;
                ptr3[1] = (long)result;
                result = ptr3;
            }
            param0 = *(unsigned long*)(ptr0 + 1);
            if(param0 == 1L) {
                break;
            }
            else {
                ptr0 = param0;
            }
        }
    }
    caml_local_roots = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void free_extern_output() {
    long v0;
    void* ptr0;
    char v1 = extern_userprovided_output ? 0: 1;
    long v2 = v0;
    if(v1) {
        void* __ptr = extern_output_first;
        if(__ptr) {
            do {
                ptr0 = *(void**)__ptr;
                →free(__ptr);
                __ptr = ptr0;
            }
            while(ptr0);
        }
        extern_output_first = 0L;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
long get_sockaddr(long* param0, long param1, int* param2) {
    long v0;
    int* ptr0;
    long result = (unsigned long)*(char*)(param0 - 1);
    if(!*(char*)(param0 - 1)) {
        long v1 = *param0;
        unsigned long v2 = caml_string_length(v1);
        unsigned long v3 = v2;
        *(short*)v0 = 1;
        if(v2 > 107L) {
            v2 = (unsigned long)/*NO_RETURN*/ unix_error(36L, &gvar_43E081, v1);
        }
        →memmove();
        *ptr0 = (unsigned int)v3 + 2;
    }
    else if((unsigned char)result == 1) {
        unsigned long v4 = caml_string_length(*param0);
        *(long*)v0 = 0L;
        *(long*)(v0 + 8L) = 0L;
        if(v4 == 16L) {
            *(long*)(v0 + 16L) = 0L;
            *(int*)(v0 + 24L) = 0;
            *(short*)v0 = 10;
            unsigned long* ptr1 = *param0;
            *(unsigned long*)(v0 + 8L) = *ptr1;
            *(long*)(v0 + 16L) = *(long*)(ptr1 + 1);
            result = (unsigned long)__ror__((unsigned short)(*(param0 + 1) >>> 1L), 8) | ((unsigned long)(((*(param0 + 1) >> 1) >>> 16L) & 0xffffffffffffL) << 16);
            *(short*)(v0 + 2L) = __ror__((unsigned short)(*(param0 + 1) >>> 1L), 8);
            *ptr0 = 28;
        }
        else {
            *(short*)v0 = 2;
            *(int*)(v0 + 4L) = **param0;
            result = (unsigned long)__ror__((unsigned short)(*(param0 + 1) >>> 1L), 8) | ((unsigned long)(((*(param0 + 1) >> 1) >>> 16L) & 0xffffffffffffL) << 16);
            *(short*)(v0 + 2L) = __ror__((unsigned short)(*(param0 + 1) >>> 1L), 8);
            *ptr0 = 16;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long grow_extern_output(unsigned long param0) {
    long result;
    void* ptr0;
    long* ptr1;
    char v0;
    char v1;
    long v2;
    long v3 = v2;
    char v4 = extern_userprovided_output ? 0: 1;
    char v5 = extern_userprovided_output >= 0x8000000000000000L;
    char v6 = __parity__((unsigned char)extern_userprovided_output);
    char v7 = extern_userprovided_output < 0L;
    char v8 = 0;
    char v9 = 0;
    if(v4) {
        unsigned long v10 = extern_output_block;
        unsigned long v11 = extern_ptr;
        char v12 = param0 == 4050L;
        char v13 = (long)param0 < 4050L;
        char v14 = __parity__((unsigned char)param0 - 210);
        char v15 = param0 < 4050L;
        char v16 = (((param0 - 4050L) ^ param0) & (param0 ^ 0xfd2L)) < 0L;
        v9 = (((param0 - 4050L) ^ (param0 ^ 0xfd2L)) >>> 4L) & 0x1L;
        v2 = 8100L;
        *(unsigned long*)(v10 + 8L) = v11;
        long v17 = 8120L;
        if((v12 || v13 != v16)) {
            →malloc();
            v4 = ptr1 ? 0: 1;
            v5 = (long)ptr1 < 0L;
            v6 = __parity__(v1);
        }
        else {
            unsigned long v18 = param0 + 8120L;
            v2 = param0 + 8100L;
            →malloc();
            v4 = ptr1 ? 0: 1;
            v5 = (long)ptr1 < 0L;
            v6 = __parity__(v0);
        }
        v8 = 0;
        v7 = 0;
        if(v4) {
            long* ptr2 = ptr1;
            long v19 = /*NO_RETURN*/ extern_out_of_memory();
            goto loc_4338BC;
        }
        else {
            *extern_output_block = ptr1;
            extern_output_block = ptr1;
            *ptr1 = 0L;
            result = (long)((long*)((long)ptr1 + v2) + 2);
            extern_ptr = ptr1 + 2;
            extern_limit = result;
            return result;
        }
    }
    else {
    loc_4338BC:
        long v20 = extern_replay_trail();
        long v21 = "Marshal.to_buffer: buffer overflow";
        long* ptr3 = &ptr0;
        result = /*NO_RETURN*/ caml_failwith("Marshal.to_buffer: buffer overflow");
    }
}

void handle_signal() {
    // Decompilation error
}

void hash_aux() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void init_extern_output() {
}

void input_val_from_block() {
    // Decompilation error
}

unsigned int int32_cmp(long param0, long param1) {
    int v0 = *(int*)(param1 + 8L);
    unsigned int v1 = *(unsigned int*)(param0 + 8L);
    return (*(int*)(param0 + 8L) == v0 || (int)v1 < v0 ? 0: 1) - ((int)v1 >= v0 ? 0: 1);
}

long int32_deserialize(int* param0) {
    long v0 = caml_deserialize_sint_4();
    *param0 = (unsigned int)v0;
    return 4L;
}

long int32_hash(long param0) {
    return (long)*(int*)(param0 + 8L);
}

char* int32_serialize(long param0, long* param1, long* param2) {
    long* ptr0;
    long* ptr1;
    char* result = caml_serialize_int_4((long)*(int*)(param0 + 8L));
    *ptr0 = 4L;
    *ptr1 = 4L;
    return result;
}

unsigned int int64_cmp(long param0, long param1) {
    unsigned long v0 = *(unsigned long*)(param1 + 8L);
    unsigned long v1 = *(unsigned long*)(param0 + 8L);
    return ((long)v1 <= (long)v0 ? 0: 1) - ((long)v1 >= (long)v0 ? 0: 1);
}

long int64_deserialize(long* param0) {
    long v0 = caml_deserialize_sint_8();
    *param0 = v0;
    return 8L;
}

long int64_hash(long param0) {
    return *(long*)(param0 + 8L);
}

long int64_serialize(long param0, long* param1, long* param2) {
    long* ptr0;
    long* ptr1;
    long result = caml_serialize_int_8(*(long*)(param0 + 8L));
    *ptr0 = 8L;
    *ptr1 = 8L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long intern_add_to_heap(unsigned long param0) {
    long result = (long)param0;
    param0 = intern_extra_block;
    if(param0) {
        unsigned long* ptr0 = intern_dest;
        unsigned long v0 = (unsigned long)(((result * 8L + 0xfffL) & 0xfffffffffffff000L) + param0);
        if((unsigned long)ptr0 < v0) {
            caml_make_free_blocks(ptr0, (unsigned long)((long)(long*)(v0 - (long)ptr0) >> 3), 0L);
            ptr0 = intern_dest;
            param0 = intern_extra_block;
        }
        caml_allocated_words = (long*)((long)(long*)((long)(long*)((long)ptr0 - param0) >>> 3) + caml_allocated_words);
        result = caml_add_to_heap(param0);
    }
    return result;
}

void intern_alloc() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long intern_cleanup() {
    long result;
    if(intern_input_malloced) {
        →free(intern_input);
    }
    void* __ptr = intern_obj_table;
    if(__ptr) {
        →free(__ptr);
    }
    long v0 = intern_extra_block;
    if(v0) {
        result = caml_free_for_heap(v0);
    }
    else {
        result = intern_block;
        if(result) {
            *(unsigned long*)(result - 8L) = intern_header;
        }
    }
    return result;
}

void intern_rec() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long invert_root(long param0, long* param1) {
    return invert_pointer_at(param1);
}

void main() {
    // Decompilation error
}

unsigned int nativeint_cmp(long param0, long param1) {
    unsigned long v0 = *(unsigned long*)(param1 + 8L);
    unsigned long v1 = *(unsigned long*)(param0 + 8L);
    return ((long)v1 <= (long)v0 ? 0: 1) - ((long)v1 >= (long)v0 ? 0: 1);
}

long nativeint_deserialize(long* param0) {
    long v0 = /*BAD_CALL!*/ caml_deserialize_uint_1();
    if((unsigned int)v0 == 1) {
        long v1 = caml_deserialize_sint_4();
        *param0 = (long)(unsigned int)v1;
    }
    else if((unsigned int)v0 != 2) {
        /*NO_RETURN*/ caml_deserialize_error("input_value: ill-formed native integer");
    }
    else {
        long v2 = caml_deserialize_sint_8();
        *param0 = v2;
    }
    return 8L;
}

long nativeint_hash(long param0) {
    return *(long*)(param0 + 8L);
}

long nativeint_serialize(long param0, long* param1, long* param2) {
    long result;
    long* ptr0;
    long* ptr1;
    long v0 = *(long*)(param0 + 8L);
    if((unsigned long)(v0 + 0x80000000L) > 0xffffffffL) {
        caml_serialize_int_1(2L);
        result = caml_serialize_int_8(v0);
    }
    else {
        caml_serialize_int_1(1L);
        result = (long)caml_serialize_int_4((long)(unsigned int)v0);
    }
    *ptr0 = 4L;
    *ptr1 = 8L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long parse_format(long param0, long param1, long param2, long param3, char* param4) {
    long v0;
    void* ptr0;
    void* ptr1;
    int v1;
    int v2;
    long v3;
    char v4;
    long v5;
    int v6;
    char* ptr2;
    long v7;
    long v8;
    long v9;
    char* ptr3 = ptr2;
    char* ptr4 = param4;
    long v10 = v3;
    long v11 = v7;
    long result = param3;
    long v12 = v8;
    long v13 = param2;
    long v14 = param1;
    long v15 = v9;
    long v16 = param0;
    long v17 = &v15;
    char v18 = &ptr0 == 72L;
    char v19 = (long)&v4 < 0L;
    char v20 = __parity__((unsigned char)&ptr0 - 72);
    char v21 = (long*)((long)(long*)((long)(long*)((long)(long*)(&v15 ^ 0x18L) ^ (long)&v4) >>> 4L) & 0x1L);
    char v22 = (unsigned long)&v15 < 24L;
    char v23 = (long)(long*)((long)(long*)(&v15 ^ (long)&v4) & (long)(long*)(&v15 ^ 0x18L)) < 0L;
    unsigned long v24 = caml_string_length(param0);
    long v25 = v14;
    unsigned long v26 = v24;
    →strlen();
    unsigned long v27 = v26;
    long v28 = v5;
    unsigned long v29 = (unsigned long)(v5 + v27 + 1L);
    char v30 = v29 == 31L;
    char v31 = (long)v29 < 31L;
    char v32 = __parity__((unsigned char)v29 - 31);
    char v33 = v29 < 31L;
    char v34 = (((v29 - 31L) ^ v29) & (v29 ^ 0x1fL)) < 0L;
    char v35 = (((v29 - 31L) ^ (v29 ^ 0x1fL)) >>> 4L) & 0x1L;
    if((v33 || v30)) {
        →memmove();
        long v36 = v13 + v26 - 1L;
        unsigned char v37 = *(unsigned char*)(v36 - 1L);
        char v38 = *(char*)v36;
        if(v37 == 110 || v37 == 108 || v37 == 76) {
            --v36;
        }
        v4 = v38;
        char* ptr5 = (char*)(v36 + v28);
        →memmove();
        *(ptr5 + 1L) = 0;
        *ptr5 = v38;
        char v39 = *(char*)v16;
        if(!*(char*)v16) {
            *ptr4 = v38;
            return result;
        }
        while((unsigned char)(v39 - 48) > 9) {
            ++v16;
            v39 = *(char*)v16;
            if(!*(char*)v16) {
                *ptr4 = v38;
                return result;
            }
        }
        →strtol((char*)v16, NULL, 10L);
        *ptr4 = v38;
        if(v1 != 26 && v6 + 5 >= 31) {
            return caml_stat_alloc((long)(v2 + 6));
        }
        return result;
    }
    long v40 = "format_int: format too long";
    long* ptr6 = &ptr1;
    v0 = /*NO_RETURN*/ caml_invalid_argument("format_int: format too long");
}

unsigned long parse_intnat(long param0, unsigned int param1, long param2, long param3) {
    unsigned int v0;
    unsigned int v1;
    long v2;
    long v3;
    long v4;
    long v5;
    long v6 = param0;
    long v7 = v3;
    unsigned int v8 = 1;
    long v9 = v4;
    unsigned int v10 = param1;
    long v11 = v5;
    long v12 = param0;
    char v13 = *(char*)param0;
    if(*(char*)param0 == 45) {
        v6 = param0 + 1L;
        v13 = *(char*)(param0 + 1L);
        v8 = 0xffffffff;
    }
    unsigned long v14 = 0x1999999999999999L;
    long v15 = 10L;
    unsigned int v16 = 10;
    if(v13 != 48) {
        goto loc_42FCB4;
    }
    else {
        param3 = (unsigned long)((unsigned int)*(char*)(v6 + 1L) - 66);
    }
    if((unsigned char)param3 > 54) {
        goto loc_42FCDE;
    loc_42FCB4:
        v2 = (unsigned long)(int)v13;
        if((unsigned char)(v13 + 208) > 9) {
            if((unsigned char)(v13 + 191) <= 5) {
                v1 = (unsigned int)((unsigned int)v2 - 55);
                goto loc_42FD05;
            }
            else if((unsigned char)(v13 - 97) > 5) {
                /*NO_RETURN*/ caml_failwith("int_of_string");
            }
            else {
                v1 = (unsigned int)((unsigned int)v2 - 87);
                goto loc_42FD05;
            loc_42FCDE:
                v15 = 10L;
                v16 = 10;
                v14 = 0x1999999999999999L;
                v2 = 48L;
            }
        }
    }
    else {
        long v17 = 1L << (param3 & 0x3fL);
        if((v17 & 0x40000000400000L)) {
            v6 += 2L;
            v14 = 0xfffffffffffffffL;
            v15 = 16L;
            v13 = *(char*)v6;
            v16 = 16;
            goto loc_42FCB4;
        }
        else if((v17 & 0x200000002000L)) {
            v6 += 2L;
            v14 = 0x1fffffffffffffffL;
            v15 = 8L;
            v13 = *(char*)v6;
            v16 = 8;
            goto loc_42FCB4;
        }
        else if(!(v17 & 0x100000001L)) {
            goto loc_42FCDE;
        }
        else {
            v6 += 2L;
            v14 = 0x7fffffffffffffffL;
            v15 = 2L;
            v13 = *(char*)v6;
            v16 = 2;
            goto loc_42FCB4;
        }
    }
    v1 = (unsigned int)((unsigned int)v2 - 48);
loc_42FD05:
    if(v1 < 0x80000000 && (int)v1 < (int)v16) {
        ++v6;
        unsigned long v18 = (unsigned long)v1;
        while(1) {
            char v19 = *(char*)v6;
            if(*(char*)v6 != 95) {
                long v20 = (unsigned long)(int)v19;
                if((unsigned char)(v19 + 208) <= 9) {
                    v0 = (unsigned int)((unsigned int)v20 - 48);
                }
                else if((unsigned char)(v19 + 191) <= 5) {
                    v0 = (unsigned int)((unsigned int)v20 - 55);
                }
                else if((unsigned char)(v19 - 97) > 5) {
                    goto loc_42FD7A;
                }
                else {
                    v0 = (unsigned int)((unsigned int)v20 - 87);
                }
                if((v0 >= 0x80000000 || (int)v0 >= (int)v16)) {
                loc_42FD7A:
                    unsigned long v21 = caml_string_length(v12);
                    v12 = (long)(v21 + v12);
                    if(v12 != v6) {
                        break;
                    }
                    else {
                        if(v16 != 10) {
                            if(v10 <= 63 && (unsigned long)(1L << ((unsigned long)v10 & 0x3fL)) <= v18) {
                                break;
                            }
                        }
                        else if((unsigned long)(1L << ((unsigned long)(v10 - 1) & 0x3fL)) < v18) {
                            break;
                        }
                        return v8 == -1 ? (unsigned long)(0L - v18): v18;
                    }
                }
                else if(v18 > v14) {
                    break;
                }
                else {
                    long v22 = v18 * v15;
                    long v23 = (long)v0;
                    v18 = (unsigned long)(v23 + v22);
                    if(__carry__(v23, v22)) {
                        break;
                    }
                    else {
                        goto loc_42FD44;
                    }
                }
            }
            else {
            loc_42FD44:
                ++v6;
            }
        }
    }
    /*NO_RETURN*/ caml_failwith("int_of_string");
}

long scanmult(long param0, long* param1) {
    int v0;
    →__isoc99_sscanf();
    →__isoc99_sscanf();
    long result = (long)v0;
    *param1 = (long)v0;
    return result;
}

void segv_handler() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void stat_aux() {
}

long sub_40A27E() {
    return gvar_647458();
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40C498() {
    char v0;
    unsigned long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    char v6;
    long v7;
    long v8;
    long v9;
    long v10;
    long v11;
    long v12 = v7;
    long* ptr0 = &v12;
    long v13 = v4;
    long v14 = *(long*)(v13 + 24L);
    long v15 = v10;
    long v16 = &unix_getservbyname;
    long v17 = caml_c_call();
    long v18 = v17;
    long* ptr1 = (long*)(v17 + 16L);
    char v19 = ptr1 ? 0: 1;
    char v20 = (long)ptr1 < 0L;
    char v21 = __parity__((unsigned char)ptr1);
    char v22 = (long*)((long)(long*)((long)(long*)((v18 ^ 0x10L) ^ (long)ptr1) >>> 4L) & 0x1L);
    char v23 = (unsigned long)v18 >= 18446744073709551600L;
    char v24 = (long)(long*)((long)(long*)((long)ptr1 ^ v18) & ~(v18 ^ 0x10L)) < 0L;
    long v25 = *ptr1;
    while(1) {
        unsigned long v26 = v1;
        v1 -= 48L;
        char v27 = v1 ? 0: 1;
        char v28 = v1 >= 0x8000000000000000L;
        char v29 = __parity__((unsigned char)v1);
        char v30 = (((v26 ^ 0x30L) ^ v1) >>> 4L) & 0x1L;
        char v31 = v26 < 48L;
        char v32 = (long)((v1 ^ v26) & (v26 ^ 0x30L)) < 0L;
        long v33 = &caml_young_limit;
        char v34 = caml_young_limit == v1;
        char v35 = (long)caml_young_limit > (long)v1;
        char v36 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
        char v37 = caml_young_limit > v1;
        char v38 = (long)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0L;
        char v39 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4L) & 0x1L;
        if(!v37) {
            break;
        }
        else {
            long v40 = caml_call_gc(v25, v15, v8, v2, v9, v3);
        }
    }
    long* ptr2 = (long*)(v1 + 8L);
    *(ptr2 - 1) = 0x800L;
    long v41 = v5;
    *ptr2 = v5;
    *(ptr2 + 1) = v25;
    unsigned long* ptr3 = (unsigned long*)(ptr2 + 3);
    *(long*)(ptr3 - 1) = 0x800L;
    *ptr3 = ptr2;
    *(long*)(ptr3 + 1) = 1L;
    long v42 = v12;
    long* ptr4 = &v4;
    char v43 = &v11 ? 0: 1;
    char v44 = (long)&v11 < 0L;
    char v45 = __parity__((unsigned char)&v0 + 32);
    char v46 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v4 ^ 0x18L) ^ (long)&v11) >>> 4L) & 0x1L);
    char v47 = (unsigned long)&v4 >= 18446744073709551592L;
    char v48 = (long)(long*)((long)(long*)((long)&v4 ^ (long)&v11) & (long*)~(long)(long*)((long)&v4 ^ 0x18L)) < 0L;
    long v49 = v11;
    long* ptr5 = &v6;
    jump v49;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40C514(long param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7, long param8, long param9) {
    char v0;
    long v1;
    long v2;
    long v3;
    unsigned long v4;
    long v5;
    char v6;
    long v7;
    long v8;
    long v9 = v1;
    long* ptr0 = &v9;
    long v10 = *(long*)(v3 + 24L);
    long v11 = &caml_int_of_string;
    long v12 = caml_c_call();
    long v13 = v12;
    while(1) {
        unsigned long v14 = v4;
        v4 -= 48L;
        char v15 = v4 ? 0: 1;
        char v16 = v4 >= 0x8000000000000000L;
        char v17 = __parity__((unsigned char)v4);
        char v18 = (((v14 ^ 0x30L) ^ v4) >>> 4L) & 0x1L;
        char v19 = v14 < 48L;
        char v20 = (long)((v4 ^ v14) & (v14 ^ 0x30L)) < 0L;
        long v21 = &caml_young_limit;
        char v22 = caml_young_limit == v4;
        char v23 = (long)caml_young_limit > (long)v4;
        char v24 = __parity__((unsigned char)v4 - (unsigned char)caml_young_limit);
        char v25 = caml_young_limit > v4;
        char v26 = (long)(((v4 - caml_young_limit) ^ v4) & (caml_young_limit ^ v4)) < 0L;
        char v27 = (((v4 - caml_young_limit) ^ (caml_young_limit ^ v4)) >>> 4L) & 0x1L;
        if(!v25) {
            break;
        }
        else {
            long v28 = caml_call_gc(v13, param1, v8, v5, v7, v2);
        }
    }
    long* ptr1 = (long*)(v4 + 8L);
    *(ptr1 - 1) = 0x800L;
    long v29 = param8;
    *ptr1 = param8;
    *(ptr1 + 1) = v13;
    unsigned long* ptr2 = (unsigned long*)(ptr1 + 3);
    *(long*)(ptr2 - 1) = 0x800L;
    *ptr2 = ptr1;
    *(long*)(ptr2 + 1) = 1L;
    long v30 = v9;
    long* ptr3 = &param6;
    char v31 = &param9 ? 0: 1;
    char v32 = (long)&param9 < 0L;
    char v33 = __parity__((unsigned char)&v0 + 32);
    char v34 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&param6 ^ 0x18L) ^ (long)&param9) >>> 4L) & 0x1L);
    char v35 = (unsigned long)&param6 >= 18446744073709551592L;
    char v36 = (long)(long*)((long)(long*)((long)&param9 ^ (long)&param6) & (long*)~(long)(long*)((long)&param6 ^ 0x18L)) < 0L;
    long v37 = param9;
    long* ptr4 = &v6;
    jump v37;
}

long sub_40D5C0(long param0, long* param1, long param2, long param3, long param4, long param5, long param6, long param7, long param8, long param9) {
    char v0;
    long v1;
    char v2;
    long v3 = v1;
    long* ptr0 = &v3;
    long v4 = *param1;
    long* ptr1 = param1;
    long v5 = v4();
    long v6 = v3;
    long* ptr2 = &param6;
    char v7 = &param9 ? 0: 1;
    char v8 = (long)&param9 < 0L;
    char v9 = __parity__((unsigned char)&v0 + 32);
    char v10 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&param6 ^ 0x18L) ^ (long)&param9) >>> 4L) & 0x1L);
    char v11 = (unsigned long)&param6 >= 18446744073709551592L;
    char v12 = (long)(long*)((long)(long*)((long)&param9 ^ (long)&param6) & (long*)~(long)(long*)((long)&param6 ^ 0x18L)) < 0L;
    long v13 = param9;
    long* ptr3 = &v2;
    jump v13;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40D81C() {
    char v0;
    long v1;
    long v2;
    char v3;
    long v4;
    char v5;
    long v6 = v1;
    long* ptr0 = &v6;
    long v7 = v2;
    long v8 = &unix_set_close_on_exec;
    long v9 = caml_c_call();
    long v10 = 3L;
    long v11 = v6;
    long* ptr1 = &v3;
    char v12 = &v4 ? 0: 1;
    char v13 = (long)&v4 < 0L;
    char v14 = __parity__((unsigned char)&v0 + 16);
    char v15 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v3 ^ 0x8L) ^ (long)&v4) >>> 4L) & 0x1L);
    char v16 = (unsigned long)&v3 >= 18446744073709551608L;
    char v17 = (long)(long*)((long)(long*)((long)&v4 ^ (long)&v3) & (long*)~(long)(long*)((long)&v3 ^ 0x8L)) < 0L;
    long v18 = v4;
    long* ptr2 = &v5;
    jump v18;
}

void sub_40E010() {
    // Decompilation error
}

void sub_40E08C() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_40E1E8() {
}

void sub_40E2C8() {
    // Decompilation error
}

void sub_40E360() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40E4BC() {
    char v0;
    long v1;
    long v2;
    long v3;
    char v4;
    long v5;
    char v6;
    long v7 = v1;
    long* ptr0 = &v7;
    long v8 = v2;
    long v9 = v3;
    long v10 = &unix_getnameinfo;
    long v11 = caml_c_call();
    long v12 = v7;
    long* ptr1 = &v4;
    char v13 = &v5 ? 0: 1;
    char v14 = (long)&v5 < 0L;
    char v15 = __parity__((unsigned char)&v0 + 32);
    char v16 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v4 ^ 0x18L) ^ (long)&v5) >>> 4L) & 0x1L);
    char v17 = (unsigned long)&v4 >= 18446744073709551592L;
    char v18 = (long)(long*)((long)(long*)((long)&v5 ^ (long)&v4) & (long*)~(long)(long*)((long)&v4 ^ 0x18L)) < 0L;
    long v19 = v5;
    long* ptr2 = &v6;
    jump v19;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40E53C(long param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    char v0;
    long v1;
    unsigned long v2;
    char v3;
    long v4 = v1;
    long* ptr0 = &v4;
    while(1) {
        unsigned long v5 = v2;
        v2 -= 32L;
        char v6 = v2 ? 0: 1;
        char v7 = v2 >= 0x8000000000000000L;
        char v8 = __parity__((unsigned char)v2);
        char v9 = (((v5 ^ 0x20L) ^ v2) >>> 4L) & 0x1L;
        char v10 = v5 < 32L;
        char v11 = (long)((v2 ^ v5) & (v5 ^ 0x20L)) < 0L;
        long v12 = &caml_young_limit;
        char v13 = caml_young_limit == v2;
        char v14 = (long)caml_young_limit > (long)v2;
        char v15 = __parity__((unsigned char)v2 - (unsigned char)caml_young_limit);
        char v16 = caml_young_limit > v2;
        char v17 = (long)(((v2 - caml_young_limit) ^ v2) & (caml_young_limit ^ v2)) < 0L;
        char v18 = (((v2 - caml_young_limit) ^ (caml_young_limit ^ v2)) >>> 4L) & 0x1L;
        if(!v16) {
            break;
        }
        else {
            long v19 = caml_call_gc(param0, param1, param2, param3, param4, param5);
        }
    }
    long* ptr1 = (long*)(v2 + 8L);
    *(ptr1 - 1) = 0xc00L;
    long v20 = "/bin/sh";
    *ptr1 = "/bin/sh";
    long v21 = &camlUnix__189;
    *(ptr1 + 1) = &camlUnix__189;
    long v22 = param6;
    *(ptr1 + 2) = param6;
    long v23 = "/bin/sh";
    long v24 = &unix_execv;
    long v25 = caml_c_call();
    long v26 = v4;
    long* ptr2 = &param6;
    char v27 = &param7 ? 0: 1;
    char v28 = (long)&param7 < 0L;
    char v29 = __parity__((unsigned char)&v0 + 16);
    char v30 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&param6 ^ 0x8L) ^ (long)&param7) >>> 4L) & 0x1L);
    char v31 = (unsigned long)&param6 >= 18446744073709551608L;
    char v32 = (long)(long*)((long)(long*)((long)&param6 ^ (long)&param7) & (long*)~(long)(long*)((long)&param6 ^ 0x8L)) < 0L;
    long v33 = param7;
    long* ptr3 = &v3;
    jump v33;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40E620() {
    char v0;
    long v1;
    long v2;
    char v3;
    long v4;
    char v5;
    long v6 = v1;
    long* ptr0 = &v6;
    long v7 = v2;
    long v8 = &unix_close;
    long v9 = caml_c_call();
    long v10 = v6;
    long* ptr1 = &v3;
    char v11 = &v4 ? 0: 1;
    char v12 = (long)&v4 < 0L;
    char v13 = __parity__((unsigned char)&v0 + 16);
    char v14 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v3 ^ 0x8L) ^ (long)&v4) >>> 4L) & 0x1L);
    char v15 = (unsigned long)&v3 >= 18446744073709551608L;
    char v16 = (long)(long*)((long)(long*)((long)&v4 ^ (long)&v3) & (long*)~(long)(long*)((long)&v3 ^ 0x8L)) < 0L;
    long v17 = v4;
    long* ptr2 = &v5;
    jump v17;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_40E774() {
}

void sub_40E808() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40E958(long param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7, long param8, long param9, long param10, long param11, long param12, long param13) {
    char v0;
    unsigned long v1;
    char v2;
    long v3;
    long v4 = v3;
    long* ptr0 = &v4;
    while(1) {
        unsigned long v5 = v1;
        v1 -= 32L;
        char v6 = v1 ? 0: 1;
        char v7 = v1 >= 0x8000000000000000L;
        char v8 = __parity__((unsigned char)v1);
        char v9 = (((v5 ^ 0x20L) ^ v1) >>> 4L) & 0x1L;
        char v10 = v5 < 32L;
        char v11 = (long)((v1 ^ v5) & (v5 ^ 0x20L)) < 0L;
        long v12 = &caml_young_limit;
        char v13 = caml_young_limit == v1;
        char v14 = (long)caml_young_limit > (long)v1;
        char v15 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
        char v16 = caml_young_limit > v1;
        char v17 = (long)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0L;
        char v18 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4L) & 0x1L;
        if(!v16) {
            break;
        }
        else {
            long v19 = caml_call_gc(param0, param1, param2, param3, param4, param5);
        }
    }
    long* ptr1 = (long*)(v1 + 8L);
    *(ptr1 - 1) = 0xc00L;
    long v20 = "/bin/sh";
    *ptr1 = "/bin/sh";
    long v21 = &camlUnix__185;
    *(ptr1 + 1) = &camlUnix__185;
    long v22 = param7;
    *(ptr1 + 2) = param7;
    long v23 = "/bin/sh";
    long v24 = &unix_execv;
    long v25 = caml_c_call();
    long v26 = v4;
    long* ptr2 = &param6;
    char v27 = &param13 ? 0: 1;
    char v28 = (long)&param13 < 0L;
    char v29 = __parity__((unsigned char)&v0 + 64);
    char v30 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&param6 ^ 0x38L) ^ (long)&param13) >>> 4L) & 0x1L);
    char v31 = (unsigned long)&param6 >= 18446744073709551560L;
    char v32 = (long)(long*)((long)(long*)((long)&param13 ^ (long)&param6) & (long*)~(long)(long*)((long)&param6 ^ 0x38L)) < 0L;
    long v33 = param13;
    long* ptr3 = &v2;
    jump v33;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40EDC8(long param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7, long param8, long param9, long param10, long param11, long param12, long param13, long param14, long param15) {
    char v0;
    unsigned long v1;
    char v2;
    long v3;
    long v4 = v3;
    long* ptr0 = &v4;
    while(1) {
        unsigned long v5 = v1;
        v1 -= 32L;
        char v6 = v1 ? 0: 1;
        char v7 = v1 >= 0x8000000000000000L;
        char v8 = __parity__((unsigned char)v1);
        char v9 = (((v5 ^ 0x20L) ^ v1) >>> 4L) & 0x1L;
        char v10 = v5 < 32L;
        char v11 = (long)((v1 ^ v5) & (v5 ^ 0x20L)) < 0L;
        long v12 = &caml_young_limit;
        char v13 = caml_young_limit == v1;
        char v14 = (long)caml_young_limit > (long)v1;
        char v15 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
        char v16 = caml_young_limit > v1;
        char v17 = (long)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0L;
        char v18 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4L) & 0x1L;
        if(!v16) {
            break;
        }
        else {
            long v19 = caml_call_gc(param0, param1, param2, param3, param4, param5);
        }
    }
    long* ptr1 = (long*)(v1 + 8L);
    *(ptr1 - 1) = 0xc00L;
    long v20 = "/bin/sh";
    *ptr1 = "/bin/sh";
    long v21 = &camlUnix__181;
    *(ptr1 + 1) = &camlUnix__181;
    long v22 = param10;
    *(ptr1 + 2) = param10;
    long v23 = "/bin/sh";
    long v24 = param11;
    long v25 = &unix_execve;
    long v26 = caml_c_call();
    long v27 = v4;
    long* ptr2 = &param6;
    char v28 = &param15 ? 0: 1;
    char v29 = (long)&param15 < 0L;
    char v30 = __parity__((unsigned char)&v0 + 80);
    char v31 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&param6 ^ 0x48L) ^ (long)&param15) >>> 4L) & 0x1L);
    char v32 = (unsigned long)&param6 >= 18446744073709551544L;
    char v33 = (long)(long*)((long)(long*)((long)&param15 ^ (long)&param6) & (long*)~(long)(long*)((long)&param6 ^ 0x48L)) < 0L;
    long v34 = param15;
    long* ptr3 = &v2;
    jump v34;
}

void sub_40F098() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40F12C() {
    char v0;
    long v1;
    long v2;
    char v3;
    long v4;
    char v5;
    long v6 = v1;
    long* ptr0 = &v6;
    long v7 = 1L;
    long v8 = v2;
    long v9 = &unix_waitpid;
    long v10 = caml_c_call();
    long v11 = v6;
    long* ptr1 = &v3;
    char v12 = &v4 ? 0: 1;
    char v13 = (long)&v4 < 0L;
    char v14 = __parity__((unsigned char)&v0 + 16);
    char v15 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v3 ^ 0x8L) ^ (long)&v4) >>> 4L) & 0x1L);
    char v16 = (unsigned long)&v3 >= 18446744073709551608L;
    char v17 = (long)(long*)((long)(long*)((long)&v4 ^ (long)&v3) & (long*)~(long)(long*)((long)&v3 ^ 0x8L)) < 0L;
    long v18 = v4;
    long* ptr2 = &v5;
    jump v18;
}

long sub_40F2B0() {
    void* ptr0;
    long v0;
    long v1;
    char v2;
    long v3;
    long v4;
    char v5;
    long v6 = v0;
    long* ptr1 = &v6;
    long v7 = v1;
    long v8 = camlPervasives__close_out_233();
    long v9 = v6;
    long* ptr2 = &ptr0;
    char v10 = &v2 ? 0: 1;
    char v11 = (long)&v2 < 0L;
    char v12 = __parity__((unsigned char)&ptr0 + 8);
    char v13 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v2) >>> 4L) & 0x1L);
    char v14 = (unsigned long)&ptr0 >= 18446744073709551608L;
    char v15 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v2) & (long*)~(long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v16 = v3;
    long v17 = camlUnix__waitpid_non_intr_1027();
    long v18 = v17;
    long* ptr3 = (long*)(v17 + 8L);
    char v19 = ptr3 ? 0: 1;
    char v20 = (long)ptr3 < 0L;
    char v21 = __parity__((unsigned char)ptr3);
    char v22 = (long*)((long)(long*)((long)(long*)((v18 ^ 0x8L) ^ (long)ptr3) >>> 4L) & 0x1L);
    char v23 = (unsigned long)v18 >= 18446744073709551608L;
    char v24 = (long)(long*)((long)(long*)((long)ptr3 ^ v18) & ~(v18 ^ 0x8L)) < 0L;
    long v25 = *ptr3;
    long* ptr4 = &v2;
    char v26 = &v4 ? 0: 1;
    char v27 = (long)&v4 < 0L;
    char v28 = __parity__((unsigned char)&ptr0 + 32);
    char v29 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v2 ^ 0x18L) ^ (long)&v4) >>> 4L) & 0x1L);
    char v30 = (unsigned long)&v2 >= 18446744073709551592L;
    char v31 = (long)(long*)((long)(long*)((long)&v4 ^ (long)&v2) & (long*)~(long)(long*)((long)&v2 ^ 0x18L)) < 0L;
    long v32 = v4;
    long* ptr5 = &v5;
    jump v32;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40F370(long param0, long param1, long param2, long param3, long param4, long param5) {
    void* ptr0;
    long v0;
    long v1;
    char v2;
    long v3;
    long v4;
    char v5;
    long v6 = v0;
    long* ptr1 = &v6;
    long v7 = v1;
    long v8 = camlPervasives__close_out_233();
    long v9 = v6;
    long* ptr2 = &ptr0;
    char v10 = &v2 ? 0: 1;
    char v11 = (long)&v2 < 0L;
    char v12 = __parity__((unsigned char)&ptr0 + 8);
    char v13 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v2) >>> 4L) & 0x1L);
    char v14 = (unsigned long)&ptr0 >= 18446744073709551608L;
    char v15 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v2) & (long*)~(long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v16 = v3;
    long v17 = &caml_ml_close_channel;
    long v18 = caml_c_call();
    long v19 = v4;
    long v20 = camlUnix__waitpid_non_intr_1027();
    long v21 = v20;
    long* ptr3 = (long*)(v20 + 8L);
    char v22 = ptr3 ? 0: 1;
    char v23 = (long)ptr3 < 0L;
    char v24 = __parity__((unsigned char)ptr3);
    char v25 = (long*)((long)(long*)((long)(long*)((v21 ^ 0x8L) ^ (long)ptr3) >>> 4L) & 0x1L);
    char v26 = (unsigned long)v21 >= 18446744073709551608L;
    char v27 = (long)(long*)((long)(long*)((long)ptr3 ^ v21) & ~(v21 ^ 0x8L)) < 0L;
    long v28 = *ptr3;
    long* ptr4 = &v2;
    char v29 = &param5 ? 0: 1;
    char v30 = (long)&param5 < 0L;
    char v31 = __parity__((unsigned char)&ptr0 + 48);
    char v32 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v2 ^ 0x28L) ^ (long)&param5) >>> 4L) & 0x1L);
    char v33 = (unsigned long)&v2 >= 18446744073709551576L;
    char v34 = (long)(long*)((long)(long*)((long)&param5 ^ (long)&v2) & (long*)~(long)(long*)((long)&v2 ^ 0x28L)) < 0L;
    long v35 = param5;
    long* ptr5 = &v5;
    jump v35;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40F414() {
    char v0;
    long v1;
    long v2;
    unsigned long v3;
    long v4;
    long v5;
    char v6;
    long v7;
    long v8;
    long v9;
    long v10;
    long v11;
    long v12 = v7;
    long* ptr0 = &v12;
    long v13 = v1;
    long v14 = v5;
    long v15 = &unix_connect;
    long v16 = caml_c_call();
    long v17 = v10;
    long v18 = camlUnix__try_set_close_on_exec_394();
    long v19 = v10;
    long v20 = &caml_ml_open_descriptor_out;
    long v21 = caml_c_call();
    v5 = v21;
    long v22 = v10;
    long v23 = &caml_ml_open_descriptor_in;
    long v24 = caml_c_call();
    long v25 = v24;
    while(1) {
        unsigned long v26 = v3;
        v3 -= 24L;
        char v27 = v3 ? 0: 1;
        char v28 = v3 >= 0x8000000000000000L;
        char v29 = __parity__((unsigned char)v3);
        char v30 = (((v26 ^ 0x18L) ^ v3) >>> 4L) & 0x1L;
        char v31 = v26 < 24L;
        char v32 = (long)((v3 ^ v26) & (v26 ^ 0x18L)) < 0L;
        long v33 = &caml_young_limit;
        char v34 = caml_young_limit == v3;
        char v35 = (long)caml_young_limit > (long)v3;
        char v36 = __parity__((unsigned char)v3 - (unsigned char)caml_young_limit);
        char v37 = caml_young_limit > v3;
        char v38 = (long)(((v3 - caml_young_limit) ^ v3) & (caml_young_limit ^ v3)) < 0L;
        char v39 = (((v3 - caml_young_limit) ^ (caml_young_limit ^ v3)) >>> 4L) & 0x1L;
        if(!v37) {
            break;
        }
        else {
            long v40 = caml_call_gc(v22, v14, v9, v4, v8, v2);
        }
    }
    long* ptr1 = (long*)(v3 + 8L);
    *(ptr1 - 1) = 0x800L;
    *ptr1 = v25;
    long v41 = v5;
    *(ptr1 + 1) = v5;
    long v42 = v12;
    long* ptr2 = &v5;
    char v43 = &v11 ? 0: 1;
    char v44 = (long)&v11 < 0L;
    char v45 = __parity__((unsigned char)&v0 + 32);
    char v46 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v5 ^ 0x18L) ^ (long)&v11) >>> 4L) & 0x1L);
    char v47 = (unsigned long)&v5 >= 18446744073709551592L;
    char v48 = (long)(long*)((long)(long*)((long)&v5 ^ (long)&v11) & (long*)~(long)(long*)((long)&v5 ^ 0x18L)) < 0L;
    long v49 = v11;
    long* ptr3 = &v6;
    jump v49;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_40F50C() {
    char v0;
    long v1;
    long v2;
    char v3;
    long v4;
    char v5;
    long v6 = v1;
    long* ptr0 = &v6;
    long v7 = v2;
    long v8 = &unix_accept;
    long v9 = caml_c_call();
    long v10 = v6;
    long* ptr1 = &v3;
    char v11 = &v4 ? 0: 1;
    char v12 = (long)&v4 < 0L;
    char v13 = __parity__((unsigned char)&v0 + 16);
    char v14 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v3 ^ 0x8L) ^ (long)&v4) >>> 4L) & 0x1L);
    char v15 = (unsigned long)&v3 >= 18446744073709551608L;
    char v16 = (long)(long*)((long)(long*)((long)&v4 ^ (long)&v3) & (long*)~(long)(long*)((long)&v3 ^ 0x8L)) < 0L;
    long v17 = v4;
    long* ptr2 = &v5;
    jump v17;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_41016C() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_4101C1() {
}

void sub_41129C() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_411D20() {
    void* ptr0;
    long v0;
    long v1;
    char v2;
    long v3;
    char v4;
    long v5 = v0;
    long* ptr1 = &v5;
    long v6 = v1;
    long v7 = &caml_ml_flush;
    long v8 = caml_c_call();
    long v9 = v5;
    long* ptr2 = &ptr0;
    char v10 = &v2 ? 0: 1;
    char v11 = (long)&v2 < 0L;
    char v12 = __parity__((unsigned char)&ptr0 + 8);
    char v13 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&ptr0 ^ 0x8L) ^ (long)&v2) >>> 4L) & 0x1L);
    char v14 = (unsigned long)&ptr0 >= 18446744073709551608L;
    char v15 = (long)(long*)((long)(long*)((long)&ptr0 ^ (long)&v2) & (long*)~(long)(long*)((long)&ptr0 ^ 0x8L)) < 0L;
    long v16 = sub_411D4C();
    long v17 = 1L;
    long* ptr3 = &v2;
    char v18 = &v3 ? 0: 1;
    char v19 = (long)&v3 < 0L;
    char v20 = __parity__((unsigned char)&ptr0 + 16);
    char v21 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v2 ^ 0x8L) ^ (long)&v3) >>> 4L) & 0x1L);
    char v22 = (unsigned long)&v2 >= 18446744073709551608L;
    char v23 = (long)(long*)((long)(long*)((long)&v3 ^ (long)&v2) & (long*)~(long)(long*)((long)&v2 ^ 0x8L)) < 0L;
    long v24 = v3;
    long* ptr4 = &v4;
    jump v24;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_411D4C() {
    char v0;
    long v1;
    long v2;
    long v3;
    char v4;
    long v5 = v1;
    long* ptr0 = &v5;
    long v6 = v2;
    long v7 = &caml_ml_close_channel;
    long v8 = caml_c_call();
    long v9 = v5;
    long* ptr1 = &v2;
    char v10 = &v3 ? 0: 1;
    char v11 = (long)&v3 < 0L;
    char v12 = __parity__((unsigned char)&v0 + 16);
    char v13 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v2 ^ 0x8L) ^ (long)&v3) >>> 4L) & 0x1L);
    char v14 = (unsigned long)&v2 >= 18446744073709551608L;
    char v15 = (long)(long*)((long)(long*)((long)&v2 ^ (long)&v3) & (long*)~(long)(long*)((long)&v2 ^ 0x8L)) < 0L;
    long v16 = v3;
    long* ptr2 = &v4;
    jump v16;
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_411FC8() {
    char v0;
    long v1;
    long v2;
    char v3;
    long v4;
    char v5;
    long v6 = v1;
    long* ptr0 = &v6;
    long v7 = v2;
    long v8 = &caml_ml_close_channel;
    long v9 = caml_c_call();
    long v10 = v6;
    long* ptr1 = &v3;
    char v11 = &v4 ? 0: 1;
    char v12 = (long)&v4 < 0L;
    char v13 = __parity__((unsigned char)&v0 + 16);
    char v14 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v3 ^ 0x8L) ^ (long)&v4) >>> 4L) & 0x1L);
    char v15 = (unsigned long)&v3 >= 18446744073709551608L;
    char v16 = (long)(long*)((long)(long*)((long)&v4 ^ (long)&v3) & (long*)~(long)(long*)((long)&v3 ^ 0x8L)) < 0L;
    long v17 = v4;
    long* ptr2 = &v5;
    jump v17;
}

void sub_4139F4() {
    // Decompilation error
}

void sub_413B50() {
    // Decompilation error
}

void sub_4191AC() {
    // Decompilation error
}

void sub_419244() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_41A758() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_41B268() {
}

void sub_420A24() {
    // Decompilation error
}

void sub_422190() {
    // Decompilation error
}

void sub_423020() {
    // Decompilation error
}

void sub_4231A4() {
    // Decompilation error
}

void sub_423728() {
    // Decompilation error
}

void sub_42397C() {
    // Decompilation error
}

void sub_42B868() {
}

long sub_42E2B9(long param0, long param1, long param2, long param3, long param4) {
    long v0;
sub_42E2B9:
    do {
        long v1 = param2 & param4;
        v0 = *(long*)(v1 * 8L + param1);
        if(((v0 ^ param0) & 0xfffffffffffff000L)) {
            if(v0) {
                param2 = v1 + 1L;
                goto sub_42E2B9;
            }
            else {
                return 0L;
            }
        }
    }
    while(((v0 ^ param0) & 0xfffffffffffff000L));
    return (unsigned long)(unsigned char)v0;
}

long sub_42E2EA(unsigned long param0) {
    unsigned int v0;
    if(v0 == 1) {
        jump caml_gc_sweep_hp > param0 ? &loc_42E2EF: &sub_42E301;
    }
    return 0L;
}

long sub_42E301() {
    return 0x300L;
}

long sub_430C4E() {
    return 1L;
}

void sub_430C60() {
    char v0;
    char v1;
    char v2;
    double v3;
    double v4;
    if(v4 == v3) {
        v2 = 1;
        v1 = 0;
        v0 = 0;
    }
    else if(v4 > v3) {
        v2 = 0;
        v1 = 0;
        v0 = 0;
    }
    else {
        if(v4 < v3) {
            v2 = 0;
            v1 = 0;
        }
        else {
            v2 = 1;
            v1 = 1;
        }
        v0 = 1;
    }
    char v5 = 0;
    char v6 = 0;
    char v7 = 0;
    jump v0 || v2 ? &sub_430C66: &sub_430C88;
}

void sub_43BF3B() {
    // Decompilation error
}

void sub_43C204() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long sub_43C20A() {
    long v0;
    long result;
    long* ptr0;
    char v1;
    caml_stash_backtrace(result, v0, (long)&v1, (long)ptr0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long test_and_compact() {
    long* ptr0;
    float v0;
    char v1;
    char v2;
    double v3;
    __int128 v4;
    long v5;
    long* ptr1;
    unsigned long v6 = caml_fl_cur_size;
    __int128 v7 = v6 < 0x8000000000000000L ? (unsigned __int128)(double)(unsigned int)v6 | ((unsigned __int128)(unsigned long)(v7 >>> 0x40X) << 64): (unsigned __int128)((double)(unsigned int)((v6 >>> 1) | (unsigned long)((unsigned int)v6 & 0x1)) + (double)(unsigned int)((v6 >>> 1) | (unsigned long)((unsigned int)v6 & 0x1))) | ((unsigned __int128)(unsigned long)(v7 >>> 0x40X) << 64);
    v7 = (unsigned __int128)((double)v7 * 100.0) | ((unsigned __int128)(unsigned long)(v7 >>> 0x40X) << 64);
    unsigned long v8 = (caml_stat_heap_size >>> 3) - v6;
    if(v8 < 0x8000000000000000L) {
        v3 = (double)(unsigned int)v8;
    }
    else {
        unsigned long v9 = v8;
        v8 = (unsigned long)((unsigned int)v8 & 0x1);
        long v10 = (v9 >>> 1) | v8;
        v3 = (double)(unsigned int)v10 + (double)(unsigned int)v10;
    }
    v7 = (unsigned __int128)((double)v7 / v3) | ((unsigned __int128)(unsigned long)(v7 >>> 0x40X) << 64);
    __int128 v4 = unpcklpd(v7, v7);
    __int128 v11 = (unsigned __int128)(double)v4 | ((unsigned __int128)(double)(v4 >>> 0x40X) << 32) | ((unsigned __int128)0L << 64);
    if((double)v4 == 999999.0) {
        v2 = 1;
        v1 = 0;
    }
    else if((float)v11 > 999999.0) {
        v2 = 0;
        v1 = 0;
    }
    else {
        v2 = (float)v11 < 999999.0 ? 0: 1;
        v1 = 1;
    }
    if(!v1 && !v2) {
        v8 = 999999L;
        v11 = 0x497423F0X;
    }
    else if(!((float)v11 != 9.223372E18 ? (float)v11 <= 9.223372E18: 0)) {
        v8 = (unsigned long)(((unsigned long)(int)((float)v11 - 9.223372E18) | ((unsigned long)(unsigned int)(v8 >>> 32L) << 32)) ^ 0x8000000000000000L);
    }
    else {
        v8 = (unsigned long)(int)(float)v11 | ((unsigned long)(unsigned int)(v8 >>> 32L) << 32);
    }
    int v12 = (unsigned int)v11;
    caml_gc_message(0x200L, "Estimated overhead (lower bound) = %lu%%\n", (long)v8);
    long result = caml_percent_max;
    if(result >= 0L) {
        v0 = (float)(unsigned int)result;
    }
    else {
        long v13 = result;
        result = (long)((unsigned int)result & 0x1);
        ptr0 = (long*)((v13 >>> 1) | result);
        v0 = (float)(unsigned int)ptr0 + (float)(unsigned int)ptr0;
    }
    if(!((float)v11 != v0 ? (float)v11 <= v0: 0) && (long)caml_stat_heap_chunks > 1L) {
        caml_gc_message(0x200L, "Automatic compaction triggered.\n", 0L);
        result = caml_compact_heap(v5, ptr1, ptr0);
    }
    return result;
}

long uerror(long param0, long param1) {
    char v0;
    char v1;
    int* ptr0;
    long v2;
    long v3 = v2;
    long* ptr1 = &v0;
    char v4 = &v0 == 24L;
    char v5 = (long)&v1 < 0L;
    char v6 = __parity__((unsigned char)&v0 - 24);
    char v7 = (long*)((long)(long*)((long)(long*)((long)(long*)((long)&v0 ^ 0x18L) ^ (long)&v1) >>> 4L) & 0x1L);
    char v8 = (unsigned long)&v0 < 24L;
    char v9 = (long)(long*)((long)(long*)((long)&v0 ^ (long)&v1) & (long)(long*)((long)&v0 ^ 0x18L)) < 0L;
    long v10 = param0;
    long v11 = param1;
    →__errno_location();
    long v12 = v11;
    long v13 = v10;
    long v14 = (unsigned long)*ptr0;
    /*NO_RETURN*/ unix_error(v14, v13, v12);
}

// Stale decompilation - Refresh this view to re-decompile this code
long* unix_convert_itimer(long* param0) {
    long* ptr0;
    long* result = caml_alloc_small(2L, 254L);
    result[0] = (long)((double)(unsigned int)*(ptr0 + 1) / 1000000.0 + (double)(unsigned int)*ptr0);
    result[1] = (long)((double)(unsigned int)*(ptr0 + 3) / 1000000.0 + (double)(unsigned int)*(ptr0 + 2));
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long unix_error(long par0, long par1, long par2) {
}

void unix_error_of_code() {
    // Decompilation error
}

void unix_getsockopt_aux() {
    // Decompilation error
}

void unix_sendto() {
    // Decompilation error
}

unsigned long unix_set_timeval(long* param0, double* __iptr) {
    double v0;
    double v1;
    long* ptr0;
    →modf(&v0, __iptr);
    long v2 = (unsigned long)(int)v0 | ((unsigned long)(unsigned int)(v2 >>> 32L) << 32);
    *ptr0 = v2;
    double v3 = →ceil(v1 * 1000000.0);
    unsigned long result = (unsigned long)(int)(double)v3 | ((unsigned long)(unsigned int)(result >>> 32L) << 32);
    *(unsigned long*)(ptr0 + 1) = result;
    if((long)result > 999999L) {
        *ptr0 = v2 + 1L;
        *(ptr0 + 1) = 0L;
    }
    return result;
}

void unix_setsockopt_aux() {
    // Decompilation error
}

char* write32(long param0) {
    char* result = extern_ptr;
    long* ptr0 = (long*)(result + 4L);
    if(extern_limit < (unsigned long)ptr0) {
        grow_extern_output(4L);
        result = extern_ptr;
        ptr0 = (long*)(result + 4L);
    }
    *(result + 3L) = (unsigned char)param0;
    *result = (unsigned char)(param0 >>> 24L);
    *(result + 1L) = (unsigned char)(param0 >>> 16L);
    *(result + 2L) = (unsigned char)(param0 >>> 8L);
    extern_ptr = ptr0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long writeblock(long param0, unsigned long param1) {
    long result;
    if(extern_ptr + param1 > extern_limit) {
        grow_extern_output(param1);
    }
    →memmove();
    extern_ptr += param1;
    return result;
}

char* writecode32(long param0, long param1) {
    char* result = extern_ptr;
    long* ptr0 = (long*)(result + 5L);
    if(extern_limit < (unsigned long)ptr0) {
        grow_extern_output(5L);
        result = extern_ptr;
        ptr0 = (long*)(result + 5L);
    }
    *result = (unsigned char)param0;
    *(result + 4L) = (unsigned char)param1;
    *(result + 1L) = (unsigned char)(param1 >>> 24L);
    *(result + 2L) = (unsigned char)(param1 >>> 16L);
    *(result + 3L) = (unsigned char)(param1 >>> 8L);
    extern_ptr = ptr0;
    return result;
}

char* writecode8(long param0, long param1) {
    char* result = extern_ptr;
    long* ptr0 = (long*)(result + 2L);
    if(extern_limit < (unsigned long)ptr0) {
        grow_extern_output(2L);
        result = extern_ptr;
        ptr0 = (long*)(result + 2L);
    }
    *result = (unsigned char)param0;
    *(result + 1L) = (unsigned char)param1;
    extern_ptr = ptr0;
    return result;
}
