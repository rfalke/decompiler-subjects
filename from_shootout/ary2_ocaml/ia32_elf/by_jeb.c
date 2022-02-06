
unsigned int __divdi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    char v1;
    unsigned int v2 = param1;
    unsigned int v3 = param0;
    unsigned int v4 = param2;
    unsigned int v5 = param3;
    int v6 = 0;
    if(v2 >= 0x80000000) {
        unsigned int v7 = v3;
        v3 = (unsigned int)(0 - v3);
        v2 = (unsigned int)(0 - (unsigned int)((unsigned int)(v7 > 0) + v2));
        v6 = -1;
        if(v5 >= 0x80000000) {
        loc_8070471:
            unsigned int v8 = v4;
            v4 = (unsigned int)(0 - v4);
            v6 = ~v6;
            v5 = (unsigned int)(0 - (unsigned int)((unsigned int)(v8 > 0) + v5));
        }
    }
    else if(v5 >= 0x80000000) {
        goto loc_8070471;
    }
    unsigned int v9 = v4;
    v4 = v3;
    if(!v5) {
        if(v2 < v9) {
            v0 = (unsigned int)((unsigned long long)v3 | ((unsigned long long)v2 << 32)) / v9;
        }
        else {
            if(!v9) {
                v9 = 1 / 0;
            }
            v0 = (unsigned int)((unsigned long long)v4 | ((unsigned long long)(v2 % v9) << 32)) / v9;
        }
    }
    else if(v2 >= v5) {
        if(v5 != 0) {
            unsigned int i;
            for(i = 31; !(v5 >>> i); --i) {
            }
            v3 = i;
        }
        *(int*)&v1 = v3 ^ 0x1f;
        if(v3 ^ 0x1f) {
            int v10 = 32 - *(int*)&v1;
            unsigned int v11 = (unsigned int)((v5 << ((unsigned int)v1 & 0x1f)) | (v9 >>> (v10 & 0x1f)));
            int v12 = v9 << ((unsigned int)v1 & 0x1f);
            int v13 = v2 >>> (v10 & 0x1f);
            int v14 = (v2 << ((unsigned int)v1 & 0x1f)) | (v4 >>> (v10 & 0x1f));
            unsigned int v15 = (unsigned int)((unsigned long long)v14 | ((unsigned long long)v13 << 32)) / v11;
            unsigned int v16 = (unsigned int)((unsigned long long)v14 | ((unsigned long long)v13 << 32)) % v11;
            unsigned int v17 = (unsigned int)(((unsigned long long)v15 * (unsigned long long)v12) >>> 32L);
            v0 = v17 <= v16 && (v15 * v12 <= v4 << ((unsigned int)v1 & 0x1f) || v17 != v16) ? v15: v15 - 1;
        }
        else if(v9 > v4 && v2 <= v5) {
            goto loc_80703EE;
        }
        else {
            v0 = 1;
        }
    }
    else {
    loc_80703EE:
        v0 = 0;
    }
    unsigned int result = v0;
    if(v6) {
        result = (unsigned int)(0 - result);
    }
    return result;
}

void __i686.get_pc_thunk.bx() {
}

unsigned int __moddi3(unsigned int param0, unsigned int param1, int param2, unsigned int param3) {
    unsigned int v0;
    unsigned int v1;
    char v2;
    char v3;
    unsigned int v4 = param1;
    unsigned int v5 = param0;
    *(int*)&v2 = param2;
    unsigned int v6 = param3;
    int v7 = 0;
    if(v4 >= 0x80000000) {
        unsigned int v8 = v5;
        v5 = (unsigned int)(0 - v5);
        v4 = (unsigned int)(0 - (unsigned int)((unsigned int)(v8 > 0) + v4));
        v7 = -1;
    }
    if(v6 >= 0x80000000) {
        unsigned int v9 = *(unsigned int*)&v2;
        *(int*)&v2 = 0 - *(int*)&v2;
        v6 = (unsigned int)(0 - (unsigned int)((unsigned int)(v9 > 0) + v6));
    }
    unsigned int v10 = *(unsigned int*)&v2;
    unsigned int v11 = v5;
    *(unsigned int*)&v3 = v5;
    unsigned int v12 = v10;
    if(!v6) {
        if(v4 < v12) {
            v1 = (unsigned int)((unsigned long long)v5 | ((unsigned long long)v4 << 32)) % v12;
        }
        else {
            if(!v12) {
                v12 = 1 / 0;
            }
            v1 = (unsigned int)((unsigned long long)*(int*)&v3 | ((unsigned long long)(v4 % v12) << 32)) % v12;
        }
        return v7 ? (unsigned int)(0 - v1): v1;
    }
    if(v4 < v6) {
        v0 = v5;
    }
    else {
        if(v6 != 0) {
            unsigned int i;
            for(i = 31; !(v6 >>> i); --i) {
            }
            v5 = i;
        }
        *(int*)&v2 = v5 ^ 0x1f;
        if(!(v5 ^ 0x1f)) {
            if(*(unsigned int*)&v3 >= v12 || v4 > v6) {
                *(unsigned int*)&v3 = *(unsigned int*)&v3 - v12;
            }
            v0 = *(unsigned int*)&v3;
        }
        else {
            *(int*)&v3 = 32 - *(int*)&v2;
            unsigned int v13 = (unsigned int)((v6 << ((unsigned int)v2 & 0x1f)) | (v12 >>> ((unsigned int)v3 & 0x1f)));
            unsigned int v14 = v12 << ((unsigned int)v2 & 0x1f);
            int v15 = v4 >>> ((unsigned int)v3 & 0x1f);
            int v16 = (v4 << ((unsigned int)v2 & 0x1f)) | (v11 >>> ((unsigned int)v3 & 0x1f));
            unsigned int v17 = (unsigned int)((unsigned long long)v16 | ((unsigned long long)v15 << 32)) / v13;
            v12 = v11 << ((unsigned int)v2 & 0x1f);
            unsigned int v18 = (unsigned int)((unsigned long long)v16 | ((unsigned long long)v15 << 32)) % v13;
            unsigned int v19 = v17 * v14;
            unsigned int v20 = (unsigned int)(((unsigned long long)v17 * (unsigned long long)v14) >>> 32L);
            if(v20 > v18 || (v19 > v12 && v20 == v18)) {
                unsigned int v21 = v19;
                v19 -= v14;
                v20 -= (unsigned int)(v21 < v14) + v13;
            }
            v0 = (unsigned int)(((v18 - ((unsigned int)(v19 > v12) + v20)) << ((unsigned int)v3 & 0x1f)) | ((v12 - v19) >>> ((unsigned int)v2 & 0x1f)));
        }
    }
    return v7 ? (unsigned int)(0 - v0): v0;
}

int __udivdi3(unsigned int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    unsigned int v0;
    char v1;
    unsigned int v2 = param0;
    unsigned int v3 = param2;
    unsigned int v4 = v2;
    if(param3) {
        if(param1 >= param3) {
            if(param3 != 0) {
                unsigned int i;
                for(i = 31; !(param3 >>> i); --i) {
                }
                v2 = i;
            }
            *(int*)&v1 = v2 ^ 0x1f;
            if((v2 ^ 0x1f)) {
                int v5 = 32 - *(int*)&v1;
                unsigned int v6 = (unsigned int)((param3 << ((unsigned int)v1 & 0x1f)) | (v3 >>> (v5 & 0x1f)));
                int v7 = v3 << ((unsigned int)v1 & 0x1f);
                int v8 = param1 >>> (v5 & 0x1f);
                int v9 = (param1 << ((unsigned int)v1 & 0x1f)) | (v4 >>> (v5 & 0x1f));
                unsigned int v10 = (unsigned int)((unsigned long long)v9 | ((unsigned long long)v8 << 32)) / v6;
                unsigned int v11 = (unsigned int)((unsigned long long)v9 | ((unsigned long long)v8 << 32)) % v6;
                unsigned int v12 = (unsigned int)(((unsigned long long)v10 * (unsigned long long)v7) >>> 32L);
                if(v12 <= v11 && (v10 * v7 <= v4 << ((unsigned int)v1 & 0x1f) || v12 != v11)) {
                    v0 = v10;
                }
                else {
                    return v10 - 1;
                }
            }
            else if(v3 > v4 && param1 <= param3) {
                v0 = 0;
                return (int)v0;
            }
            else {
                v0 = 1;
            }
        }
        else {
            v0 = 0;
        }
        return (int)v0;
    }
    else if(v3 <= param1) {
        if(!v3) {
            v3 = 1 / 0;
        }
        return (int)((unsigned int)((unsigned long long)v4 | ((unsigned long long)(param1 % v3) << 32)) / v3);
    }
    return (int)((unsigned int)((unsigned long long)v2 | ((unsigned long long)param1 << 32)) / v3);
}

// Stale decompilation - Refresh this view to re-decompile this code
int alloc_group_entry() {
    int* ptr0;
    int v0;
    int v1 = v0;
    int v2 = 1;
    int v3 = 1;
    int v4 = 1;
    unsigned int v5 = caml_local_roots;
    caml_local_roots = &v5;
    int v6 = 1;
    int v7 = 3;
    int* ptr1 = &v2;
    int* ptr2 = &v3;
    int* ptr3 = &v4;
    v2 = caml_copy_string(*ptr0);
    v3 = caml_copy_string(*(ptr0 + 1));
    v4 = caml_copy_string_array(*(unsigned int**)(ptr0 + 3));
    int result = caml_alloc_small(4, 0);
    *(int*)result = v2;
    *(int*)(result + 4) = v3;
    *(int*)(result + 8) = *(ptr0 + 2) * 2 + 1;
    *(int*)(result + 12) = v4;
    caml_local_roots = v5;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int alloc_host_entry() {
    int* ptr0;
    int v0;
    int v1 = v0;
    int v2 = 1;
    int v3 = 1;
    int v4 = 1;
    int v5 = 1;
    unsigned int v6 = caml_local_roots;
    caml_local_roots = &v6;
    int v7 = 1;
    int v8 = 4;
    int* ptr1 = &v2;
    int* ptr2 = &v3;
    int* ptr3 = &v4;
    int* ptr4 = &v5;
    v2 = caml_copy_string(*ptr0);
    unsigned int* ptr5 = *(unsigned int**)(ptr0 + 1);
    v3 = ptr5 ? caml_copy_string_array(ptr5): &gvar_80821A4;
    entry_h_length = *(unsigned int*)(ptr0 + 3);
    v4 = caml_alloc_array(&alloc_one_addr, *(unsigned int**)(ptr0 + 4));
    int result = caml_alloc_small(4, 0);
    *(int*)result = v2;
    *(int*)(result + 4) = v3;
    unsigned int v9 = *(unsigned int*)(ptr0 + 2);
    *(int*)(result + 8) = v9 != 1 ? v9 == 2 ? 3: 5: 1;
    *(int*)(result + 12) = v4;
    caml_local_roots = v6;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int alloc_inet6_addr(int* param0) {
    int v0;
    int v1 = v0;
    int* ptr0 = param0;
    int result = caml_alloc_string(16);
    *(int*)result = *ptr0;
    *(int*)(result + 4) = *(ptr0 + 1);
    *(int*)(result + 8) = *(ptr0 + 2);
    *(int*)(result + 12) = *(ptr0 + 3);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int alloc_inet_addr(int* param0) {
    int v0;
    int v1 = v0;
    int result = caml_alloc_string(4);
    *(int*)result = *param0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int alloc_one_addr(int param0) {
    int result;
    char v0;
    char v1;
    int v2;
    int v3 = v2;
    if(entry_h_length == 16) {
        →memmove();
        result = alloc_inet6_addr(&v0);
    }
    else {
        →memmove();
        result = alloc_inet_addr(&v1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int alloc_passwd_entry() {
    int* ptr0;
    int v0;
    int v1 = v0;
    int v2 = 1;
    int v3 = 1;
    int v4 = 1;
    int v5 = 1;
    int v6 = 1;
    unsigned int v7 = caml_local_roots;
    caml_local_roots = &v7;
    int v8 = 1;
    int v9 = 5;
    int* ptr1 = &v2;
    int* ptr2 = &v3;
    int* ptr3 = &v4;
    int* ptr4 = &v5;
    int* ptr5 = &v6;
    v2 = caml_copy_string(*ptr0);
    v3 = caml_copy_string(*(ptr0 + 1));
    v4 = caml_copy_string(*(ptr0 + 4));
    v5 = caml_copy_string(*(ptr0 + 5));
    v6 = caml_copy_string(*(ptr0 + 6));
    int result = caml_alloc_small(7, 0);
    *(int*)result = v2;
    *(int*)(result + 4) = v3;
    *(int*)(result + 8) = *(ptr0 + 2) * 2 + 1;
    *(int*)(result + 12) = *(ptr0 + 3) * 2 + 1;
    *(int*)(result + 16) = v4;
    *(int*)(result + 20) = v5;
    *(int*)(result + 24) = v6;
    caml_local_roots = v7;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int alloc_process_status(int param0, unsigned char param1) {
    int v0;
    int v1;
    int v2;
    int v3 = (unsigned int)param1 | ((unsigned int)v2 << 8);
    int v4 = ((unsigned int)param1 | ((unsigned int)v2 << 8)) & 0x7f;
    if(!v4) {
        int v5 = caml_alloc_small(1, 0);
        v0 = v5;
        *(int*)v5 = (unsigned int)(unsigned char)(v3 >>> 8) * 2 + 1;
    }
    else if(param1 == 127) {
        int v6 = caml_alloc_small(1, 2);
        v0 = v6;
        unsigned int v7 = caml_rev_convert_signal_number((unsigned int)(unsigned char)(v3 >>> 8));
        *(int*)v6 = v7 * 2 + 1;
    }
    else {
        int v8 = caml_alloc_small(1, 1);
        v0 = v8;
        unsigned int v9 = caml_rev_convert_signal_number((unsigned int)v4);
        *(int*)v8 = v9 * 2 + 1;
    }
    unsigned int v10 = caml_local_roots;
    caml_local_roots = &v10;
    int result = caml_alloc_small(2, 0);
    *(int*)result = v1 * 2 + 1;
    *(int*)(result + 4) = v0;
    caml_local_roots = v10;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int alloc_proto_entry() {
    int* ptr0;
    int v0;
    int v1 = v0;
    int v2 = 1;
    int v3 = 1;
    unsigned int v4 = caml_local_roots;
    caml_local_roots = &v4;
    int v5 = 1;
    int v6 = 2;
    int* ptr1 = &v2;
    int* ptr2 = &v3;
    v2 = caml_copy_string(*ptr0);
    v3 = caml_copy_string_array(*(unsigned int**)(ptr0 + 1));
    int result = caml_alloc_small(3, 0);
    *(int*)result = v2;
    *(int*)(result + 4) = v3;
    *(int*)(result + 8) = *(ptr0 + 2) * 2 + 1;
    caml_local_roots = v4;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int alloc_service_entry() {
    int* ptr0;
    int v0;
    int v1 = v0;
    int v2 = 1;
    int v3 = 1;
    int v4 = 1;
    unsigned int v5 = caml_local_roots;
    caml_local_roots = &v5;
    int v6 = 1;
    int v7 = 3;
    int* ptr1 = &v2;
    int* ptr2 = &v3;
    int* ptr3 = &v4;
    v2 = caml_copy_string(*ptr0);
    v3 = caml_copy_string_array(*(unsigned int**)(ptr0 + 1));
    v4 = caml_copy_string(*(ptr0 + 3));
    int result = caml_alloc_small(4, 0);
    *(int*)result = v2;
    *(int*)(result + 4) = v3;
    *(int*)(result + 8) = (unsigned int)__ror__((unsigned short)*(ptr0 + 2), 8) * 2 + 1;
    *(int*)(result + 12) = v4;
    caml_local_roots = v5;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int alloc_sockaddr(unsigned short* param0, int param1, int param2) {
    int* ptr0;
    int v0;
    int v1;
    int result;
    unsigned int v2;
    int v3;
    int v4;
    int v5 = v4;
    unsigned short* ptr1 = param0;
    unsigned short v6 = *ptr1;
    if(*ptr1 == 2) {
        v3 = alloc_inet_addr((int*)(ptr1 + 2));
        v2 = caml_local_roots;
        caml_local_roots = &v2;
        v1 = 1;
        v0 = 1;
        ptr0 = &v3;
        result = caml_alloc_small(2, 1);
        *(int*)result = v3;
        *(int*)(result + 4) = (unsigned int)__ror__(*(short*)(ptr1 + 1), 8) * 2 + 1;
        caml_local_roots = v2;
    }
    else if(v6 == 1) {
        v3 = caml_copy_string((int)(ptr1 + 1));
        v2 = caml_local_roots;
        caml_local_roots = &v2;
        result = caml_alloc_small(1, 0);
        *(int*)result = v3;
        caml_local_roots = v2;
    }
    else if(v6 == 10) {
        v3 = alloc_inet6_addr((int*)(ptr1 + 4));
        v2 = caml_local_roots;
        caml_local_roots = &v2;
        v1 = 1;
        v0 = 1;
        ptr0 = &v3;
        result = caml_alloc_small(2, 1);
        *(int*)result = v3;
        *(int*)(result + 4) = (unsigned int)__ror__(*(short*)(ptr1 + 1), 8) * 2 + 1;
        caml_local_roots = v2;
    }
    else {
        if(param2 != -1) {
            →close(param2);
        }
        result = unix_error(97, &gvar_8071A88, 0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int alloc_tm() {
    int* ptr0;
    int v0;
    int v1 = v0;
    int result = caml_alloc_small(9, 0);
    *(int*)result = *ptr0 * 2 + 1;
    *(int*)(result + 4) = *(ptr0 + 1) * 2 + 1;
    *(int*)(result + 8) = *(ptr0 + 2) * 2 + 1;
    *(int*)(result + 12) = *(ptr0 + 3) * 2 + 1;
    *(int*)(result + 16) = *(ptr0 + 4) * 2 + 1;
    *(int*)(result + 20) = *(ptr0 + 5) * 2 + 1;
    *(int*)(result + 24) = *(ptr0 + 6) * 2 + 1;
    *(int*)(result + 28) = *(ptr0 + 7) * 2 + 1;
    *(int*)(result + 32) = *(unsigned int*)(ptr0 + 8) < 1 ? 1: 3;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlArray__append_1054() {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    float* ptr0;
    float* ptr1;
    unsigned int v3;
    float* ptr2;
    __SyntheticTypeUnknown v4;
    char v5;
    unsigned int v6;
    float* ptr3;
    float* ptr4;
    int v7 = *(int*)(ptr3 - 1);
    unsigned int v8 = (unsigned int)(((unsigned char)v7 == 254 ? v7 >>> 10: v7 >>> 9) | 0x1);
    int v9 = *(int*)(ptr4 - 1);
    float* ptr5 = (float*)(((unsigned char)v9 == 254 ? v9 >>> 10: v9 >>> 9) | 0x1);
    if(v8 != 1) {
        ptr2 = ptr5;
        v3 = v8;
        ptr1 = ptr4;
        ptr0 = ptr3;
    }
    else if(ptr5 == 1) {
        return &camlArray__31;
    }
    else {
        ptr2 = ptr5;
        v3 = 1;
        ptr1 = ptr4;
        ptr0 = ptr3;
    }
    if((int)v8 > 1) {
        ptr4 = ptr3;
    }
    if(*(char*)(ptr4 - 1) == 254) {
        while(1) {
            v2 = caml_young_ptr - 12;
            caml_young_ptr -= 12;
            if(caml_young_limit <= v2) {
                break;
            }
            else {
                caml_call_gc((int)ptr5, (int)v8);
            }
        }
        long long* ptr6 = (long long*)(v2 + 4);
        *(int*)((char*)ptr6 - 4) = 2301;
        char v10 = v5 - 1;
        v4[v10] = *(double*)ptr4;
        *ptr6 = v4[v10];
    }
    int* ptr7 = (int*)((char*)((int)ptr5 + v8) - 1);
    unsigned int result = (unsigned int)caml_c_call();
    unsigned int v11 = 1;
    unsigned int v12 = v3 - 2;
    if((int)v12 >= 1) {
        do {
            ptr5 = ptr0;
            if(*(char*)(ptr5 - 1) != 254) {
                v8 = *(unsigned int*)((char*)(v11 * 2 + (int)ptr5) - 2);
            }
            else {
                while(1) {
                    v1 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v1) {
                        break;
                    }
                    else {
                        caml_call_gc((int)ptr5, (int)v8);
                    }
                }
                v8 = v1 + 4;
                *(int*)(v8 - 4) = 2301;
                *(long long*)v8 = *(double*)((int*)(v11 * 4 + (int)ptr5) - 1);
            }
            if(*(char*)(result - 4) != 254) {
                caml_modify((unsigned int*)(v11 * 2 + result - 2), v8);
            }
            else {
                *(long long*)(v11 * 4 + result - 4) = *(double*)v8;
            }
            v6 = v11;
            v11 += 2;
        }
        while(v6 != v12);
    }
    ptr4 = (float*)0x1;
    float* ptr8 = (float*)((char*)ptr2 - 2);
    if((int)ptr8 >= 1) {
        ptr2 = ptr8;
        do {
            float* ptr9 = ptr1;
            if(*(char*)(ptr9 - 1) != 254) {
                v8 = *(unsigned int*)((char*)((int)(int*)((int)ptr4 * 2) + (int)ptr9) - 2);
            }
            else {
                while(1) {
                    v0 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v0) {
                        break;
                    }
                    else {
                        caml_call_gc((int)ptr9, (int)v8);
                    }
                }
                v8 = v0 + 4;
                *(int*)(v8 - 4) = 2301;
                *(long long*)v8 = *(double*)((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr9) - 1);
            }
            int* ptr10 = (int*)((char*)((int)ptr4 + v3) - 1);
            if(*(char*)(result - 4) != 254) {
                caml_modify((unsigned int*)((char*)((int)(int*)((int)ptr10 * 2) + result) - 2), v8);
            }
            else {
                *(long long*)((int*)((int)(int*)((int)ptr10 * 4) + result) - 1) = *(double*)v8;
            }
            ptr5 = ptr4;
            ptr4 = (float*)((char*)ptr4 + 2);
        }
        while(ptr5 != ptr2);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__blit_1093(unsigned int param0, unsigned int param1) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    unsigned int v4;
    int v5;
    int v6;
    void* ptr0;
    __SyntheticTypeUnknown v7;
    char v8;
    int v9;
    unsigned int v10;
    unsigned int v11;
    int v12;
    int* ptr1 = &ptr0;
    char v13 = &ptr0 == 24;
    char v14 = (int)&v12 < 0;
    char v15 = __parity__((unsigned char)&ptr0 - 24);
    char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x18) ^ (int)&v12) >>> 4) & 0x1);
    char v17 = (unsigned int)&ptr0 < 24;
    char v18 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v12) & (int)(int*)((int)&ptr0 ^ 0x18)) < 0;
    int v19 = v9;
    unsigned int v20 = param0;
    unsigned int v21 = param1;
    char v22 = v11 == 1;
    char v23 = (int)v11 < 1;
    char v24 = __parity__((unsigned char)v11 - 1);
    char v25 = v11 < 1;
    char v26 = (((v11 - 1) ^ v11) & (v11 ^ 0x1)) < 0;
    char v27 = (((v11 - 1) ^ (v11 ^ 0x1)) >>> 4) & 0x1;
    if(v23 == v26) {
        char v28 = v10 == 1;
        char v29 = (int)v10 < 1;
        char v30 = __parity__((unsigned char)v10 - 1);
        char v31 = v10 < 1;
        char v32 = (((v10 - 1) ^ v10) & (v10 ^ 0x1)) < 0;
        char v33 = (((v10 - 1) ^ (v10 ^ 0x1)) >>> 4) & 0x1;
        if(v29 == v32) {
            int v34 = *(int*)(v19 - 4);
            int v35 = *(int*)(v19 - 4);
            unsigned int v36 = (unsigned int)(unsigned char)v35;
            char v37 = v36 == 254;
            char v38 = (int)v36 < 254;
            char v39 = __parity__((unsigned char)v36 - 254);
            char v40 = v36 < 254;
            char v41 = (((v36 - 254) ^ v36) & (v36 ^ 0xfe)) < 0;
            char v42 = (((v36 - 254) ^ (v36 ^ 0xfe)) >>> 4) & 0x1;
            if(!v37) {
                int v43 = v34;
                int v44 = v34;
                v6 = v43 >>> 9;
                char v45 = (v44 >>> 8) & 0x1;
                char v46 = v41;
                char v47 = v6 ? 0: 1;
                char v48 = v6 < 0;
                char v49 = __parity__((unsigned char)v6);
            }
            else {
                int v50 = v34;
                int v51 = v34;
                v6 = v50 >>> 10;
                char v52 = (v51 >>> 9) & 0x1;
                char v53 = v41;
                char v54 = v6 ? 0: 1;
                char v55 = v6 < 0;
                char v56 = __parity__((unsigned char)v6);
            }
            unsigned int v57 = (unsigned int)(v6 | 0x1);
            unsigned int v58 = (unsigned int)(v6 | 0x1);
            unsigned int v59 = v57 - v11;
            char v60 = v59 ? 0: 1;
            char v61 = v59 >= 0x80000000;
            char v62 = __parity__((unsigned char)v59);
            char v63 = (((v11 ^ v58) ^ v59) >>> 4) & 0x1;
            char v64 = v11 > v58;
            char v65 = (int)((v59 ^ v58) & (v11 ^ v58)) < 0;
            unsigned int v66 = v59 + 1;
            char v67 = v66 == v10;
            char v68 = (int)v66 > (int)v10;
            char v69 = __parity__((unsigned char)v10 - (unsigned char)v66);
            char v70 = v66 > v10;
            char v71 = (int)(((v10 - v66) ^ v10) & (v66 ^ v10)) < 0;
            char v72 = (((v10 - v66) ^ (v66 ^ v10)) >>> 4) & 0x1;
            if((v67 || v68 != v71)) {
                char v73 = v21 == 1;
                char v74 = (int)v21 < 1;
                char v75 = __parity__((unsigned char)v21 - 1);
                char v76 = v21 < 1;
                char v77 = (((v21 - 1) ^ v21) & (v21 ^ 0x1)) < 0;
                char v78 = (((v21 - 1) ^ (v21 ^ 0x1)) >>> 4) & 0x1;
                if(v74 == v77) {
                    unsigned int v79 = v20;
                    param0 = *(unsigned int*)(v79 - 4);
                    unsigned int v80 = *(unsigned int*)(v79 - 4);
                    unsigned int v81 = (unsigned int)(unsigned char)v80;
                    char v82 = v81 == 254;
                    char v83 = (int)v81 < 254;
                    char v84 = __parity__((unsigned char)v81 - 254);
                    char v85 = v81 < 254;
                    char v86 = (((v81 - 254) ^ v81) & (v81 ^ 0xfe)) < 0;
                    char v87 = (((v81 - 254) ^ (v81 ^ 0xfe)) >>> 4) & 0x1;
                    if(!v82) {
                        unsigned int v88 = param0;
                        unsigned int v89 = param0;
                        v5 = (int)(v88 >>> 9);
                        char v90 = (v89 >>> 8) & 0x1;
                        char v91 = v86;
                        char v92 = v5 ? 0: 1;
                        char v93 = v5 < 0;
                        char v94 = __parity__((unsigned char)v5);
                    }
                    else {
                        unsigned int v95 = param0;
                        unsigned int v96 = param0;
                        v5 = (int)(v95 >>> 10);
                        char v97 = (v96 >>> 9) & 0x1;
                        char v98 = v86;
                        char v99 = v5 ? 0: 1;
                        char v100 = v5 < 0;
                        char v101 = __parity__((unsigned char)v5);
                    }
                    unsigned int v102 = (unsigned int)(v5 | 0x1);
                    unsigned int v103 = (unsigned int)(v5 | 0x1);
                    unsigned int v104 = v102 - v11;
                    char v105 = v104 ? 0: 1;
                    char v106 = v104 >= 0x80000000;
                    char v107 = __parity__((unsigned char)v104);
                    char v108 = (((v11 ^ v103) ^ v104) >>> 4) & 0x1;
                    char v109 = v11 > v103;
                    char v110 = (int)((v104 ^ v103) & (v11 ^ v103)) < 0;
                    unsigned int v111 = v104 + 1;
                    char v112 = v111 == v21;
                    char v113 = (int)v111 > (int)v21;
                    char v114 = __parity__((unsigned char)v21 - (unsigned char)v111);
                    char v115 = v111 > v21;
                    char v116 = (int)(((v21 - v111) ^ v21) & (v111 ^ v21)) < 0;
                    char v117 = (((v21 - v111) ^ (v111 ^ v21)) >>> 4) & 0x1;
                    if((v112 || v113 != v116)) {
                        if((int)v10 < (int)v21) {
                            v11 -= 2;
                            if((int)v11 >= 1) {
                                v4 = v10;
                                do {
                                    int v118 = v11 + v4 - 1;
                                    if(*(char*)(v19 - 4) != 254) {
                                        v3 = *(unsigned int*)(v118 * 2 + v19 - 2);
                                    }
                                    else {
                                        while(1) {
                                            v2 = caml_young_ptr - 12;
                                            caml_young_ptr -= 12;
                                            if(caml_young_limit <= v2) {
                                                break;
                                            }
                                            else {
                                                caml_call_gc((int)param0, (int)param1);
                                            }
                                        }
                                        unsigned int v119 = v2 + 4;
                                        *(int*)(v119 - 4) = 2301;
                                        char v120 = v8 - 1;
                                        v7[v120] = *(double*)(v118 * 4 + v19 - 4);
                                        *(long long*)v119 = v7[v120];
                                        v8 = v120 + 1;
                                        v3 = v119;
                                    }
                                    int v121 = v21 + v11 - 1;
                                    param0 = (unsigned int)*(char*)(v20 - 4);
                                    if(param0 != 254) {
                                        caml_modify((unsigned int*)(v121 * 2 + v20 - 2), v3);
                                    }
                                    else {
                                        char v122 = v8 - 1;
                                        v7[v122] = *(double*)v3;
                                        *(long long*)(v121 * 4 + v20 - 4) = v7[v122];
                                        v8 = v122 + 1;
                                    }
                                    v10 = v11;
                                    v11 -= 2;
                                }
                                while(v10 != 1);
                            }
                        }
                        else {
                            unsigned int v123 = 1;
                            v11 -= 2;
                            if((int)v11 >= 1) {
                                v4 = v10;
                                v12 = v19;
                                do {
                                    int v124 = v4 + v123 - 1;
                                    int v125 = v12;
                                    if(*(char*)(v125 - 4) != 254) {
                                        v1 = *(unsigned int*)(v124 * 2 + v125 - 2);
                                    }
                                    else {
                                        while(1) {
                                            v0 = caml_young_ptr - 12;
                                            caml_young_ptr -= 12;
                                            if(caml_young_limit <= v0) {
                                                break;
                                            }
                                            else {
                                                caml_call_gc(254, (int)param1);
                                            }
                                        }
                                        unsigned int v126 = v0 + 4;
                                        *(int*)(v126 - 4) = 2301;
                                        char v127 = v8 - 1;
                                        v7[v127] = *(double*)(v124 * 4 + v12 - 4);
                                        *(long long*)v126 = v7[v127];
                                        v8 = v127 + 1;
                                        v1 = v126;
                                    }
                                    int v128 = v21 + v123 - 1;
                                    if(*(char*)(v20 - 4) != 254) {
                                        caml_modify((unsigned int*)(v128 * 2 + v20 - 2), v1);
                                    }
                                    else {
                                        char v129 = v8 - 1;
                                        v7[v129] = *(double*)v1;
                                        *(long long*)(v128 * 4 + v20 - 4) = v7[v129];
                                        v8 = v129 + 1;
                                    }
                                    v10 = v123;
                                    v123 += 2;
                                }
                                while(v10 != v11);
                            }
                        }
                        return 1;
                    }
                }
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__bubble_1174() {
    int v0;
    void* ptr0;
    int v1 = sub_8051140(v0);
    unsigned int v2 = gvar_8076388;
    unsigned int v3 = *(unsigned int*)v1;
    char v4 = v2 == v3;
    char v5 = (int)v2 > (int)v3;
    char v6 = __parity__((unsigned char)v3 - (unsigned char)v2);
    char v7 = v2 > v3;
    char v8 = (int)(((v3 - v2) ^ v3) & (v2 ^ v3)) < 0;
    char v9 = (((v3 - v2) ^ (v2 ^ v3)) >>> 4) & 0x1;
    if(v4) {
        return *(int*)(v1 + 4);
    }
    int* ptr1 = &ptr0;
    /*BAD_CALL!*/ caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__bubbledown_1170(int param0) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    char v4;
    char v5;
    char v6;
    char v7;
    char v8;
    char v9;
    int v10;
    unsigned int v11;
    int v12;
    char v13;
    int v14;
    int v15;
    int v16;
    unsigned int v17;
    int v18;
    int* ptr0 = &v13;
    char v19 = &v13 == 20;
    char v20 = (int)&v16 < 0;
    char v21 = __parity__((unsigned char)&v13 - 20);
    char v22 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v13 ^ 0x14) ^ (int)&v16) >>> 4) & 0x1);
    char v23 = (unsigned int)&v13 < 20;
    char v24 = (int)(int*)((int)(int*)((int)&v16 ^ (int)&v13) & (int)(int*)((int)&v13 ^ 0x14)) < 0;
    while(1) {
        v12 = v15;
        v11 = v17;
        v16 = param0;
        int v25 = *(int*)(param0 + 16);
        unsigned int v26 = (unsigned int)camlArray__maxson_1155(v25);
        v17 = v26;
        int v27 = v16;
        int v28 = *(int*)(v27 + 12);
        int v29 = *(int*)(v28 - 4);
        int v30 = *(int*)(v28 - 4);
        unsigned int v31 = (unsigned int)(unsigned char)v30;
        char v32 = v31 == 254;
        char v33 = (int)v31 < 254;
        char v34 = __parity__((unsigned char)v31 - 254);
        char v35 = v31 < 254;
        char v36 = (((v31 - 254) ^ v31) & (v31 ^ 0xfe)) < 0;
        char v37 = (((v31 - 254) ^ (v31 ^ 0xfe)) >>> 4) & 0x1;
        if(!v32) {
            v10 = v29;
            unsigned int v38 = (unsigned int)(v29 >>> 9);
            char v39 = (v10 >>> 8) & 0x1;
            char v40 = v36;
            char v41 = v38 ? 0: 1;
            char v42 = v38 >= 0x80000000;
            char v43 = __parity__((unsigned char)v38);
            v9 = v38 == v17;
            v8 = (int)v38 < (int)v17;
            v7 = __parity__((unsigned char)v38 - (unsigned char)v17);
            v6 = v38 < v17;
            v5 = (int)(((v38 - v17) ^ v38) & (v38 ^ v17)) < 0;
            v4 = (((v38 - v17) ^ (v38 ^ v17)) >>> 4) & 0x1;
            if(v6 || v9) {
                goto loc_8051105;
            }
            else {
                v3 = *(unsigned int*)(v17 * 2 + v28 - 2);
                goto loc_8051090;
            }
        }
        else {
            v10 = v29;
            unsigned int v44 = (unsigned int)(v29 >>> 10);
            char v45 = (v10 >>> 9) & 0x1;
            char v46 = v36;
            char v47 = v44 ? 0: 1;
            char v48 = v44 >= 0x80000000;
            char v49 = __parity__((unsigned char)v44);
            v9 = v44 == v17;
            v8 = (int)v44 < (int)v17;
            v7 = __parity__((unsigned char)v44 - (unsigned char)v17);
            v6 = v44 < v17;
            v5 = (int)(((v44 - v17) ^ v44) & (v44 ^ v17)) < 0;
            v4 = (((v44 - v17) ^ (v44 ^ v17)) >>> 4) & 0x1;
        }
        if(v6 || v9) {
            goto loc_8051100;
        }
        else {
            while(1) {
                unsigned int v50 = caml_young_ptr;
                unsigned int v51 = caml_young_ptr;
                v2 = v50 - 12;
                char v52 = v2 ? 0: 1;
                char v53 = v2 >= 0x80000000;
                char v54 = __parity__((unsigned char)v2);
                char v55 = (((v51 ^ 0xc) ^ v2) >>> 4) & 0x1;
                char v56 = v51 < 12;
                char v57 = (int)((v2 ^ v51) & (v51 ^ 0xc)) < 0;
                caml_young_ptr = v2;
                char v58 = caml_young_limit == v2;
                char v59 = (int)caml_young_limit > (int)v2;
                char v60 = __parity__((unsigned char)v2 - (unsigned char)caml_young_limit);
                char v61 = caml_young_limit > v2;
                char v62 = (int)(((v2 - caml_young_limit) ^ v2) & (caml_young_limit ^ v2)) < 0;
                char v63 = (((v2 - caml_young_limit) ^ (caml_young_limit ^ v2)) >>> 4) & 0x1;
                if(!v61) {
                    break;
                }
                else {
                    int v64 = caml_call_gc();
                }
            }
            v3 = v2 + 4;
            *(int*)(v3 - 4) = 2301;
            char v65 = 6;
            __SyntheticTypeUnknownF v66 = *(double*)(v17 * 4 + v28 - 4);
            *(long long*)v3 = v66;
            char v67 = 7;
        loc_8051090:
            int v68 = *(int*)(v27 + 12);
            int v69 = *(int*)(v68 - 4);
            int v70 = *(int*)(v68 - 4);
            unsigned int v71 = (unsigned int)(unsigned char)v70;
            char v72 = v71 == 254;
            char v73 = (int)v71 < 254;
            char v74 = __parity__((unsigned char)v71 - 254);
            char v75 = v71 < 254;
            char v76 = (((v71 - 254) ^ v71) & (v71 ^ 0xfe)) < 0;
            char v77 = (((v71 - 254) ^ (v71 ^ 0xfe)) >>> 4) & 0x1;
            v10 = v69;
            if(!v72) {
                v1 = (unsigned int)(v69 >>> 9);
                char v78 = (v10 >>> 8) & 0x1;
                char v79 = v76;
                char v80 = v1 ? 0: 1;
                char v81 = v1 >= 0x80000000;
                char v82 = __parity__((unsigned char)v1);
                unsigned int v83 = v11;
                v9 = v83 == v1;
                v8 = (int)v83 > (int)v1;
                v7 = __parity__((unsigned char)v1 - (unsigned char)v83);
                v6 = v83 > v1;
                v5 = (int)(((v1 - v83) ^ v1) & (v83 ^ v1)) < 0;
                v4 = (((v1 - v83) ^ (v83 ^ v1)) >>> 4) & 0x1;
                if(v6 || v9) {
                    goto loc_80510FB;
                }
                else {
                    unsigned int* ptr1 = (unsigned int*)(v83 * 2 + v68 - 2);
                    unsigned int v84 = caml_modify(ptr1, v3);
                    int* ptr2 = &v18;
                    char v85 = &v13 == 20;
                    char v86 = (int)&v16 < 0;
                    char v87 = __parity__((unsigned char)&v13 - 20);
                    char v88 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v18 ^ 0x8) ^ (int)&v16) >>> 4) & 0x1);
                    char v89 = (unsigned int)&v18 >= 0xfffffff8;
                    char v90 = (int)(int*)((int)(int*)((int)&v16 ^ (int)&v18) & (int*)~(int)(int*)((int)&v18 ^ 0x8)) < 0;
                    goto loc_80510E1;
                }
            }
            else {
                v1 = (unsigned int)(v69 >>> 10);
                char v91 = (v10 >>> 9) & 0x1;
                char v92 = v76;
                char v93 = v1 ? 0: 1;
                char v94 = v1 >= 0x80000000;
                char v95 = __parity__((unsigned char)v1);
                v0 = v11;
                v9 = v0 == v1;
                v8 = (int)v0 > (int)v1;
                v7 = __parity__((unsigned char)v1 - (unsigned char)v0);
                v6 = v0 > v1;
                v5 = (int)(((v1 - v0) ^ v1) & (v0 ^ v1)) < 0;
                v4 = (((v1 - v0) ^ (v0 ^ v1)) >>> 4) & 0x1;
            }
            if(v6 || v9) {
                break;
            }
            else {
                char v96 = 6;
                v66 = *(double*)v3;
                *(long long*)(v0 * 4 + v68 - 4) = v66;
                v67 = 7;
            loc_80510E1:
                v15 = v12;
                param0 = v27;
            }
        }
    }
    int v97 = caml_ml_array_bound_error(v16, v12, (int)v11, v14);
loc_80510FB:
    int v98 = caml_ml_array_bound_error(v16, v12, (int)v11, v14);
loc_8051100:
    int v99 = caml_ml_array_bound_error(v16, v12, (int)v11, v14);
loc_8051105:
    caml_ml_array_bound_error(v16, v12, (int)v11, v14);
}

int camlArray__concat_1075() {
    return camlArray__find_init_1077();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__concat_aux_1062() {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3 = v0;
    int v4 = camlArray__size_1065();
    int v5 = caml_c_call();
    int result = v5;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v1, v2);
        }
    }
    *ptr0 = 4343;
    *(int*)(int)(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlArray__fill_1070;
    *(ptr0 + 4) = v5;
    camlArray__fill_1070((int)(ptr0 + 1), v2);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__copy_1049(int param0, unsigned int param1) {
    unsigned int v0;
    unsigned int v1;
    long long* ptr0;
    __SyntheticTypeUnknown v2;
    int v3;
    int v4;
    char v5;
    int v6 = *(int*)(v4 - 4);
    int v7 = ((unsigned char)v6 == 254 ? v6 >>> 10: v6 >>> 9) | 0x1;
    if(v7 == 1) {
        return &camlArray__32;
    }
    int v8 = v7;
    int v9 = v4;
    if(*(char*)(v4 - 4) != 254) {
        ptr0 = *(long long**)v4;
    }
    else {
        while(1) {
            v1 = caml_young_ptr - 12;
            caml_young_ptr -= 12;
            if(caml_young_limit <= v1) {
                break;
            }
            else {
                caml_call_gc(v7, (int)param1);
            }
        }
        ptr0 = (long long*)(v1 + 4);
        *(int*)((char*)ptr0 - 4) = 2301;
        v2[v5 - 1] = *(double*)v4;
        *ptr0 = v2[v5 - 1];
    }
    long long* ptr1 = ptr0;
    int v10 = v7;
    int result = caml_c_call();
    int v11 = 3;
    unsigned int v12 = (unsigned int)(v8 - 2);
    if((int)v12 >= 3) {
        do {
            v7 = v9;
            if(*(char*)(v7 - 4) != 254) {
                param1 = *(unsigned int*)((char*)((int)(int*)(v11 * 2) + v7) - 2);
            }
            else {
                while(1) {
                    v0 = caml_young_ptr - 12;
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= v0) {
                        break;
                    }
                    else {
                        caml_call_gc(v7, (int)param1);
                    }
                }
                param1 = v0 + 4;
                *(int*)(param1 - 4) = 2301;
                *(long long*)param1 = *(double*)((int*)((int)(int*)(v11 * 4) + v7) - 1);
            }
            if(*(char*)(result - 4) != 254) {
                caml_modify((unsigned int*)((char*)((int)(int*)(v11 * 2) + result) - 2), param1);
            }
            else {
                *(long long*)((int*)((int)(int*)(v11 * 4) + result) - 1) = *(double*)param1;
            }
            v3 = v11;
            v11 += 2;
        }
        while(v3 != v12);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__entry() {
    camlArray = &camlArray__21;
    gvar_8076334 = &camlArray__20;
    gvar_8076338 = &camlArray__20;
    gvar_8076348 = &camlArray__19;
    gvar_807633C = &camlArray__18;
    gvar_8076380 = &camlArray__17;
    gvar_8076340 = &camlArray__16;
    gvar_8076344 = &camlArray__15;
    gvar_807634C = &camlArray__14;
    gvar_8076350 = &camlArray__13;
    gvar_807635C = &camlArray__12;
    gvar_8076360 = &camlArray__11;
    gvar_8076364 = &camlArray__10;
    gvar_8076368 = &camlArray__9;
    gvar_8076354 = &camlArray__8;
    gvar_8076384 = &camlArray__7;
    gvar_8076358 = &camlArray__6;
    gvar_807636C = &camlArray__5;
    gvar_8076370 = &camlArray__4;
    int v0 = caml_alloc1();
    *(int*)v0 = 0x400;
    *(int*)(v0 + 4) = "Array.Bottom";
    gvar_8076388 = (int*)(v0 + 4);
    gvar_8076374 = &camlArray__2;
    gvar_807638C = 11;
    gvar_8076378 = &camlArray__1;
    gvar_807637C = &camlArray__1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__fill_1070(int param0, int param1) {
    unsigned int v0;
    unsigned int v1;
    __SyntheticTypeUnknown v2;
    int v3;
    int* ptr0;
    unsigned int v4;
    char v5;
    while(ptr0 != 1) {
        int v6 = v3;
        int* ptr1 = *(unsigned int*)(ptr0 + 1);
        int v7 = *ptr0;
        int v8 = *ptr0;
        unsigned int v9 = 1;
        int v10 = *(int*)(v7 - 4);
        unsigned int v11 = (unsigned int)((((unsigned char)v10 == 254 ? v10 >>> 10: v10 >>> 9) | 0x1) - 2);
        if((int)v11 >= 1) {
            do {
                int v12 = v8;
                if(*(char*)(v12 - 4) != 254) {
                    v1 = *(unsigned int*)(v9 * 2 + v12 - 2);
                }
                else {
                    while(1) {
                        v0 = caml_young_ptr - 12;
                        caml_young_ptr -= 12;
                        if(caml_young_limit <= v0) {
                            break;
                        }
                        else {
                            caml_call_gc(v12, param1);
                        }
                    }
                    v1 = v0 + 4;
                    *(int*)(v1 - 4) = 2301;
                    v2[v5 - 1] = *(double*)(v9 * 4 + v12 - 4);
                    *(long long*)v1 = v2[v5 - 1];
                }
                int v13 = v9 + v6 - 1;
                param1 = *(int*)(param0 + 12);
                if(*(char*)(param1 - 4) != 254) {
                    caml_modify((unsigned int*)(v13 * 2 + param1 - 2), v1);
                }
                else {
                    v2[v5 - 1] = *(double*)v1;
                    *(long long*)(v13 * 4 + param1 - 4) = v2[v5 - 1];
                }
                v4 = v9;
                v9 += 2;
            }
            while(v4 != v11);
        }
        int v14 = *(int*)(v8 - 4);
        v3 = (((unsigned char)v14 == 254 ? v14 >>> 10: v14 >>> 9) | 0x1) + v6 - 1;
        ptr0 = ptr1;
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__fill_1087(unsigned int param0, double* param1) {
    int* ptr0;
    void* ptr1;
    unsigned int v0;
    char v1;
    int v2;
    int* ptr2 = &ptr1;
    char v3 = &ptr1 == 8;
    char v4 = (int)&v1 < 0;
    char v5 = __parity__((unsigned char)&ptr1 - 8);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x8) ^ (int)&v1) >>> 4) & 0x1);
    char v7 = (unsigned int)&ptr1 < 8;
    char v8 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&v1) & (int)(int*)((int)&ptr1 ^ 0x8)) < 0;
    int v9 = v2;
    double* ptr3 = param1;
    char v10 = v0 == 1;
    char v11 = (int)v0 < 1;
    char v12 = __parity__((unsigned char)v0 - 1);
    char v13 = v0 < 1;
    char v14 = (((v0 - 1) ^ v0) & (v0 ^ 0x1)) < 0;
    char v15 = (((v0 - 1) ^ (v0 ^ 0x1)) >>> 4) & 0x1;
    if(v11 == v14) {
        char v16 = param0 == 1;
        char v17 = (int)param0 < 1;
        char v18 = __parity__((unsigned char)param0 - 1);
        char v19 = param0 < 1;
        char v20 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
        char v21 = (((param0 - 1) ^ (param0 ^ 0x1)) >>> 4) & 0x1;
        if(v17 == v20) {
            param1 = *(unsigned int*)(v9 - 4);
            double* ptr4 = *(unsigned int*)(v9 - 4);
            unsigned int v22 = (unsigned int)(unsigned char)ptr4;
            char v23 = v22 == 254;
            char v24 = (int)v22 < 254;
            char v25 = __parity__((unsigned char)v22 - 254);
            char v26 = v22 < 254;
            char v27 = (((v22 - 254) ^ v22) & (v22 ^ 0xfe)) < 0;
            char v28 = (((v22 - 254) ^ (v22 ^ 0xfe)) >>> 4) & 0x1;
            if(!v23) {
                double* ptr5 = param1;
                double* ptr6 = param1;
                ptr0 = (int*)((int)ptr5 >>> 9);
                char v29 = (int*)((int)(int*)((int)ptr6 >>> 8) & 0x1);
                char v30 = v27;
                char v31 = ptr0 ? 0: 1;
                char v32 = (int)ptr0 < 0;
                char v33 = __parity__((unsigned char)ptr0);
            }
            else {
                double* ptr7 = param1;
                double* ptr8 = param1;
                ptr0 = (int*)((int)ptr7 >>> 10);
                char v34 = (int*)((int)(int*)((int)ptr8 >>> 9) & 0x1);
                char v35 = v27;
                char v36 = ptr0 ? 0: 1;
                char v37 = (int)ptr0 < 0;
                char v38 = __parity__((unsigned char)ptr0);
            }
            int* ptr9 = (int*)((int)ptr0 | 0x1);
            int* ptr10 = (int*)((int)ptr0 | 0x1);
            int* ptr11 = (int*)((int)ptr9 - param0);
            char v39 = ptr11 ? 0: 1;
            char v40 = (int)ptr11 < 0;
            char v41 = __parity__((unsigned char)ptr11);
            char v42 = (int*)((int)(int*)((int)(int*)((int)(int*)(param0 ^ (int)ptr10) ^ (int)ptr11) >>> 4) & 0x1);
            char v43 = param0 > (unsigned int)ptr10;
            char v44 = (int)(int*)((int)(int*)((int)ptr11 ^ (int)ptr10) & (int)(int*)(param0 ^ (int)ptr10)) < 0;
            int* ptr12 = (int*)((char*)ptr11 + 1);
            char v45 = ptr12 == v0;
            char v46 = (int)ptr12 > (int)v0;
            char v47 = __parity__((unsigned char)v0 - (unsigned char)ptr12);
            char v48 = (unsigned int)ptr12 > v0;
            char v49 = (int)(int*)((int)(int*)((int)(int*)(v0 - (int)ptr12) ^ v0) & (int)(int*)((int)ptr12 ^ v0)) < 0;
            char v50 = (int*)((int)(int*)((int)(int*)((int)(int*)(v0 - (int)ptr12) ^ (int)(int*)((int)ptr12 ^ v0)) >>> 4) & 0x1);
            if((v45 || v46 != v49)) {
                unsigned int v51 = v0;
                v0 = param0 + v0 - 3;
                if((int)v0 >= (int)v51) {
                    do {
                        if(*(char*)(v9 - 4) != 254) {
                            caml_modify(v51 * 2 + v9 - 2, (int)ptr3);
                        }
                        else {
                            *(long long*)(v51 * 4 + v9 - 4) = *ptr3;
                        }
                        param0 = v51;
                        v51 += 2;
                    }
                    while(param0 != v0);
                }
                return 1;
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__fill_1135(int param0) {
    int v0;
    unsigned int* ptr0;
    while(ptr0 != 1) {
        unsigned int* ptr1 = *(ptr0 + 1);
        unsigned int v1 = *ptr0;
        int v2 = *(int*)(param0 + 12);
        if(*(char*)(v2 - 4) != 254) {
            caml_modify((unsigned int*)(v0 * 2 + v2 - 2), v1);
        }
        else {
            *(long long*)(v0 * 4 + v2 - 4) = *(double*)v1;
        }
        v0 += 2;
        ptr0 = ptr1;
    }
    return *(int*)(param0 + 12);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__find_init_1077() {
    int* ptr0;
    float* ptr1;
    __SyntheticTypeUnknown v0;
    unsigned int v1;
    char v2;
    unsigned int* ptr2;
    do {
        unsigned int* ptr3 = ptr2;
        if(ptr3 == 1) {
            return &camlArray__36;
        }
        ptr2 = *(ptr3 + 1);
        ptr1 = *ptr3;
        int v3 = *(int*)(ptr1 - 1);
        v1 = (unsigned int)(((unsigned char)v3 == 254 ? v3 >>> 10: v3 >>> 9) | 0x1);
    }
    while((int)v1 <= 1);
    if(*(char*)(ptr1 - 1) == 254) {
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc((int)ptr1, (int)v1);
            }
        }
        *ptr0 = 2301;
        v0[v2 - 1] = *(double*)ptr1;
        *(long long*)(ptr0 + 1) = v0[v2 - 1];
    }
    return camlArray__concat_aux_1062();
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlArray__fold_left_1139(int param0, int param1) {
    int* ptr0;
    unsigned int v0;
    __SyntheticTypeUnknown v1;
    unsigned int v2;
    unsigned int v3;
    char v4;
    unsigned int v5;
    while(1) {
        v0 = caml_young_ptr - 8;
        caml_young_ptr -= 8;
        if(caml_young_limit <= v0) {
            break;
        }
        else {
            caml_call_gc(param0, param1);
        }
    }
    unsigned int* ptr1 = (unsigned int*)(v0 + 4);
    ptr1[-1] = 0x400;
    ptr1[0] = v3;
    unsigned int v6 = 1;
    int v7 = *(int*)(param0 - 4);
    unsigned int v8 = (unsigned int)((((unsigned char)v7 == 254 ? v7 >>> 10: v7 >>> 9) | 0x1) - 2);
    if((int)v8 >= 1) {
        unsigned int v9 = v8;
        unsigned int v10 = 1;
        unsigned int* ptr2 = ptr1;
        int v11 = param0;
        unsigned int v12 = v2;
        do {
            int v13 = v11;
            if(*(char*)(v13 - 4) == 254) {
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc(v13, (int)v6);
                    }
                }
                *ptr0 = 2301;
                v1[v4 - 1] = *(double*)(v6 * 4 + v13 - 4);
                *(long long*)(ptr0 + 1) = v1[v4 - 1];
            }
            caml_apply2((int)v12);
            ptr1 = ptr2;
            caml_modify(ptr1, v2);
            v5 = v10;
            v6 = v10 + 2;
            v10 += 2;
        }
        while(v5 != v9);
    }
    return ptr1[0];
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlArray__fold_right_1145(unsigned int param0) {
    int* ptr0;
    unsigned int v0;
    __SyntheticTypeUnknown v1;
    unsigned int v2;
    unsigned int v3;
    unsigned int v4;
    char v5;
    while(1) {
        v0 = caml_young_ptr - 8;
        caml_young_ptr -= 8;
        if(caml_young_limit <= v0) {
            break;
        }
        else {
            caml_call_gc((int)param0, (int)v2);
        }
    }
    unsigned int* ptr1 = (unsigned int*)(v0 + 4);
    ptr1[-1] = 0x400;
    ptr1[0] = param0;
    int v6 = *(int*)(v4 - 4);
    unsigned int v7 = (unsigned int)((((unsigned char)v6 == 254 ? v6 >>> 10: v6 >>> 9) | 0x1) - 2);
    if((int)v7 >= 1) {
        unsigned int v8 = v7;
        unsigned int* ptr2 = ptr1;
        unsigned int v9 = v4;
        unsigned int v10 = v2;
        do {
            unsigned int v11 = v9;
            if(*(char*)(v11 - 4) == 254) {
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc((int)v7, (int)v2);
                    }
                }
                *ptr0 = 2301;
                v1[v5 - 1] = *(double*)(v7 * 4 + v11 - 4);
                *(long long*)(ptr0 + 1) = v1[v5 - 1];
            }
            caml_apply2((int)v10);
            ptr1 = ptr2;
            caml_modify(ptr1, v2);
            v3 = v8;
            v7 = v8 - 2;
            v8 -= 2;
        }
        while(v3 != 1);
    }
    return ptr1[0];
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlArray__init_1037() {
    unsigned int v0;
    int* ptr0;
    int* result;
    if(ptr0 == 1) {
        return (int*)&camlArray__34;
    }
    int* ptr1 = result;
    int* ptr2 = ptr0;
    int v1 = *result((int)ptr0, (int)result);
    int* ptr3 = ptr0;
    result = (int*)caml_c_call();
    if((int)(int*)((char*)ptr0 - 2) >= 3) {
        int* ptr4 = (int*)((char*)ptr0 - 2);
        unsigned int v2 = 3;
        ptr2 = result;
        do {
            unsigned int v3 = (unsigned int)*ptr1((int)ptr2);
            result = ptr2;
            if(*(char*)(result - 1) != 254) {
                v0 = v2;
                caml_modify((unsigned int*)((char*)(v0 * 2 + (int)result) - 2), v3);
            }
            else {
                v0 = v2;
                *(long long*)((int*)(v0 * 4 + (int)result) - 1) = *(double*)v3;
            }
            v2 = v0 + 2;
        }
        while((int*)((char*)ptr4 + 2) != v2);
    }
    return result;
}

void camlArray__isortto_1209() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__iter_1101() {
    int* ptr0;
    __SyntheticTypeUnknown v0;
    unsigned int v1;
    int* ptr1;
    char v2;
    unsigned int v3 = 1;
    int v4 = *(int*)(v1 - 4);
    unsigned int v5 = (unsigned int)((((unsigned char)v4 == 254 ? v4 >>> 10: v4 >>> 9) | 0x1) - 2);
    if((int)v5 >= 1) {
        unsigned int v6 = v5;
        unsigned int v7 = 1;
        unsigned int v8 = v1;
        int* ptr2 = ptr1;
        do {
            unsigned int v9 = v8;
            if(*(char*)(v9 - 4) == 254) {
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc((int)v3, (int)v5);
                    }
                }
                *ptr0 = 2301;
                v0[v2 - 1] = *(double*)(v3 * 4 + v9 - 4);
                *(long long*)(ptr0 + 1) = v0[v2 - 1];
            }
            *ptr2();
            v1 = v7;
            v3 = v7 + 2;
            v7 += 2;
        }
        while(v1 != v6);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__iteri_1111() {
    int* ptr0;
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    unsigned int v3;
    unsigned int v4 = 1;
    int v5 = *(int*)(v3 - 4);
    unsigned int v6 = (unsigned int)((((unsigned char)v5 == 254 ? v5 >>> 10: v5 >>> 9) | 0x1) - 2);
    if((int)v6 >= 1) {
        unsigned int v7 = v6;
        unsigned int v8 = 1;
        unsigned int v9 = v3;
        int v10 = v1;
        do {
            unsigned int v11 = v9;
            if(*(char*)(v11 - 4) == 254) {
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc((int)v4, (int)v11);
                    }
                }
                *ptr0 = 2301;
                v0[v2 - 1] = *(double*)(v4 * 4 + v11 - 4);
                *(long long*)(ptr0 + 1) = v0[v2 - 1];
            }
            caml_apply2(v10);
            v3 = v8;
            v4 = v8 + 2;
            v8 += 2;
        }
        while(v3 != v7);
    }
    return 1;
}

int camlArray__list_length_1126() {
    int result;
    unsigned int v0;
    while(v0 != 1) {
        v0 = *(unsigned int*)(v0 + 4);
        result = result + 2;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlArray__loop_1201() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__make_matrix_1042(int param0) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    int v3 = param0;
    int result = caml_c_call();
    if((int)(v0 - 2) >= 1) {
        unsigned int v4 = v0 - 2;
        unsigned int v5 = 1;
        int v6 = result;
        do {
            unsigned int v7 = (unsigned int)caml_c_call();
            unsigned int v8 = v5;
            result = v6;
            caml_modify((unsigned int*)(v8 * 2 + result - 2), v7);
            v5 = v8 + 2;
        }
        while(v4 + 2 != v5);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlArray__map_1105() {
    float* ptr0;
    int* ptr1;
    int* ptr2;
    __SyntheticTypeUnknown v0;
    float* ptr3;
    char v1;
    float* ptr4;
    int v2 = *(int*)(ptr4 - 1);
    unsigned int v3 = (unsigned int)(((unsigned char)v2 == 254 ? v2 >>> 10: v2 >>> 9) | 0x1);
    if(v3 == 1) {
        return &camlArray__24;
    }
    unsigned int v4 = v3;
    float* ptr5 = ptr4;
    float* ptr6 = ptr3;
    if(*(char*)(ptr4 - 1) == 254) {
        while(1) {
            ptr2 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr2) {
                break;
            }
            else {
                caml_call_gc((int)ptr3, (int)(unsigned int)(unsigned char)v2);
            }
        }
        *ptr2 = 2301;
        v0[v1 - 1] = *(double*)ptr4;
        *(long long*)(ptr2 + 1) = v0[v1 - 1];
    }
    void* ptr7 = (void*)*ptr3();
    unsigned int v5 = v4;
    unsigned int result = (unsigned int)caml_c_call();
    ptr4 = (float*)0x3;
    if((int)(v4 - 2) >= 3) {
        unsigned int v6 = v4 - 2;
        float* ptr8 = (float*)0x3;
        v4 = result;
        do {
            float* ptr9 = ptr5;
            if(*(char*)(ptr9 - 1) == 254) {
                while(1) {
                    ptr1 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr1) {
                        break;
                    }
                    else {
                        caml_call_gc((int)ptr9, (int)(unsigned int)(unsigned char)v2);
                    }
                }
                *ptr1 = 2301;
                *(long long*)(ptr1 + 1) = *(double*)((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr9) - 1);
            }
            unsigned int v7 = (unsigned int)*ptr6();
            result = v4;
            if(*(char*)(result - 4) != 254) {
                ptr0 = ptr8;
                caml_modify((unsigned int*)((char*)((int)(int*)((int)ptr0 * 2) + result) - 2), v7);
            }
            else {
                ptr0 = ptr8;
                *(long long*)((int*)((int)(int*)((int)ptr0 * 4) + result) - 1) = *(double*)v7;
            }
            ptr4 = (float*)((char*)ptr0 + 2);
            ptr8 = (float*)((char*)ptr0 + 2);
        }
        while(v6 + 2 != ptr8);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
float* camlArray__mapi_1115() {
    unsigned int v0;
    int* ptr0;
    int* ptr1;
    __SyntheticTypeUnknown v1;
    unsigned int v2;
    char v3;
    float* result;
    int v4 = *(int*)(result - 1);
    float* ptr2 = (float*)(((unsigned char)v4 == 254 ? v4 >>> 10: v4 >>> 9) | 0x1);
    if(ptr2 == 1) {
        return (float*)&camlArray__23;
    }
    float* ptr3 = ptr2;
    float* ptr4 = result;
    unsigned int v5 = v2;
    if(*(char*)(result - 1) == 254) {
        while(1) {
            ptr1 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr1) {
                break;
            }
            else {
                caml_call_gc((int)v2, (int)(unsigned int)(unsigned char)v4);
            }
        }
        *ptr1 = 2301;
        v1[v3 - 1] = *(double*)result;
        *(long long*)(ptr1 + 1) = v1[v3 - 1];
    }
    caml_apply2((int)v2);
    unsigned int v6 = v2;
    float* ptr5 = ptr3;
    result = (float*)caml_c_call();
    unsigned int v7 = 3;
    if((int)(int*)((char*)ptr3 - 2) >= 3) {
        int* ptr6 = (int*)((char*)ptr3 - 2);
        unsigned int v8 = 3;
        ptr3 = result;
        do {
            float* ptr7 = ptr4;
            if(*(char*)(ptr7 - 1) == 254) {
                while(1) {
                    ptr0 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr0) {
                        break;
                    }
                    else {
                        caml_call_gc((int)ptr7, (int)(unsigned int)(unsigned char)v4);
                    }
                }
                *ptr0 = 2301;
                *(long long*)(ptr0 + 1) = *(double*)((int*)(v7 * 4 + (int)ptr7) - 1);
            }
            caml_apply2((int)v5);
            result = ptr3;
            if(*(char*)(result - 1) != 254) {
                v0 = v8;
                caml_modify((unsigned int*)((char*)(v0 * 2 + (int)result) - 2), v2);
            }
            else {
                v0 = v8;
                *(long long*)((int*)(v0 * 4 + (int)result) - 1) = *(double*)v2;
            }
            v7 = v0 + 2;
            v8 = v0 + 2;
        }
        while((int*)((char*)ptr6 + 2) != v8);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__maxson_1155(int par0) {
}

void camlArray__merge_1191() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__of_list_1130() {
    int* ptr0;
    unsigned int* ptr1;
    if(ptr1 != 1) {
        int v0 = camlArray__list_length_1126();
        int v1 = caml_c_call();
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 20);
            caml_young_ptr -= 20;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc();
            }
        }
        *ptr0 = 4343;
        *(int*)(int)(ptr0 + 1) = &caml_curry2;
        *(ptr0 + 2) = 5;
        *(ptr0 + 3) = &camlArray__fill_1135;
        *(ptr0 + 4) = v1;
        return camlArray__fill_1135((int)(ptr0 + 1));
    }
    return &camlArray__22;
}

int camlArray__size_1065() {
    int result;
    int* ptr0;
    while(ptr0 != 1) {
        int v0 = *(int*)(*ptr0 - 4);
        result = (((unsigned char)v0 == 254 ? v0 >>> 10: v0 >>> 9) | 0x1) + result - 1;
        ptr0 = *(unsigned int*)(ptr0 + 1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__sort_1152(int param0, double* param1) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    double* ptr0;
    unsigned int v3;
    unsigned int v4;
    int v5;
    char v6;
    char v7;
    char v8;
    char v9;
    char v10;
    char v11;
    int v12;
    int v13;
    int v14;
    unsigned int v15;
    int v16;
    __SyntheticTypeUnknown v17;
    char v18;
    char v19;
    int* ptr1;
    int v20;
    int v21;
    int v22;
    int v23;
    char v24;
    int* ptr2 = &v16;
    int* ptr3 = &ptr1;
    char v25 = &v16 == 32;
    char v26 = (int)&ptr1 < 0;
    char v27 = __parity__((unsigned char)&v16 - 32);
    char v28 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v16 ^ 0x20) ^ (int)&ptr1) >>> 4) & 0x1);
    char v29 = (unsigned int)&v16 < 32;
    char v30 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&v16) & (int)(int*)((int)&v16 ^ 0x20)) < 0;
    int v31 = v22;
    int v32 = v23;
    while(1) {
        unsigned int v33 = caml_young_ptr;
        unsigned int v34 = caml_young_ptr;
        v15 = v33 - 144;
        char v35 = v15 ? 0: 1;
        char v36 = v15 >= 0x80000000;
        char v37 = __parity__((unsigned char)v15);
        char v38 = (((v34 ^ 0x90) ^ v15) >>> 4) & 0x1;
        char v39 = v34 < 144;
        char v40 = (int)((v15 ^ v34) & (v34 ^ 0x90)) < 0;
        caml_young_ptr = v15;
        char v41 = caml_young_limit == v15;
        char v42 = (int)caml_young_limit > (int)v15;
        char v43 = __parity__((unsigned char)v15 - (unsigned char)caml_young_limit);
        char v44 = caml_young_limit > v15;
        char v45 = (int)(((v15 - caml_young_limit) ^ v15) & (caml_young_limit ^ v15)) < 0;
        char v46 = (((v15 - caml_young_limit) ^ (caml_young_limit ^ v15)) >>> 4) & 0x1;
        if(!v44) {
            break;
        }
        else {
            ptr3 = &v20;
            int v47 = caml_call_gc(v31, (int)param1);
        }
    }
    int v48 = (int)(v15 + 4);
    *(int*)(v48 - 4) = 5367;
    *(int*)v48 = &caml_curry2;
    *(int*)(v48 + 4) = 5;
    *(int*)(v48 + 8) = &camlArray__maxson_1155;
    *(int*)(v48 + 12) = v31;
    *(int*)(v48 + 16) = v23;
    int* ptr4 = (int*)(v48 + 24);
    *(ptr4 - 1) = 6391;
    *ptr4 = &caml_curry3;
    *(ptr4 + 1) = 7;
    *(ptr4 + 2) = &camlArray__trickledown_1160;
    *(ptr4 + 3) = v31;
    *(ptr4 + 4) = v23;
    *(ptr4 + 5) = v48;
    int v49 = v48 + 52;
    int v50 = v48 + 52;
    *(int*)(v49 - 4) = 5367;
    *(int*)v49 = &caml_curry3;
    *(int*)(v49 + 4) = 7;
    *(int*)(v49 + 8) = &camlArray__trickle_1165;
    *(int*)(v49 + 12) = v23;
    *(unsigned int*)(v49 + 16) = ptr4;
    int* ptr5 = (int*)(v48 + 76);
    *(ptr5 - 1) = 5367;
    *ptr5 = &caml_curry2;
    *(ptr5 + 1) = 5;
    *(ptr5 + 2) = &camlArray__bubbledown_1170;
    *(ptr5 + 3) = v23;
    *(ptr5 + 4) = v48;
    int* ptr6 = (int*)(v48 + 100);
    ptr1 = (int*)(v48 + 100);
    *(ptr6 - 1) = 4343;
    *ptr6 = &caml_curry2;
    *(ptr6 + 1) = 5;
    *(ptr6 + 2) = &camlArray__bubble_1174;
    *(unsigned int*)(ptr6 + 3) = ptr5;
    int* ptr7 = (int*)(v48 + 120);
    int* ptr8 = (int*)(v48 + 120);
    *(ptr7 - 1) = 5367;
    *ptr7 = &caml_curry2;
    *(ptr7 + 1) = 5;
    *(ptr7 + 2) = &camlArray__trickleup_1178;
    *(ptr7 + 3) = v31;
    *(ptr7 + 4) = v23;
    int v51 = *(int*)(v23 - 4);
    int v52 = *(int*)(v23 - 4);
    unsigned int v53 = (unsigned int)(unsigned char)v52;
    char v54 = v53 == 254;
    char v55 = (int)v53 < 254;
    char v56 = __parity__((unsigned char)v53 - 254);
    char v57 = v53 < 254;
    char v58 = (((v53 - 254) ^ v53) & (v53 ^ 0xfe)) < 0;
    char v59 = (((v53 - 254) ^ (v53 ^ 0xfe)) >>> 4) & 0x1;
    if(!v54) {
        int v60 = v51;
        v14 = v51 >>> 9;
        char v61 = (v60 >>> 8) & 0x1;
        char v62 = v58;
        char v63 = v14 ? 0: 1;
        char v64 = v14 < 0;
        char v65 = __parity__((unsigned char)v14);
    }
    else {
        int v66 = v51;
        v14 = v51 >>> 10;
        char v67 = (v66 >>> 9) & 0x1;
        char v68 = v58;
        char v69 = v14 ? 0: 1;
        char v70 = v14 < 0;
        char v71 = __parity__((unsigned char)v14);
    }
    unsigned int v72 = (unsigned int)(v14 | 0x1);
    char v73 = v72 ? 0: 1;
    char v74 = v72 >= 0x80000000;
    char v75 = __parity__((unsigned char)v72);
    char v76 = 0;
    char v77 = 0;
    unsigned int v78 = v72;
    unsigned int v79 = 3;
    unsigned int v80 = v72;
    int v81 = (int)(v72 + 2);
    char v82 = v81 ? 0: 1;
    char v83 = v81 < 0;
    char v84 = __parity__((unsigned char)v81);
    char v85 = (((v80 ^ 0x2) ^ v81) >>> 4) & 0x1;
    char v86 = v80 >= 0xfffffffe;
    char v87 = ((v81 ^ v80) & ~(v80 ^ 0x2)) < 0;
    int v88 = v81;
    int v89 = v81 >> 1;
    char v90 = v88 & 0x1;
    char v91 = 0;
    char v92 = v89 ? 0: 1;
    char v93 = v89 < 0;
    char v94 = __parity__((unsigned char)v89);
    int v95 = v89 < 0 ? -1: 0;
    double* ptr9 = (double*)((unsigned int)((unsigned long long)v89 | ((unsigned long long)v95 << 32)) % 3);
    int v96 = (unsigned int)((unsigned long long)v89 | ((unsigned long long)v95 << 32)) / 3;
    param1 = ptr9;
    int v97 = v96 * 2 - 1;
    char v98 = v97 == 1;
    char v99 = v97 < 1;
    char v100 = __parity__((unsigned char)v97 - 1);
    char v101 = (unsigned int)v97 < 1;
    char v102 = (((v97 - 1) ^ v97) & (v97 ^ 0x1)) < 0;
    char v103 = (((v97 - 1) ^ (v97 ^ 0x1)) >>> 4) & 0x1;
    if(v99 == v102) {
        v13 = v97;
        do {
            int v104 = v32;
            int v105 = *(int*)(v104 - 4);
            int v106 = *(int*)(v104 - 4);
            unsigned int v107 = (unsigned int)(unsigned char)v106;
            char v108 = v107 == 254;
            char v109 = (int)v107 < 254;
            char v110 = __parity__((unsigned char)v107 - 254);
            char v111 = v107 < 254;
            char v112 = (((v107 - 254) ^ v107) & (v107 ^ 0xfe)) < 0;
            char v113 = (((v107 - 254) ^ (v107 ^ 0xfe)) >>> 4) & 0x1;
            if(!v108) {
                v12 = v105;
                unsigned int v114 = (unsigned int)(v105 >>> 9);
                char v115 = (v12 >>> 8) & 0x1;
                char v116 = v112;
                char v117 = v114 ? 0: 1;
                char v118 = v114 >= 0x80000000;
                char v119 = __parity__((unsigned char)v114);
                v11 = v114 == v97;
                v10 = (int)v114 < v97;
                v9 = __parity__((unsigned char)v114 - (unsigned char)v97);
                v8 = v114 < (unsigned int)v97;
                v7 = (int)(((v114 - v97) ^ v114) & (v114 ^ v97)) < 0;
                v6 = (((v114 - v97) ^ (v114 ^ v97)) >>> 4) & 0x1;
                if(v8 || v11) {
                    /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
                    return 1;
                }
                v5 = *(int*)(v97 * 2 + v104 - 2);
                goto loc_8052C84;
            }
            else {
                v12 = v105;
                unsigned int v120 = (unsigned int)(v105 >>> 10);
                char v121 = (v12 >>> 9) & 0x1;
                char v122 = v112;
                char v123 = v120 ? 0: 1;
                char v124 = v120 >= 0x80000000;
                char v125 = __parity__((unsigned char)v120);
                v11 = v120 == v97;
                v10 = (int)v120 < v97;
                v9 = __parity__((unsigned char)v120 - (unsigned char)v97);
                v8 = v120 < (unsigned int)v97;
                v7 = (int)(((v120 - v97) ^ v120) & (v120 ^ v97)) < 0;
                v6 = (((v120 - v97) ^ (v120 ^ v97)) >>> 4) & 0x1;
            }
            if(v8 || v11) {
                caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
                /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
                return 1;
            }
            while(1) {
                unsigned int v126 = caml_young_ptr;
                unsigned int v127 = caml_young_ptr;
                v4 = v126 - 12;
                char v128 = v4 ? 0: 1;
                char v129 = v4 >= 0x80000000;
                char v130 = __parity__((unsigned char)v4);
                char v131 = (((v127 ^ 0xc) ^ v4) >>> 4) & 0x1;
                char v132 = v127 < 12;
                char v133 = (int)((v4 ^ v127) & (v127 ^ 0xc)) < 0;
                caml_young_ptr = v4;
                char v134 = caml_young_limit == v4;
                char v135 = (int)caml_young_limit > (int)v4;
                char v136 = __parity__((unsigned char)v4 - (unsigned char)caml_young_limit);
                char v137 = caml_young_limit > v4;
                char v138 = (int)(((v4 - caml_young_limit) ^ v4) & (caml_young_limit ^ v4)) < 0;
                char v139 = (((v4 - caml_young_limit) ^ (caml_young_limit ^ v4)) >>> 4) & 0x1;
                if(!v137) {
                    break;
                }
                else {
                    int v140 = caml_call_gc((int)v107, v104);
                }
            }
            v5 = (int)(v4 + 4);
            *(int*)(v5 - 4) = 2301;
            char v141 = v18 - 1;
            v17[v141] = *(double*)(v97 * 4 + v104 - 4);
            *(long long*)v5 = v17[v141];
            v18 = v141 + 1;
        loc_8052C84:
            unsigned int v142 = v78;
            int v143 = v50;
            ptr3 = &v20;
            int v144 = camlArray__trickle_1165(v5, v143);
            int v145 = v13;
            int v146 = v13;
            int v147 = v145;
            v97 = v145 - 2;
            char v148 = v97 ? 0: 1;
            char v149 = v97 < 0;
            char v150 = __parity__((unsigned char)v97);
            char v151 = (((v147 ^ 0x2) ^ v97) >>> 4) & 0x1;
            char v152 = (unsigned int)v147 < 2;
            char v153 = (int)((unsigned int)(v97 ^ v147) & (v147 ^ 0x2)) < 0;
            v13 = v97;
            v19 = v146 == 1;
            char v154 = v146 < 1;
            char v155 = __parity__((unsigned char)v146 - 1);
            char v156 = (unsigned int)v146 < 1;
            char v157 = (((v146 - 1) ^ v146) & (v146 ^ 0x1)) < 0;
            char v158 = (((v146 - 1) ^ (v146 ^ 0x1)) >>> 4) & 0x1;
        }
        while(!v19);
    }
    unsigned int v159 = v78;
    v48 = (int)(v159 - 2);
    char v160 = v48 == 5;
    char v161 = v48 < 5;
    char v162 = __parity__((unsigned char)v48 - 5);
    char v163 = (unsigned int)v48 < 5;
    char v164 = (int)(int*)((int)(int*)((int)(int*)(v48 - 5) ^ v48) & (int)(int*)(v48 ^ 0x5)) < 0;
    char v165 = (int*)((int)(int*)((int)(int*)((int)(int*)(v48 - 5) ^ (int)(int*)(v48 ^ 0x5)) >>> 4) & 0x1);
    if(v161 == v164) {
        v13 = v48;
        do {
            v97 = v32;
            int v166 = *(int*)(v97 - 4);
            int v167 = *(int*)(v97 - 4);
            unsigned int v168 = (unsigned int)(unsigned char)v167;
            char v169 = v168 == 254;
            char v170 = (int)v168 < 254;
            char v171 = __parity__((unsigned char)v168 - 254);
            char v172 = v168 < 254;
            char v173 = (((v168 - 254) ^ v168) & (v168 ^ 0xfe)) < 0;
            char v174 = (((v168 - 254) ^ (v168 ^ 0xfe)) >>> 4) & 0x1;
            v12 = v166;
            if(!v169) {
                unsigned int v175 = (unsigned int)(v166 >>> 9);
                char v176 = (v12 >>> 8) & 0x1;
                char v177 = v173;
                char v178 = v175 ? 0: 1;
                char v179 = v175 >= 0x80000000;
                char v180 = __parity__((unsigned char)v175);
                v11 = v175 == v48;
                v10 = (int)v175 < v48;
                v9 = __parity__((unsigned char)v175 - (unsigned char)v48);
                v8 = v175 < (unsigned int)v48;
                v7 = (int)(int*)((int)(int*)((int)(int*)(v175 - v48) ^ v175) & (int)(int*)(v175 ^ v48)) < 0;
                v6 = (int*)((int)(int*)((int)(int*)((int)(int*)(v175 - v48) ^ (int)(int*)(v175 ^ v48)) >>> 4) & 0x1);
                if(v8 || v11) {
                    caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
                    caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
                    /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
                    return 1;
                }
                int v181 = *(int*)((char*)((int)(int*)(v48 * 2) + v97) - 2);
                v50 = *(int*)((char*)((int)(int*)(v48 * 2) + v97) - 2);
                goto loc_8052D28;
            }
            else {
                unsigned int v182 = (unsigned int)(v166 >>> 10);
                char v183 = (v12 >>> 9) & 0x1;
                char v184 = v173;
                char v185 = v182 ? 0: 1;
                char v186 = v182 >= 0x80000000;
                char v187 = __parity__((unsigned char)v182);
                v11 = v182 == v48;
                v10 = (int)v182 < v48;
                v9 = __parity__((unsigned char)v182 - (unsigned char)v48);
                v8 = v182 < (unsigned int)v48;
                v7 = (int)(int*)((int)(int*)((int)(int*)(v182 - v48) ^ v182) & (int)(int*)(v182 ^ v48)) < 0;
                v6 = (int*)((int)(int*)((int)(int*)((int)(int*)(v182 - v48) ^ (int)(int*)(v182 ^ v48)) >>> 4) & 0x1);
            }
            if(v8 || v11) {
                caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
                caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
                caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
                /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
                return 1;
            }
            while(1) {
                unsigned int v188 = caml_young_ptr;
                unsigned int v189 = caml_young_ptr;
                v3 = v188 - 12;
                char v190 = v3 ? 0: 1;
                char v191 = v3 >= 0x80000000;
                char v192 = __parity__((unsigned char)v3);
                char v193 = (((v189 ^ 0xc) ^ v3) >>> 4) & 0x1;
                char v194 = v189 < 12;
                char v195 = (int)((v3 ^ v189) & (v189 ^ 0xc)) < 0;
                caml_young_ptr = v3;
                char v196 = caml_young_limit == v3;
                char v197 = (int)caml_young_limit > (int)v3;
                char v198 = __parity__((unsigned char)v3 - (unsigned char)caml_young_limit);
                char v199 = caml_young_limit > v3;
                char v200 = (int)(((v3 - caml_young_limit) ^ v3) & (caml_young_limit ^ v3)) < 0;
                char v201 = (((v3 - caml_young_limit) ^ (caml_young_limit ^ v3)) >>> 4) & 0x1;
                if(!v199) {
                    break;
                }
                else {
                    int v202 = caml_call_gc((int)v168, (int)param1);
                }
            }
            int v203 = (int)(v3 + 4);
            *(int*)(v203 - 4) = 2301;
            char v204 = v18 - 1;
            v17[v204] = *(double*)((int*)((int)(int*)(v48 * 4) + v97) - 1);
            *(long long*)v203 = v17[v204];
            v18 = v204 + 1;
            v50 = v203;
        loc_8052D28:
            int v205 = *(int*)(v97 - 4);
            int v206 = *(int*)(v97 - 4);
            unsigned int v207 = (unsigned int)(unsigned char)v206;
            char v208 = v207 == 254;
            char v209 = (int)v207 < 254;
            char v210 = __parity__((unsigned char)v207 - 254);
            char v211 = v207 < 254;
            char v212 = (((v207 - 254) ^ v207) & (v207 ^ 0xfe)) < 0;
            char v213 = (((v207 - 254) ^ (v207 ^ 0xfe)) >>> 4) & 0x1;
            v12 = v205;
            if(!v208) {
                unsigned int v214 = (unsigned int)(v205 >>> 9);
                char v215 = (v12 >>> 8) & 0x1;
                char v216 = v212;
                char v217 = v214 ? 0: 1;
                char v218 = v214 >= 0x80000000;
                char v219 = __parity__((unsigned char)v214);
                v11 = v214 == 1;
                v10 = (int)v214 < 1;
                v9 = __parity__((unsigned char)v214 - 1);
                v8 = v214 < 1;
                v7 = (((v214 - 1) ^ v214) & (v214 ^ 0x1)) < 0;
                v6 = (((v214 - 1) ^ (v214 ^ 0x1)) >>> 4) & 0x1;
                if(v8 || v11) {
                    goto loc_8052FEC;
                }
                else {
                    ptr0 = *(double**)v97;
                    goto loc_8052D83;
                }
            }
            else {
                unsigned int v220 = (unsigned int)(v205 >>> 10);
                char v221 = (v12 >>> 9) & 0x1;
                char v222 = v212;
                char v223 = v220 ? 0: 1;
                char v224 = v220 >= 0x80000000;
                char v225 = __parity__((unsigned char)v220);
                v11 = v220 == 1;
                v10 = (int)v220 < 1;
                v9 = __parity__((unsigned char)v220 - 1);
                v8 = v220 < 1;
                v7 = (((v220 - 1) ^ v220) & (v220 ^ 0x1)) < 0;
                v6 = (((v220 - 1) ^ (v220 ^ 0x1)) >>> 4) & 0x1;
            }
            if(v8 || v11) {
                goto loc_8052FE7;
            }
            else {
                while(1) {
                    unsigned int v226 = caml_young_ptr;
                    unsigned int v227 = caml_young_ptr;
                    v2 = v226 - 12;
                    char v228 = v2 ? 0: 1;
                    char v229 = v2 >= 0x80000000;
                    char v230 = __parity__((unsigned char)v2);
                    char v231 = (((v227 ^ 0xc) ^ v2) >>> 4) & 0x1;
                    char v232 = v227 < 12;
                    char v233 = (int)((v2 ^ v227) & (v227 ^ 0xc)) < 0;
                    caml_young_ptr = v2;
                    char v234 = caml_young_limit == v2;
                    char v235 = (int)caml_young_limit > (int)v2;
                    char v236 = __parity__((unsigned char)v2 - (unsigned char)caml_young_limit);
                    char v237 = caml_young_limit > v2;
                    char v238 = (int)(((v2 - caml_young_limit) ^ v2) & (caml_young_limit ^ v2)) < 0;
                    char v239 = (((v2 - caml_young_limit) ^ (caml_young_limit ^ v2)) >>> 4) & 0x1;
                    if(!v237) {
                        break;
                    }
                    else {
                        int v240 = caml_call_gc((int)v207, (int)param1);
                    }
                }
                ptr0 = (double*)(v2 + 4);
                *(int*)((char*)ptr0 - 4) = 2301;
                char v241 = v18 - 1;
                v17[v241] = *(double*)v97;
                *ptr0 = v17[v241];
                v18 = v241 + 1;
            loc_8052D83:
                int v242 = *(int*)(v97 - 4);
                int v243 = *(int*)(v97 - 4);
                unsigned int v244 = (unsigned int)(unsigned char)v243;
                char v245 = v244 == 254;
                char v246 = (int)v244 < 254;
                char v247 = __parity__((unsigned char)v244 - 254);
                char v248 = v244 < 254;
                char v249 = (((v244 - 254) ^ v244) & (v244 ^ 0xfe)) < 0;
                char v250 = (((v244 - 254) ^ (v244 ^ 0xfe)) >>> 4) & 0x1;
                v12 = v242;
                if(!v245) {
                    unsigned int v251 = (unsigned int)(v242 >>> 9);
                    char v252 = (v12 >>> 8) & 0x1;
                    char v253 = v249;
                    char v254 = v251 ? 0: 1;
                    char v255 = v251 >= 0x80000000;
                    char v256 = __parity__((unsigned char)v251);
                    v11 = v251 == v48;
                    v10 = (int)v251 < v48;
                    v9 = __parity__((unsigned char)v251 - (unsigned char)v48);
                    v8 = v251 < (unsigned int)v48;
                    v7 = (int)(int*)((int)(int*)((int)(int*)(v251 - v48) ^ v251) & (int)(int*)(v251 ^ v48)) < 0;
                    v6 = (int*)((int)(int*)((int)(int*)((int)(int*)(v251 - v48) ^ (int)(int*)(v251 ^ v48)) >>> 4) & 0x1);
                    if(v8 || v11) {
                        goto loc_8052FE2;
                    }
                    else {
                        int* ptr10 = (int*)((char*)((int)(int*)(v48 * 2) + v97) - 2);
                        int v257 = caml_modify((int)ptr10, (int)ptr0);
                        int* ptr11 = &v21;
                        char v258 = &v16 == 32;
                        char v259 = (int)&ptr1 < 0;
                        char v260 = __parity__((unsigned char)&v16 - 32);
                        char v261 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v21 ^ 0x8) ^ (int)&ptr1) >>> 4) & 0x1);
                        char v262 = (unsigned int)&v21 >= 0xfffffff8;
                        char v263 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&v21) & (int*)~(int)(int*)((int)&v21 ^ 0x8)) < 0;
                        goto loc_8052DD1;
                    }
                }
                else {
                    unsigned int v264 = (unsigned int)(v242 >>> 10);
                    char v265 = (v12 >>> 9) & 0x1;
                    char v266 = v249;
                    char v267 = v264 ? 0: 1;
                    char v268 = v264 >= 0x80000000;
                    char v269 = __parity__((unsigned char)v264);
                    v11 = v264 == v48;
                    v10 = (int)v264 < v48;
                    v9 = __parity__((unsigned char)v264 - (unsigned char)v48);
                    v8 = v264 < (unsigned int)v48;
                    v7 = (int)(int*)((int)(int*)((int)(int*)(v264 - v48) ^ v264) & (int)(int*)(v264 ^ v48)) < 0;
                    v6 = (int*)((int)(int*)((int)(int*)((int)(int*)(v264 - v48) ^ (int)(int*)(v264 ^ v48)) >>> 4) & 0x1);
                }
                if(v8 || v11) {
                    goto loc_8052FDD;
                }
                else {
                    char v270 = v18 - 1;
                    v17[v270] = *ptr0;
                    *(long long*)((int*)((int)(int*)(v48 * 4) + v97) - 1) = v17[v270];
                    v18 = v270 + 1;
                loc_8052DD1:
                    int v271 = 1;
                    int v272 = v48;
                    int* ptr12 = ptr1;
                    int v273 = camlArray__bubble_1174();
                    int* ptr13 = ptr8;
                    int v274 = camlArray__trickleup_1178((int)ptr13);
                    int v275 = v13;
                    int v276 = v13;
                    int v277 = v275;
                    v48 = v275 - 2;
                    char v278 = v48 ? 0: 1;
                    char v279 = v48 < 0;
                    char v280 = __parity__((unsigned char)v48);
                    char v281 = (int*)((int)(int*)((int)(int*)((int)(int*)(v277 ^ 0x2) ^ v48) >>> 4) & 0x1);
                    char v282 = (unsigned int)v277 < 2;
                    char v283 = (int)(int*)((int)(int*)(v48 ^ v277) & (int)(int*)(v277 ^ 0x2)) < 0;
                    v13 = v48;
                    v24 = v276 == 5;
                    char v284 = v276 < 5;
                    char v285 = __parity__((unsigned char)v276 - 5);
                    char v286 = (unsigned int)v276 < 5;
                    char v287 = (int)(int*)((int)(int*)((int)(int*)(v276 - 5) ^ v276) & (int)(int*)(v276 ^ 0x5)) < 0;
                    char v288 = (int*)((int)(int*)((int)(int*)((int)(int*)(v276 - 5) ^ (int)(int*)(v276 ^ 0x5)) >>> 4) & 0x1);
                }
            }
        }
        while(!v24);
    }
    char v289 = __parity__((unsigned char)v78 - 3);
    char v290 = v78 < 3;
    char v291 = (((v78 - 3) ^ (v78 ^ 0x3)) >>> 4) & 0x1;
    if((int)v78 > 3) {
        v97 = v32;
        int v292 = *(int*)(v97 - 4);
        unsigned int v293 = (unsigned int)(unsigned char)v292;
        char v294 = (int)v293 < 254;
        char v295 = __parity__((unsigned char)v293 - 254);
        char v296 = v293 < 254;
        char v297 = (((v293 - 254) ^ v293) & (v293 ^ 0xfe)) < 0;
        char v298 = (((v293 - 254) ^ (v293 ^ 0xfe)) >>> 4) & 0x1;
        v12 = v292;
        if(v293 != 254) {
            unsigned int v299 = (unsigned int)(v292 >>> 9);
            char v300 = (v12 >>> 8) & 0x1;
            char v301 = v297;
            char v302 = v299 ? 0: 1;
            char v303 = v299 >= 0x80000000;
            char v304 = __parity__((unsigned char)v299);
            v11 = v299 == 3;
            v10 = (int)v299 < 3;
            v9 = __parity__((unsigned char)v299 - 3);
            v8 = v299 < 3;
            v7 = (((v299 - 3) ^ v299) & (v299 ^ 0x3)) < 0;
            v6 = (((v299 - 3) ^ (v299 ^ 0x3)) >>> 4) & 0x1;
            if(v8 || v11) {
                goto loc_8052FD8;
            }
            else {
                v48 = *(int*)(v97 + 4);
                goto loc_8052E74;
            }
        }
        else {
            unsigned int v305 = (unsigned int)(v292 >>> 10);
            char v306 = (v12 >>> 9) & 0x1;
            char v307 = v297;
            char v308 = v305 ? 0: 1;
            char v309 = v305 >= 0x80000000;
            char v310 = __parity__((unsigned char)v305);
            v11 = v305 == 3;
            v10 = (int)v305 < 3;
            v9 = __parity__((unsigned char)v305 - 3);
            v8 = v305 < 3;
            v7 = (((v305 - 3) ^ v305) & (v305 ^ 0x3)) < 0;
            v6 = (((v305 - 3) ^ (v305 ^ 0x3)) >>> 4) & 0x1;
        }
        if(!v8 && !v11) {
            while(1) {
                unsigned int v311 = caml_young_ptr;
                v1 = v311 - 12;
                char v312 = v1 ? 0: 1;
                char v313 = v1 >= 0x80000000;
                char v314 = __parity__((unsigned char)v1);
                char v315 = (((v311 ^ 0xc) ^ v1) >>> 4) & 0x1;
                char v316 = v311 < 12;
                char v317 = (int)((v311 ^ v1) & (v311 ^ 0xc)) < 0;
                caml_young_ptr = v1;
                char v318 = caml_young_limit == v1;
                char v319 = (int)caml_young_limit > (int)v1;
                char v320 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
                char v321 = (int)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0;
                char v322 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4) & 0x1;
                if(caml_young_limit <= v1) {
                    break;
                }
                else {
                    int v323 = caml_call_gc(254, (int)param1);
                }
            }
            v48 = (int)(v1 + 4);
            *(int*)(v48 - 4) = 2301;
            char v324 = v18 - 1;
            v17[v324] = *(double*)(v97 + 8);
            *(long long*)v48 = v17[v324];
            v18 = v324 + 1;
        loc_8052E74:
            int v325 = *(int*)(v97 - 4);
            unsigned int v326 = (unsigned int)(unsigned char)v325;
            char v327 = (int)v326 < 254;
            char v328 = __parity__((unsigned char)v326 - 254);
            char v329 = v326 < 254;
            char v330 = (((v326 - 254) ^ v326) & (v326 ^ 0xfe)) < 0;
            char v331 = (((v326 - 254) ^ (v326 ^ 0xfe)) >>> 4) & 0x1;
            v12 = v325;
            if(v326 != 254) {
                unsigned int v332 = (unsigned int)(v325 >>> 9);
                char v333 = (v12 >>> 8) & 0x1;
                char v334 = v330;
                char v335 = v332 ? 0: 1;
                char v336 = v332 >= 0x80000000;
                char v337 = __parity__((unsigned char)v332);
                v11 = v332 == 1;
                v10 = (int)v332 < 1;
                v9 = __parity__((unsigned char)v332 - 1);
                v8 = v332 < 1;
                v7 = (((v332 - 1) ^ v332) & (v332 ^ 0x1)) < 0;
                v6 = (((v332 - 1) ^ (v332 ^ 0x1)) >>> 4) & 0x1;
                if(v8 || v11) {
                    goto loc_8052FCE;
                }
                else {
                    param1 = *(double**)v97;
                    goto loc_8052ED3;
                }
            }
            else {
                unsigned int v338 = (unsigned int)(v325 >>> 10);
                char v339 = (v12 >>> 9) & 0x1;
                char v340 = v330;
                char v341 = v338 ? 0: 1;
                char v342 = v338 >= 0x80000000;
                char v343 = __parity__((unsigned char)v338);
                v11 = v338 == 1;
                v10 = (int)v338 < 1;
                v9 = __parity__((unsigned char)v338 - 1);
                v8 = v338 < 1;
                v7 = (((v338 - 1) ^ v338) & (v338 ^ 0x1)) < 0;
                v6 = (((v338 - 1) ^ (v338 ^ 0x1)) >>> 4) & 0x1;
            }
            if(!v8 && !v11) {
                while(1) {
                    unsigned int v344 = caml_young_ptr;
                    v0 = v344 - 12;
                    char v345 = v0 ? 0: 1;
                    char v346 = v0 >= 0x80000000;
                    char v347 = __parity__((unsigned char)v0);
                    char v348 = (((v344 ^ 0xc) ^ v0) >>> 4) & 0x1;
                    char v349 = v344 < 12;
                    char v350 = (int)((v344 ^ v0) & (v344 ^ 0xc)) < 0;
                    caml_young_ptr = v0;
                    char v351 = caml_young_limit == v0;
                    char v352 = (int)caml_young_limit > (int)v0;
                    char v353 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
                    char v354 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
                    char v355 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
                    if(caml_young_limit <= v0) {
                        break;
                    }
                    else {
                        int v356 = caml_call_gc(254, (int)param1);
                    }
                }
                param1 = (double*)(v0 + 4);
                *(int*)((char*)param1 - 4) = 2301;
                char v357 = v18 - 1;
                v17[v357] = *(double*)v97;
                *param1 = v17[v357];
                v18 = v357 + 1;
            loc_8052ED3:
                int v358 = *(int*)(v97 - 4);
                unsigned int v359 = (unsigned int)(unsigned char)v358;
                char v360 = (int)v359 < 254;
                char v361 = __parity__((unsigned char)v359 - 254);
                char v362 = v359 < 254;
                char v363 = (((v359 - 254) ^ v359) & (v359 ^ 0xfe)) < 0;
                char v364 = (((v359 - 254) ^ (v359 ^ 0xfe)) >>> 4) & 0x1;
                v12 = v358;
                if(v359 != 254) {
                    unsigned int v365 = (unsigned int)(v358 >>> 9);
                    char v366 = (v12 >>> 8) & 0x1;
                    char v367 = v363;
                    char v368 = v365 ? 0: 1;
                    char v369 = v365 >= 0x80000000;
                    char v370 = __parity__((unsigned char)v365);
                    v11 = v365 == 3;
                    v10 = (int)v365 < 3;
                    v9 = __parity__((unsigned char)v365 - 3);
                    v8 = v365 < 3;
                    v7 = (((v365 - 3) ^ v365) & (v365 ^ 0x3)) < 0;
                    v6 = (((v365 - 3) ^ (v365 ^ 0x3)) >>> 4) & 0x1;
                    if(v8 || v11) {
                        goto loc_8052FC4;
                    }
                    else {
                        int v371 = v97 + 4;
                        char v372 = v371 ? 0: 1;
                        char v373 = v371 < 0;
                        char v374 = __parity__((unsigned char)v371);
                        char v375 = (((v97 ^ 0x4) ^ v371) >>> 4) & 0x1;
                        char v376 = (unsigned int)v97 >= 0xfffffffc;
                        char v377 = ((v371 ^ v97) & ~(v97 ^ 0x4)) < 0;
                        int v378 = caml_modify(v371, (int)param1);
                        int* ptr14 = &v21;
                        char v379 = &v16 == 32;
                        char v380 = (int)&ptr1 < 0;
                        char v381 = __parity__((unsigned char)&v16 - 32);
                        char v382 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v21 ^ 0x8) ^ (int)&ptr1) >>> 4) & 0x1);
                        char v383 = (unsigned int)&v21 >= 0xfffffff8;
                        char v384 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&v21) & (int*)~(int)(int*)((int)&v21 ^ 0x8)) < 0;
                        goto loc_8052F21;
                    }
                }
                else {
                    unsigned int v385 = (unsigned int)(v358 >>> 10);
                    char v386 = (v12 >>> 9) & 0x1;
                    char v387 = v363;
                    char v388 = v385 ? 0: 1;
                    char v389 = v385 >= 0x80000000;
                    char v390 = __parity__((unsigned char)v385);
                    v11 = v385 == 3;
                    v10 = (int)v385 < 3;
                    v9 = __parity__((unsigned char)v385 - 3);
                    v8 = v385 < 3;
                    v7 = (((v385 - 3) ^ v385) & (v385 ^ 0x3)) < 0;
                    v6 = (((v385 - 3) ^ (v385 ^ 0x3)) >>> 4) & 0x1;
                }
                if(!v8 && !v11) {
                    char v391 = v18 - 1;
                    v17[v391] = *param1;
                    *(long long*)(v97 + 8) = v17[v391];
                    v18 = v391 + 1;
                loc_8052F21:
                    int v392 = *(int*)(v97 - 4);
                    v79 = (unsigned int)(unsigned char)v392;
                    char v393 = (int)v79 < 254;
                    char v394 = __parity__((unsigned char)v79 - 254);
                    char v395 = v79 < 254;
                    char v396 = (((v79 - 254) ^ v79) & (v79 ^ 0xfe)) < 0;
                    char v397 = (((v79 - 254) ^ (v79 ^ 0xfe)) >>> 4) & 0x1;
                    v12 = v392;
                    if(v79 != 254) {
                        unsigned int v398 = (unsigned int)(v392 >>> 9);
                        char v399 = (v12 >>> 8) & 0x1;
                        char v400 = v396;
                        char v401 = v398 ? 0: 1;
                        char v402 = v398 >= 0x80000000;
                        char v403 = __parity__((unsigned char)v398);
                        v11 = v398 == 1;
                        v10 = (int)v398 < 1;
                        v9 = __parity__((unsigned char)v398 - 1);
                        v8 = v398 < 1;
                        v7 = (((v398 - 1) ^ v398) & (v398 ^ 0x1)) < 0;
                        v6 = (((v398 - 1) ^ (v398 ^ 0x1)) >>> 4) & 0x1;
                        if(v8 || v11) {
                            goto loc_8052FBA;
                        }
                        else {
                            caml_modify(v97, v48);
                            return 1;
                        }
                    }
                    else {
                        unsigned int v404 = (unsigned int)(v392 >>> 10);
                        char v405 = (v12 >>> 9) & 0x1;
                        char v406 = v396;
                        char v407 = v404 ? 0: 1;
                        char v408 = v404 >= 0x80000000;
                        char v409 = __parity__((unsigned char)v404);
                        v11 = v404 == 1;
                        v10 = (int)v404 < 1;
                        v9 = __parity__((unsigned char)v404 - 1);
                        v8 = v404 < 1;
                        v7 = (((v404 - 1) ^ v404) & (v404 ^ 0x1)) < 0;
                        v6 = (((v404 - 1) ^ (v404 ^ 0x1)) >>> 4) & 0x1;
                    }
                    if(!v8 && !v11) {
                        char v410 = v18 - 1;
                        v17[v410] = *(double*)v48;
                        *(long long*)v97 = v17[v410];
                        return 1;
                    }
                    int v411 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
                loc_8052FBA:
                    int v412 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
                }
                int v413 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
            loc_8052FC4:
                int v414 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
            }
            int v415 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
        loc_8052FCE:
            int v416 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
        }
        int v417 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
    loc_8052FD8:
        int v418 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
    loc_8052FDD:
        int v419 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
    loc_8052FE2:
        int v420 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
    loc_8052FE7:
        int v421 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
    loc_8052FEC:
        int v422 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
        int v423 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
        int v424 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
        int v425 = caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
        ptr3 = &v20;
        int v426 = /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr1, v50, (int)ptr8, v13);
    }
    return 1;
}

void camlArray__stable_sort_1188() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlArray__sub_1081(unsigned int param0) {
    int* ptr0;
    double* ptr1;
    unsigned int v0;
    long long* ptr2;
    int v1;
    void* ptr3;
    __SyntheticTypeUnknown v2;
    int v3;
    char v4;
    unsigned int v5;
    unsigned int v6;
    int* ptr4 = &ptr3;
    char v7 = &ptr3 == 24;
    char v8 = (int)&v6 < 0;
    char v9 = __parity__((unsigned char)&ptr3 - 24);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr3 ^ 0x18) ^ (int)&v6) >>> 4) & 0x1);
    char v11 = (unsigned int)&ptr3 < 24;
    char v12 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v6) & (int)(int*)((int)&ptr3 ^ 0x18)) < 0;
    int v13 = v3;
    char v14 = v5 == 1;
    char v15 = (int)v5 < 1;
    char v16 = __parity__((unsigned char)v5 - 1);
    char v17 = v5 < 1;
    char v18 = (((v5 - 1) ^ v5) & (v5 ^ 0x1)) < 0;
    char v19 = (((v5 - 1) ^ (v5 ^ 0x1)) >>> 4) & 0x1;
    if(v15 == v18) {
        char v20 = param0 == 1;
        char v21 = (int)param0 < 1;
        char v22 = __parity__((unsigned char)param0 - 1);
        char v23 = param0 < 1;
        char v24 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
        char v25 = (((param0 - 1) ^ (param0 ^ 0x1)) >>> 4) & 0x1;
        if(v21 == v24) {
            unsigned int result = *(unsigned int*)(v13 - 4);
            unsigned int v26 = *(unsigned int*)(v13 - 4);
            unsigned int v27 = (unsigned int)(unsigned char)v26;
            char v28 = v27 == 254;
            char v29 = (int)v27 < 254;
            char v30 = __parity__((unsigned char)v27 - 254);
            char v31 = v27 < 254;
            char v32 = (((v27 - 254) ^ v27) & (v27 ^ 0xfe)) < 0;
            char v33 = (((v27 - 254) ^ (v27 ^ 0xfe)) >>> 4) & 0x1;
            if(!v28) {
                unsigned int v34 = result;
                unsigned int v35 = result;
                v1 = (int)(v34 >>> 9);
                char v36 = (v35 >>> 8) & 0x1;
                char v37 = v32;
                char v38 = v1 ? 0: 1;
                char v39 = v1 < 0;
                char v40 = __parity__((unsigned char)v1);
            }
            else {
                unsigned int v41 = result;
                unsigned int v42 = result;
                v1 = (int)(v41 >>> 10);
                char v43 = (v42 >>> 9) & 0x1;
                char v44 = v32;
                char v45 = v1 ? 0: 1;
                char v46 = v1 < 0;
                char v47 = __parity__((unsigned char)v1);
            }
            unsigned int v48 = (unsigned int)(v1 | 0x1);
            unsigned int v49 = (unsigned int)(v1 | 0x1);
            unsigned int v50 = v48 - param0;
            char v51 = v50 ? 0: 1;
            char v52 = v50 >= 0x80000000;
            char v53 = __parity__((unsigned char)v50);
            char v54 = (((param0 ^ v49) ^ v50) >>> 4) & 0x1;
            char v55 = param0 > v49;
            char v56 = (int)((v50 ^ v49) & (param0 ^ v49)) < 0;
            unsigned int v57 = v50 + 1;
            char v58 = v57 == v5;
            char v59 = (int)v57 > (int)v5;
            char v60 = __parity__((unsigned char)v5 - (unsigned char)v57);
            char v61 = v57 > v5;
            char v62 = (int)(((v5 - v57) ^ v5) & (v57 ^ v5)) < 0;
            char v63 = (((v5 - v57) ^ (v57 ^ v5)) >>> 4) & 0x1;
            if((v58 || v59 != v62)) {
                if(param0 == 1) {
                    return &camlArray__28;
                }
                v6 = param0;
                unsigned int v64 = v5;
                int v65 = v13;
                if(*(char*)(v13 - 4) != 254) {
                    ptr2 = *(unsigned int*)(v5 * 2 + v13 - 2);
                }
                else {
                    while(1) {
                        v0 = caml_young_ptr - 12;
                        caml_young_ptr -= 12;
                        if(caml_young_limit <= v0) {
                            break;
                        }
                        else {
                            caml_call_gc((int)param0, v13);
                        }
                    }
                    ptr2 = (long long*)(v0 + 4);
                    *(int*)((char*)ptr2 - 4) = 2301;
                    v2[v4 - 1] = *(double*)(v5 * 4 + v13 - 4);
                    *ptr2 = v2[v4 - 1];
                }
                long long* ptr5 = ptr2;
                unsigned int v66 = param0;
                result = (unsigned int)caml_c_call();
                v5 = 3;
                if((int)(v6 - 2) >= 3) {
                    unsigned int v67 = v6 - 2;
                    v6 = result;
                    do {
                        v13 = v5 + v64 - 1;
                        int v68 = v65;
                        if(*(char*)(v68 - 4) != 254) {
                            ptr1 = *(unsigned int*)(v13 * 2 + v68 - 2);
                        }
                        else {
                            while(1) {
                                ptr0 = (int*)(caml_young_ptr - 12);
                                caml_young_ptr -= 12;
                                if(caml_young_limit <= (unsigned int)ptr0) {
                                    break;
                                }
                                else {
                                    caml_call_gc(v68, v13);
                                }
                            }
                            *ptr0 = 2301;
                            *(double*)(ptr0 + 1) = *(double*)(v13 * 4 + v68 - 4);
                            ptr1 = (double*)(ptr0 + 1);
                        }
                        result = v6;
                        if(*(char*)(result - 4) != 254) {
                            caml_modify(v5 * 2 + result - 2, (int)ptr1);
                        }
                        else {
                            *(long long*)(v5 * 4 + result - 4) = *ptr1;
                        }
                        param0 = v5;
                        v5 += 2;
                    }
                    while(param0 != v67);
                }
                return result;
            }
        }
    }
    unsigned int v69 = (unsigned int)/*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__trickle_1165(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    unsigned int v4;
    int v5 = &v0;
    char v6 = &v0 == 16;
    char v7 = (int)&v1 < 0;
    char v8 = __parity__((unsigned char)&v0 - 16);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)(&v0 ^ 0x10) ^ (int)&v1) >>> 4) & 0x1);
    char v10 = (unsigned int)&v0 < 16;
    char v11 = (int)(int*)((int)(int*)((int)&v1 ^ &v0) & (int)(int*)(&v0 ^ 0x10)) < 0;
    int v12 = sub_8050FE0(param1, param0, v3, v2, v0);
    unsigned int v13 = gvar_8076388;
    unsigned int v14 = *(unsigned int*)v12;
    char v15 = v13 == v14;
    char v16 = (int)v13 > (int)v14;
    char v17 = __parity__((unsigned char)v14 - (unsigned char)v13);
    char v18 = v13 > v14;
    char v19 = (int)(((v14 - v13) ^ v14) & (v13 ^ v14)) < 0;
    char v20 = (((v14 - v13) ^ (v13 ^ v14)) >>> 4) & 0x1;
    if(v15) {
        v14 = *(unsigned int*)(v12 + 4);
        int v21 = v1;
        int v22 = *(int*)(v21 + 12);
        int v23 = *(int*)(v22 - 4);
        int v24 = *(int*)(v22 - 4);
        param1 = (int)(unsigned char)v24;
        char v25 = param1 == 254;
        char v26 = param1 < 254;
        char v27 = __parity__((unsigned char)param1 - 254);
        char v28 = (unsigned int)param1 < 254;
        char v29 = (((param1 - 254) ^ param1) & (param1 ^ 0xfe)) < 0;
        char v30 = (((param1 - 254) ^ (param1 ^ 0xfe)) >>> 4) & 0x1;
        v5 = v23;
        if(!v25) {
            int* ptr0 = (int*)(v23 >>> 9);
            char v31 = (v5 >>> 8) & 0x1;
            char v32 = v29;
            char v33 = ptr0 ? 0: 1;
            char v34 = (int)ptr0 < 0;
            char v35 = __parity__((unsigned char)ptr0);
            v15 = ptr0 == v14;
            v16 = (int)ptr0 < (int)v14;
            v17 = __parity__((unsigned char)ptr0 - (unsigned char)v14);
            v18 = (unsigned int)ptr0 < v14;
            v19 = (int)(int*)((int)(int*)((int)(int*)((int)ptr0 - v14) ^ (int)ptr0) & (int)(int*)((int)ptr0 ^ v14)) < 0;
            v20 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr0 - v14) ^ (int)(int*)((int)ptr0 ^ v14)) >>> 4) & 0x1);
            if(v18 || v15) {
                goto loc_8051006;
            }
            else {
                caml_modify((unsigned int*)(v14 * 2 + v22 - 2), v4);
                return 1;
            }
        }
        else {
            int* ptr1 = (int*)(v23 >>> 10);
            char v36 = (v5 >>> 9) & 0x1;
            char v37 = v29;
            char v38 = ptr1 ? 0: 1;
            char v39 = (int)ptr1 < 0;
            char v40 = __parity__((unsigned char)ptr1);
            v15 = ptr1 == v14;
            v16 = (int)ptr1 < (int)v14;
            v17 = __parity__((unsigned char)ptr1 - (unsigned char)v14);
            v18 = (unsigned int)ptr1 < v14;
            v19 = (int)(int*)((int)(int*)((int)(int*)((int)ptr1 - v14) ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ v14)) < 0;
            v20 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 - v14) ^ (int)(int*)((int)ptr1 ^ v14)) >>> 4) & 0x1);
        }
        if(v18 || v15) {
            goto loc_8051001;
        }
        else {
            *(long long*)(v14 * 4 + v22 - 4) = *(double*)v4;
            return 1;
        }
    }
    else {
        caml_raise_exn();
    loc_8051001:
        int v41 = caml_ml_array_bound_error(v1, (int)v4, v3, v2);
    }
loc_8051006:
    /*BAD_CALL!*/ caml_ml_array_bound_error(v1, (int)v4, v3, v2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlArray__trickledown_1160(unsigned int param0, unsigned int param1) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    unsigned int v4;
    char v5;
    char v6;
    char v7;
    char v8;
    char v9;
    char v10;
    int v11;
    unsigned int v12;
    unsigned int v13;
    int v14;
    int v15;
    int v16;
    unsigned int v17;
    int v18;
    int v19;
    unsigned int v20;
    unsigned int v21;
    char v22;
    int* ptr0 = &v15;
    char v23 = &v15 == 28;
    char v24 = (int)&v21 < 0;
    char v25 = __parity__((unsigned char)&v15 - 28);
    char v26 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v15 ^ 0x1c) ^ (int)&v21) >>> 4) & 0x1);
    char v27 = (unsigned int)&v15 < 28;
    char v28 = (int)(int*)((int)(int*)((int)&v21 ^ (int)&v15) & (int)(int*)((int)&v15 ^ 0x1c)) < 0;
    while(1) {
        v14 = v18;
        v13 = v20;
        v12 = param0;
        v21 = param1;
        int v29 = *(int*)(param1 + 20);
        unsigned int v30 = (unsigned int)camlArray__maxson_1155(v29);
        v20 = v30;
        unsigned int v31 = v30;
        unsigned int v32 = v21;
        int v33 = *(int*)(v32 + 16);
        int v34 = *(int*)(v33 - 4);
        int v35 = *(int*)(v33 - 4);
        unsigned int v36 = (unsigned int)(unsigned char)v35;
        char v37 = v36 == 254;
        char v38 = (int)v36 < 254;
        char v39 = __parity__((unsigned char)v36 - 254);
        char v40 = v36 < 254;
        char v41 = (((v36 - 254) ^ v36) & (v36 ^ 0xfe)) < 0;
        char v42 = (((v36 - 254) ^ (v36 ^ 0xfe)) >>> 4) & 0x1;
        if(!v37) {
            v11 = v34;
            unsigned int v43 = (unsigned int)(v34 >>> 9);
            char v44 = (v11 >>> 8) & 0x1;
            char v45 = v41;
            char v46 = v43 ? 0: 1;
            char v47 = v43 >= 0x80000000;
            char v48 = __parity__((unsigned char)v43);
            v10 = v43 == v20;
            v9 = (int)v43 < (int)v20;
            v8 = __parity__((unsigned char)v43 - (unsigned char)v20);
            v7 = v43 < v20;
            v6 = (int)(((v43 - v20) ^ v43) & (v43 ^ v20)) < 0;
            v5 = (((v43 - v20) ^ (v43 ^ v20)) >>> 4) & 0x1;
            if(v7 || v10) {
                goto loc_8050F45;
            }
            else {
                int v49 = *(int*)(v20 * 2 + v33 - 2);
                goto loc_8050DC4;
            }
        }
        else {
            v11 = v34;
            unsigned int v50 = (unsigned int)(v34 >>> 10);
            char v51 = (v11 >>> 9) & 0x1;
            char v52 = v41;
            char v53 = v50 ? 0: 1;
            char v54 = v50 >= 0x80000000;
            char v55 = __parity__((unsigned char)v50);
            v10 = v50 == v20;
            v9 = (int)v50 < (int)v20;
            v8 = __parity__((unsigned char)v50 - (unsigned char)v20);
            v7 = v50 < v20;
            v6 = (int)(((v50 - v20) ^ v50) & (v50 ^ v20)) < 0;
            v5 = (((v50 - v20) ^ (v50 ^ v20)) >>> 4) & 0x1;
        }
        if(v7 || v10) {
            goto loc_8050F40;
        }
        else {
            while(1) {
                unsigned int v56 = caml_young_ptr;
                unsigned int v57 = caml_young_ptr;
                v4 = v56 - 12;
                char v58 = v4 ? 0: 1;
                char v59 = v4 >= 0x80000000;
                char v60 = __parity__((unsigned char)v4);
                char v61 = (((v57 ^ 0xc) ^ v4) >>> 4) & 0x1;
                char v62 = v57 < 12;
                char v63 = (int)((v4 ^ v57) & (v57 ^ 0xc)) < 0;
                caml_young_ptr = v4;
                char v64 = caml_young_limit == v4;
                char v65 = (int)caml_young_limit > (int)v4;
                char v66 = __parity__((unsigned char)v4 - (unsigned char)caml_young_limit);
                char v67 = caml_young_limit > v4;
                char v68 = (int)(((v4 - caml_young_limit) ^ v4) & (caml_young_limit ^ v4)) < 0;
                char v69 = (((v4 - caml_young_limit) ^ (caml_young_limit ^ v4)) >>> 4) & 0x1;
                if(!v67) {
                    break;
                }
                else {
                    int v70 = caml_call_gc(v33, (int)v32);
                }
            }
            long long* ptr1 = (long long*)(v4 + 4);
            *(int*)((char*)ptr1 - 4) = 2301;
            char v71 = 6;
            __SyntheticTypeUnknownF v72 = *(double*)(v20 * 4 + v33 - 4);
            *ptr1 = v72;
            char v73 = 7;
        loc_8050DC4:
            int v74 = *(int*)(v32 + 12);
            unsigned int v75 = v12;
            caml_apply2(v74);
            char v76 = v17 == 1;
            char v77 = (int)v17 < 1;
            char v78 = __parity__(v22 - 1);
            char v79 = v17 < 1;
            char v80 = (((v17 - 1) ^ v17) & (v17 ^ 0x1)) < 0;
            char v81 = (((v17 - 1) ^ (v17 ^ 0x1)) >>> 4) & 0x1;
            if(v76 || v77 != v80) {
                break;
            }
            else {
                v36 = v21;
                int v82 = *(int*)(v36 + 16);
                int v83 = *(int*)(v82 - 4);
                int v84 = *(int*)(v82 - 4);
                unsigned int v85 = (unsigned int)(unsigned char)v84;
                char v86 = v85 == 254;
                char v87 = (int)v85 < 254;
                char v88 = __parity__((unsigned char)v85 - 254);
                char v89 = v85 < 254;
                char v90 = (((v85 - 254) ^ v85) & (v85 ^ 0xfe)) < 0;
                char v91 = (((v85 - 254) ^ (v85 ^ 0xfe)) >>> 4) & 0x1;
                v11 = v83;
                if(!v86) {
                    unsigned int v92 = (unsigned int)(v83 >>> 9);
                    char v93 = (v11 >>> 8) & 0x1;
                    char v94 = v90;
                    char v95 = v92 ? 0: 1;
                    char v96 = v92 >= 0x80000000;
                    char v97 = __parity__((unsigned char)v92);
                    v20 = v31;
                    v10 = v92 == v20;
                    v9 = (int)v92 < (int)v20;
                    v8 = __parity__((unsigned char)v92 - (unsigned char)v20);
                    v7 = v92 < v20;
                    v6 = (int)(((v92 - v20) ^ v92) & (v92 ^ v20)) < 0;
                    v5 = (((v92 - v20) ^ (v92 ^ v20)) >>> 4) & 0x1;
                    if(v7 || v10) {
                        goto loc_8050F3B;
                    }
                    else {
                        v3 = *(unsigned int*)(v20 * 2 + v82 - 2);
                        goto loc_8050E48;
                    }
                }
                else {
                    unsigned int v98 = (unsigned int)(v83 >>> 10);
                    char v99 = (v11 >>> 9) & 0x1;
                    char v100 = v90;
                    char v101 = v98 ? 0: 1;
                    char v102 = v98 >= 0x80000000;
                    char v103 = __parity__((unsigned char)v98);
                    v20 = v31;
                    v10 = v98 == v20;
                    v9 = (int)v98 < (int)v20;
                    v8 = __parity__((unsigned char)v98 - (unsigned char)v20);
                    v7 = v98 < v20;
                    v6 = (int)(((v98 - v20) ^ v98) & (v98 ^ v20)) < 0;
                    v5 = (((v98 - v20) ^ (v98 ^ v20)) >>> 4) & 0x1;
                }
                if(v7 || v10) {
                    goto loc_8050F36;
                }
                else {
                    while(1) {
                        unsigned int v104 = caml_young_ptr;
                        unsigned int v105 = caml_young_ptr;
                        v2 = v104 - 12;
                        char v106 = v2 ? 0: 1;
                        char v107 = v2 >= 0x80000000;
                        char v108 = __parity__((unsigned char)v2);
                        char v109 = (((v105 ^ 0xc) ^ v2) >>> 4) & 0x1;
                        char v110 = v105 < 12;
                        char v111 = (int)((v2 ^ v105) & (v105 ^ 0xc)) < 0;
                        caml_young_ptr = v2;
                        char v112 = caml_young_limit == v2;
                        char v113 = (int)caml_young_limit > (int)v2;
                        char v114 = __parity__((unsigned char)v2 - (unsigned char)caml_young_limit);
                        char v115 = caml_young_limit > v2;
                        char v116 = (int)(((v2 - caml_young_limit) ^ v2) & (caml_young_limit ^ v2)) < 0;
                        char v117 = (((v2 - caml_young_limit) ^ (caml_young_limit ^ v2)) >>> 4) & 0x1;
                        if(!v115) {
                            break;
                        }
                        else {
                            int v118 = caml_call_gc(v82, v19);
                        }
                    }
                    v3 = v2 + 4;
                    *(int*)(v3 - 4) = 2301;
                    char v119 = 6;
                    v72 = *(double*)(v20 * 4 + v82 - 4);
                    *(long long*)v3 = v72;
                    v73 = 7;
                loc_8050E48:
                    int v120 = *(int*)(v36 + 16);
                    int v121 = *(int*)(v120 - 4);
                    int v122 = *(int*)(v120 - 4);
                    unsigned int v123 = (unsigned int)(unsigned char)v122;
                    char v124 = v123 == 254;
                    char v125 = (int)v123 < 254;
                    char v126 = __parity__((unsigned char)v123 - 254);
                    char v127 = v123 < 254;
                    char v128 = (((v123 - 254) ^ v123) & (v123 ^ 0xfe)) < 0;
                    char v129 = (((v123 - 254) ^ (v123 ^ 0xfe)) >>> 4) & 0x1;
                    v11 = v121;
                    if(!v124) {
                        v1 = (unsigned int)(v121 >>> 9);
                        char v130 = (v11 >>> 8) & 0x1;
                        char v131 = v128;
                        char v132 = v1 ? 0: 1;
                        char v133 = v1 >= 0x80000000;
                        char v134 = __parity__((unsigned char)v1);
                        unsigned int v135 = v13;
                        v10 = v135 == v1;
                        v9 = (int)v135 > (int)v1;
                        v8 = __parity__((unsigned char)v1 - (unsigned char)v135);
                        v7 = v135 > v1;
                        v6 = (int)(((v1 - v135) ^ v1) & (v135 ^ v1)) < 0;
                        v5 = (((v1 - v135) ^ (v135 ^ v1)) >>> 4) & 0x1;
                        if(v7 || v10) {
                            goto loc_8050F31;
                        }
                        else {
                            unsigned int* ptr2 = (unsigned int*)(v135 * 2 + v120 - 2);
                            unsigned int v136 = caml_modify(ptr2, v3);
                            int* ptr3 = &v16;
                            char v137 = &v15 == 28;
                            char v138 = (int)&v21 < 0;
                            char v139 = __parity__((unsigned char)&v15 - 28);
                            char v140 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v16 ^ 0x8) ^ (int)&v21) >>> 4) & 0x1);
                            char v141 = (unsigned int)&v16 >= 0xfffffff8;
                            char v142 = (int)(int*)((int)(int*)((int)&v21 ^ (int)&v16) & (int*)~(int)(int*)((int)&v16 ^ 0x8)) < 0;
                            goto loc_8050E95;
                        }
                    }
                    else {
                        v1 = (unsigned int)(v121 >>> 10);
                        char v143 = (v11 >>> 9) & 0x1;
                        char v144 = v128;
                        char v145 = v1 ? 0: 1;
                        char v146 = v1 >= 0x80000000;
                        char v147 = __parity__((unsigned char)v1);
                        v0 = v13;
                        v10 = v0 == v1;
                        v9 = (int)v0 > (int)v1;
                        v8 = __parity__((unsigned char)v1 - (unsigned char)v0);
                        v7 = v0 > v1;
                        v6 = (int)(((v1 - v0) ^ v1) & (v0 ^ v1)) < 0;
                        v5 = (((v1 - v0) ^ (v0 ^ v1)) >>> 4) & 0x1;
                    }
                    if(v7 || v10) {
                        goto loc_8050F2C;
                    }
                    else {
                        char v148 = 6;
                        v72 = *(double*)v3;
                        *(long long*)(v0 * 4 + v120 - 4) = v72;
                        v73 = 7;
                    loc_8050E95:
                        v18 = v14;
                        param0 = v12;
                        param1 = v36;
                    }
                }
            }
        }
    }
    unsigned int v149 = v21;
    int v150 = *(int*)(v149 + 16);
    int v151 = *(int*)(v150 - 4);
    int v152 = *(int*)(v150 - 4);
    unsigned int v153 = (unsigned int)(unsigned char)v152;
    char v154 = v153 == 254;
    char v155 = (int)v153 < 254;
    char v156 = __parity__((unsigned char)v153 - 254);
    char v157 = v153 < 254;
    char v158 = (((v153 - 254) ^ v153) & (v153 ^ 0xfe)) < 0;
    char v159 = (((v153 - 254) ^ (v153 ^ 0xfe)) >>> 4) & 0x1;
    v11 = v151;
    if(!v154) {
        v20 = (unsigned int)(v151 >>> 9);
        char v160 = (v11 >>> 8) & 0x1;
        char v161 = v158;
        char v162 = v20 ? 0: 1;
        char v163 = v20 >= 0x80000000;
        char v164 = __parity__((unsigned char)v20);
        unsigned int v165 = v13;
        v10 = v165 == v20;
        v9 = (int)v165 > (int)v20;
        v8 = __parity__((unsigned char)v20 - (unsigned char)v165);
        v7 = v165 > v20;
        v6 = (int)(((v20 - v165) ^ v20) & (v165 ^ v20)) < 0;
        v5 = (((v20 - v165) ^ (v165 ^ v20)) >>> 4) & 0x1;
        if(!v7 && !v10) {
            caml_modify((unsigned int*)(v165 * 2 + v150 - 2), v12);
            return 1;
        }
    }
    else {
        v20 = (unsigned int)(v151 >>> 10);
        char v166 = (v11 >>> 9) & 0x1;
        char v167 = v158;
        char v168 = v20 ? 0: 1;
        char v169 = v20 >= 0x80000000;
        char v170 = __parity__((unsigned char)v20);
        unsigned int v171 = v13;
        v10 = v171 == v20;
        v9 = (int)v171 > (int)v20;
        v8 = __parity__((unsigned char)v20 - (unsigned char)v171);
        v7 = v171 > v20;
        v6 = (int)(((v20 - v171) ^ v20) & (v171 ^ v20)) < 0;
        v5 = (((v20 - v171) ^ (v171 ^ v20)) >>> 4) & 0x1;
        if(!v7 && !v10) {
            *(long long*)(v171 * 4 + v150 - 4) = *(double*)v12;
            return 1;
        }
        int v172 = caml_ml_array_bound_error((int)v21, v14, (int)v12, (int)v13);
    }
    int v173 = caml_ml_array_bound_error((int)v21, v14, (int)v12, (int)v13);
loc_8050F2C:
    int v174 = caml_ml_array_bound_error((int)v21, v14, (int)v12, (int)v13);
loc_8050F31:
    int v175 = caml_ml_array_bound_error((int)v21, v14, (int)v12, (int)v13);
loc_8050F36:
    int v176 = caml_ml_array_bound_error((int)v21, v14, (int)v12, (int)v13);
loc_8050F3B:
    int v177 = caml_ml_array_bound_error((int)v21, v14, (int)v12, (int)v13);
loc_8050F40:
    int v178 = caml_ml_array_bound_error((int)v21, v14, (int)v12, (int)v13);
loc_8050F45:
    /*BAD_CALL!*/ caml_ml_array_bound_error((int)v21, v14, (int)v12, (int)v13);
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlArray__trickleup_1178() {
}

int camlBuffer__add_buffer_1087() {
    int* ptr0;
    return camlBuffer__add_substring_1076(1, *(unsigned int*)(ptr0 + 1));
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlBuffer__add_channel_1090(void* param0) {
    int* ptr0;
    int v0;
    int* ptr1 = ptr0;
    int v1 = v0;
    void* ptr2 = param0;
    if((int)param0 < 1 || (int)gvar_8078320 < (int)param0) {
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
    }
    if((int)(int*)((char*)(*(ptr1 + 1) + (int)ptr2) - 1) > (int)*(unsigned int*)(ptr1 + 2)) {
        camlBuffer__resize_1066();
    }
    camlPervasives__really_input_1235(*(ptr1 + 1), ptr2);
    *(unsigned int*)(ptr1 + 1) = (int*)((char*)(*(ptr1 + 1) + (int)ptr2) - 1);
    return 1;
}

int camlBuffer__add_substitute_1122(int param0) {
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlBuffer__add_substring_1076(unsigned int param0, unsigned int param1) {
    int* ptr0;
    int v0;
    int* ptr1 = ptr0;
    int v1 = v0;
    unsigned int v2 = param0;
    unsigned int v3 = param1;
    if(((int)param0 < 1 || (int)param1 < 1)) {
    loc_80586FF:
        /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
    }
    unsigned int v4 = (unsigned int)((*(int*)(v0 - 4) >>> 10) * 4 - 1);
    if((int)(unsigned int)((v4 - (unsigned int)*(char*)(v4 + v0)) * 2 - param1 + 2) < (int)param0) {
        goto loc_80586FF;
    }
    else {
        unsigned int v5 = (unsigned int)(*(ptr1 + 1) + param1 - 1);
        unsigned int v6 = (unsigned int)(*(ptr1 + 1) + param1 - 1);
        if((int)*(unsigned int*)(ptr1 + 2) < (int)v5) {
            camlBuffer__resize_1066();
        }
        camlString__blit_1056(*ptr1, *(ptr1 + 1));
        *(unsigned int*)(ptr1 + 1) = v6;
        return 1;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlBuffer__advance_1104(int param0) {
    unsigned int v0;
    unsigned int v1;
    int v2;
    unsigned int v3;
    unsigned int v4;
    int v5;
    unsigned int v6;
    unsigned int v7;
    int v8;
    unsigned int result;
    int* ptr0 = &v2;
    char v9 = &v2 == 8;
    char v10 = (int)&v3 < 0;
    char v11 = __parity__((unsigned char)&v2 - 8);
    char v12 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x8) ^ (int)&v3) >>> 4) & 0x1);
    char v13 = (unsigned int)&v2 < 8;
    char v14 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v2) & (int)(int*)((int)&v2 ^ 0x8)) < 0;
    while(1) {
        char v15 = v6 == result;
        char v16 = (int)v6 > (int)result;
        char v17 = __parity__((unsigned char)result - (unsigned char)v6);
        char v18 = v6 > result;
        char v19 = (int)(((result - v6) ^ result) & (v6 ^ result)) < 0;
        char v20 = (((result - v6) ^ (v6 ^ result)) >>> 4) & 0x1;
        if(v16 == v19) {
            while(1) {
                unsigned int v21 = caml_young_ptr;
                unsigned int v22 = caml_young_ptr;
                v1 = v21 - 8;
                char v23 = v1 ? 0: 1;
                char v24 = v1 >= 0x80000000;
                char v25 = __parity__((unsigned char)v1);
                char v26 = (((v22 ^ 0x8) ^ v1) >>> 4) & 0x1;
                char v27 = v22 < 8;
                char v28 = (int)((v1 ^ v22) & (v22 ^ 0x8)) < 0;
                caml_young_ptr = v1;
                v15 = caml_young_limit == v1;
                v16 = (int)caml_young_limit > (int)v1;
                v17 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
                v18 = caml_young_limit > v1;
                v19 = (int)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0;
                char v29 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4) & 0x1;
                if(!v18) {
                    break;
                }
                else {
                    int v30 = caml_call_gc((int)v6, v8);
                }
            }
            int* ptr1 = (int*)(v1 + 4);
            *(ptr1 - 1) = 0x400;
            *ptr1 = &caml_exn_Not_found;
            caml_raise_exn();
            int v31 = v5;
            unsigned int v32 = v7;
        }
        v0 = v6;
        v3 = v4;
        v7 = *(unsigned int*)(v8 + 12);
        int v33 = *(int*)(v8 + 20);
        unsigned int v34 = result;
        unsigned int v35 = result;
        unsigned int v36 = v34 >> 1;
        char v37 = v35 & 0x1;
        char v38 = 0;
        char v39 = v36 ? 0: 1;
        char v40 = v36 >= 0x80000000;
        char v41 = __parity__((unsigned char)v36);
        int v42 = *(int*)(v33 - 4);
        int v43 = *(int*)(v33 - 4);
        int v44 = v42 >>> 10;
        char v45 = (v43 >>> 9) & 0x1;
        char v46 = 0;
        char v47 = v44 ? 0: 1;
        char v48 = v44 < 0;
        char v49 = __parity__((unsigned char)v44);
        int v50 = v44 * 4 - 1;
        v5 = (unsigned int)*(char*)(v33 + v50);
        unsigned int v51 = (unsigned int)(v50 - v5);
        char v52 = v36 == v51;
        char v53 = (int)v36 > (int)v51;
        char v54 = __parity__((unsigned char)v51 - (unsigned char)v36);
        char v55 = v36 > v51;
        char v56 = (int)(((v51 - v36) ^ v51) & (v36 ^ v51)) < 0;
        char v57 = (((v51 - v36) ^ (v36 ^ v51)) >>> 4) & 0x1;
        if(v55 || v52) {
            goto loc_805811E;
        }
        else {
            int v58 = (unsigned int)*(char*)(v36 + v33);
            unsigned int v59 = (unsigned int)(v58 * 2 + 1);
            char v60 = v59 == v7;
            char v61 = (int)v59 < (int)v7;
            char v62 = __parity__((unsigned char)v59 - (unsigned char)v7);
            char v63 = v59 < v7;
            char v64 = (int)(((v59 - v7) ^ v59) & (v59 ^ v7)) < 0;
            char v65 = (((v59 - v7) ^ (v59 ^ v7)) >>> 4) & 0x1;
            if(v60) {
                unsigned int v66 = result;
                result += 2;
                char v67 = result ? 0: 1;
                char v68 = result >= 0x80000000;
                char v69 = __parity__((unsigned char)result);
                char v70 = (((v66 ^ 0x2) ^ result) >>> 4) & 0x1;
                char v71 = v66 >= 0xfffffffe;
                char v72 = (int)((result ^ v66) & ~(v66 ^ 0x2)) < 0;
                unsigned int v73 = v3;
                unsigned int v74 = v3;
                v4 = v73 + 2;
                char v75 = v4 ? 0: 1;
                char v76 = v4 >= 0x80000000;
                char v77 = __parity__((unsigned char)v4);
                char v78 = (((v74 ^ 0x2) ^ v4) >>> 4) & 0x1;
                char v79 = v74 >= 0xfffffffe;
                char v80 = (int)((v4 ^ v74) & ~(v74 ^ 0x2)) < 0;
                v6 = v0;
            }
            else {
                v7 = *(unsigned int*)(v8 + 16);
                int v81 = *(int*)(v8 + 20);
                unsigned int v82 = result;
                unsigned int v83 = result;
                unsigned int v84 = v82 >> 1;
                char v85 = v83 & 0x1;
                char v86 = 0;
                char v87 = v84 ? 0: 1;
                char v88 = v84 >= 0x80000000;
                char v89 = __parity__((unsigned char)v84);
                int v90 = *(int*)(v81 - 4);
                v43 = *(int*)(v81 - 4);
                int v91 = v90 >>> 10;
                char v92 = (v43 >>> 9) & 0x1;
                char v93 = 0;
                char v94 = v91 ? 0: 1;
                char v95 = v91 < 0;
                char v96 = __parity__((unsigned char)v91);
                int v97 = v91 * 4 - 1;
                v5 = (unsigned int)*(char*)(v81 + v97);
                v51 = (unsigned int)(v97 - v5);
                v52 = v84 == v51;
                v53 = (int)v84 > (int)v51;
                v54 = __parity__((unsigned char)v51 - (unsigned char)v84);
                v55 = v84 > v51;
                v56 = (int)(((v51 - v84) ^ v51) & (v84 ^ v51)) < 0;
                v57 = (((v51 - v84) ^ (v84 ^ v51)) >>> 4) & 0x1;
                if(v55 || v52) {
                    break;
                }
                else {
                    int v98 = (unsigned int)*(char*)(v84 + v81);
                    unsigned int v99 = (unsigned int)(v98 * 2 + 1);
                    char v100 = v99 == v7;
                    char v101 = (int)v99 < (int)v7;
                    char v102 = __parity__((unsigned char)v99 - (unsigned char)v7);
                    char v103 = v99 < v7;
                    char v104 = (int)(((v99 - v7) ^ v99) & (v99 ^ v7)) < 0;
                    char v105 = (((v99 - v7) ^ (v99 ^ v7)) >>> 4) & 0x1;
                    if(v100) {
                        unsigned int v106 = v3;
                        char v107 = v106 == 1;
                        char v108 = (int)v106 < 1;
                        char v109 = __parity__((unsigned char)v106 - 1);
                        char v110 = v106 < 1;
                        char v111 = (((v106 - 1) ^ v106) & (v106 ^ 0x1)) < 0;
                        char v112 = (((v106 - 1) ^ (v106 ^ 0x1)) >>> 4) & 0x1;
                        if(v107) {
                            return result;
                        }
                        result += 2;
                        unsigned int v113 = v106;
                        v4 = v106 - 2;
                        char v114 = v4 ? 0: 1;
                        char v115 = v4 >= 0x80000000;
                        char v116 = __parity__((unsigned char)v4);
                        char v117 = (((v113 ^ 0xfffffffe) ^ v4) >>> 4) & 0x1;
                        char v118 = v113 >= 2;
                        char v119 = (int)((v4 ^ v113) & ~(v113 ^ 0xfffffffe)) < 0;
                        v6 = v0;
                    }
                    else {
                        unsigned int v120 = result;
                        result += 2;
                        char v121 = result ? 0: 1;
                        char v122 = result >= 0x80000000;
                        char v123 = __parity__((unsigned char)result);
                        char v124 = (((v120 ^ 0x2) ^ result) >>> 4) & 0x1;
                        char v125 = v120 >= 0xfffffffe;
                        char v126 = (int)((result ^ v120) & ~(v120 ^ 0x2)) < 0;
                        v4 = v3;
                        v6 = v0;
                    }
                }
            }
        }
    }
    int v127 = caml_ml_array_bound_error((int)v3, (int)v0, v2, param0);
loc_805811E:
    unsigned int v128 = (unsigned int)/*BAD_CALL!*/ caml_ml_array_bound_error((int)v3, (int)v0, v2, param0);
}

unsigned int camlBuffer__advance_1111(int param0, int param1, int param2) {
    int v0;
    int v1;
    unsigned int result1;
    int v2;
    unsigned int result;
    while((int)result < (int)result1) {
        int v3 = *(int*)(v2 + 12);
        unsigned int v4 = result;
        unsigned int v5 = result;
        unsigned int v6 = v4 >> 1;
        char v7 = v5 & 0x1;
        char v8 = 0;
        char v9 = v6 ? 0: 1;
        char v10 = v6 >= 0x80000000;
        char v11 = __parity__((unsigned char)v6);
        int v12 = *(int*)(v3 - 4);
        int v13 = *(int*)(v3 - 4);
        int v14 = v12 >>> 10;
        char v15 = (v13 >>> 9) & 0x1;
        char v16 = 0;
        char v17 = v14 ? 0: 1;
        char v18 = v14 < 0;
        char v19 = __parity__((unsigned char)v14);
        int v20 = v14 * 4 - 1;
        int v21 = (unsigned int)*(char*)(v20 + v3);
        unsigned int v22 = (unsigned int)(v20 - v21);
        char v23 = v6 == v22;
        char v24 = (int)v6 > (int)v22;
        char v25 = __parity__((unsigned char)v22 - (unsigned char)v6);
        char v26 = v6 > v22;
        char v27 = (int)(((v22 - v6) ^ v22) & (v6 ^ v22)) < 0;
        char v28 = (((v22 - v6) ^ (v6 ^ v22)) >>> 4) & 0x1;
        if(!v26 && !v23) {
            int v29 = (unsigned int)*(char*)(v6 + v3);
            unsigned int v30 = (unsigned int)(v29 * 2 + 1);
            char v31 = v30 == 191;
            char v32 = (int)v30 < 191;
            char v33 = __parity__((unsigned char)v30 - 191);
            char v34 = v30 < 191;
            char v35 = (((v30 - 191) ^ v30) & (v30 ^ 0xbf)) < 0;
            char v36 = (((v30 - 191) ^ (v30 ^ 0xbf)) >>> 4) & 0x1;
            if(v32 != v35) {
                char v37 = v30 == 117;
                char v38 = (int)v30 < 117;
                char v39 = __parity__((unsigned char)v30 - 117);
                char v40 = v30 < 117;
                char v41 = (((v30 - 117) ^ v30) & (v30 ^ 0x75)) < 0;
                char v42 = (((v30 - 117) ^ (v30 ^ 0x75)) >>> 4) & 0x1;
                if(v38 == v41) {
                    if(v30 - 130 > 51) {
                        return result;
                    }
                }
                else if((int)v30 < 97) {
                    return result;
                }
            }
            else {
                char v43 = v30 == 247;
                char v44 = (int)v30 < 247;
                char v45 = __parity__((unsigned char)v30 - 247);
                char v46 = v30 < 247;
                char v47 = (((v30 - 247) ^ v30) & (v30 ^ 0xf7)) < 0;
                char v48 = (((v30 - 247) ^ (v30 ^ 0xf7)) >>> 4) & 0x1;
                if(v44 == v47) {
                    if((int)v30 < 0x181) {
                        return result;
                    }
                    unsigned int v49 = v30;
                    int v50 = (int)(v30 - 384);
                    char v51 = v50 ? 0: 1;
                    char v52 = v50 < 0;
                    char v53 = __parity__((unsigned char)v50);
                    v28 = (((v49 ^ 0xfffffe80) ^ v50) >>> 4) & 0x1;
                    char v54 = v49 >= 384;
                    char v55 = ((v50 ^ v49) & ~(v49 ^ 0xfffffe80)) < 0;
                    v13 = v50;
                    v30 = (unsigned int)(v50 >> 1);
                    v26 = v13 & 0x1;
                    v27 = 0;
                    v23 = v30 ? 0: 1;
                    v24 = v30 >= 0x80000000;
                    v25 = __parity__((unsigned char)v30);
                    jump *(int*)(v30 * 4 + 134713456);
                }
                if(v30 == 193) {
                    return result;
                }
            }
            unsigned int v56 = result;
            result += 2;
            char v57 = result ? 0: 1;
            char v58 = result >= 0x80000000;
            char v59 = __parity__((unsigned char)result);
            char v60 = (((v56 ^ 0x2) ^ result) >>> 4) & 0x1;
            char v61 = v56 >= 0xfffffffe;
            char v62 = (int)((result ^ v56) & ~(v56 ^ 0x2)) < 0;
        }
        else {
            int* ptr0 = &v1;
            result = (unsigned int)/*BAD_CALL!*/ caml_ml_array_bound_error(v0, param0, param1, param2);
        }
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlBuffer__blit_1051(int param0, unsigned int param1) {
    int* ptr0;
    unsigned int v0;
    unsigned int v1;
    char v2 = v1 == 1;
    char v3 = (int)v1 < 1;
    char v4 = (((v1 - 1) ^ v1) & (v1 ^ 0x1)) < 0;
    if(v3 == v4) {
        v2 = v0 == 1;
        v3 = (int)v0 < 1;
        v41 = __parity__((unsigned char)v0 - 1);
        v44 = v0 < 1;
        v4 = (((v0 - 1) ^ v0) & (v0 ^ 0x1)) < 0;
        v42 = (((v0 - 1) ^ (v0 ^ 0x1)) >>> 4) & 0x1;
        if(v3 == v4) {
            unsigned int v5 = *(unsigned int*)(ptr0 + 1);
            unsigned int v6 = *(unsigned int*)(ptr0 + 1);
            unsigned int v7 = v5 - v1;
            char v8 = v7 ? 0: 1;
            char v9 = v7 >= 0x80000000;
            char v10 = __parity__((unsigned char)v7);
            char v11 = (((v1 ^ v6) ^ v7) >>> 4) & 0x1;
            char v12 = v1 > v6;
            char v13 = (int)((v1 ^ v6) & (v7 ^ v6)) < 0;
            unsigned int v14 = v7 + 1;
            v2 = v0 == v14;
            v3 = (int)v0 < (int)v14;
            v41 = __parity__((unsigned char)v0 - (unsigned char)v14);
            v44 = v0 < v14;
            v4 = (int)(((v0 - v14) ^ v0) & (v0 ^ v14)) < 0;
            v42 = (((v0 - v14) ^ (v0 ^ v14)) >>> 4) & 0x1;
            if((v2 || v3 != v4)) {
                v2 = param1 == 1;
                v3 = (int)param1 < 1;
                v41 = __parity__((unsigned char)param1 - 1);
                v44 = param1 < 1;
                v4 = (((param1 - 1) ^ param1) & (param1 ^ 0x1)) < 0;
                v42 = (((param1 - 1) ^ (param1 ^ 0x1)) >>> 4) & 0x1;
                if(v3 == v4) {
                    int v15 = *(int*)(param0 - 4);
                    int v16 = *(int*)(param0 - 4);
                    int v17 = v15 >>> 10;
                    char v18 = (v16 >>> 9) & 0x1;
                    char v19 = v4;
                    char v20 = v17 ? 0: 1;
                    char v21 = v17 < 0;
                    char v22 = __parity__((unsigned char)v17);
                    unsigned int v23 = (unsigned int)(v17 * 4 - 1);
                    unsigned int v24 = (unsigned int)*(char*)(param0 + v23);
                    unsigned int v25 = v23;
                    unsigned int v26 = v23 - v24;
                    char v27 = v26 ? 0: 1;
                    char v28 = v26 >= 0x80000000;
                    char v29 = __parity__((unsigned char)v26);
                    char v30 = (((v24 ^ v25) ^ v26) >>> 4) & 0x1;
                    char v31 = v24 > v25;
                    char v32 = (int)((v26 ^ v25) & (v24 ^ v25)) < 0;
                    unsigned int v33 = v26;
                    v6 = v26;
                    int v34 = (int)(v33 * 2);
                    char v35 = v6 >= 0x80000000;
                    char v36 = v6 >= 0x80000000 ^ ((v6 >>> 30) & 0x1);
                    char v37 = v34 ? 0: 1;
                    char v38 = v34 < 0;
                    char v39 = __parity__((unsigned char)v34);
                    int v40 = v34 - v1;
                    v14 = (unsigned int)(v40 + 2);
                    v2 = param1 == v14;
                    v3 = (int)param1 < (int)v14;
                    v41 = __parity__((unsigned char)param1 - (unsigned char)v14);
                    v44 = param1 < v14;
                    v4 = (int)(((param1 - v14) ^ param1) & (param1 ^ v14)) < 0;
                    v42 = (((param1 - v14) ^ (param1 ^ v14)) >>> 4) & 0x1;
                    if((v2 || v3 != v4)) {
                        return camlString__blit_1056(param0, (int)param1);
                    }
                }
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlBuffer__clear_1062() {
    int v0;
    *(int*)(v0 + 4) = 1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlBuffer__contents_1044() {
    int* ptr0;
    return camlString__sub_1046(*(ptr0 + 1));
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlBuffer__create_1039() {
    int* ptr0;
    int v0;
    unsigned int v1;
    if((int)v1 < 3) {
        v1 = 3;
    }
    unsigned int v2 = (int)gvar_8078320 < (int)v1 ? gvar_8078320: v1;
    int v3 = caml_c_call();
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v3, v0);
        }
    }
    *ptr0 = 0x1000;
    *(ptr0 + 1) = v3;
    *(ptr0 + 2) = 1;
    *(unsigned int*)(ptr0 + 3) = v2;
    *(ptr0 + 4) = v3;
    return ptr0 + 1;
}

int camlBuffer__entry() {
    camlBuffer = &camlBuffer__20;
    gvar_8078E54 = &camlBuffer__19;
    gvar_8078E58 = &camlBuffer__18;
    gvar_8078E5C = &camlBuffer__17;
    gvar_8078E60 = &camlBuffer__16;
    gvar_8078E64 = &camlBuffer__15;
    gvar_8078E68 = &camlBuffer__14;
    gvar_8078E6C = &camlBuffer__13;
    gvar_8078E8C = &camlBuffer__12;
    gvar_8078E70 = &camlBuffer__11;
    gvar_8078E78 = &camlBuffer__10;
    gvar_8078E74 = &camlBuffer__9;
    gvar_8078E80 = &camlBuffer__8;
    gvar_8078E84 = &camlBuffer__7;
    gvar_8078E88 = &camlBuffer__6;
    gvar_8078E90 = &camlBuffer__5;
    gvar_8078E94 = &camlBuffer__4;
    gvar_8078E98 = &camlBuffer__3;
    gvar_8078E9C = &camlBuffer__2;
    gvar_8078E7C = &camlBuffer__1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* camlBuffer__find_ident_1114(unsigned int param0, unsigned int param1) {
    int* ptr0;
    int* ptr1;
    int* ptr2;
    int v0;
    unsigned int v1;
    void* ptr3;
    unsigned int* ptr4;
    int* ptr5;
    int v2;
    int v3;
    char v4 = param0 == ptr4;
    char v5 = (int)param0 > (int)ptr4;
    char v6 = __parity__((unsigned char)ptr4 - (unsigned char)param0);
    char v7 = param0 > (unsigned int)ptr4;
    char v8 = (int)(int*)((int)(int*)((int)(int*)((int)ptr4 - param0) ^ (int)ptr4) & (int)(int*)(param0 ^ (int)ptr4)) < 0;
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr4 - param0) ^ (int)(int*)(param0 ^ (int)ptr4)) >>> 4) & 0x1);
    if(v5 == v8) {
        while(1) {
            unsigned int v10 = caml_young_ptr;
            unsigned int v11 = caml_young_ptr;
            v1 = v10 - 8;
            char v12 = v1 ? 0: 1;
            char v13 = v1 >= 0x80000000;
            char v14 = __parity__((unsigned char)v1);
            char v15 = (((v11 ^ 0x8) ^ v1) >>> 4) & 0x1;
            char v16 = v11 < 8;
            char v17 = (int)((v1 ^ v11) & (v11 ^ 0x8)) < 0;
            caml_young_ptr = v1;
            v4 = caml_young_limit == v1;
            v5 = (int)caml_young_limit > (int)v1;
            v6 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
            v7 = caml_young_limit > v1;
            v8 = (int)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0;
            char v18 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4) & 0x1;
            if(!v7) {
                break;
            }
            else {
                int v19 = caml_call_gc((int)param0, (int)param1);
            }
        }
        int* ptr6 = (int*)(v1 + 4);
        *(ptr6 - 1) = 0x400;
        *ptr6 = &caml_exn_Not_found;
        caml_raise_exn();
        int v20 = v3;
    }
    unsigned int* ptr7 = ptr4;
    int v21 = v2;
    unsigned int* ptr8 = ptr4;
    unsigned int* ptr9 = ptr4;
    int* ptr10 = (int*)((int)ptr8 >> 1);
    char v22 = (unsigned int*)((int)ptr9 & 0x1);
    char v23 = 0;
    char v24 = ptr10 ? 0: 1;
    char v25 = (int)ptr10 < 0;
    char v26 = __parity__((unsigned char)ptr10);
    int v27 = *(int*)(v2 - 4);
    int v28 = *(int*)(v2 - 4);
    int v29 = v27 >>> 10;
    char v30 = (v28 >>> 9) & 0x1;
    char v31 = 0;
    char v32 = v29 ? 0: 1;
    char v33 = v29 < 0;
    char v34 = __parity__((unsigned char)v29);
    int v35 = v29 * 4 - 1;
    int* ptr11 = (int*)*(char*)(v2 + v35);
    int* ptr12 = (int*)(v35 - (int)ptr11);
    char v36 = ptr10 == ptr12;
    char v37 = (int)ptr10 > (int)ptr12;
    char v38 = __parity__((unsigned char)ptr12 - (unsigned char)ptr10);
    char v39 = ptr10 > ptr12;
    char v40 = (int)(int*)((int)(int*)((int)(int*)((int)ptr12 - (int)ptr10) ^ (int)ptr12) & (int)(int*)((int)ptr10 ^ (int)ptr12)) < 0;
    char v41 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr12 - (int)ptr10) ^ (int)(int*)((int)ptr10 ^ (int)ptr12)) >>> 4) & 0x1);
    if(!v39 && !v36) {
        int v42 = (unsigned int)*(char*)(v2 + (int)ptr10) * 2 + 1;
        if(v42 == 81) {
            v0 = 81;
        }
        else if(v42 != 247) {
            int v43 = camlBuffer__advance_to_non_alpha_1108();
            v0 = v43;
            param0 = (unsigned int)camlString__sub_1046((int)(int*)((char*)(v43 - (int)ptr7) + 1));
            while(1) {
                ptr2 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr2) {
                    break;
                }
                else {
                    caml_call_gc((int)param0, (int)param1);
                }
            }
            *ptr2 = 0x800;
            *(unsigned int*)(ptr2 + 1) = param0;
            *(ptr2 + 2) = v0;
            return (unsigned int*)(ptr2 + 1);
        }
        else {
            v0 = 247;
        }
        ptr1 = (int*)((char*)ptr4 + 2);
        int v44 = camlBuffer__closing_1097();
        int v45 = camlBuffer__advance_to_closing_1098(1, v21);
        v0 = v45;
        int v46 = camlString__sub_1046((int)(int*)((char*)(v45 - (int)ptr7) - 1));
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc((int)param0, (int)param1);
            }
        }
        *ptr0 = 0x800;
        *(unsigned int*)(ptr0 + 1) = v46;
        *(unsigned int*)(ptr0 + 2) = (unsigned int*)(v0 + 2);
        return (unsigned int*)(ptr0 + 1);
    }
    int* ptr13 = &ptr3;
    int* ptr14 = (int*)caml_ml_array_bound_error(v0, (int)ptr1, (int)ptr7, v21);
    int* ptr15 = ptr11;
    int* ptr16 = ptr5;
    ptr11 = ptr14;
    param1 = param0;
    int v47 = *(int*)(param1 - 4);
    int v48 = *(int*)(param1 - 4);
    int v49 = v47 >>> 10;
    char v50 = (v48 >>> 9) & 0x1;
    char v51 = v40;
    char v52 = v49 ? 0: 1;
    char v53 = v49 < 0;
    char v54 = __parity__((unsigned char)v49);
    unsigned int v55 = (unsigned int)(v49 * 4 - 1);
    param0 = (unsigned int)*(char*)(v55 + param1);
    unsigned int v56 = v55;
    unsigned int* ptr17 = (unsigned int*)(v55 - param0);
    char v57 = ptr17 ? 0: 1;
    char v58 = (int)ptr17 < 0;
    char v59 = __parity__((unsigned char)ptr17);
    char v60 = (int*)((int)(int*)((int)(int*)((param0 ^ v56) ^ (int)ptr17) >>> 4) & 0x1);
    char v61 = param0 > v56;
    char v62 = (int)(int*)((int)(int*)((int)ptr17 ^ v56) & (param0 ^ v56)) < 0;
    ptr5 = (int*)((char*)((int)ptr17 * 2) + 1);
}

int camlBuffer__length_1060() {
    int v0;
    return *(int*)(v0 + 4);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlBuffer__nth_1057(int param0, int param1, int param2) {
    void* ptr0;
    int* ptr1;
    unsigned int v0;
    char v1 = (int)v0 < 1;
    char v2 = (((v0 - 1) ^ v0) & (v0 ^ 0x1)) < 0;
    if(v1 == v2) {
        unsigned int v3 = *(unsigned int*)(ptr1 + 1);
        v9 = v3 == v0;
        v1 = (int)v3 > (int)v0;
        v7 = __parity__((unsigned char)v0 - (unsigned char)v3);
        v12 = v3 > v0;
        v2 = (int)(((v0 - v3) ^ v0) & (v3 ^ v0)) < 0;
        v8 = (((v0 - v3) ^ (v3 ^ v0)) >>> 4) & 0x1;
        if(v1 != v2) {
            int v4 = *ptr1;
            v0 >>= 1;
            int v5 = (*(int*)(v4 - 4) >>> 10) * 4 - 1;
            if((unsigned int)(v5 - (unsigned int)*(char*)(v4 + v5)) > v0) {
                return (unsigned int)*(char*)(v4 + v0) * 2 + 1;
            }
            int v6 = caml_ml_array_bound_error((int)ptr0, param0, param1, param2);
            return *(int*)(v6 + 4);
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlBuffer__output_buffer_1094() {
    int* ptr0;
    return camlPervasives__output_1194(1, *(unsigned int*)(ptr0 + 1));
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlBuffer__reset_1064() {
    unsigned int* ptr0;
    ptr0[1] = 1;
    caml_modify(ptr0, ptr0[3]);
    unsigned int v0 = ptr0[0];
    unsigned int v1 = (unsigned int)((*(int*)(v0 - 4) >>> 10) * 4 - 1);
    ptr0[2] = (unsigned int)((v1 - (unsigned int)*(char*)(v1 + v0)) * 2 + 1);
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlBuffer__sub_1046(unsigned int param0) {
    int* ptr0;
    unsigned int v0;
    char v1 = v0 == 1;
    char v2 = (int)v0 < 1;
    char v3 = __parity__((unsigned char)v0 - 1);
    char v4 = v0 < 1;
    char v5 = (((v0 - 1) ^ v0) & (v0 ^ 0x1)) < 0;
    char v6 = (((v0 - 1) ^ (v0 ^ 0x1)) >>> 4) & 0x1;
    if(v2 == v5) {
        char v7 = param0 == 1;
        char v8 = (int)param0 < 1;
        char v9 = __parity__((unsigned char)param0 - 1);
        char v10 = param0 < 1;
        char v11 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
        char v12 = (((param0 - 1) ^ (param0 ^ 0x1)) >>> 4) & 0x1;
        if(v8 == v11) {
            unsigned int v13 = *(unsigned int*)(ptr0 + 1);
            unsigned int v14 = *(unsigned int*)(ptr0 + 1);
            unsigned int v15 = v13 - param0;
            char v16 = v15 ? 0: 1;
            char v17 = v15 >= 0x80000000;
            char v18 = __parity__((unsigned char)v15);
            char v19 = (((param0 ^ v14) ^ v15) >>> 4) & 0x1;
            char v20 = param0 > v14;
            char v21 = (int)((param0 ^ v14) & (v15 ^ v14)) < 0;
            unsigned int v22 = v15 + 1;
            char v23 = v22 == v0;
            char v24 = (int)v22 > (int)v0;
            char v25 = __parity__((unsigned char)v0 - (unsigned char)v22);
            char v26 = v22 > v0;
            char v27 = (int)(((v0 - v22) ^ v0) & (v22 ^ v0)) < 0;
            char v28 = (((v0 - v22) ^ (v22 ^ v0)) >>> 4) & 0x1;
            if((v23 || v24 != v27)) {
                unsigned int v29 = param0;
                unsigned int v30 = v0;
                int* ptr1 = ptr0;
                int v31 = caml_c_call();
                int result = v31;
                camlString__blit_1056(v31, 1);
                return result;
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlCallback__entry() {
    camlCallback = &camlCallback__2;
    gvar_807B1C8 = &camlCallback__1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlCallback__register_1031() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlCallback__register_exception_1034(int param0, int param1) {
    int* ptr0;
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    float* ptr1;
    if(*(char*)(ptr1 - 1) == 254) {
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(v1, param1);
            }
        }
        *ptr0 = 2301;
        v0[v2 - 1] = *(double*)ptr1;
        *(long long*)(ptr0 + 1) = v0[v2 - 1];
    }
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlChar__chr_1032() {
    unsigned int result;
    char v0 = result == 1;
    char v1 = (int)result < 1;
    char v2 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
    if(v1 == v2) {
        v0 = result == 0x1ff;
        v1 = (int)result < 0x1ff;
        v3 = __parity__((unsigned char)result - 0xff);
        v5 = result < 0x1ff;
        v2 = (((result - 0x1ff) ^ result) & (result ^ 0x1ff)) < 0;
        v4 = (((result - 0x1ff) ^ (result ^ 0x1ff)) >>> 4) & 0x1;
        if((v0 || v1 != v2)) {
            return result;
        }
    }
    result = (unsigned int)/*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlChar__compare_1048() {
    unsigned int v0;
    unsigned int v1;
    return v1 - v0 + 1;
}

int camlChar__entry() {
    camlChar = &camlChar__5;
    gvar_8077D64 = &camlChar__4;
    gvar_8077D68 = &camlChar__3;
    gvar_8077D6C = &camlChar__2;
    gvar_8077D70 = &camlChar__1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
char* camlChar__escaped_1038() {
    unsigned int v0;
    if(v0 == 79) {
        return (char*)&camlChar__6;
    }
    else if(v0 != 185) {
        unsigned int v1 = v0;
        if((int)v0 < 29) {
            jump *((int*)((int)(char*)(v0 >> 1) * 4) + 33677181);
        }
        unsigned int v2 = (unsigned int)caml_c_call();
        if(v2 != 1) {
            char* result = (char*)caml_c_call();
            *result = (unsigned char)(v1 >>> 1);
            return result;
        }
        char* result1 = (char*)caml_c_call();
        *result1 = 92;
        unsigned int v3 = v1;
        *(result1 + 1) = (unsigned char)(((int)(v3 >> 1) / 100 * 2 + 97) >>> 1);
        *(result1 + 2) = (unsigned char)(((int)(v3 >> 1) / 10 % 10 * 2 + 97) >>> 1);
        *(result1 + 3) = (unsigned char)(((int)(v3 >> 1) % 10 * 2 + 97) >>> 1);
        return result1;
    }
    return (char*)&camlChar__7;
}

unsigned int camlChar__lowercase_1043() {
    unsigned int v0;
    return ((int)v0 >= 131 && (int)v0 <= 181) || ((int)v0 >= 0x181 && (int)v0 <= 429) || ((int)v0 >= 433 && (int)v0 <= 445) ? v0 + 64: v0;
}

unsigned int camlChar__uppercase_1045() {
    unsigned int v0;
    return ((int)v0 >= 195 && (int)v0 <= 245) || ((int)v0 >= 0x1c1 && (int)v0 <= 493) || ((int)v0 >= 0x1f1 && (int)v0 <= 509) ? v0 - 64: v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* camlHashtbl__Make_1251(int param0, int param1) {
    int* ptr0;
    int v0;
    unsigned int v1 = camlHashtbl;
    unsigned int v2 = gvar_8078474;
    unsigned int v3 = gvar_807847C;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 232);
        caml_young_ptr -= 232;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(param0, param1);
        }
    }
    *ptr0 = 3319;
    *(ptr0 + 1) = &camlHashtbl__safehash_1177;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = v0;
    int* ptr1 = ptr0 + 5;
    *(ptr0 + 4) = 4343;
    *(ptr0 + 5) = &caml_curry3;
    *(ptr0 + 6) = 7;
    *(ptr0 + 7) = &camlHashtbl__add_1179;
    *(unsigned int*)(ptr0 + 8) = ptr0 + 1;
    int* ptr2 = ptr0 + 10;
    *(ptr0 + 9) = 5367;
    *(ptr0 + 10) = &caml_curry2;
    *(ptr0 + 11) = 5;
    *(ptr0 + 12) = &camlHashtbl__remove_1185;
    *(ptr0 + 13) = v0;
    *(unsigned int*)(ptr0 + 14) = ptr0 + 1;
    *(ptr0 + 15) = 4343;
    *(ptr0 + 16) = &caml_curry2;
    *(ptr0 + 17) = 5;
    *(ptr0 + 18) = &camlHashtbl__find_rec_1193;
    *(ptr0 + 19) = v0;
    int* ptr3 = ptr0 + 21;
    *(ptr0 + 20) = 6391;
    *(ptr0 + 21) = &caml_curry2;
    *(ptr0 + 22) = 5;
    *(ptr0 + 23) = &camlHashtbl__find_1198;
    *(ptr0 + 24) = v0;
    *(unsigned int*)(ptr0 + 25) = ptr0 + 1;
    *(unsigned int*)(ptr0 + 26) = ptr0 + 16;
    *(ptr0 + 27) = 5367;
    *(ptr0 + 28) = &caml_curry2;
    *(ptr0 + 29) = 5;
    *(ptr0 + 30) = &camlHashtbl__find_all_1210;
    *(ptr0 + 31) = v0;
    *(unsigned int*)(ptr0 + 32) = ptr0 + 1;
    *(ptr0 + 33) = 5367;
    *(ptr0 + 34) = &caml_curry3;
    *(ptr0 + 35) = 7;
    *(ptr0 + 36) = &camlHashtbl__replace_1217;
    *(ptr0 + 37) = v0;
    *(unsigned int*)(ptr0 + 38) = ptr0 + 1;
    *(ptr0 + 39) = 5367;
    *(ptr0 + 40) = &caml_curry2;
    *(ptr0 + 41) = 5;
    *(ptr0 + 42) = &camlHashtbl__mem_1227;
    *(ptr0 + 43) = v0;
    *(unsigned int*)(ptr0 + 44) = ptr0 + 1;
    unsigned int v4 = gvar_8078494;
    unsigned int v5 = gvar_8078498;
    unsigned int v6 = gvar_807849C;
    *(ptr0 + 45) = 0x3000;
    *(unsigned int*)(ptr0 + 46) = v1;
    *(unsigned int*)(ptr0 + 47) = v2;
    *(unsigned int*)(ptr0 + 48) = v3;
    *(unsigned int*)(ptr0 + 49) = ptr1;
    *(unsigned int*)(ptr0 + 50) = ptr2;
    *(unsigned int*)(ptr0 + 51) = ptr3;
    *(unsigned int*)(ptr0 + 52) = ptr0 + 28;
    *(unsigned int*)(ptr0 + 53) = ptr0 + 34;
    *(unsigned int*)(ptr0 + 54) = ptr0 + 40;
    *(unsigned int*)(ptr0 + 55) = v4;
    *(unsigned int*)(ptr0 + 56) = v5;
    *(unsigned int*)(ptr0 + 57) = v6;
    return (unsigned int*)(ptr0 + 46);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__add_1074(int par0) {
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlHashtbl__add_1179() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__clear_1054(int param0, int param1, int param2) {
    unsigned int v0;
    int v1;
    int v2;
    char v3;
    int v4;
    int* ptr0;
    int* ptr1 = ptr0;
    unsigned int v5 = 1;
    int v6 = *(ptr1 + 1);
    int v7 = *(int*)(v6 - 4);
    int v8 = *(int*)(v6 - 4);
    int v9 = v7 >>> 9;
    char v10 = (v8 >>> 8) & 0x1;
    char v11 = v3;
    char v12 = v9 ? 0: 1;
    char v13 = v9 < 0;
    char v14 = __parity__((unsigned char)v9);
    int v15 = v9 | 0x1;
    unsigned int v16 = (unsigned int)(v15 - 2);
    char v17 = (((1 - v16) ^ 0x1) & (v16 ^ 0x1)) < 0;
    if((v16 == 1 || (int)v16 > 1 != v17)) {
        do {
            int v18 = *(ptr1 + 1);
            int v19 = *(int*)(v18 - 4);
            int v20 = *(int*)(v18 - 4);
            unsigned int v21 = (unsigned int)(v19 >>> 9);
            char v22 = (v20 >>> 8) & 0x1;
            char v23 = v17;
            char v24 = v21 ? 0: 1;
            char v25 = v21 >= 0x80000000;
            char v26 = __parity__((unsigned char)v21);
            char v27 = v21 == v5;
            char v28 = (int)v21 < (int)v5;
            char v29 = __parity__((unsigned char)v21 - (unsigned char)v5);
            char v30 = v21 < v5;
            v17 = (int)(((v21 - v5) ^ v21) & (v21 ^ v5)) < 0;
            char v31 = (((v21 - v5) ^ (v21 ^ v5)) >>> 4) & 0x1;
            if((v30 || v27)) {
                goto loc_805733B;
            }
            else {
                unsigned int* ptr2 = (unsigned int*)(v5 * 2 + v18 - 2);
                unsigned int v32 = caml_modify(ptr2, 1);
                int* ptr3 = &v1;
                char v33 = &v2 ? 0: 1;
                char v34 = (int)&v2 < 0;
                char v35 = __parity__((unsigned char)&v2);
                char v36 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x8) ^ (int)&v2) >>> 4) & 0x1);
                char v37 = (unsigned int)&v1 >= 0xfffffff8;
                char v38 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v2) & (int*)~(int)(int*)((int)&v1 ^ 0x8)) < 0;
                v0 = v5;
                v5 += 2;
                v17 = (int)(((v0 - v16) ^ v0) & (v0 ^ v16)) < 0;
            }
            if(v0 == v16) {
                break;
            loc_805733B:
                int* ptr4 = &v4;
                int v39 = /*BAD_CALL!*/ caml_ml_array_bound_error(v2, param0, param1, param2);
            }
        }
        while(1);
    }
    *ptr1 = 1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlHashtbl__copy_1057(int param0, unsigned int param1) {
    int* ptr0;
    int* ptr1;
    int* ptr2 = ptr1;
    param0 = camlArray__copy_1049(param0, param1);
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(param0, (int)param1);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = *ptr2;
    *(ptr0 + 2) = param0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__do_bucket_1132() {
    int v0;
    int* ptr0;
    while(ptr0 != 1) {
        int v1 = v0;
        int* ptr1 = *(unsigned int*)(ptr0 + 2);
        caml_apply2(*(int**)(v0 + 8));
        ptr0 = ptr1;
        v0 = v1;
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__do_bucket_1142(int param0) {
    int v0;
    int result;
    int* ptr0;
    while(ptr0 != 1) {
        int v1 = param0;
        int* ptr1 = *(unsigned int*)(ptr0 + 2);
        caml_apply3(result, *(int**)(param0 + 12));
        result = v0;
        ptr0 = ptr1;
        param0 = v1;
    }
    return result;
}

int camlHashtbl__entry() {
    gvar_80784A4 = &camlHashtbl__16;
    camlHashtbl = &camlHashtbl__15;
    gvar_8078474 = &camlHashtbl__14;
    gvar_807847C = &camlHashtbl__13;
    gvar_807849C = &camlHashtbl__12;
    gvar_80784A8 = &camlHashtbl__11;
    gvar_8078478 = &camlHashtbl__10;
    gvar_807848C = &camlHashtbl__9;
    gvar_80784AC = &camlHashtbl__8;
    gvar_8078480 = &camlHashtbl__7;
    gvar_8078484 = &camlHashtbl__6;
    gvar_8078490 = &camlHashtbl__5;
    gvar_8078488 = &camlHashtbl__4;
    gvar_8078494 = &camlHashtbl__3;
    gvar_8078498 = &camlHashtbl__2;
    gvar_80784A0 = &camlHashtbl__1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__find_1093(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int result;
    int v0;
    void* ptr2;
    int v1;
    int v2;
    void* ptr3;
    int v3;
    int v4;
    int v5;
    int* ptr4 = &ptr2;
    char v6 = &ptr2 == 12;
    char v7 = (int)&v4 < 0;
    char v8 = __parity__((unsigned char)&ptr2 - 12);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0xc) ^ (int)&v4) >>> 4) & 0x1);
    char v10 = (unsigned int)&ptr2 < 12;
    char v11 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr2) & (int)(int*)((int)&ptr2 ^ 0xc)) < 0;
    int v12 = *(int*)(v1 + 4);
    int v13 = *(int*)(v12 - 4);
    int v14 = *(int*)(v12 - 4);
    int v15 = v13 >>> 10;
    char v16 = (v14 >>> 9) & 0x1;
    char v17 = v11;
    char v18 = v15 ? 0: 1;
    char v19 = v15 < 0;
    char v20 = __parity__((unsigned char)v15);
    char v21 = v15 ? 0: 1;
    char v22 = v15 < 0;
    char v23 = __parity__((unsigned char)v15);
    char v24 = 0;
    char v25 = 0;
    if(!v21) {
        int v26 = caml_hash_univ_param(21, 201, v2);
        int* ptr5 = &ptr3;
        char v27 = &ptr2 == 12;
        char v28 = (int)&v4 < 0;
        char v29 = __parity__((unsigned char)&ptr2 - 12);
        char v30 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr3 ^ 0xc) ^ (int)&v4) >>> 4) & 0x1);
        char v31 = (unsigned int)&ptr3 >= 0xfffffff4;
        char v32 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&v4) & (int*)~(int)(int*)((int)&ptr3 ^ 0xc)) < 0;
        int v33 = v26;
        int v34 = v26 >> 1;
        v25 = v33 & 0x1;
        v24 = 0;
        v21 = v34 ? 0: 1;
        v22 = v34 < 0;
        v23 = __parity__((unsigned char)v34);
        int v35 = v15;
        int v36 = v34 < 0 ? -1: 0;
        int v37 = (unsigned int)((unsigned long long)v34 | ((unsigned long long)v36 << 32)) % v35;
        int v38 = (unsigned int)((unsigned long long)v34 | ((unsigned long long)v36 << 32)) / v35;
        param1 = v37;
    }
    else {
        int v39 = &caml_bucket_Division_by_zero;
        caml_raise_exn();
    }
    int v40 = param1;
    int v41 = param1 * 2;
    char v42 = v40 < 0;
    char v43 = v40 < 0 ^ ((v40 >>> 30) & 0x1);
    char v44 = v41 ? 0: 1;
    char v45 = v41 < 0;
    char v46 = __parity__((unsigned char)v41);
    int v47 = v41;
    unsigned int v48 = (unsigned int)(v41 + 1);
    char v49 = v48 ? 0: 1;
    char v50 = v48 >= 0x80000000;
    char v51 = __parity__((unsigned char)v48);
    char v52 = (((v47 ^ 0x1) ^ v48) >>> 4) & 0x1;
    char v53 = ((v48 ^ v47) & ~(v47 ^ 0x1)) < 0;
    int v54 = *(int*)(v1 + 4);
    void* ptr6 = *(void**)(v54 - 4);
    void* ptr7 = *(void**)(v54 - 4);
    int* ptr8 = (int*)((int)ptr6 >>> 9);
    char v55 = (int*)((int)(int*)((int)ptr7 >>> 8) & 0x1);
    char v56 = v53;
    char v57 = ptr8 ? 0: 1;
    char v58 = (int)ptr8 < 0;
    char v59 = __parity__((unsigned char)ptr8);
    char v60 = ptr8 == v48;
    char v61 = (int)ptr8 < (int)v48;
    char v62 = __parity__((unsigned char)ptr8 - (unsigned char)v48);
    char v63 = (unsigned int)ptr8 < v48;
    char v64 = (int)(int*)((int)(int*)((int)(int*)((int)ptr8 - v48) ^ (int)ptr8) & (int)(int*)((int)ptr8 ^ v48)) < 0;
    char v65 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr8 - v48) ^ (int)(int*)((int)ptr8 ^ v48)) >>> 4) & 0x1);
    if(!v63 && !v60) {
        unsigned int* ptr9 = *(unsigned int*)(v48 * 2 + v54 - 2);
        if(ptr9 != 1) {
            v0 = v2;
            v4 = *(int*)(ptr9 + 2);
            result = *(int*)(ptr9 + 1);
            void* ptr10 = *ptr9;
            int v66 = v2;
            unsigned int v67 = (unsigned int)caml_c_call();
            if(v67 == 1) {
                return result;
            }
            int v68 = v4;
            if(v68 != 1) {
                v4 = *(int*)(v68 + 8);
                result = *(int*)(v68 + 4);
                ptr10 = *(void**)v68;
                v66 = v2;
                unsigned int v69 = (unsigned int)caml_c_call();
                if(v69 == 1) {
                    return result;
                }
                int v70 = v4;
                if(v70 != 1) {
                    v4 = *(int*)(v70 + 8);
                    result = *(int*)(v70 + 4);
                    unsigned int v71 = (unsigned int)caml_c_call();
                    if(v71 == 1) {
                        return result;
                    }
                    return camlHashtbl__find_rec_1088(v3, v5);
                }
                while(1) {
                    ptr1 = (int*)(caml_young_ptr - 8);
                    caml_young_ptr -= 8;
                    if(caml_young_limit <= (unsigned int)ptr1) {
                        break;
                    }
                    else {
                        caml_call_gc(v3, v5);
                    }
                }
                *ptr1 = 0x400;
                *(ptr1 + 1) = &caml_exn_Not_found;
                caml_raise_exn();
            }
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 8);
                caml_young_ptr -= 8;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    caml_call_gc(v3, v5);
                }
            }
            *ptr0 = 0x400;
            *(ptr0 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        while(1) {
            int* ptr11 = (int*)(caml_young_ptr - 8);
            caml_young_ptr -= 8;
            if(caml_young_limit <= (unsigned int)ptr11) {
                *ptr11 = 0x400;
                *(ptr11 + 1) = &caml_exn_Not_found;
                caml_raise_exn();
            }
            caml_call_gc((int)ptr9, (int)v48);
        }
    }
    caml_ml_array_bound_error(v4, v0, result, (int)ptr2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__find_1198(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    int result;
    void* ptr2;
    unsigned int* ptr3;
    int v2;
    int v3;
    unsigned int* ptr4;
    int* ptr5 = &ptr2;
    char v4 = &ptr2 == 16;
    char v5 = (int)&ptr3 < 0;
    char v6 = __parity__((unsigned char)&ptr2 - 16);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0x10) ^ (int)&ptr3) >>> 4) & 0x1);
    char v8 = (unsigned int)&ptr2 < 16;
    char v9 = (int)(int*)((int)(int*)((int)&ptr3 ^ (int)&ptr2) & (int)(int*)((int)&ptr2 ^ 0x10)) < 0;
    int v10 = *(int*)(ptr4 + 1);
    int v11 = *(int*)(v10 - 4);
    int v12 = *(int*)(v10 - 4);
    int v13 = v11 >>> 10;
    char v14 = (v12 >>> 9) & 0x1;
    char v15 = v9;
    char v16 = v13 ? 0: 1;
    char v17 = v13 < 0;
    char v18 = __parity__((unsigned char)v13);
    char v19 = v13 ? 0: 1;
    char v20 = v13 < 0;
    char v21 = __parity__((unsigned char)v13);
    char v22 = 0;
    char v23 = 0;
    if(!v19) {
        result = v13;
        v1 = param0;
        v0 = v3;
        ptr3 = ptr4;
        int v24 = *(int*)(param0 + 16);
        int v25 = *(int*)(v24 + 8);
        int* ptr6 = *(unsigned int*)(v25 + 4);
        int v26 = *ptr6;
        int v27 = v3;
        int* ptr7 = ptr6;
        int v28 = v26();
        int v29 = 0x7fffffff;
        int v30 = v28 & 0x7fffffff;
        char v31 = v30 ? 0: 1;
        char v32 = v30 < 0;
        char v33 = __parity__((unsigned char)v30);
        char v34 = 0;
        char v35 = 0;
        int v36 = v30;
        int v37 = v30 >> 1;
        v23 = v36 & 0x1;
        v22 = 0;
        v19 = v37 ? 0: 1;
        v20 = v37 < 0;
        v21 = __parity__((unsigned char)v37);
        int v38 = result;
        int v39 = v37 < 0 ? -1: 0;
        int v40 = (unsigned int)((unsigned long long)v37 | ((unsigned long long)v39 << 32)) % v38;
        int v41 = (unsigned int)((unsigned long long)v37 | ((unsigned long long)v39 << 32)) / v38;
        param1 = v40;
    }
    else {
        int v42 = &caml_bucket_Division_by_zero;
        caml_raise_exn();
    }
    int v43 = param1;
    int v44 = param1 * 2;
    char v45 = v43 < 0;
    char v46 = v43 < 0 ^ ((v43 >>> 30) & 0x1);
    char v47 = v44 ? 0: 1;
    char v48 = v44 < 0;
    char v49 = __parity__((unsigned char)v44);
    int v50 = v44;
    unsigned int v51 = (unsigned int)(v44 + 1);
    char v52 = v51 ? 0: 1;
    char v53 = v51 >= 0x80000000;
    char v54 = __parity__((unsigned char)v51);
    char v55 = (((v50 ^ 0x1) ^ v51) >>> 4) & 0x1;
    char v56 = ((v51 ^ v50) & ~(v50 ^ 0x1)) < 0;
    unsigned int* ptr8 = ptr3;
    unsigned int* ptr9 = *(ptr8 + 1);
    void* ptr10 = *(void**)(ptr9 - 1);
    void* ptr11 = *(void**)(ptr9 - 1);
    int* ptr12 = (int*)((int)ptr10 >>> 9);
    char v57 = (int*)((int)(int*)((int)ptr11 >>> 8) & 0x1);
    char v58 = v56;
    char v59 = ptr12 ? 0: 1;
    char v60 = (int)ptr12 < 0;
    char v61 = __parity__((unsigned char)ptr12);
    char v62 = ptr12 == v51;
    char v63 = (int)ptr12 < (int)v51;
    char v64 = __parity__((unsigned char)ptr12 - (unsigned char)v51);
    char v65 = (unsigned int)ptr12 < v51;
    char v66 = (int)(int*)((int)(int*)((int)(int*)((int)ptr12 - v51) ^ (int)ptr12) & (int)(int*)((int)ptr12 ^ v51)) < 0;
    char v67 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr12 - v51) ^ (int)(int*)((int)ptr12 ^ v51)) >>> 4) & 0x1);
    if(!v65 && !v62) {
        unsigned int* ptr13 = *(unsigned int*)((char*)(v51 * 2 + (int)ptr9) - 2);
        if(ptr13 != 1) {
            ptr3 = *(ptr13 + 2);
            result = *(int*)(ptr13 + 1);
            caml_apply2(**(unsigned int*)(v1 + 12));
            if(ptr4 != 1) {
                return result;
            }
            unsigned int* ptr14 = ptr3;
            if(ptr14 != 1) {
                ptr3 = *(ptr14 + 2);
                result = *(int*)(ptr14 + 1);
                caml_apply2(**(unsigned int*)(v1 + 12));
                if(ptr4 != 1) {
                    return result;
                }
                unsigned int* ptr15 = ptr3;
                if(ptr15 != 1) {
                    ptr3 = *(ptr15 + 2);
                    result = *(int*)(ptr15 + 1);
                    caml_apply2(**(unsigned int*)(v1 + 12));
                    if(ptr4 != 1) {
                        return result;
                    }
                    return camlHashtbl__find_rec_1193(*(int*)(v1 + 20), v2);
                }
                while(1) {
                    ptr1 = (int*)(caml_young_ptr - 8);
                    caml_young_ptr -= 8;
                    if(caml_young_limit <= (unsigned int)ptr1) {
                        break;
                    }
                    else {
                        caml_call_gc();
                    }
                }
                *ptr1 = 0x400;
                *(ptr1 + 1) = &caml_exn_Not_found;
                caml_raise_exn();
            }
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 8);
                caml_young_ptr -= 8;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    caml_call_gc();
                }
            }
            *ptr0 = 0x400;
            *(ptr0 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        while(1) {
            int* ptr16 = (int*)(caml_young_ptr - 8);
            caml_young_ptr -= 8;
            if(caml_young_limit <= (unsigned int)ptr16) {
                *ptr16 = 0x400;
                *(ptr16 + 1) = &caml_exn_Not_found;
                caml_raise_exn();
            }
            caml_call_gc();
        }
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr3, v1, v0, result);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlHashtbl__find_all_1210(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    char v1;
    unsigned int v2;
    void* ptr2;
    int v3;
    int v4;
    void* ptr3;
    int v5;
    int* ptr4 = &ptr2;
    char v6 = &ptr2 == 12;
    char v7 = (int)&v4 < 0;
    char v8 = __parity__((unsigned char)&ptr2 - 12);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0xc) ^ (int)&v4) >>> 4) & 0x1);
    char v10 = (unsigned int)&ptr2 < 12;
    char v11 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr2) & (int)(int*)((int)&ptr2 ^ 0xc)) < 0;
    int v12 = v3;
    while(1) {
        unsigned int v13 = caml_young_ptr;
        unsigned int v14 = caml_young_ptr;
        v2 = v13 - 20;
        char v15 = v2 ? 0: 1;
        char v16 = v2 >= 0x80000000;
        char v17 = __parity__((unsigned char)v2);
        char v18 = (((v14 ^ 0x14) ^ v2) >>> 4) & 0x1;
        char v19 = v14 < 20;
        char v20 = (int)((v2 ^ v14) & (v14 ^ 0x14)) < 0;
        caml_young_ptr = v2;
        char v21 = caml_young_limit == v2;
        char v22 = (int)caml_young_limit > (int)v2;
        char v23 = __parity__((unsigned char)v2 - (unsigned char)caml_young_limit);
        char v24 = caml_young_limit > v2;
        v1 = (int)(((v2 - caml_young_limit) ^ v2) & (caml_young_limit ^ v2)) < 0;
        char v25 = (((v2 - caml_young_limit) ^ (caml_young_limit ^ v2)) >>> 4) & 0x1;
        if(!v24) {
            break;
        }
        else {
            int v26 = caml_call_gc();
        }
    }
    int* ptr5 = (int*)(v2 + 4);
    *(ptr5 - 1) = 4343;
    *ptr5 = &camlHashtbl__find_in_bucket_1213;
    *(ptr5 + 1) = 3;
    int v27 = *(int*)(param0 + 12);
    *(ptr5 + 2) = *(int*)(param0 + 12);
    *(ptr5 + 3) = v5;
    int v28 = *(int*)(v12 + 4);
    int v29 = *(int*)(v28 - 4);
    int v30 = *(int*)(v28 - 4);
    int v31 = v29 >>> 10;
    char v32 = (v30 >>> 9) & 0x1;
    char v33 = v1;
    char v34 = v31 ? 0: 1;
    char v35 = v31 < 0;
    char v36 = __parity__((unsigned char)v31);
    char v37 = v31 ? 0: 1;
    char v38 = v31 < 0;
    char v39 = __parity__((unsigned char)v31);
    char v40 = 0;
    char v41 = 0;
    if(!v37) {
        v0 = v31;
        ptr1 = ptr5;
        v4 = v12;
        int v42 = *(int*)(param0 + 16);
        int v43 = *(int*)(v42 + 8);
        int* ptr6 = *(unsigned int*)(v43 + 4);
        int v44 = *ptr6;
        int v45 = v5;
        int* ptr7 = ptr6;
        int v46 = v44();
        int v47 = 0x7fffffff;
        int v48 = v46 & 0x7fffffff;
        char v49 = v48 ? 0: 1;
        char v50 = v48 < 0;
        char v51 = __parity__((unsigned char)v48);
        char v52 = 0;
        char v53 = 0;
        int v54 = v48;
        int v55 = v48 >> 1;
        v41 = v54 & 0x1;
        v40 = 0;
        v37 = v55 ? 0: 1;
        v38 = v55 < 0;
        v39 = __parity__((unsigned char)v55);
        int v56 = v0;
        int v57 = v55 < 0 ? -1: 0;
        int v58 = (unsigned int)((unsigned long long)v55 | ((unsigned long long)v57 << 32)) % v56;
        int v59 = (unsigned int)((unsigned long long)v55 | ((unsigned long long)v57 << 32)) / v56;
        param1 = v58;
    }
    else {
        int v60 = &caml_bucket_Division_by_zero;
        caml_raise_exn();
    }
    int v61 = param1 * 2;
    unsigned int v62 = (unsigned int)(v61 + 1);
    int v63 = v4;
    int* ptr8 = *(unsigned int*)(v63 + 4);
    int* ptr9 = *(unsigned int*)(ptr8 - 1);
    int* ptr10 = (int*)((int)ptr9 >>> 9);
    char v64 = ptr10 == v62;
    char v65 = (unsigned int)ptr10 < v62;
    if(!v65 && !v64) {
        return camlHashtbl__find_in_bucket_1213();
    }
    int* ptr11 = &ptr3;
    ptr0 = (int*)/*BAD_CALL!*/ caml_ml_array_bound_error(v4, (int)ptr1, v0, (int)ptr2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlHashtbl__find_in_bucket_1213() {
    int* ptr0;
    int* ptr1;
    unsigned int v0;
    int v1;
    while(ptr1 != 1) {
        int v2 = v1;
        int* ptr2 = *(unsigned int*)(ptr1 + 2);
        int v3 = *(ptr1 + 1);
        caml_apply2(**(unsigned int*)(v1 + 8));
        if(v0 != 1) {
            int v4 = camlHashtbl__find_in_bucket_1213();
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    *ptr0 = 0x800;
                    *(ptr0 + 1) = v3;
                    *(ptr0 + 2) = v4;
                    return ptr0 + 1;
                }
                caml_call_gc();
            }
            *ptr0 = 0x800;
            *(ptr0 + 1) = v3;
            *(ptr0 + 2) = v4;
            return ptr0 + 1;
        }
        ptr1 = ptr2;
        v1 = v2;
    }
    return (int*)0x1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__find_rec_1088(int param0, int param1) {
    int v0;
    int* ptr0;
    while(ptr0 != 1) {
        int v1 = v0;
        int* ptr1 = *(unsigned int*)(ptr0 + 2);
        int result = *(ptr0 + 1);
        int v2 = *ptr0;
        int v3 = v0;
        unsigned int v4 = (unsigned int)caml_c_call();
        if(v4 == 1) {
            return result;
        }
        ptr0 = ptr1;
    }
    while(1) {
        int* ptr2 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr2) {
            *ptr2 = 0x400;
            *(ptr2 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        caml_call_gc(param0, param1);
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__find_rec_1193(int param0, int param1) {
    unsigned int v0;
    int* ptr0;
    int v1;
    while(ptr0 != 1) {
        int v2 = param0;
        int v3 = v1;
        int* ptr1 = *(unsigned int*)(ptr0 + 2);
        int result = *(ptr0 + 1);
        caml_apply2(**(unsigned int*)(param0 + 12));
        if(v0 != 1) {
            return result;
        }
        v1 = v3;
        ptr0 = ptr1;
        param0 = v2;
    }
    while(1) {
        int* ptr2 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr2) {
            *ptr2 = 0x400;
            *(ptr2 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        caml_call_gc(param0, param1);
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlHashtbl__fold_1138(int param0, int param1) {
    char v0;
    unsigned int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int* ptr0 = &v2;
    char v8 = &v2 == 20;
    char v9 = (int)&v3 < 0;
    char v10 = __parity__((unsigned char)&v2 - 20);
    char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x14) ^ (int)&v3) >>> 4) & 0x1);
    char v12 = (unsigned int)&v2 < 20;
    char v13 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v2) & (int)(int*)((int)&v2 ^ 0x14)) < 0;
    int v14 = v4;
    while(1) {
        unsigned int v15 = caml_young_ptr;
        unsigned int v16 = caml_young_ptr;
        v1 = v15 - 28;
        char v17 = v1 ? 0: 1;
        char v18 = v1 >= 0x80000000;
        char v19 = __parity__((unsigned char)v1);
        char v20 = (((v16 ^ 0x1c) ^ v1) >>> 4) & 0x1;
        char v21 = v16 < 28;
        char v22 = (int)((v1 ^ v16) & (v16 ^ 0x1c)) < 0;
        caml_young_ptr = v1;
        char v23 = caml_young_limit == v1;
        char v24 = (int)caml_young_limit > (int)v1;
        char v25 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
        char v26 = caml_young_limit > v1;
        v0 = (int)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0;
        char v27 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4) & 0x1;
        if(!v26) {
            break;
        }
        else {
            int* ptr1 = caml_call_gc(param0, param1);
        }
    }
    param1 = (int)(v1 + 4);
    *(int*)(param1 - 4) = 4343;
    *(int*)param1 = &caml_curry2;
    *(int*)(param1 + 4) = 5;
    *(int*)(param1 + 8) = &camlHashtbl__do_bucket_1142;
    *(int*)(param1 + 12) = v14;
    int v28 = *(int*)(v7 + 4);
    unsigned int* ptr2 = (unsigned int*)(param1 + 20);
    ptr2[-1] = 0x400;
    ptr2[0] = (unsigned int)param0;
    int v29 = 1;
    int v30 = *(int*)(v28 - 4);
    int v31 = *(int*)(v28 - 4);
    int v32 = v30 >>> 9;
    char v33 = (v31 >>> 8) & 0x1;
    char v34 = v0;
    char v35 = v32 ? 0: 1;
    char v36 = v32 < 0;
    char v37 = __parity__((unsigned char)v32);
    int v38 = v32 | 0x1;
    param0 = v38 - 2;
    char v39 = param0 == 1;
    char v40 = param0 > 1;
    char v41 = __parity__(1 - (unsigned char)param0);
    char v42 = (unsigned int)param0 > 1;
    char v43 = (((1 - param0) ^ 0x1) & (param0 ^ 0x1)) < 0;
    char v44 = (((1 - param0) ^ (param0 ^ 0x1)) >>> 4) & 0x1;
    if((v39 || v40 != v43)) {
        int v45 = param0;
        int v46 = 1;
        unsigned int* ptr3 = ptr2;
        v3 = v28;
        int v47 = param1;
        do {
            ptr2 = (unsigned int*)ptr2[0];
            int v48 = v3;
            int v49 = *(int*)(v48 - 4);
            int v50 = *(int*)(v48 - 4);
            unsigned int v51 = (unsigned int)(v49 >>> 9);
            char v52 = (v50 >>> 8) & 0x1;
            char v53 = v43;
            char v54 = v51 ? 0: 1;
            char v55 = v51 >= 0x80000000;
            char v56 = __parity__((unsigned char)v51);
            char v57 = v29 == v51;
            char v58 = v29 > (int)v51;
            char v59 = __parity__((unsigned char)v51 - (unsigned char)v29);
            char v60 = (unsigned int)v29 > v51;
            char v61 = (int)(((v51 - v29) ^ v51) & (unsigned int)(v29 ^ v51)) < 0;
            char v62 = (((v51 - v29) ^ (unsigned int)(v29 ^ v51)) >>> 4) & 0x1;
            if((v60 || v57)) {
                goto loc_8057D95;
            }
            else {
                int v63 = *(int*)(v29 * 2 + v48 - 2);
                int v64 = v47;
                int v65 = camlHashtbl__do_bucket_1142(v64);
                ptr2 = ptr3;
                unsigned int v66 = caml_modify(ptr2, (unsigned int)v65);
                int* ptr4 = &v6;
                char v67 = &v2 == 20;
                char v68 = (int)&v3 < 0;
                char v69 = __parity__((unsigned char)&v2 - 20);
                char v70 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v6 ^ 0x8) ^ (int)&v3) >>> 4) & 0x1);
                char v71 = (unsigned int)&v6 >= 0xfffffff8;
                char v72 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v6) & (int*)~(int)(int*)((int)&v6 ^ 0x8)) < 0;
                int v73 = v46;
                int v74 = v46;
                v29 = v73 + 2;
                char v75 = v29 ? 0: 1;
                char v76 = v29 < 0;
                char v77 = __parity__((unsigned char)v29);
                char v78 = (((v74 ^ 0x2) ^ v29) >>> 4) & 0x1;
                char v79 = (unsigned int)v74 >= 0xfffffffe;
                char v80 = ((v29 ^ v74) & ~(v74 ^ 0x2)) < 0;
                v46 = v29;
                v39 = v73 == v45;
                v40 = v73 < v45;
                v41 = __parity__((unsigned char)v73 - (unsigned char)v45);
                v42 = (unsigned int)v73 < (unsigned int)v45;
                v43 = (((v73 - v45) ^ v73) & (v73 ^ v45)) < 0;
                char v81 = (((v73 - v45) ^ (v73 ^ v45)) >>> 4) & 0x1;
            }
            if(v39) {
                break;
            loc_8057D95:
                int* ptr5 = &v5;
                unsigned int v82 = (unsigned int)/*BAD_CALL!*/ caml_ml_array_bound_error(v3, v47, (int)ptr3, v46);
            }
        }
        while(1);
    }
    return ptr2[0];
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__hash_1031() {
    int v0;
    return caml_hash_univ_param(21, 201, v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__insert_bucket_1068(int param0, int param1) {
    char v0;
    unsigned int v1;
    int v2;
    unsigned int v3;
    void* ptr0;
    int* ptr1;
    char v4 = ptr1 == 1;
    char v5 = (int)ptr1 < 1;
    char v6 = __parity__((unsigned char)ptr1 - 1);
    char v7 = (unsigned int)ptr1 < 1;
    char v8 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr1 - 1) ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ 0x1)) < 0;
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr1 - 1) ^ (int)(int*)((int)ptr1 ^ 0x1)) >>> 4) & 0x1);
    if(!v4) {
        unsigned int v10 = v3;
        int v11 = *(ptr1 + 2);
        int v12 = *(ptr1 + 1);
        int v13 = *(ptr1 + 1);
        int v14 = *ptr1;
        int v15 = *ptr1;
        int v16 = v11;
        camlHashtbl__insert_bucket_1068();
        unsigned int v17 = v10;
        int v18 = *(int*)(v17 + 12);
        int v19 = *(int*)(v17 + 12);
        int v20 = v18 >> 1;
        char v21 = v19 & 0x1;
        char v22 = 0;
        char v23 = v20 ? 0: 1;
        char v24 = v20 < 0;
        char v25 = __parity__((unsigned char)v20);
        char v26 = v20 ? 0: 1;
        char v27 = v20 < 0;
        char v28 = __parity__((unsigned char)v20);
        char v29 = 0;
        char v30 = 0;
        if(!v26) {
            v2 = v20;
            v10 = v17;
            int* ptr2 = *(unsigned int*)(v17 + 8);
            int v31 = *ptr2;
            int v32 = v15;
            int v33 = v31((int)v17);
            int v34 = v33;
            int v35 = v33 >> 1;
            v30 = v34 & 0x1;
            v29 = 0;
            v26 = v35 ? 0: 1;
            v27 = v35 < 0;
            v28 = __parity__((unsigned char)v35);
            int v36 = v2;
            int v37 = v35 < 0 ? -1: 0;
            int v38 = (unsigned int)((unsigned long long)v35 | ((unsigned long long)v37 << 32)) % v36;
            int v39 = (unsigned int)((unsigned long long)v35 | ((unsigned long long)v37 << 32)) / v36;
            param1 = v38;
        }
        else {
            int v40 = &caml_bucket_Division_by_zero;
            caml_raise_exn();
        }
        int v41 = param1;
        int v42 = param1 * 2;
        char v43 = v41 < 0;
        char v44 = v41 < 0 ^ ((v41 >>> 30) & 0x1);
        char v45 = v42 ? 0: 1;
        char v46 = v42 < 0;
        char v47 = __parity__((unsigned char)v42);
        int v48 = v42;
        unsigned int v49 = (unsigned int)(v42 + 1);
        char v50 = v49 ? 0: 1;
        char v51 = v49 >= 0x80000000;
        char v52 = __parity__((unsigned char)v49);
        char v53 = (((v48 ^ 0x1) ^ v49) >>> 4) & 0x1;
        char v54 = ((v49 ^ v48) & ~(v48 ^ 0x1)) < 0;
        v3 = v10;
        int v55 = *(int*)(v3 + 16);
        int v56 = *(int*)(v55 - 4);
        int v57 = *(int*)(v55 - 4);
        unsigned int v58 = (unsigned int)(v56 >>> 9);
        char v59 = (v57 >>> 8) & 0x1;
        char v60 = v54;
        char v61 = v58 ? 0: 1;
        char v62 = v58 >= 0x80000000;
        char v63 = __parity__((unsigned char)v58);
        char v64 = v58 == v49;
        char v65 = (int)v58 < (int)v49;
        char v66 = __parity__((unsigned char)v58 - (unsigned char)v49);
        char v67 = v58 < v49;
        char v68 = (int)(((v58 - v49) ^ v58) & (v58 ^ v49)) < 0;
        char v69 = (((v58 - v49) ^ (v58 ^ v49)) >>> 4) & 0x1;
        if(!v67 && !v64) {
            while(1) {
                unsigned int v70 = caml_young_ptr;
                unsigned int v71 = caml_young_ptr;
                v1 = v70 - 16;
                char v72 = v1 ? 0: 1;
                char v73 = v1 >= 0x80000000;
                char v74 = __parity__((unsigned char)v1);
                char v75 = (((v71 ^ 0x10) ^ v1) >>> 4) & 0x1;
                char v76 = v71 < 16;
                char v77 = (int)((v1 ^ v71) & (v71 ^ 0x10)) < 0;
                caml_young_ptr = v1;
                char v78 = caml_young_limit == v1;
                char v79 = (int)caml_young_limit > (int)v1;
                char v80 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
                char v81 = caml_young_limit > v1;
                v0 = (int)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0;
                char v82 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4) & 0x1;
                if(!v81) {
                    break;
                }
                else {
                    int v83 = caml_call_gc(v55, (int)v49);
                }
            }
            int* ptr3 = (int*)(v1 + 4);
            *(ptr3 - 1) = 0xc00;
            int v84 = v15;
            *ptr3 = v15;
            int v85 = v13;
            *(ptr3 + 1) = v13;
            int v86 = *(int*)(v3 + 16);
            int v87 = *(int*)(v86 - 4);
            v57 = *(int*)(v86 - 4);
            v3 = (unsigned int)(v87 >>> 9);
            char v88 = (v57 >>> 8) & 0x1;
            char v89 = v0;
            char v90 = v3 ? 0: 1;
            char v91 = v3 >= 0x80000000;
            char v92 = __parity__((unsigned char)v3);
            v64 = v49 == v3;
            v65 = (int)v49 > (int)v3;
            v66 = __parity__((unsigned char)v3 - (unsigned char)v49);
            v67 = v49 > v3;
            v68 = (int)(((v3 - v49) ^ v3) & (v49 ^ v3)) < 0;
            v69 = (((v3 - v49) ^ (v49 ^ v3)) >>> 4) & 0x1;
            if(!v67 && !v64) {
                *(unsigned int*)(ptr3 + 2) = *(unsigned int*)(v49 * 2 + v86 - 2);
                caml_modify(v49 * 2 + v55 - 2, (int)ptr3);
                return 1;
            }
            int v93 = caml_ml_array_bound_error((int)v10, v13, v15, v2);
        }
        int* ptr4 = &ptr0;
        int v94 = /*BAD_CALL!*/ caml_ml_array_bound_error((int)v10, v13, v15, v2);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__iter_1129(int* param0) {
    char v0;
    unsigned int v1;
    int v2;
    unsigned int v3;
    int v4;
    void* ptr0;
    int v5;
    int* ptr1 = &v2;
    char v6 = &v2 == 16;
    char v7 = (int)&v3 < 0;
    char v8 = __parity__((unsigned char)&v2 - 16);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x10) ^ (int)&v3) >>> 4) & 0x1);
    char v10 = (unsigned int)&v2 < 16;
    char v11 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v2) & (int)(int*)((int)&v2 ^ 0x10)) < 0;
    int v12 = v5;
    while(1) {
        unsigned int v13 = caml_young_ptr;
        unsigned int v14 = caml_young_ptr;
        v1 = v13 - 16;
        char v15 = v1 ? 0: 1;
        char v16 = v1 >= 0x80000000;
        char v17 = __parity__((unsigned char)v1);
        char v18 = (((v14 ^ 0x10) ^ v1) >>> 4) & 0x1;
        char v19 = v14 < 16;
        char v20 = (int)((v1 ^ v14) & (v14 ^ 0x10)) < 0;
        caml_young_ptr = v1;
        char v21 = caml_young_limit == v1;
        char v22 = (int)caml_young_limit > (int)v1;
        char v23 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
        char v24 = caml_young_limit > v1;
        v0 = (int)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0;
        char v25 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4) & 0x1;
        if(!v24) {
            break;
        }
        else {
            int v26 = caml_call_gc((int)param0, v12);
        }
    }
    param0 = (int*)(v1 + 4);
    *(param0 - 1) = 3319;
    *param0 = &camlHashtbl__do_bucket_1132;
    *(param0 + 1) = 3;
    *(param0 + 2) = v12;
    unsigned int v27 = *(unsigned int*)(v4 + 4);
    int* ptr2 = (int*)0x1;
    int v28 = *(int*)(v27 - 4);
    int v29 = *(int*)(v27 - 4);
    int v30 = v28 >>> 9;
    char v31 = (v29 >>> 8) & 0x1;
    char v32 = v0;
    char v33 = v30 ? 0: 1;
    char v34 = v30 < 0;
    char v35 = __parity__((unsigned char)v30);
    int v36 = v30 | 0x1;
    char v37 = v36 == 3;
    char v38 = (int)(unsigned int)(v36 - 2) > 1;
    char v39 = __parity__(1 - ((unsigned char)v36 + 254));
    char v40 = (unsigned int)(v36 - 2) > 1;
    char v41 = (((unsigned int)(v36 - 2) ^ 0x1) & ((1 - (unsigned int)(v36 - 2)) ^ 0x1)) < 0;
    char v42 = (((1 - (unsigned int)(v36 - 2)) ^ ((unsigned int)(v36 - 2) ^ 0x1)) >>> 4) & 0x1;
    if((v37 || v38 != v41)) {
        unsigned int v43 = (unsigned int)(v36 - 2);
        int* ptr3 = (int*)0x1;
        v3 = v27;
        int* ptr4 = param0;
        do {
            unsigned int v44 = v3;
            int v45 = *(int*)(v44 - 4);
            int v46 = *(int*)(v44 - 4);
            unsigned int v47 = (unsigned int)(v45 >>> 9);
            char v48 = (v46 >>> 8) & 0x1;
            char v49 = v41;
            char v50 = v47 ? 0: 1;
            char v51 = v47 >= 0x80000000;
            char v52 = __parity__((unsigned char)v47);
            char v53 = ptr2 == v47;
            char v54 = (int)ptr2 > (int)v47;
            char v55 = __parity__((unsigned char)v47 - (unsigned char)ptr2);
            char v56 = (unsigned int)ptr2 > v47;
            char v57 = (int)(int*)((int)(int*)((int)(int*)(v47 - (int)ptr2) ^ v47) & (int)(int*)((int)ptr2 ^ v47)) < 0;
            char v58 = (int*)((int)(int*)((int)(int*)((int)(int*)(v47 - (int)ptr2) ^ (int)(int*)((int)ptr2 ^ v47)) >>> 4) & 0x1);
            if((v56 || v53)) {
                goto loc_8057CBD;
            }
            else {
                int v59 = *(int*)((char*)((int)(int*)((int)ptr2 * 2) + v44) - 2);
                int* ptr5 = ptr4;
                int v60 = camlHashtbl__do_bucket_1132();
                int* ptr6 = ptr3;
                int* ptr7 = ptr3;
                ptr2 = (int*)((char*)ptr6 + 2);
                char v61 = ptr2 ? 0: 1;
                char v62 = (int)ptr2 < 0;
                char v63 = __parity__((unsigned char)ptr2);
                char v64 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr7 ^ 0x2) ^ (int)ptr2) >>> 4) & 0x1);
                char v65 = (unsigned int)ptr7 >= 0xfffffffe;
                char v66 = (int)(int*)((int)(int*)((int)ptr2 ^ (int)ptr7) & (int*)~(int)(int*)((int)ptr7 ^ 0x2)) < 0;
                ptr3 = ptr2;
                v37 = ptr6 == v43;
                v38 = (int)ptr6 < (int)v43;
                v39 = __parity__((unsigned char)ptr6 - (unsigned char)v43);
                v40 = (unsigned int)ptr6 < v43;
                v41 = (int)(int*)((int)(int*)((int)(int*)((int)ptr6 - v43) ^ (int)ptr6) & (int)(int*)((int)ptr6 ^ v43)) < 0;
                char v67 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 - v43) ^ (int)(int*)((int)ptr6 ^ v43)) >>> 4) & 0x1);
            }
            if(v37) {
                return 1;
            loc_8057CBD:
                int* ptr8 = &ptr0;
                int v68 = /*BAD_CALL!*/ caml_ml_array_bound_error((int)v3, (int)ptr4, (int)ptr3, (int)v43);
            }
        }
        while(1);
    }
    return 1;
}

int camlHashtbl__length_1059() {
    int* ptr0;
    return *ptr0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__mem_1227(int param0, int param1) {
    int v0;
    int* ptr0;
    int v1;
    char v2;
    unsigned int v3;
    void* ptr1;
    int v4;
    int v5;
    int v6;
    int v7;
    int* ptr2 = &ptr1;
    char v8 = &ptr1 == 12;
    char v9 = &v5 < 0;
    char v10 = __parity__((unsigned char)&ptr1 - 12);
    char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0xc) ^ &v5) >>> 4) & 0x1);
    char v12 = (unsigned int)&ptr1 < 12;
    char v13 = (int)(int*)((int)(int*)(&v5 ^ (int)&ptr1) & (int)(int*)((int)&ptr1 ^ 0xc)) < 0;
    int v14 = v6;
    while(1) {
        unsigned int v15 = caml_young_ptr;
        unsigned int v16 = caml_young_ptr;
        v3 = v15 - 20;
        char v17 = v3 ? 0: 1;
        char v18 = v3 >= 0x80000000;
        char v19 = __parity__((unsigned char)v3);
        char v20 = (((v16 ^ 0x14) ^ v3) >>> 4) & 0x1;
        char v21 = v16 < 20;
        char v22 = (int)((v3 ^ v16) & (v16 ^ 0x14)) < 0;
        caml_young_ptr = v3;
        char v23 = caml_young_limit == v3;
        char v24 = (int)caml_young_limit > (int)v3;
        char v25 = __parity__((unsigned char)v3 - (unsigned char)caml_young_limit);
        char v26 = caml_young_limit > v3;
        v2 = (int)(((v3 - caml_young_limit) ^ v3) & (caml_young_limit ^ v3)) < 0;
        char v27 = (((v3 - caml_young_limit) ^ (caml_young_limit ^ v3)) >>> 4) & 0x1;
        if(!v26) {
            break;
        }
        else {
            int* ptr3 = caml_call_gc(param0, v14);
        }
    }
    int* ptr4 = (int*)(v3 + 4);
    *(ptr4 - 1) = 4343;
    *ptr4 = &camlHashtbl__mem_in_bucket_1230;
    *(ptr4 + 1) = 3;
    int v28 = *(int*)(param0 + 12);
    *(ptr4 + 2) = *(int*)(param0 + 12);
    *(ptr4 + 3) = v4;
    int v29 = *(int*)(v14 + 4);
    int v30 = *(int*)(v29 - 4);
    int v31 = *(int*)(v29 - 4);
    int v32 = v30 >>> 10;
    char v33 = (v31 >>> 9) & 0x1;
    char v34 = v2;
    char v35 = v32 ? 0: 1;
    char v36 = v32 < 0;
    char v37 = __parity__((unsigned char)v32);
    char v38 = v32 ? 0: 1;
    char v39 = v32 < 0;
    char v40 = __parity__((unsigned char)v32);
    char v41 = 0;
    char v42 = 0;
    if(!v38) {
        v1 = v32;
        ptr0 = ptr4;
        v5 = v14;
        int v43 = *(int*)(param0 + 16);
        int v44 = *(int*)(v43 + 8);
        int* ptr5 = *(unsigned int*)(v44 + 4);
        int v45 = *ptr5;
        int v46 = v4;
        int* ptr6 = ptr5;
        int v47 = v45();
        int v48 = 0x7fffffff;
        int v49 = v47 & 0x7fffffff;
        char v50 = v49 ? 0: 1;
        char v51 = v49 < 0;
        char v52 = __parity__((unsigned char)v49);
        char v53 = 0;
        char v54 = 0;
        int v55 = v49;
        int v56 = v49 >> 1;
        v42 = v55 & 0x1;
        v41 = 0;
        v38 = v56 ? 0: 1;
        v39 = v56 < 0;
        v40 = __parity__((unsigned char)v56);
        int v57 = v1;
        int v58 = v56 < 0 ? -1: 0;
        int v59 = (unsigned int)((unsigned long long)v56 | ((unsigned long long)v58 << 32)) % v57;
        int v60 = (unsigned int)((unsigned long long)v56 | ((unsigned long long)v58 << 32)) / v57;
        param1 = v59;
    }
    else {
        int v61 = &caml_bucket_Division_by_zero;
        caml_raise_exn();
    }
    int v62 = param1;
    int v63 = param1 * 2;
    char v64 = v62 < 0;
    char v65 = v62 < 0 ^ ((v62 >>> 30) & 0x1);
    char v66 = v63 ? 0: 1;
    char v67 = v63 < 0;
    char v68 = __parity__((unsigned char)v63);
    int v69 = v63;
    unsigned int v70 = (unsigned int)(v63 + 1);
    char v71 = v70 ? 0: 1;
    char v72 = v70 >= 0x80000000;
    char v73 = __parity__((unsigned char)v70);
    char v74 = (((v69 ^ 0x1) ^ v70) >>> 4) & 0x1;
    char v75 = ((v70 ^ v69) & ~(v69 ^ 0x1)) < 0;
    int v76 = v5;
    int* ptr7 = *(unsigned int*)(v76 + 4);
    int v77 = *(ptr7 - 1);
    int v78 = *(ptr7 - 1);
    unsigned int v79 = (unsigned int)(v77 >>> 9);
    char v80 = (v78 >>> 8) & 0x1;
    char v81 = v75;
    char v82 = v79 ? 0: 1;
    char v83 = v79 >= 0x80000000;
    char v84 = __parity__((unsigned char)v79);
    char v85 = v79 == v70;
    char v86 = (int)v79 < (int)v70;
    char v87 = __parity__((unsigned char)v79 - (unsigned char)v70);
    char v88 = v79 < v70;
    char v89 = (int)(((v79 - v70) ^ v79) & (v79 ^ v70)) < 0;
    char v90 = (((v79 - v70) ^ (v79 ^ v70)) >>> 4) & 0x1;
    if(!v88 && !v85) {
        return camlHashtbl__mem_in_bucket_1230();
    }
    int v91 = caml_ml_array_bound_error(v5, (int)ptr0, v1, (int)ptr1);
    v0 = caml_hash_univ_param(21, 201, v91);
    int* ptr8 = &v7;
    char v92 = &ptr1 == 12;
    char v93 = &v5 < 0;
    char v94 = __parity__((unsigned char)&ptr1 - 12);
    char v95 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v7 ^ 0xc) ^ &v5) >>> 4) & 0x1);
    char v96 = (unsigned int)&v7 >= 0xfffffff4;
    char v97 = (int)(int*)((int)(int*)(&v5 ^ (int)&v7) & (int*)~(int)(int*)((int)&v7 ^ 0xc)) < 0;
    int v98 = v5;
    int* ptr9 = &ptr0;
    jump v98;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__remove_1080(int param0) {
    int v0;
    char v1;
    unsigned int v2;
    int v3;
    int v4;
    int* ptr0;
    int v5;
    int v6;
    int* ptr1 = &v3;
    char v7 = &v3 == 8;
    char v8 = (int)&ptr0 < 0;
    char v9 = __parity__((unsigned char)&v3 - 8);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v3 ^ 0x8) ^ (int)&ptr0) >>> 4) & 0x1);
    char v11 = (unsigned int)&v3 < 8;
    char v12 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v3) & (int)(int*)((int)&v3 ^ 0x8)) < 0;
    int v13 = v4;
    int v14 = v6;
    while(1) {
        unsigned int v15 = caml_young_ptr;
        unsigned int v16 = caml_young_ptr;
        v2 = v15 - 20;
        char v17 = v2 ? 0: 1;
        char v18 = v2 >= 0x80000000;
        char v19 = __parity__((unsigned char)v2);
        char v20 = (((v16 ^ 0x14) ^ v2) >>> 4) & 0x1;
        char v21 = v16 < 20;
        char v22 = (int)((v2 ^ v16) & (v16 ^ 0x14)) < 0;
        caml_young_ptr = v2;
        char v23 = caml_young_limit == v2;
        char v24 = (int)caml_young_limit > (int)v2;
        char v25 = __parity__((unsigned char)v2 - (unsigned char)caml_young_limit);
        char v26 = caml_young_limit > v2;
        v1 = (int)(((v2 - caml_young_limit) ^ v2) & (caml_young_limit ^ v2)) < 0;
        char v27 = (((v2 - caml_young_limit) ^ (caml_young_limit ^ v2)) >>> 4) & 0x1;
        if(!v26) {
            break;
        }
        else {
            int v28 = caml_call_gc();
        }
    }
    int* ptr2 = (int*)(v2 + 4);
    *(ptr2 - 1) = 4343;
    *ptr2 = &camlHashtbl__remove_bucket_1083;
    *(ptr2 + 1) = 3;
    *(ptr2 + 2) = v13;
    *(ptr2 + 3) = v14;
    int v29 = *(int*)(v13 + 4);
    int v30 = *(int*)(v29 - 4);
    int v31 = *(int*)(v29 - 4);
    int v32 = v30 >>> 10;
    char v33 = (v31 >>> 9) & 0x1;
    char v34 = v1;
    char v35 = v32 ? 0: 1;
    char v36 = v32 < 0;
    char v37 = __parity__((unsigned char)v32);
    char v38 = v32 ? 0: 1;
    char v39 = v32 < 0;
    char v40 = __parity__((unsigned char)v32);
    char v41 = 0;
    char v42 = 0;
    if(!v38) {
        int v43 = caml_hash_univ_param(21, 201, v14);
        int* ptr3 = &v5;
        char v44 = &v3 == 8;
        char v45 = (int)&ptr0 < 0;
        char v46 = __parity__((unsigned char)&v3 - 8);
        char v47 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0xc) ^ (int)&ptr0) >>> 4) & 0x1);
        char v48 = (unsigned int)&v5 >= 0xfffffff4;
        char v49 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v5 ^ 0xc)) < 0;
        int v50 = v43;
        int v51 = v43 >> 1;
        v42 = v50 & 0x1;
        v41 = 0;
        v38 = v51 ? 0: 1;
        v39 = v51 < 0;
        v40 = __parity__((unsigned char)v51);
        int v52 = v32;
        int v53 = v51 < 0 ? -1: 0;
        int v54 = (unsigned int)((unsigned long long)v51 | ((unsigned long long)v53 << 32)) % v52;
        int v55 = (unsigned int)((unsigned long long)v51 | ((unsigned long long)v53 << 32)) / v52;
        v0 = v54;
    }
    else {
        int v56 = &caml_bucket_Division_by_zero;
        caml_raise_exn();
    }
    int v57 = v0;
    int v58 = v0 * 2;
    char v59 = v57 < 0;
    char v60 = v57 < 0 ^ ((v57 >>> 30) & 0x1);
    char v61 = v58 ? 0: 1;
    char v62 = v58 < 0;
    char v63 = __parity__((unsigned char)v58);
    int v64 = v58;
    unsigned int v65 = (unsigned int)(v58 + 1);
    char v66 = v65 ? 0: 1;
    char v67 = v65 >= 0x80000000;
    char v68 = __parity__((unsigned char)v65);
    char v69 = (((v64 ^ 0x1) ^ v65) >>> 4) & 0x1;
    char v70 = ((v65 ^ v64) & ~(v64 ^ 0x1)) < 0;
    unsigned int v71 = v65;
    int* ptr4 = *(unsigned int*)(v13 + 4);
    ptr0 = *(unsigned int*)(v13 + 4);
    int v72 = *(ptr4 - 1);
    int v73 = *(ptr4 - 1);
    unsigned int v74 = (unsigned int)(v72 >>> 9);
    char v75 = (v73 >>> 8) & 0x1;
    char v76 = v70;
    char v77 = v74 ? 0: 1;
    char v78 = v74 >= 0x80000000;
    char v79 = __parity__((unsigned char)v74);
    char v80 = v74 == v65;
    char v81 = (int)v74 < (int)v65;
    char v82 = __parity__((unsigned char)v74 - (unsigned char)v65);
    char v83 = v74 < v65;
    char v84 = (int)(((v74 - v65) ^ v74) & (v74 ^ v65)) < 0;
    char v85 = (((v74 - v65) ^ (v74 ^ v65)) >>> 4) & 0x1;
    if(!v83 && !v80) {
        int v86 = *(int*)(v13 + 4);
        int v87 = *(int*)(v86 - 4);
        v73 = *(int*)(v86 - 4);
        unsigned int v88 = (unsigned int)(v87 >>> 9);
        char v89 = (v73 >>> 8) & 0x1;
        char v90 = v84;
        char v91 = v88 ? 0: 1;
        char v92 = v88 >= 0x80000000;
        char v93 = __parity__((unsigned char)v88);
        v80 = v88 == v65;
        v81 = (int)v88 < (int)v65;
        v82 = __parity__((unsigned char)v88 - (unsigned char)v65);
        v83 = v88 < v65;
        v84 = (int)(((v88 - v65) ^ v88) & (v88 ^ v65)) < 0;
        v85 = (((v88 - v65) ^ (v88 ^ v65)) >>> 4) & 0x1;
        if(!v83 && !v80) {
            int* ptr5 = camlHashtbl__remove_bucket_1083();
            caml_modify((unsigned int*)((char*)(v71 * 2 + (int)ptr0) - 2), (unsigned int)ptr5);
            return 1;
        }
        int v94 = caml_ml_array_bound_error((int)ptr0, (int)v71, v3, param0);
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error((int)ptr0, (int)v71, v3, param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__remove_1185(int param0, int param1) {
    int* ptr0;
    char v0;
    unsigned int v1;
    int v2;
    unsigned int v3;
    unsigned int v4;
    int v5;
    int* ptr1 = &v2;
    char v6 = &v2 == 12;
    char v7 = (int)&v4 < 0;
    char v8 = __parity__((unsigned char)&v2 - 12);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0xc) ^ (int)&v4) >>> 4) & 0x1);
    char v10 = (unsigned int)&v2 < 12;
    char v11 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&v2) & (int)(int*)((int)&v2 ^ 0xc)) < 0;
    unsigned int v12 = v3;
    while(1) {
        unsigned int v13 = caml_young_ptr;
        unsigned int v14 = caml_young_ptr;
        v1 = v13 - 24;
        char v15 = v1 ? 0: 1;
        char v16 = v1 >= 0x80000000;
        char v17 = __parity__((unsigned char)v1);
        char v18 = (((v14 ^ 0x18) ^ v1) >>> 4) & 0x1;
        char v19 = v14 < 24;
        char v20 = (int)((v1 ^ v14) & (v14 ^ 0x18)) < 0;
        caml_young_ptr = v1;
        char v21 = caml_young_limit == v1;
        char v22 = (int)caml_young_limit > (int)v1;
        char v23 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
        char v24 = caml_young_limit > v1;
        v0 = (int)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0;
        char v25 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4) & 0x1;
        if(!v24) {
            break;
        }
        else {
            int v26 = caml_call_gc();
        }
    }
    int* ptr2 = (int*)(v1 + 4);
    *(ptr2 - 1) = 5367;
    *ptr2 = &camlHashtbl__remove_bucket_1188;
    *(ptr2 + 1) = 3;
    int v27 = *(int*)(param0 + 12);
    *(ptr2 + 2) = *(int*)(param0 + 12);
    *(unsigned int*)(ptr2 + 3) = v12;
    *(ptr2 + 4) = v5;
    int v28 = *(int*)(v12 + 4);
    int v29 = *(int*)(v28 - 4);
    int v30 = *(int*)(v28 - 4);
    unsigned int v31 = (unsigned int)(v29 >>> 10);
    char v32 = (v30 >>> 9) & 0x1;
    char v33 = v0;
    char v34 = v31 ? 0: 1;
    char v35 = v31 >= 0x80000000;
    char v36 = __parity__((unsigned char)v31);
    char v37 = v31 ? 0: 1;
    char v38 = v31 >= 0x80000000;
    char v39 = __parity__((unsigned char)v31);
    char v40 = 0;
    char v41 = 0;
    if(!v37) {
        ptr0 = ptr2;
        v4 = v12;
        int v42 = *(int*)(param0 + 16);
        int v43 = *(int*)(v42 + 8);
        int* ptr3 = *(unsigned int*)(v43 + 4);
        int v44 = *ptr3;
        int v45 = v5;
        int* ptr4 = ptr3;
        int v46 = v44();
        int v47 = 0x7fffffff;
        int v48 = v46 & 0x7fffffff;
        char v49 = v48 ? 0: 1;
        char v50 = v48 < 0;
        char v51 = __parity__((unsigned char)v48);
        char v52 = 0;
        char v53 = 0;
        int v54 = v48;
        int v55 = v48 >> 1;
        v41 = v54 & 0x1;
        v40 = 0;
        v37 = v55 ? 0: 1;
        v38 = v55 < 0;
        v39 = __parity__((unsigned char)v55);
        unsigned int v56 = v31;
        int v57 = v55 < 0 ? -1: 0;
        int v58 = (unsigned int)((unsigned long long)v55 | ((unsigned long long)v57 << 32)) % (int)v56;
        int v59 = (unsigned int)((unsigned long long)v55 | ((unsigned long long)v57 << 32)) / (int)v56;
        param1 = v58;
    }
    else {
        int v60 = &caml_bucket_Division_by_zero;
        caml_raise_exn();
    }
    int v61 = param1;
    int v62 = param1 * 2;
    char v63 = v61 < 0;
    char v64 = v61 < 0 ^ ((v61 >>> 30) & 0x1);
    char v65 = v62 ? 0: 1;
    char v66 = v62 < 0;
    char v67 = __parity__((unsigned char)v62);
    int v68 = v62;
    unsigned int v69 = (unsigned int)(v62 + 1);
    char v70 = v69 ? 0: 1;
    char v71 = v69 >= 0x80000000;
    char v72 = __parity__((unsigned char)v69);
    char v73 = (((v68 ^ 0x1) ^ v69) >>> 4) & 0x1;
    char v74 = ((v69 ^ v68) & ~(v68 ^ 0x1)) < 0;
    unsigned int v75 = v69;
    unsigned int v76 = v4;
    unsigned int v77 = *(unsigned int*)(v76 + 4);
    v4 = *(unsigned int*)(v76 + 4);
    int v78 = *(int*)(v77 - 4);
    int v79 = *(int*)(v77 - 4);
    unsigned int v80 = (unsigned int)(v78 >>> 9);
    char v81 = (v79 >>> 8) & 0x1;
    char v82 = v74;
    char v83 = v80 ? 0: 1;
    char v84 = v80 >= 0x80000000;
    char v85 = __parity__((unsigned char)v80);
    char v86 = v69 == v80;
    char v87 = (int)v69 > (int)v80;
    char v88 = __parity__((unsigned char)v80 - (unsigned char)v69);
    char v89 = v69 > v80;
    char v90 = (int)(((v80 - v69) ^ v80) & (v69 ^ v80)) < 0;
    char v91 = (((v80 - v69) ^ (v69 ^ v80)) >>> 4) & 0x1;
    if(!v89 && !v86) {
        v80 = *(unsigned int*)(v76 + 4);
        int v92 = *(int*)(v80 - 4);
        v79 = *(int*)(v80 - 4);
        unsigned int v93 = (unsigned int)(v92 >>> 9);
        char v94 = (v79 >>> 8) & 0x1;
        char v95 = v90;
        char v96 = v93 ? 0: 1;
        char v97 = v93 >= 0x80000000;
        char v98 = __parity__((unsigned char)v93);
        v86 = v93 == v69;
        v87 = (int)v93 < (int)v69;
        v88 = __parity__((unsigned char)v93 - (unsigned char)v69);
        v89 = v93 < v69;
        v90 = (int)(((v93 - v69) ^ v93) & (v93 ^ v69)) < 0;
        v91 = (((v93 - v69) ^ (v93 ^ v69)) >>> 4) & 0x1;
        if(!v89 && !v86) {
            int* ptr5 = camlHashtbl__remove_bucket_1188();
            caml_modify((unsigned int*)(v75 * 2 + v4 - 2), (unsigned int)ptr5);
            return 1;
        }
        int v99 = caml_ml_array_bound_error((int)v4, (int)ptr0, (int)v75, v2);
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error((int)v4, (int)ptr0, (int)v75, v2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlHashtbl__remove_bucket_1083() {
    int* ptr0;
    int* ptr1;
    int v0;
    if(ptr1 != 1) {
        int v1 = v0;
        int* result = *(unsigned int*)(ptr1 + 2);
        int v2 = *(ptr1 + 1);
        int v3 = *ptr1;
        int v4 = *ptr1;
        void* ptr2 = *(void**)(v0 + 12);
        int v5 = v3;
        unsigned int v6 = (unsigned int)caml_c_call();
        if(v6 == 1) {
            int* ptr3 = *(unsigned int*)(v0 + 8);
            *ptr3 = *ptr3 - 2;
            return result;
        }
        int v7 = camlHashtbl__remove_bucket_1083();
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 16);
            caml_young_ptr -= 16;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc();
            }
        }
        *ptr0 = 0xc00;
        *(ptr0 + 1) = v4;
        *(ptr0 + 2) = v2;
        *(ptr0 + 3) = v7;
        return ptr0 + 1;
    }
    return (int*)0x1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlHashtbl__remove_bucket_1188() {
    int* ptr0;
    int* ptr1;
    int v0;
    if(ptr1 != 1) {
        int v1 = v0;
        int* result = *(unsigned int*)(ptr1 + 2);
        int v2 = *(ptr1 + 1);
        int v3 = *ptr1;
        caml_apply2(**(unsigned int*)(v0 + 8));
        if(ptr1 != 1) {
            int* ptr2 = *(unsigned int*)(v1 + 12);
            *ptr2 = *ptr2 - 2;
            return result;
        }
        int v4 = camlHashtbl__remove_bucket_1188();
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 16);
            caml_young_ptr -= 16;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc();
            }
        }
        *ptr0 = 0xc00;
        *(ptr0 + 1) = v3;
        *(ptr0 + 2) = v2;
        *(ptr0 + 3) = v4;
        return ptr0 + 1;
    }
    return (int*)0x1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__replace_1112(int param0, int param1) {
    int v0;
    int v1;
    int* ptr0;
    int v2;
    int v3;
    int v4;
    char v5;
    unsigned int v6;
    int v7;
    void* ptr1;
    int v8;
    unsigned int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int* ptr2 = &v7;
    char v14 = &v7 == 28;
    char v15 = &v12 < 0;
    char v16 = __parity__((unsigned char)&v7 - 28);
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v7 ^ 0x1c) ^ &v12) >>> 4) & 0x1);
    char v18 = (unsigned int)&v7 < 28;
    char v19 = (int)(int*)((int)(int*)(&v12 ^ (int)&v7) & (int)(int*)((int)&v7 ^ 0x1c)) < 0;
    int v20 = v13;
    while(1) {
        unsigned int v21 = caml_young_ptr;
        unsigned int v22 = caml_young_ptr;
        v6 = v21 - 20;
        char v23 = v6 ? 0: 1;
        char v24 = v6 >= 0x80000000;
        char v25 = __parity__((unsigned char)v6);
        char v26 = (((v22 ^ 0x14) ^ v6) >>> 4) & 0x1;
        char v27 = v22 < 20;
        char v28 = (int)((v6 ^ v22) & (v22 ^ 0x14)) < 0;
        caml_young_ptr = v6;
        char v29 = caml_young_limit == v6;
        char v30 = (int)caml_young_limit > (int)v6;
        char v31 = __parity__((unsigned char)v6 - (unsigned char)caml_young_limit);
        char v32 = caml_young_limit > v6;
        v5 = (int)(((v6 - caml_young_limit) ^ v6) & (caml_young_limit ^ v6)) < 0;
        char v33 = (((v6 - caml_young_limit) ^ (caml_young_limit ^ v6)) >>> 4) & 0x1;
        if(!v32) {
            break;
        }
        else {
            int v34 = caml_call_gc(param0, param1);
        }
    }
    int v35 = (int)(v6 + 4);
    *(int*)(v35 - 4) = 4343;
    *(int*)v35 = &camlHashtbl__replace_bucket_1116;
    *(int*)(v35 + 4) = 3;
    *(int*)(v35 + 8) = v11;
    *(int*)(v35 + 12) = param0;
    int v36 = *(int*)(v20 + 4);
    int v37 = *(int*)(v36 - 4);
    int v38 = *(int*)(v36 - 4);
    int* ptr3 = (int*)(v37 >>> 10);
    char v39 = (v38 >>> 9) & 0x1;
    char v40 = v5;
    char v41 = ptr3 ? 0: 1;
    char v42 = (int)ptr3 < 0;
    char v43 = __parity__((unsigned char)ptr3);
    char v44 = ptr3 ? 0: 1;
    char v45 = (int)ptr3 < 0;
    char v46 = __parity__((unsigned char)ptr3);
    char v47 = 0;
    char v48 = 0;
    if(!v44) {
        v4 = v35;
        v3 = param0;
        v2 = v11;
        v12 = v20;
        int v49 = caml_hash_univ_param(21, 201, v11);
        int* ptr4 = &v8;
        char v50 = &v7 == 28;
        char v51 = &v12 < 0;
        char v52 = __parity__((unsigned char)&v7 - 28);
        char v53 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v8 ^ 0xc) ^ &v12) >>> 4) & 0x1);
        char v54 = (unsigned int)&v8 >= 0xfffffff4;
        char v55 = (int)(int*)((int)(int*)(&v12 ^ (int)&v8) & (int*)~(int)(int*)((int)&v8 ^ 0xc)) < 0;
        int v56 = v49;
        int v57 = v49 >> 1;
        v48 = v56 & 0x1;
        v47 = 0;
        v44 = v57 ? 0: 1;
        v45 = v57 < 0;
        v46 = __parity__((unsigned char)v57);
        int* ptr5 = ptr3;
        int v58 = v57 < 0 ? -1: 0;
        int* ptr6 = (int*)((unsigned int)((unsigned long long)v57 | ((unsigned long long)v58 << 32)) % (int)ptr5);
        int* ptr7 = (int*)((unsigned int)((unsigned long long)v57 | ((unsigned long long)v58 << 32)) / (int)ptr5);
        ptr0 = ptr6;
    }
    else {
        int v59 = &caml_bucket_Division_by_zero;
        caml_raise_exn();
    }
    int* ptr8 = ptr0;
    int* ptr9 = (int*)((int)ptr0 * 2);
    char v60 = (int)ptr8 < 0;
    char v61 = (int)ptr8 < 0 ^ (int*)((int)(int*)((int)ptr8 >>> 30) & 0x1);
    char v62 = ptr9 ? 0: 1;
    char v63 = (int)ptr9 < 0;
    char v64 = __parity__((unsigned char)ptr9);
    int* ptr10 = ptr9;
    int v65 = (int)((char*)ptr9 + 1);
    char v66 = v65 ? 0: 1;
    char v67 = v65 < 0;
    char v68 = __parity__((unsigned char)v65);
    char v69 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr10 ^ 0x1) ^ v65) >>> 4) & 0x1);
    char v70 = (int)(int*)((int)(int*)(v65 ^ (int)ptr10) & (int*)~(int)(int*)((int)ptr10 ^ 0x1)) < 0;
    int v71 = v65;
    int v72 = *(int*)(v20 + 4);
    int v73 = *(int*)(v72 - 4);
    int v74 = *(int*)(v72 - 4);
    unsigned int v75 = (unsigned int)(v73 >>> 9);
    char v76 = (v74 >>> 8) & 0x1;
    char v77 = v70;
    char v78 = v75 ? 0: 1;
    char v79 = v75 >= 0x80000000;
    char v80 = __parity__((unsigned char)v75);
    char v81 = v75 == v65;
    char v82 = (int)v75 < v65;
    char v83 = __parity__((unsigned char)v75 - (unsigned char)v65);
    char v84 = v75 < (unsigned int)v65;
    char v85 = (((v75 - v65) ^ v75) & (v75 ^ v65)) < 0;
    char v86 = (((v75 - v65) ^ (v75 ^ v65)) >>> 4) & 0x1;
    if(!v84 && !v81) {
        int v87 = *(int*)(v65 * 2 + v72 - 2);
        int v88 = sub_8057B00(v12, v2, v3, v87, v4, v9, v71, v7);
        int v89 = &caml_exn_Not_found;
        v72 = *(int*)v88;
        char v90 = v72 == &caml_exn_Not_found;
        char v91 = v72 < &caml_exn_Not_found;
        char v92 = __parity__((unsigned char)v72 - 24);
        char v93 = (unsigned int)v72 < &caml_exn_Not_found;
        char v94 = (((v72 - &caml_exn_Not_found) ^ v72) & (v72 ^ &caml_exn_Not_found)) < 0;
        char v95 = (((v72 - &caml_exn_Not_found) ^ (v72 ^ &caml_exn_Not_found)) >>> 4) & 0x1;
        if(v90) {
            v72 = v12;
            v1 = *(int*)(v72 + 4);
            int v96 = *(int*)(v1 - 4);
            v74 = *(int*)(v1 - 4);
            unsigned int v97 = (unsigned int)(v96 >>> 9);
            char v98 = (v74 >>> 8) & 0x1;
            char v99 = v94;
            char v100 = v97 ? 0: 1;
            char v101 = v97 >= 0x80000000;
            char v102 = __parity__((unsigned char)v97);
            v0 = v71;
            v81 = v97 == v0;
            v82 = (int)v97 < v0;
            v83 = __parity__((unsigned char)v97 - (unsigned char)v0);
            v84 = v97 < (unsigned int)v0;
            v85 = (((v97 - v0) ^ v97) & (v97 ^ v0)) < 0;
            v86 = (((v97 - v0) ^ (v97 ^ v0)) >>> 4) & 0x1;
            if(!v84 && !v81) {
                goto loc_8057A71;
            }
            else {
                int v103 = caml_ml_array_bound_error(v12, v2, v3, v10);
                goto loc_8057B6C;
            }
        }
        else {
            caml_raise_exn();
        }
    }
    else {
    loc_8057B6C:
        int* ptr11 = &ptr1;
        int v104 = caml_ml_array_bound_error(v12, v2, v3, v10);
        int v105 = /*BAD_CALL!*/ camlHashtbl__mem_1122();
    loc_8057A71:
        int* ptr12 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr12) {
            *ptr12 = 0xc00;
            *(ptr12 + 1) = v2;
            *(ptr12 + 2) = v3;
            *(ptr12 + 3) = v10;
            caml_modify(v0 * 2 + v1 - 2, (int)(ptr12 + 1));
            *(int*)v72 = *(int*)v72 + 2;
            if(((*(int*)(*(int*)(v72 + 4) - 4) >>> 9) | 0x1) * 2 - 1 < (int)*(unsigned int*)v72) {
                return camlHashtbl__resize_1061();
            }
            return 1;
        }
    }
    caml_call_gc(v0, v1);
    goto loc_8057A71;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlHashtbl__replace_1217(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    char v7;
    unsigned int v8;
    int v9;
    int v10;
    int v11;
    void* ptr0;
    unsigned int v12;
    int v13;
    int v14;
    int* ptr1 = &v9;
    char v15 = &v9 == 32;
    char v16 = &v10 < 0;
    char v17 = __parity__((unsigned char)&v9 - 32);
    char v18 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x20) ^ &v10) >>> 4) & 0x1);
    char v19 = (unsigned int)&v9 < 32;
    char v20 = (int)(int*)((int)(int*)(&v10 ^ (int)&v9) & (int)(int*)((int)&v9 ^ 0x20)) < 0;
    int v21 = v14;
    while(1) {
        unsigned int v22 = caml_young_ptr;
        unsigned int v23 = caml_young_ptr;
        v8 = v22 - 24;
        char v24 = v8 ? 0: 1;
        char v25 = v8 >= 0x80000000;
        char v26 = __parity__((unsigned char)v8);
        char v27 = (((v23 ^ 0x18) ^ v8) >>> 4) & 0x1;
        char v28 = v23 < 24;
        char v29 = (int)((v8 ^ v23) & (v23 ^ 0x18)) < 0;
        caml_young_ptr = v8;
        char v30 = caml_young_limit == v8;
        char v31 = (int)caml_young_limit > (int)v8;
        char v32 = __parity__((unsigned char)v8 - (unsigned char)caml_young_limit);
        char v33 = caml_young_limit > v8;
        v7 = (int)(((v8 - caml_young_limit) ^ v8) & (caml_young_limit ^ v8)) < 0;
        char v34 = (((v8 - caml_young_limit) ^ (caml_young_limit ^ v8)) >>> 4) & 0x1;
        if(!v33) {
            break;
        }
        else {
            int v35 = caml_call_gc(param0, param1);
        }
    }
    int v36 = (int)(v8 + 4);
    *(int*)(v36 - 4) = 5367;
    *(int*)v36 = &camlHashtbl__replace_bucket_1221;
    *(int*)(v36 + 4) = 3;
    int v37 = *(int*)(param1 + 12);
    *(int*)(v36 + 8) = *(int*)(param1 + 12);
    *(int*)(v36 + 12) = v11;
    *(int*)(v36 + 16) = param0;
    int v38 = *(int*)(v21 + 4);
    int v39 = *(int*)(v38 - 4);
    int v40 = *(int*)(v38 - 4);
    int v41 = v39 >>> 10;
    char v42 = (v40 >>> 9) & 0x1;
    char v43 = v7;
    char v44 = v41 ? 0: 1;
    char v45 = v41 < 0;
    char v46 = __parity__((unsigned char)v41);
    char v47 = v41 ? 0: 1;
    char v48 = v41 < 0;
    char v49 = __parity__((unsigned char)v41);
    char v50 = 0;
    char v51 = 0;
    if(!v47) {
        v6 = v36;
        v5 = param1;
        v4 = param0;
        v3 = v11;
        int v52 = *(int*)(param1 + 16);
        int v53 = *(int*)(v52 + 8);
        int* ptr2 = *(unsigned int*)(v53 + 4);
        int v54 = *ptr2;
        int v55 = v3;
        int v56 = v54(v21, param0, v41, param1, v36);
        int v57 = 0x7fffffff;
        int v58 = v56 & 0x7fffffff;
        char v59 = v58 ? 0: 1;
        char v60 = v58 < 0;
        char v61 = __parity__((unsigned char)v58);
        char v62 = 0;
        char v63 = 0;
        int v64 = v58;
        int v65 = v58 >> 1;
        v51 = v64 & 0x1;
        v50 = 0;
        v47 = v65 ? 0: 1;
        v48 = v65 < 0;
        v49 = __parity__((unsigned char)v65);
        int v66 = v13;
        int v67 = v65 < 0 ? -1: 0;
        int v68 = (unsigned int)((unsigned long long)v65 | ((unsigned long long)v67 << 32)) % v66;
        int v69 = (unsigned int)((unsigned long long)v65 | ((unsigned long long)v67 << 32)) / v66;
        v2 = v68;
    }
    else {
        int v70 = &caml_bucket_Division_by_zero;
        caml_raise_exn();
    }
    int v71 = v2;
    int v72 = v2 * 2;
    char v73 = v71 < 0;
    char v74 = v71 < 0 ^ ((v71 >>> 30) & 0x1);
    char v75 = v72 ? 0: 1;
    char v76 = v72 < 0;
    char v77 = __parity__((unsigned char)v72);
    int v78 = v72;
    int v79 = v72 + 1;
    char v80 = v79 ? 0: 1;
    char v81 = v79 < 0;
    char v82 = __parity__((unsigned char)v79);
    char v83 = (((v78 ^ 0x1) ^ v79) >>> 4) & 0x1;
    char v84 = ((v79 ^ v78) & ~(v78 ^ 0x1)) < 0;
    int v85 = v79;
    int v86 = v10;
    int v87 = *(int*)(v86 + 4);
    int v88 = *(int*)(v87 - 4);
    int v89 = *(int*)(v87 - 4);
    unsigned int v90 = (unsigned int)(v88 >>> 9);
    char v91 = (v89 >>> 8) & 0x1;
    char v92 = v84;
    char v93 = v90 ? 0: 1;
    char v94 = v90 >= 0x80000000;
    char v95 = __parity__((unsigned char)v90);
    char v96 = v90 == v79;
    char v97 = (int)v90 < v79;
    char v98 = __parity__((unsigned char)v90 - (unsigned char)v79);
    char v99 = v90 < (unsigned int)v79;
    char v100 = (((v90 - v79) ^ v90) & (v90 ^ v79)) < 0;
    char v101 = (((v90 - v79) ^ (v90 ^ v79)) >>> 4) & 0x1;
    if(!v99 && !v96) {
        int v102 = *(int*)(v79 * 2 + v87 - 2);
        int v103 = sub_8057120(v10, v4, v102, v5, v6, v12, v85, v3, v9);
        int v104 = &caml_exn_Not_found;
        v86 = *(int*)v103;
        char v105 = v86 == &caml_exn_Not_found;
        char v106 = v86 < &caml_exn_Not_found;
        char v107 = __parity__((unsigned char)v86 - 24);
        char v108 = (unsigned int)v86 < &caml_exn_Not_found;
        char v109 = (((v86 - &caml_exn_Not_found) ^ v86) & (v86 ^ &caml_exn_Not_found)) < 0;
        char v110 = (((v86 - &caml_exn_Not_found) ^ (v86 ^ &caml_exn_Not_found)) >>> 4) & 0x1;
        if(v105) {
            v86 = v10;
            v1 = *(int*)(v86 + 4);
            int v111 = *(int*)(v1 - 4);
            v89 = *(int*)(v1 - 4);
            unsigned int v112 = (unsigned int)(v111 >>> 9);
            char v113 = (v89 >>> 8) & 0x1;
            char v114 = v109;
            char v115 = v112 ? 0: 1;
            char v116 = v112 >= 0x80000000;
            char v117 = __parity__((unsigned char)v112);
            v0 = v85;
            v96 = v112 == v0;
            v97 = (int)v112 < v0;
            v98 = __parity__((unsigned char)v112 - (unsigned char)v0);
            v99 = v112 < (unsigned int)v0;
            v100 = (((v112 - v0) ^ v112) & (v112 ^ v0)) < 0;
            v101 = (((v112 - v0) ^ (v112 ^ v0)) >>> 4) & 0x1;
            if(!v99 && !v96) {
                goto loc_8057094;
            }
            else {
                int v118 = caml_ml_array_bound_error(v10, v4, v13, v5);
                goto loc_805718C;
            }
        }
        else {
            caml_raise_exn();
        }
    }
    else {
    loc_805718C:
        int* ptr3 = &ptr0;
        int v119 = caml_ml_array_bound_error(v10, v4, v13, v5);
        int v120 = /*BAD_CALL!*/ camlHashtbl__mem_1227(param0, param1);
    loc_8057094:
        int* ptr4 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr4) {
            *ptr4 = 0xc00;
            *(int*)(int)(ptr4 + 1) = v3;
            *(ptr4 + 2) = v4;
            *(ptr4 + 3) = v13;
            caml_modify(v0 * 2 + v1 - 2, (int)(ptr4 + 1));
            *(int*)v86 = *(int*)v86 + 2;
            if(((*(int*)(*(int*)(v86 + 4) - 4) >>> 9) | 0x1) * 2 - 1 < (int)*(unsigned int*)v86) {
                return camlHashtbl__resize_1061();
            }
            return 1;
        }
    }
    caml_call_gc(v0, v1);
    goto loc_8057094;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlHashtbl__replace_bucket_1116(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int* ptr2;
    int v0;
    if(ptr2 != 1) {
        int v1 = v0;
        int v2 = *(ptr2 + 2);
        int v3 = *(ptr2 + 1);
        int v4 = *ptr2;
        int v5 = *ptr2;
        void* ptr3 = *(void**)(v0 + 8);
        int v6 = v4;
        unsigned int v7 = (unsigned int)caml_c_call();
        if(v7 == 1) {
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 16);
                caml_young_ptr -= 16;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    caml_call_gc(param0, param1);
                }
            }
            *ptr1 = 0xc00;
            *(ptr1 + 1) = v5;
            *(ptr1 + 2) = *(int*)(v1 + 12);
            *(ptr1 + 3) = v2;
            return ptr1 + 1;
        }
        param0 = camlHashtbl__replace_bucket_1116();
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 16);
            caml_young_ptr -= 16;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(param0, param1);
            }
        }
        *ptr0 = 0xc00;
        *(ptr0 + 1) = v5;
        *(ptr0 + 2) = v3;
        *(ptr0 + 3) = param0;
        return ptr0 + 1;
    }
    while(1) {
        int* ptr4 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr4) {
            *ptr4 = 0x400;
            *(ptr4 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        caml_call_gc(param0, param1);
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlHashtbl__replace_bucket_1221(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int* ptr2;
    int v0;
    if(ptr2 != 1) {
        int v1 = v0;
        int v2 = *(ptr2 + 2);
        int v3 = *(ptr2 + 1);
        int v4 = *ptr2;
        caml_apply2(**(unsigned int*)(v0 + 8));
        if(ptr2 != 1) {
            while(1) {
                ptr1 = (int*)(caml_young_ptr - 16);
                caml_young_ptr -= 16;
                if(caml_young_limit <= (unsigned int)ptr1) {
                    break;
                }
                else {
                    caml_call_gc(param0, param1);
                }
            }
            *ptr1 = 0xc00;
            *(ptr1 + 1) = v4;
            *(ptr1 + 2) = *(int*)(v1 + 16);
            *(ptr1 + 3) = v2;
            return ptr1 + 1;
        }
        param0 = camlHashtbl__replace_bucket_1221();
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 16);
            caml_young_ptr -= 16;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(param0, param1);
            }
        }
        *ptr0 = 0xc00;
        *(ptr0 + 1) = v4;
        *(ptr0 + 2) = v3;
        *(ptr0 + 3) = param0;
        return ptr0 + 1;
    }
    while(1) {
        int* ptr3 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr3) {
            *ptr3 = 0x400;
            *(ptr3 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        caml_call_gc(param0, param1);
    }
}

int camlHashtbl__safehash_1177() {
    int v0;
    int v1 = **(unsigned int*)(*(int*)(v0 + 8) + 4)();
    return v1 & 0x7fffffff;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__assoc_1169(int param0, int param1) {
    unsigned int* ptr0;
    int v0;
    while(ptr0 != 1) {
        int v1 = v0;
        unsigned int* ptr1 = *(ptr0 + 1);
        int* ptr2 = *ptr0;
        int result = *(ptr2 + 1);
        int v2 = *ptr2;
        int v3 = v0;
        int v4 = v2;
        unsigned int v5 = (unsigned int)caml_c_call();
        if(v5 == 1) {
            return result;
        }
        v0 = v1;
        ptr0 = ptr1;
    }
    while(1) {
        int* ptr3 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr3) {
            *ptr3 = 0x400;
            *(ptr3 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        caml_call_gc(param0, param1);
    }
}

int camlList__assq_1174() {
    int result;
    unsigned int* ptr0;
    unsigned int v0;
    while(1) {
        unsigned int* ptr1 = *(ptr0 + 1);
        unsigned int* ptr2 = *ptr0;
        result = *(int*)(ptr2 + 1);
        if(*ptr2 == v0) {
            return result;
        }
        ptr0 = ptr1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlList__combine_1226() {
}

int camlList__entry() {
    gvar_807728C = &camlList__38;
    camlList = &camlList__37;
    gvar_80771EC = &camlList__36;
    gvar_80771F0 = &camlList__35;
    gvar_80771F4 = &camlList__34;
    gvar_80771FC = gvar_807553C;
    gvar_8077200 = &camlList__33;
    gvar_80771F8 = &camlList__32;
    gvar_8077208 = &camlList__31;
    gvar_8077204 = &camlList__31;
    gvar_8077210 = &camlList__30;
    gvar_8077214 = &camlList__29;
    gvar_807720C = &camlList__28;
    gvar_8077218 = &camlList__27;
    gvar_807721C = &camlList__26;
    gvar_8077224 = &camlList__25;
    gvar_8077228 = &camlList__24;
    gvar_8077220 = &camlList__23;
    gvar_807722C = &camlList__22;
    gvar_8077230 = &camlList__21;
    gvar_8077234 = &camlList__20;
    gvar_8077238 = &camlList__19;
    gvar_807723C = &camlList__18;
    gvar_8077240 = &camlList__17;
    gvar_8077244 = &camlList__16;
    gvar_8077248 = &camlList__15;
    gvar_807725C = &camlList__14;
    gvar_8077260 = &camlList__13;
    gvar_8077264 = &camlList__12;
    gvar_8077268 = &camlList__11;
    gvar_807726C = &camlList__10;
    gvar_8077270 = &camlList__9;
    gvar_807724C = &camlList__8;
    gvar_8077254 = &camlList__7;
    gvar_8077250 = &camlList__7;
    gvar_8077258 = &camlList__6;
    gvar_8077274 = &camlList__5;
    gvar_8077278 = &camlList__4;
    gvar_8077288 = &camlList__3;
    gvar_8077290 = &camlList__2;
    gvar_8077280 = &camlList__1;
    gvar_807727C = &camlList__1;
    gvar_8077284 = gvar_8077280;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__exists2_1153(unsigned int* param0) {
    void* ptr0;
    int* ptr1;
    int v0;
    unsigned int v1;
    int v2;
    char v3;
    int* ptr2 = &ptr0;
    char v4 = &ptr0 == 12;
    char v5 = (int)&v2 < 0;
    char v6 = __parity__((unsigned char)&ptr0 - 12);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v2) >>> 4) & 0x1);
    char v8 = (unsigned int)&ptr0 < 12;
    char v9 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0xc)) < 0;
    while(1) {
        int v10 = v0;
        char v11 = ptr1 == 1;
        char v12 = (int)ptr1 < 1;
        char v13 = __parity__((unsigned char)ptr1 - 1);
        char v14 = (unsigned int)ptr1 < 1;
        char v15 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr1 - 1) ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ 0x1)) < 0;
        char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr1 - 1) ^ (int)(int*)((int)ptr1 ^ 0x1)) >>> 4) & 0x1);
        if(v11) {
            break;
        }
        else {
            char v17 = param0 == 1;
            char v18 = (int)param0 < 1;
            char v19 = __parity__((unsigned char)param0 - 1);
            char v20 = (unsigned int)param0 < 1;
            char v21 = (int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)param0) & (int)(int*)((int)param0 ^ 0x1)) < 0;
            char v22 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)(int*)((int)param0 ^ 0x1)) >>> 4) & 0x1);
            if(v17) {
                goto loc_80547B0;
            }
            else {
                v2 = v10;
                unsigned int* ptr3 = *(param0 + 1);
                unsigned int* ptr4 = *(param0 + 1);
                int* ptr5 = *param0;
                int* ptr6 = *(unsigned int*)(ptr1 + 1);
                int* ptr7 = *(unsigned int*)(ptr1 + 1);
                int v23 = *ptr1;
                int v24 = v10;
                caml_apply2(v24);
                char v25 = v1 == 1;
                char v26 = (int)v1 < 1;
                char v27 = __parity__(v3 - 1);
                char v28 = v1 < 1;
                char v29 = (((v1 - 1) ^ v1) & (v1 ^ 0x1)) < 0;
                char v30 = (((v1 - 1) ^ (v1 ^ 0x1)) >>> 4) & 0x1;
                if(!v25) {
                    return 3;
                }
                v0 = v2;
                ptr1 = ptr7;
                param0 = ptr4;
            }
        }
    }
    char v31 = param0 == 1;
    char v32 = (int)param0 < 1;
    char v33 = __parity__((unsigned char)param0 - 1);
    char v34 = (unsigned int)param0 < 1;
    char v35 = (int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)param0) & (int)(int*)((int)param0 ^ 0x1)) < 0;
    char v36 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)(int*)((int)param0 ^ 0x1)) >>> 4) & 0x1);
    if(v31) {
        return 1;
    }
loc_80547B0:
    int v37 = "List.exists2";
    void* ptr8 = &v2;
    int* ptr9 = &ptr0;
    char v38 = &ptr0 ? 0: 1;
    char v39 = (int)&ptr0 < 0;
    char v40 = __parity__((unsigned char)&ptr0);
    char v41 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0xc) ^ (int)&ptr0) >>> 4) & 0x1);
    char v42 = (unsigned int)&v2 >= 0xfffffff4;
    char v43 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v2 ^ 0xc)) < 0;
    int v44 = /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlList__exists_1141() {
    int* ptr0;
    int* ptr1;
    while(ptr1 != 1) {
        int* ptr2 = ptr0;
        int* ptr3 = *(unsigned int*)(ptr1 + 1);
        int* ptr4 = *(unsigned int*)(ptr1 + 1);
        unsigned int v0 = (unsigned int)*ptr0((int)ptr0, (int)ptr3);
        if(v0 != 1) {
            return 3;
        }
        ptr1 = ptr4;
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__find_1201(int param0) {
    int* ptr0;
    int* ptr1;
    while(ptr1 != 1) {
        int* ptr2 = ptr0;
        int* ptr3 = *(unsigned int*)(ptr1 + 1);
        int result = *ptr1;
        unsigned int v0 = (unsigned int)*ptr0();
        if(v0 != 1) {
            return result;
        }
        ptr0 = ptr2;
        ptr1 = ptr3;
    }
    while(1) {
        int* ptr4 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr4) {
            *ptr4 = 0x400;
            *(ptr4 + 1) = &caml_exn_Not_found;
            caml_raise_exn();
        }
        caml_call_gc(param0, (int)ptr0);
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__find_1207(int param0) {
    int* ptr0;
    int v0;
    int* ptr1;
    int v1;
loc_8053456:
    while(ptr1 != 1) {
        int v2 = param0;
        int* ptr2 = ptr0;
        int* ptr3 = *(unsigned int*)(ptr1 + 1);
        int* ptr4 = *(unsigned int*)(ptr1 + 1);
        int v3 = *ptr1;
        int v4 = *ptr1;
        unsigned int v5 = (unsigned int)**(unsigned int*)(param0 + 12)(v3, (int)ptr0, (int)ptr3, param0);
        if(v5 == 1) {
            ptr0 = ptr2;
            ptr1 = ptr4;
            param0 = v2;
        }
        else {
            while(1) {
                unsigned int v6 = caml_young_ptr - 12;
                caml_young_ptr -= 12;
                if(caml_young_limit <= v6) {
                loc_805348D:
                    ptr0 = (int*)(v6 + 4);
                    *(ptr0 - 1) = 0x800;
                    *ptr0 = v4;
                    *(unsigned int*)(ptr0 + 1) = ptr2;
                    ptr1 = ptr4;
                    param0 = v2;
                    continue loc_8053456;
                }
                else {
                    caml_call_gc(v0, v1);
                }
            }
            goto loc_805348D;
        }
    }
    return camlList__rev_append_1051();
}

int camlList__find_all_1205() {
}

unsigned int* camlList__flatten_1058() {
    int* ptr0;
    if(ptr0 != 1) {
        camlList__flatten_1058();
        return camlPervasives__$40_1143();
    }
    return (unsigned int*)0x1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__fold_left2_1119(int* param0, int* param1) {
    void* ptr0;
    int result;
    int v0;
    int v1;
    int v2;
    int* ptr1 = &ptr0;
    char v3 = &ptr0 == 12;
    char v4 = (int)&v2 < 0;
    char v5 = __parity__((unsigned char)&ptr0 - 12);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v2) >>> 4) & 0x1);
    char v7 = (unsigned int)&ptr0 < 12;
    char v8 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0xc)) < 0;
    while(1) {
        int v9 = v1;
        char v10 = param0 == 1;
        char v11 = (int)param0 < 1;
        char v12 = __parity__((unsigned char)param0 - 1);
        char v13 = (unsigned int)param0 < 1;
        char v14 = (int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)param0) & (int)(int*)((int)param0 ^ 0x1)) < 0;
        char v15 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)(int*)((int)param0 ^ 0x1)) >>> 4) & 0x1);
        if(v10) {
            break;
        }
        else {
            char v16 = param1 == 1;
            char v17 = (int)param1 < 1;
            char v18 = __parity__((unsigned char)param1 - 1);
            char v19 = (unsigned int)param1 < 1;
            char v20 = (int)(int*)((int)(int*)((int)(int*)((char*)param1 - 1) ^ (int)param1) & (int)(int*)((int)param1 ^ 0x1)) < 0;
            char v21 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)param1 - 1) ^ (int)(int*)((int)param1 ^ 0x1)) >>> 4) & 0x1);
            if(v16) {
                goto loc_80545D0;
            }
            else {
                v2 = v9;
                int* ptr2 = *(unsigned int*)(param1 + 1);
                int* ptr3 = *(unsigned int*)(param1 + 1);
                int v22 = *param1;
                int* ptr4 = *(unsigned int*)(param0 + 1);
                int* ptr5 = *(unsigned int*)(param0 + 1);
                int v23 = *param0;
                int v24 = result;
                int v25 = v23;
                int v26 = v22;
                int v27 = v9;
                caml_apply3(v26, v27);
                result = v0;
                v1 = v2;
                param0 = ptr5;
                param1 = ptr3;
            }
        }
    }
    char v28 = param1 == 1;
    char v29 = (int)param1 < 1;
    char v30 = __parity__((unsigned char)param1 - 1);
    char v31 = (unsigned int)param1 < 1;
    char v32 = (int)(int*)((int)(int*)((int)(int*)((char*)param1 - 1) ^ (int)param1) & (int)(int*)((int)param1 ^ 0x1)) < 0;
    char v33 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)param1 - 1) ^ (int)(int*)((int)param1 ^ 0x1)) >>> 4) & 0x1);
    if(v28) {
        return result;
    }
loc_80545D0:
    int v34 = "List.fold_left2";
    void* ptr6 = &v2;
    int* ptr7 = &ptr0;
    char v35 = &ptr0 ? 0: 1;
    char v36 = (int)&ptr0 < 0;
    char v37 = __parity__((unsigned char)&ptr0);
    char v38 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0xc) ^ (int)&ptr0) >>> 4) & 0x1);
    char v39 = (unsigned int)&v2 >= 0xfffffff4;
    char v40 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v2 ^ 0xc)) < 0;
    int v41 = /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__fold_left_1078(int* param0) {
    int result;
    int v0;
    int v1;
    while(param0 != 1) {
        int v2 = v1;
        int* ptr0 = *(unsigned int*)(param0 + 1);
        caml_apply2(v1);
        result = v0;
        v1 = v2;
        param0 = ptr0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlList__fold_right2_1128() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__fold_right_1084(int param0) {
    int result;
    int* ptr0;
    int result1;
    if(ptr0 != 1) {
        int v0 = result;
        int* ptr1 = (int*)camlList__fold_right_1084(*ptr0, result);
        caml_apply2(result);
        return result;
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__for_all2_1145(unsigned int* param0) {
    char v0;
    void* ptr0;
    int* ptr1;
    unsigned int v1;
    int v2;
    char v3;
    int v4;
    int* ptr2 = &ptr0;
    char v5 = &ptr0 == 12;
    char v6 = (int)&v2 < 0;
    char v7 = __parity__((unsigned char)&ptr0 - 12);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v2) >>> 4) & 0x1);
    char v9 = (unsigned int)&ptr0 < 12;
    char v10 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0xc)) < 0;
loc_80546E3:
    do {
        int v11 = v4;
        v0 = ptr1 == 1;
        char v12 = (int)ptr1 < 1;
        char v13 = __parity__((unsigned char)ptr1 - 1);
        char v14 = (unsigned int)ptr1 < 1;
        char v15 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr1 - 1) ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ 0x1)) < 0;
        char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr1 - 1) ^ (int)(int*)((int)ptr1 ^ 0x1)) >>> 4) & 0x1);
        if(!v0) {
            char v17 = param0 == 1;
            char v18 = (int)param0 < 1;
            char v19 = __parity__((unsigned char)param0 - 1);
            char v20 = (unsigned int)param0 < 1;
            char v21 = (int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)param0) & (int)(int*)((int)param0 ^ 0x1)) < 0;
            char v22 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)(int*)((int)param0 ^ 0x1)) >>> 4) & 0x1);
            if(v17) {
                goto loc_8054740;
            }
            else {
                v2 = v11;
                unsigned int* ptr3 = *(param0 + 1);
                unsigned int* ptr4 = *(param0 + 1);
                int* ptr5 = *param0;
                int* ptr6 = *(unsigned int*)(ptr1 + 1);
                int* ptr7 = *(unsigned int*)(ptr1 + 1);
                int v23 = *ptr1;
                int v24 = v11;
                caml_apply2(v24);
                char v25 = v1 == 1;
                char v26 = (int)v1 < 1;
                char v27 = __parity__(v3 - 1);
                char v28 = v1 < 1;
                char v29 = (((v1 - 1) ^ v1) & (v1 ^ 0x1)) < 0;
                char v30 = (((v1 - 1) ^ (v1 ^ 0x1)) >>> 4) & 0x1;
                if(!v25) {
                    v4 = v2;
                    ptr1 = ptr7;
                    param0 = ptr4;
                    goto loc_80546E3;
                }
                else {
                    return 1;
                }
            }
        }
    }
    while(!v0);
    char v31 = param0 == 1;
    char v32 = (int)param0 < 1;
    char v33 = __parity__((unsigned char)param0 - 1);
    char v34 = (unsigned int)param0 < 1;
    char v35 = (int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)param0) & (int)(int*)((int)param0 ^ 0x1)) < 0;
    char v36 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)(int*)((int)param0 ^ 0x1)) >>> 4) & 0x1);
    if(v31) {
        return 3;
    }
loc_8054740:
    int v37 = "List.for_all2";
    void* ptr8 = &v2;
    int* ptr9 = &ptr0;
    char v38 = &ptr0 ? 0: 1;
    char v39 = (int)&ptr0 < 0;
    char v40 = __parity__((unsigned char)&ptr0);
    char v41 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0xc) ^ (int)&ptr0) >>> 4) & 0x1);
    char v42 = (unsigned int)&v2 >= 0xfffffff4;
    char v43 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v2 ^ 0xc)) < 0;
    int v44 = /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlList__for_all_1137() {
    int* ptr0;
    int* ptr1;
    while(ptr1 != 1) {
        int* ptr2 = ptr0;
        int* ptr3 = *(unsigned int*)(ptr1 + 1);
        int* ptr4 = *(unsigned int*)(ptr1 + 1);
        unsigned int v0 = (unsigned int)*ptr0((int)ptr0, (int)ptr3);
        if(v0 != 1) {
            ptr1 = ptr4;
        }
        else {
            return 1;
        }
    }
    return 3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__hd_1036() {
    int* ptr0;
    char v0 = ptr0 == 1;
    if(!v0) {
        return *ptr0;
    }
    int v1 = &camlList__51;
    int v2 = /*NO_RETURN*/ camlPervasives__failwith_1010();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__iter2_1111(int* param0) {
    void* ptr0;
    int* ptr1;
    int v0;
    int v1;
    int* ptr2 = &ptr0;
    char v2 = &ptr0 == 12;
    char v3 = (int)&v0 < 0;
    char v4 = __parity__((unsigned char)&ptr0 - 12);
    char v5 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v0) >>> 4) & 0x1);
    char v6 = (unsigned int)&ptr0 < 12;
    char v7 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0xc)) < 0;
    while(1) {
        int v8 = v1;
        char v9 = ptr1 == 1;
        char v10 = (int)ptr1 < 1;
        char v11 = __parity__((unsigned char)ptr1 - 1);
        char v12 = (unsigned int)ptr1 < 1;
        char v13 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr1 - 1) ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ 0x1)) < 0;
        char v14 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr1 - 1) ^ (int)(int*)((int)ptr1 ^ 0x1)) >>> 4) & 0x1);
        if(v9) {
            break;
        }
        else {
            char v15 = param0 == 1;
            char v16 = (int)param0 < 1;
            char v17 = __parity__((unsigned char)param0 - 1);
            char v18 = (unsigned int)param0 < 1;
            char v19 = (int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)param0) & (int)(int*)((int)param0 ^ 0x1)) < 0;
            char v20 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)(int*)((int)param0 ^ 0x1)) >>> 4) & 0x1);
            if(v15) {
                goto loc_8054570;
            }
            else {
                v0 = v8;
                int* ptr3 = *(unsigned int*)(param0 + 1);
                int* ptr4 = *(unsigned int*)(param0 + 1);
                int v21 = *param0;
                int* ptr5 = *(unsigned int*)(ptr1 + 1);
                int* ptr6 = *(unsigned int*)(ptr1 + 1);
                int v22 = *ptr1;
                int v23 = v21;
                int v24 = v8;
                caml_apply2(v24);
                v1 = v0;
                ptr1 = ptr6;
                param0 = ptr4;
            }
        }
    }
    char v25 = param0 == 1;
    char v26 = (int)param0 < 1;
    char v27 = __parity__((unsigned char)param0 - 1);
    char v28 = (unsigned int)param0 < 1;
    char v29 = (int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)param0) & (int)(int*)((int)param0 ^ 0x1)) < 0;
    char v30 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)(int*)((int)param0 ^ 0x1)) >>> 4) & 0x1);
    if(v25) {
        return 1;
    }
loc_8054570:
    int v31 = "List.iter2";
    void* ptr7 = &v0;
    int* ptr8 = &ptr0;
    char v32 = &ptr0 ? 0: 1;
    char v33 = (int)&ptr0 < 0;
    char v34 = __parity__((unsigned char)&ptr0);
    char v35 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0xc) ^ (int)&ptr0) >>> 4) & 0x1);
    char v36 = (unsigned int)&v0 >= 0xfffffff4;
    char v37 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v0 ^ 0xc)) < 0;
    int v38 = /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlList__iter_1074() {
    int* ptr0;
    int* ptr1;
    while(ptr1 != 1) {
        int* ptr2 = ptr0;
        int* ptr3 = *(unsigned int*)(ptr1 + 1);
        int* ptr4 = *(unsigned int*)(ptr1 + 1);
        *ptr0((int)ptr0, (int)ptr3);
        ptr1 = ptr4;
    }
    return 1;
}

int camlList__length_1034() {
    return camlList__length_aux_1030();
}

int camlList__length_aux_1030() {
    int result;
    unsigned int v0;
    while(v0 != 1) {
        v0 = *(unsigned int*)(v0 + 4);
        result = result + 2;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlList__map2_1090() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__mem_1161() {
    int v0;
    unsigned int* ptr0;
    while(ptr0 != 1) {
        int v1 = v0;
        unsigned int* ptr1 = *(ptr0 + 1);
        ptr0 = *ptr0;
        int v2 = v0;
        unsigned int* ptr2 = ptr0;
        int v3 = caml_c_call();
        if(v3 == 1) {
            return 3;
        }
        ptr0 = ptr1;
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__mem_assoc_1179() {
    int v0;
    unsigned int* ptr0;
    while(ptr0 != 1) {
        int v1 = v0;
        unsigned int* ptr1 = *(ptr0 + 1);
        ptr0 = **ptr0;
        int v2 = v0;
        unsigned int* ptr2 = ptr0;
        unsigned int v3 = (unsigned int)caml_c_call();
        if(v3 == 1) {
            return 3;
        }
        ptr0 = ptr1;
    }
    return 1;
}

int camlList__mem_assq_1184() {
    unsigned int* ptr0;
    unsigned int v0;
    while(ptr0 != 1) {
        unsigned int* ptr1 = *(ptr0 + 1);
        if(**ptr0 == v0) {
            return 3;
        }
        ptr0 = ptr1;
    }
    return 1;
}

int camlList__memq_1165() {
    unsigned int* ptr0;
    unsigned int v0;
    while(ptr0 != 1) {
        unsigned int* ptr1 = *(ptr0 + 1);
        if(*ptr0 == v0) {
            return 3;
        }
        ptr0 = ptr1;
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlList__merge_1233() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlList__nth_1042() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__nth_aux_1045() {
    int* ptr0;
    void* ptr1;
    while(1) {
        char v0 = ptr0 == 1;
        char v1 = (int)ptr0 < 1;
        char v2 = __parity__((unsigned char)ptr0 - 1);
        char v3 = (unsigned int)ptr0 < 1;
        char v4 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr0 - 1) ^ (int)ptr0) & (int)(int*)((int)ptr0 ^ 0x1)) < 0;
        char v5 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr0 - 1) ^ (int)(int*)((int)ptr0 ^ 0x1)) >>> 4) & 0x1);
        if(v0) {
            break;
        }
        else {
            int* ptr2 = *(unsigned int*)(ptr0 + 1);
            int result = *ptr0;
            if(ptr1 == 1) {
                return result;
            }
            void* ptr3 = ptr1;
            ptr1 = (void*)((int)ptr1 - 2);
            char v6 = ptr1 ? 0: 1;
            char v7 = (int)ptr1 < 0;
            char v8 = __parity__((unsigned char)ptr1);
            char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0xfffffffe) ^ (int)ptr1) >>> 4) & 0x1);
            char v10 = (unsigned int)ptr3 >= 2;
            char v11 = (int)(int*)((int)(int*)((int)ptr1 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0xfffffffe)) < 0;
            ptr0 = ptr2;
        }
    }
    /*NO_RETURN*/ camlPervasives__failwith_1010();
}

int camlList__partition_1212() {
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* camlList__remove_assoc_1189() {
    int* ptr0;
    void* ptr1;
    unsigned int* ptr2;
    int v0;
    if(ptr2 != 1) {
        void* ptr3 = ptr1;
        unsigned int* result = *(ptr2 + 1);
        unsigned int* ptr4 = *ptr2;
        unsigned int v1 = (unsigned int)caml_c_call();
        if(v1 == 1) {
            return result;
        }
        int v2 = camlList__remove_assoc_1189();
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(v2, v0);
            }
        }
        *ptr0 = 0x800;
        *(unsigned int*)(ptr0 + 1) = ptr4;
        *(ptr0 + 2) = v2;
        return (unsigned int*)(ptr0 + 1);
    }
    return (unsigned int*)0x1;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* camlList__remove_assq_1195() {
    int* ptr0;
    unsigned int* ptr1;
    unsigned int v0;
    unsigned int* ptr2;
    if(ptr2 != 1) {
        unsigned int* result = *(ptr2 + 1);
        unsigned int* ptr3 = *ptr2;
        if(*ptr3 == v0) {
            return result;
        }
        unsigned int v1 = (unsigned int)camlList__remove_assq_1195((int)ptr3);
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc((int)v1, (int)ptr3);
            }
        }
        *ptr0 = 0x800;
        *(unsigned int*)(ptr0 + 1) = ptr1;
        *(unsigned int*)(ptr0 + 2) = v1;
        return (unsigned int*)(ptr0 + 1);
    }
    return (unsigned int*)0x1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__rev_1056() {
    return camlList__rev_append_1051();
}

int camlList__rev_map2_1099() {
}

int camlList__rev_map_1067() {
}

void camlList__rev_sort_1272() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlList__rmap2_f_1103(int* param0, int param1) {
    unsigned int v0;
    void* ptr0;
    int* ptr1;
    int* ptr2;
    int* result;
    int v1;
    int* ptr3 = &ptr0;
    char v2 = &ptr0 == 16;
    char v3 = (int)&ptr1 < 0;
    char v4 = __parity__((unsigned char)&ptr0 - 16);
    char v5 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x10) ^ (int)&ptr1) >>> 4) & 0x1);
    char v6 = (unsigned int)&ptr0 < 16;
    char v7 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x10)) < 0;
    while(1) {
        char v8 = ptr2 == 1;
        char v9 = (int)ptr2 < 1;
        char v10 = __parity__((unsigned char)ptr2 - 1);
        char v11 = (unsigned int)ptr2 < 1;
        char v12 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr2 - 1) ^ (int)ptr2) & (int)(int*)((int)ptr2 ^ 0x1)) < 0;
        char v13 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr2 - 1) ^ (int)(int*)((int)ptr2 ^ 0x1)) >>> 4) & 0x1);
        if(v8) {
            break;
        }
        else {
            char v14 = param0 == 1;
            char v15 = (int)param0 < 1;
            char v16 = __parity__((unsigned char)param0 - 1);
            char v17 = (unsigned int)param0 < 1;
            char v18 = (int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)param0) & (int)(int*)((int)param0 ^ 0x1)) < 0;
            char v19 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)(int*)((int)param0 ^ 0x1)) >>> 4) & 0x1);
            if(v14) {
                goto loc_8053430;
            }
            else {
                int v20 = param1;
                ptr1 = result;
                int* ptr4 = *(unsigned int*)(param0 + 1);
                int* ptr5 = *(unsigned int*)(param0 + 1);
                int v21 = *param0;
                int* ptr6 = *(unsigned int*)(ptr2 + 1);
                int* ptr7 = *(unsigned int*)(ptr2 + 1);
                int v22 = *ptr2;
                int v23 = *(int*)(param1 + 12);
                int v24 = v21;
                caml_apply2(v23);
                int v25 = v1;
                while(1) {
                    unsigned int v26 = caml_young_ptr;
                    unsigned int v27 = caml_young_ptr;
                    v0 = v26 - 12;
                    char v28 = v0 ? 0: 1;
                    char v29 = v0 >= 0x80000000;
                    char v30 = __parity__((unsigned char)v0);
                    char v31 = (((v27 ^ 0xc) ^ v0) >>> 4) & 0x1;
                    char v32 = v27 < 12;
                    char v33 = (int)((v0 ^ v27) & (v27 ^ 0xc)) < 0;
                    caml_young_ptr = v0;
                    char v34 = caml_young_limit == v0;
                    char v35 = (int)caml_young_limit > (int)v0;
                    char v36 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
                    char v37 = caml_young_limit > v0;
                    char v38 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
                    char v39 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
                    if(!v37) {
                        break;
                    }
                    else {
                        int v40 = caml_call_gc((int)param0, param1);
                    }
                }
                result = (int*)(v0 + 4);
                *(result - 1) = 0x800;
                *result = v25;
                int* ptr8 = ptr1;
                *(unsigned int*)(result + 1) = ptr1;
                ptr2 = ptr7;
                param0 = ptr5;
                param1 = v20;
            }
        }
    }
    char v41 = param0 == 1;
    char v42 = (int)param0 < 1;
    char v43 = __parity__((unsigned char)param0 - 1);
    char v44 = (unsigned int)param0 < 1;
    char v45 = (int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)param0) & (int)(int*)((int)param0 ^ 0x1)) < 0;
    char v46 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)param0 - 1) ^ (int)(int*)((int)param0 ^ 0x1)) >>> 4) & 0x1);
    if(v41) {
        return result;
    }
loc_8053430:
    int v47 = "List.rev_map2";
    void* ptr9 = &ptr1;
    int* ptr10 = &ptr0;
    char v48 = &ptr0 ? 0: 1;
    char v49 = (int)&ptr0 < 0;
    char v50 = __parity__((unsigned char)&ptr0);
    char v51 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x10) ^ (int)&ptr0) >>> 4) & 0x1);
    char v52 = (unsigned int)&ptr1 >= 0xfffffff0;
    char v53 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr1 ^ 0x10)) < 0;
    result = (int*)/*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* camlList__split_1220(int param0) {
    int* ptr0;
    int v0;
    int v1;
    unsigned int* ptr1;
    if(ptr1 != 1) {
        int* ptr2 = *ptr1;
        int v2 = *(ptr2 + 1);
        int v3 = *(ptr2 + 1);
        int* ptr3 = (int*)camlList__split_1220(v2, *ptr2);
        int v4 = *(ptr3 + 1);
        int v5 = *ptr3;
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 36);
            caml_young_ptr -= 36;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(v1, v5);
            }
        }
        *ptr0 = 0x800;
        *(ptr0 + 1) = v3;
        *(ptr0 + 2) = v4;
        *(ptr0 + 3) = 0x800;
        *(ptr0 + 4) = v0;
        *(ptr0 + 5) = v5;
        *(ptr0 + 6) = 0x800;
        *(unsigned int*)(ptr0 + 7) = ptr0 + 4;
        *(unsigned int*)(ptr0 + 8) = ptr0 + 1;
        return (unsigned int*)(ptr0 + 7);
    }
    return (unsigned int*)&camlList__41;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__stable_sort_1248(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int result = v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 84);
        caml_young_ptr -= 84;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(param0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry3;
    *(ptr0 + 2) = 7;
    *(ptr0 + 3) = &camlList__rev_merge_1251;
    *(ptr0 + 4) = v0;
    *(ptr0 + 5) = 4343;
    *(ptr0 + 6) = &caml_curry3;
    *(ptr0 + 7) = 7;
    *(ptr0 + 8) = &camlList__rev_merge_rev_1261;
    *(ptr0 + 9) = v0;
    int* ptr1 = ptr0 + 11;
    *(ptr0 + 10) = 10487;
    *(ptr0 + 11) = &caml_curry2;
    *(ptr0 + 12) = 5;
    *(ptr0 + 13) = &camlList__sort_1271;
    *(ptr0 + 14) = 4345;
    *(ptr0 + 15) = &caml_curry2;
    *(ptr0 + 16) = 5;
    *(ptr0 + 17) = &camlList__rev_sort_1272;
    *(ptr0 + 18) = v0;
    *(unsigned int*)(ptr0 + 19) = ptr0 + 1;
    *(unsigned int*)(ptr0 + 20) = ptr0 + 6;
    int v2 = camlList__length_aux_1030();
    if(v2 < 5) {
        return result;
    }
    return camlList__sort_1271((int)ptr1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlList__tl_1039() {
    unsigned int v0;
    char v1 = v0 == 1;
    if(!v1) {
        return *(int*)(v0 + 4);
    }
    int v2 = &camlList__50;
    int v3 = /*NO_RETURN*/ camlPervasives__failwith_1010();
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* camlPervasives__$40_1143() {
    int* ptr0;
    unsigned int* ptr1;
    int* ptr2;
    unsigned int* result;
    if(ptr2 != 1) {
        int v0 = camlPervasives__$40_1143(*ptr2);
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc();
            }
        }
        *ptr0 = 0x800;
        *(unsigned int*)(ptr0 + 1) = ptr1;
        *(ptr0 + 2) = v0;
        return (unsigned int*)(ptr0 + 1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__$5e$5e_1312() {
    camlPervasives__$5e_1112();
    return camlPervasives__$5e_1112();
}

unsigned int camlPervasives__abs_1044() {
    unsigned int v0;
    return (int)v0 < 1 ? (unsigned int)(2 - v0): v0;
}

int camlPervasives__at_exit_1322() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__bool_of_string_1129() {
    unsigned int* ptr0;
    unsigned int* ptr1 = ptr0;
    int v0 = caml_string_notequal(ptr1, "false");
    if(v0 != 1) {
        int v1 = caml_string_notequal(ptr1, "true");
        char v2 = v1 == 1;
        if(!v2) {
            int v3 = "bool_of_string";
            int v4 = /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
        }
        return 3;
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlPervasives__char_of_int_1120() {
    unsigned int result;
    char v0 = result == 1;
    char v1 = (int)result < 1;
    char v2 = (((result - 1) ^ result) & (result ^ 0x1)) < 0;
    if(v1 == v2) {
        v0 = result == 0x1ff;
        v1 = (int)result < 0x1ff;
        v3 = __parity__((unsigned char)result - 0xff);
        v5 = result < 0x1ff;
        v2 = (((result - 0x1ff) ^ result) & (result ^ 0x1ff)) < 0;
        v4 = (((result - 0x1ff) ^ (result ^ 0x1ff)) >>> 4) & 0x1;
        if((v0 || v1 != v2)) {
            return result;
        }
    }
    result = (unsigned int)/*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlPervasives__close_in_noerr_1263() {
    int v0;
    sub_804FBF0(v0);
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__close_out_1209() {
    caml_c_call();
    return caml_c_call();
}

int camlPervasives__close_out_noerr_1211() {
    int v0;
    int v1;
    int v2;
    sub_804F980(v2, v0);
    sub_804F9C0(v1, v0);
    return 1;
}

int camlPervasives__do_at_exit_1325() {
    unsigned int* ptr0 = gvar_8075630;
    int* ptr1 = *ptr0;
    int v0 = 1;
    int v1 = *ptr1;
    jump v1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__entry() {
    int v0;
    int v1;
    gvar_8075608 = &camlPervasives__84;
    gvar_8075600 = &camlPervasives__83;
    gvar_80755FC = &camlPervasives__82;
    gvar_80755F8 = &camlPervasives__81;
    gvar_80755F4 = &camlPervasives__80;
    gvar_80755F0 = &camlPervasives__79;
    gvar_80755EC = &camlPervasives__78;
    gvar_80755E8 = &camlPervasives__77;
    gvar_80755D8 = &camlPervasives__76;
    gvar_80755C8 = &camlPervasives__75;
    gvar_80755BC = &camlPervasives__74;
    gvar_80755B8 = &camlPervasives__73;
    gvar_80755B4 = &camlPervasives__72;
    gvar_80755AC = &camlPervasives__71;
    gvar_80755A8 = &camlPervasives__70;
    gvar_807559C = &camlPervasives__69;
    gvar_8075594 = &camlPervasives__68;
    gvar_80754EC = &camlPervasives__67;
    camlPervasives = &camlPervasives__66;
    int* ptr0 = (int*)caml_alloc1();
    *ptr0 = 0x400;
    *(ptr0 + 1) = "Pervasives.Exit";
    gvar_80754F0 = ptr0 + 1;
    gvar_80754F4 = &camlPervasives__64;
    gvar_80754F8 = &camlPervasives__63;
    gvar_80754FC = &camlPervasives__62;
    gvar_8075508 = &camlPervasives__61;
    gvar_8075504 = 0x80000001;
    gvar_8075500 = 0x7fffffff;
    unsigned int v2 = (unsigned int)caml_c_call();
    gvar_807550C = v2;
    unsigned int v3 = (unsigned int)caml_c_call();
    gvar_8075510 = v3;
    unsigned int v4 = (unsigned int)caml_c_call();
    gvar_8075514 = v4;
    unsigned int v5 = (unsigned int)caml_c_call();
    gvar_8075518 = v5;
    unsigned int v6 = (unsigned int)caml_c_call();
    gvar_807551C = v6;
    unsigned int v7 = (unsigned int)caml_c_call();
    gvar_8075520 = v7;
    gvar_8075524 = &camlPervasives__54;
    gvar_8075528 = &camlPervasives__53;
    gvar_807552C = &camlPervasives__52;
    gvar_8075530 = &camlPervasives__51;
    gvar_8075534 = &camlPervasives__50;
    gvar_807562C = &camlPervasives__49;
    gvar_8075620 = &camlPervasives__48;
    gvar_8075538 = &camlPervasives__47;
    gvar_807553C = &camlPervasives__46;
    unsigned int v8 = (unsigned int)caml_c_call();
    gvar_8075540 = v8;
    unsigned int v9 = (unsigned int)caml_c_call();
    gvar_8075544 = v9;
    unsigned int v10 = (unsigned int)caml_c_call();
    gvar_8075548 = v10;
    gvar_8075590 = &camlPervasives__45;
    gvar_8075588 = &camlPervasives__44;
    gvar_807558C = &camlPervasives__43;
    gvar_8075598 = &camlPervasives__42;
    gvar_80755A0 = &camlPervasives__41;
    gvar_80755A4 = &camlPervasives__40;
    gvar_80755B0 = &camlPervasives__39;
    gvar_80755C0 = &camlPervasives__38;
    gvar_80755C4 = &camlPervasives__37;
    gvar_80755D4 = &camlPervasives__36;
    gvar_80755CC = &camlPervasives__35;
    gvar_80755D0 = &camlPervasives__34;
    gvar_80755E0 = &camlPervasives__33;
    gvar_8075624 = &camlPervasives__32;
    gvar_80755E4 = &camlPervasives__31;
    gvar_80755DC = &camlPervasives__30;
    gvar_8075604 = &camlPervasives__29;
    gvar_807554C = &camlPervasives__28;
    gvar_8075550 = &camlPervasives__27;
    gvar_8075554 = &camlPervasives__26;
    gvar_8075558 = &camlPervasives__25;
    gvar_807555C = &camlPervasives__24;
    gvar_8075560 = &camlPervasives__23;
    gvar_8075564 = &camlPervasives__22;
    gvar_8075568 = &camlPervasives__21;
    gvar_807556C = &camlPervasives__20;
    gvar_8075570 = &camlPervasives__19;
    gvar_8075574 = &camlPervasives__18;
    gvar_8075578 = &camlPervasives__17;
    gvar_807557C = &camlPervasives__16;
    gvar_8075580 = &camlPervasives__15;
    gvar_8075584 = &camlPervasives__14;
    unsigned int v11 = caml_allocN(v0, v1);
    *(int*)v11 = 0x1800;
    *(int*)(v11 + 4) = &camlPervasives__7;
    *(int*)(v11 + 8) = &camlPervasives__8;
    *(int*)(v11 + 12) = &camlPervasives__9;
    *(int*)(v11 + 16) = &camlPervasives__10;
    *(int*)(v11 + 20) = &camlPervasives__11;
    *(int*)(v11 + 24) = &camlPervasives__12;
    gvar_807560C = (int*)(v11 + 4);
    gvar_8075614 = &camlPervasives__6;
    gvar_8075610 = &camlPervasives__5;
    *(int*)(v11 + 28) = 0x400;
    *(unsigned int*)(v11 + 32) = gvar_8075598;
    gvar_8075630 = (unsigned int*)(v11 + 32);
    gvar_807561C = &camlPervasives__4;
    gvar_8075628 = &camlPervasives__3;
    gvar_8075618 = &camlPervasives__2;
    caml_c_call();
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__exit_1326() {
    int v0;
    **gvar_8075630(v0);
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__flush_all_1185() {
    caml_c_call();
    return camlPervasives__iter_1186();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1392() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1394() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1396() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1398() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1400() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1402() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1404() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1406() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1408() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1410() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1412() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1414() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1416() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1418() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1420() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1422() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1424() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1485() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1487() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1489() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1491() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1493() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__fun_1495() {
    return caml_c_call();
}

int camlPervasives__fun_1500() {
    char v0;
    int v1;
    int v2;
    int* ptr0 = &v0;
    char v3 = &v0 == 4;
    char v4 = (int)&v1 < 0;
    char v5 = __parity__((unsigned char)&v0 - 4);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&v1) >>> 4) & 0x1);
    char v7 = (unsigned int)&v0 < 4;
    char v8 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x4)) < 0;
    v1 = v2;
    int* ptr1 = *(unsigned int*)(v2 + 8);
    int v9 = 1;
    int v10 = *ptr1;
    v10(v2);
    int v11 = v1;
    int* ptr2 = *(unsigned int*)(v11 + 12);
    int v12 = 1;
    int v13 = *ptr2;
    int* ptr3 = &v1;
    int* ptr4 = &v0;
    char v14 = &v0 ? 0: 1;
    char v15 = (int)&v0 < 0;
    char v16 = __parity__((unsigned char)&v0);
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x4) ^ (int)&v0) >>> 4) & 0x1);
    char v18 = (unsigned int)&v1 >= 0xfffffffc;
    char v19 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int*)~(int)(int*)((int)&v1 ^ 0x4)) < 0;
    jump v13;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__input_1224(unsigned int param0, unsigned int param1) {
    int v0;
    char v1 = param0 == 1;
    char v2 = (int)param0 < 1;
    char v3 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
    if(v2 == v3) {
        v1 = param1 == 1;
        v2 = (int)param1 < 1;
        v26 = __parity__((unsigned char)param1 - 1);
        v29 = param1 < 1;
        v3 = (((param1 - 1) ^ param1) & (param1 ^ 0x1)) < 0;
        v27 = (((param1 - 1) ^ (param1 ^ 0x1)) >>> 4) & 0x1;
        if(v2 == v3) {
            int v4 = *(int*)(v0 - 4);
            int v5 = *(int*)(v0 - 4);
            int v6 = v4 >>> 10;
            char v7 = (v5 >>> 9) & 0x1;
            char v8 = v3;
            char v9 = v6 ? 0: 1;
            char v10 = v6 < 0;
            char v11 = __parity__((unsigned char)v6);
            unsigned int v12 = (unsigned int)(v6 * 4 - 1);
            unsigned int v13 = (unsigned int)*(char*)(v0 + v12);
            unsigned int v14 = v12;
            void* ptr0 = (void*)(v12 - v13);
            char v15 = ptr0 ? 0: 1;
            char v16 = (int)ptr0 < 0;
            char v17 = __parity__((unsigned char)ptr0);
            char v18 = (int*)((int)(int*)((int)(int*)((v13 ^ v14) ^ (int)ptr0) >>> 4) & 0x1);
            char v19 = v13 > v14;
            char v20 = (int)(int*)((int)(int*)((int)ptr0 ^ v14) & (v13 ^ v14)) < 0;
            void* ptr1 = ptr0;
            int* ptr2 = (int*)((int)ptr0 * 2);
            char v21 = (int)ptr1 < 0;
            char v22 = (int)ptr1 < 0 ^ (int*)((int)(int*)((int)ptr1 >>> 30) & 0x1);
            char v23 = ptr2 ? 0: 1;
            char v24 = (int)ptr2 < 0;
            char v25 = __parity__((unsigned char)ptr2);
            int* ptr3 = (int*)((int)ptr2 - param1);
            int* ptr4 = (int*)((char*)ptr3 + 2);
            v1 = param0 == ptr4;
            v2 = (int)param0 < (int)ptr4;
            v26 = __parity__((unsigned char)param0 - (unsigned char)ptr4);
            v29 = param0 < (unsigned int)ptr4;
            v3 = (int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ param0) & (int)(int*)(param0 ^ (int)ptr4)) < 0;
            v27 = (int*)((int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ (int)(int*)(param0 ^ (int)ptr4)) >>> 4) & 0x1);
            if((v1 || v2 != v3)) {
                return caml_c_call();
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__iter_1186() {
    int v0;
    int* ptr0;
    int* ptr1;
    while(ptr1 != 1) {
        sub_804F0F0((int)*(unsigned int*)(ptr1 + 1), v0);
        ptr1 = ptr0;
    }
    return 1;
}

int camlPervasives__lnot_1049() {
    int v0;
    return ~v0 | 0x1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__max_1025() {
    int v0;
    int v1;
    int v2 = caml_c_call();
    return v2 != 1 ? v0: v1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__min_1022() {
    int v0;
    int v1;
    int v2 = caml_c_call();
    return v2 != 1 ? v0: v1;
}

int camlPervasives__open_in_1218() {
    int v0;
    return camlPervasives__open_in_gen_1214(v0);
}

int camlPervasives__open_in_bin_1220() {
    int v0;
    return camlPervasives__open_in_gen_1214(v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__open_in_gen_1214(int param0) {
    caml_c_call();
    return caml_c_call();
}

int camlPervasives__open_out_1179() {
    int v0;
    return camlPervasives__open_out_gen_1175(v0);
}

int camlPervasives__open_out_bin_1181() {
    int v0;
    return camlPervasives__open_out_gen_1175(v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__open_out_gen_1175(int param0) {
    caml_c_call();
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__output_1194(unsigned int param0, unsigned int param1) {
    int v0;
    char v1 = param0 == 1;
    char v2 = (int)param0 < 1;
    char v3 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
    if(v2 == v3) {
        v1 = param1 == 1;
        v2 = (int)param1 < 1;
        v26 = __parity__((unsigned char)param1 - 1);
        v29 = param1 < 1;
        v3 = (((param1 - 1) ^ param1) & (param1 ^ 0x1)) < 0;
        v27 = (((param1 - 1) ^ (param1 ^ 0x1)) >>> 4) & 0x1;
        if(v2 == v3) {
            int v4 = *(int*)(v0 - 4);
            int v5 = *(int*)(v0 - 4);
            int v6 = v4 >>> 10;
            char v7 = (v5 >>> 9) & 0x1;
            char v8 = v3;
            char v9 = v6 ? 0: 1;
            char v10 = v6 < 0;
            char v11 = __parity__((unsigned char)v6);
            unsigned int v12 = (unsigned int)(v6 * 4 - 1);
            unsigned int v13 = (unsigned int)*(char*)(v0 + v12);
            unsigned int v14 = v12;
            void* ptr0 = (void*)(v12 - v13);
            char v15 = ptr0 ? 0: 1;
            char v16 = (int)ptr0 < 0;
            char v17 = __parity__((unsigned char)ptr0);
            char v18 = (int*)((int)(int*)((int)(int*)((v13 ^ v14) ^ (int)ptr0) >>> 4) & 0x1);
            char v19 = v13 > v14;
            char v20 = (int)(int*)((int)(int*)((int)ptr0 ^ v14) & (v13 ^ v14)) < 0;
            void* ptr1 = ptr0;
            int* ptr2 = (int*)((int)ptr0 * 2);
            char v21 = (int)ptr1 < 0;
            char v22 = (int)ptr1 < 0 ^ (int*)((int)(int*)((int)ptr1 >>> 30) & 0x1);
            char v23 = ptr2 ? 0: 1;
            char v24 = (int)ptr2 < 0;
            char v25 = __parity__((unsigned char)ptr2);
            int* ptr3 = (int*)((int)ptr2 - param1);
            int* ptr4 = (int*)((char*)ptr3 + 2);
            v1 = param0 == ptr4;
            v2 = (int)param0 < (int)ptr4;
            v26 = __parity__((unsigned char)param0 - (unsigned char)ptr4);
            v29 = param0 < (unsigned int)ptr4;
            v3 = (int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ param0) & (int)(int*)(param0 ^ (int)ptr4)) < 0;
            v27 = (int*)((int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ (int)(int*)(param0 ^ (int)ptr4)) >>> 4) & 0x1);
            if((v1 || v2 != v3)) {
                return caml_c_call();
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__output_string_1191() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__output_value_1202() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__prerr_char_1277() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__prerr_endline_1285() {
    camlPervasives__output_string_1191();
    caml_c_call();
    return caml_c_call();
}

int camlPervasives__prerr_float_1283() {
    camlPervasives__string_of_float_1140();
    return camlPervasives__output_string_1191();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__prerr_int_1281() {
    camlPervasives__string_of_int_1130();
    return camlPervasives__output_string_1191();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__prerr_newline_1287() {
    caml_c_call();
    return caml_c_call();
}

int camlPervasives__prerr_string_1279() {
    return camlPervasives__output_string_1191();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__print_char_1266() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__print_endline_1274() {
    camlPervasives__output_string_1191();
    caml_c_call();
    return caml_c_call();
}

int camlPervasives__print_float_1272() {
    camlPervasives__string_of_float_1140();
    return camlPervasives__output_string_1191();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__print_int_1270() {
    camlPervasives__string_of_int_1130();
    return camlPervasives__output_string_1191();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__print_newline_1276() {
    caml_c_call();
    return caml_c_call();
}

int camlPervasives__print_string_1268() {
    return camlPervasives__output_string_1191();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__read_float_1290() {
    camlPervasives__read_line_1288();
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__read_int_1289() {
    camlPervasives__read_line_1288();
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__read_line_1288() {
    caml_c_call();
    return camlPervasives__input_line_1241();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__really_input_1235(int param0, void* param1) {
    int v0;
    char v1 = param0 == 1;
    char v2 = param0 < 1;
    char v3 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
    if(v2 == v3) {
        v1 = param1 == 1;
        v2 = (int)param1 < 1;
        v29 = __parity__((unsigned char)param1 - 1);
        v32 = (unsigned int)param1 < 1;
        v3 = (int)(int*)((int)(int*)((int)(int*)((int)param1 - 1) ^ (int)param1) & (int)(int*)((int)param1 ^ 0x1)) < 0;
        v30 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)param1 - 1) ^ (int)(int*)((int)param1 ^ 0x1)) >>> 4) & 0x1);
        if(v2 == v3) {
            int v4 = *(int*)(v0 - 4);
            int v5 = *(int*)(v0 - 4);
            int v6 = v4 >>> 10;
            char v7 = (v5 >>> 9) & 0x1;
            char v8 = v3;
            char v9 = v6 ? 0: 1;
            char v10 = v6 < 0;
            char v11 = __parity__((unsigned char)v6);
            unsigned int v12 = (unsigned int)(v6 * 4 - 1);
            unsigned int v13 = (unsigned int)*(char*)(v0 + v12);
            unsigned int v14 = v12;
            unsigned int v15 = v12 - v13;
            char v16 = v15 ? 0: 1;
            char v17 = v15 >= 0x80000000;
            char v18 = __parity__((unsigned char)v15);
            char v19 = (((v13 ^ v14) ^ v15) >>> 4) & 0x1;
            char v20 = v13 > v14;
            char v21 = (int)((v15 ^ v14) & (v13 ^ v14)) < 0;
            unsigned int v22 = v15;
            int v23 = (int)(v15 * 2);
            char v24 = v22 >= 0x80000000;
            char v25 = v22 >= 0x80000000 ^ ((v22 >>> 30) & 0x1);
            char v26 = v23 ? 0: 1;
            char v27 = v23 < 0;
            char v28 = __parity__((unsigned char)v23);
            int* ptr0 = (int*)(v23 - (int)param1);
            int* ptr1 = (int*)((char*)ptr0 + 2);
            v1 = param0 == ptr1;
            v2 = param0 < (int)ptr1;
            v29 = __parity__((unsigned char)param0 - (unsigned char)ptr1);
            v32 = (unsigned int)param0 < (unsigned int)ptr1;
            v3 = (int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr1) ^ param0) & (int)(int*)(param0 ^ (int)ptr1)) < 0;
            v30 = (int*)((int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr1) ^ (int)(int*)(param0 ^ (int)ptr1)) >>> 4) & 0x1);
            if((v1 || v2 != v3)) {
                return camlPervasives__unsafe_really_input_1229(param0, param1);
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlPervasives__string_of_bool_1127() {
    unsigned int v0;
    return v0 == 1 ? "false": "true";
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__string_of_float_1140() {
    caml_c_call();
    return camlPervasives__valid_float_lexem_1135();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__string_of_format_1315() {
    int v0;
    int v1 = v0;
    unsigned int v2 = (unsigned int)((*(int*)(v0 - 4) >>> 10) * 4 - 1);
    int v3 = (v2 - (unsigned int)*(char*)(v2 + v0)) * 2 + 1;
    int result = caml_c_call();
    caml_blit_string(v0, 1, result, 1, v3);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPervasives__unsafe_really_input_1229(int param0, void* param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    while((int)param1 > 1) {
        void* ptr1 = param1;
        int v4 = param0;
        int v5 = v2;
        int v6 = v0;
        unsigned int v7 = (unsigned int)caml_c_call();
        if(v7 == 1) {
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 8);
                caml_young_ptr -= 8;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    caml_call_gc(v1, v3);
                }
            }
            *ptr0 = 0x400;
            *(ptr0 + 1) = &caml_exn_End_of_file;
            caml_raise_exn();
        }
        param1 = (void*)((char*)((int)ptr1 - v7) + 1);
        param0 = v7 + v4 - 1;
        v0 = v6;
        v2 = v5;
    }
    return 1;
}

int camlPervasives__valid_float_lexem_1135() {
    char v0;
    int v1;
    int v2 = v1;
    int v3 = *(int*)(v2 - 4);
    int v4 = *(int*)(v2 - 4);
    int v5 = v3 >>> 10;
    char v6 = (v4 >>> 9) & 0x1;
    char v7 = v0;
    char v8 = v5 ? 0: 1;
    char v9 = v5 < 0;
    char v10 = __parity__((unsigned char)v5);
    unsigned int v11 = (unsigned int)(v5 * 4 - 1);
    unsigned int v12 = (unsigned int)*(char*)(v11 + v2);
    unsigned int v13 = v11;
    unsigned int v14 = v11 - v12;
    char v15 = v14 ? 0: 1;
    char v16 = v14 >= 0x80000000;
    char v17 = __parity__((unsigned char)v14);
    char v18 = (((v12 ^ v13) ^ v14) >>> 4) & 0x1;
    char v19 = v12 > v13;
    char v20 = (int)((v14 ^ v13) & (v12 ^ v13)) < 0;
    int v21 = v14 * 2 + 1;
    unsigned int v22 = caml_young_ptr;
    unsigned int v23 = caml_young_ptr;
    unsigned int v24 = v22 - 20;
    char v25 = v24 ? 0: 1;
    char v26 = v24 >= 0x80000000;
    char v27 = __parity__((unsigned char)v24);
    char v28 = (((v23 ^ 0x14) ^ v24) >>> 4) & 0x1;
    char v29 = v23 < 20;
    char v30 = (int)((v24 ^ v23) & (v23 ^ 0x14)) < 0;
    caml_young_ptr = v24;
    char v31 = caml_young_limit == v24;
    char v32 = (int)caml_young_limit > (int)v24;
    char v33 = __parity__((unsigned char)v24 - (unsigned char)caml_young_limit);
    char v34 = caml_young_limit > v24;
    char v35 = (int)(((v24 - caml_young_limit) ^ v24) & (caml_young_limit ^ v24)) < 0;
    char v36 = (((v24 - caml_young_limit) ^ (caml_young_limit ^ v24)) >>> 4) & 0x1;
    jump v34 ? &sub_804F795: &sub_804F76E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__add_char_1166(int param0, int param1) {
    int v0;
    camlBuffer__add_char_1072(param0, param1);
    return v0 + 2;
}

int camlPrintf__add_char_1192() {
    int v0;
    return v0 + 2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__add_conv_1169(int param0, int param1) {
    unsigned int v0;
    int v1;
    if(v0 != 1) {
        camlBuffer__add_string_1082();
    }
    else {
        camlBuffer__add_char_1072(param0, param1);
    }
    camlBuffer__add_char_1072(param0, param1);
    return v1 + 2;
}

int camlPrintf__add_conv_1191(unsigned int param0, int param1) {
    unsigned int v0;
    unsigned int v1 = v0;
    if(param0 != 83 && param0 != 251) {
        camlPrintf__incr_ac_1187(*(int*)(param1 + 12));
    }
    return v1 + 2;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlPrintf__add_int_index_1040() {
    return camlPrintf__index_of_int_1037();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__bprintf_1400() {
    return camlPrintf__kbprintf_1397();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__cont_a_1362(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3 = v0;
    int v4 = param1;
    int v5 = v1;
    if(*(unsigned int*)(v1 + 60) != 1) {
        caml_apply2(v2);
        caml_apply2(*(int*)(v5 + 68));
    }
    else {
        caml_apply2(v2);
    }
    return camlPrintf__doprn_1360((unsigned int)(v5 - 32));
}

int camlPrintf__cont_f_1364(int param0) {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = v1;
    int v4 = param0;
    **(unsigned int*)(param0 + 40)(param0, v0, v1);
    return camlPrintf__doprn_1360((unsigned int)(param0 - 64));
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__cont_m_1365(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2 = v0;
    int v3 = v1;
    int v4 = param0;
    int v5 = param1;
    int* ptr1 = camlPrintf__ac_of_format_1184();
    unsigned int v6 = camlPrintf__index_of_int_1037();
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc();
        }
    }
    *ptr0 = 5367;
    *(ptr0 + 1) = &camlPrintf__fun_1673;
    *(ptr0 + 2) = 3;
    int v7 = v5;
    *(ptr0 + 3) = v7 - 80;
    *(ptr0 + 4) = v4;
    *(unsigned int*)(ptr0 + 5) = v6;
    return camlPrintf__pr_1354(v3, *(int*)(v7 + 44));
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__cont_s_1361(int param0, int param1) {
    int v0;
    int v1 = v0;
    int v2 = param0;
    int v3 = param1;
    caml_apply2(*(int*)(param1 + 84));
    return camlPrintf__doprn_1360((unsigned int)(v3 - 16));
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__cont_t_1363(int param0, int param1) {
    int v0;
    int* ptr0;
    int v1 = v0;
    int v2 = param0;
    int v3 = param1;
    if(*(unsigned int*)(param1 + 44) != 1) {
        int v4 = *ptr0();
        caml_apply2(*(int*)(v3 + 52));
    }
    else {
        *ptr0();
    }
    return camlPrintf__doprn_1360((unsigned int)(v3 - 48));
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__count_arguments_of_format_1198() {
    int* ptr0 = camlPrintf__ac_of_format_1184();
    return ptr0[0];
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__doprn_1360(unsigned int param0) {
    int v0;
    char v1;
    char v2;
    void* ptr0;
    unsigned int v3;
    unsigned int v4;
    unsigned int v5;
    int* ptr1 = &ptr0;
    char v6 = &ptr0 == 12;
    char v7 = (int)&v4 < 0;
    char v8 = __parity__((unsigned char)&ptr0 - 12);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0xc) ^ (int)&v4) >>> 4) & 0x1);
    char v10 = (unsigned int)&ptr0 < 12;
    char v11 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0xc)) < 0;
loc_8059143:
    do {
        unsigned int v12 = v3;
        unsigned int v13 = v5;
        unsigned int v14 = *(unsigned int*)(param0 + 128);
        char v15 = v14 == v13;
        v2 = (int)v14 > (int)v13;
        char v16 = __parity__((unsigned char)v13 - (unsigned char)v14);
        char v17 = v14 > v13;
        v1 = (int)(((v13 - v14) ^ v13) & (v14 ^ v13)) < 0;
        char v18 = (((v13 - v14) ^ (v14 ^ v13)) >>> 4) & 0x1;
        if(v2 != v1) {
            unsigned int v19 = v13;
            unsigned int v20 = v13;
            int v21 = (int)(v19 >> 1);
            char v22 = v20 & 0x1;
            char v23 = 0;
            char v24 = v21 ? 0: 1;
            char v25 = v21 < 0;
            char v26 = __parity__((unsigned char)v21);
            int v27 = *(int*)(param0 + 120);
            int v28 = (unsigned int)*(char*)(v27 + v21);
            unsigned int v29 = (unsigned int)(v28 * 2 + 1);
            char v30 = v29 == 75;
            char v31 = (int)v29 < 75;
            char v32 = __parity__((unsigned char)v29 - 75);
            char v33 = v29 < 75;
            char v34 = (((v29 - 75) ^ v29) & (v29 ^ 0x4b)) < 0;
            char v35 = (((v29 - 75) ^ (v29 ^ 0x4b)) >>> 4) & 0x1;
            if(!v30) {
                unsigned int v36 = param0;
                v4 = v13;
                unsigned int v37 = v12;
                int v38 = *(int*)(param0 + 96);
                int v39 = *(int*)(param0 + 108);
                int v40 = v38;
                caml_apply2(v40);
                unsigned int v41 = v4;
                unsigned int v42 = v4;
                v5 = v41 + 2;
                char v43 = v5 ? 0: 1;
                char v44 = v5 >= 0x80000000;
                char v45 = __parity__((unsigned char)v5);
                char v46 = (((v42 ^ 0x2) ^ v5) >>> 4) & 0x1;
                char v47 = v42 >= 0xfffffffe;
                char v48 = (int)((v5 ^ v42) & ~(v42 ^ 0x2)) < 0;
                v3 = v37;
                param0 = v36;
                goto loc_8059143;
            }
            else {
                caml_extra_params = param0 + 48;
                gvar_807B7C0 = param0 + 64;
                gvar_807B7C4 = param0 + 80;
                return camlPrintf__scan_format_1278((int)v12, (int)v13);
            }
        }
    }
    while(v2 != v1);
    int* ptr2 = *(unsigned int*)(param0 + 116);
    v0 = *(int*)(param0 + 108);
    int v49 = *ptr2;
    int* ptr3 = &v4;
    int* ptr4 = &ptr0;
    char v50 = &ptr0 ? 0: 1;
    char v51 = (int)&ptr0 < 0;
    char v52 = __parity__((unsigned char)&ptr0);
    char v53 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0xc) ^ (int)&ptr0) >>> 4) & 0x1);
    char v54 = (unsigned int)&v4 >= 0xfffffff4;
    char v55 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v4 ^ 0xc)) < 0;
    jump v49;
}

int camlPrintf__entry(int param0, int param1) {
    int v0;
    unsigned int v1 = &camlPrintf__38;
    unsigned int v2 = caml_allocN(&camlPrintf__38, param1);
    int* ptr0 = (int*)(v2 + 4);
    *(int*)v2 = 4343;
    *(int*)(v2 + 4) = &caml_curry2;
    *(int*)(v2 + 8) = 5;
    *(int*)(v2 + 12) = &camlPrintf__add_int_index_1040;
    *(int*)(v2 + 16) = v0;
    int v3 = *(int*)(v2 + 4)();
    unsigned int v4 = caml_allocN(v0, param1);
    *(int*)v4 = 3319;
    *(int*)(v4 + 4) = &camlPrintf__index_of_literal_position_1044;
    *(int*)(v4 + 8) = 3;
    unsigned int v5 = v1;
    *(unsigned int*)(v4 + 12) = v1;
    *(int*)(v4 + 16) = 3319;
    *(int*)(v4 + 20) = &camlPrintf__to_string_1054;
    *(int*)(v4 + 24) = 3;
    *(int*)(v4 + 28) = &camlPrintf__37;
    *(int*)(v4 + 32) = 0x1800;
    *(unsigned int*)(v4 + 36) = v5;
    *(unsigned int*)(v4 + 40) = ptr0;
    *(int*)(v4 + 44) = v3;
    *(unsigned int*)(v4 + 48) = (int*)(v4 + 4);
    *(int*)(v4 + 52) = &camlPrintf__37;
    *(unsigned int*)(v4 + 56) = (int*)(v4 + 20);
    gvar_8079500 = (unsigned int*)(v4 + 36);
    gvar_8079504 = &camlPrintf__36;
    gvar_8079508 = &camlPrintf__35;
    gvar_807950C = &camlPrintf__34;
    gvar_8079510 = &camlPrintf__33;
    gvar_8079514 = &camlPrintf__32;
    gvar_8079518 = &camlPrintf__31;
    gvar_807951C = &camlPrintf__30;
    gvar_8079520 = &camlPrintf__29;
    gvar_8079524 = &camlPrintf__28;
    gvar_8079528 = &camlPrintf__27;
    gvar_807952C = &camlPrintf__26;
    gvar_8079530 = &camlPrintf__25;
    gvar_8079534 = &camlPrintf__24;
    gvar_8079538 = &camlPrintf__23;
    gvar_807953C = &camlPrintf__22;
    gvar_8079540 = &camlPrintf__21;
    gvar_8079544 = &camlPrintf__20;
    gvar_8079548 = &camlPrintf__19;
    gvar_807954C = &camlPrintf__18;
    gvar_8079550 = &camlPrintf__17;
    gvar_8079554 = &camlPrintf__16;
    *(int*)(v4 + 60) = 4343;
    *(int*)(v4 + 64) = &caml_curry2;
    *(int*)(v4 + 68) = 5;
    *(int*)(v4 + 72) = &camlPrintf__fun_1600;
    *(int*)(v4 + 76) = &camlPrintf__15;
    gvar_8079558 = (int*)(v4 + 64);
    gvar_807955C = &camlPrintf__14;
    gvar_8079560 = &camlPrintf__13;
    gvar_80794EC = &camlPrintf__12;
    gvar_80794E0 = &camlPrintf__11;
    camlPrintf = &camlPrintf__10;
    gvar_80794D8 = &camlPrintf__9;
    gvar_80794DC = &camlPrintf__8;
    gvar_80794F4 = &camlPrintf__7;
    gvar_80794E8 = &camlPrintf__6;
    gvar_8079564 = &camlPrintf__5;
    gvar_8079568 = &camlPrintf__4;
    gvar_807956C = &camlPrintf__3;
    gvar_80794F0 = &camlPrintf__2;
    gvar_80794E4 = &camlPrintf__1;
    gvar_80794F8 = gvar_80794F0;
    v1 = gvar_8079500;
    unsigned int v6 = gvar_807953C;
    unsigned int v7 = gvar_8079528;
    unsigned int v8 = gvar_8079534;
    unsigned int v9 = gvar_807955C;
    unsigned int v10 = gvar_8079548;
    *(int*)(v4 + 80) = 0x1400;
    *(unsigned int*)(v4 + 84) = v6;
    *(unsigned int*)(v4 + 88) = v7;
    *(unsigned int*)(v4 + 92) = v8;
    *(unsigned int*)(v4 + 96) = v9;
    *(unsigned int*)(v4 + 100) = v10;
    *(int*)(v4 + 104) = 0x800;
    *(unsigned int*)(v4 + 108) = v1;
    *(unsigned int*)(v4 + 112) = (unsigned int*)(v4 + 84);
    int* ptr1 = *(unsigned int*)(v4 + 108);
    *(int*)(v4 + 116) = 0x1000;
    *(int*)(v4 + 120) = *ptr1;
    *(int*)(v4 + 124) = *(ptr1 + 2);
    *(int*)(v4 + 128) = *(ptr1 + 4);
    *(int*)(v4 + 132) = *(ptr1 + 5);
    *(int*)(v4 + 0x88) = 0x800;
    *(unsigned int*)(v4 + 140) = (int*)(v4 + 120);
    *(int*)(v4 + 144) = *(int*)(v4 + 112);
    gvar_80794FC = (unsigned int*)(v4 + 140);
    return 1;
}

int camlPrintf__eprintf_1395() {
    char v0;
    int v1;
    int v2;
    int* ptr0 = &v0;
    char v3 = &v0 == 4;
    char v4 = (int)&v1 < 0;
    char v5 = __parity__((unsigned char)&v0 - 4);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&v1) >>> 4) & 0x1);
    char v7 = (unsigned int)&v0 < 4;
    char v8 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x4)) < 0;
    v1 = v2;
    unsigned int v9 = gvar_8075548;
    int v10 = camlPrintf__fprintf_1391();
    int v11 = v10;
    int v12 = *(int*)v11;
    int v13 = v1;
    int* ptr1 = &v1;
    int* ptr2 = &v0;
    char v14 = &v0 ? 0: 1;
    char v15 = (int)&v0 < 0;
    char v16 = __parity__((unsigned char)&v0);
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x4) ^ (int)&v0) >>> 4) & 0x1);
    char v18 = (unsigned int)&v1 >= 0xfffffffc;
    char v19 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int*)~(int)(int*)((int)&v1 ^ 0x4)) < 0;
    jump v12;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__extract_format_1085(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1 = v0;
    int v2 = param0;
    int v3 = param1;
    while(1) {
        ptr1 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr1) {
            break;
        }
        else {
            caml_call_gc(param0, param1);
        }
    }
    int* ptr2 = ptr1 + 1;
    *ptr1 = 3319;
    *(ptr1 + 1) = &camlPrintf__skip_positional_spec_1090;
    *(ptr1 + 2) = 3;
    *(ptr1 + 3) = v0;
    unsigned int v4 = camlPrintf__skip_positional_spec_1090();
    int* ptr3 = camlBuffer__create_1039();
    camlBuffer__add_char_1072();
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 32);
        caml_young_ptr -= 32;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(param0, param1);
        }
    }
    int v5 = (int)(ptr0 + 1);
    *ptr0 = 7415;
    *(int*)(int)(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__fill_format_1096;
    *(ptr0 + 4) = v1;
    *(ptr0 + 5) = v2;
    *(unsigned int*)(ptr0 + 6) = ptr2;
    *(int**)(ptr0 + 7) = ptr3;
    int v6 = camlList__rev_append_1051();
    camlPrintf__fill_format_1096(v5);
    return camlString__sub_1046(ptr3[1]);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__extract_format_float_1110(int param0, int param1) {
    int v0;
    void* ptr0;
    void* ptr1;
    int v1;
    int v2;
    int v3;
    int v4;
    ptr1 = ptr0;
    int v5 = v3;
    int v6 = v4;
    int result = camlPrintf__extract_format_1085(v5, v6);
    char v7 = ptr1 == 141;
    char v8 = (int)(int*)((int)(int*)((int)(int*)((int)ptr1 - 141) ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ 0x8d)) < 0;
    if(!v7) {
        return result;
    }
    int v9 = *(int*)(result - 4);
    int v10 = *(int*)(result - 4);
    int v11 = v9 >>> 10;
    char v12 = (v10 >>> 9) & 0x1;
    char v13 = v8;
    char v14 = v11 ? 0: 1;
    char v15 = v11 < 0;
    char v16 = __parity__((unsigned char)v11);
    unsigned int v17 = (unsigned int)(v11 * 4 - 1);
    unsigned int v18 = (unsigned int)*(char*)(result + v17);
    unsigned int v19 = v17;
    unsigned int v20 = v17 - v18;
    char v21 = v20 ? 0: 1;
    char v22 = v20 >= 0x80000000;
    char v23 = __parity__((unsigned char)v20);
    char v24 = (((v18 ^ v19) ^ v20) >>> 4) & 0x1;
    char v25 = v18 > v19;
    char v26 = (int)((v18 ^ v19) & (v20 ^ v19)) < 0;
    int v27 = v20 * 2 - 1;
    int v28 = v20 * 2 - 1;
    void* ptr2 = (void*)(v27 >> 1);
    char v29 = v28 & 0x1;
    char v30 = 0;
    char v31 = ptr2 ? 0: 1;
    char v32 = (int)ptr2 < 0;
    char v33 = __parity__((unsigned char)ptr2);
    int v34 = *(int*)(result - 4);
    int v35 = *(int*)(result - 4);
    int v36 = v34 >>> 10;
    char v37 = (v35 >>> 9) & 0x1;
    char v38 = 0;
    char v39 = v36 ? 0: 1;
    char v40 = v36 < 0;
    char v41 = __parity__((unsigned char)v36);
    int v42 = v36 * 4 - 1;
    int v43 = (unsigned int)*(char*)(result + v42);
    v2 = v42 - v43;
    char v44 = v2 == ptr2;
    char v45 = v2 < (int)ptr2;
    char v46 = __parity__((unsigned char)v2 - (unsigned char)ptr2);
    char v47 = (unsigned int)v2 < (unsigned int)ptr2;
    char v48 = (int)(int*)((int)(int*)((int)(int*)(v2 - (int)ptr2) ^ v2) & (int)(int*)(v2 ^ (int)ptr2)) < 0;
    char v49 = (int*)((int)(int*)((int)(int*)((int)(int*)(v2 - (int)ptr2) ^ (int)(int*)(v2 ^ (int)ptr2)) >>> 4) & 0x1);
    if(!v47 && !v44) {
        *(char*)(result + (int)ptr2) = 103;
        return result;
    }
    int* ptr3 = &v1;
    int v50 = caml_ml_array_bound_error((int)ptr1, v0, param0, param1);
    result = /*BAD_CALL!*/ camlPrintf__sub_format_1117(v2, v3);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__extract_format_int_1103(int param0, int param1) {
    int v0;
    void* ptr0;
    void* ptr1;
    int v1;
    unsigned int v2;
    int v3;
    int v4;
    ptr1 = ptr0;
    int v5 = v3;
    int v6 = v4;
    int result = camlPrintf__extract_format_1085(v5, v6);
    char v7 = ptr1 == 157;
    if(!v7) {
        v7 = ptr1 == 221;
        v40 = (int)ptr1 < 221;
        v39 = __parity__((unsigned char)ptr1 - 221);
        v38 = (unsigned int)ptr1 < 221;
        v37 = (int)(int*)((int)(int*)((int)(int*)((int)ptr1 - 221) ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ 0xdd)) < 0;
        char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 - 221) ^ (int)(int*)((int)ptr1 ^ 0xdd)) >>> 4) & 0x1);
        if(!v7) {
            return result;
        }
    }
    int v9 = *(int*)(result - 4);
    int v10 = v9 >>> 10;
    unsigned int v11 = (unsigned int)(v10 * 4 - 1);
    unsigned int v12 = (unsigned int)*(char*)(result + v11);
    unsigned int v13 = v11 - v12;
    int v14 = v13 * 2 - 1;
    void* ptr2 = (void*)(v14 >> 1);
    int v15 = *(int*)(result - 4);
    int v16 = v15 >>> 10;
    int v17 = v16 * 4 - 1;
    int v18 = (unsigned int)*(char*)(result + v17);
    v2 = (unsigned int)(v17 - v18);
    char v19 = v2 == ptr2;
    char v20 = v2 < (unsigned int)ptr2;
    if(!v20 && !v19) {
        *(char*)(result + (int)ptr2) = 117;
        return result;
    }
    int* ptr3 = &v1;
    int v21 = caml_ml_array_bound_error((int)ptr1, v0, param0, param1);
    result = /*BAD_CALL!*/ camlPrintf__extract_format_float_1110(v0, param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__fill_format_1096(int param0) {
    int* ptr0;
    unsigned int v0;
    int* ptr1;
    int v1;
    unsigned int v2;
    int* ptr2;
    while((int)*(unsigned int*)(param0 + 16) >= (int)v2) {
        if((unsigned int)*(char*)((v2 >> 1) + *(int*)(param0 + 12)) * 2 != 84) {
            v1 = param0;
            ptr1 = ptr2;
            v0 = v2;
            camlBuffer__add_char_1072();
            v2 = v0 + 2;
            ptr2 = ptr1;
            param0 = v1;
        }
        else if(ptr2 != 1) {
            v1 = param0;
            v0 = v2;
            ptr1 = *(unsigned int*)(ptr2 + 1);
            int v3 = camlPervasives__string_of_int_1130();
            camlBuffer__add_string_1082();
            v2 = camlPrintf__skip_positional_spec_1090();
            ptr2 = ptr1;
            param0 = v1;
        }
        else {
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    caml_call_gc(param0, 85);
                }
            }
            *ptr0 = 0x800;
            *(ptr0 + 1) = &caml_exn_Assert_failure;
            *(ptr0 + 2) = &camlPrintf__65;
            caml_raise_exn();
            return 1;
        }
    }
    return 1;
}

int camlPrintf__format_string_1080(int param0, int param1) {
    int v0;
    int v1 = v0;
    int v2 = camlPrintf__parse_string_conversion_1067(param0, param1);
    return camlPrintf__pad_string_1072(*(unsigned int*)(v2 + 4), v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__fprintf_1391() {
    return camlPrintf__kfprintf_1386();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__fun_1565(int param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    int v7;
    int v8;
    int v9;
    unsigned int v10;
    int v11;
    unsigned int v12;
    int* ptr0 = &v7;
    char v13 = &v7 == 8;
    char v14 = (int)&v11 < 0;
    char v15 = __parity__((unsigned char)&v7 - 8);
    char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v7 ^ 0x8) ^ (int)&v11) >>> 4) & 0x1);
    char v17 = (unsigned int)&v7 < 8;
    char v18 = (int)(int*)((int)(int*)((int)&v7 ^ (int)&v11) & (int)(int*)((int)&v7 ^ 0x8)) < 0;
    int v19 = v9;
    int v20 = *(int*)(v12 + 12);
    int v21 = v20 - v19;
    int v22 = v21 - 3;
    unsigned int v23 = (unsigned int)(v21 - 3);
    unsigned int v24 = (unsigned int)(v22 + 2);
    char v25 = v24 ? 0: 1;
    char v26 = v24 >= 0x80000000;
    char v27 = __parity__((unsigned char)v24);
    char v28 = (((v23 ^ 0x2) ^ v24) >>> 4) & 0x1;
    char v29 = v23 >= 0xfffffffe;
    char v30 = (int)((v24 ^ v23) & ~(v23 ^ 0x2)) < 0;
    int v31 = *(int*)(v12 + 16);
    int v32 = *(int*)(v31 - 4);
    int v33 = *(int*)(v31 - 4);
    unsigned int v34 = (unsigned int)(unsigned char)v33;
    char v35 = v34 == 254;
    char v36 = (int)v34 < 254;
    char v37 = __parity__((unsigned char)v34 - 254);
    char v38 = v34 < 254;
    char v39 = (((v34 - 254) ^ v34) & (v34 ^ 0xfe)) < 0;
    char v40 = (((v34 - 254) ^ (v34 ^ 0xfe)) >>> 4) & 0x1;
    if(!v35) {
        v6 = v32;
        unsigned int v41 = (unsigned int)(v32 >>> 9);
        char v42 = (v6 >>> 8) & 0x1;
        char v43 = v39;
        char v44 = v41 ? 0: 1;
        char v45 = v41 >= 0x80000000;
        char v46 = __parity__((unsigned char)v41);
        v5 = v24 == v41;
        v4 = (int)v24 > (int)v41;
        v3 = __parity__((unsigned char)v41 - (unsigned char)v24);
        v2 = v24 > v41;
        v1 = (int)(((v41 - v24) ^ v41) & (v24 ^ v41)) < 0;
        v0 = (((v41 - v24) ^ (v24 ^ v41)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            caml_modify((unsigned int*)(v24 * 2 + v31 - 2), v10);
            return 1;
        }
    }
    else {
        v6 = v32;
        v12 = (unsigned int)(v32 >>> 10);
        char v47 = (v6 >>> 9) & 0x1;
        char v48 = v39;
        char v49 = v12 ? 0: 1;
        char v50 = v12 >= 0x80000000;
        char v51 = __parity__((unsigned char)v12);
        v5 = v24 == v12;
        v4 = (int)v24 > (int)v12;
        v3 = __parity__((unsigned char)v12 - (unsigned char)v24);
        v2 = v24 > v12;
        v1 = (int)(((v12 - v24) ^ v12) & (v24 ^ v12)) < 0;
        v0 = (((v12 - v24) ^ (v24 ^ v12)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            *(long long*)(v24 * 4 + v31 - 4) = *(double*)v10;
            return 1;
        }
        int v52 = caml_ml_array_bound_error(v11, v8, v7, param0);
    }
    /*BAD_CALL!*/ caml_ml_array_bound_error(v11, v8, v7, param0);
}

int camlPrintf__fun_1568() {
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlPrintf__fun_1572() {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    unsigned int v6;
    void* ptr0;
    int v7;
    int v8;
    int v9;
    int v10;
    unsigned int result;
    int* ptr1 = &ptr0;
    char v11 = &ptr0 == 16;
    char v12 = &v7 >= 0x80000000;
    char v13 = __parity__((unsigned char)&ptr0 - 16);
    char v14 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x10) ^ &v7) >>> 4) & 0x1);
    char v15 = (unsigned int)&ptr0 < 16;
    char v16 = (int)(int*)((int)(int*)(&v7 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x10)) < 0;
    unsigned int v17 = result;
    v7 = v9;
    int v18 = 1;
    int v19 = 3;
    int v20 = &caml_make_vect;
    unsigned int* ptr2 = (unsigned int*)caml_c_call();
    int* ptr3 = &v19;
    char v21 = &ptr0 == 16;
    char v22 = &v7 >= 0x80000000;
    char v23 = __parity__((unsigned char)&ptr0 - 16);
    char v24 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v19 ^ 0x8) ^ &v7) >>> 4) & 0x1);
    char v25 = (unsigned int)&v19 >= 0xfffffff8;
    char v26 = (int)(int*)((int)(int*)(&v7 ^ (int)&v19) & (int*)~(int)(int*)((int)&v19 ^ 0x8)) < 0;
    unsigned int* ptr4 = ptr2;
    unsigned int v27 = ptr4[-1];
    unsigned int v28 = ptr4[-1];
    unsigned int v29 = (unsigned int)(unsigned char)v28;
    char v30 = v29 == 254;
    char v31 = (int)v29 < 254;
    char v32 = __parity__((unsigned char)v29 - 254);
    char v33 = v29 < 254;
    char v34 = (((v29 - 254) ^ v29) & (v29 ^ 0xfe)) < 0;
    char v35 = (((v29 - 254) ^ (v29 ^ 0xfe)) >>> 4) & 0x1;
    if(!v30) {
        v6 = v27;
        unsigned int v36 = v27 >>> 9;
        char v37 = (v6 >>> 8) & 0x1;
        char v38 = v34;
        char v39 = v36 ? 0: 1;
        char v40 = v36 >= 0x80000000;
        char v41 = __parity__((unsigned char)v36);
        v5 = v36 == 1;
        v4 = (int)v36 < 1;
        v3 = __parity__((unsigned char)v36 - 1);
        v2 = v36 < 1;
        v1 = (((v36 - 1) ^ v36) & (v36 ^ 0x1)) < 0;
        v0 = (((v36 - 1) ^ (v36 ^ 0x1)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            caml_modify(ptr4, v17);
            caml_apply2(*(int*)(v7 + 8));
            return result;
        }
    }
    else {
        v6 = v27;
        unsigned int v42 = v27 >>> 10;
        char v43 = (v6 >>> 9) & 0x1;
        char v44 = v34;
        char v45 = v42 ? 0: 1;
        char v46 = v42 >= 0x80000000;
        char v47 = __parity__((unsigned char)v42);
        v5 = v42 == 1;
        v4 = (int)v42 < 1;
        v3 = __parity__((unsigned char)v42 - 1);
        v2 = v42 < 1;
        v1 = (((v42 - 1) ^ v42) & (v42 ^ 0x1)) < 0;
        v0 = (((v42 - 1) ^ (v42 ^ 0x1)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            *(long long*)&ptr4[0] = *(double*)v17;
            caml_apply2(*(int*)(v7 + 8));
            return result;
        }
        int v48 = caml_ml_array_bound_error(v7, (int)v17, v10, v8);
    }
    result = (unsigned int)/*BAD_CALL!*/ caml_ml_array_bound_error(v7, (int)v17, v10, v8);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlPrintf__fun_1575(int param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    unsigned int v6;
    void* ptr0;
    unsigned int v7;
    unsigned int result;
    int v8;
    int v9;
    int* ptr1 = &ptr0;
    char v10 = &ptr0 == 20;
    char v11 = &v8 >= 0x80000000;
    char v12 = __parity__((unsigned char)&ptr0 - 20);
    char v13 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x14) ^ &v8) >>> 4) & 0x1);
    char v14 = (unsigned int)&ptr0 < 20;
    char v15 = (int)(int*)((int)(int*)(&v8 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x14)) < 0;
    unsigned int v16 = result;
    unsigned int v17 = v7;
    v8 = param0;
    int v18 = 1;
    int v19 = 5;
    int v20 = &caml_make_vect;
    unsigned int* ptr2 = (unsigned int*)caml_c_call();
    int* ptr3 = &v19;
    char v21 = &ptr0 == 20;
    char v22 = &v8 >= 0x80000000;
    char v23 = __parity__((unsigned char)&ptr0 - 20);
    char v24 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v19 ^ 0x8) ^ &v8) >>> 4) & 0x1);
    char v25 = (unsigned int)&v19 >= 0xfffffff8;
    char v26 = (int)(int*)((int)(int*)(&v8 ^ (int)&v19) & (int*)~(int)(int*)((int)&v19 ^ 0x8)) < 0;
    unsigned int* ptr4 = ptr2;
    unsigned int v27 = ptr4[-1];
    unsigned int v28 = ptr4[-1];
    unsigned int v29 = (unsigned int)(unsigned char)v28;
    char v30 = v29 == 254;
    char v31 = (int)v29 < 254;
    char v32 = __parity__((unsigned char)v29 - 254);
    char v33 = v29 < 254;
    char v34 = (((v29 - 254) ^ v29) & (v29 ^ 0xfe)) < 0;
    char v35 = (((v29 - 254) ^ (v29 ^ 0xfe)) >>> 4) & 0x1;
    if(!v30) {
        v6 = v27;
        unsigned int v36 = v27 >>> 9;
        char v37 = (v6 >>> 8) & 0x1;
        char v38 = v34;
        char v39 = v36 ? 0: 1;
        char v40 = v36 >= 0x80000000;
        char v41 = __parity__((unsigned char)v36);
        v5 = v36 == 1;
        v4 = (int)v36 < 1;
        v3 = __parity__((unsigned char)v36 - 1);
        v2 = v36 < 1;
        v1 = (((v36 - 1) ^ v36) & (v36 ^ 0x1)) < 0;
        v0 = (((v36 - 1) ^ (v36 ^ 0x1)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            unsigned int v42 = v16;
            unsigned int v43 = caml_modify(ptr4, v42);
            int* ptr5 = &v19;
            char v44 = &ptr0 == 20;
            char v45 = &v8 >= 0x80000000;
            char v46 = __parity__((unsigned char)&ptr0 - 20);
            char v47 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v19 ^ 0x8) ^ &v8) >>> 4) & 0x1);
            char v48 = (unsigned int)&v19 >= 0xfffffff8;
            char v49 = (int)(int*)((int)(int*)(&v8 ^ (int)&v19) & (int*)~(int)(int*)((int)&v19 ^ 0x8)) < 0;
            goto loc_805A2C0;
        }
    }
    else {
        v6 = v27;
        unsigned int v50 = v27 >>> 10;
        char v51 = (v6 >>> 9) & 0x1;
        char v52 = v34;
        char v53 = v50 ? 0: 1;
        char v54 = v50 >= 0x80000000;
        char v55 = __parity__((unsigned char)v50);
        v5 = v50 == 1;
        v4 = (int)v50 < 1;
        v3 = __parity__((unsigned char)v50 - 1);
        v2 = v50 < 1;
        v1 = (((v50 - 1) ^ v50) & (v50 ^ 0x1)) < 0;
        v0 = (((v50 - 1) ^ (v50 ^ 0x1)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            unsigned int v56 = v16;
            char v57 = 6;
            __SyntheticTypeUnknownF v58 = *(double*)v56;
            *(long long*)&ptr4[0] = v58;
            char v59 = 7;
        loc_805A2C0:
            unsigned int v60 = ptr4[-1];
            unsigned int v61 = ptr4[-1];
            unsigned int v62 = (unsigned int)(unsigned char)v61;
            char v63 = v62 == 254;
            char v64 = (int)v62 < 254;
            char v65 = __parity__((unsigned char)v62 - 254);
            char v66 = v62 < 254;
            char v67 = (((v62 - 254) ^ v62) & (v62 ^ 0xfe)) < 0;
            char v68 = (((v62 - 254) ^ (v62 ^ 0xfe)) >>> 4) & 0x1;
            v6 = v60;
            if(!v63) {
                unsigned int v69 = v60 >>> 9;
                char v70 = (v6 >>> 8) & 0x1;
                char v71 = v67;
                char v72 = v69 ? 0: 1;
                char v73 = v69 >= 0x80000000;
                char v74 = __parity__((unsigned char)v69);
                v5 = v69 == 3;
                v4 = (int)v69 < 3;
                v3 = __parity__((unsigned char)v69 - 3);
                v2 = v69 < 3;
                v1 = (((v69 - 3) ^ v69) & (v69 ^ 0x3)) < 0;
                v0 = (((v69 - 3) ^ (v69 ^ 0x3)) >>> 4) & 0x1;
                if(!v2 && !v5) {
                    caml_modify(ptr4 + 1, v17);
                    caml_apply2(*(int*)(v8 + 12));
                    return result;
                }
            }
            else {
                unsigned int v75 = v60 >>> 10;
                char v76 = (v6 >>> 9) & 0x1;
                char v77 = v67;
                char v78 = v75 ? 0: 1;
                char v79 = v75 >= 0x80000000;
                char v80 = __parity__((unsigned char)v75);
                v5 = v75 == 3;
                v4 = (int)v75 < 3;
                v3 = __parity__((unsigned char)v75 - 3);
                v2 = v75 < 3;
                v1 = (((v75 - 3) ^ v75) & (v75 ^ 0x3)) < 0;
                v0 = (((v75 - 3) ^ (v75 ^ 0x3)) >>> 4) & 0x1;
                if(!v2 && !v5) {
                    *(long long*)&ptr4[2] = *(double*)v17;
                    caml_apply2(*(int*)(v8 + 12));
                    return result;
                }
                int v81 = caml_ml_array_bound_error(v8, (int)v17, (int)v16, v9);
            }
            int v82 = caml_ml_array_bound_error(v8, (int)v17, (int)v16, v9);
        }
        int v83 = caml_ml_array_bound_error(v8, (int)v17, (int)v16, v9);
    }
    result = (unsigned int)/*BAD_CALL!*/ caml_ml_array_bound_error(v8, (int)v17, (int)v16, v9);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlPrintf__fun_1578(unsigned int param0, int param1) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    unsigned int v6;
    void* ptr0;
    unsigned int result;
    int v7;
    unsigned int v8;
    int* ptr1 = &ptr0;
    char v9 = &ptr0 == 24;
    char v10 = &v7 >= 0x80000000;
    char v11 = __parity__((unsigned char)&ptr0 - 24);
    char v12 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x18) ^ &v7) >>> 4) & 0x1);
    char v13 = (unsigned int)&ptr0 < 24;
    char v14 = (int)(int*)((int)(int*)(&v7 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x18)) < 0;
    unsigned int v15 = result;
    unsigned int v16 = v8;
    unsigned int v17 = param0;
    v7 = param1;
    int v18 = 1;
    int v19 = 7;
    int v20 = &caml_make_vect;
    unsigned int* ptr2 = (unsigned int*)caml_c_call();
    int* ptr3 = &v19;
    char v21 = &ptr0 == 24;
    char v22 = &v7 >= 0x80000000;
    char v23 = __parity__((unsigned char)&ptr0 - 24);
    char v24 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v19 ^ 0x8) ^ &v7) >>> 4) & 0x1);
    char v25 = (unsigned int)&v19 >= 0xfffffff8;
    char v26 = (int)(int*)((int)(int*)(&v7 ^ (int)&v19) & (int*)~(int)(int*)((int)&v19 ^ 0x8)) < 0;
    unsigned int* ptr4 = ptr2;
    unsigned int v27 = ptr4[-1];
    unsigned int v28 = ptr4[-1];
    unsigned int v29 = (unsigned int)(unsigned char)v28;
    char v30 = v29 == 254;
    char v31 = (int)v29 < 254;
    char v32 = __parity__((unsigned char)v29 - 254);
    char v33 = v29 < 254;
    char v34 = (((v29 - 254) ^ v29) & (v29 ^ 0xfe)) < 0;
    char v35 = (((v29 - 254) ^ (v29 ^ 0xfe)) >>> 4) & 0x1;
    if(!v30) {
        v6 = v27;
        unsigned int v36 = v27 >>> 9;
        char v37 = (v6 >>> 8) & 0x1;
        char v38 = v34;
        char v39 = v36 ? 0: 1;
        char v40 = v36 >= 0x80000000;
        char v41 = __parity__((unsigned char)v36);
        v5 = v36 == 1;
        v4 = (int)v36 < 1;
        v3 = __parity__((unsigned char)v36 - 1);
        v2 = v36 < 1;
        v1 = (((v36 - 1) ^ v36) & (v36 ^ 0x1)) < 0;
        v0 = (((v36 - 1) ^ (v36 ^ 0x1)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            unsigned int v42 = v15;
            unsigned int v43 = caml_modify(ptr4, v42);
            int* ptr5 = &v19;
            char v44 = &ptr0 == 24;
            char v45 = &v7 >= 0x80000000;
            char v46 = __parity__((unsigned char)&ptr0 - 24);
            char v47 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v19 ^ 0x8) ^ &v7) >>> 4) & 0x1);
            char v48 = (unsigned int)&v19 >= 0xfffffff8;
            char v49 = (int)(int*)((int)(int*)(&v7 ^ (int)&v19) & (int*)~(int)(int*)((int)&v19 ^ 0x8)) < 0;
            goto loc_805A194;
        }
    }
    else {
        v6 = v27;
        unsigned int v50 = v27 >>> 10;
        char v51 = (v6 >>> 9) & 0x1;
        char v52 = v34;
        char v53 = v50 ? 0: 1;
        char v54 = v50 >= 0x80000000;
        char v55 = __parity__((unsigned char)v50);
        v5 = v50 == 1;
        v4 = (int)v50 < 1;
        v3 = __parity__((unsigned char)v50 - 1);
        v2 = v50 < 1;
        v1 = (((v50 - 1) ^ v50) & (v50 ^ 0x1)) < 0;
        v0 = (((v50 - 1) ^ (v50 ^ 0x1)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            unsigned int v56 = v15;
            char v57 = 6;
            __SyntheticTypeUnknownF v58 = *(double*)v56;
            *(long long*)&ptr4[0] = v58;
            char v59 = 7;
        loc_805A194:
            unsigned int v60 = ptr4[-1];
            unsigned int v61 = ptr4[-1];
            unsigned int v62 = (unsigned int)(unsigned char)v61;
            char v63 = v62 == 254;
            char v64 = (int)v62 < 254;
            char v65 = __parity__((unsigned char)v62 - 254);
            char v66 = v62 < 254;
            char v67 = (((v62 - 254) ^ v62) & (v62 ^ 0xfe)) < 0;
            char v68 = (((v62 - 254) ^ (v62 ^ 0xfe)) >>> 4) & 0x1;
            v6 = v60;
            if(!v63) {
                unsigned int v69 = v60 >>> 9;
                char v70 = (v6 >>> 8) & 0x1;
                char v71 = v67;
                char v72 = v69 ? 0: 1;
                char v73 = v69 >= 0x80000000;
                char v74 = __parity__((unsigned char)v69);
                v5 = v69 == 3;
                v4 = (int)v69 < 3;
                v3 = __parity__((unsigned char)v69 - 3);
                v2 = v69 < 3;
                v1 = (((v69 - 3) ^ v69) & (v69 ^ 0x3)) < 0;
                v0 = (((v69 - 3) ^ (v69 ^ 0x3)) >>> 4) & 0x1;
                if(!v2 && !v5) {
                    unsigned int v75 = v16;
                    unsigned int* ptr6 = ptr4;
                    unsigned int* ptr7 = ptr4;
                    unsigned int* ptr8 = ptr6 + 1;
                    char v76 = ptr8 ? 0: 1;
                    char v77 = (int)ptr8 < 0;
                    char v78 = __parity__((unsigned char)ptr8);
                    char v79 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr7 ^ 0x4) ^ (int)ptr8) >>> 4) & 0x1);
                    char v80 = (unsigned int)ptr7 >= 0xfffffffc;
                    char v81 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr7) & (int*)~(int)(int*)((int)ptr7 ^ 0x4)) < 0;
                    unsigned int v82 = caml_modify(ptr8, v75);
                    int* ptr9 = &v19;
                    char v83 = &ptr0 == 24;
                    char v84 = &v7 >= 0x80000000;
                    char v85 = __parity__((unsigned char)&ptr0 - 24);
                    char v86 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v19 ^ 0x8) ^ &v7) >>> 4) & 0x1);
                    char v87 = (unsigned int)&v19 >= 0xfffffff8;
                    char v88 = (int)(int*)((int)(int*)(&v7 ^ (int)&v19) & (int*)~(int)(int*)((int)&v19 ^ 0x8)) < 0;
                    goto loc_805A1E1;
                }
            }
            else {
                unsigned int v89 = v60 >>> 10;
                char v90 = (v6 >>> 9) & 0x1;
                char v91 = v67;
                char v92 = v89 ? 0: 1;
                char v93 = v89 >= 0x80000000;
                char v94 = __parity__((unsigned char)v89);
                v5 = v89 == 3;
                v4 = (int)v89 < 3;
                v3 = __parity__((unsigned char)v89 - 3);
                v2 = v89 < 3;
                v1 = (((v89 - 3) ^ v89) & (v89 ^ 0x3)) < 0;
                v0 = (((v89 - 3) ^ (v89 ^ 0x3)) >>> 4) & 0x1;
                if(!v2 && !v5) {
                    unsigned int v95 = v16;
                    char v96 = 6;
                    v58 = *(double*)v95;
                    *(long long*)&ptr4[2] = v58;
                    v59 = 7;
                loc_805A1E1:
                    unsigned int v97 = ptr4[-1];
                    unsigned int v98 = ptr4[-1];
                    unsigned int v99 = (unsigned int)(unsigned char)v98;
                    char v100 = v99 == 254;
                    char v101 = (int)v99 < 254;
                    char v102 = __parity__((unsigned char)v99 - 254);
                    char v103 = v99 < 254;
                    char v104 = (((v99 - 254) ^ v99) & (v99 ^ 0xfe)) < 0;
                    char v105 = (((v99 - 254) ^ (v99 ^ 0xfe)) >>> 4) & 0x1;
                    v6 = v97;
                    if(!v100) {
                        unsigned int v106 = v97 >>> 9;
                        char v107 = (v6 >>> 8) & 0x1;
                        char v108 = v104;
                        char v109 = v106 ? 0: 1;
                        char v110 = v106 >= 0x80000000;
                        char v111 = __parity__((unsigned char)v106);
                        v5 = v106 == 5;
                        v4 = (int)v106 < 5;
                        v3 = __parity__((unsigned char)v106 - 5);
                        v2 = v106 < 5;
                        v1 = (((v106 - 5) ^ v106) & (v106 ^ 0x5)) < 0;
                        v0 = (((v106 - 5) ^ (v106 ^ 0x5)) >>> 4) & 0x1;
                        if(!v2 && !v5) {
                            caml_modify(ptr4 + 2, v17);
                            caml_apply2(*(int*)(v7 + 12));
                            return result;
                        }
                    }
                    else {
                        unsigned int v112 = v97 >>> 10;
                        char v113 = (v6 >>> 9) & 0x1;
                        char v114 = v104;
                        char v115 = v112 ? 0: 1;
                        char v116 = v112 >= 0x80000000;
                        char v117 = __parity__((unsigned char)v112);
                        v5 = v112 == 5;
                        v4 = (int)v112 < 5;
                        v3 = __parity__((unsigned char)v112 - 5);
                        v2 = v112 < 5;
                        v1 = (((v112 - 5) ^ v112) & (v112 ^ 0x5)) < 0;
                        v0 = (((v112 - 5) ^ (v112 ^ 0x5)) >>> 4) & 0x1;
                        if(!v2 && !v5) {
                            *(long long*)&ptr4[4] = *(double*)v17;
                            caml_apply2(*(int*)(v7 + 12));
                            return result;
                        }
                        int v118 = caml_ml_array_bound_error(v7, (int)v17, (int)v16, (int)v15);
                    }
                    int v119 = caml_ml_array_bound_error(v7, (int)v17, (int)v16, (int)v15);
                }
                int v120 = caml_ml_array_bound_error(v7, (int)v17, (int)v16, (int)v15);
            }
            int v121 = caml_ml_array_bound_error(v7, (int)v17, (int)v16, (int)v15);
        }
        int v122 = caml_ml_array_bound_error(v7, (int)v17, (int)v16, (int)v15);
    }
    result = (unsigned int)/*BAD_CALL!*/ caml_ml_array_bound_error(v7, (int)v17, (int)v16, (int)v15);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlPrintf__fun_1581(unsigned int param0, unsigned int param1) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    unsigned int v6;
    void* ptr0;
    int v7;
    unsigned int v8;
    int v9;
    unsigned int result;
    int* ptr1 = &ptr0;
    char v10 = &ptr0 == 28;
    char v11 = &v9 >= 0x80000000;
    char v12 = __parity__((unsigned char)&ptr0 - 28);
    char v13 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x1c) ^ &v9) >>> 4) & 0x1);
    char v14 = (unsigned int)&ptr0 < 28;
    char v15 = (int)(int*)((int)(int*)(&v9 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x1c)) < 0;
    unsigned int v16 = result;
    unsigned int v17 = v8;
    unsigned int v18 = param0;
    unsigned int v19 = param1;
    v9 = v7;
    int v20 = 1;
    int v21 = 9;
    int v22 = &caml_make_vect;
    unsigned int* ptr2 = (unsigned int*)caml_c_call();
    int* ptr3 = &v21;
    char v23 = &ptr0 == 28;
    char v24 = &v9 >= 0x80000000;
    char v25 = __parity__((unsigned char)&ptr0 - 28);
    char v26 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v21 ^ 0x8) ^ &v9) >>> 4) & 0x1);
    char v27 = (unsigned int)&v21 >= 0xfffffff8;
    char v28 = (int)(int*)((int)(int*)(&v9 ^ (int)&v21) & (int*)~(int)(int*)((int)&v21 ^ 0x8)) < 0;
    unsigned int* ptr4 = ptr2;
    unsigned int v29 = ptr4[-1];
    unsigned int v30 = ptr4[-1];
    unsigned int v31 = (unsigned int)(unsigned char)v30;
    char v32 = v31 == 254;
    char v33 = (int)v31 < 254;
    char v34 = __parity__((unsigned char)v31 - 254);
    char v35 = v31 < 254;
    char v36 = (((v31 - 254) ^ v31) & (v31 ^ 0xfe)) < 0;
    char v37 = (((v31 - 254) ^ (v31 ^ 0xfe)) >>> 4) & 0x1;
    if(!v32) {
        v6 = v29;
        unsigned int v38 = v29 >>> 9;
        char v39 = (v6 >>> 8) & 0x1;
        char v40 = v36;
        char v41 = v38 ? 0: 1;
        char v42 = v38 >= 0x80000000;
        char v43 = __parity__((unsigned char)v38);
        v5 = v38 == 1;
        v4 = (int)v38 < 1;
        v3 = __parity__((unsigned char)v38 - 1);
        v2 = v38 < 1;
        v1 = (((v38 - 1) ^ v38) & (v38 ^ 0x1)) < 0;
        v0 = (((v38 - 1) ^ (v38 ^ 0x1)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            unsigned int v44 = v16;
            unsigned int v45 = caml_modify(ptr4, v44);
            int* ptr5 = &v21;
            char v46 = &ptr0 == 28;
            char v47 = &v9 >= 0x80000000;
            char v48 = __parity__((unsigned char)&ptr0 - 28);
            char v49 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v21 ^ 0x8) ^ &v9) >>> 4) & 0x1);
            char v50 = (unsigned int)&v21 >= 0xfffffff8;
            char v51 = (int)(int*)((int)(int*)(&v9 ^ (int)&v21) & (int*)~(int)(int*)((int)&v21 ^ 0x8)) < 0;
            goto loc_8059FF4;
        }
    }
    else {
        v6 = v29;
        unsigned int v52 = v29 >>> 10;
        char v53 = (v6 >>> 9) & 0x1;
        char v54 = v36;
        char v55 = v52 ? 0: 1;
        char v56 = v52 >= 0x80000000;
        char v57 = __parity__((unsigned char)v52);
        v5 = v52 == 1;
        v4 = (int)v52 < 1;
        v3 = __parity__((unsigned char)v52 - 1);
        v2 = v52 < 1;
        v1 = (((v52 - 1) ^ v52) & (v52 ^ 0x1)) < 0;
        v0 = (((v52 - 1) ^ (v52 ^ 0x1)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            unsigned int v58 = v16;
            char v59 = 6;
            __SyntheticTypeUnknownF v60 = *(double*)v58;
            *(long long*)&ptr4[0] = v60;
            char v61 = 7;
        loc_8059FF4:
            unsigned int v62 = ptr4[-1];
            unsigned int v63 = ptr4[-1];
            unsigned int v64 = (unsigned int)(unsigned char)v63;
            char v65 = v64 == 254;
            char v66 = (int)v64 < 254;
            char v67 = __parity__((unsigned char)v64 - 254);
            char v68 = v64 < 254;
            char v69 = (((v64 - 254) ^ v64) & (v64 ^ 0xfe)) < 0;
            char v70 = (((v64 - 254) ^ (v64 ^ 0xfe)) >>> 4) & 0x1;
            v6 = v62;
            if(!v65) {
                unsigned int v71 = v62 >>> 9;
                char v72 = (v6 >>> 8) & 0x1;
                char v73 = v69;
                char v74 = v71 ? 0: 1;
                char v75 = v71 >= 0x80000000;
                char v76 = __parity__((unsigned char)v71);
                v5 = v71 == 3;
                v4 = (int)v71 < 3;
                v3 = __parity__((unsigned char)v71 - 3);
                v2 = v71 < 3;
                v1 = (((v71 - 3) ^ v71) & (v71 ^ 0x3)) < 0;
                v0 = (((v71 - 3) ^ (v71 ^ 0x3)) >>> 4) & 0x1;
                if(!v2 && !v5) {
                    unsigned int v77 = v17;
                    unsigned int* ptr6 = ptr4;
                    unsigned int* ptr7 = ptr4;
                    unsigned int* ptr8 = ptr6 + 1;
                    char v78 = ptr8 ? 0: 1;
                    char v79 = (int)ptr8 < 0;
                    char v80 = __parity__((unsigned char)ptr8);
                    char v81 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr7 ^ 0x4) ^ (int)ptr8) >>> 4) & 0x1);
                    char v82 = (unsigned int)ptr7 >= 0xfffffffc;
                    char v83 = (int)(int*)((int)(int*)((int)ptr8 ^ (int)ptr7) & (int*)~(int)(int*)((int)ptr7 ^ 0x4)) < 0;
                    unsigned int v84 = caml_modify(ptr8, v77);
                    int* ptr9 = &v21;
                    char v85 = &ptr0 == 28;
                    char v86 = &v9 >= 0x80000000;
                    char v87 = __parity__((unsigned char)&ptr0 - 28);
                    char v88 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v21 ^ 0x8) ^ &v9) >>> 4) & 0x1);
                    char v89 = (unsigned int)&v21 >= 0xfffffff8;
                    char v90 = (int)(int*)((int)(int*)(&v9 ^ (int)&v21) & (int*)~(int)(int*)((int)&v21 ^ 0x8)) < 0;
                    goto loc_805A045;
                }
            }
            else {
                unsigned int v91 = v62 >>> 10;
                char v92 = (v6 >>> 9) & 0x1;
                char v93 = v69;
                char v94 = v91 ? 0: 1;
                char v95 = v91 >= 0x80000000;
                char v96 = __parity__((unsigned char)v91);
                v5 = v91 == 3;
                v4 = (int)v91 < 3;
                v3 = __parity__((unsigned char)v91 - 3);
                v2 = v91 < 3;
                v1 = (((v91 - 3) ^ v91) & (v91 ^ 0x3)) < 0;
                v0 = (((v91 - 3) ^ (v91 ^ 0x3)) >>> 4) & 0x1;
                if(!v2 && !v5) {
                    unsigned int v97 = v17;
                    char v98 = 6;
                    v60 = *(double*)v97;
                    *(long long*)&ptr4[2] = v60;
                    v61 = 7;
                loc_805A045:
                    unsigned int v99 = ptr4[-1];
                    unsigned int v100 = ptr4[-1];
                    unsigned int v101 = (unsigned int)(unsigned char)v100;
                    char v102 = v101 == 254;
                    char v103 = (int)v101 < 254;
                    char v104 = __parity__((unsigned char)v101 - 254);
                    char v105 = v101 < 254;
                    char v106 = (((v101 - 254) ^ v101) & (v101 ^ 0xfe)) < 0;
                    char v107 = (((v101 - 254) ^ (v101 ^ 0xfe)) >>> 4) & 0x1;
                    v6 = v99;
                    if(!v102) {
                        unsigned int v108 = v99 >>> 9;
                        char v109 = (v6 >>> 8) & 0x1;
                        char v110 = v106;
                        char v111 = v108 ? 0: 1;
                        char v112 = v108 >= 0x80000000;
                        char v113 = __parity__((unsigned char)v108);
                        v5 = v108 == 5;
                        v4 = (int)v108 < 5;
                        v3 = __parity__((unsigned char)v108 - 5);
                        v2 = v108 < 5;
                        v1 = (((v108 - 5) ^ v108) & (v108 ^ 0x5)) < 0;
                        v0 = (((v108 - 5) ^ (v108 ^ 0x5)) >>> 4) & 0x1;
                        if(!v2 && !v5) {
                            unsigned int v114 = v18;
                            unsigned int* ptr10 = ptr4;
                            unsigned int* ptr11 = ptr4;
                            unsigned int* ptr12 = ptr10 + 2;
                            char v115 = ptr12 ? 0: 1;
                            char v116 = (int)ptr12 < 0;
                            char v117 = __parity__((unsigned char)ptr12);
                            char v118 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr11 ^ 0x8) ^ (int)ptr12) >>> 4) & 0x1);
                            char v119 = (unsigned int)ptr11 >= 0xfffffff8;
                            char v120 = (int)(int*)((int)(int*)((int)ptr12 ^ (int)ptr11) & (int*)~(int)(int*)((int)ptr11 ^ 0x8)) < 0;
                            unsigned int v121 = caml_modify(ptr12, v114);
                            int* ptr13 = &v21;
                            char v122 = &ptr0 == 28;
                            char v123 = &v9 >= 0x80000000;
                            char v124 = __parity__((unsigned char)&ptr0 - 28);
                            char v125 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v21 ^ 0x8) ^ &v9) >>> 4) & 0x1);
                            char v126 = (unsigned int)&v21 >= 0xfffffff8;
                            char v127 = (int)(int*)((int)(int*)(&v9 ^ (int)&v21) & (int*)~(int)(int*)((int)&v21 ^ 0x8)) < 0;
                            goto loc_805A091;
                        }
                    }
                    else {
                        unsigned int v128 = v99 >>> 10;
                        char v129 = (v6 >>> 9) & 0x1;
                        char v130 = v106;
                        char v131 = v128 ? 0: 1;
                        char v132 = v128 >= 0x80000000;
                        char v133 = __parity__((unsigned char)v128);
                        v5 = v128 == 5;
                        v4 = (int)v128 < 5;
                        v3 = __parity__((unsigned char)v128 - 5);
                        v2 = v128 < 5;
                        v1 = (((v128 - 5) ^ v128) & (v128 ^ 0x5)) < 0;
                        v0 = (((v128 - 5) ^ (v128 ^ 0x5)) >>> 4) & 0x1;
                        if(!v2 && !v5) {
                            unsigned int v134 = v18;
                            char v135 = 6;
                            v60 = *(double*)v134;
                            *(long long*)&ptr4[4] = v60;
                            v61 = 7;
                        loc_805A091:
                            unsigned int v136 = ptr4[-1];
                            unsigned int v137 = ptr4[-1];
                            unsigned int v138 = (unsigned int)(unsigned char)v137;
                            char v139 = v138 == 254;
                            char v140 = (int)v138 < 254;
                            char v141 = __parity__((unsigned char)v138 - 254);
                            char v142 = v138 < 254;
                            char v143 = (((v138 - 254) ^ v138) & (v138 ^ 0xfe)) < 0;
                            char v144 = (((v138 - 254) ^ (v138 ^ 0xfe)) >>> 4) & 0x1;
                            v6 = v136;
                            if(!v139) {
                                unsigned int v145 = v136 >>> 9;
                                char v146 = (v6 >>> 8) & 0x1;
                                char v147 = v143;
                                char v148 = v145 ? 0: 1;
                                char v149 = v145 >= 0x80000000;
                                char v150 = __parity__((unsigned char)v145);
                                v5 = v145 == 7;
                                v4 = (int)v145 < 7;
                                v3 = __parity__((unsigned char)v145 - 7);
                                v2 = v145 < 7;
                                v1 = (((v145 - 7) ^ v145) & (v145 ^ 0x7)) < 0;
                                v0 = (((v145 - 7) ^ (v145 ^ 0x7)) >>> 4) & 0x1;
                                if(!v2 && !v5) {
                                    caml_modify(ptr4 + 3, v19);
                                    caml_apply2(*(int*)(v9 + 12));
                                    return result;
                                }
                            }
                            else {
                                unsigned int v151 = v136 >>> 10;
                                char v152 = (v6 >>> 9) & 0x1;
                                char v153 = v143;
                                char v154 = v151 ? 0: 1;
                                char v155 = v151 >= 0x80000000;
                                char v156 = __parity__((unsigned char)v151);
                                v5 = v151 == 7;
                                v4 = (int)v151 < 7;
                                v3 = __parity__((unsigned char)v151 - 7);
                                v2 = v151 < 7;
                                v1 = (((v151 - 7) ^ v151) & (v151 ^ 0x7)) < 0;
                                v0 = (((v151 - 7) ^ (v151 ^ 0x7)) >>> 4) & 0x1;
                                if(!v2 && !v5) {
                                    *(long long*)&ptr4[6] = *(double*)v19;
                                    caml_apply2(*(int*)(v9 + 12));
                                    return result;
                                }
                                int v157 = caml_ml_array_bound_error(v9, (int)v19, (int)v18, (int)v17);
                            }
                            int v158 = caml_ml_array_bound_error(v9, (int)v19, (int)v18, (int)v17);
                        }
                        int v159 = caml_ml_array_bound_error(v9, (int)v19, (int)v18, (int)v17);
                    }
                    int v160 = caml_ml_array_bound_error(v9, (int)v19, (int)v18, (int)v17);
                }
                int v161 = caml_ml_array_bound_error(v9, (int)v19, (int)v18, (int)v17);
            }
            int v162 = caml_ml_array_bound_error(v9, (int)v19, (int)v18, (int)v17);
        }
        int v163 = caml_ml_array_bound_error(v9, (int)v19, (int)v18, (int)v17);
    }
    result = (unsigned int)/*BAD_CALL!*/ caml_ml_array_bound_error(v9, (int)v19, (int)v18, (int)v17);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlPrintf__fun_1584(unsigned int param0, unsigned int param1) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    unsigned int v6;
    char v7;
    __SyntheticTypeUnknownF v8;
    void* ptr0;
    void* ptr1;
    unsigned int v9;
    unsigned int result;
    void* ptr2;
    unsigned int v10;
    unsigned int v11;
    int* ptr3 = &ptr0;
    char v12 = &ptr0 == 32;
    char v13 = &ptr1 >= 0x80000000;
    char v14 = __parity__((unsigned char)&ptr0 - 32);
    char v15 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x20) ^ &ptr1) >>> 4) & 0x1);
    char v16 = (unsigned int)&ptr0 < 32;
    char v17 = (int)(int*)((int)(int*)(&ptr1 ^ (int)&ptr0) & (int)(int*)((int)&ptr0 ^ 0x20)) < 0;
    unsigned int v18 = result;
    unsigned int v19 = v11;
    unsigned int v20 = param0;
    unsigned int v21 = param1;
    unsigned int v22 = v9;
    ptr1 = ptr2;
    int v23 = 1;
    int v24 = 11;
    int v25 = &caml_make_vect;
    unsigned int* ptr4 = (unsigned int*)caml_c_call();
    int* ptr5 = &v24;
    char v26 = &ptr0 == 32;
    char v27 = &ptr1 >= 0x80000000;
    char v28 = __parity__((unsigned char)&ptr0 - 32);
    char v29 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v24 ^ 0x8) ^ &ptr1) >>> 4) & 0x1);
    char v30 = (unsigned int)&v24 >= 0xfffffff8;
    char v31 = (int)(int*)((int)(int*)(&ptr1 ^ (int)&v24) & (int*)~(int)(int*)((int)&v24 ^ 0x8)) < 0;
    unsigned int* ptr6 = ptr4;
    unsigned int v32 = ptr6[-1];
    unsigned int v33 = ptr6[-1];
    unsigned int v34 = (unsigned int)(unsigned char)v33;
    char v35 = v34 == 254;
    char v36 = (int)v34 < 254;
    char v37 = __parity__((unsigned char)v34 - 254);
    char v38 = v34 < 254;
    char v39 = (((v34 - 254) ^ v34) & (v34 ^ 0xfe)) < 0;
    char v40 = (((v34 - 254) ^ (v34 ^ 0xfe)) >>> 4) & 0x1;
    if(!v35) {
        unsigned int v41 = v32;
        unsigned int v42 = v32 >>> 9;
        char v43 = (v41 >>> 8) & 0x1;
        char v44 = v39;
        char v45 = v42 ? 0: 1;
        char v46 = v42 >= 0x80000000;
        char v47 = __parity__((unsigned char)v42);
        char v48 = v42 == 1;
        char v49 = (int)v42 < 1;
        char v50 = __parity__((unsigned char)v42 - 1);
        char v51 = v42 < 1;
        char v52 = (((v42 - 1) ^ v42) & (v42 ^ 0x1)) < 0;
        char v53 = (((v42 - 1) ^ (v42 ^ 0x1)) >>> 4) & 0x1;
        if(!v51 && !v48) {
            unsigned int v54 = v18;
            unsigned int v55 = caml_modify(ptr6, v54);
            int* ptr7 = &v24;
            char v56 = &ptr0 == 32;
            char v57 = &ptr1 >= 0x80000000;
            char v58 = __parity__((unsigned char)&ptr0 - 32);
            char v59 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v24 ^ 0x8) ^ &ptr1) >>> 4) & 0x1);
            char v60 = (unsigned int)&v24 >= 0xfffffff8;
            char v61 = (int)(int*)((int)(int*)(&ptr1 ^ (int)&v24) & (int*)~(int)(int*)((int)&v24 ^ 0x8)) < 0;
            goto loc_8059DF4;
        }
    }
    else {
        unsigned int v62 = v32;
        unsigned int v63 = v32 >>> 10;
        char v64 = (v62 >>> 9) & 0x1;
        char v65 = v39;
        char v66 = v63 ? 0: 1;
        char v67 = v63 >= 0x80000000;
        char v68 = __parity__((unsigned char)v63);
        char v69 = v63 == 1;
        char v70 = (int)v63 < 1;
        char v71 = __parity__((unsigned char)v63 - 1);
        char v72 = v63 < 1;
        char v73 = (((v63 - 1) ^ v63) & (v63 ^ 0x1)) < 0;
        char v74 = (((v63 - 1) ^ (v63 ^ 0x1)) >>> 4) & 0x1;
        if(!v72 && !v69) {
            unsigned int v75 = v18;
            char v76 = 6;
            v8 = *(double*)v75;
            *(long long*)&ptr6[0] = v8;
            v7 = 7;
        loc_8059DF4:
            unsigned int v77 = ptr6[-1];
            unsigned int v78 = ptr6[-1];
            unsigned int v79 = (unsigned int)(unsigned char)v78;
            char v80 = v79 == 254;
            char v81 = (int)v79 < 254;
            char v82 = __parity__((unsigned char)v79 - 254);
            char v83 = v79 < 254;
            char v84 = (((v79 - 254) ^ v79) & (v79 ^ 0xfe)) < 0;
            char v85 = (((v79 - 254) ^ (v79 ^ 0xfe)) >>> 4) & 0x1;
            if(!v80) {
                unsigned int v86 = v77;
                unsigned int v87 = v77 >>> 9;
                char v88 = (v86 >>> 8) & 0x1;
                char v89 = v84;
                char v90 = v87 ? 0: 1;
                char v91 = v87 >= 0x80000000;
                char v92 = __parity__((unsigned char)v87);
                char v93 = v87 == 3;
                char v94 = (int)v87 < 3;
                char v95 = __parity__((unsigned char)v87 - 3);
                char v96 = v87 < 3;
                char v97 = (((v87 - 3) ^ v87) & (v87 ^ 0x3)) < 0;
                char v98 = (((v87 - 3) ^ (v87 ^ 0x3)) >>> 4) & 0x1;
                if(!v96 && !v93) {
                    unsigned int v99 = v19;
                    unsigned int* ptr8 = ptr6;
                    unsigned int* ptr9 = ptr6;
                    unsigned int* ptr10 = ptr8 + 1;
                    char v100 = ptr10 ? 0: 1;
                    char v101 = (int)ptr10 < 0;
                    char v102 = __parity__((unsigned char)ptr10);
                    char v103 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr9 ^ 0x4) ^ (int)ptr10) >>> 4) & 0x1);
                    char v104 = (unsigned int)ptr9 >= 0xfffffffc;
                    char v105 = (int)(int*)((int)(int*)((int)ptr10 ^ (int)ptr9) & (int*)~(int)(int*)((int)ptr9 ^ 0x4)) < 0;
                    unsigned int v106 = caml_modify(ptr10, v99);
                    int* ptr11 = &v24;
                    char v107 = &ptr0 == 32;
                    char v108 = &ptr1 >= 0x80000000;
                    char v109 = __parity__((unsigned char)&ptr0 - 32);
                    char v110 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v24 ^ 0x8) ^ &ptr1) >>> 4) & 0x1);
                    char v111 = (unsigned int)&v24 >= 0xfffffff8;
                    char v112 = (int)(int*)((int)(int*)(&ptr1 ^ (int)&v24) & (int*)~(int)(int*)((int)&v24 ^ 0x8)) < 0;
                    goto loc_8059E45;
                }
            }
            else {
                unsigned int v113 = v77;
                unsigned int v114 = v77 >>> 10;
                char v115 = (v113 >>> 9) & 0x1;
                char v116 = v84;
                char v117 = v114 ? 0: 1;
                char v118 = v114 >= 0x80000000;
                char v119 = __parity__((unsigned char)v114);
                char v120 = v114 == 3;
                char v121 = (int)v114 < 3;
                char v122 = __parity__((unsigned char)v114 - 3);
                char v123 = v114 < 3;
                char v124 = (((v114 - 3) ^ v114) & (v114 ^ 0x3)) < 0;
                char v125 = (((v114 - 3) ^ (v114 ^ 0x3)) >>> 4) & 0x1;
                if(!v123 && !v120) {
                    unsigned int v126 = v19;
                    char v127 = 6;
                    v8 = *(double*)v126;
                    *(long long*)&ptr6[2] = v8;
                    v7 = 7;
                loc_8059E45:
                    unsigned int v128 = ptr6[-1];
                    unsigned int v129 = ptr6[-1];
                    unsigned int v130 = (unsigned int)(unsigned char)v129;
                    char v131 = v130 == 254;
                    char v132 = (int)v130 < 254;
                    char v133 = __parity__((unsigned char)v130 - 254);
                    char v134 = v130 < 254;
                    char v135 = (((v130 - 254) ^ v130) & (v130 ^ 0xfe)) < 0;
                    char v136 = (((v130 - 254) ^ (v130 ^ 0xfe)) >>> 4) & 0x1;
                    if(!v131) {
                        unsigned int v137 = v128;
                        unsigned int v138 = v128 >>> 9;
                        char v139 = (v137 >>> 8) & 0x1;
                        char v140 = v135;
                        char v141 = v138 ? 0: 1;
                        char v142 = v138 >= 0x80000000;
                        char v143 = __parity__((unsigned char)v138);
                        char v144 = v138 == 5;
                        char v145 = (int)v138 < 5;
                        char v146 = __parity__((unsigned char)v138 - 5);
                        char v147 = v138 < 5;
                        char v148 = (((v138 - 5) ^ v138) & (v138 ^ 0x5)) < 0;
                        char v149 = (((v138 - 5) ^ (v138 ^ 0x5)) >>> 4) & 0x1;
                        if(!v147 && !v144) {
                            unsigned int v150 = v20;
                            unsigned int* ptr12 = ptr6;
                            unsigned int* ptr13 = ptr6;
                            unsigned int* ptr14 = ptr12 + 2;
                            char v151 = ptr14 ? 0: 1;
                            char v152 = (int)ptr14 < 0;
                            char v153 = __parity__((unsigned char)ptr14);
                            char v154 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr13 ^ 0x8) ^ (int)ptr14) >>> 4) & 0x1);
                            char v155 = (unsigned int)ptr13 >= 0xfffffff8;
                            char v156 = (int)(int*)((int)(int*)((int)ptr14 ^ (int)ptr13) & (int*)~(int)(int*)((int)ptr13 ^ 0x8)) < 0;
                            unsigned int v157 = caml_modify(ptr14, v150);
                            int* ptr15 = &v24;
                            char v158 = &ptr0 == 32;
                            char v159 = &ptr1 >= 0x80000000;
                            char v160 = __parity__((unsigned char)&ptr0 - 32);
                            char v161 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v24 ^ 0x8) ^ &ptr1) >>> 4) & 0x1);
                            char v162 = (unsigned int)&v24 >= 0xfffffff8;
                            char v163 = (int)(int*)((int)(int*)(&ptr1 ^ (int)&v24) & (int*)~(int)(int*)((int)&v24 ^ 0x8)) < 0;
                            goto loc_8059E95;
                        }
                    }
                    else {
                        unsigned int v164 = v128;
                        unsigned int v165 = v128 >>> 10;
                        char v166 = (v164 >>> 9) & 0x1;
                        char v167 = v135;
                        char v168 = v165 ? 0: 1;
                        char v169 = v165 >= 0x80000000;
                        char v170 = __parity__((unsigned char)v165);
                        char v171 = v165 == 5;
                        char v172 = (int)v165 < 5;
                        char v173 = __parity__((unsigned char)v165 - 5);
                        char v174 = v165 < 5;
                        char v175 = (((v165 - 5) ^ v165) & (v165 ^ 0x5)) < 0;
                        char v176 = (((v165 - 5) ^ (v165 ^ 0x5)) >>> 4) & 0x1;
                        if(!v174 && !v171) {
                            unsigned int v177 = v20;
                            char v178 = 6;
                            v8 = *(double*)v177;
                            *(long long*)&ptr6[4] = v8;
                            v7 = 7;
                        loc_8059E95:
                            unsigned int v179 = ptr6[-1];
                            unsigned int v180 = ptr6[-1];
                            unsigned int v181 = (unsigned int)(unsigned char)v180;
                            char v182 = v181 == 254;
                            char v183 = (int)v181 < 254;
                            char v184 = __parity__((unsigned char)v181 - 254);
                            char v185 = v181 < 254;
                            char v186 = (((v181 - 254) ^ v181) & (v181 ^ 0xfe)) < 0;
                            char v187 = (((v181 - 254) ^ (v181 ^ 0xfe)) >>> 4) & 0x1;
                            if(!v182) {
                                unsigned int v188 = v179;
                                unsigned int v189 = v179 >>> 9;
                                char v190 = (v188 >>> 8) & 0x1;
                                char v191 = v186;
                                char v192 = v189 ? 0: 1;
                                char v193 = v189 >= 0x80000000;
                                char v194 = __parity__((unsigned char)v189);
                                char v195 = v189 == 7;
                                char v196 = (int)v189 < 7;
                                char v197 = __parity__((unsigned char)v189 - 7);
                                char v198 = v189 < 7;
                                char v199 = (((v189 - 7) ^ v189) & (v189 ^ 0x7)) < 0;
                                char v200 = (((v189 - 7) ^ (v189 ^ 0x7)) >>> 4) & 0x1;
                                if(!v198 && !v195) {
                                    unsigned int* ptr16 = ptr6 + 3;
                                    char v201 = ptr16 ? 0: 1;
                                    char v202 = (int)ptr16 < 0;
                                    char v203 = __parity__((unsigned char)ptr16);
                                    char v204 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr6 ^ 0xc) ^ (int)ptr16) >>> 4) & 0x1);
                                    char v205 = (unsigned int)ptr6 >= 0xfffffff4;
                                    char v206 = (int)(int*)((int)(int*)((int)ptr16 ^ (int)ptr6) & (int*)~(int)(int*)((int)ptr6 ^ 0xc)) < 0;
                                    unsigned int v207 = caml_modify(ptr16, v21);
                                    int* ptr17 = &v24;
                                    char v208 = &ptr0 == 32;
                                    char v209 = &ptr1 >= 0x80000000;
                                    char v210 = __parity__((unsigned char)&ptr0 - 32);
                                    char v211 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v24 ^ 0x8) ^ &ptr1) >>> 4) & 0x1);
                                    char v212 = (unsigned int)&v24 >= 0xfffffff8;
                                    char v213 = (int)(int*)((int)(int*)(&ptr1 ^ (int)&v24) & (int*)~(int)(int*)((int)&v24 ^ 0x8)) < 0;
                                    goto loc_8059EE1;
                                }
                            }
                            else {
                                unsigned int v214 = v179;
                                unsigned int v215 = v179 >>> 10;
                                char v216 = (v214 >>> 9) & 0x1;
                                char v217 = v186;
                                char v218 = v215 ? 0: 1;
                                char v219 = v215 >= 0x80000000;
                                char v220 = __parity__((unsigned char)v215);
                                char v221 = v215 == 7;
                                char v222 = (int)v215 < 7;
                                char v223 = __parity__((unsigned char)v215 - 7);
                                char v224 = v215 < 7;
                                char v225 = (((v215 - 7) ^ v215) & (v215 ^ 0x7)) < 0;
                                char v226 = (((v215 - 7) ^ (v215 ^ 0x7)) >>> 4) & 0x1;
                                if(!v224 && !v221) {
                                    char v227 = 6;
                                    v8 = *(double*)v21;
                                    *(long long*)&ptr6[6] = v8;
                                    v7 = 7;
                                loc_8059EE1:
                                    unsigned int v228 = ptr6[-1];
                                    unsigned int v229 = (unsigned int)(unsigned char)ptr6[-1];
                                    char v230 = (int)v229 < 254;
                                    char v231 = __parity__((unsigned char)v229 - 254);
                                    char v232 = v229 < 254;
                                    char v233 = (((v229 - 254) ^ v229) & (v229 ^ 0xfe)) < 0;
                                    char v234 = (((v229 - 254) ^ (v229 ^ 0xfe)) >>> 4) & 0x1;
                                    if(v229 != 254) {
                                        unsigned int v235 = v228 >>> 9;
                                        char v236 = (v228 >>> 8) & 0x1;
                                        char v237 = v233;
                                        char v238 = v235 ? 0: 1;
                                        char v239 = v235 >= 0x80000000;
                                        char v240 = __parity__((unsigned char)v235);
                                        char v241 = (int)v235 < 9;
                                        char v242 = __parity__((unsigned char)v235 - 9);
                                        char v243 = (((v235 - 9) ^ v235) & (v235 ^ 0x9)) < 0;
                                        char v244 = (((v235 - 9) ^ (v235 ^ 0x9)) >>> 4) & 0x1;
                                        if(v235 > 9) {
                                            caml_modify(ptr6 + 4, v22);
                                            caml_apply2(*(int*)((int)ptr1 + 12));
                                            return result;
                                        }
                                    }
                                    else {
                                        unsigned int v245 = v228 >>> 10;
                                        char v246 = (v228 >>> 9) & 0x1;
                                        char v247 = v233;
                                        char v248 = v245 ? 0: 1;
                                        char v249 = v245 >= 0x80000000;
                                        char v250 = __parity__((unsigned char)v245);
                                        char v251 = (int)v245 < 9;
                                        char v252 = __parity__((unsigned char)v245 - 9);
                                        char v253 = (((v245 - 9) ^ v245) & (v245 ^ 0x9)) < 0;
                                        char v254 = (((v245 - 9) ^ (v245 ^ 0x9)) >>> 4) & 0x1;
                                        if(v245 > 9) {
                                            *(long long*)&ptr6[8] = *(double*)v22;
                                            caml_apply2(*(int*)((int)ptr1 + 12));
                                            return result;
                                        }
                                        int v255 = caml_ml_array_bound_error((int)ptr1, (int)v22, (int)v21, (int)v20);
                                    }
                                    int v256 = caml_ml_array_bound_error((int)ptr1, (int)v22, (int)v21, (int)v20);
                                }
                                int v257 = caml_ml_array_bound_error((int)ptr1, (int)v22, (int)v21, (int)v20);
                            }
                            int v258 = caml_ml_array_bound_error((int)ptr1, (int)v22, (int)v21, (int)v20);
                        }
                        int v259 = caml_ml_array_bound_error((int)ptr1, (int)v22, (int)v21, (int)v20);
                    }
                    int v260 = caml_ml_array_bound_error((int)ptr1, (int)v22, (int)v21, (int)v20);
                }
                int v261 = caml_ml_array_bound_error((int)ptr1, (int)v22, (int)v21, (int)v20);
            }
            int v262 = caml_ml_array_bound_error((int)ptr1, (int)v22, (int)v21, (int)v20);
        }
        int v263 = caml_ml_array_bound_error((int)ptr1, (int)v22, (int)v21, (int)v20);
    }
    void* ptr18 = (void*)caml_ml_array_bound_error((int)ptr1, (int)v22, (int)v21, (int)v20);
    unsigned int v264 = &ptr1;
    char v265 = &ptr0 == 60;
    char v266 = &v10 >= 0x80000000;
    char v267 = __parity__((unsigned char)&ptr0 - 60);
    char v268 = (int*)((int)(int*)((int)(int*)((int)(int*)(&ptr1 ^ 0x1c) ^ &v10) >>> 4) & 0x1);
    char v269 = &ptr1 < 28;
    char v270 = (int)(int*)((int)(int*)(&ptr1 ^ &v10) & (int)(int*)(&ptr1 ^ 0x1c)) < 0;
    void* ptr19 = ptr18;
    unsigned int* ptr20 = ptr6;
    unsigned int v271 = param0;
    unsigned int v272 = param1;
    v10 = v9;
    int v273 = 1;
    int v274 = 9;
    int v275 = &caml_make_vect;
    unsigned int* ptr21 = (unsigned int*)caml_c_call();
    int* ptr22 = &v274;
    char v276 = &ptr0 == 60;
    char v277 = &v10 >= 0x80000000;
    char v278 = __parity__((unsigned char)&ptr0 - 60);
    char v279 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v274 ^ 0x8) ^ &v10) >>> 4) & 0x1);
    char v280 = (unsigned int)&v274 >= 0xfffffff8;
    char v281 = (int)(int*)((int)(int*)(&v10 ^ (int)&v274) & (int*)~(int)(int*)((int)&v274 ^ 0x8)) < 0;
    ptr6 = ptr21;
    unsigned int v282 = ptr6[-1];
    unsigned int v283 = ptr6[-1];
    unsigned int v284 = (unsigned int)(unsigned char)v283;
    char v285 = v284 == 254;
    char v286 = (int)v284 < 254;
    char v287 = __parity__((unsigned char)v284 - 254);
    char v288 = v284 < 254;
    char v289 = (((v284 - 254) ^ v284) & (v284 ^ 0xfe)) < 0;
    char v290 = (((v284 - 254) ^ (v284 ^ 0xfe)) >>> 4) & 0x1;
    if(!v285) {
        v6 = v282;
        unsigned int v291 = v282 >>> 9;
        char v292 = (v6 >>> 8) & 0x1;
        char v293 = v289;
        char v294 = v291 ? 0: 1;
        char v295 = v291 >= 0x80000000;
        char v296 = __parity__((unsigned char)v291);
        v5 = v291 == 1;
        v4 = (int)v291 < 1;
        v3 = __parity__((unsigned char)v291 - 1);
        v2 = v291 < 1;
        v1 = (((v291 - 1) ^ v291) & (v291 ^ 0x1)) < 0;
        v0 = (((v291 - 1) ^ (v291 ^ 0x1)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            unsigned int v297 = (unsigned int)ptr19;
            unsigned int v298 = caml_modify(ptr6, v297);
            int* ptr23 = &v274;
            char v299 = &ptr0 == 60;
            char v300 = &v10 >= 0x80000000;
            char v301 = __parity__((unsigned char)&ptr0 - 60);
            char v302 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v274 ^ 0x8) ^ &v10) >>> 4) & 0x1);
            char v303 = (unsigned int)&v274 >= 0xfffffff8;
            char v304 = (int)(int*)((int)(int*)(&v10 ^ (int)&v274) & (int*)~(int)(int*)((int)&v274 ^ 0x8)) < 0;
            goto loc_8059FF4;
        }
    }
    else {
        v6 = v282;
        unsigned int v305 = v282 >>> 10;
        char v306 = (v6 >>> 9) & 0x1;
        char v307 = v289;
        char v308 = v305 ? 0: 1;
        char v309 = v305 >= 0x80000000;
        char v310 = __parity__((unsigned char)v305);
        v5 = v305 == 1;
        v4 = (int)v305 < 1;
        v3 = __parity__((unsigned char)v305 - 1);
        v2 = v305 < 1;
        v1 = (((v305 - 1) ^ v305) & (v305 ^ 0x1)) < 0;
        v0 = (((v305 - 1) ^ (v305 ^ 0x1)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            void* ptr24 = ptr19;
            char v311 = 6;
            v8 = *(double*)ptr24;
            *(long long*)&ptr6[0] = v8;
            v7 = 7;
        loc_8059FF4:
            unsigned int v312 = ptr6[-1];
            unsigned int v313 = ptr6[-1];
            unsigned int v314 = (unsigned int)(unsigned char)v313;
            char v315 = v314 == 254;
            char v316 = (int)v314 < 254;
            char v317 = __parity__((unsigned char)v314 - 254);
            char v318 = v314 < 254;
            char v319 = (((v314 - 254) ^ v314) & (v314 ^ 0xfe)) < 0;
            char v320 = (((v314 - 254) ^ (v314 ^ 0xfe)) >>> 4) & 0x1;
            v6 = v312;
            if(!v315) {
                unsigned int v321 = v312 >>> 9;
                char v322 = (v6 >>> 8) & 0x1;
                char v323 = v319;
                char v324 = v321 ? 0: 1;
                char v325 = v321 >= 0x80000000;
                char v326 = __parity__((unsigned char)v321);
                v5 = v321 == 3;
                v4 = (int)v321 < 3;
                v3 = __parity__((unsigned char)v321 - 3);
                v2 = v321 < 3;
                v1 = (((v321 - 3) ^ v321) & (v321 ^ 0x3)) < 0;
                v0 = (((v321 - 3) ^ (v321 ^ 0x3)) >>> 4) & 0x1;
                if(!v2 && !v5) {
                    unsigned int v327 = (unsigned int)ptr20;
                    unsigned int* ptr25 = ptr6;
                    unsigned int* ptr26 = ptr6;
                    unsigned int* ptr27 = ptr25 + 1;
                    char v328 = ptr27 ? 0: 1;
                    char v329 = (int)ptr27 < 0;
                    char v330 = __parity__((unsigned char)ptr27);
                    char v331 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr26 ^ 0x4) ^ (int)ptr27) >>> 4) & 0x1);
                    char v332 = (unsigned int)ptr26 >= 0xfffffffc;
                    char v333 = (int)(int*)((int)(int*)((int)ptr27 ^ (int)ptr26) & (int*)~(int)(int*)((int)ptr26 ^ 0x4)) < 0;
                    unsigned int v334 = caml_modify(ptr27, v327);
                    int* ptr28 = &v274;
                    char v335 = &ptr0 == 60;
                    char v336 = &v10 >= 0x80000000;
                    char v337 = __parity__((unsigned char)&ptr0 - 60);
                    char v338 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v274 ^ 0x8) ^ &v10) >>> 4) & 0x1);
                    char v339 = (unsigned int)&v274 >= 0xfffffff8;
                    char v340 = (int)(int*)((int)(int*)(&v10 ^ (int)&v274) & (int*)~(int)(int*)((int)&v274 ^ 0x8)) < 0;
                    goto loc_805A045;
                }
            }
            else {
                unsigned int v341 = v312 >>> 10;
                char v342 = (v6 >>> 9) & 0x1;
                char v343 = v319;
                char v344 = v341 ? 0: 1;
                char v345 = v341 >= 0x80000000;
                char v346 = __parity__((unsigned char)v341);
                v5 = v341 == 3;
                v4 = (int)v341 < 3;
                v3 = __parity__((unsigned char)v341 - 3);
                v2 = v341 < 3;
                v1 = (((v341 - 3) ^ v341) & (v341 ^ 0x3)) < 0;
                v0 = (((v341 - 3) ^ (v341 ^ 0x3)) >>> 4) & 0x1;
                if(!v2 && !v5) {
                    unsigned int* ptr29 = ptr20;
                    char v347 = 6;
                    v8 = (double)*(long long*)&ptr29[0];
                    *(long long*)&ptr6[2] = v8;
                    v7 = 7;
                loc_805A045:
                    unsigned int v348 = ptr6[-1];
                    unsigned int v349 = ptr6[-1];
                    unsigned int v350 = (unsigned int)(unsigned char)v349;
                    char v351 = v350 == 254;
                    char v352 = (int)v350 < 254;
                    char v353 = __parity__((unsigned char)v350 - 254);
                    char v354 = v350 < 254;
                    char v355 = (((v350 - 254) ^ v350) & (v350 ^ 0xfe)) < 0;
                    char v356 = (((v350 - 254) ^ (v350 ^ 0xfe)) >>> 4) & 0x1;
                    v6 = v348;
                    if(!v351) {
                        unsigned int v357 = v348 >>> 9;
                        char v358 = (v6 >>> 8) & 0x1;
                        char v359 = v355;
                        char v360 = v357 ? 0: 1;
                        char v361 = v357 >= 0x80000000;
                        char v362 = __parity__((unsigned char)v357);
                        v5 = v357 == 5;
                        v4 = (int)v357 < 5;
                        v3 = __parity__((unsigned char)v357 - 5);
                        v2 = v357 < 5;
                        v1 = (((v357 - 5) ^ v357) & (v357 ^ 0x5)) < 0;
                        v0 = (((v357 - 5) ^ (v357 ^ 0x5)) >>> 4) & 0x1;
                        if(!v2 && !v5) {
                            unsigned int v363 = v271;
                            unsigned int* ptr30 = ptr6;
                            unsigned int* ptr31 = ptr6;
                            unsigned int* ptr32 = ptr30 + 2;
                            char v364 = ptr32 ? 0: 1;
                            char v365 = (int)ptr32 < 0;
                            char v366 = __parity__((unsigned char)ptr32);
                            char v367 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr31 ^ 0x8) ^ (int)ptr32) >>> 4) & 0x1);
                            char v368 = (unsigned int)ptr31 >= 0xfffffff8;
                            char v369 = (int)(int*)((int)(int*)((int)ptr32 ^ (int)ptr31) & (int*)~(int)(int*)((int)ptr31 ^ 0x8)) < 0;
                            unsigned int v370 = caml_modify(ptr32, v363);
                            int* ptr33 = &v274;
                            char v371 = &ptr0 == 60;
                            char v372 = &v10 >= 0x80000000;
                            char v373 = __parity__((unsigned char)&ptr0 - 60);
                            char v374 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v274 ^ 0x8) ^ &v10) >>> 4) & 0x1);
                            char v375 = (unsigned int)&v274 >= 0xfffffff8;
                            char v376 = (int)(int*)((int)(int*)(&v10 ^ (int)&v274) & (int*)~(int)(int*)((int)&v274 ^ 0x8)) < 0;
                            goto loc_805A091;
                        }
                    }
                    else {
                        unsigned int v377 = v348 >>> 10;
                        char v378 = (v6 >>> 9) & 0x1;
                        char v379 = v355;
                        char v380 = v377 ? 0: 1;
                        char v381 = v377 >= 0x80000000;
                        char v382 = __parity__((unsigned char)v377);
                        v5 = v377 == 5;
                        v4 = (int)v377 < 5;
                        v3 = __parity__((unsigned char)v377 - 5);
                        v2 = v377 < 5;
                        v1 = (((v377 - 5) ^ v377) & (v377 ^ 0x5)) < 0;
                        v0 = (((v377 - 5) ^ (v377 ^ 0x5)) >>> 4) & 0x1;
                        if(!v2 && !v5) {
                            unsigned int v383 = v271;
                            char v384 = 6;
                            v8 = *(double*)v383;
                            *(long long*)&ptr6[4] = v8;
                            v7 = 7;
                        loc_805A091:
                            unsigned int v385 = ptr6[-1];
                            unsigned int v386 = ptr6[-1];
                            unsigned int v387 = (unsigned int)(unsigned char)v386;
                            char v388 = v387 == 254;
                            char v389 = (int)v387 < 254;
                            char v390 = __parity__((unsigned char)v387 - 254);
                            char v391 = v387 < 254;
                            char v392 = (((v387 - 254) ^ v387) & (v387 ^ 0xfe)) < 0;
                            char v393 = (((v387 - 254) ^ (v387 ^ 0xfe)) >>> 4) & 0x1;
                            v6 = v385;
                            if(!v388) {
                                unsigned int v394 = v385 >>> 9;
                                char v395 = (v6 >>> 8) & 0x1;
                                char v396 = v392;
                                char v397 = v394 ? 0: 1;
                                char v398 = v394 >= 0x80000000;
                                char v399 = __parity__((unsigned char)v394);
                                v5 = v394 == 7;
                                v4 = (int)v394 < 7;
                                v3 = __parity__((unsigned char)v394 - 7);
                                v2 = v394 < 7;
                                v1 = (((v394 - 7) ^ v394) & (v394 ^ 0x7)) < 0;
                                v0 = (((v394 - 7) ^ (v394 ^ 0x7)) >>> 4) & 0x1;
                                if(!v2 && !v5) {
                                    unsigned int v400 = v272;
                                    unsigned int* ptr34 = ptr6;
                                    unsigned int* ptr35 = ptr6;
                                    unsigned int* ptr36 = ptr34 + 3;
                                    char v401 = ptr36 ? 0: 1;
                                    char v402 = (int)ptr36 < 0;
                                    char v403 = __parity__((unsigned char)ptr36);
                                    char v404 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr35 ^ 0xc) ^ (int)ptr36) >>> 4) & 0x1);
                                    char v405 = (unsigned int)ptr35 >= 0xfffffff4;
                                    char v406 = (int)(int*)((int)(int*)((int)ptr36 ^ (int)ptr35) & (int*)~(int)(int*)((int)ptr35 ^ 0xc)) < 0;
                                    unsigned int v407 = caml_modify(ptr36, v400);
                                    int* ptr37 = &v274;
                                    char v408 = &ptr0 == 60;
                                    char v409 = &v10 >= 0x80000000;
                                    char v410 = __parity__((unsigned char)&ptr0 - 60);
                                    char v411 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v274 ^ 0x8) ^ &v10) >>> 4) & 0x1);
                                    char v412 = (unsigned int)&v274 >= 0xfffffff8;
                                    char v413 = (int)(int*)((int)(int*)(&v10 ^ (int)&v274) & (int*)~(int)(int*)((int)&v274 ^ 0x8)) < 0;
                                    goto loc_805A0E1;
                                }
                            }
                            else {
                                unsigned int v414 = v385 >>> 10;
                                char v415 = (v6 >>> 9) & 0x1;
                                char v416 = v392;
                                char v417 = v414 ? 0: 1;
                                char v418 = v414 >= 0x80000000;
                                char v419 = __parity__((unsigned char)v414);
                                v5 = v414 == 7;
                                v4 = (int)v414 < 7;
                                v3 = __parity__((unsigned char)v414 - 7);
                                v2 = v414 < 7;
                                v1 = (((v414 - 7) ^ v414) & (v414 ^ 0x7)) < 0;
                                v0 = (((v414 - 7) ^ (v414 ^ 0x7)) >>> 4) & 0x1;
                                if(!v2 && !v5) {
                                    unsigned int v420 = v272;
                                    char v421 = 6;
                                    v8 = *(double*)v420;
                                    *(long long*)&ptr6[6] = v8;
                                    v7 = 7;
                                loc_805A0E1:
                                    unsigned int v422 = v10;
                                    int v423 = *(int*)(v422 + 12);
                                    int v424 = *(int*)(v422 + 16);
                                    v6 = &v10;
                                    v5 = &ptr0 == 32;
                                    v4 = &ptr1 >= 0x80000000;
                                    v3 = __parity__((unsigned char)&ptr0 - 32);
                                    v0 = (int*)((int)(int*)((int)(int*)((&v10 ^ 0x1c) ^ &ptr1) >>> 4) & 0x1);
                                    v2 = &v10 >= 0xffffffe4;
                                    v1 = (int)(int*)((int)(int*)(&ptr1 ^ &v10) & ~(&v10 ^ 0x1c)) < 0;
                                    /*BAD_CALL!*/ caml_apply2(v423);
                                }
                                int v425 = caml_ml_array_bound_error((int)v10, (int)v272, (int)v271, (int)ptr20);
                            }
                            int v426 = caml_ml_array_bound_error((int)v10, (int)v272, (int)v271, (int)ptr20);
                        }
                        int v427 = caml_ml_array_bound_error((int)v10, (int)v272, (int)v271, (int)ptr20);
                    }
                    int v428 = caml_ml_array_bound_error((int)v10, (int)v272, (int)v271, (int)ptr20);
                }
                int v429 = caml_ml_array_bound_error((int)v10, (int)v272, (int)v271, (int)ptr20);
            }
            int v430 = caml_ml_array_bound_error((int)v10, (int)v272, (int)v271, (int)ptr20);
        }
        int v431 = caml_ml_array_bound_error((int)v10, (int)v272, (int)v271, (int)ptr20);
    }
    result = (unsigned int)/*BAD_CALL!*/ caml_ml_array_bound_error((int)v10, (int)v272, (int)v271, (int)ptr20);
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlPrintf__fun_1587() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__fun_1600() {
    int result = caml_c_call();
    unsigned int v0 = (unsigned int)caml_c_call();
    if((int)v0 >= 7) {
        return result;
    }
    return camlPrintf__make_valid_float_lexeme_1270();
}

int camlPrintf__fun_1673() {
    int v0;
    return camlPrintf__doprn_1360(*(unsigned int*)(v0 + 8));
}

int camlPrintf__fun_1680() {
    int v0;
    return *(int*)(v0 + 8);
}

int camlPrintf__fun_1684() {
    return &camlPrintf__54;
}

int camlPrintf__fun_1686() {
    return 1;
}

int camlPrintf__fun_1689() {
    return 1;
}

int camlPrintf__fun_1694() {
    int v0;
    return *(int*)(v0 + 8);
}

int camlPrintf__fun_1697() {
    return 1;
}

int camlPrintf__fun_1700() {
    return 1;
}

int camlPrintf__fun_1707() {
    return 1;
}

void camlPrintf__fun_1710() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* camlPrintf__get_arg_1288(int param0) {
    int* ptr0;
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    unsigned int v7;
    __SyntheticTypeUnknown v8;
    int v9;
    char v10;
    int v11;
    void* ptr1;
    unsigned int* ptr2;
    char v12 = ptr2 == 1;
    char v13 = (int)ptr2 < 1;
    char v14 = __parity__((unsigned char)ptr2 - 1);
    char v15 = (unsigned int)ptr2 < 1;
    char v16 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr2 - 1) ^ (int)ptr2) & (int)(int*)((int)ptr2 ^ 0x1)) < 0;
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr2 - 1) ^ (int)(int*)((int)ptr2 ^ 0x1)) >>> 4) & 0x1);
    if(!v12) {
        v7 = *ptr2;
    }
    int v18 = *(int*)(v18 + 12);
    int v19 = *(int*)(v18 - 4);
    int v20 = *(int*)(v18 - 4);
    unsigned int v21 = (unsigned int)(unsigned char)v20;
    char v22 = v21 == 254;
    char v23 = (int)v21 < 254;
    char v24 = __parity__((unsigned char)v21 - 254);
    char v25 = v21 < 254;
    char v26 = (((v21 - 254) ^ v21) & (v21 ^ 0xfe)) < 0;
    char v27 = (((v21 - 254) ^ (v21 ^ 0xfe)) >>> 4) & 0x1;
    if(!v22) {
        v6 = v19;
        unsigned int v28 = (unsigned int)(v19 >>> 9);
        char v29 = (v6 >>> 8) & 0x1;
        char v30 = v26;
        char v31 = v28 ? 0: 1;
        char v32 = v28 >= 0x80000000;
        char v33 = __parity__((unsigned char)v28);
        v5 = v28 == v7;
        v4 = (int)v28 < (int)v7;
        v3 = __parity__((unsigned char)v28 - (unsigned char)v7);
        v2 = v28 < v7;
        v1 = (int)(((v28 - v7) ^ v28) & (v28 ^ v7)) < 0;
        v0 = (((v28 - v7) ^ (v28 ^ v7)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            return *(unsigned int*)(v7 * 2 + v18 - 2);
        }
    }
    else {
        v6 = v19;
        unsigned int v34 = (unsigned int)(v19 >>> 10);
        char v35 = (v6 >>> 9) & 0x1;
        char v36 = v26;
        char v37 = v34 ? 0: 1;
        char v38 = v34 >= 0x80000000;
        char v39 = __parity__((unsigned char)v34);
        v5 = v34 == v7;
        v4 = (int)v34 < (int)v7;
        v3 = __parity__((unsigned char)v34 - (unsigned char)v7);
        v2 = v34 < v7;
        v1 = (int)(((v34 - v7) ^ v34) & (v34 ^ v7)) < 0;
        v0 = (((v34 - v7) ^ (v34 ^ v7)) >>> 4) & 0x1;
        if(!v2 && !v5) {
            while(1) {
                ptr0 = (int*)(caml_young_ptr - 12);
                caml_young_ptr -= 12;
                if(caml_young_limit <= (unsigned int)ptr0) {
                    break;
                }
                else {
                    caml_call_gc(v18, (int)v21);
                }
            }
            *ptr0 = 2301;
            v8[v10 - 1] = *(double*)(v7 * 4 + v18 - 4);
            *(long long*)(ptr0 + 1) = v8[v10 - 1];
            return (long long*)(ptr0 + 1);
        }
        int v40 = caml_ml_array_bound_error((int)ptr1, v11, v9, param0);
    }
    caml_ml_array_bound_error((int)ptr1, v11, v9, param0);
    long long* ptr3 = (long long*)/*BAD_CALL!*/ camlPrintf__scan_conv_1293(v18, (int)v21);
}

int* camlPrintf__get_buff_1402() {
    return camlBuffer__create_1039();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__get_cont_1408() {
    char v0;
    int* ptr0;
    int* ptr1;
    int* ptr2;
    int* ptr3 = &v0;
    char v1 = &v0 == 8;
    char v2 = (int)&ptr0 < 0;
    char v3 = __parity__((unsigned char)&v0 - 8);
    char v4 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x8) ^ (int)&ptr0) >>> 4) & 0x1);
    char v5 = (unsigned int)&v0 < 8;
    char v6 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x8)) < 0;
    int* ptr4 = ptr1;
    int* ptr5 = ptr2;
    ptr0 = ptr2;
    int v7 = *(ptr5 + 1);
    int v8 = 1;
    int v9 = *ptr5;
    int v10 = camlString__sub_1046(v7);
    int* ptr6 = ptr0;
    *(ptr6 + 1) = 1;
    int* ptr7 = ptr4;
    int v11 = *ptr7;
    int* ptr8 = &ptr0;
    int* ptr9 = &v0;
    char v12 = &v0 ? 0: 1;
    char v13 = (int)&v0 < 0;
    char v14 = __parity__((unsigned char)&v0);
    char v15 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v0) >>> 4) & 0x1);
    char v16 = (unsigned int)&ptr0 >= 0xfffffff8;
    char v17 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x8)) < 0;
    jump v11;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__get_contents_1405() {
    int* ptr0;
    int* ptr1 = ptr0;
    int result = camlString__sub_1046(*(ptr0 + 1));
    *(ptr1 + 1) = 1;
    return result;
}

int camlPrintf__get_index_1265() {
    int v0;
    int* ptr0;
    return ptr0 != 1 ? *ptr0: v0;
}

unsigned int camlPrintf__got_spec_1297(int param0) {
    int v0;
    return camlPrintf__scan_flags_1292(*(int*)(param0 + 20), v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlPrintf__got_spec_1304(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3 = v0;
    int v4 = v1;
    int v5 = param0;
    long long* ptr1 = camlPrintf__get_arg_1288(v0);
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(param0, v2);
        }
    }
    int v6 = (int)(ptr0 + 1);
    *ptr0 = 0x800;
    *(long long**)(int)(ptr0 + 1) = ptr1;
    *(ptr0 + 2) = *(int*)(v5 + 28);
    if(v3 == 1) {
        int v7 = **(unsigned int*)(gvar_8079500 + 8)();
    }
    return camlPrintf__scan_flags_1292(v6, v4);
}

int camlPrintf__ifprintf_1389() {
    int* ptr0 = gvar_8079548;
    int v0 = &camlPrintf__44;
    int v1 = *ptr0;
    jump v1;
}

int camlPrintf__incr_ac_1187(int param0) {
    unsigned int v0;
    unsigned int v1;
    if(v0 == 229) {
        int v2 = *(int*)(param0 + 12);
        *(int*)(v2 + 8) = *(int*)(v2 + 8) + 2;
    }
    if(v1 != 1) {
        *(*(unsigned int*)(param0 + 12) + 1) = (v0 != 195 ? 3: 5) + *(int*)(*(int*)(param0 + 12) + 4) - 1;
    }
    else {
        **(unsigned int*)(param0 + 12) = (v0 != 195 ? 3: 5) + **(unsigned int*)(param0 + 12) - 1;
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlPrintf__index_of_literal_position_1044() {
    return camlPrintf__index_of_int_1037();
}

int camlPrintf__ksprintf_1411() {
    *gvar_807956C();
    unsigned int v0 = gvar_8078E74;
    unsigned int v1 = gvar_8078E70;
    caml_extra_params = gvar_8079560;
    return caml_apply6((int)v1, (int)v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__loop_1159(int param0, int param1) {
    int v0;
    unsigned int v1;
    int v2;
    unsigned int v3;
    unsigned int v4;
    int* ptr0 = &v0;
    char v5 = &v0 == 4;
    char v6 = (int)&v1 < 0;
    char v7 = __parity__((unsigned char)&v0 - 4);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&v1) >>> 4) & 0x1);
    char v9 = (unsigned int)&v0 < 4;
    char v10 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x4)) < 0;
    while(1) {
        int v11 = *(int*)(v3 + 16);
        unsigned int v12 = (unsigned int)(v11 - 4);
        char v13 = v4 == v12;
        char v14 = (int)v4 < (int)v12;
        char v15 = __parity__((unsigned char)v4 - (unsigned char)v12);
        char v16 = v4 < v12;
        char v17 = (int)(((v4 - v12) ^ v4) & (v4 ^ v12)) < 0;
        char v18 = (((v4 - v12) ^ (v4 ^ v12)) >>> 4) & 0x1;
        if(v14 == v17) {
            return 1;
        }
        v1 = v3;
        int v19 = *(int*)(v3 + 12);
        int v20 = *(int*)(v3 + 8);
        unsigned int v21 = v4;
        unsigned int v22 = v4;
        v3 = v21 >> 1;
        char v23 = v22 & 0x1;
        char v24 = 0;
        char v25 = v3 ? 0: 1;
        char v26 = v3 >= 0x80000000;
        char v27 = __parity__((unsigned char)v3);
        int v28 = *(int*)(v20 - 4);
        int v29 = *(int*)(v20 - 4);
        int v30 = v28 >>> 10;
        char v31 = (v29 >>> 9) & 0x1;
        char v32 = 0;
        char v33 = v30 ? 0: 1;
        char v34 = v30 < 0;
        char v35 = __parity__((unsigned char)v30);
        int v36 = v30 * 4 - 1;
        int v37 = (unsigned int)*(char*)(v20 + v36);
        unsigned int v38 = (unsigned int)(v36 - v37);
        char v39 = v3 == v38;
        char v40 = (int)v3 > (int)v38;
        char v41 = __parity__((unsigned char)v38 - (unsigned char)v3);
        char v42 = v3 > v38;
        char v43 = (int)(((v38 - v3) ^ v38) & (v3 ^ v38)) < 0;
        char v44 = (((v38 - v3) ^ (v3 ^ v38)) >>> 4) & 0x1;
        if(!v42 && !v39) {
            int v45 = (unsigned int)*(char*)(v20 + v3);
            int v46 = v45 * 2 + 1;
            caml_apply2(v19);
            v3 = v1;
        }
        else {
            int* ptr1 = &v2;
            int v47 = /*BAD_CALL!*/ caml_ml_array_bound_error((int)v1, v0, param0, param1);
        }
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__mkprintf_1345(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int* ptr1;
    int v2 = v0;
    int v3 = param0;
    int v4 = param1;
    int v5 = v1;
    unsigned int v6 = caml_extra_params;
    int v7 = *ptr1();
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 36);
        caml_young_ptr -= 36;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v7, param1);
        }
    }
    int* ptr2 = ptr0 + 1;
    *ptr0 = 8439;
    *(ptr0 + 1) = &caml_curry4;
    *(ptr0 + 2) = 9;
    *(ptr0 + 3) = &camlPrintf__pr_1354;
    *(ptr0 + 4) = v2;
    *(ptr0 + 5) = v3;
    *(ptr0 + 6) = v4;
    *(ptr0 + 7) = v5;
    *(ptr0 + 8) = v7;
    unsigned int v8 = camlPrintf__index_of_int_1037();
    caml_apply2((int)ptr2);
    return camlPrintf__kapr_1209();
}

int* camlPrintf__next_index_1262() {
    unsigned int v0;
    int* result;
    char v1 = v0 == 1;
    char v2 = (int)v0 < 1;
    char v3 = __parity__((unsigned char)v0 - 1);
    char v4 = v0 < 1;
    char v5 = (((v0 - 1) ^ v0) & (v0 ^ 0x1)) < 0;
    char v6 = (((v0 - 1) ^ (v0 ^ 0x1)) >>> 4) & 0x1;
    if(!v1) {
        return result;
    }
    unsigned int v7 = gvar_8079500;
    int* ptr0 = *(unsigned int*)(v7 + 8);
    int v8 = *ptr0;
    int* ptr1 = result;
    result = ptr0;
    jump v8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__pad_string_1072(unsigned int param0, int param1) {
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    if(v1 == v2 && v3 == 1) {
        return param1;
    }
    else if(v1 <= v2) {
        return camlString__sub_1046(v2);
    }
    int result = camlString__make_1038();
    if(v0 != 1) {
        camlString__blit_1056(result, 1);
    }
    else {
        camlString__blit_1056(result, v1 - v2 + 1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlPrintf__parse_1069(int param0) {
    int* ptr0;
    int* ptr1;
    int v0;
    int* ptr2;
    while(1) {
        int v1 = *(int*)(param0 + 12);
        unsigned int v2 = (unsigned int)((*(int*)(v1 - 4) >>> 10) * 4 - 1);
        if((int)(unsigned int)((v2 - (unsigned int)*(char*)(v2 + v1)) * 2 + 1) <= (int)ptr2) {
            break;
        }
        else {
            unsigned int v3 = (unsigned int)((unsigned int)*(char*)((int)(int*)((int)ptr2 >> 1) + *(int*)(param0 + 12)) * 2 + 1);
            if((int)v3 < 99) {
                if(v3 == 91) {
                    ptr2 = (int*)((char*)ptr2 + 2);
                    v0 = 3;
                }
                else {
                loc_8059320:
                    ptr2 = (int*)((char*)ptr2 + 2);
                }
            }
            else if((int)v3 < 117) {
                int v4 = v0;
                unsigned int v5 = *(unsigned int*)(param0 + 12);
                unsigned int v6 = (unsigned int)((*(int*)(v5 - 4) >>> 10) * 4 - 1);
                int v7 = camlString__sub_1046((v6 - (unsigned int)*(char*)(v6 + v5)) * 2 - (int)ptr2);
                param0 = caml_c_call();
                while(1) {
                    ptr1 = (int*)(caml_young_ptr - 12);
                    caml_young_ptr -= 12;
                    if(caml_young_limit <= (unsigned int)ptr1) {
                        *ptr1 = 0x800;
                        *(ptr1 + 1) = param0;
                        *(ptr1 + 2) = v4;
                        return ptr1 + 1;
                    }
                    caml_call_gc(param0, v0);
                }
                *ptr1 = 0x800;
                *(ptr1 + 1) = param0;
                *(ptr1 + 2) = v4;
                return ptr1 + 1;
            }
            else {
                goto loc_8059320;
            }
        }
    }
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(param0, v0);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = 1;
    *(ptr0 + 2) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__parse_string_conversion_1067(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int* ptr0 = &v0;
    char v3 = &v0 == 4;
    char v4 = (int)&v1 < 0;
    char v5 = __parity__((unsigned char)&v0 - 4);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&v1) >>> 4) & 0x1);
    char v7 = (unsigned int)&v0 < 4;
    char v8 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x4)) < 0;
    int v9 = v2;
    v1 = v2;
    while(1) {
        unsigned int v10 = caml_young_ptr;
        unsigned int v11 = caml_young_ptr;
        unsigned int v12 = v10 - 20;
        char v13 = v12 ? 0: 1;
        char v14 = v12 >= 0x80000000;
        char v15 = __parity__((unsigned char)v12);
        char v16 = (((v11 ^ 0x14) ^ v12) >>> 4) & 0x1;
        char v17 = v11 < 20;
        char v18 = (int)((v12 ^ v11) & (v11 ^ 0x14)) < 0;
        caml_young_ptr = v12;
        char v19 = caml_young_limit == v12;
        char v20 = (int)caml_young_limit > (int)v12;
        char v21 = __parity__((unsigned char)v12 - (unsigned char)caml_young_limit);
        char v22 = caml_young_limit > v12;
        char v23 = (int)(((v12 - caml_young_limit) ^ v12) & (caml_young_limit ^ v12)) < 0;
        char v24 = (((v12 - caml_young_limit) ^ (caml_young_limit ^ v12)) >>> 4) & 0x1;
        if(!v22) {
            int* ptr1 = (int*)(v12 + 4);
            *(ptr1 - 1) = 4343;
            *ptr1 = &caml_curry2;
            *(ptr1 + 1) = 5;
            *(ptr1 + 2) = &camlPrintf__parse_1069;
            *(ptr1 + 3) = v9;
            int v25 = sub_805B1F0(v1, v0);
            int v26 = &caml_exn_Failure;
            v9 = *(int*)v25;
            char v27 = v9 == &caml_exn_Failure;
            char v28 = v9 < &caml_exn_Failure;
            char v29 = __parity__((unsigned char)v9 - 140);
            char v30 = (unsigned int)v9 < &caml_exn_Failure;
            char v31 = (((v9 - &caml_exn_Failure) ^ v9) & (v9 ^ &caml_exn_Failure)) < 0;
            char v32 = (((v9 - &caml_exn_Failure) ^ (v9 ^ &caml_exn_Failure)) >>> 4) & 0x1;
            if(v27) {
                int v33 = 231;
                int v34 = 1;
                int v35 = v1;
                int* ptr2 = &v1;
                char v36 = &v0 ? 0: 1;
                char v37 = (int)&v0 < 0;
                char v38 = __parity__((unsigned char)&v0);
                char v39 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x4) ^ (int)&v0) >>> 4) & 0x1);
                char v40 = (unsigned int)&v1 >= 0xfffffffc;
                char v41 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int*)~(int)(int*)((int)&v1 ^ 0x4)) < 0;
                int v42 = /*NO_RETURN*/ camlPrintf__bad_conversion_1057(231);
            }
            caml_raise_exn();
        }
        int v43 = caml_call_gc(param0, param1);
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__pr_1354(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2 = v0;
    unsigned int v3 = (unsigned int)((*(int*)(param0 - 4) >>> 10) * 4 - 1);
    int v4 = (int)*(char*)(v3 + param0);
    int v5 = (v3 - v4) * 2 + 1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 0x88);
        caml_young_ptr -= 0x88;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v4, param1);
        }
    }
    *ptr0 = 34039;
    *(int*)(unsigned int)(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__doprn_1360;
    *(ptr0 + 4) = 4345;
    *(ptr0 + 5) = &caml_curry3;
    *(ptr0 + 6) = 7;
    *(ptr0 + 7) = &camlPrintf__cont_s_1361;
    *(ptr0 + 8) = 8441;
    *(ptr0 + 9) = &caml_curry4;
    *(ptr0 + 10) = 9;
    *(ptr0 + 11) = &camlPrintf__cont_a_1362;
    *(ptr0 + 12) = 12537;
    *(ptr0 + 13) = &caml_curry3;
    *(ptr0 + 14) = 7;
    *(ptr0 + 15) = &camlPrintf__cont_t_1363;
    *(ptr0 + 16) = 16633;
    *(ptr0 + 17) = &caml_curry2;
    *(ptr0 + 18) = 5;
    *(ptr0 + 19) = &camlPrintf__cont_f_1364;
    *(ptr0 + 20) = 20729;
    *(ptr0 + 21) = &caml_curry3;
    *(ptr0 + 22) = 7;
    *(ptr0 + 23) = &camlPrintf__cont_m_1365;
    *(ptr0 + 24) = *(int*)(v1 + 12);
    *(ptr0 + 25) = *(int*)(v1 + 16);
    *(ptr0 + 26) = *(int*)(v1 + 20);
    *(ptr0 + 27) = *(int*)(v1 + 24);
    *(ptr0 + 28) = *(int*)(v1 + 28);
    *(ptr0 + 29) = v1;
    *(ptr0 + 30) = v2;
    *(ptr0 + 31) = param0;
    *(ptr0 + 32) = param1;
    *(ptr0 + 33) = v5;
    return camlPrintf__doprn_1360((unsigned int)(ptr0 + 1));
}

int camlPrintf__printf_1393() {
    char v0;
    int v1;
    int v2;
    int* ptr0 = &v0;
    char v3 = &v0 == 4;
    char v4 = (int)&v1 < 0;
    char v5 = __parity__((unsigned char)&v0 - 4);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&v1) >>> 4) & 0x1);
    char v7 = (unsigned int)&v0 < 4;
    char v8 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x4)) < 0;
    v1 = v2;
    unsigned int v9 = gvar_8075544;
    int v10 = camlPrintf__fprintf_1391();
    int v11 = v10;
    int v12 = *(int*)v11;
    int v13 = v1;
    int* ptr1 = &v1;
    int* ptr2 = &v0;
    char v14 = &v0 ? 0: 1;
    char v15 = (int)&v0 < 0;
    char v16 = __parity__((unsigned char)&v0);
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x4) ^ (int)&v0) >>> 4) & 0x1);
    char v18 = (unsigned int)&v1 >= 0xfffffffc;
    char v19 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int*)~(int)(int*)((int)&v1 ^ 0x4)) < 0;
    jump v12;
}

int camlPrintf__scan_flags_1142(int param0) {
    int v0;
    char v1;
    char v2;
    char v3;
    void* ptr0;
    int v4;
    unsigned int v5;
    unsigned int v6;
    int* ptr1 = &ptr0;
    char v7 = &ptr0 == 8;
    char v8 = (int)&v4 < 0;
    char v9 = __parity__((unsigned char)&ptr0 - 8);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v4) >>> 4) & 0x1);
    char v11 = (unsigned int)&ptr0 < 8;
    char v12 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v4) & (int)(int*)((int)&ptr0 ^ 0x8)) < 0;
loc_80597F3:
    do {
        unsigned int v13 = *(unsigned int*)(param0 + 52);
        v3 = v13 == v6;
        v2 = (int)v13 > (int)v6;
        char v14 = __parity__((unsigned char)v6 - (unsigned char)v13);
        char v15 = v13 > v6;
        v1 = (int)(((v6 - v13) ^ v6) & (v13 ^ v6)) < 0;
        char v16 = (((v6 - v13) ^ (v13 ^ v6)) >>> 4) & 0x1;
        if((v3 || v2 != v1)) {
            unsigned int v17 = v6;
            unsigned int v18 = v6;
            int v19 = (int)(v17 >> 1);
            char v20 = v18 & 0x1;
            char v21 = 0;
            char v22 = v19 ? 0: 1;
            char v23 = v19 < 0;
            char v24 = __parity__((unsigned char)v19);
            int v25 = *(int*)(param0 + 40);
            int v26 = (unsigned int)*(char*)(v25 + v19);
            unsigned int v27 = (unsigned int)(v26 * 2 + 1);
            char v28 = v27 == 117;
            char v29 = (int)v27 < 117;
            char v30 = __parity__((unsigned char)v27 - 117);
            char v31 = v27 < 117;
            char v32 = (((v27 - 117) ^ v27) & (v27 ^ 0x75)) < 0;
            char v33 = (((v27 - 117) ^ (v27 ^ 0x75)) >>> 4) & 0x1;
            if(v29 == v32) {
                char v34 = v27 == 191;
                char v35 = (int)v27 < 191;
                char v36 = __parity__((unsigned char)v27 - 191);
                char v37 = v27 < 191;
                char v38 = (((v27 - 191) ^ v27) & (v27 ^ 0xbf)) < 0;
                char v39 = (((v27 - 191) ^ (v27 ^ 0xbf)) >>> 4) & 0x1;
                if(v34) {
                    unsigned int v40 = v6;
                    v6 += 2;
                    char v41 = v6 ? 0: 1;
                    char v42 = v6 >= 0x80000000;
                    char v43 = __parity__((unsigned char)v6);
                    char v44 = (((v40 ^ 0x2) ^ v6) >>> 4) & 0x1;
                    char v45 = v40 >= 0xfffffffe;
                    char v46 = (int)((v6 ^ v40) & ~(v40 ^ 0x2)) < 0;
                    v0 = 3;
                    goto loc_80597F3;
                }
            }
            else {
                char v47 = v27 == 65;
                char v48 = (int)v27 < 65;
                char v49 = __parity__((unsigned char)v27 - 65);
                char v50 = v27 < 65;
                char v51 = (((v27 - 65) ^ v27) & (v27 ^ 0x41)) < 0;
                char v52 = (((v27 - 65) ^ (v27 ^ 0x41)) >>> 4) & 0x1;
                if(v48 == v51) {
                    int v53 = param0;
                    v4 = v0;
                    unsigned int v54 = v27;
                    int v55 = (int)(v27 - 64);
                    char v56 = v55 ? 0: 1;
                    char v57 = v55 < 0;
                    char v58 = __parity__((unsigned char)v55);
                    char v59 = (((v54 ^ 0xffffffc0) ^ v55) >>> 4) & 0x1;
                    char v60 = v54 >= 64;
                    char v61 = ((v55 ^ v54) & ~(v54 ^ 0xffffffc0)) < 0;
                    int v62 = v55;
                    int v63 = v55 >> 1;
                    char v64 = v62 & 0x1;
                    char v65 = 0;
                    char v66 = v63 ? 0: 1;
                    char v67 = v63 < 0;
                    char v68 = __parity__((unsigned char)v63);
                    switch(v63) {
                        case 10: {
                            break;
                        }
                        case 0: 
                        case 3: 
                        case 11: 
                        case 13: {
                            unsigned int v69 = v6;
                            v6 += 2;
                            char v70 = v6 ? 0: 1;
                            char v71 = v6 >= 0x80000000;
                            char v72 = __parity__((unsigned char)v6);
                            char v73 = (((v69 ^ 0x2) ^ v6) >>> 4) & 0x1;
                            char v74 = v69 >= 0xfffffffe;
                            char v75 = (int)((v6 ^ v69) & ~(v69 ^ 0x2)) < 0;
                            goto loc_80597F3;
                        }
                        case 14: {
                            unsigned int v76 = v6;
                            v6 += 2;
                            char v77 = v6 ? 0: 1;
                            char v78 = v6 >= 0x80000000;
                            char v79 = __parity__((unsigned char)v6);
                            char v80 = (((v76 ^ 0x2) ^ v6) >>> 4) & 0x1;
                            char v81 = v76 >= 0xfffffffe;
                            char v82 = (int)((v6 ^ v76) & ~(v76 ^ 0x2)) < 0;
                            goto loc_80597F3;
                        }
                        case 1: 
                        case 2: 
                        case 4: 
                        case 5: 
                        case 6: 
                        case 7: 
                        case 8: 
                        case 9: 
                        case 12: 
                        case 15: {
                            return camlPrintf__scan_conv_1143(param0 + 16);
                        }
                        default: {
                            throw 0;
                        }
                    }
                    int v83 = *(int*)(param0 + 44);
                    int v84 = 211;
                    caml_apply3(211, v83);
                    v6 = v5;
                    v0 = v4;
                    param0 = v53;
                    goto loc_80597F3;
                }
            }
            return camlPrintf__scan_conv_1143(param0 + 16);
        }
    }
    while((v3 || v2 != v1));
    /*NO_RETURN*/ camlPrintf__incomplete_format_1065();
}

unsigned int camlPrintf__scan_flags_1292(int param0, unsigned int param1) {
    unsigned int v0;
    int v1;
    int v2;
    unsigned int v3;
camlPrintf__scan_flags_1292:
    while(1) {
        int v4 = v2;
        int v5 = v1;
        unsigned int v6 = param1;
        unsigned int v7 = param1;
        int v8 = (int)(v6 >> 1);
        char v9 = v7 & 0x1;
        char v10 = 0;
        char v11 = v8 ? 0: 1;
        char v12 = v8 < 0;
        char v13 = __parity__((unsigned char)v8);
        int v14 = *(int*)(v3 + 28);
        int v15 = (unsigned int)*(char*)(v14 + v8);
        int v16 = v15 * 2 + 1;
        unsigned int v17 = (unsigned int)(v16 - 64);
        char v18 = v17 == 51;
        char v19 = (int)v17 < 51;
        char v20 = __parity__((unsigned char)v17 - 51);
        char v21 = v17 < 51;
        char v22 = (((v17 - 51) ^ v17) & (v17 ^ 0x33)) < 0;
        char v23 = (((v17 - 51) ^ (v17 ^ 0x33)) >>> 4) & 0x1;
        if(!v21 && !v18) {
            break;
        }
        else {
            unsigned int v24 = v17;
            int v25 = (int)(v17 >> 1);
            char v26 = v24 & 0x1;
            char v27 = 0;
            char v28 = v25 ? 0: 1;
            char v29 = v25 < 0;
            char v30 = __parity__((unsigned char)v25);
            switch(v25) {
                case 0: 
                case 3: 
                case 11: 
                case 13: 
                case 14: {
                    unsigned int v31 = param1;
                    param1 += 2;
                    char v32 = param1 ? 0: 1;
                    char v33 = (int)param1 < 0;
                    char v34 = __parity__((unsigned char)param1);
                    char v35 = (((v31 ^ 0x2) ^ param1) >>> 4) & 0x1;
                    char v36 = v31 >= 0xfffffffe;
                    char v37 = (int)((param1 ^ v31) & ~(v31 ^ 0x2)) < 0;
                    v2 = v4;
                    v1 = v5;
                    continue camlPrintf__scan_flags_1292;
                }
                case 1: 
                case 2: 
                case 4: 
                case 5: 
                case 6: 
                case 7: 
                case 8: 
                case 9: 
                case 12: 
                case 15: {
                    break camlPrintf__scan_flags_1292;
                }
                case 10: {
                    unsigned int v38 = caml_young_ptr;
                    unsigned int v39 = caml_young_ptr;
                    v0 = v38 - 36;
                    char v40 = v0 ? 0: 1;
                    char v41 = v0 >= 0x80000000;
                    char v42 = __parity__((unsigned char)v0);
                    char v43 = (((v39 ^ 0x24) ^ v0) >>> 4) & 0x1;
                    char v44 = v39 < 36;
                    char v45 = (int)((v0 ^ v39) & (v39 ^ 0x24)) < 0;
                    caml_young_ptr = v0;
                    char v46 = caml_young_limit == v0;
                    char v47 = (int)caml_young_limit > (int)v0;
                    char v48 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
                    char v49 = caml_young_limit > v0;
                    char v50 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
                    char v51 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
                    jump v49 ? &sub_805ADBC: &sub_805AD55;
                }
                default: {
                    throw 0;
                }
            }
        }
    }
    return (unsigned int)camlPrintf__scan_conv_1293(param0, (int)param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__scan_fmt_1144(int param0, int param1) {
    int v0;
    unsigned int v1;
    int result;
    int v2;
    unsigned int v3;
    int* ptr0 = &v0;
    char v4 = &v0 == 4;
    char v5 = (int)&v1 < 0;
    char v6 = __parity__((unsigned char)&v0 - 4);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&v1) >>> 4) & 0x1);
    char v8 = (unsigned int)&v0 < 4;
    char v9 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x4)) < 0;
    while(1) {
        unsigned int v10 = *(unsigned int*)(v3 + 20);
        char v11 = result == v10;
        char v12 = result < (int)v10;
        char v13 = __parity__((unsigned char)result - (unsigned char)v10);
        char v14 = (unsigned int)result < v10;
        char v15 = (((result - v10) ^ result) & (result ^ v10)) < 0;
        char v16 = (((result - v10) ^ (result ^ v10)) >>> 4) & 0x1;
        if(v12 == v15) {
            return result;
        }
        int v17 = *(int*)(v3 + 8);
        int v18 = result;
        int v19 = result;
        unsigned int v20 = (unsigned int)(v18 >> 1);
        char v21 = v19 & 0x1;
        char v22 = 0;
        char v23 = v20 ? 0: 1;
        char v24 = v20 >= 0x80000000;
        char v25 = __parity__((unsigned char)v20);
        int v26 = *(int*)(v17 - 4);
        int v27 = *(int*)(v17 - 4);
        int v28 = v26 >>> 10;
        char v29 = (v27 >>> 9) & 0x1;
        char v30 = 0;
        char v31 = v28 ? 0: 1;
        char v32 = v28 < 0;
        char v33 = __parity__((unsigned char)v28);
        int v34 = v28 * 4 - 1;
        int v35 = (unsigned int)*(char*)(v34 + v17);
        unsigned int v36 = (unsigned int)(v34 - v35);
        char v37 = v36 == v20;
        char v38 = (int)v36 < (int)v20;
        char v39 = __parity__((unsigned char)v36 - (unsigned char)v20);
        char v40 = v36 < v20;
        char v41 = (int)(((v36 - v20) ^ v36) & (v36 ^ v20)) < 0;
        char v42 = (((v36 - v20) ^ (v36 ^ v20)) >>> 4) & 0x1;
        if(!v40 && !v37) {
            int v43 = (unsigned int)*(char*)(v20 + v17);
            unsigned int v44 = (unsigned int)(v43 * 2 + 1);
            char v45 = v44 == 75;
            char v46 = (int)v44 < 75;
            char v47 = __parity__((unsigned char)v44 - 75);
            char v48 = v44 < 75;
            char v49 = (((v44 - 75) ^ v44) & (v44 ^ 0x4b)) < 0;
            char v50 = (((v44 - 75) ^ (v44 ^ 0x4b)) >>> 4) & 0x1;
            if(v45) {
                v1 = v3;
                unsigned int v51 = v3;
                unsigned int v52 = v3;
                int v53 = (int)(v51 - 32);
                char v54 = v53 ? 0: 1;
                char v55 = v53 < 0;
                char v56 = __parity__((unsigned char)v53);
                char v57 = (((v52 ^ 0xffffffe0) ^ v53) >>> 4) & 0x1;
                char v58 = v52 >= 32;
                char v59 = ((v53 ^ v52) & ~(v52 ^ 0xffffffe0)) < 0;
                int v60 = result;
                int v61 = result;
                int v62 = v60 + 2;
                char v63 = v62 ? 0: 1;
                char v64 = v62 < 0;
                char v65 = __parity__((unsigned char)v62);
                char v66 = (((v61 ^ 0x2) ^ v62) >>> 4) & 0x1;
                char v67 = (unsigned int)v61 >= 0xfffffffe;
                char v68 = ((v62 ^ v61) & ~(v61 ^ 0x2)) < 0;
                int v69 = 1;
                result = camlPrintf__scan_flags_1142(v53);
                v3 = v1;
            }
            else {
                int v70 = result;
                result += 2;
                char v71 = result ? 0: 1;
                char v72 = result < 0;
                char v73 = __parity__((unsigned char)result);
                char v74 = (((v70 ^ 0x2) ^ result) >>> 4) & 0x1;
                char v75 = (unsigned int)v70 >= 0xfffffffe;
                char v76 = ((result ^ v70) & ~(v70 ^ 0x2)) < 0;
            }
        }
        else {
            int* ptr1 = &v2;
            result = /*BAD_CALL!*/ caml_ml_array_bound_error((int)v1, v0, param0, param1);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__scan_format_1278(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v0;
    int v5 = v2;
    int v6 = param0;
    int v7 = param1;
    int v8 = v1;
    unsigned int v9 = caml_extra_params;
    unsigned int v10 = gvar_807B7C0;
    unsigned int v11 = gvar_807B7C4;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 100);
        caml_young_ptr -= 100;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(param0, param1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__get_arg_1288;
    *(ptr0 + 4) = v5;
    *(ptr0 + 5) = 19703;
    *(ptr0 + 6) = &caml_curry3;
    *(ptr0 + 7) = 7;
    *(ptr0 + 8) = &camlPrintf__scan_positional_1291;
    *(ptr0 + 9) = 4345;
    *(ptr0 + 10) = &caml_curry4;
    *(ptr0 + 11) = 9;
    *(ptr0 + 12) = &camlPrintf__scan_flags_1292;
    *(ptr0 + 13) = 8441;
    *(ptr0 + 14) = &caml_curry4;
    *(ptr0 + 15) = 9;
    *(ptr0 + 16) = &camlPrintf__scan_conv_1293;
    *(ptr0 + 17) = v4;
    int v12 = v7;
    *(ptr0 + 18) = v7;
    *(ptr0 + 19) = v3;
    *(ptr0 + 20) = v8;
    *(unsigned int*)(ptr0 + 21) = v9;
    *(unsigned int*)(ptr0 + 22) = v10;
    *(unsigned int*)(ptr0 + 23) = v11;
    *(unsigned int*)(ptr0 + 24) = ptr0 + 1;
    return camlPrintf__scan_positional_1291(v12 + 2);
}

int camlPrintf__sprintf_1413() {
    char v0;
    int v1;
    int v2;
    int* ptr0 = &v0;
    char v3 = &v0 == 4;
    char v4 = (int)&v1 < 0;
    char v5 = __parity__((unsigned char)&v0 - 4);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&v1) >>> 4) & 0x1);
    char v7 = (unsigned int)&v0 < 4;
    char v8 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x4)) < 0;
    v1 = v2;
    int v9 = &camlPrintf__39;
    int v10 = camlPrintf__ksprintf_1411();
    int v11 = v10;
    int v12 = *(int*)v11;
    int v13 = v1;
    int* ptr1 = &v1;
    int* ptr2 = &v0;
    char v14 = &v0 ? 0: 1;
    char v15 = (int)&v0 < 0;
    char v16 = __parity__((unsigned char)&v0);
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x4) ^ (int)&v0) >>> 4) & 0x1);
    char v18 = (unsigned int)&v1 >= 0xfffffffc;
    char v19 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int*)~(int)(int*)((int)&v1 ^ 0x4)) < 0;
    jump v12;
}

int camlPrintf__sub_1128(int param0, int param1, int param2) {
    unsigned int v0;
    int* ptr0;
    unsigned int* ptr1;
    unsigned int* ptr2;
    unsigned int* ptr3;
    unsigned int* ptr4;
    while(1) {
        unsigned int v1 = *(ptr2 + 8);
        char v2 = ptr4 == v1;
        char v3 = (int)ptr4 < (int)v1;
        char v4 = __parity__((unsigned char)ptr4 - (unsigned char)v1);
        char v5 = (unsigned int)ptr4 < v1;
        char v6 = (int)(int*)((int)(int*)((int)(int*)((int)ptr4 - v1) ^ (int)ptr4) & (int)(int*)((int)ptr4 ^ v1)) < 0;
        char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr4 - v1) ^ (int)(int*)((int)ptr4 ^ v1)) >>> 4) & 0x1);
        if(v3 == v6) {
            break;
        }
        else {
            int v8 = *(int*)(ptr2 + 7);
            unsigned int* ptr5 = ptr4;
            unsigned int* ptr6 = ptr4;
            int* ptr7 = (int*)((int)ptr5 >> 1);
            char v9 = (unsigned int*)((int)ptr6 & 0x1);
            char v10 = 0;
            char v11 = ptr7 ? 0: 1;
            char v12 = (unsigned int)ptr7 >= 0x80000000;
            char v13 = __parity__((unsigned char)ptr7);
            unsigned int v14 = *(unsigned int*)(v8 - 4);
            unsigned int* ptr8 = *(unsigned int*)(v8 - 4);
            int v15 = (int)(v14 >>> 10);
            char v16 = (int*)((int)(int*)((int)ptr8 >>> 9) & 0x1);
            char v17 = 0;
            char v18 = v15 ? 0: 1;
            char v19 = v15 < 0;
            char v20 = __parity__((unsigned char)v15);
            int v21 = v15 * 4 - 1;
            int v22 = (unsigned int)*(char*)(v8 + v21);
            unsigned int v23 = (unsigned int)(v21 - v22);
            v2 = ptr7 == v23;
            v3 = (int)ptr7 > (int)v23;
            v4 = __parity__((unsigned char)v23 - (unsigned char)ptr7);
            v5 = (unsigned int)ptr7 > v23;
            v6 = (int)(int*)((int)(int*)((int)(int*)(v23 - (int)ptr7) ^ v23) & (int)(int*)((int)ptr7 ^ v23)) < 0;
            v7 = (int*)((int)(int*)((int)(int*)((int)(int*)(v23 - (int)ptr7) ^ (int)(int*)((int)ptr7 ^ v23)) >>> 4) & 0x1);
            if(!v5 && !v2) {
                int v24 = (unsigned int)*(char*)((int)ptr7 + v8);
                unsigned int v25 = (unsigned int)(v24 * 2 + 1);
                char v26 = v25 == 75;
                char v27 = (int)v25 < 75;
                char v28 = __parity__((unsigned char)v25 - 75);
                char v29 = v25 < 75;
                char v30 = (((v25 - 75) ^ v25) & (v25 ^ 0x4b)) < 0;
                char v31 = (((v25 - 75) ^ (v25 ^ 0x4b)) >>> 4) & 0x1;
                if(!v26) {
                    ptr8 = ptr4;
                    ptr4 = (unsigned int*)((char*)ptr4 + 2);
                    char v32 = ptr4 ? 0: 1;
                    char v33 = (unsigned int)ptr4 >= 0x80000000;
                    char v34 = __parity__((unsigned char)ptr4);
                    char v35 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr8 ^ 0x2) ^ (int)ptr4) >>> 4) & 0x1);
                    char v36 = (unsigned int)ptr8 >= 0xfffffffe;
                    char v37 = (int)(int*)((int)(int*)((int)ptr4 ^ (int)ptr8) & (int*)~(int)(int*)((int)ptr8 ^ 0x2)) < 0;
                }
                else {
                    ptr2 += 3;
                    unsigned int* ptr9 = ptr4;
                    int* ptr10 = (int*)((char*)ptr4 + 2);
                    char v38 = ptr10 ? 0: 1;
                    char v39 = (unsigned int)ptr10 >= 0x80000000;
                    char v40 = __parity__((unsigned char)ptr10);
                    char v41 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr9 ^ 0x2) ^ (int)ptr10) >>> 4) & 0x1);
                    char v42 = (unsigned int)ptr9 >= 0xfffffffe;
                    char v43 = (int)(int*)((int)(int*)((int)ptr10 ^ (int)ptr9) & (int*)~(int)(int*)((int)ptr9 ^ 0x2)) < 0;
                    unsigned int* ptr11 = ptr3;
                    --ptr3;
                    char v44 = ptr3 ? 0: 1;
                    char v45 = (int)ptr3 < 0;
                    char v46 = __parity__((unsigned char)ptr3);
                    char v47 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr11 ^ 0x4) ^ (int)ptr3) >>> 4) & 0x1);
                    char v48 = (unsigned int)ptr11 < 4;
                    char v49 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr11) & (int)(int*)((int)ptr11 ^ 0x4)) < 0;
                    unsigned int v50 = *(ptr2 + 5);
                    char v51 = ptr10 == v50;
                    char v52 = (int)ptr10 < (int)v50;
                    char v53 = __parity__((unsigned char)ptr10 - (unsigned char)v50);
                    char v54 = (unsigned int)ptr10 < v50;
                    char v55 = (int)(int*)((int)(int*)((int)(int*)((int)ptr10 - v50) ^ (int)ptr10) & (int)(int*)((int)ptr10 ^ v50)) < 0;
                    char v56 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr10 - v50) ^ (int)(int*)((int)ptr10 ^ v50)) >>> 4) & 0x1);
                    if(v52 == v55) {
                        ptr1 = *(ptr2 + 2);
                        ptr0 = *(ptr2 + 4);
                        v0 = *ptr1;
                        ptr2 = ptr1;
                        ptr8 = ptr3;
                        ++ptr3;
                        v2 = ptr3 ? 0: 1;
                        v3 = (int)ptr3 < 0;
                        v4 = __parity__((unsigned char)ptr3);
                        v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr8 ^ 0x4) ^ (int)ptr3) >>> 4) & 0x1);
                        v5 = (unsigned int)ptr8 >= 0xfffffffc;
                        v6 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr8) & (int*)~(int)(int*)((int)ptr8 ^ 0x4)) < 0;
                        jump v0;
                    }
                    int v57 = *(int*)(ptr2 + 4);
                    int* ptr12 = ptr10;
                    int* ptr13 = ptr10;
                    int* ptr14 = (int*)((int)ptr12 >> 1);
                    char v58 = (int*)((int)ptr13 & 0x1);
                    char v59 = 0;
                    char v60 = ptr14 ? 0: 1;
                    char v61 = (unsigned int)ptr14 >= 0x80000000;
                    char v62 = __parity__((unsigned char)ptr14);
                    unsigned int v63 = *(unsigned int*)(v57 - 4);
                    ptr8 = *(unsigned int*)(v57 - 4);
                    int v64 = (int)(v63 >>> 10);
                    char v65 = (int*)((int)(int*)((int)ptr8 >>> 9) & 0x1);
                    char v66 = 0;
                    char v67 = v64 ? 0: 1;
                    char v68 = v64 < 0;
                    char v69 = __parity__((unsigned char)v64);
                    int v70 = v64 * 4 - 1;
                    v22 = (unsigned int)*(char*)(v57 + v70);
                    v23 = (unsigned int)(v70 - v22);
                    char v71 = ptr14 == v23;
                    char v72 = (int)ptr14 > (int)v23;
                    char v73 = __parity__((unsigned char)v23 - (unsigned char)ptr14);
                    char v74 = (unsigned int)ptr14 > v23;
                    char v75 = (int)(int*)((int)(int*)((int)(int*)(v23 - (int)ptr14) ^ v23) & (int)(int*)((int)ptr14 ^ v23)) < 0;
                    char v76 = (int*)((int)(int*)((int)(int*)((int)(int*)(v23 - (int)ptr14) ^ (int)(int*)((int)ptr14 ^ v23)) >>> 4) & 0x1);
                    if(!v74 && !v71) {
                        int v77 = (unsigned int)*(char*)((int)ptr14 + v57);
                        ptr1 = (unsigned int*)(v77 * 2 + 1);
                        unsigned int* ptr15 = (unsigned int*)(v77 * 2 + 1);
                        int* ptr16 = (int*)(ptr15 - 20);
                        char v78 = ptr16 == 3;
                        char v79 = (int)ptr16 < 3;
                        char v80 = __parity__((unsigned char)ptr16 - 3);
                        char v81 = (unsigned int)ptr16 < 3;
                        char v82 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr16 - 3) ^ (int)ptr16) & (int)(int*)((int)ptr16 ^ 0x3)) < 0;
                        char v83 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr16 - 3) ^ (int)(int*)((int)ptr16 ^ 0x3)) >>> 4) & 0x1);
                        if(!v81 && !v78) {
                            int* ptr17 = (int*)((char*)ptr16 - 166);
                            char v84 = ptr17 == 5;
                            char v85 = (int)ptr17 < 5;
                            char v86 = __parity__((unsigned char)ptr17 - 5);
                            char v87 = (unsigned int)ptr17 < 5;
                            char v88 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr17 - 5) ^ (int)ptr17) & (int)(int*)((int)ptr17 ^ 0x5)) < 0;
                            char v89 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr17 - 5) ^ (int)(int*)((int)ptr17 ^ 0x5)) >>> 4) & 0x1);
                            if((v87 || v84)) {
                                *ptr3 = ptr2;
                                int* ptr18 = ptr17;
                                ptr16 = (int*)((int)ptr17 >> 1);
                                char v90 = (int*)((int)ptr18 & 0x1);
                                char v91 = 0;
                                char v92 = ptr16 ? 0: 1;
                                char v93 = (int)ptr16 < 0;
                                char v94 = __parity__((unsigned char)ptr16);
                                char v95 = ptr16 == 1;
                                char v96 = (int)ptr16 < 1;
                                char v97 = __parity__((unsigned char)ptr16 - 1);
                                char v98 = (unsigned int)ptr16 < 1;
                                char v99 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr16 - 1) ^ (int)ptr16) & (int)(int*)((int)ptr16 ^ 0x1)) < 0;
                                char v100 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr16 - 1) ^ (int)(int*)((int)ptr16 ^ 0x1)) >>> 4) & 0x1);
                                if(v98) {
                                    goto loc_8058D30;
                                }
                                else if(!v95) {
                                    if(v96 == v99) {
                                        goto loc_8058D50;
                                    }
                                    else {
                                        goto loc_8058D0D;
                                    }
                                }
                            }
                            ptr2 -= 3;
                            ptr4 = (unsigned int*)((char*)ptr10 + 2);
                            ptr8 = ptr3;
                            ++ptr3;
                            char v101 = ptr3 ? 0: 1;
                            char v102 = (int)ptr3 < 0;
                            char v103 = __parity__((unsigned char)ptr3);
                            char v104 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr8 ^ 0x4) ^ (int)ptr3) >>> 4) & 0x1);
                            char v105 = (unsigned int)ptr8 >= 0xfffffffc;
                            char v106 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr8) & (int*)~(int)(int*)((int)ptr8 ^ 0x4)) < 0;
                            continue;
                        }
                        else {
                        loc_8058D0D:
                            char v107 = ptr16 == 1;
                            char v108 = (int)ptr16 < 1;
                            char v109 = __parity__((unsigned char)ptr16 - 1);
                            char v110 = (unsigned int)ptr16 < 1;
                            char v111 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr16 - 1) ^ (int)ptr16) & (int)(int*)((int)ptr16 ^ 0x1)) < 0;
                            char v112 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr16 - 1) ^ (int)(int*)((int)ptr16 ^ 0x1)) >>> 4) & 0x1);
                            if(v107) {
                                *ptr3 = ptr2;
                            loc_8058D30:
                                int v113 = *(int*)(ptr2 + 6);
                                int* ptr19 = ptr10;
                                int* ptr20 = ptr10;
                                int* ptr21 = (int*)((char*)ptr19 + 2);
                                char v114 = ptr21 ? 0: 1;
                                char v115 = (int)ptr21 < 0;
                                char v116 = __parity__((unsigned char)ptr21);
                                char v117 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr20 ^ 0x2) ^ (int)ptr21) >>> 4) & 0x1);
                                char v118 = (unsigned int)ptr20 >= 0xfffffffe;
                                char v119 = (int)(int*)((int)(int*)((int)ptr21 ^ (int)ptr20) & (int*)~(int)(int*)((int)ptr20 ^ 0x2)) < 0;
                                unsigned int* ptr22 = ptr1;
                                --ptr3;
                                *ptr3 = &loc_8058D3F;
                                int v120 = /*BAD_CALL!*/ camlPrintf__sub_fmt_1124();
                                int v121 = *ptr3;
                                ptr2 = (unsigned int*)(v121 - 12);
                                ptr4 = (unsigned int*)(v120 + 2);
                                ptr8 = ptr3;
                                ++ptr3;
                                char v122 = ptr3 ? 0: 1;
                                char v123 = (int)ptr3 < 0;
                                char v124 = __parity__((unsigned char)ptr3);
                                char v125 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr8 ^ 0x4) ^ (int)ptr3) >>> 4) & 0x1);
                                char v126 = (unsigned int)ptr8 >= 0xfffffffc;
                                char v127 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr8) & (int*)~(int)(int*)((int)ptr8 ^ 0x4)) < 0;
                                continue;
                            }
                            else {
                            loc_8058D50:
                                v0 = *(ptr2 + 8);
                                char v128 = v0 == ptr1;
                                char v129 = (int)v0 > (int)ptr1;
                                char v130 = __parity__((unsigned char)ptr1 - (unsigned char)v0);
                                char v131 = v0 > (unsigned int)ptr1;
                                char v132 = (int)(int*)((int)(int*)((int)(int*)((int)ptr1 - v0) ^ (int)ptr1) & (int)(int*)(v0 ^ (int)ptr1)) < 0;
                                char v133 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 - v0) ^ (int)(int*)(v0 ^ (int)ptr1)) >>> 4) & 0x1);
                                if(v128) {
                                    ptr0 = (int*)((char*)ptr10 + 2);
                                    unsigned int* ptr23 = ptr3;
                                    ++ptr3;
                                    v2 = ptr3 ? 0: 1;
                                    v3 = (int)ptr3 < 0;
                                    v4 = __parity__((unsigned char)ptr3);
                                    v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr23 ^ 0x4) ^ (int)ptr3) >>> 4) & 0x1);
                                    v5 = (unsigned int)ptr23 >= 0xfffffffc;
                                    v6 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr23) & (int*)~(int)(int*)((int)ptr23 ^ 0x4)) < 0;
                                    ptr8 = *ptr3;
                                    ++ptr3;
                                    jump ptr8;
                                }
                                v23 = *(ptr2 + 3);
                                unsigned int* ptr24 = *(ptr2 + 7);
                                int v134 = *(int*)(ptr2 + 4);
                                ptr2 = ptr24;
                                unsigned int* ptr25 = ptr1;
                                unsigned int v135 = v23;
                                ptr8 = ptr3;
                                ++ptr3;
                                v2 = ptr3 ? 0: 1;
                                v3 = (int)ptr3 < 0;
                                v4 = __parity__((unsigned char)ptr3);
                                v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr8 ^ 0x4) ^ (int)ptr3) >>> 4) & 0x1);
                                v5 = (unsigned int)ptr8 >= 0xfffffffc;
                                v6 = (int)(int*)((int)(int*)((int)ptr3 ^ (int)ptr8) & (int*)~(int)(int*)((int)ptr8 ^ 0x4)) < 0;
                                /*BAD_CALL!*/ caml_apply3((int)ptr25, (int)v135);
                            }
                        }
                    }
                    --ptr3;
                    *ptr3 = &loc_8058D7C;
                    ptr4 = (unsigned int*)/*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(int*)(ptr3 + 4));
                }
            }
            else {
                --ptr3;
                *ptr3 = &camlPrintf__loop_1159;
                ptr0 = (int*)/*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr3 + 1), *(int*)(ptr3 + 2), *(int*)(ptr3 + 3), *(int*)(ptr3 + 4));
            }
        }
    }
    ptr1 = *(ptr2 + 5);
    ptr0 = *(ptr2 + 7);
    v0 = *ptr1;
    ptr2 = ptr1;
    jump v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__sub_fmt_1124() {
    int v0;
    char v1 = v0 == 81;
    if(v1) {
        return sub_80594B5();
    }
    int v2 = 251;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__sub_format_1117(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2 = v0;
    unsigned int v3 = (unsigned int)((*(int*)(param1 - 4) >>> 10) * 4 - 1);
    unsigned int v4 = (unsigned int)*(char*)(v3 + param1);
    int v5 = (v3 - v4) * 2 + 1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 32);
        caml_young_ptr -= 32;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc((int)v4, param1);
        }
    }
    *ptr0 = 7415;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__sub_fmt_1124;
    *(ptr0 + 4) = v2;
    *(ptr0 + 5) = v1;
    *(ptr0 + 6) = param1;
    *(ptr0 + 7) = v5;
    return camlPrintf__sub_fmt_1124();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__sub_format_for_printf_1135() {
    int result;
    caml_apply3(result, gvar_8079528);
    return result;
}

int camlPrintf__sub_sub_1129(int param0, int param1) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int* ptr0;
    unsigned int v6;
    unsigned int* ptr1;
    unsigned int* ptr2;
    unsigned int* ptr3;
    unsigned int* ptr4;
    int* ptr5;
    unsigned int* ptr6;
camlPrintf__sub_sub_1129:
    while(1) {
        unsigned int* ptr7 = ptr6;
        --ptr6;
        char v7 = ptr6 ? 0: 1;
        char v8 = (int)ptr6 < 0;
        char v9 = __parity__((unsigned char)ptr6);
        char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr7 ^ 0x4) ^ (int)ptr6) >>> 4) & 0x1);
        char v11 = (unsigned int)ptr7 < 4;
        char v12 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr7) & (int)(int*)((int)ptr7 ^ 0x4)) < 0;
        unsigned int v13 = *(ptr4 + 5);
        char v14 = ptr5 == v13;
        char v15 = (int)ptr5 < (int)v13;
        char v16 = __parity__((unsigned char)ptr5 - (unsigned char)v13);
        char v17 = (unsigned int)ptr5 < v13;
        char v18 = (int)(int*)((int)(int*)((int)(int*)((int)ptr5 - v13) ^ (int)ptr5) & (int)(int*)((int)ptr5 ^ v13)) < 0;
        char v19 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr5 - v13) ^ (int)(int*)((int)ptr5 ^ v13)) >>> 4) & 0x1);
        if(v15 == v18) {
            break;
        }
        else {
            int v20 = *(int*)(ptr4 + 4);
            int* ptr8 = ptr5;
            int* ptr9 = ptr5;
            int* ptr10 = (int*)((int)ptr8 >> 1);
            char v21 = (int*)((int)ptr9 & 0x1);
            char v22 = 0;
            char v23 = ptr10 ? 0: 1;
            char v24 = (unsigned int)ptr10 >= 0x80000000;
            char v25 = __parity__((unsigned char)ptr10);
            unsigned int v26 = *(unsigned int*)(v20 - 4);
            ptr3 = *(unsigned int*)(v20 - 4);
            int v27 = (int)(v26 >>> 10);
            char v28 = (int*)((int)(int*)((int)ptr3 >>> 9) & 0x1);
            char v29 = 0;
            char v30 = v27 ? 0: 1;
            char v31 = v27 < 0;
            char v32 = __parity__((unsigned char)v27);
            int v33 = v27 * 4 - 1;
            int v34 = (unsigned int)*(char*)(v20 + v33);
            unsigned int v35 = (unsigned int)(v33 - v34);
            char v36 = ptr10 == v35;
            char v37 = (int)ptr10 > (int)v35;
            char v38 = __parity__((unsigned char)v35 - (unsigned char)ptr10);
            char v39 = (unsigned int)ptr10 > v35;
            char v40 = (int)(int*)((int)(int*)((int)(int*)(v35 - (int)ptr10) ^ v35) & (int)(int*)((int)ptr10 ^ v35)) < 0;
            char v41 = (int*)((int)(int*)((int)(int*)((int)(int*)(v35 - (int)ptr10) ^ (int)(int*)((int)ptr10 ^ v35)) >>> 4) & 0x1);
            if(!v39 && !v36) {
                int v42 = (unsigned int)*(char*)((int)ptr10 + v20);
                ptr2 = (unsigned int*)(v42 * 2 + 1);
                unsigned int* ptr11 = (unsigned int*)(v42 * 2 + 1);
                int* ptr12 = (int*)(ptr11 - 20);
                char v43 = ptr12 == 3;
                char v44 = (int)ptr12 < 3;
                char v45 = __parity__((unsigned char)ptr12 - 3);
                char v46 = (unsigned int)ptr12 < 3;
                char v47 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr12 - 3) ^ (int)ptr12) & (int)(int*)((int)ptr12 ^ 0x3)) < 0;
                char v48 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr12 - 3) ^ (int)(int*)((int)ptr12 ^ 0x3)) >>> 4) & 0x1);
                if(!v46 && !v43) {
                    int* ptr13 = (int*)((char*)ptr12 - 166);
                    char v49 = ptr13 == 5;
                    char v50 = (int)ptr13 < 5;
                    char v51 = __parity__((unsigned char)ptr13 - 5);
                    char v52 = (unsigned int)ptr13 < 5;
                    char v53 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr13 - 5) ^ (int)ptr13) & (int)(int*)((int)ptr13 ^ 0x5)) < 0;
                    char v54 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr13 - 5) ^ (int)(int*)((int)ptr13 ^ 0x5)) >>> 4) & 0x1);
                    if((v52 || v49)) {
                        *ptr6 = ptr4;
                        int* ptr14 = ptr13;
                        ptr12 = (int*)((int)ptr13 >> 1);
                        char v55 = (int*)((int)ptr14 & 0x1);
                        char v56 = 0;
                        char v57 = ptr12 ? 0: 1;
                        char v58 = (int)ptr12 < 0;
                        char v59 = __parity__((unsigned char)ptr12);
                        char v60 = ptr12 == 1;
                        char v61 = (int)ptr12 < 1;
                        char v62 = __parity__((unsigned char)ptr12 - 1);
                        char v63 = (unsigned int)ptr12 < 1;
                        char v64 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr12 - 1) ^ (int)ptr12) & (int)(int*)((int)ptr12 ^ 0x1)) < 0;
                        char v65 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr12 - 1) ^ (int)(int*)((int)ptr12 ^ 0x1)) >>> 4) & 0x1);
                        if(v63) {
                            goto loc_8058D30;
                        }
                        else if(!v60) {
                            if(v61 == v64) {
                                goto loc_8058D50;
                            }
                            else {
                                goto loc_8058D0D;
                            }
                        }
                    }
                    ptr4 -= 3;
                    ptr1 = (unsigned int*)((char*)ptr5 + 2);
                    ptr3 = ptr6;
                    ++ptr6;
                    char v66 = ptr6 ? 0: 1;
                    char v67 = (int)ptr6 < 0;
                    char v68 = __parity__((unsigned char)ptr6);
                    char v69 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x4) ^ (int)ptr6) >>> 4) & 0x1);
                    char v70 = (unsigned int)ptr3 >= 0xfffffffc;
                    char v71 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0x4)) < 0;
                }
                else {
                loc_8058D0D:
                    char v72 = ptr12 == 1;
                    char v73 = (int)ptr12 < 1;
                    char v74 = __parity__((unsigned char)ptr12 - 1);
                    char v75 = (unsigned int)ptr12 < 1;
                    char v76 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr12 - 1) ^ (int)ptr12) & (int)(int*)((int)ptr12 ^ 0x1)) < 0;
                    char v77 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr12 - 1) ^ (int)(int*)((int)ptr12 ^ 0x1)) >>> 4) & 0x1);
                    if(v72) {
                        *ptr6 = ptr4;
                    loc_8058D30:
                        int v78 = *(int*)(ptr4 + 6);
                        int* ptr15 = ptr5;
                        int* ptr16 = ptr5;
                        int* ptr17 = (int*)((char*)ptr15 + 2);
                        char v79 = ptr17 ? 0: 1;
                        char v80 = (int)ptr17 < 0;
                        char v81 = __parity__((unsigned char)ptr17);
                        char v82 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr16 ^ 0x2) ^ (int)ptr17) >>> 4) & 0x1);
                        char v83 = (unsigned int)ptr16 >= 0xfffffffe;
                        char v84 = (int)(int*)((int)(int*)((int)ptr17 ^ (int)ptr16) & (int*)~(int)(int*)((int)ptr16 ^ 0x2)) < 0;
                        unsigned int* ptr18 = ptr2;
                        --ptr6;
                        *ptr6 = &loc_8058D3F;
                        int v85 = /*BAD_CALL!*/ camlPrintf__sub_fmt_1124();
                        int v86 = *ptr6;
                        ptr4 = (unsigned int*)(v86 - 12);
                        ptr1 = (unsigned int*)(v85 + 2);
                        ptr3 = ptr6;
                        ++ptr6;
                        char v87 = ptr6 ? 0: 1;
                        char v88 = (int)ptr6 < 0;
                        char v89 = __parity__((unsigned char)ptr6);
                        char v90 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x4) ^ (int)ptr6) >>> 4) & 0x1);
                        char v91 = (unsigned int)ptr3 >= 0xfffffffc;
                        char v92 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0x4)) < 0;
                    }
                    else {
                    loc_8058D50:
                        v6 = *(ptr4 + 8);
                        char v93 = v6 == ptr2;
                        char v94 = (int)v6 > (int)ptr2;
                        char v95 = __parity__((unsigned char)ptr2 - (unsigned char)v6);
                        char v96 = v6 > (unsigned int)ptr2;
                        char v97 = (int)(int*)((int)(int*)((int)(int*)((int)ptr2 - v6) ^ (int)ptr2) & (int)(int*)(v6 ^ (int)ptr2)) < 0;
                        char v98 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr2 - v6) ^ (int)(int*)(v6 ^ (int)ptr2)) >>> 4) & 0x1);
                        if(v93) {
                            ptr0 = (int*)((char*)ptr5 + 2);
                            unsigned int* ptr19 = ptr6;
                            ++ptr6;
                            v5 = ptr6 ? 0: 1;
                            v4 = (int)ptr6 < 0;
                            v3 = __parity__((unsigned char)ptr6);
                            v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr19 ^ 0x4) ^ (int)ptr6) >>> 4) & 0x1);
                            v1 = (unsigned int)ptr19 >= 0xfffffffc;
                            v0 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr19) & (int*)~(int)(int*)((int)ptr19 ^ 0x4)) < 0;
                            ptr3 = *ptr6;
                            ++ptr6;
                            jump ptr3;
                        }
                        v35 = *(ptr4 + 3);
                        unsigned int* ptr20 = *(ptr4 + 7);
                        int v99 = *(int*)(ptr4 + 4);
                        ptr4 = ptr20;
                        unsigned int* ptr21 = ptr2;
                        unsigned int v100 = v35;
                        ptr3 = ptr6;
                        ++ptr6;
                        v5 = ptr6 ? 0: 1;
                        v4 = (int)ptr6 < 0;
                        v3 = __parity__((unsigned char)ptr6);
                        v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x4) ^ (int)ptr6) >>> 4) & 0x1);
                        v1 = (unsigned int)ptr3 >= 0xfffffffc;
                        v0 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0x4)) < 0;
                        /*BAD_CALL!*/ caml_apply3((int)ptr21, (int)v100);
                    }
                }
            }
            else {
                --ptr6;
                *ptr6 = &loc_8058D7C;
                ptr1 = (unsigned int*)/*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr6 + 1), *(int*)(ptr6 + 2), *(int*)(ptr6 + 3), *(int*)(ptr6 + 4));
            }
            while(1) {
                unsigned int v101 = *(ptr4 + 8);
                v5 = ptr1 == v101;
                v4 = (int)ptr1 < (int)v101;
                v3 = __parity__((unsigned char)ptr1 - (unsigned char)v101);
                v1 = (unsigned int)ptr1 < v101;
                v0 = (int)(int*)((int)(int*)((int)(int*)((int)ptr1 - v101) ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ v101)) < 0;
                v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 - v101) ^ (int)(int*)((int)ptr1 ^ v101)) >>> 4) & 0x1);
                if(v4 == v0) {
                    break;
                }
                else {
                    int v102 = *(int*)(ptr4 + 7);
                    unsigned int* ptr22 = ptr1;
                    unsigned int* ptr23 = ptr1;
                    int* ptr24 = (int*)((int)ptr22 >> 1);
                    char v103 = (unsigned int*)((int)ptr23 & 0x1);
                    char v104 = 0;
                    char v105 = ptr24 ? 0: 1;
                    char v106 = (unsigned int)ptr24 >= 0x80000000;
                    char v107 = __parity__((unsigned char)ptr24);
                    unsigned int v108 = *(unsigned int*)(v102 - 4);
                    ptr3 = *(unsigned int*)(v102 - 4);
                    int v109 = (int)(v108 >>> 10);
                    char v110 = (int*)((int)(int*)((int)ptr3 >>> 9) & 0x1);
                    char v111 = 0;
                    char v112 = v109 ? 0: 1;
                    char v113 = v109 < 0;
                    char v114 = __parity__((unsigned char)v109);
                    int v115 = v109 * 4 - 1;
                    v34 = (unsigned int)*(char*)(v102 + v115);
                    v35 = (unsigned int)(v115 - v34);
                    v5 = ptr24 == v35;
                    v4 = (int)ptr24 > (int)v35;
                    v3 = __parity__((unsigned char)v35 - (unsigned char)ptr24);
                    v1 = (unsigned int)ptr24 > v35;
                    v0 = (int)(int*)((int)(int*)((int)(int*)(v35 - (int)ptr24) ^ v35) & (int)(int*)((int)ptr24 ^ v35)) < 0;
                    v2 = (int*)((int)(int*)((int)(int*)((int)(int*)(v35 - (int)ptr24) ^ (int)(int*)((int)ptr24 ^ v35)) >>> 4) & 0x1);
                    if(!v1 && !v5) {
                        int v116 = (unsigned int)*(char*)((int)ptr24 + v102);
                        unsigned int v117 = (unsigned int)(v116 * 2 + 1);
                        char v118 = v117 == 75;
                        char v119 = (int)v117 < 75;
                        char v120 = __parity__((unsigned char)v117 - 75);
                        char v121 = v117 < 75;
                        char v122 = (((v117 - 75) ^ v117) & (v117 ^ 0x4b)) < 0;
                        char v123 = (((v117 - 75) ^ (v117 ^ 0x4b)) >>> 4) & 0x1;
                        if(!v118) {
                            ptr3 = ptr1;
                            ptr1 = (unsigned int*)((char*)ptr1 + 2);
                            char v124 = ptr1 ? 0: 1;
                            char v125 = (unsigned int)ptr1 >= 0x80000000;
                            char v126 = __parity__((unsigned char)ptr1);
                            char v127 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x2) ^ (int)ptr1) >>> 4) & 0x1);
                            char v128 = (unsigned int)ptr3 >= 0xfffffffe;
                            char v129 = (int)(int*)((int)(int*)((int)ptr1 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0x2)) < 0;
                        }
                        else {
                            ptr4 += 3;
                            unsigned int* ptr25 = ptr1;
                            ptr5 = (int*)((char*)ptr1 + 2);
                            char v130 = ptr5 ? 0: 1;
                            char v131 = (unsigned int)ptr5 >= 0x80000000;
                            char v132 = __parity__((unsigned char)ptr5);
                            char v133 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr25 ^ 0x2) ^ (int)ptr5) >>> 4) & 0x1);
                            char v134 = (unsigned int)ptr25 >= 0xfffffffe;
                            char v135 = (int)(int*)((int)(int*)((int)ptr5 ^ (int)ptr25) & (int*)~(int)(int*)((int)ptr25 ^ 0x2)) < 0;
                            continue camlPrintf__sub_sub_1129;
                        }
                    }
                    else {
                        --ptr6;
                        *ptr6 = &camlPrintf__loop_1159;
                        ptr0 = (int*)/*BAD_CALL!*/ caml_ml_array_bound_error(*(int*)(ptr6 + 1), *(int*)(ptr6 + 2), *(int*)(ptr6 + 3), *(int*)(ptr6 + 4));
                    }
                }
            }
            ptr2 = *(ptr4 + 5);
            ptr0 = *(ptr4 + 7);
            v6 = *ptr2;
            ptr4 = ptr2;
            jump v6;
        }
    }
    ptr2 = *(ptr4 + 2);
    ptr0 = *(ptr4 + 4);
    v6 = *ptr2;
    ptr4 = ptr2;
    ptr3 = ptr6;
    ++ptr6;
    v5 = ptr6 ? 0: 1;
    v4 = (int)ptr6 < 0;
    v3 = __parity__((unsigned char)ptr6);
    v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 ^ 0x4) ^ (int)ptr6) >>> 4) & 0x1);
    v1 = (unsigned int)ptr3 >= 0xfffffffc;
    v0 = (int)(int*)((int)(int*)((int)ptr6 ^ (int)ptr3) & (int*)~(int)(int*)((int)ptr3 ^ 0x4)) < 0;
    jump v6;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__summarize_format_type_1162() {
    int* ptr0;
    int v0;
    int v1;
    int v2 = v0;
    int* ptr1 = camlBuffer__create_1039();
    int* ptr2 = ptr1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 44);
        caml_young_ptr -= 44;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v1, (int)ptr1);
        }
    }
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__add_char_1166;
    *(int**)(ptr0 + 4) = ptr1;
    *(ptr0 + 5) = 5367;
    *(ptr0 + 6) = &caml_curry3;
    *(ptr0 + 7) = 7;
    *(ptr0 + 8) = &camlPrintf__add_conv_1169;
    *(int**)(ptr0 + 9) = ptr1;
    *(unsigned int*)(ptr0 + 10) = ptr0 + 1;
    camlPrintf__iter_on_format_args_1137();
    return camlString__sub_1046(ptr2[1]);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__to_string_1054() {
    int v0;
    unsigned int v1 = (unsigned int)((*(int*)(v0 - 4) >>> 10) * 4 - 1);
    return camlString__sub_1046((v1 - (unsigned int)*(char*)(v0 + v1)) * 2 + 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlPrintf__valid_float_loop_1273() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlSource__entry() {
    int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    int v4;
    int v5;
    unsigned int v6;
    int v7;
    char v8;
    int* ptr0 = &v0;
    char v9 = &v0 == 20;
    char v10 = (int)&v5 < 0;
    char v11 = __parity__((unsigned char)&v0 - 20);
    char v12 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x14) ^ (int)&v5) >>> 4) & 0x1);
    char v13 = (unsigned int)&v0 < 20;
    char v14 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x14)) < 0;
    int v15 = sub_804B5CD(v5, v1, v6, v2, v7, v0);
    int v16 = &caml_exn_Invalid_argument;
    int v17 = *(int*)v15;
    char v18 = v17 == &caml_exn_Invalid_argument;
    char v19 = v17 < &caml_exn_Invalid_argument;
    char v20 = __parity__((unsigned char)v17 - 168);
    char v21 = (unsigned int)v17 < &caml_exn_Invalid_argument;
    char v22 = (((v17 - &caml_exn_Invalid_argument) ^ v17) & (v17 ^ &caml_exn_Invalid_argument)) < 0;
    char v23 = (((v17 - &caml_exn_Invalid_argument) ^ (v17 ^ &caml_exn_Invalid_argument)) >>> 4) & 0x1;
    if(!v18) {
        caml_exception_pointer = v3;
        int v24 = v4;
        int* ptr1 = &v8;
        jump v24;
    }
    v2 = 3;
    v1 = 1;
    v6 = 1;
    v7 = caml_c_call();
    unsigned int v25 = 3;
    int v26 = caml_c_call();
    v5 = v26;
    for(unsigned int i = v6; (int)i < (int)v2; i = v6) {
        int v27 = v7;
        *(unsigned int*)(i * 2 + v27 - 2) = i;
        *(int*)((i + 2) * 2 + v27 - 2) = i + 2;
        *(int*)((i + 4) * 2 + v27 - 2) = i + 4;
        *(int*)((i + 6) * 2 + v27 - 2) = i + 6;
        *(int*)((i + 8) * 2 + v27 - 2) = i + 8;
        *(int*)((i + 10) * 2 + v27 - 2) = i + 10;
        *(int*)((i + 12) * 2 + v27 - 2) = i + 12;
        *(int*)((i + 14) * 2 + v27 - 2) = i + 14;
        *(int*)((i + 16) * 2 + v27 - 2) = i + 16;
        *(int*)((i + 18) * 2 + v27 - 2) = i + 18;
        v6 = i + 20;
    }
    for(unsigned int j = v1; (int)j >= 1; j -= 20) {
        int v28 = v7;
        *(int*)(j * 2 + v26 - 2) = *(int*)(j * 2 + v28 - 2);
        *(int*)((j - 2) * 2 + v26 - 2) = *(int*)((j - 2) * 2 + v28 - 2);
        *(int*)((j - 4) * 2 + v26 - 2) = *(int*)((j - 4) * 2 + v28 - 2);
        *(int*)((j - 6) * 2 + v26 - 2) = *(int*)((j - 6) * 2 + v28 - 2);
        *(int*)((j - 8) * 2 + v26 - 2) = *(int*)((j - 8) * 2 + v28 - 2);
        *(int*)((j - 10) * 2 + v26 - 2) = *(int*)((j - 10) * 2 + v28 - 2);
        *(int*)((j - 12) * 2 + v26 - 2) = *(int*)((j - 12) * 2 + v28 - 2);
        *(int*)((j - 14) * 2 + v26 - 2) = *(int*)((j - 14) * 2 + v28 - 2);
        *(int*)((j - 16) * 2 + v26 - 2) = *(int*)((j - 16) * 2 + v28 - 2);
        *(int*)((j - 18) * 2 + v26 - 2) = *(int*)((j - 18) * 2 + v28 - 2);
    }
    int v29 = camlPrintf__printf_1393();
    *(int*)v29();
    return 1;
}

int camlStd_exit__entry() {
    **gvar_8075630();
    return 1;
}

int camlString__apply1_1100() {
    int v0;
    int result;
    unsigned int v1 = (unsigned int)((*(int*)(result - 4) >>> 10) * 4 - 1);
    if((v1 - (unsigned int)*(char*)(v1 + result)) * 2 == 0) {
        return result;
    }
    int v2 = result;
    int v3 = v0;
    int v4 = camlString__copy_1042();
    int v5 = *(int*)v0();
    int result1 = v4;
    *(char*)result1 = (unsigned char)(v5 >>> 1);
    return result1;
}

int camlString__capitalize_1104() {
    return camlString__apply1_1100();
}

int camlString__compare_1145() {
    int v0;
    int v1;
    return caml_string_compare(v0, v1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__concat_1066(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int* ptr2;
    if(ptr2 != 1) {
        int v1 = v0;
        int* ptr3 = *(unsigned int*)(ptr2 + 1);
        int v2 = *ptr2;
        while(1) {
            ptr1 = (int*)(caml_young_ptr - 36);
            caml_young_ptr -= 36;
            if(caml_young_limit <= (unsigned int)ptr1) {
                break;
            }
            else {
                caml_call_gc(param0, param1);
            }
        }
        int result = (int)(ptr1 + 1);
        *ptr1 = 0x400;
        *(int*)(int)(ptr1 + 1) = 1;
        int* ptr4 = ptr1 + 3;
        *(ptr1 + 2) = 0x400;
        *(ptr1 + 3) = 1;
        *(ptr1 + 4) = 4343;
        *(ptr1 + 5) = &camlString__fun_1160;
        *(ptr1 + 6) = 3;
        *(ptr1 + 7) = (int)(ptr1 + 1);
        *(unsigned int*)(ptr1 + 8) = ptr1 + 3;
        camlList__iter_1074();
        unsigned int v3 = (unsigned int)((*(int*)(v1 - 4) >>> 10) * 4 - 1);
        void* ptr5 = (void*)((v3 - (unsigned int)*(char*)(v3 + v1)) * 2 * ((*(int*)result - 2) >> 1) + *ptr4);
        int v4 = caml_c_call();
        result = v4;
        int v5 = v2;
        unsigned int v6 = (unsigned int)((*(int*)(v5 - 4) >>> 10) * 4 - 1);
        caml_blit_string(v5, 1, v4, 1, (v6 - (unsigned int)*(char*)(v6 + v5)) * 2 + 1);
        while(1) {
            ptr0 = (int*)(caml_young_ptr - 32);
            caml_young_ptr -= 32;
            if(caml_young_limit <= (unsigned int)ptr0) {
                break;
            }
            else {
                caml_call_gc(param0, param1);
            }
        }
        *ptr0 = 0x400;
        unsigned int v7 = (unsigned int)((*(int*)(v5 - 4) >>> 10) * 4 - 1);
        *(ptr0 + 1) = (v7 - (unsigned int)*(char*)(v7 + v5)) * 2 + 1;
        *(ptr0 + 2) = 5367;
        *(ptr0 + 3) = &camlString__fun_1163;
        *(ptr0 + 4) = 3;
        *(ptr0 + 5) = v1;
        *(ptr0 + 6) = v4;
        *(unsigned int*)(ptr0 + 7) = ptr0 + 1;
        camlList__iter_1074();
        return result;
    }
    return &camlString__29;
}

int camlString__contains_1137() {
    int v0;
    return camlString__contains_from_1132(v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__contains_from_1132(int param0) {
    int v0;
    char v1;
    void* ptr0;
    unsigned int v2;
    int v3;
    unsigned int v4 = v2;
    int v5 = param0;
    int v6 = *(int*)(v3 - 4);
    int v7 = *(int*)(v3 - 4);
    int v8 = v6 >>> 10;
    char v9 = (v7 >>> 9) & 0x1;
    char v10 = v1;
    char v11 = v8 ? 0: 1;
    char v12 = v8 < 0;
    char v13 = __parity__((unsigned char)v8);
    int v14 = v8 * 4 - 1;
    unsigned int v15 = (unsigned int)*(char*)(v3 + v14);
    int v16 = v14;
    int v17 = v14 - v15;
    char v18 = v17 ? 0: 1;
    char v19 = v17 < 0;
    char v20 = __parity__((unsigned char)v17);
    char v21 = (((v15 ^ v16) ^ v17) >>> 4) & 0x1;
    char v22 = v15 > (unsigned int)v16;
    char v23 = (int)((v15 ^ v16) & (v17 ^ v16)) < 0;
    unsigned int v24 = (unsigned int)(v17 * 2 + 1);
    char v25 = v4 == 1;
    char v26 = (int)v4 < 1;
    char v27 = __parity__((unsigned char)v4 - 1);
    char v28 = v4 < 1;
    char v29 = (((v4 - 1) ^ v4) & (v4 ^ 0x1)) < 0;
    char v30 = (((v4 - 1) ^ (v4 ^ 0x1)) >>> 4) & 0x1;
    if(v26 == v29) {
        v25 = v24 == v4;
        v26 = (int)v24 > (int)v4;
        v27 = __parity__((unsigned char)v4 - (unsigned char)v24);
        v28 = v24 > v4;
        v29 = (int)(((v4 - v24) ^ v4) & (v24 ^ v4)) < 0;
        v30 = (((v4 - v24) ^ (v24 ^ v4)) >>> 4) & 0x1;
        if((v25 || v26 != v29)) {
            int v31 = sub_8055ED0(v0);
            v24 = *(unsigned int*)v31;
            v25 = v24 == &caml_exn_Not_found;
            v26 = (int)v24 < &caml_exn_Not_found;
            v27 = __parity__((unsigned char)v24 - 24);
            v28 = v24 < &caml_exn_Not_found;
            v29 = (((v24 - &caml_exn_Not_found) ^ v24) & (v24 ^ &caml_exn_Not_found)) < 0;
            v30 = (((v24 - &caml_exn_Not_found) ^ (v24 ^ &caml_exn_Not_found)) >>> 4) & 0x1;
            if(v25) {
                return 1;
            }
            int* ptr1 = &ptr0;
            caml_raise_exn();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__copy_1042() {
    int v0;
    int v1 = v0;
    unsigned int v2 = (unsigned int)((*(int*)(v0 - 4) >>> 10) * 4 - 1);
    int v3 = (v2 - (unsigned int)*(char*)(v2 + v0)) * 2 + 1;
    int result = caml_c_call();
    caml_blit_string(v0, 1, result, 1, v3);
    return result;
}

int camlString__entry() {
    camlString = &camlString__24;
    gvar_8077E88 = &camlString__23;
    gvar_8077E8C = &camlString__22;
    gvar_8077E90 = &camlString__21;
    gvar_8077E94 = &camlString__20;
    gvar_8077E9C = &camlString__19;
    gvar_8077E98 = &camlString__18;
    gvar_8077EA0 = &camlString__17;
    gvar_8077ED4 = &camlString__16;
    gvar_8077EC0 = &camlString__15;
    gvar_8077EC4 = &camlString__14;
    gvar_8077ED8 = &camlString__13;
    gvar_8077EC8 = &camlString__12;
    gvar_8077ECC = &camlString__11;
    gvar_8077EDC = &camlString__10;
    gvar_8077EA4 = &camlString__9;
    gvar_8077EAC = &camlString__8;
    gvar_8077EE0 = &camlString__7;
    gvar_8077EA8 = &camlString__6;
    gvar_8077EB0 = &camlString__5;
    gvar_8077EB8 = &camlString__4;
    gvar_8077EB4 = &camlString__3;
    gvar_8077EBC = &camlString__2;
    gvar_8077ED0 = &camlString__1;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__fill_1051(unsigned int param0, int param1) {
    int v0;
    unsigned int v1;
    char v2 = v1 == 1;
    char v3 = (int)v1 < 1;
    char v4 = (((v1 - 1) ^ v1) & (v1 ^ 0x1)) < 0;
    if(v3 == v4) {
        v2 = param0 == 1;
        v3 = (int)param0 < 1;
        v27 = __parity__((unsigned char)param0 - 1);
        v30 = param0 < 1;
        v4 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
        v28 = (((param0 - 1) ^ (param0 ^ 0x1)) >>> 4) & 0x1;
        if(v3 == v4) {
            int v5 = *(int*)(v0 - 4);
            int v6 = *(int*)(v0 - 4);
            int v7 = v5 >>> 10;
            char v8 = (v6 >>> 9) & 0x1;
            char v9 = v4;
            char v10 = v7 ? 0: 1;
            char v11 = v7 < 0;
            char v12 = __parity__((unsigned char)v7);
            unsigned int v13 = (unsigned int)(v7 * 4 - 1);
            unsigned int v14 = (unsigned int)*(char*)(v0 + v13);
            unsigned int v15 = v13;
            void* ptr0 = (void*)(v13 - v14);
            char v16 = ptr0 ? 0: 1;
            char v17 = (int)ptr0 < 0;
            char v18 = __parity__((unsigned char)ptr0);
            char v19 = (int*)((int)(int*)((int)(int*)((v14 ^ v15) ^ (int)ptr0) >>> 4) & 0x1);
            char v20 = v14 > v15;
            char v21 = (int)(int*)((int)(int*)((int)ptr0 ^ v15) & (v14 ^ v15)) < 0;
            void* ptr1 = ptr0;
            int* ptr2 = (int*)((int)ptr0 * 2);
            char v22 = (int)ptr1 < 0;
            char v23 = (int)ptr1 < 0 ^ (int*)((int)(int*)((int)ptr1 >>> 30) & 0x1);
            char v24 = ptr2 ? 0: 1;
            char v25 = (int)ptr2 < 0;
            char v26 = __parity__((unsigned char)ptr2);
            int* ptr3 = (int*)((int)ptr2 - param0);
            int* ptr4 = (int*)((char*)ptr3 + 2);
            v2 = v1 == ptr4;
            v3 = (int)v1 < (int)ptr4;
            v27 = __parity__((unsigned char)v1 - (unsigned char)ptr4);
            v30 = v1 < (unsigned int)ptr4;
            v4 = (int)(int*)((int)(int*)((int)(int*)(v1 - (int)ptr4) ^ v1) & (int)(int*)(v1 ^ (int)ptr4)) < 0;
            v28 = (int*)((int)(int*)((int)(int*)((int)(int*)(v1 - (int)ptr4) ^ (int)(int*)(v1 ^ (int)ptr4)) >>> 4) & 0x1);
            if((v2 || v3 != v4)) {
                return caml_fill_string(v0, (int)v1, (int)param0, param1);
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlString__fun_1160() {
    int v0;
    int v1;
    int* ptr0 = *(unsigned int*)(v0 + 8);
    *ptr0 = *ptr0 + 2;
    unsigned int v2 = (unsigned int)((*(int*)(v1 - 4) >>> 10) * 4 - 1);
    **(unsigned int*)(v0 + 12) = (v2 - (unsigned int)*(char*)(v1 + v2)) * 2 + **(unsigned int*)(v0 + 12);
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__fun_1163() {
    int v0;
    int v1;
    int v2 = *(int*)(v1 + 8);
    unsigned int v3 = (unsigned int)((*(int*)(v2 - 4) >>> 10) * 4 - 1);
    int v4 = (v3 - (unsigned int)*(char*)(v3 + v2)) * 2 + 1;
    int v5 = (v3 - (unsigned int)*(char*)(v3 + v2)) * 2 + 1;
    int v6 = **(int**)(v1 + 16);
    int v7 = *(int*)(v1 + 12);
    int v8 = 1;
    caml_blit_string(*(int*)(v1 + 8), 1, v7, v6, v4);
    int v9 = *(int*)(v1 + 8);
    unsigned int v10 = (unsigned int)((*(int*)(v9 - 4) >>> 10) * 4 - 1);
    **(unsigned int*)(v1 + 16) = (v10 - (unsigned int)*(char*)(v10 + v9)) * 2 + **(unsigned int*)(v1 + 16);
    unsigned int v11 = (unsigned int)((*(int*)(v0 - 4) >>> 10) * 4 - 1);
    int v12 = (v11 - (unsigned int)*(char*)(v11 + v0)) * 2 + 1;
    v5 = (v11 - (unsigned int)*(char*)(v11 + v0)) * 2 + 1;
    caml_blit_string(v0, 1, *(int*)(v1 + 12), **(int**)(v1 + 16), v12);
    unsigned int v13 = (unsigned int)((*(int*)(v0 - 4) >>> 10) * 4 - 1);
    **(unsigned int*)(v1 + 16) = (v13 - (unsigned int)*(char*)(v0 + v13)) * 2 + **(unsigned int*)(v1 + 16);
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__index_1113() {
    int v0;
    return camlString__index_rec_1108(1, v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__index_from_1116(int param0) {
    unsigned int v0;
    int v1;
    unsigned int v2 = v0;
    int v3 = param0;
    int v4 = *(int*)(v1 - 4);
    int v5 = *(int*)(v1 - 4);
    int v6 = v4 >>> 10;
    unsigned int v7 = (unsigned int)(v6 * 4 - 1);
    unsigned int v8 = (unsigned int)*(char*)(v1 + v7);
    unsigned int v9 = v7;
    unsigned int v10 = v7 - v8;
    unsigned int v11 = (unsigned int)(v10 * 2 + 1);
    char v12 = v2 == 1;
    char v13 = (int)v2 < 1;
    char v14 = (((v2 - 1) ^ v2) & (v2 ^ 0x1)) < 0;
    if(v13 == v14) {
        v12 = v11 == v2;
        v13 = (int)v11 > (int)v2;
        v27 = __parity__((unsigned char)v2 - (unsigned char)v11);
        v26 = v11 > v2;
        v14 = (int)(((v2 - v11) ^ v2) & (v11 ^ v2)) < 0;
        v28 = (((v2 - v11) ^ (v11 ^ v2)) >>> 4) & 0x1;
        if((v12 || v13 != v14)) {
            return camlString__index_rec_1108((int)v2, v3);
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

unsigned int camlString__index_rec_1108(unsigned int param0, unsigned int param1) {
    int v0;
    while((unsigned int)((unsigned int)*(char*)((param0 >> 1) + v0) * 2 + 1) != param1) {
        param0 += 2;
    }
    return param0;
}

int camlString__iter_1062() {
    unsigned int v0;
    int* ptr0;
    unsigned int v1 = (unsigned int)((*(int*)(v0 - 4) >>> 10) * 4 - 1);
    unsigned int v2 = (unsigned int)((v1 - (unsigned int)*(char*)(v1 + v0)) * 2 - 1);
    if((int)v2 >= 1) {
        unsigned int v3 = v2;
        unsigned int v4 = 1;
        unsigned int v5 = v0;
        int* ptr1 = ptr0;
        do {
            *ptr0();
            v0 = v4;
            v4 += 2;
        }
        while(v2 != v0);
    }
    return 1;
}

int camlString__lowercase_1098() {
    return camlString__map_1090();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__map_1090() {
    int* ptr0;
    int result;
    unsigned int v0 = (unsigned int)((*(int*)(result - 4) >>> 10) * 4 - 1);
    void* ptr1 = (void*)((v0 - (int)*(char*)(v0 + result)) * 2 + 1);
    if(ptr1 == 1) {
        return result;
    }
    int v1 = result;
    int* ptr2 = ptr0;
    void* ptr3 = ptr1;
    int result1 = caml_c_call();
    ptr1 = (void*)((int)ptr1 - 2);
    if((int)ptr1 >= 1) {
        void* ptr4 = ptr1;
        int v2 = 1;
        int v3 = result1;
        do {
            int v4 = *ptr2();
            int v5 = v2;
            result1 = v3;
            *(char*)((v5 >> 1) + result1) = (unsigned char)(v4 >>> 1);
            v2 = v5 + 2;
        }
        while((int*)((int)ptr4 + 2) != v2);
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__rcontains_from_1140() {
    int v0;
    void* ptr0;
    int v1;
    unsigned int v2;
    char v3 = v2 == 1;
    char v4 = (int)v2 < 1;
    char v5 = __parity__((unsigned char)v2 - 1);
    char v6 = v2 < 1;
    char v7 = (((v2 - 1) ^ v2) & (v2 ^ 0x1)) < 0;
    char v8 = (((v2 - 1) ^ (v2 ^ 0x1)) >>> 4) & 0x1;
    if(v4 == v7) {
        int v9 = *(int*)(v1 - 4);
        int v10 = *(int*)(v1 - 4);
        int v11 = v9 >>> 10;
        char v12 = (v10 >>> 9) & 0x1;
        char v13 = v7;
        char v14 = v11 ? 0: 1;
        char v15 = v11 < 0;
        char v16 = __parity__((unsigned char)v11);
        int v17 = v11 * 4 - 1;
        unsigned int v18 = (unsigned int)*(char*)(v1 + v17);
        int v19 = v17;
        int v20 = v17 - v18;
        char v21 = v20 ? 0: 1;
        char v22 = v20 < 0;
        char v23 = __parity__((unsigned char)v20);
        char v24 = (((v18 ^ v19) ^ v20) >>> 4) & 0x1;
        char v25 = v18 > (unsigned int)v19;
        char v26 = ((v20 ^ v19) & (v18 ^ v19)) < 0;
        unsigned int v27 = (unsigned int)(v20 * 2 + 1);
        v3 = v27 == v2;
        v4 = (int)v27 > (int)v2;
        v5 = __parity__((unsigned char)v2 - (unsigned char)v27);
        v6 = v27 > v2;
        v7 = (int)(((v2 - v27) ^ v2) & (v27 ^ v2)) < 0;
        v8 = (((v2 - v27) ^ (v27 ^ v2)) >>> 4) & 0x1;
        if(v4 != v7) {
            int v28 = sub_8055F70(v0);
            v2 = *(unsigned int*)v28;
            v3 = v2 == &caml_exn_Not_found;
            v4 = (int)v2 < &caml_exn_Not_found;
            v5 = __parity__((unsigned char)v2 - 24);
            v6 = v2 < &caml_exn_Not_found;
            v7 = (((v2 - &caml_exn_Not_found) ^ v2) & (v2 ^ &caml_exn_Not_found)) < 0;
            v8 = (((v2 - &caml_exn_Not_found) ^ (v2 ^ &caml_exn_Not_found)) >>> 4) & 0x1;
            if(v3) {
                return 1;
            }
            int* ptr1 = &ptr0;
            caml_raise_exn();
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__rindex_1125() {
    int v0;
    return camlString__rindex_rec_1121(v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlString__rindex_from_1128(int param0) {
    int v0;
    unsigned int v1;
    char v2 = (int)v1 < -1;
    char v3 = (((v1 + 1) ^ v1) & ~v1) < 0;
    if(v2 == v3) {
        int v4 = *(int*)(v0 - 4);
        int v5 = *(int*)(v0 - 4);
        int v6 = v4 >>> 10;
        char v7 = (v5 >>> 9) & 0x1;
        char v8 = v3;
        char v9 = v6 ? 0: 1;
        char v10 = v6 < 0;
        char v11 = __parity__((unsigned char)v6);
        unsigned int v12 = (unsigned int)(v6 * 4 - 1);
        unsigned int v13 = (unsigned int)*(char*)(v0 + v12);
        unsigned int v14 = v12;
        unsigned int v15 = v12 - v13;
        char v16 = v15 ? 0: 1;
        char v17 = v15 >= 0x80000000;
        char v18 = __parity__((unsigned char)v15);
        char v19 = (((v13 ^ v14) ^ v15) >>> 4) & 0x1;
        char v20 = v13 > v14;
        char v21 = (int)((v15 ^ v14) & (v13 ^ v14)) < 0;
        unsigned int v22 = (unsigned int)(v15 * 2 + 1);
        v25 = v22 == v1;
        v2 = (int)v22 > (int)v1;
        v23 = __parity__((unsigned char)v1 - (unsigned char)v22);
        v27 = v22 > v1;
        v3 = (int)(((v1 - v22) ^ v1) & (v22 ^ v1)) < 0;
        v24 = (((v1 - v22) ^ (v22 ^ v1)) >>> 4) & 0x1;
        if(v2 != v3) {
            return camlString__rindex_rec_1121(param0);
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

unsigned int camlString__rindex_rec_1121(unsigned int param0) {
    unsigned int result;
    int v0;
    while((unsigned int)((unsigned int)*(char*)((result >> 1) + v0) * 2 + 1) != param0) {
        result -= 2;
    }
    return result;
}

int camlString__uncapitalize_1106() {
    return camlString__apply1_1100();
}

int camlString__uppercase_1096() {
    return camlString__map_1090();
}

int camlSys__catch_break_1082() {
    return camlSys__set_signal_1057();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlSys__entry() {
    unsigned int* ptr0 = (unsigned int*)caml_c_call();
    unsigned int v0 = *(ptr0 + 1);
    gvar_8078310 = *ptr0;
    camlSys = v0;
    unsigned int* ptr1 = (unsigned int*)caml_c_call();
    unsigned int v1 = *(ptr1 + 1);
    gvar_8078318 = *ptr1;
    gvar_807831C = v1;
    gvar_8078324 = (unsigned int)((2 << (((gvar_807831C - 20) >> 1) & 0x1f)) - 1);
    int v2 = gvar_8078324 >> 1;
    int v3 = (int)(gvar_807831C >> 1);
    if(v3 < 0) {
        v3 += 7;
    }
    gvar_8078320 = (unsigned int)((v3 >> 3) * 2 * v2 - 1);
    int v4 = caml_alloc3();
    *(int*)v4 = 0x400;
    *(int*)(v4 + 4) = 1;
    gvar_8078314 = (int*)(v4 + 4);
    gvar_8078328 = &camlSys__4;
    gvar_807832C = 0xffffffff;
    gvar_8078330 = 0xfffffffd;
    gvar_8078334 = 0xfffffffb;
    gvar_8078338 = 0xfffffff9;
    gvar_807833C = 0xfffffff7;
    gvar_8078340 = 0xfffffff5;
    gvar_8078344 = 0xfffffff3;
    gvar_8078348 = 0xfffffff1;
    gvar_807834C = 0xffffffef;
    gvar_8078350 = 0xffffffed;
    gvar_8078354 = 0xffffffeb;
    gvar_8078358 = 0xffffffe9;
    gvar_807835C = 0xffffffe7;
    gvar_8078360 = 0xffffffe5;
    gvar_8078364 = 0xffffffe3;
    gvar_8078368 = 0xffffffe1;
    gvar_807836C = 0xffffffdf;
    gvar_8078370 = 0xffffffdd;
    gvar_8078374 = 0xffffffdb;
    gvar_8078378 = 0xffffffd9;
    gvar_807837C = 0xffffffd7;
    *(int*)(v4 + 8) = 0x400;
    *(int*)(v4 + 12) = "Sys.Break";
    gvar_8078380 = (int*)(v4 + 12);
    gvar_8078384 = &camlSys__2;
    gvar_8078388 = "3.12.1";
    return 1;
}

int camlUnixLabels__entry() {
    camlUnixLabels = camlUnix;
    gvar_8075274 = gvar_8072D00;
    gvar_8075278 = gvar_8072D04;
    gvar_807527C = gvar_8072D08;
    gvar_8075280 = gvar_8072D0C;
    gvar_8075284 = gvar_8072D10;
    gvar_8075288 = gvar_8072D14;
    gvar_807528C = gvar_8072D18;
    gvar_8075290 = gvar_8072D1C;
    gvar_8075294 = gvar_8072D20;
    gvar_8075298 = gvar_8072D24;
    gvar_807529C = gvar_8072D28;
    gvar_80752A0 = gvar_8072D2C;
    gvar_80752A4 = gvar_8072D30;
    gvar_80752A8 = gvar_8072D34;
    gvar_80752AC = gvar_8072D38;
    gvar_80752B0 = gvar_8072D3C;
    gvar_80752B4 = 1;
    gvar_80752B8 = 3;
    gvar_80752BC = 5;
    gvar_80752C0 = gvar_8072D4C;
    gvar_80752C4 = gvar_8072D50;
    gvar_80752C8 = gvar_8072D54;
    gvar_80752CC = gvar_8072D58;
    gvar_80752D0 = gvar_8072D5C;
    gvar_80752D4 = gvar_8072D60;
    gvar_80752D8 = gvar_8072D64;
    gvar_80752DC = gvar_8072D68;
    gvar_80752E0 = gvar_8072D6C;
    gvar_80752E4 = gvar_8072D70;
    gvar_80752E8 = gvar_8072D74;
    gvar_80752EC = gvar_8072D78;
    gvar_80752F0 = gvar_8072D7C;
    gvar_80752F4 = gvar_8072D80;
    gvar_80752F8 = gvar_8072D84;
    gvar_80752FC = gvar_8072D88;
    gvar_8075300 = gvar_8072D8C;
    gvar_8075304 = gvar_8072D90;
    gvar_8075308 = gvar_8072D94;
    gvar_807530C = gvar_8072D98;
    gvar_8075310 = gvar_8072D9C;
    gvar_8075314 = gvar_8072DA0;
    gvar_8075318 = gvar_8072DA4;
    gvar_807531C = gvar_8072DA8;
    gvar_8075320 = gvar_8072DAC;
    gvar_8075324 = gvar_8072DB0;
    gvar_8075328 = gvar_8072DB4;
    gvar_807532C = gvar_8072DB8;
    gvar_8075330 = gvar_8072DBC;
    gvar_8075334 = gvar_8072DC0;
    gvar_8075338 = gvar_8072DC4;
    gvar_807533C = gvar_8072DC8;
    gvar_8075340 = gvar_8072DCC;
    gvar_8075344 = gvar_8072DD0;
    gvar_8075348 = gvar_8072DD4;
    gvar_807534C = gvar_8072DD8;
    gvar_8075350 = gvar_8072DDC;
    gvar_8075354 = gvar_8072DE0;
    gvar_8075358 = gvar_8072DE4;
    gvar_807535C = gvar_8072DE8;
    gvar_8075360 = gvar_8072DEC;
    gvar_8075364 = gvar_8072DF0;
    gvar_8075368 = gvar_8072DF4;
    gvar_807536C = gvar_8072DF8;
    gvar_8075370 = gvar_8072DFC;
    gvar_8075374 = gvar_8072E00;
    gvar_8075378 = gvar_8072E04;
    gvar_807537C = gvar_8072E08;
    gvar_8075380 = gvar_8072E0C;
    gvar_8075384 = gvar_8072E10;
    gvar_8075388 = gvar_8072E14;
    gvar_807538C = gvar_8072E18;
    gvar_8075390 = gvar_8072E1C;
    gvar_8075394 = gvar_8072E20;
    gvar_8075398 = gvar_8072E24;
    gvar_807539C = gvar_8072E28;
    gvar_80753A0 = gvar_8072E2C;
    gvar_80753A4 = gvar_8072E30;
    gvar_80753A8 = gvar_8072E34;
    gvar_80753AC = gvar_8072E38;
    gvar_80753B0 = gvar_8072E3C;
    gvar_80753B4 = gvar_8072E40;
    gvar_80753B8 = gvar_8072E44;
    gvar_80753BC = gvar_8072E48;
    gvar_80753C0 = gvar_8072E4C;
    gvar_80753C4 = gvar_8072E50;
    gvar_80753C8 = gvar_8072E54;
    gvar_80753CC = gvar_8072E58;
    gvar_80753D0 = gvar_8072E5C;
    gvar_80753D4 = gvar_8072E60;
    gvar_80753D8 = gvar_8072E64;
    gvar_80753DC = gvar_8072E68;
    gvar_80753E0 = gvar_8072E6C;
    gvar_80753E4 = gvar_8072E70;
    gvar_80753E8 = gvar_8072E74;
    gvar_80753EC = gvar_8072E78;
    gvar_80753F0 = gvar_8072E7C;
    gvar_80753F4 = gvar_8072E80;
    gvar_80753F8 = gvar_8072E84;
    gvar_80753FC = gvar_8072E88;
    gvar_8075400 = gvar_8072E8C;
    gvar_8075404 = gvar_8072E90;
    gvar_8075408 = gvar_8072E94;
    gvar_807540C = gvar_8072E98;
    gvar_8075410 = gvar_8072E9C;
    gvar_8075414 = gvar_8072EA0;
    gvar_8075418 = gvar_8072EA4;
    gvar_807541C = gvar_8072EA8;
    gvar_8075420 = gvar_8072EAC;
    gvar_8075424 = gvar_8072EB0;
    gvar_8075428 = gvar_8072EB4;
    gvar_807542C = gvar_8072EB8;
    gvar_8075430 = gvar_8072EBC;
    gvar_8075434 = gvar_8072EC0;
    gvar_8075438 = gvar_8072EC4;
    gvar_807543C = gvar_8072EC8;
    gvar_8075440 = gvar_8072ECC;
    gvar_8075444 = gvar_8072ED0;
    gvar_8075448 = gvar_8072ED4;
    gvar_807544C = gvar_8072ED8;
    gvar_8075450 = gvar_8072EDC;
    gvar_8075454 = gvar_8072EE0;
    gvar_8075458 = gvar_8072EE4;
    gvar_807545C = gvar_8072EE8;
    gvar_8075460 = gvar_8072EEC;
    gvar_8075464 = gvar_8072EF0;
    gvar_8075468 = gvar_8072EF4;
    gvar_807546C = gvar_8072EF8;
    gvar_8075470 = gvar_8072EFC;
    gvar_8075474 = gvar_8072F00;
    gvar_8075478 = gvar_8072F04;
    gvar_807547C = gvar_8072F08;
    gvar_8075480 = gvar_8072F0C;
    gvar_8075484 = gvar_8072F10;
    gvar_8075488 = gvar_8072F14;
    gvar_807548C = gvar_8072F18;
    gvar_8075490 = gvar_8072F1C;
    gvar_8075494 = gvar_8072F20;
    gvar_8075498 = gvar_8072F24;
    gvar_807549C = gvar_8072F28;
    gvar_80754A0 = gvar_8072F2C;
    gvar_80754A4 = gvar_8072F30;
    gvar_80754A8 = gvar_8072F34;
    gvar_80754AC = gvar_8072F38;
    gvar_80754B0 = gvar_8072F3C;
    gvar_80754B4 = gvar_8072F40;
    gvar_80754B8 = gvar_8072F44;
    gvar_80754BC = gvar_8072F48;
    gvar_80754C0 = gvar_8072F4C;
    gvar_80754C4 = gvar_8072F50;
    gvar_80754C8 = gvar_8072F54;
    gvar_80754CC = gvar_8072F58;
    gvar_80754D0 = gvar_8072F5C;
    gvar_80754D4 = gvar_8072F60;
    gvar_80754D8 = gvar_8072F64;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__accept_non_intr_2024() {
    int v0;
    void* ptr0;
    int v1;
    int v2;
    int* ptr1 = &v0;
    char v3 = &v0 == 4;
    char v4 = (int)&v2 < 0;
    char v5 = __parity__((unsigned char)&v0 - 4);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&v2) >>> 4) & 0x1);
    char v7 = (unsigned int)&v0 < 4;
    char v8 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x4)) < 0;
    while(1) {
        int v9 = sub_804DFF0(v1, v0);
        unsigned int v10 = camlUnix;
        unsigned int v11 = *(unsigned int*)v9;
        char v12 = v10 == v11;
        char v13 = (int)v10 > (int)v11;
        char v14 = __parity__((unsigned char)v11 - (unsigned char)v10);
        char v15 = v10 > v11;
        char v16 = (int)(((v11 - v10) ^ v11) & (v10 ^ v11)) < 0;
        char v17 = (((v11 - v10) ^ (v10 ^ v11)) >>> 4) & 0x1;
        if(!v12) {
            break;
        }
        else {
            v11 = *(unsigned int*)(v9 + 4);
            v12 = v11 & 0x1 ? 0: 1;
            v13 = (int)(v11 & 0x1) < 0;
            v14 = __parity__((unsigned char)v11 & 0x1);
            v16 = 0;
            v15 = 0;
            if(v12) {
                break;
            }
            else {
                v12 = v11 == 23;
                v13 = (int)v11 < 23;
                v14 = __parity__((unsigned char)v11 - 23);
                v15 = v11 < 23;
                v16 = (((v11 - 23) ^ v11) & (v11 ^ 0x17)) < 0;
                v17 = (((v11 - 23) ^ (v11 ^ 0x17)) >>> 4) & 0x1;
                if(!v12) {
                    break;
                }
                else {
                    v1 = v2;
                }
            }
        }
    }
    int* ptr2 = &ptr0;
    caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__close_process_2009() {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    int v4 = v1;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v1, v2);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = v1;
    *(ptr0 + 2) = v2;
    camlUnix__find_proc_id_1997();
    int v5 = v1;
    caml_c_call();
    int v6 = sub_804DDA0(v4, v1, v3, v0);
    if(*(unsigned int*)v6 != &caml_exn_Sys_error) {
        caml_raise_exn();
    }
    int v7 = camlUnix__waitpid_non_intr_2001();
    return *(int*)(v7 + 4);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__close_process_full_2013(int param0) {
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    void* ptr0;
    int v4;
    int v5;
    int* ptr1 = &v1;
    char v6 = &v1 == 16;
    char v7 = (int)&v2 < 0;
    char v8 = __parity__((unsigned char)&v1 - 16);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x10) ^ (int)&v2) >>> 4) & 0x1);
    char v10 = (unsigned int)&v1 < 16;
    char v11 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v1) & (int)(int*)((int)&v1 ^ 0x10)) < 0;
    int v12 = v3;
    int v13 = v4;
    int v14 = v4;
    int v15 = v5;
    v2 = v5;
    while(1) {
        unsigned int v16 = caml_young_ptr;
        unsigned int v17 = caml_young_ptr;
        v0 = v16 - 16;
        char v18 = v0 ? 0: 1;
        char v19 = v0 >= 0x80000000;
        char v20 = __parity__((unsigned char)v0);
        char v21 = (((v17 ^ 0x10) ^ v0) >>> 4) & 0x1;
        char v22 = v17 < 16;
        char v23 = (int)((v0 ^ v17) & (v17 ^ 0x10)) < 0;
        caml_young_ptr = v0;
        char v24 = caml_young_limit == v0;
        char v25 = (int)caml_young_limit > (int)v0;
        char v26 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
        char v27 = caml_young_limit > v0;
        char v28 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
        char v29 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
        if(!v27) {
            break;
        }
        else {
            int v30 = caml_call_gc(v3, v15);
        }
    }
    int* ptr2 = (int*)(v0 + 4);
    *(ptr2 - 1) = 3075;
    *ptr2 = v15;
    *(ptr2 + 1) = v13;
    *(ptr2 + 2) = v3;
    int v31 = "close_process_full";
    camlUnix__find_proc_id_1997();
    int v32 = v5;
    int v33 = v2;
    int v34 = &caml_ml_close_channel;
    int v35 = caml_c_call();
    int v36 = &ptr0;
    char v37 = &v1 == 16;
    char v38 = (int)&v2 < 0;
    char v39 = __parity__((unsigned char)&v1 - 16);
    char v40 = (int*)((int)(int*)((int)(int*)((int)(int*)(&ptr0 ^ 0x4) ^ (int)&v2) >>> 4) & 0x1);
    char v41 = (unsigned int)&ptr0 >= 0xfffffffc;
    char v42 = (int)(int*)((int)(int*)((int)&v2 ^ &ptr0) & (int*)~(int)(int*)(&ptr0 ^ 0x4)) < 0;
    int v43 = sub_804DE60(v2, v12, v32, v14, v1);
    int v44 = &caml_exn_Sys_error;
    unsigned int v45 = *(unsigned int*)v43;
    char v46 = v45 == &caml_exn_Sys_error;
    char v47 = (int)v45 < &caml_exn_Sys_error;
    char v48 = __parity__((unsigned char)v45 - 108);
    char v49 = v45 < &caml_exn_Sys_error;
    char v50 = (((v45 - &caml_exn_Sys_error) ^ v45) & (v45 ^ &caml_exn_Sys_error)) < 0;
    char v51 = (((v45 - &caml_exn_Sys_error) ^ (v45 ^ &caml_exn_Sys_error)) >>> 4) & 0x1;
    if(!v46) {
        int v52 = &ptr0;
        caml_raise_exn();
        int v53 = /*BAD_CALL!*/ sub_804DE60(v12, v32, v14, v1, param0);
    }
    caml_c_call();
    int v54 = camlUnix__waitpid_non_intr_2001();
    return *(int*)(v54 + 4);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__close_process_in_2003(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1 = v0;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 1025;
    *(ptr0 + 1) = v0;
    camlUnix__find_proc_id_1997();
    int v2 = v0;
    caml_c_call();
    int v3 = camlUnix__waitpid_non_intr_2001();
    return *(int*)(v3 + 4);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__close_process_out_2006(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1 = v0;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 8);
        caml_young_ptr -= 8;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v0, param1);
        }
    }
    *ptr0 = 1026;
    *(ptr0 + 1) = v0;
    camlUnix__find_proc_id_1997();
    int v2 = v0;
    camlPervasives__close_out_1209();
    int v3 = camlUnix__waitpid_non_intr_2001();
    return *(int*)(v3 + 4);
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__create_process_1907(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int result = caml_c_call();
    if(result == 1) {
        sub_804D330(v2, v3, v4, v5, v1, v0);
        result = camlPervasives__exit_1326();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__create_process_env_1914(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int result = caml_c_call();
    if(result == 1) {
        sub_804D3E0(v2, v3, v4, v5, v6, v1, v0);
        result = camlPervasives__exit_1326();
    }
    return result;
}

int camlUnix__domain_of_sockaddr_1529() {
    int* ptr0;
    if(*(char*)(ptr0 - 1)) {
        int v0 = *ptr0;
        unsigned int v1 = (unsigned int)((*(int*)(v0 - 4) >>> 10) * 4 - 1);
        return (v1 - (unsigned int)*(char*)(v1 + v0)) * 2 != 32 ? 3: 5;
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlUnix__entry(int param0, int param1) {
    void* ptr0;
    void* ptr1;
    gvar_8072F64 = &camlUnix__175;
    gvar_8072F60 = &camlUnix__174;
    gvar_8072F5C = &camlUnix__173;
    gvar_8072F58 = &camlUnix__172;
    gvar_8072F54 = &camlUnix__171;
    gvar_8072F50 = &camlUnix__170;
    gvar_8072F4C = &camlUnix__169;
    gvar_8072F40 = &camlUnix__168;
    gvar_8072F3C = &camlUnix__167;
    gvar_8072F38 = &camlUnix__166;
    gvar_8072F34 = &camlUnix__165;
    gvar_8072F30 = &camlUnix__164;
    gvar_8072F2C = &camlUnix__163;
    gvar_8072F28 = &camlUnix__162;
    gvar_8072EE4 = &camlUnix__161;
    gvar_8072EE0 = &camlUnix__160;
    gvar_8072EDC = &camlUnix__159;
    gvar_8072ED8 = &camlUnix__158;
    gvar_8072ED4 = &camlUnix__157;
    gvar_8072ED0 = &camlUnix__156;
    gvar_8072ECC = &camlUnix__155;
    gvar_8072EC8 = &camlUnix__154;
    gvar_8072EC0 = &camlUnix__153;
    gvar_8072EAC = &camlUnix__152;
    gvar_8072EA8 = &camlUnix__151;
    gvar_8072EA4 = &camlUnix__150;
    gvar_8072EA0 = &camlUnix__149;
    gvar_8072E9C = &camlUnix__148;
    gvar_8072E98 = &camlUnix__147;
    gvar_8072E94 = &camlUnix__146;
    gvar_8072E90 = &camlUnix__145;
    gvar_8072E8C = &camlUnix__144;
    gvar_8072E88 = &camlUnix__143;
    gvar_8072E84 = &camlUnix__142;
    gvar_8072E80 = &camlUnix__141;
    gvar_8072E7C = &camlUnix__140;
    gvar_8072E78 = &camlUnix__139;
    gvar_8072E74 = &camlUnix__138;
    gvar_8072E70 = &camlUnix__137;
    gvar_8072E6C = &camlUnix__136;
    gvar_8072E68 = &camlUnix__135;
    gvar_8072E64 = &camlUnix__134;
    gvar_8072E60 = &camlUnix__133;
    gvar_8072E5C = &camlUnix__132;
    gvar_8072E58 = &camlUnix__131;
    gvar_8072E54 = &camlUnix__130;
    gvar_8072E50 = &camlUnix__129;
    gvar_8072E4C = &camlUnix__128;
    gvar_8072E48 = &camlUnix__127;
    gvar_8072E44 = &camlUnix__126;
    gvar_8072E3C = &camlUnix__125;
    gvar_8072E38 = &camlUnix__124;
    gvar_8072E34 = &camlUnix__123;
    gvar_8072E30 = &camlUnix__122;
    gvar_8072E2C = &camlUnix__121;
    gvar_8072E28 = &camlUnix__120;
    gvar_8072E24 = &camlUnix__119;
    gvar_8072E20 = &camlUnix__118;
    gvar_8072DF4 = &camlUnix__117;
    gvar_8072DF0 = &camlUnix__116;
    gvar_8072DEC = &camlUnix__115;
    gvar_8072DE8 = &camlUnix__114;
    gvar_8072DE4 = &camlUnix__113;
    gvar_8072DE0 = &camlUnix__112;
    gvar_8072DDC = &camlUnix__111;
    gvar_8072DD8 = &camlUnix__110;
    gvar_8072DD4 = &camlUnix__109;
    gvar_8072DD0 = &camlUnix__108;
    gvar_8072DCC = &camlUnix__107;
    gvar_8072DC8 = &camlUnix__106;
    gvar_8072DC4 = &camlUnix__105;
    gvar_8072DC0 = &camlUnix__104;
    gvar_8072DBC = &camlUnix__103;
    gvar_8072DB8 = &camlUnix__102;
    gvar_8072DB4 = &camlUnix__101;
    gvar_8072DB0 = &camlUnix__100;
    gvar_8072DAC = &camlUnix__99;
    gvar_8072DA8 = &camlUnix__98;
    gvar_8072DA4 = &camlUnix__97;
    gvar_8072DA0 = &camlUnix__96;
    gvar_8072D9C = &camlUnix__95;
    gvar_8072D98 = &camlUnix__94;
    gvar_8072D94 = &camlUnix__93;
    gvar_8072D90 = &camlUnix__92;
    gvar_8072D88 = &camlUnix__91;
    gvar_8072D84 = &camlUnix__90;
    gvar_8072D80 = &camlUnix__89;
    gvar_8072D7C = &camlUnix__88;
    gvar_8072D78 = &camlUnix__87;
    gvar_8072D74 = &camlUnix__86;
    gvar_8072D70 = &camlUnix__85;
    gvar_8072D6C = &camlUnix__84;
    gvar_8072D68 = &camlUnix__83;
    gvar_8072D64 = &camlUnix__82;
    gvar_8072D60 = &camlUnix__81;
    gvar_8072D50 = &camlUnix__80;
    gvar_8072D4C = &camlUnix__79;
    gvar_8072D3C = &camlUnix__78;
    gvar_8072D38 = &camlUnix__77;
    gvar_8072D34 = &camlUnix__76;
    gvar_8072D2C = &camlUnix__75;
    gvar_8072D28 = &camlUnix__74;
    gvar_8072D24 = &camlUnix__73;
    gvar_8072D20 = &camlUnix__72;
    gvar_8072D1C = &camlUnix__71;
    gvar_8072D18 = &camlUnix__70;
    gvar_8072D14 = &camlUnix__69;
    gvar_8072D10 = &camlUnix__68;
    gvar_8072D0C = &camlUnix__67;
    gvar_8072D08 = &camlUnix__66;
    gvar_8072D00 = &camlUnix__65;
    int v0 = 28;
    unsigned int v1 = caml_allocN(param0, param1);
    int* ptr2 = (int*)(v1 + 4);
    *(ptr2 - 1) = 0x400;
    *ptr2 = "Unix.Unix_error";
    camlUnix = ptr2;
    unsigned int* ptr3 = (unsigned int*)(ptr2 + 2);
    *(int*)(ptr3 - 1) = 0x1000;
    unsigned int v2 = camlUnix;
    *ptr3 = camlUnix;
    *(int*)(ptr3 + 1) = 1;
    *(int*)(ptr3 + 2) = &camlUnix__62;
    *(int*)(ptr3 + 3) = &camlUnix__63;
    int v3 = "Unix.Unix_error";
    int v4 = camlCallback__register_exception_1034(param0, param1);
    int v5 = &camlUnix__60;
    gvar_8072D04 = &camlUnix__60;
    gvar_8072D40 = 1;
    gvar_8072D44 = 3;
    gvar_8072D48 = 5;
    int v6 = &camlUnix__59;
    gvar_8072D54 = &camlUnix__59;
    int v7 = &camlUnix__58;
    gvar_8072D58 = &camlUnix__58;
    int v8 = &camlUnix__57;
    gvar_8072D5C = &camlUnix__57;
    int v9 = &camlUnix__56;
    int v10 = 28;
    unsigned int v11 = caml_allocN(param0, param1);
    int* ptr4 = (int*)(v11 + 4);
    *(ptr4 - 1) = 0x1800;
    *ptr4 = &camlUnix__50;
    *(ptr4 + 1) = &camlUnix__51;
    *(ptr4 + 2) = &camlUnix__52;
    *(ptr4 + 3) = &camlUnix__53;
    *(ptr4 + 4) = &camlUnix__54;
    *(ptr4 + 5) = &camlUnix__55;
    gvar_8072D8C = ptr4;
    int v12 = &camlUnix__49;
    gvar_8072F68 = &camlUnix__49;
    int v13 = &camlUnix__48;
    gvar_8072E40 = &camlUnix__48;
    int v14 = &camlUnix__47;
    gvar_8072F6C = &camlUnix__47;
    int v15 = &unix_inet_addr_of_string;
    unsigned int v16 = (unsigned int)caml_c_call();
    int* ptr5 = &ptr1;
    char v17 = &ptr0 ? 0: 1;
    char v18 = (int)&ptr0 < 0;
    char v19 = __parity__((unsigned char)&ptr0);
    char v20 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x4) ^ (int)&ptr0) >>> 4) & 0x1);
    char v21 = (unsigned int)&ptr1 >= 0xfffffffc;
    char v22 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr1 ^ 0x4)) < 0;
    gvar_8072EB0 = v16;
    int v23 = &unix_inet_addr_of_string;
    unsigned int v24 = (unsigned int)caml_c_call();
    int* ptr6 = &ptr1;
    char v25 = &ptr0 ? 0: 1;
    char v26 = (int)&ptr0 < 0;
    char v27 = __parity__((unsigned char)&ptr0);
    char v28 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x4) ^ (int)&ptr0) >>> 4) & 0x1);
    char v29 = (unsigned int)&ptr1 >= 0xfffffffc;
    char v30 = (int)(int*)((int)(int*)((int)&ptr1 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr1 ^ 0x4)) < 0;
    gvar_8072EB4 = v24;
    int v31 = sub_804E6FA();
    int v32 = &caml_exn_Failure;
    unsigned int v33 = *(unsigned int*)v31;
    char v34 = v33 == &caml_exn_Failure;
    char v35 = (int)v33 < &caml_exn_Failure;
    char v36 = __parity__((unsigned char)v33 - 140);
    char v37 = v33 < &caml_exn_Failure;
    char v38 = (((v33 - &caml_exn_Failure) ^ v33) & (v33 ^ &caml_exn_Failure)) < 0;
    char v39 = (((v33 - &caml_exn_Failure) ^ (v33 ^ &caml_exn_Failure)) >>> 4) & 0x1;
    if(v34) {
        return sub_804E721();
    }
    int* ptr7 = &ptr1;
    /*BAD_CALL!*/ caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlUnix__establish_server_2026() {
    int v0;
    int v1 = v0;
    camlUnix__domain_of_sockaddr_1529();
    void* ptr0 = (void*)caml_c_call();
    camlUnix__setsockopt_1646(3);
    caml_c_call();
    void* ptr1 = ptr0;
    caml_c_call();
    while(1) {
        int v2 = camlUnix__accept_non_intr_2024();
        int v3 = *(int*)v2;
        int v4 = caml_c_call();
        if(v4 != 1) {
            caml_c_call();
            camlUnix__waitpid_non_intr_2001();
        }
        else {
            int v5 = caml_c_call();
            if(v5 != 1) {
                camlPervasives__exit_1326();
            }
            caml_c_call();
            camlUnix__try_set_close_on_exec_1366();
            caml_c_call();
            caml_c_call();
            caml_apply2(v1);
            camlPervasives__exit_1326();
        }
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
void camlUnix__find_proc_id_1997() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int* ptr0 = (int*)sub_804DBA0(v0, v3, v4, v1);
    if(*ptr0 == &caml_exn_Not_found) {
    loc_804DB50:
        int* ptr1 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit > (unsigned int)ptr1) {
            caml_call_gc(&caml_exn_Not_found, v5);
            goto loc_804DB50;
        }
        else {
            *ptr1 = 0x1000;
            *(unsigned int*)(ptr1 + 1) = camlUnix;
            *(ptr1 + 2) = 7;
            *(ptr1 + 3) = v2;
            *(ptr1 + 4) = &camlUnix__180;
            caml_raise_exn();
        }
    }
    caml_raise_exn();
    caml_call_gc(&caml_exn_Not_found, v5);
    goto loc_804DB50;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2562() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2564() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2566() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2568() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2570() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2572(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2574() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2576() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2578() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2580() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2582() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2584() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2586() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2588() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2590() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2592() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2594() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2596() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2598() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2600() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2602() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2604(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2606(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2608() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2610() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2612() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2614() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2616() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2618() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2620() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2622() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2624() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2626() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2628() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2630() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2632() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2634() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2636() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2638() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2640() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2642() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2644(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2646() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2648() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2650() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2652() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2654() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2656() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2658() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2660() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2662() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2664() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2666() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2668() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2670(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2672(int param0, int param1) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2674() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2676() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2678() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2680() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2682() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2684() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2686() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2688() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2690() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2692() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2694() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2696() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2698() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2700() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2702() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2704() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2706() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2708() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2710() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2712() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2714() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2716(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2718(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2720() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2722() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2724() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2726() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2728() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2730() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2732() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2734() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2736() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2738() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2740() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2742(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2744() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2746() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2748() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2750() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2752() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2754(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2756() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2758() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2760() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2762() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2764() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2766() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2768(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2770() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2772(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2774() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2776() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2778() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2780() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2782() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2794(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2796() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2798() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2800() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2802() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2804() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2814(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2816(int param0, int param1) {
    return caml_c_call();
}

int camlUnix__fun_2828() {
    int v0;
    unsigned int* ptr0;
    if((int*)((int)ptr0 & 0x1)) {
        if((int)(int*)((int)ptr0 >> 1) >= 2) {
            **(unsigned int*)(v0 + 16) = 3;
            return 1;
        }
    }
    else if(*(unsigned char*)(ptr0 - 1) >= 1) {
        **(unsigned int*)(v0 + 12) = *ptr0;
    }
    return 1;
}

int camlUnix__fun_2833() {
}

int camlUnix__fun_2836() {
}

int camlUnix__fun_2842() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2857() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__fun_2863() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* camlUnix__get_port_1739(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7 = &camlUnix__215;
    int v8 = caml_string_equal(*(unsigned int**)(param0 + 12), (unsigned int*)&camlUnix__215);
    if(v8 == 1) {
        unsigned int* ptr1 = (unsigned int*)sub_804B960(v4, param0, v5, v0);
        if(*ptr1 == &caml_exn_Failure) {
            int v9 = sub_804B8D0(v1, v2, v3, v0);
            if(*(int**)v9 == &caml_exn_Not_found) {
                return (unsigned int*)0x1;
            }
            caml_raise_exn();
        }
        caml_raise_exn();
        caml_call_gc(param0, v6);
        goto loc_804B841;
    }
    else {
    loc_804B841:
        ptr0 = (int*)(caml_young_ptr - 24);
        caml_young_ptr -= 24;
    }
    if(caml_young_limit <= (unsigned int)ptr0) {
        *ptr0 = 0x800;
        *(ptr0 + 1) = v5;
        *(ptr0 + 2) = 1;
        *(ptr0 + 3) = 0x800;
        *(unsigned int*)(ptr0 + 4) = ptr0 + 1;
        *(ptr0 + 5) = 1;
        return (unsigned int*)(ptr0 + 4);
    }
    caml_call_gc(param0, v6);
    goto loc_804B841;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__getaddrinfo_1751(int param0, int param1, int param2, void* param3, int param4, void* param5) {
    int v0;
    void* ptr0;
    int v1;
    int v2;
    int v3;
    int v4;
    int* ptr1 = &v0;
    char v5 = &v0 == 12;
    char v6 = (int)&v2 < 0;
    char v7 = __parity__((unsigned char)&v0 - 12);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0xc) ^ (int)&v2) >>> 4) & 0x1);
    char v9 = (unsigned int)&v0 < 12;
    char v10 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0xc)) < 0;
    int v11 = sub_804CD60(v1, v3, v4, v0);
    int v12 = &caml_exn_Invalid_argument;
    unsigned int v13 = *(unsigned int*)v11;
    char v14 = v13 == &caml_exn_Invalid_argument;
    char v15 = (int)v13 < &caml_exn_Invalid_argument;
    char v16 = __parity__((unsigned char)v13 - 168);
    char v17 = v13 < &caml_exn_Invalid_argument;
    char v18 = (((v13 - &caml_exn_Invalid_argument) ^ v13) & (v13 ^ &caml_exn_Invalid_argument)) < 0;
    char v19 = (((v13 - &caml_exn_Invalid_argument) ^ (v13 ^ &caml_exn_Invalid_argument)) >>> 4) & 0x1;
    if(v14) {
        return camlUnix__getaddrinfo_emulation_1730(param0, param1, param2, param3, param4, param5);
    }
    int* ptr2 = &ptr0;
    /*BAD_CALL!*/ caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__getaddrinfo_emulation_1730(int param0, int param1, int param2, void* param3, int param4, void* param5) {
    unsigned int v0;
    unsigned int v1;
    unsigned int* ptr0;
    unsigned int v2;
    unsigned int* ptr1;
    unsigned int v3;
    unsigned int v4;
    void* ptr2;
    int v5;
    void* ptr3;
    unsigned int* ptr4;
    int v6;
    int v7;
    int v8;
    int* ptr5 = &ptr2;
    char v9 = &ptr2 == 20;
    char v10 = (int)&v5 < 0;
    char v11 = __parity__((unsigned char)&ptr2 - 20);
    char v12 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0x14) ^ (int)&v5) >>> 4) & 0x1);
    char v13 = (unsigned int)&ptr2 < 20;
    char v14 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&ptr2) & (int)(int*)((int)&ptr2 ^ 0x14)) < 0;
    unsigned int* ptr6 = ptr4;
    v5 = v6;
    int v15 = v7;
    int v16 = v7;
    while(1) {
        unsigned int v17 = caml_young_ptr;
        unsigned int v18 = caml_young_ptr;
        v4 = v17 - 48;
        char v19 = v4 ? 0: 1;
        char v20 = v4 >= 0x80000000;
        char v21 = __parity__((unsigned char)v4);
        char v22 = (((v18 ^ 0x30) ^ v4) >>> 4) & 0x1;
        char v23 = v18 < 48;
        char v24 = (int)((v4 ^ v18) & (v18 ^ 0x30)) < 0;
        caml_young_ptr = v4;
        char v25 = caml_young_limit == v4;
        char v26 = (int)caml_young_limit > (int)v4;
        char v27 = __parity__((unsigned char)v4 - (unsigned char)caml_young_limit);
        char v28 = caml_young_limit > v4;
        char v29 = (int)(((v4 - caml_young_limit) ^ v4) & (caml_young_limit ^ v4)) < 0;
        char v30 = (((v4 - caml_young_limit) ^ (caml_young_limit ^ v4)) >>> 4) & 0x1;
        if(!v28) {
            break;
        }
        else {
            int v31 = caml_call_gc(v7, v8);
        }
    }
    int v32 = (int)(v4 + 4);
    int v33 = (int)(v4 + 4);
    *(int*)(v32 - 4) = 0x400;
    *(int*)v32 = 1;
    int v34 = v32 + 8;
    int v35 = v32 + 8;
    *(int*)(v34 - 4) = 0x400;
    *(int*)v34 = 1;
    int* ptr7 = (int*)(v32 + 16);
    *(ptr7 - 1) = 0x400;
    *ptr7 = 1;
    int* ptr8 = (int*)(v32 + 24);
    *(ptr8 - 1) = 5367;
    *ptr8 = &camlUnix__fun_2828;
    *(ptr8 + 1) = 3;
    *(ptr8 + 2) = v32;
    *(ptr8 + 3) = v34;
    *(unsigned int*)(ptr8 + 4) = ptr7;
    int v36 = camlList__iter_1074();
    while(1) {
        unsigned int v37 = caml_young_ptr;
        unsigned int v38 = caml_young_ptr;
        v3 = v37 - 20;
        char v39 = v3 ? 0: 1;
        char v40 = v3 >= 0x80000000;
        char v41 = __parity__((unsigned char)v3);
        char v42 = (((v38 ^ 0x14) ^ v3) >>> 4) & 0x1;
        char v43 = v38 < 20;
        char v44 = (int)((v3 ^ v38) & (v38 ^ 0x14)) < 0;
        caml_young_ptr = v3;
        char v45 = caml_young_limit == v3;
        char v46 = (int)caml_young_limit > (int)v3;
        char v47 = __parity__((unsigned char)v3 - (unsigned char)caml_young_limit);
        char v48 = caml_young_limit > v3;
        char v49 = (int)(((v3 - caml_young_limit) ^ v3) & (caml_young_limit ^ v3)) < 0;
        char v50 = (((v3 - caml_young_limit) ^ (caml_young_limit ^ v3)) >>> 4) & 0x1;
        if(!v48) {
            break;
        }
        else {
            int v51 = caml_call_gc(v7, v8);
        }
    }
    int v52 = (int)(v3 + 4);
    *(int*)(v52 - 4) = 4343;
    *(int*)v52 = &caml_curry2;
    *(int*)(v52 + 4) = 5;
    *(int*)(v52 + 8) = &camlUnix__get_port_1739;
    unsigned int* ptr9 = (unsigned int*)v5;
    *(unsigned int**)(v52 + 12) = (unsigned int*)v5;
    int v53 = v33;
    unsigned int* ptr10 = *(unsigned int**)v53;
    char v54 = ptr10 == 1;
    char v55 = (int)ptr10 < 1;
    char v56 = __parity__((unsigned char)ptr10 - 1);
    char v57 = (unsigned int)ptr10 < 1;
    char v58 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr10 - 1) ^ (int)ptr10) & (int)(int*)((int)ptr10 ^ 0x1)) < 0;
    char v59 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr10 - 1) ^ (int)(int*)((int)ptr10 ^ 0x1)) >>> 4) & 0x1);
    if(!v54) {
        unsigned int v60 = *ptr10;
        char v61 = v60 == 3;
        char v62 = (int)v60 < 3;
        char v63 = __parity__((unsigned char)v60 - 3);
        char v64 = v60 < 3;
        char v65 = (((v60 - 3) ^ v60) & (v60 ^ 0x3)) < 0;
        char v66 = (((v60 - 3) ^ (v60 ^ 0x3)) >>> 4) & 0x1;
        if(!v61) {
            char v67 = v60 == 1;
            char v68 = (int)v60 < 1;
            char v69 = __parity__((unsigned char)v60 - 1);
            char v70 = v60 < 1;
            char v71 = (((v60 - 1) ^ v60) & (v60 ^ 0x1)) < 0;
            char v72 = (((v60 - 1) ^ (v60 ^ 0x1)) >>> 4) & 0x1;
            if(!v67) {
                int v73 = caml_string_equal(ptr9, (unsigned int*)&camlUnix__202);
                char v74 = v73 == 1;
                char v75 = v73 < 1;
                char v76 = __parity__((unsigned char)v73 - 1);
                char v77 = (unsigned int)v73 < 1;
                char v78 = (((v73 - 1) ^ v73) & (v73 ^ 0x1)) < 0;
                char v79 = (((v73 - 1) ^ (v73 ^ 0x1)) >>> 4) & 0x1;
                if(v74) {
                    int v80 = 1;
                    v5 = 1;
                }
                else {
                    while(1) {
                        unsigned int v81 = caml_young_ptr;
                        unsigned int v82 = caml_young_ptr;
                        unsigned int v83 = v81 - 24;
                        char v84 = v83 ? 0: 1;
                        char v85 = v83 >= 0x80000000;
                        char v86 = __parity__((unsigned char)v83);
                        char v87 = (((v82 ^ 0x18) ^ v83) >>> 4) & 0x1;
                        char v88 = v82 < 24;
                        char v89 = (int)((v83 ^ v82) & (v82 ^ 0x18)) < 0;
                        caml_young_ptr = v83;
                        char v90 = caml_young_limit == v83;
                        char v91 = (int)caml_young_limit > (int)v83;
                        char v92 = __parity__((unsigned char)v83 - (unsigned char)caml_young_limit);
                        char v93 = caml_young_limit > v83;
                        char v94 = (int)(((v83 - caml_young_limit) ^ v83) & (caml_young_limit ^ v83)) < 0;
                        char v95 = (((v83 - caml_young_limit) ^ (caml_young_limit ^ v83)) >>> 4) & 0x1;
                        if(!v93) {
                        loc_804C9AE:
                            unsigned int* ptr11 = (unsigned int*)(v83 + 4);
                            *(int*)(ptr11 - 1) = 0x800;
                            *ptr11 = v60;
                            *(int*)(ptr11 + 1) = 1;
                            int v96 = (int)(ptr11 + 3);
                            v5 = (int)(ptr11 + 3);
                            *(int*)(v96 - 4) = 0x800;
                            *(unsigned int**)v96 = ptr11;
                            *(int*)(v96 + 4) = 1;
                            goto loc_804CA69;
                        }
                        else {
                            int v97 = caml_call_gc(v7, v8);
                        }
                    }
                    goto loc_804C9AE;
                }
            }
            else {
                int v98 = &camlUnix__201;
                int v99 = 1;
                unsigned int* ptr12 = camlUnix__get_port_1739(v52);
                v5 = (int)ptr12;
            }
        }
        else {
            int v100 = &camlUnix__200;
            int v101 = 3;
            unsigned int* ptr13 = camlUnix__get_port_1739(v52);
            v5 = (int)ptr13;
        }
    }
    else {
        int v102 = &camlUnix__199;
        int v103 = 3;
        unsigned int* ptr14 = camlUnix__get_port_1739(v52);
        v33 = (int)ptr14;
        int v104 = &camlUnix__198;
        int v105 = 1;
        int v106 = v52;
        unsigned int* ptr15 = camlUnix__get_port_1739(v106);
        int v107 = v33;
        unsigned int* ptr16 = camlPervasives__$40_1143();
        v5 = (int)ptr16;
    }
loc_804CA69:
    unsigned int* ptr17 = ptr6;
    int v108 = caml_string_equal(ptr17, (unsigned int*)&camlUnix__197);
    char v109 = v108 == 1;
    char v110 = v108 < 1;
    char v111 = __parity__((unsigned char)v108 - 1);
    char v112 = (unsigned int)v108 < 1;
    char v113 = (((v108 - 1) ^ v108) & (v108 ^ 0x1)) < 0;
    char v114 = (((v108 - 1) ^ (v108 ^ 0x1)) >>> 4) & 0x1;
    if(!v109) {
        int v115 = 5;
        int v116 = v16;
        ptr1 = &ptr3;
        int v117 = camlList__mem_1161();
        char v118 = v117 == 1;
        char v119 = v117 < 1;
        char v120 = __parity__((unsigned char)v117 - 1);
        char v121 = (unsigned int)v117 < 1;
        char v122 = (((v117 - 1) ^ v117) & (v117 ^ 0x1)) < 0;
        char v123 = (((v117 - 1) ^ (v117 ^ 0x1)) >>> 4) & 0x1;
        if(!v118) {
            while(1) {
                unsigned int v124 = caml_young_ptr;
                unsigned int v125 = caml_young_ptr;
                v2 = v124 - 24;
                char v126 = v2 ? 0: 1;
                char v127 = v2 >= 0x80000000;
                char v128 = __parity__((unsigned char)v2);
                char v129 = (((v125 ^ 0x18) ^ v2) >>> 4) & 0x1;
                char v130 = v125 < 24;
                char v131 = (int)((v2 ^ v125) & (v125 ^ 0x18)) < 0;
                caml_young_ptr = v2;
                char v132 = caml_young_limit == v2;
                char v133 = (int)caml_young_limit > (int)v2;
                char v134 = __parity__((unsigned char)v2 - (unsigned char)caml_young_limit);
                char v135 = caml_young_limit > v2;
                char v136 = (int)(((v2 - caml_young_limit) ^ v2) & (caml_young_limit ^ v2)) < 0;
                char v137 = (((v2 - caml_young_limit) ^ (caml_young_limit ^ v2)) >>> 4) & 0x1;
                if(!v135) {
                    break;
                }
                else {
                    ptr1 = &ptr3;
                    int v138 = caml_call_gc(v7, v8);
                }
            }
            unsigned int* ptr18 = (unsigned int*)(v2 + 4);
            *(int*)(ptr18 - 1) = 0x800;
            unsigned int v139 = gvar_8072EB0;
            *ptr18 = gvar_8072EB0;
            *(int*)(ptr18 + 1) = "0.0.0.0";
            ptr0 = ptr18 + 3;
            *(int*)(ptr0 - 1) = 0x800;
            *ptr0 = ptr18;
        }
        else {
            while(1) {
                unsigned int v140 = caml_young_ptr;
                unsigned int v141 = caml_young_ptr;
                v1 = v140 - 24;
                char v142 = v1 ? 0: 1;
                char v143 = v1 >= 0x80000000;
                char v144 = __parity__((unsigned char)v1);
                char v145 = (((v141 ^ 0x18) ^ v1) >>> 4) & 0x1;
                char v146 = v141 < 24;
                char v147 = (int)((v1 ^ v141) & (v141 ^ 0x18)) < 0;
                caml_young_ptr = v1;
                char v148 = caml_young_limit == v1;
                char v149 = (int)caml_young_limit > (int)v1;
                char v150 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
                char v151 = caml_young_limit > v1;
                char v152 = (int)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0;
                char v153 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4) & 0x1;
                if(!v151) {
                    break;
                }
                else {
                    ptr1 = &ptr3;
                    int v154 = caml_call_gc(v7, v8);
                }
            }
            unsigned int* ptr19 = (unsigned int*)(v1 + 4);
            *(int*)(ptr19 - 1) = 0x800;
            unsigned int v155 = gvar_8072EB4;
            *ptr19 = gvar_8072EB4;
            *(int*)(ptr19 + 1) = "127.0.0.1";
            ptr0 = ptr19 + 3;
            *(int*)(ptr0 - 1) = 0x800;
            *ptr0 = ptr19;
        }
        *(int*)(ptr0 + 1) = 1;
    }
    else {
        int v156 = sub_804CC10(v5, v33, v35, (int)ptr17, v16, ptr2);
        int v157 = &caml_exn_Failure;
        unsigned int v158 = *(unsigned int*)v156;
        char v159 = v158 == &caml_exn_Failure;
        char v160 = (int)v158 < &caml_exn_Failure;
        char v161 = __parity__((unsigned char)v158 - 140);
        char v162 = v158 < &caml_exn_Failure;
        char v163 = (((v158 - &caml_exn_Failure) ^ v158) & (v158 ^ &caml_exn_Failure)) < 0;
        char v164 = (((v158 - &caml_exn_Failure) ^ (v158 ^ &caml_exn_Failure)) >>> 4) & 0x1;
        if(v159) {
            int v165 = sub_804CB80(param0, param1, param2, param3, param4, param5);
            int v166 = &caml_exn_Not_found;
            unsigned int v167 = *(unsigned int*)v165;
            char v168 = v167 == &caml_exn_Not_found;
            char v169 = (int)v167 < &caml_exn_Not_found;
            char v170 = __parity__((unsigned char)v167 - 24);
            char v171 = v167 < &caml_exn_Not_found;
            char v172 = (((v167 - &caml_exn_Not_found) ^ v167) & (v167 ^ &caml_exn_Not_found)) < 0;
            char v173 = (((v167 - &caml_exn_Not_found) ^ (v167 ^ &caml_exn_Not_found)) >>> 4) & 0x1;
            if(v168) {
                ptr0 = (unsigned int*)0x1;
            }
            else {
                ptr1 = &param5;
                caml_raise_exn();
                goto loc_804CC00;
            }
        }
        else {
        loc_804CC00:
            --ptr1;
            *ptr1 = &loc_804CC05;
            /*BAD_CALL!*/ caml_raise_exn();
        }
    }
    while(1) {
        unsigned int v174 = caml_young_ptr;
        unsigned int v175 = caml_young_ptr;
        v0 = v174 - 24;
        char v176 = v0 ? 0: 1;
        char v177 = v0 >= 0x80000000;
        char v178 = __parity__((unsigned char)v0);
        char v179 = (((v175 ^ 0x18) ^ v0) >>> 4) & 0x1;
        char v180 = v175 < 24;
        char v181 = (int)((v0 ^ v175) & (v175 ^ 0x18)) < 0;
        caml_young_ptr = v0;
        char v182 = caml_young_limit == v0;
        char v183 = (int)caml_young_limit > (int)v0;
        char v184 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
        char v185 = caml_young_limit > v0;
        char v186 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
        char v187 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
        if(!v185) {
            break;
        }
        else {
            --ptr1;
            *ptr1 = &loc_804CCC6;
            int v188 = /*BAD_CALL!*/ caml_call_gc((int)ptr0, v8);
        }
    }
    int* ptr20 = (int*)(v0 + 4);
    *(ptr20 - 1) = 5367;
    *ptr20 = &caml_tuplify2;
    *(ptr20 + 1) = -3;
    *(ptr20 + 2) = &camlUnix__fun_2836;
    *(ptr20 + 3) = *(int*)(ptr1 + 2);
    *(unsigned int*)(ptr20 + 4) = ptr0;
    --ptr1;
    *ptr1 = &loc_804CCB9;
    /*BAD_CALL!*/ camlList__map_1062();
    unsigned int* ptr21 = ptr1;
    ptr1 += 5;
    /*BAD_CALL!*/ camlList__flatten_1058();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__getnameinfo_1781() {
    int v0;
    int v1;
    void* ptr0;
    int v2;
    int v3;
    int v4;
    int* ptr1 = &v0;
    char v5 = &v0 == 8;
    char v6 = (int)&v1 < 0;
    char v7 = __parity__((unsigned char)&v0 - 8);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x8) ^ (int)&v1) >>> 4) & 0x1);
    char v9 = (unsigned int)&v0 < 8;
    char v10 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x8)) < 0;
    int v11 = sub_804D060(v2, v3, v0);
    int v12 = &caml_exn_Invalid_argument;
    unsigned int v13 = *(unsigned int*)v11;
    char v14 = v13 == &caml_exn_Invalid_argument;
    char v15 = (int)v13 < &caml_exn_Invalid_argument;
    char v16 = __parity__((unsigned char)v13 - 168);
    char v17 = v13 < &caml_exn_Invalid_argument;
    char v18 = (((v13 - &caml_exn_Invalid_argument) ^ v13) & (v13 ^ &caml_exn_Invalid_argument)) < 0;
    char v19 = (((v13 - &caml_exn_Invalid_argument) ^ (v13 ^ &caml_exn_Invalid_argument)) >>> 4) & 0x1;
    if(v14) {
        return (int)camlUnix__getnameinfo_emulation_1772(&caml_exn_Invalid_argument, v4);
    }
    int* ptr2 = &ptr0;
    /*BAD_CALL!*/ caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlUnix__getnameinfo_emulation_1772(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int* ptr2;
    int v1;
    int v2;
    int* ptr3;
    int v3;
    int v4 = (int)*(char*)(ptr3 - 1);
    if(v4) {
        int v5 = v3;
        int v6 = *(ptr3 + 1);
        int v7 = *(ptr3 + 1);
        int v8 = sub_804CE50(*ptr3, v6, v3, v1);
        if(*(unsigned int*)v8 == &caml_exn_Not_found) {
            int v9 = camlList__mem_1161();
            if(v9 != 1) {
                while(1) {
                    ptr2 = (int*)(caml_young_ptr - 8);
                    caml_young_ptr -= 8;
                    if(caml_young_limit <= (unsigned int)ptr2) {
                        break;
                    }
                    else {
                        caml_call_gc(v4, param1);
                    }
                }
                *ptr2 = 0x400;
                *(ptr2 + 1) = &caml_exn_Not_found;
                caml_raise_exn();
            }
            v0 = caml_c_call();
        }
        else {
            caml_raise_exn();
        }
        int v10 = sub_804CF00(v0, v7, v5, v1);
        if(*(unsigned int*)v10 == &caml_exn_Not_found) {
            v4 = camlPervasives__string_of_int_1130();
        }
        else {
            caml_raise_exn();
        }
        while(1) {
            ptr1 = (int*)(caml_young_ptr - 12);
            caml_young_ptr -= 12;
            if(caml_young_limit <= (unsigned int)ptr1) {
                break;
            }
            else {
                caml_call_gc(v4, param1);
            }
        }
        *ptr1 = 0x800;
        *(ptr1 + 1) = v2;
        *(ptr1 + 2) = v4;
        return ptr1 + 1;
    }
    int v11 = *ptr3;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v4, param1);
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = &camlUnix__192;
    *(ptr0 + 2) = v11;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__getsockopt_1643() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__getsockopt_error_1671() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__getsockopt_float_1664() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__getsockopt_int_1650() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__getsockopt_optint_1657() {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__handle_unix_error_1171(char param0, char param1) {
    int v0;
    int v1;
    void* ptr0;
    int v2;
    int v3;
    int v4;
    void* ptr1;
    int v5;
    int v6;
    void* ptr2;
    int v7 = &v1;
    char v8 = &v1 == 12;
    char v9 = &v6 < 0;
    char v10 = __parity__((unsigned char)&v1 - 12);
    char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)(&v1 ^ 0xc) ^ &v6) >>> 4) & 0x1);
    char v12 = (unsigned int)&v1 < 12;
    char v13 = (int)(int*)((int)(int*)(&v6 ^ &v1) & (int)(int*)(&v1 ^ 0xc)) < 0;
    int v14 = v2;
    int v15 = v4;
    int v16 = sub_804C360(v6, v5, v3, v1);
    unsigned int v17 = camlUnix;
    int* ptr3 = *(int**)v16;
    char v18 = v17 == ptr3;
    char v19 = (int)v17 > (int)ptr3;
    char v20 = __parity__((unsigned char)ptr3 - (unsigned char)v17);
    char v21 = v17 > (unsigned int)ptr3;
    char v22 = (int)(int*)((int)(int*)((int)(int*)((int)ptr3 - v17) ^ (int)ptr3) & (int)(int*)(v17 ^ (int)ptr3)) < 0;
    char v23 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr3 - v17) ^ (int)(int*)(v17 ^ (int)ptr3)) >>> 4) & 0x1);
    if(v18) {
        int v24 = *(int*)(v16 + 12);
        v3 = *(int*)(v16 + 12);
        int v25 = *(int*)(v16 + 8);
        v6 = *(int*)(v16 + 8);
        int v26 = *(int*)(v16 + 4);
        v5 = *(int*)(v16 + 4);
        ptr3 = camlSys;
        int v27 = *(ptr3 - 1);
        v7 = *(ptr3 - 1);
        int* ptr4 = (int*)(v27 >>> 9);
        char v28 = (v7 >>> 8) & 0x1;
        char v29 = v22;
        char v30 = ptr4 ? 0: 1;
        char v31 = (int)ptr4 < 0;
        char v32 = __parity__((unsigned char)ptr4);
        char v33 = ptr4 == 1;
        char v34 = (int)ptr4 < 1;
        char v35 = __parity__((unsigned char)ptr4 - 1);
        char v36 = (unsigned int)ptr4 < 1;
        char v37 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr4 - 1) ^ (int)ptr4) & (int)(int*)((int)ptr4 ^ 0x1)) < 0;
        char v38 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr4 - 1) ^ (int)(int*)((int)ptr4 ^ 0x1)) >>> 4) & 0x1);
        if(!v36 && !v33) {
            camlPervasives__output_string_1191();
            camlPervasives__output_string_1191();
            camlPervasives__output_string_1191();
            camlPervasives__output_string_1191();
            unsigned int v39 = (unsigned int)((*(int*)(v3 - 4) >>> 10) * 4 - 1);
            if((int)(unsigned int)((v39 - (unsigned int)*(char*)(v39 + v3)) * 2 + 1) > 1) {
                camlPervasives__output_string_1191();
                camlPervasives__output_string_1191();
                camlPervasives__output_string_1191();
            }
            camlPervasives__output_string_1191();
            caml_c_call();
            camlPervasives__prerr_endline_1285();
            return camlPervasives__exit_1326();
        }
    }
    else {
        caml_raise_exn();
    }
    int* ptr5 = &ptr0;
    int v40 = caml_ml_array_bound_error(v6, v5, v3, v1);
    char v41 = ptr2 == 1;
    char v42 = (int)ptr2 < 1;
    char v43 = __parity__(param0 - 1);
    char v44 = (unsigned int)ptr2 < 1;
    char v45 = (int)(int*)((int)(int*)((int)(int*)((int)ptr2 - 1) ^ (int)ptr2) & (int)(int*)((int)ptr2 ^ 0x1)) < 0;
    char v46 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr2 - 1) ^ (int)(int*)((int)ptr2 ^ 0x1)) >>> 4) & 0x1);
    if(v42 == v45) {
        v41 = ptr1 == 1;
        v42 = (int)ptr1 < 1;
        v43 = __parity__(param1 - 1);
        v44 = (unsigned int)ptr1 < 1;
        v45 = (int)(int*)((int)(int*)((int)(int*)((int)ptr1 - 1) ^ (int)ptr1) & (int)(int*)((int)ptr1 ^ 0x1)) < 0;
        v46 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr1 - 1) ^ (int)(int*)((int)ptr1 ^ 0x1)) >>> 4) & 0x1);
        if(v42 == v45) {
            int v47 = *(ptr3 - 1);
            int v48 = *(ptr3 - 1);
            int v49 = v47 >>> 10;
            char v50 = (v48 >>> 9) & 0x1;
            char v51 = v45;
            char v52 = v49 ? 0: 1;
            char v53 = v49 < 0;
            char v54 = __parity__((unsigned char)v49);
            unsigned int v55 = (unsigned int)(v49 * 4 - 1);
            unsigned int v56 = (unsigned int)*(char*)((int)ptr3 + v55);
            unsigned int v57 = v55;
            int v58 = (int)(v55 - v56);
            char v59 = v58 ? 0: 1;
            char v60 = v58 < 0;
            char v61 = __parity__((unsigned char)v58);
            char v62 = (int*)((int)(int*)((int)(int*)((v56 ^ v57) ^ v58) >>> 4) & 0x1);
            char v63 = v56 > v57;
            char v64 = (int)(int*)((int)(int*)(v58 ^ v57) & (v56 ^ v57)) < 0;
            v7 = v58;
            int* ptr6 = (int*)(v58 * 2);
            char v65 = v7 < 0;
            char v66 = v7 < 0 ^ ((v7 >>> 30) & 0x1);
            char v67 = ptr6 ? 0: 1;
            char v68 = (int)ptr6 < 0;
            char v69 = __parity__((unsigned char)ptr6);
            int* ptr7 = (int*)((int)ptr6 - (int)ptr1);
            int* ptr8 = (int*)((char*)ptr7 + 2);
            v41 = ptr2 == ptr8;
            v42 = (int)ptr2 < (int)ptr8;
            v43 = __parity__((unsigned char)ptr2 - (unsigned char)ptr8);
            v44 = (unsigned int)ptr2 < (unsigned int)ptr8;
            v45 = (int)(int*)((int)(int*)((int)(int*)((int)ptr2 - (int)ptr8) ^ (int)ptr2) & (int)(int*)((int)ptr2 ^ (int)ptr8)) < 0;
            v46 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)ptr2 - (int)ptr8) ^ (int)(int*)((int)ptr2 ^ (int)ptr8)) >>> 4) & 0x1);
            if((v41 || v42 != v45)) {
                ptr0 = ptr1;
                void* ptr9 = ptr2;
                int* ptr10 = ptr3;
                int v70 = v40;
                int v71 = &unix_read;
                v0 = caml_c_call();
                int* ptr11 = &v70;
                v41 = &v1 == 12;
                v42 = &v6 < 0;
                v43 = __parity__((unsigned char)&v1 - 12);
                v46 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v70 ^ 0x10) ^ &v6) >>> 4) & 0x1);
                v44 = (unsigned int)&v70 >= 0xfffffff0;
                v45 = (int)(int*)((int)(int*)(&v6 ^ (int)&v70) & (int*)~(int)(int*)((int)&v70 ^ 0x10)) < 0;
                v7 = v6;
                ptr5 = &v5;
                jump v7;
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

int camlUnix__is_inet6_addr_1500() {
    int v0;
    unsigned int v1 = (unsigned int)((*(int*)(v0 - 4) >>> 10) * 4 - 1);
    return (v1 - (unsigned int)*(char*)(v1 + v0)) * 2 != 32 ? 1: 3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__open_connection_2018() {
    int v0;
    int v1;
    int v2;
    void* ptr0;
    int v3;
    int* ptr1 = &v0;
    char v4 = &v0 == 8;
    char v5 = (int)&v1 < 0;
    char v6 = __parity__((unsigned char)&v0 - 8);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x8) ^ (int)&v1) >>> 4) & 0x1);
    char v8 = (unsigned int)&v0 < 8;
    char v9 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x8)) < 0;
    int v10 = camlUnix__domain_of_sockaddr_1529();
    int v11 = v10;
    int v12 = &unix_socket;
    int v13 = caml_c_call();
    int* ptr2 = &v11;
    char v14 = &v0 == 8;
    char v15 = (int)&v1 < 0;
    char v16 = __parity__((unsigned char)&v0 - 8);
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v11 ^ 0xc) ^ (int)&v1) >>> 4) & 0x1);
    char v18 = (unsigned int)&v11 >= 0xfffffff4;
    char v19 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v11) & (int*)~(int)(int*)((int)&v11 ^ 0xc)) < 0;
    int v20 = sub_804DF00(v3, v13, v0);
    v1 = v20;
    int v21 = v2;
    int v22 = &unix_close;
    int v23 = caml_c_call();
    int* ptr3 = &ptr0;
    char v24 = &v0 == 8;
    char v25 = (int)&v1 < 0;
    char v26 = __parity__((unsigned char)&v0 - 8);
    char v27 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&v1) >>> 4) & 0x1);
    char v28 = (unsigned int)&ptr0 >= 0xfffffffc;
    char v29 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    int v30 = v1;
    int* ptr4 = &ptr0;
    caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__open_proc_1949(int param0, int param1) {
    int result;
    void* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5 = camlList__for_all_1137();
    unsigned int v6 = (unsigned int)caml_c_call();
    if(v6 != 1) {
        result = camlHashtbl__add_1074((int)v6);
    }
    else {
        if(v1 != 1) {
            caml_c_call();
            caml_c_call();
        }
        if(v2 != 3) {
            caml_c_call();
            caml_c_call();
        }
        if(v5 == 1) {
            camlList__iter_1074();
        }
        sub_804D510(v5, v0, v3, v2, v1, v4, (int)ptr0);
        result = camlPervasives__exit_1326();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__open_proc_full_1975(int param0, int param1) {
    int result;
    void* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6 = caml_extra_params;
    int v7 = camlList__for_all_1137();
    unsigned int v8 = (unsigned int)caml_c_call();
    if(v8 != 1) {
        result = camlHashtbl__add_1074((int)v8);
    }
    else {
        caml_c_call();
        caml_c_call();
        caml_c_call();
        caml_c_call();
        caml_c_call();
        caml_c_call();
        if(v7 == 1) {
            camlList__iter_1074();
        }
        sub_804D900(v2, v3, v4, v7, v0, v5, v6, v1, (int)ptr0);
        result = camlPervasives__exit_1326();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlUnix__open_process_1967() {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1 = v0;
    int* ptr2 = (int*)caml_c_call();
    int v2 = *(ptr2 + 1);
    int v3 = *ptr2;
    int* ptr3 = (int*)caml_c_call();
    int* ptr4 = *(unsigned int*)(ptr3 + 1);
    int v4 = *ptr3;
    int v5 = caml_c_call();
    int v6 = caml_c_call();
    int v7 = v6;
    while(1) {
        ptr1 = (int*)(caml_young_ptr - 36);
        caml_young_ptr -= 36;
        if(caml_young_limit <= (unsigned int)ptr1) {
            break;
        }
        else {
            caml_call_gc();
        }
    }
    *ptr1 = 0x800;
    *(unsigned int*)(ptr1 + 1) = ptr4;
    *(ptr1 + 2) = 1;
    *(ptr1 + 3) = 0x800;
    *(ptr1 + 4) = v3;
    *(unsigned int*)(ptr1 + 5) = (unsigned int*)(ptr1 + 1);
    *(ptr1 + 6) = 0x800;
    *(ptr1 + 7) = v5;
    *(ptr1 + 8) = v6;
    camlUnix__open_proc_1949(v4, v2);
    caml_c_call();
    caml_c_call();
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 12);
        caml_young_ptr -= 12;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc();
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = v5;
    *(ptr0 + 2) = v7;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* camlUnix__open_process_full_1985() {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v1;
    int v5 = v0;
    int v6 = 1;
    int* ptr2 = (int*)caml_c_call();
    int v7 = *(ptr2 + 1);
    int v8 = *ptr2;
    v6 = 1;
    int* ptr3 = (int*)caml_c_call();
    int v9 = *(ptr3 + 1);
    int v10 = *ptr3;
    v6 = 1;
    unsigned int* ptr4 = (unsigned int*)caml_c_call();
    int v11 = *(int*)(ptr4 + 1);
    int* ptr5 = *ptr4;
    int v12 = caml_c_call();
    int v13 = caml_c_call();
    int v14 = caml_c_call();
    int v15 = v14;
    while(1) {
        ptr1 = (int*)(caml_young_ptr - 52);
        caml_young_ptr -= 52;
        if(caml_young_limit <= (unsigned int)ptr1) {
            break;
        }
        else {
            caml_call_gc(v2, v3);
        }
    }
    *ptr1 = 0x800;
    *(unsigned int*)(ptr1 + 1) = ptr5;
    *(ptr1 + 2) = 1;
    *(ptr1 + 3) = 0x800;
    *(ptr1 + 4) = v9;
    *(unsigned int*)(ptr1 + 5) = (unsigned int*)(ptr1 + 1);
    ptr5 = ptr1 + 7;
    *(ptr1 + 6) = 0x800;
    *(ptr1 + 7) = v8;
    *(unsigned int*)(ptr1 + 8) = ptr1 + 4;
    *(ptr1 + 9) = 3075;
    *(int*)(int)(ptr1 + 10) = v12;
    *(ptr1 + 11) = v13;
    *(ptr1 + 12) = v14;
    caml_extra_params = ptr5;
    camlUnix__open_proc_full_1975((int)(ptr1 + 10), v10);
    caml_c_call();
    caml_c_call();
    caml_c_call();
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 16);
        caml_young_ptr -= 16;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc(v2, v3);
        }
    }
    *ptr0 = 0xc00;
    *(ptr0 + 1) = v12;
    *(ptr0 + 2) = v13;
    *(ptr0 + 3) = v15;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__open_process_in_1957() {
    int* ptr0;
    int v0;
    int v1 = v0;
    int v2 = 1;
    int* ptr1 = (int*)caml_c_call();
    int v3 = *(ptr1 + 1);
    int v4 = *ptr1;
    int v5 = caml_c_call();
    int result = v5;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc();
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = v4;
    *(ptr0 + 2) = 1;
    *(ptr0 + 3) = 1025;
    *(ptr0 + 4) = v5;
    camlUnix__open_proc_1949(1, v3);
    caml_c_call();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__open_process_out_1962() {
    int* ptr0;
    int v0;
    int v1 = v0;
    int v2 = 1;
    int* ptr1 = (int*)caml_c_call();
    int v3 = *(ptr1 + 1);
    int v4 = *ptr1;
    int v5 = caml_c_call();
    int result = v5;
    while(1) {
        ptr0 = (int*)(caml_young_ptr - 20);
        caml_young_ptr -= 20;
        if(caml_young_limit <= (unsigned int)ptr0) {
            break;
        }
        else {
            caml_call_gc();
        }
    }
    *ptr0 = 0x800;
    *(ptr0 + 1) = v3;
    *(ptr0 + 2) = 1;
    *(ptr0 + 3) = 1026;
    *(ptr0 + 4) = v5;
    camlUnix__open_proc_1949(v4, 3);
    caml_c_call();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__pause_1408() {
    caml_c_call();
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__perform_redirections_1900(int param0) {
    unsigned int v0 = camlUnix__safe_dup_1894();
    unsigned int v1 = camlUnix__safe_dup_1894();
    unsigned int v2 = camlUnix__safe_dup_1894();
    camlUnix__safe_close_1898();
    camlUnix__safe_close_1898();
    camlUnix__safe_close_1898();
    caml_c_call();
    caml_c_call();
    caml_c_call();
    caml_c_call();
    caml_c_call();
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__read_1237(unsigned int param0, unsigned int param1) {
    int v0;
    char v1 = param0 == 1;
    char v2 = (int)param0 < 1;
    char v3 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
    if(v2 == v3) {
        v1 = param1 == 1;
        v2 = (int)param1 < 1;
        v26 = __parity__((unsigned char)param1 - 1);
        v29 = param1 < 1;
        v3 = (((param1 - 1) ^ param1) & (param1 ^ 0x1)) < 0;
        v27 = (((param1 - 1) ^ (param1 ^ 0x1)) >>> 4) & 0x1;
        if(v2 == v3) {
            int v4 = *(int*)(v0 - 4);
            int v5 = *(int*)(v0 - 4);
            int v6 = v4 >>> 10;
            char v7 = (v5 >>> 9) & 0x1;
            char v8 = v3;
            char v9 = v6 ? 0: 1;
            char v10 = v6 < 0;
            char v11 = __parity__((unsigned char)v6);
            unsigned int v12 = (unsigned int)(v6 * 4 - 1);
            unsigned int v13 = (unsigned int)*(char*)(v0 + v12);
            unsigned int v14 = v12;
            void* ptr0 = (void*)(v12 - v13);
            char v15 = ptr0 ? 0: 1;
            char v16 = (int)ptr0 < 0;
            char v17 = __parity__((unsigned char)ptr0);
            char v18 = (int*)((int)(int*)((int)(int*)((v13 ^ v14) ^ (int)ptr0) >>> 4) & 0x1);
            char v19 = v13 > v14;
            char v20 = (int)(int*)((int)(int*)((int)ptr0 ^ v14) & (v13 ^ v14)) < 0;
            void* ptr1 = ptr0;
            int* ptr2 = (int*)((int)ptr0 * 2);
            char v21 = (int)ptr1 < 0;
            char v22 = (int)ptr1 < 0 ^ (int*)((int)(int*)((int)ptr1 >>> 30) & 0x1);
            char v23 = ptr2 ? 0: 1;
            char v24 = (int)ptr2 < 0;
            char v25 = __parity__((unsigned char)ptr2);
            int* ptr3 = (int*)((int)ptr2 - param1);
            int* ptr4 = (int*)((char*)ptr3 + 2);
            v1 = param0 == ptr4;
            v2 = (int)param0 < (int)ptr4;
            v26 = __parity__((unsigned char)param0 - (unsigned char)ptr4);
            v29 = param0 < (unsigned int)ptr4;
            v3 = (int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ param0) & (int)(int*)(param0 ^ (int)ptr4)) < 0;
            v27 = (int*)((int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ (int)(int*)(param0 ^ (int)ptr4)) >>> 4) & 0x1);
            if((v1 || v2 != v3)) {
                return caml_c_call();
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__recv_1558(unsigned int param0, unsigned int param1) {
    int v0;
    char v1 = param0 == 1;
    char v2 = (int)param0 < 1;
    char v3 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
    if(v2 == v3) {
        v1 = param1 == 1;
        v2 = (int)param1 < 1;
        v26 = __parity__((unsigned char)param1 - 1);
        v29 = param1 < 1;
        v3 = (((param1 - 1) ^ param1) & (param1 ^ 0x1)) < 0;
        v27 = (((param1 - 1) ^ (param1 ^ 0x1)) >>> 4) & 0x1;
        if(v2 == v3) {
            int v4 = *(int*)(v0 - 4);
            int v5 = *(int*)(v0 - 4);
            int v6 = v4 >>> 10;
            char v7 = (v5 >>> 9) & 0x1;
            char v8 = v3;
            char v9 = v6 ? 0: 1;
            char v10 = v6 < 0;
            char v11 = __parity__((unsigned char)v6);
            unsigned int v12 = (unsigned int)(v6 * 4 - 1);
            unsigned int v13 = (unsigned int)*(char*)(v0 + v12);
            unsigned int v14 = v12;
            void* ptr0 = (void*)(v12 - v13);
            char v15 = ptr0 ? 0: 1;
            char v16 = (int)ptr0 < 0;
            char v17 = __parity__((unsigned char)ptr0);
            char v18 = (int*)((int)(int*)((int)(int*)((v13 ^ v14) ^ (int)ptr0) >>> 4) & 0x1);
            char v19 = v13 > v14;
            char v20 = (int)(int*)((int)(int*)((int)ptr0 ^ v14) & (v13 ^ v14)) < 0;
            void* ptr1 = ptr0;
            int* ptr2 = (int*)((int)ptr0 * 2);
            char v21 = (int)ptr1 < 0;
            char v22 = (int)ptr1 < 0 ^ (int*)((int)(int*)((int)ptr1 >>> 30) & 0x1);
            char v23 = ptr2 ? 0: 1;
            char v24 = (int)ptr2 < 0;
            char v25 = __parity__((unsigned char)ptr2);
            int* ptr3 = (int*)((int)ptr2 - param1);
            int* ptr4 = (int*)((char*)ptr3 + 2);
            v1 = param0 == ptr4;
            v2 = (int)param0 < (int)ptr4;
            v26 = __parity__((unsigned char)param0 - (unsigned char)ptr4);
            v29 = param0 < (unsigned int)ptr4;
            v3 = (int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ param0) & (int)(int*)(param0 ^ (int)ptr4)) < 0;
            v27 = (int*)((int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ (int)(int*)(param0 ^ (int)ptr4)) >>> 4) & 0x1);
            if((v1 || v2 != v3)) {
                return caml_c_call();
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__recvfrom_1564(unsigned int param0, unsigned int param1) {
    int v0;
    char v1 = param0 == 1;
    char v2 = (int)param0 < 1;
    char v3 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
    if(v2 == v3) {
        v1 = param1 == 1;
        v2 = (int)param1 < 1;
        v26 = __parity__((unsigned char)param1 - 1);
        v29 = param1 < 1;
        v3 = (((param1 - 1) ^ param1) & (param1 ^ 0x1)) < 0;
        v27 = (((param1 - 1) ^ (param1 ^ 0x1)) >>> 4) & 0x1;
        if(v2 == v3) {
            int v4 = *(int*)(v0 - 4);
            int v5 = *(int*)(v0 - 4);
            int v6 = v4 >>> 10;
            char v7 = (v5 >>> 9) & 0x1;
            char v8 = v3;
            char v9 = v6 ? 0: 1;
            char v10 = v6 < 0;
            char v11 = __parity__((unsigned char)v6);
            unsigned int v12 = (unsigned int)(v6 * 4 - 1);
            unsigned int v13 = (unsigned int)*(char*)(v0 + v12);
            unsigned int v14 = v12;
            void* ptr0 = (void*)(v12 - v13);
            char v15 = ptr0 ? 0: 1;
            char v16 = (int)ptr0 < 0;
            char v17 = __parity__((unsigned char)ptr0);
            char v18 = (int*)((int)(int*)((int)(int*)((v13 ^ v14) ^ (int)ptr0) >>> 4) & 0x1);
            char v19 = v13 > v14;
            char v20 = (int)(int*)((int)(int*)((int)ptr0 ^ v14) & (v13 ^ v14)) < 0;
            void* ptr1 = ptr0;
            int* ptr2 = (int*)((int)ptr0 * 2);
            char v21 = (int)ptr1 < 0;
            char v22 = (int)ptr1 < 0 ^ (int*)((int)(int*)((int)ptr1 >>> 30) & 0x1);
            char v23 = ptr2 ? 0: 1;
            char v24 = (int)ptr2 < 0;
            char v25 = __parity__((unsigned char)ptr2);
            int* ptr3 = (int*)((int)ptr2 - param1);
            int* ptr4 = (int*)((char*)ptr3 + 2);
            v1 = param0 == ptr4;
            v2 = (int)param0 < (int)ptr4;
            v26 = __parity__((unsigned char)param0 - (unsigned char)ptr4);
            v29 = param0 < (unsigned int)ptr4;
            v3 = (int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ param0) & (int)(int*)(param0 ^ (int)ptr4)) < 0;
            v27 = (int*)((int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ (int)(int*)(param0 ^ (int)ptr4)) >>> 4) & 0x1);
            if((v1 || v2 != v3)) {
                return caml_c_call();
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__safe_close_1898() {
    int v0;
    void* ptr0;
    int v1 = sub_804D1E0(v0);
    unsigned int v2 = camlUnix;
    unsigned int v3 = *(unsigned int*)v1;
    char v4 = v2 == v3;
    char v5 = (int)v2 > (int)v3;
    char v6 = __parity__((unsigned char)v3 - (unsigned char)v2);
    char v7 = v2 > v3;
    char v8 = (int)(((v3 - v2) ^ v3) & (v2 ^ v3)) < 0;
    char v9 = (((v3 - v2) ^ (v2 ^ v3)) >>> 4) & 0x1;
    if(v4) {
        return 1;
    }
    int* ptr1 = &ptr0;
    /*BAD_CALL!*/ caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int camlUnix__safe_dup_1894() {
    unsigned int result = (unsigned int)caml_c_call();
    if((int)result >= 7) {
        return result;
    }
    unsigned int result1 = (unsigned int)camlUnix__safe_dup_1894();
    caml_c_call();
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__send_1570(unsigned int param0, unsigned int param1) {
    int v0;
    char v1 = param0 == 1;
    char v2 = (int)param0 < 1;
    char v3 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
    if(v2 == v3) {
        v1 = param1 == 1;
        v2 = (int)param1 < 1;
        v26 = __parity__((unsigned char)param1 - 1);
        v29 = param1 < 1;
        v3 = (((param1 - 1) ^ param1) & (param1 ^ 0x1)) < 0;
        v27 = (((param1 - 1) ^ (param1 ^ 0x1)) >>> 4) & 0x1;
        if(v2 == v3) {
            int v4 = *(int*)(v0 - 4);
            int v5 = *(int*)(v0 - 4);
            int v6 = v4 >>> 10;
            char v7 = (v5 >>> 9) & 0x1;
            char v8 = v3;
            char v9 = v6 ? 0: 1;
            char v10 = v6 < 0;
            char v11 = __parity__((unsigned char)v6);
            unsigned int v12 = (unsigned int)(v6 * 4 - 1);
            unsigned int v13 = (unsigned int)*(char*)(v0 + v12);
            unsigned int v14 = v12;
            void* ptr0 = (void*)(v12 - v13);
            char v15 = ptr0 ? 0: 1;
            char v16 = (int)ptr0 < 0;
            char v17 = __parity__((unsigned char)ptr0);
            char v18 = (int*)((int)(int*)((int)(int*)((v13 ^ v14) ^ (int)ptr0) >>> 4) & 0x1);
            char v19 = v13 > v14;
            char v20 = (int)(int*)((int)(int*)((int)ptr0 ^ v14) & (v13 ^ v14)) < 0;
            void* ptr1 = ptr0;
            int* ptr2 = (int*)((int)ptr0 * 2);
            char v21 = (int)ptr1 < 0;
            char v22 = (int)ptr1 < 0 ^ (int*)((int)(int*)((int)ptr1 >>> 30) & 0x1);
            char v23 = ptr2 ? 0: 1;
            char v24 = (int)ptr2 < 0;
            char v25 = __parity__((unsigned char)ptr2);
            int* ptr3 = (int*)((int)ptr2 - param1);
            int* ptr4 = (int*)((char*)ptr3 + 2);
            v1 = param0 == ptr4;
            v2 = (int)param0 < (int)ptr4;
            v26 = __parity__((unsigned char)param0 - (unsigned char)ptr4);
            v29 = param0 < (unsigned int)ptr4;
            v3 = (int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ param0) & (int)(int*)(param0 ^ (int)ptr4)) < 0;
            v27 = (int*)((int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ (int)(int*)(param0 ^ (int)ptr4)) >>> 4) & 0x1);
            if((v1 || v2 != v3)) {
                return caml_c_call();
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__sendto_1576(unsigned int param0, unsigned int param1) {
    int v0;
    int v1;
    char v2 = (int)param0 < 1;
    char v3 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
    if(v2 == v3) {
        char v4 = param1 == 1;
        char v5 = (int)param1 < 1;
        char v6 = __parity__((unsigned char)param1 - 1);
        char v7 = param1 < 1;
        char v8 = (((param1 - 1) ^ param1) & (param1 ^ 0x1)) < 0;
        char v9 = (((param1 - 1) ^ (param1 ^ 0x1)) >>> 4) & 0x1;
        if(v5 == v8) {
            int v10 = v1;
            int v11 = *(int*)(v0 - 4);
            int v12 = *(int*)(v0 - 4);
            int v13 = v11 >>> 10;
            char v14 = (v12 >>> 9) & 0x1;
            char v15 = v8;
            char v16 = v13 ? 0: 1;
            char v17 = v13 < 0;
            char v18 = __parity__((unsigned char)v13);
            unsigned int v19 = (unsigned int)(v13 * 4 - 1);
            unsigned int v20 = (unsigned int)*(char*)(v0 + v19);
            unsigned int v21 = v19;
            unsigned int v22 = v19 - v20;
            char v23 = v22 ? 0: 1;
            char v24 = v22 >= 0x80000000;
            char v25 = __parity__((unsigned char)v22);
            char v26 = (((v20 ^ v21) ^ v22) >>> 4) & 0x1;
            char v27 = v20 > v21;
            char v28 = (int)((v20 ^ v21) & (v22 ^ v21)) < 0;
            unsigned int v29 = v22;
            int v30 = (int)(v22 * 2);
            char v31 = v29 >= 0x80000000;
            char v32 = v29 >= 0x80000000 ^ ((v29 >>> 30) & 0x1);
            char v33 = v30 ? 0: 1;
            char v34 = v30 < 0;
            char v35 = __parity__((unsigned char)v30);
            int v36 = v30 - param1;
            unsigned int v37 = (unsigned int)(v36 + 2);
            char v38 = param0 == v37;
            char v39 = (int)param0 < (int)v37;
            char v40 = __parity__((unsigned char)param0 - (unsigned char)v37);
            char v41 = param0 < v37;
            char v42 = (int)(((param0 - v37) ^ param0) & (param0 ^ v37)) < 0;
            char v43 = (((param0 - v37) ^ (param0 ^ v37)) >>> 4) & 0x1;
            if((v38 || v39 != v42)) {
                return caml_c_call();
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__setsockopt_1646(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__setsockopt_float_1667(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__setsockopt_int_1653(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__setsockopt_optint_1660(int param0) {
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__shutdown_connection_2022() {
    caml_c_call();
    return caml_c_call();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__single_write_1247(unsigned int param0, unsigned int param1) {
    int v0;
    char v1 = param0 == 1;
    char v2 = (int)param0 < 1;
    char v3 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
    if(v2 == v3) {
        v1 = param1 == 1;
        v2 = (int)param1 < 1;
        v26 = __parity__((unsigned char)param1 - 1);
        v29 = param1 < 1;
        v3 = (((param1 - 1) ^ param1) & (param1 ^ 0x1)) < 0;
        v27 = (((param1 - 1) ^ (param1 ^ 0x1)) >>> 4) & 0x1;
        if(v2 == v3) {
            int v4 = *(int*)(v0 - 4);
            int v5 = *(int*)(v0 - 4);
            int v6 = v4 >>> 10;
            char v7 = (v5 >>> 9) & 0x1;
            char v8 = v3;
            char v9 = v6 ? 0: 1;
            char v10 = v6 < 0;
            char v11 = __parity__((unsigned char)v6);
            unsigned int v12 = (unsigned int)(v6 * 4 - 1);
            unsigned int v13 = (unsigned int)*(char*)(v0 + v12);
            unsigned int v14 = v12;
            void* ptr0 = (void*)(v12 - v13);
            char v15 = ptr0 ? 0: 1;
            char v16 = (int)ptr0 < 0;
            char v17 = __parity__((unsigned char)ptr0);
            char v18 = (int*)((int)(int*)((int)(int*)((v13 ^ v14) ^ (int)ptr0) >>> 4) & 0x1);
            char v19 = v13 > v14;
            char v20 = (int)(int*)((int)(int*)((int)ptr0 ^ v14) & (v13 ^ v14)) < 0;
            void* ptr1 = ptr0;
            int* ptr2 = (int*)((int)ptr0 * 2);
            char v21 = (int)ptr1 < 0;
            char v22 = (int)ptr1 < 0 ^ (int*)((int)(int*)((int)ptr1 >>> 30) & 0x1);
            char v23 = ptr2 ? 0: 1;
            char v24 = (int)ptr2 < 0;
            char v25 = __parity__((unsigned char)ptr2);
            int* ptr3 = (int*)((int)ptr2 - param1);
            int* ptr4 = (int*)((char*)ptr3 + 2);
            v1 = param0 == ptr4;
            v2 = (int)param0 < (int)ptr4;
            v26 = __parity__((unsigned char)param0 - (unsigned char)ptr4);
            v29 = param0 < (unsigned int)ptr4;
            v3 = (int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ param0) & (int)(int*)(param0 ^ (int)ptr4)) < 0;
            v27 = (int*)((int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ (int)(int*)(param0 ^ (int)ptr4)) >>> 4) & 0x1);
            if((v1 || v2 != v3)) {
                return caml_c_call();
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__system_1891() {
    int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = (unsigned int)caml_c_call();
    if(v3 != 1) {
        unsigned int v4 = v3;
        int v5 = caml_c_call();
        return *(int*)(v5 + 4);
    }
    sub_804D0F0(v1, v0);
    return camlPervasives__exit_1326();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__try_set_close_on_exec_1366() {
    int v0;
    void* ptr0;
    int v1 = sub_804C520(v0);
    unsigned int v2 = *(unsigned int*)v1;
    char v3 = v2 == &caml_exn_Invalid_argument;
    char v4 = (int)v2 < &caml_exn_Invalid_argument;
    char v5 = __parity__((unsigned char)v2 - 168);
    char v6 = v2 < &caml_exn_Invalid_argument;
    char v7 = (((v2 - &caml_exn_Invalid_argument) ^ v2) & (v2 ^ &caml_exn_Invalid_argument)) < 0;
    char v8 = (((v2 - &caml_exn_Invalid_argument) ^ (v2 ^ &caml_exn_Invalid_argument)) >>> 4) & 0x1;
    if(v3) {
        return 1;
    }
    int* ptr1 = &ptr0;
    /*BAD_CALL!*/ caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__waitpid_non_intr_2001() {
    int v0;
    void* ptr0;
    int v1;
    int v2;
    int* ptr1 = &v0;
    char v3 = &v0 == 4;
    char v4 = (int)&v2 < 0;
    char v5 = __parity__((unsigned char)&v0 - 4);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&v2) >>> 4) & 0x1);
    char v7 = (unsigned int)&v0 < 4;
    char v8 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x4)) < 0;
    while(1) {
        int v9 = sub_804DC30(v1, v0);
        unsigned int v10 = camlUnix;
        unsigned int v11 = *(unsigned int*)v9;
        char v12 = v10 == v11;
        char v13 = (int)v10 > (int)v11;
        char v14 = __parity__((unsigned char)v11 - (unsigned char)v10);
        char v15 = v10 > v11;
        char v16 = (int)(((v11 - v10) ^ v11) & (v10 ^ v11)) < 0;
        char v17 = (((v11 - v10) ^ (v10 ^ v11)) >>> 4) & 0x1;
        if(!v12) {
            break;
        }
        else {
            v11 = *(unsigned int*)(v9 + 4);
            v12 = v11 & 0x1 ? 0: 1;
            v13 = (int)(v11 & 0x1) < 0;
            v14 = __parity__((unsigned char)v11 & 0x1);
            v16 = 0;
            v15 = 0;
            if(v12) {
                break;
            }
            else {
                v12 = v11 == 23;
                v13 = (int)v11 < 23;
                v14 = __parity__((unsigned char)v11 - 23);
                v15 = v11 < 23;
                v16 = (((v11 - 23) ^ v11) & (v11 ^ 0x17)) < 0;
                v17 = (((v11 - 23) ^ (v11 ^ 0x17)) >>> 4) & 0x1;
                if(!v12) {
                    break;
                }
                else {
                    v1 = v2;
                }
            }
        }
    }
    int* ptr2 = &ptr0;
    caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
int camlUnix__write_1242(unsigned int param0, unsigned int param1) {
    int v0;
    char v1 = param0 == 1;
    char v2 = (int)param0 < 1;
    char v3 = (((param0 - 1) ^ param0) & (param0 ^ 0x1)) < 0;
    if(v2 == v3) {
        v1 = param1 == 1;
        v2 = (int)param1 < 1;
        v26 = __parity__((unsigned char)param1 - 1);
        v29 = param1 < 1;
        v3 = (((param1 - 1) ^ param1) & (param1 ^ 0x1)) < 0;
        v27 = (((param1 - 1) ^ (param1 ^ 0x1)) >>> 4) & 0x1;
        if(v2 == v3) {
            int v4 = *(int*)(v0 - 4);
            int v5 = *(int*)(v0 - 4);
            int v6 = v4 >>> 10;
            char v7 = (v5 >>> 9) & 0x1;
            char v8 = v3;
            char v9 = v6 ? 0: 1;
            char v10 = v6 < 0;
            char v11 = __parity__((unsigned char)v6);
            unsigned int v12 = (unsigned int)(v6 * 4 - 1);
            unsigned int v13 = (unsigned int)*(char*)(v0 + v12);
            unsigned int v14 = v12;
            void* ptr0 = (void*)(v12 - v13);
            char v15 = ptr0 ? 0: 1;
            char v16 = (int)ptr0 < 0;
            char v17 = __parity__((unsigned char)ptr0);
            char v18 = (int*)((int)(int*)((int)(int*)((v13 ^ v14) ^ (int)ptr0) >>> 4) & 0x1);
            char v19 = v13 > v14;
            char v20 = (int)(int*)((int)(int*)((int)ptr0 ^ v14) & (v13 ^ v14)) < 0;
            void* ptr1 = ptr0;
            int* ptr2 = (int*)((int)ptr0 * 2);
            char v21 = (int)ptr1 < 0;
            char v22 = (int)ptr1 < 0 ^ (int*)((int)(int*)((int)ptr1 >>> 30) & 0x1);
            char v23 = ptr2 ? 0: 1;
            char v24 = (int)ptr2 < 0;
            char v25 = __parity__((unsigned char)ptr2);
            int* ptr3 = (int*)((int)ptr2 - param1);
            int* ptr4 = (int*)((char*)ptr3 + 2);
            v1 = param0 == ptr4;
            v2 = (int)param0 < (int)ptr4;
            v26 = __parity__((unsigned char)param0 - (unsigned char)ptr4);
            v29 = param0 < (unsigned int)ptr4;
            v3 = (int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ param0) & (int)(int*)(param0 ^ (int)ptr4)) < 0;
            v27 = (int*)((int)(int*)((int)(int*)((int)(int*)(param0 - (int)ptr4) ^ (int)(int*)(param0 ^ (int)ptr4)) >>> 4) & 0x1);
            if((v1 || v2 != v3)) {
                return caml_c_call();
            }
        }
    }
    /*NO_RETURN*/ camlPervasives__invalid_arg_1012();
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_MD5Final(int* param0, int* param1) {
    int v0;
    int v1 = v0;
    int* ptr0 = param0;
    int* ptr1 = param1;
    unsigned int v2 = (unsigned int)((ptr1[4] >>> 3) & 0x3f);
    *(char*)((int*)(v2 + (int)ptr1) + 6) = 128;
    int v3 = (int)((char*)(v2 + (int)ptr1) + 25);
    if((unsigned int)(63 - v2) <= 7) {
        →memset(v3, 0, 63 - v2);
        int* ptr2 = ptr1 + 6;
        caml_MD5Transform(ptr1, ptr2);
        unsigned int v4 = 56;
        if((int*)((int)ptr2 & 0x1)) {
            *(char*)&ptr2[0] = 0;
            ptr2 = (int*)((char*)ptr2 + 1);
            v4 = 55;
        }
        if((int*)((int)ptr2 & 0x2)) {
            *(short*)&ptr2[0] = 0;
            ptr2 = (int*)((char*)ptr2 + 2);
            v4 -= 2;
        }
        for(int i = v4 >>> 2; i != 0; --i) {
            ptr2[0] = 0;
            ++ptr2;
        }
        if(((unsigned char)v4 & 0x2)) {
            *(short*)&ptr2[0] = 0;
            ptr2 = (int*)((char*)ptr2 + 2);
        }
        if(((unsigned char)v4 & 0x1)) {
            *(char*)&ptr2[0] = 0;
        }
    }
    else {
        →memset(v3, 0, 55 - v2);
    }
    ptr1[20] = ptr1[4];
    ptr1[21] = ptr1[5];
    caml_MD5Transform(ptr1, ptr1 + 6);
    *ptr0 = ptr1[0];
    *(ptr0 + 1) = ptr1[1];
    *(ptr0 + 2) = ptr1[2];
    int result = ptr1[3];
    *(ptr0 + 3) = ptr1[3];
    ptr1[0] = 0;
    return result;
}

int* caml_MD5Init(int* param0) {
    int* result = param0;
    *result = 1732584193;
    *(result + 1) = -271733879;
    *(result + 2) = -1732584194;
    *(result + 3) = 271733878;
    *(result + 4) = 0;
    *(result + 5) = 0;
    return result;
}

void caml_MD5Transform() {
    // Decompilation error
}

int caml_MD5Update(int* param0, int param1, int param2) {
    int result;
    int v0;
    int v1 = v0;
    int v2 = param2;
    int v3 = param0[4];
    int v4 = v2 * 8 + v3;
    int* ptr0 = param0;
    ptr0[4] = v4;
    if((unsigned int)v4 < (unsigned int)v3) {
        ++ptr0[5];
    }
    int* ptr1 = param0;
    ptr1[5] += v2 >>> 29;
    if((unsigned int)((v3 >>> 3) & 0x3f)) {
        int v5 = (int)((int*)((unsigned int)((v3 >>> 3) & 0x3f) + (int)ptr1) + 6);
        if((unsigned int)(64 - (unsigned int)((v3 >>> 3) & 0x3f)) > (unsigned int)v2) {
            →memcpy(v5, param1, v2);
        }
        else {
            →memcpy(v5, param1, 64 - (unsigned int)((v3 >>> 3) & 0x3f));
            caml_MD5Transform(param0, param0 + 6);
            param1 += 64 - (unsigned int)((v3 >>> 3) & 0x3f);
            v2 -= 64 - (unsigned int)((v3 >>> 3) & 0x3f);
            goto loc_806DAF5;
        }
    }
    else {
    loc_806DAF5:
        if((unsigned int)v2 > 63) {
            int* ptr2 = param0 + 6;
            int* ptr3 = param0 + 6;
            int* ptr4 = param0;
            int v6 = 0;
            do {
                int* ptr5 = (int*)(v6 + param1);
                ptr2[0] = *ptr5;
                ptr2[1] = *(ptr5 + 1);
                ptr2[2] = *(ptr5 + 2);
                ptr2[3] = *(ptr5 + 3);
                ptr2[4] = *(ptr5 + 4);
                ptr2[5] = *(ptr5 + 5);
                ptr2[6] = *(ptr5 + 6);
                ptr2[7] = *(ptr5 + 7);
                ptr2[8] = *(ptr5 + 8);
                ptr2[9] = *(ptr5 + 9);
                ptr2[10] = *(ptr5 + 10);
                ptr2[11] = *(ptr5 + 11);
                ptr2[12] = *(ptr5 + 12);
                ptr2[13] = *(ptr5 + 13);
                ptr2[14] = *(ptr5 + 14);
                ptr2[15] = *(ptr5 + 15);
                caml_MD5Transform(ptr4, ptr3);
                v6 += 64;
            }
            while((unsigned int)(v2 - v6) > 63);
            param1 = ((v2 - 64) & 0xffffffc0) + param1 + 64;
            v2 = (v2 - 64) & 0x3f;
        }
        →memcpy((int)(param0 + 6), param1, v2);
    }
    return result;
}

long long* caml_abs_float(double* param0) {
    int v0;
    __SyntheticTypeUnknownF v1;
    v2[v3] = fabs(*param0);
    return caml_copy_double(v1, v0);
}

long long* caml_acos_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →acos(*param0);
    return caml_copy_double(v3, v1);
}

long long* caml_add_float(double* param0, double* param1) {
    int v0;
    return caml_copy_double(*param0 + *param1, v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int caml_adjust_gc_speed(unsigned int param0, unsigned int param1) {
    char v0 = (param1 ? param1: 1) == param0;
    char v1 = (param1 ? param1: 1) < param0;
    unsigned int v2 = v1 || v0 ? param1 ? param1: 1: param0;
    int v3 = 0;
    __SyntheticTypeUnknownF v4 = (double)*(long long*)&v2;
    v2 = param1 ? param1: 1;
    __SyntheticTypeUnknownF v5 = v4 / (double)*(long long*)&v2 + caml_extra_heap_resources;
    caml_extra_heap_resources = v5;
    fucomip(1.0, v5);
    if(!v1 && !v0) {
        caml_extra_heap_resources = (unsigned long long)0x3ff0000000000000L;
        caml_urge_major_slice();
    }
    unsigned int v6 = caml_stat_heap_size;
    unsigned int result = v6 >>> 2;
    fucomip(caml_extra_heap_resources, result);
    if(!((v6 >>> 1) & 0x1) && !(result ? 0: 1)) {
        result = caml_urge_major_slice();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_alloc(unsigned int param0, int param1) {
    int v0;
    int v1 = v0;
    unsigned int v2 = param0;
    int result = param1 * 4 + &gvar_80821A4;
    if(v2) {
        if(v2 <= 0x100) {
            unsigned int v3 = caml_young_ptr - (unsigned int)(v2 * 4 + 4);
            caml_young_ptr -= (unsigned int)(v2 * 4 + 4);
            if(caml_young_limit > v3) {
                caml_young_ptr = (unsigned int)(v2 * 4 + v3 + 4);
                caml_minor_collection();
                caml_young_ptr -= (unsigned int)(v2 * 4 + 4);
            }
            *caml_young_ptr = (unsigned int)(v2 * 0x400 + param1 + 0x300);
            unsigned int v4 = caml_young_ptr;
            result = (int)(v4 + 4);
            if((unsigned int)param1 <= 250) {
                unsigned int v5 = 0;
                do {
                    *(int*)(v5 * 4 + v4 + 4) = 0;
                    ++v5;
                }
                while(v5 != v2);
            }
        }
        else {
            int* ptr0 = caml_alloc_shr(v2, param1);
            if((unsigned int)param1 <= 250) {
                →memset((int)ptr0, 0, (int)(v2 * 4));
            }
            result = caml_check_urgent_gc((int)ptr0);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int caml_allocN(int param0, int param1) {
    unsigned int v0;
    unsigned int v1;
    char v2;
    unsigned int i;
    for(i = (unsigned int)(0 - (v1 - caml_young_ptr)); i < caml_young_limit; i = (unsigned int)(0 - (v1 - caml_young_ptr))) {
        unsigned int v3 = (unsigned int)(0 - (i - caml_young_ptr));
        caml_young_ptr -= v3;
        caml_last_return_address = v0;
        caml_bottom_of_stack = &v2;
        sub_807012D(param0, param1);
        v1 = v3;
    }
    caml_young_ptr = i;
    return i;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_alloc_array(int param0, unsigned int* param1) {
    int result;
    int v0;
    int v1;
    int v2 = v1;
    unsigned int* ptr0 = param1;
    unsigned int v3 = caml_local_roots;
    unsigned int v4 = caml_local_roots;
    unsigned int v5 = 0;
    int v6 = 0;
    unsigned int v7 = v3;
    caml_local_roots = &v7;
    int v8 = 1;
    int v9 = 2;
    int* ptr1 = &v5;
    int* ptr2 = &v6;
    if(*ptr0) {
        unsigned int v10 = 0;
        do {
            ++v10;
        }
        while(*(int*)(v10 * 4 + (int)ptr0));
        if(!v10) {
            result = &gvar_80821A4;
            caml_local_roots = v4;
            return result;
        }
        v6 = caml_alloc(v10, 0);
        unsigned int v11 = 0;
        do {
            unsigned int v12 = (unsigned int)param0(*ptr0, v0);
            v5 = v12;
            caml_modify((unsigned int*)(v11 * 4 + v6), v12);
            ++v11;
            ++ptr0;
        }
        while(v10 > v11);
        caml_local_roots = v4;
        result = v6;
    }
    else {
        result = &gvar_80821A4;
        caml_local_roots = v4;
    }
    return result;
}

int caml_alloc_channel(int param0) {
    int v0;
    int v1 = v0;
    int v2 = param0;
    *(int*)(v2 + 44) = *(int*)(v2 + 44) + 1;
    int result = caml_alloc_custom(&channel_operations, 4, 1, 1000);
    *(int*)(result + 4) = v2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_alloc_custom(int param0, int param1, unsigned int param2, unsigned int param3) {
    int result;
    int v0;
    int v1 = v0;
    if(!*(int*)(param0 + 4) && (unsigned int)(((param1 + 3) >>> 2) + 1) <= 0x100) {
        result = caml_alloc_small(((param1 + 3) >>> 2) + 1, 0xff);
        *(int*)result = param0;
    }
    else {
        int* ptr0 = caml_alloc_shr((unsigned int)(((param1 + 3) >>> 2) + 1), 0xff);
        ptr0[0] = param0;
        caml_adjust_gc_speed(param2, param3);
        result = caml_check_urgent_gc((int)ptr0);
    }
    return result;
}

int caml_alloc_dependent_memory(int param0) {
    caml_dependent_size = (unsigned int)((param0 >>> 2) + caml_dependent_size);
    caml_dependent_allocated = (unsigned int)((param0 >>> 2) + caml_dependent_allocated);
    return param0 >>> 2;
}

int caml_alloc_dummy(int param0) {
    int result = &gvar_80821A4;
    if((unsigned int)(param0 >> 1)) {
        result = caml_alloc((unsigned int)(param0 >> 1), 0);
    }
    return result;
}

int caml_alloc_dummy_float(int param0) {
    int result = &gvar_80821A4;
    if((unsigned int)(param0 & 0xfffffffe)) {
        result = caml_alloc((unsigned int)(param0 & 0xfffffffe), 0);
    }
    return result;
}

int caml_alloc_final(int param0, unsigned int param1, unsigned int param2, unsigned int param3) {
    int v0 = caml_final_custom_operations(param1);
    return caml_alloc_custom(v0, param0 * 4, param2, param3);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_alloc_tuple(int param0) {
    return caml_alloc(param0, 0);
}

int caml_allocation_color(unsigned int param0) {
    unsigned int v0 = caml_gc_phase;
    return v0 && (v0 != 1 || caml_gc_sweep_hp > param0) ? 0: 0x300;
}

void caml_apply4(int param0, int param1) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int* ptr0;
    int* ptr1;
    char v6;
    int* ptr2;
    int* ptr3;
    int* ptr4;
    int* ptr5 = &v6;
    char v7 = &v6 == 12;
    char v8 = (int)&ptr2 < 0;
    char v9 = __parity__((unsigned char)&v6 - 12);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v6 ^ 0xc) ^ (int)&ptr2) >>> 4) & 0x1);
    char v11 = (unsigned int)&v6 < 12;
    char v12 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v6) & (int)(int*)((int)&v6 ^ 0xc)) < 0;
    unsigned int v13 = *(unsigned int*)(ptr4 + 1);
    char v14 = v13 == 9;
    char v15 = (int)v13 < 9;
    char v16 = __parity__((unsigned char)v13 - 9);
    char v17 = v13 < 9;
    char v18 = (((v13 - 9) ^ v13) & (v13 ^ 0x9)) < 0;
    char v19 = (((v13 - 9) ^ (v13 ^ 0x9)) >>> 4) & 0x1;
    if(v14) {
        v13 = *(unsigned int*)(ptr4 + 2);
        ptr1 = &ptr2;
        ptr0 = &v6;
        v5 = &v6 ? 0: 1;
        v4 = (int)&v6 < 0;
        v3 = __parity__((unsigned char)&v6);
        v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0xc) ^ (int)&v6) >>> 4) & 0x1);
        v1 = (unsigned int)&ptr2 >= 0xfffffff4;
        v0 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v6) & (int*)~(int)(int*)((int)&ptr2 ^ 0xc)) < 0;
        jump v13;
    }
    int v20 = param1;
    int v21 = param0;
    ptr2 = ptr3;
    int v22 = *ptr4;
    int* ptr6 = ptr4;
    int* ptr7 = (int*)v22((int)ptr3, param0, param1);
    int* ptr8 = ptr7;
    int v23 = *ptr8;
    int* ptr9 = ptr2;
    int* ptr10 = (int*)v23();
    int* ptr11 = ptr10;
    int v24 = *ptr11;
    int v25 = v21;
    int* ptr12 = (int*)v24();
    ptr3 = ptr12;
    param0 = *ptr3;
    int v26 = v20;
    ptr1 = &ptr2;
    ptr0 = &v6;
    v5 = &v6 ? 0: 1;
    v4 = (int)&v6 < 0;
    v3 = __parity__((unsigned char)&v6);
    v2 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0xc) ^ (int)&v6) >>> 4) & 0x1);
    v1 = (unsigned int)&ptr2 >= 0xfffffff4;
    v0 = (int)(int*)((int)(int*)((int)&ptr2 ^ (int)&v6) & (int*)~(int)(int*)((int)&ptr2 ^ 0xc)) < 0;
    jump param0;
}

long long* caml_array_get(int param0, int param1) {
    return *(char*)(param0 - 4) == 254 ? caml_array_get_float(param0, param1): (long long*)caml_array_get_addr(param0, param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_array_get_addr(int param0, int param1) {
    int v0;
    int v1 = param1 >> 1;
    if(v1 >= 0) {
        v0 = param0;
        if((unsigned int)(*(int*)(v0 - 4) >>> 10) <= (unsigned int)v1) {
            v1 = caml_array_bound_error();
            return *(int*)(v1 * 4 + v0);
        }
    }
    else {
        v1 = caml_array_bound_error();
    }
    return *(int*)(v1 * 4 + v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* caml_array_get_float(int param0, int param1) {
    int v0;
    __SyntheticTypeUnknown v1;
    char v2;
    int v3 = param1 >> 1;
    if(v3 >= 0) {
        v0 = param0;
        if((unsigned int)(*(int*)(v0 - 4) >>> 11) <= (unsigned int)v3) {
            goto loc_8068060;
        }
    }
    else {
    loc_8068060:
        v3 = caml_array_bound_error();
    }
    v1[v2 - 1] = *(double*)(v3 * 8 + v0);
    double v4 = v1[v2 - 1];
    unsigned int v5 = caml_young_ptr;
    caml_young_ptr = v5 - 12;
    if(v5 - 12 < caml_young_limit) {
        caml_young_ptr = v5;
        caml_minor_collection();
        caml_young_ptr -= 12;
    }
    *caml_young_ptr = 3069;
    long long* result = (long long*)(caml_young_ptr + 4);
    v1[v2 - 1] = v4;
    *result = v1[v2 - 1];
    return result;
}

int caml_array_set(int param0, int param1, double* param2) {
    return *(char*)(param0 - 4) == 254 ? caml_array_set_float(param0, param1, param2): caml_array_set_addr(param0, param1, (unsigned int)param2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_array_set_addr(int param0, int param1, unsigned int param2) {
    int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = param2;
    int v4 = param1 >> 1;
    if(v4 >= 0) {
        v0 = param0;
        if((unsigned int)(*(int*)(v0 - 4) >>> 10) <= (unsigned int)v4) {
            goto loc_8067F68;
        }
    }
    else {
    loc_8067F68:
        v4 = caml_array_bound_error();
    }
    unsigned int* ptr0 = (unsigned int*)(v4 * 4 + v0);
    unsigned int v5 = *ptr0;
    *ptr0 = v3;
    if((*(char*)((int)(int*)((int)(int*)((int)ptr0 >>> 12) & 0x7ff) + (int)*(unsigned int*)((int)(int*)((int)(int*)((int)ptr0 >>> 23) * 4) + (int)&caml_page_table)) & 0x1)) {
        if(!caml_gc_phase) {
            caml_darken(v5);
        }
        if(!(v3 & 0x1)) {
            unsigned int v6 = caml_young_end;
            if(v6 > v3) {
                int* ptr1 = caml_young_start;
                if((unsigned int)ptr1 < v3 && ((v5 & 0x1) || v6 <= v5 || (unsigned int)ptr1 >= v5)) {
                    if(gvar_807EB28 >= gvar_807EB2C) {
                        caml_realloc_ref_table((int*)&caml_ref_table);
                    }
                    unsigned int* ptr2 = gvar_807EB28;
                    *ptr2 = ptr0;
                    gvar_807EB28 = (int*)(ptr2 + 1);
                }
            }
        }
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_array_set_float(int param0, int param1, double* param2) {
    int v0;
    __SyntheticTypeUnknown v1;
    char v2;
    int v3 = param1 >> 1;
    if(v3 >= 0) {
        v0 = param0;
        if((unsigned int)(*(int*)(v0 - 4) >>> 11) <= (unsigned int)v3) {
            v3 = caml_array_bound_error();
            v1[v2 - 1] = *param2;
            *(long long*)(v3 * 8 + v0) = v1[v2 - 1];
            return 1;
        }
    }
    else {
        v3 = caml_array_bound_error();
    }
    v1[v2 - 1] = *param2;
    *(long long*)(v3 * 8 + v0) = v1[v2 - 1];
    return 1;
}

long long* caml_array_unsafe_get(int param0, int param1) {
    return *(char*)(param0 - 4) == 254 ? caml_array_unsafe_get_float(param0, param1): *(long long**)((param1 >> 1) * 4 + param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* caml_array_unsafe_get_float(int param0, int param1) {
    double v0 = *(double*)((param1 >> 1) * 8 + param0);
    unsigned int v1 = caml_young_ptr;
    caml_young_ptr = v1 - 12;
    if(v1 - 12 < caml_young_limit) {
        caml_young_ptr = v1;
        caml_minor_collection();
        caml_young_ptr -= 12;
    }
    *caml_young_ptr = 3069;
    long long* result = (long long*)(caml_young_ptr + 4);
    *result = v0;
    return result;
}

int caml_array_unsafe_set(int param0, int param1, double* param2) {
    return *(char*)(param0 - 4) == 254 ? caml_array_unsafe_set_float(param0, param1, param2): caml_array_unsafe_set_addr(param0, param1, (unsigned int)param2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_array_unsafe_set_addr(int param0, int param1, unsigned int param2) {
    int v0;
    int v1 = v0;
    unsigned int v2 = param2;
    unsigned int* ptr0 = (unsigned int*)((param1 >> 1) * 4 + param0);
    unsigned int v3 = *ptr0;
    *ptr0 = v2;
    if((*(char*)((int)(int*)((int)(int*)((int)ptr0 >>> 12) & 0x7ff) + (int)*(unsigned int*)((int)(int*)((int)(int*)((int)ptr0 >>> 23) * 4) + (int)&caml_page_table)) & 0x1)) {
        if(!caml_gc_phase) {
            caml_darken(v3);
        }
        if(!(v2 & 0x1)) {
            unsigned int v4 = caml_young_end;
            if(v4 > v2) {
                int* ptr1 = caml_young_start;
                if((unsigned int)ptr1 < v2 && ((v3 & 0x1) || v4 <= v3 || (unsigned int)ptr1 >= v3)) {
                    if(gvar_807EB28 >= gvar_807EB2C) {
                        caml_realloc_ref_table((int*)&caml_ref_table);
                    }
                    unsigned int* ptr2 = gvar_807EB28;
                    *ptr2 = ptr0;
                    gvar_807EB28 = (int*)(ptr2 + 1);
                }
            }
        }
    }
    return 1;
}

int caml_array_unsafe_set_float(int param0, int param1, double* param2) {
    *(long long*)((param1 >> 1) * 8 + param0) = *param2;
    return 1;
}

long long* caml_asin_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →asin(*param0);
    return caml_copy_double(v3, v1);
}

long long* caml_atan2_float(double* param0, double* param1) {
    int v0;
    __SyntheticTypeUnknown v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    *(long long*)&v0 = *param1;
    v1[v2] = →atan2(*param0, *(double*)&v0);
    return caml_copy_double(v3, v0);
}

long long* caml_atan_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →atan(*param0);
    return caml_copy_double(v3, v1);
}

int caml_backtrace_status() {
    return caml_backtrace_active < 1 ? 1: 3;
}

int caml_bitvect_test(int param0, int param1) {
    return ((1 << ((param1 >> 1) & 0x7)) & (unsigned int)*(char*)((param1 >> 4) + param0)) * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_callback(int param0, int param1) {
    int result = caml_callback_exn(param0, param1);
    if((unsigned int)(result & 0x3) == 2) {
        result = caml_raise(result & 0xfffffffc);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_callback2(int param0, int param1, int param2) {
    int result = caml_callback2_exn(param0, param1, param2);
    if((unsigned int)(result & 0x3) == 2) {
        result = caml_raise(result & 0xfffffffc);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_callback2_exn(int param0, int param1, int param2) {
    int v0;
    int result;
    int v1 = v0;
    unsigned int v2 = caml_gc_regs;
    unsigned int v3 = caml_last_return_address;
    unsigned int v4 = caml_bottom_of_stack;
    int v5 = &gvar_807028E;
    unsigned int v6 = caml_exception_pointer;
    caml_exception_pointer = &v6;
    caml_apply2(param0);
    caml_exception_pointer = v6;
    caml_bottom_of_stack = v4;
    caml_last_return_address = v3;
    caml_gc_regs = v2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_callback3(int param0, int param1, int param2, int param3) {
    int result = caml_callback3_exn(param0, param1, param2, param3);
    if((unsigned int)(result & 0x3) == 2) {
        result = caml_raise(result & 0xfffffffc);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_callback3_exn(int param0, int param1, int param2, int param3) {
    int v0;
    int result;
    int v1 = v0;
    unsigned int v2 = caml_gc_regs;
    unsigned int v3 = caml_last_return_address;
    unsigned int v4 = caml_bottom_of_stack;
    int v5 = &gvar_807028E;
    unsigned int v6 = caml_exception_pointer;
    caml_exception_pointer = &v6;
    caml_apply2(param3);
    caml_exception_pointer = v6;
    caml_bottom_of_stack = v4;
    caml_last_return_address = v3;
    caml_gc_regs = v2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_callbackN(int param0, unsigned int param1, int param2) {
    int result = caml_callbackN_exn(param0, param1, param2);
    if((unsigned int)(result & 0x3) == 2) {
        result = caml_raise(result & 0xfffffffc);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_callbackN_exn(int param0, unsigned int param1, int param2) {
    int result;
    int v0;
    int* ptr0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &ptr0;
    int v4 = param0;
    if((int)param1 > 0) {
        unsigned int v5 = v3;
        int v6 = 1;
        int v7 = 1;
        int* ptr1 = &param0;
        int* ptr2 = &v5;
        int v8 = 1;
        ptr0 = &ptr2;
        int v9 = 1;
        int v10 = 1;
        int* ptr3 = &v4;
        unsigned int v11 = 0;
        do {
            unsigned int v12 = param1 - v11;
            if(v12 != 1) {
                if(v12 == 2) {
                    int v13 = *(int*)(v11 * 4 + param2 + 4);
                    v0 = *(int*)(v11 * 4 + param2 + 4);
                    result = caml_callback2_exn(v4, *(int*)(v11 * 4 + param2), v13);
                    if((unsigned int)(result & 0x3) == 2) {
                        caml_local_roots = v3;
                        return result;
                    }
                    v4 = result;
                    v11 += 2;
                }
                int v14 = *(int*)(v11 * 4 + param2 + 8);
                int v15 = *(int*)(v11 * 4 + param2 + 8);
                int v16 = *(int*)(v11 * 4 + param2 + 4);
                v0 = *(int*)(v11 * 4 + param2 + 4);
                result = caml_callback3_exn(v4, *(int*)(v11 * 4 + param2), v16, v14);
                if((unsigned int)(result & 0x3) == 2) {
                    caml_local_roots = v3;
                    return result;
                }
                v4 = result;
                v11 += 3;
            }
            result = caml_callback_exn(v4, *(int*)(v11 * 4 + param2));
            if((unsigned int)(result & 0x3) == 2) {
                caml_local_roots = v3;
                return result;
            }
            v4 = result;
            ++v11;
        }
        while((int)v11 < (int)param1);
    }
    else {
        caml_local_roots = v3;
        result = v4;
    }
    return result;
}

long long* caml_ceil_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →ceil(*param0);
    return caml_copy_double(v3, v1);
}

int caml_channel_binary_mode() {
    return 1;
}

int caml_channel_descriptor(int param0) {
    int v0;
    int* ptr0;
    int v1 = v0;
    unsigned int v2 = **(unsigned int*)(param0 + 4);
    if(v2 == -1) {
        →__errno_location();
        *ptr0 = 9;
        caml_sys_error(1);
    }
    return v2 * 2 + 1;
}

int caml_channel_size(int* param0) {
    int v0;
    int result;
    int v1;
    int v2 = v0;
    int v3 = *param0;
    int v4 = *(param0 + 1);
    int v5 = *(param0 + 2);
    caml_enter_blocking_section();
    →lseek64(v3, 0, 0, 2);
    if((unsigned int)(result & v1) != -1) {
        →lseek64(v3, v4, v5, 0);
        if(((result ^ v4) | (v1 ^ v5))) {
            caml_leave_blocking_section();
            caml_sys_error(1);
            caml_leave_blocking_section();
            return result;
        }
    }
    else {
        caml_leave_blocking_section();
        caml_sys_error(1);
    }
    caml_leave_blocking_section();
    return result;
}

int caml_classify_float(double* param0) {
    int v0;
    int v1;
    unsigned int v2;
    *(long long*)&v0 = *param0;
    →__fpclassify(v0, v1);
    return v2 <= 3 ? *(int*)(v2 * 4 + (int)&CSWTCH.118): 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_close_channel(int param0) {
    int result;
    int v0;
    int v1 = v0;
    →close(*(int*)param0);
    if(((*(int*)(param0 + 44) ? 0: 1) || *(int*)(param0 + 44) < 0)) {
        unsigned int v2 = caml_channel_mutex_free;
        if(v2) {
            v2(param0);
        }
        unlink_channel();
        result = caml_stat_free(param0);
    }
    return result;
}

int caml_code_checksum() {
    char v0;
    int v1;
    int v2 = v1;
    if(!checksum_computed.3405) {
        caml_MD5Init(&v0);
        int v3 = caml_code_area_start;
        caml_MD5Update(&v0, v3, (int)(caml_code_area_end - v3));
        caml_MD5Final((int*)&checksum.3404, &v0);
        checksum_computed.3405 = 1;
    }
    return &checksum.3404;
}

int caml_compare(int param0, float* param1) {
    int v0;
    int v1 = v0;
    float* ptr0 = compare_val((float*)0x1, param1);
    if(compare_stack != &compare_stack_init) {
        compare_free_stack();
    }
    return (int)ptr0 >= 0 ? (int)ptr0 <= 0 ? 1: 3: -1;
}

int caml_convert_flag_list(int* param0, int param1) {
    int v0;
    int v1 = v0;
    int* ptr0 = param0;
    int result = 0;
    while(ptr0 != 1) {
        result |= *(int*)((*ptr0 >> 1) * 4 + param1);
        ptr0 = *(unsigned int*)(ptr0 + 1);
    }
    return result;
}

unsigned int caml_convert_signal_number(unsigned int param0) {
    unsigned int result = param0;
    if(result > -22) {
        result = *(unsigned int*)(~result * 4 + (int)&posix_signals);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* caml_copy_double(double param0, int param1) {
    unsigned int v0 = caml_young_ptr;
    caml_young_ptr = v0 - 12;
    if(v0 - 12 < caml_young_limit) {
        caml_young_ptr = v0;
        caml_minor_collection();
        caml_young_ptr -= 12;
    }
    *caml_young_ptr = 3069;
    long long* result = (long long*)(caml_young_ptr + 4);
    *result = param0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_copy_int32(int param0) {
    int result = caml_alloc_custom(&caml_int32_ops, 4, 0, 1);
    *(int*)(result + 4) = param0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_copy_int64(int param0, int param1) {
    int v0 = param1;
    int result = caml_alloc_custom(&caml_int64_ops, 8, 0, 1);
    *(int*)(result + 4) = param0;
    *(int*)(result + 8) = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_copy_nativeint(int param0) {
    int result = caml_alloc_custom(&caml_nativeint_ops, 4, 0, 1);
    *(int*)(result + 4) = param0;
    return result;
}

int caml_copy_string_array(unsigned int* param0) {
    return caml_alloc_array(&caml_copy_string, param0);
}

long long* caml_cos_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →cos(*param0);
    return caml_copy_double(v3, v1);
}

long long* caml_cosh_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →cosh(*param0);
    return caml_copy_double(v3, v1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_create_string(int param0) {
    int v0 = param0 >> 1;
    if((unsigned int)v0 > 0xfffffb) {
        v0 = caml_invalid_argument("String.create");
    }
    return caml_alloc_string(v0);
}

int caml_curry2() {
}

int caml_curry2_1() {
    int v0;
    int v1;
    int v2 = v1;
    int v3 = *(int*)(v0 + 12);
    int v4 = *(int*)(v0 + 8);
    int v5 = *(int*)(v3 + 8);
    int v6 = v2;
    jump v5;
}

int caml_curry3() {
}

int caml_curry3_1() {
}

int caml_curry3_2() {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = *(int*)(v1 + 12);
    int v4 = *(int*)(v3 + 12);
    int v5 = *(int*)(v1 + 8);
    int v6 = *(int*)(v3 + 8);
    int v7 = *(int*)(v4 + 8);
    jump v7;
}

int caml_curry4() {
}

int caml_curry4_1() {
}

int caml_curry4_2() {
}

int caml_curry4_3() {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = *(int*)(v1 + 12);
    int v4 = *(int*)(v3 + 12);
    int v5 = *(int*)(v4 + 12);
    int v6 = *(int*)(v1 + 8);
    int v7 = *(int*)(v3 + 8);
    int v8 = *(int*)(v4 + 8);
    int v9 = *(int*)(v5 + 8);
    jump v9;
}

int caml_curry5() {
}

int caml_curry5_1() {
}

int caml_curry5_2() {
}

int caml_curry5_3() {
}

int caml_curry5_4() {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = *(int*)(v1 + 12);
    int v4 = *(int*)(v3 + 12);
    int v5 = *(int*)(v4 + 12);
    int v6 = *(int*)(v5 + 12);
    int v7 = *(int*)(v1 + 8);
    int v8 = *(int*)(v3 + 8);
    int v9 = *(int*)(v4 + 8);
    int v10 = *(int*)(v5 + 8);
    int v11 = *(int*)(v6 + 8);
    jump v11;
}

int caml_curry6() {
}

int caml_curry6_1() {
}

int caml_curry6_2() {
}

int caml_curry6_3() {
}

int caml_curry6_4() {
}

int caml_curry6_5() {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = &v0;
    char v4 = &v0 == 16;
    char v5 = (int)&v1 < 0;
    char v6 = __parity__((unsigned char)&v0 - 16);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x10) ^ (int)&v1) >>> 4) & 0x1);
    char v8 = (unsigned int)&v0 < 16;
    char v9 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x10)) < 0;
    v1 = v2;
    int v10 = *(int*)(v3 + 12);
    int v11 = *(int*)(v10 + 12);
    int v12 = *(int*)(v11 + 12);
    int v13 = *(int*)(v12 + 12);
    unsigned int v14 = *(unsigned int*)(v13 + 12);
    unsigned int v15 = *(unsigned int*)(v13 + 12);
    int v16 = *(int*)(v3 + 8);
    int v17 = *(int*)(v3 + 8);
    int v18 = *(int*)(v10 + 8);
    int v19 = *(int*)(v11 + 8);
    int v20 = *(int*)(v12 + 8);
    int v21 = *(int*)(v13 + 8);
    int v22 = *(int*)(v14 + 8);
    int v23 = *(int*)(v14 + 8);
    int v24 = v18;
    int v25 = v17;
    int v26 = v1;
    unsigned int v27 = v15;
    caml_extra_params = v15;
    int v28 = v23;
    int* ptr1 = &v1;
    int* ptr2 = &v0;
    char v29 = &v0 ? 0: 1;
    char v30 = (int)&v0 < 0;
    char v31 = __parity__((unsigned char)&v0);
    char v32 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x10) ^ (int)&v0) >>> 4) & 0x1);
    char v33 = (unsigned int)&v1 >= 0xfffffff0;
    char v34 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v0) & (int*)~(int)(int*)((int)&v1 ^ 0x10)) < 0;
    jump v28;
}

int caml_curry7() {
}

int caml_curry7_1() {
}

int caml_curry7_2() {
}

int caml_curry7_3() {
}

int caml_curry7_4() {
}

int caml_curry7_5() {
}

int caml_curry7_6() {
    char v0;
    int v1;
    int v2;
    unsigned int v3;
    int* ptr0 = &v0;
    char v4 = &v0 == 20;
    char v5 = (int)&v2 < 0;
    char v6 = __parity__((unsigned char)&v0 - 20);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x14) ^ (int)&v2) >>> 4) & 0x1);
    char v8 = (unsigned int)&v0 < 20;
    char v9 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x14)) < 0;
    unsigned int v10 = v3;
    int v11 = v1;
    int v12 = *(int*)(v11 + 12);
    int v13 = *(int*)(v12 + 12);
    int v14 = *(int*)(v13 + 12);
    int v15 = *(int*)(v14 + 12);
    int v16 = *(int*)(v15 + 12);
    unsigned int v17 = *(unsigned int*)(v16 + 12);
    unsigned int v18 = *(unsigned int*)(v16 + 12);
    int v19 = *(int*)(v11 + 8);
    v2 = *(int*)(v11 + 8);
    int v20 = *(int*)(v12 + 8);
    int v21 = *(int*)(v12 + 8);
    int v22 = *(int*)(v13 + 8);
    int v23 = *(int*)(v14 + 8);
    int v24 = *(int*)(v15 + 8);
    int v25 = *(int*)(v16 + 8);
    int v26 = *(int*)(v17 + 8);
    int v27 = *(int*)(v17 + 8);
    int v28 = v24;
    int v29 = v22;
    int v30 = v21;
    int v31 = v2;
    unsigned int v32 = v10;
    caml_extra_params = v10;
    unsigned int v33 = v18;
    gvar_807B7C0 = v18;
    int v34 = v27;
    int* ptr1 = &v2;
    int* ptr2 = &v0;
    char v35 = &v0 ? 0: 1;
    char v36 = (int)&v0 < 0;
    char v37 = __parity__((unsigned char)&v0);
    char v38 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x14) ^ (int)&v0) >>> 4) & 0x1);
    char v39 = (unsigned int)&v2 >= 0xffffffec;
    char v40 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int*)~(int)(int*)((int)&v2 ^ 0x14)) < 0;
    jump v34;
}

int caml_curry9() {
}

int caml_curry9_1() {
}

int caml_curry9_2() {
}

int caml_curry9_3() {
}

int caml_curry9_4() {
}

int caml_curry9_5() {
}

int caml_curry9_6() {
}

int caml_curry9_7() {
}

int caml_curry9_8() {
    char v0;
    unsigned int v1;
    int v2;
    int v3;
    int* ptr0 = &v0;
    char v4 = &v0 == 44;
    char v5 = (int)&v2 < 0;
    char v6 = __parity__((unsigned char)&v0 - 44);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x2c) ^ (int)&v2) >>> 4) & 0x1);
    char v8 = (unsigned int)&v0 < 44;
    char v9 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int)(int*)((int)&v0 ^ 0x2c)) < 0;
    unsigned int v10 = v1;
    unsigned int v11 = *(unsigned int*)(v3 + 12);
    int v12 = *(int*)(v11 + 12);
    int v13 = *(int*)(v12 + 12);
    int v14 = *(int*)(v12 + 12);
    int v15 = *(int*)(v13 + 12);
    int v16 = *(int*)(v13 + 12);
    int v17 = *(int*)(v15 + 12);
    int v18 = *(int*)(v15 + 12);
    int v19 = *(int*)(v17 + 12);
    int v20 = *(int*)(v17 + 12);
    int v21 = *(int*)(v19 + 12);
    int v22 = *(int*)(v19 + 12);
    unsigned int v23 = *(unsigned int*)(v21 + 12);
    unsigned int v24 = *(unsigned int*)(v21 + 12);
    int v25 = v3;
    unsigned int v26 = *(unsigned int*)(v25 + 8);
    unsigned int v27 = *(unsigned int*)(v25 + 8);
    unsigned int v28 = v11;
    unsigned int v29 = *(unsigned int*)(v28 + 8);
    v57 = *(unsigned int*)(v28 + 8);
    int v30 = v12;
    int v31 = *(int*)(v30 + 8);
    v2 = *(int*)(v30 + 8);
    int v32 = v14;
    int v33 = *(int*)(v32 + 8);
    int v34 = v16;
    int v35 = *(int*)(v34 + 8);
    int v36 = v18;
    int v37 = *(int*)(v36 + 8);
    int v38 = v20;
    int v39 = *(int*)(v38 + 8);
    int v40 = v22;
    int v41 = *(int*)(v40 + 8);
    unsigned int v42 = v24;
    int v43 = *(int*)(v42 + 8);
    v56 = *(int*)(v42 + 8);
    int v44 = v2;
    unsigned int v45 = v57;
    caml_extra_params = v57;
    unsigned int v46 = v27;
    gvar_807B7C0 = v27;
    unsigned int v47 = v10;
    gvar_807B7C4 = v10;
    unsigned int v48 = v24;
    gvar_807B7C8 = v24;
    int v49 = v56;
    int* ptr1 = &v2;
    int* ptr2 = &v0;
    char v50 = &v0 ? 0: 1;
    char v51 = (int)&v0 < 0;
    char v52 = __parity__((unsigned char)&v0);
    char v53 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x2c) ^ (int)&v0) >>> 4) & 0x1);
    char v54 = (unsigned int)&v2 >= 0xffffffd4;
    char v55 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v0) & (int*)~(int)(int*)((int)&v2 ^ 0x2c)) < 0;
    jump v49;
}

void caml_debugger() {
}

void caml_debugger_cleanup_fork() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_deserialize_block_1(int param0, int param1) {
    int result;
    →memmove(param0, intern_src, param1);
    intern_src += param1;
    return result;
}

int caml_deserialize_block_2(int param0, unsigned int param1) {
    int result;
    int v0;
    int v1 = v0;
    int v2 = param0;
    unsigned int v3 = intern_src;
    if((int)param1 > 0) {
        result = 0;
        unsigned int counter = param1;
        unsigned int v4 = param1;
        do {
            char v5 = *(char*)(result + v3);
            *(char*)(result + v2) = *(char*)(result + v3 + 1);
            *(char*)(result + v2 + 1) = v5;
            result += 2;
            --counter;
        }
        while(counter);
        v3 = (unsigned int)(v4 * 2 + v3);
    }
    intern_src = v3;
    return result;
}

unsigned int caml_deserialize_block_4(int param0, unsigned int param1) {
    unsigned int result;
    int v0;
    int v1 = v0;
    int v2 = param0;
    unsigned int v3 = intern_src;
    if((int)param1 > 0) {
        int v4 = 0;
        unsigned int counter = param1;
        do {
            char v5 = *(char*)(v4 + v3);
            char v6 = *(char*)(v4 + v3 + 1);
            *(char*)(v4 + v2) = *(char*)(v4 + v3 + 3);
            *(char*)(v4 + v2 + 1) = *(char*)(v4 + v3 + 2);
            *(char*)(v4 + v2 + 3) = v5;
            *(char*)(v4 + v2 + 2) = v6;
            v4 += 4;
            --counter;
        }
        while(counter);
        result = param1;
        v3 = (unsigned int)(result * 4 + v3);
    }
    intern_src = v3;
    return result;
}

unsigned int caml_deserialize_block_8(char* param0, unsigned int param1) {
    unsigned int result;
    int v0;
    int v1 = v0;
    char* ptr0 = intern_src;
    if((int)param1 > 0) {
        char* ptr1 = param0;
        char* ptr2 = ptr0;
        unsigned int counter = param1;
        char* ptr3 = ptr0;
        do {
            char v2 = *ptr2;
            char v3 = *(ptr2 + 1);
            *ptr1 = *(ptr2 + 7);
            *(ptr1 + 1) = *(ptr2 + 6);
            *(ptr1 + 7) = v2;
            *(ptr1 + 6) = v3;
            char v4 = *(ptr2 + 2);
            char v5 = *(ptr2 + 3);
            *(ptr1 + 2) = *(ptr2 + 5);
            *(ptr1 + 3) = *(ptr2 + 4);
            *(ptr1 + 5) = v4;
            *(ptr1 + 4) = v5;
            ptr2 += 8;
            ptr1 += 8;
            --counter;
        }
        while(counter);
        result = param1;
        ptr0 = (char*)(result * 8 + (int)ptr3);
    }
    intern_src = ptr0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_deserialize_block_float_8(int param0, int param1) {
    int result;
    →memmove(param0, intern_src, param1 * 8);
    intern_src = (unsigned int)(param1 * 8 + intern_src);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_deserialize_error(int param0) {
    intern_cleanup();
    int v0 = param0;
    /*BAD_CALL!*/ caml_failwith(v0);
}

unsigned int caml_deserialize_float_4() {
    float v0;
    return caml_deserialize_block_4(&v0, 1);
}

int caml_deserialize_float_8() {
    double v0;
    return caml_deserialize_block_float_8(&v0, 1);
}

int caml_deserialize_sint_1() {
    char* ptr0 = intern_src;
    int result = (int)*ptr0;
    intern_src = (int*)(ptr0 + 1);
    return result;
}

int caml_deserialize_sint_2() {
    char* ptr0 = intern_src;
    intern_src = (int*)(ptr0 + 2);
    return (int)*ptr0 * 0x100 + (unsigned int)*(ptr0 + 1);
}

int caml_deserialize_sint_4() {
    int v0;
    int v1 = v0;
    char* ptr0 = intern_src;
    intern_src = (int*)(ptr0 + 4);
    return (unsigned int)*(ptr0 + 1) * 0x10000 + (unsigned int)*(ptr0 + 2) * 0x100 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(ptr0 + 3));
}

int caml_deserialize_sint_8() {
    int result;
    caml_deserialize_block_8(&result, 1);
    return result;
}

int caml_deserialize_uint_1() {
    char* ptr0 = intern_src;
    int result = (unsigned int)*ptr0;
    intern_src = (int*)(ptr0 + 1);
    return result;
}

int caml_deserialize_uint_2() {
    char* ptr0 = intern_src;
    intern_src = (int*)(ptr0 + 2);
    return (unsigned int)*ptr0 * 0x100 + (unsigned int)*(ptr0 + 1);
}

int caml_deserialize_uint_4() {
    int v0;
    int v1 = v0;
    char* ptr0 = intern_src;
    intern_src = (int*)(ptr0 + 4);
    return (unsigned int)*(ptr0 + 1) * 0x10000 + (unsigned int)*(ptr0 + 2) * 0x100 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(ptr0 + 3));
}

int caml_deserialize_uint_8() {
    int result;
    caml_deserialize_block_8(&result, 1);
    return result;
}

long long* caml_div_float(double* param0, double* param1) {
    int v0;
    return caml_copy_double(*param0 / *param1, v0);
}

int caml_dlclose(int param0) {
    int result;
    →dlclose(param0);
    return result;
}

int caml_dlerror() {
    int result;
    →dlerror();
    return result;
}

int caml_dlopen(int param0, int param1, unsigned int param2) {
    int result;
    →dlopen(param0, param2 < 1 ? 0x1002: 0x1102);
    return result;
}

int caml_dlsym(int param0, int param1) {
    int result;
    →dlsym(param0, param1);
    return result;
}

unsigned int* caml_do_read(int param0, int param1, int param2) {
    unsigned int* result;
    int v0;
    int v1 = v0;
    do {
        caml_enter_blocking_section();
        →read(param0, param1, param2);
        caml_leave_blocking_section();
        if(result != -1) {
            return result;
        }
        →__errno_location();
    }
    while(*result == 4);
    caml_sys_io_error(1);
    return result;
}

int caml_enter_blocking_section() {
    // Decompilation error
}

void caml_enter_blocking_section_default() {
    caml_async_signal_mode = 1;
}

int caml_eq_float(double* param0, double* param1) {
    char v0;
    char v1;
    int v2;
    fucomip(*param1, *param0);
    return (unsigned int)(unsigned char)(((unsigned int)(v0 ? 0: 1) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8)) & ((unsigned int)(v1 ? 1: 0) | ((unsigned int)(int*)((int)(int*)((int)param1 >>> 8) & 0xffffff) << 8))) * 2 + 1;
}

void caml_equal() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_execute_signal(int param0, unsigned int param1) {
    int result;
    char v0;
    int v1;
    int v2 = v1;
    →sigemptyset(&v0);
    →sigaddset(&v0, param0);
    →sigprocmask(0, &v0, &v0);
    unsigned int v3 = caml_rev_convert_signal_number((unsigned int)param0);
    int v4 = caml_callback_exn(*(int**)(param0 * 4 + caml_signal_handlers), v3 * 2 + 1);
    if(!param1) {
        →sigprocmask(2, &v0, 0);
        result = v4 & 0x3;
        if(result == 2) {
            return caml_raise(v4 & 0xfffffffc);
        }
    }
    else {
        result = v4 & 0x3;
        if(result == 2) {
            →sigdelset(&v0, param0);
            →sigprocmask(2, &v0, 0);
            result = caml_raise(v4 & 0xfffffffc);
        }
    }
    return result;
}

long long* caml_exp_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →exp(*param0);
    return caml_copy_double(v3, v1);
}

int caml_expm1(double param0, int param1) {
    int v0;
    int v1;
    int result;
    *(long long*)&v0 = param0;
    →expm1(v0, v1);
    return result;
}

long long* caml_expm1_float(double* param0) {
    int v0;
    __SyntheticTypeUnknownF v1 = *param0;
    caml_expm1(v1, v0);
    return caml_copy_double(v1, v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_fatal_error_arg(int param0, int param1) {
    int v0;
    char v1;
    int v2;
    void* ptr0;
    int* ptr1 = &v0;
    int* ptr2 = &v0;
    char v3 = &v1 == 28;
    char v4 = (int)&v2 < 0;
    char v5 = __parity__((unsigned char)&v1 - 28);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x18) ^ (int)&v2) >>> 4) & 0x1);
    char v7 = (unsigned int)&v0 < 24;
    char v8 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&v2) & (int)(int*)((int)&v0 ^ 0x18)) < 0;
    int v9 = param1;
    int v10 = param1;
    int v11 = param0;
    int v12 = stderr;
    →fprintf(v12, v11);
    int* ptr3 = &ptr0;
    /*NO_RETURN*/ →exit(2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_fatal_error_arg2(int param0, int param1, int param2, int param3) {
    int v0;
    char v1;
    int v2;
    void* ptr0;
    int* ptr1 = &v0;
    int* ptr2 = &v0;
    char v3 = &v1 == 28;
    char v4 = (int)&v2 < 0;
    char v5 = __parity__((unsigned char)&v1 - 28);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x18) ^ (int)&v2) >>> 4) & 0x1);
    char v7 = (unsigned int)&v0 < 24;
    char v8 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&v2) & (int)(int*)((int)&v0 ^ 0x18)) < 0;
    int v9 = param1;
    int v10 = param0;
    int v11 = stderr;
    →fprintf(v11, v10);
    int v12 = param3;
    int v13 = param3;
    int v14 = param2;
    int v15 = stderr;
    →fprintf(v15, v14);
    int* ptr3 = &ptr0;
    /*NO_RETURN*/ →exit(2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_final_custom_operations(unsigned int param0) {
    int result;
    int v0;
    int v1 = v0;
    unsigned int v2 = param0;
    int* ptr0 = custom_ops_final_table;
    if(ptr0) {
        result = *ptr0;
        if(*(int*)(result + 4) != v2) {
            do {
                ptr0 = *(unsigned int*)(ptr0 + 1);
                if(!ptr0) {
                    goto loc_806F776;
                }
                else {
                    result = *ptr0;
                }
            }
            while(*(int*)(result + 4) == v2);
        }
    }
    else {
    loc_806F776:
        int v3 = caml_stat_alloc(28);
        result = v3;
        *(int*)v3 = "_final";
        *(unsigned int*)(v3 + 4) = v2;
        *(int*)(v3 + 8) = 0;
        *(int*)(v3 + 12) = 0;
        *(int*)(v3 + 16) = 0;
        *(int*)(v3 + 20) = 0;
        int v4 = caml_stat_alloc(8);
        *(int*)v4 = result;
        *(unsigned int*)(v4 + 4) = custom_ops_final_table;
        custom_ops_final_table = v4;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_final_register(int param0, unsigned int param1) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = param1;
    if(!((unsigned char)v3 & 0x1)) {
        v0 = v3;
        if(!(*(char*)(((v3 >>> 12) & 0x7ff) + *(int*)((v3 >>> 23) * 4 + (int)&caml_page_table)) & 0x3)) {
            goto loc_806F384;
        }
    }
    else {
    loc_806F384:
        caml_invalid_argument("Gc.finalise");
    }
    unsigned int v4 = size;
    if(young >= v4) {
        int v5 = final_table;
        if(!v5) {
            unsigned int v6 = (unsigned int)caml_stat_alloc(360);
            final_table = v6;
            size = 30;
        }
        else {
            int v7 = caml_stat_resize(v5, v4 * 6 * 4);
            final_table = v7;
            size = v4 * 2;
        }
    }
    unsigned int v8 = young;
    int* ptr0 = (int*)(v8 * 3 * 4 + final_table);
    *ptr0 = param0;
    if(*(unsigned char*)(v0 - 4) == 249) {
        *(ptr0 + 2) = (*(int*)(v0 - 4) >>> 10) * 4;
        *(unsigned int*)(ptr0 + 1) = (int*)(v0 - (int)(unsigned char*)((*(int*)(v0 - 4) >>> 10) * 4));
    }
    else {
        *(ptr0 + 2) = 0;
        *(unsigned int*)(ptr0 + 1) = v3;
    }
    young = v8 + 1;
    return 1;
}

int caml_final_release() {
    running_finalisation_function = 0;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_finalize_channel(int param0) {
    int v0;
    int v1 = v0;
    int v2 = *(int*)(param0 + 4);
    int result = (int)(*(unsigned int*)(v2 + 44) - 1);
    *(int*)(v2 + 44) = (int)(*(unsigned int*)(v2 + 44) - 1);
    if(result <= 0) {
        unsigned int v3 = caml_channel_mutex_free;
        if(v3) {
            v3(v2);
        }
        unlink_channel();
        result = caml_stat_free(v2);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_find_custom_operations(int param0) {
    int* result;
    int v0;
    int v1;
    int v2 = v0;
    unsigned int* ptr0 = custom_ops_table;
    if(ptr0) {
        do {
            result = *ptr0;
            →strcmp(*result, param0);
            if(!v1) {
                return result;
            }
            ptr0 = *(ptr0 + 1);
        }
        while(ptr0);
    }
    else {
        result = NULL;
    }
    return result;
}

int caml_float_compare(double* param0, double* param1) {
    __int128 v0;
    int result;
    int result;
    char v1;
    char v2;
    char v3;
    __int128 v4 = *param0;
    __int128 v5 = *param1;
    fucomi(v5, v4);
    if(v1) {
        v0 = v5;
    loc_8066F3D:
        fucomi(v0, v4);
        if((v3 || v2)) {
            fucomi(v0, v4);
            if((v3 || v2)) {
                fucomip(v0, v0);
                if(v1 || !v2) {
                    fucomip(v4, v4);
                    if(!v1 && v2) {
                        goto loc_8066F71;
                    }
                    else {
                        return 1;
                    }
                }
            }
            result = 3;
        }
        else {
        loc_8066F71:
            result = -1;
        }
    }
    else if(v2) {
        result = 1;
    }
    else {
        v0 = v5;
        goto loc_8066F3D;
    }
    return result;
}

long long* caml_float_of_int(int param0) {
    int v0;
    return caml_copy_double((double)(param0 >> 1), v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* caml_float_of_string(int param0) {
    long long* ptr0;
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    int* ptr1;
    int v3;
    __SyntheticTypeUnknownF v4;
    int v5;
    char v6;
    int* ptr2 = &ptr1;
    unsigned int v7 = v2;
    unsigned int v8 = &v7;
    char v9 = &v0 == 140;
    char v10 = (int)&v5 < 0;
    char v11 = __parity__((unsigned char)&v0 - 140);
    char v12 = (int*)((int)(int*)((int)(int*)((int)(int*)(&v7 ^ 0x7c) ^ (int)&v5) >>> 4) & 0x1);
    char v13 = &v7 < 124;
    char v14 = (int)(int*)((int)(int*)(&v7 ^ (int)&v5) & (int)(int*)(&v7 ^ 0x7c)) < 0;
    int v15 = param0;
    unsigned int v16 = caml_string_length(v15);
    unsigned int v17 = v16;
    int v18 = &v6;
    char v19 = v16 == 63;
    char v20 = (int)v16 < 63;
    char v21 = __parity__((unsigned char)v16 - 63);
    char v22 = v16 < 63;
    char v23 = (((v16 - 63) ^ v16) & (v16 ^ 0x3f)) < 0;
    char v24 = (((v16 - 63) ^ (v16 ^ 0x3f)) >>> 4) & 0x1;
    if(!v22 && !v19) {
        int v25 = v16 + 1;
        int v26 = caml_stat_alloc(v25);
        v18 = v26;
    }
    int v27 = v15;
    int v28 = &v6;
    while(1) {
        char v29 = v17 ? 0: 1;
        char v30 = v17 >= 0x80000000;
        char v31 = __parity__((unsigned char)v17);
        char v32 = 0;
        char v33 = 0;
        if(v29) {
            break;
        }
        else {
            unsigned char v34 = *(unsigned char*)v27;
            int v35 = 0;
            char v36 = *(char*)v27 == 95;
            char v37 = (char)v34 < 95;
            char v38 = __parity__(v34 - 95);
            char v39 = v34 < 95;
            char v40 = (((v34 - 95) ^ v34) & (v34 ^ 0x5f)) < 0;
            char v41 = (((v34 - 95) ^ (v34 ^ 0x5f)) >>> 4) & 0x1;
            if(!v36) {
                *(unsigned char*)v28 = v34;
                int v42 = v28;
                ++v28;
                char v43 = v28 ? 0: 1;
                char v44 = v28 < 0;
                char v45 = __parity__((unsigned char)v28);
                char v46 = (((v42 ^ 0x1) ^ v28) >>> 4) & 0x1;
                char v47 = (unsigned int)v42 >= 0xffffffff;
                char v48 = ((v28 ^ v42) & ~(v42 ^ 0x1)) < 0;
            }
            ++v27;
            v8 = v17;
            --v17;
            char v49 = v17 ? 0: 1;
            char v50 = v17 >= 0x80000000;
            char v51 = __parity__((unsigned char)v17);
            char v52 = (((v8 ^ 0x1) ^ v17) >>> 4) & 0x1;
            char v53 = v8 < 1;
            char v54 = (int)((v17 ^ v8) & (v8 ^ 0x1)) < 0;
        }
    }
    *(char*)v28 = 0;
    char v55 = v28 == &v6;
    char v56 = v28 < &v6;
    char v57 = __parity__((unsigned char)v28 - (unsigned char)&v6);
    char v58 = (unsigned int)v28 < (unsigned int)&v6;
    char v59 = (((v28 - &v6) ^ v28) & (v28 ^ &v6)) < 0;
    char v60 = (((v28 - &v6) ^ (v28 ^ &v6)) >>> 4) & 0x1;
    if(!v55) {
        int v61 = &v1;
        →strtod(&v6, &v1);
        double v62 = v4;
        char v63 = 0;
        char v64 = v28 == v1;
        char v65 = v28 > (int)v1;
        char v66 = __parity__((unsigned char)v1 - (unsigned char)v28);
        char v67 = (unsigned int)v28 > v1;
        char v68 = (((v1 - v28) ^ v1) & (v28 ^ v1)) < 0;
        char v69 = (((v1 - v28) ^ (v28 ^ v1)) >>> 4) & 0x1;
        if(v64) {
            *(long long*)&v5 = v62;
            return caml_copy_double(*(double*)&v5, v3);
        }
    }
    ptr0 = (long long*)/*BAD_CALL!*/ caml_failwith("float_of_string");
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* caml_float_of_substring(int param0, unsigned int param1, unsigned int param2) {
    long long* ptr0;
    int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    int* ptr1;
    int v4;
    __SyntheticTypeUnknownF v5;
    int v6;
    char v7;
    unsigned int v8;
    int* ptr2 = &ptr1;
    unsigned int v9 = v8;
    int* ptr3 = &v9;
    char v10 = &v2 == 140;
    char v11 = (int)&v6 < 0;
    char v12 = __parity__((unsigned char)&v2 - 140);
    char v13 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v9 ^ 0x7c) ^ (int)&v6) >>> 4) & 0x1);
    char v14 = (unsigned int)&v9 < 124;
    char v15 = (int)(int*)((int)(int*)((int)&v9 ^ (int)&v6) & (int)(int*)((int)&v9 ^ 0x7c)) < 0;
    unsigned int v16 = param1;
    unsigned int v17 = param1;
    unsigned int v18 = v16 >> 1;
    char v19 = v17 & 0x1;
    char v20 = 0;
    char v21 = v18 ? 0: 1;
    char v22 = v18 >= 0x80000000;
    char v23 = __parity__((unsigned char)v18);
    int v24 = param0;
    unsigned int v25 = caml_string_length(v24);
    char v26 = v18 ? 0: 1;
    char v27 = v18 >= 0x80000000;
    char v28 = __parity__((unsigned char)v18);
    char v29 = 0;
    char v30 = 0;
    if(!v27) {
        char v31 = v25 == v18;
        char v32 = (int)v25 < (int)v18;
        char v33 = __parity__((unsigned char)v25 - (unsigned char)v18);
        char v34 = v25 < v18;
        char v35 = (int)(((v25 - v18) ^ v25) & (v25 ^ v18)) < 0;
        char v36 = (((v25 - v18) ^ (v25 ^ v18)) >>> 4) & 0x1;
        if(v34 || v31) {
            goto loc_8067707;
        }
        else {
            unsigned int v37 = param2;
            v17 = param2;
            v1 = v37 >> 1;
            char v38 = v17 & 0x1;
            char v39 = 0;
            char v40 = v1 ? 0: 1;
            char v41 = v1 >= 0x80000000;
            char v42 = __parity__((unsigned char)v1);
            char v43 = v1 ? 0: 1;
            char v44 = v1 >= 0x80000000;
            char v45 = __parity__((unsigned char)v1);
            char v46 = 0;
            char v47 = 0;
            if(v43 || v44 != 0) {
                goto loc_8067707;
            }
            else {
                unsigned int v48 = v25 - v18;
                char v49 = v48 == v1;
                char v50 = (int)v48 > (int)v1;
                char v51 = __parity__((unsigned char)v1 - (unsigned char)v48);
                char v52 = v48 > v1;
                char v53 = (int)(((v1 - v48) ^ v1) & (v48 ^ v1)) < 0;
                char v54 = (((v1 - v48) ^ (v48 ^ v1)) >>> 4) & 0x1;
                if(!v52 && !v49) {
                    goto loc_8067707;
                }
                else {
                    char v55 = v1 == 63;
                    char v56 = (int)v1 < 63;
                    char v57 = __parity__((unsigned char)v1 - 63);
                    char v58 = v1 < 63;
                    char v59 = (((v1 - 63) ^ v1) & (v1 ^ 0x3f)) < 0;
                    char v60 = (((v1 - 63) ^ (v1 ^ 0x3f)) >>> 4) & 0x1;
                    if((v58 || v55)) {
                        v0 = &v7;
                    }
                    else {
                        int v61 = v1 + 1;
                        int v62 = caml_stat_alloc(v61);
                        v0 = v62;
                    }
                }
            }
        }
    }
    else {
    loc_8067707:
        v1 = 0;
        v0 = &v7;
    }
    int v63 = param0;
    unsigned char* ptr4 = (unsigned char*)(v63 + v18);
    int v64 = v0;
    while(1) {
        char v65 = v1 ? 0: 1;
        char v66 = v1 >= 0x80000000;
        char v67 = __parity__((unsigned char)v1);
        char v68 = 0;
        char v69 = 0;
        if(v65) {
            break;
        }
        else {
            unsigned char v70 = *ptr4;
            int v71 = 0;
            char v72 = *ptr4 == 95;
            char v73 = (char)v70 < 95;
            char v74 = __parity__(v70 - 95);
            char v75 = v70 < 95;
            char v76 = (((v70 - 95) ^ v70) & (v70 ^ 0x5f)) < 0;
            char v77 = (((v70 - 95) ^ (v70 ^ 0x5f)) >>> 4) & 0x1;
            if(!v72) {
                *(unsigned char*)v64 = v70;
                int v78 = v64;
                ++v64;
                char v79 = v64 ? 0: 1;
                char v80 = v64 < 0;
                char v81 = __parity__((unsigned char)v64);
                char v82 = (((v78 ^ 0x1) ^ v64) >>> 4) & 0x1;
                char v83 = (unsigned int)v78 >= 0xffffffff;
                char v84 = ((v64 ^ v78) & ~(v78 ^ 0x1)) < 0;
            }
            ++ptr4;
            v17 = v1;
            --v1;
            char v85 = v1 ? 0: 1;
            char v86 = v1 >= 0x80000000;
            char v87 = __parity__((unsigned char)v1);
            char v88 = (((v17 ^ 0x1) ^ v1) >>> 4) & 0x1;
            char v89 = v17 < 1;
            char v90 = (int)((v1 ^ v17) & (v17 ^ 0x1)) < 0;
        }
    }
    *(char*)v64 = 0;
    char v91 = v64 == v0;
    char v92 = v64 < v0;
    char v93 = __parity__((unsigned char)v64 - (unsigned char)v0);
    char v94 = (unsigned int)v64 < (unsigned int)v0;
    char v95 = (((v64 - v0) ^ v64) & (v64 ^ v0)) < 0;
    char v96 = (((v64 - v0) ^ (v64 ^ v0)) >>> 4) & 0x1;
    if(!v91) {
        int v97 = &v3;
        →strtod(v0, &v3);
        double v98 = v5;
        char v99 = 0;
        char v100 = v64 == v3;
        char v101 = v64 > (int)v3;
        char v102 = __parity__((unsigned char)v3 - (unsigned char)v64);
        char v103 = (unsigned int)v64 > v3;
        char v104 = (((v3 - v64) ^ v3) & (v64 ^ v3)) < 0;
        char v105 = (((v3 - v64) ^ (v64 ^ v3)) >>> 4) & 0x1;
        if(v100) {
            if(v0 != &v7) {
                caml_stat_free(v0);
            }
            *(long long*)&v6 = v98;
            return caml_copy_double(*(double*)&v6, v4);
        }
    }
    char v106 = v0 == &v7;
    if(!v106) {
        int v107 = caml_stat_free(v0);
    }
    ptr0 = (long long*)/*BAD_CALL!*/ caml_failwith("float_of_string");
}

long long* caml_floor_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →floor(*param0);
    return caml_copy_double(v3, v1);
}

int caml_flush(int* param0) {
    int v0;
    int result;
    int v1 = v0;
    do {
        result = caml_flush_partial(param0);
    }
    while(!result);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_flush_partial(int* param0) {
    int v0;
    int v1 = v0;
    int* ptr0 = param0;
    int* ptr1 = ptr0 + 13;
    int* ptr2 = (int*)(*(ptr0 + 4) - (int)(ptr0 + 13));
    if((int)ptr2 > 0) {
        unsigned int v2 = (unsigned int)do_write((int)ptr2, (int)(ptr0 + 13));
        int v3 = *(ptr0 + 1);
        *(ptr0 + 1) = *(ptr0 + 1) + v2;
        *(ptr0 + 2) = (v2 >> 31) + (unsigned int)__carry__(v2, v3) + *(ptr0 + 2);
        if((int)v2 < (int)ptr2) {
            int* ptr3 = (int*)((int)ptr2 - v2);
            int* ptr4 = (int*)(v2 + (int)ptr1);
            int* ptr5 = ptr1;
            →memmove();
        }
        *(ptr0 + 4) = *(ptr0 + 4) - v2;
    }
    return ptr0 + 13 != *(ptr0 + 4) ? 0: 1;
}

long long* caml_fmod_float(double* param0, double* param1) {
    __SyntheticTypeUnknownF v0;
    __SyntheticTypeUnknown v1;
    int v2;
    char v3;
    __SyntheticTypeUnknownF v4;
    __SyntheticTypeUnknownF __x;
    __int128 v5 = *param1;
    __SyntheticTypeUnknownF v6 = *param0;
    do {
        v1[v3] = fprem(v6, v5);
        fnstsw((unsigned short)param1);
    }
    while((int*)((int)(int*)((int)param1 >>> 10) & 0x1));
    fucomi(v6, v6);
    if(!(int*)((int)(int*)((int)param1 >>> 14) & 0x1)) {
        *(long long*)&v2 = v4;
        v1[v3] = →fmod(__x, *(double*)&v2);
    }
    else {
        v0 = v6;
    }
    return caml_copy_double(v0, v2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_format_float(int param0, double* param1) {
    int result;
    char v0;
    int v1;
    __SyntheticTypeUnknown v2;
    int v3;
    unsigned char v4;
    char v5;
    int v6;
    char v7;
    int v8 = v6;
    int v9 = param0;
    char v10 = *(char*)param0;
    if(*(char*)param0) {
        if((unsigned char)(v10 - 48) > 9) {
            do {
                ++v9;
                v0 = *(char*)v9;
                if(!*(char*)v9) {
                    v2[v7 - 1] = *param1;
                    *(long long*)&v1 = v2[v7 - 1];
                    →sprintf();
                    return caml_copy_string(&v5);
                }
            }
            while((unsigned char)(v0 - 48) > 9);
        }
        →strtol(v9, 0, 10);
        unsigned int v11 = (int)(unsigned int)(v3 + 350) >= 350 ? (unsigned int)(v3 + 350): 350;
        unsigned char v12 = *(unsigned char*)v9;
        if(*(char*)v9) {
            if(v12 == 46) {
                goto loc_8067068;
            }
            else {
                do {
                    ++v9;
                    v4 = *(unsigned char*)v9;
                    if(!*(char*)v9) {
                        goto loc_8067089;
                    }
                }
                while(v4 != 46);
            loc_8067068:
                →strtol(v9 + 1, 0, 10);
                v11 = (int)(unsigned int)(v3 + 350) > (int)v11 ? (unsigned int)(v3 + 350): v11;
            }
        }
    loc_8067089:
        if(v11 <= 0x171) {
            v2[v7 - 1] = *param1;
            *(long long*)&v1 = v2[v7 - 1];
            →sprintf();
            return caml_copy_string(&v5);
        }
        int v13 = caml_stat_alloc((int)v11);
        *(long long*)&v1 = *param1;
        →sprintf();
        result = caml_copy_string(v13);
        if(v13 != &v5) {
            caml_stat_free(v13);
        }
    }
    else {
        v2[v7 - 1] = *param1;
        *(long long*)&v1 = v2[v7 - 1];
        →sprintf();
        result = caml_copy_string(&v5);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_format_int(int param0, int param1) {
    char v0;
    int v1;
    unsigned char v2;
    int v3 = v1;
    int v4 = parse_format(&v0, &v2);
    →sprintf();
    int result = caml_copy_string(v4);
    if(v4 != &v0) {
        caml_stat_free(v4);
    }
    return result;
}

unsigned int caml_free_dependent_memory(int param0) {
    unsigned int v0 = caml_dependent_size;
    caml_dependent_size = (unsigned int)(param0 >>> 2) > v0 ? 0: v0 - (unsigned int)(param0 >>> 2);
    return (unsigned int)(param0 >>> 2);
}

int caml_frexp_float(double* param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v3;
    unsigned int v5 = caml_local_roots;
    unsigned int v6 = caml_local_roots;
    int v7 = 1;
    int v8 = 1;
    int* ptr0 = &param0;
    int result = 0;
    long long* ptr1 = NULL;
    int* ptr2 = &v6;
    caml_local_roots = &ptr2;
    int v9 = 1;
    int v10 = 2;
    int* ptr3 = &result;
    int* ptr4 = &ptr1;
    int v11 = &v0;
    __SyntheticTypeUnknownF v12 = *param0;
    *(long long*)&v2 = v12;
    →frexp(v2, v1, &v0);
    *(long long*)&v2 = v12;
    ptr1 = caml_copy_double(*(double*)&v2, &v0);
    int v13 = caml_alloc_tuple(2);
    result = v13;
    *(long long**)v13 = ptr1;
    *(int*)(result + 4) = v0 * 2 + 1;
    caml_local_roots = v5;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_garbage_collection() {
    unsigned int v0 = caml_young_start;
    caml_young_limit = caml_young_start;
    if(caml_young_ptr < v0 || caml_force_major_slice) {
        caml_minor_collection();
    }
    return caml_process_pending_signals();
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_gc_compaction() {
    caml_gc_message(16, "Heap compaction requested\n", 0);
    caml_empty_minor_heap();
    caml_finish_major_cycle();
    caml_final_do_calls();
    caml_empty_minor_heap();
    caml_finish_major_cycle();
    caml_compact_heap();
    caml_final_do_calls();
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_gc_counters() {
    int result;
    int v0;
    int v1;
    int v2;
    int v3 = v0;
    unsigned int v4 = caml_local_roots;
    unsigned int v5 = caml_local_roots;
    caml_local_roots = &v5;
    int v6 = 1;
    int v7 = 1;
    int* ptr0 = &result;
    unsigned int v8 = (caml_young_end - caml_young_ptr) >>> 2;
    int v9 = 0;
    double v10 = (double)*(long long*)&v8 + caml_stat_minor_words;
    double v11 = caml_stat_promoted_words;
    v8 = caml_allocated_words;
    double v12 = (double)*(long long*)&v8 + caml_stat_major_words;
    result = caml_alloc_tuple(3);
    *(long long*)&v1 = v10;
    long long* ptr1 = caml_copy_double(*(double*)&v1, v2);
    caml_modify((unsigned int*)result, (unsigned int)ptr1);
    *(long long*)&v1 = v11;
    long long* ptr2 = caml_copy_double(*(double*)&v1, v2);
    caml_modify((unsigned int*)(result + 4), (unsigned int)ptr2);
    *(long long*)&v1 = v12;
    long long* ptr3 = caml_copy_double(*(double*)&v1, v2);
    caml_modify((unsigned int*)(result + 8), (unsigned int)ptr3);
    caml_local_roots = v4;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_gc_full_major() {
    caml_gc_message(1, "Full major GC cycle requested\n", 0);
    caml_empty_minor_heap();
    caml_finish_major_cycle();
    caml_final_do_calls();
    caml_empty_minor_heap();
    caml_finish_major_cycle();
    test_and_compact();
    caml_final_do_calls();
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_gc_get() {
    int v0;
    int result;
    int v1 = v0;
    unsigned int v2 = caml_local_roots;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v3;
    int v4 = 1;
    int v5 = 1;
    int* ptr0 = &result;
    int v6 = caml_alloc_tuple(7);
    result = v6;
    caml_modify((unsigned int*)v6, (unsigned int)((caml_minor_heap_size >>> 2) * 2 + 1));
    caml_modify((unsigned int*)(result + 4), (unsigned int)((caml_major_heap_increment >>> 2) * 2 + 1));
    caml_modify((unsigned int*)(result + 8), (unsigned int)(caml_percent_free * 2 + 1));
    caml_modify((unsigned int*)(result + 12), (unsigned int)(caml_verb_gc * 2 + 1));
    caml_modify((unsigned int*)(result + 16), (unsigned int)(caml_percent_max * 2 + 1));
    caml_modify((unsigned int*)(result + 20), 1);
    caml_modify((unsigned int*)(result + 24), (unsigned int)(caml_allocation_policy * 2 + 1));
    caml_local_roots = v2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_gc_major() {
    caml_gc_message(1, "Major GC cycle requested\n", 0);
    caml_empty_minor_heap();
    caml_finish_major_cycle();
    test_and_compact();
    caml_final_do_calls();
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_gc_major_slice(int param0) {
    caml_empty_minor_heap();
    int v0 = caml_major_collection_slice(param0 >> 1);
    return v0 * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_gc_minor() {
    caml_minor_collection();
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_gc_quick_stat() {
    int result;
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    unsigned int v4 = caml_local_roots;
    unsigned int v5 = caml_local_roots;
    caml_local_roots = &v5;
    int v6 = 1;
    int v7 = 1;
    int* ptr0 = &result;
    unsigned int v8 = (caml_young_end - caml_young_ptr) >>> 2;
    int v9 = 0;
    double v10 = (double)*(long long*)&v8 + caml_stat_minor_words;
    double v11 = caml_stat_promoted_words;
    v8 = caml_allocated_words;
    double v12 = (double)*(long long*)&v8 + caml_stat_major_words;
    unsigned int v13 = caml_stat_minor_collections;
    unsigned int v14 = caml_stat_major_collections;
    int v15 = caml_stat_heap_size >>> 2;
    int v16 = caml_stat_top_heap_size >>> 2;
    unsigned int v17 = caml_stat_compactions;
    unsigned int v18 = caml_stat_heap_chunks;
    result = caml_alloc_tuple(16);
    *(long long*)&v0 = v10;
    long long* ptr1 = caml_copy_double(*(double*)&v0, v1);
    caml_modify((unsigned int*)result, (unsigned int)ptr1);
    *(long long*)&v0 = v11;
    long long* ptr2 = caml_copy_double(*(double*)&v0, v1);
    caml_modify((unsigned int*)(result + 4), (unsigned int)ptr2);
    *(long long*)&v0 = v12;
    long long* ptr3 = caml_copy_double(*(double*)&v0, v1);
    caml_modify((unsigned int*)(result + 8), (unsigned int)ptr3);
    caml_modify((unsigned int*)(result + 12), (unsigned int)(v13 * 2 + 1));
    caml_modify((unsigned int*)(result + 16), (unsigned int)(v14 * 2 + 1));
    caml_modify((unsigned int*)(result + 20), (unsigned int)(v15 * 2 + 1));
    caml_modify((unsigned int*)(result + 24), (unsigned int)(v18 * 2 + 1));
    caml_modify((unsigned int*)(result + 28), 1);
    caml_modify((unsigned int*)(result + 32), 1);
    caml_modify((unsigned int*)(result + 36), 1);
    caml_modify((unsigned int*)(result + 40), 1);
    caml_modify((unsigned int*)(result + 44), 1);
    caml_modify((unsigned int*)(result + 48), 1);
    caml_modify((unsigned int*)(result + 52), (unsigned int)(v17 * 2 + 1));
    caml_modify((unsigned int*)(result + 56), (unsigned int)(v16 * 2 + 1));
    int v19 = caml_stack_usage();
    caml_modify((unsigned int*)(result + 60), (unsigned int)(v19 * 2 + 1));
    caml_local_roots = v4;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_gc_set(int* param0) {
    int v0;
    int v1;
    int v2 = v0;
    caml_verb_gc = (unsigned int)(*(param0 + 3) >> 1);
    int v3 = norm_pfree();
    if(caml_percent_free != v3) {
        caml_percent_free = v3;
        caml_gc_message(32, &gvar_8071A6F, v3);
    }
    norm_pmax();
    if(caml_percent_max != v1) {
        caml_percent_max = v1;
        caml_gc_message(32, "New max overhead: %d%%\n", v1);
    }
    unsigned int v4 = norm_heapincr();
    if(v4 * 4 != caml_major_heap_increment) {
        caml_major_heap_increment = v4 * 4;
        caml_gc_message(32, "New heap increment size: %luk bytes\n", (int)(unsigned int)((v4 >>> 8) & 0x3fffff));
    }
    int v5 = *(param0 + 6) >> 1;
    if(((unsigned int)v5 < 2 ? v5: 1) != caml_allocation_policy) {
        caml_gc_message(32, "New allocation policy: %d\n", (unsigned int)v5 < 2 ? v5: 1);
        caml_set_allocation_policy((unsigned int)((unsigned int)v5 < 2 ? v5: 1));
    }
    unsigned int v6 = norm_minsize();
    if(caml_minor_heap_size != v6) {
        caml_gc_message(32, "New minor heap size: %luk bytes\n", (int)(v6 >>> 10));
        caml_set_minor_heap_size((int)v6);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_gc_stat() {
    unsigned int v0;
    int* ptr0;
    int* ptr1;
    unsigned int v1;
    unsigned int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    unsigned int v8;
    int v9;
    int result;
    int v10;
    int v11;
    int v12;
    int v13 = v12;
    unsigned int v14 = caml_local_roots;
    int* ptr2 = caml_heap_start;
    if(!ptr2) {
        v9 = 0;
        v8 = 0;
        v7 = 0;
        v6 = 0;
        v5 = 0;
        v4 = 0;
        v3 = 0;
    }
    else {
        v2 = caml_gc_phase;
        v1 = caml_gc_sweep_hp;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        v6 = 0;
        v5 = 0;
        v4 = 0;
        v3 = 0;
        do {
            ++v3;
            ptr1 = ptr2 - 4;
            int* ptr3 = (int*)(*(ptr1 + 2) + (int)ptr2);
            if(ptr2 < ptr3) {
                ptr0 = ptr3;
                do {
                    int v15 = *ptr2;
                    if((unsigned int)(v15 & 0x300) == 0x100) {
                    loc_806CF25:
                        ++v5;
                        v4 = (v15 >>> 10) + v4 + 1;
                    }
                    else if((unsigned int)(v15 & 0x300) > 0x100) {
                        if((unsigned int)(v15 & 0x300) == 0x200) {
                            ++v7;
                            v6 = (v15 >>> 10) + v6 + 1;
                            v8 = (unsigned int)((v15 >>> 10) + 1) > v8 ? (unsigned int)((v15 >>> 10) + 1): v8;
                        }
                        else if((unsigned int)(v15 & 0x300) == 0x300) {
                            goto loc_806CF25;
                        }
                    }
                    else if(!(unsigned int)(v15 & 0x300)) {
                        v0 = (unsigned int)(v15 >>> 10);
                        if(!(unsigned int)(v15 >>> 10)) {
                            ++v9;
                        }
                        else if(v2 == 1 && (unsigned int)ptr2 >= v1) {
                            ++v7;
                            v6 = v0 + v6 + 1;
                            v8 = v0 + 1 > v8 ? v0 + 1: v8;
                        }
                        else {
                            ++v5;
                            v4 = v4 + v0 + 1;
                        }
                    }
                    ptr2 = (int*)((v15 >>> 10) * 4 + (int)ptr2) + 1;
                }
                while(ptr2 < ptr0);
            }
            ptr2 = *(unsigned int*)(ptr1 + 3);
        }
        while(ptr2);
    }
    unsigned int v16 = v14;
    caml_local_roots = &v16;
    int v17 = 1;
    int v18 = 1;
    int* ptr4 = &result;
    unsigned int v19 = (caml_young_end - caml_young_ptr) >>> 2;
    int v20 = 0;
    *(long long*)&ptr1 = (double)*(long long*)&v19 + caml_stat_minor_words;
    *(long long*)&v2 = caml_stat_promoted_words;
    v19 = caml_allocated_words;
    *(long long*)&v1 = (double)*(long long*)&v19 + caml_stat_major_words;
    unsigned int v21 = caml_stat_minor_collections;
    v0 = caml_stat_major_collections;
    ptr0 = (int*)(caml_stat_heap_size >>> 2);
    unsigned int v22 = caml_stat_compactions;
    int v23 = caml_stat_top_heap_size >>> 2;
    result = caml_alloc_tuple(16);
    *(long long*)&v10 = *(double*)&ptr1;
    long long* ptr5 = caml_copy_double(*(double*)&v10, v11);
    caml_modify((unsigned int*)result, (unsigned int)ptr5);
    *(long long*)&v10 = *(double*)&v2;
    long long* ptr6 = caml_copy_double(*(double*)&v10, v11);
    caml_modify((unsigned int*)(result + 4), (unsigned int)ptr6);
    *(long long*)&v10 = *(double*)&v1;
    long long* ptr7 = caml_copy_double(*(double*)&v10, v11);
    caml_modify((unsigned int*)(result + 8), (unsigned int)ptr7);
    caml_modify((unsigned int*)(result + 12), (unsigned int)(v21 * 2 + 1));
    caml_modify((unsigned int*)(result + 16), (unsigned int)(v0 * 2 + 1));
    caml_modify((unsigned int*)(result + 20), (unsigned int)((char*)((int)ptr0 * 2) + 1));
    caml_modify((unsigned int*)(result + 24), (unsigned int)(v3 * 2 + 1));
    caml_modify((unsigned int*)(result + 28), (unsigned int)(v4 * 2 + 1));
    caml_modify((unsigned int*)(result + 32), (unsigned int)(v5 * 2 + 1));
    caml_modify((unsigned int*)(result + 36), (unsigned int)(v6 * 2 + 1));
    caml_modify((unsigned int*)(result + 40), (unsigned int)(v7 * 2 + 1));
    caml_modify((unsigned int*)(result + 44), (unsigned int)(v8 * 2 + 1));
    caml_modify((unsigned int*)(result + 48), (unsigned int)(v9 * 2 + 1));
    caml_modify((unsigned int*)(result + 52), (unsigned int)(v22 * 2 + 1));
    caml_modify((unsigned int*)(result + 56), (unsigned int)(v23 * 2 + 1));
    int v24 = caml_stack_usage();
    caml_modify((unsigned int*)(result + 60), (unsigned int)(v24 * 2 + 1));
    caml_local_roots = v14;
    return result;
}

int caml_ge_float(double* param0, double* param1) {
    char v0;
    fucomip(*param1, *param0);
    return v0 ? 1: 3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_get_exception_backtrace() {
    unsigned int v0;
    int v1;
    int v2;
    int v3;
    unsigned int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9 = v7;
    unsigned int v10 = caml_local_roots;
    unsigned int v11 = caml_local_roots;
    int result = 0;
    int v12 = 0;
    int v13 = 0;
    unsigned int v14 = v10;
    caml_local_roots = &v14;
    int v15 = 1;
    int v16 = 4;
    int* ptr0 = &result;
    int* ptr1 = &v3;
    int* ptr2 = &v12;
    int* ptr3 = &v13;
    v3 = caml_alloc(caml_backtrace_pos, 0);
    if(!(caml_backtrace_pos ? 0: 1) && caml_backtrace_pos < 0x80000000) {
        unsigned int v17 = 0;
        do {
            extract_location_info(v8, (int)&v4);
            if(v4) {
                v13 = caml_copy_string(v5);
                int v18 = caml_alloc_small(5, 0);
                v12 = v18;
                *(int*)v18 = v0 < 1 ? 1: 3;
                *(int*)(v12 + 4) = v13;
                *(int*)(v12 + 8) = v1 * 2 + 1;
                *(int*)(v12 + 12) = v6 * 2 + 1;
                *(int*)(v12 + 16) = v2 * 2 + 1;
            }
            else {
                int v19 = caml_alloc_small(1, 1);
                v12 = v19;
                *(int*)v19 = v0 < 1 ? 1: 3;
            }
            caml_modify((unsigned int*)(v17 * 4 + v3), (unsigned int)v12);
            ++v17;
        }
        while((int)caml_backtrace_pos > (int)v17);
    }
    int v20 = caml_alloc_small(1, 0);
    result = v20;
    *(int*)v20 = v3;
    caml_local_roots = v11;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* caml_getblock(int* param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    int* ptr0 = param0;
    int v4 = param2;
    int v5 = *(ptr0 + 4);
    unsigned int* result = (unsigned int*)(*(ptr0 + 5) - v5);
    if((int)result >= v4) {
        v1 = v5;
        v0 = param1;
        →memmove();
        *(ptr0 + 4) = *(ptr0 + 4) + v4;
        result = (unsigned int*)v4;
    }
    else if((int)result > 0) {
        v1 = v5;
        v0 = param1;
        →memmove();
        *(unsigned int*)(ptr0 + 4) = (int*)(*(ptr0 + 4) + (int)result);
    }
    else {
        int v6 = (int)(ptr0 + 13);
        int v7 = (int)(*(unsigned int*)(ptr0 + 3) - (int)(ptr0 + 13));
        int v8 = (int)(*(unsigned int*)(ptr0 + 3) - (int)(ptr0 + 13));
        v1 = (int)(ptr0 + 13);
        unsigned int* ptr1 = caml_do_read(*ptr0, (int)(ptr0 + 13), v7);
        int v9 = *(ptr0 + 1);
        *(unsigned int*)(ptr0 + 1) = (int*)(*(ptr0 + 1) + (int)ptr1);
        *(unsigned int*)(ptr0 + 2) = (int*)((int)(int*)((int)(int*)((int)ptr1 >> 31) + (unsigned int)(unsigned int*)__carry__((int)ptr1, v9)) + *(ptr0 + 2));
        *(unsigned int*)(ptr0 + 5) = (int*)((int)ptr1 + (int)ptr0) + 13;
        result = (int)ptr1 <= v4 ? ptr1: v4;
        →memmove();
        *(unsigned int*)(ptr0 + 4) = (int*)((int)ptr0 + (int)result) + 13;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_getword(int param0) {
    int v0;
    int v1;
    int v2 = v1;
    int v3 = param0;
    int v4 = param0;
    int v5 = caml_channel_binary_mode();
    if(!v5) {
        caml_failwith("input_binary_int: not a binary channel");
    }
    int result = 0;
    unsigned int v6 = 0;
    do {
        char* ptr0 = *(unsigned int*)(v3 + 16);
        if(*(unsigned int*)(v3 + 20) <= (unsigned int)ptr0) {
            int v7 = caml_refill(v3);
            v0 = (unsigned int)(unsigned char)v7;
        }
        else {
            v0 = (unsigned int)*ptr0;
            *(unsigned int*)(v3 + 16) = (int*)(ptr0 + 1);
        }
        result = result * 0x100 + v0;
        ++v6;
    }
    while(v6 != 4);
    return result;
}

int caml_globalsym(int param0) {
    return caml_dlsym(0, param0);
}

int* caml_greaterequal(int param0, float* param1) {
    float* ptr0 = compare_val(NULL, param1);
    if(compare_stack != &compare_stack_init) {
        compare_free_stack();
    }
    return (int)ptr0 < 0 ? (int*)0x1: (int*)0x3;
}

int caml_greaterthan(int param0, float* param1) {
    float* ptr0 = compare_val(NULL, param1);
    if(compare_stack != &compare_stack_init) {
        float* ptr1 = (float*)compare_free_stack();
    }
    return (int)ptr0 <= 0 ? 1: 3;
}

int caml_gt_float(double* param0, double* param1) {
    char v0;
    char v1;
    fucomip(*param1, *param0);
    return v1 || v0 ? 1: 3;
}

int caml_hash_variant(unsigned char* param0) {
    unsigned char* ptr0 = param0;
    int result = 1;
    if(*ptr0) {
        do {
            result = ((result >> 1) * 223 + (unsigned int)*ptr0) * 2 + 1;
            ++ptr0;
        }
        while(*ptr0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_initialize(unsigned int* param0, int* param1) {
    unsigned int* ptr0 = param0;
    int* result = param1;
    *ptr0 = param1;
    if(!((unsigned char)result & 0x1) && caml_young_end > (unsigned int)result && caml_young_start < (unsigned int)result) {
        result = (int*)((int)(int*)((int)ptr0 >>> 12) & 0x7ff);
        if((*(char*)((int)*(unsigned int*)((int)(int*)((int)(int*)((int)ptr0 >>> 23) * 4) + (int)&caml_page_table) + (int)result) & 0x1)) {
            if(gvar_807EB28 >= gvar_807EB2C) {
                caml_realloc_ref_table((int*)&caml_ref_table);
            }
            result = (int*)&gvar_807EB28;
            unsigned int* ptr1 = gvar_807EB28;
            *ptr1 = ptr0;
            gvar_807EB28 = (int*)(ptr1 + 1);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_input_scan_line(int* param0) {
    int* result;
    int v0;
    int v1;
    unsigned char v2;
    int v3;
    int v4 = v3;
    int* ptr0 = param0;
    unsigned char* ptr1 = *(unsigned int*)(ptr0 + 4);
    int* ptr2 = ptr0 + 13;
    int* ptr3 = ptr0 + 13;
    do {
        unsigned int v5 = *(unsigned int*)(ptr0 + 5);
        if(v5 <= (unsigned int)ptr1) {
            int v6 = *(ptr0 + 4);
            if((unsigned int)(ptr0 + 13) < (unsigned int)v6) {
                v1 = (int)(v5 - v6);
                v0 = v6;
                int* ptr4 = ptr2;
                →memmove();
                int* ptr5 = (int*)((int)ptr3 - *(ptr0 + 4));
                *(unsigned int*)(ptr0 + 4) = ptr3;
                *(unsigned int*)(ptr0 + 5) = (int*)(*(ptr0 + 5) + (int)ptr5);
                ptr1 = (unsigned char*)((int)ptr5 + (int)ptr1);
            }
            int v7 = *(ptr0 + 5);
            unsigned int v8 = *(unsigned int*)(ptr0 + 3);
            if(v8 <= (unsigned int)v7) {
                result = (int*)(*(unsigned int*)(ptr0 + 4) - v7);
            }
            else {
                v1 = (int)(v8 - v7);
                v0 = v7;
                unsigned int* ptr6 = caml_do_read(*ptr0, v7, (int)(v8 - v7));
                if(!ptr6) {
                    result = (int*)(*(unsigned int*)(ptr0 + 4) - *(ptr0 + 5));
                }
                else {
                    int v9 = *(ptr0 + 1);
                    *(unsigned int*)(ptr0 + 1) = (int*)(*(ptr0 + 1) + (int)ptr6);
                    *(unsigned int*)(ptr0 + 2) = (int*)((int)(int*)((int)(int*)((int)ptr6 >> 31) + (unsigned int)(unsigned int*)__carry__((int)ptr6, v9)) + *(ptr0 + 2));
                    *(unsigned int*)(ptr0 + 5) = (int*)(*(ptr0 + 5) + (int)ptr6);
                    return result;
                }
            }
        }
        else {
            v2 = *ptr1;
            ++ptr1;
        }
        return result;
    }
    while(v2 != 10);
    return (int*)((int)ptr1 - *(ptr0 + 4));
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_input_val(int param0) {
    int result;
    int v0;
    int v1 = caml_channel_binary_mode();
    if(!v1) {
        caml_failwith("input_value: not a binary channel");
    }
    int v2 = caml_getword(param0);
    if(v2 != -2070567234) {
        caml_failwith("input_value: bad object");
    }
    int v3 = caml_getword(param0);
    int v4 = caml_getword(param0);
    int v5 = caml_getword(param0);
    caml_getword(param0);
    int v6 = caml_stat_alloc(v3);
    int v7 = caml_really_getblock((int*)param0, v6, v3);
    if(!v7) {
        caml_stat_free(v6);
        caml_failwith("input_value: truncated object");
    }
    intern_input = v6;
    intern_input_malloced = 1;
    intern_src = v6;
    intern_alloc(v0, (unsigned int)v4);
    intern_rec();
    intern_add_to_heap();
    caml_stat_free((int)intern_input);
    unsigned int v8 = intern_obj_table;
    if(v8) {
        caml_stat_free((int)v8);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_input_val_from_string(int param0, int param1) {
    int v0;
    int v1 = v0;
    unsigned int v2 = caml_local_roots;
    unsigned int v3 = caml_local_roots;
    int v4 = 1;
    int v5 = 1;
    int* ptr0 = &param0;
    int v6 = 0;
    int* ptr1 = &v3;
    caml_local_roots = &ptr1;
    int v7 = 1;
    int v8 = 1;
    int* ptr2 = &v6;
    char* ptr3 = (char*)(param0 + param1 + 8);
    intern_input_malloced = 0;
    unsigned int v9 = (unsigned int)((unsigned int)*(ptr3 + 2) * 0x100 + (unsigned int)*(ptr3 + 1) * 0x10000 + ((unsigned int)*ptr3 * 0x1000000 + (unsigned int)*(ptr3 + 3)));
    int v10 = (unsigned int)*(ptr3 + 4) * 0x1000000 + (unsigned int)*(ptr3 + 7);
    int v11 = (unsigned int)*(ptr3 + 6) * 0x100;
    intern_src = (int*)(ptr3 + 12);
    intern_alloc(v11, v9);
    intern_src = (unsigned int)(param0 + param1 + 20);
    intern_rec();
    intern_add_to_heap();
    unsigned int v12 = intern_obj_table;
    if(v12) {
        caml_stat_free((int)v12);
    }
    caml_local_roots = v2;
    return 0;
}

int caml_input_value(int param0) {
    int* ptr0;
    int v0;
    int v1 = v0;
    unsigned int v2 = caml_local_roots;
    int v3 = 1;
    int v4 = 1;
    int* ptr1 = &param0;
    int v5 = *(int*)(param0 + 4);
    caml_local_roots = &ptr0;
    unsigned int v6 = caml_channel_mutex_lock;
    if(v6) {
        v6(v5);
    }
    int result = caml_input_val(v5);
    unsigned int v7 = caml_channel_mutex_unlock;
    if(v7) {
        v7(v5);
    }
    caml_local_roots = v2;
    return result;
}

int caml_input_value_from_block(char* param0, unsigned int param1) {
    intern_input = param0;
    intern_input_malloced = 0;
    char* ptr0 = param0 + 4;
    intern_src = (int*)(param0 + 4);
    if((unsigned int)((unsigned int)*(ptr0 - 2) * 0x100 + (unsigned int)*(ptr0 - 3) * 0x10000 + ((unsigned int)*param0 * 0x1000000 + (unsigned int)*(ptr0 - 1))) != -2070567234) {
        ptr0 = (char*)caml_failwith("input_value_from_block: bad object");
    }
    intern_src = (int*)(ptr0 + 4);
    if((unsigned int)((unsigned int)*(ptr0 + 1) * 0x10000 + (unsigned int)*(ptr0 + 2) * 0x100 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(ptr0 + 3)) + 20) > param1) {
        caml_failwith("input_value_from_block: bad block length");
    }
    return input_val_from_block();
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_input_value_from_malloc(unsigned int param0, int param1) {
    int v0;
    int v1 = v0;
    intern_input = param0;
    char* ptr0 = (char*)(param0 + param1);
    intern_input_malloced = 1;
    int* ptr1 = (int*)(ptr0 + 4);
    intern_src = (int*)(ptr0 + 4);
    if((unsigned int)((unsigned int)*(char*)((char*)ptr1 - 2) * 0x100 + (unsigned int)*(char*)((char*)ptr1 - 3) * 0x10000 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(char*)((char*)ptr1 - 1))) != -2070567234) {
        ptr1 = (int*)caml_failwith("input_value_from_malloc: bad object");
    }
    intern_src = ptr1 + 1;
    int result = input_val_from_block();
    caml_stat_free((int)intern_input);
    return result;
}

int caml_input_value_from_string(int param0, int param1) {
    return caml_input_val_from_string(param0, param1 >> 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_install_signal_handler(int param0, char param1) {
    int v0;
    int v1 = v0;
    unsigned int v2 = caml_local_roots;
    unsigned int v3 = caml_local_roots;
    int v4 = 1;
    int v5 = 2;
    int* ptr0 = &param0;
    unsigned char* ptr1 = &param1;
    int result = 0;
    int* ptr2 = &v3;
    caml_local_roots = &ptr2;
    int v6 = 1;
    int v7 = 1;
    int* ptr3 = &result;
    unsigned int v8 = caml_convert_signal_number((unsigned int)(param0 >> 1));
    unsigned int v9 = v8;
    if(v8 > 64) {
        v8 = (unsigned int)caml_invalid_argument("Sys.signal: unavailable signal");
    }
    int v10 = *(int*)&param1;
    int v11 = caml_set_signal_action((int)v8, (unsigned int)(v10 - 1) <= 2 ? *(unsigned int*)(v10 * 4 + (int)&gvar_8070F30): 2);
    if(v11 == 1) {
        result = 3;
    }
    else if(v11 == 2) {
        int v12 = caml_alloc_small(1, 0);
        result = v12;
        *(int*)v12 = *(int*)(v9 * 4 + caml_signal_handlers);
    }
    else if(!v11) {
        result = 1;
    }
    else {
        caml_sys_error(1);
    }
    if(!(param1 & 0x1)) {
        if(!caml_signal_handlers) {
            int v13 = caml_alloc(65, 0);
            caml_signal_handlers = v13;
            caml_register_global_root((unsigned int*)&caml_signal_handlers);
        }
        caml_modify((unsigned int*)(v9 * 4 + caml_signal_handlers), **(unsigned int**)&param1);
    }
    caml_process_pending_signals();
    caml_local_roots = v2;
    return result;
}

int caml_int32_add(int param0, int param1) {
    return caml_copy_int32(*(int*)(param0 + 4) + *(int*)(param1 + 4));
}

int caml_int32_and(int param0, int param1) {
    return caml_copy_int32(*(int*)(param0 + 4) & *(int*)(param1 + 4));
}

int caml_int32_bits_of_float(double* param0) {
    return caml_copy_int32(*param0);
}

int caml_int32_compare(int param0, int param1) {
    unsigned int v0 = *(unsigned int*)(param0 + 4);
    unsigned int v1 = *(unsigned int*)(param1 + 4);
    return (((int)v1 >= (int)v0 ? 0: 1) - ((int)v1 <= (int)v0 ? 0: 1)) * 2 + 1;
}

int caml_int32_div(int param0, int param1) {
    int result = param0;
    int v0 = *(int*)(result + 4);
    unsigned int v1 = *(unsigned int*)(param1 + 4);
    if(!v1) {
        result = caml_raise_zero_divide();
    }
    if(v0 != 0x80000000 || v1 != -1) {
        result = caml_copy_int32((unsigned int)((unsigned long long)v0 | ((unsigned long long)(v0 >> 31) << 32)) / (int)v1);
    }
    return result;
}

long long* caml_int32_float_of_bits(int param0) {
    int v0;
    return caml_copy_double(*(float*)(param0 + 4), v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_int32_format(int param0, int param1) {
    char v0;
    int v1;
    char v2;
    int v3 = v1;
    int v4 = parse_format(&v0, &v2);
    →sprintf();
    int result = caml_copy_string(v4);
    if(v4 != &v0) {
        caml_stat_free(v4);
    }
    return result;
}

int caml_int32_mod(int param0, int param1) {
    int v0 = *(int*)(param0 + 4);
    unsigned int v1 = *(unsigned int*)(param1 + 4);
    if(!v1) {
        caml_raise_zero_divide();
    }
    return v0 == 0x80000000 && v1 == -1 ? caml_copy_int32(0): caml_copy_int32((unsigned int)((unsigned long long)v0 | ((unsigned long long)(v0 >> 31) << 32)) % (int)v1);
}

int caml_int32_mul(int param0, int param1) {
    return caml_copy_int32(*(int*)(param0 + 4) * *(int*)(param1 + 4));
}

int caml_int32_neg(int param0) {
    return caml_copy_int32(0 - *(unsigned int*)(param0 + 4));
}

int caml_int32_of_float(double* param0) {
    short v0;
    short v0 = fnstcw();
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fldcw(v0);
    return caml_copy_int32((int)*param0);
}

int caml_int32_of_int(int param0) {
    return caml_copy_int32(param0 >> 1);
}

int caml_int32_of_string(int param0) {
    int v0;
    int v1 = parse_intnat(v0, 32);
    return caml_copy_int32(v1);
}

int caml_int32_or(int param0, int param1) {
    return caml_copy_int32(*(int*)(param0 + 4) | *(int*)(param1 + 4));
}

int caml_int32_shift_left(int param0, int param1) {
    return caml_copy_int32(*(int*)(param0 + 4) << ((param1 >> 1) & 0x1f));
}

int caml_int32_shift_right(int param0, int param1) {
    return caml_copy_int32(*(int*)(param0 + 4) >> ((param1 >> 1) & 0x1f));
}

int caml_int32_shift_right_unsigned(int param0, int param1) {
    return caml_copy_int32(*(int*)(param0 + 4) >>> ((param1 >> 1) & 0x1f));
}

int caml_int32_sub(int param0, int param1) {
    return caml_copy_int32((int)(*(unsigned int*)(param0 + 4) - *(int*)(param1 + 4)));
}

long long* caml_int32_to_float(int param0) {
    int v0;
    return caml_copy_double((double)*(int*)(param0 + 4), v0);
}

int caml_int32_to_int(int param0) {
    return *(int*)(param0 + 4) * 2 + 1;
}

int caml_int32_xor(int param0, int param1) {
    return caml_copy_int32(*(int*)(param0 + 4) ^ *(int*)(param1 + 4));
}

int caml_int64_add(int param0, int param1) {
    int v0;
    int v1 = v0;
    int v2 = *(int*)(param1 + 4);
    int v3 = *(int*)(param0 + 4);
    return caml_copy_int64(v3 + v2, (unsigned int)__carry__(v3, v2) + *(int*)(param0 + 8) + *(int*)(param1 + 8));
}

int caml_int64_and(int param0, int param1) {
    return caml_copy_int64(*(int*)(param0 + 4) & *(int*)(param1 + 4), *(int*)(param0 + 8) & *(int*)(param1 + 8));
}

int caml_int64_bits_of_float(int* param0) {
    return caml_copy_int64(*param0, *(param0 + 1));
}

int caml_int64_compare(int param0, int param1) {
    int v0;
    int v1 = v0;
    unsigned int v2 = *(unsigned int*)(param0 + 4);
    unsigned int v3 = *(unsigned int*)(param0 + 8);
    unsigned int v4 = *(unsigned int*)(param1 + 4);
    unsigned int v5 = *(unsigned int*)(param1 + 8);
    unsigned int v6 = 1;
    char v7 = (int)v5 > (int)v3;
    char v8 = (int)(((v3 - v5) ^ v3) & (v5 ^ v3)) < 0;
    if((v5 == v3 || v7 != v8) && (v7 != v8 || v2 <= v4)) {
        v6 = 0;
    }
    unsigned int v9 = 1;
    char v10 = (int)v5 > (int)v3;
    char v11 = (int)(((v3 - v5) ^ v3) & (v5 ^ v3)) < 0;
    if(v10 == v11 && ((v5 != v3 && v10 == v11) || v2 >= v4)) {
        v9 = 0;
    }
    return (v6 - v9) * 2 + 1;
}

int caml_int64_div(int param0, int param1) {
    int v0;
    int v1 = v0;
    int result = param0;
    unsigned int v2 = *(unsigned int*)(result + 4);
    unsigned int v3 = *(unsigned int*)(result + 8);
    unsigned int v4 = *(unsigned int*)(param1 + 4);
    unsigned int v5 = *(unsigned int*)(param1 + 8);
    if(!(v4 | v5)) {
        result = caml_raise_zero_divide();
    }
    if(((v3 + 0x80000000) | v2) || (v4 & v5) != -1) {
        unsigned int v6 = __divdi3(v2, v3, v4, v5);
        result = caml_copy_int64((int)v6, (int)v5);
    }
    return result;
}

long long* caml_int64_float_of_bits(int param0) {
    int v0;
    return caml_copy_double(*(double*)(param0 + 4), v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_int64_format(int param0, int param1) {
    char v0;
    int v1;
    char v2;
    int v3 = v1;
    int v4 = parse_format(&v0, &v2);
    →sprintf();
    int result = caml_copy_string(v4);
    if(v4 != &v0) {
        caml_stat_free(v4);
    }
    return result;
}

int caml_int64_mod(int param0, int param1) {
    int result;
    int v0;
    int v1;
    int v2 = v0;
    unsigned int v3 = *(unsigned int*)(param0 + 4);
    unsigned int v4 = *(unsigned int*)(param0 + 8);
    int v5 = *(int*)(param1 + 4);
    int v6 = *(int*)(param1 + 8);
    if(!(v6 | v5)) {
        v6 = caml_raise_zero_divide();
    }
    if(!((v4 + 0x80000000) | v3) && (unsigned int)(v6 & v5) == -1) {
        result = caml_copy_int64(0, 0);
    }
    else {
        unsigned int v7 = __moddi3(v3, v4, v5, (unsigned int)v6);
        result = caml_copy_int64((int)v7, v1);
    }
    return result;
}

int caml_int64_mul(int param0, int param1) {
    int v0;
    int v1 = v0;
    int v2 = *(int*)(param0 + 4);
    return caml_copy_int64(*(int*)(param1 + 4) * v2, *(int*)(param0 + 4) * *(int*)(param1 + 8) + *(int*)(param0 + 8) * *(int*)(param1 + 4) + (unsigned int)(((unsigned long long)*(int*)(param1 + 4) * (unsigned long long)v2) >>> 32L));
}

int caml_int64_neg(int param0) {
    unsigned int v0 = *(unsigned int*)(param0 + 4);
    return caml_copy_int64(0 - v0, 0 - (unsigned int)((unsigned int)(v0 > 0) + *(int*)(param0 + 8)));
}

int caml_int64_of_float(double* param0) {
    short v0;
    int v1;
    int v2;
    short v0 = fnstcw();
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    *(long long*)&v1 = (long long)*param0;
    fldcw(v0);
    return caml_copy_int64(v1, v2);
}

int caml_int64_of_int(int param0) {
    return caml_copy_int64(param0 >> 1, (param0 >> 1) >> 31);
}

int caml_int64_of_int32(int param0) {
    int v0 = *(int*)(param0 + 4);
    return caml_copy_int64(v0, v0 >> 31);
}

int caml_int64_of_nativeint(int param0) {
    int v0 = *(int*)(param0 + 4);
    return caml_copy_int64(v0, v0 >> 31);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_int64_of_string(int param0) {
    unsigned int v0;
    int v1;
    unsigned int v2;
    unsigned int v3;
    int v4 = v1;
    unsigned char* ptr0 = parse_sign_and_base(&v0, &v2);
    unsigned int v5 = v2;
    unsigned int v6 = v2;
    unsigned int v7 = v2 >> 31;
    int v8 = __udivdi3(0xffffffff, 0xffffffff, v2, v2 >> 31);
    unsigned int v9 = v3;
    int v10 = parse_digit();
    int v11 = v10;
    if(v10 < 0 || v10 >= (int)v2) {
        v10 = caml_failwith("int_of_string");
    }
    int v12 = v10 >> 31;
    unsigned char* ptr1 = ptr0 + 1;
    while(1) {
        if(*ptr1 != 95) {
            int v13 = parse_digit();
            int v14 = v13;
            if(v13 >= 0 && v13 < (int)v2) {
                if(v3 <= (unsigned int)v12 && (v3 != v12 || (unsigned int)v11 > (unsigned int)v8)) {
                    caml_failwith("int_of_string");
                }
                int v15 = (v2 >> 31) * v11 + v12 * v2;
                int v16 = v11 * v2;
                int v17 = (unsigned int)(((unsigned long long)v11 * (unsigned long long)v2) >>> 32L) + v15;
                int v18 = v14;
                unsigned int v19 = (unsigned int)(v14 >> 31);
                v11 = v16 + v14;
                v12 = (unsigned int)(v14 >> 31) + (unsigned int)__carry__(v16, v14) + v17;
                if((unsigned int)(v14 >> 31) >= (unsigned int)v12 && ((unsigned int)v12 < v19 || (unsigned int)v11 < (unsigned int)v14)) {
                    caml_failwith("int_of_string");
                }
                goto loc_8066816;
            }
            else {
                v6 = (unsigned int)v11;
                unsigned int v20 = caml_string_length(param0);
                if(v20 + param0 != ptr1) {
                    caml_failwith("int_of_string");
                }
                if(v2 == 10) {
                    unsigned int v21 = 0xffffffff;
                    unsigned int v22 = 0x7fffffff;
                    if(v0 >= 0x80000000) {
                        v21 = 0;
                        v22 = 0x80000000;
                    }
                    char v23 = v22 < (unsigned int)v12;
                    if((v23 || v22 == v12) && (v23 || v21 < v6)) {
                        caml_failwith("int_of_string");
                    }
                }
                if(v0 >= 0x80000000) {
                    v11 = 0 - v6;
                    v12 = 0 - (unsigned int)((unsigned int)(v6 > 0) + v12);
                }
                return caml_copy_int64(v11, v12);
            }
        }
        else {
        loc_8066816:
            ++ptr1;
        }
    }
}

int caml_int64_or(int param0, int param1) {
    return caml_copy_int64(*(int*)(param0 + 4) | *(int*)(param1 + 4), *(int*)(param0 + 8) | *(int*)(param1 + 8));
}

int caml_int64_shift_left(int param0, int param1) {
    int v0 = *(int*)(param0 + 4);
    int v1 = (int)((((unsigned long long)v0 | ((unsigned long long)*(int*)(param0 + 8) << 32)) << ((param1 >> 1) & 0x1f)) >>> 32L);
    int v2 = v0 << ((param1 >> 1) & 0x1f);
    if(((unsigned char)(param1 >>> 1) & 0x20)) {
        v1 = v2;
        v2 = 0;
    }
    return caml_copy_int64(v2, v1);
}

int caml_int64_shift_right(int param0, int param1) {
    int v0 = *(int*)(param0 + 8);
    int v1 = (int)(((unsigned long long)*(int*)(param0 + 4) | ((unsigned long long)v0 << 32)) >>> ((param1 >> 1) & 0x1f));
    int v2 = v0 >> ((param1 >> 1) & 0x1f);
    if(((unsigned char)(param1 >>> 1) & 0x20)) {
        v1 = v2;
        v2 >>= 31;
    }
    return caml_copy_int64(v1, v2);
}

int caml_int64_shift_right_unsigned(int param0, int param1) {
    int v0 = *(int*)(param0 + 8);
    int v1 = (int)(((unsigned long long)*(int*)(param0 + 4) | ((unsigned long long)v0 << 32)) >>> ((param1 >> 1) & 0x1f));
    int v2 = v0 >>> ((param1 >> 1) & 0x1f);
    if(((unsigned char)(param1 >>> 1) & 0x20)) {
        v1 = v2;
        v2 = 0;
    }
    return caml_copy_int64(v1, v2);
}

int caml_int64_sub(int param0, int param1) {
    int v0;
    int v1 = v0;
    unsigned int v2 = *(unsigned int*)(param0 + 4);
    return caml_copy_int64((int)(v2 - *(int*)(param1 + 4)), (int)(*(unsigned int*)(param0 + 8) - ((unsigned int)(*(unsigned int*)(param1 + 4) > v2) + *(int*)(param1 + 8))));
}

long long* caml_int64_to_float(int param0) {
    int v0;
    return caml_copy_double((double)*(long long*)(param0 + 4), v0);
}

int caml_int64_to_int(int param0) {
    return *(int*)(param0 + 4) * 2 + 1;
}

int caml_int64_to_int32(int param0) {
    return caml_copy_int32(*(int*)(param0 + 4));
}

int caml_int64_to_nativeint(int param0) {
    return caml_copy_nativeint(*(int*)(param0 + 4));
}

int caml_int64_xor(int param0, int param1) {
    return caml_copy_int64(*(int*)(param0 + 4) ^ *(int*)(param1 + 4), *(int*)(param0 + 8) ^ *(int*)(param1 + 8));
}

int caml_int_compare(unsigned int param0, unsigned int param1) {
    return (((int)param0 <= (int)param1 ? 0: 1) - ((int)param0 >= (int)param1 ? 0: 1)) * 2 + 1;
}

int caml_int_of_float(double* param0) {
    short v0;
    short v0 = fnstcw();
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fldcw(v0);
    return (int)*param0 * 2 + 1;
}

int caml_int_of_string(int param0) {
    int v0;
    int v1 = parse_intnat(v0, 31);
    return v1 * 2 + 1;
}

int caml_is_printable(int param0) {
    int* ptr0;
    if(!locale_is_set.2848) {
        →setlocale(0, &gvar_8071A88);
        locale_is_set.2848 = 1;
    }
    →__ctype_b_loc();
    return (unsigned int)((unsigned int)*(short*)((param0 >> 1) * 2 + *ptr0) & 0x4000) < 1 ? 1: 3;
}

long long* caml_ldexp_float(double* param0, int param1) {
    int v0;
    int v1;
    int v2 = param1 >> 1;
    __SyntheticTypeUnknownF v3 = *param0;
    *(long long*)&v0 = v3;
    →ldexp(v0, v1, param1 >> 1);
    *(long long*)&v0 = v3;
    return caml_copy_double(*(double*)&v0, param1 >> 1);
}

int caml_le_float(double* param0, double* param1) {
    char v0;
    fucomip(*param1, *param0);
    return v0 ? 1: 3;
}

int caml_leave_blocking_section() {
    caml_leave_blocking_section_hook{caml_leave_blocking_section_default}();
    return caml_process_pending_signals();
}

void caml_leave_blocking_section_default() {
    caml_async_signal_mode = 0;
}

int caml_lessequal(int param0, float* param1) {
    int v0;
    float* ptr0 = compare_val(NULL, param1);
    if(compare_stack != &compare_stack_init) {
        float* ptr1 = (float*)compare_free_stack();
    }
    return ((ptr0 == 0x80000000 ? 0: 1) & ((unsigned int)((int)ptr0 > 0 ? 0: 1) | ((unsigned int)((v0 >>> 8) & 0xffffff) << 8))) * 2 + 1;
}

int caml_lessthan(int param0, float* param1) {
    float* ptr0 = compare_val(NULL, param1);
    if(compare_stack != &compare_stack_init) {
        compare_free_stack();
    }
    return (unsigned int)(int*)((char*)ptr0 + 0x7fffffff) >= 0x7fffffff ? 1: 3;
}

long long* caml_log10_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →log10(*param0);
    return caml_copy_double(v3, v1);
}

int caml_log1p(double param0, int param1) {
    int v0;
    int v1;
    int result;
    *(long long*)&v0 = param0;
    →log1p(v0, v1);
    return result;
}

long long* caml_log1p_float(double* param0) {
    int v0;
    __SyntheticTypeUnknownF v1 = *param0;
    caml_log1p(v1, v0);
    return caml_copy_double(v1, v0);
}

long long* caml_log_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →log(*param0);
    return caml_copy_double(v3, v1);
}

int caml_lt_float(double* param0, double* param1) {
    char v0;
    char v1;
    fucomip(*param1, *param0);
    return v1 || v0 ? 1: 3;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int caml_main(int* param0) {
    unsigned int result;
    unsigned int v0;
    int* ptr0;
    int v1;
    char* ptr1;
    int v2;
    char v3;
    int v4;
    int v5 = v4;
    caml_init_ieee_floats();
    caml_init_custom_operations();
    caml_top_of_stack = &v3;
    int v6 = "OCAMLRUNPARAM";
    →getenv();
    char* ptr2 = ptr1;
    if(!ptr1) {
        v6 = "CAMLRUNPARAM";
        →getenv();
        ptr2 = ptr1;
        if(ptr1) {
            goto loc_8061683;
        }
    }
    else {
    loc_8061683:
        v1 = &gvar_8070E08;
        ptr0 = &v2;
        for(int i = (unsigned int)*ptr2; *ptr2; i = (unsigned int)*ptr2) {
            ++ptr2;
            if((unsigned char)((unsigned char)i - 79) <= 39) {
                jump *(int*)((unsigned int)((unsigned char)i - 79) * 4 + (int)&gvar_8070E08);
            }
        }
    }
    caml_init_gc((int)minor_heap_init, (int)heap_size_init, (int)heap_chunk_init, (int)percent_free_init, (int)max_percent_free_init);
    unsigned int v7 = 0;
    do {
        *(unsigned int*)(v7 * 4 + (int)&caml_atom_table) = v7;
        ++v7;
    }
    while(v7 != 0x100);
    int v8 = caml_page_table_add(4, &caml_atom_table, &caml_frame_descriptors_mask);
    if(!v8) {
        v0 = caml_data_segments;
        ptr2 = NULL;
        v1 = &gvar_80728E4;
        ptr0 = (int*)&caml_data_segments;
        if(v0) {
            goto loc_8061736;
        }
    }
    else {
        v0 = (unsigned int)/*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
    loc_8061736:
        do {
            int v9 = caml_page_table_add(4, (int)v0, *(int*)((int)(int*)((int)ptr2 * 8) + v1));
            if(v9) {
                /*NO_RETURN*/ caml_fatal_error("Fatal error: not enough memory for the initial page table");
            }
            ++ptr2;
            v0 = *(unsigned int*)((int)(int*)((int)ptr2 * 8) + (int)ptr0);
        }
        while(v0);
    }
    caml_code_area_start = caml_code_segments;
    unsigned int v10 = gvar_8072960;
    caml_code_area_end = gvar_8072960;
    unsigned int v11 = gvar_8072964;
    if(v11) {
        unsigned int v12 = caml_code_area_start;
        int v13 = 1;
        do {
            v12 = v11 < v12 ? v11: v12;
            unsigned int v14 = *(unsigned int*)(v13 * 8 + (int)&gvar_8072960);
            v10 = v14 > v10 ? v14: v10;
            ++v13;
            v11 = *(unsigned int*)(v13 * 8 + (int)&caml_code_segments);
        }
        while(v11);
        caml_code_area_start = v12;
        caml_code_area_end = v10;
    }
    caml_init_signals();
    caml_debugger_init();
    int v15 = *param0;
    int v16 = v15 ? v15: &gvar_8071A88;
    int v17 = caml_executable_name(&proc_self_exe.2949, 0x100);
    int v18 = &proc_self_exe.2949;
    if(v17) {
        v18 = caml_search_exe_in_path(v16);
    }
    caml_sys_init(v18, (int)param0);
    →__sigsetjmp();
    if(ptr1) {
        result = caml_termination_hook;
        if(result) {
            result = (unsigned int)result(0);
        }
    }
    else {
        result = (unsigned int)caml_start_program();
        if((result & 0x3) == 2) {
            result = (unsigned int)/*NO_RETURN*/ caml_fatal_uncaught_exception(result & 0xfffffffc);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_make_array(int param0) {
    int v0;
    int v1 = v0;
    unsigned int v2 = caml_local_roots;
    unsigned int v3 = caml_local_roots;
    int v4 = 1;
    int v5 = 1;
    int* ptr0 = &param0;
    int v6 = 0;
    int v7 = 0;
    int* ptr1 = &v3;
    caml_local_roots = &ptr1;
    int v8 = 1;
    int v9 = 2;
    int* ptr2 = &v6;
    int* ptr3 = &v7;
    int result = param0;
    unsigned int v10 = (unsigned int)(*(int*)(result - 4) >>> 10);
    if(!v10) {
        caml_local_roots = v2;
    }
    else {
        int v11 = *(int*)result;
        if(!((unsigned char)v11 & 0x1)) {
            v6 = v11;
            if(!(*(char*)(((v11 >>> 12) & 0x7ff) + *(int*)((v11 >>> 23) * 4 + (int)&caml_page_table)) & 0x7) || *(char*)(v11 - 4) != 253) {
                caml_local_roots = v2;
                return result;
            }
            v7 = caml_alloc_small((int)(v10 * 2), 254);
            unsigned int v12 = 0;
            do {
                *(long long*)(v12 * 8 + v7) = **(unsigned int*)(v12 * 4 + param0);
                ++v12;
            }
            while(v12 < v10);
            caml_local_roots = v2;
            result = v7;
        }
        else {
            caml_local_roots = v2;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_make_vect(int param0, int param1) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    int result = 0;
    int* ptr0 = &v0;
    caml_local_roots = &ptr0;
    int v4 = 1;
    int v5 = 1;
    int* ptr1 = &result;
    int v6 = param0 >> 1;
    if(!v6) {
        result = &gvar_80821A4;
    }
    else {
        int v7 = 1;
        int v8 = 2;
        int* ptr2 = &param0;
        int* ptr3 = &param1;
        int v9 = param1;
        int v10 = v9 & 0x1;
        if(!v10) {
            int v11 = v9;
            if(!(*(char*)(((v9 >>> 12) & 0x7ff) + *(int*)((v9 >>> 23) * 4 + (int)&caml_page_table)) & 0x7) || *(char*)(v9 - 4) != 253) {
                goto loc_8067D2F;
            }
            else {
                *(long long*)&v11 = *(double*)v9;
                int v12 = v6 * 2;
                if((unsigned int)v12 > 0x3fffff) {
                    v12 = caml_invalid_argument("Array.make");
                }
                result = caml_alloc((unsigned int)v12, 254);
                unsigned int v13 = 0;
                do {
                    *(long long*)(v13 * 8 + result) = *(double*)&v11;
                    ++v13;
                }
                while(v13 < (unsigned int)v6);
            }
        }
        else {
        loc_8067D2F:
            if((unsigned int)v6 > 0x3fffff) {
                v9 = caml_invalid_argument("Array.make");
            }
            if((unsigned int)v6 <= 0xff) {
                result = /*BAD_CALL!*/ caml_alloc_small(v6, 0);
                unsigned int v14 = 0;
                do {
                    *(int*)(v14 + result) = param1;
                    v14 += 4;
                }
                while((unsigned int)(v6 * 4) != v14);
            }
            else {
                if(!v10 && caml_young_end > (unsigned int)v9 && caml_young_start < (unsigned int)v9) {
                    caml_minor_collection();
                    result = (int)/*BAD_CALL!*/ caml_alloc_shr((unsigned int)v6, 0);
                    unsigned int v15 = 0;
                    do {
                        *(int*)(v15 + result) = param1;
                        v15 += 4;
                    }
                    while((unsigned int)(v6 * 4) != v15);
                }
                else {
                    result = (int)caml_alloc_shr((unsigned int)v6, 0);
                    unsigned int v16 = 0;
                    do {
                        caml_initialize((unsigned int*)(v16 * 4 + result), (int*)param1);
                        ++v16;
                    }
                    while(v16 < (unsigned int)v6);
                }
                result = caml_check_urgent_gc(result);
            }
        }
    }
    caml_local_roots = v3;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_marshal_data_size(int param0, int param1) {
    char* ptr0 = (char*)((param1 >> 1) + param0);
    intern_input_malloced = 0;
    int v0 = (int)(ptr0 + 4);
    intern_src = (int)(ptr0 + 4);
    if((unsigned int)((unsigned int)*(char*)(v0 - 2) * 0x100 + (unsigned int)*(char*)(v0 - 3) * 0x10000 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(char*)(v0 - 1))) != -2070567234) {
        v0 = caml_failwith("Marshal.data_size: bad object");
    }
    intern_src = (unsigned int)(v0 + 4);
    return ((unsigned int)*(char*)(v0 + 1) * 0x10000 + (unsigned int)*(char*)(v0 + 2) * 0x100 + ((unsigned int)*(char*)v0 * 0x1000000 + (unsigned int)*(char*)(v0 + 3))) * 2 + 1;
}

int* caml_md5_chan(int param0, int param1) {
    int v0;
    char v1;
    char v2;
    int v3 = v0;
    unsigned int v4 = caml_local_roots;
    unsigned int v5 = caml_local_roots;
    unsigned int v6 = v4;
    caml_local_roots = &v6;
    int v7 = 1;
    int v8 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = *(int**)(param0 + 4);
    unsigned int v9 = caml_channel_mutex_lock;
    if(v9) {
        v9((int)ptr2);
    }
    caml_MD5Init(&v1);
    int v10 = param1 >> 1;
    if(v10 > 0) {
        do {
            unsigned int* ptr3 = caml_getblock(ptr2, &v2, (unsigned int)v10 <= 0x1000 ? v10: 0x1000);
            unsigned int* ptr4 = ptr3;
            if(!ptr3) {
                ptr3 = (unsigned int*)caml_raise_end_of_file();
            }
            caml_MD5Update(&v1, &v2, (int)ptr3);
            v10 -= (int)ptr4;
        }
        while(v10 > 0);
    }
    else if(v10 < 0) {
        for(unsigned int* i = caml_getblock(ptr2, &v2, 0x1000); i; i = caml_getblock(ptr2, &v2, 0x1000)) {
            caml_MD5Update(&v1, &v2, (int)i);
        }
    }
    int* result = (int*)caml_alloc_string(16);
    caml_MD5Final(result, &v1);
    unsigned int v11 = caml_channel_mutex_unlock;
    if(v11) {
        v11((int)ptr2);
    }
    caml_local_roots = v5;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_md5_string(int param0, int param1, int param2) {
    char v0;
    int v1;
    int v2 = v1;
    caml_MD5Init(&v0);
    caml_MD5Update(&v0, (param1 >> 1) + param0, param2 >> 1);
    int result = caml_alloc_string(16);
    caml_MD5Final((int*)result, &v0);
    return result;
}

int caml_ml_channel_size(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2 = v0;
    int v3 = caml_channel_size(*(int**)(param0 + 4));
    if(v1 >= 0 && (v1 > 0 || (unsigned int)v3 > 0x3fffffff)) {
        →__errno_location();
        *ptr0 = 75;
        caml_sys_error(1);
    }
    return v3 * 2 + 1;
}

int caml_ml_channel_size_64(int param0) {
    int v0;
    int v1 = caml_channel_size(*(int**)(param0 + 4));
    return caml_copy_int64(v1, v0);
}

int caml_ml_close_channel(int param0) {
    int v0;
    unsigned int v1;
    int v2 = v0;
    int* ptr0 = *(unsigned int*)(param0 + 4);
    int v3 = *ptr0;
    if(v3 != -1) {
        *ptr0 = -1;
        int v4 = *(ptr0 + 3);
        *(ptr0 + 5) = *(ptr0 + 3);
        *(ptr0 + 4) = v4;
        caml_enter_blocking_section();
        →close(v3);
        caml_leave_blocking_section();
        if(v1 == -1) {
            caml_sys_error(1);
        }
    }
    else {
        int v5 = *(ptr0 + 3);
        *(ptr0 + 5) = *(ptr0 + 3);
        *(ptr0 + 4) = v5;
    }
    return 1;
}

int caml_ml_flush(int param0) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v0;
    int v4 = 1;
    int v5 = 1;
    int* ptr0 = &param0;
    int* ptr1 = *(int**)(param0 + 4);
    if(ptr1[0] != -1) {
        unsigned int v6 = caml_channel_mutex_lock;
        if(v6) {
            v6((int)ptr1);
        }
        caml_flush(ptr1);
        unsigned int v7 = caml_channel_mutex_unlock;
        if(v7) {
            v7((int)ptr1);
        }
    }
    caml_local_roots = v3;
    return 1;
}

int caml_ml_flush_partial(int param0) {
    int result;
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v0;
    int v4 = 1;
    int v5 = 1;
    int* ptr0 = &param0;
    int* ptr1 = *(int**)(param0 + 4);
    if(ptr1[0] == -1) {
        caml_local_roots = v3;
        result = 3;
    }
    else {
        unsigned int v6 = caml_channel_mutex_lock;
        if(v6) {
            v6((int)ptr1);
        }
        int v7 = caml_flush_partial(ptr1);
        unsigned int v8 = caml_channel_mutex_unlock;
        if(v8) {
            v8((int)ptr1);
        }
        caml_local_roots = v3;
        result = (unsigned int)v7 < 1 ? 1: 3;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_ml_input(int param0, int param1, int param2, int param3) {
    int v0;
    int v1;
    int v2;
    int v3;
    unsigned int v4;
    int v5 = v3;
    unsigned int v6 = caml_local_roots;
    caml_local_roots = &v4;
    int v7 = 1;
    int v8 = 4;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int* ptr3 = &param3;
    int* ptr4 = *(unsigned int*)(param0 + 4);
    unsigned int v9 = caml_channel_mutex_lock;
    if(v9) {
        v9((int)ptr4);
    }
    int v10 = param2 >> 1;
    unsigned int* ptr5 = (unsigned int*)(param3 >> 1);
    int v11 = *(ptr4 + 4);
    unsigned int* ptr6 = (unsigned int*)(*(ptr4 + 5) - v11);
    if((int)ptr6 >= (int)ptr5) {
        v2 = (int)ptr5;
        v1 = v11;
        v0 = v10 + param1;
        →memmove();
        unsigned int* ptr7 = ptr5;
        *(unsigned int*)(ptr4 + 4) = (int*)(*(ptr4 + 4) + (int)ptr7);
        ptr6 = ptr7;
    }
    else if((int)ptr6 > 0) {
        v1 = v11;
        v0 = v10 + param1;
        →memmove();
        *(unsigned int*)(ptr4 + 4) = (int*)(*(ptr4 + 4) + (int)ptr6);
    }
    else {
        int v12 = (int)(ptr4 + 13);
        int v13 = (int)(*(unsigned int*)(ptr4 + 3) - (int)(ptr4 + 13));
        v2 = (int)(*(unsigned int*)(ptr4 + 3) - (int)(ptr4 + 13));
        v1 = (int)(ptr4 + 13);
        unsigned int* ptr8 = caml_do_read(*ptr4, (int)(ptr4 + 13), v13);
        int v14 = *(ptr4 + 1);
        *(unsigned int*)(ptr4 + 1) = (int*)(*(ptr4 + 1) + (int)ptr8);
        *(unsigned int*)(ptr4 + 2) = (int*)((int)(int*)((int)(int*)((int)ptr8 >> 31) + (unsigned int)(unsigned int*)__carry__((int)ptr8, v14)) + *(ptr4 + 2));
        *(unsigned int*)(ptr4 + 5) = (int*)((int)ptr8 + (int)ptr4) + 13;
        ptr6 = (int)ptr8 <= (int)ptr5 ? ptr8: ptr5;
        v1 = v12;
        →memmove();
        *(unsigned int*)(ptr4 + 4) = (int*)((int)ptr4 + (int)ptr6) + 13;
    }
    unsigned int v15 = caml_channel_mutex_unlock;
    if(v15) {
        v15((int)ptr4);
    }
    caml_local_roots = v6;
    return (int*)((char*)((int)ptr6 * 2) + 1);
}

int caml_ml_input_char(int param0) {
    int v0;
    unsigned int v1;
    int v2;
    int v3 = v2;
    unsigned int v4 = caml_local_roots;
    caml_local_roots = &v1;
    int v5 = 1;
    int v6 = 1;
    int* ptr0 = &param0;
    int* ptr1 = *(int**)(param0 + 4);
    unsigned int v7 = caml_channel_mutex_lock;
    if(v7) {
        v7((int)ptr1);
    }
    int v8 = ptr1[4];
    if((unsigned int)ptr1[5] <= (unsigned int)v8) {
        v0 = caml_refill(ptr1);
    }
    else {
        v0 = (int)*(char*)v8;
        ptr1[4] = v8 + 1;
    }
    unsigned int v9 = caml_channel_mutex_unlock;
    if(v9) {
        v9((int)ptr1);
    }
    caml_local_roots = v4;
    return (unsigned int)(unsigned char)v0 * 2 + 1;
}

int caml_ml_input_int(int param0) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v0;
    int v4 = 1;
    int v5 = 1;
    int* ptr0 = &param0;
    int v6 = *(int*)(param0 + 4);
    unsigned int v7 = caml_channel_mutex_lock;
    if(v7) {
        v7(v6);
    }
    int v8 = caml_getword(v6);
    unsigned int v9 = caml_channel_mutex_unlock;
    if(v9) {
        v9(v6);
    }
    caml_local_roots = v3;
    return v8 * 2 + 1;
}

int* caml_ml_input_scan_line(int param0) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v0;
    int v4 = 1;
    int v5 = 1;
    int* ptr0 = &param0;
    int* ptr1 = *(int**)(param0 + 4);
    unsigned int v6 = caml_channel_mutex_lock;
    if(v6) {
        v6((int)ptr1);
    }
    int* ptr2 = caml_input_scan_line(ptr1);
    unsigned int v7 = caml_channel_mutex_unlock;
    if(v7) {
        v7((int)ptr1);
    }
    caml_local_roots = v3;
    return (int*)((char*)((int)ptr2 * 2) + 1);
}

int caml_ml_open_descriptor_in(int param0) {
    int* ptr0 = caml_open_descriptor_in(param0 >> 1);
    return caml_alloc_channel((int)ptr0);
}

int caml_ml_open_descriptor_out(int param0) {
    int* ptr0 = caml_open_descriptor_out(param0 >> 1);
    return caml_alloc_channel((int)ptr0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_ml_out_channels_list() {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v0;
    int result = 1;
    int v4 = caml_all_opened_channels;
    if(v4) {
        int v5 = 0;
        int v6 = 0;
        int v7 = 1;
        int v8 = 3;
        int* ptr0 = &result;
        int* ptr1 = &v5;
        int* ptr2 = &v6;
        do {
            if(!*(int*)(v4 + 20)) {
                v6 = caml_alloc_channel(v4);
                v5 = result;
                int v9 = caml_alloc_small(2, 0);
                result = v9;
                *(int*)v9 = v6;
                *(int*)(result + 4) = v5;
            }
            v4 = *(int*)(v4 + 28);
        }
        while(v4);
    }
    caml_local_roots = v3;
    return result;
}

int caml_ml_output(int param0, int param1, int param2, int param3) {
    int v0;
    int v1 = v0;
    unsigned int v2 = caml_local_roots;
    unsigned int v3 = caml_local_roots;
    unsigned int v4 = v2;
    caml_local_roots = &v4;
    int v5 = 1;
    int v6 = 4;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int* ptr3 = &param3;
    int* ptr4 = *(int**)(param0 + 4);
    int* ptr5 = (int*)(param3 >> 1);
    unsigned int v7 = caml_channel_mutex_lock;
    if(v7) {
        v7((int)ptr4);
    }
    if((int)ptr5 > 0) {
        int* ptr6 = (int*)(param2 >> 1);
        do {
            int* ptr7 = caml_putblock(ptr4, (int*)((int)ptr6 + param1), ptr5);
            ptr6 = (int*)((int)ptr7 + (int)ptr6);
            ptr5 = (int*)((int)ptr5 - (int)ptr7);
        }
        while((int)ptr5 > 0);
    }
    unsigned int v8 = caml_channel_mutex_unlock;
    if(v8) {
        v8((int)ptr4);
    }
    caml_local_roots = v3;
    return 1;
}

int caml_ml_output_char(int param0, int param1) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v0;
    int v4 = 1;
    int v5 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = *(int**)(param0 + 4);
    unsigned int v6 = caml_channel_mutex_lock;
    if(v6) {
        v6((int)ptr2);
    }
    if((unsigned int)ptr2[3] <= (unsigned int)ptr2[4]) {
        caml_flush_partial(ptr2);
    }
    int v7 = ptr2[4];
    *(char*)v7 = (unsigned char)(param1 >>> 1);
    ptr2[4] = v7 + 1;
    unsigned int v8 = caml_channel_mutex_unlock;
    if(v8) {
        v8((int)ptr2);
    }
    caml_local_roots = v3;
    return 1;
}

int caml_ml_output_int(int param0, int param1) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v0;
    int v4 = 1;
    int v5 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = *(int**)(param0 + 4);
    unsigned int v6 = caml_channel_mutex_lock;
    if(v6) {
        v6((int)ptr2);
    }
    caml_putword(ptr2, param1 >> 1);
    unsigned int v7 = caml_channel_mutex_unlock;
    if(v7) {
        v7((int)ptr2);
    }
    caml_local_roots = v3;
    return 1;
}

int* caml_ml_output_partial(int param0, int param1, int param2, int param3) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v0;
    int v4 = 1;
    int v5 = 4;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int* ptr3 = &param3;
    int* ptr4 = *(int**)(param0 + 4);
    unsigned int v6 = caml_channel_mutex_lock;
    if(v6) {
        v6((int)ptr4);
    }
    int* ptr5 = caml_putblock(ptr4, (int*)((param2 >> 1) + param1), (int*)(param3 >> 1));
    unsigned int v7 = caml_channel_mutex_unlock;
    if(v7) {
        v7((int)ptr4);
    }
    caml_local_roots = v3;
    return (int*)((char*)((int)ptr5 * 2) + 1);
}

int caml_ml_pos_in(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2 = v0;
    unsigned int v3 = caml_pos_in(*(int*)(param0 + 4));
    if(v1 >= 0 && (v1 > 0 || v3 > 0x3fffffff)) {
        →__errno_location();
        *ptr0 = 75;
        caml_sys_error(1);
    }
    return v3 * 2 + 1;
}

int caml_ml_pos_in_64(int param0) {
    int v0;
    unsigned int v1 = caml_pos_in(*(int*)(param0 + 4));
    return caml_copy_int64((int)v1, v0);
}

int caml_ml_pos_out(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2 = v0;
    int v3 = caml_pos_out(*(int*)(param0 + 4));
    if(v1 >= 0 && (v1 > 0 || (unsigned int)v3 > 0x3fffffff)) {
        →__errno_location();
        *ptr0 = 75;
        caml_sys_error(1);
    }
    return v3 * 2 + 1;
}

int caml_ml_pos_out_64(int param0) {
    int v0;
    int v1 = caml_pos_out(*(int*)(param0 + 4));
    return caml_copy_int64(v1, v0);
}

int caml_ml_seek_in(int param0, int param1) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v0;
    int v4 = 1;
    int v5 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = *(int**)(param0 + 4);
    unsigned int v6 = caml_channel_mutex_lock;
    if(v6) {
        v6((int)ptr2);
    }
    caml_seek_in(ptr2, param1 >> 1, (param1 >> 1) >> 31);
    unsigned int v7 = caml_channel_mutex_unlock;
    if(v7) {
        v7((int)ptr2);
    }
    caml_local_roots = v3;
    return 1;
}

int caml_ml_seek_in_64(int param0, int param1) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v0;
    int v4 = 1;
    int v5 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = *(int**)(param0 + 4);
    unsigned int v6 = caml_channel_mutex_lock;
    if(v6) {
        v6((int)ptr2);
    }
    caml_seek_in(ptr2, *(int*)(param1 + 4), *(int*)(param1 + 8));
    unsigned int v7 = caml_channel_mutex_unlock;
    if(v7) {
        v7((int)ptr2);
    }
    caml_local_roots = v3;
    return 1;
}

int caml_ml_seek_out(int param0, int param1) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v0;
    int v4 = 1;
    int v5 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = *(int**)(param0 + 4);
    unsigned int v6 = caml_channel_mutex_lock;
    if(v6) {
        v6((int)ptr2);
    }
    caml_seek_out(ptr2, param1 >> 1, (param1 >> 1) >> 31);
    unsigned int v7 = caml_channel_mutex_unlock;
    if(v7) {
        v7((int)ptr2);
    }
    caml_local_roots = v3;
    return 1;
}

int caml_ml_seek_out_64(int param0, int param1) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v0;
    int v4 = 1;
    int v5 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = *(int**)(param0 + 4);
    unsigned int v6 = caml_channel_mutex_lock;
    if(v6) {
        v6((int)ptr2);
    }
    caml_seek_out(ptr2, *(int*)(param1 + 4), *(int*)(param1 + 8));
    unsigned int v7 = caml_channel_mutex_unlock;
    if(v7) {
        v7((int)ptr2);
    }
    caml_local_roots = v3;
    return 1;
}

int caml_ml_set_binary_mode() {
    return 1;
}

int caml_ml_string_length(int param0) {
    unsigned int v0 = (unsigned int)((*(int*)(param0 - 4) >>> 10) * 4 - 1);
    return (v0 - (unsigned int)*(char*)(v0 + param0)) * 2 + 1;
}

int caml_modf_float(double* param0) {
    int v0;
    int v1;
    double v2;
    int v3;
    int v4 = v1;
    unsigned int v5 = caml_local_roots;
    unsigned int v6 = caml_local_roots;
    int v7 = 1;
    int v8 = 1;
    int* ptr0 = &param0;
    int result = 0;
    long long* ptr1 = NULL;
    long long* ptr2 = NULL;
    int* ptr3 = &v6;
    caml_local_roots = &ptr3;
    int v9 = 1;
    int v10 = 3;
    int* ptr4 = &result;
    int* ptr5 = &ptr1;
    int* ptr6 = &ptr2;
    int v11 = &v2;
    __SyntheticTypeUnknownF v12 = *param0;
    *(long long*)&v3 = v12;
    →modf(v3, v0, &v2);
    *(long long*)&v3 = v12;
    ptr1 = caml_copy_double(*(double*)&v3, &v2);
    *(long long*)&v3 = v2;
    ptr2 = caml_copy_double(*(double*)&v3, &v2);
    int v13 = caml_alloc_tuple(2);
    result = v13;
    *(long long**)v13 = ptr1;
    *(long long**)(result + 4) = ptr2;
    caml_local_roots = v5;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_modify_generational_global_root(unsigned int param0, unsigned int param1) {
    int v0;
    int v1;
    int v2 = v0;
    int result = *(int*)param0;
    if(((param1 & 0x1) || caml_young_end <= param1 || caml_young_start >= param1)) {
        if(!((unsigned char)result & 0x1)) {
            if((param1 & 0x1)) {
                if(caml_young_end > (unsigned int)result && caml_young_start < (unsigned int)result) {
                    result = (int)caml_delete_global_root(v1, param0);
                }
                else {
                    int v3 = result >>> 23;
                    result = (result >>> 12) & 0x7ff;
                    if((*(char*)(*(int*)(v3 * 4 + (int)&caml_page_table) + result) & 0x1)) {
                        result = (int)caml_delete_global_root(v1, param0);
                    }
                }
            }
        }
        else if(!(param1 & 0x1)) {
        loc_80625CB:
            if(caml_young_end > param1 && caml_young_start < param1) {
                result = caml_insert_global_root(v1, (unsigned int*)param0);
            }
            else {
                result = (param1 >>> 12) & 0x7ff;
                if((*(char*)(*(int*)((param1 >>> 23) * 4 + (int)&caml_page_table) + result) & 0x1)) {
                    result = caml_insert_global_root(v1, (unsigned int*)param0);
                }
            }
        }
    }
    else if((unsigned char)result & 0x1) {
        goto loc_80625CB;
    }
    else {
        int v4 = result >>> 23;
        result = (result >>> 12) & 0x7ff;
        if((*(char*)(*(int*)(v4 * 4 + (int)&caml_page_table) + result) & 0x1)) {
            caml_delete_global_root(v1, param0);
            result = caml_insert_global_root(v1, (unsigned int*)param0);
        }
    }
    *(unsigned int*)param0 = param1;
    return result;
}

long long* caml_mul_float(double* param0, double* param1) {
    int v0;
    return caml_copy_double(*param0 * *param1, v0);
}

int caml_nativeint_add(int param0, int param1) {
    return caml_copy_nativeint(*(int*)(param0 + 4) + *(int*)(param1 + 4));
}

int caml_nativeint_and(int param0, int param1) {
    return caml_copy_nativeint(*(int*)(param0 + 4) & *(int*)(param1 + 4));
}

int caml_nativeint_compare(int param0, int param1) {
    unsigned int v0 = *(unsigned int*)(param0 + 4);
    unsigned int v1 = *(unsigned int*)(param1 + 4);
    return (((int)v1 >= (int)v0 ? 0: 1) - ((int)v1 <= (int)v0 ? 0: 1)) * 2 + 1;
}

int caml_nativeint_div(int param0, int param1) {
    int result = param0;
    int v0 = *(int*)(result + 4);
    unsigned int v1 = *(unsigned int*)(param1 + 4);
    if(!v1) {
        result = caml_raise_zero_divide();
    }
    if(v0 != 0x80000000 || v1 != -1) {
        result = caml_copy_nativeint((unsigned int)((unsigned long long)v0 | ((unsigned long long)(v0 >> 31) << 32)) / (int)v1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_nativeint_format(int param0, int param1) {
    char v0;
    int v1;
    char v2;
    int v3 = v1;
    int v4 = parse_format(&v0, &v2);
    →sprintf();
    int result = caml_copy_string(v4);
    if(v4 != &v0) {
        caml_stat_free(v4);
    }
    return result;
}

int caml_nativeint_mod(int param0, int param1) {
    int v0 = *(int*)(param0 + 4);
    unsigned int v1 = *(unsigned int*)(param1 + 4);
    if(!v1) {
        caml_raise_zero_divide();
    }
    return v0 == 0x80000000 && v1 == -1 ? caml_copy_nativeint(0): caml_copy_nativeint((unsigned int)((unsigned long long)v0 | ((unsigned long long)(v0 >> 31) << 32)) % (int)v1);
}

int caml_nativeint_mul(int param0, int param1) {
    return caml_copy_nativeint(*(int*)(param0 + 4) * *(int*)(param1 + 4));
}

int caml_nativeint_neg(int param0) {
    return caml_copy_nativeint(0 - *(unsigned int*)(param0 + 4));
}

int caml_nativeint_of_float(double* param0) {
    short v0;
    short v0 = fnstcw();
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fldcw(v0);
    return caml_copy_nativeint((int)*param0);
}

int caml_nativeint_of_int(int param0) {
    return caml_copy_nativeint(param0 >> 1);
}

int caml_nativeint_of_int32(int param0) {
    return caml_copy_nativeint(*(int*)(param0 + 4));
}

int caml_nativeint_of_string(int param0) {
    int v0;
    int v1 = parse_intnat(v0, 32);
    return caml_copy_nativeint(v1);
}

int caml_nativeint_or(int param0, int param1) {
    return caml_copy_nativeint(*(int*)(param0 + 4) | *(int*)(param1 + 4));
}

int caml_nativeint_shift_left(int param0, int param1) {
    return caml_copy_nativeint(*(int*)(param0 + 4) << ((param1 >> 1) & 0x1f));
}

int caml_nativeint_shift_right(int param0, int param1) {
    return caml_copy_nativeint(*(int*)(param0 + 4) >> ((param1 >> 1) & 0x1f));
}

void caml_nativeint_shift_right_unsigned() {
    // Decompilation error
}

int caml_nativeint_sub(int param0, int param1) {
    return caml_copy_nativeint((int)(*(unsigned int*)(param0 + 4) - *(int*)(param1 + 4)));
}

long long* caml_nativeint_to_float(int param0) {
    int v0;
    return caml_copy_double((double)*(int*)(param0 + 4), v0);
}

int caml_nativeint_to_int(int param0) {
    return *(int*)(param0 + 4) * 2 + 1;
}

int caml_nativeint_to_int32(int param0) {
    return caml_copy_int32(*(int*)(param0 + 4));
}

int caml_nativeint_xor(int param0, int param1) {
    return caml_copy_nativeint(*(int*)(param0 + 4) ^ *(int*)(param1 + 4));
}

long long* caml_neg_float(double* param0) {
    int v0;
    __SyntheticTypeUnknownF v1;
    v2[v3] = fchs(*param0);
    return caml_copy_double(v1, v0);
}

int caml_neq_float(double* param0, double* param1) {
    char v0;
    char v1;
    int v2;
    fucomip(*param1, *param0);
    return (unsigned int)(unsigned char)((unsigned int)(v0 ? 1: 0) | ((unsigned int)((v2 >>> 8) & 0xffffff) << 8) | (unsigned int)(v1 ? 0: 1) | ((unsigned int)(int*)((int)(int*)((int)param1 >>> 8) & 0xffffff) << 8)) * 2 + 1;
}

int caml_notequal(int param0, float* param1) {
    float* ptr0 = compare_val(NULL, param1);
    if(compare_stack != &compare_stack_init) {
        compare_free_stack();
    }
    return (unsigned int)ptr0 < 1 ? 1: 3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_open_descriptor_in(int param0) {
    int v0;
    int v1;
    int v2 = param0;
    int* result = (int*)caml_stat_alloc(4148);
    *result = v2;
    caml_enter_blocking_section();
    →lseek64(v2, 0, 0, 1);
    *(result + 1) = v0;
    *(result + 2) = v1;
    caml_leave_blocking_section();
    *(unsigned int*)(result + 5) = result + 13;
    *(unsigned int*)(result + 4) = result + 13;
    *(unsigned int*)(result + 3) = result + 1037;
    *(result + 6) = 0;
    *(result + 9) = 0;
    *(result + 10) = 0;
    *(result + 11) = 0;
    *(result + 12) = 0;
    *(unsigned int*)(result + 7) = caml_all_opened_channels;
    *(result + 8) = 0;
    unsigned int v3 = caml_all_opened_channels;
    if(v3) {
        *(unsigned int*)(v3 + 32) = result;
    }
    caml_all_opened_channels = result;
    return result;
}

int* caml_open_descriptor_out(int param0) {
    int* result = caml_open_descriptor_in(param0);
    result[5] = 0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_output_val(int* param0, int param1, int* param2) {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = caml_channel_binary_mode();
    if(!v3) {
        caml_failwith("output_value: not a binary channel");
    }
    init_extern_output();
    int* result = extern_value(v1, param2);
    int* ptr0 = extern_output_first;
    if(ptr0) {
        while(1) {
            caml_really_putblock(param0, ptr0 + 2, (int*)(ptr0[1] - (int)(ptr0 + 2)));
            int* ptr1 = (int*)ptr0[0];
            int* ptr2 = ptr0;
            →free();
            if(!ptr1) {
                return result;
            }
            ptr0 = ptr1;
        }
    }
    return result;
}

int caml_output_value(int param0, int param1, int* param2) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v0;
    int v4 = 1;
    int v5 = 3;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int* ptr3 = *(int**)(param0 + 4);
    unsigned int v6 = caml_channel_mutex_lock;
    if(v6) {
        v6((int)ptr3);
    }
    caml_output_val(ptr3, param1, param2);
    unsigned int v7 = caml_channel_mutex_unlock;
    if(v7) {
        v7((int)ptr3);
    }
    caml_local_roots = v3;
    return 1;
}

int* caml_output_value_to_block(int param0, int* param1, unsigned int param2, int param3) {
    int v0;
    extern_userprovided_output = param2;
    extern_ptr = param2;
    extern_limit = param2 + param3;
    return extern_value(v0, param1);
}

int* caml_output_value_to_buffer(int param0, int param1, int param2, int param3, int* param4) {
    int v0;
    unsigned int v1 = (unsigned int)((param1 >> 1) + param0);
    extern_userprovided_output = (unsigned int)((param1 >> 1) + param0);
    extern_ptr = v1;
    extern_limit = (unsigned int)((param2 >> 1) + v1);
    int* ptr0 = extern_value(v0, param4);
    return (int*)((char*)((int)ptr0 * 2) + 1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_output_value_to_malloc(int param0, int* param1, unsigned int* param2, unsigned int* param3) {
    int v0;
    int* ptr0;
    int v1;
    int v2 = v0;
    init_extern_output();
    int* ptr1 = extern_value(v1, param1);
    int* ptr2 = ptr1;
    →malloc();
    int* ptr3 = ptr0;
    if(!ptr0) {
        extern_out_of_memory();
    }
    *param2 = ptr3;
    *param3 = ptr1;
    unsigned int* ptr4 = extern_output_first;
    if(ptr4) {
        do {
            int* ptr5 = (int*)(*(ptr4 + 1) - (int)(int*)(ptr4 + 2));
            int* ptr6 = (int*)(ptr4 + 2);
            →memmove();
            ptr3 = (int*)((int)ptr3 + (int)ptr5);
            ptr4 = *ptr4;
        }
        while(ptr4);
    }
    return free_extern_output();
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_output_value_to_string(int param0, int* param1) {
    int v0;
    int v1;
    int v2 = v0;
    init_extern_output();
    int* ptr0 = extern_value(v1, param1);
    unsigned int* ptr1 = extern_output_first;
    int result = caml_alloc_string((int)ptr0);
    if(ptr1) {
        int* ptr2 = NULL;
        while(1) {
            int* ptr3 = (int*)(*(ptr1 + 1) - (int)(int*)(ptr1 + 2));
            int* ptr4 = (int*)(ptr1 + 2);
            unsigned int* ptr5 = (unsigned int*)((int)ptr2 + result);
            →memmove();
            ptr2 = (int*)((int)ptr3 + (int)ptr2);
            unsigned int* ptr6 = *ptr1;
            ptr5 = ptr1;
            →free();
            if(!ptr6) {
                return result;
            }
            ptr1 = ptr6;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void caml_parse_engine() {
}

unsigned int caml_pos_in(int param0) {
    int v0;
    int v1 = v0;
    return *(unsigned int*)(param0 + 4) - (*(unsigned int*)(param0 + 20) - *(int*)(param0 + 16));
}

int caml_pos_out(int param0) {
    int v0;
    int v1 = v0;
    return *(unsigned int*)(param0 + 16) - (unsigned int)(param0 + 52) + *(int*)(param0 + 4);
}

long long* caml_power_float(double* param0, double* param1) {
    int v0;
    __SyntheticTypeUnknown v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    *(long long*)&v0 = *param1;
    v1[v2] = →pow(*param0, *(double*)&v0);
    return caml_copy_double(v3, v0);
}

int caml_process_pending_signals() {
    int result = caml_signals_are_pending;
    if(result) {
        caml_signals_are_pending = 0;
        int v0 = 0;
        do {
            result = *(int*)(v0 * 4 + (int)&caml_pending_signals);
            if(result) {
                *(int*)(v0 * 4 + (int)&caml_pending_signals) = 0;
                result = caml_execute_signal(v0, 0);
            }
            ++v0;
        }
        while(v0 != 65);
    }
    return result;
}

int caml_program() {
    int v0;
    int v1;
    camlPervasives__entry();
    ++caml_globals_inited;
    camlArray__entry();
    ++caml_globals_inited;
    camlList__entry();
    ++caml_globals_inited;
    camlChar__entry();
    ++caml_globals_inited;
    camlString__entry();
    ++caml_globals_inited;
    camlSys__entry();
    ++caml_globals_inited;
    camlHashtbl__entry();
    ++caml_globals_inited;
    camlBuffer__entry();
    ++caml_globals_inited;
    camlPrintf__entry(v0, v1);
    ++caml_globals_inited;
    camlCallback__entry();
    ++caml_globals_inited;
    camlUnix__entry(v0, v1);
    ++caml_globals_inited;
    camlUnixLabels__entry();
    ++caml_globals_inited;
    camlSource__entry();
    ++caml_globals_inited;
    camlStd_exit__entry();
    ++caml_globals_inited;
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_putblock(int* param0, int* param1, int* param2) {
    int* result;
    int* ptr0;
    int* ptr1;
    int v0;
    int v1 = v0;
    int* ptr2 = param0;
    int* ptr3 = param2;
    int* ptr4 = *(unsigned int*)(ptr2 + 4);
    int* ptr5 = (int*)(*(ptr2 + 3) - (int)ptr4);
    if((int)ptr5 > (int)ptr3) {
        ptr1 = param1;
        ptr0 = ptr4;
        →memmove();
        *(unsigned int*)(ptr2 + 4) = (int*)(*(ptr2 + 4) + (int)ptr3);
        result = ptr3;
    }
    else {
        ptr1 = param1;
        ptr0 = ptr4;
        →memmove();
        int* ptr6 = ptr2 + 13;
        int* ptr7 = (int*)(*(unsigned int*)(ptr2 + 3) - (int)ptr6);
        int* ptr8 = (int*)(*(unsigned int*)(ptr2 + 3) - (int)ptr6);
        unsigned int v2 = (unsigned int)do_write((int)ptr7, (int)ptr6);
        if((int)v2 < (int)ptr8) {
            int* ptr9 = (int*)((int)ptr8 - v2);
            ptr1 = (int*)(v2 + (int)ptr6);
            ptr0 = ptr6;
            →memmove();
        }
        int v3 = *(ptr2 + 1);
        *(ptr2 + 1) = *(ptr2 + 1) + v2;
        *(ptr2 + 2) = (v2 >> 31) + (unsigned int)__carry__(v2, v3) + *(ptr2 + 2);
        *(ptr2 + 4) = *(ptr2 + 3) - v2;
        result = ptr5;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_putword(int* param0, int param1) {
    int v0;
    int v1 = v0;
    int* ptr0 = param0;
    int v2 = param1;
    int* ptr1 = ptr0;
    int v3 = caml_channel_binary_mode();
    if(!v3) {
        caml_failwith("output_binary_int: not a binary channel");
    }
    if((unsigned int)ptr0[3] <= (unsigned int)ptr0[4]) {
        caml_flush_partial(ptr0);
    }
    int v4 = ptr0[4];
    *(char*)v4 = (unsigned char)(v2 >>> 24);
    ptr0[4] = v4 + 1;
    if((unsigned int)(v4 + 1) >= (unsigned int)ptr0[3]) {
        caml_flush_partial(ptr0);
    }
    int v5 = ptr0[4];
    *(char*)v5 = (unsigned char)(v2 >>> 16);
    ptr0[4] = v5 + 1;
    if((unsigned int)(v5 + 1) >= (unsigned int)ptr0[3]) {
        caml_flush_partial(ptr0);
    }
    int v6 = ptr0[4];
    *(char*)v6 = (unsigned char)(v2 >>> 8);
    ptr0[4] = v6 + 1;
    if((unsigned int)(v6 + 1) >= (unsigned int)ptr0[3]) {
        caml_flush_partial(ptr0);
    }
    int v7 = ptr0[4];
    *(char*)v7 = (unsigned char)v2;
    ptr0[4] = v7 + 1;
    return v7 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_raise_end_of_file() {
    /*BAD_CALL!*/ caml_raise_constant(&caml_exn_End_of_file);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_raise_not_found() {
    /*BAD_CALL!*/ caml_raise_constant(&caml_exn_Not_found);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_raise_stack_overflow() {
    /*BAD_CALL!*/ caml_raise(&caml_bucket_Stack_overflow);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_raise_sys_blocked_io() {
    /*BAD_CALL!*/ caml_raise_constant(&caml_exn_Sys_blocked_io);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_raise_with_args(int param0, unsigned int param1, int param2) {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = &v1;
    int v4 = v3;
    int* ptr1 = &v4;
    char v5 = &v0 == 92;
    char v6 = (int)&v2 < 0;
    char v7 = __parity__((unsigned char)&v0 - 92);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0x50) ^ (int)&v2) >>> 4) & 0x1);
    char v9 = (unsigned int)&v4 < 80;
    char v10 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&v2) & (int)(int*)((int)&v4 ^ 0x50)) < 0;
    unsigned int v11 = param1;
    int v12 = param2;
    unsigned int v13 = caml_local_roots;
    unsigned int v14 = caml_local_roots;
    int v15 = 1;
    int v16 = 1;
    int* ptr2 = &param0;
    int* ptr3 = &param0;
    int* ptr4 = &v14;
    int* ptr5 = &v14;
    int* ptr6 = &ptr5;
    caml_local_roots = &ptr5;
    int v17 = 1;
    int v18 = v12;
    int v19 = (int)(v11 + 1);
    int v20 = caml_alloc_small(v19, 0);
    int v21 = param0;
    *(int*)v20 = param0;
    char v22 = v11 ? 0: 1;
    char v23 = v11 >= 0x80000000;
    char v24 = __parity__((unsigned char)v11);
    char v25 = 0;
    char v26 = 0;
    if(!v22 && v23 == 0) {
        unsigned int v27 = 0;
        do {
            int v28 = *(int*)(v27 * 4 + v12);
            *(int*)(v27 * 4 + v20 + 4) = *(int*)(v27 * 4 + v12);
            ++v27;
            v22 = v27 == v11;
            v23 = (int)v27 < (int)v11;
            v24 = __parity__((unsigned char)v27 - (unsigned char)v11);
            v26 = v27 < v11;
            v25 = (int)(((v27 - v11) ^ v27) & (v27 ^ v11)) < 0;
            v8 = (((v27 - v11) ^ (v27 ^ v11)) >>> 4) & 0x1;
        }
        while(!v22);
    }
    /*BAD_CALL!*/ caml_raise(v20);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_raise_zero_divide() {
    /*BAD_CALL!*/ caml_raise_constant(&caml_exn_Division_by_zero);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_read_directory(int param0, unsigned int* param1) {
    char v0;
    int v1;
    int v2;
    int v3 = v2;
    →opendir(param0);
    int v4 = v1;
    int result = -1;
    if(v4) {
    loc_806F9F5:
        do {
            →readdir64(v4);
            if(!v1) {
                →closedir(v4);
                return 0;
            }
        }
        while(*(char*)(v1 + 19) == 46 && (*(char*)(v1 + 20) == 0 || (*(char*)(v1 + 20) == 46 && *(char*)(v1 + 21) == 0)));
        unsigned char* ptr0 = (unsigned char*)(v1 + 19);
        int v5 = -1;
        do {
            v0 = *ptr0 == 0;
            ++ptr0;
            --v5;
        }
        while(~v0 && v5 == 0);
        int v6 = caml_stat_alloc(~v5);
        →strcpy(v6, v1 + 19);
        caml_ext_table_add(param1, v6);
        goto loc_806F9F5;
    }
    else {
        return result;
    }
}

int caml_really_getblock(int* param0, int param1, int param2) {
    int v0;
    int v1 = v0;
    int v2 = param1;
    int v3 = param2;
    if(v3 > 0) {
        unsigned int* ptr0 = caml_getblock(param0, v2, v3);
        while(ptr0) {
            v3 -= (int)ptr0;
            if(v3 <= 0) {
                break;
            }
            else {
                v2 += (int)ptr0;
                ptr0 = caml_getblock(param0, v2, v3);
            }
        }
    }
    return v3 ? 0: 1;
}

int* caml_really_putblock(int* param0, int* param1, int* param2) {
    int* result;
    int v0;
    int v1 = v0;
    int* ptr0 = param1;
    for(int* i = param2; (int)i > 0; i = (int*)((int)i - (int)result)) {
        result = caml_putblock(param0, ptr0, i);
        ptr0 = (int*)((int)result + (int)ptr0);
    }
    return result;
}

unsigned int caml_record_signal(int param0) {
    *(int*)(param0 * 4 + (int)&caml_pending_signals) = 1;
    caml_signals_are_pending = 1;
    unsigned int result = caml_young_end;
    caml_young_limit = caml_young_end;
    return result;
}

int caml_refill(int* param0) {
    int v0;
    int v1 = v0;
    int* ptr0 = param0;
    int v2 = (int)(*(unsigned int*)(ptr0 + 3) - (int)(ptr0 + 13));
    int v3 = (int)(*(unsigned int*)(ptr0 + 3) - (int)(ptr0 + 13));
    int v4 = (int)(ptr0 + 13);
    unsigned int* ptr1 = caml_do_read(*ptr0, (int)(ptr0 + 13), v2);
    if(!ptr1) {
        ptr1 = (unsigned int*)caml_raise_end_of_file();
    }
    int v5 = *(ptr0 + 1);
    *(unsigned int*)(ptr0 + 1) = (int*)(*(ptr0 + 1) + (int)ptr1);
    *(unsigned int*)(ptr0 + 2) = (int*)((int)(int*)((int)(int*)((int)ptr1 >> 31) + (unsigned int)(unsigned int*)__carry__((int)ptr1, v5)) + *(ptr0 + 2));
    *(unsigned int*)(ptr0 + 5) = (int*)((int)ptr1 + (int)ptr0) + 13;
    *(unsigned int*)(ptr0 + 4) = (int*)((char*)ptr0 + 53);
    return (unsigned int)*(char*)(ptr0 + 13);
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int caml_register_dyn_global(int param0) {
    int v0;
    unsigned int result = (unsigned int)cons(v0, (int)caml_dyn_globals);
    caml_dyn_globals = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_register_generational_global_root(unsigned int* param0) {
    int v0;
    int result = (int)param0[0];
    if(!((unsigned char)result & 0x1)) {
        if(caml_young_end > (unsigned int)result && caml_young_start < (unsigned int)result) {
            result = caml_insert_global_root(v0, param0);
        }
        else {
            int v1 = result >>> 23;
            result = (result >>> 12) & 0x7ff;
            v0 = *(int*)(v1 * 4 + (int)&caml_page_table);
            if(*(char*)(result + v0) & 0x1) {
                result = caml_insert_global_root(v0, param0);
            }
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_register_named_value(int param0, unsigned int param1) {
    char v0;
    int v1;
    int v2;
    int v3 = v2;
    int v4 = hash_value_name();
    int v5 = v4;
    unsigned int* ptr0 = *(unsigned int*)(v4 * 4 + (int)&named_value_table);
    if(ptr0) {
        do {
            int* ptr1 = (int*)(ptr0 + 2);
            →strcmp();
            if(!v1) {
                *ptr0 = param1;
                return 1;
            }
            ptr0 = *(ptr0 + 1);
            if(!ptr0) {
                goto loc_806E0F9;
            }
        }
        while(1);
    }
    else {
    loc_806E0F9:
        int v6 = param0;
        int v7 = -1;
        do {
            v0 = *(char*)v6 == 0;
            ++v6;
            --v7;
        }
        while(~v0 && v7 == 0);
        unsigned int* ptr2 = (unsigned int*)caml_stat_alloc(10 - v7);
        →strcpy((int)(ptr2 + 2), param0);
        ptr2[0] = param1;
        int v8 = v5;
        ptr2[1] = *(unsigned int*)(v8 * 4 + (int)&named_value_table);
        *(unsigned int**)(v8 * 4 + (int)&named_value_table) = ptr2;
        caml_register_global_root(ptr2);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* caml_remove_generational_global_root(unsigned int param0) {
    int v0;
    unsigned int* result = *(unsigned int**)param0;
    if(!((unsigned char)result & 0x1)) {
        if(caml_young_end > (unsigned int)result && caml_young_start < (unsigned int)result) {
            result = caml_delete_global_root(v0, param0);
        }
        else {
            int* ptr0 = (int*)((int)result >>> 23);
            result = (unsigned int*)((int)(int*)((int)result >>> 12) & 0x7ff);
            v0 = *(int*)((int)(int*)((int)ptr0 * 4) + (int)&caml_page_table);
            if(*(char*)((int)result + v0) & 0x1) {
                result = caml_delete_global_root(v0, param0);
            }
        }
    }
    return result;
}

unsigned int caml_rev_convert_signal_number(unsigned int param0) {
    unsigned int result = param0;
    unsigned int v0 = 1;
    if(result == 6) {
        v0 = 0;
    }
    else {
        while(*(int*)(v0 * 4 + (int)&posix_signals) != result) {
            ++v0;
            if(v0 == 21) {
                return result;
            }
        }
    }
    return ~v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_search_dll_in_path(unsigned int* param0, int param1) {
    char v0;
    char v1;
    int v2;
    int v3 = v2;
    int v4 = param1;
    int v5 = -1;
    do {
        v1 = *(char*)v4 == 0;
        ++v4;
        --v5;
    }
    while(~v1 && v5 == 0);
    int v6 = caml_stat_alloc(2 - v5);
    →strcpy(v6, param1);
    int v7 = v6;
    int v8 = -1;
    do {
        v0 = *(char*)v7 == 0;
        ++v7;
        --v8;
    }
    while(~v0 && v8 == 0);
    *(int*)(~v8 + v6 - 1) = 7303982;
    int result = caml_search_in_path(param0, v6);
    caml_stat_free(v6);
    return result;
}

int* caml_seek_in(int* param0, int param1, int param2) {
    int* result;
    int v0;
    int v1;
    int v2 = v1;
    int* ptr0 = param0;
    int v3 = param2;
    unsigned int v4 = *(unsigned int*)(ptr0 + 2);
    unsigned int v5 = *(unsigned int*)(ptr0 + 1);
    unsigned int v6 = v4;
    unsigned int v7 = *(unsigned int*)(ptr0 + 5);
    unsigned int v8 = *(unsigned int*)(ptr0 + 5);
    int* ptr1 = (int*)(v7 - (int)(ptr0 + 13));
    int* ptr2 = (int*)(v5 - (int)ptr1);
    int* ptr3 = (int*)(v4 - (int)(int*)((int)(int*)((int)ptr1 >> 31) + (unsigned int)((unsigned int)ptr1 > v5)));
    int* ptr4 = ptr2;
    int* ptr5 = ptr3;
    if((int)ptr3 <= v3 && ((int)ptr3 < v3 || (unsigned int)ptr2 <= (unsigned int)param1)) {
        char v9 = (int)v4 < v3;
        char v10 = (((v4 - v3) ^ v4) & (v4 ^ v3)) < 0;
        if(v9 != v10 || ((v4 == v3 || v9 != v10) && v5 < (unsigned int)param1)) {
            goto loc_80684F8;
        }
        else {
            result = (int*)(param1 - v5 + v7);
            *(unsigned int*)(ptr0 + 4) = (int*)(param1 - v5 + v7);
        }
    }
    else {
    loc_80684F8:
        caml_enter_blocking_section();
        int v11 = 0;
        →lseek64(*ptr0, param1, v3, 0);
        if((int*)((v0 ^ param1) | (int)(int*)((int)ptr3 ^ v3))) {
            caml_leave_blocking_section();
            caml_sys_error(1);
        }
        caml_leave_blocking_section();
        *(ptr0 + 1) = param1;
        *(ptr0 + 2) = v3;
        result = ptr0 + 13;
        *(unsigned int*)(ptr0 + 5) = ptr0 + 13;
        *(unsigned int*)(ptr0 + 4) = result;
    }
    return result;
}

int caml_seek_out(int* param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3 = v0;
    int* ptr0 = param0;
    int v4 = param2;
    caml_flush(ptr0);
    caml_enter_blocking_section();
    int v5 = 0;
    →lseek64(ptr0[0], param1, v4, 0);
    if(((v1 ^ param1) | (v2 ^ v4))) {
        caml_leave_blocking_section();
        caml_sys_error(1);
    }
    int result = caml_leave_blocking_section();
    ptr0[1] = param1;
    ptr0[2] = v4;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_serialize_block_1(int param0, int param1) {
    int result;
    if(extern_ptr + param1 > extern_limit) {
        grow_extern_output();
    }
    →memmove();
    extern_ptr += param1;
    return result;
}

int* caml_serialize_block_2(int param0, unsigned int param1) {
    int v0;
    int v1 = v0;
    int v2 = param0;
    int* result = (int*)(param1 * 2);
    if((unsigned int)(int*)(extern_ptr + (int)result) > extern_limit) {
        result = grow_extern_output();
    }
    unsigned int v3 = extern_ptr;
    if((int)param1 > 0) {
        result = NULL;
        unsigned int counter = param1;
        unsigned int v4 = param1;
        do {
            int* ptr0 = (int*)*(char*)((int)result + v2);
            *(char*)((int)result + v3) = *(char*)((char*)((int)result + v2) + 1);
            *(char*)((char*)((int)result + v3) + 1) = (unsigned char)ptr0;
            result = (int*)((char*)result + 2);
            --counter;
        }
        while(counter);
        v3 = (unsigned int)(v4 * 2 + v3);
    }
    extern_ptr = v3;
    return result;
}

int* caml_serialize_block_4(int param0, int* param1) {
    int v0;
    int v1 = v0;
    int v2 = param0;
    int* result = (int*)((int)param1 * 4);
    if((unsigned int)(int*)(extern_ptr + (int)result) > extern_limit) {
        result = grow_extern_output();
    }
    int* ptr0 = extern_ptr;
    if((int)param1 > 0) {
        int v3 = 0;
        int* ptr1 = param1;
        do {
            char v4 = *(char*)(v3 + v2);
            char v5 = *(char*)(v3 + v2 + 1);
            *(char*)(v3 + (int)ptr0) = *(char*)(v3 + v2 + 3);
            *(char*)((char*)(v3 + (int)ptr0) + 1) = *(char*)(v3 + v2 + 2);
            *(char*)((char*)(v3 + (int)ptr0) + 3) = v4;
            *(char*)((char*)(v3 + (int)ptr0) + 2) = v5;
            v3 += 4;
            ptr1 = (int*)((char*)ptr1 - 1);
        }
        while(ptr1);
        result = param1;
        ptr0 = (int*)((int)(int*)((int)result * 4) + (int)ptr0);
    }
    extern_ptr = ptr0;
    return result;
}

int* caml_serialize_block_8(char* param0, int* param1) {
    int v0;
    int v1 = v0;
    int* result = (int*)((int)param1 * 8);
    if((unsigned int)(char*)(extern_ptr + (int)result) > extern_limit) {
        result = grow_extern_output();
    }
    char* ptr0 = extern_ptr;
    if((int)param1 > 0) {
        char* ptr1 = param0;
        char* ptr2 = ptr0;
        int* ptr3 = param1;
        char* ptr4 = ptr0;
        do {
            char v2 = *ptr1;
            char v3 = *(ptr1 + 1);
            *ptr2 = *(ptr1 + 7);
            *(ptr2 + 1) = *(ptr1 + 6);
            *(ptr2 + 7) = v2;
            *(ptr2 + 6) = v3;
            char v4 = *(ptr1 + 2);
            char v5 = *(ptr1 + 3);
            *(ptr2 + 2) = *(ptr1 + 5);
            *(ptr2 + 3) = *(ptr1 + 4);
            *(ptr2 + 5) = v4;
            *(ptr2 + 4) = v5;
            ptr1 += 8;
            ptr2 += 8;
            ptr3 = (int*)((char*)ptr3 - 1);
        }
        while(ptr3);
        result = param1;
        ptr0 = (char*)((int)(int*)((int)result * 8) + (int)ptr4);
    }
    extern_ptr = ptr0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_serialize_block_float_8(int param0, int param1) {
    int result;
    if((unsigned int)(param1 * 8 + extern_ptr) > extern_limit) {
        grow_extern_output();
    }
    →memmove();
    extern_ptr = (unsigned int)(param1 * 8 + extern_ptr);
    return result;
}

int* caml_serialize_float_4() {
    char v0;
    return caml_serialize_block_4(&v0, (int*)0x1);
}

int caml_serialize_float_8(int param0, int param1) {
    int v0 = param0;
    int v1 = param1;
    return caml_serialize_block_float_8(&v0, 1);
}

int* caml_serialize_int_1(int param0) {
    if(extern_ptr + 1 > extern_limit) {
        grow_extern_output();
    }
    char* ptr0 = extern_ptr;
    *ptr0 = (unsigned char)param0;
    extern_ptr = (int*)(ptr0 + 1);
    return (int*)(ptr0 + 1);
}

int* caml_serialize_int_2(int param0) {
    int v0 = param0;
    if(extern_ptr + 2 > extern_limit) {
        grow_extern_output();
    }
    char* ptr0 = extern_ptr;
    *ptr0 = (unsigned char)(v0 >>> 8);
    *(ptr0 + 1) = (unsigned char)v0;
    extern_ptr = (int*)(ptr0 + 2);
    return (int*)(ptr0 + 2);
}

int* caml_serialize_int_4(int param0) {
    int v0 = param0;
    if(extern_ptr + 4 > extern_limit) {
        grow_extern_output();
    }
    char* ptr0 = extern_ptr;
    *ptr0 = (unsigned char)(v0 >>> 24);
    *(ptr0 + 1) = (unsigned char)(v0 >>> 16);
    *(ptr0 + 2) = (unsigned char)(v0 >>> 8);
    *(ptr0 + 3) = (unsigned char)v0;
    extern_ptr = (int*)(ptr0 + 4);
    return (int*)(ptr0 + 4);
}

int* caml_serialize_int_8(int param0, int param1) {
    int v0 = param0;
    int v1 = param1;
    return caml_serialize_block_8(&v0, (int*)0x1);
}

int caml_set_parser_trace(int param0) {
    int result = caml_parser_trace < 1 ? 1: 3;
    caml_parser_trace = (unsigned int)(param0 >> 1);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_set_signal_action(int param0, unsigned int param1) {
    int v0;
    int v1;
    char v2;
    unsigned int v3;
    unsigned int v4;
    int v5;
    int v6 = v5;
    if(!param1) {
        v1 = 0;
        v0 = 0;
    }
    else if(param1 == 1) {
        v1 = 1;
        v0 = 0;
    }
    else {
        v1 = &handle_signal;
        v0 = 0;
    }
    →sigemptyset(&v2);
    →sigaction(param0, &v1, &v3);
    int result = -1;
    if(v4 != -1) {
        result = 2;
        if(v3 != &handle_signal) {
            result = v3 != 1 ? 0: 1;
        }
    }
    return result;
}

long long* caml_sin_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →sin(*param0);
    return caml_copy_double(v3, v1);
}

long long* caml_sinh_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →sinh(*param0);
    return caml_copy_double(v3, v1);
}

long long* caml_sqrt_float(double* param0) {
    __SyntheticTypeUnknownF v0;
    __SyntheticTypeUnknown v1;
    int v2;
    int v3;
    char v4;
    __SyntheticTypeUnknownF v5;
    __SyntheticTypeUnknownF __x;
    v1[v4] = fsqrt(*param0);
    fucomi(v5, v5);
    if((__parity__((unsigned char)&v2 - 28)) || &v2 != 28) {
        v1[v4] = →sqrt(__x);
    }
    else {
        v0 = v5;
    }
    return caml_copy_double(v0, v3);
}

int caml_stack_usage() {
    int result = (caml_top_of_stack - caml_bottom_of_stack) >> 2;
    unsigned int v0 = caml_stack_usage_hook;
    if(v0) {
        int v1 = v0();
        result += v1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_start_program(int param0) {
    int result;
    unsigned int v0 = caml_gc_regs;
    unsigned int v1 = caml_last_return_address;
    unsigned int v2 = caml_bottom_of_stack;
    int v3 = &gvar_807028E;
    unsigned int v4 = caml_exception_pointer;
    caml_exception_pointer = &v4;
    caml_apply2(param0);
    caml_exception_pointer = v4;
    caml_bottom_of_stack = v2;
    caml_last_return_address = v1;
    caml_gc_regs = v0;
    return result;
}

unsigned int caml_startup(int* param0) {
    return caml_main(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_string_compare(int param0, int param1) {
    int result;
    int v0;
    int v1 = v0;
    int v2 = param1;
    if(v2 != param0) {
        unsigned int v3 = caml_string_length(param0);
        unsigned int v4 = caml_string_length(v2);
        unsigned int v5 = v4 <= v3 ? v4: v3;
        int v6 = param0;
        unsigned int v7 = v5;
        char v8 = 1;
        char v9 = v5 < v5;
        while(v7 != 0) {
            v8 = *(char*)v6 == *(char*)v2;
            v9 = *(unsigned char*)v6 < *(unsigned char*)v2;
            ++v6;
            ++v2;
            --v7;
            if(!v8) {
                break;
            }
        }
        int v10 = (int)((v9 || v8 ? 0: 1) - (v9 ? 1: 0));
        if(v10 >= 0) {
            if(v10 <= 0) {
                char v11 = v4 == v3;
                if(v4 > v3) {
                    goto loc_806796D;
                }
                else if(v11 != 0) {
                    return 1;
                }
            }
            result = 3;
        }
        else {
        loc_806796D:
            result = -1;
        }
    }
    else {
        result = 1;
    }
    return result;
}

int caml_string_equal(unsigned int* param0, unsigned int* param1) {
    int result;
    int v0;
    int v1 = v0;
    unsigned int* ptr0 = param0;
    unsigned int* ptr1 = param1;
    if(ptr0 != ptr1) {
        unsigned int v2 = (unsigned int)(*(int*)(ptr0 - 1) >>> 10);
        if((unsigned int)(*(int*)(ptr1 - 1) >>> 10) == v2) {
            if(!v2) {
                return 3;
            }
            else if(*ptr0 == *ptr1) {
                do {
                    --v2;
                    if(!v2) {
                        return 3;
                    }
                    ++ptr0;
                    ++ptr1;
                }
                while(*ptr0 != *ptr1);
            }
        }
        result = 1;
    }
    else {
        result = 3;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_string_get(int param0, int param1) {
    int v0;
    int v1 = v0;
    if((unsigned int)(param1 >> 1) < 0x80000000) {
        unsigned int v2 = caml_string_length(param0);
        if((unsigned int)(param1 >> 1) >= v2) {
            caml_array_bound_error();
            return (unsigned int)*(char*)((unsigned int)(param1 >> 1) + param0) * 2 + 1;
        }
    }
    else {
        caml_array_bound_error();
    }
    return (unsigned int)*(char*)((unsigned int)(param1 >> 1) + param0) * 2 + 1;
}

int caml_string_greaterequal(int param0, int param1) {
    int v0 = caml_string_compare(param0, param1);
    return v0 <= 0 ? 1: 3;
}

int caml_string_greaterthan(int param0, int param1) {
    int v0 = caml_string_compare(param0, param1);
    return v0 <= 1 ? 1: 3;
}

int caml_string_lessequal(int param0, int param1) {
    int v0 = caml_string_compare(param0, param1);
    return v0 >= 2 ? 1: 3;
}

int caml_string_lessthan(int param0, int param1) {
    int v0 = caml_string_compare(param0, param1);
    return v0 > 0 ? 1: 3;
}

int caml_string_notequal(unsigned int* param0, unsigned int* param1) {
    int v0 = caml_string_equal(param0, param1);
    return 4 - v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_string_set(int param0, int param1, int param2) {
    if((unsigned int)(param1 >> 1) < 0x80000000) {
        unsigned int v0 = caml_string_length(param0);
        if((unsigned int)(param1 >> 1) >= v0) {
            caml_array_bound_error();
            *(char*)((unsigned int)(param1 >> 1) + param0) = (unsigned char)(param2 >>> 1);
            return 1;
        }
    }
    else {
        caml_array_bound_error();
    }
    *(char*)((unsigned int)(param1 >> 1) + param0) = (unsigned char)(param2 >>> 1);
    return 1;
}

long long* caml_sub_float(double* param0, double* param1) {
    int v0;
    return caml_copy_double(*param0 - *param1, v0);
}

int caml_sys_chdir(int param0) {
    int v0;
    →chdir(param0);
    if(v0) {
        caml_sys_error(param0);
    }
    return 1;
}

int caml_sys_close(int param0) {
    →close(param0 >> 1);
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_error(int param0) {
    char v0;
    char v1;
    int v2;
    int v3;
    unsigned int v4;
    int v5;
    int* ptr0 = &v2;
    unsigned int v6 = v4;
    unsigned int v7 = &v6;
    char v8 = &v1 == 124;
    char v9 = (int)&v5 < 0;
    char v10 = __parity__((unsigned char)&v1 - 124);
    char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)(&v6 ^ 0x6c) ^ (int)&v5) >>> 4) & 0x1);
    char v12 = &v6 < 108;
    char v13 = (int)(int*)((int)(int*)(&v6 ^ (int)&v5) & (int)(int*)(&v6 ^ 0x6c)) < 0;
    unsigned int v14 = caml_local_roots;
    unsigned int v15 = caml_local_roots;
    int v16 = 1;
    int v17 = 1;
    int* ptr1 = &param0;
    int* ptr2 = &param0;
    int v18 = 0;
    int* ptr3 = &v15;
    int* ptr4 = &v15;
    int* ptr5 = &ptr4;
    caml_local_roots = &ptr4;
    int v19 = 1;
    int v20 = 1;
    int* ptr6 = &v18;
    int* ptr7 = &v18;
    →__errno_location();
    int v21 = *(int*)v3;
    →strerror(v21);
    int v22 = v3;
    int v23 = param0;
    char v24 = v23 == 1;
    char v25 = v23 < 1;
    char v26 = __parity__((unsigned char)v23 - 1);
    char v27 = (unsigned int)v23 < 1;
    char v28 = (((v23 - 1) ^ v23) & (v23 ^ 0x1)) < 0;
    char v29 = (((v23 - 1) ^ (v23 ^ 0x1)) >>> 4) & 0x1;
    if(v24) {
        int v30 = caml_copy_string(v3);
        v18 = v30;
    }
    else {
        int v31 = v3;
        int v32 = 0;
        int v33 = -1;
        do {
            v0 = *(char*)v31 == 0;
            char v34 = *(char*)v31 > 0;
            char v35 = __parity__(0 - *(char*)v31);
            char v36 = *(unsigned char*)v31 > 0;
            char v37 = ((0 - *(char*)v31) & *(char*)v31) < 0;
            char v38 = (((0 - *(char*)v31) ^ *(char*)v31) >>> 4) & 0x1;
            ++v31;
            --v33;
        }
        while(~v0 && v33 == 0);
        int v39 = ~v33;
        int v40 = v39 - 1;
        unsigned int v41 = caml_string_length(v23);
        v4 = v41;
        int v42 = v41 + v40 + 2;
        int v43 = caml_alloc_string(v42);
        v18 = v43;
        int v44 = param0;
        →memmove();
        unsigned int v45 = v4;
        v7 = v4;
        short* ptr8 = (short*)(v45 + v18);
        v24 = ptr8 ? 0: 1;
        v25 = (int)ptr8 < 0;
        v26 = __parity__((unsigned char)ptr8);
        v29 = (int*)((int)(int*)((int)(int*)((v7 ^ v18) ^ (int)ptr8) >>> 4) & 0x1);
        v27 = __carry__(v7, v18);
        v28 = (int)(int*)((int)(int*)((int)ptr8 ^ v7) & ~(v7 ^ v18)) < 0;
        *ptr8 = 8250;
        int v46 = v18;
        int v47 = v46 + v4 + 2;
        →memmove();
    }
    int v48 = v18;
    /*BAD_CALL!*/ caml_raise_sys_error(v48);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_exit(int param0) {
    int v0;
    char v1;
    int v2;
    int v3;
    int* ptr0 = &v0;
    int* ptr1 = &v0;
    char v4 = &v1 == 28;
    char v5 = (int)&v2 < 0;
    char v6 = __parity__((unsigned char)&v1 - 28);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x18) ^ (int)&v2) >>> 4) & 0x1);
    char v8 = (unsigned int)&v0 < 24;
    char v9 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&v2) & (int)(int*)((int)&v0 ^ 0x18)) < 0;
    int v10 = param0;
    int v11 = param0;
    int __status = v10 >> 1;
    char v12 = v11 & 0x1;
    char v13 = 0;
    char v14 = __status ? 0: 1;
    char v15 = __status < 0;
    char v16 = __parity__((unsigned char)__status);
    int* ptr2 = &v3;
    /*NO_RETURN*/ →exit(__status);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_file_exists(int param0) {
    char v0;
    unsigned int v1;
    →__xstat64(3, param0, &v0);
    return v1 >= 1 ? 1: 3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_get_argv() {
    int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    int v4 = 0;
    int result = 0;
    unsigned int v5 = v3;
    caml_local_roots = &v5;
    int v6 = 1;
    int v7 = 3;
    int* ptr0 = &v0;
    int* ptr1 = &v4;
    int* ptr2 = &result;
    v0 = caml_copy_string(caml_exe_name);
    v4 = caml_copy_string_array(caml_main_argv);
    int v8 = caml_alloc_small(2, 0);
    result = v8;
    *(int*)v8 = v0;
    *(int*)(result + 4) = v4;
    caml_local_roots = v3;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_get_config() {
    unsigned int v0;
    unsigned int v1 = caml_local_roots;
    caml_local_roots = &v0;
    int v2 = caml_copy_string("Unix");
    int v3 = caml_alloc_small(2, 0);
    int result = v3;
    *(int*)v3 = v2;
    *(int*)(result + 4) = 65;
    caml_local_roots = v1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_getcwd() {
    char v0;
    int v1;
    →getcwd(&v0, 0x1000);
    if(!v1) {
        caml_sys_error(1);
    }
    return caml_copy_string(&v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_getenv(int param0) {
    int v0;
    int v1;
    →getenv(param0);
    if(!v1) {
        v0 = caml_raise_not_found();
    }
    return caml_copy_string(v0);
}

int caml_sys_io_error(int param0) {
    unsigned int* ptr0;
    →__errno_location();
    if(*ptr0 == 11) {
        caml_raise_sys_blocked_io();
    }
    return caml_sys_error(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_is_directory(int param0) {
    char v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4 = v3;
    →__xstat64(3, param0, &v0);
    if(v2 == -1) {
        caml_sys_error(param0);
    }
    return (unsigned int)(v1 & 0xf000) != 0x4000 ? 1: 3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_open(int param0, int* param1, int param2) {
    unsigned int v0;
    int v1;
    int v2;
    int v3 = v2;
    unsigned int v4 = caml_local_roots;
    caml_local_roots = &v0;
    int v5 = 1;
    int v6 = 3;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int v7 = caml_string_length(param0);
    int v8 = caml_stat_alloc(v7 + 1);
    →strcpy();
    int v9 = caml_convert_flag_list(param1, &sys_open_flags);
    caml_enter_blocking_section();
    →open64(v8, v9);
    if(v1 != -1) {
        →fcntl(v1, 2);
        caml_leave_blocking_section();
        caml_stat_free(v8);
    }
    else {
        caml_leave_blocking_section();
        caml_stat_free(v8);
        caml_sys_error(param0);
    }
    caml_local_roots = v4;
    return v1 * 2 + 1;
}

int caml_sys_random_seed() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v2;
    →gettimeofday(&v0, 0);
    →getppid();
    →getpid();
    return ((v3 * 0x10000) ^ ((v0 ^ v1) ^ v3)) * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_read_directory(int param0) {
    unsigned int v0;
    char v1;
    unsigned int* ptr0;
    int v2;
    int v3 = v2;
    unsigned int v4 = caml_local_roots;
    int v5 = 1;
    int v6 = 1;
    int* ptr1 = &param0;
    int result = 0;
    int* ptr2 = &v0;
    caml_local_roots = &ptr2;
    int v7 = 1;
    int v8 = 1;
    int* ptr3 = &result;
    caml_ext_table_init(&v1, 50);
    int v9 = caml_read_directory(param0, (unsigned int*)&v1);
    if(v9 == -1) {
        caml_ext_table_free((unsigned int*)&v1, 1);
        caml_sys_error(param0);
    }
    caml_ext_table_add((unsigned int*)&v1, 0);
    result = caml_copy_string_array(ptr0);
    caml_ext_table_free((unsigned int*)&v1, 1);
    caml_local_roots = v4;
    return result;
}

int caml_sys_remove(int param0) {
    int v0;
    →unlink(param0);
    if(v0) {
        caml_sys_error(param0);
    }
    return 1;
}

int caml_sys_rename(int param0, int param1) {
    int v0;
    →rename(param0, param1);
    if(v0) {
        caml_sys_error(1);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_sys_system_command(int param0) {
    int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3 = caml_local_roots;
    caml_local_roots = &v1;
    int v4 = caml_string_length(param0);
    int v5 = caml_stat_alloc(v4 + 1);
    →memmove();
    caml_enter_blocking_section();
    →system(v5);
    caml_leave_blocking_section();
    caml_stat_free(v5);
    if(v2 == -1) {
        caml_sys_error(param0);
        v0 = 0xff;
    }
    else {
        v0 = 0xff;
        if(!(v2 & 0x7f)) {
            v0 = (unsigned int)(unsigned char)(v2 >>> 8);
        }
    }
    caml_local_roots = v3;
    return v0 * 2 + 1;
}

long long* caml_sys_time() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    →getrusage();
    *(long long*)&v0 = (double)v1 + 1000000.0 + (double)v2 + (double)v3 / ((double)v4 / 1000000.0);
    return caml_copy_double(*(double*)&v0, v5);
}

long long* caml_tan_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →tan(*param0);
    return caml_copy_double(v3, v1);
}

long long* caml_tanh_float(double* param0) {
    __SyntheticTypeUnknown v0;
    int v1;
    char v2;
    __SyntheticTypeUnknownF v3;
    v0[v2] = →tanh(*param0);
    return caml_copy_double(v3, v1);
}

unsigned int caml_try_leave_blocking_section_default() {
    unsigned int result = caml_async_signal_mode;
    caml_async_signal_mode = 0;
    return result;
}

int caml_tuplify2() {
    int* ptr0;
    int v0;
    int v1 = v0;
    int v2 = *(ptr0 + 1);
    int v3 = *ptr0;
    int v4 = *(int*)(v1 + 8);
    jump v4;
}

int caml_tuplify3() {
    int* ptr0;
    int v0;
    int v1 = v0;
    int v2 = *(ptr0 + 2);
    int v3 = *(ptr0 + 1);
    int v4 = *ptr0;
    int v5 = *(int*)(v1 + 8);
    jump v5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_update_dummy(unsigned int* param0, int param1) {
    int v0;
    int v1 = v0;
    int v2 = param1;
    unsigned int v3 = *(unsigned int*)(v2 - 4);
    unsigned int v4 = (unsigned int)*(char*)(v2 - 4);
    unsigned int* ptr0 = param0;
    *(char*)&ptr0[-1] = (unsigned char)v4;
    if((unsigned char)v4 != 254) {
        v3 >>>= 10;
        unsigned int v5 = v3;
        unsigned int v6 = 0;
        if(v3) {
            do {
                caml_modify(ptr0, *(unsigned int*)(v6 * 4 + v2));
                ++v6;
                ++ptr0;
            }
            while(v6 < v5);
        }
    }
    else {
        v4 = (unsigned int)(*(unsigned int*)(v2 - 4) >>> 11);
        if(v4) {
            unsigned int v7 = 0;
            do {
                *(long long*)&ptr0[v7 * 2] = *(double*)(v7 * 8 + v2);
                ++v7;
            }
            while(v7 < v4);
        }
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_weak_blit(int param0, int param1, unsigned int param2, int param3, int param4) {
    unsigned int v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4 = v3;
    int v5 = param1 >> 1;
    unsigned int v6 = (unsigned int)((param1 >> 1) + 1);
    if(v6) {
        v2 = (unsigned int)(param4 >> 1);
        v1 = param0;
        if((unsigned int)(param4 >> 1) + v6 > (unsigned int)(*(int*)(v1 - 4) >>> 10)) {
            goto loc_806E46F;
        }
    }
    else {
    loc_806E46F:
        caml_invalid_argument("Weak.blit");
    }
    int v7 = param3 >> 1;
    unsigned int v8 = (unsigned int)((param3 >> 1) + 1);
    if(!(unsigned int)((param3 >> 1) + 1) || v8 + v2 > (unsigned int)(*(int*)(param2 - 4) >>> 10)) {
        caml_invalid_argument("Weak.blit");
    }
    if(!caml_gc_phase && caml_gc_subphase == 11 && v2) {
        v0 = 0;
        unsigned int v9 = 0;
        unsigned int v10 = v6;
        do {
            unsigned int* ptr0 = (unsigned int*)((v0 + v10) * 4 + v1);
            unsigned int v11 = *ptr0;
            unsigned int v12 = caml_weak_none;
            if(v12 != v11 && !((unsigned char)v11 & 0x1)) {
                unsigned int v13 = v11;
                if((*(char*)(((v11 >>> 12) & 0x7ff) + *(int*)((v11 >>> 23) * 4 + (int)&caml_page_table)) & 0x1) && !(*(int*)(v13 - 4) & 0x300)) {
                    *ptr0 = v12;
                }
            }
            ++v9;
            v0 = v9;
        }
        while(v9 < v2);
        v6 = v10;
    }
    if(v6 <= v8) {
        v8 = v2 - 1;
        if(v2 - 1 < 0x80000000) {
            unsigned int* ptr1 = (unsigned int*)((v5 + v2) * 4 + v1);
            int* ptr2 = (int*)(v7 + v2);
            unsigned int v14 = v2 - 1;
            do {
                do_set(*ptr1, ptr2);
                --ptr1;
                ptr2 = (int*)((char*)ptr2 - 1);
                --v14;
            }
            while(v14 < 0x80000000);
        }
    }
    else if(v2) {
        v0 = 0;
        unsigned int v15 = 0;
        do {
            do_set(*(unsigned int*)((v0 + v6) * 4 + v1), (int*)(v0 + v8));
            ++v15;
            v0 = v15;
        }
        while(v15 < v2);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_weak_check(int param0, int param1) {
    int v0;
    int v1 = (param1 >> 1) + 1;
    if(v1) {
        v0 = param0;
        if((unsigned int)(*(int*)(v0 - 4) >>> 10) <= (unsigned int)v1) {
            v1 = caml_invalid_argument("Weak.get");
            return *(unsigned int*)(v1 * 4 + v0) == caml_weak_none ? 1: 3;
        }
    }
    else {
        v1 = caml_invalid_argument("Weak.get");
    }
    return *(unsigned int*)(v1 * 4 + v0) == caml_weak_none ? 1: 3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* caml_weak_create(int param0) {
    unsigned int v0 = (unsigned int)(param0 >> 1) + 1;
    if(v0 > 0x3fffff) {
        caml_invalid_argument("Weak.create");
    }
    int* result = caml_alloc_shr(v0, 251);
    if(v0 > 1) {
        unsigned int v1 = 1;
        do {
            result[v1] = caml_weak_none;
            ++v1;
        }
        while(v1 < v0);
    }
    result[0] = caml_weak_list_head;
    caml_weak_list_head = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_weak_get(unsigned int param0, int param1) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    unsigned int v3 = caml_local_roots;
    unsigned int v4 = caml_local_roots;
    int v5 = 1;
    int v6 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int result = 0;
    unsigned int v7 = 0;
    int* ptr2 = &v4;
    caml_local_roots = &ptr2;
    int v8 = 1;
    int v9 = 2;
    int* ptr3 = &result;
    int* ptr4 = &v7;
    int v10 = (param1 >> 1) + 1;
    if(v10) {
        v0 = param0;
        if((unsigned int)(*(int*)(v0 - 4) >>> 10) <= (unsigned int)v10) {
            goto loc_806E8DA;
        }
    }
    else {
    loc_806E8DA:
        v10 = caml_invalid_argument("Weak.get");
    }
    unsigned int v11 = *(unsigned int*)(v10 * 4 + v0);
    if(caml_weak_none == v11) {
        result = 1;
    }
    else {
        if(!caml_gc_phase && !((unsigned char)v11 & 0x1) && (*(char*)(((v11 >>> 12) & 0x7ff) + *(int*)((v11 >>> 23) * 4 + (int)&caml_page_table)) & 0x1)) {
            caml_darken(v11);
        }
        int v12 = caml_alloc_small(1, 0);
        result = v12;
        *(unsigned int*)v12 = v11;
    }
    caml_local_roots = v3;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_weak_get_copy(int param0, int param1) {
    int result1;
    int v0;
    char v1;
    int v2;
    int v3 = v2;
    unsigned int v4 = caml_local_roots;
    unsigned int v5 = caml_local_roots;
    int v6 = 1;
    int v7 = 2;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int result = 0;
    int v8 = 0;
    int* ptr2 = &v5;
    caml_local_roots = &ptr2;
    int v9 = 1;
    int v10 = 2;
    int* ptr3 = &result;
    int* ptr4 = &v8;
    unsigned int v11 = (unsigned int)((param1 >> 1) + 1);
    if(v11) {
        v0 = param0;
        if((unsigned int)(*(int*)(v0 - 4) >>> 10) <= v11) {
            goto loc_806E669;
        }
    }
    else {
    loc_806E669:
        v0 = caml_invalid_argument("Weak.get");
    }
    int v12 = v11 * 4;
    int v13 = *(int*)(v0 + v12);
    if(caml_weak_none == v13) {
        caml_local_roots = v4;
        result1 = 1;
    }
    else if(!((unsigned char)v13 & 0x1)) {
        int v14 = v13;
        if(!(*(char*)(((v13 >>> 12) & 0x7ff) + *(int*)((v13 >>> 23) * 4 + (int)&caml_page_table)) & 0x3)) {
            goto loc_806E82B;
        }
        else {
            char* ptr5 = (char*)(v14 - 4);
            int v15 = (int)*ptr5;
            int v16 = (int)*ptr5;
            v8 = caml_alloc((unsigned int)(*(int*)ptr5 >>> 10), v15);
            int v17 = *(int*)(v12 + param0);
            if(caml_weak_none == v17) {
                caml_local_roots = v4;
                result1 = 1;
            }
            else {
                int v18 = v17;
                unsigned char* ptr6 = (unsigned char*)(v17 - 4);
                if(*ptr6 <= 250) {
                    unsigned char* ptr7 = ptr6;
                    if((*(int*)ptr6 >>> 10)) {
                        unsigned int v19 = 0;
                        unsigned int v20 = v4;
                        do {
                            int v21 = v19 * 4;
                            unsigned int v22 = *(unsigned int*)(v19 * 4 + v18);
                            if(!caml_gc_phase && !((unsigned char)v22 & 0x1) && (*(char*)(((v22 >>> 12) & 0x7ff) + *(int*)((v22 >>> 23) * 4 + (int)&caml_page_table)) & 0x1)) {
                                v16 = 0;
                                caml_darken(v22);
                            }
                            unsigned int* ptr8 = (unsigned int*)(v21 + v8);
                            *(int*)&v1 = *ptr8;
                            *ptr8 = v22;
                            int v23 = v21 + v8;
                            if((*(char*)(((v23 >>> 12) & 0x7ff) + *(int*)((v23 >>> 23) * 4 + (int)&caml_page_table)) & 0x1)) {
                                if(!caml_gc_phase) {
                                    v16 = 0;
                                    caml_darken(*(unsigned int*)&v1);
                                }
                                if(!((unsigned char)v22 & 0x1)) {
                                    unsigned int v24 = caml_young_end;
                                    if(v24 > v22) {
                                        unsigned int v25 = caml_young_start;
                                        if(v25 < v22) {
                                            if(!(v1 & 0x1)) {
                                                unsigned int v26 = *(unsigned int*)&v1;
                                                if(v24 <= v26 || v26 <= v25) {
                                                    goto loc_806E7DA;
                                                }
                                            }
                                            else {
                                            loc_806E7DA:
                                                if(gvar_807EB28 >= gvar_807EB2C) {
                                                    caml_realloc_ref_table((int*)&caml_ref_table);
                                                }
                                                int* ptr9 = gvar_807EB28;
                                                *ptr9 = v21 + v8;
                                                gvar_807EB28 = ptr9 + 1;
                                            }
                                        }
                                    }
                                }
                            }
                            ++v19;
                        }
                        while((unsigned int)(*(int*)ptr7 >>> 10) > v19);
                        v4 = v20;
                    }
                }
                else {
                    →memmove();
                }
                int v27 = caml_alloc_small(1, 0);
                result = v27;
                *(int*)v27 = v8;
                caml_local_roots = v4;
                return result;
            }
        }
    }
    else {
    loc_806E82B:
        v8 = v13;
        int v27 = caml_alloc_small(1, 0);
        result = v27;
        *(int*)v27 = v8;
        caml_local_roots = v4;
        result1 = result;
    }
    return result1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int caml_weak_set(int param0, int param1, unsigned int* param2) {
    int v0;
    int v1;
    int v2 = v1;
    if((int*)((param1 >> 1) + 1)) {
        v0 = param0;
        if((unsigned int)(int*)((param1 >> 1) + 1) >= (unsigned int)(*(int*)(param0 - 4) >>> 10)) {
            goto loc_806E5BA;
        }
    }
    else {
    loc_806E5BA:
        caml_invalid_argument("Weak.set");
    }
    if(param2 != 1 && !((unsigned char)param2 & 0x1)) {
        do_set(*param2, (int*)((param1 >> 1) + 1));
    }
    else {
        *(unsigned int*)((int)(int*)((int)(int*)((param1 >> 1) + 1) * 4) + v0) = caml_weak_none;
    }
    return 1;
}

int compare_channel(int param0, int param1) {
    unsigned int v0 = *(unsigned int*)(param0 + 4);
    unsigned int v1 = *(unsigned int*)(param1 + 4);
    int result = 0;
    if(v0 != v1) {
        result = v0 < v1 ? -1: 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int compare_free_stack() {
    int result = compare_stack;
    if(result != &compare_stack_init) {
        →free(result);
        compare_stack = &compare_stack_init;
        compare_stack_limit = &locale_is_set.2848;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int compare_stack_overflow() {
    caml_gc_message(4, "Stack overflow in structural comparison\n", 0);
    compare_free_stack();
    /*BAD_CALL!*/ caml_raise_out_of_memory();
}

// Stale decompilation - Refresh this view to re-decompile this code
float* compare_val(float* param0, float* param1) {
    float* ptr0;
    int v0;
    int v1;
    int v2;
    unsigned int v3;
    char v4;
    float* ptr1;
    unsigned int v5;
    float* ptr2;
    float* result;
    unsigned int v6;
    unsigned int v7;
    char v8;
    __SyntheticTypeUnknown v9;
    float* ptr3;
    int v10;
    char v11;
    char v12;
    int v13 = v10;
    *(float**)&v8 = ptr3;
    *(float**)&v11 = param1;
    float* ptr4 = param0;
    unsigned int* ptr5 = compare_stack;
loc_80654D4:
    while(1) {
        unsigned int v14 = *(unsigned int*)&v11;
        char v15 = *(int*)&v8 == v14;
        v14 = (unsigned int)(v15 ? 1: 0) | ((unsigned int)((v14 >>> 8) & 0xffffff) << 8);
        if(!v15 || !ptr4) {
            if(!(v8 & 0x1)) {
                if((v11 & 0x1)) {
                    param0 = *(float**)&v8;
                    if(!(*(char*)((int)(int*)((int)(int*)((int)param0 >>> 12) & 0x7ff) + (int)*(unsigned int*)((int)(int*)((int)(int*)((int)param0 >>> 23) * 4) + (int)&caml_page_table)) & 0x7)) {
                        return (float*)0x1;
                    }
                    unsigned char v16 = *(unsigned char*)(param0 - 1);
                    if(*(char*)(param0 - 1) == 250) {
                        int* ptr6 = *(int**)&v8;
                        *(int*)&v8 = *ptr6;
                        continue;
                    }
                    else if(v16 != 0xff) {
                        return (float*)0x1;
                    }
                    else {
                        param1 = *(float**)&v8;
                        int v17 = *param1;
                        int v18 = *(int*)(v17 + 24);
                        char v19 = v18 ? 0: 1;
                        if(v19) {
                            return (float*)0x1;
                        }
                        caml_compare_unordered = 0;
                        int v20 = *(int*)&v11;
                        result = (float*)v18((int)param1, v20);
                        if(caml_compare_unordered && !ptr4) {
                            return (float*)0x80000000;
                        }
                        else if(!result) {
                            goto loc_8065A2C;
                        }
                        else {
                            return result;
                        }
                    }
                }
                else {
                    v7 = *(unsigned int*)&v8;
                    v6 = *(unsigned int*)&v8;
                }
            }
            else if((unsigned char)v14) {
                goto loc_8065A2C;
            }
            else if((v11 & 0x1)) {
                return (float*)((unsigned int)(*(int*)&v8 >> 1) - (int)(float*)(*(int*)&v11 >> 1));
            }
            else {
                param0 = *(float**)&v11;
                if(!(*(char*)((int)(int*)((int)(int*)((int)param0 >>> 12) & 0x7ff) + (int)*(unsigned int*)((int)(int*)((int)(int*)((int)param0 >>> 23) * 4) + (int)&caml_page_table)) & 0x7)) {
                    return (float*)0xFFFFFFFF;
                }
                unsigned char v21 = *(unsigned char*)(param0 - 1);
                if(*(char*)(param0 - 1) == 250) {
                    int* ptr7 = *(int**)&v11;
                    *(int*)&v11 = *ptr7;
                    continue;
                }
                else if(v21 != 0xff) {
                    return (float*)0xFFFFFFFF;
                }
                else {
                    param0 = *(float**)&v11;
                    int v22 = *param0;
                    int v23 = *(int*)(v22 + 24);
                    char v24 = v23 ? 0: 1;
                    if(v24) {
                        return (float*)0xFFFFFFFF;
                    }
                    caml_compare_unordered = 0;
                    int v25 = *(int*)&v8;
                    result = (float*)v23(v25, (int)param0);
                    if(caml_compare_unordered && !ptr4) {
                        return (float*)0x80000000;
                    }
                    else if(!result) {
                        goto loc_8065A2C;
                    }
                    else {
                        return result;
                    }
                }
            }
            if((*(char*)((int)(float*)((v7 >>> 12) & 0x7ff) + (int)*(unsigned int*)((v7 >>> 23) * 4 + (int)&caml_page_table)) & 0x7)) {
                float* ptr8 = *(float**)&v11;
                ptr2 = *(float**)&v11;
                int* ptr9 = (int*)((int)ptr8 >>> 23);
                if(!(*(char*)((int)(float*)((*(int*)&v11 >>> 12) & 0x7ff) + (int)*(unsigned int*)((int)(int*)((int)ptr9 * 4) + (int)&caml_page_table)) & 0x7)) {
                    goto loc_8065673;
                }
                else {
                    char* ptr10 = (char*)(v6 - 4);
                    v5 = (unsigned int)*ptr10;
                    param1 = (float*)*ptr10;
                    float* ptr11 = ptr2 - 1;
                    ptr1 = ptr2 - 1;
                    v4 = *(char*)ptr11;
                    if(param1 == 250) {
                        int* ptr12 = *(int**)&v8;
                        *(int*)&v8 = *ptr12;
                        continue;
                    }
                    else {
                        param0 = (float*)v4;
                        if(param0 == 250) {
                            int* ptr13 = *(int**)&v11;
                            *(int*)&v11 = *ptr13;
                            continue;
                        }
                        else if(param0 != param1) {
                            return (float*)((int)param1 - (int)param0);
                        }
                        else {
                            int v26 = v5 + 9;
                            char v27 = (unsigned char)v26 == 8;
                            char v28 = __parity__((unsigned char)v26 - 8);
                            char v29 = (unsigned char)v26 < 8;
                            if((v29 || v27)) {
                                switch(v26) {
                                    case 0: 
                                    case 2: {
                                    loc_8065863:
                                        compare_free_stack();
                                        caml_invalid_argument("equal: functional value");
                                    }
                                    case 1: {
                                        unsigned int v30 = v6;
                                        param1 = (float*)(*(int*)(v30 + 4) >> 1);
                                        unsigned int v31 = (unsigned int)(*(int*)(ptr2 + 1) >> 1);
                                        if(v31 == param1) {
                                            goto loc_8065A2C;
                                        }
                                        else {
                                            return (float*)((int)param1 - v31);
                                        }
                                    }
                                    case 3: {
                                        goto loc_806591F;
                                    }
                                    case 4: {
                                        compare_free_stack();
                                        caml_invalid_argument("equal: abstract value");
                                        goto loc_8065863;
                                    }
                                    case 5: {
                                        break;
                                    }
                                    case 6: {
                                        double* ptr14 = *(double**)&v8;
                                        char v32 = v12 - 1;
                                        v9[v32] = *ptr14;
                                        char v33 = v32 - 1;
                                        v9[v33] = **(double**)&v11;
                                        fucomi(v9[v33], v9[v33 + 1]);
                                        if((v29 || v27)) {
                                            fucomi(v9[v33], v9[v33 + 1]);
                                            if(!v29 && !v27) {
                                                return (float*)0x1;
                                            }
                                            fucomi(v9[v33], v9[v33 + 1]);
                                            if((!v28 && v27)) {
                                                v12 = v33 + 2;
                                                goto loc_8065A2C;
                                            }
                                            else if(!ptr4) {
                                                return (float*)0x80000000;
                                            }
                                            else {
                                                fucomip(v9[v33], v9[v33]);
                                                char v34 = v33 + 1;
                                                fucomip(v9[v34], v9[v34]);
                                                v12 = v34 + 1;
                                                goto loc_8065A2C;
                                            }
                                        }
                                        else {
                                            return (float*)0xFFFFFFFF;
                                        }
                                    }
                                    case 7: {
                                        param1 = (float*)(*(int*)ptr10 >>> 11);
                                        unsigned int v35 = (unsigned int)(*ptr1 >>> 11);
                                        if(v35 != param1) {
                                            return (float*)((int)param1 - v35);
                                        }
                                        else if(!param1) {
                                            goto loc_8065A2C;
                                        }
                                        else {
                                            char v36 = v12 - 1;
                                            v9[v36] = *(double*)v6;
                                            char v37 = v36 - 1;
                                            v9[v37] = *(double*)ptr2;
                                            fucomi(v9[v37], v9[v37 + 1]);
                                        }
                                        return (float*)0xFFFFFFFF;
                                    }
                                    case 8: {
                                        unsigned int* ptr15 = *(unsigned int**)&v8;
                                        int* ptr16 = *ptr15;
                                        unsigned int* ptr17 = *(unsigned int**)&v11;
                                        int* ptr18 = *ptr17;
                                        unsigned int v38 = *(unsigned int*)(ptr18 + 2);
                                        if(*(ptr16 + 2) == v38) {
                                            if(!v38) {
                                                compare_free_stack();
                                                caml_invalid_argument("equal: abstract value");
                                            }
                                            caml_compare_unordered = 0;
                                            int v39 = *(int*)&v11;
                                            int v40 = *(int*)&v8;
                                            result = (float*)v38(v40, v39);
                                            if((caml_compare_unordered && !ptr4)) {
                                                return (float*)0x80000000;
                                            }
                                            else if(result) {
                                                return result;
                                            }
                                            goto loc_8065A2C;
                                        }
                                        else {
                                            →strcmp();
                                            if((int)ptr3 >= 0) {
                                                return (float*)0x1;
                                            }
                                        }
                                        return (float*)0xFFFFFFFF;
                                    }
                                    default: {
                                        throw 0;
                                    }
                                }
                                if(!(unsigned char)v14) {
                                    unsigned int v41 = caml_string_length(*(int*)&v8);
                                    unsigned int v42 = caml_string_length(*(int*)&v11);
                                    unsigned int v43 = v42;
                                    int v44 = (int)(v42 > v41 ? v41: v43);
                                    int v45 = *(int*)&v11;
                                    →memcmp(*(int*)&v8, v45, v44);
                                    if((int)ptr3 < 0) {
                                        return (float*)0xFFFFFFFF;
                                    }
                                    else if((int)ptr3 > 0) {
                                        return (float*)0x1;
                                    }
                                    char v46 = v41 == v43;
                                    v5 = v41;
                                    if(!v46) {
                                        return (float*)(v5 - v43);
                                    }
                                }
                            }
                            else {
                            loc_806591F:
                                *(int*)&v4 = *(int*)ptr10 >>> 10;
                                unsigned int v47 = (unsigned int)(*ptr1 >>> 10);
                                if(*(int*)&v4 != v47) {
                                    return (float*)(*(unsigned int*)&v4 - v47);
                                }
                                else if(*(int*)&v4 && *(unsigned int*)&v4 <= 1) {
                                    int* ptr19 = *(int**)&v8;
                                    *(int*)&v8 = *ptr19;
                                    int* ptr20 = *(int**)&v11;
                                    *(int*)&v11 = *ptr20;
                                    continue;
                                }
                                else if(*(int*)&v4) {
                                    ptr5 += 3;
                                    unsigned int v48 = compare_stack_limit;
                                    char v49 = v48 > (unsigned int)ptr5;
                                    if(v49) {
                                        goto loc_80659F9;
                                    }
                                    else {
                                        unsigned int v50 = compare_stack;
                                        v3 = compare_stack;
                                        int v51 = ((v48 - v50) >> 2) * 0x55555556;
                                        v2 = ((v48 - v50) >> 2) * 0x55555556;
                                        if((unsigned int)v51 > 0xfffff) {
                                            v51 = compare_stack_overflow();
                                        }
                                        int v52 = compare_stack;
                                        char v53 = v52 == &compare_stack_init;
                                        if(v53) {
                                            int v54 = v2 * 12;
                                            →malloc();
                                            ptr1 = ptr3;
                                            if(!ptr3) {
                                                v1 = compare_stack_overflow();
                                            }
                                            v0 = 0x300;
                                            ptr0 = ptr1;
                                            v5 = &compare_stack_init;
                                            break;
                                        }
                                        else {
                                            →realloc(v52, v2 * 12);
                                            ptr1 = ptr3;
                                            if(!ptr3) {
                                                v1 = compare_stack_overflow();
                                            }
                                            goto loc_80659DA;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else {
            loc_8065673:
                if(!(unsigned char)v14) {
                    return (float*)((unsigned int)(*(int*)&v8 >> 1) - (unsigned int)(*(int*)&v11 >> 1));
                }
            }
        }
    loc_8065A2C:
        if(compare_stack == ptr5) {
            return NULL;
        }
        int* ptr21 = *ptr5;
        *(int*)&v8 = *ptr21;
        *ptr5 = ptr21 + 1;
        int* ptr22 = *(ptr5 + 1);
        *(int*)&v11 = *ptr22;
        *(ptr5 + 1) = ptr22 + 1;
        int v55 = *(ptr5 + 2) - 1;
        *(int*)(ptr5 + 2) = *(ptr5 + 2) - 1;
        ptr5 = v55 ? ptr5: ptr5 - 3;
    }
    while(v0 != 0) {
        *ptr0 = *(int*)v5;
        v5 += 4;
        ++ptr0;
        --v0;
    }
loc_80659DA:
    compare_stack = ptr1;
    compare_stack_limit = (int*)(v2 * 12 + (int)ptr1);
    ptr5 = (unsigned int*)((int)(int*)((int)(int*)((int)ptr5 - v3) & 0xfffffffc) + (int)ptr1);
loc_80659F9:
    *ptr5 = v6 + 4;
    *(ptr5 + 1) = (int*)(ptr2 + 1);
    *(int*)(ptr5 + 2) = *(unsigned int*)&v4 - 1;
    int* ptr19 = *(int**)&v8;
    *(int*)&v8 = *ptr19;
    int* ptr20 = *(int**)&v11;
    *(int*)&v11 = *ptr20;
    goto loc_80654D4;
}

int cst_to_constr(unsigned int param0, unsigned int* param1, unsigned int param2, int param3) {
    int result;
    if((int)param2 > 0) {
        unsigned int v0 = 0;
        if(*param1 != param0) {
            do {
                ++v0;
                if((int)v0 >= (int)param2) {
                    return param3 * 2 + 1;
                }
            }
            while(*(int*)(v0 * 4 + (int)param1) != param0);
        }
        result = v0 * 2 + 1;
    }
    else {
        result = param3 * 2 + 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int cstringvect(int param0) {
    int v0;
    int v1 = v0;
    int v2 = param0;
    unsigned int v3 = (unsigned int)(*(int*)(v2 - 4) >>> 10);
    int v4 = caml_stat_alloc(v3 * 4 + 4);
    int result = v4;
    if(v3) {
        unsigned int v5 = 0;
        do {
            *(int*)(v5 * 4 + v4) = *(int*)(v5 * 4 + v2);
            ++v5;
        }
        while(v5 < v3);
    }
    *(int*)(v3 * 4 + result) = 0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* decode_sigset(int param0, int param1) {
    int* result;
    int v0;
    int v1 = v0;
    int* ptr0 = result;
    →sigemptyset(param1);
    while(ptr0 != 1) {
        unsigned int v2 = caml_convert_signal_number((unsigned int)(*ptr0 >> 1));
        →sigaddset(param1, (int)v2);
        ptr0 = *(unsigned int*)(ptr0 + 1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int do_set(unsigned int param0, int* param1) {
    int v0;
    unsigned int result;
    int v1 = v0;
    if(!((unsigned char)param0 & 0x1) && caml_young_end > param0 && caml_young_start < param0) {
        unsigned int* ptr0 = (unsigned int*)((int)(int*)((int)param1 * 4) + result);
        result = *ptr0;
        *ptr0 = param0;
        if(((unsigned char)result & 0x1) || caml_young_end <= result || caml_young_start >= result) {
            if(gvar_807EB44 >= gvar_807EB48) {
                caml_realloc_ref_table((int*)&caml_weak_ref_table);
            }
            result = &gvar_807EB44;
            unsigned int* ptr1 = gvar_807EB44;
            *ptr1 = ptr0;
            gvar_807EB44 = (int*)(ptr1 + 1);
        }
    }
    else {
        *(unsigned int*)((int)(int*)((int)param1 * 4) + result) = param0;
    }
    return result;
}

int do_write(int param0, int param1) {
    int result;
    int v0;
    int v1 = v0;
    int v2 = param1;
    int v3 = param0;
    while(1) {
        caml_enter_blocking_section();
        →write(result, param1, v3);
        caml_leave_blocking_section();
        if(result == -1) {
            →__errno_location();
            unsigned int v4 = *(unsigned int*)result;
            if(v4 == 4) {
                continue;
            }
            else if(v4 == 11 && v3 > 1) {
                v3 = 1;
                continue;
            }
            else {
                caml_sys_io_error(1);
            }
        }
        return result;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int encode_sigset() {
    int v0;
    int v1 = v0;
    int result = 1;
    unsigned int v2 = caml_local_roots;
    caml_local_roots = &v2;
    int v3 = 1;
    do {
        →sigismember(v1, v3);
        if(v0 > 0) {
            int v4 = caml_alloc_small(2, 0);
            unsigned int v5 = caml_rev_convert_signal_number((unsigned int)v3);
            *(int*)v4 = v5 * 2 + 1;
            *(int*)(v4 + 4) = result;
            result = v4;
        }
        ++v3;
    }
    while(v3 != 65);
    caml_local_roots = v2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int extern_invalid_argument() {
    int v0;
    int v1;
    int v2 = v0;
    int v3 = v1;
    extern_replay_trail();
    free_extern_output();
    /*BAD_CALL!*/ caml_invalid_argument(v3);
}

// Stale decompilation - Refresh this view to re-decompile this code
int extern_out_of_memory() {
    extern_replay_trail();
    free_extern_output();
    /*BAD_CALL!*/ caml_raise_out_of_memory();
}

int extern_rec() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* extern_record_location() {
    unsigned int* ptr0;
    unsigned int* result;
    int v0;
    int v1 = v0;
    if(!extern_ignore_sharing) {
        if(extern_trail_cur == extern_trail_limit) {
            int v2 = 0x200c;
            →malloc();
            if(!ptr0) {
                extern_out_of_memory();
            }
            *ptr0 = extern_trail_block;
            extern_trail_block = ptr0;
            extern_trail_cur = (int*)(ptr0 + 1);
            extern_trail_limit = (int*)(ptr0 + 2051);
        }
        int v3 = *(int*)(result - 1);
        unsigned int* ptr1 = extern_trail_cur;
        *ptr1 = (int*)(((v3 >>> 8) & 0x3) | (int)result);
        *(int*)(ptr1 + 1) = *result;
        extern_trail_cur = (int*)(ptr1 + 2);
        *(int*)(result - 1) = (unsigned int)(unsigned char)v3 | ((unsigned int)(((unsigned char)(v3 >>> 8) & 0xfc) | 0x2) << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
        unsigned int v4 = obj_counter;
        *result = obj_counter;
        result = (unsigned int*)(v4 + 1);
        obj_counter = (unsigned int*)(v4 + 1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* extern_replay_trail() {
    int* i;
    int v0;
    int v1 = v0;
    int v2 = extern_trail_block;
    unsigned int v3 = extern_trail_cur;
    while(1) {
        for(i = (int*)(v2 + 4); (unsigned int)i < v3; i += 2) {
            int v4 = *i;
            *((int*)(v4 & 0xfffffffc) - 1) = ((v4 & 0x3) * 0x100) | (*((int*)(v4 & 0xfffffffc) - 1) & 0xfffffcff);
            *(int*)(v4 & 0xfffffffc) = *(i + 1);
        }
        if(v2 == &extern_trail_first) {
            break;
        }
        else {
            int v5 = *(int*)v2;
            →free(v2);
            v3 = (unsigned int)(v5 + 0x200c);
            v2 = v5;
        }
    }
    extern_trail_block = &extern_trail_first;
    extern_trail_cur = 134741924;
    return i;
}

int* extern_value(int param0, int* param1) {
    int* result;
    int v0;
    int v1 = v0;
    int v2 = caml_convert_flag_list(param1, &extern_flags);
    extern_ignore_sharing = (unsigned int)(v2 & 0x1);
    extern_closures = (unsigned int)(v2 & 0x2);
    extern_trail_block = &extern_trail_first;
    extern_trail_cur = 134741924;
    extern_trail_limit = &extern_trail_block;
    obj_counter = 0;
    size_32 = 0;
    size_64 = 0;
    write32();
    extern_ptr += 16;
    extern_rec();
    if(!extern_userprovided_output) {
        *(unsigned int*)(extern_output_block + 4) = extern_ptr;
    }
    extern_replay_trail();
    unsigned int v3 = extern_userprovided_output;
    if(v3) {
        result = (int*)(extern_ptr - v3);
        extern_ptr = v3 + 4;
    }
    else {
        unsigned int* ptr0 = extern_output_first;
        result = NULL;
        if(ptr0) {
            unsigned int* ptr1 = ptr0;
            do {
                result = (int*)((int)(int*)(*(ptr1 + 1) - (int)ptr1) + (int)result) - 2;
                ptr1 = *ptr1;
            }
            while(ptr1);
        }
        extern_ptr = (int*)(ptr0 + 3);
        extern_limit = (int*)(ptr0 + 2027);
    }
    write32();
    write32();
    write32();
    write32();
    return result;
}

unsigned int fdlist_to_fdset(unsigned int* param0) {
    int* ptr0;
    int* ptr1;
    int* ptr2 = ptr1;
    unsigned int* ptr3 = (unsigned int*)0x20;
    int* ptr4 = ptr1;
    unsigned int result = 0;
    while(ptr3 != 0) {
        *ptr4 = 0;
        ++ptr4;
        ptr3 = (unsigned int*)((char*)ptr3 - 1);
    }
    if(ptr0 != 1) {
        ptr1 = ptr0;
        do {
            int v0 = *ptr1;
            result = (unsigned int)(v0 >> 1);
            *(int*)(((result >= 0x80000000 ? result + 31: result) >> 5) * 4 + (int)ptr2) = (1 << (((((unsigned int)((v0 >> 31) >>> 27) + result) & 0x1f) - (unsigned int)((v0 >> 31) >>> 27)) & 0x1f)) | *(int*)((int)result / 32 * 4 + (int)ptr2);
            ptr3 = param0;
            if(*ptr3 < (int)result) {
                *ptr3 = result;
            }
            ptr1 = *(unsigned int*)(ptr1 + 1);
        }
        while(ptr1 != 1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int fdset_to_fdlist(int param0, int param1) {
    int* ptr0;
    int* ptr1;
    int v0;
    int v1 = v0;
    int result = 1;
    unsigned int v2 = caml_local_roots;
    caml_local_roots = &v2;
    int v3 = 1;
    int v4 = 2;
    int* ptr2 = &ptr0;
    int* ptr3 = &result;
    if(ptr1 != 1) {
        ptr0 = ptr1;
        while(1) {
            int v5 = *ptr1;
            if((int*)((int)(int*)(*(int*)(((v5 >> 1 < 0 ? (v5 >> 1) + 31: v5 >> 1) >> 5) * 4 + param1) >>> (int)(int*)((int)(unsigned int)(int*)((unsigned int)(((unsigned int)((v5 >> 31) >>> 27) + (v5 >> 1)) & 0x1f) - (unsigned int)((v5 >> 31) >>> 27)) % 32)) & 0x1)) {
                int v6 = caml_alloc_small(2, 0);
                *(int*)v6 = (v5 >> 1) * 2 + 1;
                *(int*)(v6 + 4) = result;
                result = v6;
            }
            ptr1 = *(unsigned int*)(ptr0 + 1);
            if(ptr1 == 1) {
                break;
            }
            else {
                ptr0 = ptr1;
            }
        }
    }
    caml_local_roots = v2;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int free_extern_output() {
    int result;
    int v0;
    int v1 = v0;
    if(!extern_userprovided_output) {
        result = extern_output_first;
        if(result) {
            while(1) {
                int v2 = *(int*)result;
                →free(result);
                if(!v2) {
                    break;
                }
                else {
                    result = v2;
                }
            }
        }
        extern_output_first = 0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int get_sockaddr(int param0, short* param1, int param2) {
    int v0;
    int v1;
    int v2 = v1;
    int result = param0;
    short* ptr0 = param1;
    int v3 = (int)*(char*)(result - 4);
    if(!*(char*)(result - 4)) {
        int v4 = *(int*)result;
        v0 = *(int*)result;
        unsigned int v5 = caml_string_length(v4);
        unsigned int v6 = v5;
        *ptr0 = 1;
        if(v5 > 107) {
            v5 = (unsigned int)unix_error(36, &gvar_8071A88, v0);
        }
        →memmove();
        result = param2;
        *(int*)result = v6 + 2;
    }
    else if((unsigned char)v3 == 1) {
        v0 = result;
        unsigned int v7 = caml_string_length(*(int*)result);
        if(v7 == 16) {
            v7 = 0;
            do {
                *(int*)(v7 + (int)ptr0) = 0;
                v7 += 4;
            }
            while(v7 < 28);
            *ptr0 = 10;
            int* ptr1 = *(int**)v0;
            *(int*)(ptr0 + 4) = *ptr1;
            *(int*)(ptr0 + 6) = *(ptr1 + 1);
            *(int*)(ptr0 + 8) = *(ptr1 + 2);
            *(int*)(ptr0 + 10) = *(ptr1 + 3);
            *(ptr0 + 1) = __ror__((unsigned short)(*(int*)(result + 4) >>> 1), 8);
            result = param2;
            *(int*)result = 28;
        }
        else {
            *(int*)ptr0 = 0;
            *(int*)(ptr0 + 2) = 0;
            *(int*)(ptr0 + 4) = 0;
            *(int*)(ptr0 + 6) = 0;
            *ptr0 = 2;
            *(int*)(ptr0 + 2) = **(int**)v0;
            *(ptr0 + 1) = __ror__((unsigned short)(*(int*)(result + 4) >>> 1), 8);
            result = param2;
            *(int*)result = 16;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* grow_extern_output() {
    int v0;
    int* ptr0;
    if(extern_userprovided_output) {
        extern_replay_trail();
        v0 = caml_failwith("Marshal.to_buffer: buffer overflow");
    }
    *(unsigned int*)(extern_output_block + 4) = extern_ptr;
    →malloc();
    if(!ptr0) {
        extern_out_of_memory();
    }
    *extern_output_block = ptr0;
    extern_output_block = ptr0;
    *ptr0 = 0;
    extern_ptr = ptr0 + 2;
    extern_limit = (int*)((v0 >= 4051 ? v0: 0) + (int)ptr0) + 2027;
    return (int*)((v0 >= 4051 ? v0: 0) + (int)ptr0) + 2027;
}

void handle_signal() {
    // Decompilation error
}

int hash_aux() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int init_extern_output() {
    int v0;
    unsigned int v1;
    extern_userprovided_output = 0;
    →malloc();
    extern_output_first = v1;
    if(!v1) {
        v0 = caml_raise_out_of_memory();
    }
    extern_output_block = v0;
    *(int*)v0 = 0;
    extern_ptr = (unsigned int)(v0 + 8);
    extern_limit = (unsigned int)(v0 + 8108);
    return (unsigned int)(v0 + 8108);
}

// Stale decompilation - Refresh this view to re-decompile this code
int input_val_from_block() {
    int result;
    int v0;
    int v1 = v0;
    char* ptr0 = intern_src;
    unsigned int v2 = (unsigned int)((unsigned int)*(ptr0 + 2) * 0x100 + (unsigned int)*(ptr0 + 1) * 0x10000 + ((unsigned int)*ptr0 * 0x1000000 + (unsigned int)*(ptr0 + 3)));
    int v3 = (unsigned int)*(ptr0 + 6) * 0x100;
    intern_src = (int*)(ptr0 + 12);
    intern_alloc(v3, v2);
    intern_rec();
    intern_add_to_heap();
    unsigned int v4 = intern_obj_table;
    if(v4) {
        caml_stat_free((int)v4);
    }
    return result;
}

unsigned int int32_cmp(int param0, int param1) {
    unsigned int v0 = *(unsigned int*)(param0 + 4);
    unsigned int v1 = *(unsigned int*)(param1 + 4);
    return ((int)v0 <= (int)v1 ? 0: 1) - ((int)v0 >= (int)v1 ? 0: 1);
}

int int32_deserialize(int* param0) {
    int v0 = caml_deserialize_sint_4();
    *param0 = v0;
    return 4;
}

int int32_hash(int param0) {
    return *(int*)(param0 + 4);
}

int* int32_serialize(int param0, int* param1, int* param2) {
    caml_serialize_int_4(*(int*)(param0 + 4));
    *param2 = 4;
    int* result = param1;
    *result = 4;
    return result;
}

unsigned int int64_cmp(int param0, int param1) {
    int v0;
    int v1 = v0;
    unsigned int v2 = *(unsigned int*)(param0 + 4);
    unsigned int v3 = *(unsigned int*)(param0 + 8);
    unsigned int v4 = *(unsigned int*)(param1 + 4);
    unsigned int v5 = *(unsigned int*)(param1 + 8);
    unsigned int v6 = 1;
    char v7 = (int)v3 < (int)v5;
    char v8 = (int)(((v3 - v5) ^ v3) & (v3 ^ v5)) < 0;
    if((v3 == v5 || v7 != v8) && (v7 != v8 || v2 <= v4)) {
        v6 = 0;
    }
    unsigned int v9 = 1;
    char v10 = (int)v3 < (int)v5;
    char v11 = (int)(((v3 - v5) ^ v3) & (v3 ^ v5)) < 0;
    if(v10 == v11 && ((v3 != v5 && v10 == v11) || v2 >= v4)) {
        v9 = 0;
    }
    return v6 - v9;
}

int int64_deserialize(int* param0) {
    int v0;
    int v1 = caml_deserialize_sint_8();
    int* ptr0 = param0;
    *ptr0 = v1;
    *(ptr0 + 1) = v0;
    return 8;
}

int int64_hash(int param0) {
    return *(int*)(param0 + 4);
}

int* int64_serialize(int param0, int* param1, int* param2) {
    caml_serialize_int_8(*(int*)(param0 + 4), *(int*)(param0 + 8));
    *param2 = 8;
    int* result = param1;
    *result = 8;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int intern_add_to_heap() {
    int result;
    unsigned int v0 = intern_extra_block;
    if(v0) {
        unsigned int v1 = (unsigned int)(((result * 4 + 0xfff) & 0xfffff000) + v0);
        unsigned int* ptr0 = intern_dest;
        if((unsigned int)ptr0 < v1) {
            caml_make_free_blocks(ptr0, (unsigned int)((int)(int*)(v1 - (int)ptr0) >> 2), 0);
        }
        int v2 = intern_extra_block;
        caml_allocated_words = (unsigned int)(((intern_dest - v2) >>> 2) + caml_allocated_words);
        result = caml_add_to_heap(v2);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* intern_alloc(int param0, unsigned int param1) {
    unsigned int* result;
    int v0;
    int v1 = v0;
    if(!result) {
        intern_obj_table = 0;
        intern_extra_block = 0;
        intern_block = 0;
    }
    else {
        if((unsigned int)(int)((char*)result - 1) > 0x3fffff) {
            unsigned int v2 = caml_alloc_for_heap((int)(int*)((char*)((int)result * 4) + 0xfff) & 0xfffff000);
            intern_extra_block = v2;
            if(!v2) {
                v2 = (unsigned int)caml_raise_out_of_memory();
            }
            int v3 = caml_allocation_color(v2);
            intern_color = v3;
            result = intern_extra_block;
            intern_dest = intern_extra_block;
        }
        else {
            if(!(int)((char*)result - 1)) {
                intern_block = 134751636;
            }
            else if((unsigned int)(int)((char*)result - 1) <= 0x100) {
                int v4 = caml_alloc_small((int)((char*)result - 1), 252);
                intern_block = v4;
            }
            else {
                int* ptr0 = caml_alloc_shr((unsigned int)(int)((char*)result - 1), 252);
                intern_block = ptr0;
            }
            result = (unsigned int*)(intern_block - 4);
            unsigned int v5 = *result;
            intern_header = *result;
            intern_color = v5 & 0x300;
            intern_dest = result;
            intern_extra_block = 0;
        }
        obj_counter2 = 0;
        if(param1) {
            result = (unsigned int*)caml_stat_alloc(param1 * 4);
            intern_obj_table = result;
        }
        else {
            intern_obj_table = 0;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* intern_rec() {
    char v0;
    char* ptr0;
    unsigned int v1;
    unsigned int v2;
    int v3;
    int v4;
    char v5;
    int* ptr1;
    unsigned int* result;
    int v6 = v4;
    unsigned int* ptr2 = result;
    char* ptr3 = (char*)&gvar_8071704;
loc_806A9D1:
    do {
        char* ptr4 = intern_src;
        char* ptr5 = (char*)*ptr4;
        unsigned int v7 = (unsigned int)*ptr4;
        result = (unsigned int*)(ptr4 + 1);
        intern_src = (unsigned int*)(ptr4 + 1);
        if(v7 <= 63 && v7 > 31) {
            v3 = v7 & 0x1f;
        loc_806AAB0:
            int v8 = (v3 + 4) >>> 2;
            char* ptr6 = (char*)(intern_dest + 4);
            ptr3 = (char*)(intern_dest + 4);
            unsigned int v9 = intern_obj_table;
            if(v9) {
                unsigned int v10 = obj_counter2;
                *(unsigned int*)(v10 * 4 + v9) = ptr6;
                obj_counter2 = v10 + 1;
            }
            *intern_dest = v8 * 0x400 + intern_color + 252;
            intern_dest = (unsigned int)(v8 * 4 + intern_dest + 4);
            unsigned int v11 = (unsigned int)(v8 * 4);
            *((int*)(v11 + (int)ptr3) - 1) = 0;
            int v12 = v11 - 1;
            *(char*)(v12 + (int)ptr3) = (unsigned char)v12 - (unsigned char)v3;
            →memmove();
            intern_src += v3;
            *ptr2 = ptr3;
            return result;
        }
        else if(v7 > 127) {
            ptr5 = (char*)(v7 & 0xf);
            ptr1 = (int*)((v7 >>> 4) & 0x7);
        loc_806AA03:
            if(!ptr1) {
                ptr3 = (char*)((int*)((int)ptr5 * 4) + 33687657);
            }
            else {
                int v13 = intern_dest + 4;
                *ptr2 = intern_dest + 4;
                unsigned int v14 = intern_obj_table;
                if(v14) {
                    unsigned int v15 = obj_counter2;
                    *(int*)(v15 * 4 + v14) = v13;
                    obj_counter2 = v15 + 1;
                }
                unsigned int* ptr7 = intern_dest;
                ptr2 = ptr7 + 1;
                *ptr7 = (int*)((int)(int*)((int)(int*)((int)ptr1 * 0x400) + intern_color) + (int)ptr5);
                intern_dest = (int*)((int)(int*)((int)ptr1 * 4) + intern_dest) + 1;
            }
        }
        else if(v7 > 63) {
            ptr3 = (char*)((v7 & 0x3f) * 2 + 1);
        }
        else if((unsigned char)ptr5 > 19) {
            intern_cleanup();
            result = (unsigned int*)caml_failwith("input_value: ill-formed message");
        }
        else if(ptr5 == 0) {
            ptr3 = (char*)((char*)((int)(char*)*(char*)result * 2) + 1);
            result = (unsigned int*)((char*)result + 1);
            intern_src = result;
            *ptr2 = ptr3;
            return result;
        }
        else if(ptr5 == 1) {
            int* ptr8 = (int*)((char*)result + 2);
            intern_src = (int*)((char*)result + 2);
            result = (unsigned int*)((int)(char*)((int)*(char*)((char*)ptr8 - 2) * 0x100) + (unsigned int)*(char*)((char*)ptr8 - 1));
            ptr3 = (char*)((char*)((int)result * 2) + 1);
        }
        else if(ptr5 == 2) {
            int* ptr9 = (int*)(result + 1);
            intern_src = (int*)(result + 1);
            result = (unsigned int*)((unsigned int)*(char*)((char*)ptr9 - 2) * 0x100 + (unsigned int)*(char*)(ptr9 - 1) * 0x1000000 + ((unsigned int)*(char*)((char*)ptr9 - 3) * 0x10000 + (unsigned int)*(char*)((char*)ptr9 - 1)));
            ptr3 = (char*)((char*)((int)result * 2) + 1);
        }
        else if(ptr5 == 3) {
            intern_cleanup();
            result = (unsigned int*)caml_failwith("input_value: integer too large");
            goto loc_806ABBB;
        }
        else if(ptr5 == 4) {
        loc_806ABBB:
            v2 = (unsigned int)*(char*)result;
            intern_src = (int*)((char*)result + 1);
        loc_806ABCF:
            result = intern_obj_table;
            ptr3 = *(unsigned int*)((int)(int*)((int)(char*)(obj_counter2 - v2) * 4) + (int)result);
        }
        else if(ptr5 == 5) {
            int* ptr10 = (int*)((char*)result + 2);
            intern_src = (int*)((char*)result + 2);
            v2 = (unsigned int)((unsigned int)*(char*)((char*)ptr10 - 2) * 0x100 + (unsigned int)*(char*)((char*)ptr10 - 1));
            goto loc_806ABCF;
        }
        else if(ptr5 == 6) {
            int* ptr11 = (int*)(result + 1);
            intern_src = (int*)(result + 1);
            v2 = (unsigned int)((unsigned int)*(char*)((char*)ptr11 - 2) * 0x100 + (unsigned int)*(char*)(ptr11 - 1) * 0x1000000 + ((unsigned int)*(char*)((char*)ptr11 - 3) * 0x10000 + (unsigned int)*(char*)((char*)ptr11 - 1)));
            goto loc_806ABCF;
        }
        else if(ptr5 == 7 || ptr5 == 15) {
            int* ptr12 = (int*)(result + 1);
            intern_src = (int*)(result + 1);
            *(int*)&v0 = (unsigned int)*(char*)((char*)ptr12 - 2) * 0x100 + (unsigned int)*(char*)(ptr12 - 1) * 0x1000000 + ((unsigned int)*(char*)((char*)ptr12 - 3) * 0x10000 + (unsigned int)*(char*)((char*)ptr12 - 1));
        loc_806AD6C:
            int v16 = *(int*)&v0 * 2;
            unsigned int* ptr13 = intern_dest;
            unsigned int* ptr14 = intern_dest;
            *(char**)&v5 = (char*)(ptr13 + 1);
            ptr3 = (char*)(ptr13 + 1);
            unsigned int v17 = intern_obj_table;
            if(v17) {
                unsigned int v18 = obj_counter2;
                *(unsigned int*)(v18 * 4 + v17) = ptr3;
                obj_counter2 = v18 + 1;
            }
            *intern_dest = v16 * 0x400 + intern_color + 254;
            intern_dest = (unsigned int)(v16 * 4 + intern_dest + 4);
            int v19 = *(int*)&v0 * 8;
            v1 = intern_src;
            ptr0 = *(char**)&v5;
            →memmove();
            intern_src += v19;
            if(v7 != 14 && v7 != 7 && *(int*)&v0) {
                result = ptr14;
                ptr5 = NULL;
                unsigned int v20 = *(unsigned int*)&v0;
                *(char**)&v0 = ptr3;
                do {
                    char v21 = *(char*)(result + 1);
                    v5 = *(char*)((char*)result + 5);
                    *(char*)(result + 1) = *(char*)((char*)result + 11);
                    *(char*)((char*)result + 5) = *(char*)((char*)result + 10);
                    *(char*)((char*)result + 11) = v21;
                    *(char*)((char*)result + 10) = v5;
                    char v22 = *(char*)((char*)result + 6);
                    v5 = *(char*)((char*)result + 7);
                    *(char*)((char*)result + 6) = *(char*)((char*)result + 9);
                    *(char*)((char*)result + 7) = *(char*)(result + 2);
                    *(char*)((char*)result + 9) = v22;
                    *(char*)(result + 2) = v5;
                    ++ptr5;
                    result += 2;
                }
                while((unsigned int)ptr5 < v20);
                ptr3 = *(char**)&v0;
            }
        }
        else if(ptr5 == 8) {
            int* ptr15 = (int*)(result + 1);
            intern_src = (int*)(result + 1);
            result = (unsigned int*)((unsigned int)*(char*)((char*)ptr15 - 2) * 0x100);
            int* ptr16 = (int*)((unsigned int)*(char*)((char*)ptr15 - 3) * 0x10000 + (unsigned int)*(char*)(ptr15 - 1) * 0x1000000 + (int)(int*)((unsigned int)*(char*)((char*)ptr15 - 1) + (int)result));
            ptr5 = (char*)(unsigned char)ptr16;
            ptr1 = (int*)((int)ptr16 >>> 10);
            goto loc_806AA03;
        }
        else if(ptr5 == 9) {
            v3 = (unsigned int)*(char*)result;
            intern_src = (int*)((char*)result + 1);
            goto loc_806AAB0;
        }
        else if(ptr5 == 10) {
            int* ptr17 = (int*)(result + 1);
            intern_src = (int*)(result + 1);
            v3 = (unsigned int)*(char*)((char*)ptr17 - 2) * 0x100 + (unsigned int)*(char*)((char*)ptr17 - 3) * 0x10000 + ((unsigned int)*(char*)(ptr17 - 1) * 0x1000000 + (unsigned int)*(char*)((char*)ptr17 - 1));
            goto loc_806AAB0;
        }
        else if(ptr5 == 11 || ptr5 == 12) {
            char* ptr18 = (char*)(intern_dest + 4);
            ptr3 = (char*)(intern_dest + 4);
            unsigned int v23 = intern_obj_table;
            if(v23) {
                unsigned int v24 = obj_counter2;
                *(unsigned int*)(v24 * 4 + v23) = ptr18;
                obj_counter2 = v24 + 1;
            }
            *intern_dest = intern_color + 2301;
            intern_dest += 12;
            int v25 = 8;
            v1 = intern_src;
            ptr0 = ptr18;
            →memmove();
            intern_src += 8;
            if(v7 != 12) {
                v0 = *ptr3;
                char* ptr19 = ptr3 + 1;
                char v26 = *ptr19;
                char* ptr20 = ptr3 + 7;
                *ptr3 = *ptr20;
                char* ptr21 = ptr3 + 6;
                *ptr19 = *ptr21;
                *ptr20 = v0;
                *ptr21 = v26;
                char* ptr22 = ptr3 + 2;
                v0 = *ptr22;
                char* ptr23 = ptr3 + 3;
                char v27 = *ptr23;
                ptr5 = ptr3 + 5;
                *ptr22 = *ptr5;
                result = (unsigned int*)(ptr3 + 4);
                *ptr23 = *(char*)result;
                *ptr5 = v0;
                *(char*)result = v27;
            }
        }
        else if(ptr5 == 13 || ptr5 == 14) {
            *(int*)&v0 = (unsigned int)*(char*)result;
            intern_src = (int*)((char*)result + 1);
            goto loc_806AD6C;
        }
        else {
            throw 0;
            ptr3 = (char*)((char*)((int)(char*)*(char*)result * 2) + 1);
            result = (unsigned int*)((char*)result + 1);
            intern_src = result;
        }
        *ptr2 = ptr3;
        return result;
    }
    while((unsigned int)ptr1 <= 1);
    int* ptr24 = ptr1;
    *(unsigned int**)&v0 = ptr2;
    do {
        intern_rec();
        ptr24 = (int*)((char*)ptr24 - 1);
        *(int*)&v0 = *(int*)&v0 + 4;
    }
    while((unsigned int)ptr24 > 1);
    ptr2 = (unsigned int*)((int*)((int)(int*)((int)ptr1 * 4) + (int)ptr2) - 1);
    goto loc_806A9D1;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* invert_root(int param0, int param1) {
    return invert_pointer_at();
}

int main(int param0, int* param1) {
    int* ptr0 = param1;
    caml_main(ptr0);
    /*NO_RETURN*/ caml_sys_exit(1);
}

unsigned int nativeint_cmp(int param0, int param1) {
    unsigned int v0 = *(unsigned int*)(param0 + 4);
    unsigned int v1 = *(unsigned int*)(param1 + 4);
    return ((int)v0 <= (int)v1 ? 0: 1) - ((int)v0 >= (int)v1 ? 0: 1);
}

int nativeint_deserialize(int* param0) {
    int v0 = caml_deserialize_uint_1();
    switch(v0) {
        case 1: {
            int v1 = caml_deserialize_sint_4();
            *param0 = v1;
            return 4;
        }
        case 2: {
            caml_deserialize_error("input_value: native integer value too large");
            return 4;
        }
        default: {
            caml_deserialize_error("input_value: ill-formed native integer");
            return 4;
        }
    }
}

int nativeint_hash(int param0) {
    return *(int*)(param0 + 4);
}

int* nativeint_serialize(int param0, int* param1, int* param2) {
    int v0;
    int v1 = v0;
    int v2 = *(int*)(param0 + 4);
    caml_serialize_int_1(1);
    caml_serialize_int_4(v2);
    *param1 = 4;
    int* result = param2;
    *result = 8;
    return result;
}

int parse_digit() {
    int result;
    int v0;
    char v1;
    int v2 = (unsigned int)v1 | ((unsigned int)v0 << 8);
    if((unsigned char)(v1 + 208) <= 9) {
        result = (int)v1 - 48;
    }
    else if((unsigned char)(v1 + 191) <= 5) {
        result = (int)v1 - 55;
    }
    else {
        result = -1;
        if((unsigned char)(v1 + 159) <= 5) {
            result = (unsigned int)(unsigned char)v2 - 87;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int parse_format(int param0, int param1) {
    char v0;
    int v1;
    unsigned char* ptr0;
    int v2;
    int v3;
    int v4 = v2;
    int v5 = v1;
    int v6 = v3;
    unsigned char* ptr1 = ptr0;
    unsigned int v7 = caml_string_length(v1);
    int v8 = v6;
    int v9 = -1;
    do {
        v0 = *(char*)v8 == 0;
        ++v8;
        --v9;
    }
    while(~v0 && v9 == 0);
    if((unsigned int)(-2 - v9) + v7 + 1 > 31) {
        caml_invalid_argument("format_int: format too long");
    }
    unsigned int v10 = v7;
    int v11 = v5;
    unsigned char* ptr2 = ptr0;
    →memmove();
    unsigned char* ptr3 = (unsigned char*)((unsigned char*)((int)ptr0 + v7) - 1);
    unsigned char* ptr4 = (unsigned char*)*ptr3;
    unsigned char v12 = *(ptr3 - 1);
    if(*(ptr3 - 1) == 108 || v12 == 110 || v12 == 76) {
        --ptr3;
    }
    v11 = v6;
    ptr2 = ptr3;
    →memmove();
    char* ptr5 = (char*)((unsigned int)(-2 - v9) + (int)ptr3);
    *ptr5 = (unsigned char)ptr4;
    *(ptr5 + 1) = 0;
    int v13 = v5;
    v3 = (int)*(char*)v13;
    if(*(char*)v13) {
        while((unsigned char)((unsigned char)v3 - 48) > 9) {
            ++v13;
            v3 = (int)*(char*)v13;
            if(!*(char*)v13) {
                *(char*)param1 = (unsigned char)ptr4;
                return param0;
            }
        }
        →strtol(v13, 0, 10);
        *(char*)param1 = (unsigned char)ptr4;
        if((int)(unsigned int)(v1 + 5) > 31) {
            param0 = caml_stat_alloc(v1 + 6);
        }
    }
    else {
        *(char*)param1 = (unsigned char)ptr4;
    }
    return param0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int parse_intnat(int param0, int param1) {
    int result1;
    char v0;
    unsigned int v1;
    unsigned int v2;
    int v3;
    int v4;
    int v5 = v3;
    int v6 = v4;
    *(int*)&v0 = param1;
    unsigned char* ptr0 = parse_sign_and_base(&v1, &v2);
    unsigned int v7 = v2;
    unsigned int v8 = 0xffffffff / v2;
    int v9 = parse_digit();
    if(v9 < 0 || v9 >= (int)v2) {
        v9 = caml_failwith("int_of_string");
    }
    unsigned char* ptr1 = ptr0 + 1;
    int result = v9;
    while(1) {
        if(*ptr1 != 95) {
            int v10 = parse_digit();
            if(v10 >= 0 && v10 < (int)v2) {
                if(0xffffffff / v2 < (unsigned int)result) {
                    v10 = caml_failwith("int_of_string");
                }
                int v11 = result * v2;
                result = v10 + v11;
                if(__carry__(v10, v11)) {
                    caml_failwith("int_of_string");
                }
                goto loc_8066064;
            }
            else {
                unsigned int v12 = caml_string_length(v4);
                if(v12 + v4 != ptr1) {
                    caml_failwith("int_of_string");
                }
                if(v2 == 10) {
                    if(v1 < 0x80000000) {
                        if((unsigned int)(1 << ((*(unsigned int*)&v0 - 1) & 0x1f)) > (unsigned int)result) {
                            return result;
                        }
                        caml_failwith("int_of_string");
                    }
                    if((unsigned int)(1 << ((*(unsigned int*)&v0 - 1) & 0x1f)) >= (unsigned int)result) {
                        goto loc_80660F6;
                    }
                    else {
                        caml_failwith("int_of_string");
                        goto loc_80660D1;
                    }
                }
                else {
                loc_80660D1:
                    if(*(unsigned int*)&v0 <= 31 && (unsigned int)(1 << ((unsigned int)v0 & 0x1f)) <= (unsigned int)result) {
                        caml_failwith("int_of_string");
                    }
                    if(v1 >= 0x80000000) {
                    loc_80660F6:
                        result1 = 0 - result;
                    }
                    else {
                        result1 = result;
                    }
                }
                return result1;
            }
        }
        else {
        loc_8066064:
            ++ptr1;
        }
    }
}

unsigned char* parse_sign_and_base(int* param0, int* param1) {
    unsigned char* result;
    *param0 = 1;
    if(*result == 45) {
        *param0 = -1;
        ++result;
    }
    *param1 = 10;
    if(*result == 48 && (unsigned char)(*(char*)(result + 1) - 66) <= 54) {
        jump gvar_8071270[(int*)(*(char*)(result + 1) - 66)];
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int segv_handler(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10, int param11, int param12, int param13, int param14, int param15, int param16, int param17, int param18, int param19, int param20, int param21, unsigned int param22) {
    int result;
    unsigned int v0;
    char v1;
    int v2;
    int v3 = v2;
    if(!((unsigned char)param22 & 0x3)) {
        →getrlimit64();
        if(!result) {
            unsigned int v4 = system_stack_top;
            if(v4 > param22 && v4 - v0 - 0x2000 <= param22) {
                caml_raise_stack_overflow();
            }
        }
    }
    int v5 = 0;
    int v6 = 0;
    →sigemptyset(&v1);
    →sigaction(11, &v5, 0);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int stat_aux(int param0, int* param1) {
    unsigned int v0;
    int* ptr0;
    int v1;
    int v2;
    int v3;
    int v4 = v3;
    int* ptr1 = ptr0;
    unsigned int v5 = caml_local_roots;
    long long* ptr2 = NULL;
    long long* ptr3 = NULL;
    long long* ptr4 = NULL;
    int v6 = 0;
    int result = 0;
    caml_local_roots = &v0;
    int v7 = 1;
    int v8 = 5;
    int* ptr5 = &ptr2;
    int* ptr6 = &ptr3;
    int* ptr7 = &ptr4;
    int* ptr8 = &v6;
    int* ptr9 = &result;
    *(double*)&v1 = (double)*(param1 + 16);
    ptr2 = caml_copy_double(*(double*)&v1, v2);
    *(double*)&v1 = (double)*(param1 + 18);
    ptr3 = caml_copy_double(*(double*)&v1, v2);
    *(double*)&v1 = (double)*(param1 + 20);
    ptr4 = caml_copy_double(*(double*)&v1, v2);
    int v9 = ptr1 ? caml_copy_int64(*(param1 + 11), *(param1 + 12)): *(param1 + 11) * 2 + 1;
    v6 = v9;
    int v10 = caml_alloc_small(12, 0);
    result = v10;
    *(int*)v10 = *param1 * 2 + 1;
    *(int*)(result + 4) = *(param1 + 22) * 2 + 1;
    ptr1 = (int*)(result + 8);
    int v11 = 0;
    v2 = 7;
    int v12 = &file_kind_table;
    int v13 = cst_to_constr((unsigned int)(*(param1 + 4) & 0xf000), (unsigned int*)&file_kind_table, 7, 0);
    *ptr1 = v13;
    *(int*)(result + 12) = (*(param1 + 4) & 0xfff) * 2 + 1;
    *(int*)(result + 16) = *(param1 + 5) * 2 + 1;
    *(int*)(result + 20) = *(param1 + 6) * 2 + 1;
    *(int*)(result + 24) = *(param1 + 7) * 2 + 1;
    *(int*)(result + 28) = *(param1 + 8) * 2 + 1;
    *(int*)(result + 32) = v6;
    *(long long**)(result + 36) = ptr2;
    *(long long**)(result + 40) = ptr3;
    *(long long**)(result + 44) = ptr4;
    caml_local_roots = v5;
    return result;
}

int sub_8049DBA() {
    return gvar_8072154();
}

int* sub_804AA97(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AAB5(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AA82();
}

int* sub_804AAD7(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AAF5(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AAC2();
}

int* sub_804AB17(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_3;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AB35(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AB02();
}

int* sub_804AB57(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_4;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AB75(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AB42();
}

int* sub_804AB97(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_5;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804ABB5(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AB82();
}

int* sub_804ABD7(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_6;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804ABF5(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804ABC2();
}

int* sub_804AC17(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_7;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AC35(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AC02();
}

int* sub_804AC57(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry9_8;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AC75(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AC42();
}

int* sub_804AD67(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry7_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AD85(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AD52();
}

int* sub_804ADA7(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry7_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804ADC5(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AD92();
}

int* sub_804ADE7(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry7_3;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AE05(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804ADD2();
}

int* sub_804AE27(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry7_4;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AE45(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AE12();
}

int* sub_804AE67(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry7_5;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AE85(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AE52();
}

int* sub_804AEA7(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry7_6;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AEC5(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AE92();
}

int* sub_804AF57(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry6_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AF75(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AF42();
}

int* sub_804AF97(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry6_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AFB5(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AF82();
}

int* sub_804AFD7(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry6_3;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AFF5(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804AFC2();
}

int* sub_804B017(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry6_4;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B035(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B002();
}

int* sub_804B057(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry6_5;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B075(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B042();
}

int* sub_804B0E7(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry5_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B105(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B0D2();
}

int* sub_804B127(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry5_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B145(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B112();
}

int* sub_804B167(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry5_3;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B185(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B152();
}

int* sub_804B1A7(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry5_4;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B1C5(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B192();
}

int* sub_804B207(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry4_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B225(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B1F2();
}

int* sub_804B247(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry4_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B265(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B232();
}

int* sub_804B287(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry4_3;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B2A5(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B272();
}

int* sub_804B2E7(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry3_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B305(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B2D2();
}

int* sub_804B327(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry3_2;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B345(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B312();
}

int* sub_804B387(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry2_1;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B3A5(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B372();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B5CD(int param0, unsigned int param1, unsigned int param2, unsigned int param3, int param4, int param5) {
    void* ptr0;
    void* ptr1;
    char v0;
    unsigned int v1 = caml_exception_pointer;
    caml_exception_pointer = &v1;
    unsigned int v2 = camlSys;
    int v3 = &caml_int_of_string;
    unsigned int v4 = (unsigned int)caml_c_call();
    int* ptr2 = &ptr1;
    char v5 = &ptr0 == 4;
    char v6 = (int)&v1 < 0;
    char v7 = __parity__((unsigned char)&ptr0 - 4);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr1 ^ 0x4) ^ (int)&v1) >>> 4) & 0x1);
    char v9 = (unsigned int)&ptr1 >= 0xfffffffc;
    char v10 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&ptr1) & (int*)~(int)(int*)((int)&ptr1 ^ 0x4)) < 0;
    param3 = v4;
    caml_exception_pointer = v1;
    int* ptr3 = &ptr0;
    char v11 = &param0 ? 0: 1;
    char v12 = (int)&param0 < 0;
    char v13 = __parity__((unsigned char)&ptr0 + 4);
    char v14 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v15 = (unsigned int)&ptr0 >= 0xfffffffc;
    char v16 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&param0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    unsigned int v17 = v4;
    unsigned int v18 = v4;
    unsigned int v19 = v17 - 2;
    char v20 = v19 ? 0: 1;
    char v21 = v19 >= 0x80000000;
    char v22 = __parity__((unsigned char)v19);
    char v23 = (((v18 ^ 0xfffffffe) ^ v19) >>> 4) & 0x1;
    char v24 = v18 >= 2;
    char v25 = (int)((v19 ^ v18) & ~(v18 ^ 0xfffffffe)) < 0;
    param1 = v19;
    int v26 = 1;
    param2 = 1;
    int v27 = &caml_make_vect;
    int v28 = caml_c_call();
    int* ptr4 = &v1;
    char v29 = &param0 ? 0: 1;
    char v30 = (int)&param0 < 0;
    char v31 = __parity__((unsigned char)&ptr0 + 4);
    char v32 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x8) ^ (int)&param0) >>> 4) & 0x1);
    char v33 = (unsigned int)&v1 >= 0xfffffff8;
    char v34 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&param0) & (int*)~(int)(int*)((int)&v1 ^ 0x8)) < 0;
    param4 = v28;
    unsigned int v35 = param3;
    v1 = param3;
    int v36 = &caml_make_vect;
    int v37 = caml_c_call();
    int* ptr5 = &v1;
    char v38 = &param0 ? 0: 1;
    char v39 = (int)&param0 < 0;
    char v40 = __parity__((unsigned char)&ptr0 + 4);
    char v41 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x8) ^ (int)&param0) >>> 4) & 0x1);
    char v42 = (unsigned int)&v1 >= 0xfffffff8;
    char v43 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&param0) & (int*)~(int)(int*)((int)&v1 ^ 0x8)) < 0;
    param0 = v37;
    while(1) {
        unsigned int v44 = param2;
        unsigned int v45 = param3;
        char v46 = v44 == v45;
        char v47 = (int)v44 < (int)v45;
        char v48 = __parity__((unsigned char)v44 - (unsigned char)v45);
        char v49 = v44 < v45;
        char v50 = (int)(((v44 - v45) ^ v44) & (v44 ^ v45)) < 0;
        char v51 = (((v44 - v45) ^ (v44 ^ v45)) >>> 4) & 0x1;
        if(v47 == v50) {
            break;
        }
        else {
            int v52 = param4;
            *(unsigned int*)(v44 * 2 + v52 - 2) = v44;
            unsigned int v53 = v44;
            int v54 = (int)(v44 + 2);
            char v55 = v54 ? 0: 1;
            char v56 = v54 < 0;
            char v57 = __parity__((unsigned char)v54);
            char v58 = (((v53 ^ 0x2) ^ v54) >>> 4) & 0x1;
            char v59 = v53 >= 0xfffffffe;
            char v60 = ((v54 ^ v53) & ~(v53 ^ 0x2)) < 0;
            *(int*)(v54 * 2 + v52 - 2) = v54;
            int v61 = v54;
            int v62 = v54 + 2;
            char v63 = v62 ? 0: 1;
            char v64 = v62 < 0;
            char v65 = __parity__((unsigned char)v62);
            char v66 = (((v61 ^ 0x2) ^ v62) >>> 4) & 0x1;
            char v67 = (unsigned int)v61 >= 0xfffffffe;
            char v68 = ((v62 ^ v61) & ~(v61 ^ 0x2)) < 0;
            *(int*)(v62 * 2 + v52 - 2) = v62;
            int v69 = v62;
            int v70 = v62 + 2;
            char v71 = v70 ? 0: 1;
            char v72 = v70 < 0;
            char v73 = __parity__((unsigned char)v70);
            char v74 = (((v69 ^ 0x2) ^ v70) >>> 4) & 0x1;
            char v75 = (unsigned int)v69 >= 0xfffffffe;
            char v76 = ((v70 ^ v69) & ~(v69 ^ 0x2)) < 0;
            *(int*)(v70 * 2 + v52 - 2) = v70;
            int v77 = v70;
            int v78 = v70 + 2;
            char v79 = v78 ? 0: 1;
            char v80 = v78 < 0;
            char v81 = __parity__((unsigned char)v78);
            char v82 = (((v77 ^ 0x2) ^ v78) >>> 4) & 0x1;
            char v83 = (unsigned int)v77 >= 0xfffffffe;
            char v84 = ((v78 ^ v77) & ~(v77 ^ 0x2)) < 0;
            *(int*)(v78 * 2 + v52 - 2) = v78;
            int v85 = v78;
            int v86 = v78 + 2;
            char v87 = v86 ? 0: 1;
            char v88 = v86 < 0;
            char v89 = __parity__((unsigned char)v86);
            char v90 = (((v85 ^ 0x2) ^ v86) >>> 4) & 0x1;
            char v91 = (unsigned int)v85 >= 0xfffffffe;
            char v92 = ((v86 ^ v85) & ~(v85 ^ 0x2)) < 0;
            *(int*)(v86 * 2 + v52 - 2) = v86;
            int v93 = v86;
            int v94 = v86 + 2;
            char v95 = v94 ? 0: 1;
            char v96 = v94 < 0;
            char v97 = __parity__((unsigned char)v94);
            char v98 = (((v93 ^ 0x2) ^ v94) >>> 4) & 0x1;
            char v99 = (unsigned int)v93 >= 0xfffffffe;
            char v100 = ((v94 ^ v93) & ~(v93 ^ 0x2)) < 0;
            *(int*)(v94 * 2 + v52 - 2) = v94;
            int v101 = v94;
            int v102 = v94 + 2;
            char v103 = v102 ? 0: 1;
            char v104 = v102 < 0;
            char v105 = __parity__((unsigned char)v102);
            char v106 = (((v101 ^ 0x2) ^ v102) >>> 4) & 0x1;
            char v107 = (unsigned int)v101 >= 0xfffffffe;
            char v108 = ((v102 ^ v101) & ~(v101 ^ 0x2)) < 0;
            *(int*)(v102 * 2 + v52 - 2) = v102;
            int v109 = v102;
            int v110 = v102 + 2;
            char v111 = v110 ? 0: 1;
            char v112 = v110 < 0;
            char v113 = __parity__((unsigned char)v110);
            char v114 = (((v109 ^ 0x2) ^ v110) >>> 4) & 0x1;
            char v115 = (unsigned int)v109 >= 0xfffffffe;
            char v116 = ((v110 ^ v109) & ~(v109 ^ 0x2)) < 0;
            *(int*)(v110 * 2 + v52 - 2) = v110;
            int v117 = v110;
            int v118 = v110 + 2;
            char v119 = v118 ? 0: 1;
            char v120 = v118 < 0;
            char v121 = __parity__((unsigned char)v118);
            char v122 = (((v117 ^ 0x2) ^ v118) >>> 4) & 0x1;
            char v123 = (unsigned int)v117 >= 0xfffffffe;
            char v124 = ((v118 ^ v117) & ~(v117 ^ 0x2)) < 0;
            *(int*)(v118 * 2 + v52 - 2) = v118;
            int v125 = v118;
            unsigned int v126 = (unsigned int)(v118 + 2);
            char v127 = v126 ? 0: 1;
            char v128 = v126 >= 0x80000000;
            char v129 = __parity__((unsigned char)v126);
            char v130 = (((v125 ^ 0x2) ^ v126) >>> 4) & 0x1;
            char v131 = (unsigned int)v125 >= 0xfffffffe;
            char v132 = ((v126 ^ v125) & ~(v125 ^ 0x2)) < 0;
            param2 = v126;
        }
    }
    unsigned int v133 = param1;
    while(1) {
        char v134 = v133 == 1;
        char v135 = (int)v133 < 1;
        char v136 = __parity__((unsigned char)v133 - 1);
        char v137 = v133 < 1;
        char v138 = (((v133 - 1) ^ v133) & (v133 ^ 0x1)) < 0;
        char v139 = (((v133 - 1) ^ (v133 ^ 0x1)) >>> 4) & 0x1;
        if(v135 != v138) {
            break;
        }
        else {
            int v140 = param4;
            int v141 = *(int*)(v133 * 2 + v140 - 2);
            *(int*)(v133 * 2 + v37 - 2) = *(int*)(v133 * 2 + v140 - 2);
            unsigned int v142 = v133;
            int v143 = (int)(v133 - 2);
            char v144 = v143 ? 0: 1;
            char v145 = v143 < 0;
            char v146 = __parity__((unsigned char)v143);
            char v147 = (((v142 ^ 0xfffffffe) ^ v143) >>> 4) & 0x1;
            char v148 = v142 >= 2;
            char v149 = ((v143 ^ v142) & ~(v142 ^ 0xfffffffe)) < 0;
            int v150 = *(int*)(v143 * 2 + v140 - 2);
            *(int*)(v143 * 2 + v37 - 2) = *(int*)(v143 * 2 + v140 - 2);
            int v151 = v143;
            int v152 = v143 - 2;
            char v153 = v152 ? 0: 1;
            char v154 = v152 < 0;
            char v155 = __parity__((unsigned char)v152);
            char v156 = (((v151 ^ 0xfffffffe) ^ v152) >>> 4) & 0x1;
            char v157 = (unsigned int)v151 >= 2;
            char v158 = ((v152 ^ v151) & ~(v151 ^ 0xfffffffe)) < 0;
            int v159 = *(int*)(v152 * 2 + v140 - 2);
            *(int*)(v152 * 2 + v37 - 2) = *(int*)(v152 * 2 + v140 - 2);
            int v160 = v152;
            int v161 = v152 - 2;
            char v162 = v161 ? 0: 1;
            char v163 = v161 < 0;
            char v164 = __parity__((unsigned char)v161);
            char v165 = (((v160 ^ 0xfffffffe) ^ v161) >>> 4) & 0x1;
            char v166 = (unsigned int)v160 >= 2;
            char v167 = ((v161 ^ v160) & ~(v160 ^ 0xfffffffe)) < 0;
            int v168 = *(int*)(v161 * 2 + v140 - 2);
            *(int*)(v161 * 2 + v37 - 2) = *(int*)(v161 * 2 + v140 - 2);
            int v169 = v161;
            int v170 = v161 - 2;
            char v171 = v170 ? 0: 1;
            char v172 = v170 < 0;
            char v173 = __parity__((unsigned char)v170);
            char v174 = (((v169 ^ 0xfffffffe) ^ v170) >>> 4) & 0x1;
            char v175 = (unsigned int)v169 >= 2;
            char v176 = ((v170 ^ v169) & ~(v169 ^ 0xfffffffe)) < 0;
            int v177 = *(int*)(v170 * 2 + v140 - 2);
            *(int*)(v170 * 2 + v37 - 2) = *(int*)(v170 * 2 + v140 - 2);
            int v178 = v170;
            int v179 = v170 - 2;
            char v180 = v179 ? 0: 1;
            char v181 = v179 < 0;
            char v182 = __parity__((unsigned char)v179);
            char v183 = (((v178 ^ 0xfffffffe) ^ v179) >>> 4) & 0x1;
            char v184 = (unsigned int)v178 >= 2;
            char v185 = ((v179 ^ v178) & ~(v178 ^ 0xfffffffe)) < 0;
            int v186 = *(int*)(v179 * 2 + v140 - 2);
            *(int*)(v179 * 2 + v37 - 2) = *(int*)(v179 * 2 + v140 - 2);
            int v187 = v179;
            int v188 = v179 - 2;
            char v189 = v188 ? 0: 1;
            char v190 = v188 < 0;
            char v191 = __parity__((unsigned char)v188);
            char v192 = (((v187 ^ 0xfffffffe) ^ v188) >>> 4) & 0x1;
            char v193 = (unsigned int)v187 >= 2;
            char v194 = ((v188 ^ v187) & ~(v187 ^ 0xfffffffe)) < 0;
            int v195 = *(int*)(v188 * 2 + v140 - 2);
            *(int*)(v188 * 2 + v37 - 2) = *(int*)(v188 * 2 + v140 - 2);
            int v196 = v188;
            int v197 = v188 - 2;
            char v198 = v197 ? 0: 1;
            char v199 = v197 < 0;
            char v200 = __parity__((unsigned char)v197);
            char v201 = (((v196 ^ 0xfffffffe) ^ v197) >>> 4) & 0x1;
            char v202 = (unsigned int)v196 >= 2;
            char v203 = ((v197 ^ v196) & ~(v196 ^ 0xfffffffe)) < 0;
            int v204 = *(int*)(v197 * 2 + v140 - 2);
            *(int*)(v197 * 2 + v37 - 2) = *(int*)(v197 * 2 + v140 - 2);
            int v205 = v197;
            int v206 = v197 - 2;
            char v207 = v206 ? 0: 1;
            char v208 = v206 < 0;
            char v209 = __parity__((unsigned char)v206);
            char v210 = (((v205 ^ 0xfffffffe) ^ v206) >>> 4) & 0x1;
            char v211 = (unsigned int)v205 >= 2;
            char v212 = ((v206 ^ v205) & ~(v205 ^ 0xfffffffe)) < 0;
            int v213 = *(int*)(v206 * 2 + v140 - 2);
            *(int*)(v206 * 2 + v37 - 2) = *(int*)(v206 * 2 + v140 - 2);
            int v214 = v206;
            int v215 = v206 - 2;
            char v216 = v215 ? 0: 1;
            char v217 = v215 < 0;
            char v218 = __parity__((unsigned char)v215);
            char v219 = (((v214 ^ 0xfffffffe) ^ v215) >>> 4) & 0x1;
            char v220 = (unsigned int)v214 >= 2;
            char v221 = ((v215 ^ v214) & ~(v214 ^ 0xfffffffe)) < 0;
            int v222 = *(int*)(v215 * 2 + v140 - 2);
            *(int*)(v215 * 2 + v37 - 2) = *(int*)(v215 * 2 + v140 - 2);
            int v223 = v215;
            v133 = (unsigned int)(v215 - 2);
            char v224 = v133 ? 0: 1;
            char v225 = v133 >= 0x80000000;
            char v226 = __parity__((unsigned char)v133);
            char v227 = (((v223 ^ 0xfffffffe) ^ v133) >>> 4) & 0x1;
            char v228 = (unsigned int)v223 >= 2;
            char v229 = ((v133 ^ v223) & ~(v223 ^ 0xfffffffe)) < 0;
        }
    }
    int v230 = &camlSource__1;
    int v231 = camlPrintf__printf_1393();
    int v232 = v231;
    int v233 = param0;
    unsigned int v234 = param1;
    int v235 = *(int*)(v234 * 2 + v233 - 2);
    int v236 = *(int*)v232;
    v236();
    int v237 = 1;
    int* ptr6 = &param0;
    char v238 = &param5 ? 0: 1;
    char v239 = (int)&param5 < 0;
    char v240 = __parity__((unsigned char)&ptr0 + 24);
    char v241 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x14) ^ (int)&param5) >>> 4) & 0x1);
    char v242 = (unsigned int)&param0 >= 0xffffffec;
    char v243 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&param5) & (int*)~(int)(int*)((int)&param0 ^ 0x14)) < 0;
    int v244 = param5;
    int* ptr7 = &v0;
    jump v244;
}

int* sub_804B757(int param0) {
    int v0;
    int v1;
    int* ptr0;
    *ptr0 = 2049;
    *(ptr0 + 1) = v0;
    *(ptr0 + 2) = *(int*)(param0 + 20);
    *(ptr0 + 3) = 0x1400;
    *(ptr0 + 4) = 3;
    *(ptr0 + 5) = *(int*)(param0 + 16);
    *(ptr0 + 6) = **(unsigned int*)(param0 + 12);
    *(unsigned int*)(ptr0 + 7) = ptr0 + 1;
    *(ptr0 + 8) = v1;
    return ptr0 + 4;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B78E(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B742();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B7E2(int param0) {
    int* ptr0;
    int v0;
    *ptr0 = 0x400;
    *(int*)(unsigned int)(ptr0 + 1) = param0;
    unsigned int v1 = (unsigned int)(ptr0 + 1);
    caml_modify(*(unsigned int**)(v0 + 8), (unsigned int)(ptr0 + 1));
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B816(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B7CD();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B8D0(int param0, int param1, int param2, int param3) {
    unsigned int v0;
    char v1;
    char v2;
    int v3;
    unsigned int v4 = caml_exception_pointer;
    caml_exception_pointer = &v4;
    int v5 = param0;
    int v6 = param0;
    int v7 = param1;
    int v8 = *(int*)(v7 + 12);
    int v9 = &unix_getservbyname;
    unsigned int v10 = (unsigned int)caml_c_call();
    unsigned int v11 = v10;
    int* ptr0 = (int*)(v10 + 8);
    char v12 = ptr0 ? 0: 1;
    char v13 = (int)ptr0 < 0;
    char v14 = __parity__((unsigned char)ptr0);
    char v15 = (int*)((int)(int*)((int)(int*)((v11 ^ 0x8) ^ (int)ptr0) >>> 4) & 0x1);
    char v16 = v11 >= 0xfffffff8;
    char v17 = (int)(int*)((int)(int*)((int)ptr0 ^ v11) & ~(v11 ^ 0x8)) < 0;
    int v18 = *ptr0;
    while(1) {
        unsigned int v19 = caml_young_ptr;
        unsigned int v20 = caml_young_ptr;
        v0 = v19 - 24;
        char v21 = v0 ? 0: 1;
        char v22 = v0 >= 0x80000000;
        char v23 = __parity__((unsigned char)v0);
        char v24 = (((v20 ^ 0x18) ^ v0) >>> 4) & 0x1;
        char v25 = v20 < 24;
        char v26 = (int)((v0 ^ v20) & (v20 ^ 0x18)) < 0;
        caml_young_ptr = v0;
        char v27 = caml_young_limit == v0;
        char v28 = (int)caml_young_limit > (int)v0;
        char v29 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
        char v30 = caml_young_limit > v0;
        char v31 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
        char v32 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
        if(!v30) {
            break;
        }
        else {
            int* ptr1 = caml_call_gc(v18, v3);
        }
    }
    int* ptr2 = (int*)(v0 + 4);
    *(ptr2 - 1) = 0x800;
    int v33 = param2;
    *ptr2 = param2;
    *(ptr2 + 1) = v18;
    unsigned int* ptr3 = (unsigned int*)(ptr2 + 3);
    *(int*)(ptr3 - 1) = 0x800;
    *ptr3 = ptr2;
    *(int*)(ptr3 + 1) = 1;
    caml_exception_pointer = v4;
    int* ptr4 = &param0;
    char v34 = &param3 ? 0: 1;
    char v35 = (int)&param3 < 0;
    char v36 = __parity__((unsigned char)&v1 + 16);
    char v37 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0xc) ^ (int)&param3) >>> 4) & 0x1);
    char v38 = (unsigned int)&param0 >= 0xfffffff4;
    char v39 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&param3) & (int*)~(int)(int*)((int)&param0 ^ 0xc)) < 0;
    int v40 = param3;
    int* ptr5 = &v2;
    jump v40;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_804B960() {
}

int* sub_804BA07(int param0) {
    int v0;
    int* ptr0;
    *ptr0 = 0x800;
    *(ptr0 + 1) = param0;
    *(ptr0 + 2) = **(unsigned int*)(v0 + 8);
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804BA1C(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804B9F2();
}

int sub_804BA47(int param0) {
    int* ptr0;
    int v0;
    int v1;
    *ptr0 = 6391;
    *(ptr0 + 1) = &caml_tuplify2;
    *(ptr0 + 2) = -3;
    *(ptr0 + 3) = &camlUnix__fun_2842;
    *(ptr0 + 4) = *(int*)(param0 + 12);
    *(ptr0 + 5) = v0;
    *(ptr0 + 6) = v1;
    return camlList__map_1062();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804BA79(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804BA32();
}

int sub_804C360(int param0, int param1, int param2, int param3) {
    char v0;
    int* ptr0;
    char v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    int v3 = *ptr0;
    int* ptr1 = ptr0;
    int v4 = v3((int)v2);
    caml_exception_pointer = v2;
    int* ptr2 = &param0;
    char v5 = &param3 ? 0: 1;
    char v6 = (int)&param3 < 0;
    char v7 = __parity__((unsigned char)&v0 + 16);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0xc) ^ (int)&param3) >>> 4) & 0x1);
    char v9 = (unsigned int)&param0 >= 0xfffffff4;
    char v10 = (int)(int*)((int)(int*)((int)&param3 ^ (int)&param0) & (int*)~(int)(int*)((int)&param0 ^ 0xc)) < 0;
    int v11 = param3;
    int* ptr3 = &v1;
    jump v11;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C520(int param0) {
    char v0;
    int v1;
    char v2;
    unsigned int v3 = caml_exception_pointer;
    caml_exception_pointer = &v3;
    int v4 = v1;
    int v5 = &unix_set_close_on_exec;
    int v6 = caml_c_call();
    int* ptr0 = &v4;
    char v7 = &v0 == 4;
    char v8 = (int)&v3 < 0;
    char v9 = __parity__((unsigned char)&v0 - 4);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0x4) ^ (int)&v3) >>> 4) & 0x1);
    char v11 = (unsigned int)&v4 >= 0xfffffffc;
    char v12 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v4) & (int*)~(int)(int*)((int)&v4 ^ 0x4)) < 0;
    int v13 = 3;
    caml_exception_pointer = v3;
    int* ptr1 = &v0;
    char v14 = &param0 ? 0: 1;
    char v15 = (int)&param0 < 0;
    char v16 = __parity__((unsigned char)&v0 + 4);
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v18 = (unsigned int)&v0 >= 0xfffffffc;
    char v19 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&v0) & (int*)~(int)(int*)((int)&v0 ^ 0x4)) < 0;
    int v20 = param0;
    int* ptr2 = &v2;
    jump v20;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804CB80(int param0, int param1, int param2, void* param3, int param4, void* param5) {
    unsigned int v0;
    unsigned int v1;
    void* ptr0;
    int v2;
    int v3;
    unsigned int v4 = caml_exception_pointer;
    caml_exception_pointer = &v4;
    void* ptr1 = param3;
    void* ptr2 = param3;
    int v5 = &unix_gethostbyname;
    int v6 = caml_c_call();
    int* ptr3 = &ptr2;
    char v7 = &ptr0 == 4;
    char v8 = (int)&v4 < 0;
    char v9 = __parity__((unsigned char)&ptr0 - 4);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr2 ^ 0x4) ^ (int)&v4) >>> 4) & 0x1);
    char v11 = (unsigned int)&ptr2 >= 0xfffffffc;
    char v12 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&ptr2) & (int*)~(int)(int*)((int)&ptr2 ^ 0x4)) < 0;
    param1 = v6;
    int v13 = *(int*)(v6 + 12);
    int v14 = camlArray__to_list_1121();
    int v15 = v14;
    while(1) {
        unsigned int v16 = caml_young_ptr;
        unsigned int v17 = caml_young_ptr;
        v1 = v16 - 16;
        char v18 = v1 ? 0: 1;
        char v19 = v1 >= 0x80000000;
        char v20 = __parity__((unsigned char)v1);
        char v21 = (((v17 ^ 0x10) ^ v1) >>> 4) & 0x1;
        char v22 = v17 < 16;
        char v23 = (int)((v1 ^ v17) & (v17 ^ 0x10)) < 0;
        caml_young_ptr = v1;
        char v24 = caml_young_limit == v1;
        char v25 = (int)caml_young_limit > (int)v1;
        char v26 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
        char v27 = caml_young_limit > v1;
        char v28 = (int)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0;
        char v29 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4) & 0x1;
        if(!v27) {
            break;
        }
        else {
            int v30 = caml_call_gc(v2, v3);
        }
    }
    int* ptr4 = (int*)(v1 + 4);
    *(ptr4 - 1) = 3319;
    *ptr4 = &camlUnix__fun_2833;
    *(ptr4 + 1) = 3;
    int v31 = param1;
    *(ptr4 + 2) = param1;
    int v32 = camlList__map_1062();
    int v33 = v32;
    caml_exception_pointer = v4;
    int* ptr5 = &ptr0;
    char v34 = &param0 ? 0: 1;
    char v35 = (int)&param0 < 0;
    char v36 = __parity__((unsigned char)&ptr0 + 4);
    char v37 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v38 = (unsigned int)&ptr0 >= 0xfffffffc;
    char v39 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    while(1) {
        unsigned int v40 = caml_young_ptr;
        unsigned int v41 = caml_young_ptr;
        v0 = v40 - 24;
        char v42 = v0 ? 0: 1;
        char v43 = v0 >= 0x80000000;
        char v44 = __parity__((unsigned char)v0);
        char v45 = (((v41 ^ 0x18) ^ v0) >>> 4) & 0x1;
        char v46 = v41 < 24;
        char v47 = (int)((v0 ^ v41) & (v41 ^ 0x18)) < 0;
        caml_young_ptr = v0;
        char v48 = caml_young_limit == v0;
        char v49 = (int)caml_young_limit > (int)v0;
        char v50 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
        char v51 = caml_young_limit > v0;
        char v52 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
        char v53 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
        if(!v51) {
            break;
        }
        else {
            int v54 = caml_call_gc(v33, v3);
        }
    }
    int* ptr6 = (int*)(v0 + 4);
    *(ptr6 - 1) = 5367;
    *ptr6 = &caml_tuplify2;
    *(ptr6 + 1) = -3;
    *(ptr6 + 2) = &camlUnix__fun_2836;
    *(ptr6 + 3) = param2;
    *(ptr6 + 4) = v33;
    camlList__map_1062();
    /*BAD_CALL!*/ camlList__flatten_1058();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804CC10(int param0, int param1, int param2, int param3, int param4, void* param5) {
    unsigned int v0;
    unsigned int v1;
    void* ptr0;
    int v2;
    int v3;
    unsigned int v4 = caml_exception_pointer;
    caml_exception_pointer = &v4;
    int v5 = v2;
    int v6 = &unix_inet_addr_of_string;
    int v7 = caml_c_call();
    int* ptr1 = &v5;
    char v8 = &ptr0 == 4;
    char v9 = (int)&v4 < 0;
    char v10 = __parity__((unsigned char)&ptr0 - 4);
    char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x4) ^ (int)&v4) >>> 4) & 0x1);
    char v12 = (unsigned int)&v5 >= 0xfffffffc;
    char v13 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&v5) & (int*)~(int)(int*)((int)&v5 ^ 0x4)) < 0;
    int v14 = v7;
    while(1) {
        unsigned int v15 = caml_young_ptr;
        unsigned int v16 = caml_young_ptr;
        v1 = v15 - 24;
        char v17 = v1 ? 0: 1;
        char v18 = v1 >= 0x80000000;
        char v19 = __parity__((unsigned char)v1);
        char v20 = (((v16 ^ 0x18) ^ v1) >>> 4) & 0x1;
        char v21 = v16 < 24;
        char v22 = (int)((v1 ^ v16) & (v16 ^ 0x18)) < 0;
        caml_young_ptr = v1;
        char v23 = caml_young_limit == v1;
        char v24 = (int)caml_young_limit > (int)v1;
        char v25 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
        char v26 = caml_young_limit > v1;
        char v27 = (int)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0;
        char v28 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4) & 0x1;
        if(!v26) {
            break;
        }
        else {
            int v29 = caml_call_gc(v14, v3);
        }
    }
    int* ptr2 = (int*)(v1 + 4);
    *(ptr2 - 1) = 0x800;
    *ptr2 = v14;
    int v30 = param3;
    *(ptr2 + 1) = param3;
    unsigned int* ptr3 = (unsigned int*)(ptr2 + 3);
    *(int*)(ptr3 - 1) = 0x800;
    *ptr3 = ptr2;
    *(int*)(ptr3 + 1) = 1;
    caml_exception_pointer = v4;
    int* ptr4 = &ptr0;
    char v31 = &param0 ? 0: 1;
    char v32 = (int)&param0 < 0;
    char v33 = __parity__((unsigned char)&ptr0 + 4);
    char v34 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v35 = (unsigned int)&ptr0 >= 0xfffffffc;
    char v36 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    while(1) {
        unsigned int v37 = caml_young_ptr;
        unsigned int v38 = caml_young_ptr;
        v0 = v37 - 24;
        char v39 = v0 ? 0: 1;
        char v40 = v0 >= 0x80000000;
        char v41 = __parity__((unsigned char)v0);
        char v42 = (((v38 ^ 0x18) ^ v0) >>> 4) & 0x1;
        char v43 = v38 < 24;
        char v44 = (int)((v0 ^ v38) & (v38 ^ 0x18)) < 0;
        caml_young_ptr = v0;
        char v45 = caml_young_limit == v0;
        char v46 = (int)caml_young_limit > (int)v0;
        char v47 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
        char v48 = caml_young_limit > v0;
        char v49 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
        char v50 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
        if(!v48) {
            break;
        }
        else {
            int v51 = caml_call_gc((int)ptr3, v3);
        }
    }
    int* ptr5 = (int*)(v0 + 4);
    *(ptr5 - 1) = 5367;
    *ptr5 = &caml_tuplify2;
    *(ptr5 + 1) = -3;
    *(ptr5 + 2) = &camlUnix__fun_2836;
    *(ptr5 + 3) = param2;
    *(unsigned int*)(ptr5 + 4) = ptr3;
    camlList__map_1062();
    /*BAD_CALL!*/ camlList__flatten_1058();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804CD60(int param0, int param1, int param2, int param3) {
    char v0;
    int v1;
    char v2;
    int v3;
    unsigned int v4 = caml_exception_pointer;
    caml_exception_pointer = &v4;
    int v5 = v1;
    int v6 = v3;
    int v7 = &unix_getaddrinfo;
    int v8 = caml_c_call();
    int* ptr0 = &v6;
    char v9 = &v0 == 4;
    char v10 = (int)&v4 < 0;
    char v11 = __parity__((unsigned char)&v0 - 4);
    char v12 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v6 ^ 0xc) ^ (int)&v4) >>> 4) & 0x1);
    char v13 = (unsigned int)&v6 >= 0xfffffff4;
    char v14 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&v6) & (int*)~(int)(int*)((int)&v6 ^ 0xc)) < 0;
    int v15 = 1;
    int v16 = camlList__rev_append_1051();
    caml_exception_pointer = v4;
    int* ptr1 = &param0;
    char v17 = &param3 ? 0: 1;
    char v18 = (int)&param3 < 0;
    char v19 = __parity__((unsigned char)&v0 + 16);
    char v20 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0xc) ^ (int)&param3) >>> 4) & 0x1);
    char v21 = (unsigned int)&param0 >= 0xfffffff4;
    char v22 = (int)(int*)((int)(int*)((int)&param3 ^ (int)&param0) & (int*)~(int)(int*)((int)&param0 ^ 0xc)) < 0;
    int v23 = param3;
    int* ptr2 = &v2;
    jump v23;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804CE50(int param0, int param1, int param2, int param3) {
    unsigned int v0;
    unsigned int v1;
    void* ptr0;
    char v2;
    int v3;
    int v4;
    unsigned int v5 = caml_exception_pointer;
    caml_exception_pointer = &v5;
    int v6 = 3;
    int v7 = camlList__mem_1161();
    char v8 = v7 == 1;
    char v9 = v7 < 1;
    char v10 = __parity__((unsigned char)v7 - 1);
    char v11 = (unsigned int)v7 < 1;
    char v12 = (((v7 - 1) ^ v7) & (v7 ^ 0x1)) < 0;
    char v13 = (((v7 - 1) ^ (v7 ^ 0x1)) >>> 4) & 0x1;
    if(!v8) {
        while(1) {
            unsigned int v14 = caml_young_ptr;
            unsigned int v15 = caml_young_ptr;
            v1 = v14 - 8;
            char v16 = v1 ? 0: 1;
            char v17 = v1 >= 0x80000000;
            char v18 = __parity__((unsigned char)v1);
            char v19 = (((v15 ^ 0x8) ^ v1) >>> 4) & 0x1;
            char v20 = v15 < 8;
            char v21 = (int)((v1 ^ v15) & (v15 ^ 0x8)) < 0;
            caml_young_ptr = v1;
            char v22 = caml_young_limit == v1;
            char v23 = (int)caml_young_limit > (int)v1;
            char v24 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
            char v25 = caml_young_limit > v1;
            char v26 = (int)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0;
            char v27 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4) & 0x1;
            if(!v25) {
                break;
            }
            else {
                int v28 = caml_call_gc(v3, v4);
            }
        }
        int* ptr1 = (int*)(v1 + 4);
        *(ptr1 - 1) = 0x400;
        *ptr1 = &caml_exn_Not_found;
        caml_raise_exn();
    }
    int v29 = param0;
    int v30 = param0;
    int v31 = &unix_gethostbyaddr;
    int* ptr2 = (int*)caml_c_call();
    int* ptr3 = &v30;
    char v32 = &ptr0 == 4;
    char v33 = (int)&v5 < 0;
    char v34 = __parity__((unsigned char)&ptr0 - 4);
    char v35 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v30 ^ 0x4) ^ (int)&v5) >>> 4) & 0x1);
    char v36 = (unsigned int)&v30 >= 0xfffffffc;
    char v37 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v30) & (int*)~(int)(int*)((int)&v30 ^ 0x4)) < 0;
    int v38 = *ptr2;
    param0 = *ptr2;
    caml_exception_pointer = v5;
    int* ptr4 = &ptr0;
    char v39 = &param0 ? 0: 1;
    char v40 = (int)&param0 < 0;
    char v41 = __parity__((unsigned char)&ptr0 + 4);
    char v42 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v43 = (unsigned int)&ptr0 >= 0xfffffffc;
    char v44 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    int v45 = sub_804CF00(param0, param1, param2, param3);
    int v46 = &caml_exn_Not_found;
    unsigned int v47 = *(unsigned int*)v45;
    char v48 = v47 == &caml_exn_Not_found;
    char v49 = (int)v47 < &caml_exn_Not_found;
    char v50 = __parity__((unsigned char)v47 - 24);
    char v51 = v47 < &caml_exn_Not_found;
    char v52 = (((v47 - &caml_exn_Not_found) ^ v47) & (v47 ^ &caml_exn_Not_found)) < 0;
    char v53 = (((v47 - &caml_exn_Not_found) ^ (v47 ^ &caml_exn_Not_found)) >>> 4) & 0x1;
    if(v48) {
        int v54 = param1;
        int v55 = camlPervasives__string_of_int_1130();
        v3 = v55;
    }
    else {
        caml_raise_exn();
    }
    while(1) {
        unsigned int v56 = caml_young_ptr;
        unsigned int v57 = caml_young_ptr;
        v0 = v56 - 12;
        char v58 = v0 ? 0: 1;
        char v59 = v0 >= 0x80000000;
        char v60 = __parity__((unsigned char)v0);
        char v61 = (((v57 ^ 0xc) ^ v0) >>> 4) & 0x1;
        char v62 = v57 < 12;
        char v63 = (int)((v0 ^ v57) & (v57 ^ 0xc)) < 0;
        caml_young_ptr = v0;
        char v64 = caml_young_limit == v0;
        char v65 = (int)caml_young_limit > (int)v0;
        char v66 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
        char v67 = caml_young_limit > v0;
        char v68 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
        char v69 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
        if(!v67) {
            break;
        }
        else {
            int v70 = caml_call_gc(v3, v4);
        }
    }
    int* ptr5 = (int*)(v0 + 4);
    *(ptr5 - 1) = 0x800;
    int v71 = param0;
    *ptr5 = param0;
    *(ptr5 + 1) = v3;
    int* ptr6 = &param0;
    char v72 = &param3 ? 0: 1;
    char v73 = (int)&param3 < 0;
    char v74 = __parity__((unsigned char)&ptr0 + 16);
    char v75 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0xc) ^ (int)&param3) >>> 4) & 0x1);
    char v76 = (unsigned int)&param0 >= 0xfffffff4;
    char v77 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&param3) & (int*)~(int)(int*)((int)&param0 ^ 0xc)) < 0;
    int v78 = param3;
    int* ptr7 = &v2;
    jump v78;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804CF00(int param0, int param1, int param2, int param3) {
    unsigned int v0;
    unsigned int v1;
    void* ptr0;
    char v2;
    int v3;
    int v4;
    unsigned int v5 = caml_exception_pointer;
    caml_exception_pointer = &v5;
    int v6 = 7;
    int v7 = param2;
    int v8 = camlList__mem_1161();
    char v9 = v8 == 1;
    char v10 = v8 < 1;
    char v11 = __parity__((unsigned char)v8 - 1);
    char v12 = (unsigned int)v8 < 1;
    char v13 = (((v8 - 1) ^ v8) & (v8 ^ 0x1)) < 0;
    char v14 = (((v8 - 1) ^ (v8 ^ 0x1)) >>> 4) & 0x1;
    if(!v9) {
        while(1) {
            unsigned int v15 = caml_young_ptr;
            unsigned int v16 = caml_young_ptr;
            v1 = v15 - 8;
            char v17 = v1 ? 0: 1;
            char v18 = v1 >= 0x80000000;
            char v19 = __parity__((unsigned char)v1);
            char v20 = (((v16 ^ 0x8) ^ v1) >>> 4) & 0x1;
            char v21 = v16 < 8;
            char v22 = (int)((v1 ^ v16) & (v16 ^ 0x8)) < 0;
            caml_young_ptr = v1;
            char v23 = caml_young_limit == v1;
            char v24 = (int)caml_young_limit > (int)v1;
            char v25 = __parity__((unsigned char)v1 - (unsigned char)caml_young_limit);
            char v26 = caml_young_limit > v1;
            char v27 = (int)(((v1 - caml_young_limit) ^ v1) & (caml_young_limit ^ v1)) < 0;
            char v28 = (((v1 - caml_young_limit) ^ (caml_young_limit ^ v1)) >>> 4) & 0x1;
            if(!v26) {
                break;
            }
            else {
                int* ptr1 = caml_call_gc(v3, v4);
            }
        }
        int* ptr2 = (int*)(v1 + 4);
        *(ptr2 - 1) = 0x400;
        *ptr2 = &caml_exn_Not_found;
        caml_raise_exn();
    }
    int v29 = 9;
    int v30 = param2;
    int v31 = camlList__mem_1161();
    char v32 = v31 == 1;
    char v33 = v31 < 1;
    char v34 = __parity__((unsigned char)v31 - 1);
    char v35 = (unsigned int)v31 < 1;
    char v36 = (((v31 - 1) ^ v31) & (v31 ^ 0x1)) < 0;
    char v37 = (((v31 - 1) ^ (v31 ^ 0x1)) >>> 4) & 0x1;
    int v38 = v32 ? &camlUnix__193: &camlUnix__194;
    int v39 = v32 ? &camlUnix__193: &camlUnix__194;
    int v40 = param1;
    int v41 = param1;
    int v42 = &unix_getservbyport;
    int* ptr3 = (int*)caml_c_call();
    int* ptr4 = &v41;
    char v43 = &ptr0 == 4;
    char v44 = (int)&v5 < 0;
    char v45 = __parity__((unsigned char)&ptr0 - 4);
    char v46 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v41 ^ 0x8) ^ (int)&v5) >>> 4) & 0x1);
    char v47 = (unsigned int)&v41 >= 0xfffffff8;
    char v48 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v41) & (int*)~(int)(int*)((int)&v41 ^ 0x8)) < 0;
    v3 = *ptr3;
    caml_exception_pointer = v5;
    int* ptr5 = &ptr0;
    char v49 = &param0 ? 0: 1;
    char v50 = (int)&param0 < 0;
    char v51 = __parity__((unsigned char)&ptr0 + 4);
    char v52 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v53 = (unsigned int)&ptr0 >= 0xfffffffc;
    char v54 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    while(1) {
        unsigned int v55 = caml_young_ptr;
        unsigned int v56 = caml_young_ptr;
        v0 = v55 - 12;
        char v57 = v0 ? 0: 1;
        char v58 = v0 >= 0x80000000;
        char v59 = __parity__((unsigned char)v0);
        char v60 = (((v56 ^ 0xc) ^ v0) >>> 4) & 0x1;
        char v61 = v56 < 12;
        char v62 = (int)((v0 ^ v56) & (v56 ^ 0xc)) < 0;
        caml_young_ptr = v0;
        char v63 = caml_young_limit == v0;
        char v64 = (int)caml_young_limit > (int)v0;
        char v65 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
        char v66 = caml_young_limit > v0;
        char v67 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
        char v68 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
        if(!v66) {
            break;
        }
        else {
            int* ptr6 = caml_call_gc(v3, v4);
        }
    }
    int* ptr7 = (int*)(v0 + 4);
    *(ptr7 - 1) = 0x800;
    int v69 = param0;
    *ptr7 = param0;
    *(ptr7 + 1) = v3;
    int* ptr8 = &param0;
    char v70 = &param3 ? 0: 1;
    char v71 = (int)&param3 < 0;
    char v72 = __parity__((unsigned char)&ptr0 + 16);
    char v73 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0xc) ^ (int)&param3) >>> 4) & 0x1);
    char v74 = (unsigned int)&param0 >= 0xfffffff4;
    char v75 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&param3) & (int*)~(int)(int*)((int)&param0 ^ 0xc)) < 0;
    int v76 = param3;
    int* ptr9 = &v2;
    jump v76;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D060(int param0, int param1, int param2) {
    char v0;
    int v1;
    int v2;
    char v3;
    unsigned int v4 = caml_exception_pointer;
    caml_exception_pointer = &v4;
    int v5 = v2;
    int v6 = v1;
    int v7 = &unix_getnameinfo;
    int v8 = caml_c_call();
    int* ptr0 = &v6;
    char v9 = &v0 == 4;
    char v10 = (int)&v4 < 0;
    char v11 = __parity__((unsigned char)&v0 - 4);
    char v12 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v6 ^ 0x8) ^ (int)&v4) >>> 4) & 0x1);
    char v13 = (unsigned int)&v6 >= 0xfffffff8;
    char v14 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&v6) & (int*)~(int)(int*)((int)&v6 ^ 0x8)) < 0;
    caml_exception_pointer = v4;
    int* ptr1 = &param0;
    char v15 = &param2 ? 0: 1;
    char v16 = (int)&param2 < 0;
    char v17 = __parity__((unsigned char)&v0 + 12);
    char v18 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x8) ^ (int)&param2) >>> 4) & 0x1);
    char v19 = (unsigned int)&param0 >= 0xfffffff8;
    char v20 = (int)(int*)((int)(int*)((int)&param2 ^ (int)&param0) & (int*)~(int)(int*)((int)&param0 ^ 0x8)) < 0;
    int v21 = param2;
    int* ptr2 = &v3;
    jump v21;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D0F0(int param0, int param1) {
    unsigned int v0;
    char v1;
    char v2;
    int v3;
    int v4;
    unsigned int v5 = caml_exception_pointer;
    caml_exception_pointer = &v5;
    while(1) {
        unsigned int v6 = caml_young_ptr;
        unsigned int v7 = caml_young_ptr;
        v0 = v6 - 16;
        char v8 = v0 ? 0: 1;
        char v9 = v0 >= 0x80000000;
        char v10 = __parity__((unsigned char)v0);
        char v11 = (((v7 ^ 0x10) ^ v0) >>> 4) & 0x1;
        char v12 = v7 < 16;
        char v13 = (int)((v0 ^ v7) & (v7 ^ 0x10)) < 0;
        caml_young_ptr = v0;
        char v14 = caml_young_limit == v0;
        char v15 = (int)caml_young_limit > (int)v0;
        char v16 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
        char v17 = caml_young_limit > v0;
        char v18 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
        char v19 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
        if(!v17) {
            break;
        }
        else {
            int* ptr0 = caml_call_gc(v3, v4);
        }
    }
    int* ptr1 = (int*)(v0 + 4);
    *(ptr1 - 1) = 0xc00;
    *ptr1 = "/bin/sh";
    *(ptr1 + 1) = &camlUnix__191;
    int v20 = param0;
    *(ptr1 + 2) = param0;
    int* ptr2 = ptr1;
    int v21 = "/bin/sh";
    int v22 = &unix_execv;
    int v23 = caml_c_call();
    int* ptr3 = &v21;
    char v24 = &v1 == 4;
    char v25 = (int)&v5 < 0;
    char v26 = __parity__((unsigned char)&v1 - 4);
    char v27 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v21 ^ 0x8) ^ (int)&v5) >>> 4) & 0x1);
    char v28 = (unsigned int)&v21 >= 0xfffffff8;
    char v29 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v21) & (int*)~(int)(int*)((int)&v21 ^ 0x8)) < 0;
    caml_exception_pointer = v5;
    int* ptr4 = &param0;
    char v30 = &param1 ? 0: 1;
    char v31 = (int)&param1 < 0;
    char v32 = __parity__((unsigned char)&v1 + 8);
    char v33 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x4) ^ (int)&param1) >>> 4) & 0x1);
    char v34 = (unsigned int)&param0 >= 0xfffffffc;
    char v35 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&param1) & (int*)~(int)(int*)((int)&param0 ^ 0x4)) < 0;
    int v36 = param1;
    int* ptr5 = &v2;
    jump v36;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D1E0(int param0) {
    char v0;
    int v1;
    char v2;
    unsigned int v3 = caml_exception_pointer;
    caml_exception_pointer = &v3;
    int v4 = v1;
    int v5 = &unix_close;
    int v6 = caml_c_call();
    int* ptr0 = &v4;
    char v7 = &v0 == 4;
    char v8 = (int)&v3 < 0;
    char v9 = __parity__((unsigned char)&v0 - 4);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0x4) ^ (int)&v3) >>> 4) & 0x1);
    char v11 = (unsigned int)&v4 >= 0xfffffffc;
    char v12 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v4) & (int*)~(int)(int*)((int)&v4 ^ 0x4)) < 0;
    caml_exception_pointer = v3;
    int* ptr1 = &v0;
    char v13 = &param0 ? 0: 1;
    char v14 = (int)&param0 < 0;
    char v15 = __parity__((unsigned char)&v0 + 4);
    char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v17 = (unsigned int)&v0 >= 0xfffffffc;
    char v18 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&v0) & (int*)~(int)(int*)((int)&v0 ^ 0x4)) < 0;
    int v19 = param0;
    int* ptr2 = &v2;
    jump v19;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D330(int param0, int param1, int param2, int param3, int param4, int param5) {
    char v0;
    char v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    int v3 = param0;
    int v4 = param1;
    int v5 = param2;
    int v6 = camlUnix__perform_redirections_1900(v5);
    int v7 = param3;
    int v8 = param3;
    int v9 = param4;
    int v10 = param4;
    int v11 = &unix_execvp;
    int v12 = caml_c_call();
    int* ptr0 = &v10;
    char v13 = &v0 == 4;
    char v14 = (int)&v2 < 0;
    char v15 = __parity__((unsigned char)&v0 - 4);
    char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v10 ^ 0x8) ^ (int)&v2) >>> 4) & 0x1);
    char v17 = (unsigned int)&v10 >= 0xfffffff8;
    char v18 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v10) & (int*)~(int)(int*)((int)&v10 ^ 0x8)) < 0;
    caml_exception_pointer = v2;
    int* ptr1 = &param0;
    char v19 = &param5 ? 0: 1;
    char v20 = (int)&param5 < 0;
    char v21 = __parity__((unsigned char)&v0 + 24);
    char v22 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x14) ^ (int)&param5) >>> 4) & 0x1);
    char v23 = (unsigned int)&param0 >= 0xffffffec;
    char v24 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&param5) & (int*)~(int)(int*)((int)&param0 ^ 0x14)) < 0;
    int v25 = param5;
    int* ptr2 = &v1;
    jump v25;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D3E0(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    char v0;
    char v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    int v3 = param0;
    int v4 = param1;
    int v5 = param2;
    int v6 = camlUnix__perform_redirections_1900(v5);
    int v7 = param3;
    int v8 = param3;
    int v9 = param4;
    int v10 = param4;
    int v11 = param5;
    int v12 = param5;
    int v13 = &unix_execvpe;
    int v14 = caml_c_call();
    int* ptr0 = &v12;
    char v15 = &v0 == 4;
    char v16 = (int)&v2 < 0;
    char v17 = __parity__((unsigned char)&v0 - 4);
    char v18 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v12 ^ 0xc) ^ (int)&v2) >>> 4) & 0x1);
    char v19 = (unsigned int)&v12 >= 0xfffffff4;
    char v20 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v12) & (int*)~(int)(int*)((int)&v12 ^ 0xc)) < 0;
    caml_exception_pointer = v2;
    int* ptr1 = &param0;
    char v21 = &param6 ? 0: 1;
    char v22 = (int)&param6 < 0;
    char v23 = __parity__((unsigned char)&v0 + 28);
    char v24 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x18) ^ (int)&param6) >>> 4) & 0x1);
    char v25 = (unsigned int)&param0 >= 0xffffffe8;
    char v26 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&param6) & (int*)~(int)(int*)((int)&param0 ^ 0x18)) < 0;
    int v27 = param6;
    int* ptr2 = &v1;
    jump v27;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D510(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    unsigned int v0;
    char v1;
    int v2;
    int v3;
    char v4;
    unsigned int v5 = caml_exception_pointer;
    caml_exception_pointer = &v5;
    while(1) {
        unsigned int v6 = caml_young_ptr;
        unsigned int v7 = caml_young_ptr;
        v0 = v6 - 16;
        char v8 = v0 ? 0: 1;
        char v9 = v0 >= 0x80000000;
        char v10 = __parity__((unsigned char)v0);
        char v11 = (((v7 ^ 0x10) ^ v0) >>> 4) & 0x1;
        char v12 = v7 < 16;
        char v13 = (int)((v0 ^ v7) & (v7 ^ 0x10)) < 0;
        caml_young_ptr = v0;
        char v14 = caml_young_limit == v0;
        char v15 = (int)caml_young_limit > (int)v0;
        char v16 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
        char v17 = caml_young_limit > v0;
        char v18 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
        char v19 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
        if(!v17) {
            break;
        }
        else {
            int* ptr0 = caml_call_gc(v2, v3);
        }
    }
    int* ptr1 = (int*)(v0 + 4);
    *(ptr1 - 1) = 0xc00;
    *ptr1 = "/bin/sh";
    *(ptr1 + 1) = &camlUnix__187;
    int v20 = param1;
    *(ptr1 + 2) = param1;
    int* ptr2 = ptr1;
    int v21 = "/bin/sh";
    int v22 = &unix_execv;
    int v23 = caml_c_call();
    int* ptr3 = &v21;
    char v24 = &v1 == 4;
    char v25 = (int)&v5 < 0;
    char v26 = __parity__((unsigned char)&v1 - 4);
    char v27 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v21 ^ 0x8) ^ (int)&v5) >>> 4) & 0x1);
    char v28 = (unsigned int)&v21 >= 0xfffffff8;
    char v29 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v21) & (int*)~(int)(int*)((int)&v21 ^ 0x8)) < 0;
    caml_exception_pointer = v5;
    int* ptr4 = &param0;
    char v30 = &param6 ? 0: 1;
    char v31 = (int)&param6 < 0;
    char v32 = __parity__((unsigned char)&v1 + 28);
    char v33 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x18) ^ (int)&param6) >>> 4) & 0x1);
    char v34 = (unsigned int)&param0 >= 0xffffffe8;
    char v35 = (int)(int*)((int)(int*)((int)&param6 ^ (int)&param0) & (int*)~(int)(int*)((int)&param0 ^ 0x18)) < 0;
    int v36 = param6;
    int* ptr5 = &v4;
    jump v36;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D900(int param0, int param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8) {
    unsigned int v0;
    char v1;
    int v2;
    char v3;
    int v4;
    unsigned int v5 = caml_exception_pointer;
    caml_exception_pointer = &v5;
    while(1) {
        unsigned int v6 = caml_young_ptr;
        unsigned int v7 = caml_young_ptr;
        v0 = v6 - 16;
        char v8 = v0 ? 0: 1;
        char v9 = v0 >= 0x80000000;
        char v10 = __parity__((unsigned char)v0);
        char v11 = (((v7 ^ 0x10) ^ v0) >>> 4) & 0x1;
        char v12 = v7 < 16;
        char v13 = (int)((v0 ^ v7) & (v7 ^ 0x10)) < 0;
        caml_young_ptr = v0;
        char v14 = caml_young_limit == v0;
        char v15 = (int)caml_young_limit > (int)v0;
        char v16 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
        char v17 = caml_young_limit > v0;
        char v18 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
        char v19 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
        if(!v17) {
            break;
        }
        else {
            int* ptr0 = caml_call_gc(v2, v4);
        }
    }
    int* ptr1 = (int*)(v0 + 4);
    *(ptr1 - 1) = 0xc00;
    *ptr1 = "/bin/sh";
    *(ptr1 + 1) = &camlUnix__183;
    int v20 = param4;
    *(ptr1 + 2) = param4;
    int v21 = param5;
    int v22 = param5;
    int* ptr2 = ptr1;
    int v23 = "/bin/sh";
    int v24 = &unix_execve;
    int v25 = caml_c_call();
    int* ptr3 = &v23;
    char v26 = &v1 == 4;
    char v27 = (int)&v5 < 0;
    char v28 = __parity__((unsigned char)&v1 - 4);
    char v29 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v23 ^ 0xc) ^ (int)&v5) >>> 4) & 0x1);
    char v30 = (unsigned int)&v23 >= 0xfffffff4;
    char v31 = (int)(int*)((int)(int*)((int)&v5 ^ (int)&v23) & (int*)~(int)(int*)((int)&v23 ^ 0xc)) < 0;
    caml_exception_pointer = v5;
    int* ptr4 = &param0;
    char v32 = &param8 ? 0: 1;
    char v33 = (int)&param8 < 0;
    char v34 = __parity__((unsigned char)&v1 + 36);
    char v35 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x20) ^ (int)&param8) >>> 4) & 0x1);
    char v36 = (unsigned int)&param0 >= 0xffffffe0;
    char v37 = (int)(int*)((int)(int*)((int)&param8 ^ (int)&param0) & (int*)~(int)(int*)((int)&param0 ^ 0x20)) < 0;
    int v38 = param8;
    int* ptr5 = &v3;
    jump v38;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DBA0(int param0, int param1, int param2, int param3) {
    char v0;
    char v1;
    int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    unsigned int v3 = gvar_8072F88;
    int v4 = camlHashtbl__find_1093();
    param0 = v4;
    unsigned int v5 = gvar_8072F88;
    int v6 = param2;
    int v7 = camlHashtbl__remove_1080(v2);
    caml_exception_pointer = v2;
    int* ptr0 = &v0;
    char v8 = &param0 ? 0: 1;
    char v9 = (int)&param0 < 0;
    char v10 = __parity__((unsigned char)&v0 + 4);
    char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v12 = (unsigned int)&v0 >= 0xfffffffc;
    char v13 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&v0) & (int*)~(int)(int*)((int)&v0 ^ 0x4)) < 0;
    int v14 = param0;
    int* ptr1 = &param0;
    char v15 = &param3 ? 0: 1;
    char v16 = (int)&param3 < 0;
    char v17 = __parity__((unsigned char)&v0 + 16);
    char v18 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0xc) ^ (int)&param3) >>> 4) & 0x1);
    char v19 = (unsigned int)&param0 >= 0xfffffff4;
    char v20 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&param3) & (int*)~(int)(int*)((int)&param0 ^ 0xc)) < 0;
    int v21 = param3;
    int* ptr2 = &v1;
    jump v21;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DC30(int param0, int param1) {
    char v0;
    char v1;
    int v2;
    unsigned int v3 = caml_exception_pointer;
    caml_exception_pointer = &v3;
    int v4 = v2;
    int v5 = 1;
    int v6 = &unix_waitpid;
    int v7 = caml_c_call();
    int* ptr0 = &v5;
    char v8 = &v0 == 4;
    char v9 = (int)&v3 < 0;
    char v10 = __parity__((unsigned char)&v0 - 4);
    char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x8) ^ (int)&v3) >>> 4) & 0x1);
    char v12 = (unsigned int)&v5 >= 0xfffffff8;
    char v13 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v5) & (int*)~(int)(int*)((int)&v5 ^ 0x8)) < 0;
    caml_exception_pointer = v3;
    int* ptr1 = &param0;
    char v14 = &param1 ? 0: 1;
    char v15 = (int)&param1 < 0;
    char v16 = __parity__((unsigned char)&v0 + 8);
    char v17 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x4) ^ (int)&param1) >>> 4) & 0x1);
    char v18 = (unsigned int)&param0 >= 0xfffffffc;
    char v19 = (int)(int*)((int)(int*)((int)&param1 ^ (int)&param0) & (int*)~(int)(int*)((int)&param0 ^ 0x4)) < 0;
    int v20 = param1;
    int* ptr2 = &v1;
    jump v20;
}

int sub_804DDA0(int param0, int param1, int param2, int param3) {
    void* ptr0;
    char v0;
    unsigned int v1 = caml_exception_pointer;
    caml_exception_pointer = &v1;
    int v2 = param2;
    int v3 = camlPervasives__close_out_1209();
    caml_exception_pointer = v1;
    int* ptr1 = &ptr0;
    char v4 = &param0 ? 0: 1;
    char v5 = (int)&param0 < 0;
    char v6 = __parity__((unsigned char)&ptr0 + 4);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v8 = (unsigned int)&ptr0 >= 0xfffffffc;
    char v9 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&param0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    int v10 = param1;
    int v11 = camlUnix__waitpid_non_intr_2001();
    int v12 = v11;
    int* ptr2 = (int*)(v11 + 4);
    char v13 = ptr2 ? 0: 1;
    char v14 = (int)ptr2 < 0;
    char v15 = __parity__((unsigned char)ptr2);
    char v16 = (int*)((int)(int*)((int)(int*)((v12 ^ 0x4) ^ (int)ptr2) >>> 4) & 0x1);
    char v17 = (unsigned int)v12 >= 0xfffffffc;
    char v18 = (int)(int*)((int)(int*)((int)ptr2 ^ v12) & ~(v12 ^ 0x4)) < 0;
    int v19 = *ptr2;
    int* ptr3 = &param0;
    char v20 = &param3 ? 0: 1;
    char v21 = (int)&param3 < 0;
    char v22 = __parity__((unsigned char)&ptr0 + 16);
    char v23 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0xc) ^ (int)&param3) >>> 4) & 0x1);
    char v24 = (unsigned int)&param0 >= 0xfffffff4;
    char v25 = (int)(int*)((int)(int*)((int)&param3 ^ (int)&param0) & (int*)~(int)(int*)((int)&param0 ^ 0xc)) < 0;
    int v26 = param3;
    int* ptr4 = &v0;
    jump v26;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DE60(int param0, int param1, int param2, int param3, int param4) {
    void* ptr0;
    char v0;
    void* ptr1 = caml_exception_pointer;
    caml_exception_pointer = &ptr1;
    int v1 = param3;
    int v2 = camlPervasives__close_out_1209();
    caml_exception_pointer = ptr1;
    int* ptr2 = &ptr0;
    char v3 = &param0 ? 0: 1;
    char v4 = (int)&param0 < 0;
    char v5 = __parity__((unsigned char)&ptr0 + 4);
    char v6 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v7 = (unsigned int)&ptr0 >= 0xfffffffc;
    char v8 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&param0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    int v9 = param1;
    int v10 = &caml_ml_close_channel;
    int v11 = caml_c_call();
    int* ptr3 = &ptr0;
    char v12 = &param0 ? 0: 1;
    char v13 = (int)&param0 < 0;
    char v14 = __parity__((unsigned char)&ptr0 + 4);
    char v15 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v16 = (unsigned int)&ptr0 >= 0xfffffffc;
    char v17 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&param0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    int v18 = param2;
    int v19 = camlUnix__waitpid_non_intr_2001();
    int v20 = v19;
    int* ptr4 = (int*)(v19 + 4);
    char v21 = ptr4 ? 0: 1;
    char v22 = (int)ptr4 < 0;
    char v23 = __parity__((unsigned char)ptr4);
    char v24 = (int*)((int)(int*)((int)(int*)((v20 ^ 0x4) ^ (int)ptr4) >>> 4) & 0x1);
    char v25 = (unsigned int)v20 >= 0xfffffffc;
    char v26 = (int)(int*)((int)(int*)((int)ptr4 ^ v20) & ~(v20 ^ 0x4)) < 0;
    int v27 = *ptr4;
    int* ptr5 = &param0;
    char v28 = &param4 ? 0: 1;
    char v29 = (int)&param4 < 0;
    char v30 = __parity__((unsigned char)&ptr0 + 20);
    char v31 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x10) ^ (int)&param4) >>> 4) & 0x1);
    char v32 = (unsigned int)&param0 >= 0xfffffff0;
    char v33 = (int)(int*)((int)(int*)((int)&param4 ^ (int)&param0) & (int*)~(int)(int*)((int)&param0 ^ 0x10)) < 0;
    int v34 = param4;
    int* ptr6 = &v0;
    jump v34;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DF00(int param0, int param1, int param2) {
    unsigned int v0;
    char v1;
    int v2;
    int v3;
    void* ptr0;
    int v4;
    char v5;
    unsigned int v6 = caml_exception_pointer;
    caml_exception_pointer = &v6;
    int v7 = param0;
    int v8 = &unix_connect;
    int v9 = caml_c_call();
    int* ptr1 = &ptr0;
    char v10 = &v1 == 4;
    char v11 = (int)&v6 < 0;
    char v12 = __parity__((unsigned char)&v1 - 4);
    char v13 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x8) ^ (int)&v6) >>> 4) & 0x1);
    char v14 = (unsigned int)&ptr0 >= 0xfffffff8;
    char v15 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x8)) < 0;
    int v16 = param1;
    int v17 = camlUnix__try_set_close_on_exec_1366();
    int v18 = param1;
    int v19 = &caml_ml_open_descriptor_out;
    int v20 = caml_c_call();
    int* ptr2 = &v3;
    char v21 = &v1 == 4;
    char v22 = (int)&v6 < 0;
    char v23 = __parity__((unsigned char)&v1 - 4);
    char v24 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v3 ^ 0x4) ^ (int)&v6) >>> 4) & 0x1);
    char v25 = (unsigned int)&v3 >= 0xfffffffc;
    char v26 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&v3) & (int*)~(int)(int*)((int)&v3 ^ 0x4)) < 0;
    param0 = v20;
    int v27 = param1;
    v3 = param1;
    int v28 = &caml_ml_open_descriptor_in;
    int v29 = caml_c_call();
    int* ptr3 = &v3;
    char v30 = &v1 == 4;
    char v31 = (int)&v6 < 0;
    char v32 = __parity__((unsigned char)&v1 - 4);
    char v33 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v3 ^ 0x4) ^ (int)&v6) >>> 4) & 0x1);
    char v34 = (unsigned int)&v3 >= 0xfffffffc;
    char v35 = (int)(int*)((int)(int*)((int)&v6 ^ (int)&v3) & (int*)~(int)(int*)((int)&v3 ^ 0x4)) < 0;
    int v36 = v29;
    while(1) {
        unsigned int v37 = caml_young_ptr;
        unsigned int v38 = caml_young_ptr;
        v0 = v37 - 12;
        char v39 = v0 ? 0: 1;
        char v40 = v0 >= 0x80000000;
        char v41 = __parity__((unsigned char)v0);
        char v42 = (((v38 ^ 0xc) ^ v0) >>> 4) & 0x1;
        char v43 = v38 < 12;
        char v44 = (int)((v0 ^ v38) & (v38 ^ 0xc)) < 0;
        caml_young_ptr = v0;
        char v45 = caml_young_limit == v0;
        char v46 = (int)caml_young_limit > (int)v0;
        char v47 = __parity__((unsigned char)v0 - (unsigned char)caml_young_limit);
        char v48 = caml_young_limit > v0;
        char v49 = (int)(((v0 - caml_young_limit) ^ v0) & (caml_young_limit ^ v0)) < 0;
        char v50 = (((v0 - caml_young_limit) ^ (caml_young_limit ^ v0)) >>> 4) & 0x1;
        if(!v48) {
            break;
        }
        else {
            int* ptr4 = caml_call_gc(v2, v4);
        }
    }
    int* ptr5 = (int*)(v0 + 4);
    *(ptr5 - 1) = 0x800;
    *ptr5 = v36;
    int v51 = param0;
    *(ptr5 + 1) = param0;
    caml_exception_pointer = v6;
    int* ptr6 = &param0;
    char v52 = &param2 ? 0: 1;
    char v53 = (int)&param2 < 0;
    char v54 = __parity__((unsigned char)&v1 + 12);
    char v55 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x8) ^ (int)&param2) >>> 4) & 0x1);
    char v56 = (unsigned int)&param0 >= 0xfffffff8;
    char v57 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&param2) & (int*)~(int)(int*)((int)&param0 ^ 0x8)) < 0;
    int v58 = param2;
    int* ptr7 = &v5;
    jump v58;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DFF0(int param0, int param1) {
    char v0;
    char v1;
    int v2;
    unsigned int v3 = caml_exception_pointer;
    caml_exception_pointer = &v3;
    int v4 = v2;
    int v5 = &unix_accept;
    int v6 = caml_c_call();
    int* ptr0 = &v4;
    char v7 = &v0 == 4;
    char v8 = (int)&v3 < 0;
    char v9 = __parity__((unsigned char)&v0 - 4);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0x4) ^ (int)&v3) >>> 4) & 0x1);
    char v11 = (unsigned int)&v4 >= 0xfffffffc;
    char v12 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v4) & (int*)~(int)(int*)((int)&v4 ^ 0x4)) < 0;
    caml_exception_pointer = v3;
    int* ptr1 = &param0;
    char v13 = &param1 ? 0: 1;
    char v14 = (int)&param1 < 0;
    char v15 = __parity__((unsigned char)&v0 + 8);
    char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x4) ^ (int)&param1) >>> 4) & 0x1);
    char v17 = (unsigned int)&param0 >= 0xfffffffc;
    char v18 = (int)(int*)((int)(int*)((int)&param1 ^ (int)&param0) & (int*)~(int)(int*)((int)&param0 ^ 0x4)) < 0;
    int v19 = param1;
    int* ptr2 = &v1;
    jump v19;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E6FA() {
    unsigned int v0 = caml_exception_pointer;
    caml_exception_pointer = &v0;
    int v1 = &camlUnix__44;
    caml_c_call();
    caml_exception_pointer = v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_804E721() {
    void* ptr0;
    unsigned int v0;
    gvar_8072EB8 = v0;
    unsigned int* ptr1 = (unsigned int*)sub_804E742();
    int v1 = &caml_exn_Failure;
    unsigned int v2 = *ptr1;
    char v3 = v2 == &caml_exn_Failure;
    char v4 = (int)v2 < &caml_exn_Failure;
    char v5 = __parity__((unsigned char)v2 - 140);
    char v6 = v2 < &caml_exn_Failure;
    char v7 = (((v2 - &caml_exn_Failure) ^ v2) & (v2 ^ &caml_exn_Failure)) < 0;
    char v8 = (((v2 - &caml_exn_Failure) ^ (v2 ^ &caml_exn_Failure)) >>> 4) & 0x1;
    if(v3) {
        return (unsigned int)sub_804E769();
    }
    int* ptr2 = &ptr0;
    /*BAD_CALL!*/ caml_raise_exn();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804F0F0(int* param0, int param1) {
    void* ptr0;
    int v0;
    char v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    int v3 = v0;
    int v4 = &caml_ml_flush;
    int v5 = caml_c_call();
    int* ptr1 = &v3;
    char v6 = &ptr0 == 4;
    char v7 = (int)&v2 < 0;
    char v8 = __parity__((unsigned char)&ptr0 - 4);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v3 ^ 0x4) ^ (int)&v2) >>> 4) & 0x1);
    char v10 = (unsigned int)&v3 >= 0xfffffffc;
    char v11 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v3) & (int*)~(int)(int*)((int)&v3 ^ 0x4)) < 0;
    caml_exception_pointer = v2;
    int* ptr2 = &ptr0;
    char v12 = &param0 ? 0: 1;
    char v13 = (int)&param0 < 0;
    char v14 = __parity__((unsigned char)&ptr0 + 4);
    char v15 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v16 = (unsigned int)&ptr0 >= 0xfffffffc;
    char v17 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    while(1) {
        int* ptr3 = param0;
        char v18 = ptr3 == 1;
        char v19 = (int)ptr3 < 1;
        char v20 = __parity__((unsigned char)ptr3 - 1);
        char v21 = (unsigned int)ptr3 < 1;
        char v22 = (int)(int*)((int)(int*)((int)(int*)((char*)ptr3 - 1) ^ (int)ptr3) & (int)(int*)((int)ptr3 ^ 0x1)) < 0;
        char v23 = (int*)((int)(int*)((int)(int*)((int)(int*)((char*)ptr3 - 1) ^ (int)(int*)((int)ptr3 ^ 0x1)) >>> 4) & 0x1);
        if(v18) {
            break;
        }
        else {
            int* ptr4 = *(unsigned int*)(ptr3 + 1);
            param0 = *(unsigned int*)(ptr3 + 1);
            int v24 = *ptr3;
            int v25 = sub_804F0F0((int)param0, param1);
        }
    }
    int v26 = 1;
    int* ptr5 = &param0;
    char v27 = &param1 ? 0: 1;
    char v28 = (int)&param1 < 0;
    char v29 = __parity__((unsigned char)&ptr0 + 8);
    char v30 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x4) ^ (int)&param1) >>> 4) & 0x1);
    char v31 = (unsigned int)&param0 >= 0xfffffffc;
    char v32 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&param1) & (int*)~(int)(int*)((int)&param0 ^ 0x4)) < 0;
    int v33 = param1;
    int* ptr6 = &v1;
    jump v33;
}

void sub_804F4D7() {
    // Decompilation error
}

void sub_804F517() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804F980(int param0, int param1) {
    void* ptr0;
    int v0;
    char v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    int v3 = v0;
    int v4 = &caml_ml_flush;
    int v5 = caml_c_call();
    int* ptr1 = &v3;
    char v6 = &ptr0 == 4;
    char v7 = (int)&v2 < 0;
    char v8 = __parity__((unsigned char)&ptr0 - 4);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v3 ^ 0x4) ^ (int)&v2) >>> 4) & 0x1);
    char v10 = (unsigned int)&v3 >= 0xfffffffc;
    char v11 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v3) & (int*)~(int)(int*)((int)&v3 ^ 0x4)) < 0;
    caml_exception_pointer = v2;
    int* ptr2 = &ptr0;
    char v12 = &param0 ? 0: 1;
    char v13 = (int)&param0 < 0;
    char v14 = __parity__((unsigned char)&ptr0 + 4);
    char v15 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v16 = (unsigned int)&ptr0 >= 0xfffffffc;
    char v17 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&param0) & (int*)~(int)(int*)((int)&ptr0 ^ 0x4)) < 0;
    int v18 = sub_804F9C0(param0, param1);
    int v19 = 1;
    int* ptr3 = &param0;
    char v20 = &param1 ? 0: 1;
    char v21 = (int)&param1 < 0;
    char v22 = __parity__((unsigned char)&ptr0 + 8);
    char v23 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x4) ^ (int)&param1) >>> 4) & 0x1);
    char v24 = (unsigned int)&param0 >= 0xfffffffc;
    char v25 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&param1) & (int*)~(int)(int*)((int)&param0 ^ 0x4)) < 0;
    int v26 = param1;
    int* ptr4 = &v1;
    jump v26;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804F9C0(int param0, int param1) {
    char v0;
    char v1;
    unsigned int v2 = caml_exception_pointer;
    caml_exception_pointer = &v2;
    int v3 = param0;
    int v4 = param0;
    int v5 = &caml_ml_close_channel;
    int v6 = caml_c_call();
    int* ptr0 = &v4;
    char v7 = &v0 == 4;
    char v8 = (int)&v2 < 0;
    char v9 = __parity__((unsigned char)&v0 - 4);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0x4) ^ (int)&v2) >>> 4) & 0x1);
    char v11 = (unsigned int)&v4 >= 0xfffffffc;
    char v12 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v4) & (int*)~(int)(int*)((int)&v4 ^ 0x4)) < 0;
    caml_exception_pointer = v2;
    int* ptr1 = &param0;
    char v13 = &param1 ? 0: 1;
    char v14 = (int)&param1 < 0;
    char v15 = __parity__((unsigned char)&v0 + 8);
    char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x4) ^ (int)&param1) >>> 4) & 0x1);
    char v17 = (unsigned int)&param0 >= 0xfffffffc;
    char v18 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&param1) & (int*)~(int)(int*)((int)&param0 ^ 0x4)) < 0;
    int v19 = param1;
    int* ptr2 = &v1;
    jump v19;
}

int sub_804FB9C(int param0, int param1) {
    int* ptr0;
    int v0;
    *ptr0 = 5367;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPervasives__scan_1249;
    *(ptr0 + 4) = param1;
    *(ptr0 + 5) = v0;
    return camlPervasives__scan_1249((int)(ptr0 + 1));
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804FBCF(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804FB87();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804FBF0(int param0) {
    char v0;
    int v1;
    char v2;
    unsigned int v3 = caml_exception_pointer;
    caml_exception_pointer = &v3;
    int v4 = v1;
    int v5 = &caml_ml_close_channel;
    int v6 = caml_c_call();
    int* ptr0 = &v4;
    char v7 = &v0 == 4;
    char v8 = (int)&v3 < 0;
    char v9 = __parity__((unsigned char)&v0 - 4);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0x4) ^ (int)&v3) >>> 4) & 0x1);
    char v11 = (unsigned int)&v4 >= 0xfffffffc;
    char v12 = (int)(int*)((int)(int*)((int)&v3 ^ (int)&v4) & (int*)~(int)(int*)((int)&v4 ^ 0x4)) < 0;
    caml_exception_pointer = v3;
    int* ptr1 = &v0;
    char v13 = &param0 ? 0: 1;
    char v14 = (int)&param0 < 0;
    char v15 = __parity__((unsigned char)&v0 + 4);
    char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v17 = (unsigned int)&v0 >= 0xfffffffc;
    char v18 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&v0) & (int*)~(int)(int*)((int)&v0 ^ 0x4)) < 0;
    int v19 = param0;
    int* ptr2 = &v2;
    jump v19;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804FF2E(int param0) {
    int* ptr0;
    int v0;
    *ptr0 = 4343;
    *(int*)(unsigned int)(ptr0 + 1) = &camlPervasives__fun_1500;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = v0;
    caml_modify(gvar_8075630, (unsigned int)(ptr0 + 1));
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804FF60(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_804FF19();
}

int sub_8050FE0(int param0, int param1, int param2, int param3, int param4) {
    char v0;
    int v1;
    unsigned int v2;
    char v3;
    unsigned int v4 = caml_exception_pointer;
    caml_exception_pointer = &v4;
    unsigned int v5 = *(unsigned int*)(v1 + 16);
    int v6 = camlArray__trickledown_1160(v2, v5);
    caml_exception_pointer = v4;
    int* ptr0 = &param0;
    char v7 = &param4 ? 0: 1;
    char v8 = (int)&param4 < 0;
    char v9 = __parity__((unsigned char)&v0 + 20);
    char v10 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x10) ^ (int)&param4) >>> 4) & 0x1);
    char v11 = (unsigned int)&param0 >= 0xfffffff0;
    char v12 = (int)(int*)((int)(int*)((int)&param4 ^ (int)&param0) & (int*)~(int)(int*)((int)&param0 ^ 0x10)) < 0;
    int v13 = param4;
    int* ptr1 = &v3;
    jump v13;
}

int sub_8051140(int param0) {
    char v0;
    int v1;
    char v2;
    unsigned int v3 = caml_exception_pointer;
    caml_exception_pointer = &v3;
    int v4 = *(int*)(v1 + 12);
    int v5 = camlArray__bubbledown_1170(v4);
    caml_exception_pointer = v3;
    int* ptr0 = &v0;
    char v6 = &param0 ? 0: 1;
    char v7 = (int)&param0 < 0;
    char v8 = __parity__((unsigned char)&v0 + 4);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v10 = (unsigned int)&v0 >= 0xfffffffc;
    char v11 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&v0) & (int*)~(int)(int*)((int)&v0 ^ 0x4)) < 0;
    int v12 = param0;
    int* ptr1 = &v2;
    jump v12;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8052833(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_80527D2();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805422F(int param0, int param1) {
    int* ptr0;
    int v0;
    *ptr0 = 0x800;
    *(ptr0 + 1) = param1;
    *(ptr0 + 2) = v0;
    return camlList__rev_append_1051();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8054253(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_805421A();
}

int sub_8054337(int param0, int param1) {
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlList__rmap_f_1070;
    *(ptr0 + 4) = param1;
    return camlList__rmap_f_1070((int)(ptr0 + 1));
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8054362(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_8054322();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80544E7(int param0) {
    int* ptr0;
    int v0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry3;
    *(ptr0 + 2) = 7;
    *(ptr0 + 3) = &camlList__rmap2_f_1103;
    *(ptr0 + 4) = v0;
    return camlList__rmap2_f_1103(param0, (int)(ptr0 + 1));
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8054512(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_80544D2();
}

void sub_8054935() {
    // Decompilation error
}

int sub_8054B97(int param0) {
    int v0;
    int* ptr0 = (int*)(v0 + 4);
    *(ptr0 - 1) = 4343;
    *ptr0 = &caml_curry2;
    *(ptr0 + 1) = 5;
    *(ptr0 + 2) = &camlList__find_1207;
    *(ptr0 + 3) = param0;
    int v1 = 1;
    int v2 = *ptr0;
    jump v2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8054BC1(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_8054B82();
}

int sub_8054BE9(int param0) {
    int* ptr0;
    int v0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry3;
    *(ptr0 + 2) = 7;
    *(ptr0 + 3) = &camlList__part_1215;
    *(ptr0 + 4) = v0;
    return camlList__part_1215(param0, (int)(ptr0 + 1));
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8054C19(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_8054BD4();
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_8055D09() {
    unsigned int result;
    unsigned int v0;
    unsigned int v1;
    int* ptr0;
    *ptr0 = 0x400;
    *(ptr0 + 1) = &caml_exn_Not_found;
    caml_raise_exn();
    while((unsigned int)((unsigned int)*(char*)((result >> 1) + (int)ptr0) * 2 + 1) != v0) {
        result += 2;
        jump (int)result >= (int)v1 ? &sub_8055CF4: &loc_8055D20;
    }
    return result;
}

void sub_8055D45() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_8055DDA() {
    unsigned int result;
    unsigned int v0;
    int* ptr0;
    *ptr0 = 0x400;
    *(ptr0 + 1) = &caml_exn_Not_found;
    caml_raise_exn();
    while((unsigned int)((unsigned int)*(char*)((result >> 1) + (int)ptr0) * 2 + 1) != v0) {
        result -= 2;
        jump (int)result < 1 ? &sub_8055DC5: &loc_8055DF0;
    }
    return result;
}

void sub_8055E15() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8055ED0(int param0) {
    char v0;
    int v1;
    int v2;
    char v3;
    unsigned int v4 = caml_exception_pointer;
    caml_exception_pointer = &v4;
    int v5 = v1;
    int v6 = camlString__index_rec_1108(v5, v2);
    int v7 = 3;
    caml_exception_pointer = v4;
    int* ptr0 = &v0;
    char v8 = &param0 ? 0: 1;
    char v9 = (int)&param0 < 0;
    char v10 = __parity__((unsigned char)&v0 + 4);
    char v11 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v12 = (unsigned int)&v0 >= 0xfffffffc;
    char v13 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&v0) & (int*)~(int)(int*)((int)&v0 ^ 0x4)) < 0;
    int v14 = param0;
    int* ptr1 = &v3;
    jump v14;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8055F70(int param0) {
    char v0;
    int v1;
    char v2;
    unsigned int v3 = caml_exception_pointer;
    caml_exception_pointer = &v3;
    int v4 = camlString__rindex_rec_1121(v1);
    int v5 = 3;
    caml_exception_pointer = v3;
    int* ptr0 = &v0;
    char v6 = &param0 ? 0: 1;
    char v7 = (int)&param0 < 0;
    char v8 = __parity__((unsigned char)&v0 + 4);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&param0) >>> 4) & 0x1);
    char v10 = (unsigned int)&v0 >= 0xfffffffc;
    char v11 = (int)(int*)((int)(int*)((int)&param0 ^ (int)&v0) & (int*)~(int)(int*)((int)&v0 ^ 0x4)) < 0;
    int v12 = param0;
    int* ptr1 = &v2;
    jump v12;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80560DC(int param0, int param1) {
    caml_call_gc(param0, param1);
    /*NO_RETURN*/ camlSys__fun_1093();
}

int sub_805612A() {
    int* ptr0;
    *ptr0 = 0x400;
    *(ptr0 + 1) = &camlSys__5;
    return camlSys__set_signal_1057();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805615F(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_8056115();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8057120(int param0, int param1, int param2, int param3, int param4, unsigned int param5, int param6, int param7, int param8) {
    int v0;
    int v1;
    char v2;
    int v3;
    char v4;
    int v5;
    int v6;
    void* ptr0 = caml_exception_pointer;
    caml_exception_pointer = &ptr0;
    unsigned int v7 = *(unsigned int*)(v1 + 4);
    param5 = *(unsigned int*)(v1 + 4);
    int v8 = *(int*)(v7 - 4);
    int v9 = *(int*)(v7 - 4);
    unsigned int v10 = (unsigned int)(v8 >>> 9);
    char v11 = (v9 >>> 8) & 0x1;
    char v12 = v2;
    char v13 = v10 ? 0: 1;
    char v14 = v10 >= 0x80000000;
    char v15 = __parity__((unsigned char)v10);
    char v16 = v6 == v10;
    char v17 = v6 > (int)v10;
    char v18 = __parity__((unsigned char)v10 - (unsigned char)v6);
    char v19 = (unsigned int)v6 > v10;
    char v20 = (((v10 - v6) ^ v10) & (v6 ^ v10)) < 0;
    char v21 = (((v10 - v6) ^ (v6 ^ v10)) >>> 4) & 0x1;
    if(!v19 && !v16) {
        int v22 = param4;
        int* ptr1 = camlHashtbl__replace_bucket_1221(v3, v6);
        v10 = param5;
        int v23 = param6;
        unsigned int* ptr2 = (unsigned int*)(v23 * 2 + v10 - 2);
        unsigned int v24 = caml_modify(ptr2, (unsigned int)ptr1);
        int* ptr3 = &v5;
        char v25 = &v0 == 4;
        char v26 = (int)&ptr0 < 0;
        char v27 = __parity__((unsigned char)&v0 - 4);
        char v28 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x8) ^ (int)&ptr0) >>> 4) & 0x1);
        char v29 = (unsigned int)&v5 >= 0xfffffff8;
        char v30 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v5) & (int*)~(int)(int*)((int)&v5 ^ 0x8)) < 0;
        int v31 = 1;
        caml_exception_pointer = ptr0;
        int* ptr4 = &param0;
        v16 = &param8 ? 0: 1;
        v17 = (int)&param8 < 0;
        v18 = __parity__((unsigned char)&v0 + 36);
        v21 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x20) ^ (int)&param8) >>> 4) & 0x1);
        v19 = (unsigned int)&param0 >= 0xffffffe0;
        v20 = (int)(int*)((int)(int*)((int)&param8 ^ (int)&param0) & (int*)~(int)(int*)((int)&param0 ^ 0x20)) < 0;
        v9 = param8;
        int* ptr5 = &v4;
        jump v9;
    }
    caml_ml_array_bound_error((int)ptr0, v0, param0, param1);
    caml_ml_array_bound_error((int)ptr0, v0, param0, param1);
    caml_ml_array_bound_error((int)ptr0, v0, param0, param1);
    /*BAD_CALL!*/ camlHashtbl__mem_1227(v3, v6);
}

int* sub_80572CE() {
    int v0;
    int* ptr0;
    *ptr0 = 0x800;
    *(ptr0 + 1) = 1;
    *(ptr0 + 2) = v0;
    return ptr0 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80572E2(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_80572B9();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8057989(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_8057904();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8057B00(int param0, int param1, int param2, int param3, int param4, unsigned int param5, int param6, int param7) {
    int v0;
    char v1;
    char v2;
    int v3;
    int v4;
    int v5;
    int v6;
    void* ptr0 = caml_exception_pointer;
    caml_exception_pointer = &ptr0;
    unsigned int v7 = *(unsigned int*)(v3 + 4);
    param5 = *(unsigned int*)(v3 + 4);
    int v8 = *(int*)(v7 - 4);
    int v9 = *(int*)(v7 - 4);
    unsigned int v10 = (unsigned int)(v8 >>> 9);
    char v11 = (v9 >>> 8) & 0x1;
    char v12 = v1;
    char v13 = v10 ? 0: 1;
    char v14 = v10 >= 0x80000000;
    char v15 = __parity__((unsigned char)v10);
    char v16 = v6 == v10;
    char v17 = v6 > (int)v10;
    char v18 = __parity__((unsigned char)v10 - (unsigned char)v6);
    char v19 = (unsigned int)v6 > v10;
    char v20 = (((v10 - v6) ^ v10) & (v6 ^ v10)) < 0;
    char v21 = (((v10 - v6) ^ (v6 ^ v10)) >>> 4) & 0x1;
    if(!v19 && !v16) {
        int v22 = param4;
        int* ptr1 = camlHashtbl__replace_bucket_1116(v4, v6);
        v10 = param5;
        int v23 = param6;
        int v24 = v23 * 2 + v10 - 2;
        int v25 = caml_modify(v24, (int)ptr1);
        int* ptr2 = &v5;
        char v26 = &v0 == 4;
        char v27 = (int)&ptr0 < 0;
        char v28 = __parity__((unsigned char)&v0 - 4);
        char v29 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v5 ^ 0x8) ^ (int)&ptr0) >>> 4) & 0x1);
        char v30 = (unsigned int)&v5 >= 0xfffffff8;
        char v31 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v5) & (int*)~(int)(int*)((int)&v5 ^ 0x8)) < 0;
        int v32 = 1;
        caml_exception_pointer = ptr0;
        int* ptr3 = &param0;
        v16 = &param7 ? 0: 1;
        v17 = (int)&param7 < 0;
        v18 = __parity__((unsigned char)&v0 + 32);
        v21 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x1c) ^ (int)&param7) >>> 4) & 0x1);
        v19 = (unsigned int)&param0 >= 0xffffffe4;
        v20 = (int)(int*)((int)(int*)((int)&param7 ^ (int)&param0) & (int*)~(int)(int*)((int)&param0 ^ 0x1c)) < 0;
        v9 = param7;
        int* ptr4 = &v2;
        jump v9;
    }
    caml_ml_array_bound_error((int)ptr0, v0, param0, param1);
    caml_ml_array_bound_error((int)ptr0, v0, param0, param1);
    caml_ml_array_bound_error((int)ptr0, v0, param0, param1);
    /*BAD_CALL!*/ camlHashtbl__mem_1122();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8057C09(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_8057B84();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058881() {
    int* ptr0;
    *ptr0 = 0x800;
    *(ptr0 + 1) = &caml_exn_Assert_failure;
    *(ptr0 + 2) = &camlBuffer__21;
    caml_raise_exn();
    return 251;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80588B6(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_805886C();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80588D9(int param0) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    *ptr0 = 6391;
    *(ptr0 + 1) = &caml_curry3;
    *(ptr0 + 2) = 7;
    *(ptr0 + 3) = &camlBuffer__advance_1104;
    *(ptr0 + 4) = v0;
    *(ptr0 + 5) = v1;
    *(ptr0 + 6) = v2;
    unsigned int v3 = (unsigned int)((*(int*)(v2 - 4) >>> 10) * 4 - 1);
    return camlBuffer__advance_1104((v3 - (unsigned int)*(char*)(v3 + v2)) * 2 + 1, (int)(ptr0 + 1));
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058922(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_80588C4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058947(int param0, int param1) {
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlBuffer__advance_1111;
    *(ptr0 + 4) = param1;
    return camlBuffer__advance_1111((int)(ptr0 + 1));
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058988(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_8058932();
}

int sub_8058B40(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    *ptr0 = 7415;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlBuffer__subst_1127;
    *(ptr0 + 4) = v0;
    *(ptr0 + 5) = v1;
    *(ptr0 + 6) = param1;
    *(ptr0 + 7) = v2;
    return camlBuffer__subst_1127((int)(ptr0 + 1));
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058B79(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_8058B2B();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058EB9(int param0, int param1) {
    int* ptr0;
    *ptr0 = 0x800;
    *(ptr0 + 1) = param0;
    *(ptr0 + 2) = *(int*)(param1 + 16);
    return camlPrintf__loop_1240(*(int*)(param1 + 8));
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058ED9(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_8058EA4();
}

int sub_8059375(int param0) {
    int* ptr0;
    int v0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &camlPrintf__skip_int_literal_1092;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = *(int*)(v0 + 8);
    *(ptr0 + 4) = param0;
    return camlPrintf__skip_int_literal_1092();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80593A1(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_8059360();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805951E(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_80594B5();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805ADEB(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    *ptr0 = 6391;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__got_spec_1297;
    *(ptr0 + 4) = param1 + 16;
    *(ptr0 + 5) = v0;
    *(ptr0 + 6) = v1;
    return camlPrintf__scan_positional_spec_1252(v0, v2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805AE23(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_805ADD6();
}

int sub_805B1F0(int param0, int param1) {
    char v0;
    int v1;
    char v2;
    unsigned int v3 = caml_exception_pointer;
    caml_exception_pointer = &v3;
    int v4 = 3;
    int v5 = 1;
    int* ptr0 = camlPrintf__parse_1069(v1);
    caml_exception_pointer = v3;
    int* ptr1 = &param0;
    char v6 = &param1 ? 0: 1;
    char v7 = (int)&param1 < 0;
    char v8 = __parity__((unsigned char)&v0 + 8);
    char v9 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&param0 ^ 0x4) ^ (int)&param1) >>> 4) & 0x1);
    char v10 = (unsigned int)&param0 >= 0xfffffffc;
    char v11 = (int)(int*)((int)(int*)((int)&param1 ^ (int)&param0) & (int*)~(int)(int*)((int)&param0 ^ 0x4)) < 0;
    int v12 = param1;
    int* ptr2 = &v2;
    jump v12;
}

int sub_805B5FE(int param0) {
    int v0;
    int* ptr0;
    int v1;
    int v2;
    int v3;
    int v4;
    *ptr0 = 14583;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__scan_flags_1142;
    *(ptr0 + 4) = 4345;
    *(ptr0 + 5) = &caml_curry2;
    *(ptr0 + 6) = 5;
    *(ptr0 + 7) = &camlPrintf__scan_conv_1143;
    *(ptr0 + 8) = 8441;
    *(ptr0 + 9) = &camlPrintf__scan_fmt_1144;
    *(ptr0 + 10) = 3;
    *(ptr0 + 11) = v1;
    *(ptr0 + 12) = v2;
    *(ptr0 + 13) = v3;
    *(ptr0 + 14) = v4;
    camlPrintf__scan_fmt_1144(v0, param0);
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805B66E(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_805B5E9();
}

int sub_805B7F7(int param0, int param1) {
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__loop_1204;
    *(ptr0 + 4) = param1;
    return camlPrintf__loop_1204((int)(ptr0 + 1));
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805B822(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_805B7E2();
}

int sub_805BB45(int param0, int param1) {
    int* ptr0;
    int v0;
    int v1;
    int v2;
    *ptr0 = 6391;
    *(ptr0 + 1) = &caml_curry2;
    *(ptr0 + 2) = 5;
    *(ptr0 + 3) = &camlPrintf__get_int_literal_1258;
    *(ptr0 + 4) = v0;
    *(ptr0 + 5) = v1;
    *(ptr0 + 6) = v2;
    return camlPrintf__get_int_literal_1258((int)(ptr0 + 1));
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805BB79(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_805BB30();
}

int sub_805BBFE(int param0, int param1) {
    int* ptr0;
    *ptr0 = 4343;
    *(ptr0 + 1) = &camlPrintf__valid_float_loop_1273;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    *(ptr0 + 4) = param1;
    return camlPrintf__valid_float_loop_1273();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805BC25(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_805BBE9();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805BE59(int param0) {
    int* ptr0;
    *ptr0 = 3319;
    *(ptr0 + 1) = &camlPrintf__fun_1680;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    unsigned int v0 = gvar_80755A0;
    unsigned int v1 = gvar_807559C;
    caml_extra_params = gvar_8079560;
    return caml_apply6((int)v1, (int)v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805BE9B(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_805BE44();
}

int sub_805BF29(int param0) {
    int* ptr0;
    *ptr0 = 3319;
    *(ptr0 + 1) = &camlPrintf__fun_1694;
    *(ptr0 + 2) = 3;
    *(ptr0 + 3) = param0;
    unsigned int v0 = gvar_8078E74;
    unsigned int v1 = gvar_8078E70;
    caml_extra_params = gvar_8079560;
    return caml_apply6((int)v1, (int)v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805BF6A(int param0, int param1) {
    caml_call_gc(param0, param1);
    return sub_805BF14();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_807015E(int param0, int param1) {
    void* ptr0;
    char v0;
    caml_last_return_address = ptr0;
    caml_bottom_of_stack = &v0;
    sub_807012D(param0, param1);
    return caml_alloc1();
}

int sub_80701C6(int param0, int param1) {
    void* ptr0;
    char v0;
    caml_last_return_address = ptr0;
    caml_bottom_of_stack = &v0;
    sub_807012D(param0, param1);
    return caml_alloc3();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_and_compact() {
    short v0;
    __SyntheticTypeUnknownF v1;
    int v2 = caml_fl_cur_size;
    int v3 = caml_fl_cur_size;
    int v4 = 0;
    __SyntheticTypeUnknownF v5 = (double)*(long long*)&v3 * 100.0;
    unsigned int v6 = caml_stat_heap_size >>> 2;
    v3 = (int)(v6 - v2);
    fucomi(v5 / (double)*(long long*)&v3, 999999.0);
    v7[v8] = fcmovnbe(999999.0);
    short v0 = fnstcw();
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    *(long long*)&v3 = (long long)v1;
    fldcw(v0);
    caml_gc_message(0x200, "Estimated overhead (lower bound) = %lu%%\n", v3);
    int result = caml_percent_max;
    v3 = caml_percent_max;
    v4 = 0;
    fucomip(v1, (double)*(long long*)&v3);
    if((unsigned int)v2 <= v6 && (int)caml_stat_heap_chunks > 1) {
        caml_gc_message(0x200, "Automatic compaction triggered.\n", 0);
        result = caml_compact_heap();
    }
    return result;
}

unsigned char* token_name(int param0, int param1) {
    char v0;
    int v1;
    unsigned char* ptr0;
    int v2 = v1;
    unsigned char* result = ptr0;
    if(param1 > 0) {
        if(!*result) {
            return "<unknown token>";
        }
        do {
            unsigned char* ptr1 = result;
            int v3 = -1;
            do {
                v0 = *ptr1 == 0;
                ++ptr1;
                --v3;
            }
            while(~v0 && v3 == 0);
            result = (unsigned char*)(~v3 + (int)result);
            --param1;
            if(param1 <= 0) {
                return result;
            }
        }
        while(!*result);
        result = "<unknown token>";
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int uerror(int param0, int param1) {
    char v0;
    int* ptr0;
    int v1;
    int v2;
    int v3;
    int* ptr1 = &v1;
    int v4 = v3;
    int* ptr2 = &v4;
    char v5 = &v0 == 28;
    char v6 = (int)&v2 < 0;
    char v7 = __parity__((unsigned char)&v0 - 28);
    char v8 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v4 ^ 0x14) ^ (int)&v2) >>> 4) & 0x1);
    char v9 = (unsigned int)&v4 < 20;
    char v10 = (int)(int*)((int)(int*)((int)&v4 ^ (int)&v2) & (int)(int*)((int)&v4 ^ 0x14)) < 0;
    int v11 = &loc_8060F48;
    int v12 = &loc_8060F48;
    int v13 = &_GLOBAL_OFFSET_TABLE_;
    char v14 = 0;
    char v15 = 0;
    char v16 = 0;
    char v17 = 0;
    char v18 = 0;
    char v19 = 0;
    →__errno_location();
    int v20 = param1;
    int v21 = param1;
    int v22 = param0;
    int v23 = param0;
    int v24 = *ptr0;
    /*BAD_CALL!*/ unix_error(v24, v22, v20);
}

int* unix_accept(int param0) {
    char v0;
    int v1;
    int v2;
    int v3 = v2;
    int v4 = 112;
    caml_enter_blocking_section();
    →accept(param0 >> 1, &v0, &v4);
    caml_leave_blocking_section();
    if(v1 == -1) {
        uerror("accept", 0);
    }
    int v5 = alloc_sockaddr((unsigned short*)&v0, v4, v1);
    unsigned int v6 = caml_local_roots;
    caml_local_roots = &v6;
    int* result = (int*)caml_alloc_small(2, 0);
    *result = v1 * 2 + 1;
    *(result + 1) = v5;
    caml_local_roots = v6;
    return result;
}

int unix_access(int param0, int* param1) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    int v3 = caml_convert_flag_list(param1, &access_permission_table);
    →access(param0, v3);
    if(v0 == -1) {
        uerror("access", param0);
    }
    return 1;
}

int unix_alarm(int param0) {
    int v0;
    →alarm(param0 >> 1);
    return v0 * 2 + 1;
}

int unix_bind(int param0, int param1) {
    char v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4 = v3;
    get_sockaddr(param1, &v0, &v1);
    →bind(param0 >> 1, (int)&v0, v1);
    if(v2 == -1) {
        uerror("bind", 0);
    }
    return 1;
}

int unix_chdir(int param0) {
    unsigned int v0;
    →chdir(param0);
    if(v0 == -1) {
        uerror("chdir", param0);
    }
    return 1;
}

int unix_chmod(int param0, int param1) {
    unsigned int v0;
    →chmod(param0, param1 >> 1);
    if(v0 == -1) {
        uerror("chmod", param0);
    }
    return 1;
}

int unix_chown(int param0, int param1, int param2) {
    unsigned int v0;
    →chown(param0, param1 >> 1, param2 >> 1);
    if(v0 == -1) {
        uerror("chown", param0);
    }
    return 1;
}

int unix_chroot(int param0) {
    unsigned int v0;
    →chroot(param0);
    if(v0 == -1) {
        uerror("chroot", param0);
    }
    return 1;
}

int unix_clear_close_on_exec(int param0) {
    unsigned int v0;
    →fcntl(param0 >> 1, 1);
    if(v0 != -1) {
        →fcntl(param0 >> 1, 2);
        if(v0 == -1) {
            uerror("clear_close_on_exec", 0);
            return 1;
        }
    }
    else {
        uerror("clear_close_on_exec", 0);
    }
    return 1;
}

int unix_clear_nonblock(int param0) {
    unsigned int v0;
    →fcntl(param0 >> 1, 3);
    if(v0 != -1) {
        →fcntl(param0 >> 1, 4);
        if(v0 == -1) {
            uerror("clear_nonblock", 0);
            return 1;
        }
    }
    else {
        uerror("clear_nonblock", 0);
    }
    return 1;
}

int unix_close(int param0) {
    unsigned int v0;
    →close(param0 >> 1);
    if(v0 == -1) {
        uerror("close", 0);
    }
    return 1;
}

int unix_closedir(int* param0) {
    int v0;
    int v1 = v0;
    int v2 = *param0;
    if(!v2) {
        v2 = unix_error(9, "closedir", 0);
    }
    →closedir(v2);
    *param0 = 0;
    return 1;
}

int unix_connect(int param0, int param1) {
    char v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4 = v3;
    get_sockaddr(param1, &v0, &v1);
    caml_enter_blocking_section();
    →connect(param0 >> 1, (int)&v0, v1);
    caml_leave_blocking_section();
    if(v2 == -1) {
        uerror("connect", 0);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_convert_itimer() {
    int* ptr0;
    int v0;
    int v1 = v0;
    int result = caml_alloc_small(4, 254);
    __SyntheticTypeUnknownF v2 = (double)*ptr0 + 1000000.0;
    *(long long*)result = (double)*(ptr0 + 1) / 1000000.0;
    *(long long*)(result + 8) = (double)*(ptr0 + 3) / v2 + (double)*(ptr0 + 2);
    return result;
}

int unix_dup(int param0) {
    int v0;
    unsigned int v1;
    →dup(param0 >> 1);
    if(v1 == -1) {
        v0 = uerror(134678839, 0);
    }
    return v0 * 2 + 1;
}

int unix_dup2(int param0, int param1) {
    unsigned int v0;
    →dup2(param0 >> 1, param1 >> 1);
    if(v0 == -1) {
        uerror("dup2", 0);
    }
    return 1;
}

int unix_environment() {
    int v0;
    int v1 = v0;
    return caml_copy_string_array(*(unsigned int**)environ);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_error(unsigned int param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v2;
    int v5 = param2;
    unsigned int v6 = caml_local_roots;
    caml_local_roots = &v6;
    int v7 = 1;
    int v8 = 3;
    int* ptr0 = &v0;
    int* ptr1 = &v1;
    int* ptr2 = &v3;
    char v9 = v5 ? 0: 1;
    if(v9) {
        int v10 = &gvar_8071A88;
        v5 = caml_copy_string(&gvar_8071A88);
    }
    v3 = v5;
    int v11 = param1;
    int v12 = caml_copy_string(v11);
    v0 = v12;
    unsigned int v13 = param0;
    int v14 = unix_error_of_code(v13);
    v1 = v14;
    char v15 = unix_error_exn ? 0: 1;
    if(v15) {
        int v16 = "Unix.Unix_error";
        unsigned int v17 = (unsigned int)caml_named_value("Unix.Unix_error");
        unix_error_exn = v17;
        v15 = v17 ? 0: 1;
        v47 = v17 >= 0x80000000;
        v51 = __parity__((unsigned char)v17);
        v49 = 0;
        v50 = 0;
        if(v15) {
            int v18 = "Exception Unix.Unix_error not initialized, please link unix.cma";
            int v19 = caml_invalid_argument("Exception Unix.Unix_error not initialized, please link unix.cma");
        }
    }
    int v20 = caml_alloc_small(4, 0);
    int* ptr3 = unix_error_exn;
    *(int*)v20 = *ptr3;
    *(int*)(v20 + 4) = v1;
    *(int*)(v20 + 8) = v0;
    *(int*)(v20 + 12) = v3;
    unsigned int v21 = v6;
    caml_local_roots = v21;
    /*BAD_CALL!*/ caml_raise(v20);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_error_message(int* param0) {
    int v0;
    int v1;
    int v2 = v1;
    →strerror((unsigned char)param0 & 0x1 ? *(int*)((int)(int*)((int)(int*)((int)param0 >> 1) * 4) + (int)&error_table): *param0 >> 1);
    return caml_copy_string(v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_error_of_code(unsigned int param0) {
    int v0 = cst_to_constr(param0, (unsigned int*)&error_table, 68, -1);
    int result = v0;
    if(v0 == -1) {
        result = caml_alloc_small(1, 0);
        *(int*)result = param0 * 2 + 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_execv(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = &v1;
    int* ptr1 = &v1;
    char v4 = &v0 == 44;
    char v5 = (int)&v2 < 0;
    char v6 = __parity__((unsigned char)&v0 - 44);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x28) ^ (int)&v2) >>> 4) & 0x1);
    char v8 = (unsigned int)&v1 < 40;
    char v9 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v2) & (int)(int*)((int)&v1 ^ 0x28)) < 0;
    int v10 = v3;
    int v11 = &loc_805C9E0;
    int v12 = &loc_805C9E0;
    int v13 = &_GLOBAL_OFFSET_TABLE_;
    char v14 = 0;
    char v15 = 0;
    char v16 = 0;
    char v17 = 0;
    char v18 = 0;
    char v19 = 0;
    int v20 = param0;
    int v21 = param1;
    int v22 = cstringvect(v21);
    int v23 = v22;
    →execv(v20, v22);
    caml_stat_free(v23);
    /*BAD_CALL!*/ uerror("execv", v20);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_execve(int param0, int param1, int param2) {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = &v2;
    int* ptr1 = &v2;
    char v4 = &v0 == 44;
    char v5 = (int)&v3 < 0;
    char v6 = __parity__((unsigned char)&v0 - 44);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v2 ^ 0x28) ^ (int)&v3) >>> 4) & 0x1);
    char v8 = (unsigned int)&v2 < 40;
    char v9 = (int)(int*)((int)(int*)((int)&v2 ^ (int)&v3) & (int)(int*)((int)&v2 ^ 0x28)) < 0;
    int v10 = v1;
    int v11 = &loc_805CA30;
    int v12 = &loc_805CA30;
    int v13 = &_GLOBAL_OFFSET_TABLE_;
    char v14 = 0;
    char v15 = 0;
    char v16 = 0;
    char v17 = 0;
    char v18 = 0;
    char v19 = 0;
    int v20 = param1;
    int v21 = cstringvect(v20);
    int v22 = v21;
    int v23 = param2;
    int v24 = cstringvect(v23);
    int v25 = v24;
    int v26 = param0;
    →execve(v26, v22, v24);
    caml_stat_free(v22);
    caml_stat_free(v25);
    int v27 = param0;
    /*BAD_CALL!*/ uerror("execve", v27);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_execvp(int param0, int param1) {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = &v1;
    int* ptr1 = &v1;
    char v4 = &v0 == 44;
    char v5 = (int)&v2 < 0;
    char v6 = __parity__((unsigned char)&v0 - 44);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x28) ^ (int)&v2) >>> 4) & 0x1);
    char v8 = (unsigned int)&v1 < 40;
    char v9 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v2) & (int)(int*)((int)&v1 ^ 0x28)) < 0;
    int v10 = v3;
    int v11 = &loc_805CB16;
    int v12 = &loc_805CB16;
    int v13 = &_GLOBAL_OFFSET_TABLE_;
    char v14 = 0;
    char v15 = 0;
    char v16 = 0;
    char v17 = 0;
    char v18 = 0;
    char v19 = 0;
    int v20 = param0;
    int v21 = param1;
    int v22 = cstringvect(v21);
    int v23 = v22;
    →execvp(v20, v22);
    caml_stat_free(v23);
    /*BAD_CALL!*/ uerror("execvp", v20);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_execvpe(int param0, int param1, int param2) {
    char v0;
    int v1;
    int v2;
    int v3;
    int* ptr0 = &v1;
    int* ptr1 = &v1;
    char v4 = &v0 == 60;
    char v5 = (int)&v2 < 0;
    char v6 = __parity__((unsigned char)&v0 - 60);
    char v7 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v1 ^ 0x38) ^ (int)&v2) >>> 4) & 0x1);
    char v8 = (unsigned int)&v1 < 56;
    char v9 = (int)(int*)((int)(int*)((int)&v1 ^ (int)&v2) & (int)(int*)((int)&v1 ^ 0x38)) < 0;
    int v10 = v3;
    int v11 = &loc_805CA9C;
    int v12 = &loc_805CA9C;
    int v13 = &_GLOBAL_OFFSET_TABLE_;
    char v14 = 0;
    char v15 = 0;
    char v16 = 0;
    char v17 = 0;
    char v18 = 0;
    char v19 = 0;
    int v20 = param1;
    int v21 = cstringvect(v20);
    int v22 = v21;
    void* ptr2 = environ;
    int v23 = *(int*)ptr2;
    int v24 = *(int*)ptr2;
    int v25 = param2;
    int v26 = cstringvect(v25);
    *(int*)ptr2 = v26;
    int v27 = param0;
    →execvp(v27, v22);
    caml_stat_free(v22);
    int v28 = *(int*)ptr2;
    caml_stat_free(v28);
    *(int*)ptr2 = v24;
    int v29 = param0;
    /*BAD_CALL!*/ uerror("execvp", v29);
}

int unix_fchmod(int param0, int param1) {
    unsigned int v0;
    →fchmod(param0 >> 1, param1 >> 1);
    if(v0 == -1) {
        uerror("fchmod", 0);
    }
    return 1;
}

int unix_fchown(int param0, int param1, int param2) {
    unsigned int v0;
    →fchown(param0 >> 1, param1 >> 1, param2 >> 1);
    if(v0 == -1) {
        uerror("fchown", 0);
    }
    return 1;
}

int unix_fork() {
    unsigned int v0;
    →fork();
    if(v0 == -1) {
        uerror("fork", 0);
    }
    if(caml_debugger_in_use) {
        unsigned int v1 = caml_debugger_fork_mode;
        if((v1 && !v0) || (!v1 && v0)) {
            caml_debugger_cleanup_fork();
        }
    }
    return v0 * 2 + 1;
}

int unix_fstat(int param0) {
    char v0;
    unsigned int v1;
    unsigned int v2;
    int v3;
    unsigned int v4;
    int v5;
    int v6;
    int v7 = v5;
    →__fxstat64(3, param0 >> 1, &v0);
    if(v4 == -1) {
        uerror("fstat", 0);
    }
    if(v1 < 0x80000000 && ((int)v1 > 0 || v2 > 0x3fffffff) && (unsigned int)(v3 & 0xf000) == 0x8000) {
        unix_error(75, "fstat", 0);
    }
    return stat_aux(v6, (int*)&v0);
}

int unix_fstat_64(int param0) {
    char v0;
    unsigned int v1;
    int v2;
    int v3;
    int v4 = v2;
    →__fxstat64(3, param0 >> 1, &v0);
    if(v1 == -1) {
        uerror("fstat", 0);
    }
    return stat_aux(v3, (int*)&v0);
}

int unix_ftruncate(int param0, int param1) {
    unsigned int v0;
    →ftruncate64(param0 >> 1, param1 >> 1, (param1 >> 1) >> 31);
    if(v0 == -1) {
        uerror("ftruncate", 0);
    }
    return 1;
}

int unix_ftruncate_64(int param0, int param1) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    →ftruncate64(param0 >> 1, *(int*)(param1 + 4), *(int*)(param1 + 8));
    if(v0 == -1) {
        uerror("ftruncate", 0);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* unix_getaddrinfo(int param0, int param1, unsigned int* param2) {
    int v0;
    int v1;
    unsigned int v2;
    unsigned int v3;
    char v4;
    int v5;
    int v6;
    int v7 = v1;
    unsigned int v8 = caml_local_roots;
    unsigned int v9 = caml_local_roots;
    unsigned int v10 = v8;
    int v11 = 1;
    int v12 = 3;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    unsigned int* result = NULL;
    unsigned int* ptr3 = NULL;
    int* ptr4 = NULL;
    int* ptr5 = &v10;
    caml_local_roots = &ptr5;
    int v13 = 1;
    int v14 = 3;
    int* ptr6 = &result;
    int* ptr7 = &ptr3;
    int* ptr8 = &ptr4;
    int v15 = caml_string_length(param0);
    int v16 = 0;
    if(v15) {
        v16 = caml_stat_alloc(v15 + 1);
        v0 = param0;
        →strcpy();
    }
    int v17 = caml_string_length(param1);
    int v18 = 0;
    if(v17) {
        v18 = caml_stat_alloc(v17 + 1);
        v0 = param1;
        →strcpy();
    }
    unsigned int v19 = 0;
    do {
        *(int*)(v19 + &v5) = 0;
        v19 += 4;
    }
    while(v19 < 32);
    int v20 = 0;
    unsigned int* ptr9 = param2;
    while(!((unsigned char)ptr9 & 0x1)) {
        unsigned int* ptr10 = *ptr9;
        ptr3 = *ptr9;
        if(!((unsigned char)ptr10 & 0x1)) {
            unsigned char v21 = *(unsigned char*)(ptr10 - 1);
            if(*(char*)(ptr10 - 1) == 1) {
                int v22 = *(int*)((*ptr10 >> 1) * 4 + (int)&socket_type_table);
            }
            else if(v21 == 2) {
                int v23 = *ptr10 >> 1;
            }
            else if(v21 < 1) {
                v20 = *(int*)((*ptr10 >> 1) * 4 + (int)&socket_domain_table);
            }
        }
        else {
            int* ptr11 = (int*)((int)ptr10 >> 1);
            if(ptr11 == 1) {
                v5 |= 2;
            }
            else if(ptr11 == 2) {
                v5 |= 1;
            }
            else if(!ptr11) {
                v5 |= 4;
            }
        }
        ptr9 = *(param2 + 1);
        param2 = *(param2 + 1);
    }
    caml_enter_blocking_section();
    →getaddrinfo(v16, v18, &v5, &v6);
    unsigned int v24 = v2;
    caml_leave_blocking_section();
    if(v16) {
        caml_stat_free(v16);
    }
    if(v18) {
        caml_stat_free(v18);
    }
    result = (unsigned int*)0x1;
    if(!v24) {
        int v25 = v6;
        if(v25) {
            int* ptr12 = &v3;
            do {
                unsigned int v26 = caml_local_roots;
                v24 = caml_local_roots;
                int* ptr13 = NULL;
                int v27 = 0;
                int v28 = 0;
                v3 = v26;
                caml_local_roots = ptr12;
                int v29 = 1;
                int v30 = 3;
                int* ptr14 = &ptr13;
                int* ptr15 = &v27;
                int* ptr16 = &v28;
                int v31 = *(int*)(v25 + 16);
                int v32 = (unsigned int)v31 <= 112 ? v31: 112;
                int v33 = &v4;
                →memcpy(v33, *(int*)(v25 + 20), v32);
                v27 = alloc_sockaddr((unsigned short*)v33, v32, -1);
                int v34 = *(int*)(v25 + 24);
                v28 = caml_copy_string(v34 ? v34: &gvar_8071A88);
                int* ptr17 = (int*)/*BAD_CALL!*/ caml_alloc_small(5, 0);
                ptr13 = ptr17;
                int v35 = 0;
                int v36 = 3;
                v0 = &socket_domain_table;
                int v37 = cst_to_constr(*(unsigned int*)(v25 + 4), (unsigned int*)&socket_domain_table, 3, 0);
                *ptr17 = v37;
                int* ptr18 = ptr13 + 1;
                v35 = 0;
                v36 = 4;
                v0 = &socket_type_table;
                int v38 = cst_to_constr(*(unsigned int*)(v25 + 8), (unsigned int*)&socket_type_table, 4, 0);
                *ptr18 = v38;
                *(ptr13 + 2) = *(int*)(v25 + 12) * 2 + 1;
                *(ptr13 + 3) = v27;
                *(ptr13 + 4) = v28;
                caml_local_roots = v24;
                ptr4 = ptr13;
                unsigned int* ptr19 = (unsigned int*)caml_alloc_small(2, 0);
                ptr3 = ptr19;
                *ptr19 = ptr4;
                *(ptr3 + 1) = result;
                result = ptr3;
                v25 = *(int*)(v25 + 28);
            }
            while(v25);
        }
        →freeaddrinfo(v6);
    }
    caml_local_roots = v9;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_getcwd() {
    char v0;
    int v1;
    int v2;
    int v3 = v2;
    →getcwd(&v0, 0x1000);
    if(!v1) {
        uerror("getcwd", 0);
    }
    return caml_copy_string(&v0);
}

int unix_getegid() {
    int v0;
    →getegid();
    return v0 * 2 + 1;
}

int unix_geteuid() {
    int v0;
    →geteuid();
    return v0 * 2 + 1;
}

int unix_getgid() {
    int v0;
    →getgid();
    return v0 * 2 + 1;
}

int unix_getgrgid(int param0) {
    int v0;
    →getgrgid(param0 >> 1);
    if(!v0) {
        caml_raise_not_found();
    }
    return alloc_group_entry();
}

int unix_getgrnam(int param0) {
    int v0;
    →getgrnam(param0);
    if(!v0) {
        caml_raise_not_found();
    }
    return alloc_group_entry();
}

int unix_getgroups() {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4 = v3;
    →getgroups(0x10000, &v1);
    if(v2 == -1) {
        v0 = uerror("getgroups", 0);
    }
    int result = caml_alloc_tuple(v0);
    if((int)v2 > 0) {
        unsigned int v5 = 0;
        do {
            *(int*)(v5 * 4 + result) = *(int*)(v5 * 4 + &v1) * 2 + 1;
            ++v5;
        }
        while(v2 != v5);
    }
    return result;
}

int unix_gethostbyaddr(int* param0) {
    char v0;
    int v1;
    char v2;
    char v3;
    int v4;
    int v5;
    int v6 = v5;
    int v7 = *param0;
    caml_enter_blocking_section();
    →gethostbyaddr_r(&v7, 4, 2, &v0, &v2, 10000, &v1, &v3);
    caml_leave_blocking_section();
    if(v4 || !v1) {
        caml_raise_not_found();
    }
    return alloc_host_entry();
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_gethostbyname(int param0) {
    char v0;
    int v1;
    char v2;
    int v3;
    int v4;
    int v5 = v4;
    int v6 = caml_string_length(param0);
    int v7 = caml_stat_alloc(v6 + 1);
    →strcpy();
    caml_enter_blocking_section();
    →__h_errno_location();
    →gethostbyname_r(v7, &v0, &v2, 10000, &v1, v3);
    caml_leave_blocking_section();
    if(v3) {
        v1 = 0;
    }
    caml_stat_free(v7);
    if(!v1) {
        caml_raise_not_found();
    }
    return alloc_host_entry();
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_gethostname() {
    char v0;
    int v1;
    int v2 = v1;
    →gethostname(&v0, 64);
    char v3 = 0;
    return caml_copy_string(&v0);
}

int unix_getitimer(int param0) {
    char v0;
    unsigned int v1;
    int v2;
    int v3 = v2;
    →getitimer(*(int*)((param0 >> 1) * 4 + (int)&itimers), &v0);
    if(v1 == -1) {
        uerror("getitimer", 0);
    }
    return unix_convert_itimer();
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_getlogin() {
    int v0;
    int v1;
    →getlogin();
    if(!v1) {
        v0 = unix_error(2, "getlogin", 0);
    }
    return caml_copy_string(v0);
}

int* unix_getnameinfo(int param0, int* param1) {
    unsigned int v0;
    char v1;
    int v2;
    int v3;
    char v4;
    char v5;
    int v6;
    int v7 = v6;
    unsigned int v8 = caml_local_roots;
    int v9 = 0;
    int v10 = 0;
    int* result = NULL;
    caml_local_roots = &v0;
    int v11 = 1;
    int v12 = 3;
    int* ptr0 = &v9;
    int* ptr1 = &v10;
    int* ptr2 = &result;
    get_sockaddr(param0, &v1, &v3);
    int v13 = caml_convert_flag_list(param1, &getnameinfo_flag_table);
    caml_enter_blocking_section();
    →getnameinfo((int)&v1, v3, &v4, 0x1000, &v5, 0x400, v13);
    caml_leave_blocking_section();
    if(v2) {
        caml_raise_not_found();
    }
    v9 = caml_copy_string(&v4);
    v10 = caml_copy_string(&v5);
    int* ptr3 = (int*)caml_alloc_small(2, 0);
    result = ptr3;
    *ptr3 = v9;
    *(result + 1) = v10;
    caml_local_roots = v8;
    return result;
}

int unix_getpeername(int param0) {
    char v0;
    unsigned int v1;
    int v2;
    int v3 = v2;
    int v4 = 112;
    →getpeername(param0 >> 1, &v0, &v4);
    if(v1 == -1) {
        uerror("getpeername", 0);
    }
    return alloc_sockaddr((unsigned short*)&v0, v4, -1);
}

int unix_getpid() {
    int v0;
    →getpid();
    return v0 * 2 + 1;
}

int unix_getppid() {
    int v0;
    →getppid();
    return v0 * 2 + 1;
}

int unix_getprotobyname(int param0) {
    int v0;
    →getprotobyname(param0);
    if(!v0) {
        caml_raise_not_found();
    }
    return alloc_proto_entry();
}

int unix_getprotobynumber(int param0) {
    int v0;
    →getprotobynumber(param0 >> 1);
    if(!v0) {
        caml_raise_not_found();
    }
    return alloc_proto_entry();
}

int unix_getpwnam(int param0) {
    int v0;
    →getpwnam(param0);
    if(!v0) {
        caml_raise_not_found();
    }
    return alloc_passwd_entry();
}

int unix_getpwuid(int param0) {
    int v0;
    →getpwuid(param0 >> 1);
    if(!v0) {
        caml_raise_not_found();
    }
    return alloc_passwd_entry();
}

int unix_getservbyname(int param0, int param1) {
    int v0;
    →getservbyname(param0, param1);
    if(!v0) {
        caml_raise_not_found();
    }
    return alloc_service_entry();
}

int unix_getservbyport(int param0, int param1) {
    int v0;
    →getservbyport((int)__ror__((unsigned short)(param0 >>> 1), 8), param1);
    if(!v0) {
        caml_raise_not_found();
    }
    return alloc_service_entry();
}

int unix_getsockname(int param0) {
    char v0;
    unsigned int v1;
    int v2;
    int v3 = v2;
    int v4 = 112;
    →getsockname(param0 >> 1, &v0, &v4);
    if(v1 == -1) {
        uerror("getsockname", 0);
    }
    return alloc_sockaddr((unsigned short*)&v0, v4, -1);
}

int unix_getsockopt(int param0, int param1, int param2) {
    int v0;
    int v1 = v0;
    int* ptr0 = (int*)((param2 >> 1) * 8 + *(int*)((unsigned int)(param0 >> 1) * 4 + (int)&sockopt_table));
    int v2 = param1;
    int v3 = *(ptr0 + 1);
    int v4 = *(ptr0 + 1);
    return unix_getsockopt_aux(*(int*)((unsigned int)(param0 >> 1) * 4 + (int)&getsockopt_fun_name), (unsigned int)(param0 >> 1), *ptr0, v3, param1);
}

int unix_getsockopt_aux(int param0, unsigned int param1, int param2, int param3, int param4) {
    char v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int* ptr0;
    char v11;
    char v12;
    int v13;
    char v14;
    unsigned int v15;
    int* ptr1 = &ptr0;
    int* ptr2 = &ptr0;
    int* ptr3 = &v13;
    char v16 = &v8 == 108;
    char v17 = (int)&v13 < 0;
    char v18 = __parity__((unsigned char)&v8 - 108);
    char v19 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&ptr0 ^ 0x68) ^ (int)&v13) >>> 4) & 0x1);
    char v20 = (unsigned int)&ptr0 < 104;
    char v21 = (int)(int*)((int)(int*)((int)&ptr0 ^ (int)&v13) & (int)(int*)((int)&ptr0 ^ 0x68)) < 0;
    int v22 = v10;
    int v23 = &loc_805FF89;
    int v24 = &loc_805FF89;
    int v25 = &_GLOBAL_OFFSET_TABLE_;
    char v26 = 0;
    char v27 = 0;
    char v28 = 0;
    char v29 = 0;
    char v30 = 0;
    char v31 = 0;
    int v32 = param0;
    unsigned int v33 = param1;
    char v34 = v33 == 4;
    char v35 = (int)v33 < 4;
    char v36 = __parity__((unsigned char)v33 - 4);
    char v37 = v33 < 4;
    char v38 = (((v33 - 4) ^ v33) & (v33 ^ 0x4)) < 0;
    char v39 = (((v33 - 4) ^ (v33 ^ 0x4)) >>> 4) & 0x1;
    if((v37 || v34)) {
        int v40 = &_GLOBAL_OFFSET_TABLE_;
        v7 = &_GLOBAL_OFFSET_TABLE_;
        v6 = &_GLOBAL_OFFSET_TABLE_ - *(int*)(v33 * 4 + 0x805ffa8);
        v5 = v6 ? 0: 1;
        v4 = v6 < 0;
        v3 = __parity__((unsigned char)v6);
        v2 = (((*(int*)(v33 * 4 + 0x805ffa8) ^ &_GLOBAL_OFFSET_TABLE_) ^ v6) >>> 4) & 0x1;
        v1 = *(unsigned int*)(v33 * 4 + 0x805ffa8) > &_GLOBAL_OFFSET_TABLE_;
        v0 = ((*(int*)(v33 * 4 + 0x805ffa8) ^ &_GLOBAL_OFFSET_TABLE_) & (v6 ^ &_GLOBAL_OFFSET_TABLE_)) < 0;
        jump v6;
    }
    int v41 = unix_error(22, v32, 0);
    int v42 = &v12;
    int v43 = &v11;
    int v44 = param3;
    int v45 = param2;
    int v46 = param4;
    int v47 = param4;
    int v48 = v46 >> 1;
    char v49 = v47 & 0x1;
    char v50 = 0;
    char v51 = v48 ? 0: 1;
    char v52 = v48 < 0;
    char v53 = __parity__((unsigned char)v48);
    ptr3 = &v9;
    →getsockopt(v48, v45, v44, &v11, &v12);
    char v54 = v15 == -1;
    char v55 = (int)v15 < -1;
    char v56 = __parity__(v14 - 0xff);
    char v57 = v15 < 0xffffffff;
    char v58 = (((v15 + 1) ^ v15) & ~v15) < 0;
    char v59 = (((v15 + 1) ^ ~v15) >>> 4) & 0x1;
    if(v54) {
        ptr3 = &v9;
        int v60 = uerror(v32, 0);
    }
    if(v33 <= 4) {
        int v61 = &_GLOBAL_OFFSET_TABLE_;
        v7 = &_GLOBAL_OFFSET_TABLE_;
        v6 = &_GLOBAL_OFFSET_TABLE_ - *(int*)(v33 * 4 + 134611012);
        v5 = v6 ? 0: 1;
        v4 = v6 < 0;
        v3 = __parity__((unsigned char)v6);
        v2 = (((*(int*)(v33 * 4 + 134611012) ^ &_GLOBAL_OFFSET_TABLE_) ^ v6) >>> 4) & 0x1;
        v1 = *(unsigned int*)(v33 * 4 + 134611012) > &_GLOBAL_OFFSET_TABLE_;
        v0 = ((*(int*)(v33 * 4 + 134611012) ^ &_GLOBAL_OFFSET_TABLE_) & (v6 ^ &_GLOBAL_OFFSET_TABLE_)) < 0;
        jump v6;
    }
    unix_error(22, v32, 0);
    return 1;
}

long long* unix_gettimeofday() {
    int v0;
    int v1;
    int v2;
    int v3;
    unsigned int v4;
    int v5;
    int v6 = v5;
    →gettimeofday(&v0, 0);
    if(v4 == -1) {
        uerror("gettimeofday", 0);
    }
    *(long long*)&v1 = (double)v0 + (double)v2 / 1000000.0;
    return caml_copy_double(*(double*)&v1, v3);
}

int unix_getuid() {
    int v0;
    →getuid();
    return v0 * 2 + 1;
}

int unix_gmtime(double* param0) {
    short v0;
    int v1;
    int v2;
    int v3 = v2;
    short v0 = fnstcw();
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    int v4 = (int)*param0;
    fldcw(v0);
    →gmtime(&v4);
    if(!v1) {
        unix_error(22, "gmtime", 0);
    }
    return alloc_tm();
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_inet_addr_of_string(int param0) {
    int result;
    char v0;
    char v1;
    int v2;
    int v3;
    int v4 = v3;
    →inet_pton(2, param0, &v0);
    if(v2 > 0) {
        result = alloc_inet_addr((int*)&v0);
    }
    else {
        →inet_pton(10, param0, &v1);
        result = v2 > 0 ? alloc_inet6_addr((int*)&v1): caml_failwith("inet_addr_of_string");
    }
    return result;
}

int unix_initgroups(int param0, int param1) {
    unsigned int v0;
    →initgroups(param0, param1 >> 1);
    if(v0 == -1) {
        uerror("initgroups", 0);
    }
    return 1;
}

int unix_isatty(int param0) {
    unsigned int v0;
    →isatty(param0 >> 1);
    return v0 < 1 ? 1: 3;
}

int unix_kill(int param0, int param1) {
    unsigned int v0;
    unsigned int v1 = caml_convert_signal_number((unsigned int)(param1 >> 1));
    →kill(param0 >> 1, (int)v1);
    if(v0 == -1) {
        uerror("kill", 0);
    }
    return 1;
}

int unix_link(int param0, int param1) {
    unsigned int v0;
    →link(param0, param1);
    if(v0 == -1) {
        uerror("link", param1);
    }
    return 1;
}

int unix_listen(int param0, int param1) {
    unsigned int v0;
    →listen(param0 >> 1, param1 >> 1);
    if(v0 == -1) {
        uerror("listen", 0);
    }
    return 1;
}

int unix_localtime(double* param0) {
    short v0;
    int v1;
    int v2;
    int v3 = v2;
    short v0 = fnstcw();
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    int v4 = (int)*param0;
    fldcw(v0);
    →localtime(&v4);
    if(!v1) {
        unix_error(22, "localtime", 0);
    }
    return alloc_tm();
}

unsigned int unix_lockf(int param0, int param1, int param2) {
    int v0;
    char v1;
    char v2;
    char v3;
    char v4;
    char v5;
    unsigned int v6;
    int v7;
    unsigned int v8;
    int v9;
    int* ptr0;
    int v10;
    int v11;
    int* ptr1;
    int* ptr2 = &ptr0;
    int v12 = v10;
    int* ptr3 = &v12;
    int* ptr4 = &v11;
    char v13 = &v9 == 60;
    char v14 = (int)&v11 < 0;
    char v15 = __parity__((unsigned char)&v9 - 60);
    char v16 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v12 ^ 0x30) ^ (int)&v11) >>> 4) & 0x1);
    char v17 = (unsigned int)&v12 < 48;
    char v18 = (int)(int*)((int)(int*)((int)&v12 ^ (int)&v11) & (int)(int*)((int)&v12 ^ 0x30)) < 0;
    int v19 = &loc_805E579;
    int v20 = &loc_805E579;
    int v21 = &_GLOBAL_OFFSET_TABLE_;
    char v22 = 0;
    char v23 = 0;
    char v24 = 0;
    char v25 = 0;
    char v26 = 0;
    char v27 = 0;
    int v28 = param2;
    int v29 = param0;
    int v30 = param0;
    int v31 = v29 >> 1;
    char v32 = v30 & 0x1;
    char v33 = 0;
    char v34 = v31 ? 0: 1;
    char v35 = v31 < 0;
    char v36 = __parity__((unsigned char)v31);
    short v37 = 1;
    int v38 = v28;
    unsigned int v39 = (unsigned int)(v28 >> 1);
    char v40 = v38 & 0x1;
    char v41 = 0;
    char v42 = v39 ? 0: 1;
    char v43 = v39 >= 0x80000000;
    char v44 = __parity__((unsigned char)v39);
    if(v43) {
        v8 = v39;
        unsigned int v45 = v39;
        unsigned int v46 = v39;
        int v47 = (int)(v45 >> 31);
        char v48 = (v46 >>> 30) & 0x1;
        char v49 = 0;
        char v50 = v47 ? 0: 1;
        char v51 = v47 < 0;
        char v52 = __parity__((unsigned char)v47);
        v7 = v47;
        unsigned int v53 = v39;
        unsigned int v54 = (unsigned int)(0 - v39);
        char v55 = v54 ? 0: 1;
        char v56 = v54 >= 0x80000000;
        char v57 = __parity__((unsigned char)v54);
        char v58 = v53 > 0;
        char v59 = (int)(v54 & v53) < 0;
        char v60 = ((v54 ^ v53) >>> 4) & 0x1;
        v6 = v54;
        unsigned int v61 = v54;
        unsigned int v62 = v54;
        int v63 = (int)(v61 >> 31);
        v5 = (v62 >>> 30) & 0x1;
        v4 = v59;
        v3 = v63 ? 0: 1;
        v2 = v63 < 0;
        v1 = __parity__((unsigned char)v63);
        v0 = v63;
    }
    else {
        v8 = 0;
        v7 = 0;
        v6 = v39;
        unsigned int v64 = v39;
        unsigned int v65 = v39;
        int v66 = (int)(v64 >> 31);
        v5 = (v65 >>> 30) & 0x1;
        v4 = 0;
        v3 = v66 ? 0: 1;
        v2 = v66 < 0;
        v1 = __parity__((unsigned char)v66);
        v0 = v66;
    }
    int v67 = param1;
    int v68 = param1;
    unsigned int v69 = (unsigned int)(v67 >> 1);
    char v70 = v68 & 0x1;
    char v71 = 0;
    char v72 = v69 ? 0: 1;
    char v73 = v69 >= 0x80000000;
    char v74 = __parity__((unsigned char)v69);
    char v75 = v69 == 5;
    char v76 = (int)v69 < 5;
    char v77 = __parity__((unsigned char)v69 - 5);
    char v78 = v69 < 5;
    char v79 = (((v69 - 5) ^ v69) & (v69 ^ 0x5)) < 0;
    char v80 = (((v69 - 5) ^ (v69 ^ 0x5)) >>> 4) & 0x1;
    if((v78 || v75)) {
        int v81 = &_GLOBAL_OFFSET_TABLE_;
        int v82 = &_GLOBAL_OFFSET_TABLE_;
        int v83 = &_GLOBAL_OFFSET_TABLE_ - *(int*)(v69 * 4 + 0x805e5e0);
        char v84 = v83 ? 0: 1;
        char v85 = v83 < 0;
        char v86 = __parity__((unsigned char)v83);
        char v87 = (((*(int*)(v69 * 4 + 0x805e5e0) ^ &_GLOBAL_OFFSET_TABLE_) ^ v83) >>> 4) & 0x1;
        char v88 = *(unsigned int*)(v69 * 4 + 0x805e5e0) > &_GLOBAL_OFFSET_TABLE_;
        char v89 = ((*(int*)(v69 * 4 + 0x805e5e0) ^ &_GLOBAL_OFFSET_TABLE_) & (v83 ^ &_GLOBAL_OFFSET_TABLE_)) < 0;
        jump v83;
    }
    →__errno_location();
    *ptr1 = 22;
    uerror("lockf", 0);
    return 1;
}

int unix_lseek(int param0, int param1, int param2) {
    unsigned int v0;
    int v1;
    caml_enter_blocking_section();
    →lseek64(param0 >> 1, param1 >> 1, (param1 >> 1) >> 31, *(int*)((param2 >> 1) * 4 + (int)&seek_command_table));
    caml_leave_blocking_section();
    if((v0 & v1) == -1) {
        uerror("lseek", 0);
    }
    if(v1 >= 0 && (v1 > 0 || v0 > 0x3fffffff)) {
        unix_error(75, "lseek", 0);
    }
    return v0 * 2 + 1;
}

int unix_lseek_64(int param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3 = v1;
    int v4 = *(int*)(param1 + 4);
    int v5 = *(int*)(param1 + 8);
    caml_enter_blocking_section();
    →lseek64(param0 >> 1, v4, v5, *(int*)((param2 >> 1) * 4 + (int)&seek_command_table));
    caml_leave_blocking_section();
    if((unsigned int)(v0 & v2) == -1) {
        uerror("lseek", 0);
    }
    return caml_copy_int64(v0, v2);
}

int unix_lstat(int param0) {
    char v0;
    unsigned int v1;
    unsigned int v2;
    int v3;
    int v4;
    unsigned int v5;
    int v6;
    int v7 = v4;
    →__lxstat64(3, param0, &v0);
    if(v5 == -1) {
        uerror("lstat", param0);
    }
    if(v1 < 0x80000000 && ((int)v1 > 0 || v2 > 0x3fffffff) && (unsigned int)(v3 & 0xf000) == 0x8000) {
        unix_error(75, "lstat", param0);
    }
    return stat_aux(v6, (int*)&v0);
}

int unix_lstat_64(int param0) {
    char v0;
    unsigned int v1;
    int v2;
    int v3;
    int v4 = v2;
    →__lxstat64(3, param0, &v0);
    if(v1 == -1) {
        uerror("lstat", param0);
    }
    return stat_aux(v3, (int*)&v0);
}

int unix_mkdir(int param0, int param1) {
    unsigned int v0;
    →mkdir(param0, param1 >> 1);
    if(v0 == -1) {
        uerror("mkdir", param0);
    }
    return 1;
}

int unix_mkfifo(int param0, int param1) {
    unsigned int v0;
    →mkfifo(param0, param1 >> 1);
    if(v0 == -1) {
        uerror("mkfifo", param0);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_mktime(int* param0) {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4 = v3;
    int v5 = 1;
    long long* ptr0 = (long long*)0x1;
    unsigned int v6 = caml_local_roots;
    caml_local_roots = &v6;
    int v7 = 1;
    int v8 = 2;
    int* ptr1 = &v5;
    int* ptr2 = &ptr0;
    int v9 = *param0 >> 1;
    int v10 = *(param0 + 1) >> 1;
    int v11 = *(param0 + 2) >> 1;
    int v12 = *(param0 + 3) >> 1;
    int v13 = *(param0 + 4) >> 1;
    int v14 = *(param0 + 5) >> 1;
    int v15 = *(param0 + 6) >> 1;
    int v16 = *(param0 + 7) >> 1;
    int v17 = -1;
    →mktime(&v9);
    if(v2 == -1) {
        unix_error(34, "mktime", 0);
    }
    v5 = alloc_tm();
    *(double*)&v0 = (double)v2;
    ptr0 = caml_copy_double(*(double*)&v0, v1);
    int result = caml_alloc_small(2, 0);
    *(long long**)result = ptr0;
    *(int*)(result + 4) = v5;
    caml_local_roots = v6;
    return result;
}

int unix_nice(int param0) {
    int v0;
    unsigned int* ptr0;
    int v1;
    int v2 = v1;
    →__errno_location();
    *ptr0 = 0;
    →nice(param0 >> 1);
    if(ptr0 == -1 && *ptr0) {
        v0 = uerror("nice", 0);
    }
    return v0 * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_open(int param0, int* param1, int param2) {
    unsigned int v0;
    int v1;
    int v2;
    int v3 = v2;
    unsigned int v4 = caml_local_roots;
    caml_local_roots = &v0;
    int v5 = 1;
    int v6 = 3;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int v7 = caml_convert_flag_list(param1, &open_flag_table);
    int v8 = caml_string_length(param0);
    int v9 = caml_stat_alloc(v8 + 1);
    →strcpy();
    caml_enter_blocking_section();
    →open64(v9, v7);
    caml_leave_blocking_section();
    caml_stat_free(v9);
    if(v1 == -1) {
        uerror("open", param0);
    }
    caml_local_roots = v4;
    return v1 * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_opendir(int param0) {
    int v0;
    →opendir(param0);
    if(!v0) {
        uerror("opendir", param0);
    }
    int result = caml_alloc_small(1, 251);
    *(int*)result = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_pipe() {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4 = v3;
    →pipe(&v0);
    if(v2 == -1) {
        uerror("pipe", 0);
    }
    int result = caml_alloc_small(2, 0);
    *(int*)result = v0 * 2 + 1;
    *(int*)(result + 4) = v1 * 2 + 1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_putenv(int param0, int param1) {
    unsigned int v0;
    unsigned int v1 = caml_string_length(param0);
    unsigned int v2 = caml_string_length(param1);
    unsigned int v3 = v2 + v1;
    int v4 = caml_stat_alloc(v2 + v1 + 2);
    →memmove();
    *(char*)(v4 + v1) = 61;
    →memmove();
    *(char*)(v4 + v3 + 1) = 0;
    →putenv(v4);
    if(v0 == -1) {
        uerror("putenv", param0);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_read(int param0, int param1, int param2, int param3) {
    char v0;
    unsigned int v1;
    int v2;
    int v3 = v2;
    unsigned int v4 = caml_local_roots;
    caml_local_roots = &v4;
    caml_enter_blocking_section();
    →read(param0 >> 1, &v0, param3 >> 1 <= 0x4000 ? param3 >> 1: 0x4000);
    caml_leave_blocking_section();
    if(v1 == -1) {
        uerror("read", 0);
    }
    →memmove();
    caml_local_roots = v4;
    return v1 * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_readdir(int* param0) {
    int v0;
    int v1;
    int v2;
    int v3 = v2;
    int v4 = *param0;
    if(!v4) {
        v4 = unix_error(9, "readdir", 0);
    }
    →readdir64(v4);
    if(!v1) {
        v0 = caml_raise_end_of_file();
    }
    return caml_copy_string(v0 + 19);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_readlink(int param0) {
    int v0;
    char v1;
    unsigned int v2;
    int v3;
    int v4 = v3;
    →readlink(param0, &v1, 0xfff);
    if(v2 == -1) {
        v0 = uerror("readlink", param0);
    }
    *(char*)(v0 + &v1) = 0;
    return caml_copy_string(&v1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_recv(int param0, int param1, int param2, int param3, int* param4) {
    char v0;
    unsigned int v1;
    int v2;
    int v3 = v2;
    int v4 = caml_convert_flag_list(param4, &msg_flag_table);
    unsigned int v5 = caml_local_roots;
    caml_local_roots = &v5;
    caml_enter_blocking_section();
    →recv(param0 >> 1, &v0, param3 >> 1 <= 0x4000 ? param3 >> 1: 0x4000, v4);
    caml_leave_blocking_section();
    if(v1 == -1) {
        uerror("recv", 0);
    }
    →memmove();
    caml_local_roots = v5;
    return v1 * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* unix_recvfrom(int param0, int param1, int param2, int param3, int* param4) {
    char v0;
    char v1;
    unsigned int v2;
    int v3;
    int v4 = v3;
    int v5 = 1;
    int v6 = caml_convert_flag_list(param4, &msg_flag_table);
    unsigned int v7 = caml_local_roots;
    caml_local_roots = &v7;
    int v8 = 112;
    caml_enter_blocking_section();
    →recvfrom(param0 >> 1, &v0, param3 >> 1 <= 0x4000 ? param3 >> 1: 0x4000, v6, &v1, &v8);
    caml_leave_blocking_section();
    if(v2 == -1) {
        uerror("recvfrom", 0);
    }
    →memmove();
    v5 = alloc_sockaddr((unsigned short*)&v1, v8, -1);
    int* result = (int*)caml_alloc_small(2, 0);
    *result = v2 * 2 + 1;
    *(result + 1) = v5;
    caml_local_roots = v7;
    return result;
}

int unix_rename(int param0, int param1) {
    unsigned int v0;
    →rename(param0, param1);
    if(v0 == -1) {
        uerror("rename", param0);
    }
    return 1;
}

int unix_rewinddir(int* param0) {
    int v0;
    int v1 = v0;
    int v2 = *param0;
    if(!v2) {
        v2 = unix_error(9, "rewinddir", 0);
    }
    →rewinddir(v2);
    return 1;
}

int unix_rmdir(int param0) {
    unsigned int v0;
    →rmdir(param0);
    if(v0 == -1) {
        uerror("rmdir", param0);
    }
    return 1;
}

int* unix_select(int param0, int param1, int param2, double* param3) {
    char v0;
    char v1;
    char v2;
    unsigned int v3;
    int v4;
    int v5;
    int v6 = v4;
    unsigned int v7 = caml_local_roots;
    caml_local_roots = &v7;
    int v8 = 1;
    int v9 = 3;
    int* ptr0 = &param0;
    int* ptr1 = &param1;
    int* ptr2 = &param2;
    int v10 = -1;
    fdlist_to_fdset(&v10);
    fdlist_to_fdset(&v10);
    fdlist_to_fdset(&v10);
    fucomip(0.0, *param3);
    caml_enter_blocking_section();
    →select(v10 + 1, &v0, &v1, &v2, 0);
    caml_leave_blocking_section();
    if(v3 == -1) {
        uerror("select", 0);
    }
    param0 = fdset_to_fdlist(v5, &v0);
    param1 = fdset_to_fdlist(v5, &v1);
    param2 = fdset_to_fdlist(v5, &v2);
    int* result = (int*)caml_alloc_small(3, 0);
    *result = param0;
    *(result + 1) = param1;
    *(result + 2) = param2;
    caml_local_roots = v7;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_send(int param0, int param1, int param2, int param3, int* param4) {
    char v0;
    unsigned int v1;
    int v2;
    int v3 = v2;
    int v4 = caml_convert_flag_list(param4, &msg_flag_table);
    →memmove();
    caml_enter_blocking_section();
    →send(param0 >> 1, &v0, param3 >> 1 <= 0x4000 ? param3 >> 1: 0x4000, v4);
    caml_leave_blocking_section();
    if(v1 == -1) {
        uerror("send", 0);
    }
    return v1 * 2 + 1;
}

int unix_sendto(int* param0) {
    int v0;
    int v1 = v0;
    int v2 = *(param0 + 5);
    int v3 = *(param0 + 5);
    int* ptr0 = *(int**)(param0 + 4);
    int* ptr1 = *(int**)(param0 + 4);
    int v4 = *(param0 + 3);
    int v5 = *(param0 + 3);
    int v6 = *(param0 + 2);
    int v7 = *(param0 + 2);
    int v8 = *(param0 + 1);
    int v9 = *(param0 + 1);
    return unix_sendto_native(*param0, v8, v6, v4, ptr0, v2);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_sendto_native(int param0, int param1, int param2, int param3, int* param4, int param5) {
    char v0;
    int v1;
    char v2;
    unsigned int v3;
    int v4;
    int v5 = v4;
    int v6 = caml_convert_flag_list(param4, &msg_flag_table);
    get_sockaddr(param5, &v0, &v1);
    →memmove();
    caml_enter_blocking_section();
    →sendto(param0 >> 1, &v2, param3 >> 1 <= 0x4000 ? param3 >> 1: 0x4000, v6, (int)&v0, v1);
    caml_leave_blocking_section();
    if(v3 == -1) {
        uerror("sendto", 0);
    }
    return v3 * 2 + 1;
}

int unix_set_close_on_exec(int param0) {
    unsigned int v0;
    →fcntl(param0 >> 1, 1);
    if(v0 != -1) {
        →fcntl(param0 >> 1, 2);
        if(v0 == -1) {
            uerror("set_close_on_exec", 0);
            return 1;
        }
    }
    else {
        uerror("set_close_on_exec", 0);
    }
    return 1;
}

int unix_set_nonblock(int param0) {
    unsigned int v0;
    →fcntl(param0 >> 1, 3);
    if(v0 != -1) {
        →fcntl(param0 >> 1, 4);
        if(v0 == -1) {
            uerror("set_nonblock", 0);
            return 1;
        }
    }
    else {
        uerror("set_nonblock", 0);
    }
    return 1;
}

unsigned int unix_set_timeval(double param0, int param1) {
    int v0;
    int v1;
    double v2;
    __SyntheticTypeUnknown v3;
    __SyntheticTypeUnknownF v4;
    short v5;
    char v6;
    int v7;
    int* ptr0;
    int v8 = v7;
    __SyntheticTypeUnknownF v9 = param0;
    *(long long*)&v0 = v9;
    →modf(v0, v1, &v2);
    short v5 = fnstcw();
    short v10 = (unsigned short)((unsigned int)(unsigned char)v5 | ((unsigned int)12 << 8));
    fldcw((unsigned short)((unsigned int)(unsigned char)v5 | ((unsigned int)12 << 8)));
    unsigned int v11 = (int)v2;
    fldcw(v5);
    int v12 = (int)v2;
    *ptr0 = (int)v2;
    *(long long*)&v0 = v9 * 1000000.0;
    v3[v6] = →ceil(*(double*)&v0);
    v5 = fnstcw();
    fldcw((unsigned short)(unsigned char)v5 | ((unsigned short)12 << 8));
    fldcw(v5);
    *(unsigned int*)(ptr0 + 1) = (int)v4;
    if((int)v4 > 999999) {
        *ptr0 = v12 + 1;
        *(ptr0 + 1) = 0;
    }
    return (int)v4;
}

int unix_setgid(int param0) {
    unsigned int v0;
    →setgid(param0 >> 1);
    if(v0 == -1) {
        uerror("setgid", 0);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_setgroups(int param0) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    int v3 = param0;
    int v4 = *(int*)(v3 - 4) >>> 10;
    int v5 = caml_stat_alloc(v4 * 4);
    int v6 = v5;
    if(v4) {
        unsigned int v7 = 0;
        do {
            *(int*)(v7 * 4 + v5) = *(int*)(v7 * 4 + v3) >> 1;
            ++v7;
        }
        while(v7 < (unsigned int)v4);
    }
    →setgroups(v4, v6);
    caml_stat_free(v6);
    if(v0 == -1) {
        uerror("setgroups", 0);
    }
    return 1;
}

int unix_setitimer(int param0, double* param1) {
    int v0;
    int v1;
    char v2;
    char v3;
    unsigned int v4;
    int v5;
    int v6 = v5;
    *(long long*)&v0 = *param1;
    unix_set_timeval(*(double*)&v0, v1);
    *(long long*)&v0 = *(param1 + 1);
    unix_set_timeval(*(double*)&v0, v1);
    →setitimer(*(int*)((param0 >> 1) * 4 + (int)&itimers), &v2, &v3);
    if(v4 == -1) {
        uerror("setitimer", 0);
    }
    return unix_convert_itimer();
}

int unix_setsid() {
    int v0;
    →setsid();
    return v0 * 2 + 1;
}

int unix_setsockopt(int param0, int param1, int param2, float* param3) {
    int v0;
    int v1 = v0;
    int* ptr0 = (int*)((param2 >> 1) * 8 + *(int*)((unsigned int)(param0 >> 1) * 4 + (int)&sockopt_table));
    float* ptr1 = param3;
    int v2 = param1;
    int v3 = *(ptr0 + 1);
    int v4 = *(ptr0 + 1);
    return unix_setsockopt_aux(*(int*)((unsigned int)(param0 >> 1) * 4 + (int)&setsockopt_fun_name), (unsigned int)(param0 >> 1), *ptr0, v3, param1, param3);
}

int unix_setsockopt_aux(int param0, unsigned int param1, int param2, int param3, int param4, float* param5) {
    int v0;
    int v1;
    int* ptr0;
    unsigned int v2;
    short v3;
    int v4;
    int v5 = v4;
    if(param1 == 2) {
        ptr0 = (int*)((int)(int*)((int)param5 ^ 0x1) & 0x1);
        v0 = 8;
        if((int*)((int)(int*)((int)param5 ^ 0x1) & 0x1)) {
            v1 = *param5 >> 1;
            v0 = 8;
        }
    }
    else if(param1 == 3) {
        __SyntheticTypeUnknownF v6 = *(double*)param5;
        short v3 = fnstcw();
        fldcw((unsigned short)(unsigned char)v3 | ((unsigned short)12 << 8));
        fldcw(v3);
        ptr0 = (int)v6;
        fldcw((unsigned short)(unsigned char)v3 | ((unsigned short)12 << 8));
        v1 = (int)((v6 - v6) * 1000000.0);
        fldcw(v3);
        v0 = 8;
    }
    else if(param1 < 2) {
        ptr0 = (int*)((int)param5 >> 1);
        v0 = 4;
    }
    else {
        v0 = unix_error(22, param0, 0);
    }
    →setsockopt(param4 >> 1, param2, param3, &ptr0, v0);
    if(v2 == -1) {
        uerror(param0, 0);
    }
    return 1;
}

int unix_setuid(int param0) {
    unsigned int v0;
    →setuid(param0 >> 1);
    if(v0 == -1) {
        uerror("setuid", 0);
    }
    return 1;
}

int unix_shutdown(int param0, int param1) {
    unsigned int v0;
    →shutdown(param0 >> 1, *(int*)((param1 >> 1) * 4 + (int)&shutdown_command_table));
    if(v0 == -1) {
        uerror("shutdown", 0);
    }
    return 1;
}

int unix_sigpending() {
    char v0;
    unsigned int v1;
    int v2;
    int v3 = v2;
    →sigpending(&v0);
    if(v1 == -1) {
        uerror("sigpending", 0);
    }
    return encode_sigset();
}

int unix_sigprocmask(int param0, int param1) {
    char v0;
    char v1;
    unsigned int v2;
    int v3;
    int v4;
    int v5 = v3;
    int v6 = *(int*)((param0 >> 1) * 4 + (int)&sigprocmask_cmd);
    decode_sigset(v4, &v0);
    caml_enter_blocking_section();
    →sigprocmask(v6, &v0, &v1);
    caml_leave_blocking_section();
    if(v2 == -1) {
        uerror("sigprocmask", 0);
    }
    return encode_sigset();
}

int unix_sigsuspend(int param0) {
    char v0;
    unsigned int* ptr0;
    int v1;
    int v2;
    int v3 = v1;
    decode_sigset(v2, &v0);
    caml_enter_blocking_section();
    →sigsuspend(&v0);
    caml_leave_blocking_section();
    if(ptr0 == -1) {
        →__errno_location();
        if(*ptr0 != 4) {
            uerror("sigsuspend", 0);
        }
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_single_write(int param0, int param1, int param2, int param3) {
    unsigned int v0;
    char v1;
    unsigned int v2;
    int v3;
    int v4 = v3;
    unsigned int v5 = caml_local_roots;
    caml_local_roots = &v5;
    if(param3 >> 1 > 0) {
        →memmove();
        caml_enter_blocking_section();
        →write(param0 >> 1, &v1, param3 >> 1 <= 0x4000 ? param3 >> 1: 0x4000);
        v0 = v2;
        caml_leave_blocking_section();
        if(v0 == -1) {
            uerror("single_write", 0);
            v0 = 0;
            caml_local_roots = v5;
            return v0 * 2 + 1;
        }
    }
    else {
        v0 = 0;
    }
    caml_local_roots = v5;
    return v0 * 2 + 1;
}

int unix_sleep(int param0) {
    caml_enter_blocking_section();
    →sleep(param0 >> 1);
    caml_leave_blocking_section();
    return 1;
}

int unix_socket(int param0, int param1, int param2) {
    int v0;
    unsigned int v1;
    →socket(*(int*)((param0 >> 1) * 4 + (int)&socket_domain_table), *(int*)((param1 >> 1) * 4 + (int)&socket_type_table), param2 >> 1);
    if(v1 == -1) {
        v0 = uerror("socket", 0);
    }
    return v0 * 2 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_socketpair(int param0, int param1, int param2) {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4 = v3;
    →socketpair(*(int*)((param0 >> 1) * 4 + (int)&socket_domain_table), *(int*)((param1 >> 1) * 4 + (int)&socket_type_table), param2 >> 1, &v0);
    if(v2 == -1) {
        uerror("socketpair", 0);
    }
    int result = caml_alloc_small(2, 0);
    *(int*)result = v0 * 2 + 1;
    *(int*)(result + 4) = v1 * 2 + 1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_stat(int param0) {
    char v0;
    unsigned int v1;
    unsigned int v2;
    int v3;
    int v4;
    unsigned int v5;
    int v6;
    int v7 = v4;
    →__xstat64(3, param0, &v0);
    if(v5 == -1) {
        uerror("stat", param0);
    }
    if(v1 < 0x80000000 && ((int)v1 > 0 || v2 > 0x3fffffff) && (unsigned int)(v3 & 0xf000) == 0x8000) {
        unix_error(75, "stat", param0);
    }
    return stat_aux(v6, (int*)&v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_stat_64(int param0) {
    char v0;
    unsigned int v1;
    int v2;
    int v3;
    int v4 = v2;
    →__xstat64(3, param0, &v0);
    if(v1 == -1) {
        uerror("stat", param0);
    }
    return stat_aux(v3, (int*)&v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_string_of_inet_addr(int param0) {
    int v0;
    char v1;
    int v2;
    int v3;
    int v4 = v3;
    unsigned int v5 = caml_string_length(param0);
    if(v5 == 16) {
        →inet_ntop(10, param0, &v1, 64);
    }
    else {
        →inet_ntop(2, param0, &v1, 64);
    }
    if(!v2) {
        v0 = uerror("string_of_inet_addr", 0);
    }
    return caml_copy_string(v0);
}

int unix_symlink(int param0, int param1) {
    unsigned int v0;
    →symlink(param0, param1);
    if(v0 == -1) {
        uerror("symlink", param1);
    }
    return 1;
}

int unix_tcdrain(int param0) {
    unsigned int v0;
    →tcdrain(param0 >> 1);
    if(v0 == -1) {
        uerror("tcdrain", 0);
    }
    return 1;
}

int unix_tcflow(int param0, int param1) {
    unsigned int v0;
    →tcflow(param0 >> 1, *(int*)((param1 >> 1) * 4 + (int)&action_flag_table));
    if(v0 == -1) {
        uerror("tcflow", 0);
    }
    return 1;
}

int unix_tcflush(int param0, int param1) {
    unsigned int v0;
    →tcflush(param0 >> 1, *(int*)((param1 >> 1) * 4 + (int)&queue_flag_table));
    if(v0 == -1) {
        uerror("tcflush", 0);
    }
    return 1;
}

int unix_tcgetattr(int param0) {
    unsigned int v0;
    unsigned int v1;
    int v2;
    int v3 = v2;
    →tcgetattr(param0 >> 1, &terminal_status);
    if(v1 == -1) {
        uerror("tcgetattr", 0);
    }
    int result = caml_alloc_tuple(38);
    unsigned int v4 = *(int*)&terminal_io_descr;
    if(v4 != 4) {
        int v5 = result;
        unsigned int* ptr0 = (unsigned int*)&terminal_io_descr;
        unsigned int v6 = 0xffffeb54;
        int v7 = &terminal_status;
        while(1) {
            unsigned int* ptr1 = ptr0 + 1;
            if(v4 == 1) {
                int* ptr2 = *ptr1;
                int v8 = *(int*)(ptr1 + 1);
                unsigned int v9 = *(ptr1 + 2);
                int v10 = *(int*)(ptr1 + 3);
                int v11 = *(int*)(ptr1 + 3);
                unsigned int* ptr3 = ptr1 + 4;
                if((int)v9 > 0) {
                    unsigned int v12 = (unsigned int)(*ptr2 & v10);
                    ptr2 = NULL;
                    if(*ptr3 == v12) {
                        *(int**)v5 = (int*)((char*)((int)(int*)(v8 + (int)ptr2) * 2) + 1);
                        ptr1 = (unsigned int*)(v9 * 4 + (int)ptr3);
                        goto loc_8060C00;
                    }
                    else {
                        int* ptr4 = NULL;
                        do {
                            ptr4 = (int*)((char*)ptr4 + 1);
                            if((int)ptr4 >= (int)v9) {
                                ptr1 = (unsigned int*)(v9 * 4 + (int)ptr3);
                                goto loc_8060C00;
                            }
                        }
                        while(*((int*)((int)(int*)((int)ptr4 * 4) + (int)ptr0) + 5) != v12);
                        ptr2 = ptr4;
                        *(int**)v5 = (int*)((char*)((int)(int*)(v8 + (int)ptr2) * 2) + 1);
                    }
                }
                ptr1 = (unsigned int*)(v9 * 4 + (int)ptr3);
                goto loc_8060C00;
            }
            else {
                if((int)v4 <= 1) {
                    if(!v4) {
                        ptr0 = ptr1 + 1;
                        int v13 = (unsigned int)(**ptr1 & *ptr0) < 1 ? 1: 3;
                        ptr1 = ptr0 + 1;
                        *(int*)v5 = v13;
                    }
                }
                else if(v4 == 2) {
                    unsigned int v14 = *ptr1;
                    ++ptr1;
                    *(int*)v5 = 19201;
                    if(v14) {
                        v0 = 0;
                        if(v14 == 1) {
                            →cfgetospeed(v7);
                        }
                    }
                    else {
                        →cfgetispeed(v7);
                    }
                    ptr0 = (unsigned int*)0x1;
                    if(*(int*)((int)&_GLOBAL_OFFSET_TABLE_ + v6) == v0) {
                        ptr0 = NULL;
                        goto loc_8060BDF;
                    }
                    else {
                        while(*(int*)((int)(int*)((int)ptr0 * 8) + (int)&speedtable) != v0) {
                            ptr0 = (unsigned int*)((char*)ptr0 + 1);
                            if(ptr0 == 18) {
                                goto loc_8060C00;
                            }
                        }
                    loc_8060BDF:
                        *(int*)v5 = *(unsigned int*)((int)(int*)((int)ptr0 * 8) + (int)&gvar_8070CA4) * 2 + 1;
                    }
                }
                else if(v4 == 3) {
                    int v15 = *ptr1;
                    ++ptr1;
                    *(int*)v5 = (unsigned int)*(char*)(v15 + 134723633) * 2 + 1;
                }
            loc_8060C00:
                v4 = *ptr1;
                if(v4 == 4) {
                    return result;
                }
                v5 += 4;
                ptr0 = ptr1;
            }
        }
    }
    return result;
}

int unix_tcsendbreak(int param0, int param1) {
    unsigned int v0;
    →tcsendbreak(param0 >> 1, param1 >> 1);
    if(v0 == -1) {
        uerror("tcsendbreak", 0);
    }
    return 1;
}

int unix_tcsetattr(int param0, int param1, int* param2) {
    unsigned int v0;
    int v1;
    unsigned int v2;
    unsigned int v3;
    unsigned int* ptr0;
    int v4;
    unsigned int* ptr1;
    int* ptr2;
    unsigned int v5;
    int v6;
    int v7 = v6;
    int v8 = param0 >> 1;
    →tcgetattr(v8, &terminal_status);
    if(v5 == -1) {
        uerror("tcsetattr", 0);
    }
    unsigned int v9 = *(int*)&terminal_io_descr;
    if(v9 != 4) {
        ptr2 = param2;
        ptr1 = (unsigned int*)&terminal_io_descr;
        unsigned int* ptr3 = (unsigned int*)&speedtable;
        v4 = &terminal_status;
    loc_80608A3:
        ++ptr1;
        if(v9 == 1) {
            int* ptr4 = *ptr1;
            ptr0 = *(ptr1 + 2);
            int* ptr5 = (int*)(ptr1 + 3);
            int v10 = *ptr5;
            unsigned int v11 = (unsigned int)(*ptr2 >> 1) - *(int*)(ptr1 + 1);
            if(v11 < 0x80000000 && (int)v11 < (int)ptr0) {
                int* ptr6 = ptr5 + 1;
                *ptr4 = (~v10 & *ptr4) | *(int*)(v11 * 4 + (int)ptr6);
                ptr1 = (unsigned int*)((int)(int*)((int)ptr0 * 4) + (int)ptr6);
                goto loc_8060A05;
            }
            else {
                unix_error(22, "tcsetattr", 0);
            loc_8060949:
                v3 = *ptr1;
                v2 = (unsigned int)(*ptr2 >> 1);
                v1 = 1;
                if(v2 == 50) {
                    v1 = 0;
                    goto loc_8060971;
                }
                else {
                    ptr0 = ptr1;
                    ptr1 = ptr3;
                }
            }
        }
        else if((int)v9 <= 1) {
            if(!v9) {
                int* ptr7 = *ptr1;
                int v12 = *(int*)(ptr1 + 1);
                ptr1 += 2;
                *ptr7 = (*ptr2 >>> 1) ? *ptr7 | v12: ~v12 & *ptr7;
            }
            goto loc_8060A05;
        }
        else if(v9 == 2) {
            goto loc_8060949;
        }
        else {
            if(v9 == 3) {
                int v13 = *ptr1;
                ++ptr1;
                *(char*)(v13 + 134723633) = (unsigned char)(*ptr2 >>> 1);
            }
            goto loc_8060A05;
        }
    }
    else {
    loc_8060A34:
        →tcsetattr(v8, *(int*)((param1 >> 1) * 4 + (int)&when_flag_table), &terminal_status);
        if(v5 == -1) {
            uerror("tcsetattr", 0);
        }
        return 1;
    }
loc_806096A:
    if(*((int*)(v1 * 8 + (int)ptr1) + 1) == v2) {
        ptr1 = ptr0;
    loc_8060971:
        if(v3) {
            v0 = 0;
            if(v3 == 1) {
                →cfsetospeed(v4, *(int*)(v1 * 8 + (int)&speedtable));
                v0 = v5;
            }
        }
        else {
            →cfsetispeed(v4, *(int*)(v1 * 8 + (int)&speedtable));
            v0 = v5;
        }
        if(v0 != -1) {
            ++ptr1;
        }
        else {
            v1 = uerror("tcsetattr", 0);
            goto loc_80609CF;
        }
    loc_8060A05:
        v9 = *ptr1;
        if(v9 == 4) {
            goto loc_8060A34;
        }
        else {
            ++ptr2;
            goto loc_80608A3;
        }
    }
    else {
    loc_80609CF:
        ++v1;
        if(v1 != 18) {
            goto loc_806096A;
        }
        else {
            unix_error(22, "tcsetattr", 0);
            int v13 = *ptr1;
            ++ptr1;
            *(char*)(v13 + 134723633) = (unsigned char)(*ptr2 >>> 1);
            goto loc_8060A05;
        }
    }
}

long long* unix_time() {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4 = v3;
    →time(0);
    int v5 = v2;
    *(double*)&v0 = (double)v2;
    return caml_copy_double(*(double*)&v0, v1);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_times() {
    int v0;
    int v1;
    int v2;
    int v3;
    int result = caml_alloc_small(8, 254);
    →getrusage();
    *(long long*)result = (double)v0 + (double)v1 / 1000000.0;
    *(long long*)(result + 8) = (double)v2 + (double)v3 / 1000000.0;
    →getrusage();
    *(long long*)(result + 16) = (double)v0 + (double)v1 / 1000000.0;
    *(long long*)(result + 24) = (double)v2 + (double)v3 / 1000000.0;
    return result;
}

int unix_truncate(int param0, int param1) {
    unsigned int v0;
    →truncate64(param0, param1 >> 1, (param1 >> 1) >> 31);
    if(v0 == -1) {
        uerror("truncate", param0);
    }
    return 1;
}

int unix_truncate_64(int param0, int param1) {
    unsigned int v0;
    int v1;
    int v2 = v1;
    →truncate64(param0, *(int*)(param1 + 4), *(int*)(param1 + 8));
    if(v0 == -1) {
        uerror("truncate", param0);
    }
    return 1;
}

int unix_umask(int param0) {
    int v0;
    →umask(param0 >> 1);
    return v0 * 2 + 1;
}

int unix_unlink(int param0) {
    unsigned int v0;
    →unlink(param0);
    if(v0 == -1) {
        uerror("unlink", param0);
    }
    return 1;
}

int unix_utimes(int param0, double* param1, double* param2) {
    short v0;
    unsigned int v1;
    int v2;
    int v3 = v2;
    __SyntheticTypeUnknownF v4 = *param1;
    short v0 = fnstcw();
    short v5 = (unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8);
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    int v6 = (int)v4;
    fldcw(v0);
    int v7 = (int)v4;
    int v8 = (int)v4;
    fldcw((unsigned short)(unsigned char)v0 | ((unsigned short)12 << 8));
    fldcw(v0);
    if(v7 || (int)*param2) {
        v7 = &v8;
    }
    →utime(param0, v7);
    if(v1 == -1) {
        uerror("utimes", param0);
    }
    return 1;
}

int unix_wait() {
    int v0;
    unsigned int v1;
    int v2;
    int v3;
    int v4 = v2;
    caml_enter_blocking_section();
    →wait(&v0);
    caml_leave_blocking_section();
    if(v1 == -1) {
        uerror("wait", 0);
    }
    return alloc_process_status(v3, (unsigned char)v0);
}

int unix_waitpid(int* param0, int param1) {
    int v0;
    unsigned int v1;
    int v2;
    int v3;
    int v4 = v2;
    int v5 = caml_convert_flag_list(param0, &wait_flag_table);
    caml_enter_blocking_section();
    →waitpid(param1 >> 1, &v0, v5);
    caml_leave_blocking_section();
    if(v1 == -1) {
        uerror("waitpid", 0);
    }
    return alloc_process_status(v3, (unsigned char)v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int unix_write(int param0, int param1, int param2, int param3) {
    int v0;
    unsigned int* ptr0;
    char v1;
    int v2;
    int v3 = v2;
    unsigned int v4 = caml_local_roots;
    caml_local_roots = &v4;
    int v5 = 1;
    int v6 = 1;
    int* ptr1 = &param1;
    int v7 = param3 >> 1;
    if(v7 > 0) {
        int* ptr2 = (int*)(param2 >> 1);
        int v8 = param0 >> 1;
        v0 = 0;
        int v9 = &v1;
        while(1) {
            →memmove();
            caml_enter_blocking_section();
            →write(param0 >> 1, &v1, v7 <= 0x4000 ? v7: 0x4000);
            caml_leave_blocking_section();
            if(ptr0 == -1) {
                v7 = v0;
                →__errno_location();
                if(*ptr0 == 11 && v7 > 0) {
                    break;
                }
                else {
                    uerror("write", 0);
                }
            }
            v0 += (int)ptr0;
            v7 -= (int)ptr0;
            if(v7 <= 0) {
                break;
            }
            else {
                ptr2 = (int*)((int)ptr0 + (int)ptr2);
            }
        }
    }
    else {
        v0 = 0;
    }
    caml_local_roots = v4;
    return v0 * 2 + 1;
}

unsigned int unlink_channel() {
    unsigned int result;
    int v0 = *(int*)(result + 32);
    if(!v0) {
        result = *(unsigned int*)(caml_all_opened_channels + 28);
        caml_all_opened_channels = *(unsigned int*)(caml_all_opened_channels + 28);
        if(result) {
            *(int*)(result + 32) = 0;
        }
    }
    else {
        *(int*)(v0 + 28) = *(int*)(result + 28);
        v0 = *(int*)(result + 28);
        if(v0) {
            result = *(unsigned int*)(result + 32);
            *(unsigned int*)(v0 + 32) = result;
        }
    }
    return result;
}

int* write32() {
    int v0;
    if(extern_ptr + 4 > extern_limit) {
        grow_extern_output();
    }
    char* ptr0 = extern_ptr;
    *ptr0 = (unsigned char)(v0 >>> 24);
    *(ptr0 + 1) = (unsigned char)(v0 >>> 16);
    *(ptr0 + 2) = (unsigned char)(v0 >>> 8);
    *(ptr0 + 3) = (unsigned char)v0;
    extern_ptr = (int*)(ptr0 + 4);
    return (int*)(ptr0 + 4);
}

// Stale decompilation - Refresh this view to re-decompile this code
int writeblock(int param0, int param1) {
    int result;
    if(extern_ptr + param1 > extern_limit) {
        grow_extern_output();
    }
    →memmove();
    extern_ptr += param1;
    return result;
}

int* writecode16(int param0, int param1) {
    char v0;
    if(extern_ptr + 3 > extern_limit) {
        grow_extern_output();
    }
    char* ptr0 = extern_ptr;
    *ptr0 = v0;
    *(ptr0 + 1) = (unsigned char)(param1 >>> 8);
    *(ptr0 + 2) = (unsigned char)param1;
    extern_ptr = (int*)(ptr0 + 3);
    return (int*)(ptr0 + 3);
}

int* writecode32(int param0, int param1) {
    char v0;
    if(extern_ptr + 5 > extern_limit) {
        grow_extern_output();
    }
    char* ptr0 = extern_ptr;
    *ptr0 = v0;
    *(ptr0 + 1) = (unsigned char)(param1 >>> 24);
    *(ptr0 + 2) = (unsigned char)(param1 >>> 16);
    *(ptr0 + 3) = (unsigned char)(param1 >>> 8);
    *(ptr0 + 4) = (unsigned char)param1;
    extern_ptr = (int*)(ptr0 + 5);
    return (int*)(ptr0 + 5);
}

int* writecode8(int param0, int param1) {
    char v0;
    if(extern_ptr + 2 > extern_limit) {
        grow_extern_output();
    }
    char* ptr0 = extern_ptr;
    *ptr0 = v0;
    *(ptr0 + 1) = (unsigned char)param1;
    extern_ptr = (int*)(ptr0 + 2);
    return (int*)(ptr0 + 2);
}
